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

void* kont57665868 = prim_car(lst);
void* lst5869 = prim_cdr(lst);
void* x56745870 = apply_prim__u43(lst5869);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57665868);
arg_buffer[2] = x56745870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57665868))[0]);
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

void* kont57685871 = prim_car(lst);
void* lst5872 = prim_cdr(lst);
void* x56755873 = apply_prim__u45(lst5872);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57685871);
arg_buffer[2] = x56755873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57685871))[0]);
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

void* kont57705874 = prim_car(lst);
void* lst5875 = prim_cdr(lst);
void* x56765876 = apply_prim__u42(lst5875);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57705874);
arg_buffer[2] = x56765876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57705874))[0]);
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
void* _6038 = arg_buffer[1];
//reading env and args
void* kont5772 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x56775877 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5772);
arg_buffer[2] = x56775877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5772))[0]);
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
void* _6039 = arg_buffer[1];
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

void* kont57735878 = prim_car(lst);
void* lst5879 = prim_cdr(lst);
void* x56785880 = apply_prim__u47(lst5879);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57735878);
arg_buffer[2] = x56785880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57735878))[0]);
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
void* _6040 = arg_buffer[1];
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

void* kont57755881 = prim_car(lst);
void* lst5882 = prim_cdr(lst);
void* x56795883 = apply_prim__u61(lst5882);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57755881);
arg_buffer[2] = x56795883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57755881))[0]);
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
void* _6041 = arg_buffer[1];
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

void* kont57775884 = prim_car(lst);
void* lst5885 = prim_cdr(lst);
void* x56805886 = apply_prim__u62(lst5885);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57775884);
arg_buffer[2] = x56805886;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57775884))[0]);
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
void* _6042 = arg_buffer[1];
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

void* kont57795887 = prim_car(lst);
void* lst5888 = prim_cdr(lst);
void* x56815889 = apply_prim__u60(lst5888);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57795887);
arg_buffer[2] = x56815889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57795887))[0]);
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
void* _6043 = arg_buffer[1];
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

void* kont57815890 = prim_car(lst);
void* lst5891 = prim_cdr(lst);
void* x56825892 = apply_prim__u60_u61(lst5891);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57815890);
arg_buffer[2] = x56825892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57815890))[0]);
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
void* _6044 = arg_buffer[1];
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

void* kont57835893 = prim_car(lst);
void* lst5894 = prim_cdr(lst);
void* x56835895 = apply_prim__u62_u61(lst5894);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57835893);
arg_buffer[2] = x56835895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57835893))[0]);
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
void* _6045 = arg_buffer[1];
//reading env and args
void* kont5785 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x56845896 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5785);
arg_buffer[2] = x56845896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5785))[0]);
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
void* _6046 = arg_buffer[1];
//reading env and args
void* kont5786 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x56855897 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5786);
arg_buffer[2] = x56855897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5786))[0]);
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
void* _6047 = arg_buffer[1];
//reading env and args
void* kont5787 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x56865898 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5787);
arg_buffer[2] = x56865898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5787))[0]);
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
void* _6048 = arg_buffer[1];
//reading env and args
void* kont5788 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x56875899 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5788);
arg_buffer[2] = x56875899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5788))[0]);
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
void* _6049 = arg_buffer[1];
//reading env and args
void* kont5789 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x56885900 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5789);
arg_buffer[2] = x56885900;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5789))[0]);
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
void* _6050 = arg_buffer[1];
//reading env and args
void* kont5790 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x56895901 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5790);
arg_buffer[2] = x56895901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5790))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6051_fptr() // lam6051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6052 = arg_buffer[1];
//reading env and args
void* a56925905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a56905902 = (decode_clo(env6052))[3];
//not do dummy comment
void* kont5791 = (decode_clo(env6052))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6052))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5791;
arg_buffer[3] = a56905902;
arg_buffer[4] = a56925905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6051 = encode_clo(alloc_clo(lam6051_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6055 = arg_buffer[1];
//reading env and args
void* kont5791 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7597 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7597, "0", 10);
void* a56905902 = encode_mpz(mpzvar7597);
mpz_t* mpzvar7598 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7598, "2", 10);
void* a56915903 = encode_mpz(mpzvar7598);

//creating new closure instance
void** clo7600 = alloc_clo(lam6051_fptr, 3);

//setting env list
clo7600[1] = equal_u63;
clo7600[2] = kont5791;
clo7600[3] = a56905902;
void* f57925904 = encode_clo(clo7600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f57925904;
arg_buffer[3] = x;
arg_buffer[4] = a56915903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6056_fptr() // lam6056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6057 = arg_buffer[1];
//reading env and args
void* a56955909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5793 = (decode_clo(env6057))[3];
//not do dummy comment
void* a56935906 = (decode_clo(env6057))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6057))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5793;
arg_buffer[3] = a56935906;
arg_buffer[4] = a56955909;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6056 = encode_clo(alloc_clo(lam6056_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6060 = arg_buffer[1];
//reading env and args
void* kont5793 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7601 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7601, "1", 10);
void* a56935906 = encode_mpz(mpzvar7601);
mpz_t* mpzvar7602 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7602, "2", 10);
void* a56945907 = encode_mpz(mpzvar7602);

//creating new closure instance
void** clo7604 = alloc_clo(lam6056_fptr, 3);

//setting env list
clo7604[1] = equal_u63;
clo7604[2] = a56935906;
clo7604[3] = kont5793;
void* f57945908 = encode_clo(clo7604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f57945908;
arg_buffer[3] = x;
arg_buffer[4] = a56945907;
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
void* _6061 = arg_buffer[1];
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

void* kont57955910 = prim_car(x);
void* x5911 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57955910);
arg_buffer[2] = x5911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57955910))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam6064_fptr() // lam6064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6065 = arg_buffer[1];
//reading env and args
void* a57015921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5797 = (decode_clo(env6065))[3];
//not do dummy comment
void* x = (decode_clo(env6065))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6065))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont5797;
arg_buffer[3] = x;
arg_buffer[4] = a57015921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6064 = encode_clo(alloc_clo(lam6064_fptr, 0));

void* lam6066_fptr() // lam6066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6067 = arg_buffer[1];
//reading env and args
void* a56995918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6067))[5];
//not do dummy comment
void* lst = (decode_clo(env6067))[4];
//not do dummy comment
void* kont5797 = (decode_clo(env6067))[3];
//not do dummy comment
void* x = (decode_clo(env6067))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6067))[1];

//if-clause
bool if_guard7605 = is_true(a56995918);
if(if_guard7605)
{
void* x57005919 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5797);
arg_buffer[2] = x57005919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5797))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7607 = alloc_clo(lam6064_fptr, 3);

//setting env list
clo7607[1] = member_u63;
clo7607[2] = x;
clo7607[3] = kont5797;
void* f57985920 = encode_clo(clo7607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f57985920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6066 = encode_clo(alloc_clo(lam6066_fptr, 0));

void* lam6068_fptr() // lam6068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6069 = arg_buffer[1];
//reading env and args
void* a56985916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6069))[6];
//not do dummy comment
void* lst = (decode_clo(env6069))[5];
//not do dummy comment
void* x = (decode_clo(env6069))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6069))[3];
//not do dummy comment
void* kont5797 = (decode_clo(env6069))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6069))[1];

//creating new closure instance
void** clo7609 = alloc_clo(lam6066_fptr, 5);

//setting env list
clo7609[1] = member_u63;
clo7609[2] = x;
clo7609[3] = kont5797;
clo7609[4] = lst;
clo7609[5] = cdr;
void* f57995917 = encode_clo(clo7609);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f57995917;
arg_buffer[3] = a56985916;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6068 = encode_clo(alloc_clo(lam6068_fptr, 0));

void* lam6070_fptr() // lam6070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6071 = arg_buffer[1];
//reading env and args
void* a56965913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6071))[7];
//not do dummy comment
void* lst = (decode_clo(env6071))[6];
//not do dummy comment
void* x = (decode_clo(env6071))[5];
//not do dummy comment
void* car = (decode_clo(env6071))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6071))[3];
//not do dummy comment
void* kont5797 = (decode_clo(env6071))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6071))[1];

//if-clause
bool if_guard7610 = is_true(a56965913);
if(if_guard7610)
{
void* x56975914 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5797);
arg_buffer[2] = x56975914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5797))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7612 = alloc_clo(lam6068_fptr, 6);

//setting env list
clo7612[1] = equal_u63;
clo7612[2] = kont5797;
clo7612[3] = member_u63;
clo7612[4] = x;
clo7612[5] = lst;
clo7612[6] = cdr;
void* f58005915 = encode_clo(clo7612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58005915;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6070 = encode_clo(alloc_clo(lam6070_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6072 = arg_buffer[1];
//reading env and args
void* kont5797 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7614 = alloc_clo(lam6070_fptr, 7);

//setting env list
clo7614[1] = equal_u63;
clo7614[2] = kont5797;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo7614[3] = member_u63;
clo7614[4] = car;
clo7614[5] = x;
clo7614[6] = lst;
clo7614[7] = cdr;
void* f58015912 = encode_clo(clo7614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58015912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam6073_fptr() // lam6073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6074 = arg_buffer[1];
//reading env and args
void* a57055929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5802 = (decode_clo(env6074))[4];
//not do dummy comment
void* foldl = (decode_clo(env6074))[3];
//not do dummy comment
void* a57045927 = (decode_clo(env6074))[2];
//not do dummy comment
void* fun = (decode_clo(env6074))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont5802;
arg_buffer[3] = fun;
arg_buffer[4] = a57045927;
arg_buffer[5] = a57055929;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6073 = encode_clo(alloc_clo(lam6073_fptr, 0));

void* lam6075_fptr() // lam6075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6076 = arg_buffer[1];
//reading env and args
void* a57045927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6076))[5];
//not do dummy comment
void* lst = (decode_clo(env6076))[4];
//not do dummy comment
void* fun = (decode_clo(env6076))[3];
//not do dummy comment
void* kont5802 = (decode_clo(env6076))[2];
//not do dummy comment
void* foldl = (decode_clo(env6076))[1];

//creating new closure instance
void** clo7616 = alloc_clo(lam6073_fptr, 4);

//setting env list
clo7616[1] = fun;
clo7616[2] = a57045927;
clo7616[3] = foldl;
clo7616[4] = kont5802;
void* f58035928 = encode_clo(clo7616);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58035928;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6075 = encode_clo(alloc_clo(lam6075_fptr, 0));

void* lam6077_fptr() // lam6077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6078 = arg_buffer[1];
//reading env and args
void* a57035925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6078))[6];
//not do dummy comment
void* lst = (decode_clo(env6078))[5];
//not do dummy comment
void* fun = (decode_clo(env6078))[4];
//not do dummy comment
void* acc = (decode_clo(env6078))[3];
//not do dummy comment
void* kont5802 = (decode_clo(env6078))[2];
//not do dummy comment
void* foldl = (decode_clo(env6078))[1];

//creating new closure instance
void** clo7618 = alloc_clo(lam6075_fptr, 5);

//setting env list
clo7618[1] = foldl;
clo7618[2] = kont5802;
clo7618[3] = fun;
clo7618[4] = lst;
clo7618[5] = cdr;
void* f58045926 = encode_clo(clo7618);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f58045926;
arg_buffer[3] = a57035925;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6077 = encode_clo(alloc_clo(lam6077_fptr, 0));

void* lam6079_fptr() // lam6079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6080 = arg_buffer[1];
//reading env and args
void* a57025923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6080))[7];
//not do dummy comment
void* lst = (decode_clo(env6080))[6];
//not do dummy comment
void* fun = (decode_clo(env6080))[5];
//not do dummy comment
void* acc = (decode_clo(env6080))[4];
//not do dummy comment
void* foldl = (decode_clo(env6080))[3];
//not do dummy comment
void* kont5802 = (decode_clo(env6080))[2];
//not do dummy comment
void* car = (decode_clo(env6080))[1];

//if-clause
bool if_guard7619 = is_true(a57025923);
if(if_guard7619)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5802);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5802))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7621 = alloc_clo(lam6077_fptr, 6);

//setting env list
clo7621[1] = foldl;
clo7621[2] = kont5802;
clo7621[3] = acc;
clo7621[4] = fun;
clo7621[5] = lst;
clo7621[6] = cdr;
void* f58055924 = encode_clo(clo7621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58055924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6079 = encode_clo(alloc_clo(lam6079_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6081 = arg_buffer[1];
//reading env and args
void* kont5802 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7623 = alloc_clo(lam6079_fptr, 7);

//setting env list
clo7623[1] = car;
clo7623[2] = kont5802;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo7623[3] = foldl;
clo7623[4] = acc;
clo7623[5] = fun;
clo7623[6] = lst;
clo7623[7] = cdr;
void* f58065922 = encode_clo(clo7623);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58065922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam6082_fptr() // lam6082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6083 = arg_buffer[1];
//reading env and args
void* a57095937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57075933 = (decode_clo(env6083))[3];
//not do dummy comment
void* kont5807 = (decode_clo(env6083))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6083))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5807;
arg_buffer[3] = a57075933;
arg_buffer[4] = a57095937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6082 = encode_clo(alloc_clo(lam6082_fptr, 0));

void* lam6084_fptr() // lam6084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6085 = arg_buffer[1];
//reading env and args
void* a57085935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57075933 = (decode_clo(env6085))[5];
//not do dummy comment
void* kont5807 = (decode_clo(env6085))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6085))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6085))[2];
//not do dummy comment
void* cons = (decode_clo(env6085))[1];

//creating new closure instance
void** clo7625 = alloc_clo(lam6082_fptr, 3);

//setting env list
clo7625[1] = reverse_u45helper;
clo7625[2] = kont5807;
clo7625[3] = a57075933;
void* f58085936 = encode_clo(clo7625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58085936;
arg_buffer[3] = a57085935;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6084 = encode_clo(alloc_clo(lam6084_fptr, 0));

void* lam6086_fptr() // lam6086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6087 = arg_buffer[1];
//reading env and args
void* a57075933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5807 = (decode_clo(env6087))[6];
//not do dummy comment
void* lst = (decode_clo(env6087))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6087))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6087))[3];
//not do dummy comment
void* car = (decode_clo(env6087))[2];
//not do dummy comment
void* cons = (decode_clo(env6087))[1];

//creating new closure instance
void** clo7627 = alloc_clo(lam6084_fptr, 5);

//setting env list
clo7627[1] = cons;
clo7627[2] = lst2;
clo7627[3] = reverse_u45helper;
clo7627[4] = kont5807;
clo7627[5] = a57075933;
void* f58095934 = encode_clo(clo7627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58095934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6086 = encode_clo(alloc_clo(lam6086_fptr, 0));

void* lam6088_fptr() // lam6088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6089 = arg_buffer[1];
//reading env and args
void* a57065931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6089))[7];
//not do dummy comment
void* kont5807 = (decode_clo(env6089))[6];
//not do dummy comment
void* lst = (decode_clo(env6089))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6089))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6089))[3];
//not do dummy comment
void* car = (decode_clo(env6089))[2];
//not do dummy comment
void* cons = (decode_clo(env6089))[1];

//if-clause
bool if_guard7628 = is_true(a57065931);
if(if_guard7628)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5807);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5807))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7630 = alloc_clo(lam6086_fptr, 6);

//setting env list
clo7630[1] = cons;
clo7630[2] = car;
clo7630[3] = lst2;
clo7630[4] = reverse_u45helper;
clo7630[5] = lst;
clo7630[6] = kont5807;
void* f58105932 = encode_clo(clo7630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58105932;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6088 = encode_clo(alloc_clo(lam6088_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6090 = arg_buffer[1];
//reading env and args
void* kont5807 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7632 = alloc_clo(lam6088_fptr, 7);

//setting env list
clo7632[1] = cons;
clo7632[2] = car;
clo7632[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo7632[4] = reverse_u45helper;
clo7632[5] = lst;
clo7632[6] = kont5807;
clo7632[7] = cdr;
void* f58115930 = encode_clo(clo7632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58115930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam6091_fptr() // lam6091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6092 = arg_buffer[1];
//reading env and args
void* a57105939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6092))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6092))[2];
//not do dummy comment
void* kont5812 = (decode_clo(env6092))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5812;
arg_buffer[3] = lst;
arg_buffer[4] = a57105939;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6091 = encode_clo(alloc_clo(lam6091_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6093 = arg_buffer[1];
//reading env and args
void* kont5812 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7634 = alloc_clo(lam6091_fptr, 3);

//setting env list
clo7634[1] = kont5812;
clo7634[2] = reverse_u45helper;
clo7634[3] = lst;
void* f58135938 = encode_clo(clo7634);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58135938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam6094_fptr() // lam6094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6095 = arg_buffer[1];
//reading env and args
void* x57135944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5814 = (decode_clo(env6095))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5814);
arg_buffer[2] = x57135944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5814))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6094 = encode_clo(alloc_clo(lam6094_fptr, 0));

void* lam6096_fptr() // lam6096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6097 = arg_buffer[1];
//reading env and args
void* a57185953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57165949 = (decode_clo(env6097))[4];
//not do dummy comment
void* kont5814 = (decode_clo(env6097))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6097))[2];
//not do dummy comment
void* a57145946 = (decode_clo(env6097))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5814;
arg_buffer[3] = a57145946;
arg_buffer[4] = a57165949;
arg_buffer[5] = a57185953;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6096 = encode_clo(alloc_clo(lam6096_fptr, 0));

void* lam6098_fptr() // lam6098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6099 = arg_buffer[1];
//reading env and args
void* a57175951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57165949 = (decode_clo(env6099))[6];
//not do dummy comment
void* kont5814 = (decode_clo(env6099))[5];
//not do dummy comment
void* a57145946 = (decode_clo(env6099))[4];
//not do dummy comment
void* cons = (decode_clo(env6099))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6099))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6099))[1];

//creating new closure instance
void** clo7636 = alloc_clo(lam6096_fptr, 4);

//setting env list
clo7636[1] = a57145946;
clo7636[2] = take_u45helper;
clo7636[3] = kont5814;
clo7636[4] = a57165949;
void* f58165952 = encode_clo(clo7636);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58165952;
arg_buffer[3] = a57175951;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6098 = encode_clo(alloc_clo(lam6098_fptr, 0));

void* lam6100_fptr() // lam6100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6101 = arg_buffer[1];
//reading env and args
void* a57165949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6101))[7];
//not do dummy comment
void* kont5814 = (decode_clo(env6101))[6];
//not do dummy comment
void* cons = (decode_clo(env6101))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env6101))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6101))[3];
//not do dummy comment
void* a57145946 = (decode_clo(env6101))[2];
//not do dummy comment
void* car = (decode_clo(env6101))[1];

//creating new closure instance
void** clo7638 = alloc_clo(lam6098_fptr, 6);

//setting env list
clo7638[1] = lst2;
clo7638[2] = take_u45helper;
clo7638[3] = cons;
clo7638[4] = a57145946;
clo7638[5] = kont5814;
clo7638[6] = a57165949;
void* f58175950 = encode_clo(clo7638);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58175950;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6100 = encode_clo(alloc_clo(lam6100_fptr, 0));

void* lam6103_fptr() // lam6103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6104 = arg_buffer[1];
//reading env and args
void* a57145946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6104))[8];
//not do dummy comment
void* kont5814 = (decode_clo(env6104))[7];
//not do dummy comment
void* cons = (decode_clo(env6104))[6];
//not do dummy comment
void* _u45 = (decode_clo(env6104))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env6104))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6104))[3];
//not do dummy comment
void* n = (decode_clo(env6104))[2];
//not do dummy comment
void* car = (decode_clo(env6104))[1];
mpz_t* mpzvar7639 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7639, "1", 10);
void* a57155947 = encode_mpz(mpzvar7639);

//creating new closure instance
void** clo7641 = alloc_clo(lam6100_fptr, 7);

//setting env list
clo7641[1] = car;
clo7641[2] = a57145946;
clo7641[3] = lst2;
clo7641[4] = take_u45helper;
clo7641[5] = cons;
clo7641[6] = kont5814;
clo7641[7] = lst;
void* f58185948 = encode_clo(clo7641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58185948;
arg_buffer[3] = n;
arg_buffer[4] = a57155947;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6103 = encode_clo(alloc_clo(lam6103_fptr, 0));

void* lam6105_fptr() // lam6105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6106 = arg_buffer[1];
//reading env and args
void* a57125942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6106))[10];
//not do dummy comment
void* lst = (decode_clo(env6106))[9];
//not do dummy comment
void* reverse = (decode_clo(env6106))[8];
//not do dummy comment
void* kont5814 = (decode_clo(env6106))[7];
//not do dummy comment
void* cons = (decode_clo(env6106))[6];
//not do dummy comment
void* _u45 = (decode_clo(env6106))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env6106))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6106))[3];
//not do dummy comment
void* n = (decode_clo(env6106))[2];
//not do dummy comment
void* car = (decode_clo(env6106))[1];

//if-clause
bool if_guard7642 = is_true(a57125942);
if(if_guard7642)
{

//creating new closure instance
void** clo7644 = alloc_clo(lam6094_fptr, 1);

//setting env list
clo7644[1] = kont5814;
void* f58155943 = encode_clo(clo7644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f58155943;
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
void** clo7646 = alloc_clo(lam6103_fptr, 8);

//setting env list
clo7646[1] = car;
clo7646[2] = n;
clo7646[3] = lst2;
clo7646[4] = take_u45helper;
clo7646[5] = _u45;
clo7646[6] = cons;
clo7646[7] = kont5814;
clo7646[8] = lst;
void* f58195945 = encode_clo(clo7646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58195945;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6105 = encode_clo(alloc_clo(lam6105_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6108 = arg_buffer[1];
//reading env and args
void* kont5814 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar7647 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7647, "0", 10);
void* a57115940 = encode_mpz(mpzvar7647);

//creating new closure instance
void** clo7649 = alloc_clo(lam6105_fptr, 10);

//setting env list
clo7649[1] = car;
clo7649[2] = n;
clo7649[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo7649[4] = take_u45helper;
clo7649[5] = _u45;
clo7649[6] = cons;
clo7649[7] = kont5814;
clo7649[8] = reverse;
clo7649[9] = lst;
clo7649[10] = cdr;
void* f58205941 = encode_clo(clo7649);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58205941;
arg_buffer[3] = n;
arg_buffer[4] = a57115940;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam6109_fptr() // lam6109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6110 = arg_buffer[1];
//reading env and args
void* a57195955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5821 = (decode_clo(env6110))[4];
//not do dummy comment
void* lst = (decode_clo(env6110))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6110))[2];
//not do dummy comment
void* n = (decode_clo(env6110))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5821;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a57195955;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6109 = encode_clo(alloc_clo(lam6109_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6111 = arg_buffer[1];
//reading env and args
void* kont5821 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7651 = alloc_clo(lam6109_fptr, 4);

//setting env list
clo7651[1] = n;
clo7651[2] = take_u45helper;
clo7651[3] = lst;
clo7651[4] = kont5821;
void* f58225954 = encode_clo(clo7651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58225954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam6113_fptr() // lam6113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6114 = arg_buffer[1];
//reading env and args
void* a57245963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5823 = (decode_clo(env6114))[3];
//not do dummy comment
void* _u43 = (decode_clo(env6114))[2];
//not do dummy comment
void* a57225959 = (decode_clo(env6114))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont5823;
arg_buffer[3] = a57225959;
arg_buffer[4] = a57245963;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6113 = encode_clo(alloc_clo(lam6113_fptr, 0));

void* lam6115_fptr() // lam6115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6116 = arg_buffer[1];
//reading env and args
void* a57235961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5823 = (decode_clo(env6116))[4];
//not do dummy comment
void* length = (decode_clo(env6116))[3];
//not do dummy comment
void* _u43 = (decode_clo(env6116))[2];
//not do dummy comment
void* a57225959 = (decode_clo(env6116))[1];

//creating new closure instance
void** clo7653 = alloc_clo(lam6113_fptr, 3);

//setting env list
clo7653[1] = a57225959;
clo7653[2] = _u43;
clo7653[3] = kont5823;
void* f58245962 = encode_clo(clo7653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f58245962;
arg_buffer[3] = a57235961;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6115 = encode_clo(alloc_clo(lam6115_fptr, 0));

void* lam6118_fptr() // lam6118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6119 = arg_buffer[1];
//reading env and args
void* a57205957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6119))[5];
//not do dummy comment
void* kont5823 = (decode_clo(env6119))[4];
//not do dummy comment
void* lst = (decode_clo(env6119))[3];
//not do dummy comment
void* length = (decode_clo(env6119))[2];
//not do dummy comment
void* _u43 = (decode_clo(env6119))[1];

//if-clause
bool if_guard7654 = is_true(a57205957);
if(if_guard7654)
{
mpz_t* mpzvar7655 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7655, "0", 10);
void* x57215958 = encode_mpz(mpzvar7655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5823);
arg_buffer[2] = x57215958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5823))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar7656 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7656, "1", 10);
void* a57225959 = encode_mpz(mpzvar7656);

//creating new closure instance
void** clo7658 = alloc_clo(lam6115_fptr, 4);

//setting env list
clo7658[1] = a57225959;
clo7658[2] = _u43;
clo7658[3] = length;
clo7658[4] = kont5823;
void* f58255960 = encode_clo(clo7658);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58255960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6118 = encode_clo(alloc_clo(lam6118_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6120 = arg_buffer[1];
//reading env and args
void* kont5823 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7660 = alloc_clo(lam6118_fptr, 5);

//setting env list
clo7660[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo7660[2] = length;
clo7660[3] = lst;
clo7660[4] = kont5823;
clo7660[5] = cdr;
void* f58265956 = encode_clo(clo7660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58265956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam6121_fptr() // lam6121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6122 = arg_buffer[1];
//reading env and args
void* x57265967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5827 = (decode_clo(env6122))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5827);
arg_buffer[2] = x57265967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5827))[0]);
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
void* a57305975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env6124))[3];
//not do dummy comment
void* kont5827 = (decode_clo(env6124))[2];
//not do dummy comment
void* a57285971 = (decode_clo(env6124))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5827;
arg_buffer[3] = a57285971;
arg_buffer[4] = a57305975;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a57295973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env6126))[5];
//not do dummy comment
void* proc = (decode_clo(env6126))[4];
//not do dummy comment
void* cons = (decode_clo(env6126))[3];
//not do dummy comment
void* kont5827 = (decode_clo(env6126))[2];
//not do dummy comment
void* a57285971 = (decode_clo(env6126))[1];

//creating new closure instance
void** clo7662 = alloc_clo(lam6123_fptr, 3);

//setting env list
clo7662[1] = a57285971;
clo7662[2] = kont5827;
clo7662[3] = cons;
void* f58295974 = encode_clo(clo7662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f58295974;
arg_buffer[3] = proc;
arg_buffer[4] = a57295973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6125 = encode_clo(alloc_clo(lam6125_fptr, 0));

void* lam6127_fptr() // lam6127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6128 = arg_buffer[1];
//reading env and args
void* a57285971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6128))[6];
//not do dummy comment
void* lst = (decode_clo(env6128))[5];
//not do dummy comment
void* map = (decode_clo(env6128))[4];
//not do dummy comment
void* kont5827 = (decode_clo(env6128))[3];
//not do dummy comment
void* proc = (decode_clo(env6128))[2];
//not do dummy comment
void* cons = (decode_clo(env6128))[1];

//creating new closure instance
void** clo7664 = alloc_clo(lam6125_fptr, 5);

//setting env list
clo7664[1] = a57285971;
clo7664[2] = kont5827;
clo7664[3] = cons;
clo7664[4] = proc;
clo7664[5] = map;
void* f58305972 = encode_clo(clo7664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58305972;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6127 = encode_clo(alloc_clo(lam6127_fptr, 0));

void* lam6129_fptr() // lam6129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6130 = arg_buffer[1];
//reading env and args
void* a57275969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6130))[6];
//not do dummy comment
void* lst = (decode_clo(env6130))[5];
//not do dummy comment
void* map = (decode_clo(env6130))[4];
//not do dummy comment
void* kont5827 = (decode_clo(env6130))[3];
//not do dummy comment
void* proc = (decode_clo(env6130))[2];
//not do dummy comment
void* cons = (decode_clo(env6130))[1];

//creating new closure instance
void** clo7666 = alloc_clo(lam6127_fptr, 6);

//setting env list
clo7666[1] = cons;
clo7666[2] = proc;
clo7666[3] = kont5827;
clo7666[4] = map;
clo7666[5] = lst;
clo7666[6] = cdr;
void* f58315970 = encode_clo(clo7666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f58315970;
arg_buffer[3] = a57275969;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6129 = encode_clo(alloc_clo(lam6129_fptr, 0));

void* lam6131_fptr() // lam6131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6132 = arg_buffer[1];
//reading env and args
void* a57255965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6132))[8];
//not do dummy comment
void* map = (decode_clo(env6132))[7];
//not do dummy comment
void* kont5827 = (decode_clo(env6132))[6];
//not do dummy comment
void* proc = (decode_clo(env6132))[5];
//not do dummy comment
void* car = (decode_clo(env6132))[4];
//not do dummy comment
void* cons = (decode_clo(env6132))[3];
//not do dummy comment
void* list = (decode_clo(env6132))[2];
//not do dummy comment
void* cdr = (decode_clo(env6132))[1];

//if-clause
bool if_guard7667 = is_true(a57255965);
if(if_guard7667)
{

//creating new closure instance
void** clo7669 = alloc_clo(lam6121_fptr, 1);

//setting env list
clo7669[1] = kont5827;
void* f58285966 = encode_clo(clo7669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58285966;
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
void** clo7671 = alloc_clo(lam6129_fptr, 6);

//setting env list
clo7671[1] = cons;
clo7671[2] = proc;
clo7671[3] = kont5827;
clo7671[4] = map;
clo7671[5] = lst;
clo7671[6] = cdr;
void* f58325968 = encode_clo(clo7671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58325968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6131 = encode_clo(alloc_clo(lam6131_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6133 = arg_buffer[1];
//reading env and args
void* kont5827 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7673 = alloc_clo(lam6131_fptr, 8);

//setting env list
clo7673[1] = cdr;
clo7673[2] = list;
clo7673[3] = cons;
clo7673[4] = car;
clo7673[5] = proc;
clo7673[6] = kont5827;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo7673[7] = map;
clo7673[8] = lst;
void* f58335964 = encode_clo(clo7673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58335964;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam6134_fptr() // lam6134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6135 = arg_buffer[1];
//reading env and args
void* x57325979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5834 = (decode_clo(env6135))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5834);
arg_buffer[2] = x57325979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5834))[0]);
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
void* a57375989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57355985 = (decode_clo(env6137))[3];
//not do dummy comment
void* kont5834 = (decode_clo(env6137))[2];
//not do dummy comment
void* cons = (decode_clo(env6137))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5834;
arg_buffer[3] = a57355985;
arg_buffer[4] = a57375989;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a57365987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57355985 = (decode_clo(env6139))[5];
//not do dummy comment
void* op = (decode_clo(env6139))[4];
//not do dummy comment
void* cons = (decode_clo(env6139))[3];
//not do dummy comment
void* kont5834 = (decode_clo(env6139))[2];
//not do dummy comment
void* filter = (decode_clo(env6139))[1];

//creating new closure instance
void** clo7675 = alloc_clo(lam6136_fptr, 3);

//setting env list
clo7675[1] = cons;
clo7675[2] = kont5834;
clo7675[3] = a57355985;
void* f58365988 = encode_clo(clo7675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f58365988;
arg_buffer[3] = op;
arg_buffer[4] = a57365987;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6138 = encode_clo(alloc_clo(lam6138_fptr, 0));

void* lam6140_fptr() // lam6140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6141 = arg_buffer[1];
//reading env and args
void* a57355985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6141))[6];
//not do dummy comment
void* lst = (decode_clo(env6141))[5];
//not do dummy comment
void* op = (decode_clo(env6141))[4];
//not do dummy comment
void* cons = (decode_clo(env6141))[3];
//not do dummy comment
void* kont5834 = (decode_clo(env6141))[2];
//not do dummy comment
void* filter = (decode_clo(env6141))[1];

//creating new closure instance
void** clo7677 = alloc_clo(lam6138_fptr, 5);

//setting env list
clo7677[1] = filter;
clo7677[2] = kont5834;
clo7677[3] = cons;
clo7677[4] = op;
clo7677[5] = a57355985;
void* f58375986 = encode_clo(clo7677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58375986;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a57385991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env6143))[3];
//not do dummy comment
void* kont5834 = (decode_clo(env6143))[2];
//not do dummy comment
void* filter = (decode_clo(env6143))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont5834;
arg_buffer[3] = op;
arg_buffer[4] = a57385991;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6142 = encode_clo(alloc_clo(lam6142_fptr, 0));

void* lam6144_fptr() // lam6144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6145 = arg_buffer[1];
//reading env and args
void* a57345983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6145))[7];
//not do dummy comment
void* lst = (decode_clo(env6145))[6];
//not do dummy comment
void* op = (decode_clo(env6145))[5];
//not do dummy comment
void* cons = (decode_clo(env6145))[4];
//not do dummy comment
void* kont5834 = (decode_clo(env6145))[3];
//not do dummy comment
void* filter = (decode_clo(env6145))[2];
//not do dummy comment
void* car = (decode_clo(env6145))[1];

//if-clause
bool if_guard7678 = is_true(a57345983);
if(if_guard7678)
{

//creating new closure instance
void** clo7680 = alloc_clo(lam6140_fptr, 6);

//setting env list
clo7680[1] = filter;
clo7680[2] = kont5834;
clo7680[3] = cons;
clo7680[4] = op;
clo7680[5] = lst;
clo7680[6] = cdr;
void* f58385984 = encode_clo(clo7680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58385984;
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
void** clo7682 = alloc_clo(lam6142_fptr, 3);

//setting env list
clo7682[1] = filter;
clo7682[2] = kont5834;
clo7682[3] = op;
void* f58395990 = encode_clo(clo7682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58395990;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6144 = encode_clo(alloc_clo(lam6144_fptr, 0));

void* lam6146_fptr() // lam6146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6147 = arg_buffer[1];
//reading env and args
void* a57335981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6147))[7];
//not do dummy comment
void* lst = (decode_clo(env6147))[6];
//not do dummy comment
void* op = (decode_clo(env6147))[5];
//not do dummy comment
void* cons = (decode_clo(env6147))[4];
//not do dummy comment
void* kont5834 = (decode_clo(env6147))[3];
//not do dummy comment
void* filter = (decode_clo(env6147))[2];
//not do dummy comment
void* car = (decode_clo(env6147))[1];

//creating new closure instance
void** clo7684 = alloc_clo(lam6144_fptr, 7);

//setting env list
clo7684[1] = car;
clo7684[2] = filter;
clo7684[3] = kont5834;
clo7684[4] = cons;
clo7684[5] = op;
clo7684[6] = lst;
clo7684[7] = cdr;
void* f58405982 = encode_clo(clo7684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f58405982;
arg_buffer[3] = a57335981;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6146 = encode_clo(alloc_clo(lam6146_fptr, 0));

void* lam6148_fptr() // lam6148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6149 = arg_buffer[1];
//reading env and args
void* a57315977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6149))[8];
//not do dummy comment
void* op = (decode_clo(env6149))[7];
//not do dummy comment
void* cons = (decode_clo(env6149))[6];
//not do dummy comment
void* list = (decode_clo(env6149))[5];
//not do dummy comment
void* cdr = (decode_clo(env6149))[4];
//not do dummy comment
void* kont5834 = (decode_clo(env6149))[3];
//not do dummy comment
void* filter = (decode_clo(env6149))[2];
//not do dummy comment
void* car = (decode_clo(env6149))[1];

//if-clause
bool if_guard7685 = is_true(a57315977);
if(if_guard7685)
{

//creating new closure instance
void** clo7687 = alloc_clo(lam6134_fptr, 1);

//setting env list
clo7687[1] = kont5834;
void* f58355978 = encode_clo(clo7687);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58355978;
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
void** clo7689 = alloc_clo(lam6146_fptr, 7);

//setting env list
clo7689[1] = car;
clo7689[2] = filter;
clo7689[3] = kont5834;
clo7689[4] = cons;
clo7689[5] = op;
clo7689[6] = lst;
clo7689[7] = cdr;
void* f58415980 = encode_clo(clo7689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58415980;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6148 = encode_clo(alloc_clo(lam6148_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6150 = arg_buffer[1];
//reading env and args
void* kont5834 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7691 = alloc_clo(lam6148_fptr, 8);

//setting env list
clo7691[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo7691[2] = filter;
clo7691[3] = kont5834;
clo7691[4] = cdr;
clo7691[5] = list;
clo7691[6] = cons;
clo7691[7] = op;
clo7691[8] = lst;
void* f58425976 = encode_clo(clo7691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58425976;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam6151_fptr() // lam6151 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6152 = arg_buffer[1];
//reading env and args
void* a57435999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6152))[3];
//not do dummy comment
void* kont5843 = (decode_clo(env6152))[2];
//not do dummy comment
void* a57415996 = (decode_clo(env6152))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont5843;
arg_buffer[3] = a57415996;
arg_buffer[4] = a57435999;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6151 = encode_clo(alloc_clo(lam6151_fptr, 0));

void* lam6154_fptr() // lam6154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6155 = arg_buffer[1];
//reading env and args
void* a57415996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6155))[4];
//not do dummy comment
void* kont5843 = (decode_clo(env6155))[3];
//not do dummy comment
void* n = (decode_clo(env6155))[2];
//not do dummy comment
void* _u45 = (decode_clo(env6155))[1];
mpz_t* mpzvar7692 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7692, "1", 10);
void* a57425997 = encode_mpz(mpzvar7692);

//creating new closure instance
void** clo7694 = alloc_clo(lam6151_fptr, 3);

//setting env list
clo7694[1] = a57415996;
clo7694[2] = kont5843;
clo7694[3] = drop;
void* f58445998 = encode_clo(clo7694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58445998;
arg_buffer[3] = n;
arg_buffer[4] = a57425997;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a57405994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6157))[6];
//not do dummy comment
void* kont5843 = (decode_clo(env6157))[5];
//not do dummy comment
void* n = (decode_clo(env6157))[4];
//not do dummy comment
void* _u45 = (decode_clo(env6157))[3];
//not do dummy comment
void* lst = (decode_clo(env6157))[2];
//not do dummy comment
void* drop = (decode_clo(env6157))[1];

//if-clause
bool if_guard7695 = is_true(a57405994);
if(if_guard7695)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5843);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5843))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7697 = alloc_clo(lam6154_fptr, 4);

//setting env list
clo7697[1] = _u45;
clo7697[2] = n;
clo7697[3] = kont5843;
clo7697[4] = drop;
void* f58455995 = encode_clo(clo7697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58455995;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6156 = encode_clo(alloc_clo(lam6156_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6159 = arg_buffer[1];
//reading env and args
void* kont5843 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar7698 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7698, "0", 10);
void* a57395992 = encode_mpz(mpzvar7698);

//creating new closure instance
void** clo7700 = alloc_clo(lam6156_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo7700[1] = drop;
clo7700[2] = lst;
clo7700[3] = _u45;
clo7700[4] = n;
clo7700[5] = kont5843;
clo7700[6] = cdr;
void* f58465993 = encode_clo(clo7700);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58465993;
arg_buffer[3] = n;
arg_buffer[4] = a57395992;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam6160_fptr() // lam6160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6161 = arg_buffer[1];
//reading env and args
void* a57476007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57456003 = (decode_clo(env6161))[3];
//not do dummy comment
void* kont5847 = (decode_clo(env6161))[2];
//not do dummy comment
void* proc = (decode_clo(env6161))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont5847;
arg_buffer[3] = a57456003;
arg_buffer[4] = a57476007;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6160 = encode_clo(alloc_clo(lam6160_fptr, 0));

void* lam6162_fptr() // lam6162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6163 = arg_buffer[1];
//reading env and args
void* a57466005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env6163))[5];
//not do dummy comment
void* a57456003 = (decode_clo(env6163))[4];
//not do dummy comment
void* kont5847 = (decode_clo(env6163))[3];
//not do dummy comment
void* proc = (decode_clo(env6163))[2];
//not do dummy comment
void* acc = (decode_clo(env6163))[1];

//creating new closure instance
void** clo7702 = alloc_clo(lam6160_fptr, 3);

//setting env list
clo7702[1] = proc;
clo7702[2] = kont5847;
clo7702[3] = a57456003;
void* f58486006 = encode_clo(clo7702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f58486006;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a57466005;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6162 = encode_clo(alloc_clo(lam6162_fptr, 0));

void* lam6164_fptr() // lam6164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6165 = arg_buffer[1];
//reading env and args
void* a57456003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6165))[6];
//not do dummy comment
void* kont5847 = (decode_clo(env6165))[5];
//not do dummy comment
void* foldr = (decode_clo(env6165))[4];
//not do dummy comment
void* lst = (decode_clo(env6165))[3];
//not do dummy comment
void* proc = (decode_clo(env6165))[2];
//not do dummy comment
void* acc = (decode_clo(env6165))[1];

//creating new closure instance
void** clo7704 = alloc_clo(lam6162_fptr, 5);

//setting env list
clo7704[1] = acc;
clo7704[2] = proc;
clo7704[3] = kont5847;
clo7704[4] = a57456003;
clo7704[5] = foldr;
void* f58496004 = encode_clo(clo7704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58496004;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6164 = encode_clo(alloc_clo(lam6164_fptr, 0));

void* lam6166_fptr() // lam6166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6167 = arg_buffer[1];
//reading env and args
void* a57446001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6167))[7];
//not do dummy comment
void* kont5847 = (decode_clo(env6167))[6];
//not do dummy comment
void* car = (decode_clo(env6167))[5];
//not do dummy comment
void* foldr = (decode_clo(env6167))[4];
//not do dummy comment
void* lst = (decode_clo(env6167))[3];
//not do dummy comment
void* proc = (decode_clo(env6167))[2];
//not do dummy comment
void* acc = (decode_clo(env6167))[1];

//if-clause
bool if_guard7705 = is_true(a57446001);
if(if_guard7705)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5847);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7707 = alloc_clo(lam6164_fptr, 6);

//setting env list
clo7707[1] = acc;
clo7707[2] = proc;
clo7707[3] = lst;
clo7707[4] = foldr;
clo7707[5] = kont5847;
clo7707[6] = cdr;
void* f58506002 = encode_clo(clo7707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58506002;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6166 = encode_clo(alloc_clo(lam6166_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6168 = arg_buffer[1];
//reading env and args
void* kont5847 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7709 = alloc_clo(lam6166_fptr, 7);

//setting env list
clo7709[1] = acc;
clo7709[2] = proc;
clo7709[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo7709[4] = foldr;
clo7709[5] = car;
clo7709[6] = kont5847;
clo7709[7] = cdr;
void* f58516000 = encode_clo(clo7709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58516000;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam6169_fptr() // lam6169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6170 = arg_buffer[1];
//reading env and args
void* a57516015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5852 = (decode_clo(env6170))[3];
//not do dummy comment
void* cons = (decode_clo(env6170))[2];
//not do dummy comment
void* a57496011 = (decode_clo(env6170))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5852;
arg_buffer[3] = a57496011;
arg_buffer[4] = a57516015;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6169 = encode_clo(alloc_clo(lam6169_fptr, 0));

void* lam6171_fptr() // lam6171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6172 = arg_buffer[1];
//reading env and args
void* a57506013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env6172))[5];
//not do dummy comment
void* lst2 = (decode_clo(env6172))[4];
//not do dummy comment
void* kont5852 = (decode_clo(env6172))[3];
//not do dummy comment
void* cons = (decode_clo(env6172))[2];
//not do dummy comment
void* a57496011 = (decode_clo(env6172))[1];

//creating new closure instance
void** clo7711 = alloc_clo(lam6169_fptr, 3);

//setting env list
clo7711[1] = a57496011;
clo7711[2] = cons;
clo7711[3] = kont5852;
void* f58536014 = encode_clo(clo7711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f58536014;
arg_buffer[3] = a57506013;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6171 = encode_clo(alloc_clo(lam6171_fptr, 0));

void* lam6173_fptr() // lam6173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6174 = arg_buffer[1];
//reading env and args
void* a57496011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6174))[6];
//not do dummy comment
void* append = (decode_clo(env6174))[5];
//not do dummy comment
void* lst2 = (decode_clo(env6174))[4];
//not do dummy comment
void* lst1 = (decode_clo(env6174))[3];
//not do dummy comment
void* cons = (decode_clo(env6174))[2];
//not do dummy comment
void* kont5852 = (decode_clo(env6174))[1];

//creating new closure instance
void** clo7713 = alloc_clo(lam6171_fptr, 5);

//setting env list
clo7713[1] = a57496011;
clo7713[2] = cons;
clo7713[3] = kont5852;
clo7713[4] = lst2;
clo7713[5] = append;
void* f58546012 = encode_clo(clo7713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58546012;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6173 = encode_clo(alloc_clo(lam6173_fptr, 0));

void* lam6175_fptr() // lam6175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6176 = arg_buffer[1];
//reading env and args
void* a57486009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6176))[7];
//not do dummy comment
void* append = (decode_clo(env6176))[6];
//not do dummy comment
void* lst2 = (decode_clo(env6176))[5];
//not do dummy comment
void* cons = (decode_clo(env6176))[4];
//not do dummy comment
void* kont5852 = (decode_clo(env6176))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6176))[2];
//not do dummy comment
void* car = (decode_clo(env6176))[1];

//if-clause
bool if_guard7714 = is_true(a57486009);
if(if_guard7714)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5852);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5852))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7716 = alloc_clo(lam6173_fptr, 6);

//setting env list
clo7716[1] = kont5852;
clo7716[2] = cons;
clo7716[3] = lst1;
clo7716[4] = lst2;
clo7716[5] = append;
clo7716[6] = cdr;
void* f58556010 = encode_clo(clo7716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58556010;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6175 = encode_clo(alloc_clo(lam6175_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6177 = arg_buffer[1];
//reading env and args
void* kont5852 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7718 = alloc_clo(lam6175_fptr, 7);

//setting env list
clo7718[1] = car;
clo7718[2] = lst1;
clo7718[3] = kont5852;
clo7718[4] = cons;
clo7718[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo7718[6] = append;
clo7718[7] = cdr;
void* f58566008 = encode_clo(clo7718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58566008;
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
void* _6178 = arg_buffer[1];
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

void* kont58576016 = prim_car(lst);
void* lst6017 = prim_cdr(lst);
void* x57526018 = apply_prim_hash(lst6017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58576016);
arg_buffer[2] = x57526018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58576016))[0]);
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
void* _6179 = arg_buffer[1];
//reading env and args
void* kont5859 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x57536019 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5859);
arg_buffer[2] = x57536019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5859))[0]);
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
void* _6180 = arg_buffer[1];
//reading env and args
void* kont5860 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x57546020 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5860);
arg_buffer[2] = x57546020;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5860))[0]);
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
void* _6181 = arg_buffer[1];
//reading env and args
void* kont5861 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x57556021 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5861);
arg_buffer[2] = x57556021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5861))[0]);
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
void* _6182 = arg_buffer[1];
//reading env and args
void* kont5862 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x57566022 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5862);
arg_buffer[2] = x57566022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5862))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam6185_fptr() // lam6185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6186 = arg_buffer[1];
//reading env and args
void* a57616029 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6186))[2];
//not do dummy comment
void* kont5863 = (decode_clo(env6186))[1];

//if-clause
bool if_guard7719 = is_true(a57616029);
if(if_guard7719)
{
mpz_t* mpzvar7720 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7720, "2", 10);
void* a57626030 = encode_mpz(mpzvar7720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont5863;
arg_buffer[3] = a57626030;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x57636031 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5863);
arg_buffer[2] = x57636031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6185 = encode_clo(alloc_clo(lam6185_fptr, 0));

void* lam6189_fptr() // lam6189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6190 = arg_buffer[1];
//reading env and args
void* a57596026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6190))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env6190))[2];
//not do dummy comment
void* kont5863 = (decode_clo(env6190))[1];

//if-clause
bool if_guard7721 = is_true(a57596026);
if(if_guard7721)
{
mpz_t* mpzvar7722 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7722, "2", 10);
void* a57606027 = encode_mpz(mpzvar7722);

//creating new closure instance
void** clo7724 = alloc_clo(lam6185_fptr, 2);

//setting env list
clo7724[1] = kont5863;
clo7724[2] = odd_u63;
void* f58646028 = encode_clo(clo7724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f58646028;
arg_buffer[3] = a57606027;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x57646032 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5863);
arg_buffer[2] = x57646032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6189 = encode_clo(alloc_clo(lam6189_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6193 = arg_buffer[1];
//reading env and args
void* kont5863 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar7725 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7725, "1", 10);
void* a57576023 = encode_mpz(mpzvar7725);
mpz_t* mpzvar7726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7726, "1", 10);
void* a57586024 = encode_mpz(mpzvar7726);

//creating new closure instance
void** clo7728 = alloc_clo(lam6189_fptr, 3);

//setting env list
clo7728[1] = kont5863;
clo7728[2] = even_u63;
clo7728[3] = odd_u63;
void* f58656025 = encode_clo(clo7728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f58656025;
arg_buffer[3] = a57576023;
arg_buffer[4] = a57586024;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam6194_fptr() // lam6194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6195 = arg_buffer[1];
//reading env and args
void* x57656034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5866 = (decode_clo(env6195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5866);
arg_buffer[2] = x57656034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5866))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6194 = encode_clo(alloc_clo(lam6194_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6196 = arg_buffer[1];
//reading env and args
void* kont5866 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo7730 = alloc_clo(lam6194_fptr, 1);

//setting env list
clo7730[1] = kont5866;
void* f58676033 = encode_clo(clo7730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f58676033;
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

