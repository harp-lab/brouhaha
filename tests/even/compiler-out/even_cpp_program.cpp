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
void* _12836 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1254212659 = prim_car(lst);
void* lst12660 = prim_cdr(lst);
void* x1244212661 = apply_prim__u43(lst12660);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1254212659);
arg_buffer[2] = x1244212661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1254212659))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12837 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1254412662 = prim_car(lst);
void* lst12663 = prim_cdr(lst);
void* x1244312664 = apply_prim_max(lst12663);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1254412662);
arg_buffer[2] = x1244312664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1254412662))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12838 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1254612665 = prim_car(lst);
void* lst12666 = prim_cdr(lst);
void* x1244412667 = apply_prim__u45(lst12666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1254612665);
arg_buffer[2] = x1244412667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1254612665))[0]);
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
void* _12839 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1254812668 = prim_car(lst);
void* lst12669 = prim_cdr(lst);
void* x1244512670 = apply_prim__u42(lst12669);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1254812668);
arg_buffer[2] = x1244512670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1254812668))[0]);
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
void* _12840 = arg_buffer[1];
//reading env and args
void* kont12550 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1244612671 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12550);
arg_buffer[2] = x1244612671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12550))[0]);
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
void* _12841 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1255112672 = prim_car(lst);
void* lst12673 = prim_cdr(lst);
void* x1244712674 = apply_prim__u47(lst12673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1255112672);
arg_buffer[2] = x1244712674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1255112672))[0]);
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
void* _12842 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1255312675 = prim_car(lst);
void* lst12676 = prim_cdr(lst);
void* x1244812677 = apply_prim__u61(lst12676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1255312675);
arg_buffer[2] = x1244812677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1255312675))[0]);
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
void* _12843 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1255512678 = prim_car(lst);
void* lst12679 = prim_cdr(lst);
void* x1244912680 = apply_prim__u62(lst12679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1255512678);
arg_buffer[2] = x1244912680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1255512678))[0]);
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
void* _12844 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1255712681 = prim_car(lst);
void* lst12682 = prim_cdr(lst);
void* x1245012683 = apply_prim__u60(lst12682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1255712681);
arg_buffer[2] = x1245012683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1255712681))[0]);
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
void* _12845 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1255912684 = prim_car(lst);
void* lst12685 = prim_cdr(lst);
void* x1245112686 = apply_prim__u60_u61(lst12685);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1255912684);
arg_buffer[2] = x1245112686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1255912684))[0]);
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
void* _12846 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1256112687 = prim_car(lst);
void* lst12688 = prim_cdr(lst);
void* x1245212689 = apply_prim__u62_u61(lst12688);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1256112687);
arg_buffer[2] = x1245212689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1256112687))[0]);
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
void* _12847 = arg_buffer[1];
//reading env and args
void* kont12563 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1245312690 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12563);
arg_buffer[2] = x1245312690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12563))[0]);
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
void* _12848 = arg_buffer[1];
//reading env and args
void* kont12564 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1245412691 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12564);
arg_buffer[2] = x1245412691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12564))[0]);
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
void* _12849 = arg_buffer[1];
//reading env and args
void* kont12565 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1245512692 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12565);
arg_buffer[2] = x1245512692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12565))[0]);
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
void* _12850 = arg_buffer[1];
//reading env and args
void* kont12566 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1245612693 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12566);
arg_buffer[2] = x1245612693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12566))[0]);
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
void* _12851 = arg_buffer[1];
//reading env and args
void* kont12567 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1245712694 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12567);
arg_buffer[2] = x1245712694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12567))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12852 = arg_buffer[1];
//reading env and args
void* kont12568 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1245812695 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12568);
arg_buffer[2] = x1245812695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12568))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12853 = arg_buffer[1];
//reading env and args
void* kont12569 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1245912696 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12569);
arg_buffer[2] = x1245912696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12569))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam12854_fptr() // lam12854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12855 = arg_buffer[1];
//reading env and args
void* a1246212700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1246012697 = (decode_clo(env12855))[3];
//not do dummy comment
void* kont12570 = (decode_clo(env12855))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12855))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12570;
arg_buffer[3] = a1246012697;
arg_buffer[4] = a1246212700;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12854 = encode_clo(alloc_clo(lam12854_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12858 = arg_buffer[1];
//reading env and args
void* kont12570 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13004 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13004, "0", 10);
void* a1246012697 = encode_mpz(mpzvar13004);
mpz_t* mpzvar13005 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13005, "2", 10);
void* a1246112698 = encode_mpz(mpzvar13005);

//creating new closure instance
void** clo13007 = alloc_clo(lam12854_fptr, 3);

//setting env list
clo13007[1] = equal_u63;
clo13007[2] = kont12570;
clo13007[3] = a1246012697;
void* f1257112699 = encode_clo(clo13007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1257112699;
arg_buffer[3] = x;
arg_buffer[4] = a1246112698;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam12859_fptr() // lam12859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12860 = arg_buffer[1];
//reading env and args
void* a1246512704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12572 = (decode_clo(env12860))[3];
//not do dummy comment
void* a1246312701 = (decode_clo(env12860))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12860))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12572;
arg_buffer[3] = a1246312701;
arg_buffer[4] = a1246512704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12859 = encode_clo(alloc_clo(lam12859_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12863 = arg_buffer[1];
//reading env and args
void* kont12572 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13008 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13008, "1", 10);
void* a1246312701 = encode_mpz(mpzvar13008);
mpz_t* mpzvar13009 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13009, "2", 10);
void* a1246412702 = encode_mpz(mpzvar13009);

//creating new closure instance
void** clo13011 = alloc_clo(lam12859_fptr, 3);

//setting env list
clo13011[1] = equal_u63;
clo13011[2] = a1246312701;
clo13011[3] = kont12572;
void* f1257312703 = encode_clo(clo13011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1257312703;
arg_buffer[3] = x;
arg_buffer[4] = a1246412702;
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
void* _12864 = arg_buffer[1];
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

void* kont1257412705 = prim_car(x);
void* x12706 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1257412705);
arg_buffer[2] = x12706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1257412705))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12865 = arg_buffer[1];
//reading env and args
void* kont12576 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1246612707 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12576);
arg_buffer[2] = x1246612707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12576))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12866 = arg_buffer[1];
//reading env and args
void* kont12577 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1246712708 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12577);
arg_buffer[2] = x1246712708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12577))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam12869_fptr() // lam12869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12870 = arg_buffer[1];
//reading env and args
void* a1247312718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12578 = (decode_clo(env12870))[3];
//not do dummy comment
void* x = (decode_clo(env12870))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12870))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont12578;
arg_buffer[3] = x;
arg_buffer[4] = a1247312718;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12869 = encode_clo(alloc_clo(lam12869_fptr, 0));

void* lam12871_fptr() // lam12871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12872 = arg_buffer[1];
//reading env and args
void* a1247112715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12872))[5];
//not do dummy comment
void* lst = (decode_clo(env12872))[4];
//not do dummy comment
void* kont12578 = (decode_clo(env12872))[3];
//not do dummy comment
void* x = (decode_clo(env12872))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12872))[1];

//if-clause
bool if_guard13012 = is_true(a1247112715);
if(if_guard13012)
{
void* x1247212716 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12578);
arg_buffer[2] = x1247212716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12578))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13014 = alloc_clo(lam12869_fptr, 3);

//setting env list
clo13014[1] = member_u63;
clo13014[2] = x;
clo13014[3] = kont12578;
void* f1257912717 = encode_clo(clo13014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1257912717;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12871 = encode_clo(alloc_clo(lam12871_fptr, 0));

void* lam12873_fptr() // lam12873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12874 = arg_buffer[1];
//reading env and args
void* a1247012713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12874))[6];
//not do dummy comment
void* lst = (decode_clo(env12874))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env12874))[4];
//not do dummy comment
void* kont12578 = (decode_clo(env12874))[3];
//not do dummy comment
void* x = (decode_clo(env12874))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12874))[1];

//creating new closure instance
void** clo13016 = alloc_clo(lam12871_fptr, 5);

//setting env list
clo13016[1] = member_u63;
clo13016[2] = x;
clo13016[3] = kont12578;
clo13016[4] = lst;
clo13016[5] = cdr;
void* f1258012714 = encode_clo(clo13016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1258012714;
arg_buffer[3] = a1247012713;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12873 = encode_clo(alloc_clo(lam12873_fptr, 0));

void* lam12875_fptr() // lam12875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12876 = arg_buffer[1];
//reading env and args
void* a1246812710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12876))[7];
//not do dummy comment
void* lst = (decode_clo(env12876))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env12876))[5];
//not do dummy comment
void* kont12578 = (decode_clo(env12876))[4];
//not do dummy comment
void* x = (decode_clo(env12876))[3];
//not do dummy comment
void* car = (decode_clo(env12876))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12876))[1];

//if-clause
bool if_guard13017 = is_true(a1246812710);
if(if_guard13017)
{
void* x1246912711 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12578);
arg_buffer[2] = x1246912711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12578))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13019 = alloc_clo(lam12873_fptr, 6);

//setting env list
clo13019[1] = member_u63;
clo13019[2] = x;
clo13019[3] = kont12578;
clo13019[4] = equal_u63;
clo13019[5] = lst;
clo13019[6] = cdr;
void* f1258112712 = encode_clo(clo13019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1258112712;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12875 = encode_clo(alloc_clo(lam12875_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12877 = arg_buffer[1];
//reading env and args
void* kont12578 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13021 = alloc_clo(lam12875_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo13021[1] = member_u63;
clo13021[2] = car;
clo13021[3] = x;
clo13021[4] = kont12578;
clo13021[5] = equal_u63;
clo13021[6] = lst;
clo13021[7] = cdr;
void* f1258212709 = encode_clo(clo13021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1258212709;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam12878_fptr() // lam12878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12879 = arg_buffer[1];
//reading env and args
void* a1247712726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env12879))[4];
//not do dummy comment
void* a1247612724 = (decode_clo(env12879))[3];
//not do dummy comment
void* kont12583 = (decode_clo(env12879))[2];
//not do dummy comment
void* foldl = (decode_clo(env12879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont12583;
arg_buffer[3] = fun;
arg_buffer[4] = a1247612724;
arg_buffer[5] = a1247712726;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12878 = encode_clo(alloc_clo(lam12878_fptr, 0));

void* lam12880_fptr() // lam12880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12881 = arg_buffer[1];
//reading env and args
void* a1247612724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12881))[5];
//not do dummy comment
void* lst = (decode_clo(env12881))[4];
//not do dummy comment
void* fun = (decode_clo(env12881))[3];
//not do dummy comment
void* kont12583 = (decode_clo(env12881))[2];
//not do dummy comment
void* foldl = (decode_clo(env12881))[1];

//creating new closure instance
void** clo13023 = alloc_clo(lam12878_fptr, 4);

//setting env list
clo13023[1] = foldl;
clo13023[2] = kont12583;
clo13023[3] = a1247612724;
clo13023[4] = fun;
void* f1258412725 = encode_clo(clo13023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1258412725;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12880 = encode_clo(alloc_clo(lam12880_fptr, 0));

void* lam12882_fptr() // lam12882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12883 = arg_buffer[1];
//reading env and args
void* a1247512722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12883))[6];
//not do dummy comment
void* lst = (decode_clo(env12883))[5];
//not do dummy comment
void* fun = (decode_clo(env12883))[4];
//not do dummy comment
void* acc = (decode_clo(env12883))[3];
//not do dummy comment
void* kont12583 = (decode_clo(env12883))[2];
//not do dummy comment
void* foldl = (decode_clo(env12883))[1];

//creating new closure instance
void** clo13025 = alloc_clo(lam12880_fptr, 5);

//setting env list
clo13025[1] = foldl;
clo13025[2] = kont12583;
clo13025[3] = fun;
clo13025[4] = lst;
clo13025[5] = cdr;
void* f1258512723 = encode_clo(clo13025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1258512723;
arg_buffer[3] = a1247512722;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12882 = encode_clo(alloc_clo(lam12882_fptr, 0));

void* lam12884_fptr() // lam12884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12885 = arg_buffer[1];
//reading env and args
void* a1247412720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12885))[7];
//not do dummy comment
void* lst = (decode_clo(env12885))[6];
//not do dummy comment
void* fun = (decode_clo(env12885))[5];
//not do dummy comment
void* acc = (decode_clo(env12885))[4];
//not do dummy comment
void* car = (decode_clo(env12885))[3];
//not do dummy comment
void* kont12583 = (decode_clo(env12885))[2];
//not do dummy comment
void* foldl = (decode_clo(env12885))[1];

//if-clause
bool if_guard13026 = is_true(a1247412720);
if(if_guard13026)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12583);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13028 = alloc_clo(lam12882_fptr, 6);

//setting env list
clo13028[1] = foldl;
clo13028[2] = kont12583;
clo13028[3] = acc;
clo13028[4] = fun;
clo13028[5] = lst;
clo13028[6] = cdr;
void* f1258612721 = encode_clo(clo13028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1258612721;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12884 = encode_clo(alloc_clo(lam12884_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12886 = arg_buffer[1];
//reading env and args
void* kont12583 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13030 = alloc_clo(lam12884_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo13030[1] = foldl;
clo13030[2] = kont12583;
clo13030[3] = car;
clo13030[4] = acc;
clo13030[5] = fun;
clo13030[6] = lst;
clo13030[7] = cdr;
void* f1258712719 = encode_clo(clo13030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1258712719;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam12887_fptr() // lam12887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12888 = arg_buffer[1];
//reading env and args
void* a1248112734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1247912730 = (decode_clo(env12888))[3];
//not do dummy comment
void* kont12588 = (decode_clo(env12888))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12888))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12588;
arg_buffer[3] = a1247912730;
arg_buffer[4] = a1248112734;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12887 = encode_clo(alloc_clo(lam12887_fptr, 0));

void* lam12889_fptr() // lam12889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12890 = arg_buffer[1];
//reading env and args
void* a1248012732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1247912730 = (decode_clo(env12890))[5];
//not do dummy comment
void* kont12588 = (decode_clo(env12890))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12890))[3];
//not do dummy comment
void* lst2 = (decode_clo(env12890))[2];
//not do dummy comment
void* cons = (decode_clo(env12890))[1];

//creating new closure instance
void** clo13032 = alloc_clo(lam12887_fptr, 3);

//setting env list
clo13032[1] = reverse_u45helper;
clo13032[2] = kont12588;
clo13032[3] = a1247912730;
void* f1258912733 = encode_clo(clo13032);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1258912733;
arg_buffer[3] = a1248012732;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12889 = encode_clo(alloc_clo(lam12889_fptr, 0));

void* lam12891_fptr() // lam12891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12892 = arg_buffer[1];
//reading env and args
void* a1247912730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12588 = (decode_clo(env12892))[6];
//not do dummy comment
void* lst = (decode_clo(env12892))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12892))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12892))[3];
//not do dummy comment
void* car = (decode_clo(env12892))[2];
//not do dummy comment
void* cons = (decode_clo(env12892))[1];

//creating new closure instance
void** clo13034 = alloc_clo(lam12889_fptr, 5);

//setting env list
clo13034[1] = cons;
clo13034[2] = lst2;
clo13034[3] = reverse_u45helper;
clo13034[4] = kont12588;
clo13034[5] = a1247912730;
void* f1259012731 = encode_clo(clo13034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1259012731;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12891 = encode_clo(alloc_clo(lam12891_fptr, 0));

void* lam12893_fptr() // lam12893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12894 = arg_buffer[1];
//reading env and args
void* a1247812728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12894))[7];
//not do dummy comment
void* kont12588 = (decode_clo(env12894))[6];
//not do dummy comment
void* lst = (decode_clo(env12894))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12894))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12894))[3];
//not do dummy comment
void* car = (decode_clo(env12894))[2];
//not do dummy comment
void* cons = (decode_clo(env12894))[1];

//if-clause
bool if_guard13035 = is_true(a1247812728);
if(if_guard13035)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12588);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13037 = alloc_clo(lam12891_fptr, 6);

//setting env list
clo13037[1] = cons;
clo13037[2] = car;
clo13037[3] = lst2;
clo13037[4] = reverse_u45helper;
clo13037[5] = lst;
clo13037[6] = kont12588;
void* f1259112729 = encode_clo(clo13037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1259112729;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12893 = encode_clo(alloc_clo(lam12893_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12895 = arg_buffer[1];
//reading env and args
void* kont12588 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13039 = alloc_clo(lam12893_fptr, 7);

//setting env list
clo13039[1] = cons;
clo13039[2] = car;
clo13039[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo13039[4] = reverse_u45helper;
clo13039[5] = lst;
clo13039[6] = kont12588;
clo13039[7] = cdr;
void* f1259212727 = encode_clo(clo13039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1259212727;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam12896_fptr() // lam12896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12897 = arg_buffer[1];
//reading env and args
void* a1248212736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12897))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12897))[2];
//not do dummy comment
void* kont12593 = (decode_clo(env12897))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12593;
arg_buffer[3] = lst;
arg_buffer[4] = a1248212736;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12896 = encode_clo(alloc_clo(lam12896_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12898 = arg_buffer[1];
//reading env and args
void* kont12593 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13041 = alloc_clo(lam12896_fptr, 3);

//setting env list
clo13041[1] = kont12593;
clo13041[2] = reverse_u45helper;
clo13041[3] = lst;
void* f1259412735 = encode_clo(clo13041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1259412735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam12899_fptr() // lam12899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12900 = arg_buffer[1];
//reading env and args
void* x1248512741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12595 = (decode_clo(env12900))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12595);
arg_buffer[2] = x1248512741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12595))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12899 = encode_clo(alloc_clo(lam12899_fptr, 0));

void* lam12901_fptr() // lam12901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12902 = arg_buffer[1];
//reading env and args
void* a1249012750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1248812746 = (decode_clo(env12902))[4];
//not do dummy comment
void* kont12595 = (decode_clo(env12902))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12902))[2];
//not do dummy comment
void* a1248612743 = (decode_clo(env12902))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12595;
arg_buffer[3] = a1248612743;
arg_buffer[4] = a1248812746;
arg_buffer[5] = a1249012750;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12901 = encode_clo(alloc_clo(lam12901_fptr, 0));

void* lam12903_fptr() // lam12903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12904 = arg_buffer[1];
//reading env and args
void* a1248912748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1248812746 = (decode_clo(env12904))[6];
//not do dummy comment
void* kont12595 = (decode_clo(env12904))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12904))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12904))[3];
//not do dummy comment
void* a1248612743 = (decode_clo(env12904))[2];
//not do dummy comment
void* cons = (decode_clo(env12904))[1];

//creating new closure instance
void** clo13043 = alloc_clo(lam12901_fptr, 4);

//setting env list
clo13043[1] = a1248612743;
clo13043[2] = take_u45helper;
clo13043[3] = kont12595;
clo13043[4] = a1248812746;
void* f1259712749 = encode_clo(clo13043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1259712749;
arg_buffer[3] = a1248912748;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12903 = encode_clo(alloc_clo(lam12903_fptr, 0));

void* lam12905_fptr() // lam12905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12906 = arg_buffer[1];
//reading env and args
void* a1248812746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12906))[7];
//not do dummy comment
void* kont12595 = (decode_clo(env12906))[6];
//not do dummy comment
void* car = (decode_clo(env12906))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12906))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12906))[3];
//not do dummy comment
void* a1248612743 = (decode_clo(env12906))[2];
//not do dummy comment
void* cons = (decode_clo(env12906))[1];

//creating new closure instance
void** clo13045 = alloc_clo(lam12903_fptr, 6);

//setting env list
clo13045[1] = cons;
clo13045[2] = a1248612743;
clo13045[3] = lst2;
clo13045[4] = take_u45helper;
clo13045[5] = kont12595;
clo13045[6] = a1248812746;
void* f1259812747 = encode_clo(clo13045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1259812747;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12905 = encode_clo(alloc_clo(lam12905_fptr, 0));

void* lam12908_fptr() // lam12908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12909 = arg_buffer[1];
//reading env and args
void* a1248612743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12909))[8];
//not do dummy comment
void* kont12595 = (decode_clo(env12909))[7];
//not do dummy comment
void* cons = (decode_clo(env12909))[6];
//not do dummy comment
void* _u45 = (decode_clo(env12909))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12909))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12909))[3];
//not do dummy comment
void* n = (decode_clo(env12909))[2];
//not do dummy comment
void* car = (decode_clo(env12909))[1];
mpz_t* mpzvar13046 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13046, "1", 10);
void* a1248712744 = encode_mpz(mpzvar13046);

//creating new closure instance
void** clo13048 = alloc_clo(lam12905_fptr, 7);

//setting env list
clo13048[1] = cons;
clo13048[2] = a1248612743;
clo13048[3] = lst2;
clo13048[4] = take_u45helper;
clo13048[5] = car;
clo13048[6] = kont12595;
clo13048[7] = lst;
void* f1259912745 = encode_clo(clo13048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1259912745;
arg_buffer[3] = n;
arg_buffer[4] = a1248712744;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12908 = encode_clo(alloc_clo(lam12908_fptr, 0));

void* lam12910_fptr() // lam12910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12911 = arg_buffer[1];
//reading env and args
void* a1248412739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12911))[10];
//not do dummy comment
void* lst = (decode_clo(env12911))[9];
//not do dummy comment
void* reverse = (decode_clo(env12911))[8];
//not do dummy comment
void* kont12595 = (decode_clo(env12911))[7];
//not do dummy comment
void* cons = (decode_clo(env12911))[6];
//not do dummy comment
void* _u45 = (decode_clo(env12911))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12911))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12911))[3];
//not do dummy comment
void* n = (decode_clo(env12911))[2];
//not do dummy comment
void* car = (decode_clo(env12911))[1];

//if-clause
bool if_guard13049 = is_true(a1248412739);
if(if_guard13049)
{

//creating new closure instance
void** clo13051 = alloc_clo(lam12899_fptr, 1);

//setting env list
clo13051[1] = kont12595;
void* f1259612740 = encode_clo(clo13051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1259612740;
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
void** clo13053 = alloc_clo(lam12908_fptr, 8);

//setting env list
clo13053[1] = car;
clo13053[2] = n;
clo13053[3] = lst2;
clo13053[4] = take_u45helper;
clo13053[5] = _u45;
clo13053[6] = cons;
clo13053[7] = kont12595;
clo13053[8] = lst;
void* f1260012742 = encode_clo(clo13053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1260012742;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12910 = encode_clo(alloc_clo(lam12910_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12913 = arg_buffer[1];
//reading env and args
void* kont12595 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar13054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13054, "0", 10);
void* a1248312737 = encode_mpz(mpzvar13054);

//creating new closure instance
void** clo13056 = alloc_clo(lam12910_fptr, 10);

//setting env list
clo13056[1] = car;
clo13056[2] = n;
clo13056[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo13056[4] = take_u45helper;
clo13056[5] = _u45;
clo13056[6] = cons;
clo13056[7] = kont12595;
clo13056[8] = reverse;
clo13056[9] = lst;
clo13056[10] = cdr;
void* f1260112738 = encode_clo(clo13056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1260112738;
arg_buffer[3] = n;
arg_buffer[4] = a1248312737;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam12914_fptr() // lam12914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12915 = arg_buffer[1];
//reading env and args
void* a1249112752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12602 = (decode_clo(env12915))[4];
//not do dummy comment
void* lst = (decode_clo(env12915))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12915))[2];
//not do dummy comment
void* n = (decode_clo(env12915))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12602;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1249112752;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12914 = encode_clo(alloc_clo(lam12914_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12916 = arg_buffer[1];
//reading env and args
void* kont12602 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13058 = alloc_clo(lam12914_fptr, 4);

//setting env list
clo13058[1] = n;
clo13058[2] = take_u45helper;
clo13058[3] = lst;
clo13058[4] = kont12602;
void* f1260312751 = encode_clo(clo13058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1260312751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam12918_fptr() // lam12918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12919 = arg_buffer[1];
//reading env and args
void* a1249612760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12604 = (decode_clo(env12919))[3];
//not do dummy comment
void* _u43 = (decode_clo(env12919))[2];
//not do dummy comment
void* a1249412756 = (decode_clo(env12919))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont12604;
arg_buffer[3] = a1249412756;
arg_buffer[4] = a1249612760;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12918 = encode_clo(alloc_clo(lam12918_fptr, 0));

void* lam12920_fptr() // lam12920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12921 = arg_buffer[1];
//reading env and args
void* a1249512758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12604 = (decode_clo(env12921))[4];
//not do dummy comment
void* length = (decode_clo(env12921))[3];
//not do dummy comment
void* _u43 = (decode_clo(env12921))[2];
//not do dummy comment
void* a1249412756 = (decode_clo(env12921))[1];

//creating new closure instance
void** clo13060 = alloc_clo(lam12918_fptr, 3);

//setting env list
clo13060[1] = a1249412756;
clo13060[2] = _u43;
clo13060[3] = kont12604;
void* f1260512759 = encode_clo(clo13060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1260512759;
arg_buffer[3] = a1249512758;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12920 = encode_clo(alloc_clo(lam12920_fptr, 0));

void* lam12923_fptr() // lam12923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12924 = arg_buffer[1];
//reading env and args
void* a1249212754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12924))[5];
//not do dummy comment
void* kont12604 = (decode_clo(env12924))[4];
//not do dummy comment
void* lst = (decode_clo(env12924))[3];
//not do dummy comment
void* length = (decode_clo(env12924))[2];
//not do dummy comment
void* _u43 = (decode_clo(env12924))[1];

//if-clause
bool if_guard13061 = is_true(a1249212754);
if(if_guard13061)
{
mpz_t* mpzvar13062 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13062, "0", 10);
void* x1249312755 = encode_mpz(mpzvar13062);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12604);
arg_buffer[2] = x1249312755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12604))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar13063 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13063, "1", 10);
void* a1249412756 = encode_mpz(mpzvar13063);

//creating new closure instance
void** clo13065 = alloc_clo(lam12920_fptr, 4);

//setting env list
clo13065[1] = a1249412756;
clo13065[2] = _u43;
clo13065[3] = length;
clo13065[4] = kont12604;
void* f1260612757 = encode_clo(clo13065);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1260612757;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12923 = encode_clo(alloc_clo(lam12923_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12925 = arg_buffer[1];
//reading env and args
void* kont12604 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13067 = alloc_clo(lam12923_fptr, 5);

//setting env list
clo13067[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo13067[2] = length;
clo13067[3] = lst;
clo13067[4] = kont12604;
clo13067[5] = cdr;
void* f1260712753 = encode_clo(clo13067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1260712753;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam12926_fptr() // lam12926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12927 = arg_buffer[1];
//reading env and args
void* x1249812764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12608 = (decode_clo(env12927))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12608);
arg_buffer[2] = x1249812764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12608))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12926 = encode_clo(alloc_clo(lam12926_fptr, 0));

void* lam12928_fptr() // lam12928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12929 = arg_buffer[1];
//reading env and args
void* a1250212772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env12929))[3];
//not do dummy comment
void* a1250012768 = (decode_clo(env12929))[2];
//not do dummy comment
void* kont12608 = (decode_clo(env12929))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12608;
arg_buffer[3] = a1250012768;
arg_buffer[4] = a1250212772;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12928 = encode_clo(alloc_clo(lam12928_fptr, 0));

void* lam12930_fptr() // lam12930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12931 = arg_buffer[1];
//reading env and args
void* a1250112770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env12931))[5];
//not do dummy comment
void* proc = (decode_clo(env12931))[4];
//not do dummy comment
void* cons = (decode_clo(env12931))[3];
//not do dummy comment
void* a1250012768 = (decode_clo(env12931))[2];
//not do dummy comment
void* kont12608 = (decode_clo(env12931))[1];

//creating new closure instance
void** clo13069 = alloc_clo(lam12928_fptr, 3);

//setting env list
clo13069[1] = kont12608;
clo13069[2] = a1250012768;
clo13069[3] = cons;
void* f1261012771 = encode_clo(clo13069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1261012771;
arg_buffer[3] = proc;
arg_buffer[4] = a1250112770;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12930 = encode_clo(alloc_clo(lam12930_fptr, 0));

void* lam12932_fptr() // lam12932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12933 = arg_buffer[1];
//reading env and args
void* a1250012768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12933))[6];
//not do dummy comment
void* lst = (decode_clo(env12933))[5];
//not do dummy comment
void* map = (decode_clo(env12933))[4];
//not do dummy comment
void* kont12608 = (decode_clo(env12933))[3];
//not do dummy comment
void* proc = (decode_clo(env12933))[2];
//not do dummy comment
void* cons = (decode_clo(env12933))[1];

//creating new closure instance
void** clo13071 = alloc_clo(lam12930_fptr, 5);

//setting env list
clo13071[1] = kont12608;
clo13071[2] = a1250012768;
clo13071[3] = cons;
clo13071[4] = proc;
clo13071[5] = map;
void* f1261112769 = encode_clo(clo13071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1261112769;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12932 = encode_clo(alloc_clo(lam12932_fptr, 0));

void* lam12934_fptr() // lam12934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12935 = arg_buffer[1];
//reading env and args
void* a1249912766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12935))[6];
//not do dummy comment
void* lst = (decode_clo(env12935))[5];
//not do dummy comment
void* map = (decode_clo(env12935))[4];
//not do dummy comment
void* kont12608 = (decode_clo(env12935))[3];
//not do dummy comment
void* proc = (decode_clo(env12935))[2];
//not do dummy comment
void* cons = (decode_clo(env12935))[1];

//creating new closure instance
void** clo13073 = alloc_clo(lam12932_fptr, 6);

//setting env list
clo13073[1] = cons;
clo13073[2] = proc;
clo13073[3] = kont12608;
clo13073[4] = map;
clo13073[5] = lst;
clo13073[6] = cdr;
void* f1261212767 = encode_clo(clo13073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1261212767;
arg_buffer[3] = a1249912766;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12934 = encode_clo(alloc_clo(lam12934_fptr, 0));

void* lam12936_fptr() // lam12936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12937 = arg_buffer[1];
//reading env and args
void* a1249712762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12937))[8];
//not do dummy comment
void* map = (decode_clo(env12937))[7];
//not do dummy comment
void* kont12608 = (decode_clo(env12937))[6];
//not do dummy comment
void* proc = (decode_clo(env12937))[5];
//not do dummy comment
void* car = (decode_clo(env12937))[4];
//not do dummy comment
void* cons = (decode_clo(env12937))[3];
//not do dummy comment
void* list = (decode_clo(env12937))[2];
//not do dummy comment
void* cdr = (decode_clo(env12937))[1];

//if-clause
bool if_guard13074 = is_true(a1249712762);
if(if_guard13074)
{

//creating new closure instance
void** clo13076 = alloc_clo(lam12926_fptr, 1);

//setting env list
clo13076[1] = kont12608;
void* f1260912763 = encode_clo(clo13076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1260912763;
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
void** clo13078 = alloc_clo(lam12934_fptr, 6);

//setting env list
clo13078[1] = cons;
clo13078[2] = proc;
clo13078[3] = kont12608;
clo13078[4] = map;
clo13078[5] = lst;
clo13078[6] = cdr;
void* f1261312765 = encode_clo(clo13078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1261312765;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12936 = encode_clo(alloc_clo(lam12936_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12938 = arg_buffer[1];
//reading env and args
void* kont12608 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13080 = alloc_clo(lam12936_fptr, 8);

//setting env list
clo13080[1] = cdr;
clo13080[2] = list;
clo13080[3] = cons;
clo13080[4] = car;
clo13080[5] = proc;
clo13080[6] = kont12608;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo13080[7] = map;
clo13080[8] = lst;
void* f1261412761 = encode_clo(clo13080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1261412761;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam12939_fptr() // lam12939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12940 = arg_buffer[1];
//reading env and args
void* x1250412776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12615 = (decode_clo(env12940))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12615);
arg_buffer[2] = x1250412776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12615))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12939 = encode_clo(alloc_clo(lam12939_fptr, 0));

void* lam12941_fptr() // lam12941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12942 = arg_buffer[1];
//reading env and args
void* a1250912786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1250712782 = (decode_clo(env12942))[3];
//not do dummy comment
void* cons = (decode_clo(env12942))[2];
//not do dummy comment
void* kont12615 = (decode_clo(env12942))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12615;
arg_buffer[3] = a1250712782;
arg_buffer[4] = a1250912786;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12941 = encode_clo(alloc_clo(lam12941_fptr, 0));

void* lam12943_fptr() // lam12943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12944 = arg_buffer[1];
//reading env and args
void* a1250812784 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1250712782 = (decode_clo(env12944))[5];
//not do dummy comment
void* op = (decode_clo(env12944))[4];
//not do dummy comment
void* filter = (decode_clo(env12944))[3];
//not do dummy comment
void* cons = (decode_clo(env12944))[2];
//not do dummy comment
void* kont12615 = (decode_clo(env12944))[1];

//creating new closure instance
void** clo13082 = alloc_clo(lam12941_fptr, 3);

//setting env list
clo13082[1] = kont12615;
clo13082[2] = cons;
clo13082[3] = a1250712782;
void* f1261712785 = encode_clo(clo13082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1261712785;
arg_buffer[3] = op;
arg_buffer[4] = a1250812784;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12943 = encode_clo(alloc_clo(lam12943_fptr, 0));

void* lam12945_fptr() // lam12945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12946 = arg_buffer[1];
//reading env and args
void* a1250712782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12946))[6];
//not do dummy comment
void* lst = (decode_clo(env12946))[5];
//not do dummy comment
void* op = (decode_clo(env12946))[4];
//not do dummy comment
void* filter = (decode_clo(env12946))[3];
//not do dummy comment
void* cons = (decode_clo(env12946))[2];
//not do dummy comment
void* kont12615 = (decode_clo(env12946))[1];

//creating new closure instance
void** clo13084 = alloc_clo(lam12943_fptr, 5);

//setting env list
clo13084[1] = kont12615;
clo13084[2] = cons;
clo13084[3] = filter;
clo13084[4] = op;
clo13084[5] = a1250712782;
void* f1261812783 = encode_clo(clo13084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1261812783;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12945 = encode_clo(alloc_clo(lam12945_fptr, 0));

void* lam12947_fptr() // lam12947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12948 = arg_buffer[1];
//reading env and args
void* a1251012788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env12948))[3];
//not do dummy comment
void* filter = (decode_clo(env12948))[2];
//not do dummy comment
void* kont12615 = (decode_clo(env12948))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont12615;
arg_buffer[3] = op;
arg_buffer[4] = a1251012788;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12947 = encode_clo(alloc_clo(lam12947_fptr, 0));

void* lam12949_fptr() // lam12949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12950 = arg_buffer[1];
//reading env and args
void* a1250612780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12950))[7];
//not do dummy comment
void* lst = (decode_clo(env12950))[6];
//not do dummy comment
void* op = (decode_clo(env12950))[5];
//not do dummy comment
void* filter = (decode_clo(env12950))[4];
//not do dummy comment
void* car = (decode_clo(env12950))[3];
//not do dummy comment
void* cons = (decode_clo(env12950))[2];
//not do dummy comment
void* kont12615 = (decode_clo(env12950))[1];

//if-clause
bool if_guard13085 = is_true(a1250612780);
if(if_guard13085)
{

//creating new closure instance
void** clo13087 = alloc_clo(lam12945_fptr, 6);

//setting env list
clo13087[1] = kont12615;
clo13087[2] = cons;
clo13087[3] = filter;
clo13087[4] = op;
clo13087[5] = lst;
clo13087[6] = cdr;
void* f1261912781 = encode_clo(clo13087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1261912781;
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
void** clo13089 = alloc_clo(lam12947_fptr, 3);

//setting env list
clo13089[1] = kont12615;
clo13089[2] = filter;
clo13089[3] = op;
void* f1262012787 = encode_clo(clo13089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1262012787;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12949 = encode_clo(alloc_clo(lam12949_fptr, 0));

void* lam12951_fptr() // lam12951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12952 = arg_buffer[1];
//reading env and args
void* a1250512778 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12952))[7];
//not do dummy comment
void* lst = (decode_clo(env12952))[6];
//not do dummy comment
void* op = (decode_clo(env12952))[5];
//not do dummy comment
void* filter = (decode_clo(env12952))[4];
//not do dummy comment
void* car = (decode_clo(env12952))[3];
//not do dummy comment
void* cons = (decode_clo(env12952))[2];
//not do dummy comment
void* kont12615 = (decode_clo(env12952))[1];

//creating new closure instance
void** clo13091 = alloc_clo(lam12949_fptr, 7);

//setting env list
clo13091[1] = kont12615;
clo13091[2] = cons;
clo13091[3] = car;
clo13091[4] = filter;
clo13091[5] = op;
clo13091[6] = lst;
clo13091[7] = cdr;
void* f1262112779 = encode_clo(clo13091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1262112779;
arg_buffer[3] = a1250512778;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12951 = encode_clo(alloc_clo(lam12951_fptr, 0));

void* lam12953_fptr() // lam12953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12954 = arg_buffer[1];
//reading env and args
void* a1250312774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12954))[8];
//not do dummy comment
void* op = (decode_clo(env12954))[7];
//not do dummy comment
void* list = (decode_clo(env12954))[6];
//not do dummy comment
void* cdr = (decode_clo(env12954))[5];
//not do dummy comment
void* filter = (decode_clo(env12954))[4];
//not do dummy comment
void* car = (decode_clo(env12954))[3];
//not do dummy comment
void* cons = (decode_clo(env12954))[2];
//not do dummy comment
void* kont12615 = (decode_clo(env12954))[1];

//if-clause
bool if_guard13092 = is_true(a1250312774);
if(if_guard13092)
{

//creating new closure instance
void** clo13094 = alloc_clo(lam12939_fptr, 1);

//setting env list
clo13094[1] = kont12615;
void* f1261612775 = encode_clo(clo13094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1261612775;
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
void** clo13096 = alloc_clo(lam12951_fptr, 7);

//setting env list
clo13096[1] = kont12615;
clo13096[2] = cons;
clo13096[3] = car;
clo13096[4] = filter;
clo13096[5] = op;
clo13096[6] = lst;
clo13096[7] = cdr;
void* f1262212777 = encode_clo(clo13096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1262212777;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12953 = encode_clo(alloc_clo(lam12953_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12955 = arg_buffer[1];
//reading env and args
void* kont12615 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13098 = alloc_clo(lam12953_fptr, 8);

//setting env list
clo13098[1] = kont12615;
clo13098[2] = cons;
clo13098[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo13098[4] = filter;
clo13098[5] = cdr;
clo13098[6] = list;
clo13098[7] = op;
clo13098[8] = lst;
void* f1262312773 = encode_clo(clo13098);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1262312773;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam12956_fptr() // lam12956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12957 = arg_buffer[1];
//reading env and args
void* a1251512796 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1251312793 = (decode_clo(env12957))[3];
//not do dummy comment
void* drop = (decode_clo(env12957))[2];
//not do dummy comment
void* kont12624 = (decode_clo(env12957))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont12624;
arg_buffer[3] = a1251312793;
arg_buffer[4] = a1251512796;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12956 = encode_clo(alloc_clo(lam12956_fptr, 0));

void* lam12959_fptr() // lam12959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12960 = arg_buffer[1];
//reading env and args
void* a1251312793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12960))[4];
//not do dummy comment
void* kont12624 = (decode_clo(env12960))[3];
//not do dummy comment
void* n = (decode_clo(env12960))[2];
//not do dummy comment
void* _u45 = (decode_clo(env12960))[1];
mpz_t* mpzvar13099 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13099, "1", 10);
void* a1251412794 = encode_mpz(mpzvar13099);

//creating new closure instance
void** clo13101 = alloc_clo(lam12956_fptr, 3);

//setting env list
clo13101[1] = kont12624;
clo13101[2] = drop;
clo13101[3] = a1251312793;
void* f1262512795 = encode_clo(clo13101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1262512795;
arg_buffer[3] = n;
arg_buffer[4] = a1251412794;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12959 = encode_clo(alloc_clo(lam12959_fptr, 0));

void* lam12961_fptr() // lam12961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12962 = arg_buffer[1];
//reading env and args
void* a1251212791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12962))[6];
//not do dummy comment
void* kont12624 = (decode_clo(env12962))[5];
//not do dummy comment
void* n = (decode_clo(env12962))[4];
//not do dummy comment
void* _u45 = (decode_clo(env12962))[3];
//not do dummy comment
void* lst = (decode_clo(env12962))[2];
//not do dummy comment
void* drop = (decode_clo(env12962))[1];

//if-clause
bool if_guard13102 = is_true(a1251212791);
if(if_guard13102)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12624);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12624))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13104 = alloc_clo(lam12959_fptr, 4);

//setting env list
clo13104[1] = _u45;
clo13104[2] = n;
clo13104[3] = kont12624;
clo13104[4] = drop;
void* f1262612792 = encode_clo(clo13104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1262612792;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12961 = encode_clo(alloc_clo(lam12961_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12964 = arg_buffer[1];
//reading env and args
void* kont12624 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar13105 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13105, "0", 10);
void* a1251112789 = encode_mpz(mpzvar13105);

//creating new closure instance
void** clo13107 = alloc_clo(lam12961_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo13107[1] = drop;
clo13107[2] = lst;
clo13107[3] = _u45;
clo13107[4] = n;
clo13107[5] = kont12624;
clo13107[6] = cdr;
void* f1262712790 = encode_clo(clo13107);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1262712790;
arg_buffer[3] = n;
arg_buffer[4] = a1251112789;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam12965_fptr() // lam12965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12966 = arg_buffer[1];
//reading env and args
void* a1251912804 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1251712800 = (decode_clo(env12966))[3];
//not do dummy comment
void* proc = (decode_clo(env12966))[2];
//not do dummy comment
void* kont12628 = (decode_clo(env12966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont12628;
arg_buffer[3] = a1251712800;
arg_buffer[4] = a1251912804;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12965 = encode_clo(alloc_clo(lam12965_fptr, 0));

void* lam12967_fptr() // lam12967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12968 = arg_buffer[1];
//reading env and args
void* a1251812802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env12968))[5];
//not do dummy comment
void* a1251712800 = (decode_clo(env12968))[4];
//not do dummy comment
void* proc = (decode_clo(env12968))[3];
//not do dummy comment
void* acc = (decode_clo(env12968))[2];
//not do dummy comment
void* kont12628 = (decode_clo(env12968))[1];

//creating new closure instance
void** clo13109 = alloc_clo(lam12965_fptr, 3);

//setting env list
clo13109[1] = kont12628;
clo13109[2] = proc;
clo13109[3] = a1251712800;
void* f1262912803 = encode_clo(clo13109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1262912803;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1251812802;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12967 = encode_clo(alloc_clo(lam12967_fptr, 0));

void* lam12969_fptr() // lam12969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12970 = arg_buffer[1];
//reading env and args
void* a1251712800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12970))[6];
//not do dummy comment
void* foldr = (decode_clo(env12970))[5];
//not do dummy comment
void* lst = (decode_clo(env12970))[4];
//not do dummy comment
void* proc = (decode_clo(env12970))[3];
//not do dummy comment
void* acc = (decode_clo(env12970))[2];
//not do dummy comment
void* kont12628 = (decode_clo(env12970))[1];

//creating new closure instance
void** clo13111 = alloc_clo(lam12967_fptr, 5);

//setting env list
clo13111[1] = kont12628;
clo13111[2] = acc;
clo13111[3] = proc;
clo13111[4] = a1251712800;
clo13111[5] = foldr;
void* f1263012801 = encode_clo(clo13111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1263012801;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12969 = encode_clo(alloc_clo(lam12969_fptr, 0));

void* lam12971_fptr() // lam12971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12972 = arg_buffer[1];
//reading env and args
void* a1251612798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12972))[7];
//not do dummy comment
void* car = (decode_clo(env12972))[6];
//not do dummy comment
void* foldr = (decode_clo(env12972))[5];
//not do dummy comment
void* lst = (decode_clo(env12972))[4];
//not do dummy comment
void* proc = (decode_clo(env12972))[3];
//not do dummy comment
void* acc = (decode_clo(env12972))[2];
//not do dummy comment
void* kont12628 = (decode_clo(env12972))[1];

//if-clause
bool if_guard13112 = is_true(a1251612798);
if(if_guard13112)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12628);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12628))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13114 = alloc_clo(lam12969_fptr, 6);

//setting env list
clo13114[1] = kont12628;
clo13114[2] = acc;
clo13114[3] = proc;
clo13114[4] = lst;
clo13114[5] = foldr;
clo13114[6] = cdr;
void* f1263112799 = encode_clo(clo13114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1263112799;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12971 = encode_clo(alloc_clo(lam12971_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12973 = arg_buffer[1];
//reading env and args
void* kont12628 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13116 = alloc_clo(lam12971_fptr, 7);

//setting env list
clo13116[1] = kont12628;
clo13116[2] = acc;
clo13116[3] = proc;
clo13116[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo13116[5] = foldr;
clo13116[6] = car;
clo13116[7] = cdr;
void* f1263212797 = encode_clo(clo13116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1263212797;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam12974_fptr() // lam12974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12975 = arg_buffer[1];
//reading env and args
void* a1252312812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12633 = (decode_clo(env12975))[3];
//not do dummy comment
void* cons = (decode_clo(env12975))[2];
//not do dummy comment
void* a1252112808 = (decode_clo(env12975))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12633;
arg_buffer[3] = a1252112808;
arg_buffer[4] = a1252312812;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12974 = encode_clo(alloc_clo(lam12974_fptr, 0));

void* lam12976_fptr() // lam12976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12977 = arg_buffer[1];
//reading env and args
void* a1252212810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12633 = (decode_clo(env12977))[5];
//not do dummy comment
void* append = (decode_clo(env12977))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12977))[3];
//not do dummy comment
void* cons = (decode_clo(env12977))[2];
//not do dummy comment
void* a1252112808 = (decode_clo(env12977))[1];

//creating new closure instance
void** clo13118 = alloc_clo(lam12974_fptr, 3);

//setting env list
clo13118[1] = a1252112808;
clo13118[2] = cons;
clo13118[3] = kont12633;
void* f1263412811 = encode_clo(clo13118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1263412811;
arg_buffer[3] = a1252212810;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12976 = encode_clo(alloc_clo(lam12976_fptr, 0));

void* lam12978_fptr() // lam12978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12979 = arg_buffer[1];
//reading env and args
void* a1252112808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env12979))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12979))[5];
//not do dummy comment
void* lst1 = (decode_clo(env12979))[4];
//not do dummy comment
void* cons = (decode_clo(env12979))[3];
//not do dummy comment
void* kont12633 = (decode_clo(env12979))[2];
//not do dummy comment
void* cdr = (decode_clo(env12979))[1];

//creating new closure instance
void** clo13120 = alloc_clo(lam12976_fptr, 5);

//setting env list
clo13120[1] = a1252112808;
clo13120[2] = cons;
clo13120[3] = lst2;
clo13120[4] = append;
clo13120[5] = kont12633;
void* f1263512809 = encode_clo(clo13120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1263512809;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12978 = encode_clo(alloc_clo(lam12978_fptr, 0));

void* lam12980_fptr() // lam12980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12981 = arg_buffer[1];
//reading env and args
void* a1252012806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env12981))[7];
//not do dummy comment
void* lst2 = (decode_clo(env12981))[6];
//not do dummy comment
void* cons = (decode_clo(env12981))[5];
//not do dummy comment
void* kont12633 = (decode_clo(env12981))[4];
//not do dummy comment
void* cdr = (decode_clo(env12981))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12981))[2];
//not do dummy comment
void* car = (decode_clo(env12981))[1];

//if-clause
bool if_guard13121 = is_true(a1252012806);
if(if_guard13121)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12633);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12633))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13123 = alloc_clo(lam12978_fptr, 6);

//setting env list
clo13123[1] = cdr;
clo13123[2] = kont12633;
clo13123[3] = cons;
clo13123[4] = lst1;
clo13123[5] = lst2;
clo13123[6] = append;
void* f1263612807 = encode_clo(clo13123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1263612807;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12980 = encode_clo(alloc_clo(lam12980_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12982 = arg_buffer[1];
//reading env and args
void* kont12633 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13125 = alloc_clo(lam12980_fptr, 7);

//setting env list
clo13125[1] = car;
clo13125[2] = lst1;
clo13125[3] = cdr;
clo13125[4] = kont12633;
clo13125[5] = cons;
clo13125[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo13125[7] = append;
void* f1263712805 = encode_clo(clo13125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1263712805;
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
void* _12983 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1263812813 = prim_car(lst);
void* lst12814 = prim_cdr(lst);
void* x1252412815 = apply_prim_hash(lst12814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1263812813);
arg_buffer[2] = x1252412815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1263812813))[0]);
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
void* _12984 = arg_buffer[1];
//reading env and args
void* kont12640 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1252512816 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12640);
arg_buffer[2] = x1252512816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12640))[0]);
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
void* _12985 = arg_buffer[1];
//reading env and args
void* kont12641 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1252612817 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12641);
arg_buffer[2] = x1252612817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12641))[0]);
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
void* _12986 = arg_buffer[1];
//reading env and args
void* kont12642 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1252712818 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12642);
arg_buffer[2] = x1252712818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12642))[0]);
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
void* _12987 = arg_buffer[1];
//reading env and args
void* kont12643 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1252812819 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12643);
arg_buffer[2] = x1252812819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12643))[0]);
//assign buffer size to numArgs
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
void* _12988 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont1264412820 = prim_car(lst);
void* lst12821 = prim_cdr(lst);
void* x1252912822 = apply_prim_set(lst12821);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1264412820);
arg_buffer[2] = x1252912822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1264412820))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12989 = arg_buffer[1];
//reading env and args
void* kont12646 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1253012823 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12646);
arg_buffer[2] = x1253012823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12646))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12990 = arg_buffer[1];
//reading env and args
void* kont12647 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1253112824 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12647);
arg_buffer[2] = x1253112824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12647))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12991 = arg_buffer[1];
//reading env and args
void* kont12648 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1253212825 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12648);
arg_buffer[2] = x1253212825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12648))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12992 = arg_buffer[1];
//reading env and args
void* kont12649 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1253312826 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12649);
arg_buffer[2] = x1253312826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12993 = arg_buffer[1];
//reading env and args
void* kont12650 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1253412827 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12650);
arg_buffer[2] = x1253412827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12650))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12994 = arg_buffer[1];
//reading env and args
void* kont12651 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1253512828 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12651);
arg_buffer[2] = x1253512828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12651))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12995 = arg_buffer[1];
//reading env and args
void* kont12652 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x1253612829 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12652);
arg_buffer[2] = x1253612829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12652))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12996 = arg_buffer[1];
//reading env and args
void* kont12653 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x1253712830 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12653);
arg_buffer[2] = x1253712830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12653))[0]);
//assign buffer size to numArgs
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
void* _12997 = arg_buffer[1];
//reading env and args
void* kont12654 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x1253812831 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12654);
arg_buffer[2] = x1253812831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12654))[0]);
//assign buffer size to numArgs
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
void* _12998 = arg_buffer[1];
//reading env and args
void* kont12655 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1253912832 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12655);
arg_buffer[2] = x1253912832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12655))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13000 = arg_buffer[1];
//reading env and args
void* kont12656 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar13126 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13126, "5", 10);
void* a1254012833 = encode_mpz(mpzvar13126);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont12656;
arg_buffer[3] = a1254012833;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam13001_fptr() // lam13001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13002 = arg_buffer[1];
//reading env and args
void* x1254112835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12657 = (decode_clo(env13002))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12657);
arg_buffer[2] = x1254112835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12657))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13001 = encode_clo(alloc_clo(lam13001_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13003 = arg_buffer[1];
//reading env and args
void* kont12657 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo13128 = alloc_clo(lam13001_fptr, 1);

//setting env list
clo13128[1] = kont12657;
void* f1265812834 = encode_clo(clo13128);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1265812834;
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

