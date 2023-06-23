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
void* _29828 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2956729667 = prim_car(lst);
void* lst29668 = prim_cdr(lst);
void* x2947929669 = apply_prim__u43(lst29668);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2956729667);
arg_buffer[2] = x2947929669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2956729667))[0]);
//assign buffer size to numArgs
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
void* _29829 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2956929670 = prim_car(lst);
void* lst29671 = prim_cdr(lst);
void* x2948029672 = apply_prim__u45(lst29671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2956929670);
arg_buffer[2] = x2948029672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2956929670))[0]);
//assign buffer size to numArgs
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
void* _29830 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2957129673 = prim_car(lst);
void* lst29674 = prim_cdr(lst);
void* x2948129675 = apply_prim__u42(lst29674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957129673);
arg_buffer[2] = x2948129675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957129673))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* modulo_fptr() // modulo 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29831 = arg_buffer[1];
//reading env and args
void* kont29573 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2948229676 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29573);
arg_buffer[2] = x2948229676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29573))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void* _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29832 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2957429677 = prim_car(lst);
void* lst29678 = prim_cdr(lst);
void* x2948329679 = apply_prim__u47(lst29678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957429677);
arg_buffer[2] = x2948329679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957429677))[0]);
//assign buffer size to numArgs
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
void* _29833 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2957629680 = prim_car(lst);
void* lst29681 = prim_cdr(lst);
void* x2948429682 = apply_prim__u61(lst29681);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957629680);
arg_buffer[2] = x2948429682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957629680))[0]);
//assign buffer size to numArgs
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
void* _29834 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2957829683 = prim_car(lst);
void* lst29684 = prim_cdr(lst);
void* x2948529685 = apply_prim__u62(lst29684);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957829683);
arg_buffer[2] = x2948529685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957829683))[0]);
//assign buffer size to numArgs
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
void* _29835 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2958029686 = prim_car(lst);
void* lst29687 = prim_cdr(lst);
void* x2948629688 = apply_prim__u60(lst29687);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958029686);
arg_buffer[2] = x2948629688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958029686))[0]);
//assign buffer size to numArgs
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
void* _29836 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2958229689 = prim_car(lst);
void* lst29690 = prim_cdr(lst);
void* x2948729691 = apply_prim__u60_u61(lst29690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958229689);
arg_buffer[2] = x2948729691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958229689))[0]);
//assign buffer size to numArgs
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
void* _29837 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2958429692 = prim_car(lst);
void* lst29693 = prim_cdr(lst);
void* x2948829694 = apply_prim__u62_u61(lst29693);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958429692);
arg_buffer[2] = x2948829694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958429692))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void* null_u63_fptr() // null? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29838 = arg_buffer[1];
//reading env and args
void* kont29586 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2948929695 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29586);
arg_buffer[2] = x2948929695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29586))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29839 = arg_buffer[1];
//reading env and args
void* kont29587 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2949029696 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29587);
arg_buffer[2] = x2949029696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29587))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* eq_u63_fptr() // eq? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29840 = arg_buffer[1];
//reading env and args
void* kont29588 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2949129697 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29588);
arg_buffer[2] = x2949129697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29841 = arg_buffer[1];
//reading env and args
void* kont29589 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2949229698 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29589);
arg_buffer[2] = x2949229698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29589))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void* car_fptr() // car 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29842 = arg_buffer[1];
//reading env and args
void* kont29590 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2949329699 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29590);
arg_buffer[2] = x2949329699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29590))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29843 = arg_buffer[1];
//reading env and args
void* kont29591 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2949429700 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29591);
arg_buffer[2] = x2949429700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29591))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam29844_fptr() // lam29844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29845 = arg_buffer[1];
//reading env and args
void* a2949729704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2949529701 = (decode_clo(env29845))[3];
//not do dummy comment
void* kont29592 = (decode_clo(env29845))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env29845))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29592;
arg_buffer[3] = a2949529701;
arg_buffer[4] = a2949729704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29844 = encode_clo(alloc_clo(lam29844_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29848 = arg_buffer[1];
//reading env and args
void* kont29592 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30264 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30264, "0", 10);
void* a2949529701 = encode_mpz(mpzvar30264);
mpz_t* mpzvar30265 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30265, "2", 10);
void* a2949629702 = encode_mpz(mpzvar30265);

//creating new closure instance
void** clo30267 = alloc_clo(lam29844_fptr, 3);

//setting env list
clo30267[1] = equal_u63;
clo30267[2] = kont29592;
clo30267[3] = a2949529701;
void* f2959329703 = encode_clo(clo30267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2959329703;
arg_buffer[3] = x;
arg_buffer[4] = a2949629702;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam29849_fptr() // lam29849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29850 = arg_buffer[1];
//reading env and args
void* a2950029708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2949829705 = (decode_clo(env29850))[3];
//not do dummy comment
void* kont29594 = (decode_clo(env29850))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env29850))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29594;
arg_buffer[3] = a2949829705;
arg_buffer[4] = a2950029708;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29849 = encode_clo(alloc_clo(lam29849_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29853 = arg_buffer[1];
//reading env and args
void* kont29594 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30268 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30268, "1", 10);
void* a2949829705 = encode_mpz(mpzvar30268);
mpz_t* mpzvar30269 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30269, "2", 10);
void* a2949929706 = encode_mpz(mpzvar30269);

//creating new closure instance
void** clo30271 = alloc_clo(lam29849_fptr, 3);

//setting env list
clo30271[1] = equal_u63;
clo30271[2] = kont29594;
clo30271[3] = a2949829705;
void* f2959529707 = encode_clo(clo30271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2959529707;
arg_buffer[3] = x;
arg_buffer[4] = a2949929706;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29854 = arg_buffer[1];
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

void* kont2959629709 = prim_car(x);
void* x29710 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2959629709);
arg_buffer[2] = x29710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2959629709))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam29857_fptr() // lam29857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29858 = arg_buffer[1];
//reading env and args
void* a2950629720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29598 = (decode_clo(env29858))[3];
//not do dummy comment
void* x = (decode_clo(env29858))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29858))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont29598;
arg_buffer[3] = x;
arg_buffer[4] = a2950629720;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29857 = encode_clo(alloc_clo(lam29857_fptr, 0));

void* lam29859_fptr() // lam29859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29860 = arg_buffer[1];
//reading env and args
void* a2950429717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29860))[5];
//not do dummy comment
void* lst = (decode_clo(env29860))[4];
//not do dummy comment
void* kont29598 = (decode_clo(env29860))[3];
//not do dummy comment
void* x = (decode_clo(env29860))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29860))[1];

//if-clause
bool if_guard30272 = is_true(a2950429717);
if(if_guard30272)
{
void* x2950529718 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29598);
arg_buffer[2] = x2950529718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29598))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30274 = alloc_clo(lam29857_fptr, 3);

//setting env list
clo30274[1] = member_u63;
clo30274[2] = x;
clo30274[3] = kont29598;
void* f2959929719 = encode_clo(clo30274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2959929719;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29859 = encode_clo(alloc_clo(lam29859_fptr, 0));

void* lam29861_fptr() // lam29861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29862 = arg_buffer[1];
//reading env and args
void* a2950329715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29862))[6];
//not do dummy comment
void* lst = (decode_clo(env29862))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env29862))[4];
//not do dummy comment
void* kont29598 = (decode_clo(env29862))[3];
//not do dummy comment
void* x = (decode_clo(env29862))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29862))[1];

//creating new closure instance
void** clo30276 = alloc_clo(lam29859_fptr, 5);

//setting env list
clo30276[1] = member_u63;
clo30276[2] = x;
clo30276[3] = kont29598;
clo30276[4] = lst;
clo30276[5] = cdr;
void* f2960029716 = encode_clo(clo30276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2960029716;
arg_buffer[3] = a2950329715;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29861 = encode_clo(alloc_clo(lam29861_fptr, 0));

void* lam29863_fptr() // lam29863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29864 = arg_buffer[1];
//reading env and args
void* a2950129712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29864))[7];
//not do dummy comment
void* lst = (decode_clo(env29864))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env29864))[5];
//not do dummy comment
void* kont29598 = (decode_clo(env29864))[4];
//not do dummy comment
void* x = (decode_clo(env29864))[3];
//not do dummy comment
void* car = (decode_clo(env29864))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29864))[1];

//if-clause
bool if_guard30277 = is_true(a2950129712);
if(if_guard30277)
{
void* x2950229713 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29598);
arg_buffer[2] = x2950229713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29598))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30279 = alloc_clo(lam29861_fptr, 6);

//setting env list
clo30279[1] = member_u63;
clo30279[2] = x;
clo30279[3] = kont29598;
clo30279[4] = equal_u63;
clo30279[5] = lst;
clo30279[6] = cdr;
void* f2960129714 = encode_clo(clo30279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2960129714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29863 = encode_clo(alloc_clo(lam29863_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29865 = arg_buffer[1];
//reading env and args
void* kont29598 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30281 = alloc_clo(lam29863_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo30281[1] = member_u63;
clo30281[2] = car;
clo30281[3] = x;
clo30281[4] = kont29598;
clo30281[5] = equal_u63;
clo30281[6] = lst;
clo30281[7] = cdr;
void* f2960229711 = encode_clo(clo30281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2960229711;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam29866_fptr() // lam29866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29867 = arg_buffer[1];
//reading env and args
void* a2951029728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2950929726 = (decode_clo(env29867))[4];
//not do dummy comment
void* fun = (decode_clo(env29867))[3];
//not do dummy comment
void* kont29603 = (decode_clo(env29867))[2];
//not do dummy comment
void* foldl = (decode_clo(env29867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont29603;
arg_buffer[3] = fun;
arg_buffer[4] = a2950929726;
arg_buffer[5] = a2951029728;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29866 = encode_clo(alloc_clo(lam29866_fptr, 0));

void* lam29868_fptr() // lam29868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29869 = arg_buffer[1];
//reading env and args
void* a2950929726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29869))[5];
//not do dummy comment
void* lst = (decode_clo(env29869))[4];
//not do dummy comment
void* fun = (decode_clo(env29869))[3];
//not do dummy comment
void* kont29603 = (decode_clo(env29869))[2];
//not do dummy comment
void* foldl = (decode_clo(env29869))[1];

//creating new closure instance
void** clo30283 = alloc_clo(lam29866_fptr, 4);

//setting env list
clo30283[1] = foldl;
clo30283[2] = kont29603;
clo30283[3] = fun;
clo30283[4] = a2950929726;
void* f2960429727 = encode_clo(clo30283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2960429727;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29868 = encode_clo(alloc_clo(lam29868_fptr, 0));

void* lam29870_fptr() // lam29870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29871 = arg_buffer[1];
//reading env and args
void* a2950829724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29871))[6];
//not do dummy comment
void* lst = (decode_clo(env29871))[5];
//not do dummy comment
void* fun = (decode_clo(env29871))[4];
//not do dummy comment
void* acc = (decode_clo(env29871))[3];
//not do dummy comment
void* kont29603 = (decode_clo(env29871))[2];
//not do dummy comment
void* foldl = (decode_clo(env29871))[1];

//creating new closure instance
void** clo30285 = alloc_clo(lam29868_fptr, 5);

//setting env list
clo30285[1] = foldl;
clo30285[2] = kont29603;
clo30285[3] = fun;
clo30285[4] = lst;
clo30285[5] = cdr;
void* f2960529725 = encode_clo(clo30285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2960529725;
arg_buffer[3] = a2950829724;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29870 = encode_clo(alloc_clo(lam29870_fptr, 0));

void* lam29872_fptr() // lam29872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29873 = arg_buffer[1];
//reading env and args
void* a2950729722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29873))[7];
//not do dummy comment
void* lst = (decode_clo(env29873))[6];
//not do dummy comment
void* fun = (decode_clo(env29873))[5];
//not do dummy comment
void* acc = (decode_clo(env29873))[4];
//not do dummy comment
void* car = (decode_clo(env29873))[3];
//not do dummy comment
void* kont29603 = (decode_clo(env29873))[2];
//not do dummy comment
void* foldl = (decode_clo(env29873))[1];

//if-clause
bool if_guard30286 = is_true(a2950729722);
if(if_guard30286)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29603);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29603))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30288 = alloc_clo(lam29870_fptr, 6);

//setting env list
clo30288[1] = foldl;
clo30288[2] = kont29603;
clo30288[3] = acc;
clo30288[4] = fun;
clo30288[5] = lst;
clo30288[6] = cdr;
void* f2960629723 = encode_clo(clo30288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2960629723;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29872 = encode_clo(alloc_clo(lam29872_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29874 = arg_buffer[1];
//reading env and args
void* kont29603 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo30290 = alloc_clo(lam29872_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo30290[1] = foldl;
clo30290[2] = kont29603;
clo30290[3] = car;
clo30290[4] = acc;
clo30290[5] = fun;
clo30290[6] = lst;
clo30290[7] = cdr;
void* f2960729721 = encode_clo(clo30290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2960729721;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam29875_fptr() // lam29875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29876 = arg_buffer[1];
//reading env and args
void* a2951429736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29608 = (decode_clo(env29876))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29876))[2];
//not do dummy comment
void* a2951229732 = (decode_clo(env29876))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29608;
arg_buffer[3] = a2951229732;
arg_buffer[4] = a2951429736;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29875 = encode_clo(alloc_clo(lam29875_fptr, 0));

void* lam29877_fptr() // lam29877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29878 = arg_buffer[1];
//reading env and args
void* a2951329734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29608 = (decode_clo(env29878))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29878))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29878))[3];
//not do dummy comment
void* cons = (decode_clo(env29878))[2];
//not do dummy comment
void* a2951229732 = (decode_clo(env29878))[1];

//creating new closure instance
void** clo30292 = alloc_clo(lam29875_fptr, 3);

//setting env list
clo30292[1] = a2951229732;
clo30292[2] = reverse_u45helper;
clo30292[3] = kont29608;
void* f2960929735 = encode_clo(clo30292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2960929735;
arg_buffer[3] = a2951329734;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29877 = encode_clo(alloc_clo(lam29877_fptr, 0));

void* lam29879_fptr() // lam29879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29880 = arg_buffer[1];
//reading env and args
void* a2951229732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29608 = (decode_clo(env29880))[6];
//not do dummy comment
void* lst = (decode_clo(env29880))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29880))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29880))[3];
//not do dummy comment
void* car = (decode_clo(env29880))[2];
//not do dummy comment
void* cons = (decode_clo(env29880))[1];

//creating new closure instance
void** clo30294 = alloc_clo(lam29877_fptr, 5);

//setting env list
clo30294[1] = a2951229732;
clo30294[2] = cons;
clo30294[3] = lst2;
clo30294[4] = reverse_u45helper;
clo30294[5] = kont29608;
void* f2961029733 = encode_clo(clo30294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2961029733;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29879 = encode_clo(alloc_clo(lam29879_fptr, 0));

void* lam29881_fptr() // lam29881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29882 = arg_buffer[1];
//reading env and args
void* a2951129730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29882))[7];
//not do dummy comment
void* kont29608 = (decode_clo(env29882))[6];
//not do dummy comment
void* lst = (decode_clo(env29882))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29882))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29882))[3];
//not do dummy comment
void* car = (decode_clo(env29882))[2];
//not do dummy comment
void* cons = (decode_clo(env29882))[1];

//if-clause
bool if_guard30295 = is_true(a2951129730);
if(if_guard30295)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29608);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29608))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30297 = alloc_clo(lam29879_fptr, 6);

//setting env list
clo30297[1] = cons;
clo30297[2] = car;
clo30297[3] = lst2;
clo30297[4] = reverse_u45helper;
clo30297[5] = lst;
clo30297[6] = kont29608;
void* f2961129731 = encode_clo(clo30297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2961129731;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29881 = encode_clo(alloc_clo(lam29881_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29883 = arg_buffer[1];
//reading env and args
void* kont29608 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30299 = alloc_clo(lam29881_fptr, 7);

//setting env list
clo30299[1] = cons;
clo30299[2] = car;
clo30299[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo30299[4] = reverse_u45helper;
clo30299[5] = lst;
clo30299[6] = kont29608;
clo30299[7] = cdr;
void* f2961229729 = encode_clo(clo30299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2961229729;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam29884_fptr() // lam29884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29885 = arg_buffer[1];
//reading env and args
void* a2951529738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29885))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29885))[2];
//not do dummy comment
void* kont29613 = (decode_clo(env29885))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29613;
arg_buffer[3] = lst;
arg_buffer[4] = a2951529738;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29884 = encode_clo(alloc_clo(lam29884_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29886 = arg_buffer[1];
//reading env and args
void* kont29613 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo30301 = alloc_clo(lam29884_fptr, 3);

//setting env list
clo30301[1] = kont29613;
clo30301[2] = reverse_u45helper;
clo30301[3] = lst;
void* f2961429737 = encode_clo(clo30301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2961429737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam29887_fptr() // lam29887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29888 = arg_buffer[1];
//reading env and args
void* x2951829743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29615 = (decode_clo(env29888))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29615);
arg_buffer[2] = x2951829743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29615))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29887 = encode_clo(alloc_clo(lam29887_fptr, 0));

void* lam29889_fptr() // lam29889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29890 = arg_buffer[1];
//reading env and args
void* a2952329752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29615 = (decode_clo(env29890))[4];
//not do dummy comment
void* a2952129748 = (decode_clo(env29890))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29890))[2];
//not do dummy comment
void* a2951929745 = (decode_clo(env29890))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29615;
arg_buffer[3] = a2951929745;
arg_buffer[4] = a2952129748;
arg_buffer[5] = a2952329752;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29889 = encode_clo(alloc_clo(lam29889_fptr, 0));

void* lam29891_fptr() // lam29891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29892 = arg_buffer[1];
//reading env and args
void* a2952229750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29615 = (decode_clo(env29892))[6];
//not do dummy comment
void* cons = (decode_clo(env29892))[5];
//not do dummy comment
void* a2952129748 = (decode_clo(env29892))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env29892))[3];
//not do dummy comment
void* a2951929745 = (decode_clo(env29892))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29892))[1];

//creating new closure instance
void** clo30303 = alloc_clo(lam29889_fptr, 4);

//setting env list
clo30303[1] = a2951929745;
clo30303[2] = take_u45helper;
clo30303[3] = a2952129748;
clo30303[4] = kont29615;
void* f2961729751 = encode_clo(clo30303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2961729751;
arg_buffer[3] = a2952229750;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29891 = encode_clo(alloc_clo(lam29891_fptr, 0));

void* lam29893_fptr() // lam29893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29894 = arg_buffer[1];
//reading env and args
void* a2952129748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29894))[7];
//not do dummy comment
void* kont29615 = (decode_clo(env29894))[6];
//not do dummy comment
void* car = (decode_clo(env29894))[5];
//not do dummy comment
void* cons = (decode_clo(env29894))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env29894))[3];
//not do dummy comment
void* a2951929745 = (decode_clo(env29894))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29894))[1];

//creating new closure instance
void** clo30305 = alloc_clo(lam29891_fptr, 6);

//setting env list
clo30305[1] = lst2;
clo30305[2] = a2951929745;
clo30305[3] = take_u45helper;
clo30305[4] = a2952129748;
clo30305[5] = cons;
clo30305[6] = kont29615;
void* f2961829749 = encode_clo(clo30305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2961829749;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29893 = encode_clo(alloc_clo(lam29893_fptr, 0));

void* lam29896_fptr() // lam29896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29897 = arg_buffer[1];
//reading env and args
void* a2951929745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29897))[8];
//not do dummy comment
void* kont29615 = (decode_clo(env29897))[7];
//not do dummy comment
void* cons = (decode_clo(env29897))[6];
//not do dummy comment
void* _u45 = (decode_clo(env29897))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29897))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29897))[3];
//not do dummy comment
void* n = (decode_clo(env29897))[2];
//not do dummy comment
void* car = (decode_clo(env29897))[1];
mpz_t* mpzvar30306 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30306, "1", 10);
void* a2952029746 = encode_mpz(mpzvar30306);

//creating new closure instance
void** clo30308 = alloc_clo(lam29893_fptr, 7);

//setting env list
clo30308[1] = lst2;
clo30308[2] = a2951929745;
clo30308[3] = take_u45helper;
clo30308[4] = cons;
clo30308[5] = car;
clo30308[6] = kont29615;
clo30308[7] = lst;
void* f2961929747 = encode_clo(clo30308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2961929747;
arg_buffer[3] = n;
arg_buffer[4] = a2952029746;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29896 = encode_clo(alloc_clo(lam29896_fptr, 0));

void* lam29898_fptr() // lam29898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29899 = arg_buffer[1];
//reading env and args
void* a2951729741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29899))[10];
//not do dummy comment
void* lst = (decode_clo(env29899))[9];
//not do dummy comment
void* reverse = (decode_clo(env29899))[8];
//not do dummy comment
void* kont29615 = (decode_clo(env29899))[7];
//not do dummy comment
void* cons = (decode_clo(env29899))[6];
//not do dummy comment
void* _u45 = (decode_clo(env29899))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29899))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29899))[3];
//not do dummy comment
void* n = (decode_clo(env29899))[2];
//not do dummy comment
void* car = (decode_clo(env29899))[1];

//if-clause
bool if_guard30309 = is_true(a2951729741);
if(if_guard30309)
{

//creating new closure instance
void** clo30311 = alloc_clo(lam29887_fptr, 1);

//setting env list
clo30311[1] = kont29615;
void* f2961629742 = encode_clo(clo30311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2961629742;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30313 = alloc_clo(lam29896_fptr, 8);

//setting env list
clo30313[1] = car;
clo30313[2] = n;
clo30313[3] = lst2;
clo30313[4] = take_u45helper;
clo30313[5] = _u45;
clo30313[6] = cons;
clo30313[7] = kont29615;
clo30313[8] = lst;
void* f2962029744 = encode_clo(clo30313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2962029744;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29898 = encode_clo(alloc_clo(lam29898_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29901 = arg_buffer[1];
//reading env and args
void* kont29615 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar30314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30314, "0", 10);
void* a2951629739 = encode_mpz(mpzvar30314);

//creating new closure instance
void** clo30316 = alloc_clo(lam29898_fptr, 10);

//setting env list
clo30316[1] = car;
clo30316[2] = n;
clo30316[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo30316[4] = take_u45helper;
clo30316[5] = _u45;
clo30316[6] = cons;
clo30316[7] = kont29615;
clo30316[8] = reverse;
clo30316[9] = lst;
clo30316[10] = cdr;
void* f2962129740 = encode_clo(clo30316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2962129740;
arg_buffer[3] = n;
arg_buffer[4] = a2951629739;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam29902_fptr() // lam29902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29903 = arg_buffer[1];
//reading env and args
void* a2952429754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29622 = (decode_clo(env29903))[4];
//not do dummy comment
void* lst = (decode_clo(env29903))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29903))[2];
//not do dummy comment
void* n = (decode_clo(env29903))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29622;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2952429754;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29902 = encode_clo(alloc_clo(lam29902_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29904 = arg_buffer[1];
//reading env and args
void* kont29622 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30318 = alloc_clo(lam29902_fptr, 4);

//setting env list
clo30318[1] = n;
clo30318[2] = take_u45helper;
clo30318[3] = lst;
clo30318[4] = kont29622;
void* f2962329753 = encode_clo(clo30318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2962329753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam29906_fptr() // lam29906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29907 = arg_buffer[1];
//reading env and args
void* a2952929762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29624 = (decode_clo(env29907))[3];
//not do dummy comment
void* _u43 = (decode_clo(env29907))[2];
//not do dummy comment
void* a2952729758 = (decode_clo(env29907))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont29624;
arg_buffer[3] = a2952729758;
arg_buffer[4] = a2952929762;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29906 = encode_clo(alloc_clo(lam29906_fptr, 0));

void* lam29908_fptr() // lam29908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29909 = arg_buffer[1];
//reading env and args
void* a2952829760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29624 = (decode_clo(env29909))[4];
//not do dummy comment
void* length = (decode_clo(env29909))[3];
//not do dummy comment
void* _u43 = (decode_clo(env29909))[2];
//not do dummy comment
void* a2952729758 = (decode_clo(env29909))[1];

//creating new closure instance
void** clo30320 = alloc_clo(lam29906_fptr, 3);

//setting env list
clo30320[1] = a2952729758;
clo30320[2] = _u43;
clo30320[3] = kont29624;
void* f2962529761 = encode_clo(clo30320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2962529761;
arg_buffer[3] = a2952829760;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29908 = encode_clo(alloc_clo(lam29908_fptr, 0));

void* lam29911_fptr() // lam29911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29912 = arg_buffer[1];
//reading env and args
void* a2952529756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29912))[5];
//not do dummy comment
void* kont29624 = (decode_clo(env29912))[4];
//not do dummy comment
void* lst = (decode_clo(env29912))[3];
//not do dummy comment
void* length = (decode_clo(env29912))[2];
//not do dummy comment
void* _u43 = (decode_clo(env29912))[1];

//if-clause
bool if_guard30321 = is_true(a2952529756);
if(if_guard30321)
{
mpz_t* mpzvar30322 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30322, "0", 10);
void* x2952629757 = encode_mpz(mpzvar30322);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29624);
arg_buffer[2] = x2952629757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29624))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar30323 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30323, "1", 10);
void* a2952729758 = encode_mpz(mpzvar30323);

//creating new closure instance
void** clo30325 = alloc_clo(lam29908_fptr, 4);

//setting env list
clo30325[1] = a2952729758;
clo30325[2] = _u43;
clo30325[3] = length;
clo30325[4] = kont29624;
void* f2962629759 = encode_clo(clo30325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2962629759;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29911 = encode_clo(alloc_clo(lam29911_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29913 = arg_buffer[1];
//reading env and args
void* kont29624 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo30327 = alloc_clo(lam29911_fptr, 5);

//setting env list
clo30327[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo30327[2] = length;
clo30327[3] = lst;
clo30327[4] = kont29624;
clo30327[5] = cdr;
void* f2962729755 = encode_clo(clo30327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2962729755;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam29914_fptr() // lam29914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29915 = arg_buffer[1];
//reading env and args
void* x2953129766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29628 = (decode_clo(env29915))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29628);
arg_buffer[2] = x2953129766;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29628))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29914 = encode_clo(alloc_clo(lam29914_fptr, 0));

void* lam29916_fptr() // lam29916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29917 = arg_buffer[1];
//reading env and args
void* a2953529774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2953329770 = (decode_clo(env29917))[3];
//not do dummy comment
void* kont29628 = (decode_clo(env29917))[2];
//not do dummy comment
void* cons = (decode_clo(env29917))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29628;
arg_buffer[3] = a2953329770;
arg_buffer[4] = a2953529774;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29916 = encode_clo(alloc_clo(lam29916_fptr, 0));

void* lam29918_fptr() // lam29918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29919 = arg_buffer[1];
//reading env and args
void* a2953429772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29628 = (decode_clo(env29919))[5];
//not do dummy comment
void* proc = (decode_clo(env29919))[4];
//not do dummy comment
void* cons = (decode_clo(env29919))[3];
//not do dummy comment
void* map = (decode_clo(env29919))[2];
//not do dummy comment
void* a2953329770 = (decode_clo(env29919))[1];

//creating new closure instance
void** clo30329 = alloc_clo(lam29916_fptr, 3);

//setting env list
clo30329[1] = cons;
clo30329[2] = kont29628;
clo30329[3] = a2953329770;
void* f2963029773 = encode_clo(clo30329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2963029773;
arg_buffer[3] = proc;
arg_buffer[4] = a2953429772;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29918 = encode_clo(alloc_clo(lam29918_fptr, 0));

void* lam29920_fptr() // lam29920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29921 = arg_buffer[1];
//reading env and args
void* a2953329770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29921))[6];
//not do dummy comment
void* lst = (decode_clo(env29921))[5];
//not do dummy comment
void* map = (decode_clo(env29921))[4];
//not do dummy comment
void* kont29628 = (decode_clo(env29921))[3];
//not do dummy comment
void* proc = (decode_clo(env29921))[2];
//not do dummy comment
void* cons = (decode_clo(env29921))[1];

//creating new closure instance
void** clo30331 = alloc_clo(lam29918_fptr, 5);

//setting env list
clo30331[1] = a2953329770;
clo30331[2] = map;
clo30331[3] = cons;
clo30331[4] = proc;
clo30331[5] = kont29628;
void* f2963129771 = encode_clo(clo30331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2963129771;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29920 = encode_clo(alloc_clo(lam29920_fptr, 0));

void* lam29922_fptr() // lam29922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29923 = arg_buffer[1];
//reading env and args
void* a2953229768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29923))[6];
//not do dummy comment
void* lst = (decode_clo(env29923))[5];
//not do dummy comment
void* map = (decode_clo(env29923))[4];
//not do dummy comment
void* kont29628 = (decode_clo(env29923))[3];
//not do dummy comment
void* proc = (decode_clo(env29923))[2];
//not do dummy comment
void* cons = (decode_clo(env29923))[1];

//creating new closure instance
void** clo30333 = alloc_clo(lam29920_fptr, 6);

//setting env list
clo30333[1] = cons;
clo30333[2] = proc;
clo30333[3] = kont29628;
clo30333[4] = map;
clo30333[5] = lst;
clo30333[6] = cdr;
void* f2963229769 = encode_clo(clo30333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2963229769;
arg_buffer[3] = a2953229768;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29922 = encode_clo(alloc_clo(lam29922_fptr, 0));

void* lam29924_fptr() // lam29924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29925 = arg_buffer[1];
//reading env and args
void* a2953029764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29925))[8];
//not do dummy comment
void* map = (decode_clo(env29925))[7];
//not do dummy comment
void* kont29628 = (decode_clo(env29925))[6];
//not do dummy comment
void* proc = (decode_clo(env29925))[5];
//not do dummy comment
void* car = (decode_clo(env29925))[4];
//not do dummy comment
void* cons = (decode_clo(env29925))[3];
//not do dummy comment
void* list = (decode_clo(env29925))[2];
//not do dummy comment
void* cdr = (decode_clo(env29925))[1];

//if-clause
bool if_guard30334 = is_true(a2953029764);
if(if_guard30334)
{

//creating new closure instance
void** clo30336 = alloc_clo(lam29914_fptr, 1);

//setting env list
clo30336[1] = kont29628;
void* f2962929765 = encode_clo(clo30336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2962929765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30338 = alloc_clo(lam29922_fptr, 6);

//setting env list
clo30338[1] = cons;
clo30338[2] = proc;
clo30338[3] = kont29628;
clo30338[4] = map;
clo30338[5] = lst;
clo30338[6] = cdr;
void* f2963329767 = encode_clo(clo30338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2963329767;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29924 = encode_clo(alloc_clo(lam29924_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29926 = arg_buffer[1];
//reading env and args
void* kont29628 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30340 = alloc_clo(lam29924_fptr, 8);

//setting env list
clo30340[1] = cdr;
clo30340[2] = list;
clo30340[3] = cons;
clo30340[4] = car;
clo30340[5] = proc;
clo30340[6] = kont29628;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo30340[7] = map;
clo30340[8] = lst;
void* f2963429763 = encode_clo(clo30340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2963429763;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam29927_fptr() // lam29927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29928 = arg_buffer[1];
//reading env and args
void* x2953729778 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29635 = (decode_clo(env29928))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29635);
arg_buffer[2] = x2953729778;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29635))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29927 = encode_clo(alloc_clo(lam29927_fptr, 0));

void* lam29929_fptr() // lam29929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29930 = arg_buffer[1];
//reading env and args
void* a2954229788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2954029784 = (decode_clo(env29930))[3];
//not do dummy comment
void* kont29635 = (decode_clo(env29930))[2];
//not do dummy comment
void* cons = (decode_clo(env29930))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29635;
arg_buffer[3] = a2954029784;
arg_buffer[4] = a2954229788;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29929 = encode_clo(alloc_clo(lam29929_fptr, 0));

void* lam29931_fptr() // lam29931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29932 = arg_buffer[1];
//reading env and args
void* a2954129786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2954029784 = (decode_clo(env29932))[5];
//not do dummy comment
void* op = (decode_clo(env29932))[4];
//not do dummy comment
void* filter = (decode_clo(env29932))[3];
//not do dummy comment
void* kont29635 = (decode_clo(env29932))[2];
//not do dummy comment
void* cons = (decode_clo(env29932))[1];

//creating new closure instance
void** clo30342 = alloc_clo(lam29929_fptr, 3);

//setting env list
clo30342[1] = cons;
clo30342[2] = kont29635;
clo30342[3] = a2954029784;
void* f2963729787 = encode_clo(clo30342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2963729787;
arg_buffer[3] = op;
arg_buffer[4] = a2954129786;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29931 = encode_clo(alloc_clo(lam29931_fptr, 0));

void* lam29933_fptr() // lam29933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29934 = arg_buffer[1];
//reading env and args
void* a2954029784 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29934))[6];
//not do dummy comment
void* lst = (decode_clo(env29934))[5];
//not do dummy comment
void* op = (decode_clo(env29934))[4];
//not do dummy comment
void* filter = (decode_clo(env29934))[3];
//not do dummy comment
void* kont29635 = (decode_clo(env29934))[2];
//not do dummy comment
void* cons = (decode_clo(env29934))[1];

//creating new closure instance
void** clo30344 = alloc_clo(lam29931_fptr, 5);

//setting env list
clo30344[1] = cons;
clo30344[2] = kont29635;
clo30344[3] = filter;
clo30344[4] = op;
clo30344[5] = a2954029784;
void* f2963829785 = encode_clo(clo30344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2963829785;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29933 = encode_clo(alloc_clo(lam29933_fptr, 0));

void* lam29935_fptr() // lam29935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29936 = arg_buffer[1];
//reading env and args
void* a2954329790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env29936))[3];
//not do dummy comment
void* filter = (decode_clo(env29936))[2];
//not do dummy comment
void* kont29635 = (decode_clo(env29936))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont29635;
arg_buffer[3] = op;
arg_buffer[4] = a2954329790;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29935 = encode_clo(alloc_clo(lam29935_fptr, 0));

void* lam29937_fptr() // lam29937 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29938 = arg_buffer[1];
//reading env and args
void* a2953929782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29938))[7];
//not do dummy comment
void* lst = (decode_clo(env29938))[6];
//not do dummy comment
void* op = (decode_clo(env29938))[5];
//not do dummy comment
void* filter = (decode_clo(env29938))[4];
//not do dummy comment
void* car = (decode_clo(env29938))[3];
//not do dummy comment
void* kont29635 = (decode_clo(env29938))[2];
//not do dummy comment
void* cons = (decode_clo(env29938))[1];

//if-clause
bool if_guard30345 = is_true(a2953929782);
if(if_guard30345)
{

//creating new closure instance
void** clo30347 = alloc_clo(lam29933_fptr, 6);

//setting env list
clo30347[1] = cons;
clo30347[2] = kont29635;
clo30347[3] = filter;
clo30347[4] = op;
clo30347[5] = lst;
clo30347[6] = cdr;
void* f2963929783 = encode_clo(clo30347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2963929783;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30349 = alloc_clo(lam29935_fptr, 3);

//setting env list
clo30349[1] = kont29635;
clo30349[2] = filter;
clo30349[3] = op;
void* f2964029789 = encode_clo(clo30349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2964029789;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29937 = encode_clo(alloc_clo(lam29937_fptr, 0));

void* lam29939_fptr() // lam29939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29940 = arg_buffer[1];
//reading env and args
void* a2953829780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29940))[7];
//not do dummy comment
void* lst = (decode_clo(env29940))[6];
//not do dummy comment
void* op = (decode_clo(env29940))[5];
//not do dummy comment
void* filter = (decode_clo(env29940))[4];
//not do dummy comment
void* car = (decode_clo(env29940))[3];
//not do dummy comment
void* kont29635 = (decode_clo(env29940))[2];
//not do dummy comment
void* cons = (decode_clo(env29940))[1];

//creating new closure instance
void** clo30351 = alloc_clo(lam29937_fptr, 7);

//setting env list
clo30351[1] = cons;
clo30351[2] = kont29635;
clo30351[3] = car;
clo30351[4] = filter;
clo30351[5] = op;
clo30351[6] = lst;
clo30351[7] = cdr;
void* f2964129781 = encode_clo(clo30351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2964129781;
arg_buffer[3] = a2953829780;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29939 = encode_clo(alloc_clo(lam29939_fptr, 0));

void* lam29941_fptr() // lam29941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29942 = arg_buffer[1];
//reading env and args
void* a2953629776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29942))[8];
//not do dummy comment
void* op = (decode_clo(env29942))[7];
//not do dummy comment
void* list = (decode_clo(env29942))[6];
//not do dummy comment
void* cdr = (decode_clo(env29942))[5];
//not do dummy comment
void* filter = (decode_clo(env29942))[4];
//not do dummy comment
void* car = (decode_clo(env29942))[3];
//not do dummy comment
void* kont29635 = (decode_clo(env29942))[2];
//not do dummy comment
void* cons = (decode_clo(env29942))[1];

//if-clause
bool if_guard30352 = is_true(a2953629776);
if(if_guard30352)
{

//creating new closure instance
void** clo30354 = alloc_clo(lam29927_fptr, 1);

//setting env list
clo30354[1] = kont29635;
void* f2963629777 = encode_clo(clo30354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2963629777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30356 = alloc_clo(lam29939_fptr, 7);

//setting env list
clo30356[1] = cons;
clo30356[2] = kont29635;
clo30356[3] = car;
clo30356[4] = filter;
clo30356[5] = op;
clo30356[6] = lst;
clo30356[7] = cdr;
void* f2964229779 = encode_clo(clo30356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2964229779;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29941 = encode_clo(alloc_clo(lam29941_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29943 = arg_buffer[1];
//reading env and args
void* kont29635 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30358 = alloc_clo(lam29941_fptr, 8);

//setting env list
clo30358[1] = cons;
clo30358[2] = kont29635;
clo30358[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo30358[4] = filter;
clo30358[5] = cdr;
clo30358[6] = list;
clo30358[7] = op;
clo30358[8] = lst;
void* f2964329775 = encode_clo(clo30358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2964329775;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam29944_fptr() // lam29944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29945 = arg_buffer[1];
//reading env and args
void* a2954829798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env29945))[3];
//not do dummy comment
void* kont29644 = (decode_clo(env29945))[2];
//not do dummy comment
void* a2954629795 = (decode_clo(env29945))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont29644;
arg_buffer[3] = a2954629795;
arg_buffer[4] = a2954829798;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29944 = encode_clo(alloc_clo(lam29944_fptr, 0));

void* lam29947_fptr() // lam29947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29948 = arg_buffer[1];
//reading env and args
void* a2954629795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env29948))[4];
//not do dummy comment
void* kont29644 = (decode_clo(env29948))[3];
//not do dummy comment
void* n = (decode_clo(env29948))[2];
//not do dummy comment
void* _u45 = (decode_clo(env29948))[1];
mpz_t* mpzvar30359 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30359, "1", 10);
void* a2954729796 = encode_mpz(mpzvar30359);

//creating new closure instance
void** clo30361 = alloc_clo(lam29944_fptr, 3);

//setting env list
clo30361[1] = a2954629795;
clo30361[2] = kont29644;
clo30361[3] = drop;
void* f2964529797 = encode_clo(clo30361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2964529797;
arg_buffer[3] = n;
arg_buffer[4] = a2954729796;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29947 = encode_clo(alloc_clo(lam29947_fptr, 0));

void* lam29949_fptr() // lam29949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29950 = arg_buffer[1];
//reading env and args
void* a2954529793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29950))[6];
//not do dummy comment
void* kont29644 = (decode_clo(env29950))[5];
//not do dummy comment
void* n = (decode_clo(env29950))[4];
//not do dummy comment
void* _u45 = (decode_clo(env29950))[3];
//not do dummy comment
void* lst = (decode_clo(env29950))[2];
//not do dummy comment
void* drop = (decode_clo(env29950))[1];

//if-clause
bool if_guard30362 = is_true(a2954529793);
if(if_guard30362)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29644);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29644))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30364 = alloc_clo(lam29947_fptr, 4);

//setting env list
clo30364[1] = _u45;
clo30364[2] = n;
clo30364[3] = kont29644;
clo30364[4] = drop;
void* f2964629794 = encode_clo(clo30364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2964629794;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29949 = encode_clo(alloc_clo(lam29949_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29952 = arg_buffer[1];
//reading env and args
void* kont29644 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar30365 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30365, "0", 10);
void* a2954429791 = encode_mpz(mpzvar30365);

//creating new closure instance
void** clo30367 = alloc_clo(lam29949_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo30367[1] = drop;
clo30367[2] = lst;
clo30367[3] = _u45;
clo30367[4] = n;
clo30367[5] = kont29644;
clo30367[6] = cdr;
void* f2964729792 = encode_clo(clo30367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2964729792;
arg_buffer[3] = n;
arg_buffer[4] = a2954429791;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam29953_fptr() // lam29953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29954 = arg_buffer[1];
//reading env and args
void* a2955229806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2955029802 = (decode_clo(env29954))[3];
//not do dummy comment
void* proc = (decode_clo(env29954))[2];
//not do dummy comment
void* kont29648 = (decode_clo(env29954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont29648;
arg_buffer[3] = a2955029802;
arg_buffer[4] = a2955229806;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29953 = encode_clo(alloc_clo(lam29953_fptr, 0));

void* lam29955_fptr() // lam29955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29956 = arg_buffer[1];
//reading env and args
void* a2955129804 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env29956))[5];
//not do dummy comment
void* a2955029802 = (decode_clo(env29956))[4];
//not do dummy comment
void* proc = (decode_clo(env29956))[3];
//not do dummy comment
void* acc = (decode_clo(env29956))[2];
//not do dummy comment
void* kont29648 = (decode_clo(env29956))[1];

//creating new closure instance
void** clo30369 = alloc_clo(lam29953_fptr, 3);

//setting env list
clo30369[1] = kont29648;
clo30369[2] = proc;
clo30369[3] = a2955029802;
void* f2964929805 = encode_clo(clo30369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2964929805;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2955129804;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29955 = encode_clo(alloc_clo(lam29955_fptr, 0));

void* lam29957_fptr() // lam29957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29958 = arg_buffer[1];
//reading env and args
void* a2955029802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29958))[6];
//not do dummy comment
void* foldr = (decode_clo(env29958))[5];
//not do dummy comment
void* lst = (decode_clo(env29958))[4];
//not do dummy comment
void* proc = (decode_clo(env29958))[3];
//not do dummy comment
void* acc = (decode_clo(env29958))[2];
//not do dummy comment
void* kont29648 = (decode_clo(env29958))[1];

//creating new closure instance
void** clo30371 = alloc_clo(lam29955_fptr, 5);

//setting env list
clo30371[1] = kont29648;
clo30371[2] = acc;
clo30371[3] = proc;
clo30371[4] = a2955029802;
clo30371[5] = foldr;
void* f2965029803 = encode_clo(clo30371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2965029803;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29957 = encode_clo(alloc_clo(lam29957_fptr, 0));

void* lam29959_fptr() // lam29959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29960 = arg_buffer[1];
//reading env and args
void* a2954929800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29960))[7];
//not do dummy comment
void* car = (decode_clo(env29960))[6];
//not do dummy comment
void* foldr = (decode_clo(env29960))[5];
//not do dummy comment
void* lst = (decode_clo(env29960))[4];
//not do dummy comment
void* proc = (decode_clo(env29960))[3];
//not do dummy comment
void* acc = (decode_clo(env29960))[2];
//not do dummy comment
void* kont29648 = (decode_clo(env29960))[1];

//if-clause
bool if_guard30372 = is_true(a2954929800);
if(if_guard30372)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29648);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29648))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30374 = alloc_clo(lam29957_fptr, 6);

//setting env list
clo30374[1] = kont29648;
clo30374[2] = acc;
clo30374[3] = proc;
clo30374[4] = lst;
clo30374[5] = foldr;
clo30374[6] = cdr;
void* f2965129801 = encode_clo(clo30374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2965129801;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29959 = encode_clo(alloc_clo(lam29959_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29961 = arg_buffer[1];
//reading env and args
void* kont29648 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo30376 = alloc_clo(lam29959_fptr, 7);

//setting env list
clo30376[1] = kont29648;
clo30376[2] = acc;
clo30376[3] = proc;
clo30376[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo30376[5] = foldr;
clo30376[6] = car;
clo30376[7] = cdr;
void* f2965229799 = encode_clo(clo30376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2965229799;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam29962_fptr() // lam29962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29963 = arg_buffer[1];
//reading env and args
void* a2955629814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29653 = (decode_clo(env29963))[3];
//not do dummy comment
void* a2955429810 = (decode_clo(env29963))[2];
//not do dummy comment
void* cons = (decode_clo(env29963))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29653;
arg_buffer[3] = a2955429810;
arg_buffer[4] = a2955629814;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29962 = encode_clo(alloc_clo(lam29962_fptr, 0));

void* lam29964_fptr() // lam29964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29965 = arg_buffer[1];
//reading env and args
void* a2955529812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29653 = (decode_clo(env29965))[5];
//not do dummy comment
void* append = (decode_clo(env29965))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29965))[3];
//not do dummy comment
void* a2955429810 = (decode_clo(env29965))[2];
//not do dummy comment
void* cons = (decode_clo(env29965))[1];

//creating new closure instance
void** clo30378 = alloc_clo(lam29962_fptr, 3);

//setting env list
clo30378[1] = cons;
clo30378[2] = a2955429810;
clo30378[3] = kont29653;
void* f2965429813 = encode_clo(clo30378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2965429813;
arg_buffer[3] = a2955529812;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29964 = encode_clo(alloc_clo(lam29964_fptr, 0));

void* lam29966_fptr() // lam29966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29967 = arg_buffer[1];
//reading env and args
void* a2955429810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env29967))[6];
//not do dummy comment
void* lst2 = (decode_clo(env29967))[5];
//not do dummy comment
void* lst1 = (decode_clo(env29967))[4];
//not do dummy comment
void* cons = (decode_clo(env29967))[3];
//not do dummy comment
void* kont29653 = (decode_clo(env29967))[2];
//not do dummy comment
void* cdr = (decode_clo(env29967))[1];

//creating new closure instance
void** clo30380 = alloc_clo(lam29964_fptr, 5);

//setting env list
clo30380[1] = cons;
clo30380[2] = a2955429810;
clo30380[3] = lst2;
clo30380[4] = append;
clo30380[5] = kont29653;
void* f2965529811 = encode_clo(clo30380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2965529811;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29966 = encode_clo(alloc_clo(lam29966_fptr, 0));

void* lam29968_fptr() // lam29968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29969 = arg_buffer[1];
//reading env and args
void* a2955329808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env29969))[7];
//not do dummy comment
void* lst2 = (decode_clo(env29969))[6];
//not do dummy comment
void* cons = (decode_clo(env29969))[5];
//not do dummy comment
void* kont29653 = (decode_clo(env29969))[4];
//not do dummy comment
void* cdr = (decode_clo(env29969))[3];
//not do dummy comment
void* lst1 = (decode_clo(env29969))[2];
//not do dummy comment
void* car = (decode_clo(env29969))[1];

//if-clause
bool if_guard30381 = is_true(a2955329808);
if(if_guard30381)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29653);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29653))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30383 = alloc_clo(lam29966_fptr, 6);

//setting env list
clo30383[1] = cdr;
clo30383[2] = kont29653;
clo30383[3] = cons;
clo30383[4] = lst1;
clo30383[5] = lst2;
clo30383[6] = append;
void* f2965629809 = encode_clo(clo30383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2965629809;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29968 = encode_clo(alloc_clo(lam29968_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29970 = arg_buffer[1];
//reading env and args
void* kont29653 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30385 = alloc_clo(lam29968_fptr, 7);

//setting env list
clo30385[1] = car;
clo30385[2] = lst1;
clo30385[3] = cdr;
clo30385[4] = kont29653;
clo30385[5] = cons;
clo30385[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo30385[7] = append;
void* f2965729807 = encode_clo(clo30385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2965729807;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29971 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2965829815 = prim_car(lst);
void* lst29816 = prim_cdr(lst);
void* x2955729817 = apply_prim_hash(lst29816);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2965829815);
arg_buffer[2] = x2955729817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2965829815))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45ref_fptr() // hash-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29972 = arg_buffer[1];
//reading env and args
void* kont29660 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2955829818 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29660);
arg_buffer[2] = x2955829818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29660))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void* hash_u45set_fptr() // hash-set 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29973 = arg_buffer[1];
//reading env and args
void* kont29661 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2955929819 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29661);
arg_buffer[2] = x2955929819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29661))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29974 = arg_buffer[1];
//reading env and args
void* kont29662 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2956029820 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29662);
arg_buffer[2] = x2956029820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29662))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void* hash_u45count_fptr() // hash-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29975 = arg_buffer[1];
//reading env and args
void* kont29663 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2956129821 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29663);
arg_buffer[2] = x2956129821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29663))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam29978_fptr() // lam29978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29979 = arg_buffer[1];
//reading env and args
void* a2956229823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29664 = (decode_clo(env29979))[1];

//if-clause
bool if_guard30386 = is_true(a2956229823);
if(if_guard30386)
{
mpz_t* mpzvar30387 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30387, "1", 10);
void* x2956329824 = encode_mpz(mpzvar30387);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29664);
arg_buffer[2] = x2956329824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29664))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar30388 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30388, "2", 10);
void* x2956429825 = encode_mpz(mpzvar30388);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29664);
arg_buffer[2] = x2956429825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29664))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29978 = encode_clo(alloc_clo(lam29978_fptr, 0));

void* eq_u45test_fptr() // eq-test 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29980 = arg_buffer[1];
//reading env and args
void* kont29664 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30390 = alloc_clo(lam29978_fptr, 1);

//setting env list
clo30390[1] = kont29664;
void* f2966529822 = encode_clo(clo30390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(eq_u63);
arg_buffer[2] = f2966529822;
arg_buffer[3] = x;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(eq_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u45test = encode_clo(alloc_clo(eq_u45test_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29983 = arg_buffer[1];
//reading env and args
void* kont29666 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar30391 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30391, "1", 10);
void* a2956529826 = encode_mpz(mpzvar30391);
mpz_t* mpzvar30392 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30392, "1", 10);
void* a2956629827 = encode_mpz(mpzvar30392);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(eq_u45test);
arg_buffer[2] = kont29666;
arg_buffer[3] = a2956529826;
arg_buffer[4] = a2956629827;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(eq_u45test))[0]);
//assign buffer size to numArgs
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

