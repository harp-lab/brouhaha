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
void* _46979 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4671046814 = prim_car(lst);
void* lst46815 = prim_cdr(lst);
void* x4662246816 = apply_prim__u43(lst46815);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4671046814);
arg_buffer[2] = x4662246816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4671046814))[0]);
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
void* _46980 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4671246817 = prim_car(lst);
void* lst46818 = prim_cdr(lst);
void* x4662346819 = apply_prim__u45(lst46818);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4671246817);
arg_buffer[2] = x4662346819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4671246817))[0]);
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
void* _46981 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4671446820 = prim_car(lst);
void* lst46821 = prim_cdr(lst);
void* x4662446822 = apply_prim__u42(lst46821);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4671446820);
arg_buffer[2] = x4662446822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4671446820))[0]);
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
void* _46982 = arg_buffer[1];
//reading env and args
void* kont46716 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4662546823 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46716);
arg_buffer[2] = x4662546823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46716))[0]);
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
void* _46983 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4671746824 = prim_car(lst);
void* lst46825 = prim_cdr(lst);
void* x4662646826 = apply_prim__u47(lst46825);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4671746824);
arg_buffer[2] = x4662646826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4671746824))[0]);
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
void* _46984 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4671946827 = prim_car(lst);
void* lst46828 = prim_cdr(lst);
void* x4662746829 = apply_prim__u61(lst46828);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4671946827);
arg_buffer[2] = x4662746829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4671946827))[0]);
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
void* _46985 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4672146830 = prim_car(lst);
void* lst46831 = prim_cdr(lst);
void* x4662846832 = apply_prim__u62(lst46831);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4672146830);
arg_buffer[2] = x4662846832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4672146830))[0]);
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
void* _46986 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4672346833 = prim_car(lst);
void* lst46834 = prim_cdr(lst);
void* x4662946835 = apply_prim__u60(lst46834);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4672346833);
arg_buffer[2] = x4662946835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4672346833))[0]);
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
void* _46987 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4672546836 = prim_car(lst);
void* lst46837 = prim_cdr(lst);
void* x4663046838 = apply_prim__u60_u61(lst46837);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4672546836);
arg_buffer[2] = x4663046838;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4672546836))[0]);
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
void* _46988 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4672746839 = prim_car(lst);
void* lst46840 = prim_cdr(lst);
void* x4663146841 = apply_prim__u62_u61(lst46840);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4672746839);
arg_buffer[2] = x4663146841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4672746839))[0]);
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
void* _46989 = arg_buffer[1];
//reading env and args
void* kont46729 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4663246842 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46729);
arg_buffer[2] = x4663246842;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46729))[0]);
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
void* _46990 = arg_buffer[1];
//reading env and args
void* kont46730 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4663346843 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46730);
arg_buffer[2] = x4663346843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46730))[0]);
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
void* _46991 = arg_buffer[1];
//reading env and args
void* kont46731 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4663446844 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46731);
arg_buffer[2] = x4663446844;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46731))[0]);
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
void* _46992 = arg_buffer[1];
//reading env and args
void* kont46732 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4663546845 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46732);
arg_buffer[2] = x4663546845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46732))[0]);
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
void* _46993 = arg_buffer[1];
//reading env and args
void* kont46733 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4663646846 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46733);
arg_buffer[2] = x4663646846;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46733))[0]);
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
void* _46994 = arg_buffer[1];
//reading env and args
void* kont46734 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4663746847 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46734);
arg_buffer[2] = x4663746847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46734))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam46995_fptr() // lam46995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46996 = arg_buffer[1];
//reading env and args
void* a4664046851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env46996))[3];
//not do dummy comment
void* kont46735 = (decode_clo(env46996))[2];
//not do dummy comment
void* a4663846848 = (decode_clo(env46996))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont46735;
arg_buffer[3] = a4663846848;
arg_buffer[4] = a4664046851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46995 = encode_clo(alloc_clo(lam46995_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46999 = arg_buffer[1];
//reading env and args
void* kont46735 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar47435 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47435, "0", 10);
void* a4663846848 = encode_mpz(mpzvar47435);
mpz_t* mpzvar47436 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47436, "2", 10);
void* a4663946849 = encode_mpz(mpzvar47436);

//creating new closure instance
void** clo47438 = alloc_clo(lam46995_fptr, 3);

//setting env list
clo47438[1] = a4663846848;
clo47438[2] = kont46735;
clo47438[3] = equal_u63;
void* f4673646850 = encode_clo(clo47438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4673646850;
arg_buffer[3] = x;
arg_buffer[4] = a4663946849;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam47000_fptr() // lam47000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47001 = arg_buffer[1];
//reading env and args
void* a4664346855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4664146852 = (decode_clo(env47001))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env47001))[2];
//not do dummy comment
void* kont46737 = (decode_clo(env47001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont46737;
arg_buffer[3] = a4664146852;
arg_buffer[4] = a4664346855;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47000 = encode_clo(alloc_clo(lam47000_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47004 = arg_buffer[1];
//reading env and args
void* kont46737 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar47439 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47439, "1", 10);
void* a4664146852 = encode_mpz(mpzvar47439);
mpz_t* mpzvar47440 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47440, "2", 10);
void* a4664246853 = encode_mpz(mpzvar47440);

//creating new closure instance
void** clo47442 = alloc_clo(lam47000_fptr, 3);

//setting env list
clo47442[1] = kont46737;
clo47442[2] = equal_u63;
clo47442[3] = a4664146852;
void* f4673846854 = encode_clo(clo47442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4673846854;
arg_buffer[3] = x;
arg_buffer[4] = a4664246853;
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
void* _47005 = arg_buffer[1];
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

void* kont4673946856 = prim_car(x);
void* x46857 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4673946856);
arg_buffer[2] = x46857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4673946856))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47006 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4674146858 = prim_car(lst);
void* lst46859 = prim_cdr(lst);
void* x4664446860 = apply_prim_and(lst46859);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4674146858);
arg_buffer[2] = x4664446860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4674146858))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47007 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4674346861 = prim_car(lst);
void* lst46862 = prim_cdr(lst);
void* x4664546863 = apply_prim_or(lst46862);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4674346861);
arg_buffer[2] = x4664546863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4674346861))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam47010_fptr() // lam47010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47011 = arg_buffer[1];
//reading env and args
void* a4665146873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46745 = (decode_clo(env47011))[3];
//not do dummy comment
void* x = (decode_clo(env47011))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47011))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont46745;
arg_buffer[3] = x;
arg_buffer[4] = a4665146873;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47010 = encode_clo(alloc_clo(lam47010_fptr, 0));

void* lam47012_fptr() // lam47012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47013 = arg_buffer[1];
//reading env and args
void* a4664946870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47013))[5];
//not do dummy comment
void* lst = (decode_clo(env47013))[4];
//not do dummy comment
void* kont46745 = (decode_clo(env47013))[3];
//not do dummy comment
void* x = (decode_clo(env47013))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47013))[1];

//if-clause
bool if_guard47443 = is_true(a4664946870);
if(if_guard47443)
{
void* x4665046871 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46745);
arg_buffer[2] = x4665046871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46745))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47445 = alloc_clo(lam47010_fptr, 3);

//setting env list
clo47445[1] = member_u63;
clo47445[2] = x;
clo47445[3] = kont46745;
void* f4674646872 = encode_clo(clo47445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4674646872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47012 = encode_clo(alloc_clo(lam47012_fptr, 0));

void* lam47014_fptr() // lam47014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47015 = arg_buffer[1];
//reading env and args
void* a4664846868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47015))[6];
//not do dummy comment
void* lst = (decode_clo(env47015))[5];
//not do dummy comment
void* kont46745 = (decode_clo(env47015))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env47015))[3];
//not do dummy comment
void* x = (decode_clo(env47015))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47015))[1];

//creating new closure instance
void** clo47447 = alloc_clo(lam47012_fptr, 5);

//setting env list
clo47447[1] = member_u63;
clo47447[2] = x;
clo47447[3] = kont46745;
clo47447[4] = lst;
clo47447[5] = cdr;
void* f4674746869 = encode_clo(clo47447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4674746869;
arg_buffer[3] = a4664846868;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47014 = encode_clo(alloc_clo(lam47014_fptr, 0));

void* lam47016_fptr() // lam47016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47017 = arg_buffer[1];
//reading env and args
void* a4664646865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47017))[7];
//not do dummy comment
void* lst = (decode_clo(env47017))[6];
//not do dummy comment
void* kont46745 = (decode_clo(env47017))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env47017))[4];
//not do dummy comment
void* x = (decode_clo(env47017))[3];
//not do dummy comment
void* car = (decode_clo(env47017))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47017))[1];

//if-clause
bool if_guard47448 = is_true(a4664646865);
if(if_guard47448)
{
void* x4664746866 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46745);
arg_buffer[2] = x4664746866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46745))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47450 = alloc_clo(lam47014_fptr, 6);

//setting env list
clo47450[1] = member_u63;
clo47450[2] = x;
clo47450[3] = equal_u63;
clo47450[4] = kont46745;
clo47450[5] = lst;
clo47450[6] = cdr;
void* f4674846867 = encode_clo(clo47450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4674846867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47016 = encode_clo(alloc_clo(lam47016_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47018 = arg_buffer[1];
//reading env and args
void* kont46745 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47452 = alloc_clo(lam47016_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo47452[1] = member_u63;
clo47452[2] = car;
clo47452[3] = x;
clo47452[4] = equal_u63;
clo47452[5] = kont46745;
clo47452[6] = lst;
clo47452[7] = cdr;
void* f4674946864 = encode_clo(clo47452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4674946864;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam47019_fptr() // lam47019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47020 = arg_buffer[1];
//reading env and args
void* a4665546881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env47020))[4];
//not do dummy comment
void* kont46750 = (decode_clo(env47020))[3];
//not do dummy comment
void* a4665446879 = (decode_clo(env47020))[2];
//not do dummy comment
void* foldl = (decode_clo(env47020))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont46750;
arg_buffer[3] = fun;
arg_buffer[4] = a4665446879;
arg_buffer[5] = a4665546881;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47019 = encode_clo(alloc_clo(lam47019_fptr, 0));

void* lam47021_fptr() // lam47021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47022 = arg_buffer[1];
//reading env and args
void* a4665446879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47022))[5];
//not do dummy comment
void* lst = (decode_clo(env47022))[4];
//not do dummy comment
void* fun = (decode_clo(env47022))[3];
//not do dummy comment
void* kont46750 = (decode_clo(env47022))[2];
//not do dummy comment
void* foldl = (decode_clo(env47022))[1];

//creating new closure instance
void** clo47454 = alloc_clo(lam47019_fptr, 4);

//setting env list
clo47454[1] = foldl;
clo47454[2] = a4665446879;
clo47454[3] = kont46750;
clo47454[4] = fun;
void* f4675146880 = encode_clo(clo47454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4675146880;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47021 = encode_clo(alloc_clo(lam47021_fptr, 0));

void* lam47023_fptr() // lam47023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47024 = arg_buffer[1];
//reading env and args
void* a4665346877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47024))[6];
//not do dummy comment
void* lst = (decode_clo(env47024))[5];
//not do dummy comment
void* fun = (decode_clo(env47024))[4];
//not do dummy comment
void* acc = (decode_clo(env47024))[3];
//not do dummy comment
void* kont46750 = (decode_clo(env47024))[2];
//not do dummy comment
void* foldl = (decode_clo(env47024))[1];

//creating new closure instance
void** clo47456 = alloc_clo(lam47021_fptr, 5);

//setting env list
clo47456[1] = foldl;
clo47456[2] = kont46750;
clo47456[3] = fun;
clo47456[4] = lst;
clo47456[5] = cdr;
void* f4675246878 = encode_clo(clo47456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4675246878;
arg_buffer[3] = a4665346877;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47023 = encode_clo(alloc_clo(lam47023_fptr, 0));

void* lam47025_fptr() // lam47025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47026 = arg_buffer[1];
//reading env and args
void* a4665246875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47026))[7];
//not do dummy comment
void* lst = (decode_clo(env47026))[6];
//not do dummy comment
void* fun = (decode_clo(env47026))[5];
//not do dummy comment
void* acc = (decode_clo(env47026))[4];
//not do dummy comment
void* kont46750 = (decode_clo(env47026))[3];
//not do dummy comment
void* car = (decode_clo(env47026))[2];
//not do dummy comment
void* foldl = (decode_clo(env47026))[1];

//if-clause
bool if_guard47457 = is_true(a4665246875);
if(if_guard47457)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46750);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46750))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47459 = alloc_clo(lam47023_fptr, 6);

//setting env list
clo47459[1] = foldl;
clo47459[2] = kont46750;
clo47459[3] = acc;
clo47459[4] = fun;
clo47459[5] = lst;
clo47459[6] = cdr;
void* f4675346876 = encode_clo(clo47459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4675346876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47025 = encode_clo(alloc_clo(lam47025_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47027 = arg_buffer[1];
//reading env and args
void* kont46750 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo47461 = alloc_clo(lam47025_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo47461[1] = foldl;
clo47461[2] = car;
clo47461[3] = kont46750;
clo47461[4] = acc;
clo47461[5] = fun;
clo47461[6] = lst;
clo47461[7] = cdr;
void* f4675446874 = encode_clo(clo47461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4675446874;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam47028_fptr() // lam47028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47029 = arg_buffer[1];
//reading env and args
void* a4665946889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46755 = (decode_clo(env47029))[3];
//not do dummy comment
void* a4665746885 = (decode_clo(env47029))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47029))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont46755;
arg_buffer[3] = a4665746885;
arg_buffer[4] = a4665946889;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47028 = encode_clo(alloc_clo(lam47028_fptr, 0));

void* lam47030_fptr() // lam47030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47031 = arg_buffer[1];
//reading env and args
void* a4665846887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46755 = (decode_clo(env47031))[5];
//not do dummy comment
void* a4665746885 = (decode_clo(env47031))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47031))[3];
//not do dummy comment
void* lst2 = (decode_clo(env47031))[2];
//not do dummy comment
void* cons = (decode_clo(env47031))[1];

//creating new closure instance
void** clo47463 = alloc_clo(lam47028_fptr, 3);

//setting env list
clo47463[1] = reverse_u45helper;
clo47463[2] = a4665746885;
clo47463[3] = kont46755;
void* f4675646888 = encode_clo(clo47463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4675646888;
arg_buffer[3] = a4665846887;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47030 = encode_clo(alloc_clo(lam47030_fptr, 0));

void* lam47032_fptr() // lam47032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47033 = arg_buffer[1];
//reading env and args
void* a4665746885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46755 = (decode_clo(env47033))[6];
//not do dummy comment
void* lst = (decode_clo(env47033))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47033))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47033))[3];
//not do dummy comment
void* car = (decode_clo(env47033))[2];
//not do dummy comment
void* cons = (decode_clo(env47033))[1];

//creating new closure instance
void** clo47465 = alloc_clo(lam47030_fptr, 5);

//setting env list
clo47465[1] = cons;
clo47465[2] = lst2;
clo47465[3] = reverse_u45helper;
clo47465[4] = a4665746885;
clo47465[5] = kont46755;
void* f4675746886 = encode_clo(clo47465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4675746886;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47032 = encode_clo(alloc_clo(lam47032_fptr, 0));

void* lam47034_fptr() // lam47034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47035 = arg_buffer[1];
//reading env and args
void* a4665646883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47035))[7];
//not do dummy comment
void* kont46755 = (decode_clo(env47035))[6];
//not do dummy comment
void* lst = (decode_clo(env47035))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47035))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47035))[3];
//not do dummy comment
void* car = (decode_clo(env47035))[2];
//not do dummy comment
void* cons = (decode_clo(env47035))[1];

//if-clause
bool if_guard47466 = is_true(a4665646883);
if(if_guard47466)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46755);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46755))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47468 = alloc_clo(lam47032_fptr, 6);

//setting env list
clo47468[1] = cons;
clo47468[2] = car;
clo47468[3] = lst2;
clo47468[4] = reverse_u45helper;
clo47468[5] = lst;
clo47468[6] = kont46755;
void* f4675846884 = encode_clo(clo47468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4675846884;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47034 = encode_clo(alloc_clo(lam47034_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47036 = arg_buffer[1];
//reading env and args
void* kont46755 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47470 = alloc_clo(lam47034_fptr, 7);

//setting env list
clo47470[1] = cons;
clo47470[2] = car;
clo47470[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo47470[4] = reverse_u45helper;
clo47470[5] = lst;
clo47470[6] = kont46755;
clo47470[7] = cdr;
void* f4675946882 = encode_clo(clo47470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4675946882;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam47037_fptr() // lam47037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47038 = arg_buffer[1];
//reading env and args
void* a4666046891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47038))[3];
//not do dummy comment
void* kont46760 = (decode_clo(env47038))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47038))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont46760;
arg_buffer[3] = lst;
arg_buffer[4] = a4666046891;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47037 = encode_clo(alloc_clo(lam47037_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47039 = arg_buffer[1];
//reading env and args
void* kont46760 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo47472 = alloc_clo(lam47037_fptr, 3);

//setting env list
clo47472[1] = reverse_u45helper;
clo47472[2] = kont46760;
clo47472[3] = lst;
void* f4676146890 = encode_clo(clo47472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4676146890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam47040_fptr() // lam47040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47041 = arg_buffer[1];
//reading env and args
void* x4666346896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46762 = (decode_clo(env47041))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46762);
arg_buffer[2] = x4666346896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46762))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47040 = encode_clo(alloc_clo(lam47040_fptr, 0));

void* lam47042_fptr() // lam47042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47043 = arg_buffer[1];
//reading env and args
void* a4666846905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4666446898 = (decode_clo(env47043))[4];
//not do dummy comment
void* a4666646901 = (decode_clo(env47043))[3];
//not do dummy comment
void* kont46762 = (decode_clo(env47043))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env47043))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont46762;
arg_buffer[3] = a4666446898;
arg_buffer[4] = a4666646901;
arg_buffer[5] = a4666846905;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47042 = encode_clo(alloc_clo(lam47042_fptr, 0));

void* lam47044_fptr() // lam47044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47045 = arg_buffer[1];
//reading env and args
void* a4666746903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4666446898 = (decode_clo(env47045))[6];
//not do dummy comment
void* a4666646901 = (decode_clo(env47045))[5];
//not do dummy comment
void* kont46762 = (decode_clo(env47045))[4];
//not do dummy comment
void* cons = (decode_clo(env47045))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47045))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47045))[1];

//creating new closure instance
void** clo47474 = alloc_clo(lam47042_fptr, 4);

//setting env list
clo47474[1] = take_u45helper;
clo47474[2] = kont46762;
clo47474[3] = a4666646901;
clo47474[4] = a4666446898;
void* f4676446904 = encode_clo(clo47474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4676446904;
arg_buffer[3] = a4666746903;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47044 = encode_clo(alloc_clo(lam47044_fptr, 0));

void* lam47046_fptr() // lam47046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47047 = arg_buffer[1];
//reading env and args
void* a4666646901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4666446898 = (decode_clo(env47047))[7];
//not do dummy comment
void* lst = (decode_clo(env47047))[6];
//not do dummy comment
void* kont46762 = (decode_clo(env47047))[5];
//not do dummy comment
void* car = (decode_clo(env47047))[4];
//not do dummy comment
void* cons = (decode_clo(env47047))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47047))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47047))[1];

//creating new closure instance
void** clo47476 = alloc_clo(lam47044_fptr, 6);

//setting env list
clo47476[1] = lst2;
clo47476[2] = take_u45helper;
clo47476[3] = cons;
clo47476[4] = kont46762;
clo47476[5] = a4666646901;
clo47476[6] = a4666446898;
void* f4676546902 = encode_clo(clo47476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4676546902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47046 = encode_clo(alloc_clo(lam47046_fptr, 0));

void* lam47049_fptr() // lam47049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47050 = arg_buffer[1];
//reading env and args
void* a4666446898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47050))[8];
//not do dummy comment
void* kont46762 = (decode_clo(env47050))[7];
//not do dummy comment
void* cons = (decode_clo(env47050))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47050))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47050))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47050))[3];
//not do dummy comment
void* n = (decode_clo(env47050))[2];
//not do dummy comment
void* car = (decode_clo(env47050))[1];
mpz_t* mpzvar47477 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47477, "1", 10);
void* a4666546899 = encode_mpz(mpzvar47477);

//creating new closure instance
void** clo47479 = alloc_clo(lam47046_fptr, 7);

//setting env list
clo47479[1] = lst2;
clo47479[2] = take_u45helper;
clo47479[3] = cons;
clo47479[4] = car;
clo47479[5] = kont46762;
clo47479[6] = lst;
clo47479[7] = a4666446898;
void* f4676646900 = encode_clo(clo47479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4676646900;
arg_buffer[3] = n;
arg_buffer[4] = a4666546899;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47049 = encode_clo(alloc_clo(lam47049_fptr, 0));

void* lam47051_fptr() // lam47051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47052 = arg_buffer[1];
//reading env and args
void* a4666246894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47052))[10];
//not do dummy comment
void* lst = (decode_clo(env47052))[9];
//not do dummy comment
void* reverse = (decode_clo(env47052))[8];
//not do dummy comment
void* kont46762 = (decode_clo(env47052))[7];
//not do dummy comment
void* cons = (decode_clo(env47052))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47052))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47052))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47052))[3];
//not do dummy comment
void* n = (decode_clo(env47052))[2];
//not do dummy comment
void* car = (decode_clo(env47052))[1];

//if-clause
bool if_guard47480 = is_true(a4666246894);
if(if_guard47480)
{

//creating new closure instance
void** clo47482 = alloc_clo(lam47040_fptr, 1);

//setting env list
clo47482[1] = kont46762;
void* f4676346895 = encode_clo(clo47482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4676346895;
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
void** clo47484 = alloc_clo(lam47049_fptr, 8);

//setting env list
clo47484[1] = car;
clo47484[2] = n;
clo47484[3] = lst2;
clo47484[4] = take_u45helper;
clo47484[5] = _u45;
clo47484[6] = cons;
clo47484[7] = kont46762;
clo47484[8] = lst;
void* f4676746897 = encode_clo(clo47484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4676746897;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47051 = encode_clo(alloc_clo(lam47051_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47054 = arg_buffer[1];
//reading env and args
void* kont46762 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar47485 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47485, "0", 10);
void* a4666146892 = encode_mpz(mpzvar47485);

//creating new closure instance
void** clo47487 = alloc_clo(lam47051_fptr, 10);

//setting env list
clo47487[1] = car;
clo47487[2] = n;
clo47487[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo47487[4] = take_u45helper;
clo47487[5] = _u45;
clo47487[6] = cons;
clo47487[7] = kont46762;
clo47487[8] = reverse;
clo47487[9] = lst;
clo47487[10] = cdr;
void* f4676846893 = encode_clo(clo47487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4676846893;
arg_buffer[3] = n;
arg_buffer[4] = a4666146892;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam47055_fptr() // lam47055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47056 = arg_buffer[1];
//reading env and args
void* a4666946907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47056))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env47056))[3];
//not do dummy comment
void* n = (decode_clo(env47056))[2];
//not do dummy comment
void* kont46769 = (decode_clo(env47056))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont46769;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4666946907;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47055 = encode_clo(alloc_clo(lam47055_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47057 = arg_buffer[1];
//reading env and args
void* kont46769 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47489 = alloc_clo(lam47055_fptr, 4);

//setting env list
clo47489[1] = kont46769;
clo47489[2] = n;
clo47489[3] = take_u45helper;
clo47489[4] = lst;
void* f4677046906 = encode_clo(clo47489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4677046906;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam47059_fptr() // lam47059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47060 = arg_buffer[1];
//reading env and args
void* a4667446915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46771 = (decode_clo(env47060))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47060))[2];
//not do dummy comment
void* a4667246911 = (decode_clo(env47060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont46771;
arg_buffer[3] = a4667246911;
arg_buffer[4] = a4667446915;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47059 = encode_clo(alloc_clo(lam47059_fptr, 0));

void* lam47061_fptr() // lam47061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47062 = arg_buffer[1];
//reading env and args
void* a4667346913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46771 = (decode_clo(env47062))[4];
//not do dummy comment
void* length = (decode_clo(env47062))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47062))[2];
//not do dummy comment
void* a4667246911 = (decode_clo(env47062))[1];

//creating new closure instance
void** clo47491 = alloc_clo(lam47059_fptr, 3);

//setting env list
clo47491[1] = a4667246911;
clo47491[2] = _u43;
clo47491[3] = kont46771;
void* f4677246914 = encode_clo(clo47491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4677246914;
arg_buffer[3] = a4667346913;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47061 = encode_clo(alloc_clo(lam47061_fptr, 0));

void* lam47064_fptr() // lam47064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47065 = arg_buffer[1];
//reading env and args
void* a4667046909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47065))[5];
//not do dummy comment
void* kont46771 = (decode_clo(env47065))[4];
//not do dummy comment
void* lst = (decode_clo(env47065))[3];
//not do dummy comment
void* length = (decode_clo(env47065))[2];
//not do dummy comment
void* _u43 = (decode_clo(env47065))[1];

//if-clause
bool if_guard47492 = is_true(a4667046909);
if(if_guard47492)
{
mpz_t* mpzvar47493 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47493, "0", 10);
void* x4667146910 = encode_mpz(mpzvar47493);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46771);
arg_buffer[2] = x4667146910;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46771))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar47494 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47494, "1", 10);
void* a4667246911 = encode_mpz(mpzvar47494);

//creating new closure instance
void** clo47496 = alloc_clo(lam47061_fptr, 4);

//setting env list
clo47496[1] = a4667246911;
clo47496[2] = _u43;
clo47496[3] = length;
clo47496[4] = kont46771;
void* f4677346912 = encode_clo(clo47496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4677346912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47064 = encode_clo(alloc_clo(lam47064_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47066 = arg_buffer[1];
//reading env and args
void* kont46771 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo47498 = alloc_clo(lam47064_fptr, 5);

//setting env list
clo47498[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo47498[2] = length;
clo47498[3] = lst;
clo47498[4] = kont46771;
clo47498[5] = cdr;
void* f4677446908 = encode_clo(clo47498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4677446908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam47067_fptr() // lam47067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47068 = arg_buffer[1];
//reading env and args
void* x4667646919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46775 = (decode_clo(env47068))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46775);
arg_buffer[2] = x4667646919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46775))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47067 = encode_clo(alloc_clo(lam47067_fptr, 0));

void* lam47069_fptr() // lam47069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47070 = arg_buffer[1];
//reading env and args
void* a4668046927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46775 = (decode_clo(env47070))[3];
//not do dummy comment
void* a4667846923 = (decode_clo(env47070))[2];
//not do dummy comment
void* cons = (decode_clo(env47070))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46775;
arg_buffer[3] = a4667846923;
arg_buffer[4] = a4668046927;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47069 = encode_clo(alloc_clo(lam47069_fptr, 0));

void* lam47071_fptr() // lam47071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47072 = arg_buffer[1];
//reading env and args
void* a4667946925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4667846923 = (decode_clo(env47072))[5];
//not do dummy comment
void* proc = (decode_clo(env47072))[4];
//not do dummy comment
void* cons = (decode_clo(env47072))[3];
//not do dummy comment
void* map = (decode_clo(env47072))[2];
//not do dummy comment
void* kont46775 = (decode_clo(env47072))[1];

//creating new closure instance
void** clo47500 = alloc_clo(lam47069_fptr, 3);

//setting env list
clo47500[1] = cons;
clo47500[2] = a4667846923;
clo47500[3] = kont46775;
void* f4677746926 = encode_clo(clo47500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4677746926;
arg_buffer[3] = proc;
arg_buffer[4] = a4667946925;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47071 = encode_clo(alloc_clo(lam47071_fptr, 0));

void* lam47073_fptr() // lam47073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47074 = arg_buffer[1];
//reading env and args
void* a4667846923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47074))[6];
//not do dummy comment
void* lst = (decode_clo(env47074))[5];
//not do dummy comment
void* proc = (decode_clo(env47074))[4];
//not do dummy comment
void* cons = (decode_clo(env47074))[3];
//not do dummy comment
void* map = (decode_clo(env47074))[2];
//not do dummy comment
void* kont46775 = (decode_clo(env47074))[1];

//creating new closure instance
void** clo47502 = alloc_clo(lam47071_fptr, 5);

//setting env list
clo47502[1] = kont46775;
clo47502[2] = map;
clo47502[3] = cons;
clo47502[4] = proc;
clo47502[5] = a4667846923;
void* f4677846924 = encode_clo(clo47502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4677846924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47073 = encode_clo(alloc_clo(lam47073_fptr, 0));

void* lam47075_fptr() // lam47075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47076 = arg_buffer[1];
//reading env and args
void* a4667746921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47076))[6];
//not do dummy comment
void* lst = (decode_clo(env47076))[5];
//not do dummy comment
void* proc = (decode_clo(env47076))[4];
//not do dummy comment
void* cons = (decode_clo(env47076))[3];
//not do dummy comment
void* map = (decode_clo(env47076))[2];
//not do dummy comment
void* kont46775 = (decode_clo(env47076))[1];

//creating new closure instance
void** clo47504 = alloc_clo(lam47073_fptr, 6);

//setting env list
clo47504[1] = kont46775;
clo47504[2] = map;
clo47504[3] = cons;
clo47504[4] = proc;
clo47504[5] = lst;
clo47504[6] = cdr;
void* f4677946922 = encode_clo(clo47504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4677946922;
arg_buffer[3] = a4667746921;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47075 = encode_clo(alloc_clo(lam47075_fptr, 0));

void* lam47077_fptr() // lam47077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47078 = arg_buffer[1];
//reading env and args
void* a4667546917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47078))[8];
//not do dummy comment
void* proc = (decode_clo(env47078))[7];
//not do dummy comment
void* car = (decode_clo(env47078))[6];
//not do dummy comment
void* cons = (decode_clo(env47078))[5];
//not do dummy comment
void* list = (decode_clo(env47078))[4];
//not do dummy comment
void* cdr = (decode_clo(env47078))[3];
//not do dummy comment
void* map = (decode_clo(env47078))[2];
//not do dummy comment
void* kont46775 = (decode_clo(env47078))[1];

//if-clause
bool if_guard47505 = is_true(a4667546917);
if(if_guard47505)
{

//creating new closure instance
void** clo47507 = alloc_clo(lam47067_fptr, 1);

//setting env list
clo47507[1] = kont46775;
void* f4677646918 = encode_clo(clo47507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4677646918;
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
void** clo47509 = alloc_clo(lam47075_fptr, 6);

//setting env list
clo47509[1] = kont46775;
clo47509[2] = map;
clo47509[3] = cons;
clo47509[4] = proc;
clo47509[5] = lst;
clo47509[6] = cdr;
void* f4678046920 = encode_clo(clo47509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4678046920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47077 = encode_clo(alloc_clo(lam47077_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47079 = arg_buffer[1];
//reading env and args
void* kont46775 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47511 = alloc_clo(lam47077_fptr, 8);

//setting env list
clo47511[1] = kont46775;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo47511[2] = map;
clo47511[3] = cdr;
clo47511[4] = list;
clo47511[5] = cons;
clo47511[6] = car;
clo47511[7] = proc;
clo47511[8] = lst;
void* f4678146916 = encode_clo(clo47511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4678146916;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam47080_fptr() // lam47080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47081 = arg_buffer[1];
//reading env and args
void* x4668246931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46782 = (decode_clo(env47081))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46782);
arg_buffer[2] = x4668246931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47080 = encode_clo(alloc_clo(lam47080_fptr, 0));

void* lam47082_fptr() // lam47082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47083 = arg_buffer[1];
//reading env and args
void* a4668746941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4668546937 = (decode_clo(env47083))[3];
//not do dummy comment
void* kont46782 = (decode_clo(env47083))[2];
//not do dummy comment
void* cons = (decode_clo(env47083))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46782;
arg_buffer[3] = a4668546937;
arg_buffer[4] = a4668746941;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47082 = encode_clo(alloc_clo(lam47082_fptr, 0));

void* lam47084_fptr() // lam47084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47085 = arg_buffer[1];
//reading env and args
void* a4668646939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46782 = (decode_clo(env47085))[5];
//not do dummy comment
void* filter = (decode_clo(env47085))[4];
//not do dummy comment
void* cons = (decode_clo(env47085))[3];
//not do dummy comment
void* a4668546937 = (decode_clo(env47085))[2];
//not do dummy comment
void* op = (decode_clo(env47085))[1];

//creating new closure instance
void** clo47513 = alloc_clo(lam47082_fptr, 3);

//setting env list
clo47513[1] = cons;
clo47513[2] = kont46782;
clo47513[3] = a4668546937;
void* f4678446940 = encode_clo(clo47513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4678446940;
arg_buffer[3] = op;
arg_buffer[4] = a4668646939;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47084 = encode_clo(alloc_clo(lam47084_fptr, 0));

void* lam47086_fptr() // lam47086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47087 = arg_buffer[1];
//reading env and args
void* a4668546937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47087))[6];
//not do dummy comment
void* lst = (decode_clo(env47087))[5];
//not do dummy comment
void* op = (decode_clo(env47087))[4];
//not do dummy comment
void* kont46782 = (decode_clo(env47087))[3];
//not do dummy comment
void* filter = (decode_clo(env47087))[2];
//not do dummy comment
void* cons = (decode_clo(env47087))[1];

//creating new closure instance
void** clo47515 = alloc_clo(lam47084_fptr, 5);

//setting env list
clo47515[1] = op;
clo47515[2] = a4668546937;
clo47515[3] = cons;
clo47515[4] = filter;
clo47515[5] = kont46782;
void* f4678546938 = encode_clo(clo47515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4678546938;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47086 = encode_clo(alloc_clo(lam47086_fptr, 0));

void* lam47088_fptr() // lam47088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47089 = arg_buffer[1];
//reading env and args
void* a4668846943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env47089))[3];
//not do dummy comment
void* kont46782 = (decode_clo(env47089))[2];
//not do dummy comment
void* filter = (decode_clo(env47089))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont46782;
arg_buffer[3] = op;
arg_buffer[4] = a4668846943;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47088 = encode_clo(alloc_clo(lam47088_fptr, 0));

void* lam47090_fptr() // lam47090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47091 = arg_buffer[1];
//reading env and args
void* a4668446935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47091))[7];
//not do dummy comment
void* lst = (decode_clo(env47091))[6];
//not do dummy comment
void* op = (decode_clo(env47091))[5];
//not do dummy comment
void* kont46782 = (decode_clo(env47091))[4];
//not do dummy comment
void* cons = (decode_clo(env47091))[3];
//not do dummy comment
void* filter = (decode_clo(env47091))[2];
//not do dummy comment
void* car = (decode_clo(env47091))[1];

//if-clause
bool if_guard47516 = is_true(a4668446935);
if(if_guard47516)
{

//creating new closure instance
void** clo47518 = alloc_clo(lam47086_fptr, 6);

//setting env list
clo47518[1] = cons;
clo47518[2] = filter;
clo47518[3] = kont46782;
clo47518[4] = op;
clo47518[5] = lst;
clo47518[6] = cdr;
void* f4678646936 = encode_clo(clo47518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4678646936;
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
void** clo47520 = alloc_clo(lam47088_fptr, 3);

//setting env list
clo47520[1] = filter;
clo47520[2] = kont46782;
clo47520[3] = op;
void* f4678746942 = encode_clo(clo47520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4678746942;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47090 = encode_clo(alloc_clo(lam47090_fptr, 0));

void* lam47092_fptr() // lam47092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47093 = arg_buffer[1];
//reading env and args
void* a4668346933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47093))[7];
//not do dummy comment
void* lst = (decode_clo(env47093))[6];
//not do dummy comment
void* op = (decode_clo(env47093))[5];
//not do dummy comment
void* kont46782 = (decode_clo(env47093))[4];
//not do dummy comment
void* cons = (decode_clo(env47093))[3];
//not do dummy comment
void* filter = (decode_clo(env47093))[2];
//not do dummy comment
void* car = (decode_clo(env47093))[1];

//creating new closure instance
void** clo47522 = alloc_clo(lam47090_fptr, 7);

//setting env list
clo47522[1] = car;
clo47522[2] = filter;
clo47522[3] = cons;
clo47522[4] = kont46782;
clo47522[5] = op;
clo47522[6] = lst;
clo47522[7] = cdr;
void* f4678846934 = encode_clo(clo47522);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4678846934;
arg_buffer[3] = a4668346933;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47092 = encode_clo(alloc_clo(lam47092_fptr, 0));

void* lam47094_fptr() // lam47094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47095 = arg_buffer[1];
//reading env and args
void* a4668146929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47095))[8];
//not do dummy comment
void* op = (decode_clo(env47095))[7];
//not do dummy comment
void* kont46782 = (decode_clo(env47095))[6];
//not do dummy comment
void* cons = (decode_clo(env47095))[5];
//not do dummy comment
void* list = (decode_clo(env47095))[4];
//not do dummy comment
void* cdr = (decode_clo(env47095))[3];
//not do dummy comment
void* filter = (decode_clo(env47095))[2];
//not do dummy comment
void* car = (decode_clo(env47095))[1];

//if-clause
bool if_guard47523 = is_true(a4668146929);
if(if_guard47523)
{

//creating new closure instance
void** clo47525 = alloc_clo(lam47080_fptr, 1);

//setting env list
clo47525[1] = kont46782;
void* f4678346930 = encode_clo(clo47525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4678346930;
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
void** clo47527 = alloc_clo(lam47092_fptr, 7);

//setting env list
clo47527[1] = car;
clo47527[2] = filter;
clo47527[3] = cons;
clo47527[4] = kont46782;
clo47527[5] = op;
clo47527[6] = lst;
clo47527[7] = cdr;
void* f4678946932 = encode_clo(clo47527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4678946932;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47094 = encode_clo(alloc_clo(lam47094_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47096 = arg_buffer[1];
//reading env and args
void* kont46782 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47529 = alloc_clo(lam47094_fptr, 8);

//setting env list
clo47529[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo47529[2] = filter;
clo47529[3] = cdr;
clo47529[4] = list;
clo47529[5] = cons;
clo47529[6] = kont46782;
clo47529[7] = op;
clo47529[8] = lst;
void* f4679046928 = encode_clo(clo47529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4679046928;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam47097_fptr() // lam47097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47098 = arg_buffer[1];
//reading env and args
void* a4669346951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4669146948 = (decode_clo(env47098))[3];
//not do dummy comment
void* drop = (decode_clo(env47098))[2];
//not do dummy comment
void* kont46791 = (decode_clo(env47098))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont46791;
arg_buffer[3] = a4669146948;
arg_buffer[4] = a4669346951;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47097 = encode_clo(alloc_clo(lam47097_fptr, 0));

void* lam47100_fptr() // lam47100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47101 = arg_buffer[1];
//reading env and args
void* a4669146948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env47101))[4];
//not do dummy comment
void* kont46791 = (decode_clo(env47101))[3];
//not do dummy comment
void* n = (decode_clo(env47101))[2];
//not do dummy comment
void* _u45 = (decode_clo(env47101))[1];
mpz_t* mpzvar47530 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47530, "1", 10);
void* a4669246949 = encode_mpz(mpzvar47530);

//creating new closure instance
void** clo47532 = alloc_clo(lam47097_fptr, 3);

//setting env list
clo47532[1] = kont46791;
clo47532[2] = drop;
clo47532[3] = a4669146948;
void* f4679246950 = encode_clo(clo47532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4679246950;
arg_buffer[3] = n;
arg_buffer[4] = a4669246949;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47100 = encode_clo(alloc_clo(lam47100_fptr, 0));

void* lam47102_fptr() // lam47102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47103 = arg_buffer[1];
//reading env and args
void* a4669046946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47103))[6];
//not do dummy comment
void* kont46791 = (decode_clo(env47103))[5];
//not do dummy comment
void* n = (decode_clo(env47103))[4];
//not do dummy comment
void* _u45 = (decode_clo(env47103))[3];
//not do dummy comment
void* lst = (decode_clo(env47103))[2];
//not do dummy comment
void* drop = (decode_clo(env47103))[1];

//if-clause
bool if_guard47533 = is_true(a4669046946);
if(if_guard47533)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46791);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46791))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47535 = alloc_clo(lam47100_fptr, 4);

//setting env list
clo47535[1] = _u45;
clo47535[2] = n;
clo47535[3] = kont46791;
clo47535[4] = drop;
void* f4679346947 = encode_clo(clo47535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4679346947;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47102 = encode_clo(alloc_clo(lam47102_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47105 = arg_buffer[1];
//reading env and args
void* kont46791 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar47536 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47536, "0", 10);
void* a4668946944 = encode_mpz(mpzvar47536);

//creating new closure instance
void** clo47538 = alloc_clo(lam47102_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo47538[1] = drop;
clo47538[2] = lst;
clo47538[3] = _u45;
clo47538[4] = n;
clo47538[5] = kont46791;
clo47538[6] = cdr;
void* f4679446945 = encode_clo(clo47538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4679446945;
arg_buffer[3] = n;
arg_buffer[4] = a4668946944;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam47106_fptr() // lam47106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47107 = arg_buffer[1];
//reading env and args
void* a4669746959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env47107))[3];
//not do dummy comment
void* a4669546955 = (decode_clo(env47107))[2];
//not do dummy comment
void* kont46795 = (decode_clo(env47107))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont46795;
arg_buffer[3] = a4669546955;
arg_buffer[4] = a4669746959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47106 = encode_clo(alloc_clo(lam47106_fptr, 0));

void* lam47108_fptr() // lam47108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47109 = arg_buffer[1];
//reading env and args
void* a4669646957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env47109))[5];
//not do dummy comment
void* a4669546955 = (decode_clo(env47109))[4];
//not do dummy comment
void* kont46795 = (decode_clo(env47109))[3];
//not do dummy comment
void* proc = (decode_clo(env47109))[2];
//not do dummy comment
void* acc = (decode_clo(env47109))[1];

//creating new closure instance
void** clo47540 = alloc_clo(lam47106_fptr, 3);

//setting env list
clo47540[1] = kont46795;
clo47540[2] = a4669546955;
clo47540[3] = proc;
void* f4679646958 = encode_clo(clo47540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4679646958;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4669646957;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47108 = encode_clo(alloc_clo(lam47108_fptr, 0));

void* lam47110_fptr() // lam47110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47111 = arg_buffer[1];
//reading env and args
void* a4669546955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47111))[6];
//not do dummy comment
void* kont46795 = (decode_clo(env47111))[5];
//not do dummy comment
void* foldr = (decode_clo(env47111))[4];
//not do dummy comment
void* lst = (decode_clo(env47111))[3];
//not do dummy comment
void* proc = (decode_clo(env47111))[2];
//not do dummy comment
void* acc = (decode_clo(env47111))[1];

//creating new closure instance
void** clo47542 = alloc_clo(lam47108_fptr, 5);

//setting env list
clo47542[1] = acc;
clo47542[2] = proc;
clo47542[3] = kont46795;
clo47542[4] = a4669546955;
clo47542[5] = foldr;
void* f4679746956 = encode_clo(clo47542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4679746956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47110 = encode_clo(alloc_clo(lam47110_fptr, 0));

void* lam47112_fptr() // lam47112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47113 = arg_buffer[1];
//reading env and args
void* a4669446953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47113))[7];
//not do dummy comment
void* kont46795 = (decode_clo(env47113))[6];
//not do dummy comment
void* car = (decode_clo(env47113))[5];
//not do dummy comment
void* foldr = (decode_clo(env47113))[4];
//not do dummy comment
void* lst = (decode_clo(env47113))[3];
//not do dummy comment
void* proc = (decode_clo(env47113))[2];
//not do dummy comment
void* acc = (decode_clo(env47113))[1];

//if-clause
bool if_guard47543 = is_true(a4669446953);
if(if_guard47543)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46795);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46795))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47545 = alloc_clo(lam47110_fptr, 6);

//setting env list
clo47545[1] = acc;
clo47545[2] = proc;
clo47545[3] = lst;
clo47545[4] = foldr;
clo47545[5] = kont46795;
clo47545[6] = cdr;
void* f4679846954 = encode_clo(clo47545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4679846954;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47112 = encode_clo(alloc_clo(lam47112_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47114 = arg_buffer[1];
//reading env and args
void* kont46795 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo47547 = alloc_clo(lam47112_fptr, 7);

//setting env list
clo47547[1] = acc;
clo47547[2] = proc;
clo47547[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo47547[4] = foldr;
clo47547[5] = car;
clo47547[6] = kont46795;
clo47547[7] = cdr;
void* f4679946952 = encode_clo(clo47547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4679946952;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam47115_fptr() // lam47115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47116 = arg_buffer[1];
//reading env and args
void* a4670146967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4669946963 = (decode_clo(env47116))[3];
//not do dummy comment
void* cons = (decode_clo(env47116))[2];
//not do dummy comment
void* kont46800 = (decode_clo(env47116))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46800;
arg_buffer[3] = a4669946963;
arg_buffer[4] = a4670146967;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47115 = encode_clo(alloc_clo(lam47115_fptr, 0));

void* lam47117_fptr() // lam47117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47118 = arg_buffer[1];
//reading env and args
void* a4670046965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4669946963 = (decode_clo(env47118))[5];
//not do dummy comment
void* append = (decode_clo(env47118))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47118))[3];
//not do dummy comment
void* cons = (decode_clo(env47118))[2];
//not do dummy comment
void* kont46800 = (decode_clo(env47118))[1];

//creating new closure instance
void** clo47549 = alloc_clo(lam47115_fptr, 3);

//setting env list
clo47549[1] = kont46800;
clo47549[2] = cons;
clo47549[3] = a4669946963;
void* f4680146966 = encode_clo(clo47549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4680146966;
arg_buffer[3] = a4670046965;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47117 = encode_clo(alloc_clo(lam47117_fptr, 0));

void* lam47119_fptr() // lam47119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47120 = arg_buffer[1];
//reading env and args
void* a4669946963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47120))[6];
//not do dummy comment
void* append = (decode_clo(env47120))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47120))[4];
//not do dummy comment
void* lst1 = (decode_clo(env47120))[3];
//not do dummy comment
void* cons = (decode_clo(env47120))[2];
//not do dummy comment
void* kont46800 = (decode_clo(env47120))[1];

//creating new closure instance
void** clo47551 = alloc_clo(lam47117_fptr, 5);

//setting env list
clo47551[1] = kont46800;
clo47551[2] = cons;
clo47551[3] = lst2;
clo47551[4] = append;
clo47551[5] = a4669946963;
void* f4680246964 = encode_clo(clo47551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4680246964;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47119 = encode_clo(alloc_clo(lam47119_fptr, 0));

void* lam47121_fptr() // lam47121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47122 = arg_buffer[1];
//reading env and args
void* a4669846961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47122))[7];
//not do dummy comment
void* append = (decode_clo(env47122))[6];
//not do dummy comment
void* lst2 = (decode_clo(env47122))[5];
//not do dummy comment
void* lst1 = (decode_clo(env47122))[4];
//not do dummy comment
void* car = (decode_clo(env47122))[3];
//not do dummy comment
void* cons = (decode_clo(env47122))[2];
//not do dummy comment
void* kont46800 = (decode_clo(env47122))[1];

//if-clause
bool if_guard47552 = is_true(a4669846961);
if(if_guard47552)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46800);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46800))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47554 = alloc_clo(lam47119_fptr, 6);

//setting env list
clo47554[1] = kont46800;
clo47554[2] = cons;
clo47554[3] = lst1;
clo47554[4] = lst2;
clo47554[5] = append;
clo47554[6] = cdr;
void* f4680346962 = encode_clo(clo47554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4680346962;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47121 = encode_clo(alloc_clo(lam47121_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47123 = arg_buffer[1];
//reading env and args
void* kont46800 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47556 = alloc_clo(lam47121_fptr, 7);

//setting env list
clo47556[1] = kont46800;
clo47556[2] = cons;
clo47556[3] = car;
clo47556[4] = lst1;
clo47556[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo47556[6] = append;
clo47556[7] = cdr;
void* f4680446960 = encode_clo(clo47556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4680446960;
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
void* _47124 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont4680546968 = prim_car(lst);
void* lst46969 = prim_cdr(lst);
void* x4670246970 = apply_prim_hash(lst46969);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4680546968);
arg_buffer[2] = x4670246970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4680546968))[0]);
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
void* _47125 = arg_buffer[1];
//reading env and args
void* kont46807 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4670346971 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46807);
arg_buffer[2] = x4670346971;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46807))[0]);
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
void* _47126 = arg_buffer[1];
//reading env and args
void* kont46808 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4670446972 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46808);
arg_buffer[2] = x4670446972;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46808))[0]);
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
void* _47127 = arg_buffer[1];
//reading env and args
void* kont46809 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4670546973 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46809);
arg_buffer[2] = x4670546973;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46809))[0]);
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
void* _47128 = arg_buffer[1];
//reading env and args
void* kont46810 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4670646974 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46810);
arg_buffer[2] = x4670646974;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46810))[0]);
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
void* _47131 = arg_buffer[1];
//reading env and args
void* kont46811 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar47557 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47557, "28", 10);
void* a4670746975 = encode_mpz(mpzvar47557);
mpz_t* mpzvar47558 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47558, "8", 10);
void* a4670846976 = encode_mpz(mpzvar47558);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = kont46811;
arg_buffer[3] = a4670746975;
arg_buffer[4] = a4670846976;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam47132_fptr() // lam47132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47133 = arg_buffer[1];
//reading env and args
void* x4670946978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46812 = (decode_clo(env47133))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46812);
arg_buffer[2] = x4670946978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46812))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47132 = encode_clo(alloc_clo(lam47132_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47134 = arg_buffer[1];
//reading env and args
void* kont46812 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo47560 = alloc_clo(lam47132_fptr, 1);

//setting env list
clo47560[1] = kont46812;
void* f4681346977 = encode_clo(clo47560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4681346977;
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

