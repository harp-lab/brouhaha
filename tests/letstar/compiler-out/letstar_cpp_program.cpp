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
void* _22833 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2253522653 = prim_car(lst);
void* lst22654 = prim_cdr(lst);
void* x2243522655 = apply_prim__u43(lst22654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2253522653);
arg_buffer[2] = x2243522655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2253522653))[0]);
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
void* _22834 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2253722656 = prim_car(lst);
void* lst22657 = prim_cdr(lst);
void* x2243622658 = apply_prim_max(lst22657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2253722656);
arg_buffer[2] = x2243622658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2253722656))[0]);
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
void* _22835 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2253922659 = prim_car(lst);
void* lst22660 = prim_cdr(lst);
void* x2243722661 = apply_prim__u45(lst22660);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2253922659);
arg_buffer[2] = x2243722661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2253922659))[0]);
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
void* _22836 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2254122662 = prim_car(lst);
void* lst22663 = prim_cdr(lst);
void* x2243822664 = apply_prim__u42(lst22663);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2254122662);
arg_buffer[2] = x2243822664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2254122662))[0]);
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
void* _22837 = arg_buffer[1];
//reading env and args
void* kont22543 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2243922665 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22543);
arg_buffer[2] = x2243922665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22543))[0]);
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
void* _22838 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2254422666 = prim_car(lst);
void* lst22667 = prim_cdr(lst);
void* x2244022668 = apply_prim__u47(lst22667);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2254422666);
arg_buffer[2] = x2244022668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2254422666))[0]);
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
void* _22839 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2254622669 = prim_car(lst);
void* lst22670 = prim_cdr(lst);
void* x2244122671 = apply_prim__u61(lst22670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2254622669);
arg_buffer[2] = x2244122671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2254622669))[0]);
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
void* _22840 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2254822672 = prim_car(lst);
void* lst22673 = prim_cdr(lst);
void* x2244222674 = apply_prim__u62(lst22673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2254822672);
arg_buffer[2] = x2244222674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2254822672))[0]);
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
void* _22841 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2255022675 = prim_car(lst);
void* lst22676 = prim_cdr(lst);
void* x2244322677 = apply_prim__u60(lst22676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2255022675);
arg_buffer[2] = x2244322677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2255022675))[0]);
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
void* _22842 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2255222678 = prim_car(lst);
void* lst22679 = prim_cdr(lst);
void* x2244422680 = apply_prim__u60_u61(lst22679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2255222678);
arg_buffer[2] = x2244422680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2255222678))[0]);
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
void* _22843 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2255422681 = prim_car(lst);
void* lst22682 = prim_cdr(lst);
void* x2244522683 = apply_prim__u62_u61(lst22682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2255422681);
arg_buffer[2] = x2244522683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2255422681))[0]);
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
void* _22844 = arg_buffer[1];
//reading env and args
void* kont22556 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2244622684 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22556);
arg_buffer[2] = x2244622684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22556))[0]);
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
void* _22845 = arg_buffer[1];
//reading env and args
void* kont22557 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2244722685 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22557);
arg_buffer[2] = x2244722685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22557))[0]);
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
void* _22846 = arg_buffer[1];
//reading env and args
void* kont22558 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2244822686 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22558);
arg_buffer[2] = x2244822686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22558))[0]);
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
void* _22847 = arg_buffer[1];
//reading env and args
void* kont22559 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2244922687 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22559);
arg_buffer[2] = x2244922687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22559))[0]);
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
void* _22848 = arg_buffer[1];
//reading env and args
void* kont22560 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2245022688 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22560);
arg_buffer[2] = x2245022688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22560))[0]);
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
void* _22849 = arg_buffer[1];
//reading env and args
void* kont22561 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2245122689 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22561);
arg_buffer[2] = x2245122689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22561))[0]);
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
void* _22850 = arg_buffer[1];
//reading env and args
void* kont22562 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2245222690 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22562);
arg_buffer[2] = x2245222690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22562))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam22851_fptr() // lam22851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22852 = arg_buffer[1];
//reading env and args
void* a2245522694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env22852))[3];
//not do dummy comment
void* kont22563 = (decode_clo(env22852))[2];
//not do dummy comment
void* a2245322691 = (decode_clo(env22852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22563;
arg_buffer[3] = a2245322691;
arg_buffer[4] = a2245522694;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22851 = encode_clo(alloc_clo(lam22851_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22855 = arg_buffer[1];
//reading env and args
void* kont22563 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar23004 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23004, "0", 10);
void* a2245322691 = encode_mpz(mpzvar23004);
mpz_t* mpzvar23005 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23005, "2", 10);
void* a2245422692 = encode_mpz(mpzvar23005);

//creating new closure instance
void** clo23007 = alloc_clo(lam22851_fptr, 3);

//setting env list
clo23007[1] = a2245322691;
clo23007[2] = kont22563;
clo23007[3] = equal_u63;
void* f2256422693 = encode_clo(clo23007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2256422693;
arg_buffer[3] = x;
arg_buffer[4] = a2245422692;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam22856_fptr() // lam22856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22857 = arg_buffer[1];
//reading env and args
void* a2245822698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22565 = (decode_clo(env22857))[3];
//not do dummy comment
void* a2245622695 = (decode_clo(env22857))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env22857))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22565;
arg_buffer[3] = a2245622695;
arg_buffer[4] = a2245822698;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22856 = encode_clo(alloc_clo(lam22856_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22860 = arg_buffer[1];
//reading env and args
void* kont22565 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar23008 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23008, "1", 10);
void* a2245622695 = encode_mpz(mpzvar23008);
mpz_t* mpzvar23009 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23009, "2", 10);
void* a2245722696 = encode_mpz(mpzvar23009);

//creating new closure instance
void** clo23011 = alloc_clo(lam22856_fptr, 3);

//setting env list
clo23011[1] = equal_u63;
clo23011[2] = a2245622695;
clo23011[3] = kont22565;
void* f2256622697 = encode_clo(clo23011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2256622697;
arg_buffer[3] = x;
arg_buffer[4] = a2245722696;
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
void* _22861 = arg_buffer[1];
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

void* kont2256722699 = prim_car(x);
void* x22700 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2256722699);
arg_buffer[2] = x22700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2256722699))[0]);
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
void* _22862 = arg_buffer[1];
//reading env and args
void* kont22569 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2245922701 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22569);
arg_buffer[2] = x2245922701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22569))[0]);
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
void* _22863 = arg_buffer[1];
//reading env and args
void* kont22570 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2246022702 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22570);
arg_buffer[2] = x2246022702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22570))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam22866_fptr() // lam22866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22867 = arg_buffer[1];
//reading env and args
void* a2246622712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22571 = (decode_clo(env22867))[3];
//not do dummy comment
void* x = (decode_clo(env22867))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont22571;
arg_buffer[3] = x;
arg_buffer[4] = a2246622712;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22866 = encode_clo(alloc_clo(lam22866_fptr, 0));

void* lam22868_fptr() // lam22868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22869 = arg_buffer[1];
//reading env and args
void* a2246422709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22869))[5];
//not do dummy comment
void* lst = (decode_clo(env22869))[4];
//not do dummy comment
void* kont22571 = (decode_clo(env22869))[3];
//not do dummy comment
void* x = (decode_clo(env22869))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22869))[1];

//if-clause
bool if_guard23012 = is_true(a2246422709);
if(if_guard23012)
{
void* x2246522710 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22571);
arg_buffer[2] = x2246522710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22571))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23014 = alloc_clo(lam22866_fptr, 3);

//setting env list
clo23014[1] = member_u63;
clo23014[2] = x;
clo23014[3] = kont22571;
void* f2257222711 = encode_clo(clo23014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2257222711;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22868 = encode_clo(alloc_clo(lam22868_fptr, 0));

void* lam22870_fptr() // lam22870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22871 = arg_buffer[1];
//reading env and args
void* a2246322707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22871))[6];
//not do dummy comment
void* lst = (decode_clo(env22871))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env22871))[4];
//not do dummy comment
void* kont22571 = (decode_clo(env22871))[3];
//not do dummy comment
void* x = (decode_clo(env22871))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22871))[1];

//creating new closure instance
void** clo23016 = alloc_clo(lam22868_fptr, 5);

//setting env list
clo23016[1] = member_u63;
clo23016[2] = x;
clo23016[3] = kont22571;
clo23016[4] = lst;
clo23016[5] = cdr;
void* f2257322708 = encode_clo(clo23016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2257322708;
arg_buffer[3] = a2246322707;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22870 = encode_clo(alloc_clo(lam22870_fptr, 0));

void* lam22872_fptr() // lam22872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22873 = arg_buffer[1];
//reading env and args
void* a2246122704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22873))[7];
//not do dummy comment
void* lst = (decode_clo(env22873))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env22873))[5];
//not do dummy comment
void* kont22571 = (decode_clo(env22873))[4];
//not do dummy comment
void* x = (decode_clo(env22873))[3];
//not do dummy comment
void* car = (decode_clo(env22873))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22873))[1];

//if-clause
bool if_guard23017 = is_true(a2246122704);
if(if_guard23017)
{
void* x2246222705 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22571);
arg_buffer[2] = x2246222705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22571))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23019 = alloc_clo(lam22870_fptr, 6);

//setting env list
clo23019[1] = member_u63;
clo23019[2] = x;
clo23019[3] = kont22571;
clo23019[4] = equal_u63;
clo23019[5] = lst;
clo23019[6] = cdr;
void* f2257422706 = encode_clo(clo23019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2257422706;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22872 = encode_clo(alloc_clo(lam22872_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22874 = arg_buffer[1];
//reading env and args
void* kont22571 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23021 = alloc_clo(lam22872_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo23021[1] = member_u63;
clo23021[2] = car;
clo23021[3] = x;
clo23021[4] = kont22571;
clo23021[5] = equal_u63;
clo23021[6] = lst;
clo23021[7] = cdr;
void* f2257522703 = encode_clo(clo23021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2257522703;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam22875_fptr() // lam22875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22876 = arg_buffer[1];
//reading env and args
void* a2247022720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env22876))[4];
//not do dummy comment
void* a2246922718 = (decode_clo(env22876))[3];
//not do dummy comment
void* kont22576 = (decode_clo(env22876))[2];
//not do dummy comment
void* foldl = (decode_clo(env22876))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont22576;
arg_buffer[3] = fun;
arg_buffer[4] = a2246922718;
arg_buffer[5] = a2247022720;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22875 = encode_clo(alloc_clo(lam22875_fptr, 0));

void* lam22877_fptr() // lam22877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22878 = arg_buffer[1];
//reading env and args
void* a2246922718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22878))[5];
//not do dummy comment
void* lst = (decode_clo(env22878))[4];
//not do dummy comment
void* fun = (decode_clo(env22878))[3];
//not do dummy comment
void* kont22576 = (decode_clo(env22878))[2];
//not do dummy comment
void* foldl = (decode_clo(env22878))[1];

//creating new closure instance
void** clo23023 = alloc_clo(lam22875_fptr, 4);

//setting env list
clo23023[1] = foldl;
clo23023[2] = kont22576;
clo23023[3] = a2246922718;
clo23023[4] = fun;
void* f2257722719 = encode_clo(clo23023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2257722719;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22877 = encode_clo(alloc_clo(lam22877_fptr, 0));

void* lam22879_fptr() // lam22879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22880 = arg_buffer[1];
//reading env and args
void* a2246822716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22880))[6];
//not do dummy comment
void* lst = (decode_clo(env22880))[5];
//not do dummy comment
void* fun = (decode_clo(env22880))[4];
//not do dummy comment
void* acc = (decode_clo(env22880))[3];
//not do dummy comment
void* kont22576 = (decode_clo(env22880))[2];
//not do dummy comment
void* foldl = (decode_clo(env22880))[1];

//creating new closure instance
void** clo23025 = alloc_clo(lam22877_fptr, 5);

//setting env list
clo23025[1] = foldl;
clo23025[2] = kont22576;
clo23025[3] = fun;
clo23025[4] = lst;
clo23025[5] = cdr;
void* f2257822717 = encode_clo(clo23025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2257822717;
arg_buffer[3] = a2246822716;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22879 = encode_clo(alloc_clo(lam22879_fptr, 0));

void* lam22881_fptr() // lam22881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22882 = arg_buffer[1];
//reading env and args
void* a2246722714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22882))[7];
//not do dummy comment
void* lst = (decode_clo(env22882))[6];
//not do dummy comment
void* fun = (decode_clo(env22882))[5];
//not do dummy comment
void* acc = (decode_clo(env22882))[4];
//not do dummy comment
void* car = (decode_clo(env22882))[3];
//not do dummy comment
void* kont22576 = (decode_clo(env22882))[2];
//not do dummy comment
void* foldl = (decode_clo(env22882))[1];

//if-clause
bool if_guard23026 = is_true(a2246722714);
if(if_guard23026)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22576);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22576))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23028 = alloc_clo(lam22879_fptr, 6);

//setting env list
clo23028[1] = foldl;
clo23028[2] = kont22576;
clo23028[3] = acc;
clo23028[4] = fun;
clo23028[5] = lst;
clo23028[6] = cdr;
void* f2257922715 = encode_clo(clo23028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2257922715;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22881 = encode_clo(alloc_clo(lam22881_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22883 = arg_buffer[1];
//reading env and args
void* kont22576 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo23030 = alloc_clo(lam22881_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo23030[1] = foldl;
clo23030[2] = kont22576;
clo23030[3] = car;
clo23030[4] = acc;
clo23030[5] = fun;
clo23030[6] = lst;
clo23030[7] = cdr;
void* f2258022713 = encode_clo(clo23030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2258022713;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam22884_fptr() // lam22884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22885 = arg_buffer[1];
//reading env and args
void* a2247422728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2247222724 = (decode_clo(env22885))[3];
//not do dummy comment
void* kont22581 = (decode_clo(env22885))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22885))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22581;
arg_buffer[3] = a2247222724;
arg_buffer[4] = a2247422728;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22884 = encode_clo(alloc_clo(lam22884_fptr, 0));

void* lam22886_fptr() // lam22886 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22887 = arg_buffer[1];
//reading env and args
void* a2247322726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2247222724 = (decode_clo(env22887))[5];
//not do dummy comment
void* kont22581 = (decode_clo(env22887))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22887))[3];
//not do dummy comment
void* lst2 = (decode_clo(env22887))[2];
//not do dummy comment
void* cons = (decode_clo(env22887))[1];

//creating new closure instance
void** clo23032 = alloc_clo(lam22884_fptr, 3);

//setting env list
clo23032[1] = reverse_u45helper;
clo23032[2] = kont22581;
clo23032[3] = a2247222724;
void* f2258222727 = encode_clo(clo23032);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2258222727;
arg_buffer[3] = a2247322726;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22886 = encode_clo(alloc_clo(lam22886_fptr, 0));

void* lam22888_fptr() // lam22888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22889 = arg_buffer[1];
//reading env and args
void* a2247222724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22581 = (decode_clo(env22889))[6];
//not do dummy comment
void* lst = (decode_clo(env22889))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22889))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22889))[3];
//not do dummy comment
void* car = (decode_clo(env22889))[2];
//not do dummy comment
void* cons = (decode_clo(env22889))[1];

//creating new closure instance
void** clo23034 = alloc_clo(lam22886_fptr, 5);

//setting env list
clo23034[1] = cons;
clo23034[2] = lst2;
clo23034[3] = reverse_u45helper;
clo23034[4] = kont22581;
clo23034[5] = a2247222724;
void* f2258322725 = encode_clo(clo23034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2258322725;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22888 = encode_clo(alloc_clo(lam22888_fptr, 0));

void* lam22890_fptr() // lam22890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22891 = arg_buffer[1];
//reading env and args
void* a2247122722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22891))[7];
//not do dummy comment
void* kont22581 = (decode_clo(env22891))[6];
//not do dummy comment
void* lst = (decode_clo(env22891))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22891))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22891))[3];
//not do dummy comment
void* car = (decode_clo(env22891))[2];
//not do dummy comment
void* cons = (decode_clo(env22891))[1];

//if-clause
bool if_guard23035 = is_true(a2247122722);
if(if_guard23035)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22581);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22581))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23037 = alloc_clo(lam22888_fptr, 6);

//setting env list
clo23037[1] = cons;
clo23037[2] = car;
clo23037[3] = lst2;
clo23037[4] = reverse_u45helper;
clo23037[5] = lst;
clo23037[6] = kont22581;
void* f2258422723 = encode_clo(clo23037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2258422723;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22890 = encode_clo(alloc_clo(lam22890_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22892 = arg_buffer[1];
//reading env and args
void* kont22581 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23039 = alloc_clo(lam22890_fptr, 7);

//setting env list
clo23039[1] = cons;
clo23039[2] = car;
clo23039[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo23039[4] = reverse_u45helper;
clo23039[5] = lst;
clo23039[6] = kont22581;
clo23039[7] = cdr;
void* f2258522721 = encode_clo(clo23039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2258522721;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam22893_fptr() // lam22893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22894 = arg_buffer[1];
//reading env and args
void* a2247522730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22894))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22894))[2];
//not do dummy comment
void* kont22586 = (decode_clo(env22894))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22586;
arg_buffer[3] = lst;
arg_buffer[4] = a2247522730;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22893 = encode_clo(alloc_clo(lam22893_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22895 = arg_buffer[1];
//reading env and args
void* kont22586 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo23041 = alloc_clo(lam22893_fptr, 3);

//setting env list
clo23041[1] = kont22586;
clo23041[2] = reverse_u45helper;
clo23041[3] = lst;
void* f2258722729 = encode_clo(clo23041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2258722729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam22896_fptr() // lam22896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22897 = arg_buffer[1];
//reading env and args
void* x2247822735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22588 = (decode_clo(env22897))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22588);
arg_buffer[2] = x2247822735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22896 = encode_clo(alloc_clo(lam22896_fptr, 0));

void* lam22898_fptr() // lam22898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22899 = arg_buffer[1];
//reading env and args
void* a2248322744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2248122740 = (decode_clo(env22899))[4];
//not do dummy comment
void* kont22588 = (decode_clo(env22899))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22899))[2];
//not do dummy comment
void* a2247922737 = (decode_clo(env22899))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22588;
arg_buffer[3] = a2247922737;
arg_buffer[4] = a2248122740;
arg_buffer[5] = a2248322744;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22898 = encode_clo(alloc_clo(lam22898_fptr, 0));

void* lam22900_fptr() // lam22900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22901 = arg_buffer[1];
//reading env and args
void* a2248222742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2248122740 = (decode_clo(env22901))[6];
//not do dummy comment
void* kont22588 = (decode_clo(env22901))[5];
//not do dummy comment
void* cons = (decode_clo(env22901))[4];
//not do dummy comment
void* a2247922737 = (decode_clo(env22901))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22901))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22901))[1];

//creating new closure instance
void** clo23043 = alloc_clo(lam22898_fptr, 4);

//setting env list
clo23043[1] = a2247922737;
clo23043[2] = take_u45helper;
clo23043[3] = kont22588;
clo23043[4] = a2248122740;
void* f2259022743 = encode_clo(clo23043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2259022743;
arg_buffer[3] = a2248222742;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22900 = encode_clo(alloc_clo(lam22900_fptr, 0));

void* lam22902_fptr() // lam22902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22903 = arg_buffer[1];
//reading env and args
void* a2248122740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22903))[7];
//not do dummy comment
void* kont22588 = (decode_clo(env22903))[6];
//not do dummy comment
void* car = (decode_clo(env22903))[5];
//not do dummy comment
void* cons = (decode_clo(env22903))[4];
//not do dummy comment
void* a2247922737 = (decode_clo(env22903))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22903))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22903))[1];

//creating new closure instance
void** clo23045 = alloc_clo(lam22900_fptr, 6);

//setting env list
clo23045[1] = lst2;
clo23045[2] = take_u45helper;
clo23045[3] = a2247922737;
clo23045[4] = cons;
clo23045[5] = kont22588;
clo23045[6] = a2248122740;
void* f2259122741 = encode_clo(clo23045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2259122741;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22902 = encode_clo(alloc_clo(lam22902_fptr, 0));

void* lam22905_fptr() // lam22905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22906 = arg_buffer[1];
//reading env and args
void* a2247922737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22906))[8];
//not do dummy comment
void* kont22588 = (decode_clo(env22906))[7];
//not do dummy comment
void* cons = (decode_clo(env22906))[6];
//not do dummy comment
void* _u45 = (decode_clo(env22906))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env22906))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22906))[3];
//not do dummy comment
void* n = (decode_clo(env22906))[2];
//not do dummy comment
void* car = (decode_clo(env22906))[1];
mpz_t* mpzvar23046 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23046, "1", 10);
void* a2248022738 = encode_mpz(mpzvar23046);

//creating new closure instance
void** clo23048 = alloc_clo(lam22902_fptr, 7);

//setting env list
clo23048[1] = lst2;
clo23048[2] = take_u45helper;
clo23048[3] = a2247922737;
clo23048[4] = cons;
clo23048[5] = car;
clo23048[6] = kont22588;
clo23048[7] = lst;
void* f2259222739 = encode_clo(clo23048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2259222739;
arg_buffer[3] = n;
arg_buffer[4] = a2248022738;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22905 = encode_clo(alloc_clo(lam22905_fptr, 0));

void* lam22907_fptr() // lam22907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22908 = arg_buffer[1];
//reading env and args
void* a2247722733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22908))[10];
//not do dummy comment
void* lst = (decode_clo(env22908))[9];
//not do dummy comment
void* reverse = (decode_clo(env22908))[8];
//not do dummy comment
void* kont22588 = (decode_clo(env22908))[7];
//not do dummy comment
void* cons = (decode_clo(env22908))[6];
//not do dummy comment
void* _u45 = (decode_clo(env22908))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env22908))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22908))[3];
//not do dummy comment
void* n = (decode_clo(env22908))[2];
//not do dummy comment
void* car = (decode_clo(env22908))[1];

//if-clause
bool if_guard23049 = is_true(a2247722733);
if(if_guard23049)
{

//creating new closure instance
void** clo23051 = alloc_clo(lam22896_fptr, 1);

//setting env list
clo23051[1] = kont22588;
void* f2258922734 = encode_clo(clo23051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2258922734;
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
void** clo23053 = alloc_clo(lam22905_fptr, 8);

//setting env list
clo23053[1] = car;
clo23053[2] = n;
clo23053[3] = lst2;
clo23053[4] = take_u45helper;
clo23053[5] = _u45;
clo23053[6] = cons;
clo23053[7] = kont22588;
clo23053[8] = lst;
void* f2259322736 = encode_clo(clo23053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2259322736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22907 = encode_clo(alloc_clo(lam22907_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22910 = arg_buffer[1];
//reading env and args
void* kont22588 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar23054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23054, "0", 10);
void* a2247622731 = encode_mpz(mpzvar23054);

//creating new closure instance
void** clo23056 = alloc_clo(lam22907_fptr, 10);

//setting env list
clo23056[1] = car;
clo23056[2] = n;
clo23056[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo23056[4] = take_u45helper;
clo23056[5] = _u45;
clo23056[6] = cons;
clo23056[7] = kont22588;
clo23056[8] = reverse;
clo23056[9] = lst;
clo23056[10] = cdr;
void* f2259422732 = encode_clo(clo23056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2259422732;
arg_buffer[3] = n;
arg_buffer[4] = a2247622731;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam22911_fptr() // lam22911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22912 = arg_buffer[1];
//reading env and args
void* a2248422746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22595 = (decode_clo(env22912))[4];
//not do dummy comment
void* lst = (decode_clo(env22912))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22912))[2];
//not do dummy comment
void* n = (decode_clo(env22912))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22595;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2248422746;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22911 = encode_clo(alloc_clo(lam22911_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22913 = arg_buffer[1];
//reading env and args
void* kont22595 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23058 = alloc_clo(lam22911_fptr, 4);

//setting env list
clo23058[1] = n;
clo23058[2] = take_u45helper;
clo23058[3] = lst;
clo23058[4] = kont22595;
void* f2259622745 = encode_clo(clo23058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2259622745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam22915_fptr() // lam22915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22916 = arg_buffer[1];
//reading env and args
void* a2248922754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22597 = (decode_clo(env22916))[3];
//not do dummy comment
void* _u43 = (decode_clo(env22916))[2];
//not do dummy comment
void* a2248722750 = (decode_clo(env22916))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont22597;
arg_buffer[3] = a2248722750;
arg_buffer[4] = a2248922754;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22915 = encode_clo(alloc_clo(lam22915_fptr, 0));

void* lam22917_fptr() // lam22917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22918 = arg_buffer[1];
//reading env and args
void* a2248822752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22597 = (decode_clo(env22918))[4];
//not do dummy comment
void* length = (decode_clo(env22918))[3];
//not do dummy comment
void* _u43 = (decode_clo(env22918))[2];
//not do dummy comment
void* a2248722750 = (decode_clo(env22918))[1];

//creating new closure instance
void** clo23060 = alloc_clo(lam22915_fptr, 3);

//setting env list
clo23060[1] = a2248722750;
clo23060[2] = _u43;
clo23060[3] = kont22597;
void* f2259822753 = encode_clo(clo23060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2259822753;
arg_buffer[3] = a2248822752;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22917 = encode_clo(alloc_clo(lam22917_fptr, 0));

void* lam22920_fptr() // lam22920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22921 = arg_buffer[1];
//reading env and args
void* a2248522748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22921))[5];
//not do dummy comment
void* kont22597 = (decode_clo(env22921))[4];
//not do dummy comment
void* lst = (decode_clo(env22921))[3];
//not do dummy comment
void* length = (decode_clo(env22921))[2];
//not do dummy comment
void* _u43 = (decode_clo(env22921))[1];

//if-clause
bool if_guard23061 = is_true(a2248522748);
if(if_guard23061)
{
mpz_t* mpzvar23062 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23062, "0", 10);
void* x2248622749 = encode_mpz(mpzvar23062);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22597);
arg_buffer[2] = x2248622749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22597))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar23063 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23063, "1", 10);
void* a2248722750 = encode_mpz(mpzvar23063);

//creating new closure instance
void** clo23065 = alloc_clo(lam22917_fptr, 4);

//setting env list
clo23065[1] = a2248722750;
clo23065[2] = _u43;
clo23065[3] = length;
clo23065[4] = kont22597;
void* f2259922751 = encode_clo(clo23065);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2259922751;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22920 = encode_clo(alloc_clo(lam22920_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22922 = arg_buffer[1];
//reading env and args
void* kont22597 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo23067 = alloc_clo(lam22920_fptr, 5);

//setting env list
clo23067[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo23067[2] = length;
clo23067[3] = lst;
clo23067[4] = kont22597;
clo23067[5] = cdr;
void* f2260022747 = encode_clo(clo23067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2260022747;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam22923_fptr() // lam22923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22924 = arg_buffer[1];
//reading env and args
void* x2249122758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22601 = (decode_clo(env22924))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22601);
arg_buffer[2] = x2249122758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22601))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22923 = encode_clo(alloc_clo(lam22923_fptr, 0));

void* lam22925_fptr() // lam22925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22926 = arg_buffer[1];
//reading env and args
void* a2249522766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22601 = (decode_clo(env22926))[3];
//not do dummy comment
void* a2249322762 = (decode_clo(env22926))[2];
//not do dummy comment
void* cons = (decode_clo(env22926))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22601;
arg_buffer[3] = a2249322762;
arg_buffer[4] = a2249522766;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22925 = encode_clo(alloc_clo(lam22925_fptr, 0));

void* lam22927_fptr() // lam22927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22928 = arg_buffer[1];
//reading env and args
void* a2249422764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env22928))[5];
//not do dummy comment
void* kont22601 = (decode_clo(env22928))[4];
//not do dummy comment
void* a2249322762 = (decode_clo(env22928))[3];
//not do dummy comment
void* proc = (decode_clo(env22928))[2];
//not do dummy comment
void* cons = (decode_clo(env22928))[1];

//creating new closure instance
void** clo23069 = alloc_clo(lam22925_fptr, 3);

//setting env list
clo23069[1] = cons;
clo23069[2] = a2249322762;
clo23069[3] = kont22601;
void* f2260322765 = encode_clo(clo23069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2260322765;
arg_buffer[3] = proc;
arg_buffer[4] = a2249422764;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22927 = encode_clo(alloc_clo(lam22927_fptr, 0));

void* lam22929_fptr() // lam22929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22930 = arg_buffer[1];
//reading env and args
void* a2249322762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22930))[6];
//not do dummy comment
void* lst = (decode_clo(env22930))[5];
//not do dummy comment
void* map = (decode_clo(env22930))[4];
//not do dummy comment
void* kont22601 = (decode_clo(env22930))[3];
//not do dummy comment
void* proc = (decode_clo(env22930))[2];
//not do dummy comment
void* cons = (decode_clo(env22930))[1];

//creating new closure instance
void** clo23071 = alloc_clo(lam22927_fptr, 5);

//setting env list
clo23071[1] = cons;
clo23071[2] = proc;
clo23071[3] = a2249322762;
clo23071[4] = kont22601;
clo23071[5] = map;
void* f2260422763 = encode_clo(clo23071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2260422763;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22929 = encode_clo(alloc_clo(lam22929_fptr, 0));

void* lam22931_fptr() // lam22931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22932 = arg_buffer[1];
//reading env and args
void* a2249222760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22932))[6];
//not do dummy comment
void* lst = (decode_clo(env22932))[5];
//not do dummy comment
void* map = (decode_clo(env22932))[4];
//not do dummy comment
void* kont22601 = (decode_clo(env22932))[3];
//not do dummy comment
void* proc = (decode_clo(env22932))[2];
//not do dummy comment
void* cons = (decode_clo(env22932))[1];

//creating new closure instance
void** clo23073 = alloc_clo(lam22929_fptr, 6);

//setting env list
clo23073[1] = cons;
clo23073[2] = proc;
clo23073[3] = kont22601;
clo23073[4] = map;
clo23073[5] = lst;
clo23073[6] = cdr;
void* f2260522761 = encode_clo(clo23073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2260522761;
arg_buffer[3] = a2249222760;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22931 = encode_clo(alloc_clo(lam22931_fptr, 0));

void* lam22933_fptr() // lam22933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22934 = arg_buffer[1];
//reading env and args
void* a2249022756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22934))[8];
//not do dummy comment
void* map = (decode_clo(env22934))[7];
//not do dummy comment
void* kont22601 = (decode_clo(env22934))[6];
//not do dummy comment
void* proc = (decode_clo(env22934))[5];
//not do dummy comment
void* car = (decode_clo(env22934))[4];
//not do dummy comment
void* cons = (decode_clo(env22934))[3];
//not do dummy comment
void* list = (decode_clo(env22934))[2];
//not do dummy comment
void* cdr = (decode_clo(env22934))[1];

//if-clause
bool if_guard23074 = is_true(a2249022756);
if(if_guard23074)
{

//creating new closure instance
void** clo23076 = alloc_clo(lam22923_fptr, 1);

//setting env list
clo23076[1] = kont22601;
void* f2260222757 = encode_clo(clo23076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2260222757;
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
void** clo23078 = alloc_clo(lam22931_fptr, 6);

//setting env list
clo23078[1] = cons;
clo23078[2] = proc;
clo23078[3] = kont22601;
clo23078[4] = map;
clo23078[5] = lst;
clo23078[6] = cdr;
void* f2260622759 = encode_clo(clo23078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2260622759;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22933 = encode_clo(alloc_clo(lam22933_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22935 = arg_buffer[1];
//reading env and args
void* kont22601 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23080 = alloc_clo(lam22933_fptr, 8);

//setting env list
clo23080[1] = cdr;
clo23080[2] = list;
clo23080[3] = cons;
clo23080[4] = car;
clo23080[5] = proc;
clo23080[6] = kont22601;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo23080[7] = map;
clo23080[8] = lst;
void* f2260722755 = encode_clo(clo23080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2260722755;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam22936_fptr() // lam22936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22937 = arg_buffer[1];
//reading env and args
void* x2249722770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22608 = (decode_clo(env22937))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22608);
arg_buffer[2] = x2249722770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22608))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22936 = encode_clo(alloc_clo(lam22936_fptr, 0));

void* lam22938_fptr() // lam22938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22939 = arg_buffer[1];
//reading env and args
void* a2250222780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2250022776 = (decode_clo(env22939))[3];
//not do dummy comment
void* cons = (decode_clo(env22939))[2];
//not do dummy comment
void* kont22608 = (decode_clo(env22939))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22608;
arg_buffer[3] = a2250022776;
arg_buffer[4] = a2250222780;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22938 = encode_clo(alloc_clo(lam22938_fptr, 0));

void* lam22940_fptr() // lam22940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22941 = arg_buffer[1];
//reading env and args
void* a2250122778 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2250022776 = (decode_clo(env22941))[5];
//not do dummy comment
void* op = (decode_clo(env22941))[4];
//not do dummy comment
void* filter = (decode_clo(env22941))[3];
//not do dummy comment
void* cons = (decode_clo(env22941))[2];
//not do dummy comment
void* kont22608 = (decode_clo(env22941))[1];

//creating new closure instance
void** clo23082 = alloc_clo(lam22938_fptr, 3);

//setting env list
clo23082[1] = kont22608;
clo23082[2] = cons;
clo23082[3] = a2250022776;
void* f2261022779 = encode_clo(clo23082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2261022779;
arg_buffer[3] = op;
arg_buffer[4] = a2250122778;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22940 = encode_clo(alloc_clo(lam22940_fptr, 0));

void* lam22942_fptr() // lam22942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22943 = arg_buffer[1];
//reading env and args
void* a2250022776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22943))[6];
//not do dummy comment
void* lst = (decode_clo(env22943))[5];
//not do dummy comment
void* op = (decode_clo(env22943))[4];
//not do dummy comment
void* filter = (decode_clo(env22943))[3];
//not do dummy comment
void* cons = (decode_clo(env22943))[2];
//not do dummy comment
void* kont22608 = (decode_clo(env22943))[1];

//creating new closure instance
void** clo23084 = alloc_clo(lam22940_fptr, 5);

//setting env list
clo23084[1] = kont22608;
clo23084[2] = cons;
clo23084[3] = filter;
clo23084[4] = op;
clo23084[5] = a2250022776;
void* f2261122777 = encode_clo(clo23084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2261122777;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22942 = encode_clo(alloc_clo(lam22942_fptr, 0));

void* lam22944_fptr() // lam22944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22945 = arg_buffer[1];
//reading env and args
void* a2250322782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env22945))[3];
//not do dummy comment
void* filter = (decode_clo(env22945))[2];
//not do dummy comment
void* kont22608 = (decode_clo(env22945))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont22608;
arg_buffer[3] = op;
arg_buffer[4] = a2250322782;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22944 = encode_clo(alloc_clo(lam22944_fptr, 0));

void* lam22946_fptr() // lam22946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22947 = arg_buffer[1];
//reading env and args
void* a2249922774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22947))[7];
//not do dummy comment
void* lst = (decode_clo(env22947))[6];
//not do dummy comment
void* op = (decode_clo(env22947))[5];
//not do dummy comment
void* filter = (decode_clo(env22947))[4];
//not do dummy comment
void* car = (decode_clo(env22947))[3];
//not do dummy comment
void* cons = (decode_clo(env22947))[2];
//not do dummy comment
void* kont22608 = (decode_clo(env22947))[1];

//if-clause
bool if_guard23085 = is_true(a2249922774);
if(if_guard23085)
{

//creating new closure instance
void** clo23087 = alloc_clo(lam22942_fptr, 6);

//setting env list
clo23087[1] = kont22608;
clo23087[2] = cons;
clo23087[3] = filter;
clo23087[4] = op;
clo23087[5] = lst;
clo23087[6] = cdr;
void* f2261222775 = encode_clo(clo23087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2261222775;
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
void** clo23089 = alloc_clo(lam22944_fptr, 3);

//setting env list
clo23089[1] = kont22608;
clo23089[2] = filter;
clo23089[3] = op;
void* f2261322781 = encode_clo(clo23089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2261322781;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22946 = encode_clo(alloc_clo(lam22946_fptr, 0));

void* lam22948_fptr() // lam22948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22949 = arg_buffer[1];
//reading env and args
void* a2249822772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22949))[7];
//not do dummy comment
void* lst = (decode_clo(env22949))[6];
//not do dummy comment
void* op = (decode_clo(env22949))[5];
//not do dummy comment
void* filter = (decode_clo(env22949))[4];
//not do dummy comment
void* car = (decode_clo(env22949))[3];
//not do dummy comment
void* cons = (decode_clo(env22949))[2];
//not do dummy comment
void* kont22608 = (decode_clo(env22949))[1];

//creating new closure instance
void** clo23091 = alloc_clo(lam22946_fptr, 7);

//setting env list
clo23091[1] = kont22608;
clo23091[2] = cons;
clo23091[3] = car;
clo23091[4] = filter;
clo23091[5] = op;
clo23091[6] = lst;
clo23091[7] = cdr;
void* f2261422773 = encode_clo(clo23091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2261422773;
arg_buffer[3] = a2249822772;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22948 = encode_clo(alloc_clo(lam22948_fptr, 0));

void* lam22950_fptr() // lam22950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22951 = arg_buffer[1];
//reading env and args
void* a2249622768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22951))[8];
//not do dummy comment
void* op = (decode_clo(env22951))[7];
//not do dummy comment
void* list = (decode_clo(env22951))[6];
//not do dummy comment
void* cdr = (decode_clo(env22951))[5];
//not do dummy comment
void* filter = (decode_clo(env22951))[4];
//not do dummy comment
void* car = (decode_clo(env22951))[3];
//not do dummy comment
void* cons = (decode_clo(env22951))[2];
//not do dummy comment
void* kont22608 = (decode_clo(env22951))[1];

//if-clause
bool if_guard23092 = is_true(a2249622768);
if(if_guard23092)
{

//creating new closure instance
void** clo23094 = alloc_clo(lam22936_fptr, 1);

//setting env list
clo23094[1] = kont22608;
void* f2260922769 = encode_clo(clo23094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2260922769;
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
void** clo23096 = alloc_clo(lam22948_fptr, 7);

//setting env list
clo23096[1] = kont22608;
clo23096[2] = cons;
clo23096[3] = car;
clo23096[4] = filter;
clo23096[5] = op;
clo23096[6] = lst;
clo23096[7] = cdr;
void* f2261522771 = encode_clo(clo23096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2261522771;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22950 = encode_clo(alloc_clo(lam22950_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22952 = arg_buffer[1];
//reading env and args
void* kont22608 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23098 = alloc_clo(lam22950_fptr, 8);

//setting env list
clo23098[1] = kont22608;
clo23098[2] = cons;
clo23098[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo23098[4] = filter;
clo23098[5] = cdr;
clo23098[6] = list;
clo23098[7] = op;
clo23098[8] = lst;
void* f2261622767 = encode_clo(clo23098);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2261622767;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam22953_fptr() // lam22953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22954 = arg_buffer[1];
//reading env and args
void* a2250822790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2250622787 = (decode_clo(env22954))[3];
//not do dummy comment
void* drop = (decode_clo(env22954))[2];
//not do dummy comment
void* kont22617 = (decode_clo(env22954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont22617;
arg_buffer[3] = a2250622787;
arg_buffer[4] = a2250822790;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22953 = encode_clo(alloc_clo(lam22953_fptr, 0));

void* lam22956_fptr() // lam22956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22957 = arg_buffer[1];
//reading env and args
void* a2250622787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env22957))[4];
//not do dummy comment
void* kont22617 = (decode_clo(env22957))[3];
//not do dummy comment
void* n = (decode_clo(env22957))[2];
//not do dummy comment
void* _u45 = (decode_clo(env22957))[1];
mpz_t* mpzvar23099 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23099, "1", 10);
void* a2250722788 = encode_mpz(mpzvar23099);

//creating new closure instance
void** clo23101 = alloc_clo(lam22953_fptr, 3);

//setting env list
clo23101[1] = kont22617;
clo23101[2] = drop;
clo23101[3] = a2250622787;
void* f2261822789 = encode_clo(clo23101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2261822789;
arg_buffer[3] = n;
arg_buffer[4] = a2250722788;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22956 = encode_clo(alloc_clo(lam22956_fptr, 0));

void* lam22958_fptr() // lam22958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22959 = arg_buffer[1];
//reading env and args
void* a2250522785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22959))[6];
//not do dummy comment
void* kont22617 = (decode_clo(env22959))[5];
//not do dummy comment
void* n = (decode_clo(env22959))[4];
//not do dummy comment
void* _u45 = (decode_clo(env22959))[3];
//not do dummy comment
void* lst = (decode_clo(env22959))[2];
//not do dummy comment
void* drop = (decode_clo(env22959))[1];

//if-clause
bool if_guard23102 = is_true(a2250522785);
if(if_guard23102)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22617);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22617))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23104 = alloc_clo(lam22956_fptr, 4);

//setting env list
clo23104[1] = _u45;
clo23104[2] = n;
clo23104[3] = kont22617;
clo23104[4] = drop;
void* f2261922786 = encode_clo(clo23104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2261922786;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22958 = encode_clo(alloc_clo(lam22958_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22961 = arg_buffer[1];
//reading env and args
void* kont22617 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar23105 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23105, "0", 10);
void* a2250422783 = encode_mpz(mpzvar23105);

//creating new closure instance
void** clo23107 = alloc_clo(lam22958_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo23107[1] = drop;
clo23107[2] = lst;
clo23107[3] = _u45;
clo23107[4] = n;
clo23107[5] = kont22617;
clo23107[6] = cdr;
void* f2262022784 = encode_clo(clo23107);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2262022784;
arg_buffer[3] = n;
arg_buffer[4] = a2250422783;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam22962_fptr() // lam22962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22963 = arg_buffer[1];
//reading env and args
void* a2251222798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2251022794 = (decode_clo(env22963))[3];
//not do dummy comment
void* proc = (decode_clo(env22963))[2];
//not do dummy comment
void* kont22621 = (decode_clo(env22963))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont22621;
arg_buffer[3] = a2251022794;
arg_buffer[4] = a2251222798;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22962 = encode_clo(alloc_clo(lam22962_fptr, 0));

void* lam22964_fptr() // lam22964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22965 = arg_buffer[1];
//reading env and args
void* a2251122796 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env22965))[5];
//not do dummy comment
void* a2251022794 = (decode_clo(env22965))[4];
//not do dummy comment
void* proc = (decode_clo(env22965))[3];
//not do dummy comment
void* acc = (decode_clo(env22965))[2];
//not do dummy comment
void* kont22621 = (decode_clo(env22965))[1];

//creating new closure instance
void** clo23109 = alloc_clo(lam22962_fptr, 3);

//setting env list
clo23109[1] = kont22621;
clo23109[2] = proc;
clo23109[3] = a2251022794;
void* f2262222797 = encode_clo(clo23109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2262222797;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2251122796;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22964 = encode_clo(alloc_clo(lam22964_fptr, 0));

void* lam22966_fptr() // lam22966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22967 = arg_buffer[1];
//reading env and args
void* a2251022794 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22967))[6];
//not do dummy comment
void* foldr = (decode_clo(env22967))[5];
//not do dummy comment
void* lst = (decode_clo(env22967))[4];
//not do dummy comment
void* proc = (decode_clo(env22967))[3];
//not do dummy comment
void* acc = (decode_clo(env22967))[2];
//not do dummy comment
void* kont22621 = (decode_clo(env22967))[1];

//creating new closure instance
void** clo23111 = alloc_clo(lam22964_fptr, 5);

//setting env list
clo23111[1] = kont22621;
clo23111[2] = acc;
clo23111[3] = proc;
clo23111[4] = a2251022794;
clo23111[5] = foldr;
void* f2262322795 = encode_clo(clo23111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2262322795;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22966 = encode_clo(alloc_clo(lam22966_fptr, 0));

void* lam22968_fptr() // lam22968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22969 = arg_buffer[1];
//reading env and args
void* a2250922792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22969))[7];
//not do dummy comment
void* car = (decode_clo(env22969))[6];
//not do dummy comment
void* foldr = (decode_clo(env22969))[5];
//not do dummy comment
void* lst = (decode_clo(env22969))[4];
//not do dummy comment
void* proc = (decode_clo(env22969))[3];
//not do dummy comment
void* acc = (decode_clo(env22969))[2];
//not do dummy comment
void* kont22621 = (decode_clo(env22969))[1];

//if-clause
bool if_guard23112 = is_true(a2250922792);
if(if_guard23112)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22621);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22621))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23114 = alloc_clo(lam22966_fptr, 6);

//setting env list
clo23114[1] = kont22621;
clo23114[2] = acc;
clo23114[3] = proc;
clo23114[4] = lst;
clo23114[5] = foldr;
clo23114[6] = cdr;
void* f2262422793 = encode_clo(clo23114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2262422793;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22968 = encode_clo(alloc_clo(lam22968_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22970 = arg_buffer[1];
//reading env and args
void* kont22621 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo23116 = alloc_clo(lam22968_fptr, 7);

//setting env list
clo23116[1] = kont22621;
clo23116[2] = acc;
clo23116[3] = proc;
clo23116[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo23116[5] = foldr;
clo23116[6] = car;
clo23116[7] = cdr;
void* f2262522791 = encode_clo(clo23116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2262522791;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam22971_fptr() // lam22971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22972 = arg_buffer[1];
//reading env and args
void* a2251622806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env22972))[3];
//not do dummy comment
void* a2251422802 = (decode_clo(env22972))[2];
//not do dummy comment
void* kont22626 = (decode_clo(env22972))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22626;
arg_buffer[3] = a2251422802;
arg_buffer[4] = a2251622806;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22971 = encode_clo(alloc_clo(lam22971_fptr, 0));

void* lam22973_fptr() // lam22973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22974 = arg_buffer[1];
//reading env and args
void* a2251522804 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env22974))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22974))[4];
//not do dummy comment
void* cons = (decode_clo(env22974))[3];
//not do dummy comment
void* a2251422802 = (decode_clo(env22974))[2];
//not do dummy comment
void* kont22626 = (decode_clo(env22974))[1];

//creating new closure instance
void** clo23118 = alloc_clo(lam22971_fptr, 3);

//setting env list
clo23118[1] = kont22626;
clo23118[2] = a2251422802;
clo23118[3] = cons;
void* f2262722805 = encode_clo(clo23118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2262722805;
arg_buffer[3] = a2251522804;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22973 = encode_clo(alloc_clo(lam22973_fptr, 0));

void* lam22975_fptr() // lam22975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22976 = arg_buffer[1];
//reading env and args
void* a2251422802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env22976))[6];
//not do dummy comment
void* lst2 = (decode_clo(env22976))[5];
//not do dummy comment
void* lst1 = (decode_clo(env22976))[4];
//not do dummy comment
void* cons = (decode_clo(env22976))[3];
//not do dummy comment
void* kont22626 = (decode_clo(env22976))[2];
//not do dummy comment
void* cdr = (decode_clo(env22976))[1];

//creating new closure instance
void** clo23120 = alloc_clo(lam22973_fptr, 5);

//setting env list
clo23120[1] = kont22626;
clo23120[2] = a2251422802;
clo23120[3] = cons;
clo23120[4] = lst2;
clo23120[5] = append;
void* f2262822803 = encode_clo(clo23120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2262822803;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22975 = encode_clo(alloc_clo(lam22975_fptr, 0));

void* lam22977_fptr() // lam22977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22978 = arg_buffer[1];
//reading env and args
void* a2251322800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env22978))[7];
//not do dummy comment
void* lst2 = (decode_clo(env22978))[6];
//not do dummy comment
void* cons = (decode_clo(env22978))[5];
//not do dummy comment
void* kont22626 = (decode_clo(env22978))[4];
//not do dummy comment
void* cdr = (decode_clo(env22978))[3];
//not do dummy comment
void* lst1 = (decode_clo(env22978))[2];
//not do dummy comment
void* car = (decode_clo(env22978))[1];

//if-clause
bool if_guard23121 = is_true(a2251322800);
if(if_guard23121)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22626);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22626))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23123 = alloc_clo(lam22975_fptr, 6);

//setting env list
clo23123[1] = cdr;
clo23123[2] = kont22626;
clo23123[3] = cons;
clo23123[4] = lst1;
clo23123[5] = lst2;
clo23123[6] = append;
void* f2262922801 = encode_clo(clo23123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2262922801;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22977 = encode_clo(alloc_clo(lam22977_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22979 = arg_buffer[1];
//reading env and args
void* kont22626 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23125 = alloc_clo(lam22977_fptr, 7);

//setting env list
clo23125[1] = car;
clo23125[2] = lst1;
clo23125[3] = cdr;
clo23125[4] = kont22626;
clo23125[5] = cons;
clo23125[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo23125[7] = append;
void* f2263022799 = encode_clo(clo23125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2263022799;
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
void* _22980 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2263122807 = prim_car(lst);
void* lst22808 = prim_cdr(lst);
void* x2251722809 = apply_prim_hash(lst22808);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2263122807);
arg_buffer[2] = x2251722809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2263122807))[0]);
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
void* _22981 = arg_buffer[1];
//reading env and args
void* kont22633 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2251822810 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22633);
arg_buffer[2] = x2251822810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22633))[0]);
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
void* _22982 = arg_buffer[1];
//reading env and args
void* kont22634 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2251922811 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22634);
arg_buffer[2] = x2251922811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22634))[0]);
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
void* _22983 = arg_buffer[1];
//reading env and args
void* kont22635 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2252022812 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22635);
arg_buffer[2] = x2252022812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22635))[0]);
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
void* _22984 = arg_buffer[1];
//reading env and args
void* kont22636 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2252122813 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22636);
arg_buffer[2] = x2252122813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22636))[0]);
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
void* _22985 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont2263722814 = prim_car(lst);
void* lst22815 = prim_cdr(lst);
void* x2252222816 = apply_prim_set(lst22815);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2263722814);
arg_buffer[2] = x2252222816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2263722814))[0]);
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
void* _22986 = arg_buffer[1];
//reading env and args
void* kont22639 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2252322817 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22639);
arg_buffer[2] = x2252322817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22639))[0]);
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
void* _22987 = arg_buffer[1];
//reading env and args
void* kont22640 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2252422818 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22640);
arg_buffer[2] = x2252422818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22640))[0]);
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
void* _22988 = arg_buffer[1];
//reading env and args
void* kont22641 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2252522819 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22641);
arg_buffer[2] = x2252522819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22641))[0]);
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
void* _22989 = arg_buffer[1];
//reading env and args
void* kont22642 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2252622820 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22642);
arg_buffer[2] = x2252622820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22642))[0]);
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
void* _22990 = arg_buffer[1];
//reading env and args
void* kont22643 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2252722821 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22643);
arg_buffer[2] = x2252722821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22643))[0]);
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
void* _22991 = arg_buffer[1];
//reading env and args
void* kont22644 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2252822822 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22644);
arg_buffer[2] = x2252822822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22644))[0]);
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
void* _22992 = arg_buffer[1];
//reading env and args
void* kont22645 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2252922823 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22645);
arg_buffer[2] = x2252922823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22645))[0]);
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
void* _22993 = arg_buffer[1];
//reading env and args
void* kont22646 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2253022824 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22646);
arg_buffer[2] = x2253022824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22646))[0]);
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
void* _22994 = arg_buffer[1];
//reading env and args
void* kont22647 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2253122825 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22647);
arg_buffer[2] = x2253122825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22647))[0]);
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
void* _22995 = arg_buffer[1];
//reading env and args
void* kont22648 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2253222826 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22648);
arg_buffer[2] = x2253222826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22648))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam22996_fptr() // lam22996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22997 = arg_buffer[1];
//reading env and args
void* x2243422830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22649 = (decode_clo(env22997))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22649);
arg_buffer[2] = x2243422830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22996 = encode_clo(alloc_clo(lam22996_fptr, 0));

void* lam22998_fptr() // lam22998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22999 = arg_buffer[1];
//reading env and args
void* x2243322828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22649 = (decode_clo(env22999))[2];
//not do dummy comment
void* num2 = (decode_clo(env22999))[1];

//creating new closure instance
void** clo23127 = alloc_clo(lam22996_fptr, 1);

//setting env list
clo23127[1] = kont22649;
void* f2265022829 = encode_clo(clo23127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f2265022829);
arg_buffer[2] = num2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f2265022829))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22998 = encode_clo(alloc_clo(lam22998_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23000 = arg_buffer[1];
//reading env and args
void* kont22649 = arg_buffer[2];
void* num1 = arg_buffer[3];
void* num2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23129 = alloc_clo(lam22998_fptr, 2);

//setting env list
clo23129[1] = num2;
clo23129[2] = kont22649;
void* f2265122827 = encode_clo(clo23129);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f2265122827);
arg_buffer[2] = num1;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f2265122827))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23003 = arg_buffer[1];
//reading env and args
void* kont22652 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar23130 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23130, "5", 10);
void* a2253322831 = encode_mpz(mpzvar23130);
mpz_t* mpzvar23131 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23131, "42", 10);
void* a2253422832 = encode_mpz(mpzvar23131);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont22652;
arg_buffer[3] = a2253322831;
arg_buffer[4] = a2253422832;
arg_buffer[0] = reinterpret_cast<void*>(4);
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

