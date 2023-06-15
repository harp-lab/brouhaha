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
void* _44362 = arg_buffer[1];
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

void* kont4409244194 = prim_car(lst);
void* lst44195 = prim_cdr(lst);
void* x4399944196 = apply_prim__u43(lst44195);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4409244194);
arg_buffer[2] = x4399944196;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4409244194))[0]);
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
void* _44363 = arg_buffer[1];
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

void* kont4409444197 = prim_car(lst);
void* lst44198 = prim_cdr(lst);
void* x4400044199 = apply_prim__u45(lst44198);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4409444197);
arg_buffer[2] = x4400044199;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4409444197))[0]);
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
void* _44364 = arg_buffer[1];
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

void* kont4409644200 = prim_car(lst);
void* lst44201 = prim_cdr(lst);
void* x4400144202 = apply_prim__u42(lst44201);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4409644200);
arg_buffer[2] = x4400144202;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4409644200))[0]);
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
void* _44365 = arg_buffer[1];
//reading env and args
void* kont44098 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4400244203 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44098);
arg_buffer[2] = x4400244203;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44098))[0]);
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
void* _44366 = arg_buffer[1];
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

void* kont4409944204 = prim_car(lst);
void* lst44205 = prim_cdr(lst);
void* x4400344206 = apply_prim__u47(lst44205);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4409944204);
arg_buffer[2] = x4400344206;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4409944204))[0]);
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
void* _44367 = arg_buffer[1];
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

void* kont4410144207 = prim_car(lst);
void* lst44208 = prim_cdr(lst);
void* x4400444209 = apply_prim__u61(lst44208);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4410144207);
arg_buffer[2] = x4400444209;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4410144207))[0]);
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
void* _44368 = arg_buffer[1];
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

void* kont4410344210 = prim_car(lst);
void* lst44211 = prim_cdr(lst);
void* x4400544212 = apply_prim__u62(lst44211);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4410344210);
arg_buffer[2] = x4400544212;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4410344210))[0]);
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
void* _44369 = arg_buffer[1];
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

void* kont4410544213 = prim_car(lst);
void* lst44214 = prim_cdr(lst);
void* x4400644215 = apply_prim__u60(lst44214);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4410544213);
arg_buffer[2] = x4400644215;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4410544213))[0]);
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
void* _44370 = arg_buffer[1];
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

void* kont4410744216 = prim_car(lst);
void* lst44217 = prim_cdr(lst);
void* x4400744218 = apply_prim__u60_u61(lst44217);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4410744216);
arg_buffer[2] = x4400744218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4410744216))[0]);
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
void* _44371 = arg_buffer[1];
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

void* kont4410944219 = prim_car(lst);
void* lst44220 = prim_cdr(lst);
void* x4400844221 = apply_prim__u62_u61(lst44220);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4410944219);
arg_buffer[2] = x4400844221;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4410944219))[0]);
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
void* _44372 = arg_buffer[1];
//reading env and args
void* kont44111 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4400944222 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44111);
arg_buffer[2] = x4400944222;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44111))[0]);
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
void* _44373 = arg_buffer[1];
//reading env and args
void* kont44112 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4401044223 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44112);
arg_buffer[2] = x4401044223;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44112))[0]);
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
void* _44374 = arg_buffer[1];
//reading env and args
void* kont44113 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4401144224 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44113);
arg_buffer[2] = x4401144224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44113))[0]);
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
void* _44375 = arg_buffer[1];
//reading env and args
void* kont44114 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4401244225 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44114);
arg_buffer[2] = x4401244225;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44114))[0]);
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
void* _44376 = arg_buffer[1];
//reading env and args
void* kont44115 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4401344226 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44115);
arg_buffer[2] = x4401344226;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44115))[0]);
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
void* _44377 = arg_buffer[1];
//reading env and args
void* kont44116 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4401444227 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44116);
arg_buffer[2] = x4401444227;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44116))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam44378_fptr() // lam44378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44379 = arg_buffer[1];
//reading env and args
void* a4401744231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44117 = (decode_clo(env44379))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env44379))[2];
//not do dummy comment
void* a4401544228 = (decode_clo(env44379))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44117;
arg_buffer[3] = a4401544228;
arg_buffer[4] = a4401744231;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44378 = encode_clo(alloc_clo(lam44378_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44382 = arg_buffer[1];
//reading env and args
void* kont44117 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45665 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45665, "0", 10);
void* a4401544228 = encode_mpz(mpzvar45665);
mpz_t* mpzvar45666 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45666, "2", 10);
void* a4401644229 = encode_mpz(mpzvar45666);

//creating new closure instance
void** clo45668 = alloc_clo(lam44378_fptr, 3);

//setting env list
clo45668[1] = a4401544228;
clo45668[2] = equal_u63;
clo45668[3] = kont44117;
void* f4411844230 = encode_clo(clo45668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4411844230;
arg_buffer[3] = x;
arg_buffer[4] = a4401644229;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam44383_fptr() // lam44383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44384 = arg_buffer[1];
//reading env and args
void* a4402044235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44119 = (decode_clo(env44384))[3];
//not do dummy comment
void* a4401844232 = (decode_clo(env44384))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env44384))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44119;
arg_buffer[3] = a4401844232;
arg_buffer[4] = a4402044235;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44383 = encode_clo(alloc_clo(lam44383_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44387 = arg_buffer[1];
//reading env and args
void* kont44119 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45669 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45669, "1", 10);
void* a4401844232 = encode_mpz(mpzvar45669);
mpz_t* mpzvar45670 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45670, "2", 10);
void* a4401944233 = encode_mpz(mpzvar45670);

//creating new closure instance
void** clo45672 = alloc_clo(lam44383_fptr, 3);

//setting env list
clo45672[1] = equal_u63;
clo45672[2] = a4401844232;
clo45672[3] = kont44119;
void* f4412044234 = encode_clo(clo45672);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4412044234;
arg_buffer[3] = x;
arg_buffer[4] = a4401944233;
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
void* _44388 = arg_buffer[1];
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

void* kont4412144236 = prim_car(x);
void* x44237 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4412144236);
arg_buffer[2] = x44237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4412144236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam44391_fptr() // lam44391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44392 = arg_buffer[1];
//reading env and args
void* a4402644247 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44123 = (decode_clo(env44392))[3];
//not do dummy comment
void* x = (decode_clo(env44392))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44392))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont44123;
arg_buffer[3] = x;
arg_buffer[4] = a4402644247;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44391 = encode_clo(alloc_clo(lam44391_fptr, 0));

void* lam44393_fptr() // lam44393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44394 = arg_buffer[1];
//reading env and args
void* a4402444244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44394))[5];
//not do dummy comment
void* lst = (decode_clo(env44394))[4];
//not do dummy comment
void* kont44123 = (decode_clo(env44394))[3];
//not do dummy comment
void* x = (decode_clo(env44394))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44394))[1];

//if-clause
bool if_guard45673 = is_true(a4402444244);
if(if_guard45673)
{
void* x4402544245 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44123);
arg_buffer[2] = x4402544245;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44123))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45675 = alloc_clo(lam44391_fptr, 3);

//setting env list
clo45675[1] = member_u63;
clo45675[2] = x;
clo45675[3] = kont44123;
void* f4412444246 = encode_clo(clo45675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4412444246;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44393 = encode_clo(alloc_clo(lam44393_fptr, 0));

void* lam44395_fptr() // lam44395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44396 = arg_buffer[1];
//reading env and args
void* a4402344242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44396))[6];
//not do dummy comment
void* lst = (decode_clo(env44396))[5];
//not do dummy comment
void* kont44123 = (decode_clo(env44396))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env44396))[3];
//not do dummy comment
void* x = (decode_clo(env44396))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44396))[1];

//creating new closure instance
void** clo45677 = alloc_clo(lam44393_fptr, 5);

//setting env list
clo45677[1] = member_u63;
clo45677[2] = x;
clo45677[3] = kont44123;
clo45677[4] = lst;
clo45677[5] = cdr;
void* f4412544243 = encode_clo(clo45677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4412544243;
arg_buffer[3] = a4402344242;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44395 = encode_clo(alloc_clo(lam44395_fptr, 0));

void* lam44397_fptr() // lam44397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44398 = arg_buffer[1];
//reading env and args
void* a4402144239 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44398))[7];
//not do dummy comment
void* lst = (decode_clo(env44398))[6];
//not do dummy comment
void* kont44123 = (decode_clo(env44398))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env44398))[4];
//not do dummy comment
void* x = (decode_clo(env44398))[3];
//not do dummy comment
void* car = (decode_clo(env44398))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44398))[1];

//if-clause
bool if_guard45678 = is_true(a4402144239);
if(if_guard45678)
{
void* x4402244240 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44123);
arg_buffer[2] = x4402244240;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44123))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45680 = alloc_clo(lam44395_fptr, 6);

//setting env list
clo45680[1] = member_u63;
clo45680[2] = x;
clo45680[3] = equal_u63;
clo45680[4] = kont44123;
clo45680[5] = lst;
clo45680[6] = cdr;
void* f4412644241 = encode_clo(clo45680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4412644241;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44397 = encode_clo(alloc_clo(lam44397_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44399 = arg_buffer[1];
//reading env and args
void* kont44123 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45682 = alloc_clo(lam44397_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo45682[1] = member_u63;
clo45682[2] = car;
clo45682[3] = x;
clo45682[4] = equal_u63;
clo45682[5] = kont44123;
clo45682[6] = lst;
clo45682[7] = cdr;
void* f4412744238 = encode_clo(clo45682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4412744238;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam44400_fptr() // lam44400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44401 = arg_buffer[1];
//reading env and args
void* a4403044255 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4402944253 = (decode_clo(env44401))[4];
//not do dummy comment
void* fun = (decode_clo(env44401))[3];
//not do dummy comment
void* kont44128 = (decode_clo(env44401))[2];
//not do dummy comment
void* foldl = (decode_clo(env44401))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont44128;
arg_buffer[3] = fun;
arg_buffer[4] = a4402944253;
arg_buffer[5] = a4403044255;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44400 = encode_clo(alloc_clo(lam44400_fptr, 0));

void* lam44402_fptr() // lam44402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44403 = arg_buffer[1];
//reading env and args
void* a4402944253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44403))[5];
//not do dummy comment
void* lst = (decode_clo(env44403))[4];
//not do dummy comment
void* fun = (decode_clo(env44403))[3];
//not do dummy comment
void* kont44128 = (decode_clo(env44403))[2];
//not do dummy comment
void* foldl = (decode_clo(env44403))[1];

//creating new closure instance
void** clo45684 = alloc_clo(lam44400_fptr, 4);

//setting env list
clo45684[1] = foldl;
clo45684[2] = kont44128;
clo45684[3] = fun;
clo45684[4] = a4402944253;
void* f4412944254 = encode_clo(clo45684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4412944254;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44402 = encode_clo(alloc_clo(lam44402_fptr, 0));

void* lam44404_fptr() // lam44404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44405 = arg_buffer[1];
//reading env and args
void* a4402844251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44405))[6];
//not do dummy comment
void* lst = (decode_clo(env44405))[5];
//not do dummy comment
void* fun = (decode_clo(env44405))[4];
//not do dummy comment
void* foldl = (decode_clo(env44405))[3];
//not do dummy comment
void* acc = (decode_clo(env44405))[2];
//not do dummy comment
void* kont44128 = (decode_clo(env44405))[1];

//creating new closure instance
void** clo45686 = alloc_clo(lam44402_fptr, 5);

//setting env list
clo45686[1] = foldl;
clo45686[2] = kont44128;
clo45686[3] = fun;
clo45686[4] = lst;
clo45686[5] = cdr;
void* f4413044252 = encode_clo(clo45686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4413044252;
arg_buffer[3] = a4402844251;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44404 = encode_clo(alloc_clo(lam44404_fptr, 0));

void* lam44406_fptr() // lam44406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44407 = arg_buffer[1];
//reading env and args
void* a4402744249 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44407))[7];
//not do dummy comment
void* lst = (decode_clo(env44407))[6];
//not do dummy comment
void* fun = (decode_clo(env44407))[5];
//not do dummy comment
void* car = (decode_clo(env44407))[4];
//not do dummy comment
void* foldl = (decode_clo(env44407))[3];
//not do dummy comment
void* acc = (decode_clo(env44407))[2];
//not do dummy comment
void* kont44128 = (decode_clo(env44407))[1];

//if-clause
bool if_guard45687 = is_true(a4402744249);
if(if_guard45687)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44128);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44128))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45689 = alloc_clo(lam44404_fptr, 6);

//setting env list
clo45689[1] = kont44128;
clo45689[2] = acc;
clo45689[3] = foldl;
clo45689[4] = fun;
clo45689[5] = lst;
clo45689[6] = cdr;
void* f4413144250 = encode_clo(clo45689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4413144250;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44406 = encode_clo(alloc_clo(lam44406_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44408 = arg_buffer[1];
//reading env and args
void* kont44128 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45691 = alloc_clo(lam44406_fptr, 7);

//setting env list
clo45691[1] = kont44128;
clo45691[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo45691[3] = foldl;
clo45691[4] = car;
clo45691[5] = fun;
clo45691[6] = lst;
clo45691[7] = cdr;
void* f4413244248 = encode_clo(clo45691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4413244248;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam44409_fptr() // lam44409 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44410 = arg_buffer[1];
//reading env and args
void* a4403444263 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44133 = (decode_clo(env44410))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44410))[2];
//not do dummy comment
void* a4403244259 = (decode_clo(env44410))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44133;
arg_buffer[3] = a4403244259;
arg_buffer[4] = a4403444263;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44409 = encode_clo(alloc_clo(lam44409_fptr, 0));

void* lam44411_fptr() // lam44411 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44412 = arg_buffer[1];
//reading env and args
void* a4403344261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44133 = (decode_clo(env44412))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44412))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44412))[3];
//not do dummy comment
void* cons = (decode_clo(env44412))[2];
//not do dummy comment
void* a4403244259 = (decode_clo(env44412))[1];

//creating new closure instance
void** clo45693 = alloc_clo(lam44409_fptr, 3);

//setting env list
clo45693[1] = a4403244259;
clo45693[2] = reverse_u45helper;
clo45693[3] = kont44133;
void* f4413444262 = encode_clo(clo45693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4413444262;
arg_buffer[3] = a4403344261;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44411 = encode_clo(alloc_clo(lam44411_fptr, 0));

void* lam44413_fptr() // lam44413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44414 = arg_buffer[1];
//reading env and args
void* a4403244259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44133 = (decode_clo(env44414))[6];
//not do dummy comment
void* lst = (decode_clo(env44414))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44414))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44414))[3];
//not do dummy comment
void* car = (decode_clo(env44414))[2];
//not do dummy comment
void* cons = (decode_clo(env44414))[1];

//creating new closure instance
void** clo45695 = alloc_clo(lam44411_fptr, 5);

//setting env list
clo45695[1] = a4403244259;
clo45695[2] = cons;
clo45695[3] = lst2;
clo45695[4] = reverse_u45helper;
clo45695[5] = kont44133;
void* f4413544260 = encode_clo(clo45695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4413544260;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44413 = encode_clo(alloc_clo(lam44413_fptr, 0));

void* lam44415_fptr() // lam44415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44416 = arg_buffer[1];
//reading env and args
void* a4403144257 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44416))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44416))[6];
//not do dummy comment
void* lst2 = (decode_clo(env44416))[5];
//not do dummy comment
void* car = (decode_clo(env44416))[4];
//not do dummy comment
void* cons = (decode_clo(env44416))[3];
//not do dummy comment
void* kont44133 = (decode_clo(env44416))[2];
//not do dummy comment
void* cdr = (decode_clo(env44416))[1];

//if-clause
bool if_guard45696 = is_true(a4403144257);
if(if_guard45696)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44133);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44133))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45698 = alloc_clo(lam44413_fptr, 6);

//setting env list
clo45698[1] = cons;
clo45698[2] = car;
clo45698[3] = lst2;
clo45698[4] = reverse_u45helper;
clo45698[5] = lst;
clo45698[6] = kont44133;
void* f4413644258 = encode_clo(clo45698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4413644258;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44415 = encode_clo(alloc_clo(lam44415_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44417 = arg_buffer[1];
//reading env and args
void* kont44133 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45700 = alloc_clo(lam44415_fptr, 7);

//setting env list
clo45700[1] = cdr;
clo45700[2] = kont44133;
clo45700[3] = cons;
clo45700[4] = car;
clo45700[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo45700[6] = reverse_u45helper;
clo45700[7] = lst;
void* f4413744256 = encode_clo(clo45700);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4413744256;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam44418_fptr() // lam44418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44419 = arg_buffer[1];
//reading env and args
void* a4403544265 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44419))[3];
//not do dummy comment
void* kont44138 = (decode_clo(env44419))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44419))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44138;
arg_buffer[3] = lst;
arg_buffer[4] = a4403544265;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44418 = encode_clo(alloc_clo(lam44418_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44420 = arg_buffer[1];
//reading env and args
void* kont44138 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45702 = alloc_clo(lam44418_fptr, 3);

//setting env list
clo45702[1] = reverse_u45helper;
clo45702[2] = kont44138;
clo45702[3] = lst;
void* f4413944264 = encode_clo(clo45702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4413944264;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam44421_fptr() // lam44421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44422 = arg_buffer[1];
//reading env and args
void* x4403844270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44140 = (decode_clo(env44422))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44140);
arg_buffer[2] = x4403844270;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44140))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44421 = encode_clo(alloc_clo(lam44421_fptr, 0));

void* lam44423_fptr() // lam44423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44424 = arg_buffer[1];
//reading env and args
void* a4404344279 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44140 = (decode_clo(env44424))[4];
//not do dummy comment
void* a4403944272 = (decode_clo(env44424))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44424))[2];
//not do dummy comment
void* a4404144275 = (decode_clo(env44424))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44140;
arg_buffer[3] = a4403944272;
arg_buffer[4] = a4404144275;
arg_buffer[5] = a4404344279;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44423 = encode_clo(alloc_clo(lam44423_fptr, 0));

void* lam44425_fptr() // lam44425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44426 = arg_buffer[1];
//reading env and args
void* a4404244277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44140 = (decode_clo(env44426))[6];
//not do dummy comment
void* a4403944272 = (decode_clo(env44426))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44426))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44426))[3];
//not do dummy comment
void* cons = (decode_clo(env44426))[2];
//not do dummy comment
void* a4404144275 = (decode_clo(env44426))[1];

//creating new closure instance
void** clo45704 = alloc_clo(lam44423_fptr, 4);

//setting env list
clo45704[1] = a4404144275;
clo45704[2] = take_u45helper;
clo45704[3] = a4403944272;
clo45704[4] = kont44140;
void* f4414244278 = encode_clo(clo45704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4414244278;
arg_buffer[3] = a4404244277;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44425 = encode_clo(alloc_clo(lam44425_fptr, 0));

void* lam44427_fptr() // lam44427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44428 = arg_buffer[1];
//reading env and args
void* a4404144275 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44428))[7];
//not do dummy comment
void* kont44140 = (decode_clo(env44428))[6];
//not do dummy comment
void* a4403944272 = (decode_clo(env44428))[5];
//not do dummy comment
void* car = (decode_clo(env44428))[4];
//not do dummy comment
void* cons = (decode_clo(env44428))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44428))[2];
//not do dummy comment
void* lst2 = (decode_clo(env44428))[1];

//creating new closure instance
void** clo45706 = alloc_clo(lam44425_fptr, 6);

//setting env list
clo45706[1] = a4404144275;
clo45706[2] = cons;
clo45706[3] = lst2;
clo45706[4] = take_u45helper;
clo45706[5] = a4403944272;
clo45706[6] = kont44140;
void* f4414344276 = encode_clo(clo45706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4414344276;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44427 = encode_clo(alloc_clo(lam44427_fptr, 0));

void* lam44430_fptr() // lam44430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44431 = arg_buffer[1];
//reading env and args
void* a4403944272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44431))[8];
//not do dummy comment
void* kont44140 = (decode_clo(env44431))[7];
//not do dummy comment
void* cons = (decode_clo(env44431))[6];
//not do dummy comment
void* _u45 = (decode_clo(env44431))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44431))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44431))[3];
//not do dummy comment
void* n = (decode_clo(env44431))[2];
//not do dummy comment
void* car = (decode_clo(env44431))[1];
mpz_t* mpzvar45707 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45707, "1", 10);
void* a4404044273 = encode_mpz(mpzvar45707);

//creating new closure instance
void** clo45709 = alloc_clo(lam44427_fptr, 7);

//setting env list
clo45709[1] = lst2;
clo45709[2] = take_u45helper;
clo45709[3] = cons;
clo45709[4] = car;
clo45709[5] = a4403944272;
clo45709[6] = kont44140;
clo45709[7] = lst;
void* f4414444274 = encode_clo(clo45709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4414444274;
arg_buffer[3] = n;
arg_buffer[4] = a4404044273;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44430 = encode_clo(alloc_clo(lam44430_fptr, 0));

void* lam44432_fptr() // lam44432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44433 = arg_buffer[1];
//reading env and args
void* a4403744268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44433))[10];
//not do dummy comment
void* lst = (decode_clo(env44433))[9];
//not do dummy comment
void* cons = (decode_clo(env44433))[8];
//not do dummy comment
void* _u45 = (decode_clo(env44433))[7];
//not do dummy comment
void* kont44140 = (decode_clo(env44433))[6];
//not do dummy comment
void* reverse = (decode_clo(env44433))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44433))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44433))[3];
//not do dummy comment
void* n = (decode_clo(env44433))[2];
//not do dummy comment
void* car = (decode_clo(env44433))[1];

//if-clause
bool if_guard45710 = is_true(a4403744268);
if(if_guard45710)
{

//creating new closure instance
void** clo45712 = alloc_clo(lam44421_fptr, 1);

//setting env list
clo45712[1] = kont44140;
void* f4414144269 = encode_clo(clo45712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4414144269;
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
void** clo45714 = alloc_clo(lam44430_fptr, 8);

//setting env list
clo45714[1] = car;
clo45714[2] = n;
clo45714[3] = lst2;
clo45714[4] = take_u45helper;
clo45714[5] = _u45;
clo45714[6] = cons;
clo45714[7] = kont44140;
clo45714[8] = lst;
void* f4414544271 = encode_clo(clo45714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4414544271;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44432 = encode_clo(alloc_clo(lam44432_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44435 = arg_buffer[1];
//reading env and args
void* kont44140 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar45715 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45715, "0", 10);
void* a4403644266 = encode_mpz(mpzvar45715);

//creating new closure instance
void** clo45717 = alloc_clo(lam44432_fptr, 10);

//setting env list
clo45717[1] = car;
clo45717[2] = n;
clo45717[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo45717[4] = take_u45helper;
clo45717[5] = reverse;
clo45717[6] = kont44140;
clo45717[7] = _u45;
clo45717[8] = cons;
clo45717[9] = lst;
clo45717[10] = cdr;
void* f4414644267 = encode_clo(clo45717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4414644267;
arg_buffer[3] = n;
arg_buffer[4] = a4403644266;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam44436_fptr() // lam44436 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44437 = arg_buffer[1];
//reading env and args
void* a4404444281 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44437))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env44437))[3];
//not do dummy comment
void* n = (decode_clo(env44437))[2];
//not do dummy comment
void* kont44147 = (decode_clo(env44437))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44147;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4404444281;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44436 = encode_clo(alloc_clo(lam44436_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44438 = arg_buffer[1];
//reading env and args
void* kont44147 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45719 = alloc_clo(lam44436_fptr, 4);

//setting env list
clo45719[1] = kont44147;
clo45719[2] = n;
clo45719[3] = take_u45helper;
clo45719[4] = lst;
void* f4414844280 = encode_clo(clo45719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4414844280;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam44440_fptr() // lam44440 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44441 = arg_buffer[1];
//reading env and args
void* a4404944289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44149 = (decode_clo(env44441))[3];
//not do dummy comment
void* a4404744285 = (decode_clo(env44441))[2];
//not do dummy comment
void* _u43 = (decode_clo(env44441))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont44149;
arg_buffer[3] = a4404744285;
arg_buffer[4] = a4404944289;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44440 = encode_clo(alloc_clo(lam44440_fptr, 0));

void* lam44442_fptr() // lam44442 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44443 = arg_buffer[1];
//reading env and args
void* a4404844287 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44149 = (decode_clo(env44443))[4];
//not do dummy comment
void* length = (decode_clo(env44443))[3];
//not do dummy comment
void* a4404744285 = (decode_clo(env44443))[2];
//not do dummy comment
void* _u43 = (decode_clo(env44443))[1];

//creating new closure instance
void** clo45721 = alloc_clo(lam44440_fptr, 3);

//setting env list
clo45721[1] = _u43;
clo45721[2] = a4404744285;
clo45721[3] = kont44149;
void* f4415044288 = encode_clo(clo45721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4415044288;
arg_buffer[3] = a4404844287;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44442 = encode_clo(alloc_clo(lam44442_fptr, 0));

void* lam44445_fptr() // lam44445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44446 = arg_buffer[1];
//reading env and args
void* a4404544283 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44446))[5];
//not do dummy comment
void* length = (decode_clo(env44446))[4];
//not do dummy comment
void* _u43 = (decode_clo(env44446))[3];
//not do dummy comment
void* kont44149 = (decode_clo(env44446))[2];
//not do dummy comment
void* cdr = (decode_clo(env44446))[1];

//if-clause
bool if_guard45722 = is_true(a4404544283);
if(if_guard45722)
{
mpz_t* mpzvar45723 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45723, "0", 10);
void* x4404644284 = encode_mpz(mpzvar45723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44149);
arg_buffer[2] = x4404644284;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44149))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar45724 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45724, "1", 10);
void* a4404744285 = encode_mpz(mpzvar45724);

//creating new closure instance
void** clo45726 = alloc_clo(lam44442_fptr, 4);

//setting env list
clo45726[1] = _u43;
clo45726[2] = a4404744285;
clo45726[3] = length;
clo45726[4] = kont44149;
void* f4415144286 = encode_clo(clo45726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4415144286;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44445 = encode_clo(alloc_clo(lam44445_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44447 = arg_buffer[1];
//reading env and args
void* kont44149 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45728 = alloc_clo(lam44445_fptr, 5);

//setting env list
clo45728[1] = cdr;
clo45728[2] = kont44149;
clo45728[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo45728[4] = length;
clo45728[5] = lst;
void* f4415244282 = encode_clo(clo45728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4415244282;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam44448_fptr() // lam44448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44449 = arg_buffer[1];
//reading env and args
void* x4405144293 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44153 = (decode_clo(env44449))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44153);
arg_buffer[2] = x4405144293;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44153))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44448 = encode_clo(alloc_clo(lam44448_fptr, 0));

void* lam44450_fptr() // lam44450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44451 = arg_buffer[1];
//reading env and args
void* a4405544301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env44451))[3];
//not do dummy comment
void* a4405344297 = (decode_clo(env44451))[2];
//not do dummy comment
void* kont44153 = (decode_clo(env44451))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44153;
arg_buffer[3] = a4405344297;
arg_buffer[4] = a4405544301;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44450 = encode_clo(alloc_clo(lam44450_fptr, 0));

void* lam44452_fptr() // lam44452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44453 = arg_buffer[1];
//reading env and args
void* a4405444299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env44453))[5];
//not do dummy comment
void* proc = (decode_clo(env44453))[4];
//not do dummy comment
void* cons = (decode_clo(env44453))[3];
//not do dummy comment
void* a4405344297 = (decode_clo(env44453))[2];
//not do dummy comment
void* kont44153 = (decode_clo(env44453))[1];

//creating new closure instance
void** clo45730 = alloc_clo(lam44450_fptr, 3);

//setting env list
clo45730[1] = kont44153;
clo45730[2] = a4405344297;
clo45730[3] = cons;
void* f4415544300 = encode_clo(clo45730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4415544300;
arg_buffer[3] = proc;
arg_buffer[4] = a4405444299;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44452 = encode_clo(alloc_clo(lam44452_fptr, 0));

void* lam44454_fptr() // lam44454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44455 = arg_buffer[1];
//reading env and args
void* a4405344297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44455))[6];
//not do dummy comment
void* map = (decode_clo(env44455))[5];
//not do dummy comment
void* proc = (decode_clo(env44455))[4];
//not do dummy comment
void* cons = (decode_clo(env44455))[3];
//not do dummy comment
void* lst = (decode_clo(env44455))[2];
//not do dummy comment
void* kont44153 = (decode_clo(env44455))[1];

//creating new closure instance
void** clo45732 = alloc_clo(lam44452_fptr, 5);

//setting env list
clo45732[1] = kont44153;
clo45732[2] = a4405344297;
clo45732[3] = cons;
clo45732[4] = proc;
clo45732[5] = map;
void* f4415644298 = encode_clo(clo45732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4415644298;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44454 = encode_clo(alloc_clo(lam44454_fptr, 0));

void* lam44456_fptr() // lam44456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44457 = arg_buffer[1];
//reading env and args
void* a4405244295 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44457))[6];
//not do dummy comment
void* map = (decode_clo(env44457))[5];
//not do dummy comment
void* proc = (decode_clo(env44457))[4];
//not do dummy comment
void* cons = (decode_clo(env44457))[3];
//not do dummy comment
void* lst = (decode_clo(env44457))[2];
//not do dummy comment
void* kont44153 = (decode_clo(env44457))[1];

//creating new closure instance
void** clo45734 = alloc_clo(lam44454_fptr, 6);

//setting env list
clo45734[1] = kont44153;
clo45734[2] = lst;
clo45734[3] = cons;
clo45734[4] = proc;
clo45734[5] = map;
clo45734[6] = cdr;
void* f4415744296 = encode_clo(clo45734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4415744296;
arg_buffer[3] = a4405244295;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44456 = encode_clo(alloc_clo(lam44456_fptr, 0));

void* lam44458_fptr() // lam44458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44459 = arg_buffer[1];
//reading env and args
void* a4405044291 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env44459))[8];
//not do dummy comment
void* proc = (decode_clo(env44459))[7];
//not do dummy comment
void* car = (decode_clo(env44459))[6];
//not do dummy comment
void* cons = (decode_clo(env44459))[5];
//not do dummy comment
void* list = (decode_clo(env44459))[4];
//not do dummy comment
void* cdr = (decode_clo(env44459))[3];
//not do dummy comment
void* lst = (decode_clo(env44459))[2];
//not do dummy comment
void* kont44153 = (decode_clo(env44459))[1];

//if-clause
bool if_guard45735 = is_true(a4405044291);
if(if_guard45735)
{

//creating new closure instance
void** clo45737 = alloc_clo(lam44448_fptr, 1);

//setting env list
clo45737[1] = kont44153;
void* f4415444292 = encode_clo(clo45737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4415444292;
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
void** clo45739 = alloc_clo(lam44456_fptr, 6);

//setting env list
clo45739[1] = kont44153;
clo45739[2] = lst;
clo45739[3] = cons;
clo45739[4] = proc;
clo45739[5] = map;
clo45739[6] = cdr;
void* f4415844294 = encode_clo(clo45739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4415844294;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44458 = encode_clo(alloc_clo(lam44458_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44460 = arg_buffer[1];
//reading env and args
void* kont44153 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45741 = alloc_clo(lam44458_fptr, 8);

//setting env list
clo45741[1] = kont44153;
clo45741[2] = lst;
clo45741[3] = cdr;
clo45741[4] = list;
clo45741[5] = cons;
clo45741[6] = car;
clo45741[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo45741[8] = map;
void* f4415944290 = encode_clo(clo45741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4415944290;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam44461_fptr() // lam44461 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44462 = arg_buffer[1];
//reading env and args
void* x4405744305 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44160 = (decode_clo(env44462))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44160);
arg_buffer[2] = x4405744305;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44160))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44461 = encode_clo(alloc_clo(lam44461_fptr, 0));

void* lam44463_fptr() // lam44463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44464 = arg_buffer[1];
//reading env and args
void* a4406244315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4406044311 = (decode_clo(env44464))[3];
//not do dummy comment
void* kont44160 = (decode_clo(env44464))[2];
//not do dummy comment
void* cons = (decode_clo(env44464))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44160;
arg_buffer[3] = a4406044311;
arg_buffer[4] = a4406244315;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44463 = encode_clo(alloc_clo(lam44463_fptr, 0));

void* lam44465_fptr() // lam44465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44466 = arg_buffer[1];
//reading env and args
void* a4406144313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4406044311 = (decode_clo(env44466))[5];
//not do dummy comment
void* op = (decode_clo(env44466))[4];
//not do dummy comment
void* kont44160 = (decode_clo(env44466))[3];
//not do dummy comment
void* filter = (decode_clo(env44466))[2];
//not do dummy comment
void* cons = (decode_clo(env44466))[1];

//creating new closure instance
void** clo45743 = alloc_clo(lam44463_fptr, 3);

//setting env list
clo45743[1] = cons;
clo45743[2] = kont44160;
clo45743[3] = a4406044311;
void* f4416244314 = encode_clo(clo45743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4416244314;
arg_buffer[3] = op;
arg_buffer[4] = a4406144313;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44465 = encode_clo(alloc_clo(lam44465_fptr, 0));

void* lam44467_fptr() // lam44467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44468 = arg_buffer[1];
//reading env and args
void* a4406044311 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44468))[6];
//not do dummy comment
void* lst = (decode_clo(env44468))[5];
//not do dummy comment
void* op = (decode_clo(env44468))[4];
//not do dummy comment
void* kont44160 = (decode_clo(env44468))[3];
//not do dummy comment
void* filter = (decode_clo(env44468))[2];
//not do dummy comment
void* cons = (decode_clo(env44468))[1];

//creating new closure instance
void** clo45745 = alloc_clo(lam44465_fptr, 5);

//setting env list
clo45745[1] = cons;
clo45745[2] = filter;
clo45745[3] = kont44160;
clo45745[4] = op;
clo45745[5] = a4406044311;
void* f4416344312 = encode_clo(clo45745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4416344312;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44467 = encode_clo(alloc_clo(lam44467_fptr, 0));

void* lam44469_fptr() // lam44469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44470 = arg_buffer[1];
//reading env and args
void* a4406344317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env44470))[3];
//not do dummy comment
void* kont44160 = (decode_clo(env44470))[2];
//not do dummy comment
void* filter = (decode_clo(env44470))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont44160;
arg_buffer[3] = op;
arg_buffer[4] = a4406344317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44469 = encode_clo(alloc_clo(lam44469_fptr, 0));

void* lam44471_fptr() // lam44471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44472 = arg_buffer[1];
//reading env and args
void* a4405944309 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44472))[7];
//not do dummy comment
void* lst = (decode_clo(env44472))[6];
//not do dummy comment
void* op = (decode_clo(env44472))[5];
//not do dummy comment
void* kont44160 = (decode_clo(env44472))[4];
//not do dummy comment
void* cons = (decode_clo(env44472))[3];
//not do dummy comment
void* filter = (decode_clo(env44472))[2];
//not do dummy comment
void* car = (decode_clo(env44472))[1];

//if-clause
bool if_guard45746 = is_true(a4405944309);
if(if_guard45746)
{

//creating new closure instance
void** clo45748 = alloc_clo(lam44467_fptr, 6);

//setting env list
clo45748[1] = cons;
clo45748[2] = filter;
clo45748[3] = kont44160;
clo45748[4] = op;
clo45748[5] = lst;
clo45748[6] = cdr;
void* f4416444310 = encode_clo(clo45748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4416444310;
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
void** clo45750 = alloc_clo(lam44469_fptr, 3);

//setting env list
clo45750[1] = filter;
clo45750[2] = kont44160;
clo45750[3] = op;
void* f4416544316 = encode_clo(clo45750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4416544316;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44471 = encode_clo(alloc_clo(lam44471_fptr, 0));

void* lam44473_fptr() // lam44473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44474 = arg_buffer[1];
//reading env and args
void* a4405844307 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44474))[7];
//not do dummy comment
void* lst = (decode_clo(env44474))[6];
//not do dummy comment
void* op = (decode_clo(env44474))[5];
//not do dummy comment
void* kont44160 = (decode_clo(env44474))[4];
//not do dummy comment
void* cons = (decode_clo(env44474))[3];
//not do dummy comment
void* filter = (decode_clo(env44474))[2];
//not do dummy comment
void* car = (decode_clo(env44474))[1];

//creating new closure instance
void** clo45752 = alloc_clo(lam44471_fptr, 7);

//setting env list
clo45752[1] = car;
clo45752[2] = filter;
clo45752[3] = cons;
clo45752[4] = kont44160;
clo45752[5] = op;
clo45752[6] = lst;
clo45752[7] = cdr;
void* f4416644308 = encode_clo(clo45752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4416644308;
arg_buffer[3] = a4405844307;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44473 = encode_clo(alloc_clo(lam44473_fptr, 0));

void* lam44475_fptr() // lam44475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44476 = arg_buffer[1];
//reading env and args
void* a4405644303 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44476))[8];
//not do dummy comment
void* op = (decode_clo(env44476))[7];
//not do dummy comment
void* kont44160 = (decode_clo(env44476))[6];
//not do dummy comment
void* cons = (decode_clo(env44476))[5];
//not do dummy comment
void* list = (decode_clo(env44476))[4];
//not do dummy comment
void* cdr = (decode_clo(env44476))[3];
//not do dummy comment
void* filter = (decode_clo(env44476))[2];
//not do dummy comment
void* car = (decode_clo(env44476))[1];

//if-clause
bool if_guard45753 = is_true(a4405644303);
if(if_guard45753)
{

//creating new closure instance
void** clo45755 = alloc_clo(lam44461_fptr, 1);

//setting env list
clo45755[1] = kont44160;
void* f4416144304 = encode_clo(clo45755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4416144304;
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
void** clo45757 = alloc_clo(lam44473_fptr, 7);

//setting env list
clo45757[1] = car;
clo45757[2] = filter;
clo45757[3] = cons;
clo45757[4] = kont44160;
clo45757[5] = op;
clo45757[6] = lst;
clo45757[7] = cdr;
void* f4416744306 = encode_clo(clo45757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4416744306;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44475 = encode_clo(alloc_clo(lam44475_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44477 = arg_buffer[1];
//reading env and args
void* kont44160 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45759 = alloc_clo(lam44475_fptr, 8);

//setting env list
clo45759[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo45759[2] = filter;
clo45759[3] = cdr;
clo45759[4] = list;
clo45759[5] = cons;
clo45759[6] = kont44160;
clo45759[7] = op;
clo45759[8] = lst;
void* f4416844302 = encode_clo(clo45759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4416844302;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam44478_fptr() // lam44478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44479 = arg_buffer[1];
//reading env and args
void* a4406844325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4406644322 = (decode_clo(env44479))[3];
//not do dummy comment
void* kont44169 = (decode_clo(env44479))[2];
//not do dummy comment
void* drop = (decode_clo(env44479))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont44169;
arg_buffer[3] = a4406644322;
arg_buffer[4] = a4406844325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44478 = encode_clo(alloc_clo(lam44478_fptr, 0));

void* lam44481_fptr() // lam44481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44482 = arg_buffer[1];
//reading env and args
void* a4406644322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env44482))[4];
//not do dummy comment
void* _u45 = (decode_clo(env44482))[3];
//not do dummy comment
void* kont44169 = (decode_clo(env44482))[2];
//not do dummy comment
void* drop = (decode_clo(env44482))[1];
mpz_t* mpzvar45760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45760, "1", 10);
void* a4406744323 = encode_mpz(mpzvar45760);

//creating new closure instance
void** clo45762 = alloc_clo(lam44478_fptr, 3);

//setting env list
clo45762[1] = drop;
clo45762[2] = kont44169;
clo45762[3] = a4406644322;
void* f4417044324 = encode_clo(clo45762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4417044324;
arg_buffer[3] = n;
arg_buffer[4] = a4406744323;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44481 = encode_clo(alloc_clo(lam44481_fptr, 0));

void* lam44483_fptr() // lam44483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44484 = arg_buffer[1];
//reading env and args
void* a4406544320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44484))[6];
//not do dummy comment
void* n = (decode_clo(env44484))[5];
//not do dummy comment
void* _u45 = (decode_clo(env44484))[4];
//not do dummy comment
void* lst = (decode_clo(env44484))[3];
//not do dummy comment
void* kont44169 = (decode_clo(env44484))[2];
//not do dummy comment
void* drop = (decode_clo(env44484))[1];

//if-clause
bool if_guard45763 = is_true(a4406544320);
if(if_guard45763)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44169);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44169))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45765 = alloc_clo(lam44481_fptr, 4);

//setting env list
clo45765[1] = drop;
clo45765[2] = kont44169;
clo45765[3] = _u45;
clo45765[4] = n;
void* f4417144321 = encode_clo(clo45765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4417144321;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44483 = encode_clo(alloc_clo(lam44483_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44486 = arg_buffer[1];
//reading env and args
void* kont44169 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar45766 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45766, "0", 10);
void* a4406444318 = encode_mpz(mpzvar45766);

//creating new closure instance
void** clo45768 = alloc_clo(lam44483_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo45768[1] = drop;
clo45768[2] = kont44169;
clo45768[3] = lst;
clo45768[4] = _u45;
clo45768[5] = n;
clo45768[6] = cdr;
void* f4417244319 = encode_clo(clo45768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4417244319;
arg_buffer[3] = n;
arg_buffer[4] = a4406444318;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam44487_fptr() // lam44487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44488 = arg_buffer[1];
//reading env and args
void* a4407244333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4407044329 = (decode_clo(env44488))[3];
//not do dummy comment
void* kont44173 = (decode_clo(env44488))[2];
//not do dummy comment
void* proc = (decode_clo(env44488))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont44173;
arg_buffer[3] = a4407044329;
arg_buffer[4] = a4407244333;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44487 = encode_clo(alloc_clo(lam44487_fptr, 0));

void* lam44489_fptr() // lam44489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44490 = arg_buffer[1];
//reading env and args
void* a4407144331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44173 = (decode_clo(env44490))[5];
//not do dummy comment
void* foldr = (decode_clo(env44490))[4];
//not do dummy comment
void* a4407044329 = (decode_clo(env44490))[3];
//not do dummy comment
void* proc = (decode_clo(env44490))[2];
//not do dummy comment
void* acc = (decode_clo(env44490))[1];

//creating new closure instance
void** clo45770 = alloc_clo(lam44487_fptr, 3);

//setting env list
clo45770[1] = proc;
clo45770[2] = kont44173;
clo45770[3] = a4407044329;
void* f4417444332 = encode_clo(clo45770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4417444332;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4407144331;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44489 = encode_clo(alloc_clo(lam44489_fptr, 0));

void* lam44491_fptr() // lam44491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44492 = arg_buffer[1];
//reading env and args
void* a4407044329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44492))[6];
//not do dummy comment
void* kont44173 = (decode_clo(env44492))[5];
//not do dummy comment
void* foldr = (decode_clo(env44492))[4];
//not do dummy comment
void* lst = (decode_clo(env44492))[3];
//not do dummy comment
void* proc = (decode_clo(env44492))[2];
//not do dummy comment
void* acc = (decode_clo(env44492))[1];

//creating new closure instance
void** clo45772 = alloc_clo(lam44489_fptr, 5);

//setting env list
clo45772[1] = acc;
clo45772[2] = proc;
clo45772[3] = a4407044329;
clo45772[4] = foldr;
clo45772[5] = kont44173;
void* f4417544330 = encode_clo(clo45772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4417544330;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44491 = encode_clo(alloc_clo(lam44491_fptr, 0));

void* lam44493_fptr() // lam44493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44494 = arg_buffer[1];
//reading env and args
void* a4406944327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44494))[7];
//not do dummy comment
void* kont44173 = (decode_clo(env44494))[6];
//not do dummy comment
void* car = (decode_clo(env44494))[5];
//not do dummy comment
void* foldr = (decode_clo(env44494))[4];
//not do dummy comment
void* lst = (decode_clo(env44494))[3];
//not do dummy comment
void* proc = (decode_clo(env44494))[2];
//not do dummy comment
void* acc = (decode_clo(env44494))[1];

//if-clause
bool if_guard45773 = is_true(a4406944327);
if(if_guard45773)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44173);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44173))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45775 = alloc_clo(lam44491_fptr, 6);

//setting env list
clo45775[1] = acc;
clo45775[2] = proc;
clo45775[3] = lst;
clo45775[4] = foldr;
clo45775[5] = kont44173;
clo45775[6] = cdr;
void* f4417644328 = encode_clo(clo45775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4417644328;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44493 = encode_clo(alloc_clo(lam44493_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44495 = arg_buffer[1];
//reading env and args
void* kont44173 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45777 = alloc_clo(lam44493_fptr, 7);

//setting env list
clo45777[1] = acc;
clo45777[2] = proc;
clo45777[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo45777[4] = foldr;
clo45777[5] = car;
clo45777[6] = kont44173;
clo45777[7] = cdr;
void* f4417744326 = encode_clo(clo45777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4417744326;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam44496_fptr() // lam44496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44497 = arg_buffer[1];
//reading env and args
void* a4407644341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4407444337 = (decode_clo(env44497))[3];
//not do dummy comment
void* kont44178 = (decode_clo(env44497))[2];
//not do dummy comment
void* cons = (decode_clo(env44497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44178;
arg_buffer[3] = a4407444337;
arg_buffer[4] = a4407644341;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44496 = encode_clo(alloc_clo(lam44496_fptr, 0));

void* lam44498_fptr() // lam44498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44499 = arg_buffer[1];
//reading env and args
void* a4407544339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env44499))[5];
//not do dummy comment
void* kont44178 = (decode_clo(env44499))[4];
//not do dummy comment
void* cons = (decode_clo(env44499))[3];
//not do dummy comment
void* a4407444337 = (decode_clo(env44499))[2];
//not do dummy comment
void* lst2 = (decode_clo(env44499))[1];

//creating new closure instance
void** clo45779 = alloc_clo(lam44496_fptr, 3);

//setting env list
clo45779[1] = cons;
clo45779[2] = kont44178;
clo45779[3] = a4407444337;
void* f4417944340 = encode_clo(clo45779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4417944340;
arg_buffer[3] = a4407544339;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44498 = encode_clo(alloc_clo(lam44498_fptr, 0));

void* lam44500_fptr() // lam44500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44501 = arg_buffer[1];
//reading env and args
void* a4407444337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44501))[6];
//not do dummy comment
void* append = (decode_clo(env44501))[5];
//not do dummy comment
void* lst2 = (decode_clo(env44501))[4];
//not do dummy comment
void* cons = (decode_clo(env44501))[3];
//not do dummy comment
void* lst1 = (decode_clo(env44501))[2];
//not do dummy comment
void* kont44178 = (decode_clo(env44501))[1];

//creating new closure instance
void** clo45781 = alloc_clo(lam44498_fptr, 5);

//setting env list
clo45781[1] = lst2;
clo45781[2] = a4407444337;
clo45781[3] = cons;
clo45781[4] = kont44178;
clo45781[5] = append;
void* f4418044338 = encode_clo(clo45781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4418044338;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44500 = encode_clo(alloc_clo(lam44500_fptr, 0));

void* lam44502_fptr() // lam44502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44503 = arg_buffer[1];
//reading env and args
void* a4407344335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44503))[7];
//not do dummy comment
void* append = (decode_clo(env44503))[6];
//not do dummy comment
void* lst2 = (decode_clo(env44503))[5];
//not do dummy comment
void* cons = (decode_clo(env44503))[4];
//not do dummy comment
void* lst1 = (decode_clo(env44503))[3];
//not do dummy comment
void* kont44178 = (decode_clo(env44503))[2];
//not do dummy comment
void* car = (decode_clo(env44503))[1];

//if-clause
bool if_guard45782 = is_true(a4407344335);
if(if_guard45782)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44178);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44178))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45784 = alloc_clo(lam44500_fptr, 6);

//setting env list
clo45784[1] = kont44178;
clo45784[2] = lst1;
clo45784[3] = cons;
clo45784[4] = lst2;
clo45784[5] = append;
clo45784[6] = cdr;
void* f4418144336 = encode_clo(clo45784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4418144336;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44502 = encode_clo(alloc_clo(lam44502_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44504 = arg_buffer[1];
//reading env and args
void* kont44178 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45786 = alloc_clo(lam44502_fptr, 7);

//setting env list
clo45786[1] = car;
clo45786[2] = kont44178;
clo45786[3] = lst1;
clo45786[4] = cons;
clo45786[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo45786[6] = append;
clo45786[7] = cdr;
void* f4418244334 = encode_clo(clo45786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4418244334;
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
void* _44505 = arg_buffer[1];
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

void* kont4418344342 = prim_car(lst);
void* lst44343 = prim_cdr(lst);
void* x4407744344 = apply_prim_hash(lst44343);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4418344342);
arg_buffer[2] = x4407744344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4418344342))[0]);
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
void* _44506 = arg_buffer[1];
//reading env and args
void* kont44185 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4407844345 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44185);
arg_buffer[2] = x4407844345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44185))[0]);
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
void* _44507 = arg_buffer[1];
//reading env and args
void* kont44186 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4407944346 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44186);
arg_buffer[2] = x4407944346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44186))[0]);
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
void* _44508 = arg_buffer[1];
//reading env and args
void* kont44187 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4408044347 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44187);
arg_buffer[2] = x4408044347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44187))[0]);
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
void* _44509 = arg_buffer[1];
//reading env and args
void* kont44188 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4408144348 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44188);
arg_buffer[2] = x4408144348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44188))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam44511_fptr() // lam44511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44512 = arg_buffer[1];
//reading env and args
void* a4408944358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env44512))[2];
//not do dummy comment
void* kont44189 = (decode_clo(env44512))[1];
void* a4409044359 = encode_str(new(GC) std::string("work"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont44189;
arg_buffer[3] = a4408944358;
arg_buffer[4] = a4409044359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44511 = encode_clo(alloc_clo(lam44511_fptr, 0));

void* lam44515_fptr() // lam44515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44516 = arg_buffer[1];
//reading env and args
void* a4408644354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env44516))[3];
//not do dummy comment
void* hash_u45set = (decode_clo(env44516))[2];
//not do dummy comment
void* kont44189 = (decode_clo(env44516))[1];
void* a4408744355 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar45787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45787, "90", 10);
void* a4408844356 = encode_mpz(mpzvar45787);

//creating new closure instance
void** clo45789 = alloc_clo(lam44511_fptr, 2);

//setting env list
clo45789[1] = kont44189;
clo45789[2] = hash_u45ref;
void* f4419044357 = encode_clo(clo45789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45set);
arg_buffer[2] = f4419044357;
arg_buffer[3] = a4408644354;
arg_buffer[4] = a4408744355;
arg_buffer[5] = a4408844356;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44515 = encode_clo(alloc_clo(lam44515_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44521 = arg_buffer[1];
//reading env and args
void* kont44189 = arg_buffer[2];
//Dummy comment
void* a4408244349 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar45790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45790, "80", 10);
void* a4408344350 = encode_mpz(mpzvar45790);
mpz_t* mpzvar45791 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45791, "10", 10);
void* a4408444351 = encode_mpz(mpzvar45791);
void* a4408544352 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo45793 = alloc_clo(lam44515_fptr, 3);

//setting env list
clo45793[1] = kont44189;
clo45793[2] = hash_u45set;
clo45793[3] = hash_u45ref;
void* f4419144353 = encode_clo(clo45793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4419144353;
arg_buffer[3] = a4408244349;
arg_buffer[4] = a4408344350;
arg_buffer[5] = a4408444351;
arg_buffer[6] = a4408544352;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam44522_fptr() // lam44522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44523 = arg_buffer[1];
//reading env and args
void* x4409144361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44192 = (decode_clo(env44523))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44192);
arg_buffer[2] = x4409144361;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44192))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44522 = encode_clo(alloc_clo(lam44522_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44524 = arg_buffer[1];
//reading env and args
void* kont44192 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo45795 = alloc_clo(lam44522_fptr, 1);

//setting env list
clo45795[1] = kont44192;
void* f4419344360 = encode_clo(clo45795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4419344360;
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

