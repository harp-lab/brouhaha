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
void* _env13702 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13700 = prim_car(lst);
void* lst13703 = prim_cdr(lst);
void* x13701 = apply_prim__u43(lst13703);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13700);
arg_buffer[2] = x13701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13700))[0]);
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
void* _env13706 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13704 = prim_car(lst);
void* lst13707 = prim_cdr(lst);
void* x13705 = apply_prim__u45(lst13707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13704);
arg_buffer[2] = x13705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13704))[0]);
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
void* _env13710 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13708 = prim_car(lst);
void* lst13711 = prim_cdr(lst);
void* x13709 = apply_prim__u42(lst13711);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13708);
arg_buffer[2] = x13709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13708))[0]);
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
void* _env13714 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13712 = prim_car(lst);
void* lst13715 = prim_cdr(lst);
void* x13713 = apply_prim__u47(lst13715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13712);
arg_buffer[2] = x13713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13712))[0]);
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
void* _env13718 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13716 = prim_car(lst);
void* lst13719 = prim_cdr(lst);
void* x13717 = apply_prim__u61(lst13719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13716);
arg_buffer[2] = x13717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13716))[0]);
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
void* _env13722 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13720 = prim_car(lst);
void* lst13723 = prim_cdr(lst);
void* x13721 = apply_prim__u62(lst13723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13720);
arg_buffer[2] = x13721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13720))[0]);
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
void* _env13726 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13724 = prim_car(lst);
void* lst13727 = prim_cdr(lst);
void* x13725 = apply_prim__u60(lst13727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13724);
arg_buffer[2] = x13725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13724))[0]);
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
void* _env13730 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13728 = prim_car(lst);
void* lst13731 = prim_cdr(lst);
void* x13729 = apply_prim__u60_u61(lst13731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13728);
arg_buffer[2] = x13729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13728))[0]);
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
void* _env13734 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13732 = prim_car(lst);
void* lst13735 = prim_cdr(lst);
void* x13733 = apply_prim__u62_u61(lst13735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13732);
arg_buffer[2] = x13733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13732))[0]);
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
void* _env13738 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13736 = prim_car(lst);
void* lst13739 = prim_cdr(lst);
void* x13737 = apply_prim_modulo(lst13739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13736);
arg_buffer[2] = x13737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13736))[0]);
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
void* _env13742 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13740 = prim_car(lst);
void* lst13743 = prim_cdr(lst);
void* x13741 = apply_prim_null_u63(lst13743);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13740);
arg_buffer[2] = x13741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13740))[0]);
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
void* _env13746 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13744 = prim_car(lst);
void* lst13747 = prim_cdr(lst);
void* x13745 = apply_prim_equal_u63(lst13747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13744);
arg_buffer[2] = x13745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13744))[0]);
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
void* _env13750 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13748 = prim_car(lst);
void* lst13751 = prim_cdr(lst);
void* x13749 = apply_prim_eq_u63(lst13751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13748);
arg_buffer[2] = x13749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13748))[0]);
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
void* _env13754 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13752 = prim_car(lst);
void* lst13755 = prim_cdr(lst);
void* x13753 = apply_prim_cons(lst13755);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13752);
arg_buffer[2] = x13753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13752))[0]);
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
void* _env13758 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13756 = prim_car(lst);
void* lst13759 = prim_cdr(lst);
void* x13757 = apply_prim_car(lst13759);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13756);
arg_buffer[2] = x13757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13756))[0]);
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
void* _env13762 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13760 = prim_car(lst);
void* lst13763 = prim_cdr(lst);
void* x13761 = apply_prim_cdr(lst13763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13760);
arg_buffer[2] = x13761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13760))[0]);
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
void* _env13766 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13764 = prim_car(lst);
void* lst13767 = prim_cdr(lst);
void* x13765 = apply_prim_float_u45_u62int(lst13767);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13764);
arg_buffer[2] = x13765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13764))[0]);
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
void* _env13770 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13768 = prim_car(lst);
void* lst13771 = prim_cdr(lst);
void* x13769 = apply_prim_int_u45_u62float(lst13771);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13768);
arg_buffer[2] = x13769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13768))[0]);
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
void* _env13774 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13772 = prim_car(lst);
void* lst13775 = prim_cdr(lst);
void* x13773 = apply_prim_hash(lst13775);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13772);
arg_buffer[2] = x13773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13772))[0]);
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
void* _env13778 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13776 = prim_car(lst);
void* lst13779 = prim_cdr(lst);
void* x13777 = apply_prim_hash_u45ref(lst13779);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13776);
arg_buffer[2] = x13777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13776))[0]);
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
void* _env13782 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13780 = prim_car(lst);
void* lst13783 = prim_cdr(lst);
void* x13781 = apply_prim_hash_u45set(lst13783);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13780);
arg_buffer[2] = x13781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13780))[0]);
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
void* _env13786 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13784 = prim_car(lst);
void* lst13787 = prim_cdr(lst);
void* x13785 = apply_prim_hash_u45keys(lst13787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13784);
arg_buffer[2] = x13785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13784))[0]);
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
void* _env13790 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13788 = prim_car(lst);
void* lst13791 = prim_cdr(lst);
void* x13789 = apply_prim_hash_u45has_u45key_u63(lst13791);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13788);
arg_buffer[2] = x13789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13788))[0]);
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
void* _env13794 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13792 = prim_car(lst);
void* lst13795 = prim_cdr(lst);
void* x13793 = apply_prim_hash_u45count(lst13795);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13792);
arg_buffer[2] = x13793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13792))[0]);
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
void* _env13798 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13796 = prim_car(lst);
void* lst13799 = prim_cdr(lst);
void* x13797 = apply_prim_set(lst13799);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13796);
arg_buffer[2] = x13797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13796))[0]);
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
void* _env13802 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13800 = prim_car(lst);
void* lst13803 = prim_cdr(lst);
void* x13801 = apply_prim_set_u45_u62list(lst13803);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13800);
arg_buffer[2] = x13801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13800))[0]);
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
void* _env13806 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13804 = prim_car(lst);
void* lst13807 = prim_cdr(lst);
void* x13805 = apply_prim_list_u45_u62set(lst13807);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13804);
arg_buffer[2] = x13805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13804))[0]);
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
void* _env13810 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13808 = prim_car(lst);
void* lst13811 = prim_cdr(lst);
void* x13809 = apply_prim_set_u45add(lst13811);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13808);
arg_buffer[2] = x13809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13808))[0]);
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
void* _env13814 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13812 = prim_car(lst);
void* lst13815 = prim_cdr(lst);
void* x13813 = apply_prim_set_u45member_u63(lst13815);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13812);
arg_buffer[2] = x13813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13812))[0]);
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
void* _env13818 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13816 = prim_car(lst);
void* lst13819 = prim_cdr(lst);
void* x13817 = apply_prim_set_u45remove(lst13819);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13816);
arg_buffer[2] = x13817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13816))[0]);
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
void* _env13822 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13820 = prim_car(lst);
void* lst13823 = prim_cdr(lst);
void* x13821 = apply_prim_set_u45count(lst13823);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13820);
arg_buffer[2] = x13821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13820))[0]);
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
void* _env13826 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13824 = prim_car(lst);
void* lst13827 = prim_cdr(lst);
void* x13825 = apply_prim_string_u63(lst13827);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13824);
arg_buffer[2] = x13825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13824))[0]);
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
void* _env13830 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13828 = prim_car(lst);
void* lst13831 = prim_cdr(lst);
void* x13829 = apply_prim_string_u45length(lst13831);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13828);
arg_buffer[2] = x13829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13828))[0]);
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
void* _env13834 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13832 = prim_car(lst);
void* lst13835 = prim_cdr(lst);
void* x13833 = apply_prim_string_u45ref(lst13835);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13832);
arg_buffer[2] = x13833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13832))[0]);
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
void* _env13838 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13836 = prim_car(lst);
void* lst13839 = prim_cdr(lst);
void* x13837 = apply_prim_substring(lst13839);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13836);
arg_buffer[2] = x13837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13836))[0]);
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
void* _env13842 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13840 = prim_car(lst);
void* lst13843 = prim_cdr(lst);
void* x13841 = apply_prim_string_u45append(lst13843);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13840);
arg_buffer[2] = x13841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13840))[0]);
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
void* _env13846 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13844 = prim_car(lst);
void* lst13847 = prim_cdr(lst);
void* x13845 = apply_prim_string_u45_u62list(lst13847);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13844);
arg_buffer[2] = x13845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13844))[0]);
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
void* _env13850 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13848 = prim_car(lst);
void* lst13851 = prim_cdr(lst);
void* x13849 = apply_prim_exact_u45floor(lst13851);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13848);
arg_buffer[2] = x13849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13848))[0]);
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
void* _env13854 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13852 = prim_car(lst);
void* lst13855 = prim_cdr(lst);
void* x13853 = apply_prim_exact_u45ceiling(lst13855);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13852);
arg_buffer[2] = x13853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13852))[0]);
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
void* _env13858 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13856 = prim_car(lst);
void* lst13859 = prim_cdr(lst);
void* x13857 = apply_prim_exact_u45round(lst13859);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13856);
arg_buffer[2] = x13857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13856))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env13862 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13860 = prim_car(lst);
void* lst13863 = prim_cdr(lst);
void* x13861 = apply_prim_abs(lst13863);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13860);
arg_buffer[2] = x13861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13860))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env13866 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13864 = prim_car(lst);
void* lst13867 = prim_cdr(lst);
void* x13865 = apply_prim_max(lst13867);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13864);
arg_buffer[2] = x13865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13864))[0]);
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
void* _env13870 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13868 = prim_car(lst);
void* lst13871 = prim_cdr(lst);
void* x13869 = apply_prim_min(lst13871);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13868);
arg_buffer[2] = x13869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13868))[0]);
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
void* _env13874 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13872 = prim_car(lst);
void* lst13875 = prim_cdr(lst);
void* x13873 = apply_prim_expt(lst13875);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13872);
arg_buffer[2] = x13873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13872))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void* sqrt_fptr() // sqrt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env13878 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13876 = prim_car(lst);
void* lst13879 = prim_cdr(lst);
void* x13877 = apply_prim_sqrt(lst13879);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13876);
arg_buffer[2] = x13877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13876))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void* remainder_fptr() // remainder 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env13882 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13880 = prim_car(lst);
void* lst13883 = prim_cdr(lst);
void* x13881 = apply_prim_remainder(lst13883);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13880);
arg_buffer[2] = x13881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13880))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void* quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env13886 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13884 = prim_car(lst);
void* lst13887 = prim_cdr(lst);
void* x13885 = apply_prim_quotient(lst13887);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13884);
arg_buffer[2] = x13885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13884))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void* random_fptr() // random 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env13890 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13888 = prim_car(lst);
void* lst13891 = prim_cdr(lst);
void* x13889 = apply_prim_random(lst13891);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13888);
arg_buffer[2] = x13889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13888))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void* symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env13894 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13892 = prim_car(lst);
void* lst13895 = prim_cdr(lst);
void* x13893 = apply_prim_symbol_u63(lst13895);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13892);
arg_buffer[2] = x13893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13892))[0]);
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
void* _env13898 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13896 = prim_car(lst);
void* lst13899 = prim_cdr(lst);
void* x13897 = apply_prim_pair_u63(lst13899);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13896);
arg_buffer[2] = x13897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13896))[0]);
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
void* _env13902 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13900 = prim_car(lst);
void* lst13903 = prim_cdr(lst);
void* x13901 = apply_prim_positive_u63(lst13903);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13900);
arg_buffer[2] = x13901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13900))[0]);
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
void* _env13906 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont13904 = prim_car(lst);
void* lst13907 = prim_cdr(lst);
void* x13905 = apply_prim_negative_u63(lst13907);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13904);
arg_buffer[2] = x13905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13904))[0]);
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
void* _8463 = arg_buffer[1];
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

void* kont8388 = prim_car(x);
void* x8462 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8388);
arg_buffer[2] = x8462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8388))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8464_fptr() // lam8464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8465 = arg_buffer[1];
//reading env and args
void* a8316 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8389 = (decode_clo(env8465))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8465))[2];
//not do dummy comment
void* a8314 = (decode_clo(env8465))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8389;
arg_buffer[3] = a8314;
arg_buffer[4] = a8316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8464 = encode_clo(alloc_clo(lam8464_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8468 = arg_buffer[1];
//reading env and args
void* kont8389 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13908 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13908, "0", 10);
void* a8314 = encode_mpz(mpzvar13908);
mpz_t* mpzvar13909 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13909, "2", 10);
void* a8315 = encode_mpz(mpzvar13909);

//creating new closure instance
void** clo13911 = alloc_clo(lam8464_fptr, 3);

//setting env list
clo13911[1] = a8314;
clo13911[2] = equal_u63;
clo13911[3] = kont8389;
void* f8390 = encode_clo(clo13911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8390;
arg_buffer[3] = x;
arg_buffer[4] = a8315;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8469_fptr() // lam8469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8470 = arg_buffer[1];
//reading env and args
void* a8319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8470))[3];
//not do dummy comment
void* kont8391 = (decode_clo(env8470))[2];
//not do dummy comment
void* a8317 = (decode_clo(env8470))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8391;
arg_buffer[3] = a8317;
arg_buffer[4] = a8319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8469 = encode_clo(alloc_clo(lam8469_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8473 = arg_buffer[1];
//reading env and args
void* kont8391 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13912 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13912, "1", 10);
void* a8317 = encode_mpz(mpzvar13912);
mpz_t* mpzvar13913 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13913, "2", 10);
void* a8318 = encode_mpz(mpzvar13913);

//creating new closure instance
void** clo13915 = alloc_clo(lam8469_fptr, 3);

//setting env list
clo13915[1] = a8317;
clo13915[2] = kont8391;
clo13915[3] = equal_u63;
void* f8392 = encode_clo(clo13915);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8392;
arg_buffer[3] = x;
arg_buffer[4] = a8318;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8474_fptr() // lam8474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8475 = arg_buffer[1];
//reading env and args
void* xy8322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8393 = (decode_clo(env8475))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8393);
arg_buffer[2] = xy8322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8393))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8474 = encode_clo(alloc_clo(lam8474_fptr, 0));

void* lam8476_fptr() // lam8476 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8477 = arg_buffer[1];
//reading env and args
void* a8325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8323 = (decode_clo(env8477))[3];
//not do dummy comment
void* kont8393 = (decode_clo(env8477))[2];
//not do dummy comment
void* list_u45ref = (decode_clo(env8477))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list_u45ref);
arg_buffer[2] = kont8393;
arg_buffer[3] = a8323;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8476 = encode_clo(alloc_clo(lam8476_fptr, 0));

void* lam8479_fptr() // lam8479 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8480 = arg_buffer[1];
//reading env and args
void* a8323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env8480))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8480))[3];
//not do dummy comment
void* kont8393 = (decode_clo(env8480))[2];
//not do dummy comment
void* list_u45ref = (decode_clo(env8480))[1];
mpz_t* mpzvar13916 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13916, "1", 10);
void* a8324 = encode_mpz(mpzvar13916);

//creating new closure instance
void** clo13918 = alloc_clo(lam8476_fptr, 3);

//setting env list
clo13918[1] = list_u45ref;
clo13918[2] = kont8393;
clo13918[3] = a8323;
void* f8395 = encode_clo(clo13918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8395;
arg_buffer[3] = n;
arg_buffer[4] = a8324;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8479 = encode_clo(alloc_clo(lam8479_fptr, 0));

void* lam8481_fptr() // lam8481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8482 = arg_buffer[1];
//reading env and args
void* a8321 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8482))[7];
//not do dummy comment
void* lst = (decode_clo(env8482))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8482))[5];
//not do dummy comment
void* kont8393 = (decode_clo(env8482))[4];
//not do dummy comment
void* list_u45ref = (decode_clo(env8482))[3];
//not do dummy comment
void* n = (decode_clo(env8482))[2];
//not do dummy comment
void* car = (decode_clo(env8482))[1];

//if-clause
bool if_guard13919 = is_true(a8321);
if(if_guard13919)
{

//creating new closure instance
void** clo13921 = alloc_clo(lam8474_fptr, 1);

//setting env list
clo13921[1] = kont8393;
void* f8394 = encode_clo(clo13921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8394;
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
void** clo13923 = alloc_clo(lam8479_fptr, 4);

//setting env list
clo13923[1] = list_u45ref;
clo13923[2] = kont8393;
clo13923[3] = _u45;
clo13923[4] = n;
void* f8396 = encode_clo(clo13923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8396;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8481 = encode_clo(alloc_clo(lam8481_fptr, 0));

void* list_u45ref_fptr() // list-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8484 = arg_buffer[1];
//reading env and args
void* kont8393 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar13924 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13924, "0", 10);
void* a8320 = encode_mpz(mpzvar13924);

//creating new closure instance
void** clo13926 = alloc_clo(lam8481_fptr, 7);

//setting env list
clo13926[1] = car;
clo13926[2] = n;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo13926[3] = list_u45ref;
clo13926[4] = kont8393;
clo13926[5] = _u45;
clo13926[6] = lst;
clo13926[7] = cdr;
void* f8397 = encode_clo(clo13926);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8397;
arg_buffer[3] = a8320;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void* lam8487_fptr() // lam8487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8488 = arg_buffer[1];
//reading env and args
void* a8331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8398 = (decode_clo(env8488))[3];
//not do dummy comment
void* x = (decode_clo(env8488))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8488))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8398;
arg_buffer[3] = x;
arg_buffer[4] = a8331;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a8329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8490))[5];
//not do dummy comment
void* x = (decode_clo(env8490))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8490))[3];
//not do dummy comment
void* kont8398 = (decode_clo(env8490))[2];
//not do dummy comment
void* cdr = (decode_clo(env8490))[1];

//if-clause
bool if_guard13927 = is_true(a8329);
if(if_guard13927)
{
void* xy8330 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8398);
arg_buffer[2] = xy8330;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8398))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13929 = alloc_clo(lam8487_fptr, 3);

//setting env list
clo13929[1] = member_u63;
clo13929[2] = x;
clo13929[3] = kont8398;
void* f8399 = encode_clo(clo13929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8489 = encode_clo(alloc_clo(lam8489_fptr, 0));

void* lam8491_fptr() // lam8491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8492 = arg_buffer[1];
//reading env and args
void* a8328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8492))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8492))[5];
//not do dummy comment
void* x = (decode_clo(env8492))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8492))[3];
//not do dummy comment
void* kont8398 = (decode_clo(env8492))[2];
//not do dummy comment
void* cdr = (decode_clo(env8492))[1];

//creating new closure instance
void** clo13931 = alloc_clo(lam8489_fptr, 5);

//setting env list
clo13931[1] = cdr;
clo13931[2] = kont8398;
clo13931[3] = member_u63;
clo13931[4] = x;
clo13931[5] = lst;
void* f8400 = encode_clo(clo13931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8400;
arg_buffer[3] = a8328;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8491 = encode_clo(alloc_clo(lam8491_fptr, 0));

void* lam8493_fptr() // lam8493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8494 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8494))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env8494))[6];
//not do dummy comment
void* x = (decode_clo(env8494))[5];
//not do dummy comment
void* car = (decode_clo(env8494))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8494))[3];
//not do dummy comment
void* kont8398 = (decode_clo(env8494))[2];
//not do dummy comment
void* cdr = (decode_clo(env8494))[1];

//if-clause
bool if_guard13932 = is_true(a8326);
if(if_guard13932)
{
void* xy8327 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8398);
arg_buffer[2] = xy8327;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8398))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13934 = alloc_clo(lam8491_fptr, 6);

//setting env list
clo13934[1] = cdr;
clo13934[2] = kont8398;
clo13934[3] = member_u63;
clo13934[4] = x;
clo13934[5] = equal_u63;
clo13934[6] = lst;
void* f8401 = encode_clo(clo13934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8493 = encode_clo(alloc_clo(lam8493_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8495 = arg_buffer[1];
//reading env and args
void* kont8398 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13936 = alloc_clo(lam8493_fptr, 7);

//setting env list
clo13936[1] = cdr;
clo13936[2] = kont8398;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo13936[3] = member_u63;
clo13936[4] = car;
clo13936[5] = x;
clo13936[6] = equal_u63;
clo13936[7] = lst;
void* f8402 = encode_clo(clo13936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8496_fptr() // lam8496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8497 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8403 = (decode_clo(env8497))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8497))[2];
//not do dummy comment
void* a8333 = (decode_clo(env8497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8403;
arg_buffer[3] = a8333;
arg_buffer[4] = a8335;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8403 = (decode_clo(env8499))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8499))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8499))[3];
//not do dummy comment
void* cons = (decode_clo(env8499))[2];
//not do dummy comment
void* a8333 = (decode_clo(env8499))[1];

//creating new closure instance
void** clo13938 = alloc_clo(lam8496_fptr, 3);

//setting env list
clo13938[1] = a8333;
clo13938[2] = reverse_u45helper;
clo13938[3] = kont8403;
void* f8404 = encode_clo(clo13938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8404;
arg_buffer[3] = a8334;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
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
void* a8333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8501))[6];
//not do dummy comment
void* kont8403 = (decode_clo(env8501))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8501))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8501))[3];
//not do dummy comment
void* car = (decode_clo(env8501))[2];
//not do dummy comment
void* cons = (decode_clo(env8501))[1];

//creating new closure instance
void** clo13940 = alloc_clo(lam8498_fptr, 5);

//setting env list
clo13940[1] = a8333;
clo13940[2] = cons;
clo13940[3] = lst2;
clo13940[4] = reverse_u45helper;
clo13940[5] = kont8403;
void* f8405 = encode_clo(clo13940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8405;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a8332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8503))[7];
//not do dummy comment
void* lst = (decode_clo(env8503))[6];
//not do dummy comment
void* kont8403 = (decode_clo(env8503))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8503))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8503))[3];
//not do dummy comment
void* car = (decode_clo(env8503))[2];
//not do dummy comment
void* cons = (decode_clo(env8503))[1];

//if-clause
bool if_guard13941 = is_true(a8332);
if(if_guard13941)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8403);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8403))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13943 = alloc_clo(lam8500_fptr, 6);

//setting env list
clo13943[1] = cons;
clo13943[2] = car;
clo13943[3] = lst2;
clo13943[4] = reverse_u45helper;
clo13943[5] = kont8403;
clo13943[6] = lst;
void* f8406 = encode_clo(clo13943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8406;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8502 = encode_clo(alloc_clo(lam8502_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8504 = arg_buffer[1];
//reading env and args
void* kont8403 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13945 = alloc_clo(lam8502_fptr, 7);

//setting env list
clo13945[1] = cons;
clo13945[2] = car;
clo13945[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo13945[4] = reverse_u45helper;
clo13945[5] = kont8403;
clo13945[6] = lst;
clo13945[7] = cdr;
void* f8407 = encode_clo(clo13945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8407;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8506))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8506))[2];
//not do dummy comment
void* kont8408 = (decode_clo(env8506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8408;
arg_buffer[3] = lst;
arg_buffer[4] = a8336;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8507 = arg_buffer[1];
//reading env and args
void* kont8408 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13947 = alloc_clo(lam8505_fptr, 3);

//setting env list
clo13947[1] = kont8408;
clo13947[2] = reverse_u45helper;
clo13947[3] = lst;
void* f8409 = encode_clo(clo13947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* xy8339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8410 = (decode_clo(env8509))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8410);
arg_buffer[2] = xy8339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
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
void* a8344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8340 = (decode_clo(env8511))[4];
//not do dummy comment
void* a8342 = (decode_clo(env8511))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8511))[2];
//not do dummy comment
void* kont8410 = (decode_clo(env8511))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8410;
arg_buffer[3] = a8340;
arg_buffer[4] = a8342;
arg_buffer[5] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a8343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8340 = (decode_clo(env8513))[6];
//not do dummy comment
void* a8342 = (decode_clo(env8513))[5];
//not do dummy comment
void* cons = (decode_clo(env8513))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8513))[3];
//not do dummy comment
void* kont8410 = (decode_clo(env8513))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8513))[1];

//creating new closure instance
void** clo13949 = alloc_clo(lam8510_fptr, 4);

//setting env list
clo13949[1] = kont8410;
clo13949[2] = take_u45helper;
clo13949[3] = a8342;
clo13949[4] = a8340;
void* f8412 = encode_clo(clo13949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8412;
arg_buffer[3] = a8343;
arg_buffer[4] = lst2;
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
void* a8342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8515))[7];
//not do dummy comment
void* a8340 = (decode_clo(env8515))[6];
//not do dummy comment
void* car = (decode_clo(env8515))[5];
//not do dummy comment
void* cons = (decode_clo(env8515))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8515))[3];
//not do dummy comment
void* kont8410 = (decode_clo(env8515))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8515))[1];

//creating new closure instance
void** clo13951 = alloc_clo(lam8512_fptr, 6);

//setting env list
clo13951[1] = lst2;
clo13951[2] = kont8410;
clo13951[3] = take_u45helper;
clo13951[4] = cons;
clo13951[5] = a8342;
clo13951[6] = a8340;
void* f8413 = encode_clo(clo13951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8518))[8];
//not do dummy comment
void* cons = (decode_clo(env8518))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8518))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8518))[5];
//not do dummy comment
void* kont8410 = (decode_clo(env8518))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8518))[3];
//not do dummy comment
void* n = (decode_clo(env8518))[2];
//not do dummy comment
void* car = (decode_clo(env8518))[1];
mpz_t* mpzvar13952 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13952, "1", 10);
void* a8341 = encode_mpz(mpzvar13952);

//creating new closure instance
void** clo13954 = alloc_clo(lam8514_fptr, 7);

//setting env list
clo13954[1] = lst2;
clo13954[2] = kont8410;
clo13954[3] = take_u45helper;
clo13954[4] = cons;
clo13954[5] = car;
clo13954[6] = a8340;
clo13954[7] = lst;
void* f8414 = encode_clo(clo13954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8414;
arg_buffer[3] = n;
arg_buffer[4] = a8341;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a8338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8520))[10];
//not do dummy comment
void* lst = (decode_clo(env8520))[9];
//not do dummy comment
void* reverse = (decode_clo(env8520))[8];
//not do dummy comment
void* cons = (decode_clo(env8520))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8520))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8520))[5];
//not do dummy comment
void* kont8410 = (decode_clo(env8520))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8520))[3];
//not do dummy comment
void* n = (decode_clo(env8520))[2];
//not do dummy comment
void* car = (decode_clo(env8520))[1];

//if-clause
bool if_guard13955 = is_true(a8338);
if(if_guard13955)
{

//creating new closure instance
void** clo13957 = alloc_clo(lam8508_fptr, 1);

//setting env list
clo13957[1] = kont8410;
void* f8411 = encode_clo(clo13957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8411;
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
void** clo13959 = alloc_clo(lam8517_fptr, 8);

//setting env list
clo13959[1] = car;
clo13959[2] = n;
clo13959[3] = lst2;
clo13959[4] = kont8410;
clo13959[5] = take_u45helper;
clo13959[6] = _u45;
clo13959[7] = cons;
clo13959[8] = lst;
void* f8415 = encode_clo(clo13959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8415;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8522 = arg_buffer[1];
//reading env and args
void* kont8410 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar13960 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13960, "0", 10);
void* a8337 = encode_mpz(mpzvar13960);

//creating new closure instance
void** clo13962 = alloc_clo(lam8519_fptr, 10);

//setting env list
clo13962[1] = car;
clo13962[2] = n;
clo13962[3] = lst2;
clo13962[4] = kont8410;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo13962[5] = take_u45helper;
clo13962[6] = _u45;
clo13962[7] = cons;
clo13962[8] = reverse;
clo13962[9] = lst;
clo13962[10] = cdr;
void* f8416 = encode_clo(clo13962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8416;
arg_buffer[3] = n;
arg_buffer[4] = a8337;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8524))[4];
//not do dummy comment
void* lst = (decode_clo(env8524))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8524))[2];
//not do dummy comment
void* n = (decode_clo(env8524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8417;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8525 = arg_buffer[1];
//reading env and args
void* kont8417 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13964 = alloc_clo(lam8523_fptr, 4);

//setting env list
clo13964[1] = n;
clo13964[2] = take_u45helper;
clo13964[3] = lst;
clo13964[4] = kont8417;
void* f8418 = encode_clo(clo13964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8527_fptr() // lam8527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8528 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8419 = (decode_clo(env8528))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8528))[2];
//not do dummy comment
void* a8348 = (decode_clo(env8528))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8419;
arg_buffer[3] = a8348;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8530))[4];
//not do dummy comment
void* a8348 = (decode_clo(env8530))[3];
//not do dummy comment
void* kont8419 = (decode_clo(env8530))[2];
//not do dummy comment
void* length = (decode_clo(env8530))[1];

//creating new closure instance
void** clo13966 = alloc_clo(lam8527_fptr, 3);

//setting env list
clo13966[1] = a8348;
clo13966[2] = _u43;
clo13966[3] = kont8419;
void* f8420 = encode_clo(clo13966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8420;
arg_buffer[3] = a8349;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
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
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8533))[5];
//not do dummy comment
void* lst = (decode_clo(env8533))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8533))[3];
//not do dummy comment
void* kont8419 = (decode_clo(env8533))[2];
//not do dummy comment
void* length = (decode_clo(env8533))[1];

//if-clause
bool if_guard13967 = is_true(a8346);
if(if_guard13967)
{
mpz_t* mpzvar13968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13968, "0", 10);
void* xy8347 = encode_mpz(mpzvar13968);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8419);
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar13969 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13969, "1", 10);
void* a8348 = encode_mpz(mpzvar13969);

//creating new closure instance
void** clo13971 = alloc_clo(lam8529_fptr, 4);

//setting env list
clo13971[1] = length;
clo13971[2] = kont8419;
clo13971[3] = a8348;
clo13971[4] = _u43;
void* f8421 = encode_clo(clo13971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8419 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13973 = alloc_clo(lam8532_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo13973[1] = length;
clo13973[2] = kont8419;
clo13973[3] = _u43;
clo13973[4] = lst;
clo13973[5] = cdr;
void* f8422 = encode_clo(clo13973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* xy8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8423 = (decode_clo(env8536))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[2] = xy8352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8354 = (decode_clo(env8538))[3];
//not do dummy comment
void* kont8423 = (decode_clo(env8538))[2];
//not do dummy comment
void* cons = (decode_clo(env8538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8423;
arg_buffer[3] = a8354;
arg_buffer[4] = a8356;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8354 = (decode_clo(env8540))[5];
//not do dummy comment
void* map = (decode_clo(env8540))[4];
//not do dummy comment
void* kont8423 = (decode_clo(env8540))[3];
//not do dummy comment
void* proc = (decode_clo(env8540))[2];
//not do dummy comment
void* cons = (decode_clo(env8540))[1];

//creating new closure instance
void** clo13975 = alloc_clo(lam8537_fptr, 3);

//setting env list
clo13975[1] = cons;
clo13975[2] = kont8423;
clo13975[3] = a8354;
void* f8425 = encode_clo(clo13975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8425;
arg_buffer[3] = proc;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
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
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8542))[6];
//not do dummy comment
void* lst = (decode_clo(env8542))[5];
//not do dummy comment
void* map = (decode_clo(env8542))[4];
//not do dummy comment
void* kont8423 = (decode_clo(env8542))[3];
//not do dummy comment
void* proc = (decode_clo(env8542))[2];
//not do dummy comment
void* cons = (decode_clo(env8542))[1];

//creating new closure instance
void** clo13977 = alloc_clo(lam8539_fptr, 5);

//setting env list
clo13977[1] = cons;
clo13977[2] = proc;
clo13977[3] = kont8423;
clo13977[4] = map;
clo13977[5] = a8354;
void* f8426 = encode_clo(clo13977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void* lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8544))[6];
//not do dummy comment
void* lst = (decode_clo(env8544))[5];
//not do dummy comment
void* map = (decode_clo(env8544))[4];
//not do dummy comment
void* kont8423 = (decode_clo(env8544))[3];
//not do dummy comment
void* proc = (decode_clo(env8544))[2];
//not do dummy comment
void* cons = (decode_clo(env8544))[1];

//creating new closure instance
void** clo13979 = alloc_clo(lam8541_fptr, 6);

//setting env list
clo13979[1] = cons;
clo13979[2] = proc;
clo13979[3] = kont8423;
clo13979[4] = map;
clo13979[5] = lst;
clo13979[6] = cdr;
void* f8427 = encode_clo(clo13979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8427;
arg_buffer[3] = a8353;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8546))[8];
//not do dummy comment
void* map = (decode_clo(env8546))[7];
//not do dummy comment
void* kont8423 = (decode_clo(env8546))[6];
//not do dummy comment
void* proc = (decode_clo(env8546))[5];
//not do dummy comment
void* car = (decode_clo(env8546))[4];
//not do dummy comment
void* cons = (decode_clo(env8546))[3];
//not do dummy comment
void* list = (decode_clo(env8546))[2];
//not do dummy comment
void* cdr = (decode_clo(env8546))[1];

//if-clause
bool if_guard13980 = is_true(a8351);
if(if_guard13980)
{

//creating new closure instance
void** clo13982 = alloc_clo(lam8535_fptr, 1);

//setting env list
clo13982[1] = kont8423;
void* f8424 = encode_clo(clo13982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8424;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13984 = alloc_clo(lam8543_fptr, 6);

//setting env list
clo13984[1] = cons;
clo13984[2] = proc;
clo13984[3] = kont8423;
clo13984[4] = map;
clo13984[5] = lst;
clo13984[6] = cdr;
void* f8428 = encode_clo(clo13984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8547 = arg_buffer[1];
//reading env and args
void* kont8423 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13986 = alloc_clo(lam8545_fptr, 8);

//setting env list
clo13986[1] = cdr;
clo13986[2] = list;
clo13986[3] = cons;
clo13986[4] = car;
clo13986[5] = proc;
clo13986[6] = kont8423;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo13986[7] = map;
clo13986[8] = lst;
void* f8429 = encode_clo(clo13986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8429;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* xy8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8430 = (decode_clo(env8549))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = xy8358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
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
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8430 = (decode_clo(env8551))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8551))[2];
//not do dummy comment
void* cons = (decode_clo(env8551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8430;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8430 = (decode_clo(env8553))[5];
//not do dummy comment
void* op = (decode_clo(env8553))[4];
//not do dummy comment
void* a8361 = (decode_clo(env8553))[3];
//not do dummy comment
void* filter = (decode_clo(env8553))[2];
//not do dummy comment
void* cons = (decode_clo(env8553))[1];

//creating new closure instance
void** clo13988 = alloc_clo(lam8550_fptr, 3);

//setting env list
clo13988[1] = cons;
clo13988[2] = a8361;
clo13988[3] = kont8430;
void* f8432 = encode_clo(clo13988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8432;
arg_buffer[3] = op;
arg_buffer[4] = a8362;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8555))[6];
//not do dummy comment
void* op = (decode_clo(env8555))[5];
//not do dummy comment
void* filter = (decode_clo(env8555))[4];
//not do dummy comment
void* cons = (decode_clo(env8555))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8555))[2];
//not do dummy comment
void* cdr = (decode_clo(env8555))[1];

//creating new closure instance
void** clo13990 = alloc_clo(lam8552_fptr, 5);

//setting env list
clo13990[1] = cons;
clo13990[2] = filter;
clo13990[3] = a8361;
clo13990[4] = op;
clo13990[5] = kont8430;
void* f8433 = encode_clo(clo13990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8430 = (decode_clo(env8557))[3];
//not do dummy comment
void* op = (decode_clo(env8557))[2];
//not do dummy comment
void* filter = (decode_clo(env8557))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8430;
arg_buffer[3] = op;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8559))[7];
//not do dummy comment
void* op = (decode_clo(env8559))[6];
//not do dummy comment
void* cons = (decode_clo(env8559))[5];
//not do dummy comment
void* kont8430 = (decode_clo(env8559))[4];
//not do dummy comment
void* cdr = (decode_clo(env8559))[3];
//not do dummy comment
void* filter = (decode_clo(env8559))[2];
//not do dummy comment
void* car = (decode_clo(env8559))[1];

//if-clause
bool if_guard13991 = is_true(a8360);
if(if_guard13991)
{

//creating new closure instance
void** clo13993 = alloc_clo(lam8554_fptr, 6);

//setting env list
clo13993[1] = cdr;
clo13993[2] = kont8430;
clo13993[3] = cons;
clo13993[4] = filter;
clo13993[5] = op;
clo13993[6] = lst;
void* f8434 = encode_clo(clo13993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8434;
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
void** clo13995 = alloc_clo(lam8556_fptr, 3);

//setting env list
clo13995[1] = filter;
clo13995[2] = op;
clo13995[3] = kont8430;
void* f8435 = encode_clo(clo13995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8435;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8558 = encode_clo(alloc_clo(lam8558_fptr, 0));

void* lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8561))[7];
//not do dummy comment
void* op = (decode_clo(env8561))[6];
//not do dummy comment
void* cons = (decode_clo(env8561))[5];
//not do dummy comment
void* kont8430 = (decode_clo(env8561))[4];
//not do dummy comment
void* cdr = (decode_clo(env8561))[3];
//not do dummy comment
void* filter = (decode_clo(env8561))[2];
//not do dummy comment
void* car = (decode_clo(env8561))[1];

//creating new closure instance
void** clo13997 = alloc_clo(lam8558_fptr, 7);

//setting env list
clo13997[1] = car;
clo13997[2] = filter;
clo13997[3] = cdr;
clo13997[4] = kont8430;
clo13997[5] = cons;
clo13997[6] = op;
clo13997[7] = lst;
void* f8436 = encode_clo(clo13997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8436;
arg_buffer[3] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8563))[8];
//not do dummy comment
void* op = (decode_clo(env8563))[7];
//not do dummy comment
void* cons = (decode_clo(env8563))[6];
//not do dummy comment
void* list = (decode_clo(env8563))[5];
//not do dummy comment
void* kont8430 = (decode_clo(env8563))[4];
//not do dummy comment
void* cdr = (decode_clo(env8563))[3];
//not do dummy comment
void* filter = (decode_clo(env8563))[2];
//not do dummy comment
void* car = (decode_clo(env8563))[1];

//if-clause
bool if_guard13998 = is_true(a8357);
if(if_guard13998)
{

//creating new closure instance
void** clo14000 = alloc_clo(lam8548_fptr, 1);

//setting env list
clo14000[1] = kont8430;
void* f8431 = encode_clo(clo14000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8431;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14002 = alloc_clo(lam8560_fptr, 7);

//setting env list
clo14002[1] = car;
clo14002[2] = filter;
clo14002[3] = cdr;
clo14002[4] = kont8430;
clo14002[5] = cons;
clo14002[6] = op;
clo14002[7] = lst;
void* f8437 = encode_clo(clo14002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8564 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14004 = alloc_clo(lam8562_fptr, 8);

//setting env list
clo14004[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo14004[2] = filter;
clo14004[3] = cdr;
clo14004[4] = kont8430;
clo14004[5] = list;
clo14004[6] = cons;
clo14004[7] = op;
clo14004[8] = lst;
void* f8438 = encode_clo(clo14004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8367 = (decode_clo(env8566))[3];
//not do dummy comment
void* drop = (decode_clo(env8566))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8566))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8439;
arg_buffer[3] = a8367;
arg_buffer[4] = a8369;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8569))[4];
//not do dummy comment
void* kont8439 = (decode_clo(env8569))[3];
//not do dummy comment
void* n = (decode_clo(env8569))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8569))[1];
mpz_t* mpzvar14005 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14005, "1", 10);
void* a8368 = encode_mpz(mpzvar14005);

//creating new closure instance
void** clo14007 = alloc_clo(lam8565_fptr, 3);

//setting env list
clo14007[1] = kont8439;
clo14007[2] = drop;
clo14007[3] = a8367;
void* f8440 = encode_clo(clo14007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8440;
arg_buffer[3] = n;
arg_buffer[4] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8571))[6];
//not do dummy comment
void* kont8439 = (decode_clo(env8571))[5];
//not do dummy comment
void* n = (decode_clo(env8571))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8571))[3];
//not do dummy comment
void* lst = (decode_clo(env8571))[2];
//not do dummy comment
void* drop = (decode_clo(env8571))[1];

//if-clause
bool if_guard14008 = is_true(a8366);
if(if_guard14008)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8439);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14010 = alloc_clo(lam8568_fptr, 4);

//setting env list
clo14010[1] = _u45;
clo14010[2] = n;
clo14010[3] = kont8439;
clo14010[4] = drop;
void* f8441 = encode_clo(clo14010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8441;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8573 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar14011 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14011, "0", 10);
void* a8365 = encode_mpz(mpzvar14011);

//creating new closure instance
void** clo14013 = alloc_clo(lam8570_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo14013[1] = drop;
clo14013[2] = lst;
clo14013[3] = _u45;
clo14013[4] = n;
clo14013[5] = kont8439;
clo14013[6] = cdr;
void* f8442 = encode_clo(clo14013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8442;
arg_buffer[3] = n;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8372 = (decode_clo(env8575))[4];
//not do dummy comment
void* fun = (decode_clo(env8575))[3];
//not do dummy comment
void* kont8443 = (decode_clo(env8575))[2];
//not do dummy comment
void* foldl = (decode_clo(env8575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8443;
arg_buffer[3] = fun;
arg_buffer[4] = a8372;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8577))[5];
//not do dummy comment
void* lst = (decode_clo(env8577))[4];
//not do dummy comment
void* fun = (decode_clo(env8577))[3];
//not do dummy comment
void* kont8443 = (decode_clo(env8577))[2];
//not do dummy comment
void* foldl = (decode_clo(env8577))[1];

//creating new closure instance
void** clo14015 = alloc_clo(lam8574_fptr, 4);

//setting env list
clo14015[1] = foldl;
clo14015[2] = kont8443;
clo14015[3] = fun;
clo14015[4] = a8372;
void* f8444 = encode_clo(clo14015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8579))[6];
//not do dummy comment
void* lst = (decode_clo(env8579))[5];
//not do dummy comment
void* fun = (decode_clo(env8579))[4];
//not do dummy comment
void* acc = (decode_clo(env8579))[3];
//not do dummy comment
void* kont8443 = (decode_clo(env8579))[2];
//not do dummy comment
void* foldl = (decode_clo(env8579))[1];

//creating new closure instance
void** clo14017 = alloc_clo(lam8576_fptr, 5);

//setting env list
clo14017[1] = foldl;
clo14017[2] = kont8443;
clo14017[3] = fun;
clo14017[4] = lst;
clo14017[5] = cdr;
void* f8445 = encode_clo(clo14017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8445;
arg_buffer[3] = a8371;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8581))[7];
//not do dummy comment
void* lst = (decode_clo(env8581))[6];
//not do dummy comment
void* fun = (decode_clo(env8581))[5];
//not do dummy comment
void* acc = (decode_clo(env8581))[4];
//not do dummy comment
void* foldl = (decode_clo(env8581))[3];
//not do dummy comment
void* kont8443 = (decode_clo(env8581))[2];
//not do dummy comment
void* car = (decode_clo(env8581))[1];

//if-clause
bool if_guard14018 = is_true(a8370);
if(if_guard14018)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8443);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14020 = alloc_clo(lam8578_fptr, 6);

//setting env list
clo14020[1] = foldl;
clo14020[2] = kont8443;
clo14020[3] = acc;
clo14020[4] = fun;
clo14020[5] = lst;
clo14020[6] = cdr;
void* f8446 = encode_clo(clo14020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8582 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo14022 = alloc_clo(lam8580_fptr, 7);

//setting env list
clo14022[1] = car;
clo14022[2] = kont8443;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo14022[3] = foldl;
clo14022[4] = acc;
clo14022[5] = fun;
clo14022[6] = lst;
clo14022[7] = cdr;
void* f8447 = encode_clo(clo14022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8448 = (decode_clo(env8584))[3];
//not do dummy comment
void* a8375 = (decode_clo(env8584))[2];
//not do dummy comment
void* fun = (decode_clo(env8584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8448;
arg_buffer[3] = a8375;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8448 = (decode_clo(env8586))[5];
//not do dummy comment
void* foldr = (decode_clo(env8586))[4];
//not do dummy comment
void* a8375 = (decode_clo(env8586))[3];
//not do dummy comment
void* fun = (decode_clo(env8586))[2];
//not do dummy comment
void* acc = (decode_clo(env8586))[1];

//creating new closure instance
void** clo14024 = alloc_clo(lam8583_fptr, 3);

//setting env list
clo14024[1] = fun;
clo14024[2] = a8375;
clo14024[3] = kont8448;
void* f8449 = encode_clo(clo14024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8449;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
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
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8588))[6];
//not do dummy comment
void* kont8448 = (decode_clo(env8588))[5];
//not do dummy comment
void* fun = (decode_clo(env8588))[4];
//not do dummy comment
void* acc = (decode_clo(env8588))[3];
//not do dummy comment
void* foldr = (decode_clo(env8588))[2];
//not do dummy comment
void* lst = (decode_clo(env8588))[1];

//creating new closure instance
void** clo14026 = alloc_clo(lam8585_fptr, 5);

//setting env list
clo14026[1] = acc;
clo14026[2] = fun;
clo14026[3] = a8375;
clo14026[4] = foldr;
clo14026[5] = kont8448;
void* f8450 = encode_clo(clo14026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8590))[7];
//not do dummy comment
void* kont8448 = (decode_clo(env8590))[6];
//not do dummy comment
void* fun = (decode_clo(env8590))[5];
//not do dummy comment
void* acc = (decode_clo(env8590))[4];
//not do dummy comment
void* car = (decode_clo(env8590))[3];
//not do dummy comment
void* foldr = (decode_clo(env8590))[2];
//not do dummy comment
void* lst = (decode_clo(env8590))[1];

//if-clause
bool if_guard14027 = is_true(a8374);
if(if_guard14027)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14029 = alloc_clo(lam8587_fptr, 6);

//setting env list
clo14029[1] = lst;
clo14029[2] = foldr;
clo14029[3] = acc;
clo14029[4] = fun;
clo14029[5] = kont8448;
clo14029[6] = cdr;
void* f8451 = encode_clo(clo14029);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8451;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8591 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo14031 = alloc_clo(lam8589_fptr, 7);

//setting env list
clo14031[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo14031[2] = foldr;
clo14031[3] = car;
clo14031[4] = acc;
clo14031[5] = fun;
clo14031[6] = kont8448;
clo14031[7] = cdr;
void* f8452 = encode_clo(clo14031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8453 = (decode_clo(env8593))[3];
//not do dummy comment
void* a8379 = (decode_clo(env8593))[2];
//not do dummy comment
void* cons = (decode_clo(env8593))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8453;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8453 = (decode_clo(env8595))[5];
//not do dummy comment
void* append = (decode_clo(env8595))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8595))[3];
//not do dummy comment
void* a8379 = (decode_clo(env8595))[2];
//not do dummy comment
void* cons = (decode_clo(env8595))[1];

//creating new closure instance
void** clo14033 = alloc_clo(lam8592_fptr, 3);

//setting env list
clo14033[1] = cons;
clo14033[2] = a8379;
clo14033[3] = kont8453;
void* f8454 = encode_clo(clo14033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8454;
arg_buffer[3] = a8380;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8597))[6];
//not do dummy comment
void* kont8453 = (decode_clo(env8597))[5];
//not do dummy comment
void* append = (decode_clo(env8597))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8597))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8597))[2];
//not do dummy comment
void* cons = (decode_clo(env8597))[1];

//creating new closure instance
void** clo14035 = alloc_clo(lam8594_fptr, 5);

//setting env list
clo14035[1] = cons;
clo14035[2] = a8379;
clo14035[3] = lst2;
clo14035[4] = append;
clo14035[5] = kont8453;
void* f8455 = encode_clo(clo14035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8455;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8599))[7];
//not do dummy comment
void* kont8453 = (decode_clo(env8599))[6];
//not do dummy comment
void* append = (decode_clo(env8599))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8599))[4];
//not do dummy comment
void* cons = (decode_clo(env8599))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8599))[2];
//not do dummy comment
void* car = (decode_clo(env8599))[1];

//if-clause
bool if_guard14036 = is_true(a8378);
if(if_guard14036)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8453);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14038 = alloc_clo(lam8596_fptr, 6);

//setting env list
clo14038[1] = cons;
clo14038[2] = lst1;
clo14038[3] = lst2;
clo14038[4] = append;
clo14038[5] = kont8453;
clo14038[6] = cdr;
void* f8456 = encode_clo(clo14038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8456;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8600 = arg_buffer[1];
//reading env and args
void* kont8453 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14040 = alloc_clo(lam8598_fptr, 7);

//setting env list
clo14040[1] = car;
clo14040[2] = lst1;
clo14040[3] = cons;
clo14040[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo14040[5] = append;
clo14040[6] = kont8453;
clo14040[7] = cdr;
void* f8457 = encode_clo(clo14040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8457;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8602_fptr() // lam8602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list_u45ref = (decode_clo(env8603))[2];
//not do dummy comment
void* kont8458 = (decode_clo(env8603))[1];
mpz_t* mpzvar14041 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14041, "1", 10);
void* a8386 = encode_mpz(mpzvar14041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list_u45ref);
arg_buffer[2] = kont8458;
arg_buffer[3] = a8385;
arg_buffer[4] = a8386;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8607 = arg_buffer[1];
//reading env and args
void* kont8458 = arg_buffer[2];
//Dummy comment
void* a8382 = encode_str(new(GC) std::string("a"));
void* a8383 = encode_str(new(GC) std::string("b"));
void* a8384 = encode_str(new(GC) std::string("c"));

//creating new closure instance
void** clo14043 = alloc_clo(lam8602_fptr, 2);

//setting env list
clo14043[1] = kont8458;
clo14043[2] = list_u45ref;
void* f8459 = encode_clo(clo14043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8459;
arg_buffer[3] = a8382;
arg_buffer[4] = a8383;
arg_buffer[5] = a8384;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* xy8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8460 = (decode_clo(env8609))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8460);
arg_buffer[2] = xy8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8610 = arg_buffer[1];
//reading env and args
void* kont8460 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo14045 = alloc_clo(lam8608_fptr, 1);

//setting env list
clo14045[1] = kont8460;
void* f8461 = encode_clo(clo14045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8461;
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

