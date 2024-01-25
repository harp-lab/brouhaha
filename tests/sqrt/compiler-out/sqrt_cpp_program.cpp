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
void* _env11335 = arg_buffer[1];
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

void* kont11333 = prim_car(lst);
void* lst11336 = prim_cdr(lst);
void* x11334 = apply_prim__u43(lst11336);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11333);
arg_buffer[2] = x11334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11333))[0]);
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
void* _env11339 = arg_buffer[1];
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

void* kont11337 = prim_car(lst);
void* lst11340 = prim_cdr(lst);
void* x11338 = apply_prim__u45(lst11340);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11337);
arg_buffer[2] = x11338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11337))[0]);
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
void* _env11343 = arg_buffer[1];
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

void* kont11341 = prim_car(lst);
void* lst11344 = prim_cdr(lst);
void* x11342 = apply_prim__u42(lst11344);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11341);
arg_buffer[2] = x11342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11341))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11347 = arg_buffer[1];
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

void* kont11345 = prim_car(lst);
void* lst11348 = prim_cdr(lst);
void* x11346 = apply_prim__u47(lst11348);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11345);
arg_buffer[2] = x11346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11345))[0]);
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
void* _env11351 = arg_buffer[1];
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

void* kont11349 = prim_car(lst);
void* lst11352 = prim_cdr(lst);
void* x11350 = apply_prim__u61(lst11352);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11349);
arg_buffer[2] = x11350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11349))[0]);
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
void* _env11355 = arg_buffer[1];
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

void* kont11353 = prim_car(lst);
void* lst11356 = prim_cdr(lst);
void* x11354 = apply_prim__u62(lst11356);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11353);
arg_buffer[2] = x11354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11353))[0]);
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
void* _env11359 = arg_buffer[1];
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

void* kont11357 = prim_car(lst);
void* lst11360 = prim_cdr(lst);
void* x11358 = apply_prim__u60(lst11360);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11357);
arg_buffer[2] = x11358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11357))[0]);
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
void* _env11363 = arg_buffer[1];
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

void* kont11361 = prim_car(lst);
void* lst11364 = prim_cdr(lst);
void* x11362 = apply_prim__u60_u61(lst11364);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11361);
arg_buffer[2] = x11362;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11361))[0]);
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
void* _env11367 = arg_buffer[1];
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

void* kont11365 = prim_car(lst);
void* lst11368 = prim_cdr(lst);
void* x11366 = apply_prim__u62_u61(lst11368);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11365);
arg_buffer[2] = x11366;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11365))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void* modulo_fptr() // modulo 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11371 = arg_buffer[1];
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

void* kont11369 = prim_car(lst);
void* lst11372 = prim_cdr(lst);
void* x11370 = apply_prim_modulo(lst11372);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11369);
arg_buffer[2] = x11370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11369))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void* null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11375 = arg_buffer[1];
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

void* kont11373 = prim_car(lst);
void* lst11376 = prim_cdr(lst);
void* x11374 = apply_prim_null_u63(lst11376);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11373);
arg_buffer[2] = x11374;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11373))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11379 = arg_buffer[1];
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

void* kont11377 = prim_car(lst);
void* lst11380 = prim_cdr(lst);
void* x11378 = apply_prim_equal_u63(lst11380);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11377);
arg_buffer[2] = x11378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11377))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* eq_u63_fptr() // eq? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11383 = arg_buffer[1];
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

void* kont11381 = prim_car(lst);
void* lst11384 = prim_cdr(lst);
void* x11382 = apply_prim_eq_u63(lst11384);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11381);
arg_buffer[2] = x11382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11381))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11387 = arg_buffer[1];
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

void* kont11385 = prim_car(lst);
void* lst11388 = prim_cdr(lst);
void* x11386 = apply_prim_cons(lst11388);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11385);
arg_buffer[2] = x11386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11385))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void* car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11391 = arg_buffer[1];
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

void* kont11389 = prim_car(lst);
void* lst11392 = prim_cdr(lst);
void* x11390 = apply_prim_car(lst11392);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11389);
arg_buffer[2] = x11390;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11389))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11395 = arg_buffer[1];
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

void* kont11393 = prim_car(lst);
void* lst11396 = prim_cdr(lst);
void* x11394 = apply_prim_cdr(lst11396);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11393);
arg_buffer[2] = x11394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11393))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11399 = arg_buffer[1];
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

void* kont11397 = prim_car(lst);
void* lst11400 = prim_cdr(lst);
void* x11398 = apply_prim_float_u45_u62int(lst11400);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11397);
arg_buffer[2] = x11398;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11397))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11403 = arg_buffer[1];
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

void* kont11401 = prim_car(lst);
void* lst11404 = prim_cdr(lst);
void* x11402 = apply_prim_int_u45_u62float(lst11404);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11401);
arg_buffer[2] = x11402;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11401))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11407 = arg_buffer[1];
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

void* kont11405 = prim_car(lst);
void* lst11408 = prim_cdr(lst);
void* x11406 = apply_prim_hash(lst11408);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11405);
arg_buffer[2] = x11406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11405))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45ref_fptr() // hash-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11411 = arg_buffer[1];
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

void* kont11409 = prim_car(lst);
void* lst11412 = prim_cdr(lst);
void* x11410 = apply_prim_hash_u45ref(lst11412);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11409);
arg_buffer[2] = x11410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11409))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void* hash_u45set_fptr() // hash-set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11415 = arg_buffer[1];
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

void* kont11413 = prim_car(lst);
void* lst11416 = prim_cdr(lst);
void* x11414 = apply_prim_hash_u45set(lst11416);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11413);
arg_buffer[2] = x11414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11413))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void* hash_u45keys_fptr() // hash-keys 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11419 = arg_buffer[1];
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

void* kont11417 = prim_car(lst);
void* lst11420 = prim_cdr(lst);
void* x11418 = apply_prim_hash_u45keys(lst11420);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11417);
arg_buffer[2] = x11418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11417))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11423 = arg_buffer[1];
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

void* kont11421 = prim_car(lst);
void* lst11424 = prim_cdr(lst);
void* x11422 = apply_prim_hash_u45has_u45key_u63(lst11424);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11421);
arg_buffer[2] = x11422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11421))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void* hash_u45count_fptr() // hash-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11427 = arg_buffer[1];
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

void* kont11425 = prim_car(lst);
void* lst11428 = prim_cdr(lst);
void* x11426 = apply_prim_hash_u45count(lst11428);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11425);
arg_buffer[2] = x11426;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11425))[0]);
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
void* _env11431 = arg_buffer[1];
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

void* kont11429 = prim_car(lst);
void* lst11432 = prim_cdr(lst);
void* x11430 = apply_prim_set(lst11432);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11429);
arg_buffer[2] = x11430;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11429))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45_u62list_fptr() // set->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11435 = arg_buffer[1];
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

void* kont11433 = prim_car(lst);
void* lst11436 = prim_cdr(lst);
void* x11434 = apply_prim_set_u45_u62list(lst11436);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11433);
arg_buffer[2] = x11434;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11433))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void* list_u45_u62set_fptr() // list->set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11439 = arg_buffer[1];
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

void* kont11437 = prim_car(lst);
void* lst11440 = prim_cdr(lst);
void* x11438 = apply_prim_list_u45_u62set(lst11440);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11437);
arg_buffer[2] = x11438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11437))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11443 = arg_buffer[1];
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

void* kont11441 = prim_car(lst);
void* lst11444 = prim_cdr(lst);
void* x11442 = apply_prim_set_u45add(lst11444);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11441);
arg_buffer[2] = x11442;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11441))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11447 = arg_buffer[1];
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

void* kont11445 = prim_car(lst);
void* lst11448 = prim_cdr(lst);
void* x11446 = apply_prim_set_u45member_u63(lst11448);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11445);
arg_buffer[2] = x11446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11445))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11451 = arg_buffer[1];
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

void* kont11449 = prim_car(lst);
void* lst11452 = prim_cdr(lst);
void* x11450 = apply_prim_set_u45remove(lst11452);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11449);
arg_buffer[2] = x11450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11449))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11455 = arg_buffer[1];
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

void* kont11453 = prim_car(lst);
void* lst11456 = prim_cdr(lst);
void* x11454 = apply_prim_set_u45count(lst11456);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11453);
arg_buffer[2] = x11454;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11453))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11459 = arg_buffer[1];
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

void* kont11457 = prim_car(lst);
void* lst11460 = prim_cdr(lst);
void* x11458 = apply_prim_string_u63(lst11460);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11457);
arg_buffer[2] = x11458;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11457))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11463 = arg_buffer[1];
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

void* kont11461 = prim_car(lst);
void* lst11464 = prim_cdr(lst);
void* x11462 = apply_prim_string_u45length(lst11464);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11461);
arg_buffer[2] = x11462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11461))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11467 = arg_buffer[1];
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

void* kont11465 = prim_car(lst);
void* lst11468 = prim_cdr(lst);
void* x11466 = apply_prim_string_u45ref(lst11468);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11465);
arg_buffer[2] = x11466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11465))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11471 = arg_buffer[1];
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

void* kont11469 = prim_car(lst);
void* lst11472 = prim_cdr(lst);
void* x11470 = apply_prim_substring(lst11472);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11469);
arg_buffer[2] = x11470;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11469))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11475 = arg_buffer[1];
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

void* kont11473 = prim_car(lst);
void* lst11476 = prim_cdr(lst);
void* x11474 = apply_prim_string_u45append(lst11476);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11473);
arg_buffer[2] = x11474;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11473))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11479 = arg_buffer[1];
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

void* kont11477 = prim_car(lst);
void* lst11480 = prim_cdr(lst);
void* x11478 = apply_prim_string_u45_u62list(lst11480);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11477);
arg_buffer[2] = x11478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11477))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11483 = arg_buffer[1];
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

void* kont11481 = prim_car(lst);
void* lst11484 = prim_cdr(lst);
void* x11482 = apply_prim_exact_u45floor(lst11484);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11481);
arg_buffer[2] = x11482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11481))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void* exact_u45ceiling_fptr() // exact-ceiling 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11487 = arg_buffer[1];
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

void* kont11485 = prim_car(lst);
void* lst11488 = prim_cdr(lst);
void* x11486 = apply_prim_exact_u45ceiling(lst11488);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11485);
arg_buffer[2] = x11486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11485))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void* exact_u45round_fptr() // exact-round 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11491 = arg_buffer[1];
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

void* kont11489 = prim_car(lst);
void* lst11492 = prim_cdr(lst);
void* x11490 = apply_prim_exact_u45round(lst11492);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11489);
arg_buffer[2] = x11490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11489))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void* absolute_fptr() // absolute 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11495 = arg_buffer[1];
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

void* kont11493 = prim_car(lst);
void* lst11496 = prim_cdr(lst);
void* x11494 = apply_prim_absolute(lst11496);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11493);
arg_buffer[2] = x11494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11493))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* absolute = encode_clo(alloc_clo(absolute_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11499 = arg_buffer[1];
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

void* kont11497 = prim_car(lst);
void* lst11500 = prim_cdr(lst);
void* x11498 = apply_prim_max(lst11500);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11497);
arg_buffer[2] = x11498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11497))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* min_fptr() // min 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11503 = arg_buffer[1];
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

void* kont11501 = prim_car(lst);
void* lst11504 = prim_cdr(lst);
void* x11502 = apply_prim_min(lst11504);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11501);
arg_buffer[2] = x11502;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11501))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* min = encode_clo(alloc_clo(min_fptr, 0));

void* expt_fptr() // expt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11507 = arg_buffer[1];
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

void* kont11505 = prim_car(lst);
void* lst11508 = prim_cdr(lst);
void* x11506 = apply_prim_expt(lst11508);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11505);
arg_buffer[2] = x11506;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11505))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void* sqrt_fptr() // sqrt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11511 = arg_buffer[1];
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

void* kont11509 = prim_car(lst);
void* lst11512 = prim_cdr(lst);
void* x11510 = apply_prim_sqrt(lst11512);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11509);
arg_buffer[2] = x11510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11509))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void* remainder_fptr() // remainder 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11515 = arg_buffer[1];
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

void* kont11513 = prim_car(lst);
void* lst11516 = prim_cdr(lst);
void* x11514 = apply_prim_remainder(lst11516);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11513);
arg_buffer[2] = x11514;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11513))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void* quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11519 = arg_buffer[1];
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

void* kont11517 = prim_car(lst);
void* lst11520 = prim_cdr(lst);
void* x11518 = apply_prim_quotient(lst11520);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11517);
arg_buffer[2] = x11518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11517))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void* randnum_fptr() // randnum 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11523 = arg_buffer[1];
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

void* kont11521 = prim_car(lst);
void* lst11524 = prim_cdr(lst);
void* x11522 = apply_prim_randnum(lst11524);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11521);
arg_buffer[2] = x11522;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11521))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* randnum = encode_clo(alloc_clo(randnum_fptr, 0));

void* symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11527 = arg_buffer[1];
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

void* kont11525 = prim_car(lst);
void* lst11528 = prim_cdr(lst);
void* x11526 = apply_prim_symbol_u63(lst11528);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11525);
arg_buffer[2] = x11526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11525))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void* pair_u63_fptr() // pair? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11531 = arg_buffer[1];
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

void* kont11529 = prim_car(lst);
void* lst11532 = prim_cdr(lst);
void* x11530 = apply_prim_pair_u63(lst11532);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11529);
arg_buffer[2] = x11530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11529))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void* positive_u63_fptr() // positive? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11535 = arg_buffer[1];
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

void* kont11533 = prim_car(lst);
void* lst11536 = prim_cdr(lst);
void* x11534 = apply_prim_positive_u63(lst11536);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11533);
arg_buffer[2] = x11534;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11533))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void* negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11539 = arg_buffer[1];
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

void* kont11537 = prim_car(lst);
void* lst11540 = prim_cdr(lst);
void* x11538 = apply_prim_negative_u63(lst11540);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11537);
arg_buffer[2] = x11538;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11537))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8450 = arg_buffer[1];
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

void* kont8379 = prim_car(x);
void* x8449 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8379);
arg_buffer[2] = x8449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8379))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8451_fptr() // lam8451 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8452 = arg_buffer[1];
//reading env and args
void* a8316 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8452))[3];
//not do dummy comment
void* a8314 = (decode_clo(env8452))[2];
//not do dummy comment
void* kont8380 = (decode_clo(env8452))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8380;
arg_buffer[3] = a8314;
arg_buffer[4] = a8316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8451 = encode_clo(alloc_clo(lam8451_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8455 = arg_buffer[1];
//reading env and args
void* kont8380 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11541 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11541, "0", 10);
void* a8314 = encode_mpz(mpzvar11541);
mpz_t* mpzvar11542 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11542, "2", 10);
void* a8315 = encode_mpz(mpzvar11542);

//creating new closure instance
void** clo11544 = alloc_clo(lam8451_fptr, 3);

//setting env list
clo11544[1] = kont8380;
clo11544[2] = a8314;
clo11544[3] = equal_u63;
void* f8381 = encode_clo(clo11544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8381;
arg_buffer[3] = x;
arg_buffer[4] = a8315;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8456_fptr() // lam8456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8457 = arg_buffer[1];
//reading env and args
void* a8319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8382 = (decode_clo(env8457))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8457))[2];
//not do dummy comment
void* a8317 = (decode_clo(env8457))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8382;
arg_buffer[3] = a8317;
arg_buffer[4] = a8319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8456 = encode_clo(alloc_clo(lam8456_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8460 = arg_buffer[1];
//reading env and args
void* kont8382 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11545 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11545, "1", 10);
void* a8317 = encode_mpz(mpzvar11545);
mpz_t* mpzvar11546 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11546, "2", 10);
void* a8318 = encode_mpz(mpzvar11546);

//creating new closure instance
void** clo11548 = alloc_clo(lam8456_fptr, 3);

//setting env list
clo11548[1] = a8317;
clo11548[2] = equal_u63;
clo11548[3] = kont8382;
void* f8383 = encode_clo(clo11548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8383;
arg_buffer[3] = x;
arg_buffer[4] = a8318;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8463_fptr() // lam8463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8464 = arg_buffer[1];
//reading env and args
void* a8325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8384 = (decode_clo(env8464))[3];
//not do dummy comment
void* x = (decode_clo(env8464))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8464))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8384;
arg_buffer[3] = x;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8463 = encode_clo(alloc_clo(lam8463_fptr, 0));

void* lam8465_fptr() // lam8465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8466 = arg_buffer[1];
//reading env and args
void* a8323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8466))[5];
//not do dummy comment
void* kont8384 = (decode_clo(env8466))[4];
//not do dummy comment
void* lst = (decode_clo(env8466))[3];
//not do dummy comment
void* x = (decode_clo(env8466))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8466))[1];

//if-clause
bool if_guard11549 = is_true(a8323);
if(if_guard11549)
{
void* xy8324 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8384);
arg_buffer[2] = xy8324;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8384))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11551 = alloc_clo(lam8463_fptr, 3);

//setting env list
clo11551[1] = member_u63;
clo11551[2] = x;
clo11551[3] = kont8384;
void* f8385 = encode_clo(clo11551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8385;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8465 = encode_clo(alloc_clo(lam8465_fptr, 0));

void* lam8467_fptr() // lam8467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8468 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8468))[6];
//not do dummy comment
void* kont8384 = (decode_clo(env8468))[5];
//not do dummy comment
void* lst = (decode_clo(env8468))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8468))[3];
//not do dummy comment
void* x = (decode_clo(env8468))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8468))[1];

//creating new closure instance
void** clo11553 = alloc_clo(lam8465_fptr, 5);

//setting env list
clo11553[1] = member_u63;
clo11553[2] = x;
clo11553[3] = lst;
clo11553[4] = kont8384;
clo11553[5] = cdr;
void* f8386 = encode_clo(clo11553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8386;
arg_buffer[3] = a8322;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8467 = encode_clo(alloc_clo(lam8467_fptr, 0));

void* lam8469_fptr() // lam8469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8470 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8470))[7];
//not do dummy comment
void* kont8384 = (decode_clo(env8470))[6];
//not do dummy comment
void* lst = (decode_clo(env8470))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8470))[4];
//not do dummy comment
void* x = (decode_clo(env8470))[3];
//not do dummy comment
void* car = (decode_clo(env8470))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8470))[1];

//if-clause
bool if_guard11554 = is_true(a8320);
if(if_guard11554)
{
void* xy8321 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8384);
arg_buffer[2] = xy8321;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8384))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11556 = alloc_clo(lam8467_fptr, 6);

//setting env list
clo11556[1] = member_u63;
clo11556[2] = x;
clo11556[3] = equal_u63;
clo11556[4] = lst;
clo11556[5] = kont8384;
clo11556[6] = cdr;
void* f8387 = encode_clo(clo11556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8387;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8469 = encode_clo(alloc_clo(lam8469_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8471 = arg_buffer[1];
//reading env and args
void* kont8384 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11558 = alloc_clo(lam8469_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo11558[1] = member_u63;
clo11558[2] = car;
clo11558[3] = x;
clo11558[4] = equal_u63;
clo11558[5] = lst;
clo11558[6] = kont8384;
clo11558[7] = cdr;
void* f8388 = encode_clo(clo11558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8472_fptr() // lam8472 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8473 = arg_buffer[1];
//reading env and args
void* a8329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8327 = (decode_clo(env8473))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8473))[2];
//not do dummy comment
void* kont8389 = (decode_clo(env8473))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8389;
arg_buffer[3] = a8327;
arg_buffer[4] = a8329;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8472 = encode_clo(alloc_clo(lam8472_fptr, 0));

void* lam8474_fptr() // lam8474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8475 = arg_buffer[1];
//reading env and args
void* a8328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8327 = (decode_clo(env8475))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8475))[4];
//not do dummy comment
void* cons = (decode_clo(env8475))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8475))[2];
//not do dummy comment
void* kont8389 = (decode_clo(env8475))[1];

//creating new closure instance
void** clo11560 = alloc_clo(lam8472_fptr, 3);

//setting env list
clo11560[1] = kont8389;
clo11560[2] = reverse_u45helper;
clo11560[3] = a8327;
void* f8390 = encode_clo(clo11560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8390;
arg_buffer[3] = a8328;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8474 = encode_clo(alloc_clo(lam8474_fptr, 0));

void* lam8476_fptr() // lam8476 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8477 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8477))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8477))[5];
//not do dummy comment
void* car = (decode_clo(env8477))[4];
//not do dummy comment
void* cons = (decode_clo(env8477))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8477))[2];
//not do dummy comment
void* kont8389 = (decode_clo(env8477))[1];

//creating new closure instance
void** clo11562 = alloc_clo(lam8474_fptr, 5);

//setting env list
clo11562[1] = kont8389;
clo11562[2] = reverse_u45helper;
clo11562[3] = cons;
clo11562[4] = lst2;
clo11562[5] = a8327;
void* f8391 = encode_clo(clo11562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8391;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8476 = encode_clo(alloc_clo(lam8476_fptr, 0));

void* lam8478_fptr() // lam8478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8479 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8479))[7];
//not do dummy comment
void* lst = (decode_clo(env8479))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8479))[5];
//not do dummy comment
void* car = (decode_clo(env8479))[4];
//not do dummy comment
void* cons = (decode_clo(env8479))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8479))[2];
//not do dummy comment
void* kont8389 = (decode_clo(env8479))[1];

//if-clause
bool if_guard11563 = is_true(a8326);
if(if_guard11563)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8389);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8389))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11565 = alloc_clo(lam8476_fptr, 6);

//setting env list
clo11565[1] = kont8389;
clo11565[2] = reverse_u45helper;
clo11565[3] = cons;
clo11565[4] = car;
clo11565[5] = lst2;
clo11565[6] = lst;
void* f8392 = encode_clo(clo11565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8478 = encode_clo(alloc_clo(lam8478_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8480 = arg_buffer[1];
//reading env and args
void* kont8389 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11567 = alloc_clo(lam8478_fptr, 7);

//setting env list
clo11567[1] = kont8389;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo11567[2] = reverse_u45helper;
clo11567[3] = cons;
clo11567[4] = car;
clo11567[5] = lst2;
clo11567[6] = lst;
clo11567[7] = cdr;
void* f8393 = encode_clo(clo11567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8481_fptr() // lam8481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8482 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8482))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8482))[2];
//not do dummy comment
void* kont8394 = (decode_clo(env8482))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8394;
arg_buffer[3] = lst;
arg_buffer[4] = a8330;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8481 = encode_clo(alloc_clo(lam8481_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8483 = arg_buffer[1];
//reading env and args
void* kont8394 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11569 = alloc_clo(lam8481_fptr, 3);

//setting env list
clo11569[1] = kont8394;
clo11569[2] = reverse_u45helper;
clo11569[3] = lst;
void* f8395 = encode_clo(clo11569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8395;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8484_fptr() // lam8484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8485 = arg_buffer[1];
//reading env and args
void* xy8333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8396 = (decode_clo(env8485))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8396);
arg_buffer[2] = xy8333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8396))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8484 = encode_clo(alloc_clo(lam8484_fptr, 0));

void* lam8486_fptr() // lam8486 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8487 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8334 = (decode_clo(env8487))[4];
//not do dummy comment
void* a8336 = (decode_clo(env8487))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8487))[2];
//not do dummy comment
void* kont8396 = (decode_clo(env8487))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8396;
arg_buffer[3] = a8334;
arg_buffer[4] = a8336;
arg_buffer[5] = a8338;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8486 = encode_clo(alloc_clo(lam8486_fptr, 0));

void* lam8488_fptr() // lam8488 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8489 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8334 = (decode_clo(env8489))[6];
//not do dummy comment
void* a8336 = (decode_clo(env8489))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8489))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8489))[3];
//not do dummy comment
void* cons = (decode_clo(env8489))[2];
//not do dummy comment
void* kont8396 = (decode_clo(env8489))[1];

//creating new closure instance
void** clo11571 = alloc_clo(lam8486_fptr, 4);

//setting env list
clo11571[1] = kont8396;
clo11571[2] = take_u45helper;
clo11571[3] = a8336;
clo11571[4] = a8334;
void* f8398 = encode_clo(clo11571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8398;
arg_buffer[3] = a8337;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8488 = encode_clo(alloc_clo(lam8488_fptr, 0));

void* lam8490_fptr() // lam8490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8491 = arg_buffer[1];
//reading env and args
void* a8336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8334 = (decode_clo(env8491))[7];
//not do dummy comment
void* lst = (decode_clo(env8491))[6];
//not do dummy comment
void* car = (decode_clo(env8491))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8491))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8491))[3];
//not do dummy comment
void* cons = (decode_clo(env8491))[2];
//not do dummy comment
void* kont8396 = (decode_clo(env8491))[1];

//creating new closure instance
void** clo11573 = alloc_clo(lam8488_fptr, 6);

//setting env list
clo11573[1] = kont8396;
clo11573[2] = cons;
clo11573[3] = lst2;
clo11573[4] = take_u45helper;
clo11573[5] = a8336;
clo11573[6] = a8334;
void* f8399 = encode_clo(clo11573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8490 = encode_clo(alloc_clo(lam8490_fptr, 0));

void* lam8493_fptr() // lam8493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8494 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8494))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8494))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8494))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8494))[5];
//not do dummy comment
void* n = (decode_clo(env8494))[4];
//not do dummy comment
void* car = (decode_clo(env8494))[3];
//not do dummy comment
void* cons = (decode_clo(env8494))[2];
//not do dummy comment
void* kont8396 = (decode_clo(env8494))[1];
mpz_t* mpzvar11574 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11574, "1", 10);
void* a8335 = encode_mpz(mpzvar11574);

//creating new closure instance
void** clo11576 = alloc_clo(lam8490_fptr, 7);

//setting env list
clo11576[1] = kont8396;
clo11576[2] = cons;
clo11576[3] = lst2;
clo11576[4] = take_u45helper;
clo11576[5] = car;
clo11576[6] = lst;
clo11576[7] = a8334;
void* f8400 = encode_clo(clo11576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8400;
arg_buffer[3] = n;
arg_buffer[4] = a8335;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8493 = encode_clo(alloc_clo(lam8493_fptr, 0));

void* lam8495_fptr() // lam8495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8496 = arg_buffer[1];
//reading env and args
void* a8332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8496))[10];
//not do dummy comment
void* lst = (decode_clo(env8496))[9];
//not do dummy comment
void* reverse = (decode_clo(env8496))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8496))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8496))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8496))[5];
//not do dummy comment
void* n = (decode_clo(env8496))[4];
//not do dummy comment
void* car = (decode_clo(env8496))[3];
//not do dummy comment
void* cons = (decode_clo(env8496))[2];
//not do dummy comment
void* kont8396 = (decode_clo(env8496))[1];

//if-clause
bool if_guard11577 = is_true(a8332);
if(if_guard11577)
{

//creating new closure instance
void** clo11579 = alloc_clo(lam8484_fptr, 1);

//setting env list
clo11579[1] = kont8396;
void* f8397 = encode_clo(clo11579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8397;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11581 = alloc_clo(lam8493_fptr, 8);

//setting env list
clo11581[1] = kont8396;
clo11581[2] = cons;
clo11581[3] = car;
clo11581[4] = n;
clo11581[5] = lst2;
clo11581[6] = take_u45helper;
clo11581[7] = _u45;
clo11581[8] = lst;
void* f8401 = encode_clo(clo11581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8495 = encode_clo(alloc_clo(lam8495_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8498 = arg_buffer[1];
//reading env and args
void* kont8396 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar11582 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11582, "0", 10);
void* a8331 = encode_mpz(mpzvar11582);

//creating new closure instance
void** clo11584 = alloc_clo(lam8495_fptr, 10);

//setting env list
clo11584[1] = kont8396;
clo11584[2] = cons;
clo11584[3] = car;
clo11584[4] = n;
clo11584[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo11584[6] = take_u45helper;
clo11584[7] = _u45;
clo11584[8] = reverse;
clo11584[9] = lst;
clo11584[10] = cdr;
void* f8402 = encode_clo(clo11584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8402;
arg_buffer[3] = n;
arg_buffer[4] = a8331;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8499_fptr() // lam8499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8500 = arg_buffer[1];
//reading env and args
void* a8339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8500))[4];
//not do dummy comment
void* kont8403 = (decode_clo(env8500))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8500))[2];
//not do dummy comment
void* n = (decode_clo(env8500))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8403;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8339;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8499 = encode_clo(alloc_clo(lam8499_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8501 = arg_buffer[1];
//reading env and args
void* kont8403 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11586 = alloc_clo(lam8499_fptr, 4);

//setting env list
clo11586[1] = n;
clo11586[2] = take_u45helper;
clo11586[3] = kont8403;
clo11586[4] = lst;
void* f8404 = encode_clo(clo11586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8405 = (decode_clo(env8504))[3];
//not do dummy comment
void* a8342 = (decode_clo(env8504))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8405;
arg_buffer[3] = a8342;
arg_buffer[4] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void* lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8506))[4];
//not do dummy comment
void* kont8405 = (decode_clo(env8506))[3];
//not do dummy comment
void* a8342 = (decode_clo(env8506))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8506))[1];

//creating new closure instance
void** clo11588 = alloc_clo(lam8503_fptr, 3);

//setting env list
clo11588[1] = _u43;
clo11588[2] = a8342;
clo11588[3] = kont8405;
void* f8406 = encode_clo(clo11588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8406;
arg_buffer[3] = a8343;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void* lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8509))[5];
//not do dummy comment
void* lst = (decode_clo(env8509))[4];
//not do dummy comment
void* length = (decode_clo(env8509))[3];
//not do dummy comment
void* kont8405 = (decode_clo(env8509))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8509))[1];

//if-clause
bool if_guard11589 = is_true(a8340);
if(if_guard11589)
{
mpz_t* mpzvar11590 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11590, "0", 10);
void* xy8341 = encode_mpz(mpzvar11590);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8405);
arg_buffer[2] = xy8341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8405))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar11591 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11591, "1", 10);
void* a8342 = encode_mpz(mpzvar11591);

//creating new closure instance
void** clo11593 = alloc_clo(lam8505_fptr, 4);

//setting env list
clo11593[1] = _u43;
clo11593[2] = a8342;
clo11593[3] = kont8405;
clo11593[4] = length;
void* f8407 = encode_clo(clo11593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8407;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8510 = arg_buffer[1];
//reading env and args
void* kont8405 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11595 = alloc_clo(lam8508_fptr, 5);

//setting env list
clo11595[1] = _u43;
clo11595[2] = kont8405;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo11595[3] = length;
clo11595[4] = lst;
clo11595[5] = cdr;
void* f8408 = encode_clo(clo11595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8511_fptr() // lam8511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* xy8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8409 = (decode_clo(env8512))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8409);
arg_buffer[2] = xy8346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8409))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void* lam8513_fptr() // lam8513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8514 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8409 = (decode_clo(env8514))[3];
//not do dummy comment
void* a8348 = (decode_clo(env8514))[2];
//not do dummy comment
void* cons = (decode_clo(env8514))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8409;
arg_buffer[3] = a8348;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void* lam8515_fptr() // lam8515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8516 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8516))[5];
//not do dummy comment
void* proc = (decode_clo(env8516))[4];
//not do dummy comment
void* kont8409 = (decode_clo(env8516))[3];
//not do dummy comment
void* a8348 = (decode_clo(env8516))[2];
//not do dummy comment
void* cons = (decode_clo(env8516))[1];

//creating new closure instance
void** clo11597 = alloc_clo(lam8513_fptr, 3);

//setting env list
clo11597[1] = cons;
clo11597[2] = a8348;
clo11597[3] = kont8409;
void* f8411 = encode_clo(clo11597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8411;
arg_buffer[3] = proc;
arg_buffer[4] = a8349;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8518))[6];
//not do dummy comment
void* lst = (decode_clo(env8518))[5];
//not do dummy comment
void* map = (decode_clo(env8518))[4];
//not do dummy comment
void* cons = (decode_clo(env8518))[3];
//not do dummy comment
void* proc = (decode_clo(env8518))[2];
//not do dummy comment
void* kont8409 = (decode_clo(env8518))[1];

//creating new closure instance
void** clo11599 = alloc_clo(lam8515_fptr, 5);

//setting env list
clo11599[1] = cons;
clo11599[2] = a8348;
clo11599[3] = kont8409;
clo11599[4] = proc;
clo11599[5] = map;
void* f8412 = encode_clo(clo11599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void* lam8519_fptr() // lam8519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* a8347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8520))[6];
//not do dummy comment
void* lst = (decode_clo(env8520))[5];
//not do dummy comment
void* map = (decode_clo(env8520))[4];
//not do dummy comment
void* cons = (decode_clo(env8520))[3];
//not do dummy comment
void* proc = (decode_clo(env8520))[2];
//not do dummy comment
void* kont8409 = (decode_clo(env8520))[1];

//creating new closure instance
void** clo11601 = alloc_clo(lam8517_fptr, 6);

//setting env list
clo11601[1] = kont8409;
clo11601[2] = proc;
clo11601[3] = cons;
clo11601[4] = map;
clo11601[5] = lst;
clo11601[6] = cdr;
void* f8413 = encode_clo(clo11601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8413;
arg_buffer[3] = a8347;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void* lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8522))[8];
//not do dummy comment
void* map = (decode_clo(env8522))[7];
//not do dummy comment
void* car = (decode_clo(env8522))[6];
//not do dummy comment
void* cons = (decode_clo(env8522))[5];
//not do dummy comment
void* list = (decode_clo(env8522))[4];
//not do dummy comment
void* cdr = (decode_clo(env8522))[3];
//not do dummy comment
void* proc = (decode_clo(env8522))[2];
//not do dummy comment
void* kont8409 = (decode_clo(env8522))[1];

//if-clause
bool if_guard11602 = is_true(a8345);
if(if_guard11602)
{

//creating new closure instance
void** clo11604 = alloc_clo(lam8511_fptr, 1);

//setting env list
clo11604[1] = kont8409;
void* f8410 = encode_clo(clo11604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11606 = alloc_clo(lam8519_fptr, 6);

//setting env list
clo11606[1] = kont8409;
clo11606[2] = proc;
clo11606[3] = cons;
clo11606[4] = map;
clo11606[5] = lst;
clo11606[6] = cdr;
void* f8414 = encode_clo(clo11606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8523 = arg_buffer[1];
//reading env and args
void* kont8409 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11608 = alloc_clo(lam8521_fptr, 8);

//setting env list
clo11608[1] = kont8409;
clo11608[2] = proc;
clo11608[3] = cdr;
clo11608[4] = list;
clo11608[5] = cons;
clo11608[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo11608[7] = map;
clo11608[8] = lst;
void* f8415 = encode_clo(clo11608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8415;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* xy8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8416 = (decode_clo(env8525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8416);
arg_buffer[2] = xy8352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8416))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8524 = encode_clo(alloc_clo(lam8524_fptr, 0));

void* lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8416 = (decode_clo(env8527))[3];
//not do dummy comment
void* a8355 = (decode_clo(env8527))[2];
//not do dummy comment
void* cons = (decode_clo(env8527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8416;
arg_buffer[3] = a8355;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void* lam8528_fptr() // lam8528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8416 = (decode_clo(env8529))[5];
//not do dummy comment
void* a8355 = (decode_clo(env8529))[4];
//not do dummy comment
void* op = (decode_clo(env8529))[3];
//not do dummy comment
void* filter = (decode_clo(env8529))[2];
//not do dummy comment
void* cons = (decode_clo(env8529))[1];

//creating new closure instance
void** clo11610 = alloc_clo(lam8526_fptr, 3);

//setting env list
clo11610[1] = cons;
clo11610[2] = a8355;
clo11610[3] = kont8416;
void* f8418 = encode_clo(clo11610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8418;
arg_buffer[3] = op;
arg_buffer[4] = a8356;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

void* lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8531))[6];
//not do dummy comment
void* kont8416 = (decode_clo(env8531))[5];
//not do dummy comment
void* lst = (decode_clo(env8531))[4];
//not do dummy comment
void* op = (decode_clo(env8531))[3];
//not do dummy comment
void* filter = (decode_clo(env8531))[2];
//not do dummy comment
void* cons = (decode_clo(env8531))[1];

//creating new closure instance
void** clo11612 = alloc_clo(lam8528_fptr, 5);

//setting env list
clo11612[1] = cons;
clo11612[2] = filter;
clo11612[3] = op;
clo11612[4] = a8355;
clo11612[5] = kont8416;
void* f8419 = encode_clo(clo11612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8419;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void* lam8532_fptr() // lam8532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8416 = (decode_clo(env8533))[3];
//not do dummy comment
void* op = (decode_clo(env8533))[2];
//not do dummy comment
void* filter = (decode_clo(env8533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8416;
arg_buffer[3] = op;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* lam8534_fptr() // lam8534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8535 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8535))[7];
//not do dummy comment
void* kont8416 = (decode_clo(env8535))[6];
//not do dummy comment
void* lst = (decode_clo(env8535))[5];
//not do dummy comment
void* op = (decode_clo(env8535))[4];
//not do dummy comment
void* cons = (decode_clo(env8535))[3];
//not do dummy comment
void* filter = (decode_clo(env8535))[2];
//not do dummy comment
void* car = (decode_clo(env8535))[1];

//if-clause
bool if_guard11613 = is_true(a8354);
if(if_guard11613)
{

//creating new closure instance
void** clo11615 = alloc_clo(lam8530_fptr, 6);

//setting env list
clo11615[1] = cons;
clo11615[2] = filter;
clo11615[3] = op;
clo11615[4] = lst;
clo11615[5] = kont8416;
clo11615[6] = cdr;
void* f8420 = encode_clo(clo11615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11617 = alloc_clo(lam8532_fptr, 3);

//setting env list
clo11617[1] = filter;
clo11617[2] = op;
clo11617[3] = kont8416;
void* f8421 = encode_clo(clo11617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void* lam8536_fptr() // lam8536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8537))[7];
//not do dummy comment
void* kont8416 = (decode_clo(env8537))[6];
//not do dummy comment
void* lst = (decode_clo(env8537))[5];
//not do dummy comment
void* op = (decode_clo(env8537))[4];
//not do dummy comment
void* cons = (decode_clo(env8537))[3];
//not do dummy comment
void* filter = (decode_clo(env8537))[2];
//not do dummy comment
void* car = (decode_clo(env8537))[1];

//creating new closure instance
void** clo11619 = alloc_clo(lam8534_fptr, 7);

//setting env list
clo11619[1] = car;
clo11619[2] = filter;
clo11619[3] = cons;
clo11619[4] = op;
clo11619[5] = lst;
clo11619[6] = kont8416;
clo11619[7] = cdr;
void* f8422 = encode_clo(clo11619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8422;
arg_buffer[3] = a8353;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void* lam8538_fptr() // lam8538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8416 = (decode_clo(env8539))[8];
//not do dummy comment
void* lst = (decode_clo(env8539))[7];
//not do dummy comment
void* op = (decode_clo(env8539))[6];
//not do dummy comment
void* cons = (decode_clo(env8539))[5];
//not do dummy comment
void* list = (decode_clo(env8539))[4];
//not do dummy comment
void* cdr = (decode_clo(env8539))[3];
//not do dummy comment
void* filter = (decode_clo(env8539))[2];
//not do dummy comment
void* car = (decode_clo(env8539))[1];

//if-clause
bool if_guard11620 = is_true(a8351);
if(if_guard11620)
{

//creating new closure instance
void** clo11622 = alloc_clo(lam8524_fptr, 1);

//setting env list
clo11622[1] = kont8416;
void* f8417 = encode_clo(clo11622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11624 = alloc_clo(lam8536_fptr, 7);

//setting env list
clo11624[1] = car;
clo11624[2] = filter;
clo11624[3] = cons;
clo11624[4] = op;
clo11624[5] = lst;
clo11624[6] = kont8416;
clo11624[7] = cdr;
void* f8423 = encode_clo(clo11624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8423;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8540 = arg_buffer[1];
//reading env and args
void* kont8416 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11626 = alloc_clo(lam8538_fptr, 8);

//setting env list
clo11626[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo11626[2] = filter;
clo11626[3] = cdr;
clo11626[4] = list;
clo11626[5] = cons;
clo11626[6] = op;
clo11626[7] = lst;
clo11626[8] = kont8416;
void* f8424 = encode_clo(clo11626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8542))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8542))[2];
//not do dummy comment
void* kont8425 = (decode_clo(env8542))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8425;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void* lam8544_fptr() // lam8544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8545))[4];
//not do dummy comment
void* kont8425 = (decode_clo(env8545))[3];
//not do dummy comment
void* n = (decode_clo(env8545))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8545))[1];
mpz_t* mpzvar11627 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11627, "1", 10);
void* a8362 = encode_mpz(mpzvar11627);

//creating new closure instance
void** clo11629 = alloc_clo(lam8541_fptr, 3);

//setting env list
clo11629[1] = kont8425;
clo11629[2] = a8361;
clo11629[3] = drop;
void* f8426 = encode_clo(clo11629);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8426;
arg_buffer[3] = n;
arg_buffer[4] = a8362;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* lam8546_fptr() // lam8546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8547))[6];
//not do dummy comment
void* kont8425 = (decode_clo(env8547))[5];
//not do dummy comment
void* n = (decode_clo(env8547))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8547))[3];
//not do dummy comment
void* lst = (decode_clo(env8547))[2];
//not do dummy comment
void* drop = (decode_clo(env8547))[1];

//if-clause
bool if_guard11630 = is_true(a8360);
if(if_guard11630)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11632 = alloc_clo(lam8544_fptr, 4);

//setting env list
clo11632[1] = _u45;
clo11632[2] = n;
clo11632[3] = kont8425;
clo11632[4] = drop;
void* f8427 = encode_clo(clo11632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8549 = arg_buffer[1];
//reading env and args
void* kont8425 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar11633 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11633, "0", 10);
void* a8359 = encode_mpz(mpzvar11633);

//creating new closure instance
void** clo11635 = alloc_clo(lam8546_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo11635[1] = drop;
clo11635[2] = lst;
clo11635[3] = _u45;
clo11635[4] = n;
clo11635[5] = kont8425;
clo11635[6] = cdr;
void* f8428 = encode_clo(clo11635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8428;
arg_buffer[3] = n;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8366 = (decode_clo(env8551))[4];
//not do dummy comment
void* fun = (decode_clo(env8551))[3];
//not do dummy comment
void* foldl = (decode_clo(env8551))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8429;
arg_buffer[3] = fun;
arg_buffer[4] = a8366;
arg_buffer[5] = a8367;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void* lam8552_fptr() // lam8552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8553))[5];
//not do dummy comment
void* lst = (decode_clo(env8553))[4];
//not do dummy comment
void* fun = (decode_clo(env8553))[3];
//not do dummy comment
void* foldl = (decode_clo(env8553))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8553))[1];

//creating new closure instance
void** clo11637 = alloc_clo(lam8550_fptr, 4);

//setting env list
clo11637[1] = kont8429;
clo11637[2] = foldl;
clo11637[3] = fun;
clo11637[4] = a8366;
void* f8430 = encode_clo(clo11637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void* lam8554_fptr() // lam8554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8555))[6];
//not do dummy comment
void* lst = (decode_clo(env8555))[5];
//not do dummy comment
void* fun = (decode_clo(env8555))[4];
//not do dummy comment
void* acc = (decode_clo(env8555))[3];
//not do dummy comment
void* foldl = (decode_clo(env8555))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8555))[1];

//creating new closure instance
void** clo11639 = alloc_clo(lam8552_fptr, 5);

//setting env list
clo11639[1] = kont8429;
clo11639[2] = foldl;
clo11639[3] = fun;
clo11639[4] = lst;
clo11639[5] = cdr;
void* f8431 = encode_clo(clo11639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8431;
arg_buffer[3] = a8365;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void* lam8556_fptr() // lam8556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8557 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8557))[7];
//not do dummy comment
void* lst = (decode_clo(env8557))[6];
//not do dummy comment
void* fun = (decode_clo(env8557))[5];
//not do dummy comment
void* acc = (decode_clo(env8557))[4];
//not do dummy comment
void* car = (decode_clo(env8557))[3];
//not do dummy comment
void* foldl = (decode_clo(env8557))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8557))[1];

//if-clause
bool if_guard11640 = is_true(a8364);
if(if_guard11640)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8429);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8429))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11642 = alloc_clo(lam8554_fptr, 6);

//setting env list
clo11642[1] = kont8429;
clo11642[2] = foldl;
clo11642[3] = acc;
clo11642[4] = fun;
clo11642[5] = lst;
clo11642[6] = cdr;
void* f8432 = encode_clo(clo11642);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8558 = arg_buffer[1];
//reading env and args
void* kont8429 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11644 = alloc_clo(lam8556_fptr, 7);

//setting env list
clo11644[1] = kont8429;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo11644[2] = foldl;
clo11644[3] = car;
clo11644[4] = acc;
clo11644[5] = fun;
clo11644[6] = lst;
clo11644[7] = cdr;
void* f8433 = encode_clo(clo11644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8559_fptr() // lam8559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8369 = (decode_clo(env8560))[3];
//not do dummy comment
void* kont8434 = (decode_clo(env8560))[2];
//not do dummy comment
void* fun = (decode_clo(env8560))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8434;
arg_buffer[3] = a8369;
arg_buffer[4] = a8371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void* lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8369 = (decode_clo(env8562))[5];
//not do dummy comment
void* fun = (decode_clo(env8562))[4];
//not do dummy comment
void* acc = (decode_clo(env8562))[3];
//not do dummy comment
void* foldr = (decode_clo(env8562))[2];
//not do dummy comment
void* kont8434 = (decode_clo(env8562))[1];

//creating new closure instance
void** clo11646 = alloc_clo(lam8559_fptr, 3);

//setting env list
clo11646[1] = fun;
clo11646[2] = kont8434;
clo11646[3] = a8369;
void* f8435 = encode_clo(clo11646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8435;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8370;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* lam8563_fptr() // lam8563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8564))[6];
//not do dummy comment
void* fun = (decode_clo(env8564))[5];
//not do dummy comment
void* acc = (decode_clo(env8564))[4];
//not do dummy comment
void* kont8434 = (decode_clo(env8564))[3];
//not do dummy comment
void* foldr = (decode_clo(env8564))[2];
//not do dummy comment
void* lst = (decode_clo(env8564))[1];

//creating new closure instance
void** clo11648 = alloc_clo(lam8561_fptr, 5);

//setting env list
clo11648[1] = kont8434;
clo11648[2] = foldr;
clo11648[3] = acc;
clo11648[4] = fun;
clo11648[5] = a8369;
void* f8436 = encode_clo(clo11648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8566))[7];
//not do dummy comment
void* fun = (decode_clo(env8566))[6];
//not do dummy comment
void* acc = (decode_clo(env8566))[5];
//not do dummy comment
void* car = (decode_clo(env8566))[4];
//not do dummy comment
void* kont8434 = (decode_clo(env8566))[3];
//not do dummy comment
void* foldr = (decode_clo(env8566))[2];
//not do dummy comment
void* lst = (decode_clo(env8566))[1];

//if-clause
bool if_guard11649 = is_true(a8368);
if(if_guard11649)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8434);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11651 = alloc_clo(lam8563_fptr, 6);

//setting env list
clo11651[1] = lst;
clo11651[2] = foldr;
clo11651[3] = kont8434;
clo11651[4] = acc;
clo11651[5] = fun;
clo11651[6] = cdr;
void* f8437 = encode_clo(clo11651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8567 = arg_buffer[1];
//reading env and args
void* kont8434 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11653 = alloc_clo(lam8565_fptr, 7);

//setting env list
clo11653[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo11653[2] = foldr;
clo11653[3] = kont8434;
clo11653[4] = car;
clo11653[5] = acc;
clo11653[6] = fun;
clo11653[7] = cdr;
void* f8438 = encode_clo(clo11653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8373 = (decode_clo(env8569))[3];
//not do dummy comment
void* kont8439 = (decode_clo(env8569))[2];
//not do dummy comment
void* cons = (decode_clo(env8569))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8439;
arg_buffer[3] = a8373;
arg_buffer[4] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void* lam8570_fptr() // lam8570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8373 = (decode_clo(env8571))[5];
//not do dummy comment
void* append = (decode_clo(env8571))[4];
//not do dummy comment
void* kont8439 = (decode_clo(env8571))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8571))[2];
//not do dummy comment
void* cons = (decode_clo(env8571))[1];

//creating new closure instance
void** clo11655 = alloc_clo(lam8568_fptr, 3);

//setting env list
clo11655[1] = cons;
clo11655[2] = kont8439;
clo11655[3] = a8373;
void* f8440 = encode_clo(clo11655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8440;
arg_buffer[3] = a8374;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* lam8572_fptr() // lam8572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8573))[6];
//not do dummy comment
void* append = (decode_clo(env8573))[5];
//not do dummy comment
void* kont8439 = (decode_clo(env8573))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8573))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8573))[2];
//not do dummy comment
void* cons = (decode_clo(env8573))[1];

//creating new closure instance
void** clo11657 = alloc_clo(lam8570_fptr, 5);

//setting env list
clo11657[1] = cons;
clo11657[2] = lst2;
clo11657[3] = kont8439;
clo11657[4] = append;
clo11657[5] = a8373;
void* f8441 = encode_clo(clo11657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8441;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void* lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8575))[7];
//not do dummy comment
void* append = (decode_clo(env8575))[6];
//not do dummy comment
void* kont8439 = (decode_clo(env8575))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8575))[4];
//not do dummy comment
void* cons = (decode_clo(env8575))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8575))[2];
//not do dummy comment
void* car = (decode_clo(env8575))[1];

//if-clause
bool if_guard11658 = is_true(a8372);
if(if_guard11658)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8439);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11660 = alloc_clo(lam8572_fptr, 6);

//setting env list
clo11660[1] = cons;
clo11660[2] = lst1;
clo11660[3] = lst2;
clo11660[4] = kont8439;
clo11660[5] = append;
clo11660[6] = cdr;
void* f8442 = encode_clo(clo11660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8442;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8576 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11662 = alloc_clo(lam8574_fptr, 7);

//setting env list
clo11662[1] = car;
clo11662[2] = lst1;
clo11662[3] = cons;
clo11662[4] = lst2;
clo11662[5] = kont8439;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo11662[6] = append;
clo11662[7] = cdr;
void* f8443 = encode_clo(clo11662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8443;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8577_fptr() // lam8577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8578))[2];
//not do dummy comment
void* sqrt = (decode_clo(env8578))[1];
void* cps_u45lst8445 = prim_cons(kont8444, a8377);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(sqrt);
arg_buffer[2] = cps_u45lst8445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(sqrt))[0]);
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8580 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar11663 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar11663, "24.0", 10);
void* a8376 = encode_mpf(mpfvar11663);

//creating new closure instance
void** clo11665 = alloc_clo(lam8577_fptr, 2);

//setting env list
clo11665[1] = sqrt_brouhaha;
clo11665[2] = kont8444;
void* f8446 = encode_clo(clo11665);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8446;
arg_buffer[3] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* xy8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8582))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[2] = xy8378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8583 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo11667 = alloc_clo(lam8581_fptr, 1);

//setting env list
clo11667[1] = kont8447;
void* f8448 = encode_clo(clo11667);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
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

