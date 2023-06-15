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
void* _77193 = arg_buffer[1];
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

void* kont7692977030 = prim_car(lst);
void* lst77031 = prim_cdr(lst);
void* x7684077032 = apply_prim__u43(lst77031);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7692977030);
arg_buffer[2] = x7684077032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7692977030))[0]);
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
void* _77194 = arg_buffer[1];
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

void* kont7693177033 = prim_car(lst);
void* lst77034 = prim_cdr(lst);
void* x7684177035 = apply_prim__u45(lst77034);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7693177033);
arg_buffer[2] = x7684177035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7693177033))[0]);
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
void* _77195 = arg_buffer[1];
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

void* kont7693377036 = prim_car(lst);
void* lst77037 = prim_cdr(lst);
void* x7684277038 = apply_prim__u42(lst77037);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7693377036);
arg_buffer[2] = x7684277038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7693377036))[0]);
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
void* _77196 = arg_buffer[1];
//reading env and args
void* kont76935 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7684377039 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76935);
arg_buffer[2] = x7684377039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76935))[0]);
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
void* _77197 = arg_buffer[1];
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

void* kont7693677040 = prim_car(lst);
void* lst77041 = prim_cdr(lst);
void* x7684477042 = apply_prim__u47(lst77041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7693677040);
arg_buffer[2] = x7684477042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7693677040))[0]);
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
void* _77198 = arg_buffer[1];
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

void* kont7693877043 = prim_car(lst);
void* lst77044 = prim_cdr(lst);
void* x7684577045 = apply_prim__u61(lst77044);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7693877043);
arg_buffer[2] = x7684577045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7693877043))[0]);
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
void* _77199 = arg_buffer[1];
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

void* kont7694077046 = prim_car(lst);
void* lst77047 = prim_cdr(lst);
void* x7684677048 = apply_prim__u62(lst77047);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7694077046);
arg_buffer[2] = x7684677048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7694077046))[0]);
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
void* _77200 = arg_buffer[1];
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

void* kont7694277049 = prim_car(lst);
void* lst77050 = prim_cdr(lst);
void* x7684777051 = apply_prim__u60(lst77050);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7694277049);
arg_buffer[2] = x7684777051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7694277049))[0]);
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
void* _77201 = arg_buffer[1];
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

void* kont7694477052 = prim_car(lst);
void* lst77053 = prim_cdr(lst);
void* x7684877054 = apply_prim__u60_u61(lst77053);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7694477052);
arg_buffer[2] = x7684877054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7694477052))[0]);
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
void* _77202 = arg_buffer[1];
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

void* kont7694677055 = prim_car(lst);
void* lst77056 = prim_cdr(lst);
void* x7684977057 = apply_prim__u62_u61(lst77056);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7694677055);
arg_buffer[2] = x7684977057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7694677055))[0]);
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
void* _77203 = arg_buffer[1];
//reading env and args
void* kont76948 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x7685077058 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76948);
arg_buffer[2] = x7685077058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76948))[0]);
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
void* _77204 = arg_buffer[1];
//reading env and args
void* kont76949 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7685177059 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76949);
arg_buffer[2] = x7685177059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76949))[0]);
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
void* _77205 = arg_buffer[1];
//reading env and args
void* kont76950 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7685277060 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76950);
arg_buffer[2] = x7685277060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76950))[0]);
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
void* _77206 = arg_buffer[1];
//reading env and args
void* kont76951 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7685377061 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76951);
arg_buffer[2] = x7685377061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76951))[0]);
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
void* _77207 = arg_buffer[1];
//reading env and args
void* kont76952 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7685477062 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76952);
arg_buffer[2] = x7685477062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76952))[0]);
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
void* _77208 = arg_buffer[1];
//reading env and args
void* kont76953 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7685577063 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76953);
arg_buffer[2] = x7685577063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76953))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam77209_fptr() // lam77209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77210 = arg_buffer[1];
//reading env and args
void* a7685877067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7685677064 = (decode_clo(env77210))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env77210))[2];
//not do dummy comment
void* kont76954 = (decode_clo(env77210))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont76954;
arg_buffer[3] = a7685677064;
arg_buffer[4] = a7685877067;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77209 = encode_clo(alloc_clo(lam77209_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77213 = arg_buffer[1];
//reading env and args
void* kont76954 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar82451 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82451, "0", 10);
void* a7685677064 = encode_mpz(mpzvar82451);
mpz_t* mpzvar82452 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82452, "2", 10);
void* a7685777065 = encode_mpz(mpzvar82452);

//creating new closure instance
void** clo82454 = alloc_clo(lam77209_fptr, 3);

//setting env list
clo82454[1] = kont76954;
clo82454[2] = equal_u63;
clo82454[3] = a7685677064;
void* f7695577066 = encode_clo(clo82454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7695577066;
arg_buffer[3] = x;
arg_buffer[4] = a7685777065;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam77214_fptr() // lam77214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77215 = arg_buffer[1];
//reading env and args
void* a7686177071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env77215))[3];
//not do dummy comment
void* kont76956 = (decode_clo(env77215))[2];
//not do dummy comment
void* a7685977068 = (decode_clo(env77215))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont76956;
arg_buffer[3] = a7685977068;
arg_buffer[4] = a7686177071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77214 = encode_clo(alloc_clo(lam77214_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77218 = arg_buffer[1];
//reading env and args
void* kont76956 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar82455 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82455, "1", 10);
void* a7685977068 = encode_mpz(mpzvar82455);
mpz_t* mpzvar82456 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82456, "2", 10);
void* a7686077069 = encode_mpz(mpzvar82456);

//creating new closure instance
void** clo82458 = alloc_clo(lam77214_fptr, 3);

//setting env list
clo82458[1] = a7685977068;
clo82458[2] = kont76956;
clo82458[3] = equal_u63;
void* f7695777070 = encode_clo(clo82458);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7695777070;
arg_buffer[3] = x;
arg_buffer[4] = a7686077069;
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
void* _77219 = arg_buffer[1];
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

void* kont7695877072 = prim_car(x);
void* x77073 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7695877072);
arg_buffer[2] = x77073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7695877072))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam77222_fptr() // lam77222 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77223 = arg_buffer[1];
//reading env and args
void* a7686777083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env77223))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env77223))[2];
//not do dummy comment
void* kont76960 = (decode_clo(env77223))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont76960;
arg_buffer[3] = x;
arg_buffer[4] = a7686777083;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77222 = encode_clo(alloc_clo(lam77222_fptr, 0));

void* lam77224_fptr() // lam77224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77225 = arg_buffer[1];
//reading env and args
void* a7686577080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77225))[5];
//not do dummy comment
void* lst = (decode_clo(env77225))[4];
//not do dummy comment
void* x = (decode_clo(env77225))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env77225))[2];
//not do dummy comment
void* kont76960 = (decode_clo(env77225))[1];

//if-clause
bool if_guard82459 = is_true(a7686577080);
if(if_guard82459)
{
void* x7686677081 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76960);
arg_buffer[2] = x7686677081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76960))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82461 = alloc_clo(lam77222_fptr, 3);

//setting env list
clo82461[1] = kont76960;
clo82461[2] = member_u63;
clo82461[3] = x;
void* f7696177082 = encode_clo(clo82461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7696177082;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77224 = encode_clo(alloc_clo(lam77224_fptr, 0));

void* lam77226_fptr() // lam77226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77227 = arg_buffer[1];
//reading env and args
void* a7686477078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77227))[6];
//not do dummy comment
void* lst = (decode_clo(env77227))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env77227))[4];
//not do dummy comment
void* x = (decode_clo(env77227))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env77227))[2];
//not do dummy comment
void* kont76960 = (decode_clo(env77227))[1];

//creating new closure instance
void** clo82463 = alloc_clo(lam77224_fptr, 5);

//setting env list
clo82463[1] = kont76960;
clo82463[2] = member_u63;
clo82463[3] = x;
clo82463[4] = lst;
clo82463[5] = cdr;
void* f7696277079 = encode_clo(clo82463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f7696277079;
arg_buffer[3] = a7686477078;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77226 = encode_clo(alloc_clo(lam77226_fptr, 0));

void* lam77228_fptr() // lam77228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77229 = arg_buffer[1];
//reading env and args
void* a7686277075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77229))[7];
//not do dummy comment
void* lst = (decode_clo(env77229))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env77229))[5];
//not do dummy comment
void* x = (decode_clo(env77229))[4];
//not do dummy comment
void* car = (decode_clo(env77229))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env77229))[2];
//not do dummy comment
void* kont76960 = (decode_clo(env77229))[1];

//if-clause
bool if_guard82464 = is_true(a7686277075);
if(if_guard82464)
{
void* x7686377076 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76960);
arg_buffer[2] = x7686377076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76960))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82466 = alloc_clo(lam77226_fptr, 6);

//setting env list
clo82466[1] = kont76960;
clo82466[2] = member_u63;
clo82466[3] = x;
clo82466[4] = equal_u63;
clo82466[5] = lst;
clo82466[6] = cdr;
void* f7696377077 = encode_clo(clo82466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7696377077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77228 = encode_clo(alloc_clo(lam77228_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77230 = arg_buffer[1];
//reading env and args
void* kont76960 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82468 = alloc_clo(lam77228_fptr, 7);

//setting env list
clo82468[1] = kont76960;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo82468[2] = member_u63;
clo82468[3] = car;
clo82468[4] = x;
clo82468[5] = equal_u63;
clo82468[6] = lst;
clo82468[7] = cdr;
void* f7696477074 = encode_clo(clo82468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7696477074;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam77231_fptr() // lam77231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77232 = arg_buffer[1];
//reading env and args
void* a7687177091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7687077089 = (decode_clo(env77232))[4];
//not do dummy comment
void* kont76965 = (decode_clo(env77232))[3];
//not do dummy comment
void* fun = (decode_clo(env77232))[2];
//not do dummy comment
void* foldl = (decode_clo(env77232))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont76965;
arg_buffer[3] = fun;
arg_buffer[4] = a7687077089;
arg_buffer[5] = a7687177091;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77231 = encode_clo(alloc_clo(lam77231_fptr, 0));

void* lam77233_fptr() // lam77233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77234 = arg_buffer[1];
//reading env and args
void* a7687077089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77234))[5];
//not do dummy comment
void* fun = (decode_clo(env77234))[4];
//not do dummy comment
void* foldl = (decode_clo(env77234))[3];
//not do dummy comment
void* lst = (decode_clo(env77234))[2];
//not do dummy comment
void* kont76965 = (decode_clo(env77234))[1];

//creating new closure instance
void** clo82470 = alloc_clo(lam77231_fptr, 4);

//setting env list
clo82470[1] = foldl;
clo82470[2] = fun;
clo82470[3] = kont76965;
clo82470[4] = a7687077089;
void* f7696677090 = encode_clo(clo82470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7696677090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77233 = encode_clo(alloc_clo(lam77233_fptr, 0));

void* lam77235_fptr() // lam77235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77236 = arg_buffer[1];
//reading env and args
void* a7686977087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77236))[6];
//not do dummy comment
void* fun = (decode_clo(env77236))[5];
//not do dummy comment
void* acc = (decode_clo(env77236))[4];
//not do dummy comment
void* foldl = (decode_clo(env77236))[3];
//not do dummy comment
void* lst = (decode_clo(env77236))[2];
//not do dummy comment
void* kont76965 = (decode_clo(env77236))[1];

//creating new closure instance
void** clo82472 = alloc_clo(lam77233_fptr, 5);

//setting env list
clo82472[1] = kont76965;
clo82472[2] = lst;
clo82472[3] = foldl;
clo82472[4] = fun;
clo82472[5] = cdr;
void* f7696777088 = encode_clo(clo82472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f7696777088;
arg_buffer[3] = a7686977087;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77235 = encode_clo(alloc_clo(lam77235_fptr, 0));

void* lam77237_fptr() // lam77237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77238 = arg_buffer[1];
//reading env and args
void* a7686877085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77238))[7];
//not do dummy comment
void* fun = (decode_clo(env77238))[6];
//not do dummy comment
void* acc = (decode_clo(env77238))[5];
//not do dummy comment
void* car = (decode_clo(env77238))[4];
//not do dummy comment
void* foldl = (decode_clo(env77238))[3];
//not do dummy comment
void* lst = (decode_clo(env77238))[2];
//not do dummy comment
void* kont76965 = (decode_clo(env77238))[1];

//if-clause
bool if_guard82473 = is_true(a7686877085);
if(if_guard82473)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76965);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82475 = alloc_clo(lam77235_fptr, 6);

//setting env list
clo82475[1] = kont76965;
clo82475[2] = lst;
clo82475[3] = foldl;
clo82475[4] = acc;
clo82475[5] = fun;
clo82475[6] = cdr;
void* f7696877086 = encode_clo(clo82475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7696877086;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77237 = encode_clo(alloc_clo(lam77237_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77239 = arg_buffer[1];
//reading env and args
void* kont76965 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo82477 = alloc_clo(lam77237_fptr, 7);

//setting env list
clo82477[1] = kont76965;
clo82477[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo82477[3] = foldl;
clo82477[4] = car;
clo82477[5] = acc;
clo82477[6] = fun;
clo82477[7] = cdr;
void* f7696977084 = encode_clo(clo82477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7696977084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam77240_fptr() // lam77240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77241 = arg_buffer[1];
//reading env and args
void* a7687577099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7687377095 = (decode_clo(env77241))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env77241))[2];
//not do dummy comment
void* kont76970 = (decode_clo(env77241))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont76970;
arg_buffer[3] = a7687377095;
arg_buffer[4] = a7687577099;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77240 = encode_clo(alloc_clo(lam77240_fptr, 0));

void* lam77242_fptr() // lam77242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77243 = arg_buffer[1];
//reading env and args
void* a7687477097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7687377095 = (decode_clo(env77243))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env77243))[4];
//not do dummy comment
void* kont76970 = (decode_clo(env77243))[3];
//not do dummy comment
void* lst2 = (decode_clo(env77243))[2];
//not do dummy comment
void* cons = (decode_clo(env77243))[1];

//creating new closure instance
void** clo82479 = alloc_clo(lam77240_fptr, 3);

//setting env list
clo82479[1] = kont76970;
clo82479[2] = reverse_u45helper;
clo82479[3] = a7687377095;
void* f7697177098 = encode_clo(clo82479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7697177098;
arg_buffer[3] = a7687477097;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77242 = encode_clo(alloc_clo(lam77242_fptr, 0));

void* lam77244_fptr() // lam77244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77245 = arg_buffer[1];
//reading env and args
void* a7687377095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env77245))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env77245))[5];
//not do dummy comment
void* kont76970 = (decode_clo(env77245))[4];
//not do dummy comment
void* lst2 = (decode_clo(env77245))[3];
//not do dummy comment
void* car = (decode_clo(env77245))[2];
//not do dummy comment
void* cons = (decode_clo(env77245))[1];

//creating new closure instance
void** clo82481 = alloc_clo(lam77242_fptr, 5);

//setting env list
clo82481[1] = cons;
clo82481[2] = lst2;
clo82481[3] = kont76970;
clo82481[4] = reverse_u45helper;
clo82481[5] = a7687377095;
void* f7697277096 = encode_clo(clo82481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7697277096;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77244 = encode_clo(alloc_clo(lam77244_fptr, 0));

void* lam77246_fptr() // lam77246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77247 = arg_buffer[1];
//reading env and args
void* a7687277093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77247))[7];
//not do dummy comment
void* lst = (decode_clo(env77247))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env77247))[5];
//not do dummy comment
void* kont76970 = (decode_clo(env77247))[4];
//not do dummy comment
void* lst2 = (decode_clo(env77247))[3];
//not do dummy comment
void* car = (decode_clo(env77247))[2];
//not do dummy comment
void* cons = (decode_clo(env77247))[1];

//if-clause
bool if_guard82482 = is_true(a7687277093);
if(if_guard82482)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76970);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76970))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82484 = alloc_clo(lam77244_fptr, 6);

//setting env list
clo82484[1] = cons;
clo82484[2] = car;
clo82484[3] = lst2;
clo82484[4] = kont76970;
clo82484[5] = reverse_u45helper;
clo82484[6] = lst;
void* f7697377094 = encode_clo(clo82484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7697377094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77246 = encode_clo(alloc_clo(lam77246_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77248 = arg_buffer[1];
//reading env and args
void* kont76970 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82486 = alloc_clo(lam77246_fptr, 7);

//setting env list
clo82486[1] = cons;
clo82486[2] = car;
clo82486[3] = lst2;
clo82486[4] = kont76970;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo82486[5] = reverse_u45helper;
clo82486[6] = lst;
clo82486[7] = cdr;
void* f7697477092 = encode_clo(clo82486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7697477092;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam77249_fptr() // lam77249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77250 = arg_buffer[1];
//reading env and args
void* a7687677101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env77250))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env77250))[2];
//not do dummy comment
void* kont76975 = (decode_clo(env77250))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont76975;
arg_buffer[3] = lst;
arg_buffer[4] = a7687677101;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77249 = encode_clo(alloc_clo(lam77249_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77251 = arg_buffer[1];
//reading env and args
void* kont76975 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo82488 = alloc_clo(lam77249_fptr, 3);

//setting env list
clo82488[1] = kont76975;
clo82488[2] = reverse_u45helper;
clo82488[3] = lst;
void* f7697677100 = encode_clo(clo82488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7697677100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam77252_fptr() // lam77252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77253 = arg_buffer[1];
//reading env and args
void* x7687977106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76977 = (decode_clo(env77253))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76977);
arg_buffer[2] = x7687977106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76977))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77252 = encode_clo(alloc_clo(lam77252_fptr, 0));

void* lam77254_fptr() // lam77254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77255 = arg_buffer[1];
//reading env and args
void* a7688477115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76977 = (decode_clo(env77255))[4];
//not do dummy comment
void* a7688077108 = (decode_clo(env77255))[3];
//not do dummy comment
void* a7688277111 = (decode_clo(env77255))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env77255))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont76977;
arg_buffer[3] = a7688077108;
arg_buffer[4] = a7688277111;
arg_buffer[5] = a7688477115;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77254 = encode_clo(alloc_clo(lam77254_fptr, 0));

void* lam77256_fptr() // lam77256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77257 = arg_buffer[1];
//reading env and args
void* a7688377113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76977 = (decode_clo(env77257))[6];
//not do dummy comment
void* a7688077108 = (decode_clo(env77257))[5];
//not do dummy comment
void* a7688277111 = (decode_clo(env77257))[4];
//not do dummy comment
void* cons = (decode_clo(env77257))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env77257))[2];
//not do dummy comment
void* lst2 = (decode_clo(env77257))[1];

//creating new closure instance
void** clo82490 = alloc_clo(lam77254_fptr, 4);

//setting env list
clo82490[1] = take_u45helper;
clo82490[2] = a7688277111;
clo82490[3] = a7688077108;
clo82490[4] = kont76977;
void* f7697977114 = encode_clo(clo82490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7697977114;
arg_buffer[3] = a7688377113;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77256 = encode_clo(alloc_clo(lam77256_fptr, 0));

void* lam77258_fptr() // lam77258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77259 = arg_buffer[1];
//reading env and args
void* a7688277111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76977 = (decode_clo(env77259))[7];
//not do dummy comment
void* a7688077108 = (decode_clo(env77259))[6];
//not do dummy comment
void* lst = (decode_clo(env77259))[5];
//not do dummy comment
void* car = (decode_clo(env77259))[4];
//not do dummy comment
void* cons = (decode_clo(env77259))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env77259))[2];
//not do dummy comment
void* lst2 = (decode_clo(env77259))[1];

//creating new closure instance
void** clo82492 = alloc_clo(lam77256_fptr, 6);

//setting env list
clo82492[1] = lst2;
clo82492[2] = take_u45helper;
clo82492[3] = cons;
clo82492[4] = a7688277111;
clo82492[5] = a7688077108;
clo82492[6] = kont76977;
void* f7698077112 = encode_clo(clo82492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7698077112;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77258 = encode_clo(alloc_clo(lam77258_fptr, 0));

void* lam77261_fptr() // lam77261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77262 = arg_buffer[1];
//reading env and args
void* a7688077108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76977 = (decode_clo(env77262))[8];
//not do dummy comment
void* lst = (decode_clo(env77262))[7];
//not do dummy comment
void* cons = (decode_clo(env77262))[6];
//not do dummy comment
void* _u45 = (decode_clo(env77262))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env77262))[4];
//not do dummy comment
void* lst2 = (decode_clo(env77262))[3];
//not do dummy comment
void* n = (decode_clo(env77262))[2];
//not do dummy comment
void* car = (decode_clo(env77262))[1];
mpz_t* mpzvar82493 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82493, "1", 10);
void* a7688177109 = encode_mpz(mpzvar82493);

//creating new closure instance
void** clo82495 = alloc_clo(lam77258_fptr, 7);

//setting env list
clo82495[1] = lst2;
clo82495[2] = take_u45helper;
clo82495[3] = cons;
clo82495[4] = car;
clo82495[5] = lst;
clo82495[6] = a7688077108;
clo82495[7] = kont76977;
void* f7698177110 = encode_clo(clo82495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7698177110;
arg_buffer[3] = n;
arg_buffer[4] = a7688177109;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77261 = encode_clo(alloc_clo(lam77261_fptr, 0));

void* lam77263_fptr() // lam77263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77264 = arg_buffer[1];
//reading env and args
void* a7687877104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env77264))[10];
//not do dummy comment
void* reverse = (decode_clo(env77264))[9];
//not do dummy comment
void* cons = (decode_clo(env77264))[8];
//not do dummy comment
void* _u45 = (decode_clo(env77264))[7];
//not do dummy comment
void* kont76977 = (decode_clo(env77264))[6];
//not do dummy comment
void* cdr = (decode_clo(env77264))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env77264))[4];
//not do dummy comment
void* lst2 = (decode_clo(env77264))[3];
//not do dummy comment
void* n = (decode_clo(env77264))[2];
//not do dummy comment
void* car = (decode_clo(env77264))[1];

//if-clause
bool if_guard82496 = is_true(a7687877104);
if(if_guard82496)
{

//creating new closure instance
void** clo82498 = alloc_clo(lam77252_fptr, 1);

//setting env list
clo82498[1] = kont76977;
void* f7697877105 = encode_clo(clo82498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f7697877105;
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
void** clo82500 = alloc_clo(lam77261_fptr, 8);

//setting env list
clo82500[1] = car;
clo82500[2] = n;
clo82500[3] = lst2;
clo82500[4] = take_u45helper;
clo82500[5] = _u45;
clo82500[6] = cons;
clo82500[7] = lst;
clo82500[8] = kont76977;
void* f7698277107 = encode_clo(clo82500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7698277107;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77263 = encode_clo(alloc_clo(lam77263_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77266 = arg_buffer[1];
//reading env and args
void* kont76977 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar82501 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82501, "0", 10);
void* a7687777102 = encode_mpz(mpzvar82501);

//creating new closure instance
void** clo82503 = alloc_clo(lam77263_fptr, 10);

//setting env list
clo82503[1] = car;
clo82503[2] = n;
clo82503[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo82503[4] = take_u45helper;
clo82503[5] = cdr;
clo82503[6] = kont76977;
clo82503[7] = _u45;
clo82503[8] = cons;
clo82503[9] = reverse;
clo82503[10] = lst;
void* f7698377103 = encode_clo(clo82503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7698377103;
arg_buffer[3] = n;
arg_buffer[4] = a7687777102;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam77267_fptr() // lam77267 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77268 = arg_buffer[1];
//reading env and args
void* a7688577117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env77268))[4];
//not do dummy comment
void* kont76984 = (decode_clo(env77268))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env77268))[2];
//not do dummy comment
void* n = (decode_clo(env77268))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont76984;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a7688577117;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77267 = encode_clo(alloc_clo(lam77267_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77269 = arg_buffer[1];
//reading env and args
void* kont76984 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82505 = alloc_clo(lam77267_fptr, 4);

//setting env list
clo82505[1] = n;
clo82505[2] = take_u45helper;
clo82505[3] = kont76984;
clo82505[4] = lst;
void* f7698577116 = encode_clo(clo82505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7698577116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam77271_fptr() // lam77271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77272 = arg_buffer[1];
//reading env and args
void* a7689077125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7688877121 = (decode_clo(env77272))[3];
//not do dummy comment
void* _u43 = (decode_clo(env77272))[2];
//not do dummy comment
void* kont76986 = (decode_clo(env77272))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont76986;
arg_buffer[3] = a7688877121;
arg_buffer[4] = a7689077125;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77271 = encode_clo(alloc_clo(lam77271_fptr, 0));

void* lam77273_fptr() // lam77273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77274 = arg_buffer[1];
//reading env and args
void* a7688977123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7688877121 = (decode_clo(env77274))[4];
//not do dummy comment
void* length = (decode_clo(env77274))[3];
//not do dummy comment
void* _u43 = (decode_clo(env77274))[2];
//not do dummy comment
void* kont76986 = (decode_clo(env77274))[1];

//creating new closure instance
void** clo82507 = alloc_clo(lam77271_fptr, 3);

//setting env list
clo82507[1] = kont76986;
clo82507[2] = _u43;
clo82507[3] = a7688877121;
void* f7698777124 = encode_clo(clo82507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f7698777124;
arg_buffer[3] = a7688977123;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77273 = encode_clo(alloc_clo(lam77273_fptr, 0));

void* lam77276_fptr() // lam77276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77277 = arg_buffer[1];
//reading env and args
void* a7688677119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77277))[5];
//not do dummy comment
void* lst = (decode_clo(env77277))[4];
//not do dummy comment
void* length = (decode_clo(env77277))[3];
//not do dummy comment
void* _u43 = (decode_clo(env77277))[2];
//not do dummy comment
void* kont76986 = (decode_clo(env77277))[1];

//if-clause
bool if_guard82508 = is_true(a7688677119);
if(if_guard82508)
{
mpz_t* mpzvar82509 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82509, "0", 10);
void* x7688777120 = encode_mpz(mpzvar82509);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76986);
arg_buffer[2] = x7688777120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76986))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar82510 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82510, "1", 10);
void* a7688877121 = encode_mpz(mpzvar82510);

//creating new closure instance
void** clo82512 = alloc_clo(lam77273_fptr, 4);

//setting env list
clo82512[1] = kont76986;
clo82512[2] = _u43;
clo82512[3] = length;
clo82512[4] = a7688877121;
void* f7698877122 = encode_clo(clo82512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7698877122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77276 = encode_clo(alloc_clo(lam77276_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77278 = arg_buffer[1];
//reading env and args
void* kont76986 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo82514 = alloc_clo(lam77276_fptr, 5);

//setting env list
clo82514[1] = kont76986;
clo82514[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo82514[3] = length;
clo82514[4] = lst;
clo82514[5] = cdr;
void* f7698977118 = encode_clo(clo82514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7698977118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam77279_fptr() // lam77279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77280 = arg_buffer[1];
//reading env and args
void* x7689277129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76990 = (decode_clo(env77280))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76990);
arg_buffer[2] = x7689277129;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76990))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77279 = encode_clo(alloc_clo(lam77279_fptr, 0));

void* lam77281_fptr() // lam77281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77282 = arg_buffer[1];
//reading env and args
void* a7689677137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7689477133 = (decode_clo(env77282))[3];
//not do dummy comment
void* kont76990 = (decode_clo(env77282))[2];
//not do dummy comment
void* cons = (decode_clo(env77282))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont76990;
arg_buffer[3] = a7689477133;
arg_buffer[4] = a7689677137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77281 = encode_clo(alloc_clo(lam77281_fptr, 0));

void* lam77283_fptr() // lam77283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77284 = arg_buffer[1];
//reading env and args
void* a7689577135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env77284))[5];
//not do dummy comment
void* proc = (decode_clo(env77284))[4];
//not do dummy comment
void* a7689477133 = (decode_clo(env77284))[3];
//not do dummy comment
void* kont76990 = (decode_clo(env77284))[2];
//not do dummy comment
void* cons = (decode_clo(env77284))[1];

//creating new closure instance
void** clo82516 = alloc_clo(lam77281_fptr, 3);

//setting env list
clo82516[1] = cons;
clo82516[2] = kont76990;
clo82516[3] = a7689477133;
void* f7699277136 = encode_clo(clo82516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f7699277136;
arg_buffer[3] = proc;
arg_buffer[4] = a7689577135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77283 = encode_clo(alloc_clo(lam77283_fptr, 0));

void* lam77285_fptr() // lam77285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77286 = arg_buffer[1];
//reading env and args
void* a7689477133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77286))[6];
//not do dummy comment
void* lst = (decode_clo(env77286))[5];
//not do dummy comment
void* map = (decode_clo(env77286))[4];
//not do dummy comment
void* proc = (decode_clo(env77286))[3];
//not do dummy comment
void* kont76990 = (decode_clo(env77286))[2];
//not do dummy comment
void* cons = (decode_clo(env77286))[1];

//creating new closure instance
void** clo82518 = alloc_clo(lam77283_fptr, 5);

//setting env list
clo82518[1] = cons;
clo82518[2] = kont76990;
clo82518[3] = a7689477133;
clo82518[4] = proc;
clo82518[5] = map;
void* f7699377134 = encode_clo(clo82518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7699377134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77285 = encode_clo(alloc_clo(lam77285_fptr, 0));

void* lam77287_fptr() // lam77287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77288 = arg_buffer[1];
//reading env and args
void* a7689377131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77288))[6];
//not do dummy comment
void* lst = (decode_clo(env77288))[5];
//not do dummy comment
void* map = (decode_clo(env77288))[4];
//not do dummy comment
void* proc = (decode_clo(env77288))[3];
//not do dummy comment
void* kont76990 = (decode_clo(env77288))[2];
//not do dummy comment
void* cons = (decode_clo(env77288))[1];

//creating new closure instance
void** clo82520 = alloc_clo(lam77285_fptr, 6);

//setting env list
clo82520[1] = cons;
clo82520[2] = kont76990;
clo82520[3] = proc;
clo82520[4] = map;
clo82520[5] = lst;
clo82520[6] = cdr;
void* f7699477132 = encode_clo(clo82520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f7699477132;
arg_buffer[3] = a7689377131;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77287 = encode_clo(alloc_clo(lam77287_fptr, 0));

void* lam77289_fptr() // lam77289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77290 = arg_buffer[1];
//reading env and args
void* a7689177127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env77290))[8];
//not do dummy comment
void* map = (decode_clo(env77290))[7];
//not do dummy comment
void* proc = (decode_clo(env77290))[6];
//not do dummy comment
void* cons = (decode_clo(env77290))[5];
//not do dummy comment
void* list = (decode_clo(env77290))[4];
//not do dummy comment
void* cdr = (decode_clo(env77290))[3];
//not do dummy comment
void* kont76990 = (decode_clo(env77290))[2];
//not do dummy comment
void* car = (decode_clo(env77290))[1];

//if-clause
bool if_guard82521 = is_true(a7689177127);
if(if_guard82521)
{

//creating new closure instance
void** clo82523 = alloc_clo(lam77279_fptr, 1);

//setting env list
clo82523[1] = kont76990;
void* f7699177128 = encode_clo(clo82523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7699177128;
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
void** clo82525 = alloc_clo(lam77287_fptr, 6);

//setting env list
clo82525[1] = cons;
clo82525[2] = kont76990;
clo82525[3] = proc;
clo82525[4] = map;
clo82525[5] = lst;
clo82525[6] = cdr;
void* f7699577130 = encode_clo(clo82525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7699577130;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77289 = encode_clo(alloc_clo(lam77289_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77291 = arg_buffer[1];
//reading env and args
void* kont76990 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82527 = alloc_clo(lam77289_fptr, 8);

//setting env list
clo82527[1] = car;
clo82527[2] = kont76990;
clo82527[3] = cdr;
clo82527[4] = list;
clo82527[5] = cons;
clo82527[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo82527[7] = map;
clo82527[8] = lst;
void* f7699677126 = encode_clo(clo82527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7699677126;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam77292_fptr() // lam77292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77293 = arg_buffer[1];
//reading env and args
void* x7689877141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76997 = (decode_clo(env77293))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76997);
arg_buffer[2] = x7689877141;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76997))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77292 = encode_clo(alloc_clo(lam77292_fptr, 0));

void* lam77294_fptr() // lam77294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77295 = arg_buffer[1];
//reading env and args
void* a7690377151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76997 = (decode_clo(env77295))[3];
//not do dummy comment
void* a7690177147 = (decode_clo(env77295))[2];
//not do dummy comment
void* cons = (decode_clo(env77295))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont76997;
arg_buffer[3] = a7690177147;
arg_buffer[4] = a7690377151;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77294 = encode_clo(alloc_clo(lam77294_fptr, 0));

void* lam77296_fptr() // lam77296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77297 = arg_buffer[1];
//reading env and args
void* a7690277149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76997 = (decode_clo(env77297))[5];
//not do dummy comment
void* op = (decode_clo(env77297))[4];
//not do dummy comment
void* a7690177147 = (decode_clo(env77297))[3];
//not do dummy comment
void* filter = (decode_clo(env77297))[2];
//not do dummy comment
void* cons = (decode_clo(env77297))[1];

//creating new closure instance
void** clo82529 = alloc_clo(lam77294_fptr, 3);

//setting env list
clo82529[1] = cons;
clo82529[2] = a7690177147;
clo82529[3] = kont76997;
void* f7699977150 = encode_clo(clo82529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f7699977150;
arg_buffer[3] = op;
arg_buffer[4] = a7690277149;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77296 = encode_clo(alloc_clo(lam77296_fptr, 0));

void* lam77298_fptr() // lam77298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77299 = arg_buffer[1];
//reading env and args
void* a7690177147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77299))[6];
//not do dummy comment
void* op = (decode_clo(env77299))[5];
//not do dummy comment
void* filter = (decode_clo(env77299))[4];
//not do dummy comment
void* cons = (decode_clo(env77299))[3];
//not do dummy comment
void* lst = (decode_clo(env77299))[2];
//not do dummy comment
void* kont76997 = (decode_clo(env77299))[1];

//creating new closure instance
void** clo82531 = alloc_clo(lam77296_fptr, 5);

//setting env list
clo82531[1] = cons;
clo82531[2] = filter;
clo82531[3] = a7690177147;
clo82531[4] = op;
clo82531[5] = kont76997;
void* f7700077148 = encode_clo(clo82531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7700077148;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77298 = encode_clo(alloc_clo(lam77298_fptr, 0));

void* lam77300_fptr() // lam77300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77301 = arg_buffer[1];
//reading env and args
void* a7690477153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76997 = (decode_clo(env77301))[3];
//not do dummy comment
void* op = (decode_clo(env77301))[2];
//not do dummy comment
void* filter = (decode_clo(env77301))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont76997;
arg_buffer[3] = op;
arg_buffer[4] = a7690477153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77300 = encode_clo(alloc_clo(lam77300_fptr, 0));

void* lam77302_fptr() // lam77302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77303 = arg_buffer[1];
//reading env and args
void* a7690077145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77303))[7];
//not do dummy comment
void* op = (decode_clo(env77303))[6];
//not do dummy comment
void* cons = (decode_clo(env77303))[5];
//not do dummy comment
void* lst = (decode_clo(env77303))[4];
//not do dummy comment
void* kont76997 = (decode_clo(env77303))[3];
//not do dummy comment
void* filter = (decode_clo(env77303))[2];
//not do dummy comment
void* car = (decode_clo(env77303))[1];

//if-clause
bool if_guard82532 = is_true(a7690077145);
if(if_guard82532)
{

//creating new closure instance
void** clo82534 = alloc_clo(lam77298_fptr, 6);

//setting env list
clo82534[1] = kont76997;
clo82534[2] = lst;
clo82534[3] = cons;
clo82534[4] = filter;
clo82534[5] = op;
clo82534[6] = cdr;
void* f7700177146 = encode_clo(clo82534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7700177146;
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
void** clo82536 = alloc_clo(lam77300_fptr, 3);

//setting env list
clo82536[1] = filter;
clo82536[2] = op;
clo82536[3] = kont76997;
void* f7700277152 = encode_clo(clo82536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7700277152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77302 = encode_clo(alloc_clo(lam77302_fptr, 0));

void* lam77304_fptr() // lam77304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77305 = arg_buffer[1];
//reading env and args
void* a7689977143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77305))[7];
//not do dummy comment
void* op = (decode_clo(env77305))[6];
//not do dummy comment
void* cons = (decode_clo(env77305))[5];
//not do dummy comment
void* lst = (decode_clo(env77305))[4];
//not do dummy comment
void* kont76997 = (decode_clo(env77305))[3];
//not do dummy comment
void* filter = (decode_clo(env77305))[2];
//not do dummy comment
void* car = (decode_clo(env77305))[1];

//creating new closure instance
void** clo82538 = alloc_clo(lam77302_fptr, 7);

//setting env list
clo82538[1] = car;
clo82538[2] = filter;
clo82538[3] = kont76997;
clo82538[4] = lst;
clo82538[5] = cons;
clo82538[6] = op;
clo82538[7] = cdr;
void* f7700377144 = encode_clo(clo82538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f7700377144;
arg_buffer[3] = a7689977143;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77304 = encode_clo(alloc_clo(lam77304_fptr, 0));

void* lam77306_fptr() // lam77306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77307 = arg_buffer[1];
//reading env and args
void* a7689777139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env77307))[8];
//not do dummy comment
void* cons = (decode_clo(env77307))[7];
//not do dummy comment
void* list = (decode_clo(env77307))[6];
//not do dummy comment
void* cdr = (decode_clo(env77307))[5];
//not do dummy comment
void* lst = (decode_clo(env77307))[4];
//not do dummy comment
void* kont76997 = (decode_clo(env77307))[3];
//not do dummy comment
void* filter = (decode_clo(env77307))[2];
//not do dummy comment
void* car = (decode_clo(env77307))[1];

//if-clause
bool if_guard82539 = is_true(a7689777139);
if(if_guard82539)
{

//creating new closure instance
void** clo82541 = alloc_clo(lam77292_fptr, 1);

//setting env list
clo82541[1] = kont76997;
void* f7699877140 = encode_clo(clo82541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7699877140;
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
void** clo82543 = alloc_clo(lam77304_fptr, 7);

//setting env list
clo82543[1] = car;
clo82543[2] = filter;
clo82543[3] = kont76997;
clo82543[4] = lst;
clo82543[5] = cons;
clo82543[6] = op;
clo82543[7] = cdr;
void* f7700477142 = encode_clo(clo82543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7700477142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77306 = encode_clo(alloc_clo(lam77306_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77308 = arg_buffer[1];
//reading env and args
void* kont76997 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82545 = alloc_clo(lam77306_fptr, 8);

//setting env list
clo82545[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo82545[2] = filter;
clo82545[3] = kont76997;
clo82545[4] = lst;
clo82545[5] = cdr;
clo82545[6] = list;
clo82545[7] = cons;
clo82545[8] = op;
void* f7700577138 = encode_clo(clo82545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7700577138;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam77309_fptr() // lam77309 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77310 = arg_buffer[1];
//reading env and args
void* a7690977161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env77310))[3];
//not do dummy comment
void* a7690777158 = (decode_clo(env77310))[2];
//not do dummy comment
void* kont77006 = (decode_clo(env77310))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont77006;
arg_buffer[3] = a7690777158;
arg_buffer[4] = a7690977161;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77309 = encode_clo(alloc_clo(lam77309_fptr, 0));

void* lam77312_fptr() // lam77312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77313 = arg_buffer[1];
//reading env and args
void* a7690777158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env77313))[4];
//not do dummy comment
void* _u45 = (decode_clo(env77313))[3];
//not do dummy comment
void* kont77006 = (decode_clo(env77313))[2];
//not do dummy comment
void* n = (decode_clo(env77313))[1];
mpz_t* mpzvar82546 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82546, "1", 10);
void* a7690877159 = encode_mpz(mpzvar82546);

//creating new closure instance
void** clo82548 = alloc_clo(lam77309_fptr, 3);

//setting env list
clo82548[1] = kont77006;
clo82548[2] = a7690777158;
clo82548[3] = drop;
void* f7700777160 = encode_clo(clo82548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7700777160;
arg_buffer[3] = n;
arg_buffer[4] = a7690877159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77312 = encode_clo(alloc_clo(lam77312_fptr, 0));

void* lam77314_fptr() // lam77314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77315 = arg_buffer[1];
//reading env and args
void* a7690677156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77315))[6];
//not do dummy comment
void* _u45 = (decode_clo(env77315))[5];
//not do dummy comment
void* lst = (decode_clo(env77315))[4];
//not do dummy comment
void* drop = (decode_clo(env77315))[3];
//not do dummy comment
void* kont77006 = (decode_clo(env77315))[2];
//not do dummy comment
void* n = (decode_clo(env77315))[1];

//if-clause
bool if_guard82549 = is_true(a7690677156);
if(if_guard82549)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77006);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77006))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82551 = alloc_clo(lam77312_fptr, 4);

//setting env list
clo82551[1] = n;
clo82551[2] = kont77006;
clo82551[3] = _u45;
clo82551[4] = drop;
void* f7700877157 = encode_clo(clo82551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7700877157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77314 = encode_clo(alloc_clo(lam77314_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77317 = arg_buffer[1];
//reading env and args
void* kont77006 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar82552 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82552, "0", 10);
void* a7690577154 = encode_mpz(mpzvar82552);

//creating new closure instance
void** clo82554 = alloc_clo(lam77314_fptr, 6);

//setting env list
clo82554[1] = n;
clo82554[2] = kont77006;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo82554[3] = drop;
clo82554[4] = lst;
clo82554[5] = _u45;
clo82554[6] = cdr;
void* f7700977155 = encode_clo(clo82554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7700977155;
arg_buffer[3] = n;
arg_buffer[4] = a7690577154;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam77318_fptr() // lam77318 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77319 = arg_buffer[1];
//reading env and args
void* a7691377169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont77010 = (decode_clo(env77319))[3];
//not do dummy comment
void* proc = (decode_clo(env77319))[2];
//not do dummy comment
void* a7691177165 = (decode_clo(env77319))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont77010;
arg_buffer[3] = a7691177165;
arg_buffer[4] = a7691377169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77318 = encode_clo(alloc_clo(lam77318_fptr, 0));

void* lam77320_fptr() // lam77320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77321 = arg_buffer[1];
//reading env and args
void* a7691277167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont77010 = (decode_clo(env77321))[5];
//not do dummy comment
void* foldr = (decode_clo(env77321))[4];
//not do dummy comment
void* a7691177165 = (decode_clo(env77321))[3];
//not do dummy comment
void* proc = (decode_clo(env77321))[2];
//not do dummy comment
void* acc = (decode_clo(env77321))[1];

//creating new closure instance
void** clo82556 = alloc_clo(lam77318_fptr, 3);

//setting env list
clo82556[1] = a7691177165;
clo82556[2] = proc;
clo82556[3] = kont77010;
void* f7701177168 = encode_clo(clo82556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f7701177168;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a7691277167;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77320 = encode_clo(alloc_clo(lam77320_fptr, 0));

void* lam77322_fptr() // lam77322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77323 = arg_buffer[1];
//reading env and args
void* a7691177165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77323))[6];
//not do dummy comment
void* kont77010 = (decode_clo(env77323))[5];
//not do dummy comment
void* foldr = (decode_clo(env77323))[4];
//not do dummy comment
void* lst = (decode_clo(env77323))[3];
//not do dummy comment
void* proc = (decode_clo(env77323))[2];
//not do dummy comment
void* acc = (decode_clo(env77323))[1];

//creating new closure instance
void** clo82558 = alloc_clo(lam77320_fptr, 5);

//setting env list
clo82558[1] = acc;
clo82558[2] = proc;
clo82558[3] = a7691177165;
clo82558[4] = foldr;
clo82558[5] = kont77010;
void* f7701277166 = encode_clo(clo82558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7701277166;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77322 = encode_clo(alloc_clo(lam77322_fptr, 0));

void* lam77324_fptr() // lam77324 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77325 = arg_buffer[1];
//reading env and args
void* a7691077163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77325))[7];
//not do dummy comment
void* kont77010 = (decode_clo(env77325))[6];
//not do dummy comment
void* car = (decode_clo(env77325))[5];
//not do dummy comment
void* foldr = (decode_clo(env77325))[4];
//not do dummy comment
void* lst = (decode_clo(env77325))[3];
//not do dummy comment
void* proc = (decode_clo(env77325))[2];
//not do dummy comment
void* acc = (decode_clo(env77325))[1];

//if-clause
bool if_guard82559 = is_true(a7691077163);
if(if_guard82559)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77010);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77010))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82561 = alloc_clo(lam77322_fptr, 6);

//setting env list
clo82561[1] = acc;
clo82561[2] = proc;
clo82561[3] = lst;
clo82561[4] = foldr;
clo82561[5] = kont77010;
clo82561[6] = cdr;
void* f7701377164 = encode_clo(clo82561);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7701377164;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77324 = encode_clo(alloc_clo(lam77324_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77326 = arg_buffer[1];
//reading env and args
void* kont77010 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo82563 = alloc_clo(lam77324_fptr, 7);

//setting env list
clo82563[1] = acc;
clo82563[2] = proc;
clo82563[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo82563[4] = foldr;
clo82563[5] = car;
clo82563[6] = kont77010;
clo82563[7] = cdr;
void* f7701477162 = encode_clo(clo82563);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7701477162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam77327_fptr() // lam77327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77328 = arg_buffer[1];
//reading env and args
void* a7691777177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7691577173 = (decode_clo(env77328))[3];
//not do dummy comment
void* kont77015 = (decode_clo(env77328))[2];
//not do dummy comment
void* cons = (decode_clo(env77328))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont77015;
arg_buffer[3] = a7691577173;
arg_buffer[4] = a7691777177;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77327 = encode_clo(alloc_clo(lam77327_fptr, 0));

void* lam77329_fptr() // lam77329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77330 = arg_buffer[1];
//reading env and args
void* a7691677175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7691577173 = (decode_clo(env77330))[5];
//not do dummy comment
void* kont77015 = (decode_clo(env77330))[4];
//not do dummy comment
void* append = (decode_clo(env77330))[3];
//not do dummy comment
void* lst2 = (decode_clo(env77330))[2];
//not do dummy comment
void* cons = (decode_clo(env77330))[1];

//creating new closure instance
void** clo82565 = alloc_clo(lam77327_fptr, 3);

//setting env list
clo82565[1] = cons;
clo82565[2] = kont77015;
clo82565[3] = a7691577173;
void* f7701677176 = encode_clo(clo82565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f7701677176;
arg_buffer[3] = a7691677175;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77329 = encode_clo(alloc_clo(lam77329_fptr, 0));

void* lam77331_fptr() // lam77331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77332 = arg_buffer[1];
//reading env and args
void* a7691577173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77332))[6];
//not do dummy comment
void* kont77015 = (decode_clo(env77332))[5];
//not do dummy comment
void* append = (decode_clo(env77332))[4];
//not do dummy comment
void* lst2 = (decode_clo(env77332))[3];
//not do dummy comment
void* lst1 = (decode_clo(env77332))[2];
//not do dummy comment
void* cons = (decode_clo(env77332))[1];

//creating new closure instance
void** clo82567 = alloc_clo(lam77329_fptr, 5);

//setting env list
clo82567[1] = cons;
clo82567[2] = lst2;
clo82567[3] = append;
clo82567[4] = kont77015;
clo82567[5] = a7691577173;
void* f7701777174 = encode_clo(clo82567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7701777174;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77331 = encode_clo(alloc_clo(lam77331_fptr, 0));

void* lam77333_fptr() // lam77333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77334 = arg_buffer[1];
//reading env and args
void* a7691477171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env77334))[7];
//not do dummy comment
void* kont77015 = (decode_clo(env77334))[6];
//not do dummy comment
void* append = (decode_clo(env77334))[5];
//not do dummy comment
void* lst2 = (decode_clo(env77334))[4];
//not do dummy comment
void* cons = (decode_clo(env77334))[3];
//not do dummy comment
void* lst1 = (decode_clo(env77334))[2];
//not do dummy comment
void* car = (decode_clo(env77334))[1];

//if-clause
bool if_guard82568 = is_true(a7691477171);
if(if_guard82568)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77015);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77015))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82570 = alloc_clo(lam77331_fptr, 6);

//setting env list
clo82570[1] = cons;
clo82570[2] = lst1;
clo82570[3] = lst2;
clo82570[4] = append;
clo82570[5] = kont77015;
clo82570[6] = cdr;
void* f7701877172 = encode_clo(clo82570);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7701877172;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam77333 = encode_clo(alloc_clo(lam77333_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77335 = arg_buffer[1];
//reading env and args
void* kont77015 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82572 = alloc_clo(lam77333_fptr, 7);

//setting env list
clo82572[1] = car;
clo82572[2] = lst1;
clo82572[3] = cons;
clo82572[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo82572[5] = append;
clo82572[6] = kont77015;
clo82572[7] = cdr;
void* f7701977170 = encode_clo(clo82572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7701977170;
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
void* _77336 = arg_buffer[1];
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

void* kont7702077178 = prim_car(lst);
void* lst77179 = prim_cdr(lst);
void* x7691877180 = apply_prim_hash(lst77179);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7702077178);
arg_buffer[2] = x7691877180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7702077178))[0]);
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
void* _77337 = arg_buffer[1];
//reading env and args
void* kont77022 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7691977181 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77022);
arg_buffer[2] = x7691977181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77022))[0]);
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
void* _77338 = arg_buffer[1];
//reading env and args
void* kont77023 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x7692077182 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77023);
arg_buffer[2] = x7692077182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77023))[0]);
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
void* _77339 = arg_buffer[1];
//reading env and args
void* kont77024 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7692177183 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77024);
arg_buffer[2] = x7692177183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77024))[0]);
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
void* _77340 = arg_buffer[1];
//reading env and args
void* kont77025 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x7692277184 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77025);
arg_buffer[2] = x7692277184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77025))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam77341_fptr() // lam77341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77342 = arg_buffer[1];
//reading env and args
void* a7692777190 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont77026 = (decode_clo(env77342))[2];
//not do dummy comment
void* length = (decode_clo(env77342))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = kont77026;
arg_buffer[3] = a7692777190;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77341 = encode_clo(alloc_clo(lam77341_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77347 = arg_buffer[1];
//reading env and args
void* kont77026 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar82573 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82573, "1", 10);
void* a7692377185 = encode_mpz(mpzvar82573);
mpz_t* mpzvar82574 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82574, "2", 10);
void* a7692477186 = encode_mpz(mpzvar82574);
mpz_t* mpzvar82575 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82575, "3", 10);
void* a7692577187 = encode_mpz(mpzvar82575);
mpz_t* mpzvar82576 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82576, "4", 10);
void* a7692677188 = encode_mpz(mpzvar82576);

//creating new closure instance
void** clo82578 = alloc_clo(lam77341_fptr, 2);

//setting env list
clo82578[1] = length;
clo82578[2] = kont77026;
void* f7702777189 = encode_clo(clo82578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7702777189;
arg_buffer[3] = a7692377185;
arg_buffer[4] = a7692477186;
arg_buffer[5] = a7692577187;
arg_buffer[6] = a7692677188;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam77348_fptr() // lam77348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env77349 = arg_buffer[1];
//reading env and args
void* x7692877192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont77028 = (decode_clo(env77349))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont77028);
arg_buffer[2] = x7692877192;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont77028))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam77348 = encode_clo(alloc_clo(lam77348_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _77350 = arg_buffer[1];
//reading env and args
void* kont77028 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo82580 = alloc_clo(lam77348_fptr, 1);

//setting env list
clo82580[1] = kont77028;
void* f7702977191 = encode_clo(clo82580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f7702977191;
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

