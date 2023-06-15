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
void* _56456 = arg_buffer[1];
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

void* kont5618456288 = prim_car(lst);
void* lst56289 = prim_cdr(lst);
void* x5609356290 = apply_prim__u43(lst56289);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5618456288);
arg_buffer[2] = x5609356290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5618456288))[0]);
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
void* _56457 = arg_buffer[1];
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

void* kont5618656291 = prim_car(lst);
void* lst56292 = prim_cdr(lst);
void* x5609456293 = apply_prim__u45(lst56292);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5618656291);
arg_buffer[2] = x5609456293;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5618656291))[0]);
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
void* _56458 = arg_buffer[1];
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

void* kont5618856294 = prim_car(lst);
void* lst56295 = prim_cdr(lst);
void* x5609556296 = apply_prim__u42(lst56295);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5618856294);
arg_buffer[2] = x5609556296;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5618856294))[0]);
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
void* _56459 = arg_buffer[1];
//reading env and args
void* kont56190 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5609656297 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56190);
arg_buffer[2] = x5609656297;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56190))[0]);
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
void* _56460 = arg_buffer[1];
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

void* kont5619156298 = prim_car(lst);
void* lst56299 = prim_cdr(lst);
void* x5609756300 = apply_prim__u47(lst56299);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5619156298);
arg_buffer[2] = x5609756300;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5619156298))[0]);
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
void* _56461 = arg_buffer[1];
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

void* kont5619356301 = prim_car(lst);
void* lst56302 = prim_cdr(lst);
void* x5609856303 = apply_prim__u61(lst56302);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5619356301);
arg_buffer[2] = x5609856303;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5619356301))[0]);
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
void* _56462 = arg_buffer[1];
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

void* kont5619556304 = prim_car(lst);
void* lst56305 = prim_cdr(lst);
void* x5609956306 = apply_prim__u62(lst56305);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5619556304);
arg_buffer[2] = x5609956306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5619556304))[0]);
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
void* _56463 = arg_buffer[1];
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

void* kont5619756307 = prim_car(lst);
void* lst56308 = prim_cdr(lst);
void* x5610056309 = apply_prim__u60(lst56308);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5619756307);
arg_buffer[2] = x5610056309;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5619756307))[0]);
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
void* _56464 = arg_buffer[1];
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

void* kont5619956310 = prim_car(lst);
void* lst56311 = prim_cdr(lst);
void* x5610156312 = apply_prim__u60_u61(lst56311);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5619956310);
arg_buffer[2] = x5610156312;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5619956310))[0]);
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
void* _56465 = arg_buffer[1];
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

void* kont5620156313 = prim_car(lst);
void* lst56314 = prim_cdr(lst);
void* x5610256315 = apply_prim__u62_u61(lst56314);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5620156313);
arg_buffer[2] = x5610256315;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5620156313))[0]);
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
void* _56466 = arg_buffer[1];
//reading env and args
void* kont56203 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5610356316 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56203);
arg_buffer[2] = x5610356316;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56203))[0]);
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
void* _56467 = arg_buffer[1];
//reading env and args
void* kont56204 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5610456317 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56204);
arg_buffer[2] = x5610456317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56204))[0]);
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
void* _56468 = arg_buffer[1];
//reading env and args
void* kont56205 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5610556318 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56205);
arg_buffer[2] = x5610556318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56205))[0]);
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
void* _56469 = arg_buffer[1];
//reading env and args
void* kont56206 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5610656319 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56206);
arg_buffer[2] = x5610656319;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56206))[0]);
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
void* _56470 = arg_buffer[1];
//reading env and args
void* kont56207 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5610756320 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56207);
arg_buffer[2] = x5610756320;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56207))[0]);
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
void* _56471 = arg_buffer[1];
//reading env and args
void* kont56208 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5610856321 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56208);
arg_buffer[2] = x5610856321;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56208))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam56472_fptr() // lam56472 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56473 = arg_buffer[1];
//reading env and args
void* a5611156325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56209 = (decode_clo(env56473))[3];
//not do dummy comment
void* a5610956322 = (decode_clo(env56473))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env56473))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont56209;
arg_buffer[3] = a5610956322;
arg_buffer[4] = a5611156325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56472 = encode_clo(alloc_clo(lam56472_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56476 = arg_buffer[1];
//reading env and args
void* kont56209 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57155 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57155, "0", 10);
void* a5610956322 = encode_mpz(mpzvar57155);
mpz_t* mpzvar57156 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57156, "2", 10);
void* a5611056323 = encode_mpz(mpzvar57156);

//creating new closure instance
void** clo57158 = alloc_clo(lam56472_fptr, 3);

//setting env list
clo57158[1] = equal_u63;
clo57158[2] = a5610956322;
clo57158[3] = kont56209;
void* f5621056324 = encode_clo(clo57158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5621056324;
arg_buffer[3] = x;
arg_buffer[4] = a5611056323;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam56477_fptr() // lam56477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56478 = arg_buffer[1];
//reading env and args
void* a5611456329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56211 = (decode_clo(env56478))[3];
//not do dummy comment
void* a5611256326 = (decode_clo(env56478))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env56478))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont56211;
arg_buffer[3] = a5611256326;
arg_buffer[4] = a5611456329;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56477 = encode_clo(alloc_clo(lam56477_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56481 = arg_buffer[1];
//reading env and args
void* kont56211 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57159 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57159, "1", 10);
void* a5611256326 = encode_mpz(mpzvar57159);
mpz_t* mpzvar57160 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57160, "2", 10);
void* a5611356327 = encode_mpz(mpzvar57160);

//creating new closure instance
void** clo57162 = alloc_clo(lam56477_fptr, 3);

//setting env list
clo57162[1] = equal_u63;
clo57162[2] = a5611256326;
clo57162[3] = kont56211;
void* f5621256328 = encode_clo(clo57162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5621256328;
arg_buffer[3] = x;
arg_buffer[4] = a5611356327;
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
void* _56482 = arg_buffer[1];
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

void* kont5621356330 = prim_car(x);
void* x56331 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5621356330);
arg_buffer[2] = x56331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5621356330))[0]);
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
void* _56483 = arg_buffer[1];
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

void* kont5621556332 = prim_car(lst);
void* lst56333 = prim_cdr(lst);
void* x5611556334 = apply_prim_and(lst56333);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5621556332);
arg_buffer[2] = x5611556334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5621556332))[0]);
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
void* _56484 = arg_buffer[1];
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

void* kont5621756335 = prim_car(lst);
void* lst56336 = prim_cdr(lst);
void* x5611656337 = apply_prim_or(lst56336);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5621756335);
arg_buffer[2] = x5611656337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5621756335))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam56487_fptr() // lam56487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56488 = arg_buffer[1];
//reading env and args
void* a5612256347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env56488))[3];
//not do dummy comment
void* kont56219 = (decode_clo(env56488))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56488))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont56219;
arg_buffer[3] = x;
arg_buffer[4] = a5612256347;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56487 = encode_clo(alloc_clo(lam56487_fptr, 0));

void* lam56489_fptr() // lam56489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56490 = arg_buffer[1];
//reading env and args
void* a5612056344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56490))[5];
//not do dummy comment
void* lst = (decode_clo(env56490))[4];
//not do dummy comment
void* x = (decode_clo(env56490))[3];
//not do dummy comment
void* kont56219 = (decode_clo(env56490))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56490))[1];

//if-clause
bool if_guard57163 = is_true(a5612056344);
if(if_guard57163)
{
void* x5612156345 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56219);
arg_buffer[2] = x5612156345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56219))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57165 = alloc_clo(lam56487_fptr, 3);

//setting env list
clo57165[1] = member_u63;
clo57165[2] = kont56219;
clo57165[3] = x;
void* f5622056346 = encode_clo(clo57165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5622056346;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56489 = encode_clo(alloc_clo(lam56489_fptr, 0));

void* lam56491_fptr() // lam56491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56492 = arg_buffer[1];
//reading env and args
void* a5611956342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56492))[6];
//not do dummy comment
void* lst = (decode_clo(env56492))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env56492))[4];
//not do dummy comment
void* x = (decode_clo(env56492))[3];
//not do dummy comment
void* kont56219 = (decode_clo(env56492))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56492))[1];

//creating new closure instance
void** clo57167 = alloc_clo(lam56489_fptr, 5);

//setting env list
clo57167[1] = member_u63;
clo57167[2] = kont56219;
clo57167[3] = x;
clo57167[4] = lst;
clo57167[5] = cdr;
void* f5622156343 = encode_clo(clo57167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5622156343;
arg_buffer[3] = a5611956342;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56491 = encode_clo(alloc_clo(lam56491_fptr, 0));

void* lam56493_fptr() // lam56493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56494 = arg_buffer[1];
//reading env and args
void* a5611756339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56494))[7];
//not do dummy comment
void* lst = (decode_clo(env56494))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env56494))[5];
//not do dummy comment
void* x = (decode_clo(env56494))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env56494))[3];
//not do dummy comment
void* kont56219 = (decode_clo(env56494))[2];
//not do dummy comment
void* car = (decode_clo(env56494))[1];

//if-clause
bool if_guard57168 = is_true(a5611756339);
if(if_guard57168)
{
void* x5611856340 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56219);
arg_buffer[2] = x5611856340;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56219))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57170 = alloc_clo(lam56491_fptr, 6);

//setting env list
clo57170[1] = member_u63;
clo57170[2] = kont56219;
clo57170[3] = x;
clo57170[4] = equal_u63;
clo57170[5] = lst;
clo57170[6] = cdr;
void* f5622256341 = encode_clo(clo57170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5622256341;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56493 = encode_clo(alloc_clo(lam56493_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56495 = arg_buffer[1];
//reading env and args
void* kont56219 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57172 = alloc_clo(lam56493_fptr, 7);

//setting env list
clo57172[1] = car;
clo57172[2] = kont56219;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo57172[3] = member_u63;
clo57172[4] = x;
clo57172[5] = equal_u63;
clo57172[6] = lst;
clo57172[7] = cdr;
void* f5622356338 = encode_clo(clo57172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5622356338;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam56496_fptr() // lam56496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56497 = arg_buffer[1];
//reading env and args
void* a5612656355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56224 = (decode_clo(env56497))[4];
//not do dummy comment
void* a5612556353 = (decode_clo(env56497))[3];
//not do dummy comment
void* fun = (decode_clo(env56497))[2];
//not do dummy comment
void* foldl = (decode_clo(env56497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont56224;
arg_buffer[3] = fun;
arg_buffer[4] = a5612556353;
arg_buffer[5] = a5612656355;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56496 = encode_clo(alloc_clo(lam56496_fptr, 0));

void* lam56498_fptr() // lam56498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56499 = arg_buffer[1];
//reading env and args
void* a5612556353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56499))[5];
//not do dummy comment
void* kont56224 = (decode_clo(env56499))[4];
//not do dummy comment
void* lst = (decode_clo(env56499))[3];
//not do dummy comment
void* fun = (decode_clo(env56499))[2];
//not do dummy comment
void* foldl = (decode_clo(env56499))[1];

//creating new closure instance
void** clo57174 = alloc_clo(lam56496_fptr, 4);

//setting env list
clo57174[1] = foldl;
clo57174[2] = fun;
clo57174[3] = a5612556353;
clo57174[4] = kont56224;
void* f5622556354 = encode_clo(clo57174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5622556354;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56498 = encode_clo(alloc_clo(lam56498_fptr, 0));

void* lam56500_fptr() // lam56500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56501 = arg_buffer[1];
//reading env and args
void* a5612456351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56501))[6];
//not do dummy comment
void* kont56224 = (decode_clo(env56501))[5];
//not do dummy comment
void* lst = (decode_clo(env56501))[4];
//not do dummy comment
void* fun = (decode_clo(env56501))[3];
//not do dummy comment
void* acc = (decode_clo(env56501))[2];
//not do dummy comment
void* foldl = (decode_clo(env56501))[1];

//creating new closure instance
void** clo57176 = alloc_clo(lam56498_fptr, 5);

//setting env list
clo57176[1] = foldl;
clo57176[2] = fun;
clo57176[3] = lst;
clo57176[4] = kont56224;
clo57176[5] = cdr;
void* f5622656352 = encode_clo(clo57176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5622656352;
arg_buffer[3] = a5612456351;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56500 = encode_clo(alloc_clo(lam56500_fptr, 0));

void* lam56502_fptr() // lam56502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56503 = arg_buffer[1];
//reading env and args
void* a5612356349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56503))[7];
//not do dummy comment
void* kont56224 = (decode_clo(env56503))[6];
//not do dummy comment
void* lst = (decode_clo(env56503))[5];
//not do dummy comment
void* fun = (decode_clo(env56503))[4];
//not do dummy comment
void* acc = (decode_clo(env56503))[3];
//not do dummy comment
void* car = (decode_clo(env56503))[2];
//not do dummy comment
void* foldl = (decode_clo(env56503))[1];

//if-clause
bool if_guard57177 = is_true(a5612356349);
if(if_guard57177)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56224);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56224))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57179 = alloc_clo(lam56500_fptr, 6);

//setting env list
clo57179[1] = foldl;
clo57179[2] = acc;
clo57179[3] = fun;
clo57179[4] = lst;
clo57179[5] = kont56224;
clo57179[6] = cdr;
void* f5622756350 = encode_clo(clo57179);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5622756350;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56502 = encode_clo(alloc_clo(lam56502_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56504 = arg_buffer[1];
//reading env and args
void* kont56224 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57181 = alloc_clo(lam56502_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo57181[1] = foldl;
clo57181[2] = car;
clo57181[3] = acc;
clo57181[4] = fun;
clo57181[5] = lst;
clo57181[6] = kont56224;
clo57181[7] = cdr;
void* f5622856348 = encode_clo(clo57181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5622856348;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam56505_fptr() // lam56505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56506 = arg_buffer[1];
//reading env and args
void* a5613056363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5612856359 = (decode_clo(env56506))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56506))[2];
//not do dummy comment
void* kont56229 = (decode_clo(env56506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont56229;
arg_buffer[3] = a5612856359;
arg_buffer[4] = a5613056363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56505 = encode_clo(alloc_clo(lam56505_fptr, 0));

void* lam56507_fptr() // lam56507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56508 = arg_buffer[1];
//reading env and args
void* a5612956361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5612856359 = (decode_clo(env56508))[5];
//not do dummy comment
void* lst2 = (decode_clo(env56508))[4];
//not do dummy comment
void* cons = (decode_clo(env56508))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56508))[2];
//not do dummy comment
void* kont56229 = (decode_clo(env56508))[1];

//creating new closure instance
void** clo57183 = alloc_clo(lam56505_fptr, 3);

//setting env list
clo57183[1] = kont56229;
clo57183[2] = reverse_u45helper;
clo57183[3] = a5612856359;
void* f5623056362 = encode_clo(clo57183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5623056362;
arg_buffer[3] = a5612956361;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56507 = encode_clo(alloc_clo(lam56507_fptr, 0));

void* lam56509_fptr() // lam56509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56510 = arg_buffer[1];
//reading env and args
void* a5612856359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56510))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56510))[5];
//not do dummy comment
void* car = (decode_clo(env56510))[4];
//not do dummy comment
void* cons = (decode_clo(env56510))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56510))[2];
//not do dummy comment
void* kont56229 = (decode_clo(env56510))[1];

//creating new closure instance
void** clo57185 = alloc_clo(lam56507_fptr, 5);

//setting env list
clo57185[1] = kont56229;
clo57185[2] = reverse_u45helper;
clo57185[3] = cons;
clo57185[4] = lst2;
clo57185[5] = a5612856359;
void* f5623156360 = encode_clo(clo57185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5623156360;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56509 = encode_clo(alloc_clo(lam56509_fptr, 0));

void* lam56511_fptr() // lam56511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56512 = arg_buffer[1];
//reading env and args
void* a5612756357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56512))[7];
//not do dummy comment
void* lst = (decode_clo(env56512))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56512))[5];
//not do dummy comment
void* car = (decode_clo(env56512))[4];
//not do dummy comment
void* cons = (decode_clo(env56512))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56512))[2];
//not do dummy comment
void* kont56229 = (decode_clo(env56512))[1];

//if-clause
bool if_guard57186 = is_true(a5612756357);
if(if_guard57186)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56229);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56229))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57188 = alloc_clo(lam56509_fptr, 6);

//setting env list
clo57188[1] = kont56229;
clo57188[2] = reverse_u45helper;
clo57188[3] = cons;
clo57188[4] = car;
clo57188[5] = lst2;
clo57188[6] = lst;
void* f5623256358 = encode_clo(clo57188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5623256358;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56511 = encode_clo(alloc_clo(lam56511_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56513 = arg_buffer[1];
//reading env and args
void* kont56229 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57190 = alloc_clo(lam56511_fptr, 7);

//setting env list
clo57190[1] = kont56229;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo57190[2] = reverse_u45helper;
clo57190[3] = cons;
clo57190[4] = car;
clo57190[5] = lst2;
clo57190[6] = lst;
clo57190[7] = cdr;
void* f5623356356 = encode_clo(clo57190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5623356356;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam56514_fptr() // lam56514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56515 = arg_buffer[1];
//reading env and args
void* a5613156365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56515))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56515))[2];
//not do dummy comment
void* kont56234 = (decode_clo(env56515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont56234;
arg_buffer[3] = lst;
arg_buffer[4] = a5613156365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56514 = encode_clo(alloc_clo(lam56514_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56516 = arg_buffer[1];
//reading env and args
void* kont56234 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57192 = alloc_clo(lam56514_fptr, 3);

//setting env list
clo57192[1] = kont56234;
clo57192[2] = reverse_u45helper;
clo57192[3] = lst;
void* f5623556364 = encode_clo(clo57192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5623556364;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam56517_fptr() // lam56517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56518 = arg_buffer[1];
//reading env and args
void* x5613456370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56236 = (decode_clo(env56518))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56236);
arg_buffer[2] = x5613456370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56517 = encode_clo(alloc_clo(lam56517_fptr, 0));

void* lam56519_fptr() // lam56519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56520 = arg_buffer[1];
//reading env and args
void* a5613956379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5613556372 = (decode_clo(env56520))[4];
//not do dummy comment
void* a5613756375 = (decode_clo(env56520))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56520))[2];
//not do dummy comment
void* kont56236 = (decode_clo(env56520))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont56236;
arg_buffer[3] = a5613556372;
arg_buffer[4] = a5613756375;
arg_buffer[5] = a5613956379;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56519 = encode_clo(alloc_clo(lam56519_fptr, 0));

void* lam56521_fptr() // lam56521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56522 = arg_buffer[1];
//reading env and args
void* a5613856377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5613556372 = (decode_clo(env56522))[6];
//not do dummy comment
void* a5613756375 = (decode_clo(env56522))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56522))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56522))[3];
//not do dummy comment
void* kont56236 = (decode_clo(env56522))[2];
//not do dummy comment
void* cons = (decode_clo(env56522))[1];

//creating new closure instance
void** clo57194 = alloc_clo(lam56519_fptr, 4);

//setting env list
clo57194[1] = kont56236;
clo57194[2] = take_u45helper;
clo57194[3] = a5613756375;
clo57194[4] = a5613556372;
void* f5623856378 = encode_clo(clo57194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5623856378;
arg_buffer[3] = a5613856377;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56521 = encode_clo(alloc_clo(lam56521_fptr, 0));

void* lam56523_fptr() // lam56523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56524 = arg_buffer[1];
//reading env and args
void* a5613756375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56524))[7];
//not do dummy comment
void* a5613556372 = (decode_clo(env56524))[6];
//not do dummy comment
void* car = (decode_clo(env56524))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56524))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56524))[3];
//not do dummy comment
void* kont56236 = (decode_clo(env56524))[2];
//not do dummy comment
void* cons = (decode_clo(env56524))[1];

//creating new closure instance
void** clo57196 = alloc_clo(lam56521_fptr, 6);

//setting env list
clo57196[1] = cons;
clo57196[2] = kont56236;
clo57196[3] = lst2;
clo57196[4] = take_u45helper;
clo57196[5] = a5613756375;
clo57196[6] = a5613556372;
void* f5623956376 = encode_clo(clo57196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5623956376;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56523 = encode_clo(alloc_clo(lam56523_fptr, 0));

void* lam56526_fptr() // lam56526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56527 = arg_buffer[1];
//reading env and args
void* a5613556372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56527))[8];
//not do dummy comment
void* _u45 = (decode_clo(env56527))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env56527))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56527))[5];
//not do dummy comment
void* n = (decode_clo(env56527))[4];
//not do dummy comment
void* car = (decode_clo(env56527))[3];
//not do dummy comment
void* kont56236 = (decode_clo(env56527))[2];
//not do dummy comment
void* cons = (decode_clo(env56527))[1];
mpz_t* mpzvar57197 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57197, "1", 10);
void* a5613656373 = encode_mpz(mpzvar57197);

//creating new closure instance
void** clo57199 = alloc_clo(lam56523_fptr, 7);

//setting env list
clo57199[1] = cons;
clo57199[2] = kont56236;
clo57199[3] = lst2;
clo57199[4] = take_u45helper;
clo57199[5] = car;
clo57199[6] = a5613556372;
clo57199[7] = lst;
void* f5624056374 = encode_clo(clo57199);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5624056374;
arg_buffer[3] = n;
arg_buffer[4] = a5613656373;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56526 = encode_clo(alloc_clo(lam56526_fptr, 0));

void* lam56528_fptr() // lam56528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56529 = arg_buffer[1];
//reading env and args
void* a5613356368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56529))[10];
//not do dummy comment
void* lst = (decode_clo(env56529))[9];
//not do dummy comment
void* reverse = (decode_clo(env56529))[8];
//not do dummy comment
void* _u45 = (decode_clo(env56529))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env56529))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56529))[5];
//not do dummy comment
void* n = (decode_clo(env56529))[4];
//not do dummy comment
void* car = (decode_clo(env56529))[3];
//not do dummy comment
void* kont56236 = (decode_clo(env56529))[2];
//not do dummy comment
void* cons = (decode_clo(env56529))[1];

//if-clause
bool if_guard57200 = is_true(a5613356368);
if(if_guard57200)
{

//creating new closure instance
void** clo57202 = alloc_clo(lam56517_fptr, 1);

//setting env list
clo57202[1] = kont56236;
void* f5623756369 = encode_clo(clo57202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5623756369;
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
void** clo57204 = alloc_clo(lam56526_fptr, 8);

//setting env list
clo57204[1] = cons;
clo57204[2] = kont56236;
clo57204[3] = car;
clo57204[4] = n;
clo57204[5] = lst2;
clo57204[6] = take_u45helper;
clo57204[7] = _u45;
clo57204[8] = lst;
void* f5624156371 = encode_clo(clo57204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5624156371;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56528 = encode_clo(alloc_clo(lam56528_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56531 = arg_buffer[1];
//reading env and args
void* kont56236 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar57205 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57205, "0", 10);
void* a5613256366 = encode_mpz(mpzvar57205);

//creating new closure instance
void** clo57207 = alloc_clo(lam56528_fptr, 10);

//setting env list
clo57207[1] = cons;
clo57207[2] = kont56236;
clo57207[3] = car;
clo57207[4] = n;
clo57207[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo57207[6] = take_u45helper;
clo57207[7] = _u45;
clo57207[8] = reverse;
clo57207[9] = lst;
clo57207[10] = cdr;
void* f5624256367 = encode_clo(clo57207);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5624256367;
arg_buffer[3] = n;
arg_buffer[4] = a5613256366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam56532_fptr() // lam56532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56533 = arg_buffer[1];
//reading env and args
void* a5614056381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56533))[4];
//not do dummy comment
void* kont56243 = (decode_clo(env56533))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56533))[2];
//not do dummy comment
void* n = (decode_clo(env56533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont56243;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5614056381;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56532 = encode_clo(alloc_clo(lam56532_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56534 = arg_buffer[1];
//reading env and args
void* kont56243 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57209 = alloc_clo(lam56532_fptr, 4);

//setting env list
clo57209[1] = n;
clo57209[2] = take_u45helper;
clo57209[3] = kont56243;
clo57209[4] = lst;
void* f5624456380 = encode_clo(clo57209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5624456380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam56536_fptr() // lam56536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56537 = arg_buffer[1];
//reading env and args
void* a5614556389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5614356385 = (decode_clo(env56537))[3];
//not do dummy comment
void* kont56245 = (decode_clo(env56537))[2];
//not do dummy comment
void* _u43 = (decode_clo(env56537))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont56245;
arg_buffer[3] = a5614356385;
arg_buffer[4] = a5614556389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56536 = encode_clo(alloc_clo(lam56536_fptr, 0));

void* lam56538_fptr() // lam56538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56539 = arg_buffer[1];
//reading env and args
void* a5614456387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5614356385 = (decode_clo(env56539))[4];
//not do dummy comment
void* length = (decode_clo(env56539))[3];
//not do dummy comment
void* kont56245 = (decode_clo(env56539))[2];
//not do dummy comment
void* _u43 = (decode_clo(env56539))[1];

//creating new closure instance
void** clo57211 = alloc_clo(lam56536_fptr, 3);

//setting env list
clo57211[1] = _u43;
clo57211[2] = kont56245;
clo57211[3] = a5614356385;
void* f5624656388 = encode_clo(clo57211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5624656388;
arg_buffer[3] = a5614456387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56538 = encode_clo(alloc_clo(lam56538_fptr, 0));

void* lam56541_fptr() // lam56541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56542 = arg_buffer[1];
//reading env and args
void* a5614156383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56542))[5];
//not do dummy comment
void* lst = (decode_clo(env56542))[4];
//not do dummy comment
void* length = (decode_clo(env56542))[3];
//not do dummy comment
void* kont56245 = (decode_clo(env56542))[2];
//not do dummy comment
void* _u43 = (decode_clo(env56542))[1];

//if-clause
bool if_guard57212 = is_true(a5614156383);
if(if_guard57212)
{
mpz_t* mpzvar57213 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57213, "0", 10);
void* x5614256384 = encode_mpz(mpzvar57213);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56245);
arg_buffer[2] = x5614256384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar57214 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57214, "1", 10);
void* a5614356385 = encode_mpz(mpzvar57214);

//creating new closure instance
void** clo57216 = alloc_clo(lam56538_fptr, 4);

//setting env list
clo57216[1] = _u43;
clo57216[2] = kont56245;
clo57216[3] = length;
clo57216[4] = a5614356385;
void* f5624756386 = encode_clo(clo57216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5624756386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56541 = encode_clo(alloc_clo(lam56541_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56543 = arg_buffer[1];
//reading env and args
void* kont56245 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57218 = alloc_clo(lam56541_fptr, 5);

//setting env list
clo57218[1] = _u43;
clo57218[2] = kont56245;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo57218[3] = length;
clo57218[4] = lst;
clo57218[5] = cdr;
void* f5624856382 = encode_clo(clo57218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5624856382;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam56544_fptr() // lam56544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56545 = arg_buffer[1];
//reading env and args
void* x5614756393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56249 = (decode_clo(env56545))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56249);
arg_buffer[2] = x5614756393;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56249))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56544 = encode_clo(alloc_clo(lam56544_fptr, 0));

void* lam56546_fptr() // lam56546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56547 = arg_buffer[1];
//reading env and args
void* a5615156401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56249 = (decode_clo(env56547))[3];
//not do dummy comment
void* cons = (decode_clo(env56547))[2];
//not do dummy comment
void* a5614956397 = (decode_clo(env56547))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont56249;
arg_buffer[3] = a5614956397;
arg_buffer[4] = a5615156401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56546 = encode_clo(alloc_clo(lam56546_fptr, 0));

void* lam56548_fptr() // lam56548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56549 = arg_buffer[1];
//reading env and args
void* a5615056399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env56549))[5];
//not do dummy comment
void* cons = (decode_clo(env56549))[4];
//not do dummy comment
void* a5614956397 = (decode_clo(env56549))[3];
//not do dummy comment
void* proc = (decode_clo(env56549))[2];
//not do dummy comment
void* kont56249 = (decode_clo(env56549))[1];

//creating new closure instance
void** clo57220 = alloc_clo(lam56546_fptr, 3);

//setting env list
clo57220[1] = a5614956397;
clo57220[2] = cons;
clo57220[3] = kont56249;
void* f5625156400 = encode_clo(clo57220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5625156400;
arg_buffer[3] = proc;
arg_buffer[4] = a5615056399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56548 = encode_clo(alloc_clo(lam56548_fptr, 0));

void* lam56550_fptr() // lam56550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56551 = arg_buffer[1];
//reading env and args
void* a5614956397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56551))[6];
//not do dummy comment
void* lst = (decode_clo(env56551))[5];
//not do dummy comment
void* map = (decode_clo(env56551))[4];
//not do dummy comment
void* cons = (decode_clo(env56551))[3];
//not do dummy comment
void* proc = (decode_clo(env56551))[2];
//not do dummy comment
void* kont56249 = (decode_clo(env56551))[1];

//creating new closure instance
void** clo57222 = alloc_clo(lam56548_fptr, 5);

//setting env list
clo57222[1] = kont56249;
clo57222[2] = proc;
clo57222[3] = a5614956397;
clo57222[4] = cons;
clo57222[5] = map;
void* f5625256398 = encode_clo(clo57222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5625256398;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56550 = encode_clo(alloc_clo(lam56550_fptr, 0));

void* lam56552_fptr() // lam56552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56553 = arg_buffer[1];
//reading env and args
void* a5614856395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56553))[6];
//not do dummy comment
void* lst = (decode_clo(env56553))[5];
//not do dummy comment
void* map = (decode_clo(env56553))[4];
//not do dummy comment
void* cons = (decode_clo(env56553))[3];
//not do dummy comment
void* proc = (decode_clo(env56553))[2];
//not do dummy comment
void* kont56249 = (decode_clo(env56553))[1];

//creating new closure instance
void** clo57224 = alloc_clo(lam56550_fptr, 6);

//setting env list
clo57224[1] = kont56249;
clo57224[2] = proc;
clo57224[3] = cons;
clo57224[4] = map;
clo57224[5] = lst;
clo57224[6] = cdr;
void* f5625356396 = encode_clo(clo57224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5625356396;
arg_buffer[3] = a5614856395;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56552 = encode_clo(alloc_clo(lam56552_fptr, 0));

void* lam56554_fptr() // lam56554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56555 = arg_buffer[1];
//reading env and args
void* a5614656391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56555))[8];
//not do dummy comment
void* map = (decode_clo(env56555))[7];
//not do dummy comment
void* car = (decode_clo(env56555))[6];
//not do dummy comment
void* cons = (decode_clo(env56555))[5];
//not do dummy comment
void* list = (decode_clo(env56555))[4];
//not do dummy comment
void* cdr = (decode_clo(env56555))[3];
//not do dummy comment
void* proc = (decode_clo(env56555))[2];
//not do dummy comment
void* kont56249 = (decode_clo(env56555))[1];

//if-clause
bool if_guard57225 = is_true(a5614656391);
if(if_guard57225)
{

//creating new closure instance
void** clo57227 = alloc_clo(lam56544_fptr, 1);

//setting env list
clo57227[1] = kont56249;
void* f5625056392 = encode_clo(clo57227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5625056392;
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
void** clo57229 = alloc_clo(lam56552_fptr, 6);

//setting env list
clo57229[1] = kont56249;
clo57229[2] = proc;
clo57229[3] = cons;
clo57229[4] = map;
clo57229[5] = lst;
clo57229[6] = cdr;
void* f5625456394 = encode_clo(clo57229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5625456394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56554 = encode_clo(alloc_clo(lam56554_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56556 = arg_buffer[1];
//reading env and args
void* kont56249 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57231 = alloc_clo(lam56554_fptr, 8);

//setting env list
clo57231[1] = kont56249;
clo57231[2] = proc;
clo57231[3] = cdr;
clo57231[4] = list;
clo57231[5] = cons;
clo57231[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo57231[7] = map;
clo57231[8] = lst;
void* f5625556390 = encode_clo(clo57231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5625556390;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam56557_fptr() // lam56557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56558 = arg_buffer[1];
//reading env and args
void* x5615356405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56256 = (decode_clo(env56558))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56256);
arg_buffer[2] = x5615356405;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56256))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56557 = encode_clo(alloc_clo(lam56557_fptr, 0));

void* lam56559_fptr() // lam56559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56560 = arg_buffer[1];
//reading env and args
void* a5615856415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56256 = (decode_clo(env56560))[3];
//not do dummy comment
void* a5615656411 = (decode_clo(env56560))[2];
//not do dummy comment
void* cons = (decode_clo(env56560))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont56256;
arg_buffer[3] = a5615656411;
arg_buffer[4] = a5615856415;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56559 = encode_clo(alloc_clo(lam56559_fptr, 0));

void* lam56561_fptr() // lam56561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56562 = arg_buffer[1];
//reading env and args
void* a5615756413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56256 = (decode_clo(env56562))[5];
//not do dummy comment
void* op = (decode_clo(env56562))[4];
//not do dummy comment
void* cons = (decode_clo(env56562))[3];
//not do dummy comment
void* filter = (decode_clo(env56562))[2];
//not do dummy comment
void* a5615656411 = (decode_clo(env56562))[1];

//creating new closure instance
void** clo57233 = alloc_clo(lam56559_fptr, 3);

//setting env list
clo57233[1] = cons;
clo57233[2] = a5615656411;
clo57233[3] = kont56256;
void* f5625856414 = encode_clo(clo57233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5625856414;
arg_buffer[3] = op;
arg_buffer[4] = a5615756413;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56561 = encode_clo(alloc_clo(lam56561_fptr, 0));

void* lam56563_fptr() // lam56563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56564 = arg_buffer[1];
//reading env and args
void* a5615656411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56564))[6];
//not do dummy comment
void* kont56256 = (decode_clo(env56564))[5];
//not do dummy comment
void* lst = (decode_clo(env56564))[4];
//not do dummy comment
void* op = (decode_clo(env56564))[3];
//not do dummy comment
void* filter = (decode_clo(env56564))[2];
//not do dummy comment
void* cons = (decode_clo(env56564))[1];

//creating new closure instance
void** clo57235 = alloc_clo(lam56561_fptr, 5);

//setting env list
clo57235[1] = a5615656411;
clo57235[2] = filter;
clo57235[3] = cons;
clo57235[4] = op;
clo57235[5] = kont56256;
void* f5625956412 = encode_clo(clo57235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5625956412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56563 = encode_clo(alloc_clo(lam56563_fptr, 0));

void* lam56565_fptr() // lam56565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56566 = arg_buffer[1];
//reading env and args
void* a5615956417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56256 = (decode_clo(env56566))[3];
//not do dummy comment
void* op = (decode_clo(env56566))[2];
//not do dummy comment
void* filter = (decode_clo(env56566))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont56256;
arg_buffer[3] = op;
arg_buffer[4] = a5615956417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56565 = encode_clo(alloc_clo(lam56565_fptr, 0));

void* lam56567_fptr() // lam56567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56568 = arg_buffer[1];
//reading env and args
void* a5615556409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56568))[7];
//not do dummy comment
void* kont56256 = (decode_clo(env56568))[6];
//not do dummy comment
void* lst = (decode_clo(env56568))[5];
//not do dummy comment
void* op = (decode_clo(env56568))[4];
//not do dummy comment
void* cons = (decode_clo(env56568))[3];
//not do dummy comment
void* filter = (decode_clo(env56568))[2];
//not do dummy comment
void* car = (decode_clo(env56568))[1];

//if-clause
bool if_guard57236 = is_true(a5615556409);
if(if_guard57236)
{

//creating new closure instance
void** clo57238 = alloc_clo(lam56563_fptr, 6);

//setting env list
clo57238[1] = cons;
clo57238[2] = filter;
clo57238[3] = op;
clo57238[4] = lst;
clo57238[5] = kont56256;
clo57238[6] = cdr;
void* f5626056410 = encode_clo(clo57238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5626056410;
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
void** clo57240 = alloc_clo(lam56565_fptr, 3);

//setting env list
clo57240[1] = filter;
clo57240[2] = op;
clo57240[3] = kont56256;
void* f5626156416 = encode_clo(clo57240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5626156416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56567 = encode_clo(alloc_clo(lam56567_fptr, 0));

void* lam56569_fptr() // lam56569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56570 = arg_buffer[1];
//reading env and args
void* a5615456407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56570))[7];
//not do dummy comment
void* kont56256 = (decode_clo(env56570))[6];
//not do dummy comment
void* lst = (decode_clo(env56570))[5];
//not do dummy comment
void* op = (decode_clo(env56570))[4];
//not do dummy comment
void* cons = (decode_clo(env56570))[3];
//not do dummy comment
void* filter = (decode_clo(env56570))[2];
//not do dummy comment
void* car = (decode_clo(env56570))[1];

//creating new closure instance
void** clo57242 = alloc_clo(lam56567_fptr, 7);

//setting env list
clo57242[1] = car;
clo57242[2] = filter;
clo57242[3] = cons;
clo57242[4] = op;
clo57242[5] = lst;
clo57242[6] = kont56256;
clo57242[7] = cdr;
void* f5626256408 = encode_clo(clo57242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5626256408;
arg_buffer[3] = a5615456407;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56569 = encode_clo(alloc_clo(lam56569_fptr, 0));

void* lam56571_fptr() // lam56571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56572 = arg_buffer[1];
//reading env and args
void* a5615256403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56256 = (decode_clo(env56572))[8];
//not do dummy comment
void* lst = (decode_clo(env56572))[7];
//not do dummy comment
void* op = (decode_clo(env56572))[6];
//not do dummy comment
void* cons = (decode_clo(env56572))[5];
//not do dummy comment
void* list = (decode_clo(env56572))[4];
//not do dummy comment
void* cdr = (decode_clo(env56572))[3];
//not do dummy comment
void* filter = (decode_clo(env56572))[2];
//not do dummy comment
void* car = (decode_clo(env56572))[1];

//if-clause
bool if_guard57243 = is_true(a5615256403);
if(if_guard57243)
{

//creating new closure instance
void** clo57245 = alloc_clo(lam56557_fptr, 1);

//setting env list
clo57245[1] = kont56256;
void* f5625756404 = encode_clo(clo57245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5625756404;
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
void** clo57247 = alloc_clo(lam56569_fptr, 7);

//setting env list
clo57247[1] = car;
clo57247[2] = filter;
clo57247[3] = cons;
clo57247[4] = op;
clo57247[5] = lst;
clo57247[6] = kont56256;
clo57247[7] = cdr;
void* f5626356406 = encode_clo(clo57247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5626356406;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56571 = encode_clo(alloc_clo(lam56571_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56573 = arg_buffer[1];
//reading env and args
void* kont56256 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57249 = alloc_clo(lam56571_fptr, 8);

//setting env list
clo57249[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo57249[2] = filter;
clo57249[3] = cdr;
clo57249[4] = list;
clo57249[5] = cons;
clo57249[6] = op;
clo57249[7] = lst;
clo57249[8] = kont56256;
void* f5626456402 = encode_clo(clo57249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5626456402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam56574_fptr() // lam56574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56575 = arg_buffer[1];
//reading env and args
void* a5616456425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env56575))[3];
//not do dummy comment
void* a5616256422 = (decode_clo(env56575))[2];
//not do dummy comment
void* kont56265 = (decode_clo(env56575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont56265;
arg_buffer[3] = a5616256422;
arg_buffer[4] = a5616456425;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56574 = encode_clo(alloc_clo(lam56574_fptr, 0));

void* lam56577_fptr() // lam56577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56578 = arg_buffer[1];
//reading env and args
void* a5616256422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env56578))[4];
//not do dummy comment
void* kont56265 = (decode_clo(env56578))[3];
//not do dummy comment
void* n = (decode_clo(env56578))[2];
//not do dummy comment
void* _u45 = (decode_clo(env56578))[1];
mpz_t* mpzvar57250 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57250, "1", 10);
void* a5616356423 = encode_mpz(mpzvar57250);

//creating new closure instance
void** clo57252 = alloc_clo(lam56574_fptr, 3);

//setting env list
clo57252[1] = kont56265;
clo57252[2] = a5616256422;
clo57252[3] = drop;
void* f5626656424 = encode_clo(clo57252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5626656424;
arg_buffer[3] = n;
arg_buffer[4] = a5616356423;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56577 = encode_clo(alloc_clo(lam56577_fptr, 0));

void* lam56579_fptr() // lam56579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56580 = arg_buffer[1];
//reading env and args
void* a5616156420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56580))[6];
//not do dummy comment
void* kont56265 = (decode_clo(env56580))[5];
//not do dummy comment
void* n = (decode_clo(env56580))[4];
//not do dummy comment
void* _u45 = (decode_clo(env56580))[3];
//not do dummy comment
void* lst = (decode_clo(env56580))[2];
//not do dummy comment
void* drop = (decode_clo(env56580))[1];

//if-clause
bool if_guard57253 = is_true(a5616156420);
if(if_guard57253)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56265);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56265))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57255 = alloc_clo(lam56577_fptr, 4);

//setting env list
clo57255[1] = _u45;
clo57255[2] = n;
clo57255[3] = kont56265;
clo57255[4] = drop;
void* f5626756421 = encode_clo(clo57255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5626756421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56579 = encode_clo(alloc_clo(lam56579_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56582 = arg_buffer[1];
//reading env and args
void* kont56265 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar57256 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57256, "0", 10);
void* a5616056418 = encode_mpz(mpzvar57256);

//creating new closure instance
void** clo57258 = alloc_clo(lam56579_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo57258[1] = drop;
clo57258[2] = lst;
clo57258[3] = _u45;
clo57258[4] = n;
clo57258[5] = kont56265;
clo57258[6] = cdr;
void* f5626856419 = encode_clo(clo57258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5626856419;
arg_buffer[3] = n;
arg_buffer[4] = a5616056418;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam56583_fptr() // lam56583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56584 = arg_buffer[1];
//reading env and args
void* a5616856433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env56584))[3];
//not do dummy comment
void* kont56269 = (decode_clo(env56584))[2];
//not do dummy comment
void* a5616656429 = (decode_clo(env56584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont56269;
arg_buffer[3] = a5616656429;
arg_buffer[4] = a5616856433;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56583 = encode_clo(alloc_clo(lam56583_fptr, 0));

void* lam56585_fptr() // lam56585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56586 = arg_buffer[1];
//reading env and args
void* a5616756431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env56586))[5];
//not do dummy comment
void* proc = (decode_clo(env56586))[4];
//not do dummy comment
void* acc = (decode_clo(env56586))[3];
//not do dummy comment
void* kont56269 = (decode_clo(env56586))[2];
//not do dummy comment
void* a5616656429 = (decode_clo(env56586))[1];

//creating new closure instance
void** clo57260 = alloc_clo(lam56583_fptr, 3);

//setting env list
clo57260[1] = a5616656429;
clo57260[2] = kont56269;
clo57260[3] = proc;
void* f5627056432 = encode_clo(clo57260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5627056432;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5616756431;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56585 = encode_clo(alloc_clo(lam56585_fptr, 0));

void* lam56587_fptr() // lam56587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56588 = arg_buffer[1];
//reading env and args
void* a5616656429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56588))[6];
//not do dummy comment
void* kont56269 = (decode_clo(env56588))[5];
//not do dummy comment
void* foldr = (decode_clo(env56588))[4];
//not do dummy comment
void* lst = (decode_clo(env56588))[3];
//not do dummy comment
void* proc = (decode_clo(env56588))[2];
//not do dummy comment
void* acc = (decode_clo(env56588))[1];

//creating new closure instance
void** clo57262 = alloc_clo(lam56585_fptr, 5);

//setting env list
clo57262[1] = a5616656429;
clo57262[2] = kont56269;
clo57262[3] = acc;
clo57262[4] = proc;
clo57262[5] = foldr;
void* f5627156430 = encode_clo(clo57262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5627156430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56587 = encode_clo(alloc_clo(lam56587_fptr, 0));

void* lam56589_fptr() // lam56589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56590 = arg_buffer[1];
//reading env and args
void* a5616556427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56590))[7];
//not do dummy comment
void* car = (decode_clo(env56590))[6];
//not do dummy comment
void* kont56269 = (decode_clo(env56590))[5];
//not do dummy comment
void* foldr = (decode_clo(env56590))[4];
//not do dummy comment
void* lst = (decode_clo(env56590))[3];
//not do dummy comment
void* proc = (decode_clo(env56590))[2];
//not do dummy comment
void* acc = (decode_clo(env56590))[1];

//if-clause
bool if_guard57263 = is_true(a5616556427);
if(if_guard57263)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56269);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56269))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57265 = alloc_clo(lam56587_fptr, 6);

//setting env list
clo57265[1] = acc;
clo57265[2] = proc;
clo57265[3] = lst;
clo57265[4] = foldr;
clo57265[5] = kont56269;
clo57265[6] = cdr;
void* f5627256428 = encode_clo(clo57265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5627256428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56589 = encode_clo(alloc_clo(lam56589_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56591 = arg_buffer[1];
//reading env and args
void* kont56269 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57267 = alloc_clo(lam56589_fptr, 7);

//setting env list
clo57267[1] = acc;
clo57267[2] = proc;
clo57267[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo57267[4] = foldr;
clo57267[5] = kont56269;
clo57267[6] = car;
clo57267[7] = cdr;
void* f5627356426 = encode_clo(clo57267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5627356426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam56592_fptr() // lam56592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56593 = arg_buffer[1];
//reading env and args
void* a5617256441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56274 = (decode_clo(env56593))[3];
//not do dummy comment
void* a5617056437 = (decode_clo(env56593))[2];
//not do dummy comment
void* cons = (decode_clo(env56593))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont56274;
arg_buffer[3] = a5617056437;
arg_buffer[4] = a5617256441;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56592 = encode_clo(alloc_clo(lam56592_fptr, 0));

void* lam56594_fptr() // lam56594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56595 = arg_buffer[1];
//reading env and args
void* a5617156439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56274 = (decode_clo(env56595))[5];
//not do dummy comment
void* a5617056437 = (decode_clo(env56595))[4];
//not do dummy comment
void* append = (decode_clo(env56595))[3];
//not do dummy comment
void* lst2 = (decode_clo(env56595))[2];
//not do dummy comment
void* cons = (decode_clo(env56595))[1];

//creating new closure instance
void** clo57269 = alloc_clo(lam56592_fptr, 3);

//setting env list
clo57269[1] = cons;
clo57269[2] = a5617056437;
clo57269[3] = kont56274;
void* f5627556440 = encode_clo(clo57269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5627556440;
arg_buffer[3] = a5617156439;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56594 = encode_clo(alloc_clo(lam56594_fptr, 0));

void* lam56596_fptr() // lam56596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56597 = arg_buffer[1];
//reading env and args
void* a5617056437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56597))[6];
//not do dummy comment
void* kont56274 = (decode_clo(env56597))[5];
//not do dummy comment
void* append = (decode_clo(env56597))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56597))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56597))[2];
//not do dummy comment
void* cons = (decode_clo(env56597))[1];

//creating new closure instance
void** clo57271 = alloc_clo(lam56594_fptr, 5);

//setting env list
clo57271[1] = cons;
clo57271[2] = lst2;
clo57271[3] = append;
clo57271[4] = a5617056437;
clo57271[5] = kont56274;
void* f5627656438 = encode_clo(clo57271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5627656438;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56596 = encode_clo(alloc_clo(lam56596_fptr, 0));

void* lam56598_fptr() // lam56598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56599 = arg_buffer[1];
//reading env and args
void* a5616956435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56599))[7];
//not do dummy comment
void* kont56274 = (decode_clo(env56599))[6];
//not do dummy comment
void* append = (decode_clo(env56599))[5];
//not do dummy comment
void* lst2 = (decode_clo(env56599))[4];
//not do dummy comment
void* cons = (decode_clo(env56599))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56599))[2];
//not do dummy comment
void* car = (decode_clo(env56599))[1];

//if-clause
bool if_guard57272 = is_true(a5616956435);
if(if_guard57272)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56274);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56274))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57274 = alloc_clo(lam56596_fptr, 6);

//setting env list
clo57274[1] = cons;
clo57274[2] = lst1;
clo57274[3] = lst2;
clo57274[4] = append;
clo57274[5] = kont56274;
clo57274[6] = cdr;
void* f5627756436 = encode_clo(clo57274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5627756436;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56598 = encode_clo(alloc_clo(lam56598_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56600 = arg_buffer[1];
//reading env and args
void* kont56274 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57276 = alloc_clo(lam56598_fptr, 7);

//setting env list
clo57276[1] = car;
clo57276[2] = lst1;
clo57276[3] = cons;
clo57276[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo57276[5] = append;
clo57276[6] = kont56274;
clo57276[7] = cdr;
void* f5627856434 = encode_clo(clo57276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5627856434;
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
void* _56601 = arg_buffer[1];
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

void* kont5627956442 = prim_car(lst);
void* lst56443 = prim_cdr(lst);
void* x5617356444 = apply_prim_hash(lst56443);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5627956442);
arg_buffer[2] = x5617356444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5627956442))[0]);
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
void* _56602 = arg_buffer[1];
//reading env and args
void* kont56281 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5617456445 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56281);
arg_buffer[2] = x5617456445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56281))[0]);
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
void* _56603 = arg_buffer[1];
//reading env and args
void* kont56282 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5617556446 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56282);
arg_buffer[2] = x5617556446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56282))[0]);
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
void* _56604 = arg_buffer[1];
//reading env and args
void* kont56283 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5617656447 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56283);
arg_buffer[2] = x5617656447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56283))[0]);
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
void* _56605 = arg_buffer[1];
//reading env and args
void* kont56284 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5617756448 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56284);
arg_buffer[2] = x5617756448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56284))[0]);
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
void* _56611 = arg_buffer[1];
//reading env and args
void* kont56285 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar57277 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57277, "100", 10);
void* a5617856449 = encode_mpz(mpzvar57277);
mpz_t* mpzvar57278 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57278, "90", 10);
void* a5617956450 = encode_mpz(mpzvar57278);
mpz_t* mpzvar57279 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57279, "80", 10);
void* a5618056451 = encode_mpz(mpzvar57279);
mpz_t* mpzvar57280 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57280, "70", 10);
void* a5618156452 = encode_mpz(mpzvar57280);
mpz_t* mpzvar57281 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57281, "60", 10);
void* a5618256453 = encode_mpz(mpzvar57281);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62_u61);
arg_buffer[2] = kont56285;
arg_buffer[3] = a5617856449;
arg_buffer[4] = a5617956450;
arg_buffer[5] = a5618056451;
arg_buffer[6] = a5618156452;
arg_buffer[7] = a5618256453;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam56612_fptr() // lam56612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56613 = arg_buffer[1];
//reading env and args
void* x5618356455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56286 = (decode_clo(env56613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56286);
arg_buffer[2] = x5618356455;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56286))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56612 = encode_clo(alloc_clo(lam56612_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56614 = arg_buffer[1];
//reading env and args
void* kont56286 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo57283 = alloc_clo(lam56612_fptr, 1);

//setting env list
clo57283[1] = kont56286;
void* f5628756454 = encode_clo(clo57283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5628756454;
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

