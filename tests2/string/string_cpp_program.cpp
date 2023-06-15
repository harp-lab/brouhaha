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
void* _53423 = arg_buffer[1];
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

void* kont5315553259 = prim_car(lst);
void* lst53260 = prim_cdr(lst);
void* x5306853261 = apply_prim__u43(lst53260);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5315553259);
arg_buffer[2] = x5306853261;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5315553259))[0]);
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
void* _53424 = arg_buffer[1];
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

void* kont5315753262 = prim_car(lst);
void* lst53263 = prim_cdr(lst);
void* x5306953264 = apply_prim__u45(lst53263);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5315753262);
arg_buffer[2] = x5306953264;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5315753262))[0]);
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
void* _53425 = arg_buffer[1];
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

void* kont5315953265 = prim_car(lst);
void* lst53266 = prim_cdr(lst);
void* x5307053267 = apply_prim__u42(lst53266);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5315953265);
arg_buffer[2] = x5307053267;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5315953265))[0]);
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
void* _53426 = arg_buffer[1];
//reading env and args
void* kont53161 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5307153268 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53161);
arg_buffer[2] = x5307153268;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53161))[0]);
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
void* _53427 = arg_buffer[1];
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

void* kont5316253269 = prim_car(lst);
void* lst53270 = prim_cdr(lst);
void* x5307253271 = apply_prim__u47(lst53270);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5316253269);
arg_buffer[2] = x5307253271;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5316253269))[0]);
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
void* _53428 = arg_buffer[1];
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

void* kont5316453272 = prim_car(lst);
void* lst53273 = prim_cdr(lst);
void* x5307353274 = apply_prim__u61(lst53273);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5316453272);
arg_buffer[2] = x5307353274;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5316453272))[0]);
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
void* _53429 = arg_buffer[1];
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

void* kont5316653275 = prim_car(lst);
void* lst53276 = prim_cdr(lst);
void* x5307453277 = apply_prim__u62(lst53276);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5316653275);
arg_buffer[2] = x5307453277;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5316653275))[0]);
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
void* _53430 = arg_buffer[1];
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

void* kont5316853278 = prim_car(lst);
void* lst53279 = prim_cdr(lst);
void* x5307553280 = apply_prim__u60(lst53279);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5316853278);
arg_buffer[2] = x5307553280;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5316853278))[0]);
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
void* _53431 = arg_buffer[1];
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

void* kont5317053281 = prim_car(lst);
void* lst53282 = prim_cdr(lst);
void* x5307653283 = apply_prim__u60_u61(lst53282);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5317053281);
arg_buffer[2] = x5307653283;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5317053281))[0]);
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
void* _53432 = arg_buffer[1];
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

void* kont5317253284 = prim_car(lst);
void* lst53285 = prim_cdr(lst);
void* x5307753286 = apply_prim__u62_u61(lst53285);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5317253284);
arg_buffer[2] = x5307753286;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5317253284))[0]);
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
void* _53433 = arg_buffer[1];
//reading env and args
void* kont53174 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5307853287 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53174);
arg_buffer[2] = x5307853287;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53174))[0]);
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
void* _53434 = arg_buffer[1];
//reading env and args
void* kont53175 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5307953288 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53175);
arg_buffer[2] = x5307953288;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53175))[0]);
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
void* _53435 = arg_buffer[1];
//reading env and args
void* kont53176 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5308053289 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53176);
arg_buffer[2] = x5308053289;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53176))[0]);
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
void* _53436 = arg_buffer[1];
//reading env and args
void* kont53177 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5308153290 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53177);
arg_buffer[2] = x5308153290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53177))[0]);
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
void* _53437 = arg_buffer[1];
//reading env and args
void* kont53178 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5308253291 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53178);
arg_buffer[2] = x5308253291;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53178))[0]);
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
void* _53438 = arg_buffer[1];
//reading env and args
void* kont53179 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5308353292 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53179);
arg_buffer[2] = x5308353292;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53179))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam53439_fptr() // lam53439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53440 = arg_buffer[1];
//reading env and args
void* a5308653296 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53180 = (decode_clo(env53440))[3];
//not do dummy comment
void* a5308453293 = (decode_clo(env53440))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env53440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53180;
arg_buffer[3] = a5308453293;
arg_buffer[4] = a5308653296;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53439 = encode_clo(alloc_clo(lam53439_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53443 = arg_buffer[1];
//reading env and args
void* kont53180 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53578 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53578, "0", 10);
void* a5308453293 = encode_mpz(mpzvar53578);
mpz_t* mpzvar53579 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53579, "2", 10);
void* a5308553294 = encode_mpz(mpzvar53579);

//creating new closure instance
void** clo53581 = alloc_clo(lam53439_fptr, 3);

//setting env list
clo53581[1] = equal_u63;
clo53581[2] = a5308453293;
clo53581[3] = kont53180;
void* f5318153295 = encode_clo(clo53581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5318153295;
arg_buffer[3] = x;
arg_buffer[4] = a5308553294;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam53444_fptr() // lam53444 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53445 = arg_buffer[1];
//reading env and args
void* a5308953300 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5308753297 = (decode_clo(env53445))[3];
//not do dummy comment
void* kont53182 = (decode_clo(env53445))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env53445))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53182;
arg_buffer[3] = a5308753297;
arg_buffer[4] = a5308953300;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53444 = encode_clo(alloc_clo(lam53444_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53448 = arg_buffer[1];
//reading env and args
void* kont53182 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53582 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53582, "1", 10);
void* a5308753297 = encode_mpz(mpzvar53582);
mpz_t* mpzvar53583 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53583, "2", 10);
void* a5308853298 = encode_mpz(mpzvar53583);

//creating new closure instance
void** clo53585 = alloc_clo(lam53444_fptr, 3);

//setting env list
clo53585[1] = equal_u63;
clo53585[2] = kont53182;
clo53585[3] = a5308753297;
void* f5318353299 = encode_clo(clo53585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5318353299;
arg_buffer[3] = x;
arg_buffer[4] = a5308853298;
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
void* _53449 = arg_buffer[1];
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

void* kont5318453301 = prim_car(x);
void* x53302 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5318453301);
arg_buffer[2] = x53302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5318453301))[0]);
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
void* _53450 = arg_buffer[1];
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

void* kont5318653303 = prim_car(lst);
void* lst53304 = prim_cdr(lst);
void* x5309053305 = apply_prim_and(lst53304);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5318653303);
arg_buffer[2] = x5309053305;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5318653303))[0]);
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
void* _53451 = arg_buffer[1];
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

void* kont5318853306 = prim_car(lst);
void* lst53307 = prim_cdr(lst);
void* x5309153308 = apply_prim_or(lst53307);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5318853306);
arg_buffer[2] = x5309153308;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5318853306))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam53454_fptr() // lam53454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53455 = arg_buffer[1];
//reading env and args
void* a5309753318 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53190 = (decode_clo(env53455))[3];
//not do dummy comment
void* x = (decode_clo(env53455))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53455))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont53190;
arg_buffer[3] = x;
arg_buffer[4] = a5309753318;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53454 = encode_clo(alloc_clo(lam53454_fptr, 0));

void* lam53456_fptr() // lam53456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53457 = arg_buffer[1];
//reading env and args
void* a5309553315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53457))[5];
//not do dummy comment
void* x = (decode_clo(env53457))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env53457))[3];
//not do dummy comment
void* kont53190 = (decode_clo(env53457))[2];
//not do dummy comment
void* cdr = (decode_clo(env53457))[1];

//if-clause
bool if_guard53586 = is_true(a5309553315);
if(if_guard53586)
{
void* x5309653316 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53190);
arg_buffer[2] = x5309653316;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53190))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53588 = alloc_clo(lam53454_fptr, 3);

//setting env list
clo53588[1] = member_u63;
clo53588[2] = x;
clo53588[3] = kont53190;
void* f5319153317 = encode_clo(clo53588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5319153317;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53456 = encode_clo(alloc_clo(lam53456_fptr, 0));

void* lam53458_fptr() // lam53458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53459 = arg_buffer[1];
//reading env and args
void* a5309453313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53459))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env53459))[5];
//not do dummy comment
void* x = (decode_clo(env53459))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env53459))[3];
//not do dummy comment
void* kont53190 = (decode_clo(env53459))[2];
//not do dummy comment
void* cdr = (decode_clo(env53459))[1];

//creating new closure instance
void** clo53590 = alloc_clo(lam53456_fptr, 5);

//setting env list
clo53590[1] = cdr;
clo53590[2] = kont53190;
clo53590[3] = member_u63;
clo53590[4] = x;
clo53590[5] = lst;
void* f5319253314 = encode_clo(clo53590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5319253314;
arg_buffer[3] = a5309453313;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53458 = encode_clo(alloc_clo(lam53458_fptr, 0));

void* lam53460_fptr() // lam53460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53461 = arg_buffer[1];
//reading env and args
void* a5309253310 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53461))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env53461))[6];
//not do dummy comment
void* x = (decode_clo(env53461))[5];
//not do dummy comment
void* car = (decode_clo(env53461))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env53461))[3];
//not do dummy comment
void* kont53190 = (decode_clo(env53461))[2];
//not do dummy comment
void* cdr = (decode_clo(env53461))[1];

//if-clause
bool if_guard53591 = is_true(a5309253310);
if(if_guard53591)
{
void* x5309353311 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53190);
arg_buffer[2] = x5309353311;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53190))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53593 = alloc_clo(lam53458_fptr, 6);

//setting env list
clo53593[1] = cdr;
clo53593[2] = kont53190;
clo53593[3] = member_u63;
clo53593[4] = x;
clo53593[5] = equal_u63;
clo53593[6] = lst;
void* f5319353312 = encode_clo(clo53593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5319353312;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53460 = encode_clo(alloc_clo(lam53460_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53462 = arg_buffer[1];
//reading env and args
void* kont53190 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53595 = alloc_clo(lam53460_fptr, 7);

//setting env list
clo53595[1] = cdr;
clo53595[2] = kont53190;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo53595[3] = member_u63;
clo53595[4] = car;
clo53595[5] = x;
clo53595[6] = equal_u63;
clo53595[7] = lst;
void* f5319453309 = encode_clo(clo53595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5319453309;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam53463_fptr() // lam53463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53464 = arg_buffer[1];
//reading env and args
void* a5310153326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53195 = (decode_clo(env53464))[4];
//not do dummy comment
void* a5310053324 = (decode_clo(env53464))[3];
//not do dummy comment
void* fun = (decode_clo(env53464))[2];
//not do dummy comment
void* foldl = (decode_clo(env53464))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont53195;
arg_buffer[3] = fun;
arg_buffer[4] = a5310053324;
arg_buffer[5] = a5310153326;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53463 = encode_clo(alloc_clo(lam53463_fptr, 0));

void* lam53465_fptr() // lam53465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53466 = arg_buffer[1];
//reading env and args
void* a5310053324 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53466))[5];
//not do dummy comment
void* lst = (decode_clo(env53466))[4];
//not do dummy comment
void* kont53195 = (decode_clo(env53466))[3];
//not do dummy comment
void* fun = (decode_clo(env53466))[2];
//not do dummy comment
void* foldl = (decode_clo(env53466))[1];

//creating new closure instance
void** clo53597 = alloc_clo(lam53463_fptr, 4);

//setting env list
clo53597[1] = foldl;
clo53597[2] = fun;
clo53597[3] = a5310053324;
clo53597[4] = kont53195;
void* f5319653325 = encode_clo(clo53597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5319653325;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53465 = encode_clo(alloc_clo(lam53465_fptr, 0));

void* lam53467_fptr() // lam53467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53468 = arg_buffer[1];
//reading env and args
void* a5309953322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53468))[6];
//not do dummy comment
void* lst = (decode_clo(env53468))[5];
//not do dummy comment
void* kont53195 = (decode_clo(env53468))[4];
//not do dummy comment
void* fun = (decode_clo(env53468))[3];
//not do dummy comment
void* acc = (decode_clo(env53468))[2];
//not do dummy comment
void* foldl = (decode_clo(env53468))[1];

//creating new closure instance
void** clo53599 = alloc_clo(lam53465_fptr, 5);

//setting env list
clo53599[1] = foldl;
clo53599[2] = fun;
clo53599[3] = kont53195;
clo53599[4] = lst;
clo53599[5] = cdr;
void* f5319753323 = encode_clo(clo53599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5319753323;
arg_buffer[3] = a5309953322;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53467 = encode_clo(alloc_clo(lam53467_fptr, 0));

void* lam53469_fptr() // lam53469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53470 = arg_buffer[1];
//reading env and args
void* a5309853320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53470))[7];
//not do dummy comment
void* lst = (decode_clo(env53470))[6];
//not do dummy comment
void* kont53195 = (decode_clo(env53470))[5];
//not do dummy comment
void* fun = (decode_clo(env53470))[4];
//not do dummy comment
void* acc = (decode_clo(env53470))[3];
//not do dummy comment
void* car = (decode_clo(env53470))[2];
//not do dummy comment
void* foldl = (decode_clo(env53470))[1];

//if-clause
bool if_guard53600 = is_true(a5309853320);
if(if_guard53600)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53195);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53195))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53602 = alloc_clo(lam53467_fptr, 6);

//setting env list
clo53602[1] = foldl;
clo53602[2] = acc;
clo53602[3] = fun;
clo53602[4] = kont53195;
clo53602[5] = lst;
clo53602[6] = cdr;
void* f5319853321 = encode_clo(clo53602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5319853321;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53469 = encode_clo(alloc_clo(lam53469_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53471 = arg_buffer[1];
//reading env and args
void* kont53195 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53604 = alloc_clo(lam53469_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo53604[1] = foldl;
clo53604[2] = car;
clo53604[3] = acc;
clo53604[4] = fun;
clo53604[5] = kont53195;
clo53604[6] = lst;
clo53604[7] = cdr;
void* f5319953319 = encode_clo(clo53604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5319953319;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam53472_fptr() // lam53472 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53473 = arg_buffer[1];
//reading env and args
void* a5310553334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53473))[3];
//not do dummy comment
void* kont53200 = (decode_clo(env53473))[2];
//not do dummy comment
void* a5310353330 = (decode_clo(env53473))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53200;
arg_buffer[3] = a5310353330;
arg_buffer[4] = a5310553334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53472 = encode_clo(alloc_clo(lam53472_fptr, 0));

void* lam53474_fptr() // lam53474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53475 = arg_buffer[1];
//reading env and args
void* a5310453332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53475))[5];
//not do dummy comment
void* kont53200 = (decode_clo(env53475))[4];
//not do dummy comment
void* cons = (decode_clo(env53475))[3];
//not do dummy comment
void* lst2 = (decode_clo(env53475))[2];
//not do dummy comment
void* a5310353330 = (decode_clo(env53475))[1];

//creating new closure instance
void** clo53606 = alloc_clo(lam53472_fptr, 3);

//setting env list
clo53606[1] = a5310353330;
clo53606[2] = kont53200;
clo53606[3] = reverse_u45helper;
void* f5320153333 = encode_clo(clo53606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5320153333;
arg_buffer[3] = a5310453332;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53474 = encode_clo(alloc_clo(lam53474_fptr, 0));

void* lam53476_fptr() // lam53476 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53477 = arg_buffer[1];
//reading env and args
void* a5310353330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53477))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53477))[5];
//not do dummy comment
void* kont53200 = (decode_clo(env53477))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53477))[3];
//not do dummy comment
void* car = (decode_clo(env53477))[2];
//not do dummy comment
void* cons = (decode_clo(env53477))[1];

//creating new closure instance
void** clo53608 = alloc_clo(lam53474_fptr, 5);

//setting env list
clo53608[1] = a5310353330;
clo53608[2] = lst2;
clo53608[3] = cons;
clo53608[4] = kont53200;
clo53608[5] = reverse_u45helper;
void* f5320253331 = encode_clo(clo53608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5320253331;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53476 = encode_clo(alloc_clo(lam53476_fptr, 0));

void* lam53478_fptr() // lam53478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53479 = arg_buffer[1];
//reading env and args
void* a5310253328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53479))[7];
//not do dummy comment
void* lst = (decode_clo(env53479))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53479))[5];
//not do dummy comment
void* kont53200 = (decode_clo(env53479))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53479))[3];
//not do dummy comment
void* car = (decode_clo(env53479))[2];
//not do dummy comment
void* cons = (decode_clo(env53479))[1];

//if-clause
bool if_guard53609 = is_true(a5310253328);
if(if_guard53609)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53200);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53200))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53611 = alloc_clo(lam53476_fptr, 6);

//setting env list
clo53611[1] = cons;
clo53611[2] = car;
clo53611[3] = lst2;
clo53611[4] = kont53200;
clo53611[5] = reverse_u45helper;
clo53611[6] = lst;
void* f5320353329 = encode_clo(clo53611);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5320353329;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53478 = encode_clo(alloc_clo(lam53478_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53480 = arg_buffer[1];
//reading env and args
void* kont53200 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53613 = alloc_clo(lam53478_fptr, 7);

//setting env list
clo53613[1] = cons;
clo53613[2] = car;
clo53613[3] = lst2;
clo53613[4] = kont53200;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo53613[5] = reverse_u45helper;
clo53613[6] = lst;
clo53613[7] = cdr;
void* f5320453327 = encode_clo(clo53613);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5320453327;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam53481_fptr() // lam53481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53482 = arg_buffer[1];
//reading env and args
void* a5310653336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53482))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53482))[2];
//not do dummy comment
void* kont53205 = (decode_clo(env53482))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53205;
arg_buffer[3] = lst;
arg_buffer[4] = a5310653336;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53481 = encode_clo(alloc_clo(lam53481_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53483 = arg_buffer[1];
//reading env and args
void* kont53205 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53615 = alloc_clo(lam53481_fptr, 3);

//setting env list
clo53615[1] = kont53205;
clo53615[2] = reverse_u45helper;
clo53615[3] = lst;
void* f5320653335 = encode_clo(clo53615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5320653335;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam53484_fptr() // lam53484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53485 = arg_buffer[1];
//reading env and args
void* x5310953341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53207 = (decode_clo(env53485))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53207);
arg_buffer[2] = x5310953341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53207))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53484 = encode_clo(alloc_clo(lam53484_fptr, 0));

void* lam53486_fptr() // lam53486 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53487 = arg_buffer[1];
//reading env and args
void* a5311453350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53207 = (decode_clo(env53487))[4];
//not do dummy comment
void* a5311053343 = (decode_clo(env53487))[3];
//not do dummy comment
void* a5311253346 = (decode_clo(env53487))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env53487))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53207;
arg_buffer[3] = a5311053343;
arg_buffer[4] = a5311253346;
arg_buffer[5] = a5311453350;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53486 = encode_clo(alloc_clo(lam53486_fptr, 0));

void* lam53488_fptr() // lam53488 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53489 = arg_buffer[1];
//reading env and args
void* a5311353348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53207 = (decode_clo(env53489))[6];
//not do dummy comment
void* a5311053343 = (decode_clo(env53489))[5];
//not do dummy comment
void* cons = (decode_clo(env53489))[4];
//not do dummy comment
void* a5311253346 = (decode_clo(env53489))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53489))[2];
//not do dummy comment
void* lst2 = (decode_clo(env53489))[1];

//creating new closure instance
void** clo53617 = alloc_clo(lam53486_fptr, 4);

//setting env list
clo53617[1] = take_u45helper;
clo53617[2] = a5311253346;
clo53617[3] = a5311053343;
clo53617[4] = kont53207;
void* f5320953349 = encode_clo(clo53617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5320953349;
arg_buffer[3] = a5311353348;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53488 = encode_clo(alloc_clo(lam53488_fptr, 0));

void* lam53490_fptr() // lam53490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53491 = arg_buffer[1];
//reading env and args
void* a5311253346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53207 = (decode_clo(env53491))[7];
//not do dummy comment
void* lst = (decode_clo(env53491))[6];
//not do dummy comment
void* a5311053343 = (decode_clo(env53491))[5];
//not do dummy comment
void* car = (decode_clo(env53491))[4];
//not do dummy comment
void* cons = (decode_clo(env53491))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53491))[2];
//not do dummy comment
void* lst2 = (decode_clo(env53491))[1];

//creating new closure instance
void** clo53619 = alloc_clo(lam53488_fptr, 6);

//setting env list
clo53619[1] = lst2;
clo53619[2] = take_u45helper;
clo53619[3] = a5311253346;
clo53619[4] = cons;
clo53619[5] = a5311053343;
clo53619[6] = kont53207;
void* f5321053347 = encode_clo(clo53619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5321053347;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53490 = encode_clo(alloc_clo(lam53490_fptr, 0));

void* lam53493_fptr() // lam53493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53494 = arg_buffer[1];
//reading env and args
void* a5311053343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53207 = (decode_clo(env53494))[8];
//not do dummy comment
void* lst = (decode_clo(env53494))[7];
//not do dummy comment
void* cons = (decode_clo(env53494))[6];
//not do dummy comment
void* _u45 = (decode_clo(env53494))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env53494))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53494))[3];
//not do dummy comment
void* n = (decode_clo(env53494))[2];
//not do dummy comment
void* car = (decode_clo(env53494))[1];
mpz_t* mpzvar53620 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53620, "1", 10);
void* a5311153344 = encode_mpz(mpzvar53620);

//creating new closure instance
void** clo53622 = alloc_clo(lam53490_fptr, 7);

//setting env list
clo53622[1] = lst2;
clo53622[2] = take_u45helper;
clo53622[3] = cons;
clo53622[4] = car;
clo53622[5] = a5311053343;
clo53622[6] = lst;
clo53622[7] = kont53207;
void* f5321153345 = encode_clo(clo53622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5321153345;
arg_buffer[3] = n;
arg_buffer[4] = a5311153344;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53493 = encode_clo(alloc_clo(lam53493_fptr, 0));

void* lam53495_fptr() // lam53495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53496 = arg_buffer[1];
//reading env and args
void* a5310853339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53496))[10];
//not do dummy comment
void* kont53207 = (decode_clo(env53496))[9];
//not do dummy comment
void* lst = (decode_clo(env53496))[8];
//not do dummy comment
void* reverse = (decode_clo(env53496))[7];
//not do dummy comment
void* cons = (decode_clo(env53496))[6];
//not do dummy comment
void* _u45 = (decode_clo(env53496))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env53496))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53496))[3];
//not do dummy comment
void* n = (decode_clo(env53496))[2];
//not do dummy comment
void* car = (decode_clo(env53496))[1];

//if-clause
bool if_guard53623 = is_true(a5310853339);
if(if_guard53623)
{

//creating new closure instance
void** clo53625 = alloc_clo(lam53484_fptr, 1);

//setting env list
clo53625[1] = kont53207;
void* f5320853340 = encode_clo(clo53625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5320853340;
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
void** clo53627 = alloc_clo(lam53493_fptr, 8);

//setting env list
clo53627[1] = car;
clo53627[2] = n;
clo53627[3] = lst2;
clo53627[4] = take_u45helper;
clo53627[5] = _u45;
clo53627[6] = cons;
clo53627[7] = lst;
clo53627[8] = kont53207;
void* f5321253342 = encode_clo(clo53627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5321253342;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53495 = encode_clo(alloc_clo(lam53495_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53498 = arg_buffer[1];
//reading env and args
void* kont53207 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar53628 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53628, "0", 10);
void* a5310753337 = encode_mpz(mpzvar53628);

//creating new closure instance
void** clo53630 = alloc_clo(lam53495_fptr, 10);

//setting env list
clo53630[1] = car;
clo53630[2] = n;
clo53630[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo53630[4] = take_u45helper;
clo53630[5] = _u45;
clo53630[6] = cons;
clo53630[7] = reverse;
clo53630[8] = lst;
clo53630[9] = kont53207;
clo53630[10] = cdr;
void* f5321353338 = encode_clo(clo53630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5321353338;
arg_buffer[3] = n;
arg_buffer[4] = a5310753337;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam53499_fptr() // lam53499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53500 = arg_buffer[1];
//reading env and args
void* a5311553352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53500))[4];
//not do dummy comment
void* kont53214 = (decode_clo(env53500))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53500))[2];
//not do dummy comment
void* n = (decode_clo(env53500))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53214;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5311553352;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53499 = encode_clo(alloc_clo(lam53499_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53501 = arg_buffer[1];
//reading env and args
void* kont53214 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53632 = alloc_clo(lam53499_fptr, 4);

//setting env list
clo53632[1] = n;
clo53632[2] = take_u45helper;
clo53632[3] = kont53214;
clo53632[4] = lst;
void* f5321553351 = encode_clo(clo53632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5321553351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam53503_fptr() // lam53503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53504 = arg_buffer[1];
//reading env and args
void* a5312053360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5311853356 = (decode_clo(env53504))[3];
//not do dummy comment
void* _u43 = (decode_clo(env53504))[2];
//not do dummy comment
void* kont53216 = (decode_clo(env53504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont53216;
arg_buffer[3] = a5311853356;
arg_buffer[4] = a5312053360;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53503 = encode_clo(alloc_clo(lam53503_fptr, 0));

void* lam53505_fptr() // lam53505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53506 = arg_buffer[1];
//reading env and args
void* a5311953358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env53506))[4];
//not do dummy comment
void* a5311853356 = (decode_clo(env53506))[3];
//not do dummy comment
void* _u43 = (decode_clo(env53506))[2];
//not do dummy comment
void* kont53216 = (decode_clo(env53506))[1];

//creating new closure instance
void** clo53634 = alloc_clo(lam53503_fptr, 3);

//setting env list
clo53634[1] = kont53216;
clo53634[2] = _u43;
clo53634[3] = a5311853356;
void* f5321753359 = encode_clo(clo53634);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5321753359;
arg_buffer[3] = a5311953358;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53505 = encode_clo(alloc_clo(lam53505_fptr, 0));

void* lam53508_fptr() // lam53508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53509 = arg_buffer[1];
//reading env and args
void* a5311653354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53509))[5];
//not do dummy comment
void* lst = (decode_clo(env53509))[4];
//not do dummy comment
void* length = (decode_clo(env53509))[3];
//not do dummy comment
void* _u43 = (decode_clo(env53509))[2];
//not do dummy comment
void* kont53216 = (decode_clo(env53509))[1];

//if-clause
bool if_guard53635 = is_true(a5311653354);
if(if_guard53635)
{
mpz_t* mpzvar53636 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53636, "0", 10);
void* x5311753355 = encode_mpz(mpzvar53636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53216);
arg_buffer[2] = x5311753355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53216))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53637 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53637, "1", 10);
void* a5311853356 = encode_mpz(mpzvar53637);

//creating new closure instance
void** clo53639 = alloc_clo(lam53505_fptr, 4);

//setting env list
clo53639[1] = kont53216;
clo53639[2] = _u43;
clo53639[3] = a5311853356;
clo53639[4] = length;
void* f5321853357 = encode_clo(clo53639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5321853357;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53508 = encode_clo(alloc_clo(lam53508_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53510 = arg_buffer[1];
//reading env and args
void* kont53216 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53641 = alloc_clo(lam53508_fptr, 5);

//setting env list
clo53641[1] = kont53216;
clo53641[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo53641[3] = length;
clo53641[4] = lst;
clo53641[5] = cdr;
void* f5321953353 = encode_clo(clo53641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5321953353;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam53511_fptr() // lam53511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53512 = arg_buffer[1];
//reading env and args
void* x5312253364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53220 = (decode_clo(env53512))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53220);
arg_buffer[2] = x5312253364;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53220))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53511 = encode_clo(alloc_clo(lam53511_fptr, 0));

void* lam53513_fptr() // lam53513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53514 = arg_buffer[1];
//reading env and args
void* a5312653372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5312453368 = (decode_clo(env53514))[3];
//not do dummy comment
void* cons = (decode_clo(env53514))[2];
//not do dummy comment
void* kont53220 = (decode_clo(env53514))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53220;
arg_buffer[3] = a5312453368;
arg_buffer[4] = a5312653372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53513 = encode_clo(alloc_clo(lam53513_fptr, 0));

void* lam53515_fptr() // lam53515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53516 = arg_buffer[1];
//reading env and args
void* a5312553370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5312453368 = (decode_clo(env53516))[5];
//not do dummy comment
void* map = (decode_clo(env53516))[4];
//not do dummy comment
void* proc = (decode_clo(env53516))[3];
//not do dummy comment
void* cons = (decode_clo(env53516))[2];
//not do dummy comment
void* kont53220 = (decode_clo(env53516))[1];

//creating new closure instance
void** clo53643 = alloc_clo(lam53513_fptr, 3);

//setting env list
clo53643[1] = kont53220;
clo53643[2] = cons;
clo53643[3] = a5312453368;
void* f5322253371 = encode_clo(clo53643);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5322253371;
arg_buffer[3] = proc;
arg_buffer[4] = a5312553370;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53515 = encode_clo(alloc_clo(lam53515_fptr, 0));

void* lam53517_fptr() // lam53517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53518 = arg_buffer[1];
//reading env and args
void* a5312453368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53518))[6];
//not do dummy comment
void* lst = (decode_clo(env53518))[5];
//not do dummy comment
void* map = (decode_clo(env53518))[4];
//not do dummy comment
void* proc = (decode_clo(env53518))[3];
//not do dummy comment
void* cons = (decode_clo(env53518))[2];
//not do dummy comment
void* kont53220 = (decode_clo(env53518))[1];

//creating new closure instance
void** clo53645 = alloc_clo(lam53515_fptr, 5);

//setting env list
clo53645[1] = kont53220;
clo53645[2] = cons;
clo53645[3] = proc;
clo53645[4] = map;
clo53645[5] = a5312453368;
void* f5322353369 = encode_clo(clo53645);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5322353369;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53517 = encode_clo(alloc_clo(lam53517_fptr, 0));

void* lam53519_fptr() // lam53519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53520 = arg_buffer[1];
//reading env and args
void* a5312353366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53520))[6];
//not do dummy comment
void* lst = (decode_clo(env53520))[5];
//not do dummy comment
void* map = (decode_clo(env53520))[4];
//not do dummy comment
void* proc = (decode_clo(env53520))[3];
//not do dummy comment
void* cons = (decode_clo(env53520))[2];
//not do dummy comment
void* kont53220 = (decode_clo(env53520))[1];

//creating new closure instance
void** clo53647 = alloc_clo(lam53517_fptr, 6);

//setting env list
clo53647[1] = kont53220;
clo53647[2] = cons;
clo53647[3] = proc;
clo53647[4] = map;
clo53647[5] = lst;
clo53647[6] = cdr;
void* f5322453367 = encode_clo(clo53647);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5322453367;
arg_buffer[3] = a5312353366;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53519 = encode_clo(alloc_clo(lam53519_fptr, 0));

void* lam53521_fptr() // lam53521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53522 = arg_buffer[1];
//reading env and args
void* a5312153362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53522))[8];
//not do dummy comment
void* map = (decode_clo(env53522))[7];
//not do dummy comment
void* proc = (decode_clo(env53522))[6];
//not do dummy comment
void* car = (decode_clo(env53522))[5];
//not do dummy comment
void* list = (decode_clo(env53522))[4];
//not do dummy comment
void* cdr = (decode_clo(env53522))[3];
//not do dummy comment
void* cons = (decode_clo(env53522))[2];
//not do dummy comment
void* kont53220 = (decode_clo(env53522))[1];

//if-clause
bool if_guard53648 = is_true(a5312153362);
if(if_guard53648)
{

//creating new closure instance
void** clo53650 = alloc_clo(lam53511_fptr, 1);

//setting env list
clo53650[1] = kont53220;
void* f5322153363 = encode_clo(clo53650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5322153363;
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
void** clo53652 = alloc_clo(lam53519_fptr, 6);

//setting env list
clo53652[1] = kont53220;
clo53652[2] = cons;
clo53652[3] = proc;
clo53652[4] = map;
clo53652[5] = lst;
clo53652[6] = cdr;
void* f5322553365 = encode_clo(clo53652);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5322553365;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53521 = encode_clo(alloc_clo(lam53521_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53523 = arg_buffer[1];
//reading env and args
void* kont53220 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53654 = alloc_clo(lam53521_fptr, 8);

//setting env list
clo53654[1] = kont53220;
clo53654[2] = cons;
clo53654[3] = cdr;
clo53654[4] = list;
clo53654[5] = car;
clo53654[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo53654[7] = map;
clo53654[8] = lst;
void* f5322653361 = encode_clo(clo53654);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5322653361;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam53524_fptr() // lam53524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53525 = arg_buffer[1];
//reading env and args
void* x5312853376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53227 = (decode_clo(env53525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53227);
arg_buffer[2] = x5312853376;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53227))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53524 = encode_clo(alloc_clo(lam53524_fptr, 0));

void* lam53526_fptr() // lam53526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53527 = arg_buffer[1];
//reading env and args
void* a5313353386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5313153382 = (decode_clo(env53527))[3];
//not do dummy comment
void* kont53227 = (decode_clo(env53527))[2];
//not do dummy comment
void* cons = (decode_clo(env53527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53227;
arg_buffer[3] = a5313153382;
arg_buffer[4] = a5313353386;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53526 = encode_clo(alloc_clo(lam53526_fptr, 0));

void* lam53528_fptr() // lam53528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53529 = arg_buffer[1];
//reading env and args
void* a5313253384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5313153382 = (decode_clo(env53529))[5];
//not do dummy comment
void* kont53227 = (decode_clo(env53529))[4];
//not do dummy comment
void* op = (decode_clo(env53529))[3];
//not do dummy comment
void* filter = (decode_clo(env53529))[2];
//not do dummy comment
void* cons = (decode_clo(env53529))[1];

//creating new closure instance
void** clo53656 = alloc_clo(lam53526_fptr, 3);

//setting env list
clo53656[1] = cons;
clo53656[2] = kont53227;
clo53656[3] = a5313153382;
void* f5322953385 = encode_clo(clo53656);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5322953385;
arg_buffer[3] = op;
arg_buffer[4] = a5313253384;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53528 = encode_clo(alloc_clo(lam53528_fptr, 0));

void* lam53530_fptr() // lam53530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53531 = arg_buffer[1];
//reading env and args
void* a5313153382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53531))[6];
//not do dummy comment
void* lst = (decode_clo(env53531))[5];
//not do dummy comment
void* kont53227 = (decode_clo(env53531))[4];
//not do dummy comment
void* op = (decode_clo(env53531))[3];
//not do dummy comment
void* filter = (decode_clo(env53531))[2];
//not do dummy comment
void* cons = (decode_clo(env53531))[1];

//creating new closure instance
void** clo53658 = alloc_clo(lam53528_fptr, 5);

//setting env list
clo53658[1] = cons;
clo53658[2] = filter;
clo53658[3] = op;
clo53658[4] = kont53227;
clo53658[5] = a5313153382;
void* f5323053383 = encode_clo(clo53658);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5323053383;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53530 = encode_clo(alloc_clo(lam53530_fptr, 0));

void* lam53532_fptr() // lam53532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53533 = arg_buffer[1];
//reading env and args
void* a5313453388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53227 = (decode_clo(env53533))[3];
//not do dummy comment
void* op = (decode_clo(env53533))[2];
//not do dummy comment
void* filter = (decode_clo(env53533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont53227;
arg_buffer[3] = op;
arg_buffer[4] = a5313453388;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53532 = encode_clo(alloc_clo(lam53532_fptr, 0));

void* lam53534_fptr() // lam53534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53535 = arg_buffer[1];
//reading env and args
void* a5313053380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53535))[7];
//not do dummy comment
void* lst = (decode_clo(env53535))[6];
//not do dummy comment
void* kont53227 = (decode_clo(env53535))[5];
//not do dummy comment
void* op = (decode_clo(env53535))[4];
//not do dummy comment
void* cons = (decode_clo(env53535))[3];
//not do dummy comment
void* filter = (decode_clo(env53535))[2];
//not do dummy comment
void* car = (decode_clo(env53535))[1];

//if-clause
bool if_guard53659 = is_true(a5313053380);
if(if_guard53659)
{

//creating new closure instance
void** clo53661 = alloc_clo(lam53530_fptr, 6);

//setting env list
clo53661[1] = cons;
clo53661[2] = filter;
clo53661[3] = op;
clo53661[4] = kont53227;
clo53661[5] = lst;
clo53661[6] = cdr;
void* f5323153381 = encode_clo(clo53661);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5323153381;
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
void** clo53663 = alloc_clo(lam53532_fptr, 3);

//setting env list
clo53663[1] = filter;
clo53663[2] = op;
clo53663[3] = kont53227;
void* f5323253387 = encode_clo(clo53663);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5323253387;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53534 = encode_clo(alloc_clo(lam53534_fptr, 0));

void* lam53536_fptr() // lam53536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53537 = arg_buffer[1];
//reading env and args
void* a5312953378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53537))[7];
//not do dummy comment
void* lst = (decode_clo(env53537))[6];
//not do dummy comment
void* kont53227 = (decode_clo(env53537))[5];
//not do dummy comment
void* op = (decode_clo(env53537))[4];
//not do dummy comment
void* cons = (decode_clo(env53537))[3];
//not do dummy comment
void* filter = (decode_clo(env53537))[2];
//not do dummy comment
void* car = (decode_clo(env53537))[1];

//creating new closure instance
void** clo53665 = alloc_clo(lam53534_fptr, 7);

//setting env list
clo53665[1] = car;
clo53665[2] = filter;
clo53665[3] = cons;
clo53665[4] = op;
clo53665[5] = kont53227;
clo53665[6] = lst;
clo53665[7] = cdr;
void* f5323353379 = encode_clo(clo53665);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5323353379;
arg_buffer[3] = a5312953378;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53536 = encode_clo(alloc_clo(lam53536_fptr, 0));

void* lam53538_fptr() // lam53538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53539 = arg_buffer[1];
//reading env and args
void* a5312753374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53539))[8];
//not do dummy comment
void* kont53227 = (decode_clo(env53539))[7];
//not do dummy comment
void* op = (decode_clo(env53539))[6];
//not do dummy comment
void* cons = (decode_clo(env53539))[5];
//not do dummy comment
void* list = (decode_clo(env53539))[4];
//not do dummy comment
void* cdr = (decode_clo(env53539))[3];
//not do dummy comment
void* filter = (decode_clo(env53539))[2];
//not do dummy comment
void* car = (decode_clo(env53539))[1];

//if-clause
bool if_guard53666 = is_true(a5312753374);
if(if_guard53666)
{

//creating new closure instance
void** clo53668 = alloc_clo(lam53524_fptr, 1);

//setting env list
clo53668[1] = kont53227;
void* f5322853375 = encode_clo(clo53668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5322853375;
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
void** clo53670 = alloc_clo(lam53536_fptr, 7);

//setting env list
clo53670[1] = car;
clo53670[2] = filter;
clo53670[3] = cons;
clo53670[4] = op;
clo53670[5] = kont53227;
clo53670[6] = lst;
clo53670[7] = cdr;
void* f5323453377 = encode_clo(clo53670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5323453377;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53538 = encode_clo(alloc_clo(lam53538_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53540 = arg_buffer[1];
//reading env and args
void* kont53227 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53672 = alloc_clo(lam53538_fptr, 8);

//setting env list
clo53672[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo53672[2] = filter;
clo53672[3] = cdr;
clo53672[4] = list;
clo53672[5] = cons;
clo53672[6] = op;
clo53672[7] = kont53227;
clo53672[8] = lst;
void* f5323553373 = encode_clo(clo53672);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5323553373;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam53541_fptr() // lam53541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53542 = arg_buffer[1];
//reading env and args
void* a5313953396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env53542))[3];
//not do dummy comment
void* a5313753393 = (decode_clo(env53542))[2];
//not do dummy comment
void* kont53236 = (decode_clo(env53542))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont53236;
arg_buffer[3] = a5313753393;
arg_buffer[4] = a5313953396;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53541 = encode_clo(alloc_clo(lam53541_fptr, 0));

void* lam53544_fptr() // lam53544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53545 = arg_buffer[1];
//reading env and args
void* a5313753393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env53545))[4];
//not do dummy comment
void* n = (decode_clo(env53545))[3];
//not do dummy comment
void* kont53236 = (decode_clo(env53545))[2];
//not do dummy comment
void* _u45 = (decode_clo(env53545))[1];
mpz_t* mpzvar53673 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53673, "1", 10);
void* a5313853394 = encode_mpz(mpzvar53673);

//creating new closure instance
void** clo53675 = alloc_clo(lam53541_fptr, 3);

//setting env list
clo53675[1] = kont53236;
clo53675[2] = a5313753393;
clo53675[3] = drop;
void* f5323753395 = encode_clo(clo53675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5323753395;
arg_buffer[3] = n;
arg_buffer[4] = a5313853394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53544 = encode_clo(alloc_clo(lam53544_fptr, 0));

void* lam53546_fptr() // lam53546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53547 = arg_buffer[1];
//reading env and args
void* a5313653391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53547))[6];
//not do dummy comment
void* n = (decode_clo(env53547))[5];
//not do dummy comment
void* kont53236 = (decode_clo(env53547))[4];
//not do dummy comment
void* _u45 = (decode_clo(env53547))[3];
//not do dummy comment
void* lst = (decode_clo(env53547))[2];
//not do dummy comment
void* drop = (decode_clo(env53547))[1];

//if-clause
bool if_guard53676 = is_true(a5313653391);
if(if_guard53676)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53236);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53678 = alloc_clo(lam53544_fptr, 4);

//setting env list
clo53678[1] = _u45;
clo53678[2] = kont53236;
clo53678[3] = n;
clo53678[4] = drop;
void* f5323853392 = encode_clo(clo53678);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5323853392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53546 = encode_clo(alloc_clo(lam53546_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53549 = arg_buffer[1];
//reading env and args
void* kont53236 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar53679 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53679, "0", 10);
void* a5313553389 = encode_mpz(mpzvar53679);

//creating new closure instance
void** clo53681 = alloc_clo(lam53546_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo53681[1] = drop;
clo53681[2] = lst;
clo53681[3] = _u45;
clo53681[4] = kont53236;
clo53681[5] = n;
clo53681[6] = cdr;
void* f5323953390 = encode_clo(clo53681);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5323953390;
arg_buffer[3] = n;
arg_buffer[4] = a5313553389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam53550_fptr() // lam53550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53551 = arg_buffer[1];
//reading env and args
void* a5314353404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env53551))[3];
//not do dummy comment
void* a5314153400 = (decode_clo(env53551))[2];
//not do dummy comment
void* kont53240 = (decode_clo(env53551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont53240;
arg_buffer[3] = a5314153400;
arg_buffer[4] = a5314353404;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53550 = encode_clo(alloc_clo(lam53550_fptr, 0));

void* lam53552_fptr() // lam53552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53553 = arg_buffer[1];
//reading env and args
void* a5314253402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env53553))[5];
//not do dummy comment
void* a5314153400 = (decode_clo(env53553))[4];
//not do dummy comment
void* kont53240 = (decode_clo(env53553))[3];
//not do dummy comment
void* proc = (decode_clo(env53553))[2];
//not do dummy comment
void* acc = (decode_clo(env53553))[1];

//creating new closure instance
void** clo53683 = alloc_clo(lam53550_fptr, 3);

//setting env list
clo53683[1] = kont53240;
clo53683[2] = a5314153400;
clo53683[3] = proc;
void* f5324153403 = encode_clo(clo53683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5324153403;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5314253402;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53552 = encode_clo(alloc_clo(lam53552_fptr, 0));

void* lam53554_fptr() // lam53554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53555 = arg_buffer[1];
//reading env and args
void* a5314153400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53555))[6];
//not do dummy comment
void* kont53240 = (decode_clo(env53555))[5];
//not do dummy comment
void* foldr = (decode_clo(env53555))[4];
//not do dummy comment
void* lst = (decode_clo(env53555))[3];
//not do dummy comment
void* proc = (decode_clo(env53555))[2];
//not do dummy comment
void* acc = (decode_clo(env53555))[1];

//creating new closure instance
void** clo53685 = alloc_clo(lam53552_fptr, 5);

//setting env list
clo53685[1] = acc;
clo53685[2] = proc;
clo53685[3] = kont53240;
clo53685[4] = a5314153400;
clo53685[5] = foldr;
void* f5324253401 = encode_clo(clo53685);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5324253401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53554 = encode_clo(alloc_clo(lam53554_fptr, 0));

void* lam53556_fptr() // lam53556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53557 = arg_buffer[1];
//reading env and args
void* a5314053398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53557))[7];
//not do dummy comment
void* kont53240 = (decode_clo(env53557))[6];
//not do dummy comment
void* car = (decode_clo(env53557))[5];
//not do dummy comment
void* foldr = (decode_clo(env53557))[4];
//not do dummy comment
void* lst = (decode_clo(env53557))[3];
//not do dummy comment
void* proc = (decode_clo(env53557))[2];
//not do dummy comment
void* acc = (decode_clo(env53557))[1];

//if-clause
bool if_guard53686 = is_true(a5314053398);
if(if_guard53686)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53240);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53240))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53688 = alloc_clo(lam53554_fptr, 6);

//setting env list
clo53688[1] = acc;
clo53688[2] = proc;
clo53688[3] = lst;
clo53688[4] = foldr;
clo53688[5] = kont53240;
clo53688[6] = cdr;
void* f5324353399 = encode_clo(clo53688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5324353399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53556 = encode_clo(alloc_clo(lam53556_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53558 = arg_buffer[1];
//reading env and args
void* kont53240 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53690 = alloc_clo(lam53556_fptr, 7);

//setting env list
clo53690[1] = acc;
clo53690[2] = proc;
clo53690[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo53690[4] = foldr;
clo53690[5] = car;
clo53690[6] = kont53240;
clo53690[7] = cdr;
void* f5324453397 = encode_clo(clo53690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5324453397;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam53559_fptr() // lam53559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53560 = arg_buffer[1];
//reading env and args
void* a5314753412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53245 = (decode_clo(env53560))[3];
//not do dummy comment
void* a5314553408 = (decode_clo(env53560))[2];
//not do dummy comment
void* cons = (decode_clo(env53560))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53245;
arg_buffer[3] = a5314553408;
arg_buffer[4] = a5314753412;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53559 = encode_clo(alloc_clo(lam53559_fptr, 0));

void* lam53561_fptr() // lam53561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53562 = arg_buffer[1];
//reading env and args
void* a5314653410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53245 = (decode_clo(env53562))[5];
//not do dummy comment
void* append = (decode_clo(env53562))[4];
//not do dummy comment
void* a5314553408 = (decode_clo(env53562))[3];
//not do dummy comment
void* lst2 = (decode_clo(env53562))[2];
//not do dummy comment
void* cons = (decode_clo(env53562))[1];

//creating new closure instance
void** clo53692 = alloc_clo(lam53559_fptr, 3);

//setting env list
clo53692[1] = cons;
clo53692[2] = a5314553408;
clo53692[3] = kont53245;
void* f5324653411 = encode_clo(clo53692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5324653411;
arg_buffer[3] = a5314653410;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53561 = encode_clo(alloc_clo(lam53561_fptr, 0));

void* lam53563_fptr() // lam53563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53564 = arg_buffer[1];
//reading env and args
void* a5314553408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53564))[6];
//not do dummy comment
void* kont53245 = (decode_clo(env53564))[5];
//not do dummy comment
void* append = (decode_clo(env53564))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53564))[3];
//not do dummy comment
void* lst1 = (decode_clo(env53564))[2];
//not do dummy comment
void* cons = (decode_clo(env53564))[1];

//creating new closure instance
void** clo53694 = alloc_clo(lam53561_fptr, 5);

//setting env list
clo53694[1] = cons;
clo53694[2] = lst2;
clo53694[3] = a5314553408;
clo53694[4] = append;
clo53694[5] = kont53245;
void* f5324753409 = encode_clo(clo53694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5324753409;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53563 = encode_clo(alloc_clo(lam53563_fptr, 0));

void* lam53565_fptr() // lam53565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53566 = arg_buffer[1];
//reading env and args
void* a5314453406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53566))[7];
//not do dummy comment
void* kont53245 = (decode_clo(env53566))[6];
//not do dummy comment
void* append = (decode_clo(env53566))[5];
//not do dummy comment
void* lst2 = (decode_clo(env53566))[4];
//not do dummy comment
void* cons = (decode_clo(env53566))[3];
//not do dummy comment
void* lst1 = (decode_clo(env53566))[2];
//not do dummy comment
void* car = (decode_clo(env53566))[1];

//if-clause
bool if_guard53695 = is_true(a5314453406);
if(if_guard53695)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53245);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53697 = alloc_clo(lam53563_fptr, 6);

//setting env list
clo53697[1] = cons;
clo53697[2] = lst1;
clo53697[3] = lst2;
clo53697[4] = append;
clo53697[5] = kont53245;
clo53697[6] = cdr;
void* f5324853407 = encode_clo(clo53697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5324853407;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53565 = encode_clo(alloc_clo(lam53565_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53567 = arg_buffer[1];
//reading env and args
void* kont53245 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53699 = alloc_clo(lam53565_fptr, 7);

//setting env list
clo53699[1] = car;
clo53699[2] = lst1;
clo53699[3] = cons;
clo53699[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo53699[5] = append;
clo53699[6] = kont53245;
clo53699[7] = cdr;
void* f5324953405 = encode_clo(clo53699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5324953405;
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
void* _53568 = arg_buffer[1];
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

void* kont5325053413 = prim_car(lst);
void* lst53414 = prim_cdr(lst);
void* x5314853415 = apply_prim_hash(lst53414);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5325053413);
arg_buffer[2] = x5314853415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5325053413))[0]);
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
void* _53569 = arg_buffer[1];
//reading env and args
void* kont53252 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5314953416 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53252);
arg_buffer[2] = x5314953416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53252))[0]);
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
void* _53570 = arg_buffer[1];
//reading env and args
void* kont53253 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5315053417 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53253);
arg_buffer[2] = x5315053417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53253))[0]);
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
void* _53571 = arg_buffer[1];
//reading env and args
void* kont53254 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5315153418 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53254);
arg_buffer[2] = x5315153418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53254))[0]);
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
void* _53572 = arg_buffer[1];
//reading env and args
void* kont53255 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5315253419 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53255);
arg_buffer[2] = x5315253419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53255))[0]);
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
void* _53574 = arg_buffer[1];
//reading env and args
void* kont53256 = arg_buffer[2];
//Dummy comment
void* x5315353420 = encode_str(new(GC) std::string("random"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53256);
arg_buffer[2] = x5315353420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53256))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam53575_fptr() // lam53575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53576 = arg_buffer[1];
//reading env and args
void* x5315453422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53257 = (decode_clo(env53576))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53257);
arg_buffer[2] = x5315453422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53257))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53575 = encode_clo(alloc_clo(lam53575_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53577 = arg_buffer[1];
//reading env and args
void* kont53257 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo53701 = alloc_clo(lam53575_fptr, 1);

//setting env list
clo53701[1] = kont53257;
void* f5325853421 = encode_clo(clo53701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5325853421;
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

