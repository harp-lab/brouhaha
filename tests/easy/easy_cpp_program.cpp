#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.h"
void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29831 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2957229672 = prim_car(lst);
void* lst29673 = prim_cdr(lst);
void* x2948629674 = apply_prim__u43(lst29673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957229672);
arg_buffer[2] = x2948629674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957229672))[0]);
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

void* kont2957429675 = prim_car(lst);
void* lst29676 = prim_cdr(lst);
void* x2948729677 = apply_prim__u45(lst29676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957429675);
arg_buffer[2] = x2948729677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957429675))[0]);
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

void* kont2957629678 = prim_car(lst);
void* lst29679 = prim_cdr(lst);
void* x2948829680 = apply_prim__u42(lst29679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957629678);
arg_buffer[2] = x2948829680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957629678))[0]);
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
void* _29834 = arg_buffer[1];
//reading env and args
void* kont29578 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2948929681 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29578);
arg_buffer[2] = x2948929681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29578))[0]);
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

void* kont2957929682 = prim_car(lst);
void* lst29683 = prim_cdr(lst);
void* x2949029684 = apply_prim__u47(lst29683);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2957929682);
arg_buffer[2] = x2949029684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2957929682))[0]);
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

void* kont2958129685 = prim_car(lst);
void* lst29686 = prim_cdr(lst);
void* x2949129687 = apply_prim__u61(lst29686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958129685);
arg_buffer[2] = x2949129687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958129685))[0]);
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

void* kont2958329688 = prim_car(lst);
void* lst29689 = prim_cdr(lst);
void* x2949229690 = apply_prim__u62(lst29689);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958329688);
arg_buffer[2] = x2949229690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958329688))[0]);
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
void* _29838 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2958529691 = prim_car(lst);
void* lst29692 = prim_cdr(lst);
void* x2949329693 = apply_prim__u60(lst29692);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958529691);
arg_buffer[2] = x2949329693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958529691))[0]);
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
void* _29839 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2958729694 = prim_car(lst);
void* lst29695 = prim_cdr(lst);
void* x2949429696 = apply_prim__u60_u61(lst29695);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958729694);
arg_buffer[2] = x2949429696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958729694))[0]);
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
void* _29840 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2958929697 = prim_car(lst);
void* lst29698 = prim_cdr(lst);
void* x2949529699 = apply_prim__u62_u61(lst29698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2958929697);
arg_buffer[2] = x2949529699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2958929697))[0]);
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
void* _29841 = arg_buffer[1];
//reading env and args
void* kont29591 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2949629700 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29591);
arg_buffer[2] = x2949629700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29591))[0]);
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
void* _29842 = arg_buffer[1];
//reading env and args
void* kont29592 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2949729701 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29592);
arg_buffer[2] = x2949729701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29592))[0]);
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
void* _29843 = arg_buffer[1];
//reading env and args
void* kont29593 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2949829702 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29593);
arg_buffer[2] = x2949829702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29593))[0]);
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
void* _29844 = arg_buffer[1];
//reading env and args
void* kont29594 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2949929703 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29594);
arg_buffer[2] = x2949929703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29594))[0]);
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
void* _29845 = arg_buffer[1];
//reading env and args
void* kont29595 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2950029704 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29595);
arg_buffer[2] = x2950029704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29595))[0]);
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
void* _29846 = arg_buffer[1];
//reading env and args
void* kont29596 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2950129705 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29596);
arg_buffer[2] = x2950129705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29596))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam29847_fptr() // lam29847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29848 = arg_buffer[1];
//reading env and args
void* a2950429709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env29848))[3];
//not do dummy comment
void* a2950229706 = (decode_clo(env29848))[2];
//not do dummy comment
void* kont29597 = (decode_clo(env29848))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29597;
arg_buffer[3] = a2950229706;
arg_buffer[4] = a2950429709;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29847 = encode_clo(alloc_clo(lam29847_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29851 = arg_buffer[1];
//reading env and args
void* kont29597 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30525, "0", 10);
void* a2950229706 = encode_mpz(mpzvar30525);
mpz_t* mpzvar30526 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30526, "2", 10);
void* a2950329707 = encode_mpz(mpzvar30526);

//creating new closure instance
void** clo30528 = alloc_clo(lam29847_fptr, 3);

//setting env list
clo30528[1] = kont29597;
clo30528[2] = a2950229706;
clo30528[3] = equal_u63;
void* f2959829708 = encode_clo(clo30528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2959829708;
arg_buffer[3] = x;
arg_buffer[4] = a2950329707;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam29852_fptr() // lam29852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29853 = arg_buffer[1];
//reading env and args
void* a2950729713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2950529710 = (decode_clo(env29853))[3];
//not do dummy comment
void* kont29599 = (decode_clo(env29853))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env29853))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29599;
arg_buffer[3] = a2950529710;
arg_buffer[4] = a2950729713;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29852 = encode_clo(alloc_clo(lam29852_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29856 = arg_buffer[1];
//reading env and args
void* kont29599 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30529 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30529, "1", 10);
void* a2950529710 = encode_mpz(mpzvar30529);
mpz_t* mpzvar30530 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30530, "2", 10);
void* a2950629711 = encode_mpz(mpzvar30530);

//creating new closure instance
void** clo30532 = alloc_clo(lam29852_fptr, 3);

//setting env list
clo30532[1] = equal_u63;
clo30532[2] = kont29599;
clo30532[3] = a2950529710;
void* f2960029712 = encode_clo(clo30532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2960029712;
arg_buffer[3] = x;
arg_buffer[4] = a2950629711;
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
void* _29857 = arg_buffer[1];
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

void* kont2960129714 = prim_car(x);
void* x29715 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2960129714);
arg_buffer[2] = x29715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2960129714))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam29860_fptr() // lam29860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29861 = arg_buffer[1];
//reading env and args
void* a2951329725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29603 = (decode_clo(env29861))[3];
//not do dummy comment
void* x = (decode_clo(env29861))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29861))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont29603;
arg_buffer[3] = x;
arg_buffer[4] = a2951329725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29860 = encode_clo(alloc_clo(lam29860_fptr, 0));

void* lam29862_fptr() // lam29862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29863 = arg_buffer[1];
//reading env and args
void* a2951129722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29863))[5];
//not do dummy comment
void* lst = (decode_clo(env29863))[4];
//not do dummy comment
void* kont29603 = (decode_clo(env29863))[3];
//not do dummy comment
void* x = (decode_clo(env29863))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29863))[1];

//if-clause
bool if_guard30533 = is_true(a2951129722);
if(if_guard30533)
{
void* x2951229723 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29603);
arg_buffer[2] = x2951229723;
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
void** clo30535 = alloc_clo(lam29860_fptr, 3);

//setting env list
clo30535[1] = member_u63;
clo30535[2] = x;
clo30535[3] = kont29603;
void* f2960429724 = encode_clo(clo30535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2960429724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29862 = encode_clo(alloc_clo(lam29862_fptr, 0));

void* lam29864_fptr() // lam29864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29865 = arg_buffer[1];
//reading env and args
void* a2951029720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29865))[6];
//not do dummy comment
void* lst = (decode_clo(env29865))[5];
//not do dummy comment
void* kont29603 = (decode_clo(env29865))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env29865))[3];
//not do dummy comment
void* x = (decode_clo(env29865))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29865))[1];

//creating new closure instance
void** clo30537 = alloc_clo(lam29862_fptr, 5);

//setting env list
clo30537[1] = member_u63;
clo30537[2] = x;
clo30537[3] = kont29603;
clo30537[4] = lst;
clo30537[5] = cdr;
void* f2960529721 = encode_clo(clo30537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2960529721;
arg_buffer[3] = a2951029720;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29864 = encode_clo(alloc_clo(lam29864_fptr, 0));

void* lam29866_fptr() // lam29866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29867 = arg_buffer[1];
//reading env and args
void* a2950829717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29867))[7];
//not do dummy comment
void* lst = (decode_clo(env29867))[6];
//not do dummy comment
void* kont29603 = (decode_clo(env29867))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env29867))[4];
//not do dummy comment
void* x = (decode_clo(env29867))[3];
//not do dummy comment
void* car = (decode_clo(env29867))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29867))[1];

//if-clause
bool if_guard30538 = is_true(a2950829717);
if(if_guard30538)
{
void* x2950929718 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29603);
arg_buffer[2] = x2950929718;
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
void** clo30540 = alloc_clo(lam29864_fptr, 6);

//setting env list
clo30540[1] = member_u63;
clo30540[2] = x;
clo30540[3] = equal_u63;
clo30540[4] = kont29603;
clo30540[5] = lst;
clo30540[6] = cdr;
void* f2960629719 = encode_clo(clo30540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2960629719;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29866 = encode_clo(alloc_clo(lam29866_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29868 = arg_buffer[1];
//reading env and args
void* kont29603 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30542 = alloc_clo(lam29866_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo30542[1] = member_u63;
clo30542[2] = car;
clo30542[3] = x;
clo30542[4] = equal_u63;
clo30542[5] = kont29603;
clo30542[6] = lst;
clo30542[7] = cdr;
void* f2960729716 = encode_clo(clo30542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2960729716;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam29869_fptr() // lam29869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29870 = arg_buffer[1];
//reading env and args
void* a2951729733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2951629731 = (decode_clo(env29870))[4];
//not do dummy comment
void* foldl = (decode_clo(env29870))[3];
//not do dummy comment
void* kont29608 = (decode_clo(env29870))[2];
//not do dummy comment
void* fun = (decode_clo(env29870))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont29608;
arg_buffer[3] = fun;
arg_buffer[4] = a2951629731;
arg_buffer[5] = a2951729733;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29869 = encode_clo(alloc_clo(lam29869_fptr, 0));

void* lam29871_fptr() // lam29871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29872 = arg_buffer[1];
//reading env and args
void* a2951629731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29872))[5];
//not do dummy comment
void* lst = (decode_clo(env29872))[4];
//not do dummy comment
void* foldl = (decode_clo(env29872))[3];
//not do dummy comment
void* kont29608 = (decode_clo(env29872))[2];
//not do dummy comment
void* fun = (decode_clo(env29872))[1];

//creating new closure instance
void** clo30544 = alloc_clo(lam29869_fptr, 4);

//setting env list
clo30544[1] = fun;
clo30544[2] = kont29608;
clo30544[3] = foldl;
clo30544[4] = a2951629731;
void* f2960929732 = encode_clo(clo30544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2960929732;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29871 = encode_clo(alloc_clo(lam29871_fptr, 0));

void* lam29873_fptr() // lam29873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29874 = arg_buffer[1];
//reading env and args
void* a2951529729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29874))[6];
//not do dummy comment
void* lst = (decode_clo(env29874))[5];
//not do dummy comment
void* acc = (decode_clo(env29874))[4];
//not do dummy comment
void* foldl = (decode_clo(env29874))[3];
//not do dummy comment
void* kont29608 = (decode_clo(env29874))[2];
//not do dummy comment
void* fun = (decode_clo(env29874))[1];

//creating new closure instance
void** clo30546 = alloc_clo(lam29871_fptr, 5);

//setting env list
clo30546[1] = fun;
clo30546[2] = kont29608;
clo30546[3] = foldl;
clo30546[4] = lst;
clo30546[5] = cdr;
void* f2961029730 = encode_clo(clo30546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2961029730;
arg_buffer[3] = a2951529729;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29873 = encode_clo(alloc_clo(lam29873_fptr, 0));

void* lam29875_fptr() // lam29875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29876 = arg_buffer[1];
//reading env and args
void* a2951429727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29876))[7];
//not do dummy comment
void* lst = (decode_clo(env29876))[6];
//not do dummy comment
void* acc = (decode_clo(env29876))[5];
//not do dummy comment
void* car = (decode_clo(env29876))[4];
//not do dummy comment
void* foldl = (decode_clo(env29876))[3];
//not do dummy comment
void* kont29608 = (decode_clo(env29876))[2];
//not do dummy comment
void* fun = (decode_clo(env29876))[1];

//if-clause
bool if_guard30547 = is_true(a2951429727);
if(if_guard30547)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29608);
arg_buffer[2] = acc;
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
void** clo30549 = alloc_clo(lam29873_fptr, 6);

//setting env list
clo30549[1] = fun;
clo30549[2] = kont29608;
clo30549[3] = foldl;
clo30549[4] = acc;
clo30549[5] = lst;
clo30549[6] = cdr;
void* f2961129728 = encode_clo(clo30549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2961129728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29875 = encode_clo(alloc_clo(lam29875_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29877 = arg_buffer[1];
//reading env and args
void* kont29608 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo30551 = alloc_clo(lam29875_fptr, 7);

//setting env list
clo30551[1] = fun;
clo30551[2] = kont29608;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo30551[3] = foldl;
clo30551[4] = car;
clo30551[5] = acc;
clo30551[6] = lst;
clo30551[7] = cdr;
void* f2961229726 = encode_clo(clo30551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2961229726;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam29878_fptr() // lam29878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29879 = arg_buffer[1];
//reading env and args
void* a2952129741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29879))[3];
//not do dummy comment
void* a2951929737 = (decode_clo(env29879))[2];
//not do dummy comment
void* kont29613 = (decode_clo(env29879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29613;
arg_buffer[3] = a2951929737;
arg_buffer[4] = a2952129741;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29878 = encode_clo(alloc_clo(lam29878_fptr, 0));

void* lam29880_fptr() // lam29880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29881 = arg_buffer[1];
//reading env and args
void* a2952029739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29881))[5];
//not do dummy comment
void* a2951929737 = (decode_clo(env29881))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29881))[3];
//not do dummy comment
void* cons = (decode_clo(env29881))[2];
//not do dummy comment
void* kont29613 = (decode_clo(env29881))[1];

//creating new closure instance
void** clo30553 = alloc_clo(lam29878_fptr, 3);

//setting env list
clo30553[1] = kont29613;
clo30553[2] = a2951929737;
clo30553[3] = reverse_u45helper;
void* f2961429740 = encode_clo(clo30553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2961429740;
arg_buffer[3] = a2952029739;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29880 = encode_clo(alloc_clo(lam29880_fptr, 0));

void* lam29882_fptr() // lam29882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29883 = arg_buffer[1];
//reading env and args
void* a2951929737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29883))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29883))[5];
//not do dummy comment
void* lst2 = (decode_clo(env29883))[4];
//not do dummy comment
void* car = (decode_clo(env29883))[3];
//not do dummy comment
void* cons = (decode_clo(env29883))[2];
//not do dummy comment
void* kont29613 = (decode_clo(env29883))[1];

//creating new closure instance
void** clo30555 = alloc_clo(lam29880_fptr, 5);

//setting env list
clo30555[1] = kont29613;
clo30555[2] = cons;
clo30555[3] = lst2;
clo30555[4] = a2951929737;
clo30555[5] = reverse_u45helper;
void* f2961529738 = encode_clo(clo30555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2961529738;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29882 = encode_clo(alloc_clo(lam29882_fptr, 0));

void* lam29884_fptr() // lam29884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29885 = arg_buffer[1];
//reading env and args
void* a2951829735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29885))[7];
//not do dummy comment
void* lst = (decode_clo(env29885))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29885))[5];
//not do dummy comment
void* lst2 = (decode_clo(env29885))[4];
//not do dummy comment
void* car = (decode_clo(env29885))[3];
//not do dummy comment
void* cons = (decode_clo(env29885))[2];
//not do dummy comment
void* kont29613 = (decode_clo(env29885))[1];

//if-clause
bool if_guard30556 = is_true(a2951829735);
if(if_guard30556)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29613);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29613))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30558 = alloc_clo(lam29882_fptr, 6);

//setting env list
clo30558[1] = kont29613;
clo30558[2] = cons;
clo30558[3] = car;
clo30558[4] = lst2;
clo30558[5] = reverse_u45helper;
clo30558[6] = lst;
void* f2961629736 = encode_clo(clo30558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2961629736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29884 = encode_clo(alloc_clo(lam29884_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29886 = arg_buffer[1];
//reading env and args
void* kont29613 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30560 = alloc_clo(lam29884_fptr, 7);

//setting env list
clo30560[1] = kont29613;
clo30560[2] = cons;
clo30560[3] = car;
clo30560[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo30560[5] = reverse_u45helper;
clo30560[6] = lst;
clo30560[7] = cdr;
void* f2961729734 = encode_clo(clo30560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2961729734;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam29887_fptr() // lam29887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29888 = arg_buffer[1];
//reading env and args
void* a2952229743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29888))[3];
//not do dummy comment
void* lst = (decode_clo(env29888))[2];
//not do dummy comment
void* kont29618 = (decode_clo(env29888))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29618;
arg_buffer[3] = lst;
arg_buffer[4] = a2952229743;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29887 = encode_clo(alloc_clo(lam29887_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29889 = arg_buffer[1];
//reading env and args
void* kont29618 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo30562 = alloc_clo(lam29887_fptr, 3);

//setting env list
clo30562[1] = kont29618;
clo30562[2] = lst;
clo30562[3] = reverse_u45helper;
void* f2961929742 = encode_clo(clo30562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2961929742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam29890_fptr() // lam29890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29891 = arg_buffer[1];
//reading env and args
void* x2952529748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29620 = (decode_clo(env29891))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29620);
arg_buffer[2] = x2952529748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29620))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29890 = encode_clo(alloc_clo(lam29890_fptr, 0));

void* lam29892_fptr() // lam29892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29893 = arg_buffer[1];
//reading env and args
void* a2953029757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29620 = (decode_clo(env29893))[4];
//not do dummy comment
void* a2952629750 = (decode_clo(env29893))[3];
//not do dummy comment
void* a2952829753 = (decode_clo(env29893))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env29893))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29620;
arg_buffer[3] = a2952629750;
arg_buffer[4] = a2952829753;
arg_buffer[5] = a2953029757;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29892 = encode_clo(alloc_clo(lam29892_fptr, 0));

void* lam29894_fptr() // lam29894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29895 = arg_buffer[1];
//reading env and args
void* a2952929755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29620 = (decode_clo(env29895))[6];
//not do dummy comment
void* a2952629750 = (decode_clo(env29895))[5];
//not do dummy comment
void* a2952829753 = (decode_clo(env29895))[4];
//not do dummy comment
void* cons = (decode_clo(env29895))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29895))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29895))[1];

//creating new closure instance
void** clo30564 = alloc_clo(lam29892_fptr, 4);

//setting env list
clo30564[1] = take_u45helper;
clo30564[2] = a2952829753;
clo30564[3] = a2952629750;
clo30564[4] = kont29620;
void* f2962229756 = encode_clo(clo30564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2962229756;
arg_buffer[3] = a2952929755;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29894 = encode_clo(alloc_clo(lam29894_fptr, 0));

void* lam29896_fptr() // lam29896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29897 = arg_buffer[1];
//reading env and args
void* a2952829753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29897))[7];
//not do dummy comment
void* kont29620 = (decode_clo(env29897))[6];
//not do dummy comment
void* a2952629750 = (decode_clo(env29897))[5];
//not do dummy comment
void* car = (decode_clo(env29897))[4];
//not do dummy comment
void* cons = (decode_clo(env29897))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29897))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29897))[1];

//creating new closure instance
void** clo30566 = alloc_clo(lam29894_fptr, 6);

//setting env list
clo30566[1] = lst2;
clo30566[2] = take_u45helper;
clo30566[3] = cons;
clo30566[4] = a2952829753;
clo30566[5] = a2952629750;
clo30566[6] = kont29620;
void* f2962329754 = encode_clo(clo30566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2962329754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29896 = encode_clo(alloc_clo(lam29896_fptr, 0));

void* lam29899_fptr() // lam29899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29900 = arg_buffer[1];
//reading env and args
void* a2952629750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29900))[8];
//not do dummy comment
void* kont29620 = (decode_clo(env29900))[7];
//not do dummy comment
void* cons = (decode_clo(env29900))[6];
//not do dummy comment
void* _u45 = (decode_clo(env29900))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29900))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29900))[3];
//not do dummy comment
void* n = (decode_clo(env29900))[2];
//not do dummy comment
void* car = (decode_clo(env29900))[1];
mpz_t* mpzvar30567 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30567, "1", 10);
void* a2952729751 = encode_mpz(mpzvar30567);

//creating new closure instance
void** clo30569 = alloc_clo(lam29896_fptr, 7);

//setting env list
clo30569[1] = lst2;
clo30569[2] = take_u45helper;
clo30569[3] = cons;
clo30569[4] = car;
clo30569[5] = a2952629750;
clo30569[6] = kont29620;
clo30569[7] = lst;
void* f2962429752 = encode_clo(clo30569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2962429752;
arg_buffer[3] = n;
arg_buffer[4] = a2952729751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29899 = encode_clo(alloc_clo(lam29899_fptr, 0));

void* lam29901_fptr() // lam29901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29902 = arg_buffer[1];
//reading env and args
void* a2952429746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29902))[10];
//not do dummy comment
void* lst = (decode_clo(env29902))[9];
//not do dummy comment
void* kont29620 = (decode_clo(env29902))[8];
//not do dummy comment
void* reverse = (decode_clo(env29902))[7];
//not do dummy comment
void* cons = (decode_clo(env29902))[6];
//not do dummy comment
void* _u45 = (decode_clo(env29902))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29902))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29902))[3];
//not do dummy comment
void* n = (decode_clo(env29902))[2];
//not do dummy comment
void* car = (decode_clo(env29902))[1];

//if-clause
bool if_guard30570 = is_true(a2952429746);
if(if_guard30570)
{

//creating new closure instance
void** clo30572 = alloc_clo(lam29890_fptr, 1);

//setting env list
clo30572[1] = kont29620;
void* f2962129747 = encode_clo(clo30572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2962129747;
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
void** clo30574 = alloc_clo(lam29899_fptr, 8);

//setting env list
clo30574[1] = car;
clo30574[2] = n;
clo30574[3] = lst2;
clo30574[4] = take_u45helper;
clo30574[5] = _u45;
clo30574[6] = cons;
clo30574[7] = kont29620;
clo30574[8] = lst;
void* f2962529749 = encode_clo(clo30574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2962529749;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29901 = encode_clo(alloc_clo(lam29901_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29904 = arg_buffer[1];
//reading env and args
void* kont29620 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar30575 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30575, "0", 10);
void* a2952329744 = encode_mpz(mpzvar30575);

//creating new closure instance
void** clo30577 = alloc_clo(lam29901_fptr, 10);

//setting env list
clo30577[1] = car;
clo30577[2] = n;
clo30577[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo30577[4] = take_u45helper;
clo30577[5] = _u45;
clo30577[6] = cons;
clo30577[7] = reverse;
clo30577[8] = kont29620;
clo30577[9] = lst;
clo30577[10] = cdr;
void* f2962629745 = encode_clo(clo30577);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2962629745;
arg_buffer[3] = n;
arg_buffer[4] = a2952329744;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam29905_fptr() // lam29905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29906 = arg_buffer[1];
//reading env and args
void* a2953129759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29906))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env29906))[3];
//not do dummy comment
void* kont29627 = (decode_clo(env29906))[2];
//not do dummy comment
void* n = (decode_clo(env29906))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29627;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2953129759;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29905 = encode_clo(alloc_clo(lam29905_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29907 = arg_buffer[1];
//reading env and args
void* kont29627 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30579 = alloc_clo(lam29905_fptr, 4);

//setting env list
clo30579[1] = n;
clo30579[2] = kont29627;
clo30579[3] = take_u45helper;
clo30579[4] = lst;
void* f2962829758 = encode_clo(clo30579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2962829758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam29909_fptr() // lam29909 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29910 = arg_buffer[1];
//reading env and args
void* a2953629767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2953429763 = (decode_clo(env29910))[3];
//not do dummy comment
void* _u43 = (decode_clo(env29910))[2];
//not do dummy comment
void* kont29629 = (decode_clo(env29910))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont29629;
arg_buffer[3] = a2953429763;
arg_buffer[4] = a2953629767;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29909 = encode_clo(alloc_clo(lam29909_fptr, 0));

void* lam29911_fptr() // lam29911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29912 = arg_buffer[1];
//reading env and args
void* a2953529765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env29912))[4];
//not do dummy comment
void* kont29629 = (decode_clo(env29912))[3];
//not do dummy comment
void* a2953429763 = (decode_clo(env29912))[2];
//not do dummy comment
void* length = (decode_clo(env29912))[1];

//creating new closure instance
void** clo30581 = alloc_clo(lam29909_fptr, 3);

//setting env list
clo30581[1] = kont29629;
clo30581[2] = _u43;
clo30581[3] = a2953429763;
void* f2963029766 = encode_clo(clo30581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2963029766;
arg_buffer[3] = a2953529765;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29911 = encode_clo(alloc_clo(lam29911_fptr, 0));

void* lam29914_fptr() // lam29914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29915 = arg_buffer[1];
//reading env and args
void* a2953229761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29915))[5];
//not do dummy comment
void* lst = (decode_clo(env29915))[4];
//not do dummy comment
void* length = (decode_clo(env29915))[3];
//not do dummy comment
void* _u43 = (decode_clo(env29915))[2];
//not do dummy comment
void* kont29629 = (decode_clo(env29915))[1];

//if-clause
bool if_guard30582 = is_true(a2953229761);
if(if_guard30582)
{
mpz_t* mpzvar30583 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30583, "0", 10);
void* x2953329762 = encode_mpz(mpzvar30583);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29629);
arg_buffer[2] = x2953329762;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29629))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar30584 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30584, "1", 10);
void* a2953429763 = encode_mpz(mpzvar30584);

//creating new closure instance
void** clo30586 = alloc_clo(lam29911_fptr, 4);

//setting env list
clo30586[1] = length;
clo30586[2] = a2953429763;
clo30586[3] = kont29629;
clo30586[4] = _u43;
void* f2963129764 = encode_clo(clo30586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2963129764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29914 = encode_clo(alloc_clo(lam29914_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29916 = arg_buffer[1];
//reading env and args
void* kont29629 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo30588 = alloc_clo(lam29914_fptr, 5);

//setting env list
clo30588[1] = kont29629;
clo30588[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo30588[3] = length;
clo30588[4] = lst;
clo30588[5] = cdr;
void* f2963229760 = encode_clo(clo30588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2963229760;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam29917_fptr() // lam29917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29918 = arg_buffer[1];
//reading env and args
void* x2953829771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29633 = (decode_clo(env29918))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29633);
arg_buffer[2] = x2953829771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29633))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29917 = encode_clo(alloc_clo(lam29917_fptr, 0));

void* lam29919_fptr() // lam29919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29920 = arg_buffer[1];
//reading env and args
void* a2954229779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2954029775 = (decode_clo(env29920))[3];
//not do dummy comment
void* kont29633 = (decode_clo(env29920))[2];
//not do dummy comment
void* cons = (decode_clo(env29920))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29633;
arg_buffer[3] = a2954029775;
arg_buffer[4] = a2954229779;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29919 = encode_clo(alloc_clo(lam29919_fptr, 0));

void* lam29921_fptr() // lam29921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29922 = arg_buffer[1];
//reading env and args
void* a2954129777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2954029775 = (decode_clo(env29922))[5];
//not do dummy comment
void* kont29633 = (decode_clo(env29922))[4];
//not do dummy comment
void* map = (decode_clo(env29922))[3];
//not do dummy comment
void* proc = (decode_clo(env29922))[2];
//not do dummy comment
void* cons = (decode_clo(env29922))[1];

//creating new closure instance
void** clo30590 = alloc_clo(lam29919_fptr, 3);

//setting env list
clo30590[1] = cons;
clo30590[2] = kont29633;
clo30590[3] = a2954029775;
void* f2963529778 = encode_clo(clo30590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2963529778;
arg_buffer[3] = proc;
arg_buffer[4] = a2954129777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29921 = encode_clo(alloc_clo(lam29921_fptr, 0));

void* lam29923_fptr() // lam29923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29924 = arg_buffer[1];
//reading env and args
void* a2954029775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29924))[6];
//not do dummy comment
void* kont29633 = (decode_clo(env29924))[5];
//not do dummy comment
void* lst = (decode_clo(env29924))[4];
//not do dummy comment
void* map = (decode_clo(env29924))[3];
//not do dummy comment
void* proc = (decode_clo(env29924))[2];
//not do dummy comment
void* cons = (decode_clo(env29924))[1];

//creating new closure instance
void** clo30592 = alloc_clo(lam29921_fptr, 5);

//setting env list
clo30592[1] = cons;
clo30592[2] = proc;
clo30592[3] = map;
clo30592[4] = kont29633;
clo30592[5] = a2954029775;
void* f2963629776 = encode_clo(clo30592);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2963629776;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29923 = encode_clo(alloc_clo(lam29923_fptr, 0));

void* lam29925_fptr() // lam29925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29926 = arg_buffer[1];
//reading env and args
void* a2953929773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29926))[6];
//not do dummy comment
void* kont29633 = (decode_clo(env29926))[5];
//not do dummy comment
void* lst = (decode_clo(env29926))[4];
//not do dummy comment
void* map = (decode_clo(env29926))[3];
//not do dummy comment
void* proc = (decode_clo(env29926))[2];
//not do dummy comment
void* cons = (decode_clo(env29926))[1];

//creating new closure instance
void** clo30594 = alloc_clo(lam29923_fptr, 6);

//setting env list
clo30594[1] = cons;
clo30594[2] = proc;
clo30594[3] = map;
clo30594[4] = lst;
clo30594[5] = kont29633;
clo30594[6] = cdr;
void* f2963729774 = encode_clo(clo30594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2963729774;
arg_buffer[3] = a2953929773;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29925 = encode_clo(alloc_clo(lam29925_fptr, 0));

void* lam29927_fptr() // lam29927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29928 = arg_buffer[1];
//reading env and args
void* a2953729769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29633 = (decode_clo(env29928))[8];
//not do dummy comment
void* lst = (decode_clo(env29928))[7];
//not do dummy comment
void* map = (decode_clo(env29928))[6];
//not do dummy comment
void* proc = (decode_clo(env29928))[5];
//not do dummy comment
void* car = (decode_clo(env29928))[4];
//not do dummy comment
void* cons = (decode_clo(env29928))[3];
//not do dummy comment
void* list = (decode_clo(env29928))[2];
//not do dummy comment
void* cdr = (decode_clo(env29928))[1];

//if-clause
bool if_guard30595 = is_true(a2953729769);
if(if_guard30595)
{

//creating new closure instance
void** clo30597 = alloc_clo(lam29917_fptr, 1);

//setting env list
clo30597[1] = kont29633;
void* f2963429770 = encode_clo(clo30597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2963429770;
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
void** clo30599 = alloc_clo(lam29925_fptr, 6);

//setting env list
clo30599[1] = cons;
clo30599[2] = proc;
clo30599[3] = map;
clo30599[4] = lst;
clo30599[5] = kont29633;
clo30599[6] = cdr;
void* f2963829772 = encode_clo(clo30599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2963829772;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29927 = encode_clo(alloc_clo(lam29927_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29929 = arg_buffer[1];
//reading env and args
void* kont29633 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30601 = alloc_clo(lam29927_fptr, 8);

//setting env list
clo30601[1] = cdr;
clo30601[2] = list;
clo30601[3] = cons;
clo30601[4] = car;
clo30601[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo30601[6] = map;
clo30601[7] = lst;
clo30601[8] = kont29633;
void* f2963929768 = encode_clo(clo30601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2963929768;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam29930_fptr() // lam29930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29931 = arg_buffer[1];
//reading env and args
void* x2954429783 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29640 = (decode_clo(env29931))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29640);
arg_buffer[2] = x2954429783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29640))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29930 = encode_clo(alloc_clo(lam29930_fptr, 0));

void* lam29932_fptr() // lam29932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29933 = arg_buffer[1];
//reading env and args
void* a2954929793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29640 = (decode_clo(env29933))[3];
//not do dummy comment
void* cons = (decode_clo(env29933))[2];
//not do dummy comment
void* a2954729789 = (decode_clo(env29933))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29640;
arg_buffer[3] = a2954729789;
arg_buffer[4] = a2954929793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29932 = encode_clo(alloc_clo(lam29932_fptr, 0));

void* lam29934_fptr() // lam29934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29935 = arg_buffer[1];
//reading env and args
void* a2954829791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env29935))[5];
//not do dummy comment
void* kont29640 = (decode_clo(env29935))[4];
//not do dummy comment
void* filter = (decode_clo(env29935))[3];
//not do dummy comment
void* cons = (decode_clo(env29935))[2];
//not do dummy comment
void* a2954729789 = (decode_clo(env29935))[1];

//creating new closure instance
void** clo30603 = alloc_clo(lam29932_fptr, 3);

//setting env list
clo30603[1] = a2954729789;
clo30603[2] = cons;
clo30603[3] = kont29640;
void* f2964229792 = encode_clo(clo30603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2964229792;
arg_buffer[3] = op;
arg_buffer[4] = a2954829791;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29934 = encode_clo(alloc_clo(lam29934_fptr, 0));

void* lam29936_fptr() // lam29936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29937 = arg_buffer[1];
//reading env and args
void* a2954729789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29937))[6];
//not do dummy comment
void* lst = (decode_clo(env29937))[5];
//not do dummy comment
void* op = (decode_clo(env29937))[4];
//not do dummy comment
void* kont29640 = (decode_clo(env29937))[3];
//not do dummy comment
void* filter = (decode_clo(env29937))[2];
//not do dummy comment
void* cons = (decode_clo(env29937))[1];

//creating new closure instance
void** clo30605 = alloc_clo(lam29934_fptr, 5);

//setting env list
clo30605[1] = a2954729789;
clo30605[2] = cons;
clo30605[3] = filter;
clo30605[4] = kont29640;
clo30605[5] = op;
void* f2964329790 = encode_clo(clo30605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2964329790;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29936 = encode_clo(alloc_clo(lam29936_fptr, 0));

void* lam29938_fptr() // lam29938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29939 = arg_buffer[1];
//reading env and args
void* a2955029795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env29939))[3];
//not do dummy comment
void* kont29640 = (decode_clo(env29939))[2];
//not do dummy comment
void* filter = (decode_clo(env29939))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont29640;
arg_buffer[3] = op;
arg_buffer[4] = a2955029795;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29938 = encode_clo(alloc_clo(lam29938_fptr, 0));

void* lam29940_fptr() // lam29940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29941 = arg_buffer[1];
//reading env and args
void* a2954629787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29941))[7];
//not do dummy comment
void* lst = (decode_clo(env29941))[6];
//not do dummy comment
void* op = (decode_clo(env29941))[5];
//not do dummy comment
void* kont29640 = (decode_clo(env29941))[4];
//not do dummy comment
void* cons = (decode_clo(env29941))[3];
//not do dummy comment
void* filter = (decode_clo(env29941))[2];
//not do dummy comment
void* car = (decode_clo(env29941))[1];

//if-clause
bool if_guard30606 = is_true(a2954629787);
if(if_guard30606)
{

//creating new closure instance
void** clo30608 = alloc_clo(lam29936_fptr, 6);

//setting env list
clo30608[1] = cons;
clo30608[2] = filter;
clo30608[3] = kont29640;
clo30608[4] = op;
clo30608[5] = lst;
clo30608[6] = cdr;
void* f2964429788 = encode_clo(clo30608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2964429788;
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
void** clo30610 = alloc_clo(lam29938_fptr, 3);

//setting env list
clo30610[1] = filter;
clo30610[2] = kont29640;
clo30610[3] = op;
void* f2964529794 = encode_clo(clo30610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2964529794;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29940 = encode_clo(alloc_clo(lam29940_fptr, 0));

void* lam29942_fptr() // lam29942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29943 = arg_buffer[1];
//reading env and args
void* a2954529785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29943))[7];
//not do dummy comment
void* lst = (decode_clo(env29943))[6];
//not do dummy comment
void* op = (decode_clo(env29943))[5];
//not do dummy comment
void* kont29640 = (decode_clo(env29943))[4];
//not do dummy comment
void* cons = (decode_clo(env29943))[3];
//not do dummy comment
void* filter = (decode_clo(env29943))[2];
//not do dummy comment
void* car = (decode_clo(env29943))[1];

//creating new closure instance
void** clo30612 = alloc_clo(lam29940_fptr, 7);

//setting env list
clo30612[1] = car;
clo30612[2] = filter;
clo30612[3] = cons;
clo30612[4] = kont29640;
clo30612[5] = op;
clo30612[6] = lst;
clo30612[7] = cdr;
void* f2964629786 = encode_clo(clo30612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2964629786;
arg_buffer[3] = a2954529785;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29942 = encode_clo(alloc_clo(lam29942_fptr, 0));

void* lam29944_fptr() // lam29944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29945 = arg_buffer[1];
//reading env and args
void* a2954329781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29945))[8];
//not do dummy comment
void* op = (decode_clo(env29945))[7];
//not do dummy comment
void* kont29640 = (decode_clo(env29945))[6];
//not do dummy comment
void* cons = (decode_clo(env29945))[5];
//not do dummy comment
void* list = (decode_clo(env29945))[4];
//not do dummy comment
void* cdr = (decode_clo(env29945))[3];
//not do dummy comment
void* filter = (decode_clo(env29945))[2];
//not do dummy comment
void* car = (decode_clo(env29945))[1];

//if-clause
bool if_guard30613 = is_true(a2954329781);
if(if_guard30613)
{

//creating new closure instance
void** clo30615 = alloc_clo(lam29930_fptr, 1);

//setting env list
clo30615[1] = kont29640;
void* f2964129782 = encode_clo(clo30615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2964129782;
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
void** clo30617 = alloc_clo(lam29942_fptr, 7);

//setting env list
clo30617[1] = car;
clo30617[2] = filter;
clo30617[3] = cons;
clo30617[4] = kont29640;
clo30617[5] = op;
clo30617[6] = lst;
clo30617[7] = cdr;
void* f2964729784 = encode_clo(clo30617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2964729784;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29944 = encode_clo(alloc_clo(lam29944_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29946 = arg_buffer[1];
//reading env and args
void* kont29640 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30619 = alloc_clo(lam29944_fptr, 8);

//setting env list
clo30619[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo30619[2] = filter;
clo30619[3] = cdr;
clo30619[4] = list;
clo30619[5] = cons;
clo30619[6] = kont29640;
clo30619[7] = op;
clo30619[8] = lst;
void* f2964829780 = encode_clo(clo30619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2964829780;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam29947_fptr() // lam29947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29948 = arg_buffer[1];
//reading env and args
void* a2955529803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29649 = (decode_clo(env29948))[3];
//not do dummy comment
void* drop = (decode_clo(env29948))[2];
//not do dummy comment
void* a2955329800 = (decode_clo(env29948))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont29649;
arg_buffer[3] = a2955329800;
arg_buffer[4] = a2955529803;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29947 = encode_clo(alloc_clo(lam29947_fptr, 0));

void* lam29950_fptr() // lam29950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29951 = arg_buffer[1];
//reading env and args
void* a2955329800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29649 = (decode_clo(env29951))[4];
//not do dummy comment
void* drop = (decode_clo(env29951))[3];
//not do dummy comment
void* n = (decode_clo(env29951))[2];
//not do dummy comment
void* _u45 = (decode_clo(env29951))[1];
mpz_t* mpzvar30620 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30620, "1", 10);
void* a2955429801 = encode_mpz(mpzvar30620);

//creating new closure instance
void** clo30622 = alloc_clo(lam29947_fptr, 3);

//setting env list
clo30622[1] = a2955329800;
clo30622[2] = drop;
clo30622[3] = kont29649;
void* f2965029802 = encode_clo(clo30622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2965029802;
arg_buffer[3] = n;
arg_buffer[4] = a2955429801;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29950 = encode_clo(alloc_clo(lam29950_fptr, 0));

void* lam29952_fptr() // lam29952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29953 = arg_buffer[1];
//reading env and args
void* a2955229798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29953))[6];
//not do dummy comment
void* kont29649 = (decode_clo(env29953))[5];
//not do dummy comment
void* n = (decode_clo(env29953))[4];
//not do dummy comment
void* _u45 = (decode_clo(env29953))[3];
//not do dummy comment
void* lst = (decode_clo(env29953))[2];
//not do dummy comment
void* drop = (decode_clo(env29953))[1];

//if-clause
bool if_guard30623 = is_true(a2955229798);
if(if_guard30623)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29649);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30625 = alloc_clo(lam29950_fptr, 4);

//setting env list
clo30625[1] = _u45;
clo30625[2] = n;
clo30625[3] = drop;
clo30625[4] = kont29649;
void* f2965129799 = encode_clo(clo30625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2965129799;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29952 = encode_clo(alloc_clo(lam29952_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29955 = arg_buffer[1];
//reading env and args
void* kont29649 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar30626 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30626, "0", 10);
void* a2955129796 = encode_mpz(mpzvar30626);

//creating new closure instance
void** clo30628 = alloc_clo(lam29952_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo30628[1] = drop;
clo30628[2] = lst;
clo30628[3] = _u45;
clo30628[4] = n;
clo30628[5] = kont29649;
clo30628[6] = cdr;
void* f2965229797 = encode_clo(clo30628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2965229797;
arg_buffer[3] = n;
arg_buffer[4] = a2955129796;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam29956_fptr() // lam29956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29957 = arg_buffer[1];
//reading env and args
void* a2955929811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2955729807 = (decode_clo(env29957))[3];
//not do dummy comment
void* kont29653 = (decode_clo(env29957))[2];
//not do dummy comment
void* proc = (decode_clo(env29957))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont29653;
arg_buffer[3] = a2955729807;
arg_buffer[4] = a2955929811;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29956 = encode_clo(alloc_clo(lam29956_fptr, 0));

void* lam29958_fptr() // lam29958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29959 = arg_buffer[1];
//reading env and args
void* a2955829809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2955729807 = (decode_clo(env29959))[5];
//not do dummy comment
void* foldr = (decode_clo(env29959))[4];
//not do dummy comment
void* kont29653 = (decode_clo(env29959))[3];
//not do dummy comment
void* proc = (decode_clo(env29959))[2];
//not do dummy comment
void* acc = (decode_clo(env29959))[1];

//creating new closure instance
void** clo30630 = alloc_clo(lam29956_fptr, 3);

//setting env list
clo30630[1] = proc;
clo30630[2] = kont29653;
clo30630[3] = a2955729807;
void* f2965429810 = encode_clo(clo30630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2965429810;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2955829809;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29958 = encode_clo(alloc_clo(lam29958_fptr, 0));

void* lam29960_fptr() // lam29960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29961 = arg_buffer[1];
//reading env and args
void* a2955729807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29961))[6];
//not do dummy comment
void* kont29653 = (decode_clo(env29961))[5];
//not do dummy comment
void* foldr = (decode_clo(env29961))[4];
//not do dummy comment
void* lst = (decode_clo(env29961))[3];
//not do dummy comment
void* proc = (decode_clo(env29961))[2];
//not do dummy comment
void* acc = (decode_clo(env29961))[1];

//creating new closure instance
void** clo30632 = alloc_clo(lam29958_fptr, 5);

//setting env list
clo30632[1] = acc;
clo30632[2] = proc;
clo30632[3] = kont29653;
clo30632[4] = foldr;
clo30632[5] = a2955729807;
void* f2965529808 = encode_clo(clo30632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2965529808;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29960 = encode_clo(alloc_clo(lam29960_fptr, 0));

void* lam29962_fptr() // lam29962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29963 = arg_buffer[1];
//reading env and args
void* a2955629805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29963))[7];
//not do dummy comment
void* kont29653 = (decode_clo(env29963))[6];
//not do dummy comment
void* car = (decode_clo(env29963))[5];
//not do dummy comment
void* foldr = (decode_clo(env29963))[4];
//not do dummy comment
void* lst = (decode_clo(env29963))[3];
//not do dummy comment
void* proc = (decode_clo(env29963))[2];
//not do dummy comment
void* acc = (decode_clo(env29963))[1];

//if-clause
bool if_guard30633 = is_true(a2955629805);
if(if_guard30633)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29653);
arg_buffer[2] = acc;
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
void** clo30635 = alloc_clo(lam29960_fptr, 6);

//setting env list
clo30635[1] = acc;
clo30635[2] = proc;
clo30635[3] = lst;
clo30635[4] = foldr;
clo30635[5] = kont29653;
clo30635[6] = cdr;
void* f2965629806 = encode_clo(clo30635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2965629806;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29962 = encode_clo(alloc_clo(lam29962_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29964 = arg_buffer[1];
//reading env and args
void* kont29653 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo30637 = alloc_clo(lam29962_fptr, 7);

//setting env list
clo30637[1] = acc;
clo30637[2] = proc;
clo30637[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo30637[4] = foldr;
clo30637[5] = car;
clo30637[6] = kont29653;
clo30637[7] = cdr;
void* f2965729804 = encode_clo(clo30637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2965729804;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam29965_fptr() // lam29965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29966 = arg_buffer[1];
//reading env and args
void* a2956329819 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2956129815 = (decode_clo(env29966))[3];
//not do dummy comment
void* kont29658 = (decode_clo(env29966))[2];
//not do dummy comment
void* cons = (decode_clo(env29966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29658;
arg_buffer[3] = a2956129815;
arg_buffer[4] = a2956329819;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29965 = encode_clo(alloc_clo(lam29965_fptr, 0));

void* lam29967_fptr() // lam29967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29968 = arg_buffer[1];
//reading env and args
void* a2956229817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env29968))[5];
//not do dummy comment
void* a2956129815 = (decode_clo(env29968))[4];
//not do dummy comment
void* cons = (decode_clo(env29968))[3];
//not do dummy comment
void* lst2 = (decode_clo(env29968))[2];
//not do dummy comment
void* kont29658 = (decode_clo(env29968))[1];

//creating new closure instance
void** clo30639 = alloc_clo(lam29965_fptr, 3);

//setting env list
clo30639[1] = cons;
clo30639[2] = kont29658;
clo30639[3] = a2956129815;
void* f2965929818 = encode_clo(clo30639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2965929818;
arg_buffer[3] = a2956229817;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29967 = encode_clo(alloc_clo(lam29967_fptr, 0));

void* lam29969_fptr() // lam29969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29970 = arg_buffer[1];
//reading env and args
void* a2956129815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29970))[6];
//not do dummy comment
void* append = (decode_clo(env29970))[5];
//not do dummy comment
void* lst1 = (decode_clo(env29970))[4];
//not do dummy comment
void* cons = (decode_clo(env29970))[3];
//not do dummy comment
void* lst2 = (decode_clo(env29970))[2];
//not do dummy comment
void* kont29658 = (decode_clo(env29970))[1];

//creating new closure instance
void** clo30641 = alloc_clo(lam29967_fptr, 5);

//setting env list
clo30641[1] = kont29658;
clo30641[2] = lst2;
clo30641[3] = cons;
clo30641[4] = a2956129815;
clo30641[5] = append;
void* f2966029816 = encode_clo(clo30641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2966029816;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29969 = encode_clo(alloc_clo(lam29969_fptr, 0));

void* lam29971_fptr() // lam29971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29972 = arg_buffer[1];
//reading env and args
void* a2956029813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29972))[7];
//not do dummy comment
void* append = (decode_clo(env29972))[6];
//not do dummy comment
void* cons = (decode_clo(env29972))[5];
//not do dummy comment
void* lst2 = (decode_clo(env29972))[4];
//not do dummy comment
void* kont29658 = (decode_clo(env29972))[3];
//not do dummy comment
void* lst1 = (decode_clo(env29972))[2];
//not do dummy comment
void* car = (decode_clo(env29972))[1];

//if-clause
bool if_guard30642 = is_true(a2956029813);
if(if_guard30642)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29658);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29658))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30644 = alloc_clo(lam29969_fptr, 6);

//setting env list
clo30644[1] = kont29658;
clo30644[2] = lst2;
clo30644[3] = cons;
clo30644[4] = lst1;
clo30644[5] = append;
clo30644[6] = cdr;
void* f2966129814 = encode_clo(clo30644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2966129814;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29971 = encode_clo(alloc_clo(lam29971_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29973 = arg_buffer[1];
//reading env and args
void* kont29658 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30646 = alloc_clo(lam29971_fptr, 7);

//setting env list
clo30646[1] = car;
clo30646[2] = lst1;
clo30646[3] = kont29658;
clo30646[4] = lst2;
clo30646[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo30646[6] = append;
clo30646[7] = cdr;
void* f2966229812 = encode_clo(clo30646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2966229812;
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
void* _29974 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2966329820 = prim_car(lst);
void* lst29821 = prim_cdr(lst);
void* x2956429822 = apply_prim_hash(lst29821);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2966329820);
arg_buffer[2] = x2956429822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2966329820))[0]);
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
void* _29975 = arg_buffer[1];
//reading env and args
void* kont29665 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2956529823 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29665);
arg_buffer[2] = x2956529823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29665))[0]);
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
void* _29976 = arg_buffer[1];
//reading env and args
void* kont29666 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2956629824 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29666);
arg_buffer[2] = x2956629824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29666))[0]);
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
void* _29977 = arg_buffer[1];
//reading env and args
void* kont29667 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2956729825 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29667);
arg_buffer[2] = x2956729825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29667))[0]);
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
void* _29978 = arg_buffer[1];
//reading env and args
void* kont29668 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2956829826 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29668);
arg_buffer[2] = x2956829826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29668))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29981 = arg_buffer[1];
//reading env and args
void* kont29669 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar30647 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30647, "1", 10);
void* a2956929827 = encode_mpz(mpzvar30647);
mpz_t* mpzvar30648 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30648, "2", 10);
void* a2957029828 = encode_mpz(mpzvar30648);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont29669;
arg_buffer[3] = a2956929827;
arg_buffer[4] = a2957029828;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam29982_fptr() // lam29982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29983 = arg_buffer[1];
//reading env and args
void* x2957129830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29670 = (decode_clo(env29983))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29670);
arg_buffer[2] = x2957129830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29670))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29982 = encode_clo(alloc_clo(lam29982_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29984 = arg_buffer[1];
//reading env and args
void* kont29670 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo30650 = alloc_clo(lam29982_fptr, 1);

//setting env list
clo30650[1] = kont29670;
void* f2967129829 = encode_clo(clo30650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2967129829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
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

