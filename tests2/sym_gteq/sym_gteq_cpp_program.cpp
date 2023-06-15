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
void* _55329 = arg_buffer[1];
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

void* kont5506755167 = prim_car(lst);
void* lst55168 = prim_cdr(lst);
void* x5497855169 = apply_prim__u43(lst55168);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5506755167);
arg_buffer[2] = x5497855169;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5506755167))[0]);
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
void* _55330 = arg_buffer[1];
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

void* kont5506955170 = prim_car(lst);
void* lst55171 = prim_cdr(lst);
void* x5497955172 = apply_prim__u45(lst55171);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5506955170);
arg_buffer[2] = x5497955172;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5506955170))[0]);
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
void* _55331 = arg_buffer[1];
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

void* kont5507155173 = prim_car(lst);
void* lst55174 = prim_cdr(lst);
void* x5498055175 = apply_prim__u42(lst55174);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5507155173);
arg_buffer[2] = x5498055175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5507155173))[0]);
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
void* _55332 = arg_buffer[1];
//reading env and args
void* kont55073 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5498155176 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55073);
arg_buffer[2] = x5498155176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55073))[0]);
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
void* _55333 = arg_buffer[1];
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

void* kont5507455177 = prim_car(lst);
void* lst55178 = prim_cdr(lst);
void* x5498255179 = apply_prim__u47(lst55178);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5507455177);
arg_buffer[2] = x5498255179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5507455177))[0]);
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
void* _55334 = arg_buffer[1];
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

void* kont5507655180 = prim_car(lst);
void* lst55181 = prim_cdr(lst);
void* x5498355182 = apply_prim__u61(lst55181);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5507655180);
arg_buffer[2] = x5498355182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5507655180))[0]);
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
void* _55335 = arg_buffer[1];
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

void* kont5507855183 = prim_car(lst);
void* lst55184 = prim_cdr(lst);
void* x5498455185 = apply_prim__u62(lst55184);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5507855183);
arg_buffer[2] = x5498455185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5507855183))[0]);
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
void* _55336 = arg_buffer[1];
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

void* kont5508055186 = prim_car(lst);
void* lst55187 = prim_cdr(lst);
void* x5498555188 = apply_prim__u60(lst55187);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5508055186);
arg_buffer[2] = x5498555188;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5508055186))[0]);
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
void* _55337 = arg_buffer[1];
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

void* kont5508255189 = prim_car(lst);
void* lst55190 = prim_cdr(lst);
void* x5498655191 = apply_prim__u60_u61(lst55190);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5508255189);
arg_buffer[2] = x5498655191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5508255189))[0]);
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
void* _55338 = arg_buffer[1];
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

void* kont5508455192 = prim_car(lst);
void* lst55193 = prim_cdr(lst);
void* x5498755194 = apply_prim__u62_u61(lst55193);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5508455192);
arg_buffer[2] = x5498755194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5508455192))[0]);
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
void* _55339 = arg_buffer[1];
//reading env and args
void* kont55086 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5498855195 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55086);
arg_buffer[2] = x5498855195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55086))[0]);
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
void* _55340 = arg_buffer[1];
//reading env and args
void* kont55087 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5498955196 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55087);
arg_buffer[2] = x5498955196;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55087))[0]);
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
void* _55341 = arg_buffer[1];
//reading env and args
void* kont55088 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5499055197 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55088);
arg_buffer[2] = x5499055197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55088))[0]);
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
void* _55342 = arg_buffer[1];
//reading env and args
void* kont55089 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5499155198 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55089);
arg_buffer[2] = x5499155198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55089))[0]);
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
void* _55343 = arg_buffer[1];
//reading env and args
void* kont55090 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5499255199 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55090);
arg_buffer[2] = x5499255199;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55090))[0]);
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
void* _55344 = arg_buffer[1];
//reading env and args
void* kont55091 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5499355200 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55091);
arg_buffer[2] = x5499355200;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55091))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam55345_fptr() // lam55345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55346 = arg_buffer[1];
//reading env and args
void* a5499655204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5499455201 = (decode_clo(env55346))[3];
//not do dummy comment
void* kont55092 = (decode_clo(env55346))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env55346))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55092;
arg_buffer[3] = a5499455201;
arg_buffer[4] = a5499655204;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55345 = encode_clo(alloc_clo(lam55345_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55349 = arg_buffer[1];
//reading env and args
void* kont55092 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55990 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55990, "0", 10);
void* a5499455201 = encode_mpz(mpzvar55990);
mpz_t* mpzvar55991 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55991, "2", 10);
void* a5499555202 = encode_mpz(mpzvar55991);

//creating new closure instance
void** clo55993 = alloc_clo(lam55345_fptr, 3);

//setting env list
clo55993[1] = equal_u63;
clo55993[2] = kont55092;
clo55993[3] = a5499455201;
void* f5509355203 = encode_clo(clo55993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5509355203;
arg_buffer[3] = x;
arg_buffer[4] = a5499555202;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam55350_fptr() // lam55350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55351 = arg_buffer[1];
//reading env and args
void* a5499955208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env55351))[3];
//not do dummy comment
void* a5499755205 = (decode_clo(env55351))[2];
//not do dummy comment
void* kont55094 = (decode_clo(env55351))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55094;
arg_buffer[3] = a5499755205;
arg_buffer[4] = a5499955208;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55350 = encode_clo(alloc_clo(lam55350_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55354 = arg_buffer[1];
//reading env and args
void* kont55094 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55994 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55994, "1", 10);
void* a5499755205 = encode_mpz(mpzvar55994);
mpz_t* mpzvar55995 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55995, "2", 10);
void* a5499855206 = encode_mpz(mpzvar55995);

//creating new closure instance
void** clo55997 = alloc_clo(lam55350_fptr, 3);

//setting env list
clo55997[1] = kont55094;
clo55997[2] = a5499755205;
clo55997[3] = equal_u63;
void* f5509555207 = encode_clo(clo55997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5509555207;
arg_buffer[3] = x;
arg_buffer[4] = a5499855206;
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
void* _55355 = arg_buffer[1];
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

void* kont5509655209 = prim_car(x);
void* x55210 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5509655209);
arg_buffer[2] = x55210;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5509655209))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam55358_fptr() // lam55358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55359 = arg_buffer[1];
//reading env and args
void* a5500555220 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env55359))[3];
//not do dummy comment
void* kont55098 = (decode_clo(env55359))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55359))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont55098;
arg_buffer[3] = x;
arg_buffer[4] = a5500555220;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55358 = encode_clo(alloc_clo(lam55358_fptr, 0));

void* lam55360_fptr() // lam55360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55361 = arg_buffer[1];
//reading env and args
void* a5500355217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55361))[5];
//not do dummy comment
void* lst = (decode_clo(env55361))[4];
//not do dummy comment
void* x = (decode_clo(env55361))[3];
//not do dummy comment
void* kont55098 = (decode_clo(env55361))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55361))[1];

//if-clause
bool if_guard55998 = is_true(a5500355217);
if(if_guard55998)
{
void* x5500455218 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55098);
arg_buffer[2] = x5500455218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55098))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56000 = alloc_clo(lam55358_fptr, 3);

//setting env list
clo56000[1] = member_u63;
clo56000[2] = kont55098;
clo56000[3] = x;
void* f5509955219 = encode_clo(clo56000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5509955219;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55360 = encode_clo(alloc_clo(lam55360_fptr, 0));

void* lam55362_fptr() // lam55362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55363 = arg_buffer[1];
//reading env and args
void* a5500255215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55363))[6];
//not do dummy comment
void* lst = (decode_clo(env55363))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env55363))[4];
//not do dummy comment
void* x = (decode_clo(env55363))[3];
//not do dummy comment
void* kont55098 = (decode_clo(env55363))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55363))[1];

//creating new closure instance
void** clo56002 = alloc_clo(lam55360_fptr, 5);

//setting env list
clo56002[1] = member_u63;
clo56002[2] = kont55098;
clo56002[3] = x;
clo56002[4] = lst;
clo56002[5] = cdr;
void* f5510055216 = encode_clo(clo56002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5510055216;
arg_buffer[3] = a5500255215;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55362 = encode_clo(alloc_clo(lam55362_fptr, 0));

void* lam55364_fptr() // lam55364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55365 = arg_buffer[1];
//reading env and args
void* a5500055212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55365))[7];
//not do dummy comment
void* lst = (decode_clo(env55365))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env55365))[5];
//not do dummy comment
void* x = (decode_clo(env55365))[4];
//not do dummy comment
void* car = (decode_clo(env55365))[3];
//not do dummy comment
void* kont55098 = (decode_clo(env55365))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55365))[1];

//if-clause
bool if_guard56003 = is_true(a5500055212);
if(if_guard56003)
{
void* x5500155213 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55098);
arg_buffer[2] = x5500155213;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55098))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56005 = alloc_clo(lam55362_fptr, 6);

//setting env list
clo56005[1] = member_u63;
clo56005[2] = kont55098;
clo56005[3] = x;
clo56005[4] = equal_u63;
clo56005[5] = lst;
clo56005[6] = cdr;
void* f5510155214 = encode_clo(clo56005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5510155214;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55364 = encode_clo(alloc_clo(lam55364_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55366 = arg_buffer[1];
//reading env and args
void* kont55098 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56007 = alloc_clo(lam55364_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo56007[1] = member_u63;
clo56007[2] = kont55098;
clo56007[3] = car;
clo56007[4] = x;
clo56007[5] = equal_u63;
clo56007[6] = lst;
clo56007[7] = cdr;
void* f5510255211 = encode_clo(clo56007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5510255211;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam55367_fptr() // lam55367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55368 = arg_buffer[1];
//reading env and args
void* a5500955228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55103 = (decode_clo(env55368))[4];
//not do dummy comment
void* fun = (decode_clo(env55368))[3];
//not do dummy comment
void* a5500855226 = (decode_clo(env55368))[2];
//not do dummy comment
void* foldl = (decode_clo(env55368))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont55103;
arg_buffer[3] = fun;
arg_buffer[4] = a5500855226;
arg_buffer[5] = a5500955228;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55367 = encode_clo(alloc_clo(lam55367_fptr, 0));

void* lam55369_fptr() // lam55369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55370 = arg_buffer[1];
//reading env and args
void* a5500855226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55370))[5];
//not do dummy comment
void* kont55103 = (decode_clo(env55370))[4];
//not do dummy comment
void* lst = (decode_clo(env55370))[3];
//not do dummy comment
void* fun = (decode_clo(env55370))[2];
//not do dummy comment
void* foldl = (decode_clo(env55370))[1];

//creating new closure instance
void** clo56009 = alloc_clo(lam55367_fptr, 4);

//setting env list
clo56009[1] = foldl;
clo56009[2] = a5500855226;
clo56009[3] = fun;
clo56009[4] = kont55103;
void* f5510455227 = encode_clo(clo56009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5510455227;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55369 = encode_clo(alloc_clo(lam55369_fptr, 0));

void* lam55371_fptr() // lam55371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55372 = arg_buffer[1];
//reading env and args
void* a5500755224 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55372))[6];
//not do dummy comment
void* kont55103 = (decode_clo(env55372))[5];
//not do dummy comment
void* lst = (decode_clo(env55372))[4];
//not do dummy comment
void* fun = (decode_clo(env55372))[3];
//not do dummy comment
void* acc = (decode_clo(env55372))[2];
//not do dummy comment
void* foldl = (decode_clo(env55372))[1];

//creating new closure instance
void** clo56011 = alloc_clo(lam55369_fptr, 5);

//setting env list
clo56011[1] = foldl;
clo56011[2] = fun;
clo56011[3] = lst;
clo56011[4] = kont55103;
clo56011[5] = cdr;
void* f5510555225 = encode_clo(clo56011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5510555225;
arg_buffer[3] = a5500755224;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55371 = encode_clo(alloc_clo(lam55371_fptr, 0));

void* lam55373_fptr() // lam55373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55374 = arg_buffer[1];
//reading env and args
void* a5500655222 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55374))[7];
//not do dummy comment
void* kont55103 = (decode_clo(env55374))[6];
//not do dummy comment
void* lst = (decode_clo(env55374))[5];
//not do dummy comment
void* fun = (decode_clo(env55374))[4];
//not do dummy comment
void* acc = (decode_clo(env55374))[3];
//not do dummy comment
void* car = (decode_clo(env55374))[2];
//not do dummy comment
void* foldl = (decode_clo(env55374))[1];

//if-clause
bool if_guard56012 = is_true(a5500655222);
if(if_guard56012)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55103);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55103))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56014 = alloc_clo(lam55371_fptr, 6);

//setting env list
clo56014[1] = foldl;
clo56014[2] = acc;
clo56014[3] = fun;
clo56014[4] = lst;
clo56014[5] = kont55103;
clo56014[6] = cdr;
void* f5510655223 = encode_clo(clo56014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5510655223;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55373 = encode_clo(alloc_clo(lam55373_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55375 = arg_buffer[1];
//reading env and args
void* kont55103 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo56016 = alloc_clo(lam55373_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo56016[1] = foldl;
clo56016[2] = car;
clo56016[3] = acc;
clo56016[4] = fun;
clo56016[5] = lst;
clo56016[6] = kont55103;
clo56016[7] = cdr;
void* f5510755221 = encode_clo(clo56016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5510755221;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam55376_fptr() // lam55376 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55377 = arg_buffer[1];
//reading env and args
void* a5501355236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5501155232 = (decode_clo(env55377))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55377))[2];
//not do dummy comment
void* kont55108 = (decode_clo(env55377))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55108;
arg_buffer[3] = a5501155232;
arg_buffer[4] = a5501355236;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55376 = encode_clo(alloc_clo(lam55376_fptr, 0));

void* lam55378_fptr() // lam55378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55379 = arg_buffer[1];
//reading env and args
void* a5501255234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5501155232 = (decode_clo(env55379))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55379))[4];
//not do dummy comment
void* kont55108 = (decode_clo(env55379))[3];
//not do dummy comment
void* lst2 = (decode_clo(env55379))[2];
//not do dummy comment
void* cons = (decode_clo(env55379))[1];

//creating new closure instance
void** clo56018 = alloc_clo(lam55376_fptr, 3);

//setting env list
clo56018[1] = kont55108;
clo56018[2] = reverse_u45helper;
clo56018[3] = a5501155232;
void* f5510955235 = encode_clo(clo56018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5510955235;
arg_buffer[3] = a5501255234;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55378 = encode_clo(alloc_clo(lam55378_fptr, 0));

void* lam55380_fptr() // lam55380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55381 = arg_buffer[1];
//reading env and args
void* a5501155232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55381))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55381))[5];
//not do dummy comment
void* kont55108 = (decode_clo(env55381))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55381))[3];
//not do dummy comment
void* car = (decode_clo(env55381))[2];
//not do dummy comment
void* cons = (decode_clo(env55381))[1];

//creating new closure instance
void** clo56020 = alloc_clo(lam55378_fptr, 5);

//setting env list
clo56020[1] = cons;
clo56020[2] = lst2;
clo56020[3] = kont55108;
clo56020[4] = reverse_u45helper;
clo56020[5] = a5501155232;
void* f5511055233 = encode_clo(clo56020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5511055233;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55380 = encode_clo(alloc_clo(lam55380_fptr, 0));

void* lam55382_fptr() // lam55382 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55383 = arg_buffer[1];
//reading env and args
void* a5501055230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55383))[7];
//not do dummy comment
void* lst = (decode_clo(env55383))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55383))[5];
//not do dummy comment
void* kont55108 = (decode_clo(env55383))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55383))[3];
//not do dummy comment
void* car = (decode_clo(env55383))[2];
//not do dummy comment
void* cons = (decode_clo(env55383))[1];

//if-clause
bool if_guard56021 = is_true(a5501055230);
if(if_guard56021)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55108);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55108))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56023 = alloc_clo(lam55380_fptr, 6);

//setting env list
clo56023[1] = cons;
clo56023[2] = car;
clo56023[3] = lst2;
clo56023[4] = kont55108;
clo56023[5] = reverse_u45helper;
clo56023[6] = lst;
void* f5511155231 = encode_clo(clo56023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5511155231;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55382 = encode_clo(alloc_clo(lam55382_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55384 = arg_buffer[1];
//reading env and args
void* kont55108 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56025 = alloc_clo(lam55382_fptr, 7);

//setting env list
clo56025[1] = cons;
clo56025[2] = car;
clo56025[3] = lst2;
clo56025[4] = kont55108;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo56025[5] = reverse_u45helper;
clo56025[6] = lst;
clo56025[7] = cdr;
void* f5511255229 = encode_clo(clo56025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5511255229;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam55385_fptr() // lam55385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55386 = arg_buffer[1];
//reading env and args
void* a5501455238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55386))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55386))[2];
//not do dummy comment
void* kont55113 = (decode_clo(env55386))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55113;
arg_buffer[3] = lst;
arg_buffer[4] = a5501455238;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55385 = encode_clo(alloc_clo(lam55385_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55387 = arg_buffer[1];
//reading env and args
void* kont55113 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo56027 = alloc_clo(lam55385_fptr, 3);

//setting env list
clo56027[1] = kont55113;
clo56027[2] = reverse_u45helper;
clo56027[3] = lst;
void* f5511455237 = encode_clo(clo56027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5511455237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam55388_fptr() // lam55388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55389 = arg_buffer[1];
//reading env and args
void* x5501755243 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55115 = (decode_clo(env55389))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55115);
arg_buffer[2] = x5501755243;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55115))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55388 = encode_clo(alloc_clo(lam55388_fptr, 0));

void* lam55390_fptr() // lam55390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55391 = arg_buffer[1];
//reading env and args
void* a5502255252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5501855245 = (decode_clo(env55391))[4];
//not do dummy comment
void* a5502055248 = (decode_clo(env55391))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55391))[2];
//not do dummy comment
void* kont55115 = (decode_clo(env55391))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55115;
arg_buffer[3] = a5501855245;
arg_buffer[4] = a5502055248;
arg_buffer[5] = a5502255252;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55390 = encode_clo(alloc_clo(lam55390_fptr, 0));

void* lam55392_fptr() // lam55392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55393 = arg_buffer[1];
//reading env and args
void* a5502155250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5501855245 = (decode_clo(env55393))[6];
//not do dummy comment
void* a5502055248 = (decode_clo(env55393))[5];
//not do dummy comment
void* cons = (decode_clo(env55393))[4];
//not do dummy comment
void* kont55115 = (decode_clo(env55393))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55393))[2];
//not do dummy comment
void* lst2 = (decode_clo(env55393))[1];

//creating new closure instance
void** clo56029 = alloc_clo(lam55390_fptr, 4);

//setting env list
clo56029[1] = kont55115;
clo56029[2] = take_u45helper;
clo56029[3] = a5502055248;
clo56029[4] = a5501855245;
void* f5511755251 = encode_clo(clo56029);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5511755251;
arg_buffer[3] = a5502155250;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55392 = encode_clo(alloc_clo(lam55392_fptr, 0));

void* lam55394_fptr() // lam55394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55395 = arg_buffer[1];
//reading env and args
void* a5502055248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5501855245 = (decode_clo(env55395))[7];
//not do dummy comment
void* lst = (decode_clo(env55395))[6];
//not do dummy comment
void* car = (decode_clo(env55395))[5];
//not do dummy comment
void* cons = (decode_clo(env55395))[4];
//not do dummy comment
void* kont55115 = (decode_clo(env55395))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55395))[2];
//not do dummy comment
void* lst2 = (decode_clo(env55395))[1];

//creating new closure instance
void** clo56031 = alloc_clo(lam55392_fptr, 6);

//setting env list
clo56031[1] = lst2;
clo56031[2] = take_u45helper;
clo56031[3] = kont55115;
clo56031[4] = cons;
clo56031[5] = a5502055248;
clo56031[6] = a5501855245;
void* f5511855249 = encode_clo(clo56031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5511855249;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55394 = encode_clo(alloc_clo(lam55394_fptr, 0));

void* lam55397_fptr() // lam55397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55398 = arg_buffer[1];
//reading env and args
void* a5501855245 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55398))[8];
//not do dummy comment
void* cons = (decode_clo(env55398))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env55398))[6];
//not do dummy comment
void* lst2 = (decode_clo(env55398))[5];
//not do dummy comment
void* n = (decode_clo(env55398))[4];
//not do dummy comment
void* car = (decode_clo(env55398))[3];
//not do dummy comment
void* kont55115 = (decode_clo(env55398))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55398))[1];
mpz_t* mpzvar56032 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56032, "1", 10);
void* a5501955246 = encode_mpz(mpzvar56032);

//creating new closure instance
void** clo56034 = alloc_clo(lam55394_fptr, 7);

//setting env list
clo56034[1] = lst2;
clo56034[2] = take_u45helper;
clo56034[3] = kont55115;
clo56034[4] = cons;
clo56034[5] = car;
clo56034[6] = lst;
clo56034[7] = a5501855245;
void* f5511955247 = encode_clo(clo56034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5511955247;
arg_buffer[3] = n;
arg_buffer[4] = a5501955246;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55397 = encode_clo(alloc_clo(lam55397_fptr, 0));

void* lam55399_fptr() // lam55399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55400 = arg_buffer[1];
//reading env and args
void* a5501655241 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55400))[10];
//not do dummy comment
void* lst = (decode_clo(env55400))[9];
//not do dummy comment
void* reverse = (decode_clo(env55400))[8];
//not do dummy comment
void* cons = (decode_clo(env55400))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env55400))[6];
//not do dummy comment
void* lst2 = (decode_clo(env55400))[5];
//not do dummy comment
void* n = (decode_clo(env55400))[4];
//not do dummy comment
void* car = (decode_clo(env55400))[3];
//not do dummy comment
void* kont55115 = (decode_clo(env55400))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55400))[1];

//if-clause
bool if_guard56035 = is_true(a5501655241);
if(if_guard56035)
{

//creating new closure instance
void** clo56037 = alloc_clo(lam55388_fptr, 1);

//setting env list
clo56037[1] = kont55115;
void* f5511655242 = encode_clo(clo56037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5511655242;
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
void** clo56039 = alloc_clo(lam55397_fptr, 8);

//setting env list
clo56039[1] = _u45;
clo56039[2] = kont55115;
clo56039[3] = car;
clo56039[4] = n;
clo56039[5] = lst2;
clo56039[6] = take_u45helper;
clo56039[7] = cons;
clo56039[8] = lst;
void* f5512055244 = encode_clo(clo56039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5512055244;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55399 = encode_clo(alloc_clo(lam55399_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55402 = arg_buffer[1];
//reading env and args
void* kont55115 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar56040 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56040, "0", 10);
void* a5501555239 = encode_mpz(mpzvar56040);

//creating new closure instance
void** clo56042 = alloc_clo(lam55399_fptr, 10);

//setting env list
clo56042[1] = _u45;
clo56042[2] = kont55115;
clo56042[3] = car;
clo56042[4] = n;
clo56042[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo56042[6] = take_u45helper;
clo56042[7] = cons;
clo56042[8] = reverse;
clo56042[9] = lst;
clo56042[10] = cdr;
void* f5512155240 = encode_clo(clo56042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5512155240;
arg_buffer[3] = n;
arg_buffer[4] = a5501555239;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam55403_fptr() // lam55403 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55404 = arg_buffer[1];
//reading env and args
void* a5502355254 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55404))[4];
//not do dummy comment
void* kont55122 = (decode_clo(env55404))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55404))[2];
//not do dummy comment
void* n = (decode_clo(env55404))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55122;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5502355254;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55403 = encode_clo(alloc_clo(lam55403_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55405 = arg_buffer[1];
//reading env and args
void* kont55122 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56044 = alloc_clo(lam55403_fptr, 4);

//setting env list
clo56044[1] = n;
clo56044[2] = take_u45helper;
clo56044[3] = kont55122;
clo56044[4] = lst;
void* f5512355253 = encode_clo(clo56044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5512355253;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam55407_fptr() // lam55407 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55408 = arg_buffer[1];
//reading env and args
void* a5502855262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55124 = (decode_clo(env55408))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55408))[2];
//not do dummy comment
void* a5502655258 = (decode_clo(env55408))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont55124;
arg_buffer[3] = a5502655258;
arg_buffer[4] = a5502855262;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55407 = encode_clo(alloc_clo(lam55407_fptr, 0));

void* lam55409_fptr() // lam55409 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55410 = arg_buffer[1];
//reading env and args
void* a5502755260 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env55410))[4];
//not do dummy comment
void* kont55124 = (decode_clo(env55410))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55410))[2];
//not do dummy comment
void* a5502655258 = (decode_clo(env55410))[1];

//creating new closure instance
void** clo56046 = alloc_clo(lam55407_fptr, 3);

//setting env list
clo56046[1] = a5502655258;
clo56046[2] = _u43;
clo56046[3] = kont55124;
void* f5512555261 = encode_clo(clo56046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5512555261;
arg_buffer[3] = a5502755260;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55409 = encode_clo(alloc_clo(lam55409_fptr, 0));

void* lam55412_fptr() // lam55412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55413 = arg_buffer[1];
//reading env and args
void* a5502455256 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55413))[5];
//not do dummy comment
void* lst = (decode_clo(env55413))[4];
//not do dummy comment
void* length = (decode_clo(env55413))[3];
//not do dummy comment
void* kont55124 = (decode_clo(env55413))[2];
//not do dummy comment
void* _u43 = (decode_clo(env55413))[1];

//if-clause
bool if_guard56047 = is_true(a5502455256);
if(if_guard56047)
{
mpz_t* mpzvar56048 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56048, "0", 10);
void* x5502555257 = encode_mpz(mpzvar56048);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55124);
arg_buffer[2] = x5502555257;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55124))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar56049 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56049, "1", 10);
void* a5502655258 = encode_mpz(mpzvar56049);

//creating new closure instance
void** clo56051 = alloc_clo(lam55409_fptr, 4);

//setting env list
clo56051[1] = a5502655258;
clo56051[2] = _u43;
clo56051[3] = kont55124;
clo56051[4] = length;
void* f5512655259 = encode_clo(clo56051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5512655259;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55412 = encode_clo(alloc_clo(lam55412_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55414 = arg_buffer[1];
//reading env and args
void* kont55124 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo56053 = alloc_clo(lam55412_fptr, 5);

//setting env list
clo56053[1] = _u43;
clo56053[2] = kont55124;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo56053[3] = length;
clo56053[4] = lst;
clo56053[5] = cdr;
void* f5512755255 = encode_clo(clo56053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5512755255;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam55415_fptr() // lam55415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55416 = arg_buffer[1];
//reading env and args
void* x5503055266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55128 = (decode_clo(env55416))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55128);
arg_buffer[2] = x5503055266;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55128))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55415 = encode_clo(alloc_clo(lam55415_fptr, 0));

void* lam55417_fptr() // lam55417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55418 = arg_buffer[1];
//reading env and args
void* a5503455274 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5503255270 = (decode_clo(env55418))[3];
//not do dummy comment
void* kont55128 = (decode_clo(env55418))[2];
//not do dummy comment
void* cons = (decode_clo(env55418))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55128;
arg_buffer[3] = a5503255270;
arg_buffer[4] = a5503455274;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55417 = encode_clo(alloc_clo(lam55417_fptr, 0));

void* lam55419_fptr() // lam55419 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55420 = arg_buffer[1];
//reading env and args
void* a5503355272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env55420))[5];
//not do dummy comment
void* a5503255270 = (decode_clo(env55420))[4];
//not do dummy comment
void* proc = (decode_clo(env55420))[3];
//not do dummy comment
void* kont55128 = (decode_clo(env55420))[2];
//not do dummy comment
void* cons = (decode_clo(env55420))[1];

//creating new closure instance
void** clo56055 = alloc_clo(lam55417_fptr, 3);

//setting env list
clo56055[1] = cons;
clo56055[2] = kont55128;
clo56055[3] = a5503255270;
void* f5513055273 = encode_clo(clo56055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5513055273;
arg_buffer[3] = proc;
arg_buffer[4] = a5503355272;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55419 = encode_clo(alloc_clo(lam55419_fptr, 0));

void* lam55421_fptr() // lam55421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55422 = arg_buffer[1];
//reading env and args
void* a5503255270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55422))[6];
//not do dummy comment
void* lst = (decode_clo(env55422))[5];
//not do dummy comment
void* map = (decode_clo(env55422))[4];
//not do dummy comment
void* proc = (decode_clo(env55422))[3];
//not do dummy comment
void* kont55128 = (decode_clo(env55422))[2];
//not do dummy comment
void* cons = (decode_clo(env55422))[1];

//creating new closure instance
void** clo56057 = alloc_clo(lam55419_fptr, 5);

//setting env list
clo56057[1] = cons;
clo56057[2] = kont55128;
clo56057[3] = proc;
clo56057[4] = a5503255270;
clo56057[5] = map;
void* f5513155271 = encode_clo(clo56057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5513155271;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55421 = encode_clo(alloc_clo(lam55421_fptr, 0));

void* lam55423_fptr() // lam55423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55424 = arg_buffer[1];
//reading env and args
void* a5503155268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55424))[6];
//not do dummy comment
void* lst = (decode_clo(env55424))[5];
//not do dummy comment
void* map = (decode_clo(env55424))[4];
//not do dummy comment
void* proc = (decode_clo(env55424))[3];
//not do dummy comment
void* kont55128 = (decode_clo(env55424))[2];
//not do dummy comment
void* cons = (decode_clo(env55424))[1];

//creating new closure instance
void** clo56059 = alloc_clo(lam55421_fptr, 6);

//setting env list
clo56059[1] = cons;
clo56059[2] = kont55128;
clo56059[3] = proc;
clo56059[4] = map;
clo56059[5] = lst;
clo56059[6] = cdr;
void* f5513255269 = encode_clo(clo56059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5513255269;
arg_buffer[3] = a5503155268;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55423 = encode_clo(alloc_clo(lam55423_fptr, 0));

void* lam55425_fptr() // lam55425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55426 = arg_buffer[1];
//reading env and args
void* a5502955264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55426))[8];
//not do dummy comment
void* map = (decode_clo(env55426))[7];
//not do dummy comment
void* proc = (decode_clo(env55426))[6];
//not do dummy comment
void* kont55128 = (decode_clo(env55426))[5];
//not do dummy comment
void* car = (decode_clo(env55426))[4];
//not do dummy comment
void* cons = (decode_clo(env55426))[3];
//not do dummy comment
void* list = (decode_clo(env55426))[2];
//not do dummy comment
void* cdr = (decode_clo(env55426))[1];

//if-clause
bool if_guard56060 = is_true(a5502955264);
if(if_guard56060)
{

//creating new closure instance
void** clo56062 = alloc_clo(lam55415_fptr, 1);

//setting env list
clo56062[1] = kont55128;
void* f5512955265 = encode_clo(clo56062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5512955265;
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
void** clo56064 = alloc_clo(lam55423_fptr, 6);

//setting env list
clo56064[1] = cons;
clo56064[2] = kont55128;
clo56064[3] = proc;
clo56064[4] = map;
clo56064[5] = lst;
clo56064[6] = cdr;
void* f5513355267 = encode_clo(clo56064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5513355267;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55425 = encode_clo(alloc_clo(lam55425_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55427 = arg_buffer[1];
//reading env and args
void* kont55128 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56066 = alloc_clo(lam55425_fptr, 8);

//setting env list
clo56066[1] = cdr;
clo56066[2] = list;
clo56066[3] = cons;
clo56066[4] = car;
clo56066[5] = kont55128;
clo56066[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo56066[7] = map;
clo56066[8] = lst;
void* f5513455263 = encode_clo(clo56066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5513455263;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam55428_fptr() // lam55428 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55429 = arg_buffer[1];
//reading env and args
void* x5503655278 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55135 = (decode_clo(env55429))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55135);
arg_buffer[2] = x5503655278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55135))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55428 = encode_clo(alloc_clo(lam55428_fptr, 0));

void* lam55430_fptr() // lam55430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55431 = arg_buffer[1];
//reading env and args
void* a5504155288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55135 = (decode_clo(env55431))[3];
//not do dummy comment
void* a5503955284 = (decode_clo(env55431))[2];
//not do dummy comment
void* cons = (decode_clo(env55431))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55135;
arg_buffer[3] = a5503955284;
arg_buffer[4] = a5504155288;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55430 = encode_clo(alloc_clo(lam55430_fptr, 0));

void* lam55432_fptr() // lam55432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55433 = arg_buffer[1];
//reading env and args
void* a5504055286 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55135 = (decode_clo(env55433))[5];
//not do dummy comment
void* op = (decode_clo(env55433))[4];
//not do dummy comment
void* a5503955284 = (decode_clo(env55433))[3];
//not do dummy comment
void* filter = (decode_clo(env55433))[2];
//not do dummy comment
void* cons = (decode_clo(env55433))[1];

//creating new closure instance
void** clo56068 = alloc_clo(lam55430_fptr, 3);

//setting env list
clo56068[1] = cons;
clo56068[2] = a5503955284;
clo56068[3] = kont55135;
void* f5513755287 = encode_clo(clo56068);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5513755287;
arg_buffer[3] = op;
arg_buffer[4] = a5504055286;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55432 = encode_clo(alloc_clo(lam55432_fptr, 0));

void* lam55434_fptr() // lam55434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55435 = arg_buffer[1];
//reading env and args
void* a5503955284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55435))[6];
//not do dummy comment
void* kont55135 = (decode_clo(env55435))[5];
//not do dummy comment
void* lst = (decode_clo(env55435))[4];
//not do dummy comment
void* op = (decode_clo(env55435))[3];
//not do dummy comment
void* filter = (decode_clo(env55435))[2];
//not do dummy comment
void* cons = (decode_clo(env55435))[1];

//creating new closure instance
void** clo56070 = alloc_clo(lam55432_fptr, 5);

//setting env list
clo56070[1] = cons;
clo56070[2] = filter;
clo56070[3] = a5503955284;
clo56070[4] = op;
clo56070[5] = kont55135;
void* f5513855285 = encode_clo(clo56070);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5513855285;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55434 = encode_clo(alloc_clo(lam55434_fptr, 0));

void* lam55436_fptr() // lam55436 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55437 = arg_buffer[1];
//reading env and args
void* a5504255290 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55135 = (decode_clo(env55437))[3];
//not do dummy comment
void* op = (decode_clo(env55437))[2];
//not do dummy comment
void* filter = (decode_clo(env55437))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont55135;
arg_buffer[3] = op;
arg_buffer[4] = a5504255290;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55436 = encode_clo(alloc_clo(lam55436_fptr, 0));

void* lam55438_fptr() // lam55438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55439 = arg_buffer[1];
//reading env and args
void* a5503855282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55439))[7];
//not do dummy comment
void* kont55135 = (decode_clo(env55439))[6];
//not do dummy comment
void* lst = (decode_clo(env55439))[5];
//not do dummy comment
void* op = (decode_clo(env55439))[4];
//not do dummy comment
void* cons = (decode_clo(env55439))[3];
//not do dummy comment
void* filter = (decode_clo(env55439))[2];
//not do dummy comment
void* car = (decode_clo(env55439))[1];

//if-clause
bool if_guard56071 = is_true(a5503855282);
if(if_guard56071)
{

//creating new closure instance
void** clo56073 = alloc_clo(lam55434_fptr, 6);

//setting env list
clo56073[1] = cons;
clo56073[2] = filter;
clo56073[3] = op;
clo56073[4] = lst;
clo56073[5] = kont55135;
clo56073[6] = cdr;
void* f5513955283 = encode_clo(clo56073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5513955283;
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
void** clo56075 = alloc_clo(lam55436_fptr, 3);

//setting env list
clo56075[1] = filter;
clo56075[2] = op;
clo56075[3] = kont55135;
void* f5514055289 = encode_clo(clo56075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5514055289;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55438 = encode_clo(alloc_clo(lam55438_fptr, 0));

void* lam55440_fptr() // lam55440 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55441 = arg_buffer[1];
//reading env and args
void* a5503755280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55441))[7];
//not do dummy comment
void* kont55135 = (decode_clo(env55441))[6];
//not do dummy comment
void* lst = (decode_clo(env55441))[5];
//not do dummy comment
void* op = (decode_clo(env55441))[4];
//not do dummy comment
void* cons = (decode_clo(env55441))[3];
//not do dummy comment
void* filter = (decode_clo(env55441))[2];
//not do dummy comment
void* car = (decode_clo(env55441))[1];

//creating new closure instance
void** clo56077 = alloc_clo(lam55438_fptr, 7);

//setting env list
clo56077[1] = car;
clo56077[2] = filter;
clo56077[3] = cons;
clo56077[4] = op;
clo56077[5] = lst;
clo56077[6] = kont55135;
clo56077[7] = cdr;
void* f5514155281 = encode_clo(clo56077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5514155281;
arg_buffer[3] = a5503755280;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55440 = encode_clo(alloc_clo(lam55440_fptr, 0));

void* lam55442_fptr() // lam55442 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55443 = arg_buffer[1];
//reading env and args
void* a5503555276 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55135 = (decode_clo(env55443))[8];
//not do dummy comment
void* lst = (decode_clo(env55443))[7];
//not do dummy comment
void* op = (decode_clo(env55443))[6];
//not do dummy comment
void* cons = (decode_clo(env55443))[5];
//not do dummy comment
void* list = (decode_clo(env55443))[4];
//not do dummy comment
void* cdr = (decode_clo(env55443))[3];
//not do dummy comment
void* filter = (decode_clo(env55443))[2];
//not do dummy comment
void* car = (decode_clo(env55443))[1];

//if-clause
bool if_guard56078 = is_true(a5503555276);
if(if_guard56078)
{

//creating new closure instance
void** clo56080 = alloc_clo(lam55428_fptr, 1);

//setting env list
clo56080[1] = kont55135;
void* f5513655277 = encode_clo(clo56080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5513655277;
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
void** clo56082 = alloc_clo(lam55440_fptr, 7);

//setting env list
clo56082[1] = car;
clo56082[2] = filter;
clo56082[3] = cons;
clo56082[4] = op;
clo56082[5] = lst;
clo56082[6] = kont55135;
clo56082[7] = cdr;
void* f5514255279 = encode_clo(clo56082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5514255279;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55442 = encode_clo(alloc_clo(lam55442_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55444 = arg_buffer[1];
//reading env and args
void* kont55135 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56084 = alloc_clo(lam55442_fptr, 8);

//setting env list
clo56084[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo56084[2] = filter;
clo56084[3] = cdr;
clo56084[4] = list;
clo56084[5] = cons;
clo56084[6] = op;
clo56084[7] = lst;
clo56084[8] = kont55135;
void* f5514355275 = encode_clo(clo56084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5514355275;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam55445_fptr() // lam55445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55446 = arg_buffer[1];
//reading env and args
void* a5504755298 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5504555295 = (decode_clo(env55446))[3];
//not do dummy comment
void* drop = (decode_clo(env55446))[2];
//not do dummy comment
void* kont55144 = (decode_clo(env55446))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont55144;
arg_buffer[3] = a5504555295;
arg_buffer[4] = a5504755298;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55445 = encode_clo(alloc_clo(lam55445_fptr, 0));

void* lam55448_fptr() // lam55448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55449 = arg_buffer[1];
//reading env and args
void* a5504555295 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env55449))[4];
//not do dummy comment
void* kont55144 = (decode_clo(env55449))[3];
//not do dummy comment
void* n = (decode_clo(env55449))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55449))[1];
mpz_t* mpzvar56085 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56085, "1", 10);
void* a5504655296 = encode_mpz(mpzvar56085);

//creating new closure instance
void** clo56087 = alloc_clo(lam55445_fptr, 3);

//setting env list
clo56087[1] = kont55144;
clo56087[2] = drop;
clo56087[3] = a5504555295;
void* f5514555297 = encode_clo(clo56087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5514555297;
arg_buffer[3] = n;
arg_buffer[4] = a5504655296;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55448 = encode_clo(alloc_clo(lam55448_fptr, 0));

void* lam55450_fptr() // lam55450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55451 = arg_buffer[1];
//reading env and args
void* a5504455293 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55451))[6];
//not do dummy comment
void* kont55144 = (decode_clo(env55451))[5];
//not do dummy comment
void* n = (decode_clo(env55451))[4];
//not do dummy comment
void* _u45 = (decode_clo(env55451))[3];
//not do dummy comment
void* lst = (decode_clo(env55451))[2];
//not do dummy comment
void* drop = (decode_clo(env55451))[1];

//if-clause
bool if_guard56088 = is_true(a5504455293);
if(if_guard56088)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55144);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55144))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56090 = alloc_clo(lam55448_fptr, 4);

//setting env list
clo56090[1] = _u45;
clo56090[2] = n;
clo56090[3] = kont55144;
clo56090[4] = drop;
void* f5514655294 = encode_clo(clo56090);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5514655294;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55450 = encode_clo(alloc_clo(lam55450_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55453 = arg_buffer[1];
//reading env and args
void* kont55144 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar56091 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56091, "0", 10);
void* a5504355291 = encode_mpz(mpzvar56091);

//creating new closure instance
void** clo56093 = alloc_clo(lam55450_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo56093[1] = drop;
clo56093[2] = lst;
clo56093[3] = _u45;
clo56093[4] = n;
clo56093[5] = kont55144;
clo56093[6] = cdr;
void* f5514755292 = encode_clo(clo56093);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5514755292;
arg_buffer[3] = n;
arg_buffer[4] = a5504355291;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam55454_fptr() // lam55454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55455 = arg_buffer[1];
//reading env and args
void* a5505155306 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55148 = (decode_clo(env55455))[3];
//not do dummy comment
void* a5504955302 = (decode_clo(env55455))[2];
//not do dummy comment
void* proc = (decode_clo(env55455))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont55148;
arg_buffer[3] = a5504955302;
arg_buffer[4] = a5505155306;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55454 = encode_clo(alloc_clo(lam55454_fptr, 0));

void* lam55456_fptr() // lam55456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55457 = arg_buffer[1];
//reading env and args
void* a5505055304 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55148 = (decode_clo(env55457))[5];
//not do dummy comment
void* foldr = (decode_clo(env55457))[4];
//not do dummy comment
void* a5504955302 = (decode_clo(env55457))[3];
//not do dummy comment
void* proc = (decode_clo(env55457))[2];
//not do dummy comment
void* acc = (decode_clo(env55457))[1];

//creating new closure instance
void** clo56095 = alloc_clo(lam55454_fptr, 3);

//setting env list
clo56095[1] = proc;
clo56095[2] = a5504955302;
clo56095[3] = kont55148;
void* f5514955305 = encode_clo(clo56095);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5514955305;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5505055304;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55456 = encode_clo(alloc_clo(lam55456_fptr, 0));

void* lam55458_fptr() // lam55458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55459 = arg_buffer[1];
//reading env and args
void* a5504955302 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55148 = (decode_clo(env55459))[6];
//not do dummy comment
void* cdr = (decode_clo(env55459))[5];
//not do dummy comment
void* foldr = (decode_clo(env55459))[4];
//not do dummy comment
void* lst = (decode_clo(env55459))[3];
//not do dummy comment
void* proc = (decode_clo(env55459))[2];
//not do dummy comment
void* acc = (decode_clo(env55459))[1];

//creating new closure instance
void** clo56097 = alloc_clo(lam55456_fptr, 5);

//setting env list
clo56097[1] = acc;
clo56097[2] = proc;
clo56097[3] = a5504955302;
clo56097[4] = foldr;
clo56097[5] = kont55148;
void* f5515055303 = encode_clo(clo56097);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5515055303;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55458 = encode_clo(alloc_clo(lam55458_fptr, 0));

void* lam55460_fptr() // lam55460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55461 = arg_buffer[1];
//reading env and args
void* a5504855300 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env55461))[7];
//not do dummy comment
void* kont55148 = (decode_clo(env55461))[6];
//not do dummy comment
void* cdr = (decode_clo(env55461))[5];
//not do dummy comment
void* foldr = (decode_clo(env55461))[4];
//not do dummy comment
void* lst = (decode_clo(env55461))[3];
//not do dummy comment
void* proc = (decode_clo(env55461))[2];
//not do dummy comment
void* acc = (decode_clo(env55461))[1];

//if-clause
bool if_guard56098 = is_true(a5504855300);
if(if_guard56098)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55148);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55148))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56100 = alloc_clo(lam55458_fptr, 6);

//setting env list
clo56100[1] = acc;
clo56100[2] = proc;
clo56100[3] = lst;
clo56100[4] = foldr;
clo56100[5] = cdr;
clo56100[6] = kont55148;
void* f5515155301 = encode_clo(clo56100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5515155301;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55460 = encode_clo(alloc_clo(lam55460_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55462 = arg_buffer[1];
//reading env and args
void* kont55148 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo56102 = alloc_clo(lam55460_fptr, 7);

//setting env list
clo56102[1] = acc;
clo56102[2] = proc;
clo56102[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo56102[4] = foldr;
clo56102[5] = cdr;
clo56102[6] = kont55148;
clo56102[7] = car;
void* f5515255299 = encode_clo(clo56102);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5515255299;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam55463_fptr() // lam55463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55464 = arg_buffer[1];
//reading env and args
void* a5505555314 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5505355310 = (decode_clo(env55464))[3];
//not do dummy comment
void* kont55153 = (decode_clo(env55464))[2];
//not do dummy comment
void* cons = (decode_clo(env55464))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55153;
arg_buffer[3] = a5505355310;
arg_buffer[4] = a5505555314;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55463 = encode_clo(alloc_clo(lam55463_fptr, 0));

void* lam55465_fptr() // lam55465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55466 = arg_buffer[1];
//reading env and args
void* a5505455312 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5505355310 = (decode_clo(env55466))[5];
//not do dummy comment
void* kont55153 = (decode_clo(env55466))[4];
//not do dummy comment
void* append = (decode_clo(env55466))[3];
//not do dummy comment
void* lst2 = (decode_clo(env55466))[2];
//not do dummy comment
void* cons = (decode_clo(env55466))[1];

//creating new closure instance
void** clo56104 = alloc_clo(lam55463_fptr, 3);

//setting env list
clo56104[1] = cons;
clo56104[2] = kont55153;
clo56104[3] = a5505355310;
void* f5515455313 = encode_clo(clo56104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5515455313;
arg_buffer[3] = a5505455312;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55465 = encode_clo(alloc_clo(lam55465_fptr, 0));

void* lam55467_fptr() // lam55467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55468 = arg_buffer[1];
//reading env and args
void* a5505355310 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55468))[6];
//not do dummy comment
void* kont55153 = (decode_clo(env55468))[5];
//not do dummy comment
void* append = (decode_clo(env55468))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55468))[3];
//not do dummy comment
void* lst1 = (decode_clo(env55468))[2];
//not do dummy comment
void* cons = (decode_clo(env55468))[1];

//creating new closure instance
void** clo56106 = alloc_clo(lam55465_fptr, 5);

//setting env list
clo56106[1] = cons;
clo56106[2] = lst2;
clo56106[3] = append;
clo56106[4] = kont55153;
clo56106[5] = a5505355310;
void* f5515555311 = encode_clo(clo56106);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5515555311;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55467 = encode_clo(alloc_clo(lam55467_fptr, 0));

void* lam55469_fptr() // lam55469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55470 = arg_buffer[1];
//reading env and args
void* a5505255308 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55470))[7];
//not do dummy comment
void* kont55153 = (decode_clo(env55470))[6];
//not do dummy comment
void* append = (decode_clo(env55470))[5];
//not do dummy comment
void* lst2 = (decode_clo(env55470))[4];
//not do dummy comment
void* cons = (decode_clo(env55470))[3];
//not do dummy comment
void* lst1 = (decode_clo(env55470))[2];
//not do dummy comment
void* car = (decode_clo(env55470))[1];

//if-clause
bool if_guard56107 = is_true(a5505255308);
if(if_guard56107)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55153);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55153))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56109 = alloc_clo(lam55467_fptr, 6);

//setting env list
clo56109[1] = cons;
clo56109[2] = lst1;
clo56109[3] = lst2;
clo56109[4] = append;
clo56109[5] = kont55153;
clo56109[6] = cdr;
void* f5515655309 = encode_clo(clo56109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5515655309;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55469 = encode_clo(alloc_clo(lam55469_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55471 = arg_buffer[1];
//reading env and args
void* kont55153 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56111 = alloc_clo(lam55469_fptr, 7);

//setting env list
clo56111[1] = car;
clo56111[2] = lst1;
clo56111[3] = cons;
clo56111[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo56111[5] = append;
clo56111[6] = kont55153;
clo56111[7] = cdr;
void* f5515755307 = encode_clo(clo56111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5515755307;
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
void* _55472 = arg_buffer[1];
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

void* kont5515855315 = prim_car(lst);
void* lst55316 = prim_cdr(lst);
void* x5505655317 = apply_prim_hash(lst55316);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5515855315);
arg_buffer[2] = x5505655317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5515855315))[0]);
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
void* _55473 = arg_buffer[1];
//reading env and args
void* kont55160 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5505755318 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55160);
arg_buffer[2] = x5505755318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55160))[0]);
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
void* _55474 = arg_buffer[1];
//reading env and args
void* kont55161 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5505855319 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55161);
arg_buffer[2] = x5505855319;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55161))[0]);
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
void* _55475 = arg_buffer[1];
//reading env and args
void* kont55162 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5505955320 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55162);
arg_buffer[2] = x5505955320;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55162))[0]);
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
void* _55476 = arg_buffer[1];
//reading env and args
void* kont55163 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5506055321 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55163);
arg_buffer[2] = x5506055321;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55163))[0]);
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
void* _55482 = arg_buffer[1];
//reading env and args
void* kont55164 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar56112 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56112, "100", 10);
void* a5506155322 = encode_mpz(mpzvar56112);
mpz_t* mpzvar56113 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56113, "90", 10);
void* a5506255323 = encode_mpz(mpzvar56113);
mpz_t* mpzvar56114 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56114, "80", 10);
void* a5506355324 = encode_mpz(mpzvar56114);
mpz_t* mpzvar56115 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56115, "70", 10);
void* a5506455325 = encode_mpz(mpzvar56115);
mpz_t* mpzvar56116 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56116, "60", 10);
void* a5506555326 = encode_mpz(mpzvar56116);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62_u61);
arg_buffer[2] = kont55164;
arg_buffer[3] = a5506155322;
arg_buffer[4] = a5506255323;
arg_buffer[5] = a5506355324;
arg_buffer[6] = a5506455325;
arg_buffer[7] = a5506555326;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam55483_fptr() // lam55483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55484 = arg_buffer[1];
//reading env and args
void* x5506655328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55165 = (decode_clo(env55484))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55165);
arg_buffer[2] = x5506655328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55165))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55483 = encode_clo(alloc_clo(lam55483_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55485 = arg_buffer[1];
//reading env and args
void* kont55165 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo56118 = alloc_clo(lam55483_fptr, 1);

//setting env list
clo56118[1] = kont55165;
void* f5516655327 = encode_clo(clo56118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5516655327;
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

