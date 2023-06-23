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
void* _55002 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5474154841 = prim_car(lst);
void* lst54842 = prim_cdr(lst);
void* x5465354843 = apply_prim__u43(lst54842);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5474154841);
arg_buffer[2] = x5465354843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5474154841))[0]);
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
void* _55003 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5474354844 = prim_car(lst);
void* lst54845 = prim_cdr(lst);
void* x5465454846 = apply_prim__u45(lst54845);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5474354844);
arg_buffer[2] = x5465454846;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5474354844))[0]);
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
void* _55004 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5474554847 = prim_car(lst);
void* lst54848 = prim_cdr(lst);
void* x5465554849 = apply_prim__u42(lst54848);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5474554847);
arg_buffer[2] = x5465554849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5474554847))[0]);
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
void* _55005 = arg_buffer[1];
//reading env and args
void* kont54747 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5465654850 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54747);
arg_buffer[2] = x5465654850;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54747))[0]);
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
void* _55006 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5474854851 = prim_car(lst);
void* lst54852 = prim_cdr(lst);
void* x5465754853 = apply_prim__u47(lst54852);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5474854851);
arg_buffer[2] = x5465754853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5474854851))[0]);
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
void* _55007 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5475054854 = prim_car(lst);
void* lst54855 = prim_cdr(lst);
void* x5465854856 = apply_prim__u61(lst54855);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5475054854);
arg_buffer[2] = x5465854856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5475054854))[0]);
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
void* _55008 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5475254857 = prim_car(lst);
void* lst54858 = prim_cdr(lst);
void* x5465954859 = apply_prim__u62(lst54858);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5475254857);
arg_buffer[2] = x5465954859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5475254857))[0]);
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
void* _55009 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5475454860 = prim_car(lst);
void* lst54861 = prim_cdr(lst);
void* x5466054862 = apply_prim__u60(lst54861);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5475454860);
arg_buffer[2] = x5466054862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5475454860))[0]);
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
void* _55010 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5475654863 = prim_car(lst);
void* lst54864 = prim_cdr(lst);
void* x5466154865 = apply_prim__u60_u61(lst54864);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5475654863);
arg_buffer[2] = x5466154865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5475654863))[0]);
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
void* _55011 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5475854866 = prim_car(lst);
void* lst54867 = prim_cdr(lst);
void* x5466254868 = apply_prim__u62_u61(lst54867);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5475854866);
arg_buffer[2] = x5466254868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5475854866))[0]);
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
void* _55012 = arg_buffer[1];
//reading env and args
void* kont54760 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5466354869 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54760);
arg_buffer[2] = x5466354869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54760))[0]);
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
void* _55013 = arg_buffer[1];
//reading env and args
void* kont54761 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5466454870 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54761);
arg_buffer[2] = x5466454870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54761))[0]);
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
void* _55014 = arg_buffer[1];
//reading env and args
void* kont54762 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5466554871 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54762);
arg_buffer[2] = x5466554871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54762))[0]);
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
void* _55015 = arg_buffer[1];
//reading env and args
void* kont54763 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5466654872 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54763);
arg_buffer[2] = x5466654872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54763))[0]);
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
void* _55016 = arg_buffer[1];
//reading env and args
void* kont54764 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5466754873 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54764);
arg_buffer[2] = x5466754873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54764))[0]);
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
void* _55017 = arg_buffer[1];
//reading env and args
void* kont54765 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5466854874 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54765);
arg_buffer[2] = x5466854874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54765))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam55018_fptr() // lam55018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55019 = arg_buffer[1];
//reading env and args
void* a5467154878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5466954875 = (decode_clo(env55019))[3];
//not do dummy comment
void* kont54766 = (decode_clo(env55019))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env55019))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54766;
arg_buffer[3] = a5466954875;
arg_buffer[4] = a5467154878;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55018 = encode_clo(alloc_clo(lam55018_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55022 = arg_buffer[1];
//reading env and args
void* kont54766 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55662 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55662, "0", 10);
void* a5466954875 = encode_mpz(mpzvar55662);
mpz_t* mpzvar55663 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55663, "2", 10);
void* a5467054876 = encode_mpz(mpzvar55663);

//creating new closure instance
void** clo55665 = alloc_clo(lam55018_fptr, 3);

//setting env list
clo55665[1] = equal_u63;
clo55665[2] = kont54766;
clo55665[3] = a5466954875;
void* f5476754877 = encode_clo(clo55665);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5476754877;
arg_buffer[3] = x;
arg_buffer[4] = a5467054876;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam55023_fptr() // lam55023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55024 = arg_buffer[1];
//reading env and args
void* a5467454882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5467254879 = (decode_clo(env55024))[3];
//not do dummy comment
void* kont54768 = (decode_clo(env55024))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env55024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54768;
arg_buffer[3] = a5467254879;
arg_buffer[4] = a5467454882;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55023 = encode_clo(alloc_clo(lam55023_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55027 = arg_buffer[1];
//reading env and args
void* kont54768 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55666 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55666, "1", 10);
void* a5467254879 = encode_mpz(mpzvar55666);
mpz_t* mpzvar55667 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55667, "2", 10);
void* a5467354880 = encode_mpz(mpzvar55667);

//creating new closure instance
void** clo55669 = alloc_clo(lam55023_fptr, 3);

//setting env list
clo55669[1] = equal_u63;
clo55669[2] = kont54768;
clo55669[3] = a5467254879;
void* f5476954881 = encode_clo(clo55669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5476954881;
arg_buffer[3] = x;
arg_buffer[4] = a5467354880;
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
void* _55028 = arg_buffer[1];
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

void* kont5477054883 = prim_car(x);
void* x54884 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5477054883);
arg_buffer[2] = x54884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5477054883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam55031_fptr() // lam55031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55032 = arg_buffer[1];
//reading env and args
void* a5468054894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env55032))[3];
//not do dummy comment
void* x = (decode_clo(env55032))[2];
//not do dummy comment
void* kont54772 = (decode_clo(env55032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont54772;
arg_buffer[3] = x;
arg_buffer[4] = a5468054894;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55031 = encode_clo(alloc_clo(lam55031_fptr, 0));

void* lam55033_fptr() // lam55033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55034 = arg_buffer[1];
//reading env and args
void* a5467854891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55034))[5];
//not do dummy comment
void* lst = (decode_clo(env55034))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env55034))[3];
//not do dummy comment
void* x = (decode_clo(env55034))[2];
//not do dummy comment
void* kont54772 = (decode_clo(env55034))[1];

//if-clause
bool if_guard55670 = is_true(a5467854891);
if(if_guard55670)
{
void* x5467954892 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54772);
arg_buffer[2] = x5467954892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55672 = alloc_clo(lam55031_fptr, 3);

//setting env list
clo55672[1] = kont54772;
clo55672[2] = x;
clo55672[3] = member_u63;
void* f5477354893 = encode_clo(clo55672);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5477354893;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55033 = encode_clo(alloc_clo(lam55033_fptr, 0));

void* lam55035_fptr() // lam55035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55036 = arg_buffer[1];
//reading env and args
void* a5467754889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55036))[6];
//not do dummy comment
void* lst = (decode_clo(env55036))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env55036))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env55036))[3];
//not do dummy comment
void* x = (decode_clo(env55036))[2];
//not do dummy comment
void* kont54772 = (decode_clo(env55036))[1];

//creating new closure instance
void** clo55674 = alloc_clo(lam55033_fptr, 5);

//setting env list
clo55674[1] = kont54772;
clo55674[2] = x;
clo55674[3] = member_u63;
clo55674[4] = lst;
clo55674[5] = cdr;
void* f5477454890 = encode_clo(clo55674);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5477454890;
arg_buffer[3] = a5467754889;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55035 = encode_clo(alloc_clo(lam55035_fptr, 0));

void* lam55037_fptr() // lam55037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55038 = arg_buffer[1];
//reading env and args
void* a5467554886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55038))[7];
//not do dummy comment
void* lst = (decode_clo(env55038))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env55038))[5];
//not do dummy comment
void* car = (decode_clo(env55038))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env55038))[3];
//not do dummy comment
void* x = (decode_clo(env55038))[2];
//not do dummy comment
void* kont54772 = (decode_clo(env55038))[1];

//if-clause
bool if_guard55675 = is_true(a5467554886);
if(if_guard55675)
{
void* x5467654887 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54772);
arg_buffer[2] = x5467654887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55677 = alloc_clo(lam55035_fptr, 6);

//setting env list
clo55677[1] = kont54772;
clo55677[2] = x;
clo55677[3] = member_u63;
clo55677[4] = equal_u63;
clo55677[5] = lst;
clo55677[6] = cdr;
void* f5477554888 = encode_clo(clo55677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5477554888;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55037 = encode_clo(alloc_clo(lam55037_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55039 = arg_buffer[1];
//reading env and args
void* kont54772 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55679 = alloc_clo(lam55037_fptr, 7);

//setting env list
clo55679[1] = kont54772;
clo55679[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo55679[3] = member_u63;
clo55679[4] = car;
clo55679[5] = equal_u63;
clo55679[6] = lst;
clo55679[7] = cdr;
void* f5477654885 = encode_clo(clo55679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5477654885;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam55040_fptr() // lam55040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55041 = arg_buffer[1];
//reading env and args
void* a5468454902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54777 = (decode_clo(env55041))[4];
//not do dummy comment
void* fun = (decode_clo(env55041))[3];
//not do dummy comment
void* a5468354900 = (decode_clo(env55041))[2];
//not do dummy comment
void* foldl = (decode_clo(env55041))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont54777;
arg_buffer[3] = fun;
arg_buffer[4] = a5468354900;
arg_buffer[5] = a5468454902;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55040 = encode_clo(alloc_clo(lam55040_fptr, 0));

void* lam55042_fptr() // lam55042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55043 = arg_buffer[1];
//reading env and args
void* a5468354900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55043))[5];
//not do dummy comment
void* fun = (decode_clo(env55043))[4];
//not do dummy comment
void* foldl = (decode_clo(env55043))[3];
//not do dummy comment
void* kont54777 = (decode_clo(env55043))[2];
//not do dummy comment
void* cdr = (decode_clo(env55043))[1];

//creating new closure instance
void** clo55681 = alloc_clo(lam55040_fptr, 4);

//setting env list
clo55681[1] = foldl;
clo55681[2] = a5468354900;
clo55681[3] = fun;
clo55681[4] = kont54777;
void* f5477854901 = encode_clo(clo55681);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5477854901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55042 = encode_clo(alloc_clo(lam55042_fptr, 0));

void* lam55044_fptr() // lam55044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55045 = arg_buffer[1];
//reading env and args
void* a5468254898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55045))[6];
//not do dummy comment
void* fun = (decode_clo(env55045))[5];
//not do dummy comment
void* acc = (decode_clo(env55045))[4];
//not do dummy comment
void* foldl = (decode_clo(env55045))[3];
//not do dummy comment
void* kont54777 = (decode_clo(env55045))[2];
//not do dummy comment
void* cdr = (decode_clo(env55045))[1];

//creating new closure instance
void** clo55683 = alloc_clo(lam55042_fptr, 5);

//setting env list
clo55683[1] = cdr;
clo55683[2] = kont54777;
clo55683[3] = foldl;
clo55683[4] = fun;
clo55683[5] = lst;
void* f5477954899 = encode_clo(clo55683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5477954899;
arg_buffer[3] = a5468254898;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55044 = encode_clo(alloc_clo(lam55044_fptr, 0));

void* lam55046_fptr() // lam55046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55047 = arg_buffer[1];
//reading env and args
void* a5468154896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55047))[7];
//not do dummy comment
void* fun = (decode_clo(env55047))[6];
//not do dummy comment
void* acc = (decode_clo(env55047))[5];
//not do dummy comment
void* car = (decode_clo(env55047))[4];
//not do dummy comment
void* foldl = (decode_clo(env55047))[3];
//not do dummy comment
void* kont54777 = (decode_clo(env55047))[2];
//not do dummy comment
void* cdr = (decode_clo(env55047))[1];

//if-clause
bool if_guard55684 = is_true(a5468154896);
if(if_guard55684)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54777);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54777))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55686 = alloc_clo(lam55044_fptr, 6);

//setting env list
clo55686[1] = cdr;
clo55686[2] = kont54777;
clo55686[3] = foldl;
clo55686[4] = acc;
clo55686[5] = fun;
clo55686[6] = lst;
void* f5478054897 = encode_clo(clo55686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5478054897;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55046 = encode_clo(alloc_clo(lam55046_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55048 = arg_buffer[1];
//reading env and args
void* kont54777 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo55688 = alloc_clo(lam55046_fptr, 7);

//setting env list
clo55688[1] = cdr;
clo55688[2] = kont54777;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo55688[3] = foldl;
clo55688[4] = car;
clo55688[5] = acc;
clo55688[6] = fun;
clo55688[7] = lst;
void* f5478154895 = encode_clo(clo55688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5478154895;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam55049_fptr() // lam55049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55050 = arg_buffer[1];
//reading env and args
void* a5468854910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5468654906 = (decode_clo(env55050))[3];
//not do dummy comment
void* kont54782 = (decode_clo(env55050))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55050))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54782;
arg_buffer[3] = a5468654906;
arg_buffer[4] = a5468854910;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55049 = encode_clo(alloc_clo(lam55049_fptr, 0));

void* lam55051_fptr() // lam55051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55052 = arg_buffer[1];
//reading env and args
void* a5468754908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5468654906 = (decode_clo(env55052))[5];
//not do dummy comment
void* kont54782 = (decode_clo(env55052))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55052))[3];
//not do dummy comment
void* lst2 = (decode_clo(env55052))[2];
//not do dummy comment
void* cons = (decode_clo(env55052))[1];

//creating new closure instance
void** clo55690 = alloc_clo(lam55049_fptr, 3);

//setting env list
clo55690[1] = reverse_u45helper;
clo55690[2] = kont54782;
clo55690[3] = a5468654906;
void* f5478354909 = encode_clo(clo55690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5478354909;
arg_buffer[3] = a5468754908;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55051 = encode_clo(alloc_clo(lam55051_fptr, 0));

void* lam55053_fptr() // lam55053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55054 = arg_buffer[1];
//reading env and args
void* a5468654906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55054))[6];
//not do dummy comment
void* kont54782 = (decode_clo(env55054))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55054))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55054))[3];
//not do dummy comment
void* car = (decode_clo(env55054))[2];
//not do dummy comment
void* cons = (decode_clo(env55054))[1];

//creating new closure instance
void** clo55692 = alloc_clo(lam55051_fptr, 5);

//setting env list
clo55692[1] = cons;
clo55692[2] = lst2;
clo55692[3] = reverse_u45helper;
clo55692[4] = kont54782;
clo55692[5] = a5468654906;
void* f5478454907 = encode_clo(clo55692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5478454907;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55053 = encode_clo(alloc_clo(lam55053_fptr, 0));

void* lam55055_fptr() // lam55055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55056 = arg_buffer[1];
//reading env and args
void* a5468554904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55056))[7];
//not do dummy comment
void* lst = (decode_clo(env55056))[6];
//not do dummy comment
void* kont54782 = (decode_clo(env55056))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55056))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55056))[3];
//not do dummy comment
void* car = (decode_clo(env55056))[2];
//not do dummy comment
void* cons = (decode_clo(env55056))[1];

//if-clause
bool if_guard55693 = is_true(a5468554904);
if(if_guard55693)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54782);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55695 = alloc_clo(lam55053_fptr, 6);

//setting env list
clo55695[1] = cons;
clo55695[2] = car;
clo55695[3] = lst2;
clo55695[4] = reverse_u45helper;
clo55695[5] = kont54782;
clo55695[6] = lst;
void* f5478554905 = encode_clo(clo55695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5478554905;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55055 = encode_clo(alloc_clo(lam55055_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55057 = arg_buffer[1];
//reading env and args
void* kont54782 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55697 = alloc_clo(lam55055_fptr, 7);

//setting env list
clo55697[1] = cons;
clo55697[2] = car;
clo55697[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo55697[4] = reverse_u45helper;
clo55697[5] = kont54782;
clo55697[6] = lst;
clo55697[7] = cdr;
void* f5478654903 = encode_clo(clo55697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5478654903;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam55058_fptr() // lam55058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55059 = arg_buffer[1];
//reading env and args
void* a5468954912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55059))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55059))[2];
//not do dummy comment
void* kont54787 = (decode_clo(env55059))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54787;
arg_buffer[3] = lst;
arg_buffer[4] = a5468954912;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55058 = encode_clo(alloc_clo(lam55058_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55060 = arg_buffer[1];
//reading env and args
void* kont54787 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo55699 = alloc_clo(lam55058_fptr, 3);

//setting env list
clo55699[1] = kont54787;
clo55699[2] = reverse_u45helper;
clo55699[3] = lst;
void* f5478854911 = encode_clo(clo55699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5478854911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam55061_fptr() // lam55061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55062 = arg_buffer[1];
//reading env and args
void* x5469254917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54789 = (decode_clo(env55062))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54789);
arg_buffer[2] = x5469254917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54789))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55061 = encode_clo(alloc_clo(lam55061_fptr, 0));

void* lam55063_fptr() // lam55063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55064 = arg_buffer[1];
//reading env and args
void* a5469754926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5469554922 = (decode_clo(env55064))[4];
//not do dummy comment
void* a5469354919 = (decode_clo(env55064))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55064))[2];
//not do dummy comment
void* kont54789 = (decode_clo(env55064))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54789;
arg_buffer[3] = a5469354919;
arg_buffer[4] = a5469554922;
arg_buffer[5] = a5469754926;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55063 = encode_clo(alloc_clo(lam55063_fptr, 0));

void* lam55065_fptr() // lam55065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55066 = arg_buffer[1];
//reading env and args
void* a5469654924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5469554922 = (decode_clo(env55066))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env55066))[5];
//not do dummy comment
void* kont54789 = (decode_clo(env55066))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55066))[3];
//not do dummy comment
void* cons = (decode_clo(env55066))[2];
//not do dummy comment
void* a5469354919 = (decode_clo(env55066))[1];

//creating new closure instance
void** clo55701 = alloc_clo(lam55063_fptr, 4);

//setting env list
clo55701[1] = kont54789;
clo55701[2] = take_u45helper;
clo55701[3] = a5469354919;
clo55701[4] = a5469554922;
void* f5479154925 = encode_clo(clo55701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5479154925;
arg_buffer[3] = a5469654924;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55065 = encode_clo(alloc_clo(lam55065_fptr, 0));

void* lam55067_fptr() // lam55067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55068 = arg_buffer[1];
//reading env and args
void* a5469554922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55068))[7];
//not do dummy comment
void* car = (decode_clo(env55068))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env55068))[5];
//not do dummy comment
void* kont54789 = (decode_clo(env55068))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55068))[3];
//not do dummy comment
void* cons = (decode_clo(env55068))[2];
//not do dummy comment
void* a5469354919 = (decode_clo(env55068))[1];

//creating new closure instance
void** clo55703 = alloc_clo(lam55065_fptr, 6);

//setting env list
clo55703[1] = a5469354919;
clo55703[2] = cons;
clo55703[3] = lst2;
clo55703[4] = kont54789;
clo55703[5] = take_u45helper;
clo55703[6] = a5469554922;
void* f5479254923 = encode_clo(clo55703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5479254923;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55067 = encode_clo(alloc_clo(lam55067_fptr, 0));

void* lam55070_fptr() // lam55070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55071 = arg_buffer[1];
//reading env and args
void* a5469354919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55071))[8];
//not do dummy comment
void* cons = (decode_clo(env55071))[7];
//not do dummy comment
void* _u45 = (decode_clo(env55071))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env55071))[5];
//not do dummy comment
void* kont54789 = (decode_clo(env55071))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55071))[3];
//not do dummy comment
void* n = (decode_clo(env55071))[2];
//not do dummy comment
void* car = (decode_clo(env55071))[1];
mpz_t* mpzvar55704 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55704, "1", 10);
void* a5469454920 = encode_mpz(mpzvar55704);

//creating new closure instance
void** clo55706 = alloc_clo(lam55067_fptr, 7);

//setting env list
clo55706[1] = a5469354919;
clo55706[2] = cons;
clo55706[3] = lst2;
clo55706[4] = kont54789;
clo55706[5] = take_u45helper;
clo55706[6] = car;
clo55706[7] = lst;
void* f5479354921 = encode_clo(clo55706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5479354921;
arg_buffer[3] = n;
arg_buffer[4] = a5469454920;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55070 = encode_clo(alloc_clo(lam55070_fptr, 0));

void* lam55072_fptr() // lam55072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55073 = arg_buffer[1];
//reading env and args
void* a5469154915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55073))[10];
//not do dummy comment
void* lst = (decode_clo(env55073))[9];
//not do dummy comment
void* reverse = (decode_clo(env55073))[8];
//not do dummy comment
void* cons = (decode_clo(env55073))[7];
//not do dummy comment
void* _u45 = (decode_clo(env55073))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env55073))[5];
//not do dummy comment
void* kont54789 = (decode_clo(env55073))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55073))[3];
//not do dummy comment
void* n = (decode_clo(env55073))[2];
//not do dummy comment
void* car = (decode_clo(env55073))[1];

//if-clause
bool if_guard55707 = is_true(a5469154915);
if(if_guard55707)
{

//creating new closure instance
void** clo55709 = alloc_clo(lam55061_fptr, 1);

//setting env list
clo55709[1] = kont54789;
void* f5479054916 = encode_clo(clo55709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5479054916;
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
void** clo55711 = alloc_clo(lam55070_fptr, 8);

//setting env list
clo55711[1] = car;
clo55711[2] = n;
clo55711[3] = lst2;
clo55711[4] = kont54789;
clo55711[5] = take_u45helper;
clo55711[6] = _u45;
clo55711[7] = cons;
clo55711[8] = lst;
void* f5479454918 = encode_clo(clo55711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5479454918;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55072 = encode_clo(alloc_clo(lam55072_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55075 = arg_buffer[1];
//reading env and args
void* kont54789 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar55712 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55712, "0", 10);
void* a5469054913 = encode_mpz(mpzvar55712);

//creating new closure instance
void** clo55714 = alloc_clo(lam55072_fptr, 10);

//setting env list
clo55714[1] = car;
clo55714[2] = n;
clo55714[3] = lst2;
clo55714[4] = kont54789;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo55714[5] = take_u45helper;
clo55714[6] = _u45;
clo55714[7] = cons;
clo55714[8] = reverse;
clo55714[9] = lst;
clo55714[10] = cdr;
void* f5479554914 = encode_clo(clo55714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5479554914;
arg_buffer[3] = n;
arg_buffer[4] = a5469054913;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam55076_fptr() // lam55076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55077 = arg_buffer[1];
//reading env and args
void* a5469854928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54796 = (decode_clo(env55077))[4];
//not do dummy comment
void* lst = (decode_clo(env55077))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55077))[2];
//not do dummy comment
void* n = (decode_clo(env55077))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54796;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5469854928;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55076 = encode_clo(alloc_clo(lam55076_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55078 = arg_buffer[1];
//reading env and args
void* kont54796 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55716 = alloc_clo(lam55076_fptr, 4);

//setting env list
clo55716[1] = n;
clo55716[2] = take_u45helper;
clo55716[3] = lst;
clo55716[4] = kont54796;
void* f5479754927 = encode_clo(clo55716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5479754927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam55080_fptr() // lam55080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55081 = arg_buffer[1];
//reading env and args
void* a5470354936 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54798 = (decode_clo(env55081))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55081))[2];
//not do dummy comment
void* a5470154932 = (decode_clo(env55081))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont54798;
arg_buffer[3] = a5470154932;
arg_buffer[4] = a5470354936;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55080 = encode_clo(alloc_clo(lam55080_fptr, 0));

void* lam55082_fptr() // lam55082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55083 = arg_buffer[1];
//reading env and args
void* a5470254934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env55083))[4];
//not do dummy comment
void* a5470154932 = (decode_clo(env55083))[3];
//not do dummy comment
void* kont54798 = (decode_clo(env55083))[2];
//not do dummy comment
void* length = (decode_clo(env55083))[1];

//creating new closure instance
void** clo55718 = alloc_clo(lam55080_fptr, 3);

//setting env list
clo55718[1] = a5470154932;
clo55718[2] = _u43;
clo55718[3] = kont54798;
void* f5479954935 = encode_clo(clo55718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5479954935;
arg_buffer[3] = a5470254934;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55082 = encode_clo(alloc_clo(lam55082_fptr, 0));

void* lam55085_fptr() // lam55085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55086 = arg_buffer[1];
//reading env and args
void* a5469954930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55086))[5];
//not do dummy comment
void* lst = (decode_clo(env55086))[4];
//not do dummy comment
void* _u43 = (decode_clo(env55086))[3];
//not do dummy comment
void* kont54798 = (decode_clo(env55086))[2];
//not do dummy comment
void* length = (decode_clo(env55086))[1];

//if-clause
bool if_guard55719 = is_true(a5469954930);
if(if_guard55719)
{
mpz_t* mpzvar55720 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55720, "0", 10);
void* x5470054931 = encode_mpz(mpzvar55720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54798);
arg_buffer[2] = x5470054931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54798))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar55721 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55721, "1", 10);
void* a5470154932 = encode_mpz(mpzvar55721);

//creating new closure instance
void** clo55723 = alloc_clo(lam55082_fptr, 4);

//setting env list
clo55723[1] = length;
clo55723[2] = kont54798;
clo55723[3] = a5470154932;
clo55723[4] = _u43;
void* f5480054933 = encode_clo(clo55723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5480054933;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55085 = encode_clo(alloc_clo(lam55085_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55087 = arg_buffer[1];
//reading env and args
void* kont54798 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo55725 = alloc_clo(lam55085_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo55725[1] = length;
clo55725[2] = kont54798;
clo55725[3] = _u43;
clo55725[4] = lst;
clo55725[5] = cdr;
void* f5480154929 = encode_clo(clo55725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5480154929;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam55088_fptr() // lam55088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55089 = arg_buffer[1];
//reading env and args
void* x5470554940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54802 = (decode_clo(env55089))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54802);
arg_buffer[2] = x5470554940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54802))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55088 = encode_clo(alloc_clo(lam55088_fptr, 0));

void* lam55090_fptr() // lam55090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55091 = arg_buffer[1];
//reading env and args
void* a5470954948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5470754944 = (decode_clo(env55091))[3];
//not do dummy comment
void* kont54802 = (decode_clo(env55091))[2];
//not do dummy comment
void* cons = (decode_clo(env55091))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54802;
arg_buffer[3] = a5470754944;
arg_buffer[4] = a5470954948;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55090 = encode_clo(alloc_clo(lam55090_fptr, 0));

void* lam55092_fptr() // lam55092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55093 = arg_buffer[1];
//reading env and args
void* a5470854946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env55093))[5];
//not do dummy comment
void* a5470754944 = (decode_clo(env55093))[4];
//not do dummy comment
void* kont54802 = (decode_clo(env55093))[3];
//not do dummy comment
void* proc = (decode_clo(env55093))[2];
//not do dummy comment
void* cons = (decode_clo(env55093))[1];

//creating new closure instance
void** clo55727 = alloc_clo(lam55090_fptr, 3);

//setting env list
clo55727[1] = cons;
clo55727[2] = kont54802;
clo55727[3] = a5470754944;
void* f5480454947 = encode_clo(clo55727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5480454947;
arg_buffer[3] = proc;
arg_buffer[4] = a5470854946;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55092 = encode_clo(alloc_clo(lam55092_fptr, 0));

void* lam55094_fptr() // lam55094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55095 = arg_buffer[1];
//reading env and args
void* a5470754944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55095))[6];
//not do dummy comment
void* lst = (decode_clo(env55095))[5];
//not do dummy comment
void* map = (decode_clo(env55095))[4];
//not do dummy comment
void* kont54802 = (decode_clo(env55095))[3];
//not do dummy comment
void* proc = (decode_clo(env55095))[2];
//not do dummy comment
void* cons = (decode_clo(env55095))[1];

//creating new closure instance
void** clo55729 = alloc_clo(lam55092_fptr, 5);

//setting env list
clo55729[1] = cons;
clo55729[2] = proc;
clo55729[3] = kont54802;
clo55729[4] = a5470754944;
clo55729[5] = map;
void* f5480554945 = encode_clo(clo55729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5480554945;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55094 = encode_clo(alloc_clo(lam55094_fptr, 0));

void* lam55096_fptr() // lam55096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55097 = arg_buffer[1];
//reading env and args
void* a5470654942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55097))[6];
//not do dummy comment
void* lst = (decode_clo(env55097))[5];
//not do dummy comment
void* map = (decode_clo(env55097))[4];
//not do dummy comment
void* kont54802 = (decode_clo(env55097))[3];
//not do dummy comment
void* proc = (decode_clo(env55097))[2];
//not do dummy comment
void* cons = (decode_clo(env55097))[1];

//creating new closure instance
void** clo55731 = alloc_clo(lam55094_fptr, 6);

//setting env list
clo55731[1] = cons;
clo55731[2] = proc;
clo55731[3] = kont54802;
clo55731[4] = map;
clo55731[5] = lst;
clo55731[6] = cdr;
void* f5480654943 = encode_clo(clo55731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5480654943;
arg_buffer[3] = a5470654942;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55096 = encode_clo(alloc_clo(lam55096_fptr, 0));

void* lam55098_fptr() // lam55098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55099 = arg_buffer[1];
//reading env and args
void* a5470454938 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55099))[8];
//not do dummy comment
void* map = (decode_clo(env55099))[7];
//not do dummy comment
void* kont54802 = (decode_clo(env55099))[6];
//not do dummy comment
void* proc = (decode_clo(env55099))[5];
//not do dummy comment
void* car = (decode_clo(env55099))[4];
//not do dummy comment
void* cons = (decode_clo(env55099))[3];
//not do dummy comment
void* list = (decode_clo(env55099))[2];
//not do dummy comment
void* cdr = (decode_clo(env55099))[1];

//if-clause
bool if_guard55732 = is_true(a5470454938);
if(if_guard55732)
{

//creating new closure instance
void** clo55734 = alloc_clo(lam55088_fptr, 1);

//setting env list
clo55734[1] = kont54802;
void* f5480354939 = encode_clo(clo55734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5480354939;
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
void** clo55736 = alloc_clo(lam55096_fptr, 6);

//setting env list
clo55736[1] = cons;
clo55736[2] = proc;
clo55736[3] = kont54802;
clo55736[4] = map;
clo55736[5] = lst;
clo55736[6] = cdr;
void* f5480754941 = encode_clo(clo55736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5480754941;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55098 = encode_clo(alloc_clo(lam55098_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55100 = arg_buffer[1];
//reading env and args
void* kont54802 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55738 = alloc_clo(lam55098_fptr, 8);

//setting env list
clo55738[1] = cdr;
clo55738[2] = list;
clo55738[3] = cons;
clo55738[4] = car;
clo55738[5] = proc;
clo55738[6] = kont54802;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo55738[7] = map;
clo55738[8] = lst;
void* f5480854937 = encode_clo(clo55738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5480854937;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam55101_fptr() // lam55101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55102 = arg_buffer[1];
//reading env and args
void* x5471154952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54809 = (decode_clo(env55102))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54809);
arg_buffer[2] = x5471154952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55101 = encode_clo(alloc_clo(lam55101_fptr, 0));

void* lam55103_fptr() // lam55103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55104 = arg_buffer[1];
//reading env and args
void* a5471654962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54809 = (decode_clo(env55104))[3];
//not do dummy comment
void* a5471454958 = (decode_clo(env55104))[2];
//not do dummy comment
void* cons = (decode_clo(env55104))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54809;
arg_buffer[3] = a5471454958;
arg_buffer[4] = a5471654962;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55103 = encode_clo(alloc_clo(lam55103_fptr, 0));

void* lam55105_fptr() // lam55105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55106 = arg_buffer[1];
//reading env and args
void* a5471554960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54809 = (decode_clo(env55106))[5];
//not do dummy comment
void* a5471454958 = (decode_clo(env55106))[4];
//not do dummy comment
void* op = (decode_clo(env55106))[3];
//not do dummy comment
void* filter = (decode_clo(env55106))[2];
//not do dummy comment
void* cons = (decode_clo(env55106))[1];

//creating new closure instance
void** clo55740 = alloc_clo(lam55103_fptr, 3);

//setting env list
clo55740[1] = cons;
clo55740[2] = a5471454958;
clo55740[3] = kont54809;
void* f5481154961 = encode_clo(clo55740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5481154961;
arg_buffer[3] = op;
arg_buffer[4] = a5471554960;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55105 = encode_clo(alloc_clo(lam55105_fptr, 0));

void* lam55107_fptr() // lam55107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55108 = arg_buffer[1];
//reading env and args
void* a5471454958 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55108))[6];
//not do dummy comment
void* op = (decode_clo(env55108))[5];
//not do dummy comment
void* filter = (decode_clo(env55108))[4];
//not do dummy comment
void* cons = (decode_clo(env55108))[3];
//not do dummy comment
void* kont54809 = (decode_clo(env55108))[2];
//not do dummy comment
void* cdr = (decode_clo(env55108))[1];

//creating new closure instance
void** clo55742 = alloc_clo(lam55105_fptr, 5);

//setting env list
clo55742[1] = cons;
clo55742[2] = filter;
clo55742[3] = op;
clo55742[4] = a5471454958;
clo55742[5] = kont54809;
void* f5481254959 = encode_clo(clo55742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5481254959;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55107 = encode_clo(alloc_clo(lam55107_fptr, 0));

void* lam55109_fptr() // lam55109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55110 = arg_buffer[1];
//reading env and args
void* a5471754964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54809 = (decode_clo(env55110))[3];
//not do dummy comment
void* op = (decode_clo(env55110))[2];
//not do dummy comment
void* filter = (decode_clo(env55110))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont54809;
arg_buffer[3] = op;
arg_buffer[4] = a5471754964;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55109 = encode_clo(alloc_clo(lam55109_fptr, 0));

void* lam55111_fptr() // lam55111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55112 = arg_buffer[1];
//reading env and args
void* a5471354956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55112))[7];
//not do dummy comment
void* op = (decode_clo(env55112))[6];
//not do dummy comment
void* cons = (decode_clo(env55112))[5];
//not do dummy comment
void* kont54809 = (decode_clo(env55112))[4];
//not do dummy comment
void* cdr = (decode_clo(env55112))[3];
//not do dummy comment
void* filter = (decode_clo(env55112))[2];
//not do dummy comment
void* car = (decode_clo(env55112))[1];

//if-clause
bool if_guard55743 = is_true(a5471354956);
if(if_guard55743)
{

//creating new closure instance
void** clo55745 = alloc_clo(lam55107_fptr, 6);

//setting env list
clo55745[1] = cdr;
clo55745[2] = kont54809;
clo55745[3] = cons;
clo55745[4] = filter;
clo55745[5] = op;
clo55745[6] = lst;
void* f5481354957 = encode_clo(clo55745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5481354957;
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
void** clo55747 = alloc_clo(lam55109_fptr, 3);

//setting env list
clo55747[1] = filter;
clo55747[2] = op;
clo55747[3] = kont54809;
void* f5481454963 = encode_clo(clo55747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5481454963;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55111 = encode_clo(alloc_clo(lam55111_fptr, 0));

void* lam55113_fptr() // lam55113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55114 = arg_buffer[1];
//reading env and args
void* a5471254954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55114))[7];
//not do dummy comment
void* op = (decode_clo(env55114))[6];
//not do dummy comment
void* cons = (decode_clo(env55114))[5];
//not do dummy comment
void* kont54809 = (decode_clo(env55114))[4];
//not do dummy comment
void* cdr = (decode_clo(env55114))[3];
//not do dummy comment
void* filter = (decode_clo(env55114))[2];
//not do dummy comment
void* car = (decode_clo(env55114))[1];

//creating new closure instance
void** clo55749 = alloc_clo(lam55111_fptr, 7);

//setting env list
clo55749[1] = car;
clo55749[2] = filter;
clo55749[3] = cdr;
clo55749[4] = kont54809;
clo55749[5] = cons;
clo55749[6] = op;
clo55749[7] = lst;
void* f5481554955 = encode_clo(clo55749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5481554955;
arg_buffer[3] = a5471254954;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55113 = encode_clo(alloc_clo(lam55113_fptr, 0));

void* lam55115_fptr() // lam55115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55116 = arg_buffer[1];
//reading env and args
void* a5471054950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55116))[8];
//not do dummy comment
void* op = (decode_clo(env55116))[7];
//not do dummy comment
void* cons = (decode_clo(env55116))[6];
//not do dummy comment
void* list = (decode_clo(env55116))[5];
//not do dummy comment
void* kont54809 = (decode_clo(env55116))[4];
//not do dummy comment
void* cdr = (decode_clo(env55116))[3];
//not do dummy comment
void* filter = (decode_clo(env55116))[2];
//not do dummy comment
void* car = (decode_clo(env55116))[1];

//if-clause
bool if_guard55750 = is_true(a5471054950);
if(if_guard55750)
{

//creating new closure instance
void** clo55752 = alloc_clo(lam55101_fptr, 1);

//setting env list
clo55752[1] = kont54809;
void* f5481054951 = encode_clo(clo55752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5481054951;
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
void** clo55754 = alloc_clo(lam55113_fptr, 7);

//setting env list
clo55754[1] = car;
clo55754[2] = filter;
clo55754[3] = cdr;
clo55754[4] = kont54809;
clo55754[5] = cons;
clo55754[6] = op;
clo55754[7] = lst;
void* f5481654953 = encode_clo(clo55754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5481654953;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55115 = encode_clo(alloc_clo(lam55115_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55117 = arg_buffer[1];
//reading env and args
void* kont54809 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55756 = alloc_clo(lam55115_fptr, 8);

//setting env list
clo55756[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo55756[2] = filter;
clo55756[3] = cdr;
clo55756[4] = kont54809;
clo55756[5] = list;
clo55756[6] = cons;
clo55756[7] = op;
clo55756[8] = lst;
void* f5481754949 = encode_clo(clo55756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5481754949;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam55118_fptr() // lam55118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55119 = arg_buffer[1];
//reading env and args
void* a5472254972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5472054969 = (decode_clo(env55119))[3];
//not do dummy comment
void* drop = (decode_clo(env55119))[2];
//not do dummy comment
void* kont54818 = (decode_clo(env55119))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont54818;
arg_buffer[3] = a5472054969;
arg_buffer[4] = a5472254972;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55118 = encode_clo(alloc_clo(lam55118_fptr, 0));

void* lam55121_fptr() // lam55121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55122 = arg_buffer[1];
//reading env and args
void* a5472054969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env55122))[4];
//not do dummy comment
void* kont54818 = (decode_clo(env55122))[3];
//not do dummy comment
void* n = (decode_clo(env55122))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55122))[1];
mpz_t* mpzvar55757 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55757, "1", 10);
void* a5472154970 = encode_mpz(mpzvar55757);

//creating new closure instance
void** clo55759 = alloc_clo(lam55118_fptr, 3);

//setting env list
clo55759[1] = kont54818;
clo55759[2] = drop;
clo55759[3] = a5472054969;
void* f5481954971 = encode_clo(clo55759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5481954971;
arg_buffer[3] = n;
arg_buffer[4] = a5472154970;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55121 = encode_clo(alloc_clo(lam55121_fptr, 0));

void* lam55123_fptr() // lam55123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55124 = arg_buffer[1];
//reading env and args
void* a5471954967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55124))[6];
//not do dummy comment
void* kont54818 = (decode_clo(env55124))[5];
//not do dummy comment
void* n = (decode_clo(env55124))[4];
//not do dummy comment
void* _u45 = (decode_clo(env55124))[3];
//not do dummy comment
void* lst = (decode_clo(env55124))[2];
//not do dummy comment
void* drop = (decode_clo(env55124))[1];

//if-clause
bool if_guard55760 = is_true(a5471954967);
if(if_guard55760)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54818);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54818))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55762 = alloc_clo(lam55121_fptr, 4);

//setting env list
clo55762[1] = _u45;
clo55762[2] = n;
clo55762[3] = kont54818;
clo55762[4] = drop;
void* f5482054968 = encode_clo(clo55762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5482054968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55123 = encode_clo(alloc_clo(lam55123_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55126 = arg_buffer[1];
//reading env and args
void* kont54818 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar55763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55763, "0", 10);
void* a5471854965 = encode_mpz(mpzvar55763);

//creating new closure instance
void** clo55765 = alloc_clo(lam55123_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo55765[1] = drop;
clo55765[2] = lst;
clo55765[3] = _u45;
clo55765[4] = n;
clo55765[5] = kont54818;
clo55765[6] = cdr;
void* f5482154966 = encode_clo(clo55765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5482154966;
arg_buffer[3] = n;
arg_buffer[4] = a5471854965;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam55127_fptr() // lam55127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55128 = arg_buffer[1];
//reading env and args
void* a5472654980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5472454976 = (decode_clo(env55128))[3];
//not do dummy comment
void* proc = (decode_clo(env55128))[2];
//not do dummy comment
void* kont54822 = (decode_clo(env55128))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont54822;
arg_buffer[3] = a5472454976;
arg_buffer[4] = a5472654980;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55127 = encode_clo(alloc_clo(lam55127_fptr, 0));

void* lam55129_fptr() // lam55129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55130 = arg_buffer[1];
//reading env and args
void* a5472554978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env55130))[5];
//not do dummy comment
void* a5472454976 = (decode_clo(env55130))[4];
//not do dummy comment
void* kont54822 = (decode_clo(env55130))[3];
//not do dummy comment
void* proc = (decode_clo(env55130))[2];
//not do dummy comment
void* acc = (decode_clo(env55130))[1];

//creating new closure instance
void** clo55767 = alloc_clo(lam55127_fptr, 3);

//setting env list
clo55767[1] = kont54822;
clo55767[2] = proc;
clo55767[3] = a5472454976;
void* f5482354979 = encode_clo(clo55767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5482354979;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5472554978;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55129 = encode_clo(alloc_clo(lam55129_fptr, 0));

void* lam55131_fptr() // lam55131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55132 = arg_buffer[1];
//reading env and args
void* a5472454976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55132))[6];
//not do dummy comment
void* kont54822 = (decode_clo(env55132))[5];
//not do dummy comment
void* foldr = (decode_clo(env55132))[4];
//not do dummy comment
void* lst = (decode_clo(env55132))[3];
//not do dummy comment
void* proc = (decode_clo(env55132))[2];
//not do dummy comment
void* acc = (decode_clo(env55132))[1];

//creating new closure instance
void** clo55769 = alloc_clo(lam55129_fptr, 5);

//setting env list
clo55769[1] = acc;
clo55769[2] = proc;
clo55769[3] = kont54822;
clo55769[4] = a5472454976;
clo55769[5] = foldr;
void* f5482454977 = encode_clo(clo55769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5482454977;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55131 = encode_clo(alloc_clo(lam55131_fptr, 0));

void* lam55133_fptr() // lam55133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55134 = arg_buffer[1];
//reading env and args
void* a5472354974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55134))[7];
//not do dummy comment
void* foldr = (decode_clo(env55134))[6];
//not do dummy comment
void* lst = (decode_clo(env55134))[5];
//not do dummy comment
void* proc = (decode_clo(env55134))[4];
//not do dummy comment
void* acc = (decode_clo(env55134))[3];
//not do dummy comment
void* kont54822 = (decode_clo(env55134))[2];
//not do dummy comment
void* car = (decode_clo(env55134))[1];

//if-clause
bool if_guard55770 = is_true(a5472354974);
if(if_guard55770)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54822);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54822))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55772 = alloc_clo(lam55131_fptr, 6);

//setting env list
clo55772[1] = acc;
clo55772[2] = proc;
clo55772[3] = lst;
clo55772[4] = foldr;
clo55772[5] = kont54822;
clo55772[6] = cdr;
void* f5482554975 = encode_clo(clo55772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5482554975;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55133 = encode_clo(alloc_clo(lam55133_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55135 = arg_buffer[1];
//reading env and args
void* kont54822 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo55774 = alloc_clo(lam55133_fptr, 7);

//setting env list
clo55774[1] = car;
clo55774[2] = kont54822;
clo55774[3] = acc;
clo55774[4] = proc;
clo55774[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo55774[6] = foldr;
clo55774[7] = cdr;
void* f5482654973 = encode_clo(clo55774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5482654973;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam55136_fptr() // lam55136 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55137 = arg_buffer[1];
//reading env and args
void* a5473054988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54827 = (decode_clo(env55137))[3];
//not do dummy comment
void* cons = (decode_clo(env55137))[2];
//not do dummy comment
void* a5472854984 = (decode_clo(env55137))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54827;
arg_buffer[3] = a5472854984;
arg_buffer[4] = a5473054988;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55136 = encode_clo(alloc_clo(lam55136_fptr, 0));

void* lam55138_fptr() // lam55138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55139 = arg_buffer[1];
//reading env and args
void* a5472954986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54827 = (decode_clo(env55139))[5];
//not do dummy comment
void* append = (decode_clo(env55139))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55139))[3];
//not do dummy comment
void* cons = (decode_clo(env55139))[2];
//not do dummy comment
void* a5472854984 = (decode_clo(env55139))[1];

//creating new closure instance
void** clo55776 = alloc_clo(lam55136_fptr, 3);

//setting env list
clo55776[1] = a5472854984;
clo55776[2] = cons;
clo55776[3] = kont54827;
void* f5482854987 = encode_clo(clo55776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5482854987;
arg_buffer[3] = a5472954986;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55138 = encode_clo(alloc_clo(lam55138_fptr, 0));

void* lam55140_fptr() // lam55140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55141 = arg_buffer[1];
//reading env and args
void* a5472854984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55141))[6];
//not do dummy comment
void* kont54827 = (decode_clo(env55141))[5];
//not do dummy comment
void* append = (decode_clo(env55141))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55141))[3];
//not do dummy comment
void* lst1 = (decode_clo(env55141))[2];
//not do dummy comment
void* cons = (decode_clo(env55141))[1];

//creating new closure instance
void** clo55778 = alloc_clo(lam55138_fptr, 5);

//setting env list
clo55778[1] = a5472854984;
clo55778[2] = cons;
clo55778[3] = lst2;
clo55778[4] = append;
clo55778[5] = kont54827;
void* f5482954985 = encode_clo(clo55778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5482954985;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55140 = encode_clo(alloc_clo(lam55140_fptr, 0));

void* lam55142_fptr() // lam55142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55143 = arg_buffer[1];
//reading env and args
void* a5472754982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55143))[7];
//not do dummy comment
void* kont54827 = (decode_clo(env55143))[6];
//not do dummy comment
void* append = (decode_clo(env55143))[5];
//not do dummy comment
void* lst2 = (decode_clo(env55143))[4];
//not do dummy comment
void* cons = (decode_clo(env55143))[3];
//not do dummy comment
void* lst1 = (decode_clo(env55143))[2];
//not do dummy comment
void* car = (decode_clo(env55143))[1];

//if-clause
bool if_guard55779 = is_true(a5472754982);
if(if_guard55779)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54827);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54827))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55781 = alloc_clo(lam55140_fptr, 6);

//setting env list
clo55781[1] = cons;
clo55781[2] = lst1;
clo55781[3] = lst2;
clo55781[4] = append;
clo55781[5] = kont54827;
clo55781[6] = cdr;
void* f5483054983 = encode_clo(clo55781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5483054983;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55142 = encode_clo(alloc_clo(lam55142_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55144 = arg_buffer[1];
//reading env and args
void* kont54827 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55783 = alloc_clo(lam55142_fptr, 7);

//setting env list
clo55783[1] = car;
clo55783[2] = lst1;
clo55783[3] = cons;
clo55783[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo55783[5] = append;
clo55783[6] = kont54827;
clo55783[7] = cdr;
void* f5483154981 = encode_clo(clo55783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5483154981;
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
void* _55145 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont5483254989 = prim_car(lst);
void* lst54990 = prim_cdr(lst);
void* x5473154991 = apply_prim_hash(lst54990);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5483254989);
arg_buffer[2] = x5473154991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5483254989))[0]);
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
void* _55146 = arg_buffer[1];
//reading env and args
void* kont54834 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5473254992 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54834);
arg_buffer[2] = x5473254992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54834))[0]);
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
void* _55147 = arg_buffer[1];
//reading env and args
void* kont54835 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5473354993 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54835);
arg_buffer[2] = x5473354993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54835))[0]);
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
void* _55148 = arg_buffer[1];
//reading env and args
void* kont54836 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5473454994 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54836);
arg_buffer[2] = x5473454994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54836))[0]);
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
void* _55149 = arg_buffer[1];
//reading env and args
void* kont54837 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5473554995 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54837);
arg_buffer[2] = x5473554995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54837))[0]);
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
void* _55154 = arg_buffer[1];
//reading env and args
void* kont54838 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar55784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55784, "100", 10);
void* a5473654996 = encode_mpz(mpzvar55784);
mpz_t* mpzvar55785 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55785, "80", 10);
void* a5473754997 = encode_mpz(mpzvar55785);
mpz_t* mpzvar55786 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55786, "10", 10);
void* a5473854998 = encode_mpz(mpzvar55786);
mpz_t* mpzvar55787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55787, "2", 10);
void* a5473954999 = encode_mpz(mpzvar55787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont54838;
arg_buffer[3] = a5473654996;
arg_buffer[4] = a5473754997;
arg_buffer[5] = a5473854998;
arg_buffer[6] = a5473954999;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam55155_fptr() // lam55155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55156 = arg_buffer[1];
//reading env and args
void* x5474055001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54839 = (decode_clo(env55156))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54839);
arg_buffer[2] = x5474055001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54839))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55155 = encode_clo(alloc_clo(lam55155_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55157 = arg_buffer[1];
//reading env and args
void* kont54839 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo55789 = alloc_clo(lam55155_fptr, 1);

//setting env list
clo55789[1] = kont54839;
void* f5484055000 = encode_clo(clo55789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5484055000;
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

