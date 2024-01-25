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
void* _env8388 = arg_buffer[1];
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

void* kont8386 = prim_car(lst);
void* lst8389 = prim_cdr(lst);
void* x8387 = apply_prim__u43(lst8389);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8386);
arg_buffer[2] = x8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8386))[0]);
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
void* _env8392 = arg_buffer[1];
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

void* kont8390 = prim_car(lst);
void* lst8393 = prim_cdr(lst);
void* x8391 = apply_prim__u45(lst8393);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8390);
arg_buffer[2] = x8391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8390))[0]);
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
void* _8370 = arg_buffer[1];
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

void* kont8358 = prim_car(lst);
void* lst8368 = prim_cdr(lst);
void* xy8347 = apply_prim__u42(lst8368);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8358);
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8358))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8371 = arg_buffer[1];
//reading env and args
void* kont8359 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* xy8348 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8359);
arg_buffer[2] = xy8348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8359))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8372 = arg_buffer[1];
//reading env and args
void* kont8360 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* xy8349 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8360);
arg_buffer[2] = xy8349;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8360))[0]);
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
void* _8373 = arg_buffer[1];
//reading env and args
void* kont8361 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8350 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8361);
arg_buffer[2] = xy8350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8361))[0]);
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
void* _8374 = arg_buffer[1];
//reading env and args
void* kont8362 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8351 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8362);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8362))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8375 = arg_buffer[1];
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

void* kont8363 = prim_car(x);
void* x8369 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8363);
arg_buffer[2] = x8369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8363))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8378_fptr() // lam8378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8379 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8364 = (decode_clo(env8379))[1];

//if-clause
bool if_guard8394 = is_true(a8354);
if(if_guard8394)
{
void* xy8355 = encode_str(new(GC) std::string("wow"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8364);
arg_buffer[2] = xy8355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8364))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* xy8356 = encode_str(new(GC) std::string("not-wow"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8364);
arg_buffer[2] = xy8356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8364))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8378 = encode_clo(alloc_clo(lam8378_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8382 = arg_buffer[1];
//reading env and args
void* kont8364 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8395 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8395, "1", 10);
void* a8352 = encode_mpz(mpzvar8395);
mpz_t* mpzvar8396 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8396, "1", 10);
void* a8353 = encode_mpz(mpzvar8396);

//creating new closure instance
void** clo8398 = alloc_clo(lam8378_fptr, 1);

//setting env list
clo8398[1] = kont8364;
void* f8365 = encode_clo(clo8398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8365;
arg_buffer[3] = a8352;
arg_buffer[4] = a8353;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8383_fptr() // lam8383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8384 = arg_buffer[1];
//reading env and args
void* xy8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8366 = (decode_clo(env8384))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8366);
arg_buffer[2] = xy8357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8366))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8383 = encode_clo(alloc_clo(lam8383_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8385 = arg_buffer[1];
//reading env and args
void* kont8366 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8400 = alloc_clo(lam8383_fptr, 1);

//setting env list
clo8400[1] = kont8366;
void* f8367 = encode_clo(clo8400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8367;
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

