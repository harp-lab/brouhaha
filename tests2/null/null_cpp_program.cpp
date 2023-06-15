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
void* _51224 = arg_buffer[1];
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

void* kont5096651066 = prim_car(lst);
void* lst51067 = prim_cdr(lst);
void* x5088151068 = apply_prim__u43(lst51067);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5096651066);
arg_buffer[2] = x5088151068;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5096651066))[0]);
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
void* _51225 = arg_buffer[1];
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

void* kont5096851069 = prim_car(lst);
void* lst51070 = prim_cdr(lst);
void* x5088251071 = apply_prim__u45(lst51070);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5096851069);
arg_buffer[2] = x5088251071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5096851069))[0]);
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
void* _51226 = arg_buffer[1];
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

void* kont5097051072 = prim_car(lst);
void* lst51073 = prim_cdr(lst);
void* x5088351074 = apply_prim__u42(lst51073);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5097051072);
arg_buffer[2] = x5088351074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5097051072))[0]);
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
void* _51227 = arg_buffer[1];
//reading env and args
void* kont50972 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5088451075 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50972);
arg_buffer[2] = x5088451075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50972))[0]);
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
void* _51228 = arg_buffer[1];
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

void* kont5097351076 = prim_car(lst);
void* lst51077 = prim_cdr(lst);
void* x5088551078 = apply_prim__u47(lst51077);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5097351076);
arg_buffer[2] = x5088551078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5097351076))[0]);
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
void* _51229 = arg_buffer[1];
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

void* kont5097551079 = prim_car(lst);
void* lst51080 = prim_cdr(lst);
void* x5088651081 = apply_prim__u61(lst51080);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5097551079);
arg_buffer[2] = x5088651081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5097551079))[0]);
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
void* _51230 = arg_buffer[1];
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

void* kont5097751082 = prim_car(lst);
void* lst51083 = prim_cdr(lst);
void* x5088751084 = apply_prim__u62(lst51083);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5097751082);
arg_buffer[2] = x5088751084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5097751082))[0]);
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
void* _51231 = arg_buffer[1];
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

void* kont5097951085 = prim_car(lst);
void* lst51086 = prim_cdr(lst);
void* x5088851087 = apply_prim__u60(lst51086);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5097951085);
arg_buffer[2] = x5088851087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5097951085))[0]);
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
void* _51232 = arg_buffer[1];
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

void* kont5098151088 = prim_car(lst);
void* lst51089 = prim_cdr(lst);
void* x5088951090 = apply_prim__u60_u61(lst51089);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5098151088);
arg_buffer[2] = x5088951090;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5098151088))[0]);
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
void* _51233 = arg_buffer[1];
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

void* kont5098351091 = prim_car(lst);
void* lst51092 = prim_cdr(lst);
void* x5089051093 = apply_prim__u62_u61(lst51092);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5098351091);
arg_buffer[2] = x5089051093;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5098351091))[0]);
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
void* _51234 = arg_buffer[1];
//reading env and args
void* kont50985 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5089151094 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50985);
arg_buffer[2] = x5089151094;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50985))[0]);
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
void* _51235 = arg_buffer[1];
//reading env and args
void* kont50986 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5089251095 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50986);
arg_buffer[2] = x5089251095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50986))[0]);
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
void* _51236 = arg_buffer[1];
//reading env and args
void* kont50987 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5089351096 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50987);
arg_buffer[2] = x5089351096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50987))[0]);
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
void* _51237 = arg_buffer[1];
//reading env and args
void* kont50988 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5089451097 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50988);
arg_buffer[2] = x5089451097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50988))[0]);
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
void* _51238 = arg_buffer[1];
//reading env and args
void* kont50989 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5089551098 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50989);
arg_buffer[2] = x5089551098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50989))[0]);
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
void* _51239 = arg_buffer[1];
//reading env and args
void* kont50990 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5089651099 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50990);
arg_buffer[2] = x5089651099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50990))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam51240_fptr() // lam51240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51241 = arg_buffer[1];
//reading env and args
void* a5089951103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env51241))[3];
//not do dummy comment
void* a5089751100 = (decode_clo(env51241))[2];
//not do dummy comment
void* kont50991 = (decode_clo(env51241))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50991;
arg_buffer[3] = a5089751100;
arg_buffer[4] = a5089951103;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51240 = encode_clo(alloc_clo(lam51240_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51244 = arg_buffer[1];
//reading env and args
void* kont50991 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar51677 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51677, "0", 10);
void* a5089751100 = encode_mpz(mpzvar51677);
mpz_t* mpzvar51678 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51678, "2", 10);
void* a5089851101 = encode_mpz(mpzvar51678);

//creating new closure instance
void** clo51680 = alloc_clo(lam51240_fptr, 3);

//setting env list
clo51680[1] = kont50991;
clo51680[2] = a5089751100;
clo51680[3] = equal_u63;
void* f5099251102 = encode_clo(clo51680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5099251102;
arg_buffer[3] = x;
arg_buffer[4] = a5089851101;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam51245_fptr() // lam51245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51246 = arg_buffer[1];
//reading env and args
void* a5090251107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50993 = (decode_clo(env51246))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env51246))[2];
//not do dummy comment
void* a5090051104 = (decode_clo(env51246))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50993;
arg_buffer[3] = a5090051104;
arg_buffer[4] = a5090251107;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51245 = encode_clo(alloc_clo(lam51245_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51249 = arg_buffer[1];
//reading env and args
void* kont50993 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar51681 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51681, "1", 10);
void* a5090051104 = encode_mpz(mpzvar51681);
mpz_t* mpzvar51682 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51682, "2", 10);
void* a5090151105 = encode_mpz(mpzvar51682);

//creating new closure instance
void** clo51684 = alloc_clo(lam51245_fptr, 3);

//setting env list
clo51684[1] = a5090051104;
clo51684[2] = equal_u63;
clo51684[3] = kont50993;
void* f5099451106 = encode_clo(clo51684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5099451106;
arg_buffer[3] = x;
arg_buffer[4] = a5090151105;
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
void* _51250 = arg_buffer[1];
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

void* kont5099551108 = prim_car(x);
void* x51109 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5099551108);
arg_buffer[2] = x51109;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5099551108))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam51253_fptr() // lam51253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51254 = arg_buffer[1];
//reading env and args
void* a5090851119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50997 = (decode_clo(env51254))[3];
//not do dummy comment
void* x = (decode_clo(env51254))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env51254))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont50997;
arg_buffer[3] = x;
arg_buffer[4] = a5090851119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51253 = encode_clo(alloc_clo(lam51253_fptr, 0));

void* lam51255_fptr() // lam51255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51256 = arg_buffer[1];
//reading env and args
void* a5090651116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51256))[5];
//not do dummy comment
void* x = (decode_clo(env51256))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env51256))[3];
//not do dummy comment
void* lst = (decode_clo(env51256))[2];
//not do dummy comment
void* kont50997 = (decode_clo(env51256))[1];

//if-clause
bool if_guard51685 = is_true(a5090651116);
if(if_guard51685)
{
void* x5090751117 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50997);
arg_buffer[2] = x5090751117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50997))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51687 = alloc_clo(lam51253_fptr, 3);

//setting env list
clo51687[1] = member_u63;
clo51687[2] = x;
clo51687[3] = kont50997;
void* f5099851118 = encode_clo(clo51687);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5099851118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51255 = encode_clo(alloc_clo(lam51255_fptr, 0));

void* lam51257_fptr() // lam51257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51258 = arg_buffer[1];
//reading env and args
void* a5090551114 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51258))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env51258))[5];
//not do dummy comment
void* x = (decode_clo(env51258))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env51258))[3];
//not do dummy comment
void* lst = (decode_clo(env51258))[2];
//not do dummy comment
void* kont50997 = (decode_clo(env51258))[1];

//creating new closure instance
void** clo51689 = alloc_clo(lam51255_fptr, 5);

//setting env list
clo51689[1] = kont50997;
clo51689[2] = lst;
clo51689[3] = member_u63;
clo51689[4] = x;
clo51689[5] = cdr;
void* f5099951115 = encode_clo(clo51689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5099951115;
arg_buffer[3] = a5090551114;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51257 = encode_clo(alloc_clo(lam51257_fptr, 0));

void* lam51259_fptr() // lam51259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51260 = arg_buffer[1];
//reading env and args
void* a5090351111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51260))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env51260))[6];
//not do dummy comment
void* x = (decode_clo(env51260))[5];
//not do dummy comment
void* car = (decode_clo(env51260))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env51260))[3];
//not do dummy comment
void* lst = (decode_clo(env51260))[2];
//not do dummy comment
void* kont50997 = (decode_clo(env51260))[1];

//if-clause
bool if_guard51690 = is_true(a5090351111);
if(if_guard51690)
{
void* x5090451112 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50997);
arg_buffer[2] = x5090451112;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50997))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51692 = alloc_clo(lam51257_fptr, 6);

//setting env list
clo51692[1] = kont50997;
clo51692[2] = lst;
clo51692[3] = member_u63;
clo51692[4] = x;
clo51692[5] = equal_u63;
clo51692[6] = cdr;
void* f5100051113 = encode_clo(clo51692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5100051113;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51259 = encode_clo(alloc_clo(lam51259_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51261 = arg_buffer[1];
//reading env and args
void* kont50997 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51694 = alloc_clo(lam51259_fptr, 7);

//setting env list
clo51694[1] = kont50997;
clo51694[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo51694[3] = member_u63;
clo51694[4] = car;
clo51694[5] = x;
clo51694[6] = equal_u63;
clo51694[7] = cdr;
void* f5100151110 = encode_clo(clo51694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5100151110;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam51262_fptr() // lam51262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51263 = arg_buffer[1];
//reading env and args
void* a5091251127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5091151125 = (decode_clo(env51263))[4];
//not do dummy comment
void* kont51002 = (decode_clo(env51263))[3];
//not do dummy comment
void* fun = (decode_clo(env51263))[2];
//not do dummy comment
void* foldl = (decode_clo(env51263))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont51002;
arg_buffer[3] = fun;
arg_buffer[4] = a5091151125;
arg_buffer[5] = a5091251127;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51262 = encode_clo(alloc_clo(lam51262_fptr, 0));

void* lam51264_fptr() // lam51264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51265 = arg_buffer[1];
//reading env and args
void* a5091151125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51265))[5];
//not do dummy comment
void* lst = (decode_clo(env51265))[4];
//not do dummy comment
void* kont51002 = (decode_clo(env51265))[3];
//not do dummy comment
void* fun = (decode_clo(env51265))[2];
//not do dummy comment
void* foldl = (decode_clo(env51265))[1];

//creating new closure instance
void** clo51696 = alloc_clo(lam51262_fptr, 4);

//setting env list
clo51696[1] = foldl;
clo51696[2] = fun;
clo51696[3] = kont51002;
clo51696[4] = a5091151125;
void* f5100351126 = encode_clo(clo51696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5100351126;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51264 = encode_clo(alloc_clo(lam51264_fptr, 0));

void* lam51266_fptr() // lam51266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51267 = arg_buffer[1];
//reading env and args
void* a5091051123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51267))[6];
//not do dummy comment
void* lst = (decode_clo(env51267))[5];
//not do dummy comment
void* kont51002 = (decode_clo(env51267))[4];
//not do dummy comment
void* fun = (decode_clo(env51267))[3];
//not do dummy comment
void* acc = (decode_clo(env51267))[2];
//not do dummy comment
void* foldl = (decode_clo(env51267))[1];

//creating new closure instance
void** clo51698 = alloc_clo(lam51264_fptr, 5);

//setting env list
clo51698[1] = foldl;
clo51698[2] = fun;
clo51698[3] = kont51002;
clo51698[4] = lst;
clo51698[5] = cdr;
void* f5100451124 = encode_clo(clo51698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5100451124;
arg_buffer[3] = a5091051123;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51266 = encode_clo(alloc_clo(lam51266_fptr, 0));

void* lam51268_fptr() // lam51268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51269 = arg_buffer[1];
//reading env and args
void* a5090951121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51269))[7];
//not do dummy comment
void* lst = (decode_clo(env51269))[6];
//not do dummy comment
void* kont51002 = (decode_clo(env51269))[5];
//not do dummy comment
void* fun = (decode_clo(env51269))[4];
//not do dummy comment
void* acc = (decode_clo(env51269))[3];
//not do dummy comment
void* car = (decode_clo(env51269))[2];
//not do dummy comment
void* foldl = (decode_clo(env51269))[1];

//if-clause
bool if_guard51699 = is_true(a5090951121);
if(if_guard51699)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51002);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51002))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51701 = alloc_clo(lam51266_fptr, 6);

//setting env list
clo51701[1] = foldl;
clo51701[2] = acc;
clo51701[3] = fun;
clo51701[4] = kont51002;
clo51701[5] = lst;
clo51701[6] = cdr;
void* f5100551122 = encode_clo(clo51701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5100551122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51268 = encode_clo(alloc_clo(lam51268_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51270 = arg_buffer[1];
//reading env and args
void* kont51002 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo51703 = alloc_clo(lam51268_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo51703[1] = foldl;
clo51703[2] = car;
clo51703[3] = acc;
clo51703[4] = fun;
clo51703[5] = kont51002;
clo51703[6] = lst;
clo51703[7] = cdr;
void* f5100651120 = encode_clo(clo51703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5100651120;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam51271_fptr() // lam51271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51272 = arg_buffer[1];
//reading env and args
void* a5091651135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51272))[3];
//not do dummy comment
void* a5091451131 = (decode_clo(env51272))[2];
//not do dummy comment
void* kont51007 = (decode_clo(env51272))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51007;
arg_buffer[3] = a5091451131;
arg_buffer[4] = a5091651135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51271 = encode_clo(alloc_clo(lam51271_fptr, 0));

void* lam51273_fptr() // lam51273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51274 = arg_buffer[1];
//reading env and args
void* a5091551133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51274))[5];
//not do dummy comment
void* a5091451131 = (decode_clo(env51274))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51274))[3];
//not do dummy comment
void* cons = (decode_clo(env51274))[2];
//not do dummy comment
void* kont51007 = (decode_clo(env51274))[1];

//creating new closure instance
void** clo51705 = alloc_clo(lam51271_fptr, 3);

//setting env list
clo51705[1] = kont51007;
clo51705[2] = a5091451131;
clo51705[3] = reverse_u45helper;
void* f5100851134 = encode_clo(clo51705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5100851134;
arg_buffer[3] = a5091551133;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51273 = encode_clo(alloc_clo(lam51273_fptr, 0));

void* lam51275_fptr() // lam51275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51276 = arg_buffer[1];
//reading env and args
void* a5091451131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51276))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51276))[5];
//not do dummy comment
void* lst2 = (decode_clo(env51276))[4];
//not do dummy comment
void* car = (decode_clo(env51276))[3];
//not do dummy comment
void* cons = (decode_clo(env51276))[2];
//not do dummy comment
void* kont51007 = (decode_clo(env51276))[1];

//creating new closure instance
void** clo51707 = alloc_clo(lam51273_fptr, 5);

//setting env list
clo51707[1] = kont51007;
clo51707[2] = cons;
clo51707[3] = lst2;
clo51707[4] = a5091451131;
clo51707[5] = reverse_u45helper;
void* f5100951132 = encode_clo(clo51707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5100951132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51275 = encode_clo(alloc_clo(lam51275_fptr, 0));

void* lam51277_fptr() // lam51277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51278 = arg_buffer[1];
//reading env and args
void* a5091351129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51278))[7];
//not do dummy comment
void* lst = (decode_clo(env51278))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51278))[5];
//not do dummy comment
void* lst2 = (decode_clo(env51278))[4];
//not do dummy comment
void* car = (decode_clo(env51278))[3];
//not do dummy comment
void* cons = (decode_clo(env51278))[2];
//not do dummy comment
void* kont51007 = (decode_clo(env51278))[1];

//if-clause
bool if_guard51708 = is_true(a5091351129);
if(if_guard51708)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51007);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51007))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51710 = alloc_clo(lam51275_fptr, 6);

//setting env list
clo51710[1] = kont51007;
clo51710[2] = cons;
clo51710[3] = car;
clo51710[4] = lst2;
clo51710[5] = reverse_u45helper;
clo51710[6] = lst;
void* f5101051130 = encode_clo(clo51710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5101051130;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51277 = encode_clo(alloc_clo(lam51277_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51279 = arg_buffer[1];
//reading env and args
void* kont51007 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51712 = alloc_clo(lam51277_fptr, 7);

//setting env list
clo51712[1] = kont51007;
clo51712[2] = cons;
clo51712[3] = car;
clo51712[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo51712[5] = reverse_u45helper;
clo51712[6] = lst;
clo51712[7] = cdr;
void* f5101151128 = encode_clo(clo51712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5101151128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam51280_fptr() // lam51280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51281 = arg_buffer[1];
//reading env and args
void* a5091751137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51012 = (decode_clo(env51281))[3];
//not do dummy comment
void* lst = (decode_clo(env51281))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51281))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51012;
arg_buffer[3] = lst;
arg_buffer[4] = a5091751137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51280 = encode_clo(alloc_clo(lam51280_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51282 = arg_buffer[1];
//reading env and args
void* kont51012 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo51714 = alloc_clo(lam51280_fptr, 3);

//setting env list
clo51714[1] = reverse_u45helper;
clo51714[2] = lst;
clo51714[3] = kont51012;
void* f5101351136 = encode_clo(clo51714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5101351136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam51283_fptr() // lam51283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51284 = arg_buffer[1];
//reading env and args
void* x5092051142 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51014 = (decode_clo(env51284))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51014);
arg_buffer[2] = x5092051142;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51014))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51283 = encode_clo(alloc_clo(lam51283_fptr, 0));

void* lam51285_fptr() // lam51285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51286 = arg_buffer[1];
//reading env and args
void* a5092551151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51014 = (decode_clo(env51286))[4];
//not do dummy comment
void* a5092151144 = (decode_clo(env51286))[3];
//not do dummy comment
void* a5092351147 = (decode_clo(env51286))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env51286))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51014;
arg_buffer[3] = a5092151144;
arg_buffer[4] = a5092351147;
arg_buffer[5] = a5092551151;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51285 = encode_clo(alloc_clo(lam51285_fptr, 0));

void* lam51287_fptr() // lam51287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51288 = arg_buffer[1];
//reading env and args
void* a5092451149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51014 = (decode_clo(env51288))[6];
//not do dummy comment
void* a5092151144 = (decode_clo(env51288))[5];
//not do dummy comment
void* a5092351147 = (decode_clo(env51288))[4];
//not do dummy comment
void* cons = (decode_clo(env51288))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51288))[2];
//not do dummy comment
void* lst2 = (decode_clo(env51288))[1];

//creating new closure instance
void** clo51716 = alloc_clo(lam51285_fptr, 4);

//setting env list
clo51716[1] = take_u45helper;
clo51716[2] = a5092351147;
clo51716[3] = a5092151144;
clo51716[4] = kont51014;
void* f5101651150 = encode_clo(clo51716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5101651150;
arg_buffer[3] = a5092451149;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51287 = encode_clo(alloc_clo(lam51287_fptr, 0));

void* lam51289_fptr() // lam51289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51290 = arg_buffer[1];
//reading env and args
void* a5092351147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51290))[7];
//not do dummy comment
void* kont51014 = (decode_clo(env51290))[6];
//not do dummy comment
void* a5092151144 = (decode_clo(env51290))[5];
//not do dummy comment
void* car = (decode_clo(env51290))[4];
//not do dummy comment
void* cons = (decode_clo(env51290))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51290))[2];
//not do dummy comment
void* lst2 = (decode_clo(env51290))[1];

//creating new closure instance
void** clo51718 = alloc_clo(lam51287_fptr, 6);

//setting env list
clo51718[1] = lst2;
clo51718[2] = take_u45helper;
clo51718[3] = cons;
clo51718[4] = a5092351147;
clo51718[5] = a5092151144;
clo51718[6] = kont51014;
void* f5101751148 = encode_clo(clo51718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5101751148;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51289 = encode_clo(alloc_clo(lam51289_fptr, 0));

void* lam51292_fptr() // lam51292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51293 = arg_buffer[1];
//reading env and args
void* a5092151144 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51293))[8];
//not do dummy comment
void* kont51014 = (decode_clo(env51293))[7];
//not do dummy comment
void* cons = (decode_clo(env51293))[6];
//not do dummy comment
void* _u45 = (decode_clo(env51293))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env51293))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51293))[3];
//not do dummy comment
void* n = (decode_clo(env51293))[2];
//not do dummy comment
void* car = (decode_clo(env51293))[1];
mpz_t* mpzvar51719 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51719, "1", 10);
void* a5092251145 = encode_mpz(mpzvar51719);

//creating new closure instance
void** clo51721 = alloc_clo(lam51289_fptr, 7);

//setting env list
clo51721[1] = lst2;
clo51721[2] = take_u45helper;
clo51721[3] = cons;
clo51721[4] = car;
clo51721[5] = a5092151144;
clo51721[6] = kont51014;
clo51721[7] = lst;
void* f5101851146 = encode_clo(clo51721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5101851146;
arg_buffer[3] = n;
arg_buffer[4] = a5092251145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51292 = encode_clo(alloc_clo(lam51292_fptr, 0));

void* lam51294_fptr() // lam51294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51295 = arg_buffer[1];
//reading env and args
void* a5091951140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51295))[10];
//not do dummy comment
void* lst = (decode_clo(env51295))[9];
//not do dummy comment
void* kont51014 = (decode_clo(env51295))[8];
//not do dummy comment
void* reverse = (decode_clo(env51295))[7];
//not do dummy comment
void* cons = (decode_clo(env51295))[6];
//not do dummy comment
void* _u45 = (decode_clo(env51295))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env51295))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51295))[3];
//not do dummy comment
void* n = (decode_clo(env51295))[2];
//not do dummy comment
void* car = (decode_clo(env51295))[1];

//if-clause
bool if_guard51722 = is_true(a5091951140);
if(if_guard51722)
{

//creating new closure instance
void** clo51724 = alloc_clo(lam51283_fptr, 1);

//setting env list
clo51724[1] = kont51014;
void* f5101551141 = encode_clo(clo51724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5101551141;
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
void** clo51726 = alloc_clo(lam51292_fptr, 8);

//setting env list
clo51726[1] = car;
clo51726[2] = n;
clo51726[3] = lst2;
clo51726[4] = take_u45helper;
clo51726[5] = _u45;
clo51726[6] = cons;
clo51726[7] = kont51014;
clo51726[8] = lst;
void* f5101951143 = encode_clo(clo51726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5101951143;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51294 = encode_clo(alloc_clo(lam51294_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51297 = arg_buffer[1];
//reading env and args
void* kont51014 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar51727 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51727, "0", 10);
void* a5091851138 = encode_mpz(mpzvar51727);

//creating new closure instance
void** clo51729 = alloc_clo(lam51294_fptr, 10);

//setting env list
clo51729[1] = car;
clo51729[2] = n;
clo51729[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo51729[4] = take_u45helper;
clo51729[5] = _u45;
clo51729[6] = cons;
clo51729[7] = reverse;
clo51729[8] = kont51014;
clo51729[9] = lst;
clo51729[10] = cdr;
void* f5102051139 = encode_clo(clo51729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5102051139;
arg_buffer[3] = n;
arg_buffer[4] = a5091851138;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam51298_fptr() // lam51298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51299 = arg_buffer[1];
//reading env and args
void* a5092651153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51299))[4];
//not do dummy comment
void* n = (decode_clo(env51299))[3];
//not do dummy comment
void* kont51021 = (decode_clo(env51299))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env51299))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51021;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5092651153;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51298 = encode_clo(alloc_clo(lam51298_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51300 = arg_buffer[1];
//reading env and args
void* kont51021 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51731 = alloc_clo(lam51298_fptr, 4);

//setting env list
clo51731[1] = take_u45helper;
clo51731[2] = kont51021;
clo51731[3] = n;
clo51731[4] = lst;
void* f5102251152 = encode_clo(clo51731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5102251152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam51302_fptr() // lam51302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51303 = arg_buffer[1];
//reading env and args
void* a5093151161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5092951157 = (decode_clo(env51303))[3];
//not do dummy comment
void* _u43 = (decode_clo(env51303))[2];
//not do dummy comment
void* kont51023 = (decode_clo(env51303))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont51023;
arg_buffer[3] = a5092951157;
arg_buffer[4] = a5093151161;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51302 = encode_clo(alloc_clo(lam51302_fptr, 0));

void* lam51304_fptr() // lam51304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51305 = arg_buffer[1];
//reading env and args
void* a5093051159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5092951157 = (decode_clo(env51305))[4];
//not do dummy comment
void* length = (decode_clo(env51305))[3];
//not do dummy comment
void* _u43 = (decode_clo(env51305))[2];
//not do dummy comment
void* kont51023 = (decode_clo(env51305))[1];

//creating new closure instance
void** clo51733 = alloc_clo(lam51302_fptr, 3);

//setting env list
clo51733[1] = kont51023;
clo51733[2] = _u43;
clo51733[3] = a5092951157;
void* f5102451160 = encode_clo(clo51733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5102451160;
arg_buffer[3] = a5093051159;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51304 = encode_clo(alloc_clo(lam51304_fptr, 0));

void* lam51307_fptr() // lam51307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51308 = arg_buffer[1];
//reading env and args
void* a5092751155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51308))[5];
//not do dummy comment
void* lst = (decode_clo(env51308))[4];
//not do dummy comment
void* length = (decode_clo(env51308))[3];
//not do dummy comment
void* _u43 = (decode_clo(env51308))[2];
//not do dummy comment
void* kont51023 = (decode_clo(env51308))[1];

//if-clause
bool if_guard51734 = is_true(a5092751155);
if(if_guard51734)
{
mpz_t* mpzvar51735 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51735, "0", 10);
void* x5092851156 = encode_mpz(mpzvar51735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51023);
arg_buffer[2] = x5092851156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51023))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar51736 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51736, "1", 10);
void* a5092951157 = encode_mpz(mpzvar51736);

//creating new closure instance
void** clo51738 = alloc_clo(lam51304_fptr, 4);

//setting env list
clo51738[1] = kont51023;
clo51738[2] = _u43;
clo51738[3] = length;
clo51738[4] = a5092951157;
void* f5102551158 = encode_clo(clo51738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5102551158;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51307 = encode_clo(alloc_clo(lam51307_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51309 = arg_buffer[1];
//reading env and args
void* kont51023 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo51740 = alloc_clo(lam51307_fptr, 5);

//setting env list
clo51740[1] = kont51023;
clo51740[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo51740[3] = length;
clo51740[4] = lst;
clo51740[5] = cdr;
void* f5102651154 = encode_clo(clo51740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5102651154;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam51310_fptr() // lam51310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51311 = arg_buffer[1];
//reading env and args
void* x5093351165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51027 = (decode_clo(env51311))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51027);
arg_buffer[2] = x5093351165;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51027))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51310 = encode_clo(alloc_clo(lam51310_fptr, 0));

void* lam51312_fptr() // lam51312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51313 = arg_buffer[1];
//reading env and args
void* a5093751173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5093551169 = (decode_clo(env51313))[3];
//not do dummy comment
void* kont51027 = (decode_clo(env51313))[2];
//not do dummy comment
void* cons = (decode_clo(env51313))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51027;
arg_buffer[3] = a5093551169;
arg_buffer[4] = a5093751173;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51312 = encode_clo(alloc_clo(lam51312_fptr, 0));

void* lam51314_fptr() // lam51314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51315 = arg_buffer[1];
//reading env and args
void* a5093651171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5093551169 = (decode_clo(env51315))[5];
//not do dummy comment
void* kont51027 = (decode_clo(env51315))[4];
//not do dummy comment
void* map = (decode_clo(env51315))[3];
//not do dummy comment
void* proc = (decode_clo(env51315))[2];
//not do dummy comment
void* cons = (decode_clo(env51315))[1];

//creating new closure instance
void** clo51742 = alloc_clo(lam51312_fptr, 3);

//setting env list
clo51742[1] = cons;
clo51742[2] = kont51027;
clo51742[3] = a5093551169;
void* f5102951172 = encode_clo(clo51742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5102951172;
arg_buffer[3] = proc;
arg_buffer[4] = a5093651171;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51314 = encode_clo(alloc_clo(lam51314_fptr, 0));

void* lam51316_fptr() // lam51316 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51317 = arg_buffer[1];
//reading env and args
void* a5093551169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51317))[6];
//not do dummy comment
void* kont51027 = (decode_clo(env51317))[5];
//not do dummy comment
void* lst = (decode_clo(env51317))[4];
//not do dummy comment
void* map = (decode_clo(env51317))[3];
//not do dummy comment
void* proc = (decode_clo(env51317))[2];
//not do dummy comment
void* cons = (decode_clo(env51317))[1];

//creating new closure instance
void** clo51744 = alloc_clo(lam51314_fptr, 5);

//setting env list
clo51744[1] = cons;
clo51744[2] = proc;
clo51744[3] = map;
clo51744[4] = kont51027;
clo51744[5] = a5093551169;
void* f5103051170 = encode_clo(clo51744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5103051170;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51316 = encode_clo(alloc_clo(lam51316_fptr, 0));

void* lam51318_fptr() // lam51318 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51319 = arg_buffer[1];
//reading env and args
void* a5093451167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51319))[6];
//not do dummy comment
void* kont51027 = (decode_clo(env51319))[5];
//not do dummy comment
void* lst = (decode_clo(env51319))[4];
//not do dummy comment
void* map = (decode_clo(env51319))[3];
//not do dummy comment
void* proc = (decode_clo(env51319))[2];
//not do dummy comment
void* cons = (decode_clo(env51319))[1];

//creating new closure instance
void** clo51746 = alloc_clo(lam51316_fptr, 6);

//setting env list
clo51746[1] = cons;
clo51746[2] = proc;
clo51746[3] = map;
clo51746[4] = lst;
clo51746[5] = kont51027;
clo51746[6] = cdr;
void* f5103151168 = encode_clo(clo51746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5103151168;
arg_buffer[3] = a5093451167;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51318 = encode_clo(alloc_clo(lam51318_fptr, 0));

void* lam51320_fptr() // lam51320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51321 = arg_buffer[1];
//reading env and args
void* a5093251163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51027 = (decode_clo(env51321))[8];
//not do dummy comment
void* lst = (decode_clo(env51321))[7];
//not do dummy comment
void* map = (decode_clo(env51321))[6];
//not do dummy comment
void* proc = (decode_clo(env51321))[5];
//not do dummy comment
void* car = (decode_clo(env51321))[4];
//not do dummy comment
void* cons = (decode_clo(env51321))[3];
//not do dummy comment
void* list = (decode_clo(env51321))[2];
//not do dummy comment
void* cdr = (decode_clo(env51321))[1];

//if-clause
bool if_guard51747 = is_true(a5093251163);
if(if_guard51747)
{

//creating new closure instance
void** clo51749 = alloc_clo(lam51310_fptr, 1);

//setting env list
clo51749[1] = kont51027;
void* f5102851164 = encode_clo(clo51749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5102851164;
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
void** clo51751 = alloc_clo(lam51318_fptr, 6);

//setting env list
clo51751[1] = cons;
clo51751[2] = proc;
clo51751[3] = map;
clo51751[4] = lst;
clo51751[5] = kont51027;
clo51751[6] = cdr;
void* f5103251166 = encode_clo(clo51751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5103251166;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51320 = encode_clo(alloc_clo(lam51320_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51322 = arg_buffer[1];
//reading env and args
void* kont51027 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51753 = alloc_clo(lam51320_fptr, 8);

//setting env list
clo51753[1] = cdr;
clo51753[2] = list;
clo51753[3] = cons;
clo51753[4] = car;
clo51753[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo51753[6] = map;
clo51753[7] = lst;
clo51753[8] = kont51027;
void* f5103351162 = encode_clo(clo51753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5103351162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam51323_fptr() // lam51323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51324 = arg_buffer[1];
//reading env and args
void* x5093951177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51034 = (decode_clo(env51324))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51034);
arg_buffer[2] = x5093951177;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51034))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51323 = encode_clo(alloc_clo(lam51323_fptr, 0));

void* lam51325_fptr() // lam51325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51326 = arg_buffer[1];
//reading env and args
void* a5094451187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51034 = (decode_clo(env51326))[3];
//not do dummy comment
void* cons = (decode_clo(env51326))[2];
//not do dummy comment
void* a5094251183 = (decode_clo(env51326))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51034;
arg_buffer[3] = a5094251183;
arg_buffer[4] = a5094451187;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51325 = encode_clo(alloc_clo(lam51325_fptr, 0));

void* lam51327_fptr() // lam51327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51328 = arg_buffer[1];
//reading env and args
void* a5094351185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env51328))[5];
//not do dummy comment
void* kont51034 = (decode_clo(env51328))[4];
//not do dummy comment
void* filter = (decode_clo(env51328))[3];
//not do dummy comment
void* cons = (decode_clo(env51328))[2];
//not do dummy comment
void* a5094251183 = (decode_clo(env51328))[1];

//creating new closure instance
void** clo51755 = alloc_clo(lam51325_fptr, 3);

//setting env list
clo51755[1] = a5094251183;
clo51755[2] = cons;
clo51755[3] = kont51034;
void* f5103651186 = encode_clo(clo51755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5103651186;
arg_buffer[3] = op;
arg_buffer[4] = a5094351185;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51327 = encode_clo(alloc_clo(lam51327_fptr, 0));

void* lam51329_fptr() // lam51329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51330 = arg_buffer[1];
//reading env and args
void* a5094251183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51330))[6];
//not do dummy comment
void* lst = (decode_clo(env51330))[5];
//not do dummy comment
void* op = (decode_clo(env51330))[4];
//not do dummy comment
void* kont51034 = (decode_clo(env51330))[3];
//not do dummy comment
void* filter = (decode_clo(env51330))[2];
//not do dummy comment
void* cons = (decode_clo(env51330))[1];

//creating new closure instance
void** clo51757 = alloc_clo(lam51327_fptr, 5);

//setting env list
clo51757[1] = a5094251183;
clo51757[2] = cons;
clo51757[3] = filter;
clo51757[4] = kont51034;
clo51757[5] = op;
void* f5103751184 = encode_clo(clo51757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5103751184;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51329 = encode_clo(alloc_clo(lam51329_fptr, 0));

void* lam51331_fptr() // lam51331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51332 = arg_buffer[1];
//reading env and args
void* a5094551189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env51332))[3];
//not do dummy comment
void* kont51034 = (decode_clo(env51332))[2];
//not do dummy comment
void* filter = (decode_clo(env51332))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont51034;
arg_buffer[3] = op;
arg_buffer[4] = a5094551189;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51331 = encode_clo(alloc_clo(lam51331_fptr, 0));

void* lam51333_fptr() // lam51333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51334 = arg_buffer[1];
//reading env and args
void* a5094151181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51334))[7];
//not do dummy comment
void* lst = (decode_clo(env51334))[6];
//not do dummy comment
void* op = (decode_clo(env51334))[5];
//not do dummy comment
void* kont51034 = (decode_clo(env51334))[4];
//not do dummy comment
void* cons = (decode_clo(env51334))[3];
//not do dummy comment
void* filter = (decode_clo(env51334))[2];
//not do dummy comment
void* car = (decode_clo(env51334))[1];

//if-clause
bool if_guard51758 = is_true(a5094151181);
if(if_guard51758)
{

//creating new closure instance
void** clo51760 = alloc_clo(lam51329_fptr, 6);

//setting env list
clo51760[1] = cons;
clo51760[2] = filter;
clo51760[3] = kont51034;
clo51760[4] = op;
clo51760[5] = lst;
clo51760[6] = cdr;
void* f5103851182 = encode_clo(clo51760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5103851182;
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
void** clo51762 = alloc_clo(lam51331_fptr, 3);

//setting env list
clo51762[1] = filter;
clo51762[2] = kont51034;
clo51762[3] = op;
void* f5103951188 = encode_clo(clo51762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5103951188;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51333 = encode_clo(alloc_clo(lam51333_fptr, 0));

void* lam51335_fptr() // lam51335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51336 = arg_buffer[1];
//reading env and args
void* a5094051179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51336))[7];
//not do dummy comment
void* lst = (decode_clo(env51336))[6];
//not do dummy comment
void* op = (decode_clo(env51336))[5];
//not do dummy comment
void* kont51034 = (decode_clo(env51336))[4];
//not do dummy comment
void* cons = (decode_clo(env51336))[3];
//not do dummy comment
void* filter = (decode_clo(env51336))[2];
//not do dummy comment
void* car = (decode_clo(env51336))[1];

//creating new closure instance
void** clo51764 = alloc_clo(lam51333_fptr, 7);

//setting env list
clo51764[1] = car;
clo51764[2] = filter;
clo51764[3] = cons;
clo51764[4] = kont51034;
clo51764[5] = op;
clo51764[6] = lst;
clo51764[7] = cdr;
void* f5104051180 = encode_clo(clo51764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5104051180;
arg_buffer[3] = a5094051179;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51335 = encode_clo(alloc_clo(lam51335_fptr, 0));

void* lam51337_fptr() // lam51337 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51338 = arg_buffer[1];
//reading env and args
void* a5093851175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51338))[8];
//not do dummy comment
void* op = (decode_clo(env51338))[7];
//not do dummy comment
void* kont51034 = (decode_clo(env51338))[6];
//not do dummy comment
void* cons = (decode_clo(env51338))[5];
//not do dummy comment
void* list = (decode_clo(env51338))[4];
//not do dummy comment
void* cdr = (decode_clo(env51338))[3];
//not do dummy comment
void* filter = (decode_clo(env51338))[2];
//not do dummy comment
void* car = (decode_clo(env51338))[1];

//if-clause
bool if_guard51765 = is_true(a5093851175);
if(if_guard51765)
{

//creating new closure instance
void** clo51767 = alloc_clo(lam51323_fptr, 1);

//setting env list
clo51767[1] = kont51034;
void* f5103551176 = encode_clo(clo51767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5103551176;
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
void** clo51769 = alloc_clo(lam51335_fptr, 7);

//setting env list
clo51769[1] = car;
clo51769[2] = filter;
clo51769[3] = cons;
clo51769[4] = kont51034;
clo51769[5] = op;
clo51769[6] = lst;
clo51769[7] = cdr;
void* f5104151178 = encode_clo(clo51769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5104151178;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51337 = encode_clo(alloc_clo(lam51337_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51339 = arg_buffer[1];
//reading env and args
void* kont51034 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51771 = alloc_clo(lam51337_fptr, 8);

//setting env list
clo51771[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo51771[2] = filter;
clo51771[3] = cdr;
clo51771[4] = list;
clo51771[5] = cons;
clo51771[6] = kont51034;
clo51771[7] = op;
clo51771[8] = lst;
void* f5104251174 = encode_clo(clo51771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5104251174;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam51340_fptr() // lam51340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51341 = arg_buffer[1];
//reading env and args
void* a5095051197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51043 = (decode_clo(env51341))[3];
//not do dummy comment
void* drop = (decode_clo(env51341))[2];
//not do dummy comment
void* a5094851194 = (decode_clo(env51341))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont51043;
arg_buffer[3] = a5094851194;
arg_buffer[4] = a5095051197;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51340 = encode_clo(alloc_clo(lam51340_fptr, 0));

void* lam51343_fptr() // lam51343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51344 = arg_buffer[1];
//reading env and args
void* a5094851194 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51043 = (decode_clo(env51344))[4];
//not do dummy comment
void* drop = (decode_clo(env51344))[3];
//not do dummy comment
void* n = (decode_clo(env51344))[2];
//not do dummy comment
void* _u45 = (decode_clo(env51344))[1];
mpz_t* mpzvar51772 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51772, "1", 10);
void* a5094951195 = encode_mpz(mpzvar51772);

//creating new closure instance
void** clo51774 = alloc_clo(lam51340_fptr, 3);

//setting env list
clo51774[1] = a5094851194;
clo51774[2] = drop;
clo51774[3] = kont51043;
void* f5104451196 = encode_clo(clo51774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5104451196;
arg_buffer[3] = n;
arg_buffer[4] = a5094951195;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51343 = encode_clo(alloc_clo(lam51343_fptr, 0));

void* lam51345_fptr() // lam51345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51346 = arg_buffer[1];
//reading env and args
void* a5094751192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51346))[6];
//not do dummy comment
void* kont51043 = (decode_clo(env51346))[5];
//not do dummy comment
void* n = (decode_clo(env51346))[4];
//not do dummy comment
void* _u45 = (decode_clo(env51346))[3];
//not do dummy comment
void* lst = (decode_clo(env51346))[2];
//not do dummy comment
void* drop = (decode_clo(env51346))[1];

//if-clause
bool if_guard51775 = is_true(a5094751192);
if(if_guard51775)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51043);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51043))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51777 = alloc_clo(lam51343_fptr, 4);

//setting env list
clo51777[1] = _u45;
clo51777[2] = n;
clo51777[3] = drop;
clo51777[4] = kont51043;
void* f5104551193 = encode_clo(clo51777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5104551193;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51345 = encode_clo(alloc_clo(lam51345_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51348 = arg_buffer[1];
//reading env and args
void* kont51043 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar51778 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51778, "0", 10);
void* a5094651190 = encode_mpz(mpzvar51778);

//creating new closure instance
void** clo51780 = alloc_clo(lam51345_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo51780[1] = drop;
clo51780[2] = lst;
clo51780[3] = _u45;
clo51780[4] = n;
clo51780[5] = kont51043;
clo51780[6] = cdr;
void* f5104651191 = encode_clo(clo51780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5104651191;
arg_buffer[3] = n;
arg_buffer[4] = a5094651190;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam51349_fptr() // lam51349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51350 = arg_buffer[1];
//reading env and args
void* a5095451205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5095251201 = (decode_clo(env51350))[3];
//not do dummy comment
void* kont51047 = (decode_clo(env51350))[2];
//not do dummy comment
void* proc = (decode_clo(env51350))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont51047;
arg_buffer[3] = a5095251201;
arg_buffer[4] = a5095451205;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51349 = encode_clo(alloc_clo(lam51349_fptr, 0));

void* lam51351_fptr() // lam51351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51352 = arg_buffer[1];
//reading env and args
void* a5095351203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5095251201 = (decode_clo(env51352))[5];
//not do dummy comment
void* foldr = (decode_clo(env51352))[4];
//not do dummy comment
void* kont51047 = (decode_clo(env51352))[3];
//not do dummy comment
void* proc = (decode_clo(env51352))[2];
//not do dummy comment
void* acc = (decode_clo(env51352))[1];

//creating new closure instance
void** clo51782 = alloc_clo(lam51349_fptr, 3);

//setting env list
clo51782[1] = proc;
clo51782[2] = kont51047;
clo51782[3] = a5095251201;
void* f5104851204 = encode_clo(clo51782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5104851204;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5095351203;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51351 = encode_clo(alloc_clo(lam51351_fptr, 0));

void* lam51353_fptr() // lam51353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51354 = arg_buffer[1];
//reading env and args
void* a5095251201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51354))[6];
//not do dummy comment
void* kont51047 = (decode_clo(env51354))[5];
//not do dummy comment
void* foldr = (decode_clo(env51354))[4];
//not do dummy comment
void* lst = (decode_clo(env51354))[3];
//not do dummy comment
void* proc = (decode_clo(env51354))[2];
//not do dummy comment
void* acc = (decode_clo(env51354))[1];

//creating new closure instance
void** clo51784 = alloc_clo(lam51351_fptr, 5);

//setting env list
clo51784[1] = acc;
clo51784[2] = proc;
clo51784[3] = kont51047;
clo51784[4] = foldr;
clo51784[5] = a5095251201;
void* f5104951202 = encode_clo(clo51784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5104951202;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51353 = encode_clo(alloc_clo(lam51353_fptr, 0));

void* lam51355_fptr() // lam51355 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51356 = arg_buffer[1];
//reading env and args
void* a5095151199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51356))[7];
//not do dummy comment
void* kont51047 = (decode_clo(env51356))[6];
//not do dummy comment
void* car = (decode_clo(env51356))[5];
//not do dummy comment
void* foldr = (decode_clo(env51356))[4];
//not do dummy comment
void* lst = (decode_clo(env51356))[3];
//not do dummy comment
void* proc = (decode_clo(env51356))[2];
//not do dummy comment
void* acc = (decode_clo(env51356))[1];

//if-clause
bool if_guard51785 = is_true(a5095151199);
if(if_guard51785)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51047);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51047))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51787 = alloc_clo(lam51353_fptr, 6);

//setting env list
clo51787[1] = acc;
clo51787[2] = proc;
clo51787[3] = lst;
clo51787[4] = foldr;
clo51787[5] = kont51047;
clo51787[6] = cdr;
void* f5105051200 = encode_clo(clo51787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5105051200;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51355 = encode_clo(alloc_clo(lam51355_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51357 = arg_buffer[1];
//reading env and args
void* kont51047 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo51789 = alloc_clo(lam51355_fptr, 7);

//setting env list
clo51789[1] = acc;
clo51789[2] = proc;
clo51789[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo51789[4] = foldr;
clo51789[5] = car;
clo51789[6] = kont51047;
clo51789[7] = cdr;
void* f5105151198 = encode_clo(clo51789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5105151198;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam51358_fptr() // lam51358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51359 = arg_buffer[1];
//reading env and args
void* a5095851213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5095651209 = (decode_clo(env51359))[3];
//not do dummy comment
void* kont51052 = (decode_clo(env51359))[2];
//not do dummy comment
void* cons = (decode_clo(env51359))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51052;
arg_buffer[3] = a5095651209;
arg_buffer[4] = a5095851213;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51358 = encode_clo(alloc_clo(lam51358_fptr, 0));

void* lam51360_fptr() // lam51360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51361 = arg_buffer[1];
//reading env and args
void* a5095751211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51052 = (decode_clo(env51361))[5];
//not do dummy comment
void* lst2 = (decode_clo(env51361))[4];
//not do dummy comment
void* cons = (decode_clo(env51361))[3];
//not do dummy comment
void* append = (decode_clo(env51361))[2];
//not do dummy comment
void* a5095651209 = (decode_clo(env51361))[1];

//creating new closure instance
void** clo51791 = alloc_clo(lam51358_fptr, 3);

//setting env list
clo51791[1] = cons;
clo51791[2] = kont51052;
clo51791[3] = a5095651209;
void* f5105351212 = encode_clo(clo51791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5105351212;
arg_buffer[3] = a5095751211;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51360 = encode_clo(alloc_clo(lam51360_fptr, 0));

void* lam51362_fptr() // lam51362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51363 = arg_buffer[1];
//reading env and args
void* a5095651209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51363))[6];
//not do dummy comment
void* append = (decode_clo(env51363))[5];
//not do dummy comment
void* kont51052 = (decode_clo(env51363))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51363))[3];
//not do dummy comment
void* lst1 = (decode_clo(env51363))[2];
//not do dummy comment
void* cons = (decode_clo(env51363))[1];

//creating new closure instance
void** clo51793 = alloc_clo(lam51360_fptr, 5);

//setting env list
clo51793[1] = a5095651209;
clo51793[2] = append;
clo51793[3] = cons;
clo51793[4] = lst2;
clo51793[5] = kont51052;
void* f5105451210 = encode_clo(clo51793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5105451210;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51362 = encode_clo(alloc_clo(lam51362_fptr, 0));

void* lam51364_fptr() // lam51364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51365 = arg_buffer[1];
//reading env and args
void* a5095551207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51365))[7];
//not do dummy comment
void* append = (decode_clo(env51365))[6];
//not do dummy comment
void* kont51052 = (decode_clo(env51365))[5];
//not do dummy comment
void* lst2 = (decode_clo(env51365))[4];
//not do dummy comment
void* cons = (decode_clo(env51365))[3];
//not do dummy comment
void* lst1 = (decode_clo(env51365))[2];
//not do dummy comment
void* car = (decode_clo(env51365))[1];

//if-clause
bool if_guard51794 = is_true(a5095551207);
if(if_guard51794)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51052);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51052))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51796 = alloc_clo(lam51362_fptr, 6);

//setting env list
clo51796[1] = cons;
clo51796[2] = lst1;
clo51796[3] = lst2;
clo51796[4] = kont51052;
clo51796[5] = append;
clo51796[6] = cdr;
void* f5105551208 = encode_clo(clo51796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5105551208;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51364 = encode_clo(alloc_clo(lam51364_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51366 = arg_buffer[1];
//reading env and args
void* kont51052 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51798 = alloc_clo(lam51364_fptr, 7);

//setting env list
clo51798[1] = car;
clo51798[2] = lst1;
clo51798[3] = cons;
clo51798[4] = lst2;
clo51798[5] = kont51052;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo51798[6] = append;
clo51798[7] = cdr;
void* f5105651206 = encode_clo(clo51798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5105651206;
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
void* _51367 = arg_buffer[1];
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

void* kont5105751214 = prim_car(lst);
void* lst51215 = prim_cdr(lst);
void* x5095951216 = apply_prim_hash(lst51215);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5105751214);
arg_buffer[2] = x5095951216;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5105751214))[0]);
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
void* _51368 = arg_buffer[1];
//reading env and args
void* kont51059 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5096051217 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51059);
arg_buffer[2] = x5096051217;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51059))[0]);
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
void* _51369 = arg_buffer[1];
//reading env and args
void* kont51060 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5096151218 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51060);
arg_buffer[2] = x5096151218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51060))[0]);
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
void* _51370 = arg_buffer[1];
//reading env and args
void* kont51061 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5096251219 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51061);
arg_buffer[2] = x5096251219;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51061))[0]);
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
void* _51371 = arg_buffer[1];
//reading env and args
void* kont51062 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5096351220 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51062);
arg_buffer[2] = x5096351220;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51062))[0]);
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
void* _51373 = arg_buffer[1];
//reading env and args
void* kont51063 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar51799 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51799, "1", 10);
void* a5096451221 = encode_mpz(mpzvar51799);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = kont51063;
arg_buffer[3] = a5096451221;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam51374_fptr() // lam51374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51375 = arg_buffer[1];
//reading env and args
void* x5096551223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51064 = (decode_clo(env51375))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51064);
arg_buffer[2] = x5096551223;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51064))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51374 = encode_clo(alloc_clo(lam51374_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51376 = arg_buffer[1];
//reading env and args
void* kont51064 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo51801 = alloc_clo(lam51374_fptr, 1);

//setting env list
clo51801[1] = kont51064;
void* f5106551222 = encode_clo(clo51801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5106551222;
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

