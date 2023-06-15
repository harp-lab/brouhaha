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
void* _38289 = arg_buffer[1];
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

void* kont3801338118 = prim_car(lst);
void* lst38119 = prim_cdr(lst);
void* x3792038120 = apply_prim__u43(lst38119);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3801338118);
arg_buffer[2] = x3792038120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3801338118))[0]);
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
void* _38290 = arg_buffer[1];
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

void* kont3801538121 = prim_car(lst);
void* lst38122 = prim_cdr(lst);
void* x3792138123 = apply_prim__u45(lst38122);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3801538121);
arg_buffer[2] = x3792138123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3801538121))[0]);
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
void* _38291 = arg_buffer[1];
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

void* kont3801738124 = prim_car(lst);
void* lst38125 = prim_cdr(lst);
void* x3792238126 = apply_prim__u42(lst38125);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3801738124);
arg_buffer[2] = x3792238126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3801738124))[0]);
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
void* _38292 = arg_buffer[1];
//reading env and args
void* kont38019 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3792338127 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38019);
arg_buffer[2] = x3792338127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38019))[0]);
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
void* _38293 = arg_buffer[1];
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

void* kont3802038128 = prim_car(lst);
void* lst38129 = prim_cdr(lst);
void* x3792438130 = apply_prim__u47(lst38129);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3802038128);
arg_buffer[2] = x3792438130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3802038128))[0]);
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
void* _38294 = arg_buffer[1];
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

void* kont3802238131 = prim_car(lst);
void* lst38132 = prim_cdr(lst);
void* x3792538133 = apply_prim__u61(lst38132);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3802238131);
arg_buffer[2] = x3792538133;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3802238131))[0]);
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
void* _38295 = arg_buffer[1];
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

void* kont3802438134 = prim_car(lst);
void* lst38135 = prim_cdr(lst);
void* x3792638136 = apply_prim__u62(lst38135);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3802438134);
arg_buffer[2] = x3792638136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3802438134))[0]);
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
void* _38296 = arg_buffer[1];
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

void* kont3802638137 = prim_car(lst);
void* lst38138 = prim_cdr(lst);
void* x3792738139 = apply_prim__u60(lst38138);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3802638137);
arg_buffer[2] = x3792738139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3802638137))[0]);
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
void* _38297 = arg_buffer[1];
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

void* kont3802838140 = prim_car(lst);
void* lst38141 = prim_cdr(lst);
void* x3792838142 = apply_prim__u60_u61(lst38141);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3802838140);
arg_buffer[2] = x3792838142;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3802838140))[0]);
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
void* _38298 = arg_buffer[1];
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

void* kont3803038143 = prim_car(lst);
void* lst38144 = prim_cdr(lst);
void* x3792938145 = apply_prim__u62_u61(lst38144);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3803038143);
arg_buffer[2] = x3792938145;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3803038143))[0]);
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
void* _38299 = arg_buffer[1];
//reading env and args
void* kont38032 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3793038146 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38032);
arg_buffer[2] = x3793038146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38032))[0]);
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
void* _38300 = arg_buffer[1];
//reading env and args
void* kont38033 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3793138147 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38033);
arg_buffer[2] = x3793138147;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38033))[0]);
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
void* _38301 = arg_buffer[1];
//reading env and args
void* kont38034 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3793238148 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38034);
arg_buffer[2] = x3793238148;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38034))[0]);
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
void* _38302 = arg_buffer[1];
//reading env and args
void* kont38035 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3793338149 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38035);
arg_buffer[2] = x3793338149;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38035))[0]);
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
void* _38303 = arg_buffer[1];
//reading env and args
void* kont38036 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3793438150 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38036);
arg_buffer[2] = x3793438150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38036))[0]);
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
void* _38304 = arg_buffer[1];
//reading env and args
void* kont38037 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3793538151 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38037);
arg_buffer[2] = x3793538151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38037))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam38305_fptr() // lam38305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38306 = arg_buffer[1];
//reading env and args
void* a3793838155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env38306))[3];
//not do dummy comment
void* kont38038 = (decode_clo(env38306))[2];
//not do dummy comment
void* a3793638152 = (decode_clo(env38306))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont38038;
arg_buffer[3] = a3793638152;
arg_buffer[4] = a3793838155;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38305 = encode_clo(alloc_clo(lam38305_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38309 = arg_buffer[1];
//reading env and args
void* kont38038 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar39291 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39291, "0", 10);
void* a3793638152 = encode_mpz(mpzvar39291);
mpz_t* mpzvar39292 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39292, "2", 10);
void* a3793738153 = encode_mpz(mpzvar39292);

//creating new closure instance
void** clo39294 = alloc_clo(lam38305_fptr, 3);

//setting env list
clo39294[1] = a3793638152;
clo39294[2] = kont38038;
clo39294[3] = equal_u63;
void* f3803938154 = encode_clo(clo39294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3803938154;
arg_buffer[3] = x;
arg_buffer[4] = a3793738153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam38310_fptr() // lam38310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38311 = arg_buffer[1];
//reading env and args
void* a3794138159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3793938156 = (decode_clo(env38311))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env38311))[2];
//not do dummy comment
void* kont38040 = (decode_clo(env38311))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont38040;
arg_buffer[3] = a3793938156;
arg_buffer[4] = a3794138159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38310 = encode_clo(alloc_clo(lam38310_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38314 = arg_buffer[1];
//reading env and args
void* kont38040 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar39295 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39295, "1", 10);
void* a3793938156 = encode_mpz(mpzvar39295);
mpz_t* mpzvar39296 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39296, "2", 10);
void* a3794038157 = encode_mpz(mpzvar39296);

//creating new closure instance
void** clo39298 = alloc_clo(lam38310_fptr, 3);

//setting env list
clo39298[1] = kont38040;
clo39298[2] = equal_u63;
clo39298[3] = a3793938156;
void* f3804138158 = encode_clo(clo39298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3804138158;
arg_buffer[3] = x;
arg_buffer[4] = a3794038157;
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
void* _38315 = arg_buffer[1];
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

void* kont3804238160 = prim_car(x);
void* x38161 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3804238160);
arg_buffer[2] = x38161;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3804238160))[0]);
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
void* _38316 = arg_buffer[1];
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

void* kont3804438162 = prim_car(lst);
void* lst38163 = prim_cdr(lst);
void* x3794238164 = apply_prim_and(lst38163);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3804438162);
arg_buffer[2] = x3794238164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3804438162))[0]);
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
void* _38317 = arg_buffer[1];
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

void* kont3804638165 = prim_car(lst);
void* lst38166 = prim_cdr(lst);
void* x3794338167 = apply_prim_or(lst38166);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3804638165);
arg_buffer[2] = x3794338167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3804638165))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam38320_fptr() // lam38320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38321 = arg_buffer[1];
//reading env and args
void* a3794938177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38048 = (decode_clo(env38321))[3];
//not do dummy comment
void* x = (decode_clo(env38321))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38321))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont38048;
arg_buffer[3] = x;
arg_buffer[4] = a3794938177;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38320 = encode_clo(alloc_clo(lam38320_fptr, 0));

void* lam38322_fptr() // lam38322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38323 = arg_buffer[1];
//reading env and args
void* a3794738174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38323))[5];
//not do dummy comment
void* lst = (decode_clo(env38323))[4];
//not do dummy comment
void* kont38048 = (decode_clo(env38323))[3];
//not do dummy comment
void* x = (decode_clo(env38323))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38323))[1];

//if-clause
bool if_guard39299 = is_true(a3794738174);
if(if_guard39299)
{
void* x3794838175 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38048);
arg_buffer[2] = x3794838175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38048))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39301 = alloc_clo(lam38320_fptr, 3);

//setting env list
clo39301[1] = member_u63;
clo39301[2] = x;
clo39301[3] = kont38048;
void* f3804938176 = encode_clo(clo39301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3804938176;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38322 = encode_clo(alloc_clo(lam38322_fptr, 0));

void* lam38324_fptr() // lam38324 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38325 = arg_buffer[1];
//reading env and args
void* a3794638172 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38325))[6];
//not do dummy comment
void* lst = (decode_clo(env38325))[5];
//not do dummy comment
void* kont38048 = (decode_clo(env38325))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env38325))[3];
//not do dummy comment
void* x = (decode_clo(env38325))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38325))[1];

//creating new closure instance
void** clo39303 = alloc_clo(lam38322_fptr, 5);

//setting env list
clo39303[1] = member_u63;
clo39303[2] = x;
clo39303[3] = kont38048;
clo39303[4] = lst;
clo39303[5] = cdr;
void* f3805038173 = encode_clo(clo39303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3805038173;
arg_buffer[3] = a3794638172;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38324 = encode_clo(alloc_clo(lam38324_fptr, 0));

void* lam38326_fptr() // lam38326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38327 = arg_buffer[1];
//reading env and args
void* a3794438169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38327))[7];
//not do dummy comment
void* lst = (decode_clo(env38327))[6];
//not do dummy comment
void* kont38048 = (decode_clo(env38327))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env38327))[4];
//not do dummy comment
void* x = (decode_clo(env38327))[3];
//not do dummy comment
void* car = (decode_clo(env38327))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38327))[1];

//if-clause
bool if_guard39304 = is_true(a3794438169);
if(if_guard39304)
{
void* x3794538170 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38048);
arg_buffer[2] = x3794538170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38048))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39306 = alloc_clo(lam38324_fptr, 6);

//setting env list
clo39306[1] = member_u63;
clo39306[2] = x;
clo39306[3] = equal_u63;
clo39306[4] = kont38048;
clo39306[5] = lst;
clo39306[6] = cdr;
void* f3805138171 = encode_clo(clo39306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3805138171;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38326 = encode_clo(alloc_clo(lam38326_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38328 = arg_buffer[1];
//reading env and args
void* kont38048 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39308 = alloc_clo(lam38326_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo39308[1] = member_u63;
clo39308[2] = car;
clo39308[3] = x;
clo39308[4] = equal_u63;
clo39308[5] = kont38048;
clo39308[6] = lst;
clo39308[7] = cdr;
void* f3805238168 = encode_clo(clo39308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3805238168;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam38329_fptr() // lam38329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38330 = arg_buffer[1];
//reading env and args
void* a3795338185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3795238183 = (decode_clo(env38330))[4];
//not do dummy comment
void* foldl = (decode_clo(env38330))[3];
//not do dummy comment
void* kont38053 = (decode_clo(env38330))[2];
//not do dummy comment
void* fun = (decode_clo(env38330))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont38053;
arg_buffer[3] = fun;
arg_buffer[4] = a3795238183;
arg_buffer[5] = a3795338185;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38329 = encode_clo(alloc_clo(lam38329_fptr, 0));

void* lam38331_fptr() // lam38331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38332 = arg_buffer[1];
//reading env and args
void* a3795238183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38332))[5];
//not do dummy comment
void* lst = (decode_clo(env38332))[4];
//not do dummy comment
void* foldl = (decode_clo(env38332))[3];
//not do dummy comment
void* kont38053 = (decode_clo(env38332))[2];
//not do dummy comment
void* fun = (decode_clo(env38332))[1];

//creating new closure instance
void** clo39310 = alloc_clo(lam38329_fptr, 4);

//setting env list
clo39310[1] = fun;
clo39310[2] = kont38053;
clo39310[3] = foldl;
clo39310[4] = a3795238183;
void* f3805438184 = encode_clo(clo39310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3805438184;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38331 = encode_clo(alloc_clo(lam38331_fptr, 0));

void* lam38333_fptr() // lam38333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38334 = arg_buffer[1];
//reading env and args
void* a3795138181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38334))[6];
//not do dummy comment
void* lst = (decode_clo(env38334))[5];
//not do dummy comment
void* acc = (decode_clo(env38334))[4];
//not do dummy comment
void* foldl = (decode_clo(env38334))[3];
//not do dummy comment
void* kont38053 = (decode_clo(env38334))[2];
//not do dummy comment
void* fun = (decode_clo(env38334))[1];

//creating new closure instance
void** clo39312 = alloc_clo(lam38331_fptr, 5);

//setting env list
clo39312[1] = fun;
clo39312[2] = kont38053;
clo39312[3] = foldl;
clo39312[4] = lst;
clo39312[5] = cdr;
void* f3805538182 = encode_clo(clo39312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3805538182;
arg_buffer[3] = a3795138181;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38333 = encode_clo(alloc_clo(lam38333_fptr, 0));

void* lam38335_fptr() // lam38335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38336 = arg_buffer[1];
//reading env and args
void* a3795038179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38336))[7];
//not do dummy comment
void* lst = (decode_clo(env38336))[6];
//not do dummy comment
void* acc = (decode_clo(env38336))[5];
//not do dummy comment
void* car = (decode_clo(env38336))[4];
//not do dummy comment
void* foldl = (decode_clo(env38336))[3];
//not do dummy comment
void* kont38053 = (decode_clo(env38336))[2];
//not do dummy comment
void* fun = (decode_clo(env38336))[1];

//if-clause
bool if_guard39313 = is_true(a3795038179);
if(if_guard39313)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38053);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38053))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39315 = alloc_clo(lam38333_fptr, 6);

//setting env list
clo39315[1] = fun;
clo39315[2] = kont38053;
clo39315[3] = foldl;
clo39315[4] = acc;
clo39315[5] = lst;
clo39315[6] = cdr;
void* f3805638180 = encode_clo(clo39315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3805638180;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38335 = encode_clo(alloc_clo(lam38335_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38337 = arg_buffer[1];
//reading env and args
void* kont38053 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo39317 = alloc_clo(lam38335_fptr, 7);

//setting env list
clo39317[1] = fun;
clo39317[2] = kont38053;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo39317[3] = foldl;
clo39317[4] = car;
clo39317[5] = acc;
clo39317[6] = lst;
clo39317[7] = cdr;
void* f3805738178 = encode_clo(clo39317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3805738178;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam38338_fptr() // lam38338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38339 = arg_buffer[1];
//reading env and args
void* a3795738193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3795538189 = (decode_clo(env38339))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38339))[2];
//not do dummy comment
void* kont38058 = (decode_clo(env38339))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont38058;
arg_buffer[3] = a3795538189;
arg_buffer[4] = a3795738193;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38338 = encode_clo(alloc_clo(lam38338_fptr, 0));

void* lam38340_fptr() // lam38340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38341 = arg_buffer[1];
//reading env and args
void* a3795638191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3795538189 = (decode_clo(env38341))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38341))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38341))[3];
//not do dummy comment
void* cons = (decode_clo(env38341))[2];
//not do dummy comment
void* kont38058 = (decode_clo(env38341))[1];

//creating new closure instance
void** clo39319 = alloc_clo(lam38338_fptr, 3);

//setting env list
clo39319[1] = kont38058;
clo39319[2] = reverse_u45helper;
clo39319[3] = a3795538189;
void* f3805938192 = encode_clo(clo39319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3805938192;
arg_buffer[3] = a3795638191;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38340 = encode_clo(alloc_clo(lam38340_fptr, 0));

void* lam38342_fptr() // lam38342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38343 = arg_buffer[1];
//reading env and args
void* a3795538189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38343))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38343))[5];
//not do dummy comment
void* lst2 = (decode_clo(env38343))[4];
//not do dummy comment
void* car = (decode_clo(env38343))[3];
//not do dummy comment
void* cons = (decode_clo(env38343))[2];
//not do dummy comment
void* kont38058 = (decode_clo(env38343))[1];

//creating new closure instance
void** clo39321 = alloc_clo(lam38340_fptr, 5);

//setting env list
clo39321[1] = kont38058;
clo39321[2] = cons;
clo39321[3] = lst2;
clo39321[4] = reverse_u45helper;
clo39321[5] = a3795538189;
void* f3806038190 = encode_clo(clo39321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3806038190;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38342 = encode_clo(alloc_clo(lam38342_fptr, 0));

void* lam38344_fptr() // lam38344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38345 = arg_buffer[1];
//reading env and args
void* a3795438187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38345))[7];
//not do dummy comment
void* lst = (decode_clo(env38345))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38345))[5];
//not do dummy comment
void* lst2 = (decode_clo(env38345))[4];
//not do dummy comment
void* car = (decode_clo(env38345))[3];
//not do dummy comment
void* cons = (decode_clo(env38345))[2];
//not do dummy comment
void* kont38058 = (decode_clo(env38345))[1];

//if-clause
bool if_guard39322 = is_true(a3795438187);
if(if_guard39322)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38058);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38058))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39324 = alloc_clo(lam38342_fptr, 6);

//setting env list
clo39324[1] = kont38058;
clo39324[2] = cons;
clo39324[3] = car;
clo39324[4] = lst2;
clo39324[5] = reverse_u45helper;
clo39324[6] = lst;
void* f3806138188 = encode_clo(clo39324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3806138188;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38344 = encode_clo(alloc_clo(lam38344_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38346 = arg_buffer[1];
//reading env and args
void* kont38058 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39326 = alloc_clo(lam38344_fptr, 7);

//setting env list
clo39326[1] = kont38058;
clo39326[2] = cons;
clo39326[3] = car;
clo39326[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo39326[5] = reverse_u45helper;
clo39326[6] = lst;
clo39326[7] = cdr;
void* f3806238186 = encode_clo(clo39326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3806238186;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam38347_fptr() // lam38347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38348 = arg_buffer[1];
//reading env and args
void* a3795838195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38348))[3];
//not do dummy comment
void* lst = (decode_clo(env38348))[2];
//not do dummy comment
void* kont38063 = (decode_clo(env38348))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont38063;
arg_buffer[3] = lst;
arg_buffer[4] = a3795838195;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38347 = encode_clo(alloc_clo(lam38347_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38349 = arg_buffer[1];
//reading env and args
void* kont38063 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo39328 = alloc_clo(lam38347_fptr, 3);

//setting env list
clo39328[1] = kont38063;
clo39328[2] = lst;
clo39328[3] = reverse_u45helper;
void* f3806438194 = encode_clo(clo39328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3806438194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam38350_fptr() // lam38350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38351 = arg_buffer[1];
//reading env and args
void* x3796138200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38065 = (decode_clo(env38351))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38065);
arg_buffer[2] = x3796138200;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38065))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38350 = encode_clo(alloc_clo(lam38350_fptr, 0));

void* lam38352_fptr() // lam38352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38353 = arg_buffer[1];
//reading env and args
void* a3796638209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3796438205 = (decode_clo(env38353))[4];
//not do dummy comment
void* kont38065 = (decode_clo(env38353))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38353))[2];
//not do dummy comment
void* a3796238202 = (decode_clo(env38353))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont38065;
arg_buffer[3] = a3796238202;
arg_buffer[4] = a3796438205;
arg_buffer[5] = a3796638209;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38352 = encode_clo(alloc_clo(lam38352_fptr, 0));

void* lam38354_fptr() // lam38354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38355 = arg_buffer[1];
//reading env and args
void* a3796538207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3796438205 = (decode_clo(env38355))[6];
//not do dummy comment
void* kont38065 = (decode_clo(env38355))[5];
//not do dummy comment
void* cons = (decode_clo(env38355))[4];
//not do dummy comment
void* a3796238202 = (decode_clo(env38355))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38355))[2];
//not do dummy comment
void* lst2 = (decode_clo(env38355))[1];

//creating new closure instance
void** clo39330 = alloc_clo(lam38352_fptr, 4);

//setting env list
clo39330[1] = a3796238202;
clo39330[2] = take_u45helper;
clo39330[3] = kont38065;
clo39330[4] = a3796438205;
void* f3806738208 = encode_clo(clo39330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3806738208;
arg_buffer[3] = a3796538207;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38354 = encode_clo(alloc_clo(lam38354_fptr, 0));

void* lam38356_fptr() // lam38356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38357 = arg_buffer[1];
//reading env and args
void* a3796438205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38357))[7];
//not do dummy comment
void* kont38065 = (decode_clo(env38357))[6];
//not do dummy comment
void* car = (decode_clo(env38357))[5];
//not do dummy comment
void* cons = (decode_clo(env38357))[4];
//not do dummy comment
void* a3796238202 = (decode_clo(env38357))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38357))[2];
//not do dummy comment
void* lst2 = (decode_clo(env38357))[1];

//creating new closure instance
void** clo39332 = alloc_clo(lam38354_fptr, 6);

//setting env list
clo39332[1] = lst2;
clo39332[2] = take_u45helper;
clo39332[3] = a3796238202;
clo39332[4] = cons;
clo39332[5] = kont38065;
clo39332[6] = a3796438205;
void* f3806838206 = encode_clo(clo39332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3806838206;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38356 = encode_clo(alloc_clo(lam38356_fptr, 0));

void* lam38359_fptr() // lam38359 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38360 = arg_buffer[1];
//reading env and args
void* a3796238202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38360))[8];
//not do dummy comment
void* kont38065 = (decode_clo(env38360))[7];
//not do dummy comment
void* cons = (decode_clo(env38360))[6];
//not do dummy comment
void* _u45 = (decode_clo(env38360))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env38360))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38360))[3];
//not do dummy comment
void* n = (decode_clo(env38360))[2];
//not do dummy comment
void* car = (decode_clo(env38360))[1];
mpz_t* mpzvar39333 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39333, "1", 10);
void* a3796338203 = encode_mpz(mpzvar39333);

//creating new closure instance
void** clo39335 = alloc_clo(lam38356_fptr, 7);

//setting env list
clo39335[1] = lst2;
clo39335[2] = take_u45helper;
clo39335[3] = a3796238202;
clo39335[4] = cons;
clo39335[5] = car;
clo39335[6] = kont38065;
clo39335[7] = lst;
void* f3806938204 = encode_clo(clo39335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3806938204;
arg_buffer[3] = n;
arg_buffer[4] = a3796338203;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38359 = encode_clo(alloc_clo(lam38359_fptr, 0));

void* lam38361_fptr() // lam38361 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38362 = arg_buffer[1];
//reading env and args
void* a3796038198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38362))[10];
//not do dummy comment
void* lst = (decode_clo(env38362))[9];
//not do dummy comment
void* kont38065 = (decode_clo(env38362))[8];
//not do dummy comment
void* reverse = (decode_clo(env38362))[7];
//not do dummy comment
void* cons = (decode_clo(env38362))[6];
//not do dummy comment
void* _u45 = (decode_clo(env38362))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env38362))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38362))[3];
//not do dummy comment
void* n = (decode_clo(env38362))[2];
//not do dummy comment
void* car = (decode_clo(env38362))[1];

//if-clause
bool if_guard39336 = is_true(a3796038198);
if(if_guard39336)
{

//creating new closure instance
void** clo39338 = alloc_clo(lam38350_fptr, 1);

//setting env list
clo39338[1] = kont38065;
void* f3806638199 = encode_clo(clo39338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3806638199;
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
void** clo39340 = alloc_clo(lam38359_fptr, 8);

//setting env list
clo39340[1] = car;
clo39340[2] = n;
clo39340[3] = lst2;
clo39340[4] = take_u45helper;
clo39340[5] = _u45;
clo39340[6] = cons;
clo39340[7] = kont38065;
clo39340[8] = lst;
void* f3807038201 = encode_clo(clo39340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3807038201;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38361 = encode_clo(alloc_clo(lam38361_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38364 = arg_buffer[1];
//reading env and args
void* kont38065 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar39341 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39341, "0", 10);
void* a3795938196 = encode_mpz(mpzvar39341);

//creating new closure instance
void** clo39343 = alloc_clo(lam38361_fptr, 10);

//setting env list
clo39343[1] = car;
clo39343[2] = n;
clo39343[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo39343[4] = take_u45helper;
clo39343[5] = _u45;
clo39343[6] = cons;
clo39343[7] = reverse;
clo39343[8] = kont38065;
clo39343[9] = lst;
clo39343[10] = cdr;
void* f3807138197 = encode_clo(clo39343);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3807138197;
arg_buffer[3] = n;
arg_buffer[4] = a3795938196;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam38365_fptr() // lam38365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38366 = arg_buffer[1];
//reading env and args
void* a3796738211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38366))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env38366))[3];
//not do dummy comment
void* kont38072 = (decode_clo(env38366))[2];
//not do dummy comment
void* n = (decode_clo(env38366))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont38072;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3796738211;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38365 = encode_clo(alloc_clo(lam38365_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38367 = arg_buffer[1];
//reading env and args
void* kont38072 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39345 = alloc_clo(lam38365_fptr, 4);

//setting env list
clo39345[1] = n;
clo39345[2] = kont38072;
clo39345[3] = take_u45helper;
clo39345[4] = lst;
void* f3807338210 = encode_clo(clo39345);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3807338210;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam38369_fptr() // lam38369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38370 = arg_buffer[1];
//reading env and args
void* a3797238219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env38370))[3];
//not do dummy comment
void* a3797038215 = (decode_clo(env38370))[2];
//not do dummy comment
void* kont38074 = (decode_clo(env38370))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont38074;
arg_buffer[3] = a3797038215;
arg_buffer[4] = a3797238219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38369 = encode_clo(alloc_clo(lam38369_fptr, 0));

void* lam38371_fptr() // lam38371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38372 = arg_buffer[1];
//reading env and args
void* a3797138217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env38372))[4];
//not do dummy comment
void* _u43 = (decode_clo(env38372))[3];
//not do dummy comment
void* a3797038215 = (decode_clo(env38372))[2];
//not do dummy comment
void* kont38074 = (decode_clo(env38372))[1];

//creating new closure instance
void** clo39347 = alloc_clo(lam38369_fptr, 3);

//setting env list
clo39347[1] = kont38074;
clo39347[2] = a3797038215;
clo39347[3] = _u43;
void* f3807538218 = encode_clo(clo39347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3807538218;
arg_buffer[3] = a3797138217;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38371 = encode_clo(alloc_clo(lam38371_fptr, 0));

void* lam38374_fptr() // lam38374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38375 = arg_buffer[1];
//reading env and args
void* a3796838213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38375))[5];
//not do dummy comment
void* lst = (decode_clo(env38375))[4];
//not do dummy comment
void* length = (decode_clo(env38375))[3];
//not do dummy comment
void* _u43 = (decode_clo(env38375))[2];
//not do dummy comment
void* kont38074 = (decode_clo(env38375))[1];

//if-clause
bool if_guard39348 = is_true(a3796838213);
if(if_guard39348)
{
mpz_t* mpzvar39349 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39349, "0", 10);
void* x3796938214 = encode_mpz(mpzvar39349);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38074);
arg_buffer[2] = x3796938214;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38074))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar39350 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39350, "1", 10);
void* a3797038215 = encode_mpz(mpzvar39350);

//creating new closure instance
void** clo39352 = alloc_clo(lam38371_fptr, 4);

//setting env list
clo39352[1] = kont38074;
clo39352[2] = a3797038215;
clo39352[3] = _u43;
clo39352[4] = length;
void* f3807638216 = encode_clo(clo39352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3807638216;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38374 = encode_clo(alloc_clo(lam38374_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38376 = arg_buffer[1];
//reading env and args
void* kont38074 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo39354 = alloc_clo(lam38374_fptr, 5);

//setting env list
clo39354[1] = kont38074;
clo39354[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo39354[3] = length;
clo39354[4] = lst;
clo39354[5] = cdr;
void* f3807738212 = encode_clo(clo39354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3807738212;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam38377_fptr() // lam38377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38378 = arg_buffer[1];
//reading env and args
void* x3797438223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38078 = (decode_clo(env38378))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38078);
arg_buffer[2] = x3797438223;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38078))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38377 = encode_clo(alloc_clo(lam38377_fptr, 0));

void* lam38379_fptr() // lam38379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38380 = arg_buffer[1];
//reading env and args
void* a3797838231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38078 = (decode_clo(env38380))[3];
//not do dummy comment
void* a3797638227 = (decode_clo(env38380))[2];
//not do dummy comment
void* cons = (decode_clo(env38380))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont38078;
arg_buffer[3] = a3797638227;
arg_buffer[4] = a3797838231;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38379 = encode_clo(alloc_clo(lam38379_fptr, 0));

void* lam38381_fptr() // lam38381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38382 = arg_buffer[1];
//reading env and args
void* a3797738229 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38078 = (decode_clo(env38382))[5];
//not do dummy comment
void* map = (decode_clo(env38382))[4];
//not do dummy comment
void* a3797638227 = (decode_clo(env38382))[3];
//not do dummy comment
void* proc = (decode_clo(env38382))[2];
//not do dummy comment
void* cons = (decode_clo(env38382))[1];

//creating new closure instance
void** clo39356 = alloc_clo(lam38379_fptr, 3);

//setting env list
clo39356[1] = cons;
clo39356[2] = a3797638227;
clo39356[3] = kont38078;
void* f3808038230 = encode_clo(clo39356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3808038230;
arg_buffer[3] = proc;
arg_buffer[4] = a3797738229;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38381 = encode_clo(alloc_clo(lam38381_fptr, 0));

void* lam38383_fptr() // lam38383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38384 = arg_buffer[1];
//reading env and args
void* a3797638227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38384))[6];
//not do dummy comment
void* kont38078 = (decode_clo(env38384))[5];
//not do dummy comment
void* lst = (decode_clo(env38384))[4];
//not do dummy comment
void* map = (decode_clo(env38384))[3];
//not do dummy comment
void* proc = (decode_clo(env38384))[2];
//not do dummy comment
void* cons = (decode_clo(env38384))[1];

//creating new closure instance
void** clo39358 = alloc_clo(lam38381_fptr, 5);

//setting env list
clo39358[1] = cons;
clo39358[2] = proc;
clo39358[3] = a3797638227;
clo39358[4] = map;
clo39358[5] = kont38078;
void* f3808138228 = encode_clo(clo39358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3808138228;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38383 = encode_clo(alloc_clo(lam38383_fptr, 0));

void* lam38385_fptr() // lam38385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38386 = arg_buffer[1];
//reading env and args
void* a3797538225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38386))[6];
//not do dummy comment
void* kont38078 = (decode_clo(env38386))[5];
//not do dummy comment
void* lst = (decode_clo(env38386))[4];
//not do dummy comment
void* map = (decode_clo(env38386))[3];
//not do dummy comment
void* proc = (decode_clo(env38386))[2];
//not do dummy comment
void* cons = (decode_clo(env38386))[1];

//creating new closure instance
void** clo39360 = alloc_clo(lam38383_fptr, 6);

//setting env list
clo39360[1] = cons;
clo39360[2] = proc;
clo39360[3] = map;
clo39360[4] = lst;
clo39360[5] = kont38078;
clo39360[6] = cdr;
void* f3808238226 = encode_clo(clo39360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3808238226;
arg_buffer[3] = a3797538225;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38385 = encode_clo(alloc_clo(lam38385_fptr, 0));

void* lam38387_fptr() // lam38387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38388 = arg_buffer[1];
//reading env and args
void* a3797338221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38078 = (decode_clo(env38388))[8];
//not do dummy comment
void* lst = (decode_clo(env38388))[7];
//not do dummy comment
void* map = (decode_clo(env38388))[6];
//not do dummy comment
void* proc = (decode_clo(env38388))[5];
//not do dummy comment
void* car = (decode_clo(env38388))[4];
//not do dummy comment
void* cons = (decode_clo(env38388))[3];
//not do dummy comment
void* list = (decode_clo(env38388))[2];
//not do dummy comment
void* cdr = (decode_clo(env38388))[1];

//if-clause
bool if_guard39361 = is_true(a3797338221);
if(if_guard39361)
{

//creating new closure instance
void** clo39363 = alloc_clo(lam38377_fptr, 1);

//setting env list
clo39363[1] = kont38078;
void* f3807938222 = encode_clo(clo39363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3807938222;
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
void** clo39365 = alloc_clo(lam38385_fptr, 6);

//setting env list
clo39365[1] = cons;
clo39365[2] = proc;
clo39365[3] = map;
clo39365[4] = lst;
clo39365[5] = kont38078;
clo39365[6] = cdr;
void* f3808338224 = encode_clo(clo39365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3808338224;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38387 = encode_clo(alloc_clo(lam38387_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38389 = arg_buffer[1];
//reading env and args
void* kont38078 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39367 = alloc_clo(lam38387_fptr, 8);

//setting env list
clo39367[1] = cdr;
clo39367[2] = list;
clo39367[3] = cons;
clo39367[4] = car;
clo39367[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo39367[6] = map;
clo39367[7] = lst;
clo39367[8] = kont38078;
void* f3808438220 = encode_clo(clo39367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3808438220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam38390_fptr() // lam38390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38391 = arg_buffer[1];
//reading env and args
void* x3798038235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38085 = (decode_clo(env38391))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38085);
arg_buffer[2] = x3798038235;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38085))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38390 = encode_clo(alloc_clo(lam38390_fptr, 0));

void* lam38392_fptr() // lam38392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38393 = arg_buffer[1];
//reading env and args
void* a3798538245 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3798338241 = (decode_clo(env38393))[3];
//not do dummy comment
void* kont38085 = (decode_clo(env38393))[2];
//not do dummy comment
void* cons = (decode_clo(env38393))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont38085;
arg_buffer[3] = a3798338241;
arg_buffer[4] = a3798538245;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38392 = encode_clo(alloc_clo(lam38392_fptr, 0));

void* lam38394_fptr() // lam38394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38395 = arg_buffer[1];
//reading env and args
void* a3798438243 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3798338241 = (decode_clo(env38395))[5];
//not do dummy comment
void* op = (decode_clo(env38395))[4];
//not do dummy comment
void* kont38085 = (decode_clo(env38395))[3];
//not do dummy comment
void* filter = (decode_clo(env38395))[2];
//not do dummy comment
void* cons = (decode_clo(env38395))[1];

//creating new closure instance
void** clo39369 = alloc_clo(lam38392_fptr, 3);

//setting env list
clo39369[1] = cons;
clo39369[2] = kont38085;
clo39369[3] = a3798338241;
void* f3808738244 = encode_clo(clo39369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3808738244;
arg_buffer[3] = op;
arg_buffer[4] = a3798438243;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38394 = encode_clo(alloc_clo(lam38394_fptr, 0));

void* lam38396_fptr() // lam38396 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38397 = arg_buffer[1];
//reading env and args
void* a3798338241 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38397))[6];
//not do dummy comment
void* lst = (decode_clo(env38397))[5];
//not do dummy comment
void* op = (decode_clo(env38397))[4];
//not do dummy comment
void* kont38085 = (decode_clo(env38397))[3];
//not do dummy comment
void* filter = (decode_clo(env38397))[2];
//not do dummy comment
void* cons = (decode_clo(env38397))[1];

//creating new closure instance
void** clo39371 = alloc_clo(lam38394_fptr, 5);

//setting env list
clo39371[1] = cons;
clo39371[2] = filter;
clo39371[3] = kont38085;
clo39371[4] = op;
clo39371[5] = a3798338241;
void* f3808838242 = encode_clo(clo39371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3808838242;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38396 = encode_clo(alloc_clo(lam38396_fptr, 0));

void* lam38398_fptr() // lam38398 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38399 = arg_buffer[1];
//reading env and args
void* a3798638247 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env38399))[3];
//not do dummy comment
void* kont38085 = (decode_clo(env38399))[2];
//not do dummy comment
void* filter = (decode_clo(env38399))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont38085;
arg_buffer[3] = op;
arg_buffer[4] = a3798638247;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38398 = encode_clo(alloc_clo(lam38398_fptr, 0));

void* lam38400_fptr() // lam38400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38401 = arg_buffer[1];
//reading env and args
void* a3798238239 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38401))[7];
//not do dummy comment
void* lst = (decode_clo(env38401))[6];
//not do dummy comment
void* op = (decode_clo(env38401))[5];
//not do dummy comment
void* kont38085 = (decode_clo(env38401))[4];
//not do dummy comment
void* cons = (decode_clo(env38401))[3];
//not do dummy comment
void* filter = (decode_clo(env38401))[2];
//not do dummy comment
void* car = (decode_clo(env38401))[1];

//if-clause
bool if_guard39372 = is_true(a3798238239);
if(if_guard39372)
{

//creating new closure instance
void** clo39374 = alloc_clo(lam38396_fptr, 6);

//setting env list
clo39374[1] = cons;
clo39374[2] = filter;
clo39374[3] = kont38085;
clo39374[4] = op;
clo39374[5] = lst;
clo39374[6] = cdr;
void* f3808938240 = encode_clo(clo39374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3808938240;
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
void** clo39376 = alloc_clo(lam38398_fptr, 3);

//setting env list
clo39376[1] = filter;
clo39376[2] = kont38085;
clo39376[3] = op;
void* f3809038246 = encode_clo(clo39376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3809038246;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38400 = encode_clo(alloc_clo(lam38400_fptr, 0));

void* lam38402_fptr() // lam38402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38403 = arg_buffer[1];
//reading env and args
void* a3798138237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38403))[7];
//not do dummy comment
void* lst = (decode_clo(env38403))[6];
//not do dummy comment
void* op = (decode_clo(env38403))[5];
//not do dummy comment
void* kont38085 = (decode_clo(env38403))[4];
//not do dummy comment
void* cons = (decode_clo(env38403))[3];
//not do dummy comment
void* filter = (decode_clo(env38403))[2];
//not do dummy comment
void* car = (decode_clo(env38403))[1];

//creating new closure instance
void** clo39378 = alloc_clo(lam38400_fptr, 7);

//setting env list
clo39378[1] = car;
clo39378[2] = filter;
clo39378[3] = cons;
clo39378[4] = kont38085;
clo39378[5] = op;
clo39378[6] = lst;
clo39378[7] = cdr;
void* f3809138238 = encode_clo(clo39378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3809138238;
arg_buffer[3] = a3798138237;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38402 = encode_clo(alloc_clo(lam38402_fptr, 0));

void* lam38404_fptr() // lam38404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38405 = arg_buffer[1];
//reading env and args
void* a3797938233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38405))[8];
//not do dummy comment
void* op = (decode_clo(env38405))[7];
//not do dummy comment
void* kont38085 = (decode_clo(env38405))[6];
//not do dummy comment
void* cons = (decode_clo(env38405))[5];
//not do dummy comment
void* list = (decode_clo(env38405))[4];
//not do dummy comment
void* cdr = (decode_clo(env38405))[3];
//not do dummy comment
void* filter = (decode_clo(env38405))[2];
//not do dummy comment
void* car = (decode_clo(env38405))[1];

//if-clause
bool if_guard39379 = is_true(a3797938233);
if(if_guard39379)
{

//creating new closure instance
void** clo39381 = alloc_clo(lam38390_fptr, 1);

//setting env list
clo39381[1] = kont38085;
void* f3808638234 = encode_clo(clo39381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3808638234;
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
void** clo39383 = alloc_clo(lam38402_fptr, 7);

//setting env list
clo39383[1] = car;
clo39383[2] = filter;
clo39383[3] = cons;
clo39383[4] = kont38085;
clo39383[5] = op;
clo39383[6] = lst;
clo39383[7] = cdr;
void* f3809238236 = encode_clo(clo39383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3809238236;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38404 = encode_clo(alloc_clo(lam38404_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38406 = arg_buffer[1];
//reading env and args
void* kont38085 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39385 = alloc_clo(lam38404_fptr, 8);

//setting env list
clo39385[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo39385[2] = filter;
clo39385[3] = cdr;
clo39385[4] = list;
clo39385[5] = cons;
clo39385[6] = kont38085;
clo39385[7] = op;
clo39385[8] = lst;
void* f3809338232 = encode_clo(clo39385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3809338232;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam38407_fptr() // lam38407 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38408 = arg_buffer[1];
//reading env and args
void* a3799138255 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3798938252 = (decode_clo(env38408))[3];
//not do dummy comment
void* kont38094 = (decode_clo(env38408))[2];
//not do dummy comment
void* drop = (decode_clo(env38408))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont38094;
arg_buffer[3] = a3798938252;
arg_buffer[4] = a3799138255;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38407 = encode_clo(alloc_clo(lam38407_fptr, 0));

void* lam38410_fptr() // lam38410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38411 = arg_buffer[1];
//reading env and args
void* a3798938252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38094 = (decode_clo(env38411))[4];
//not do dummy comment
void* drop = (decode_clo(env38411))[3];
//not do dummy comment
void* n = (decode_clo(env38411))[2];
//not do dummy comment
void* _u45 = (decode_clo(env38411))[1];
mpz_t* mpzvar39386 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39386, "1", 10);
void* a3799038253 = encode_mpz(mpzvar39386);

//creating new closure instance
void** clo39388 = alloc_clo(lam38407_fptr, 3);

//setting env list
clo39388[1] = drop;
clo39388[2] = kont38094;
clo39388[3] = a3798938252;
void* f3809538254 = encode_clo(clo39388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3809538254;
arg_buffer[3] = n;
arg_buffer[4] = a3799038253;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38410 = encode_clo(alloc_clo(lam38410_fptr, 0));

void* lam38412_fptr() // lam38412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38413 = arg_buffer[1];
//reading env and args
void* a3798838250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38413))[6];
//not do dummy comment
void* kont38094 = (decode_clo(env38413))[5];
//not do dummy comment
void* n = (decode_clo(env38413))[4];
//not do dummy comment
void* _u45 = (decode_clo(env38413))[3];
//not do dummy comment
void* lst = (decode_clo(env38413))[2];
//not do dummy comment
void* drop = (decode_clo(env38413))[1];

//if-clause
bool if_guard39389 = is_true(a3798838250);
if(if_guard39389)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38094);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38094))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39391 = alloc_clo(lam38410_fptr, 4);

//setting env list
clo39391[1] = _u45;
clo39391[2] = n;
clo39391[3] = drop;
clo39391[4] = kont38094;
void* f3809638251 = encode_clo(clo39391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3809638251;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38412 = encode_clo(alloc_clo(lam38412_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38415 = arg_buffer[1];
//reading env and args
void* kont38094 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar39392 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39392, "0", 10);
void* a3798738248 = encode_mpz(mpzvar39392);

//creating new closure instance
void** clo39394 = alloc_clo(lam38412_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo39394[1] = drop;
clo39394[2] = lst;
clo39394[3] = _u45;
clo39394[4] = n;
clo39394[5] = kont38094;
clo39394[6] = cdr;
void* f3809738249 = encode_clo(clo39394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3809738249;
arg_buffer[3] = n;
arg_buffer[4] = a3798738248;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam38416_fptr() // lam38416 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38417 = arg_buffer[1];
//reading env and args
void* a3799538263 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38098 = (decode_clo(env38417))[3];
//not do dummy comment
void* a3799338259 = (decode_clo(env38417))[2];
//not do dummy comment
void* proc = (decode_clo(env38417))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont38098;
arg_buffer[3] = a3799338259;
arg_buffer[4] = a3799538263;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38416 = encode_clo(alloc_clo(lam38416_fptr, 0));

void* lam38418_fptr() // lam38418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38419 = arg_buffer[1];
//reading env and args
void* a3799438261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env38419))[5];
//not do dummy comment
void* kont38098 = (decode_clo(env38419))[4];
//not do dummy comment
void* a3799338259 = (decode_clo(env38419))[3];
//not do dummy comment
void* proc = (decode_clo(env38419))[2];
//not do dummy comment
void* acc = (decode_clo(env38419))[1];

//creating new closure instance
void** clo39396 = alloc_clo(lam38416_fptr, 3);

//setting env list
clo39396[1] = proc;
clo39396[2] = a3799338259;
clo39396[3] = kont38098;
void* f3809938262 = encode_clo(clo39396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3809938262;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3799438261;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38418 = encode_clo(alloc_clo(lam38418_fptr, 0));

void* lam38420_fptr() // lam38420 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38421 = arg_buffer[1];
//reading env and args
void* a3799338259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38421))[6];
//not do dummy comment
void* kont38098 = (decode_clo(env38421))[5];
//not do dummy comment
void* foldr = (decode_clo(env38421))[4];
//not do dummy comment
void* lst = (decode_clo(env38421))[3];
//not do dummy comment
void* proc = (decode_clo(env38421))[2];
//not do dummy comment
void* acc = (decode_clo(env38421))[1];

//creating new closure instance
void** clo39398 = alloc_clo(lam38418_fptr, 5);

//setting env list
clo39398[1] = acc;
clo39398[2] = proc;
clo39398[3] = a3799338259;
clo39398[4] = kont38098;
clo39398[5] = foldr;
void* f3810038260 = encode_clo(clo39398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3810038260;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38420 = encode_clo(alloc_clo(lam38420_fptr, 0));

void* lam38422_fptr() // lam38422 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38423 = arg_buffer[1];
//reading env and args
void* a3799238257 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38423))[7];
//not do dummy comment
void* kont38098 = (decode_clo(env38423))[6];
//not do dummy comment
void* car = (decode_clo(env38423))[5];
//not do dummy comment
void* foldr = (decode_clo(env38423))[4];
//not do dummy comment
void* lst = (decode_clo(env38423))[3];
//not do dummy comment
void* proc = (decode_clo(env38423))[2];
//not do dummy comment
void* acc = (decode_clo(env38423))[1];

//if-clause
bool if_guard39399 = is_true(a3799238257);
if(if_guard39399)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38098);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38098))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39401 = alloc_clo(lam38420_fptr, 6);

//setting env list
clo39401[1] = acc;
clo39401[2] = proc;
clo39401[3] = lst;
clo39401[4] = foldr;
clo39401[5] = kont38098;
clo39401[6] = cdr;
void* f3810138258 = encode_clo(clo39401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3810138258;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38422 = encode_clo(alloc_clo(lam38422_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38424 = arg_buffer[1];
//reading env and args
void* kont38098 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo39403 = alloc_clo(lam38422_fptr, 7);

//setting env list
clo39403[1] = acc;
clo39403[2] = proc;
clo39403[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo39403[4] = foldr;
clo39403[5] = car;
clo39403[6] = kont38098;
clo39403[7] = cdr;
void* f3810238256 = encode_clo(clo39403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3810238256;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam38425_fptr() // lam38425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38426 = arg_buffer[1];
//reading env and args
void* a3799938271 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3799738267 = (decode_clo(env38426))[3];
//not do dummy comment
void* kont38103 = (decode_clo(env38426))[2];
//not do dummy comment
void* cons = (decode_clo(env38426))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont38103;
arg_buffer[3] = a3799738267;
arg_buffer[4] = a3799938271;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38425 = encode_clo(alloc_clo(lam38425_fptr, 0));

void* lam38427_fptr() // lam38427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38428 = arg_buffer[1];
//reading env and args
void* a3799838269 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3799738267 = (decode_clo(env38428))[5];
//not do dummy comment
void* append = (decode_clo(env38428))[4];
//not do dummy comment
void* cons = (decode_clo(env38428))[3];
//not do dummy comment
void* kont38103 = (decode_clo(env38428))[2];
//not do dummy comment
void* lst2 = (decode_clo(env38428))[1];

//creating new closure instance
void** clo39405 = alloc_clo(lam38425_fptr, 3);

//setting env list
clo39405[1] = cons;
clo39405[2] = kont38103;
clo39405[3] = a3799738267;
void* f3810438270 = encode_clo(clo39405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3810438270;
arg_buffer[3] = a3799838269;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38427 = encode_clo(alloc_clo(lam38427_fptr, 0));

void* lam38429_fptr() // lam38429 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38430 = arg_buffer[1];
//reading env and args
void* a3799738267 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38430))[6];
//not do dummy comment
void* append = (decode_clo(env38430))[5];
//not do dummy comment
void* lst1 = (decode_clo(env38430))[4];
//not do dummy comment
void* cons = (decode_clo(env38430))[3];
//not do dummy comment
void* kont38103 = (decode_clo(env38430))[2];
//not do dummy comment
void* lst2 = (decode_clo(env38430))[1];

//creating new closure instance
void** clo39407 = alloc_clo(lam38427_fptr, 5);

//setting env list
clo39407[1] = lst2;
clo39407[2] = kont38103;
clo39407[3] = cons;
clo39407[4] = append;
clo39407[5] = a3799738267;
void* f3810538268 = encode_clo(clo39407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3810538268;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38429 = encode_clo(alloc_clo(lam38429_fptr, 0));

void* lam38431_fptr() // lam38431 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38432 = arg_buffer[1];
//reading env and args
void* a3799638265 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38432))[7];
//not do dummy comment
void* append = (decode_clo(env38432))[6];
//not do dummy comment
void* cons = (decode_clo(env38432))[5];
//not do dummy comment
void* kont38103 = (decode_clo(env38432))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38432))[3];
//not do dummy comment
void* lst1 = (decode_clo(env38432))[2];
//not do dummy comment
void* car = (decode_clo(env38432))[1];

//if-clause
bool if_guard39408 = is_true(a3799638265);
if(if_guard39408)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38103);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38103))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39410 = alloc_clo(lam38429_fptr, 6);

//setting env list
clo39410[1] = lst2;
clo39410[2] = kont38103;
clo39410[3] = cons;
clo39410[4] = lst1;
clo39410[5] = append;
clo39410[6] = cdr;
void* f3810638266 = encode_clo(clo39410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3810638266;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38431 = encode_clo(alloc_clo(lam38431_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38433 = arg_buffer[1];
//reading env and args
void* kont38103 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39412 = alloc_clo(lam38431_fptr, 7);

//setting env list
clo39412[1] = car;
clo39412[2] = lst1;
clo39412[3] = lst2;
clo39412[4] = kont38103;
clo39412[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo39412[6] = append;
clo39412[7] = cdr;
void* f3810738264 = encode_clo(clo39412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3810738264;
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
void* _38434 = arg_buffer[1];
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

void* kont3810838272 = prim_car(lst);
void* lst38273 = prim_cdr(lst);
void* x3800038274 = apply_prim_hash(lst38273);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3810838272);
arg_buffer[2] = x3800038274;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3810838272))[0]);
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
void* _38435 = arg_buffer[1];
//reading env and args
void* kont38110 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3800138275 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38110);
arg_buffer[2] = x3800138275;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38110))[0]);
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
void* _38436 = arg_buffer[1];
//reading env and args
void* kont38111 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3800238276 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38111);
arg_buffer[2] = x3800238276;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38111))[0]);
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
void* _38437 = arg_buffer[1];
//reading env and args
void* kont38112 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3800338277 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38112);
arg_buffer[2] = x3800338277;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38112))[0]);
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
void* _38438 = arg_buffer[1];
//reading env and args
void* kont38113 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3800438278 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38113);
arg_buffer[2] = x3800438278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38113))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam38439_fptr() // lam38439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38440 = arg_buffer[1];
//reading env and args
void* a3801138286 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38114 = (decode_clo(env38440))[2];
//not do dummy comment
void* hash_u45count = (decode_clo(env38440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45count);
arg_buffer[2] = kont38114;
arg_buffer[3] = a3801138286;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38439 = encode_clo(alloc_clo(lam38439_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38447 = arg_buffer[1];
//reading env and args
void* kont38114 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar39413 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39413, "100", 10);
void* a3800538279 = encode_mpz(mpzvar39413);
mpz_t* mpzvar39414 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39414, "80", 10);
void* a3800638280 = encode_mpz(mpzvar39414);
mpz_t* mpzvar39415 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39415, "10", 10);
void* a3800738281 = encode_mpz(mpzvar39415);
mpz_t* mpzvar39416 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39416, "2", 10);
void* a3800838282 = encode_mpz(mpzvar39416);
mpz_t* mpzvar39417 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39417, "25", 10);
void* a3800938283 = encode_mpz(mpzvar39417);
mpz_t* mpzvar39418 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39418, "30", 10);
void* a3801038284 = encode_mpz(mpzvar39418);

//creating new closure instance
void** clo39420 = alloc_clo(lam38439_fptr, 2);

//setting env list
clo39420[1] = hash_u45count;
clo39420[2] = kont38114;
void* f3811538285 = encode_clo(clo39420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f3811538285;
arg_buffer[3] = a3800538279;
arg_buffer[4] = a3800638280;
arg_buffer[5] = a3800738281;
arg_buffer[6] = a3800838282;
arg_buffer[7] = a3800938283;
arg_buffer[8] = a3801038284;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam38448_fptr() // lam38448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38449 = arg_buffer[1];
//reading env and args
void* x3801238288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38116 = (decode_clo(env38449))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38116);
arg_buffer[2] = x3801238288;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38116))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38448 = encode_clo(alloc_clo(lam38448_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38450 = arg_buffer[1];
//reading env and args
void* kont38116 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo39422 = alloc_clo(lam38448_fptr, 1);

//setting env list
clo39422[1] = kont38116;
void* f3811738287 = encode_clo(clo39422);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3811738287;
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

