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
void* _9561 = arg_buffer[1];
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

void* kont93029402 = prim_car(lst);
void* lst9403 = prim_cdr(lst);
void* x92169404 = apply_prim__u43(lst9403);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93029402);
arg_buffer[2] = x92169404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93029402))[0]);
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
void* _9562 = arg_buffer[1];
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

void* kont93049405 = prim_car(lst);
void* lst9406 = prim_cdr(lst);
void* x92179407 = apply_prim__u45(lst9406);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93049405);
arg_buffer[2] = x92179407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93049405))[0]);
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
void* _9563 = arg_buffer[1];
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

void* kont93069408 = prim_car(lst);
void* lst9409 = prim_cdr(lst);
void* x92189410 = apply_prim__u42(lst9409);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93069408);
arg_buffer[2] = x92189410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93069408))[0]);
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
void* _9564 = arg_buffer[1];
//reading env and args
void* kont9308 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x92199411 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9308);
arg_buffer[2] = x92199411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9308))[0]);
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
void* _9565 = arg_buffer[1];
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

void* kont93099412 = prim_car(lst);
void* lst9413 = prim_cdr(lst);
void* x92209414 = apply_prim__u47(lst9413);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93099412);
arg_buffer[2] = x92209414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93099412))[0]);
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
void* _9566 = arg_buffer[1];
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

void* kont93119415 = prim_car(lst);
void* lst9416 = prim_cdr(lst);
void* x92219417 = apply_prim__u61(lst9416);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93119415);
arg_buffer[2] = x92219417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93119415))[0]);
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
void* _9567 = arg_buffer[1];
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

void* kont93139418 = prim_car(lst);
void* lst9419 = prim_cdr(lst);
void* x92229420 = apply_prim__u62(lst9419);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93139418);
arg_buffer[2] = x92229420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93139418))[0]);
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
void* _9568 = arg_buffer[1];
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

void* kont93159421 = prim_car(lst);
void* lst9422 = prim_cdr(lst);
void* x92239423 = apply_prim__u60(lst9422);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93159421);
arg_buffer[2] = x92239423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93159421))[0]);
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
void* _9569 = arg_buffer[1];
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

void* kont93179424 = prim_car(lst);
void* lst9425 = prim_cdr(lst);
void* x92249426 = apply_prim__u60_u61(lst9425);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93179424);
arg_buffer[2] = x92249426;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93179424))[0]);
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
void* _9570 = arg_buffer[1];
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

void* kont93199427 = prim_car(lst);
void* lst9428 = prim_cdr(lst);
void* x92259429 = apply_prim__u62_u61(lst9428);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93199427);
arg_buffer[2] = x92259429;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93199427))[0]);
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
void* _9571 = arg_buffer[1];
//reading env and args
void* kont9321 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x92269430 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9321);
arg_buffer[2] = x92269430;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9321))[0]);
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
void* _9572 = arg_buffer[1];
//reading env and args
void* kont9322 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x92279431 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9322);
arg_buffer[2] = x92279431;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9322))[0]);
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
void* _9573 = arg_buffer[1];
//reading env and args
void* kont9323 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x92289432 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9323);
arg_buffer[2] = x92289432;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9323))[0]);
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
void* _9574 = arg_buffer[1];
//reading env and args
void* kont9324 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x92299433 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9324);
arg_buffer[2] = x92299433;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9324))[0]);
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
void* _9575 = arg_buffer[1];
//reading env and args
void* kont9325 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x92309434 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9325);
arg_buffer[2] = x92309434;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9325))[0]);
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
void* _9576 = arg_buffer[1];
//reading env and args
void* kont9326 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x92319435 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9326);
arg_buffer[2] = x92319435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9326))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam9577_fptr() // lam9577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9578 = arg_buffer[1];
//reading env and args
void* a92349439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9327 = (decode_clo(env9578))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env9578))[2];
//not do dummy comment
void* a92329436 = (decode_clo(env9578))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9327;
arg_buffer[3] = a92329436;
arg_buffer[4] = a92349439;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9577 = encode_clo(alloc_clo(lam9577_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9581 = arg_buffer[1];
//reading env and args
void* kont9327 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10219 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10219, "0", 10);
void* a92329436 = encode_mpz(mpzvar10219);
mpz_t* mpzvar10220 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10220, "2", 10);
void* a92339437 = encode_mpz(mpzvar10220);

//creating new closure instance
void** clo10222 = alloc_clo(lam9577_fptr, 3);

//setting env list
clo10222[1] = a92329436;
clo10222[2] = equal_u63;
clo10222[3] = kont9327;
void* f93289438 = encode_clo(clo10222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f93289438;
arg_buffer[3] = x;
arg_buffer[4] = a92339437;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam9582_fptr() // lam9582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9583 = arg_buffer[1];
//reading env and args
void* a92379443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92359440 = (decode_clo(env9583))[3];
//not do dummy comment
void* kont9329 = (decode_clo(env9583))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9583))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9329;
arg_buffer[3] = a92359440;
arg_buffer[4] = a92379443;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9582 = encode_clo(alloc_clo(lam9582_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9586 = arg_buffer[1];
//reading env and args
void* kont9329 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10223 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10223, "1", 10);
void* a92359440 = encode_mpz(mpzvar10223);
mpz_t* mpzvar10224 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10224, "2", 10);
void* a92369441 = encode_mpz(mpzvar10224);

//creating new closure instance
void** clo10226 = alloc_clo(lam9582_fptr, 3);

//setting env list
clo10226[1] = equal_u63;
clo10226[2] = kont9329;
clo10226[3] = a92359440;
void* f93309442 = encode_clo(clo10226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f93309442;
arg_buffer[3] = x;
arg_buffer[4] = a92369441;
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
void* _9587 = arg_buffer[1];
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

void* kont93319444 = prim_car(x);
void* x9445 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93319444);
arg_buffer[2] = x9445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93319444))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam9590_fptr() // lam9590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9591 = arg_buffer[1];
//reading env and args
void* a92439455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9333 = (decode_clo(env9591))[3];
//not do dummy comment
void* x = (decode_clo(env9591))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env9591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont9333;
arg_buffer[3] = x;
arg_buffer[4] = a92439455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9590 = encode_clo(alloc_clo(lam9590_fptr, 0));

void* lam9592_fptr() // lam9592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9593 = arg_buffer[1];
//reading env and args
void* a92419452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9593))[5];
//not do dummy comment
void* lst = (decode_clo(env9593))[4];
//not do dummy comment
void* kont9333 = (decode_clo(env9593))[3];
//not do dummy comment
void* x = (decode_clo(env9593))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env9593))[1];

//if-clause
bool if_guard10227 = is_true(a92419452);
if(if_guard10227)
{
void* x92429453 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9333);
arg_buffer[2] = x92429453;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9333))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10229 = alloc_clo(lam9590_fptr, 3);

//setting env list
clo10229[1] = member_u63;
clo10229[2] = x;
clo10229[3] = kont9333;
void* f93349454 = encode_clo(clo10229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93349454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9592 = encode_clo(alloc_clo(lam9592_fptr, 0));

void* lam9594_fptr() // lam9594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9595 = arg_buffer[1];
//reading env and args
void* a92409450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9595))[6];
//not do dummy comment
void* lst = (decode_clo(env9595))[5];
//not do dummy comment
void* x = (decode_clo(env9595))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9595))[3];
//not do dummy comment
void* kont9333 = (decode_clo(env9595))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9595))[1];

//creating new closure instance
void** clo10231 = alloc_clo(lam9592_fptr, 5);

//setting env list
clo10231[1] = member_u63;
clo10231[2] = x;
clo10231[3] = kont9333;
clo10231[4] = lst;
clo10231[5] = cdr;
void* f93359451 = encode_clo(clo10231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f93359451;
arg_buffer[3] = a92409450;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9594 = encode_clo(alloc_clo(lam9594_fptr, 0));

void* lam9596_fptr() // lam9596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9597 = arg_buffer[1];
//reading env and args
void* a92389447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9597))[7];
//not do dummy comment
void* lst = (decode_clo(env9597))[6];
//not do dummy comment
void* x = (decode_clo(env9597))[5];
//not do dummy comment
void* car = (decode_clo(env9597))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9597))[3];
//not do dummy comment
void* kont9333 = (decode_clo(env9597))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9597))[1];

//if-clause
bool if_guard10232 = is_true(a92389447);
if(if_guard10232)
{
void* x92399448 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9333);
arg_buffer[2] = x92399448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9333))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10234 = alloc_clo(lam9594_fptr, 6);

//setting env list
clo10234[1] = equal_u63;
clo10234[2] = kont9333;
clo10234[3] = member_u63;
clo10234[4] = x;
clo10234[5] = lst;
clo10234[6] = cdr;
void* f93369449 = encode_clo(clo10234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93369449;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9596 = encode_clo(alloc_clo(lam9596_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9598 = arg_buffer[1];
//reading env and args
void* kont9333 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10236 = alloc_clo(lam9596_fptr, 7);

//setting env list
clo10236[1] = equal_u63;
clo10236[2] = kont9333;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo10236[3] = member_u63;
clo10236[4] = car;
clo10236[5] = x;
clo10236[6] = lst;
clo10236[7] = cdr;
void* f93379446 = encode_clo(clo10236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93379446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam9599_fptr() // lam9599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9600 = arg_buffer[1];
//reading env and args
void* a92479463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92469461 = (decode_clo(env9600))[4];
//not do dummy comment
void* fun = (decode_clo(env9600))[3];
//not do dummy comment
void* kont9338 = (decode_clo(env9600))[2];
//not do dummy comment
void* foldl = (decode_clo(env9600))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont9338;
arg_buffer[3] = fun;
arg_buffer[4] = a92469461;
arg_buffer[5] = a92479463;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9599 = encode_clo(alloc_clo(lam9599_fptr, 0));

void* lam9601_fptr() // lam9601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9602 = arg_buffer[1];
//reading env and args
void* a92469461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9602))[5];
//not do dummy comment
void* lst = (decode_clo(env9602))[4];
//not do dummy comment
void* fun = (decode_clo(env9602))[3];
//not do dummy comment
void* kont9338 = (decode_clo(env9602))[2];
//not do dummy comment
void* foldl = (decode_clo(env9602))[1];

//creating new closure instance
void** clo10238 = alloc_clo(lam9599_fptr, 4);

//setting env list
clo10238[1] = foldl;
clo10238[2] = kont9338;
clo10238[3] = fun;
clo10238[4] = a92469461;
void* f93399462 = encode_clo(clo10238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93399462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9601 = encode_clo(alloc_clo(lam9601_fptr, 0));

void* lam9603_fptr() // lam9603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9604 = arg_buffer[1];
//reading env and args
void* a92459459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9604))[6];
//not do dummy comment
void* lst = (decode_clo(env9604))[5];
//not do dummy comment
void* fun = (decode_clo(env9604))[4];
//not do dummy comment
void* acc = (decode_clo(env9604))[3];
//not do dummy comment
void* kont9338 = (decode_clo(env9604))[2];
//not do dummy comment
void* foldl = (decode_clo(env9604))[1];

//creating new closure instance
void** clo10240 = alloc_clo(lam9601_fptr, 5);

//setting env list
clo10240[1] = foldl;
clo10240[2] = kont9338;
clo10240[3] = fun;
clo10240[4] = lst;
clo10240[5] = cdr;
void* f93409460 = encode_clo(clo10240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f93409460;
arg_buffer[3] = a92459459;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9603 = encode_clo(alloc_clo(lam9603_fptr, 0));

void* lam9605_fptr() // lam9605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9606 = arg_buffer[1];
//reading env and args
void* a92449457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9606))[7];
//not do dummy comment
void* lst = (decode_clo(env9606))[6];
//not do dummy comment
void* fun = (decode_clo(env9606))[5];
//not do dummy comment
void* acc = (decode_clo(env9606))[4];
//not do dummy comment
void* foldl = (decode_clo(env9606))[3];
//not do dummy comment
void* kont9338 = (decode_clo(env9606))[2];
//not do dummy comment
void* car = (decode_clo(env9606))[1];

//if-clause
bool if_guard10241 = is_true(a92449457);
if(if_guard10241)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9338);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9338))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10243 = alloc_clo(lam9603_fptr, 6);

//setting env list
clo10243[1] = foldl;
clo10243[2] = kont9338;
clo10243[3] = acc;
clo10243[4] = fun;
clo10243[5] = lst;
clo10243[6] = cdr;
void* f93419458 = encode_clo(clo10243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93419458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9605 = encode_clo(alloc_clo(lam9605_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9607 = arg_buffer[1];
//reading env and args
void* kont9338 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10245 = alloc_clo(lam9605_fptr, 7);

//setting env list
clo10245[1] = car;
clo10245[2] = kont9338;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo10245[3] = foldl;
clo10245[4] = acc;
clo10245[5] = fun;
clo10245[6] = lst;
clo10245[7] = cdr;
void* f93429456 = encode_clo(clo10245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93429456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam9608_fptr() // lam9608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9609 = arg_buffer[1];
//reading env and args
void* a92519471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9343 = (decode_clo(env9609))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9609))[2];
//not do dummy comment
void* a92499467 = (decode_clo(env9609))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9343;
arg_buffer[3] = a92499467;
arg_buffer[4] = a92519471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9608 = encode_clo(alloc_clo(lam9608_fptr, 0));

void* lam9610_fptr() // lam9610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9611 = arg_buffer[1];
//reading env and args
void* a92509469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9343 = (decode_clo(env9611))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9611))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9611))[3];
//not do dummy comment
void* cons = (decode_clo(env9611))[2];
//not do dummy comment
void* a92499467 = (decode_clo(env9611))[1];

//creating new closure instance
void** clo10247 = alloc_clo(lam9608_fptr, 3);

//setting env list
clo10247[1] = a92499467;
clo10247[2] = reverse_u45helper;
clo10247[3] = kont9343;
void* f93449470 = encode_clo(clo10247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f93449470;
arg_buffer[3] = a92509469;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9610 = encode_clo(alloc_clo(lam9610_fptr, 0));

void* lam9612_fptr() // lam9612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9613 = arg_buffer[1];
//reading env and args
void* a92499467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9343 = (decode_clo(env9613))[6];
//not do dummy comment
void* lst = (decode_clo(env9613))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9613))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9613))[3];
//not do dummy comment
void* car = (decode_clo(env9613))[2];
//not do dummy comment
void* cons = (decode_clo(env9613))[1];

//creating new closure instance
void** clo10249 = alloc_clo(lam9610_fptr, 5);

//setting env list
clo10249[1] = a92499467;
clo10249[2] = cons;
clo10249[3] = lst2;
clo10249[4] = reverse_u45helper;
clo10249[5] = kont9343;
void* f93459468 = encode_clo(clo10249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93459468;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9612 = encode_clo(alloc_clo(lam9612_fptr, 0));

void* lam9614_fptr() // lam9614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9615 = arg_buffer[1];
//reading env and args
void* a92489465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9615))[7];
//not do dummy comment
void* kont9343 = (decode_clo(env9615))[6];
//not do dummy comment
void* lst = (decode_clo(env9615))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9615))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9615))[3];
//not do dummy comment
void* car = (decode_clo(env9615))[2];
//not do dummy comment
void* cons = (decode_clo(env9615))[1];

//if-clause
bool if_guard10250 = is_true(a92489465);
if(if_guard10250)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9343);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9343))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10252 = alloc_clo(lam9612_fptr, 6);

//setting env list
clo10252[1] = cons;
clo10252[2] = car;
clo10252[3] = lst2;
clo10252[4] = reverse_u45helper;
clo10252[5] = lst;
clo10252[6] = kont9343;
void* f93469466 = encode_clo(clo10252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93469466;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9614 = encode_clo(alloc_clo(lam9614_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9616 = arg_buffer[1];
//reading env and args
void* kont9343 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10254 = alloc_clo(lam9614_fptr, 7);

//setting env list
clo10254[1] = cons;
clo10254[2] = car;
clo10254[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo10254[4] = reverse_u45helper;
clo10254[5] = lst;
clo10254[6] = kont9343;
clo10254[7] = cdr;
void* f93479464 = encode_clo(clo10254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93479464;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam9617_fptr() // lam9617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9618 = arg_buffer[1];
//reading env and args
void* a92529473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9618))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9618))[2];
//not do dummy comment
void* kont9348 = (decode_clo(env9618))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9348;
arg_buffer[3] = lst;
arg_buffer[4] = a92529473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9617 = encode_clo(alloc_clo(lam9617_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9619 = arg_buffer[1];
//reading env and args
void* kont9348 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10256 = alloc_clo(lam9617_fptr, 3);

//setting env list
clo10256[1] = kont9348;
clo10256[2] = reverse_u45helper;
clo10256[3] = lst;
void* f93499472 = encode_clo(clo10256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f93499472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam9620_fptr() // lam9620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9621 = arg_buffer[1];
//reading env and args
void* x92559478 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9350 = (decode_clo(env9621))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9350);
arg_buffer[2] = x92559478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9350))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9620 = encode_clo(alloc_clo(lam9620_fptr, 0));

void* lam9622_fptr() // lam9622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9623 = arg_buffer[1];
//reading env and args
void* a92609487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9350 = (decode_clo(env9623))[4];
//not do dummy comment
void* a92569480 = (decode_clo(env9623))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9623))[2];
//not do dummy comment
void* a92589483 = (decode_clo(env9623))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9350;
arg_buffer[3] = a92569480;
arg_buffer[4] = a92589483;
arg_buffer[5] = a92609487;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9622 = encode_clo(alloc_clo(lam9622_fptr, 0));

void* lam9624_fptr() // lam9624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9625 = arg_buffer[1];
//reading env and args
void* a92599485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9350 = (decode_clo(env9625))[6];
//not do dummy comment
void* a92569480 = (decode_clo(env9625))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env9625))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9625))[3];
//not do dummy comment
void* cons = (decode_clo(env9625))[2];
//not do dummy comment
void* a92589483 = (decode_clo(env9625))[1];

//creating new closure instance
void** clo10258 = alloc_clo(lam9622_fptr, 4);

//setting env list
clo10258[1] = a92589483;
clo10258[2] = take_u45helper;
clo10258[3] = a92569480;
clo10258[4] = kont9350;
void* f93529486 = encode_clo(clo10258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f93529486;
arg_buffer[3] = a92599485;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9624 = encode_clo(alloc_clo(lam9624_fptr, 0));

void* lam9626_fptr() // lam9626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9627 = arg_buffer[1];
//reading env and args
void* a92589483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9627))[7];
//not do dummy comment
void* kont9350 = (decode_clo(env9627))[6];
//not do dummy comment
void* a92569480 = (decode_clo(env9627))[5];
//not do dummy comment
void* car = (decode_clo(env9627))[4];
//not do dummy comment
void* cons = (decode_clo(env9627))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9627))[2];
//not do dummy comment
void* lst2 = (decode_clo(env9627))[1];

//creating new closure instance
void** clo10260 = alloc_clo(lam9624_fptr, 6);

//setting env list
clo10260[1] = a92589483;
clo10260[2] = cons;
clo10260[3] = lst2;
clo10260[4] = take_u45helper;
clo10260[5] = a92569480;
clo10260[6] = kont9350;
void* f93539484 = encode_clo(clo10260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93539484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9626 = encode_clo(alloc_clo(lam9626_fptr, 0));

void* lam9629_fptr() // lam9629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9630 = arg_buffer[1];
//reading env and args
void* a92569480 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9630))[8];
//not do dummy comment
void* kont9350 = (decode_clo(env9630))[7];
//not do dummy comment
void* cons = (decode_clo(env9630))[6];
//not do dummy comment
void* _u45 = (decode_clo(env9630))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env9630))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9630))[3];
//not do dummy comment
void* n = (decode_clo(env9630))[2];
//not do dummy comment
void* car = (decode_clo(env9630))[1];
mpz_t* mpzvar10261 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10261, "1", 10);
void* a92579481 = encode_mpz(mpzvar10261);

//creating new closure instance
void** clo10263 = alloc_clo(lam9626_fptr, 7);

//setting env list
clo10263[1] = lst2;
clo10263[2] = take_u45helper;
clo10263[3] = cons;
clo10263[4] = car;
clo10263[5] = a92569480;
clo10263[6] = kont9350;
clo10263[7] = lst;
void* f93549482 = encode_clo(clo10263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f93549482;
arg_buffer[3] = n;
arg_buffer[4] = a92579481;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9629 = encode_clo(alloc_clo(lam9629_fptr, 0));

void* lam9631_fptr() // lam9631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9632 = arg_buffer[1];
//reading env and args
void* a92549476 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9632))[10];
//not do dummy comment
void* lst = (decode_clo(env9632))[9];
//not do dummy comment
void* reverse = (decode_clo(env9632))[8];
//not do dummy comment
void* kont9350 = (decode_clo(env9632))[7];
//not do dummy comment
void* cons = (decode_clo(env9632))[6];
//not do dummy comment
void* _u45 = (decode_clo(env9632))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env9632))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9632))[3];
//not do dummy comment
void* n = (decode_clo(env9632))[2];
//not do dummy comment
void* car = (decode_clo(env9632))[1];

//if-clause
bool if_guard10264 = is_true(a92549476);
if(if_guard10264)
{

//creating new closure instance
void** clo10266 = alloc_clo(lam9620_fptr, 1);

//setting env list
clo10266[1] = kont9350;
void* f93519477 = encode_clo(clo10266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f93519477;
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
void** clo10268 = alloc_clo(lam9629_fptr, 8);

//setting env list
clo10268[1] = car;
clo10268[2] = n;
clo10268[3] = lst2;
clo10268[4] = take_u45helper;
clo10268[5] = _u45;
clo10268[6] = cons;
clo10268[7] = kont9350;
clo10268[8] = lst;
void* f93559479 = encode_clo(clo10268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93559479;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9631 = encode_clo(alloc_clo(lam9631_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9634 = arg_buffer[1];
//reading env and args
void* kont9350 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar10269 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10269, "0", 10);
void* a92539474 = encode_mpz(mpzvar10269);

//creating new closure instance
void** clo10271 = alloc_clo(lam9631_fptr, 10);

//setting env list
clo10271[1] = car;
clo10271[2] = n;
clo10271[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo10271[4] = take_u45helper;
clo10271[5] = _u45;
clo10271[6] = cons;
clo10271[7] = kont9350;
clo10271[8] = reverse;
clo10271[9] = lst;
clo10271[10] = cdr;
void* f93569475 = encode_clo(clo10271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f93569475;
arg_buffer[3] = n;
arg_buffer[4] = a92539474;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam9635_fptr() // lam9635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9636 = arg_buffer[1];
//reading env and args
void* a92619489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9357 = (decode_clo(env9636))[4];
//not do dummy comment
void* lst = (decode_clo(env9636))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9636))[2];
//not do dummy comment
void* n = (decode_clo(env9636))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9357;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a92619489;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9635 = encode_clo(alloc_clo(lam9635_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9637 = arg_buffer[1];
//reading env and args
void* kont9357 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10273 = alloc_clo(lam9635_fptr, 4);

//setting env list
clo10273[1] = n;
clo10273[2] = take_u45helper;
clo10273[3] = lst;
clo10273[4] = kont9357;
void* f93589488 = encode_clo(clo10273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f93589488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam9639_fptr() // lam9639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9640 = arg_buffer[1];
//reading env and args
void* a92669497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9359 = (decode_clo(env9640))[3];
//not do dummy comment
void* a92649493 = (decode_clo(env9640))[2];
//not do dummy comment
void* _u43 = (decode_clo(env9640))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont9359;
arg_buffer[3] = a92649493;
arg_buffer[4] = a92669497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9639 = encode_clo(alloc_clo(lam9639_fptr, 0));

void* lam9641_fptr() // lam9641 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9642 = arg_buffer[1];
//reading env and args
void* a92659495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9359 = (decode_clo(env9642))[4];
//not do dummy comment
void* length = (decode_clo(env9642))[3];
//not do dummy comment
void* a92649493 = (decode_clo(env9642))[2];
//not do dummy comment
void* _u43 = (decode_clo(env9642))[1];

//creating new closure instance
void** clo10275 = alloc_clo(lam9639_fptr, 3);

//setting env list
clo10275[1] = _u43;
clo10275[2] = a92649493;
clo10275[3] = kont9359;
void* f93609496 = encode_clo(clo10275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f93609496;
arg_buffer[3] = a92659495;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9641 = encode_clo(alloc_clo(lam9641_fptr, 0));

void* lam9644_fptr() // lam9644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9645 = arg_buffer[1];
//reading env and args
void* a92629491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9645))[5];
//not do dummy comment
void* kont9359 = (decode_clo(env9645))[4];
//not do dummy comment
void* lst = (decode_clo(env9645))[3];
//not do dummy comment
void* length = (decode_clo(env9645))[2];
//not do dummy comment
void* _u43 = (decode_clo(env9645))[1];

//if-clause
bool if_guard10276 = is_true(a92629491);
if(if_guard10276)
{
mpz_t* mpzvar10277 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10277, "0", 10);
void* x92639492 = encode_mpz(mpzvar10277);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9359);
arg_buffer[2] = x92639492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9359))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar10278 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10278, "1", 10);
void* a92649493 = encode_mpz(mpzvar10278);

//creating new closure instance
void** clo10280 = alloc_clo(lam9641_fptr, 4);

//setting env list
clo10280[1] = _u43;
clo10280[2] = a92649493;
clo10280[3] = length;
clo10280[4] = kont9359;
void* f93619494 = encode_clo(clo10280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93619494;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9644 = encode_clo(alloc_clo(lam9644_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9646 = arg_buffer[1];
//reading env and args
void* kont9359 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10282 = alloc_clo(lam9644_fptr, 5);

//setting env list
clo10282[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo10282[2] = length;
clo10282[3] = lst;
clo10282[4] = kont9359;
clo10282[5] = cdr;
void* f93629490 = encode_clo(clo10282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93629490;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam9647_fptr() // lam9647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9648 = arg_buffer[1];
//reading env and args
void* x92689501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9363 = (decode_clo(env9648))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9363);
arg_buffer[2] = x92689501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9363))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9647 = encode_clo(alloc_clo(lam9647_fptr, 0));

void* lam9649_fptr() // lam9649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9650 = arg_buffer[1];
//reading env and args
void* a92729509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92709505 = (decode_clo(env9650))[3];
//not do dummy comment
void* kont9363 = (decode_clo(env9650))[2];
//not do dummy comment
void* cons = (decode_clo(env9650))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9363;
arg_buffer[3] = a92709505;
arg_buffer[4] = a92729509;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9649 = encode_clo(alloc_clo(lam9649_fptr, 0));

void* lam9651_fptr() // lam9651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9652 = arg_buffer[1];
//reading env and args
void* a92719507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92709505 = (decode_clo(env9652))[5];
//not do dummy comment
void* map = (decode_clo(env9652))[4];
//not do dummy comment
void* kont9363 = (decode_clo(env9652))[3];
//not do dummy comment
void* proc = (decode_clo(env9652))[2];
//not do dummy comment
void* cons = (decode_clo(env9652))[1];

//creating new closure instance
void** clo10284 = alloc_clo(lam9649_fptr, 3);

//setting env list
clo10284[1] = cons;
clo10284[2] = kont9363;
clo10284[3] = a92709505;
void* f93659508 = encode_clo(clo10284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f93659508;
arg_buffer[3] = proc;
arg_buffer[4] = a92719507;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9651 = encode_clo(alloc_clo(lam9651_fptr, 0));

void* lam9653_fptr() // lam9653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9654 = arg_buffer[1];
//reading env and args
void* a92709505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9654))[6];
//not do dummy comment
void* lst = (decode_clo(env9654))[5];
//not do dummy comment
void* map = (decode_clo(env9654))[4];
//not do dummy comment
void* kont9363 = (decode_clo(env9654))[3];
//not do dummy comment
void* proc = (decode_clo(env9654))[2];
//not do dummy comment
void* cons = (decode_clo(env9654))[1];

//creating new closure instance
void** clo10286 = alloc_clo(lam9651_fptr, 5);

//setting env list
clo10286[1] = cons;
clo10286[2] = proc;
clo10286[3] = kont9363;
clo10286[4] = map;
clo10286[5] = a92709505;
void* f93669506 = encode_clo(clo10286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93669506;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9653 = encode_clo(alloc_clo(lam9653_fptr, 0));

void* lam9655_fptr() // lam9655 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9656 = arg_buffer[1];
//reading env and args
void* a92699503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9656))[6];
//not do dummy comment
void* lst = (decode_clo(env9656))[5];
//not do dummy comment
void* map = (decode_clo(env9656))[4];
//not do dummy comment
void* kont9363 = (decode_clo(env9656))[3];
//not do dummy comment
void* proc = (decode_clo(env9656))[2];
//not do dummy comment
void* cons = (decode_clo(env9656))[1];

//creating new closure instance
void** clo10288 = alloc_clo(lam9653_fptr, 6);

//setting env list
clo10288[1] = cons;
clo10288[2] = proc;
clo10288[3] = kont9363;
clo10288[4] = map;
clo10288[5] = lst;
clo10288[6] = cdr;
void* f93679504 = encode_clo(clo10288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f93679504;
arg_buffer[3] = a92699503;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9655 = encode_clo(alloc_clo(lam9655_fptr, 0));

void* lam9657_fptr() // lam9657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9658 = arg_buffer[1];
//reading env and args
void* a92679499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9658))[8];
//not do dummy comment
void* map = (decode_clo(env9658))[7];
//not do dummy comment
void* kont9363 = (decode_clo(env9658))[6];
//not do dummy comment
void* proc = (decode_clo(env9658))[5];
//not do dummy comment
void* car = (decode_clo(env9658))[4];
//not do dummy comment
void* cons = (decode_clo(env9658))[3];
//not do dummy comment
void* list = (decode_clo(env9658))[2];
//not do dummy comment
void* cdr = (decode_clo(env9658))[1];

//if-clause
bool if_guard10289 = is_true(a92679499);
if(if_guard10289)
{

//creating new closure instance
void** clo10291 = alloc_clo(lam9647_fptr, 1);

//setting env list
clo10291[1] = kont9363;
void* f93649500 = encode_clo(clo10291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f93649500;
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
void** clo10293 = alloc_clo(lam9655_fptr, 6);

//setting env list
clo10293[1] = cons;
clo10293[2] = proc;
clo10293[3] = kont9363;
clo10293[4] = map;
clo10293[5] = lst;
clo10293[6] = cdr;
void* f93689502 = encode_clo(clo10293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93689502;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9657 = encode_clo(alloc_clo(lam9657_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9659 = arg_buffer[1];
//reading env and args
void* kont9363 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10295 = alloc_clo(lam9657_fptr, 8);

//setting env list
clo10295[1] = cdr;
clo10295[2] = list;
clo10295[3] = cons;
clo10295[4] = car;
clo10295[5] = proc;
clo10295[6] = kont9363;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo10295[7] = map;
clo10295[8] = lst;
void* f93699498 = encode_clo(clo10295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93699498;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam9660_fptr() // lam9660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9661 = arg_buffer[1];
//reading env and args
void* x92749513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9370 = (decode_clo(env9661))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9370);
arg_buffer[2] = x92749513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9370))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9660 = encode_clo(alloc_clo(lam9660_fptr, 0));

void* lam9662_fptr() // lam9662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9663 = arg_buffer[1];
//reading env and args
void* a92799523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92779519 = (decode_clo(env9663))[3];
//not do dummy comment
void* kont9370 = (decode_clo(env9663))[2];
//not do dummy comment
void* cons = (decode_clo(env9663))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9370;
arg_buffer[3] = a92779519;
arg_buffer[4] = a92799523;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9662 = encode_clo(alloc_clo(lam9662_fptr, 0));

void* lam9664_fptr() // lam9664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9665 = arg_buffer[1];
//reading env and args
void* a92789521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92779519 = (decode_clo(env9665))[5];
//not do dummy comment
void* op = (decode_clo(env9665))[4];
//not do dummy comment
void* cons = (decode_clo(env9665))[3];
//not do dummy comment
void* filter = (decode_clo(env9665))[2];
//not do dummy comment
void* kont9370 = (decode_clo(env9665))[1];

//creating new closure instance
void** clo10297 = alloc_clo(lam9662_fptr, 3);

//setting env list
clo10297[1] = cons;
clo10297[2] = kont9370;
clo10297[3] = a92779519;
void* f93729522 = encode_clo(clo10297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f93729522;
arg_buffer[3] = op;
arg_buffer[4] = a92789521;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9664 = encode_clo(alloc_clo(lam9664_fptr, 0));

void* lam9666_fptr() // lam9666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9667 = arg_buffer[1];
//reading env and args
void* a92779519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9667))[6];
//not do dummy comment
void* lst = (decode_clo(env9667))[5];
//not do dummy comment
void* op = (decode_clo(env9667))[4];
//not do dummy comment
void* cons = (decode_clo(env9667))[3];
//not do dummy comment
void* filter = (decode_clo(env9667))[2];
//not do dummy comment
void* kont9370 = (decode_clo(env9667))[1];

//creating new closure instance
void** clo10299 = alloc_clo(lam9664_fptr, 5);

//setting env list
clo10299[1] = kont9370;
clo10299[2] = filter;
clo10299[3] = cons;
clo10299[4] = op;
clo10299[5] = a92779519;
void* f93739520 = encode_clo(clo10299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93739520;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9666 = encode_clo(alloc_clo(lam9666_fptr, 0));

void* lam9668_fptr() // lam9668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9669 = arg_buffer[1];
//reading env and args
void* a92809525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env9669))[3];
//not do dummy comment
void* filter = (decode_clo(env9669))[2];
//not do dummy comment
void* kont9370 = (decode_clo(env9669))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont9370;
arg_buffer[3] = op;
arg_buffer[4] = a92809525;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9668 = encode_clo(alloc_clo(lam9668_fptr, 0));

void* lam9670_fptr() // lam9670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9671 = arg_buffer[1];
//reading env and args
void* a92769517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9671))[7];
//not do dummy comment
void* lst = (decode_clo(env9671))[6];
//not do dummy comment
void* op = (decode_clo(env9671))[5];
//not do dummy comment
void* cons = (decode_clo(env9671))[4];
//not do dummy comment
void* filter = (decode_clo(env9671))[3];
//not do dummy comment
void* kont9370 = (decode_clo(env9671))[2];
//not do dummy comment
void* car = (decode_clo(env9671))[1];

//if-clause
bool if_guard10300 = is_true(a92769517);
if(if_guard10300)
{

//creating new closure instance
void** clo10302 = alloc_clo(lam9666_fptr, 6);

//setting env list
clo10302[1] = kont9370;
clo10302[2] = filter;
clo10302[3] = cons;
clo10302[4] = op;
clo10302[5] = lst;
clo10302[6] = cdr;
void* f93749518 = encode_clo(clo10302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93749518;
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
void** clo10304 = alloc_clo(lam9668_fptr, 3);

//setting env list
clo10304[1] = kont9370;
clo10304[2] = filter;
clo10304[3] = op;
void* f93759524 = encode_clo(clo10304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93759524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9670 = encode_clo(alloc_clo(lam9670_fptr, 0));

void* lam9672_fptr() // lam9672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9673 = arg_buffer[1];
//reading env and args
void* a92759515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9673))[7];
//not do dummy comment
void* lst = (decode_clo(env9673))[6];
//not do dummy comment
void* op = (decode_clo(env9673))[5];
//not do dummy comment
void* cons = (decode_clo(env9673))[4];
//not do dummy comment
void* filter = (decode_clo(env9673))[3];
//not do dummy comment
void* kont9370 = (decode_clo(env9673))[2];
//not do dummy comment
void* car = (decode_clo(env9673))[1];

//creating new closure instance
void** clo10306 = alloc_clo(lam9670_fptr, 7);

//setting env list
clo10306[1] = car;
clo10306[2] = kont9370;
clo10306[3] = filter;
clo10306[4] = cons;
clo10306[5] = op;
clo10306[6] = lst;
clo10306[7] = cdr;
void* f93769516 = encode_clo(clo10306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f93769516;
arg_buffer[3] = a92759515;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9672 = encode_clo(alloc_clo(lam9672_fptr, 0));

void* lam9674_fptr() // lam9674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9675 = arg_buffer[1];
//reading env and args
void* a92739511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9675))[8];
//not do dummy comment
void* op = (decode_clo(env9675))[7];
//not do dummy comment
void* cons = (decode_clo(env9675))[6];
//not do dummy comment
void* list = (decode_clo(env9675))[5];
//not do dummy comment
void* cdr = (decode_clo(env9675))[4];
//not do dummy comment
void* filter = (decode_clo(env9675))[3];
//not do dummy comment
void* kont9370 = (decode_clo(env9675))[2];
//not do dummy comment
void* car = (decode_clo(env9675))[1];

//if-clause
bool if_guard10307 = is_true(a92739511);
if(if_guard10307)
{

//creating new closure instance
void** clo10309 = alloc_clo(lam9660_fptr, 1);

//setting env list
clo10309[1] = kont9370;
void* f93719512 = encode_clo(clo10309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f93719512;
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
void** clo10311 = alloc_clo(lam9672_fptr, 7);

//setting env list
clo10311[1] = car;
clo10311[2] = kont9370;
clo10311[3] = filter;
clo10311[4] = cons;
clo10311[5] = op;
clo10311[6] = lst;
clo10311[7] = cdr;
void* f93779514 = encode_clo(clo10311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93779514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9674 = encode_clo(alloc_clo(lam9674_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9676 = arg_buffer[1];
//reading env and args
void* kont9370 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10313 = alloc_clo(lam9674_fptr, 8);

//setting env list
clo10313[1] = car;
clo10313[2] = kont9370;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo10313[3] = filter;
clo10313[4] = cdr;
clo10313[5] = list;
clo10313[6] = cons;
clo10313[7] = op;
clo10313[8] = lst;
void* f93789510 = encode_clo(clo10313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93789510;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam9677_fptr() // lam9677 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9678 = arg_buffer[1];
//reading env and args
void* a92859533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env9678))[3];
//not do dummy comment
void* kont9379 = (decode_clo(env9678))[2];
//not do dummy comment
void* a92839530 = (decode_clo(env9678))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont9379;
arg_buffer[3] = a92839530;
arg_buffer[4] = a92859533;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9677 = encode_clo(alloc_clo(lam9677_fptr, 0));

void* lam9680_fptr() // lam9680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9681 = arg_buffer[1];
//reading env and args
void* a92839530 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env9681))[4];
//not do dummy comment
void* kont9379 = (decode_clo(env9681))[3];
//not do dummy comment
void* n = (decode_clo(env9681))[2];
//not do dummy comment
void* _u45 = (decode_clo(env9681))[1];
mpz_t* mpzvar10314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10314, "1", 10);
void* a92849531 = encode_mpz(mpzvar10314);

//creating new closure instance
void** clo10316 = alloc_clo(lam9677_fptr, 3);

//setting env list
clo10316[1] = a92839530;
clo10316[2] = kont9379;
clo10316[3] = drop;
void* f93809532 = encode_clo(clo10316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f93809532;
arg_buffer[3] = n;
arg_buffer[4] = a92849531;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9680 = encode_clo(alloc_clo(lam9680_fptr, 0));

void* lam9682_fptr() // lam9682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9683 = arg_buffer[1];
//reading env and args
void* a92829528 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9683))[6];
//not do dummy comment
void* kont9379 = (decode_clo(env9683))[5];
//not do dummy comment
void* n = (decode_clo(env9683))[4];
//not do dummy comment
void* _u45 = (decode_clo(env9683))[3];
//not do dummy comment
void* lst = (decode_clo(env9683))[2];
//not do dummy comment
void* drop = (decode_clo(env9683))[1];

//if-clause
bool if_guard10317 = is_true(a92829528);
if(if_guard10317)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9379);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9379))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10319 = alloc_clo(lam9680_fptr, 4);

//setting env list
clo10319[1] = _u45;
clo10319[2] = n;
clo10319[3] = kont9379;
clo10319[4] = drop;
void* f93819529 = encode_clo(clo10319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93819529;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9682 = encode_clo(alloc_clo(lam9682_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9685 = arg_buffer[1];
//reading env and args
void* kont9379 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar10320 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10320, "0", 10);
void* a92819526 = encode_mpz(mpzvar10320);

//creating new closure instance
void** clo10322 = alloc_clo(lam9682_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo10322[1] = drop;
clo10322[2] = lst;
clo10322[3] = _u45;
clo10322[4] = n;
clo10322[5] = kont9379;
clo10322[6] = cdr;
void* f93829527 = encode_clo(clo10322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f93829527;
arg_buffer[3] = n;
arg_buffer[4] = a92819526;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam9686_fptr() // lam9686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9687 = arg_buffer[1];
//reading env and args
void* a92899541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92879537 = (decode_clo(env9687))[3];
//not do dummy comment
void* kont9383 = (decode_clo(env9687))[2];
//not do dummy comment
void* proc = (decode_clo(env9687))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont9383;
arg_buffer[3] = a92879537;
arg_buffer[4] = a92899541;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9686 = encode_clo(alloc_clo(lam9686_fptr, 0));

void* lam9688_fptr() // lam9688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9689 = arg_buffer[1];
//reading env and args
void* a92889539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9383 = (decode_clo(env9689))[5];
//not do dummy comment
void* foldr = (decode_clo(env9689))[4];
//not do dummy comment
void* a92879537 = (decode_clo(env9689))[3];
//not do dummy comment
void* proc = (decode_clo(env9689))[2];
//not do dummy comment
void* acc = (decode_clo(env9689))[1];

//creating new closure instance
void** clo10324 = alloc_clo(lam9686_fptr, 3);

//setting env list
clo10324[1] = proc;
clo10324[2] = kont9383;
clo10324[3] = a92879537;
void* f93849540 = encode_clo(clo10324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f93849540;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a92889539;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9688 = encode_clo(alloc_clo(lam9688_fptr, 0));

void* lam9690_fptr() // lam9690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9691 = arg_buffer[1];
//reading env and args
void* a92879537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9691))[6];
//not do dummy comment
void* kont9383 = (decode_clo(env9691))[5];
//not do dummy comment
void* foldr = (decode_clo(env9691))[4];
//not do dummy comment
void* lst = (decode_clo(env9691))[3];
//not do dummy comment
void* proc = (decode_clo(env9691))[2];
//not do dummy comment
void* acc = (decode_clo(env9691))[1];

//creating new closure instance
void** clo10326 = alloc_clo(lam9688_fptr, 5);

//setting env list
clo10326[1] = acc;
clo10326[2] = proc;
clo10326[3] = a92879537;
clo10326[4] = foldr;
clo10326[5] = kont9383;
void* f93859538 = encode_clo(clo10326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93859538;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9690 = encode_clo(alloc_clo(lam9690_fptr, 0));

void* lam9692_fptr() // lam9692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9693 = arg_buffer[1];
//reading env and args
void* a92869535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9693))[7];
//not do dummy comment
void* kont9383 = (decode_clo(env9693))[6];
//not do dummy comment
void* car = (decode_clo(env9693))[5];
//not do dummy comment
void* foldr = (decode_clo(env9693))[4];
//not do dummy comment
void* lst = (decode_clo(env9693))[3];
//not do dummy comment
void* proc = (decode_clo(env9693))[2];
//not do dummy comment
void* acc = (decode_clo(env9693))[1];

//if-clause
bool if_guard10327 = is_true(a92869535);
if(if_guard10327)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9383);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9383))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10329 = alloc_clo(lam9690_fptr, 6);

//setting env list
clo10329[1] = acc;
clo10329[2] = proc;
clo10329[3] = lst;
clo10329[4] = foldr;
clo10329[5] = kont9383;
clo10329[6] = cdr;
void* f93869536 = encode_clo(clo10329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93869536;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9692 = encode_clo(alloc_clo(lam9692_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9694 = arg_buffer[1];
//reading env and args
void* kont9383 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10331 = alloc_clo(lam9692_fptr, 7);

//setting env list
clo10331[1] = acc;
clo10331[2] = proc;
clo10331[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo10331[4] = foldr;
clo10331[5] = car;
clo10331[6] = kont9383;
clo10331[7] = cdr;
void* f93879534 = encode_clo(clo10331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93879534;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam9695_fptr() // lam9695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9696 = arg_buffer[1];
//reading env and args
void* a92939549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a92919545 = (decode_clo(env9696))[3];
//not do dummy comment
void* cons = (decode_clo(env9696))[2];
//not do dummy comment
void* kont9388 = (decode_clo(env9696))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9388;
arg_buffer[3] = a92919545;
arg_buffer[4] = a92939549;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9695 = encode_clo(alloc_clo(lam9695_fptr, 0));

void* lam9697_fptr() // lam9697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9698 = arg_buffer[1];
//reading env and args
void* a92929547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env9698))[5];
//not do dummy comment
void* cons = (decode_clo(env9698))[4];
//not do dummy comment
void* kont9388 = (decode_clo(env9698))[3];
//not do dummy comment
void* a92919545 = (decode_clo(env9698))[2];
//not do dummy comment
void* lst2 = (decode_clo(env9698))[1];

//creating new closure instance
void** clo10333 = alloc_clo(lam9695_fptr, 3);

//setting env list
clo10333[1] = kont9388;
clo10333[2] = cons;
clo10333[3] = a92919545;
void* f93899548 = encode_clo(clo10333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f93899548;
arg_buffer[3] = a92929547;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9697 = encode_clo(alloc_clo(lam9697_fptr, 0));

void* lam9699_fptr() // lam9699 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9700 = arg_buffer[1];
//reading env and args
void* a92919545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9700))[6];
//not do dummy comment
void* append = (decode_clo(env9700))[5];
//not do dummy comment
void* lst2 = (decode_clo(env9700))[4];
//not do dummy comment
void* lst1 = (decode_clo(env9700))[3];
//not do dummy comment
void* cons = (decode_clo(env9700))[2];
//not do dummy comment
void* kont9388 = (decode_clo(env9700))[1];

//creating new closure instance
void** clo10335 = alloc_clo(lam9697_fptr, 5);

//setting env list
clo10335[1] = lst2;
clo10335[2] = a92919545;
clo10335[3] = kont9388;
clo10335[4] = cons;
clo10335[5] = append;
void* f93909546 = encode_clo(clo10335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f93909546;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9699 = encode_clo(alloc_clo(lam9699_fptr, 0));

void* lam9701_fptr() // lam9701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9702 = arg_buffer[1];
//reading env and args
void* a92909543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9702))[7];
//not do dummy comment
void* append = (decode_clo(env9702))[6];
//not do dummy comment
void* lst2 = (decode_clo(env9702))[5];
//not do dummy comment
void* cons = (decode_clo(env9702))[4];
//not do dummy comment
void* kont9388 = (decode_clo(env9702))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9702))[2];
//not do dummy comment
void* car = (decode_clo(env9702))[1];

//if-clause
bool if_guard10336 = is_true(a92909543);
if(if_guard10336)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9388);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9388))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10338 = alloc_clo(lam9699_fptr, 6);

//setting env list
clo10338[1] = kont9388;
clo10338[2] = cons;
clo10338[3] = lst1;
clo10338[4] = lst2;
clo10338[5] = append;
clo10338[6] = cdr;
void* f93919544 = encode_clo(clo10338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f93919544;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9701 = encode_clo(alloc_clo(lam9701_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9703 = arg_buffer[1];
//reading env and args
void* kont9388 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10340 = alloc_clo(lam9701_fptr, 7);

//setting env list
clo10340[1] = car;
clo10340[2] = lst1;
clo10340[3] = kont9388;
clo10340[4] = cons;
clo10340[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo10340[6] = append;
clo10340[7] = cdr;
void* f93929542 = encode_clo(clo10340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f93929542;
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
void* _9704 = arg_buffer[1];
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

void* kont93939550 = prim_car(lst);
void* lst9551 = prim_cdr(lst);
void* x92949552 = apply_prim_hash(lst9551);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont93939550);
arg_buffer[2] = x92949552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont93939550))[0]);
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
void* _9705 = arg_buffer[1];
//reading env and args
void* kont9395 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x92959553 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9395);
arg_buffer[2] = x92959553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9395))[0]);
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
void* _9706 = arg_buffer[1];
//reading env and args
void* kont9396 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x92969554 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9396);
arg_buffer[2] = x92969554;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9396))[0]);
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
void* _9707 = arg_buffer[1];
//reading env and args
void* kont9397 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x92979555 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9397);
arg_buffer[2] = x92979555;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9397))[0]);
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
void* _9708 = arg_buffer[1];
//reading env and args
void* kont9398 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x92989556 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9398);
arg_buffer[2] = x92989556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9398))[0]);
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
void* _9711 = arg_buffer[1];
//reading env and args
void* kont9399 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar10341 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar10341, "100.0", 10);
void* a92999557 = encode_mpf(mpfvar10341);
mpf_t* mpfvar10342 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar10342, "2.0", 10);
void* a93009558 = encode_mpf(mpfvar10342);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = kont9399;
arg_buffer[3] = a92999557;
arg_buffer[4] = a93009558;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam9712_fptr() // lam9712 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9713 = arg_buffer[1];
//reading env and args
void* x93019560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9400 = (decode_clo(env9713))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9400);
arg_buffer[2] = x93019560;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9400))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9712 = encode_clo(alloc_clo(lam9712_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9714 = arg_buffer[1];
//reading env and args
void* kont9400 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo10344 = alloc_clo(lam9712_fptr, 1);

//setting env list
clo10344[1] = kont9400;
void* f94019559 = encode_clo(clo10344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f94019559;
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

