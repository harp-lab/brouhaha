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
void* _env11337 = arg_buffer[1];
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

void* kont11335 = prim_car(lst);
void* lst11338 = prim_cdr(lst);
void* x11336 = apply_prim__u43(lst11338);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11335);
arg_buffer[2] = x11336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11335))[0]);
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
void* _env11341 = arg_buffer[1];
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

void* kont11339 = prim_car(lst);
void* lst11342 = prim_cdr(lst);
void* x11340 = apply_prim__u45(lst11342);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11339);
arg_buffer[2] = x11340;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11339))[0]);
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
void* _env11345 = arg_buffer[1];
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

void* kont11343 = prim_car(lst);
void* lst11346 = prim_cdr(lst);
void* x11344 = apply_prim__u42(lst11346);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11343);
arg_buffer[2] = x11344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11343))[0]);
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
void* _env11349 = arg_buffer[1];
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

void* kont11347 = prim_car(lst);
void* lst11350 = prim_cdr(lst);
void* x11348 = apply_prim__u47(lst11350);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11347);
arg_buffer[2] = x11348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11347))[0]);
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
void* _env11353 = arg_buffer[1];
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

void* kont11351 = prim_car(lst);
void* lst11354 = prim_cdr(lst);
void* x11352 = apply_prim__u61(lst11354);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11351);
arg_buffer[2] = x11352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11351))[0]);
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
void* _env11357 = arg_buffer[1];
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

void* kont11355 = prim_car(lst);
void* lst11358 = prim_cdr(lst);
void* x11356 = apply_prim__u62(lst11358);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11355);
arg_buffer[2] = x11356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11355))[0]);
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
void* _env11361 = arg_buffer[1];
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

void* kont11359 = prim_car(lst);
void* lst11362 = prim_cdr(lst);
void* x11360 = apply_prim__u60(lst11362);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11359);
arg_buffer[2] = x11360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11359))[0]);
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
void* _env11365 = arg_buffer[1];
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

void* kont11363 = prim_car(lst);
void* lst11366 = prim_cdr(lst);
void* x11364 = apply_prim__u60_u61(lst11366);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11363);
arg_buffer[2] = x11364;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11363))[0]);
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
void* _env11369 = arg_buffer[1];
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

void* kont11367 = prim_car(lst);
void* lst11370 = prim_cdr(lst);
void* x11368 = apply_prim__u62_u61(lst11370);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11367);
arg_buffer[2] = x11368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11367))[0]);
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
void* _env11373 = arg_buffer[1];
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

void* kont11371 = prim_car(lst);
void* lst11374 = prim_cdr(lst);
void* x11372 = apply_prim_modulo(lst11374);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11371);
arg_buffer[2] = x11372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11371))[0]);
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
void* _env11377 = arg_buffer[1];
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

void* kont11375 = prim_car(lst);
void* lst11378 = prim_cdr(lst);
void* x11376 = apply_prim_null_u63(lst11378);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11375);
arg_buffer[2] = x11376;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11375))[0]);
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
void* _env11381 = arg_buffer[1];
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

void* kont11379 = prim_car(lst);
void* lst11382 = prim_cdr(lst);
void* x11380 = apply_prim_equal_u63(lst11382);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11379);
arg_buffer[2] = x11380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11379))[0]);
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
void* _env11385 = arg_buffer[1];
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

void* kont11383 = prim_car(lst);
void* lst11386 = prim_cdr(lst);
void* x11384 = apply_prim_eq_u63(lst11386);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11383);
arg_buffer[2] = x11384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11383))[0]);
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
void* _env11389 = arg_buffer[1];
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

void* kont11387 = prim_car(lst);
void* lst11390 = prim_cdr(lst);
void* x11388 = apply_prim_cons(lst11390);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11387);
arg_buffer[2] = x11388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11387))[0]);
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
void* _env11393 = arg_buffer[1];
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

void* kont11391 = prim_car(lst);
void* lst11394 = prim_cdr(lst);
void* x11392 = apply_prim_car(lst11394);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11391);
arg_buffer[2] = x11392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11391))[0]);
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
void* _env11397 = arg_buffer[1];
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

void* kont11395 = prim_car(lst);
void* lst11398 = prim_cdr(lst);
void* x11396 = apply_prim_cdr(lst11398);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11395);
arg_buffer[2] = x11396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11395))[0]);
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
void* _env11401 = arg_buffer[1];
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

void* kont11399 = prim_car(lst);
void* lst11402 = prim_cdr(lst);
void* x11400 = apply_prim_float_u45_u62int(lst11402);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11399);
arg_buffer[2] = x11400;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11399))[0]);
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
void* _env11405 = arg_buffer[1];
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

void* kont11403 = prim_car(lst);
void* lst11406 = prim_cdr(lst);
void* x11404 = apply_prim_int_u45_u62float(lst11406);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11403);
arg_buffer[2] = x11404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11403))[0]);
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
void* _env11409 = arg_buffer[1];
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

void* kont11407 = prim_car(lst);
void* lst11410 = prim_cdr(lst);
void* x11408 = apply_prim_hash(lst11410);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11407);
arg_buffer[2] = x11408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11407))[0]);
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
void* _env11413 = arg_buffer[1];
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

void* kont11411 = prim_car(lst);
void* lst11414 = prim_cdr(lst);
void* x11412 = apply_prim_hash_u45ref(lst11414);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11411);
arg_buffer[2] = x11412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11411))[0]);
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
void* _env11417 = arg_buffer[1];
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

void* kont11415 = prim_car(lst);
void* lst11418 = prim_cdr(lst);
void* x11416 = apply_prim_hash_u45set(lst11418);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11415);
arg_buffer[2] = x11416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11415))[0]);
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
void* _env11421 = arg_buffer[1];
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

void* kont11419 = prim_car(lst);
void* lst11422 = prim_cdr(lst);
void* x11420 = apply_prim_hash_u45keys(lst11422);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11419);
arg_buffer[2] = x11420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11419))[0]);
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
void* _env11425 = arg_buffer[1];
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

void* kont11423 = prim_car(lst);
void* lst11426 = prim_cdr(lst);
void* x11424 = apply_prim_hash_u45has_u45key_u63(lst11426);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11423);
arg_buffer[2] = x11424;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11423))[0]);
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
void* _env11429 = arg_buffer[1];
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

void* kont11427 = prim_car(lst);
void* lst11430 = prim_cdr(lst);
void* x11428 = apply_prim_hash_u45count(lst11430);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11427);
arg_buffer[2] = x11428;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11427))[0]);
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
void* _env11433 = arg_buffer[1];
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

void* kont11431 = prim_car(lst);
void* lst11434 = prim_cdr(lst);
void* x11432 = apply_prim_set(lst11434);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11431);
arg_buffer[2] = x11432;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11431))[0]);
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
void* _env11437 = arg_buffer[1];
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

void* kont11435 = prim_car(lst);
void* lst11438 = prim_cdr(lst);
void* x11436 = apply_prim_set_u45_u62list(lst11438);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11435);
arg_buffer[2] = x11436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11435))[0]);
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
void* _env11441 = arg_buffer[1];
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

void* kont11439 = prim_car(lst);
void* lst11442 = prim_cdr(lst);
void* x11440 = apply_prim_list_u45_u62set(lst11442);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11439);
arg_buffer[2] = x11440;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11439))[0]);
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
void* _env11445 = arg_buffer[1];
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

void* kont11443 = prim_car(lst);
void* lst11446 = prim_cdr(lst);
void* x11444 = apply_prim_set_u45add(lst11446);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11443);
arg_buffer[2] = x11444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11443))[0]);
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
void* _env11449 = arg_buffer[1];
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

void* kont11447 = prim_car(lst);
void* lst11450 = prim_cdr(lst);
void* x11448 = apply_prim_set_u45member_u63(lst11450);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11447);
arg_buffer[2] = x11448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11447))[0]);
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
void* _env11453 = arg_buffer[1];
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

void* kont11451 = prim_car(lst);
void* lst11454 = prim_cdr(lst);
void* x11452 = apply_prim_set_u45remove(lst11454);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11451);
arg_buffer[2] = x11452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11451))[0]);
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
void* _env11457 = arg_buffer[1];
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

void* kont11455 = prim_car(lst);
void* lst11458 = prim_cdr(lst);
void* x11456 = apply_prim_set_u45count(lst11458);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11455);
arg_buffer[2] = x11456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11455))[0]);
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
void* _env11461 = arg_buffer[1];
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

void* kont11459 = prim_car(lst);
void* lst11462 = prim_cdr(lst);
void* x11460 = apply_prim_string_u63(lst11462);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11459);
arg_buffer[2] = x11460;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11459))[0]);
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
void* _env11465 = arg_buffer[1];
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

void* kont11463 = prim_car(lst);
void* lst11466 = prim_cdr(lst);
void* x11464 = apply_prim_string_u45length(lst11466);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11463);
arg_buffer[2] = x11464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11463))[0]);
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
void* _env11469 = arg_buffer[1];
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

void* kont11467 = prim_car(lst);
void* lst11470 = prim_cdr(lst);
void* x11468 = apply_prim_string_u45ref(lst11470);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11467);
arg_buffer[2] = x11468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11467))[0]);
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
void* _env11473 = arg_buffer[1];
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

void* kont11471 = prim_car(lst);
void* lst11474 = prim_cdr(lst);
void* x11472 = apply_prim_substring(lst11474);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11471);
arg_buffer[2] = x11472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11471))[0]);
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
void* _env11477 = arg_buffer[1];
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

void* kont11475 = prim_car(lst);
void* lst11478 = prim_cdr(lst);
void* x11476 = apply_prim_string_u45append(lst11478);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11475);
arg_buffer[2] = x11476;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11475))[0]);
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
void* _env11481 = arg_buffer[1];
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

void* kont11479 = prim_car(lst);
void* lst11482 = prim_cdr(lst);
void* x11480 = apply_prim_string_u45_u62list(lst11482);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11479);
arg_buffer[2] = x11480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11479))[0]);
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
void* _env11485 = arg_buffer[1];
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

void* kont11483 = prim_car(lst);
void* lst11486 = prim_cdr(lst);
void* x11484 = apply_prim_exact_u45floor(lst11486);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11483);
arg_buffer[2] = x11484;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11483))[0]);
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
void* _env11489 = arg_buffer[1];
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

void* kont11487 = prim_car(lst);
void* lst11490 = prim_cdr(lst);
void* x11488 = apply_prim_exact_u45ceiling(lst11490);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11487);
arg_buffer[2] = x11488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11487))[0]);
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
void* _env11493 = arg_buffer[1];
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

void* kont11491 = prim_car(lst);
void* lst11494 = prim_cdr(lst);
void* x11492 = apply_prim_exact_u45round(lst11494);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11491);
arg_buffer[2] = x11492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11491))[0]);
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
void* _env11497 = arg_buffer[1];
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

void* kont11495 = prim_car(lst);
void* lst11498 = prim_cdr(lst);
void* x11496 = apply_prim_absolute(lst11498);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11495);
arg_buffer[2] = x11496;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11495))[0]);
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
void* _env11501 = arg_buffer[1];
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

void* kont11499 = prim_car(lst);
void* lst11502 = prim_cdr(lst);
void* x11500 = apply_prim_max(lst11502);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11499);
arg_buffer[2] = x11500;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11499))[0]);
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
void* _env11505 = arg_buffer[1];
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

void* kont11503 = prim_car(lst);
void* lst11506 = prim_cdr(lst);
void* x11504 = apply_prim_min(lst11506);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11503);
arg_buffer[2] = x11504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11503))[0]);
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
void* _env11509 = arg_buffer[1];
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

void* kont11507 = prim_car(lst);
void* lst11510 = prim_cdr(lst);
void* x11508 = apply_prim_expt(lst11510);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11507);
arg_buffer[2] = x11508;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11507))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void* squareroot_fptr() // squareroot 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11513 = arg_buffer[1];
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

void* kont11511 = prim_car(lst);
void* lst11514 = prim_cdr(lst);
void* x11512 = apply_prim_squareroot(lst11514);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11511);
arg_buffer[2] = x11512;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11511))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* squareroot = encode_clo(alloc_clo(squareroot_fptr, 0));

void* remainder_fptr() // remainder 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env11517 = arg_buffer[1];
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

void* kont11515 = prim_car(lst);
void* lst11518 = prim_cdr(lst);
void* x11516 = apply_prim_remainder(lst11518);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11515);
arg_buffer[2] = x11516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11515))[0]);
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
void* _env11521 = arg_buffer[1];
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

void* kont11519 = prim_car(lst);
void* lst11522 = prim_cdr(lst);
void* x11520 = apply_prim_quotient(lst11522);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11519);
arg_buffer[2] = x11520;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11519))[0]);
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
void* _env11525 = arg_buffer[1];
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

void* kont11523 = prim_car(lst);
void* lst11526 = prim_cdr(lst);
void* x11524 = apply_prim_randnum(lst11526);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11523);
arg_buffer[2] = x11524;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11523))[0]);
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
void* _env11529 = arg_buffer[1];
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

void* kont11527 = prim_car(lst);
void* lst11530 = prim_cdr(lst);
void* x11528 = apply_prim_symbol_u63(lst11530);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11527);
arg_buffer[2] = x11528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11527))[0]);
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
void* _env11533 = arg_buffer[1];
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

void* kont11531 = prim_car(lst);
void* lst11534 = prim_cdr(lst);
void* x11532 = apply_prim_pair_u63(lst11534);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11531);
arg_buffer[2] = x11532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11531))[0]);
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
void* _env11537 = arg_buffer[1];
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

void* kont11535 = prim_car(lst);
void* lst11538 = prim_cdr(lst);
void* x11536 = apply_prim_positive_u63(lst11538);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11535);
arg_buffer[2] = x11536;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11535))[0]);
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
void* _env11541 = arg_buffer[1];
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

void* kont11539 = prim_car(lst);
void* lst11542 = prim_cdr(lst);
void* x11540 = apply_prim_negative_u63(lst11542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11539);
arg_buffer[2] = x11540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11539))[0]);
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
void* _8451 = arg_buffer[1];
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

void* kont8380 = prim_car(x);
void* x8450 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8380);
arg_buffer[2] = x8450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8380))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8452_fptr() // lam8452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8453 = arg_buffer[1];
//reading env and args
void* a8316 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8453))[3];
//not do dummy comment
void* a8314 = (decode_clo(env8453))[2];
//not do dummy comment
void* kont8381 = (decode_clo(env8453))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8381;
arg_buffer[3] = a8314;
arg_buffer[4] = a8316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8452 = encode_clo(alloc_clo(lam8452_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8456 = arg_buffer[1];
//reading env and args
void* kont8381 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11543 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11543, "0", 10);
void* a8314 = encode_mpz(mpzvar11543);
mpz_t* mpzvar11544 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11544, "2", 10);
void* a8315 = encode_mpz(mpzvar11544);

//creating new closure instance
void** clo11546 = alloc_clo(lam8452_fptr, 3);

//setting env list
clo11546[1] = kont8381;
clo11546[2] = a8314;
clo11546[3] = equal_u63;
void* f8382 = encode_clo(clo11546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8382;
arg_buffer[3] = x;
arg_buffer[4] = a8315;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8457_fptr() // lam8457 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8458 = arg_buffer[1];
//reading env and args
void* a8319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8383 = (decode_clo(env8458))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8458))[2];
//not do dummy comment
void* a8317 = (decode_clo(env8458))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8383;
arg_buffer[3] = a8317;
arg_buffer[4] = a8319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8457 = encode_clo(alloc_clo(lam8457_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8461 = arg_buffer[1];
//reading env and args
void* kont8383 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11547 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11547, "1", 10);
void* a8317 = encode_mpz(mpzvar11547);
mpz_t* mpzvar11548 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11548, "2", 10);
void* a8318 = encode_mpz(mpzvar11548);

//creating new closure instance
void** clo11550 = alloc_clo(lam8457_fptr, 3);

//setting env list
clo11550[1] = a8317;
clo11550[2] = equal_u63;
clo11550[3] = kont8383;
void* f8384 = encode_clo(clo11550);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8384;
arg_buffer[3] = x;
arg_buffer[4] = a8318;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8464_fptr() // lam8464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8465 = arg_buffer[1];
//reading env and args
void* a8325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8385 = (decode_clo(env8465))[3];
//not do dummy comment
void* x = (decode_clo(env8465))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8465))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8385;
arg_buffer[3] = x;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8464 = encode_clo(alloc_clo(lam8464_fptr, 0));

void* lam8466_fptr() // lam8466 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8467 = arg_buffer[1];
//reading env and args
void* a8323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8467))[5];
//not do dummy comment
void* kont8385 = (decode_clo(env8467))[4];
//not do dummy comment
void* lst = (decode_clo(env8467))[3];
//not do dummy comment
void* x = (decode_clo(env8467))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8467))[1];

//if-clause
bool if_guard11551 = is_true(a8323);
if(if_guard11551)
{
void* xy8324 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8385);
arg_buffer[2] = xy8324;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8385))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11553 = alloc_clo(lam8464_fptr, 3);

//setting env list
clo11553[1] = member_u63;
clo11553[2] = x;
clo11553[3] = kont8385;
void* f8386 = encode_clo(clo11553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8466 = encode_clo(alloc_clo(lam8466_fptr, 0));

void* lam8468_fptr() // lam8468 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8469 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8469))[6];
//not do dummy comment
void* kont8385 = (decode_clo(env8469))[5];
//not do dummy comment
void* lst = (decode_clo(env8469))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8469))[3];
//not do dummy comment
void* x = (decode_clo(env8469))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8469))[1];

//creating new closure instance
void** clo11555 = alloc_clo(lam8466_fptr, 5);

//setting env list
clo11555[1] = member_u63;
clo11555[2] = x;
clo11555[3] = lst;
clo11555[4] = kont8385;
clo11555[5] = cdr;
void* f8387 = encode_clo(clo11555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8387;
arg_buffer[3] = a8322;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8468 = encode_clo(alloc_clo(lam8468_fptr, 0));

void* lam8470_fptr() // lam8470 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8471 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8471))[7];
//not do dummy comment
void* kont8385 = (decode_clo(env8471))[6];
//not do dummy comment
void* lst = (decode_clo(env8471))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8471))[4];
//not do dummy comment
void* x = (decode_clo(env8471))[3];
//not do dummy comment
void* car = (decode_clo(env8471))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8471))[1];

//if-clause
bool if_guard11556 = is_true(a8320);
if(if_guard11556)
{
void* xy8321 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8385);
arg_buffer[2] = xy8321;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8385))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11558 = alloc_clo(lam8468_fptr, 6);

//setting env list
clo11558[1] = member_u63;
clo11558[2] = x;
clo11558[3] = equal_u63;
clo11558[4] = lst;
clo11558[5] = kont8385;
clo11558[6] = cdr;
void* f8388 = encode_clo(clo11558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8470 = encode_clo(alloc_clo(lam8470_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8472 = arg_buffer[1];
//reading env and args
void* kont8385 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11560 = alloc_clo(lam8470_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo11560[1] = member_u63;
clo11560[2] = car;
clo11560[3] = x;
clo11560[4] = equal_u63;
clo11560[5] = lst;
clo11560[6] = kont8385;
clo11560[7] = cdr;
void* f8389 = encode_clo(clo11560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8389;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8473_fptr() // lam8473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8474 = arg_buffer[1];
//reading env and args
void* a8329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8474))[3];
//not do dummy comment
void* kont8390 = (decode_clo(env8474))[2];
//not do dummy comment
void* a8327 = (decode_clo(env8474))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8390;
arg_buffer[3] = a8327;
arg_buffer[4] = a8329;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8473 = encode_clo(alloc_clo(lam8473_fptr, 0));

void* lam8475_fptr() // lam8475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8476 = arg_buffer[1];
//reading env and args
void* a8328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8476))[5];
//not do dummy comment
void* kont8390 = (decode_clo(env8476))[4];
//not do dummy comment
void* a8327 = (decode_clo(env8476))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8476))[2];
//not do dummy comment
void* cons = (decode_clo(env8476))[1];

//creating new closure instance
void** clo11562 = alloc_clo(lam8473_fptr, 3);

//setting env list
clo11562[1] = a8327;
clo11562[2] = kont8390;
clo11562[3] = reverse_u45helper;
void* f8391 = encode_clo(clo11562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8391;
arg_buffer[3] = a8328;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8475 = encode_clo(alloc_clo(lam8475_fptr, 0));

void* lam8477_fptr() // lam8477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8478 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8478))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8478))[5];
//not do dummy comment
void* kont8390 = (decode_clo(env8478))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8478))[3];
//not do dummy comment
void* car = (decode_clo(env8478))[2];
//not do dummy comment
void* cons = (decode_clo(env8478))[1];

//creating new closure instance
void** clo11564 = alloc_clo(lam8475_fptr, 5);

//setting env list
clo11564[1] = cons;
clo11564[2] = lst2;
clo11564[3] = a8327;
clo11564[4] = kont8390;
clo11564[5] = reverse_u45helper;
void* f8392 = encode_clo(clo11564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8477 = encode_clo(alloc_clo(lam8477_fptr, 0));

void* lam8479_fptr() // lam8479 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8480 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8480))[7];
//not do dummy comment
void* lst = (decode_clo(env8480))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8480))[5];
//not do dummy comment
void* kont8390 = (decode_clo(env8480))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8480))[3];
//not do dummy comment
void* car = (decode_clo(env8480))[2];
//not do dummy comment
void* cons = (decode_clo(env8480))[1];

//if-clause
bool if_guard11565 = is_true(a8326);
if(if_guard11565)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8390);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8390))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11567 = alloc_clo(lam8477_fptr, 6);

//setting env list
clo11567[1] = cons;
clo11567[2] = car;
clo11567[3] = lst2;
clo11567[4] = kont8390;
clo11567[5] = reverse_u45helper;
clo11567[6] = lst;
void* f8393 = encode_clo(clo11567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8479 = encode_clo(alloc_clo(lam8479_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8481 = arg_buffer[1];
//reading env and args
void* kont8390 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11569 = alloc_clo(lam8479_fptr, 7);

//setting env list
clo11569[1] = cons;
clo11569[2] = car;
clo11569[3] = lst2;
clo11569[4] = kont8390;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo11569[5] = reverse_u45helper;
clo11569[6] = lst;
clo11569[7] = cdr;
void* f8394 = encode_clo(clo11569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8482_fptr() // lam8482 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8483 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8483))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8483))[2];
//not do dummy comment
void* kont8395 = (decode_clo(env8483))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8395;
arg_buffer[3] = lst;
arg_buffer[4] = a8330;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8482 = encode_clo(alloc_clo(lam8482_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8484 = arg_buffer[1];
//reading env and args
void* kont8395 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11571 = alloc_clo(lam8482_fptr, 3);

//setting env list
clo11571[1] = kont8395;
clo11571[2] = reverse_u45helper;
clo11571[3] = lst;
void* f8396 = encode_clo(clo11571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8485_fptr() // lam8485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8486 = arg_buffer[1];
//reading env and args
void* xy8333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8397 = (decode_clo(env8486))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8397);
arg_buffer[2] = xy8333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8397))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8485 = encode_clo(alloc_clo(lam8485_fptr, 0));

void* lam8487_fptr() // lam8487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8488 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8334 = (decode_clo(env8488))[4];
//not do dummy comment
void* a8336 = (decode_clo(env8488))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8488))[2];
//not do dummy comment
void* kont8397 = (decode_clo(env8488))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8397;
arg_buffer[3] = a8334;
arg_buffer[4] = a8336;
arg_buffer[5] = a8338;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8487 = encode_clo(alloc_clo(lam8487_fptr, 0));

void* lam8489_fptr() // lam8489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8490 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8334 = (decode_clo(env8490))[6];
//not do dummy comment
void* a8336 = (decode_clo(env8490))[5];
//not do dummy comment
void* cons = (decode_clo(env8490))[4];
//not do dummy comment
void* kont8397 = (decode_clo(env8490))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8490))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8490))[1];

//creating new closure instance
void** clo11573 = alloc_clo(lam8487_fptr, 4);

//setting env list
clo11573[1] = kont8397;
clo11573[2] = take_u45helper;
clo11573[3] = a8336;
clo11573[4] = a8334;
void* f8399 = encode_clo(clo11573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8399;
arg_buffer[3] = a8337;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8489 = encode_clo(alloc_clo(lam8489_fptr, 0));

void* lam8491_fptr() // lam8491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8492 = arg_buffer[1];
//reading env and args
void* a8336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8334 = (decode_clo(env8492))[7];
//not do dummy comment
void* lst = (decode_clo(env8492))[6];
//not do dummy comment
void* car = (decode_clo(env8492))[5];
//not do dummy comment
void* cons = (decode_clo(env8492))[4];
//not do dummy comment
void* kont8397 = (decode_clo(env8492))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8492))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8492))[1];

//creating new closure instance
void** clo11575 = alloc_clo(lam8489_fptr, 6);

//setting env list
clo11575[1] = lst2;
clo11575[2] = take_u45helper;
clo11575[3] = kont8397;
clo11575[4] = cons;
clo11575[5] = a8336;
clo11575[6] = a8334;
void* f8400 = encode_clo(clo11575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8400;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8491 = encode_clo(alloc_clo(lam8491_fptr, 0));

void* lam8494_fptr() // lam8494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8495 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8495))[8];
//not do dummy comment
void* cons = (decode_clo(env8495))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8495))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8495))[5];
//not do dummy comment
void* n = (decode_clo(env8495))[4];
//not do dummy comment
void* car = (decode_clo(env8495))[3];
//not do dummy comment
void* kont8397 = (decode_clo(env8495))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8495))[1];
mpz_t* mpzvar11576 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11576, "1", 10);
void* a8335 = encode_mpz(mpzvar11576);

//creating new closure instance
void** clo11578 = alloc_clo(lam8491_fptr, 7);

//setting env list
clo11578[1] = lst2;
clo11578[2] = take_u45helper;
clo11578[3] = kont8397;
clo11578[4] = cons;
clo11578[5] = car;
clo11578[6] = lst;
clo11578[7] = a8334;
void* f8401 = encode_clo(clo11578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8401;
arg_buffer[3] = n;
arg_buffer[4] = a8335;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8494 = encode_clo(alloc_clo(lam8494_fptr, 0));

void* lam8496_fptr() // lam8496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8497 = arg_buffer[1];
//reading env and args
void* a8332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8497))[10];
//not do dummy comment
void* lst = (decode_clo(env8497))[9];
//not do dummy comment
void* reverse = (decode_clo(env8497))[8];
//not do dummy comment
void* cons = (decode_clo(env8497))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8497))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8497))[5];
//not do dummy comment
void* n = (decode_clo(env8497))[4];
//not do dummy comment
void* car = (decode_clo(env8497))[3];
//not do dummy comment
void* kont8397 = (decode_clo(env8497))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8497))[1];

//if-clause
bool if_guard11579 = is_true(a8332);
if(if_guard11579)
{

//creating new closure instance
void** clo11581 = alloc_clo(lam8485_fptr, 1);

//setting env list
clo11581[1] = kont8397;
void* f8398 = encode_clo(clo11581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8398;
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
void** clo11583 = alloc_clo(lam8494_fptr, 8);

//setting env list
clo11583[1] = _u45;
clo11583[2] = kont8397;
clo11583[3] = car;
clo11583[4] = n;
clo11583[5] = lst2;
clo11583[6] = take_u45helper;
clo11583[7] = cons;
clo11583[8] = lst;
void* f8402 = encode_clo(clo11583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8496 = encode_clo(alloc_clo(lam8496_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8499 = arg_buffer[1];
//reading env and args
void* kont8397 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar11584 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11584, "0", 10);
void* a8331 = encode_mpz(mpzvar11584);

//creating new closure instance
void** clo11586 = alloc_clo(lam8496_fptr, 10);

//setting env list
clo11586[1] = _u45;
clo11586[2] = kont8397;
clo11586[3] = car;
clo11586[4] = n;
clo11586[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo11586[6] = take_u45helper;
clo11586[7] = cons;
clo11586[8] = reverse;
clo11586[9] = lst;
clo11586[10] = cdr;
void* f8403 = encode_clo(clo11586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8403;
arg_buffer[3] = n;
arg_buffer[4] = a8331;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8500_fptr() // lam8500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8501 = arg_buffer[1];
//reading env and args
void* a8339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8501))[4];
//not do dummy comment
void* kont8404 = (decode_clo(env8501))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8501))[2];
//not do dummy comment
void* n = (decode_clo(env8501))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8404;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8339;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8500 = encode_clo(alloc_clo(lam8500_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8502 = arg_buffer[1];
//reading env and args
void* kont8404 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11588 = alloc_clo(lam8500_fptr, 4);

//setting env list
clo11588[1] = n;
clo11588[2] = take_u45helper;
clo11588[3] = kont8404;
clo11588[4] = lst;
void* f8405 = encode_clo(clo11588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8405;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8504_fptr() // lam8504 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8505 = arg_buffer[1];
//reading env and args
void* a8344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8505))[3];
//not do dummy comment
void* a8342 = (decode_clo(env8505))[2];
//not do dummy comment
void* kont8406 = (decode_clo(env8505))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8406;
arg_buffer[3] = a8342;
arg_buffer[4] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8504 = encode_clo(alloc_clo(lam8504_fptr, 0));

void* lam8506_fptr() // lam8506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8507 = arg_buffer[1];
//reading env and args
void* a8343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8507))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8507))[3];
//not do dummy comment
void* a8342 = (decode_clo(env8507))[2];
//not do dummy comment
void* kont8406 = (decode_clo(env8507))[1];

//creating new closure instance
void** clo11590 = alloc_clo(lam8504_fptr, 3);

//setting env list
clo11590[1] = kont8406;
clo11590[2] = a8342;
clo11590[3] = _u43;
void* f8407 = encode_clo(clo11590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8407;
arg_buffer[3] = a8343;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8506 = encode_clo(alloc_clo(lam8506_fptr, 0));

void* lam8509_fptr() // lam8509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8510 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8510))[5];
//not do dummy comment
void* lst = (decode_clo(env8510))[4];
//not do dummy comment
void* length = (decode_clo(env8510))[3];
//not do dummy comment
void* kont8406 = (decode_clo(env8510))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8510))[1];

//if-clause
bool if_guard11591 = is_true(a8340);
if(if_guard11591)
{
mpz_t* mpzvar11592 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11592, "0", 10);
void* xy8341 = encode_mpz(mpzvar11592);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8406);
arg_buffer[2] = xy8341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8406))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar11593 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11593, "1", 10);
void* a8342 = encode_mpz(mpzvar11593);

//creating new closure instance
void** clo11595 = alloc_clo(lam8506_fptr, 4);

//setting env list
clo11595[1] = kont8406;
clo11595[2] = a8342;
clo11595[3] = _u43;
clo11595[4] = length;
void* f8408 = encode_clo(clo11595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8509 = encode_clo(alloc_clo(lam8509_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8511 = arg_buffer[1];
//reading env and args
void* kont8406 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11597 = alloc_clo(lam8509_fptr, 5);

//setting env list
clo11597[1] = _u43;
clo11597[2] = kont8406;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo11597[3] = length;
clo11597[4] = lst;
clo11597[5] = cdr;
void* f8409 = encode_clo(clo11597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8512_fptr() // lam8512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* xy8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8410 = (decode_clo(env8513))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8410);
arg_buffer[2] = xy8346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8512 = encode_clo(alloc_clo(lam8512_fptr, 0));

void* lam8514_fptr() // lam8514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8410 = (decode_clo(env8515))[3];
//not do dummy comment
void* a8348 = (decode_clo(env8515))[2];
//not do dummy comment
void* cons = (decode_clo(env8515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8410;
arg_buffer[3] = a8348;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void* lam8516_fptr() // lam8516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8517 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8517))[5];
//not do dummy comment
void* proc = (decode_clo(env8517))[4];
//not do dummy comment
void* kont8410 = (decode_clo(env8517))[3];
//not do dummy comment
void* a8348 = (decode_clo(env8517))[2];
//not do dummy comment
void* cons = (decode_clo(env8517))[1];

//creating new closure instance
void** clo11599 = alloc_clo(lam8514_fptr, 3);

//setting env list
clo11599[1] = cons;
clo11599[2] = a8348;
clo11599[3] = kont8410;
void* f8412 = encode_clo(clo11599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8412;
arg_buffer[3] = proc;
arg_buffer[4] = a8349;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void* lam8518_fptr() // lam8518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8519))[6];
//not do dummy comment
void* lst = (decode_clo(env8519))[5];
//not do dummy comment
void* map = (decode_clo(env8519))[4];
//not do dummy comment
void* proc = (decode_clo(env8519))[3];
//not do dummy comment
void* kont8410 = (decode_clo(env8519))[2];
//not do dummy comment
void* cons = (decode_clo(env8519))[1];

//creating new closure instance
void** clo11601 = alloc_clo(lam8516_fptr, 5);

//setting env list
clo11601[1] = cons;
clo11601[2] = a8348;
clo11601[3] = kont8410;
clo11601[4] = proc;
clo11601[5] = map;
void* f8413 = encode_clo(clo11601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void* lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8521))[6];
//not do dummy comment
void* lst = (decode_clo(env8521))[5];
//not do dummy comment
void* map = (decode_clo(env8521))[4];
//not do dummy comment
void* proc = (decode_clo(env8521))[3];
//not do dummy comment
void* kont8410 = (decode_clo(env8521))[2];
//not do dummy comment
void* cons = (decode_clo(env8521))[1];

//creating new closure instance
void** clo11603 = alloc_clo(lam8518_fptr, 6);

//setting env list
clo11603[1] = cons;
clo11603[2] = kont8410;
clo11603[3] = proc;
clo11603[4] = map;
clo11603[5] = lst;
clo11603[6] = cdr;
void* f8414 = encode_clo(clo11603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8414;
arg_buffer[3] = a8347;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void* lam8522_fptr() // lam8522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8523 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8523))[8];
//not do dummy comment
void* map = (decode_clo(env8523))[7];
//not do dummy comment
void* proc = (decode_clo(env8523))[6];
//not do dummy comment
void* kont8410 = (decode_clo(env8523))[5];
//not do dummy comment
void* car = (decode_clo(env8523))[4];
//not do dummy comment
void* cons = (decode_clo(env8523))[3];
//not do dummy comment
void* list = (decode_clo(env8523))[2];
//not do dummy comment
void* cdr = (decode_clo(env8523))[1];

//if-clause
bool if_guard11604 = is_true(a8345);
if(if_guard11604)
{

//creating new closure instance
void** clo11606 = alloc_clo(lam8512_fptr, 1);

//setting env list
clo11606[1] = kont8410;
void* f8411 = encode_clo(clo11606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11608 = alloc_clo(lam8520_fptr, 6);

//setting env list
clo11608[1] = cons;
clo11608[2] = kont8410;
clo11608[3] = proc;
clo11608[4] = map;
clo11608[5] = lst;
clo11608[6] = cdr;
void* f8415 = encode_clo(clo11608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8415;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8524 = arg_buffer[1];
//reading env and args
void* kont8410 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11610 = alloc_clo(lam8522_fptr, 8);

//setting env list
clo11610[1] = cdr;
clo11610[2] = list;
clo11610[3] = cons;
clo11610[4] = car;
clo11610[5] = kont8410;
clo11610[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo11610[7] = map;
clo11610[8] = lst;
void* f8416 = encode_clo(clo11610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* xy8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8526))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[2] = xy8352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void* lam8527_fptr() // lam8527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8528 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8528))[3];
//not do dummy comment
void* a8355 = (decode_clo(env8528))[2];
//not do dummy comment
void* cons = (decode_clo(env8528))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8417;
arg_buffer[3] = a8355;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void* lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8530))[5];
//not do dummy comment
void* a8355 = (decode_clo(env8530))[4];
//not do dummy comment
void* op = (decode_clo(env8530))[3];
//not do dummy comment
void* filter = (decode_clo(env8530))[2];
//not do dummy comment
void* cons = (decode_clo(env8530))[1];

//creating new closure instance
void** clo11612 = alloc_clo(lam8527_fptr, 3);

//setting env list
clo11612[1] = cons;
clo11612[2] = a8355;
clo11612[3] = kont8417;
void* f8419 = encode_clo(clo11612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8419;
arg_buffer[3] = op;
arg_buffer[4] = a8356;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void* lam8531_fptr() // lam8531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8532 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8532))[6];
//not do dummy comment
void* kont8417 = (decode_clo(env8532))[5];
//not do dummy comment
void* lst = (decode_clo(env8532))[4];
//not do dummy comment
void* op = (decode_clo(env8532))[3];
//not do dummy comment
void* filter = (decode_clo(env8532))[2];
//not do dummy comment
void* cons = (decode_clo(env8532))[1];

//creating new closure instance
void** clo11614 = alloc_clo(lam8529_fptr, 5);

//setting env list
clo11614[1] = cons;
clo11614[2] = filter;
clo11614[3] = op;
clo11614[4] = a8355;
clo11614[5] = kont8417;
void* f8420 = encode_clo(clo11614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void* lam8533_fptr() // lam8533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8534))[3];
//not do dummy comment
void* op = (decode_clo(env8534))[2];
//not do dummy comment
void* filter = (decode_clo(env8534))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8417;
arg_buffer[3] = op;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8536))[7];
//not do dummy comment
void* kont8417 = (decode_clo(env8536))[6];
//not do dummy comment
void* lst = (decode_clo(env8536))[5];
//not do dummy comment
void* op = (decode_clo(env8536))[4];
//not do dummy comment
void* cons = (decode_clo(env8536))[3];
//not do dummy comment
void* filter = (decode_clo(env8536))[2];
//not do dummy comment
void* car = (decode_clo(env8536))[1];

//if-clause
bool if_guard11615 = is_true(a8354);
if(if_guard11615)
{

//creating new closure instance
void** clo11617 = alloc_clo(lam8531_fptr, 6);

//setting env list
clo11617[1] = cons;
clo11617[2] = filter;
clo11617[3] = op;
clo11617[4] = lst;
clo11617[5] = kont8417;
clo11617[6] = cdr;
void* f8421 = encode_clo(clo11617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8421;
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
void** clo11619 = alloc_clo(lam8533_fptr, 3);

//setting env list
clo11619[1] = filter;
clo11619[2] = op;
clo11619[3] = kont8417;
void* f8422 = encode_clo(clo11619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* lam8537_fptr() // lam8537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8538))[7];
//not do dummy comment
void* kont8417 = (decode_clo(env8538))[6];
//not do dummy comment
void* lst = (decode_clo(env8538))[5];
//not do dummy comment
void* op = (decode_clo(env8538))[4];
//not do dummy comment
void* cons = (decode_clo(env8538))[3];
//not do dummy comment
void* filter = (decode_clo(env8538))[2];
//not do dummy comment
void* car = (decode_clo(env8538))[1];

//creating new closure instance
void** clo11621 = alloc_clo(lam8535_fptr, 7);

//setting env list
clo11621[1] = car;
clo11621[2] = filter;
clo11621[3] = cons;
clo11621[4] = op;
clo11621[5] = lst;
clo11621[6] = kont8417;
clo11621[7] = cdr;
void* f8423 = encode_clo(clo11621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8423;
arg_buffer[3] = a8353;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void* lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8540))[8];
//not do dummy comment
void* lst = (decode_clo(env8540))[7];
//not do dummy comment
void* op = (decode_clo(env8540))[6];
//not do dummy comment
void* cons = (decode_clo(env8540))[5];
//not do dummy comment
void* list = (decode_clo(env8540))[4];
//not do dummy comment
void* cdr = (decode_clo(env8540))[3];
//not do dummy comment
void* filter = (decode_clo(env8540))[2];
//not do dummy comment
void* car = (decode_clo(env8540))[1];

//if-clause
bool if_guard11622 = is_true(a8351);
if(if_guard11622)
{

//creating new closure instance
void** clo11624 = alloc_clo(lam8525_fptr, 1);

//setting env list
clo11624[1] = kont8417;
void* f8418 = encode_clo(clo11624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11626 = alloc_clo(lam8537_fptr, 7);

//setting env list
clo11626[1] = car;
clo11626[2] = filter;
clo11626[3] = cons;
clo11626[4] = op;
clo11626[5] = lst;
clo11626[6] = kont8417;
clo11626[7] = cdr;
void* f8424 = encode_clo(clo11626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8541 = arg_buffer[1];
//reading env and args
void* kont8417 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11628 = alloc_clo(lam8539_fptr, 8);

//setting env list
clo11628[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo11628[2] = filter;
clo11628[3] = cdr;
clo11628[4] = list;
clo11628[5] = cons;
clo11628[6] = op;
clo11628[7] = lst;
clo11628[8] = kont8417;
void* f8425 = encode_clo(clo11628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8425;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8542_fptr() // lam8542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8543))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8543))[2];
//not do dummy comment
void* kont8426 = (decode_clo(env8543))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8426;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void* lam8545_fptr() // lam8545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8546 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8546))[4];
//not do dummy comment
void* kont8426 = (decode_clo(env8546))[3];
//not do dummy comment
void* n = (decode_clo(env8546))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8546))[1];
mpz_t* mpzvar11629 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11629, "1", 10);
void* a8362 = encode_mpz(mpzvar11629);

//creating new closure instance
void** clo11631 = alloc_clo(lam8542_fptr, 3);

//setting env list
clo11631[1] = kont8426;
clo11631[2] = a8361;
clo11631[3] = drop;
void* f8427 = encode_clo(clo11631);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8427;
arg_buffer[3] = n;
arg_buffer[4] = a8362;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8548))[6];
//not do dummy comment
void* kont8426 = (decode_clo(env8548))[5];
//not do dummy comment
void* n = (decode_clo(env8548))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8548))[3];
//not do dummy comment
void* lst = (decode_clo(env8548))[2];
//not do dummy comment
void* drop = (decode_clo(env8548))[1];

//if-clause
bool if_guard11632 = is_true(a8360);
if(if_guard11632)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8426);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8426))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11634 = alloc_clo(lam8545_fptr, 4);

//setting env list
clo11634[1] = _u45;
clo11634[2] = n;
clo11634[3] = kont8426;
clo11634[4] = drop;
void* f8428 = encode_clo(clo11634);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8550 = arg_buffer[1];
//reading env and args
void* kont8426 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar11635 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11635, "0", 10);
void* a8359 = encode_mpz(mpzvar11635);

//creating new closure instance
void** clo11637 = alloc_clo(lam8547_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo11637[1] = drop;
clo11637[2] = lst;
clo11637[3] = _u45;
clo11637[4] = n;
clo11637[5] = kont8426;
clo11637[6] = cdr;
void* f8429 = encode_clo(clo11637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8429;
arg_buffer[3] = n;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8552))[4];
//not do dummy comment
void* foldl = (decode_clo(env8552))[3];
//not do dummy comment
void* a8366 = (decode_clo(env8552))[2];
//not do dummy comment
void* kont8430 = (decode_clo(env8552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8430;
arg_buffer[3] = fun;
arg_buffer[4] = a8366;
arg_buffer[5] = a8367;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void* lam8553_fptr() // lam8553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8554))[5];
//not do dummy comment
void* fun = (decode_clo(env8554))[4];
//not do dummy comment
void* foldl = (decode_clo(env8554))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8554))[2];
//not do dummy comment
void* cdr = (decode_clo(env8554))[1];

//creating new closure instance
void** clo11639 = alloc_clo(lam8551_fptr, 4);

//setting env list
clo11639[1] = kont8430;
clo11639[2] = a8366;
clo11639[3] = foldl;
clo11639[4] = fun;
void* f8431 = encode_clo(clo11639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void* lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8556))[6];
//not do dummy comment
void* fun = (decode_clo(env8556))[5];
//not do dummy comment
void* acc = (decode_clo(env8556))[4];
//not do dummy comment
void* foldl = (decode_clo(env8556))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8556))[2];
//not do dummy comment
void* cdr = (decode_clo(env8556))[1];

//creating new closure instance
void** clo11641 = alloc_clo(lam8553_fptr, 5);

//setting env list
clo11641[1] = cdr;
clo11641[2] = kont8430;
clo11641[3] = foldl;
clo11641[4] = fun;
clo11641[5] = lst;
void* f8432 = encode_clo(clo11641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8432;
arg_buffer[3] = a8365;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void* lam8557_fptr() // lam8557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8558 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8558))[7];
//not do dummy comment
void* fun = (decode_clo(env8558))[6];
//not do dummy comment
void* acc = (decode_clo(env8558))[5];
//not do dummy comment
void* car = (decode_clo(env8558))[4];
//not do dummy comment
void* foldl = (decode_clo(env8558))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8558))[2];
//not do dummy comment
void* cdr = (decode_clo(env8558))[1];

//if-clause
bool if_guard11642 = is_true(a8364);
if(if_guard11642)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11644 = alloc_clo(lam8555_fptr, 6);

//setting env list
clo11644[1] = cdr;
clo11644[2] = kont8430;
clo11644[3] = foldl;
clo11644[4] = acc;
clo11644[5] = fun;
clo11644[6] = lst;
void* f8433 = encode_clo(clo11644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8559 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11646 = alloc_clo(lam8557_fptr, 7);

//setting env list
clo11646[1] = cdr;
clo11646[2] = kont8430;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo11646[3] = foldl;
clo11646[4] = car;
clo11646[5] = acc;
clo11646[6] = fun;
clo11646[7] = lst;
void* f8434 = encode_clo(clo11646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8369 = (decode_clo(env8561))[3];
//not do dummy comment
void* kont8435 = (decode_clo(env8561))[2];
//not do dummy comment
void* fun = (decode_clo(env8561))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8435;
arg_buffer[3] = a8369;
arg_buffer[4] = a8371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void* lam8562_fptr() // lam8562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8563 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8369 = (decode_clo(env8563))[5];
//not do dummy comment
void* foldr = (decode_clo(env8563))[4];
//not do dummy comment
void* kont8435 = (decode_clo(env8563))[3];
//not do dummy comment
void* fun = (decode_clo(env8563))[2];
//not do dummy comment
void* acc = (decode_clo(env8563))[1];

//creating new closure instance
void** clo11648 = alloc_clo(lam8560_fptr, 3);

//setting env list
clo11648[1] = fun;
clo11648[2] = kont8435;
clo11648[3] = a8369;
void* f8436 = encode_clo(clo11648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8436;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8370;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void* lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8565))[6];
//not do dummy comment
void* kont8435 = (decode_clo(env8565))[5];
//not do dummy comment
void* fun = (decode_clo(env8565))[4];
//not do dummy comment
void* acc = (decode_clo(env8565))[3];
//not do dummy comment
void* foldr = (decode_clo(env8565))[2];
//not do dummy comment
void* lst = (decode_clo(env8565))[1];

//creating new closure instance
void** clo11650 = alloc_clo(lam8562_fptr, 5);

//setting env list
clo11650[1] = acc;
clo11650[2] = fun;
clo11650[3] = kont8435;
clo11650[4] = foldr;
clo11650[5] = a8369;
void* f8437 = encode_clo(clo11650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void* lam8566_fptr() // lam8566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8567 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8567))[7];
//not do dummy comment
void* kont8435 = (decode_clo(env8567))[6];
//not do dummy comment
void* fun = (decode_clo(env8567))[5];
//not do dummy comment
void* acc = (decode_clo(env8567))[4];
//not do dummy comment
void* car = (decode_clo(env8567))[3];
//not do dummy comment
void* foldr = (decode_clo(env8567))[2];
//not do dummy comment
void* lst = (decode_clo(env8567))[1];

//if-clause
bool if_guard11651 = is_true(a8368);
if(if_guard11651)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11653 = alloc_clo(lam8564_fptr, 6);

//setting env list
clo11653[1] = lst;
clo11653[2] = foldr;
clo11653[3] = acc;
clo11653[4] = fun;
clo11653[5] = kont8435;
clo11653[6] = cdr;
void* f8438 = encode_clo(clo11653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8568 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11655 = alloc_clo(lam8566_fptr, 7);

//setting env list
clo11655[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo11655[2] = foldr;
clo11655[3] = car;
clo11655[4] = acc;
clo11655[5] = fun;
clo11655[6] = kont8435;
clo11655[7] = cdr;
void* f8439 = encode_clo(clo11655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8569_fptr() // lam8569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8373 = (decode_clo(env8570))[3];
//not do dummy comment
void* kont8440 = (decode_clo(env8570))[2];
//not do dummy comment
void* cons = (decode_clo(env8570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8440;
arg_buffer[3] = a8373;
arg_buffer[4] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void* lam8571_fptr() // lam8571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8572 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8373 = (decode_clo(env8572))[5];
//not do dummy comment
void* append = (decode_clo(env8572))[4];
//not do dummy comment
void* kont8440 = (decode_clo(env8572))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8572))[2];
//not do dummy comment
void* cons = (decode_clo(env8572))[1];

//creating new closure instance
void** clo11657 = alloc_clo(lam8569_fptr, 3);

//setting env list
clo11657[1] = cons;
clo11657[2] = kont8440;
clo11657[3] = a8373;
void* f8441 = encode_clo(clo11657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8441;
arg_buffer[3] = a8374;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void* lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8574))[6];
//not do dummy comment
void* append = (decode_clo(env8574))[5];
//not do dummy comment
void* kont8440 = (decode_clo(env8574))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8574))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8574))[2];
//not do dummy comment
void* cons = (decode_clo(env8574))[1];

//creating new closure instance
void** clo11659 = alloc_clo(lam8571_fptr, 5);

//setting env list
clo11659[1] = cons;
clo11659[2] = lst2;
clo11659[3] = kont8440;
clo11659[4] = append;
clo11659[5] = a8373;
void* f8442 = encode_clo(clo11659);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8442;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8576))[7];
//not do dummy comment
void* append = (decode_clo(env8576))[6];
//not do dummy comment
void* kont8440 = (decode_clo(env8576))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8576))[4];
//not do dummy comment
void* cons = (decode_clo(env8576))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8576))[2];
//not do dummy comment
void* car = (decode_clo(env8576))[1];

//if-clause
bool if_guard11660 = is_true(a8372);
if(if_guard11660)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11662 = alloc_clo(lam8573_fptr, 6);

//setting env list
clo11662[1] = cons;
clo11662[2] = lst1;
clo11662[3] = lst2;
clo11662[4] = kont8440;
clo11662[5] = append;
clo11662[6] = cdr;
void* f8443 = encode_clo(clo11662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8443;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8577 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11664 = alloc_clo(lam8575_fptr, 7);

//setting env list
clo11664[1] = car;
clo11664[2] = lst1;
clo11664[3] = cons;
clo11664[4] = lst2;
clo11664[5] = kont8440;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo11664[6] = append;
clo11664[7] = cdr;
void* f8444 = encode_clo(clo11664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8444;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* remainder = (decode_clo(env8579))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8579))[1];
void* cps_u45lst8446 = prim_cons(kont8445, a8378);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(remainder);
arg_buffer[2] = cps_u45lst8446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(remainder))[0]);
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8582 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar11665 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11665, "25", 10);
void* a8376 = encode_mpz(mpzvar11665);
mpz_t* mpzvar11666 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11666, "4", 10);
void* a8377 = encode_mpz(mpzvar11666);

//creating new closure instance
void** clo11668 = alloc_clo(lam8578_fptr, 2);

//setting env list
clo11668[1] = kont8445;
clo11668[2] = remainder_brouhaha;
void* f8447 = encode_clo(clo11668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8447;
arg_buffer[3] = a8376;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* xy8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8448 = (decode_clo(env8584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[2] = xy8379;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8585 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo11670 = alloc_clo(lam8583_fptr, 1);

//setting env list
clo11670[1] = kont8448;
void* f8449 = encode_clo(clo11670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8449;
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

