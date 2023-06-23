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
void* _6029 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57655866 = prim_car(lst);
void* lst5867 = prim_cdr(lst);
void* x56765868 = apply_prim__u43(lst5867);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57655866);
arg_buffer[2] = x56765868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57655866))[0]);
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
void* _6030 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57675869 = prim_car(lst);
void* lst5870 = prim_cdr(lst);
void* x56775871 = apply_prim__u45(lst5870);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57675869);
arg_buffer[2] = x56775871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57675869))[0]);
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
void* _6031 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57695872 = prim_car(lst);
void* lst5873 = prim_cdr(lst);
void* x56785874 = apply_prim__u42(lst5873);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57695872);
arg_buffer[2] = x56785874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57695872))[0]);
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
void* _6032 = arg_buffer[1];
//reading env and args
void* kont5771 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x56795875 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5771);
arg_buffer[2] = x56795875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5771))[0]);
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
void* _6033 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57725876 = prim_car(lst);
void* lst5877 = prim_cdr(lst);
void* x56805878 = apply_prim__u47(lst5877);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57725876);
arg_buffer[2] = x56805878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57725876))[0]);
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
void* _6034 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57745879 = prim_car(lst);
void* lst5880 = prim_cdr(lst);
void* x56815881 = apply_prim__u61(lst5880);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57745879);
arg_buffer[2] = x56815881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57745879))[0]);
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
void* _6035 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57765882 = prim_car(lst);
void* lst5883 = prim_cdr(lst);
void* x56825884 = apply_prim__u62(lst5883);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57765882);
arg_buffer[2] = x56825884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57765882))[0]);
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
void* _6036 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57785885 = prim_car(lst);
void* lst5886 = prim_cdr(lst);
void* x56835887 = apply_prim__u60(lst5886);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57785885);
arg_buffer[2] = x56835887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57785885))[0]);
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
void* _6037 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57805888 = prim_car(lst);
void* lst5889 = prim_cdr(lst);
void* x56845890 = apply_prim__u60_u61(lst5889);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57805888);
arg_buffer[2] = x56845890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57805888))[0]);
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
void* _6038 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont57825891 = prim_car(lst);
void* lst5892 = prim_cdr(lst);
void* x56855893 = apply_prim__u62_u61(lst5892);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57825891);
arg_buffer[2] = x56855893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57825891))[0]);
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
void* _6039 = arg_buffer[1];
//reading env and args
void* kont5784 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x56865894 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5784);
arg_buffer[2] = x56865894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5784))[0]);
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
void* _6040 = arg_buffer[1];
//reading env and args
void* kont5785 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x56875895 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5785);
arg_buffer[2] = x56875895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5785))[0]);
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
void* _6041 = arg_buffer[1];
//reading env and args
void* kont5786 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x56885896 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5786);
arg_buffer[2] = x56885896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5786))[0]);
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
void* _6042 = arg_buffer[1];
//reading env and args
void* kont5787 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x56895897 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5787);
arg_buffer[2] = x56895897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5787))[0]);
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
void* _6043 = arg_buffer[1];
//reading env and args
void* kont5788 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x56905898 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5788);
arg_buffer[2] = x56905898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5788))[0]);
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
void* _6044 = arg_buffer[1];
//reading env and args
void* kont5789 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x56915899 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5789);
arg_buffer[2] = x56915899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5789))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6045_fptr() // lam6045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6046 = arg_buffer[1];
//reading env and args
void* a56945903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a56925900 = (decode_clo(env6046))[3];
//not do dummy comment
void* kont5790 = (decode_clo(env6046))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6046))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5790;
arg_buffer[3] = a56925900;
arg_buffer[4] = a56945903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6045 = encode_clo(alloc_clo(lam6045_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6049 = arg_buffer[1];
//reading env and args
void* kont5790 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar6467 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6467, "0", 10);
void* a56925900 = encode_mpz(mpzvar6467);
mpz_t* mpzvar6468 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6468, "2", 10);
void* a56935901 = encode_mpz(mpzvar6468);

//creating new closure instance
void** clo6470 = alloc_clo(lam6045_fptr, 3);

//setting env list
clo6470[1] = equal_u63;
clo6470[2] = kont5790;
clo6470[3] = a56925900;
void* f57915902 = encode_clo(clo6470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f57915902;
arg_buffer[3] = x;
arg_buffer[4] = a56935901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6050_fptr() // lam6050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6051 = arg_buffer[1];
//reading env and args
void* a56975907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env6051))[3];
//not do dummy comment
void* kont5792 = (decode_clo(env6051))[2];
//not do dummy comment
void* a56955904 = (decode_clo(env6051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5792;
arg_buffer[3] = a56955904;
arg_buffer[4] = a56975907;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6050 = encode_clo(alloc_clo(lam6050_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6054 = arg_buffer[1];
//reading env and args
void* kont5792 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar6471 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6471, "1", 10);
void* a56955904 = encode_mpz(mpzvar6471);
mpz_t* mpzvar6472 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6472, "2", 10);
void* a56965905 = encode_mpz(mpzvar6472);

//creating new closure instance
void** clo6474 = alloc_clo(lam6050_fptr, 3);

//setting env list
clo6474[1] = a56955904;
clo6474[2] = kont5792;
clo6474[3] = equal_u63;
void* f57935906 = encode_clo(clo6474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f57935906;
arg_buffer[3] = x;
arg_buffer[4] = a56965905;
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
void* _6055 = arg_buffer[1];
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

void* kont57945908 = prim_car(x);
void* x5909 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57945908);
arg_buffer[2] = x5909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57945908))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam6058_fptr() // lam6058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6059 = arg_buffer[1];
//reading env and args
void* a57035919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env6059))[3];
//not do dummy comment
void* x = (decode_clo(env6059))[2];
//not do dummy comment
void* kont5796 = (decode_clo(env6059))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont5796;
arg_buffer[3] = x;
arg_buffer[4] = a57035919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6058 = encode_clo(alloc_clo(lam6058_fptr, 0));

void* lam6060_fptr() // lam6060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6061 = arg_buffer[1];
//reading env and args
void* a57015916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6061))[5];
//not do dummy comment
void* lst = (decode_clo(env6061))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6061))[3];
//not do dummy comment
void* x = (decode_clo(env6061))[2];
//not do dummy comment
void* kont5796 = (decode_clo(env6061))[1];

//if-clause
bool if_guard6475 = is_true(a57015916);
if(if_guard6475)
{
void* x57025917 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5796);
arg_buffer[2] = x57025917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5796))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo6477 = alloc_clo(lam6058_fptr, 3);

//setting env list
clo6477[1] = kont5796;
clo6477[2] = x;
clo6477[3] = member_u63;
void* f57975918 = encode_clo(clo6477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f57975918;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6060 = encode_clo(alloc_clo(lam6060_fptr, 0));

void* lam6062_fptr() // lam6062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6063 = arg_buffer[1];
//reading env and args
void* a57005914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6063))[6];
//not do dummy comment
void* lst = (decode_clo(env6063))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env6063))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6063))[3];
//not do dummy comment
void* x = (decode_clo(env6063))[2];
//not do dummy comment
void* kont5796 = (decode_clo(env6063))[1];

//creating new closure instance
void** clo6479 = alloc_clo(lam6060_fptr, 5);

//setting env list
clo6479[1] = kont5796;
clo6479[2] = x;
clo6479[3] = member_u63;
clo6479[4] = lst;
clo6479[5] = cdr;
void* f57985915 = encode_clo(clo6479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f57985915;
arg_buffer[3] = a57005914;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6062 = encode_clo(alloc_clo(lam6062_fptr, 0));

void* lam6064_fptr() // lam6064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6065 = arg_buffer[1];
//reading env and args
void* a56985911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6065))[7];
//not do dummy comment
void* lst = (decode_clo(env6065))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env6065))[5];
//not do dummy comment
void* car = (decode_clo(env6065))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6065))[3];
//not do dummy comment
void* x = (decode_clo(env6065))[2];
//not do dummy comment
void* kont5796 = (decode_clo(env6065))[1];

//if-clause
bool if_guard6480 = is_true(a56985911);
if(if_guard6480)
{
void* x56995912 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5796);
arg_buffer[2] = x56995912;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5796))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo6482 = alloc_clo(lam6062_fptr, 6);

//setting env list
clo6482[1] = kont5796;
clo6482[2] = x;
clo6482[3] = member_u63;
clo6482[4] = equal_u63;
clo6482[5] = lst;
clo6482[6] = cdr;
void* f57995913 = encode_clo(clo6482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f57995913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6064 = encode_clo(alloc_clo(lam6064_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6066 = arg_buffer[1];
//reading env and args
void* kont5796 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo6484 = alloc_clo(lam6064_fptr, 7);

//setting env list
clo6484[1] = kont5796;
clo6484[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo6484[3] = member_u63;
clo6484[4] = car;
clo6484[5] = equal_u63;
clo6484[6] = lst;
clo6484[7] = cdr;
void* f58005910 = encode_clo(clo6484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58005910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam6067_fptr() // lam6067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6068 = arg_buffer[1];
//reading env and args
void* a57075927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5801 = (decode_clo(env6068))[4];
//not do dummy comment
void* fun = (decode_clo(env6068))[3];
//not do dummy comment
void* a57065925 = (decode_clo(env6068))[2];
//not do dummy comment
void* foldl = (decode_clo(env6068))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont5801;
arg_buffer[3] = fun;
arg_buffer[4] = a57065925;
arg_buffer[5] = a57075927;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6067 = encode_clo(alloc_clo(lam6067_fptr, 0));

void* lam6069_fptr() // lam6069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6070 = arg_buffer[1];
//reading env and args
void* a57065925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6070))[5];
//not do dummy comment
void* fun = (decode_clo(env6070))[4];
//not do dummy comment
void* foldl = (decode_clo(env6070))[3];
//not do dummy comment
void* kont5801 = (decode_clo(env6070))[2];
//not do dummy comment
void* cdr = (decode_clo(env6070))[1];

//creating new closure instance
void** clo6486 = alloc_clo(lam6067_fptr, 4);

//setting env list
clo6486[1] = foldl;
clo6486[2] = a57065925;
clo6486[3] = fun;
clo6486[4] = kont5801;
void* f58025926 = encode_clo(clo6486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58025926;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6069 = encode_clo(alloc_clo(lam6069_fptr, 0));

void* lam6071_fptr() // lam6071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6072 = arg_buffer[1];
//reading env and args
void* a57055923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6072))[6];
//not do dummy comment
void* fun = (decode_clo(env6072))[5];
//not do dummy comment
void* acc = (decode_clo(env6072))[4];
//not do dummy comment
void* foldl = (decode_clo(env6072))[3];
//not do dummy comment
void* kont5801 = (decode_clo(env6072))[2];
//not do dummy comment
void* cdr = (decode_clo(env6072))[1];

//creating new closure instance
void** clo6488 = alloc_clo(lam6069_fptr, 5);

//setting env list
clo6488[1] = cdr;
clo6488[2] = kont5801;
clo6488[3] = foldl;
clo6488[4] = fun;
clo6488[5] = lst;
void* f58035924 = encode_clo(clo6488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f58035924;
arg_buffer[3] = a57055923;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6071 = encode_clo(alloc_clo(lam6071_fptr, 0));

void* lam6073_fptr() // lam6073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6074 = arg_buffer[1];
//reading env and args
void* a57045921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6074))[7];
//not do dummy comment
void* fun = (decode_clo(env6074))[6];
//not do dummy comment
void* acc = (decode_clo(env6074))[5];
//not do dummy comment
void* car = (decode_clo(env6074))[4];
//not do dummy comment
void* foldl = (decode_clo(env6074))[3];
//not do dummy comment
void* kont5801 = (decode_clo(env6074))[2];
//not do dummy comment
void* cdr = (decode_clo(env6074))[1];

//if-clause
bool if_guard6489 = is_true(a57045921);
if(if_guard6489)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5801);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5801))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo6491 = alloc_clo(lam6071_fptr, 6);

//setting env list
clo6491[1] = cdr;
clo6491[2] = kont5801;
clo6491[3] = foldl;
clo6491[4] = acc;
clo6491[5] = fun;
clo6491[6] = lst;
void* f58045922 = encode_clo(clo6491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58045922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6073 = encode_clo(alloc_clo(lam6073_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6075 = arg_buffer[1];
//reading env and args
void* kont5801 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo6493 = alloc_clo(lam6073_fptr, 7);

//setting env list
clo6493[1] = cdr;
clo6493[2] = kont5801;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo6493[3] = foldl;
clo6493[4] = car;
clo6493[5] = acc;
clo6493[6] = fun;
clo6493[7] = lst;
void* f58055920 = encode_clo(clo6493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58055920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam6076_fptr() // lam6076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6077 = arg_buffer[1];
//reading env and args
void* a57115935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57095931 = (decode_clo(env6077))[3];
//not do dummy comment
void* kont5806 = (decode_clo(env6077))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6077))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5806;
arg_buffer[3] = a57095931;
arg_buffer[4] = a57115935;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6076 = encode_clo(alloc_clo(lam6076_fptr, 0));

void* lam6078_fptr() // lam6078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6079 = arg_buffer[1];
//reading env and args
void* a57105933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57095931 = (decode_clo(env6079))[5];
//not do dummy comment
void* kont5806 = (decode_clo(env6079))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6079))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6079))[2];
//not do dummy comment
void* cons = (decode_clo(env6079))[1];

//creating new closure instance
void** clo6495 = alloc_clo(lam6076_fptr, 3);

//setting env list
clo6495[1] = reverse_u45helper;
clo6495[2] = kont5806;
clo6495[3] = a57095931;
void* f58075934 = encode_clo(clo6495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58075934;
arg_buffer[3] = a57105933;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6078 = encode_clo(alloc_clo(lam6078_fptr, 0));

void* lam6080_fptr() // lam6080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6081 = arg_buffer[1];
//reading env and args
void* a57095931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6081))[6];
//not do dummy comment
void* kont5806 = (decode_clo(env6081))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6081))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6081))[3];
//not do dummy comment
void* car = (decode_clo(env6081))[2];
//not do dummy comment
void* cons = (decode_clo(env6081))[1];

//creating new closure instance
void** clo6497 = alloc_clo(lam6078_fptr, 5);

//setting env list
clo6497[1] = cons;
clo6497[2] = lst2;
clo6497[3] = reverse_u45helper;
clo6497[4] = kont5806;
clo6497[5] = a57095931;
void* f58085932 = encode_clo(clo6497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58085932;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6080 = encode_clo(alloc_clo(lam6080_fptr, 0));

void* lam6082_fptr() // lam6082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6083 = arg_buffer[1];
//reading env and args
void* a57085929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6083))[7];
//not do dummy comment
void* lst = (decode_clo(env6083))[6];
//not do dummy comment
void* kont5806 = (decode_clo(env6083))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6083))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6083))[3];
//not do dummy comment
void* car = (decode_clo(env6083))[2];
//not do dummy comment
void* cons = (decode_clo(env6083))[1];

//if-clause
bool if_guard6498 = is_true(a57085929);
if(if_guard6498)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5806);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5806))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo6500 = alloc_clo(lam6080_fptr, 6);

//setting env list
clo6500[1] = cons;
clo6500[2] = car;
clo6500[3] = lst2;
clo6500[4] = reverse_u45helper;
clo6500[5] = kont5806;
clo6500[6] = lst;
void* f58095930 = encode_clo(clo6500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58095930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6082 = encode_clo(alloc_clo(lam6082_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6084 = arg_buffer[1];
//reading env and args
void* kont5806 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo6502 = alloc_clo(lam6082_fptr, 7);

//setting env list
clo6502[1] = cons;
clo6502[2] = car;
clo6502[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo6502[4] = reverse_u45helper;
clo6502[5] = kont5806;
clo6502[6] = lst;
clo6502[7] = cdr;
void* f58105928 = encode_clo(clo6502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58105928;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam6085_fptr() // lam6085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6086 = arg_buffer[1];
//reading env and args
void* a57125937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6086))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6086))[2];
//not do dummy comment
void* kont5811 = (decode_clo(env6086))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5811;
arg_buffer[3] = lst;
arg_buffer[4] = a57125937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6085 = encode_clo(alloc_clo(lam6085_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6087 = arg_buffer[1];
//reading env and args
void* kont5811 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo6504 = alloc_clo(lam6085_fptr, 3);

//setting env list
clo6504[1] = kont5811;
clo6504[2] = reverse_u45helper;
clo6504[3] = lst;
void* f58125936 = encode_clo(clo6504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58125936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam6088_fptr() // lam6088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6089 = arg_buffer[1];
//reading env and args
void* x57155942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5813 = (decode_clo(env6089))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5813);
arg_buffer[2] = x57155942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5813))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6088 = encode_clo(alloc_clo(lam6088_fptr, 0));

void* lam6090_fptr() // lam6090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6091 = arg_buffer[1];
//reading env and args
void* a57205951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57185947 = (decode_clo(env6091))[4];
//not do dummy comment
void* a57165944 = (decode_clo(env6091))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6091))[2];
//not do dummy comment
void* kont5813 = (decode_clo(env6091))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5813;
arg_buffer[3] = a57165944;
arg_buffer[4] = a57185947;
arg_buffer[5] = a57205951;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6090 = encode_clo(alloc_clo(lam6090_fptr, 0));

void* lam6092_fptr() // lam6092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6093 = arg_buffer[1];
//reading env and args
void* a57195949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57185947 = (decode_clo(env6093))[6];
//not do dummy comment
void* cons = (decode_clo(env6093))[5];
//not do dummy comment
void* a57165944 = (decode_clo(env6093))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6093))[3];
//not do dummy comment
void* kont5813 = (decode_clo(env6093))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6093))[1];

//creating new closure instance
void** clo6506 = alloc_clo(lam6090_fptr, 4);

//setting env list
clo6506[1] = kont5813;
clo6506[2] = take_u45helper;
clo6506[3] = a57165944;
clo6506[4] = a57185947;
void* f58155950 = encode_clo(clo6506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58155950;
arg_buffer[3] = a57195949;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6092 = encode_clo(alloc_clo(lam6092_fptr, 0));

void* lam6094_fptr() // lam6094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6095 = arg_buffer[1];
//reading env and args
void* a57185947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6095))[7];
//not do dummy comment
void* car = (decode_clo(env6095))[6];
//not do dummy comment
void* cons = (decode_clo(env6095))[5];
//not do dummy comment
void* a57165944 = (decode_clo(env6095))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6095))[3];
//not do dummy comment
void* kont5813 = (decode_clo(env6095))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6095))[1];

//creating new closure instance
void** clo6508 = alloc_clo(lam6092_fptr, 6);

//setting env list
clo6508[1] = lst2;
clo6508[2] = kont5813;
clo6508[3] = take_u45helper;
clo6508[4] = a57165944;
clo6508[5] = cons;
clo6508[6] = a57185947;
void* f58165948 = encode_clo(clo6508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58165948;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6094 = encode_clo(alloc_clo(lam6094_fptr, 0));

void* lam6097_fptr() // lam6097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6098 = arg_buffer[1];
//reading env and args
void* a57165944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6098))[8];
//not do dummy comment
void* cons = (decode_clo(env6098))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6098))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6098))[5];
//not do dummy comment
void* kont5813 = (decode_clo(env6098))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6098))[3];
//not do dummy comment
void* n = (decode_clo(env6098))[2];
//not do dummy comment
void* car = (decode_clo(env6098))[1];
mpz_t* mpzvar6509 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6509, "1", 10);
void* a57175945 = encode_mpz(mpzvar6509);

//creating new closure instance
void** clo6511 = alloc_clo(lam6094_fptr, 7);

//setting env list
clo6511[1] = lst2;
clo6511[2] = kont5813;
clo6511[3] = take_u45helper;
clo6511[4] = a57165944;
clo6511[5] = cons;
clo6511[6] = car;
clo6511[7] = lst;
void* f58175946 = encode_clo(clo6511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58175946;
arg_buffer[3] = n;
arg_buffer[4] = a57175945;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6097 = encode_clo(alloc_clo(lam6097_fptr, 0));

void* lam6099_fptr() // lam6099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6100 = arg_buffer[1];
//reading env and args
void* a57145940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6100))[10];
//not do dummy comment
void* lst = (decode_clo(env6100))[9];
//not do dummy comment
void* reverse = (decode_clo(env6100))[8];
//not do dummy comment
void* cons = (decode_clo(env6100))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6100))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6100))[5];
//not do dummy comment
void* kont5813 = (decode_clo(env6100))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6100))[3];
//not do dummy comment
void* n = (decode_clo(env6100))[2];
//not do dummy comment
void* car = (decode_clo(env6100))[1];

//if-clause
bool if_guard6512 = is_true(a57145940);
if(if_guard6512)
{

//creating new closure instance
void** clo6514 = alloc_clo(lam6088_fptr, 1);

//setting env list
clo6514[1] = kont5813;
void* f58145941 = encode_clo(clo6514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f58145941;
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
void** clo6516 = alloc_clo(lam6097_fptr, 8);

//setting env list
clo6516[1] = car;
clo6516[2] = n;
clo6516[3] = lst2;
clo6516[4] = kont5813;
clo6516[5] = take_u45helper;
clo6516[6] = _u45;
clo6516[7] = cons;
clo6516[8] = lst;
void* f58185943 = encode_clo(clo6516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58185943;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6099 = encode_clo(alloc_clo(lam6099_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6102 = arg_buffer[1];
//reading env and args
void* kont5813 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar6517 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6517, "0", 10);
void* a57135938 = encode_mpz(mpzvar6517);

//creating new closure instance
void** clo6519 = alloc_clo(lam6099_fptr, 10);

//setting env list
clo6519[1] = car;
clo6519[2] = n;
clo6519[3] = lst2;
clo6519[4] = kont5813;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo6519[5] = take_u45helper;
clo6519[6] = _u45;
clo6519[7] = cons;
clo6519[8] = reverse;
clo6519[9] = lst;
clo6519[10] = cdr;
void* f58195939 = encode_clo(clo6519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58195939;
arg_buffer[3] = n;
arg_buffer[4] = a57135938;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam6103_fptr() // lam6103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6104 = arg_buffer[1];
//reading env and args
void* a57215953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5820 = (decode_clo(env6104))[4];
//not do dummy comment
void* lst = (decode_clo(env6104))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6104))[2];
//not do dummy comment
void* n = (decode_clo(env6104))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5820;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a57215953;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6103 = encode_clo(alloc_clo(lam6103_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6105 = arg_buffer[1];
//reading env and args
void* kont5820 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo6521 = alloc_clo(lam6103_fptr, 4);

//setting env list
clo6521[1] = n;
clo6521[2] = take_u45helper;
clo6521[3] = lst;
clo6521[4] = kont5820;
void* f58215952 = encode_clo(clo6521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58215952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam6107_fptr() // lam6107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6108 = arg_buffer[1];
//reading env and args
void* a57265961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5822 = (decode_clo(env6108))[3];
//not do dummy comment
void* _u43 = (decode_clo(env6108))[2];
//not do dummy comment
void* a57245957 = (decode_clo(env6108))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont5822;
arg_buffer[3] = a57245957;
arg_buffer[4] = a57265961;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6107 = encode_clo(alloc_clo(lam6107_fptr, 0));

void* lam6109_fptr() // lam6109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6110 = arg_buffer[1];
//reading env and args
void* a57255959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env6110))[4];
//not do dummy comment
void* a57245957 = (decode_clo(env6110))[3];
//not do dummy comment
void* kont5822 = (decode_clo(env6110))[2];
//not do dummy comment
void* length = (decode_clo(env6110))[1];

//creating new closure instance
void** clo6523 = alloc_clo(lam6107_fptr, 3);

//setting env list
clo6523[1] = a57245957;
clo6523[2] = _u43;
clo6523[3] = kont5822;
void* f58235960 = encode_clo(clo6523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f58235960;
arg_buffer[3] = a57255959;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6109 = encode_clo(alloc_clo(lam6109_fptr, 0));

void* lam6112_fptr() // lam6112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6113 = arg_buffer[1];
//reading env and args
void* a57225955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6113))[5];
//not do dummy comment
void* lst = (decode_clo(env6113))[4];
//not do dummy comment
void* _u43 = (decode_clo(env6113))[3];
//not do dummy comment
void* kont5822 = (decode_clo(env6113))[2];
//not do dummy comment
void* length = (decode_clo(env6113))[1];

//if-clause
bool if_guard6524 = is_true(a57225955);
if(if_guard6524)
{
mpz_t* mpzvar6525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6525, "0", 10);
void* x57235956 = encode_mpz(mpzvar6525);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5822);
arg_buffer[2] = x57235956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5822))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar6526 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6526, "1", 10);
void* a57245957 = encode_mpz(mpzvar6526);

//creating new closure instance
void** clo6528 = alloc_clo(lam6109_fptr, 4);

//setting env list
clo6528[1] = length;
clo6528[2] = kont5822;
clo6528[3] = a57245957;
clo6528[4] = _u43;
void* f58245958 = encode_clo(clo6528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58245958;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6112 = encode_clo(alloc_clo(lam6112_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6114 = arg_buffer[1];
//reading env and args
void* kont5822 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo6530 = alloc_clo(lam6112_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo6530[1] = length;
clo6530[2] = kont5822;
clo6530[3] = _u43;
clo6530[4] = lst;
clo6530[5] = cdr;
void* f58255954 = encode_clo(clo6530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58255954;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam6115_fptr() // lam6115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6116 = arg_buffer[1];
//reading env and args
void* x57285965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5826 = (decode_clo(env6116))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5826);
arg_buffer[2] = x57285965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5826))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6115 = encode_clo(alloc_clo(lam6115_fptr, 0));

void* lam6117_fptr() // lam6117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6118 = arg_buffer[1];
//reading env and args
void* a57325973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57305969 = (decode_clo(env6118))[3];
//not do dummy comment
void* kont5826 = (decode_clo(env6118))[2];
//not do dummy comment
void* cons = (decode_clo(env6118))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5826;
arg_buffer[3] = a57305969;
arg_buffer[4] = a57325973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6117 = encode_clo(alloc_clo(lam6117_fptr, 0));

void* lam6119_fptr() // lam6119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6120 = arg_buffer[1];
//reading env and args
void* a57315971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env6120))[5];
//not do dummy comment
void* a57305969 = (decode_clo(env6120))[4];
//not do dummy comment
void* kont5826 = (decode_clo(env6120))[3];
//not do dummy comment
void* proc = (decode_clo(env6120))[2];
//not do dummy comment
void* cons = (decode_clo(env6120))[1];

//creating new closure instance
void** clo6532 = alloc_clo(lam6117_fptr, 3);

//setting env list
clo6532[1] = cons;
clo6532[2] = kont5826;
clo6532[3] = a57305969;
void* f58285972 = encode_clo(clo6532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f58285972;
arg_buffer[3] = proc;
arg_buffer[4] = a57315971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6119 = encode_clo(alloc_clo(lam6119_fptr, 0));

void* lam6121_fptr() // lam6121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6122 = arg_buffer[1];
//reading env and args
void* a57305969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6122))[6];
//not do dummy comment
void* lst = (decode_clo(env6122))[5];
//not do dummy comment
void* map = (decode_clo(env6122))[4];
//not do dummy comment
void* kont5826 = (decode_clo(env6122))[3];
//not do dummy comment
void* proc = (decode_clo(env6122))[2];
//not do dummy comment
void* cons = (decode_clo(env6122))[1];

//creating new closure instance
void** clo6534 = alloc_clo(lam6119_fptr, 5);

//setting env list
clo6534[1] = cons;
clo6534[2] = proc;
clo6534[3] = kont5826;
clo6534[4] = a57305969;
clo6534[5] = map;
void* f58295970 = encode_clo(clo6534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58295970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6121 = encode_clo(alloc_clo(lam6121_fptr, 0));

void* lam6123_fptr() // lam6123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6124 = arg_buffer[1];
//reading env and args
void* a57295967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6124))[6];
//not do dummy comment
void* lst = (decode_clo(env6124))[5];
//not do dummy comment
void* map = (decode_clo(env6124))[4];
//not do dummy comment
void* kont5826 = (decode_clo(env6124))[3];
//not do dummy comment
void* proc = (decode_clo(env6124))[2];
//not do dummy comment
void* cons = (decode_clo(env6124))[1];

//creating new closure instance
void** clo6536 = alloc_clo(lam6121_fptr, 6);

//setting env list
clo6536[1] = cons;
clo6536[2] = proc;
clo6536[3] = kont5826;
clo6536[4] = map;
clo6536[5] = lst;
clo6536[6] = cdr;
void* f58305968 = encode_clo(clo6536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f58305968;
arg_buffer[3] = a57295967;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6123 = encode_clo(alloc_clo(lam6123_fptr, 0));

void* lam6125_fptr() // lam6125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6126 = arg_buffer[1];
//reading env and args
void* a57275963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6126))[8];
//not do dummy comment
void* map = (decode_clo(env6126))[7];
//not do dummy comment
void* kont5826 = (decode_clo(env6126))[6];
//not do dummy comment
void* proc = (decode_clo(env6126))[5];
//not do dummy comment
void* car = (decode_clo(env6126))[4];
//not do dummy comment
void* cons = (decode_clo(env6126))[3];
//not do dummy comment
void* list = (decode_clo(env6126))[2];
//not do dummy comment
void* cdr = (decode_clo(env6126))[1];

//if-clause
bool if_guard6537 = is_true(a57275963);
if(if_guard6537)
{

//creating new closure instance
void** clo6539 = alloc_clo(lam6115_fptr, 1);

//setting env list
clo6539[1] = kont5826;
void* f58275964 = encode_clo(clo6539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58275964;
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
void** clo6541 = alloc_clo(lam6123_fptr, 6);

//setting env list
clo6541[1] = cons;
clo6541[2] = proc;
clo6541[3] = kont5826;
clo6541[4] = map;
clo6541[5] = lst;
clo6541[6] = cdr;
void* f58315966 = encode_clo(clo6541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58315966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6125 = encode_clo(alloc_clo(lam6125_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6127 = arg_buffer[1];
//reading env and args
void* kont5826 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo6543 = alloc_clo(lam6125_fptr, 8);

//setting env list
clo6543[1] = cdr;
clo6543[2] = list;
clo6543[3] = cons;
clo6543[4] = car;
clo6543[5] = proc;
clo6543[6] = kont5826;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo6543[7] = map;
clo6543[8] = lst;
void* f58325962 = encode_clo(clo6543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58325962;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam6128_fptr() // lam6128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6129 = arg_buffer[1];
//reading env and args
void* x57345977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5833 = (decode_clo(env6129))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5833);
arg_buffer[2] = x57345977;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5833))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6128 = encode_clo(alloc_clo(lam6128_fptr, 0));

void* lam6130_fptr() // lam6130 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6131 = arg_buffer[1];
//reading env and args
void* a57395987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5833 = (decode_clo(env6131))[3];
//not do dummy comment
void* a57375983 = (decode_clo(env6131))[2];
//not do dummy comment
void* cons = (decode_clo(env6131))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5833;
arg_buffer[3] = a57375983;
arg_buffer[4] = a57395987;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6130 = encode_clo(alloc_clo(lam6130_fptr, 0));

void* lam6132_fptr() // lam6132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6133 = arg_buffer[1];
//reading env and args
void* a57385985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5833 = (decode_clo(env6133))[5];
//not do dummy comment
void* a57375983 = (decode_clo(env6133))[4];
//not do dummy comment
void* op = (decode_clo(env6133))[3];
//not do dummy comment
void* filter = (decode_clo(env6133))[2];
//not do dummy comment
void* cons = (decode_clo(env6133))[1];

//creating new closure instance
void** clo6545 = alloc_clo(lam6130_fptr, 3);

//setting env list
clo6545[1] = cons;
clo6545[2] = a57375983;
clo6545[3] = kont5833;
void* f58355986 = encode_clo(clo6545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f58355986;
arg_buffer[3] = op;
arg_buffer[4] = a57385985;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6132 = encode_clo(alloc_clo(lam6132_fptr, 0));

void* lam6134_fptr() // lam6134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6135 = arg_buffer[1];
//reading env and args
void* a57375983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6135))[6];
//not do dummy comment
void* op = (decode_clo(env6135))[5];
//not do dummy comment
void* filter = (decode_clo(env6135))[4];
//not do dummy comment
void* cons = (decode_clo(env6135))[3];
//not do dummy comment
void* kont5833 = (decode_clo(env6135))[2];
//not do dummy comment
void* cdr = (decode_clo(env6135))[1];

//creating new closure instance
void** clo6547 = alloc_clo(lam6132_fptr, 5);

//setting env list
clo6547[1] = cons;
clo6547[2] = filter;
clo6547[3] = op;
clo6547[4] = a57375983;
clo6547[5] = kont5833;
void* f58365984 = encode_clo(clo6547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58365984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6134 = encode_clo(alloc_clo(lam6134_fptr, 0));

void* lam6136_fptr() // lam6136 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6137 = arg_buffer[1];
//reading env and args
void* a57405989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5833 = (decode_clo(env6137))[3];
//not do dummy comment
void* op = (decode_clo(env6137))[2];
//not do dummy comment
void* filter = (decode_clo(env6137))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont5833;
arg_buffer[3] = op;
arg_buffer[4] = a57405989;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6136 = encode_clo(alloc_clo(lam6136_fptr, 0));

void* lam6138_fptr() // lam6138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6139 = arg_buffer[1];
//reading env and args
void* a57365981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6139))[7];
//not do dummy comment
void* op = (decode_clo(env6139))[6];
//not do dummy comment
void* cons = (decode_clo(env6139))[5];
//not do dummy comment
void* kont5833 = (decode_clo(env6139))[4];
//not do dummy comment
void* cdr = (decode_clo(env6139))[3];
//not do dummy comment
void* filter = (decode_clo(env6139))[2];
//not do dummy comment
void* car = (decode_clo(env6139))[1];

//if-clause
bool if_guard6548 = is_true(a57365981);
if(if_guard6548)
{

//creating new closure instance
void** clo6550 = alloc_clo(lam6134_fptr, 6);

//setting env list
clo6550[1] = cdr;
clo6550[2] = kont5833;
clo6550[3] = cons;
clo6550[4] = filter;
clo6550[5] = op;
clo6550[6] = lst;
void* f58375982 = encode_clo(clo6550);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58375982;
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
void** clo6552 = alloc_clo(lam6136_fptr, 3);

//setting env list
clo6552[1] = filter;
clo6552[2] = op;
clo6552[3] = kont5833;
void* f58385988 = encode_clo(clo6552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58385988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6138 = encode_clo(alloc_clo(lam6138_fptr, 0));

void* lam6140_fptr() // lam6140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6141 = arg_buffer[1];
//reading env and args
void* a57355979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6141))[7];
//not do dummy comment
void* op = (decode_clo(env6141))[6];
//not do dummy comment
void* cons = (decode_clo(env6141))[5];
//not do dummy comment
void* kont5833 = (decode_clo(env6141))[4];
//not do dummy comment
void* cdr = (decode_clo(env6141))[3];
//not do dummy comment
void* filter = (decode_clo(env6141))[2];
//not do dummy comment
void* car = (decode_clo(env6141))[1];

//creating new closure instance
void** clo6554 = alloc_clo(lam6138_fptr, 7);

//setting env list
clo6554[1] = car;
clo6554[2] = filter;
clo6554[3] = cdr;
clo6554[4] = kont5833;
clo6554[5] = cons;
clo6554[6] = op;
clo6554[7] = lst;
void* f58395980 = encode_clo(clo6554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f58395980;
arg_buffer[3] = a57355979;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6140 = encode_clo(alloc_clo(lam6140_fptr, 0));

void* lam6142_fptr() // lam6142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6143 = arg_buffer[1];
//reading env and args
void* a57335975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6143))[8];
//not do dummy comment
void* op = (decode_clo(env6143))[7];
//not do dummy comment
void* cons = (decode_clo(env6143))[6];
//not do dummy comment
void* list = (decode_clo(env6143))[5];
//not do dummy comment
void* kont5833 = (decode_clo(env6143))[4];
//not do dummy comment
void* cdr = (decode_clo(env6143))[3];
//not do dummy comment
void* filter = (decode_clo(env6143))[2];
//not do dummy comment
void* car = (decode_clo(env6143))[1];

//if-clause
bool if_guard6555 = is_true(a57335975);
if(if_guard6555)
{

//creating new closure instance
void** clo6557 = alloc_clo(lam6128_fptr, 1);

//setting env list
clo6557[1] = kont5833;
void* f58345976 = encode_clo(clo6557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58345976;
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
void** clo6559 = alloc_clo(lam6140_fptr, 7);

//setting env list
clo6559[1] = car;
clo6559[2] = filter;
clo6559[3] = cdr;
clo6559[4] = kont5833;
clo6559[5] = cons;
clo6559[6] = op;
clo6559[7] = lst;
void* f58405978 = encode_clo(clo6559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58405978;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6142 = encode_clo(alloc_clo(lam6142_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6144 = arg_buffer[1];
//reading env and args
void* kont5833 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo6561 = alloc_clo(lam6142_fptr, 8);

//setting env list
clo6561[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo6561[2] = filter;
clo6561[3] = cdr;
clo6561[4] = kont5833;
clo6561[5] = list;
clo6561[6] = cons;
clo6561[7] = op;
clo6561[8] = lst;
void* f58415974 = encode_clo(clo6561);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58415974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam6145_fptr() // lam6145 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6146 = arg_buffer[1];
//reading env and args
void* a57455997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57435994 = (decode_clo(env6146))[3];
//not do dummy comment
void* drop = (decode_clo(env6146))[2];
//not do dummy comment
void* kont5842 = (decode_clo(env6146))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont5842;
arg_buffer[3] = a57435994;
arg_buffer[4] = a57455997;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6145 = encode_clo(alloc_clo(lam6145_fptr, 0));

void* lam6148_fptr() // lam6148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6149 = arg_buffer[1];
//reading env and args
void* a57435994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6149))[4];
//not do dummy comment
void* kont5842 = (decode_clo(env6149))[3];
//not do dummy comment
void* n = (decode_clo(env6149))[2];
//not do dummy comment
void* _u45 = (decode_clo(env6149))[1];
mpz_t* mpzvar6562 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6562, "1", 10);
void* a57445995 = encode_mpz(mpzvar6562);

//creating new closure instance
void** clo6564 = alloc_clo(lam6145_fptr, 3);

//setting env list
clo6564[1] = kont5842;
clo6564[2] = drop;
clo6564[3] = a57435994;
void* f58435996 = encode_clo(clo6564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58435996;
arg_buffer[3] = n;
arg_buffer[4] = a57445995;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6148 = encode_clo(alloc_clo(lam6148_fptr, 0));

void* lam6150_fptr() // lam6150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6151 = arg_buffer[1];
//reading env and args
void* a57425992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6151))[6];
//not do dummy comment
void* kont5842 = (decode_clo(env6151))[5];
//not do dummy comment
void* n = (decode_clo(env6151))[4];
//not do dummy comment
void* _u45 = (decode_clo(env6151))[3];
//not do dummy comment
void* lst = (decode_clo(env6151))[2];
//not do dummy comment
void* drop = (decode_clo(env6151))[1];

//if-clause
bool if_guard6565 = is_true(a57425992);
if(if_guard6565)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5842);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5842))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo6567 = alloc_clo(lam6148_fptr, 4);

//setting env list
clo6567[1] = _u45;
clo6567[2] = n;
clo6567[3] = kont5842;
clo6567[4] = drop;
void* f58445993 = encode_clo(clo6567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58445993;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6150 = encode_clo(alloc_clo(lam6150_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6153 = arg_buffer[1];
//reading env and args
void* kont5842 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar6568 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6568, "0", 10);
void* a57415990 = encode_mpz(mpzvar6568);

//creating new closure instance
void** clo6570 = alloc_clo(lam6150_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo6570[1] = drop;
clo6570[2] = lst;
clo6570[3] = _u45;
clo6570[4] = n;
clo6570[5] = kont5842;
clo6570[6] = cdr;
void* f58455991 = encode_clo(clo6570);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58455991;
arg_buffer[3] = n;
arg_buffer[4] = a57415990;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam6154_fptr() // lam6154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6155 = arg_buffer[1];
//reading env and args
void* a57496005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57476001 = (decode_clo(env6155))[3];
//not do dummy comment
void* proc = (decode_clo(env6155))[2];
//not do dummy comment
void* kont5846 = (decode_clo(env6155))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont5846;
arg_buffer[3] = a57476001;
arg_buffer[4] = a57496005;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6154 = encode_clo(alloc_clo(lam6154_fptr, 0));

void* lam6156_fptr() // lam6156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6157 = arg_buffer[1];
//reading env and args
void* a57486003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env6157))[5];
//not do dummy comment
void* a57476001 = (decode_clo(env6157))[4];
//not do dummy comment
void* kont5846 = (decode_clo(env6157))[3];
//not do dummy comment
void* proc = (decode_clo(env6157))[2];
//not do dummy comment
void* acc = (decode_clo(env6157))[1];

//creating new closure instance
void** clo6572 = alloc_clo(lam6154_fptr, 3);

//setting env list
clo6572[1] = kont5846;
clo6572[2] = proc;
clo6572[3] = a57476001;
void* f58476004 = encode_clo(clo6572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f58476004;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a57486003;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6156 = encode_clo(alloc_clo(lam6156_fptr, 0));

void* lam6158_fptr() // lam6158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6159 = arg_buffer[1];
//reading env and args
void* a57476001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6159))[6];
//not do dummy comment
void* kont5846 = (decode_clo(env6159))[5];
//not do dummy comment
void* foldr = (decode_clo(env6159))[4];
//not do dummy comment
void* lst = (decode_clo(env6159))[3];
//not do dummy comment
void* proc = (decode_clo(env6159))[2];
//not do dummy comment
void* acc = (decode_clo(env6159))[1];

//creating new closure instance
void** clo6574 = alloc_clo(lam6156_fptr, 5);

//setting env list
clo6574[1] = acc;
clo6574[2] = proc;
clo6574[3] = kont5846;
clo6574[4] = a57476001;
clo6574[5] = foldr;
void* f58486002 = encode_clo(clo6574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58486002;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6158 = encode_clo(alloc_clo(lam6158_fptr, 0));

void* lam6160_fptr() // lam6160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6161 = arg_buffer[1];
//reading env and args
void* a57465999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6161))[7];
//not do dummy comment
void* foldr = (decode_clo(env6161))[6];
//not do dummy comment
void* lst = (decode_clo(env6161))[5];
//not do dummy comment
void* proc = (decode_clo(env6161))[4];
//not do dummy comment
void* acc = (decode_clo(env6161))[3];
//not do dummy comment
void* kont5846 = (decode_clo(env6161))[2];
//not do dummy comment
void* car = (decode_clo(env6161))[1];

//if-clause
bool if_guard6575 = is_true(a57465999);
if(if_guard6575)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5846);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5846))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo6577 = alloc_clo(lam6158_fptr, 6);

//setting env list
clo6577[1] = acc;
clo6577[2] = proc;
clo6577[3] = lst;
clo6577[4] = foldr;
clo6577[5] = kont5846;
clo6577[6] = cdr;
void* f58496000 = encode_clo(clo6577);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58496000;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6160 = encode_clo(alloc_clo(lam6160_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6162 = arg_buffer[1];
//reading env and args
void* kont5846 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo6579 = alloc_clo(lam6160_fptr, 7);

//setting env list
clo6579[1] = car;
clo6579[2] = kont5846;
clo6579[3] = acc;
clo6579[4] = proc;
clo6579[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo6579[6] = foldr;
clo6579[7] = cdr;
void* f58505998 = encode_clo(clo6579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58505998;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam6163_fptr() // lam6163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6164 = arg_buffer[1];
//reading env and args
void* a57536013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57516009 = (decode_clo(env6164))[3];
//not do dummy comment
void* kont5851 = (decode_clo(env6164))[2];
//not do dummy comment
void* cons = (decode_clo(env6164))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5851;
arg_buffer[3] = a57516009;
arg_buffer[4] = a57536013;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6163 = encode_clo(alloc_clo(lam6163_fptr, 0));

void* lam6165_fptr() // lam6165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6166 = arg_buffer[1];
//reading env and args
void* a57526011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57516009 = (decode_clo(env6166))[5];
//not do dummy comment
void* kont5851 = (decode_clo(env6166))[4];
//not do dummy comment
void* append = (decode_clo(env6166))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6166))[2];
//not do dummy comment
void* cons = (decode_clo(env6166))[1];

//creating new closure instance
void** clo6581 = alloc_clo(lam6163_fptr, 3);

//setting env list
clo6581[1] = cons;
clo6581[2] = kont5851;
clo6581[3] = a57516009;
void* f58526012 = encode_clo(clo6581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f58526012;
arg_buffer[3] = a57526011;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6165 = encode_clo(alloc_clo(lam6165_fptr, 0));

void* lam6167_fptr() // lam6167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6168 = arg_buffer[1];
//reading env and args
void* a57516009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6168))[6];
//not do dummy comment
void* kont5851 = (decode_clo(env6168))[5];
//not do dummy comment
void* append = (decode_clo(env6168))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6168))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6168))[2];
//not do dummy comment
void* cons = (decode_clo(env6168))[1];

//creating new closure instance
void** clo6583 = alloc_clo(lam6165_fptr, 5);

//setting env list
clo6583[1] = cons;
clo6583[2] = lst2;
clo6583[3] = append;
clo6583[4] = kont5851;
clo6583[5] = a57516009;
void* f58536010 = encode_clo(clo6583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58536010;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6167 = encode_clo(alloc_clo(lam6167_fptr, 0));

void* lam6169_fptr() // lam6169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6170 = arg_buffer[1];
//reading env and args
void* a57506007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6170))[7];
//not do dummy comment
void* kont5851 = (decode_clo(env6170))[6];
//not do dummy comment
void* append = (decode_clo(env6170))[5];
//not do dummy comment
void* lst2 = (decode_clo(env6170))[4];
//not do dummy comment
void* cons = (decode_clo(env6170))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6170))[2];
//not do dummy comment
void* car = (decode_clo(env6170))[1];

//if-clause
bool if_guard6584 = is_true(a57506007);
if(if_guard6584)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5851);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5851))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo6586 = alloc_clo(lam6167_fptr, 6);

//setting env list
clo6586[1] = cons;
clo6586[2] = lst1;
clo6586[3] = lst2;
clo6586[4] = append;
clo6586[5] = kont5851;
clo6586[6] = cdr;
void* f58546008 = encode_clo(clo6586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58546008;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6169 = encode_clo(alloc_clo(lam6169_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6171 = arg_buffer[1];
//reading env and args
void* kont5851 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo6588 = alloc_clo(lam6169_fptr, 7);

//setting env list
clo6588[1] = car;
clo6588[2] = lst1;
clo6588[3] = cons;
clo6588[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo6588[5] = append;
clo6588[6] = kont5851;
clo6588[7] = cdr;
void* f58556006 = encode_clo(clo6588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58556006;
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
void* _6172 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont58566014 = prim_car(lst);
void* lst6015 = prim_cdr(lst);
void* x57546016 = apply_prim_hash(lst6015);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58566014);
arg_buffer[2] = x57546016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58566014))[0]);
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
void* _6173 = arg_buffer[1];
//reading env and args
void* kont5858 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x57556017 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858);
arg_buffer[2] = x57556017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5858))[0]);
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
void* _6174 = arg_buffer[1];
//reading env and args
void* kont5859 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x57566018 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5859);
arg_buffer[2] = x57566018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5859))[0]);
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
void* _6175 = arg_buffer[1];
//reading env and args
void* kont5860 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x57576019 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5860);
arg_buffer[2] = x57576019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5860))[0]);
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
void* _6176 = arg_buffer[1];
//reading env and args
void* kont5861 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x57586020 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5861);
arg_buffer[2] = x57586020;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5861))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam6179_fptr() // lam6179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6180 = arg_buffer[1];
//reading env and args
void* a57616024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5862 = (decode_clo(env6180))[1];

//if-clause
bool if_guard6589 = is_true(a57616024);
if(if_guard6589)
{
void* x57626025 = encode_str(new(GC) std::string("wow"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5862);
arg_buffer[2] = x57626025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5862))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x57636026 = encode_str(new(GC) std::string("not-wow"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5862);
arg_buffer[2] = x57636026;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5862))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6179 = encode_clo(alloc_clo(lam6179_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6183 = arg_buffer[1];
//reading env and args
void* kont5862 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar6590 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6590, "1", 10);
void* a57596021 = encode_mpz(mpzvar6590);
mpz_t* mpzvar6591 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar6591, "1", 10);
void* a57606022 = encode_mpz(mpzvar6591);

//creating new closure instance
void** clo6593 = alloc_clo(lam6179_fptr, 1);

//setting env list
clo6593[1] = kont5862;
void* f58636023 = encode_clo(clo6593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f58636023;
arg_buffer[3] = a57596021;
arg_buffer[4] = a57606022;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam6184_fptr() // lam6184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6185 = arg_buffer[1];
//reading env and args
void* x57646028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5864 = (decode_clo(env6185))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5864);
arg_buffer[2] = x57646028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5864))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6184 = encode_clo(alloc_clo(lam6184_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6186 = arg_buffer[1];
//reading env and args
void* kont5864 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo6595 = alloc_clo(lam6184_fptr, 1);

//setting env list
clo6595[1] = kont5864;
void* f58656027 = encode_clo(clo6595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f58656027;
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

