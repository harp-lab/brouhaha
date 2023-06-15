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
void* _76557 = arg_buffer[1];
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

void* kont7629676396 = prim_car(lst);
void* lst76397 = prim_cdr(lst);
void* x7621076398 = apply_prim__u43(lst76397);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7629676396);
arg_buffer[2] = x7621076398;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7629676396))[0]);
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
void* _76558 = arg_buffer[1];
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

void* kont7629876399 = prim_car(lst);
void* lst76400 = prim_cdr(lst);
void* x7621176401 = apply_prim__u45(lst76400);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7629876399);
arg_buffer[2] = x7621176401;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7629876399))[0]);
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
void* _76559 = arg_buffer[1];
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

void* kont7630076402 = prim_car(lst);
void* lst76403 = prim_cdr(lst);
void* x7621276404 = apply_prim__u42(lst76403);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7630076402);
arg_buffer[2] = x7621276404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7630076402))[0]);
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
void* _76560 = arg_buffer[1];
//reading env and args
void* kont76302 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7621376405 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76302);
arg_buffer[2] = x7621376405;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76302))[0]);
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
void* _76561 = arg_buffer[1];
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

void* kont7630376406 = prim_car(lst);
void* lst76407 = prim_cdr(lst);
void* x7621476408 = apply_prim__u47(lst76407);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7630376406);
arg_buffer[2] = x7621476408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7630376406))[0]);
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
void* _76562 = arg_buffer[1];
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

void* kont7630576409 = prim_car(lst);
void* lst76410 = prim_cdr(lst);
void* x7621576411 = apply_prim__u61(lst76410);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7630576409);
arg_buffer[2] = x7621576411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7630576409))[0]);
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
void* _76563 = arg_buffer[1];
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

void* kont7630776412 = prim_car(lst);
void* lst76413 = prim_cdr(lst);
void* x7621676414 = apply_prim__u62(lst76413);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7630776412);
arg_buffer[2] = x7621676414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7630776412))[0]);
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
void* _76564 = arg_buffer[1];
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

void* kont7630976415 = prim_car(lst);
void* lst76416 = prim_cdr(lst);
void* x7621776417 = apply_prim__u60(lst76416);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7630976415);
arg_buffer[2] = x7621776417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7630976415))[0]);
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
void* _76565 = arg_buffer[1];
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

void* kont7631176418 = prim_car(lst);
void* lst76419 = prim_cdr(lst);
void* x7621876420 = apply_prim__u60_u61(lst76419);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7631176418);
arg_buffer[2] = x7621876420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7631176418))[0]);
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
void* _76566 = arg_buffer[1];
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

void* kont7631376421 = prim_car(lst);
void* lst76422 = prim_cdr(lst);
void* x7621976423 = apply_prim__u62_u61(lst76422);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7631376421);
arg_buffer[2] = x7621976423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7631376421))[0]);
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
void* _76567 = arg_buffer[1];
//reading env and args
void* kont76315 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x7622076424 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76315);
arg_buffer[2] = x7622076424;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76315))[0]);
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
void* _76568 = arg_buffer[1];
//reading env and args
void* kont76316 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7622176425 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76316);
arg_buffer[2] = x7622176425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76316))[0]);
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
void* _76569 = arg_buffer[1];
//reading env and args
void* kont76317 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7622276426 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76317);
arg_buffer[2] = x7622276426;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76317))[0]);
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
void* _76570 = arg_buffer[1];
//reading env and args
void* kont76318 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7622376427 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76318);
arg_buffer[2] = x7622376427;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76318))[0]);
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
void* _76571 = arg_buffer[1];
//reading env and args
void* kont76319 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7622476428 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76319);
arg_buffer[2] = x7622476428;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76319))[0]);
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
void* _76572 = arg_buffer[1];
//reading env and args
void* kont76320 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7622576429 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76320);
arg_buffer[2] = x7622576429;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76320))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam76573_fptr() // lam76573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76574 = arg_buffer[1];
//reading env and args
void* a7622876433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76321 = (decode_clo(env76574))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env76574))[2];
//not do dummy comment
void* a7622676430 = (decode_clo(env76574))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont76321;
arg_buffer[3] = a7622676430;
arg_buffer[4] = a7622876433;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76573 = encode_clo(alloc_clo(lam76573_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76577 = arg_buffer[1];
//reading env and args
void* kont76321 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar76711 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76711, "0", 10);
void* a7622676430 = encode_mpz(mpzvar76711);
mpz_t* mpzvar76712 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76712, "2", 10);
void* a7622776431 = encode_mpz(mpzvar76712);

//creating new closure instance
void** clo76714 = alloc_clo(lam76573_fptr, 3);

//setting env list
clo76714[1] = a7622676430;
clo76714[2] = equal_u63;
clo76714[3] = kont76321;
void* f7632276432 = encode_clo(clo76714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7632276432;
arg_buffer[3] = x;
arg_buffer[4] = a7622776431;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam76578_fptr() // lam76578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76579 = arg_buffer[1];
//reading env and args
void* a7623176437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7622976434 = (decode_clo(env76579))[3];
//not do dummy comment
void* kont76323 = (decode_clo(env76579))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env76579))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont76323;
arg_buffer[3] = a7622976434;
arg_buffer[4] = a7623176437;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76578 = encode_clo(alloc_clo(lam76578_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76582 = arg_buffer[1];
//reading env and args
void* kont76323 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar76715 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76715, "1", 10);
void* a7622976434 = encode_mpz(mpzvar76715);
mpz_t* mpzvar76716 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76716, "2", 10);
void* a7623076435 = encode_mpz(mpzvar76716);

//creating new closure instance
void** clo76718 = alloc_clo(lam76578_fptr, 3);

//setting env list
clo76718[1] = equal_u63;
clo76718[2] = kont76323;
clo76718[3] = a7622976434;
void* f7632476436 = encode_clo(clo76718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7632476436;
arg_buffer[3] = x;
arg_buffer[4] = a7623076435;
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
void* _76583 = arg_buffer[1];
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

void* kont7632576438 = prim_car(x);
void* x76439 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7632576438);
arg_buffer[2] = x76439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7632576438))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam76586_fptr() // lam76586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76587 = arg_buffer[1];
//reading env and args
void* a7623776449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76327 = (decode_clo(env76587))[3];
//not do dummy comment
void* x = (decode_clo(env76587))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env76587))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont76327;
arg_buffer[3] = x;
arg_buffer[4] = a7623776449;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76586 = encode_clo(alloc_clo(lam76586_fptr, 0));

void* lam76588_fptr() // lam76588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76589 = arg_buffer[1];
//reading env and args
void* a7623576446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76589))[5];
//not do dummy comment
void* lst = (decode_clo(env76589))[4];
//not do dummy comment
void* kont76327 = (decode_clo(env76589))[3];
//not do dummy comment
void* x = (decode_clo(env76589))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env76589))[1];

//if-clause
bool if_guard76719 = is_true(a7623576446);
if(if_guard76719)
{
void* x7623676447 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76327);
arg_buffer[2] = x7623676447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76327))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76721 = alloc_clo(lam76586_fptr, 3);

//setting env list
clo76721[1] = member_u63;
clo76721[2] = x;
clo76721[3] = kont76327;
void* f7632876448 = encode_clo(clo76721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7632876448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76588 = encode_clo(alloc_clo(lam76588_fptr, 0));

void* lam76590_fptr() // lam76590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76591 = arg_buffer[1];
//reading env and args
void* a7623476444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76591))[6];
//not do dummy comment
void* lst = (decode_clo(env76591))[5];
//not do dummy comment
void* kont76327 = (decode_clo(env76591))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env76591))[3];
//not do dummy comment
void* x = (decode_clo(env76591))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env76591))[1];

//creating new closure instance
void** clo76723 = alloc_clo(lam76588_fptr, 5);

//setting env list
clo76723[1] = member_u63;
clo76723[2] = x;
clo76723[3] = kont76327;
clo76723[4] = lst;
clo76723[5] = cdr;
void* f7632976445 = encode_clo(clo76723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f7632976445;
arg_buffer[3] = a7623476444;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76590 = encode_clo(alloc_clo(lam76590_fptr, 0));

void* lam76592_fptr() // lam76592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76593 = arg_buffer[1];
//reading env and args
void* a7623276441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76593))[7];
//not do dummy comment
void* lst = (decode_clo(env76593))[6];
//not do dummy comment
void* kont76327 = (decode_clo(env76593))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env76593))[4];
//not do dummy comment
void* x = (decode_clo(env76593))[3];
//not do dummy comment
void* car = (decode_clo(env76593))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env76593))[1];

//if-clause
bool if_guard76724 = is_true(a7623276441);
if(if_guard76724)
{
void* x7623376442 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76327);
arg_buffer[2] = x7623376442;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76327))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76726 = alloc_clo(lam76590_fptr, 6);

//setting env list
clo76726[1] = member_u63;
clo76726[2] = x;
clo76726[3] = equal_u63;
clo76726[4] = kont76327;
clo76726[5] = lst;
clo76726[6] = cdr;
void* f7633076443 = encode_clo(clo76726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7633076443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76592 = encode_clo(alloc_clo(lam76592_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76594 = arg_buffer[1];
//reading env and args
void* kont76327 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76728 = alloc_clo(lam76592_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo76728[1] = member_u63;
clo76728[2] = car;
clo76728[3] = x;
clo76728[4] = equal_u63;
clo76728[5] = kont76327;
clo76728[6] = lst;
clo76728[7] = cdr;
void* f7633176440 = encode_clo(clo76728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7633176440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam76595_fptr() // lam76595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76596 = arg_buffer[1];
//reading env and args
void* a7624176457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7624076455 = (decode_clo(env76596))[4];
//not do dummy comment
void* fun = (decode_clo(env76596))[3];
//not do dummy comment
void* kont76332 = (decode_clo(env76596))[2];
//not do dummy comment
void* foldl = (decode_clo(env76596))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont76332;
arg_buffer[3] = fun;
arg_buffer[4] = a7624076455;
arg_buffer[5] = a7624176457;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76595 = encode_clo(alloc_clo(lam76595_fptr, 0));

void* lam76597_fptr() // lam76597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76598 = arg_buffer[1];
//reading env and args
void* a7624076455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76598))[5];
//not do dummy comment
void* lst = (decode_clo(env76598))[4];
//not do dummy comment
void* fun = (decode_clo(env76598))[3];
//not do dummy comment
void* kont76332 = (decode_clo(env76598))[2];
//not do dummy comment
void* foldl = (decode_clo(env76598))[1];

//creating new closure instance
void** clo76730 = alloc_clo(lam76595_fptr, 4);

//setting env list
clo76730[1] = foldl;
clo76730[2] = kont76332;
clo76730[3] = fun;
clo76730[4] = a7624076455;
void* f7633376456 = encode_clo(clo76730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7633376456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76597 = encode_clo(alloc_clo(lam76597_fptr, 0));

void* lam76599_fptr() // lam76599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76600 = arg_buffer[1];
//reading env and args
void* a7623976453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76600))[6];
//not do dummy comment
void* lst = (decode_clo(env76600))[5];
//not do dummy comment
void* fun = (decode_clo(env76600))[4];
//not do dummy comment
void* foldl = (decode_clo(env76600))[3];
//not do dummy comment
void* kont76332 = (decode_clo(env76600))[2];
//not do dummy comment
void* acc = (decode_clo(env76600))[1];

//creating new closure instance
void** clo76732 = alloc_clo(lam76597_fptr, 5);

//setting env list
clo76732[1] = foldl;
clo76732[2] = kont76332;
clo76732[3] = fun;
clo76732[4] = lst;
clo76732[5] = cdr;
void* f7633476454 = encode_clo(clo76732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f7633476454;
arg_buffer[3] = a7623976453;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76599 = encode_clo(alloc_clo(lam76599_fptr, 0));

void* lam76601_fptr() // lam76601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76602 = arg_buffer[1];
//reading env and args
void* a7623876451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76602))[7];
//not do dummy comment
void* lst = (decode_clo(env76602))[6];
//not do dummy comment
void* fun = (decode_clo(env76602))[5];
//not do dummy comment
void* car = (decode_clo(env76602))[4];
//not do dummy comment
void* foldl = (decode_clo(env76602))[3];
//not do dummy comment
void* kont76332 = (decode_clo(env76602))[2];
//not do dummy comment
void* acc = (decode_clo(env76602))[1];

//if-clause
bool if_guard76733 = is_true(a7623876451);
if(if_guard76733)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76332);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76332))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76735 = alloc_clo(lam76599_fptr, 6);

//setting env list
clo76735[1] = acc;
clo76735[2] = kont76332;
clo76735[3] = foldl;
clo76735[4] = fun;
clo76735[5] = lst;
clo76735[6] = cdr;
void* f7633576452 = encode_clo(clo76735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7633576452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76601 = encode_clo(alloc_clo(lam76601_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76603 = arg_buffer[1];
//reading env and args
void* kont76332 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo76737 = alloc_clo(lam76601_fptr, 7);

//setting env list
clo76737[1] = acc;
clo76737[2] = kont76332;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo76737[3] = foldl;
clo76737[4] = car;
clo76737[5] = fun;
clo76737[6] = lst;
clo76737[7] = cdr;
void* f7633676450 = encode_clo(clo76737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7633676450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam76604_fptr() // lam76604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76605 = arg_buffer[1];
//reading env and args
void* a7624576465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76337 = (decode_clo(env76605))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env76605))[2];
//not do dummy comment
void* a7624376461 = (decode_clo(env76605))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont76337;
arg_buffer[3] = a7624376461;
arg_buffer[4] = a7624576465;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76604 = encode_clo(alloc_clo(lam76604_fptr, 0));

void* lam76606_fptr() // lam76606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76607 = arg_buffer[1];
//reading env and args
void* a7624476463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76337 = (decode_clo(env76607))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env76607))[4];
//not do dummy comment
void* cons = (decode_clo(env76607))[3];
//not do dummy comment
void* a7624376461 = (decode_clo(env76607))[2];
//not do dummy comment
void* lst2 = (decode_clo(env76607))[1];

//creating new closure instance
void** clo76739 = alloc_clo(lam76604_fptr, 3);

//setting env list
clo76739[1] = a7624376461;
clo76739[2] = reverse_u45helper;
clo76739[3] = kont76337;
void* f7633876464 = encode_clo(clo76739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7633876464;
arg_buffer[3] = a7624476463;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76606 = encode_clo(alloc_clo(lam76606_fptr, 0));

void* lam76608_fptr() // lam76608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76609 = arg_buffer[1];
//reading env and args
void* a7624376461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76337 = (decode_clo(env76609))[6];
//not do dummy comment
void* lst = (decode_clo(env76609))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env76609))[4];
//not do dummy comment
void* lst2 = (decode_clo(env76609))[3];
//not do dummy comment
void* car = (decode_clo(env76609))[2];
//not do dummy comment
void* cons = (decode_clo(env76609))[1];

//creating new closure instance
void** clo76741 = alloc_clo(lam76606_fptr, 5);

//setting env list
clo76741[1] = lst2;
clo76741[2] = a7624376461;
clo76741[3] = cons;
clo76741[4] = reverse_u45helper;
clo76741[5] = kont76337;
void* f7633976462 = encode_clo(clo76741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7633976462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76608 = encode_clo(alloc_clo(lam76608_fptr, 0));

void* lam76610_fptr() // lam76610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76611 = arg_buffer[1];
//reading env and args
void* a7624276459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env76611))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env76611))[6];
//not do dummy comment
void* lst2 = (decode_clo(env76611))[5];
//not do dummy comment
void* car = (decode_clo(env76611))[4];
//not do dummy comment
void* cons = (decode_clo(env76611))[3];
//not do dummy comment
void* kont76337 = (decode_clo(env76611))[2];
//not do dummy comment
void* cdr = (decode_clo(env76611))[1];

//if-clause
bool if_guard76742 = is_true(a7624276459);
if(if_guard76742)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76337);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76337))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76744 = alloc_clo(lam76608_fptr, 6);

//setting env list
clo76744[1] = cons;
clo76744[2] = car;
clo76744[3] = lst2;
clo76744[4] = reverse_u45helper;
clo76744[5] = lst;
clo76744[6] = kont76337;
void* f7634076460 = encode_clo(clo76744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7634076460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76610 = encode_clo(alloc_clo(lam76610_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76612 = arg_buffer[1];
//reading env and args
void* kont76337 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76746 = alloc_clo(lam76610_fptr, 7);

//setting env list
clo76746[1] = cdr;
clo76746[2] = kont76337;
clo76746[3] = cons;
clo76746[4] = car;
clo76746[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo76746[6] = reverse_u45helper;
clo76746[7] = lst;
void* f7634176458 = encode_clo(clo76746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7634176458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam76613_fptr() // lam76613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76614 = arg_buffer[1];
//reading env and args
void* a7624676467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env76614))[3];
//not do dummy comment
void* kont76342 = (decode_clo(env76614))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env76614))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont76342;
arg_buffer[3] = lst;
arg_buffer[4] = a7624676467;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76613 = encode_clo(alloc_clo(lam76613_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76615 = arg_buffer[1];
//reading env and args
void* kont76342 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo76748 = alloc_clo(lam76613_fptr, 3);

//setting env list
clo76748[1] = reverse_u45helper;
clo76748[2] = kont76342;
clo76748[3] = lst;
void* f7634376466 = encode_clo(clo76748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7634376466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam76616_fptr() // lam76616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76617 = arg_buffer[1];
//reading env and args
void* x7624976472 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76344 = (decode_clo(env76617))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76344);
arg_buffer[2] = x7624976472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76344))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76616 = encode_clo(alloc_clo(lam76616_fptr, 0));

void* lam76618_fptr() // lam76618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76619 = arg_buffer[1];
//reading env and args
void* a7625476481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76344 = (decode_clo(env76619))[4];
//not do dummy comment
void* a7625076474 = (decode_clo(env76619))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env76619))[2];
//not do dummy comment
void* a7625276477 = (decode_clo(env76619))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont76344;
arg_buffer[3] = a7625076474;
arg_buffer[4] = a7625276477;
arg_buffer[5] = a7625476481;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76618 = encode_clo(alloc_clo(lam76618_fptr, 0));

void* lam76620_fptr() // lam76620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76621 = arg_buffer[1];
//reading env and args
void* a7625376479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76344 = (decode_clo(env76621))[6];
//not do dummy comment
void* a7625076474 = (decode_clo(env76621))[5];
//not do dummy comment
void* cons = (decode_clo(env76621))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env76621))[3];
//not do dummy comment
void* a7625276477 = (decode_clo(env76621))[2];
//not do dummy comment
void* lst2 = (decode_clo(env76621))[1];

//creating new closure instance
void** clo76750 = alloc_clo(lam76618_fptr, 4);

//setting env list
clo76750[1] = a7625276477;
clo76750[2] = take_u45helper;
clo76750[3] = a7625076474;
clo76750[4] = kont76344;
void* f7634676480 = encode_clo(clo76750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7634676480;
arg_buffer[3] = a7625376479;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76620 = encode_clo(alloc_clo(lam76620_fptr, 0));

void* lam76622_fptr() // lam76622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76623 = arg_buffer[1];
//reading env and args
void* a7625276477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env76623))[7];
//not do dummy comment
void* kont76344 = (decode_clo(env76623))[6];
//not do dummy comment
void* a7625076474 = (decode_clo(env76623))[5];
//not do dummy comment
void* car = (decode_clo(env76623))[4];
//not do dummy comment
void* cons = (decode_clo(env76623))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env76623))[2];
//not do dummy comment
void* lst2 = (decode_clo(env76623))[1];

//creating new closure instance
void** clo76752 = alloc_clo(lam76620_fptr, 6);

//setting env list
clo76752[1] = lst2;
clo76752[2] = a7625276477;
clo76752[3] = take_u45helper;
clo76752[4] = cons;
clo76752[5] = a7625076474;
clo76752[6] = kont76344;
void* f7634776478 = encode_clo(clo76752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7634776478;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76622 = encode_clo(alloc_clo(lam76622_fptr, 0));

void* lam76625_fptr() // lam76625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76626 = arg_buffer[1];
//reading env and args
void* a7625076474 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env76626))[8];
//not do dummy comment
void* kont76344 = (decode_clo(env76626))[7];
//not do dummy comment
void* cons = (decode_clo(env76626))[6];
//not do dummy comment
void* _u45 = (decode_clo(env76626))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env76626))[4];
//not do dummy comment
void* lst2 = (decode_clo(env76626))[3];
//not do dummy comment
void* n = (decode_clo(env76626))[2];
//not do dummy comment
void* car = (decode_clo(env76626))[1];
mpz_t* mpzvar76753 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76753, "1", 10);
void* a7625176475 = encode_mpz(mpzvar76753);

//creating new closure instance
void** clo76755 = alloc_clo(lam76622_fptr, 7);

//setting env list
clo76755[1] = lst2;
clo76755[2] = take_u45helper;
clo76755[3] = cons;
clo76755[4] = car;
clo76755[5] = a7625076474;
clo76755[6] = kont76344;
clo76755[7] = lst;
void* f7634876476 = encode_clo(clo76755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7634876476;
arg_buffer[3] = n;
arg_buffer[4] = a7625176475;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76625 = encode_clo(alloc_clo(lam76625_fptr, 0));

void* lam76627_fptr() // lam76627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76628 = arg_buffer[1];
//reading env and args
void* a7624876470 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76628))[10];
//not do dummy comment
void* lst = (decode_clo(env76628))[9];
//not do dummy comment
void* cons = (decode_clo(env76628))[8];
//not do dummy comment
void* _u45 = (decode_clo(env76628))[7];
//not do dummy comment
void* kont76344 = (decode_clo(env76628))[6];
//not do dummy comment
void* reverse = (decode_clo(env76628))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env76628))[4];
//not do dummy comment
void* lst2 = (decode_clo(env76628))[3];
//not do dummy comment
void* n = (decode_clo(env76628))[2];
//not do dummy comment
void* car = (decode_clo(env76628))[1];

//if-clause
bool if_guard76756 = is_true(a7624876470);
if(if_guard76756)
{

//creating new closure instance
void** clo76758 = alloc_clo(lam76616_fptr, 1);

//setting env list
clo76758[1] = kont76344;
void* f7634576471 = encode_clo(clo76758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f7634576471;
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
void** clo76760 = alloc_clo(lam76625_fptr, 8);

//setting env list
clo76760[1] = car;
clo76760[2] = n;
clo76760[3] = lst2;
clo76760[4] = take_u45helper;
clo76760[5] = _u45;
clo76760[6] = cons;
clo76760[7] = kont76344;
clo76760[8] = lst;
void* f7634976473 = encode_clo(clo76760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7634976473;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76627 = encode_clo(alloc_clo(lam76627_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76630 = arg_buffer[1];
//reading env and args
void* kont76344 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar76761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76761, "0", 10);
void* a7624776468 = encode_mpz(mpzvar76761);

//creating new closure instance
void** clo76763 = alloc_clo(lam76627_fptr, 10);

//setting env list
clo76763[1] = car;
clo76763[2] = n;
clo76763[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo76763[4] = take_u45helper;
clo76763[5] = reverse;
clo76763[6] = kont76344;
clo76763[7] = _u45;
clo76763[8] = cons;
clo76763[9] = lst;
clo76763[10] = cdr;
void* f7635076469 = encode_clo(clo76763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7635076469;
arg_buffer[3] = n;
arg_buffer[4] = a7624776468;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam76631_fptr() // lam76631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76632 = arg_buffer[1];
//reading env and args
void* a7625576483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env76632))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env76632))[3];
//not do dummy comment
void* n = (decode_clo(env76632))[2];
//not do dummy comment
void* kont76351 = (decode_clo(env76632))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont76351;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a7625576483;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76631 = encode_clo(alloc_clo(lam76631_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76633 = arg_buffer[1];
//reading env and args
void* kont76351 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76765 = alloc_clo(lam76631_fptr, 4);

//setting env list
clo76765[1] = kont76351;
clo76765[2] = n;
clo76765[3] = take_u45helper;
clo76765[4] = lst;
void* f7635276482 = encode_clo(clo76765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7635276482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam76635_fptr() // lam76635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76636 = arg_buffer[1];
//reading env and args
void* a7626076491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76353 = (decode_clo(env76636))[3];
//not do dummy comment
void* a7625876487 = (decode_clo(env76636))[2];
//not do dummy comment
void* _u43 = (decode_clo(env76636))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont76353;
arg_buffer[3] = a7625876487;
arg_buffer[4] = a7626076491;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76635 = encode_clo(alloc_clo(lam76635_fptr, 0));

void* lam76637_fptr() // lam76637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76638 = arg_buffer[1];
//reading env and args
void* a7625976489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76353 = (decode_clo(env76638))[4];
//not do dummy comment
void* length = (decode_clo(env76638))[3];
//not do dummy comment
void* a7625876487 = (decode_clo(env76638))[2];
//not do dummy comment
void* _u43 = (decode_clo(env76638))[1];

//creating new closure instance
void** clo76767 = alloc_clo(lam76635_fptr, 3);

//setting env list
clo76767[1] = _u43;
clo76767[2] = a7625876487;
clo76767[3] = kont76353;
void* f7635476490 = encode_clo(clo76767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f7635476490;
arg_buffer[3] = a7625976489;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76637 = encode_clo(alloc_clo(lam76637_fptr, 0));

void* lam76640_fptr() // lam76640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76641 = arg_buffer[1];
//reading env and args
void* a7625676485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env76641))[5];
//not do dummy comment
void* length = (decode_clo(env76641))[4];
//not do dummy comment
void* _u43 = (decode_clo(env76641))[3];
//not do dummy comment
void* kont76353 = (decode_clo(env76641))[2];
//not do dummy comment
void* cdr = (decode_clo(env76641))[1];

//if-clause
bool if_guard76768 = is_true(a7625676485);
if(if_guard76768)
{
mpz_t* mpzvar76769 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76769, "0", 10);
void* x7625776486 = encode_mpz(mpzvar76769);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76353);
arg_buffer[2] = x7625776486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76353))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar76770 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76770, "1", 10);
void* a7625876487 = encode_mpz(mpzvar76770);

//creating new closure instance
void** clo76772 = alloc_clo(lam76637_fptr, 4);

//setting env list
clo76772[1] = _u43;
clo76772[2] = a7625876487;
clo76772[3] = length;
clo76772[4] = kont76353;
void* f7635576488 = encode_clo(clo76772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7635576488;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76640 = encode_clo(alloc_clo(lam76640_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76642 = arg_buffer[1];
//reading env and args
void* kont76353 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo76774 = alloc_clo(lam76640_fptr, 5);

//setting env list
clo76774[1] = cdr;
clo76774[2] = kont76353;
clo76774[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo76774[4] = length;
clo76774[5] = lst;
void* f7635676484 = encode_clo(clo76774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7635676484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam76643_fptr() // lam76643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76644 = arg_buffer[1];
//reading env and args
void* x7626276495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76357 = (decode_clo(env76644))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76357);
arg_buffer[2] = x7626276495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76357))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76643 = encode_clo(alloc_clo(lam76643_fptr, 0));

void* lam76645_fptr() // lam76645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76646 = arg_buffer[1];
//reading env and args
void* a7626676503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7626476499 = (decode_clo(env76646))[3];
//not do dummy comment
void* kont76357 = (decode_clo(env76646))[2];
//not do dummy comment
void* cons = (decode_clo(env76646))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont76357;
arg_buffer[3] = a7626476499;
arg_buffer[4] = a7626676503;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76645 = encode_clo(alloc_clo(lam76645_fptr, 0));

void* lam76647_fptr() // lam76647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76648 = arg_buffer[1];
//reading env and args
void* a7626576501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7626476499 = (decode_clo(env76648))[5];
//not do dummy comment
void* kont76357 = (decode_clo(env76648))[4];
//not do dummy comment
void* map = (decode_clo(env76648))[3];
//not do dummy comment
void* proc = (decode_clo(env76648))[2];
//not do dummy comment
void* cons = (decode_clo(env76648))[1];

//creating new closure instance
void** clo76776 = alloc_clo(lam76645_fptr, 3);

//setting env list
clo76776[1] = cons;
clo76776[2] = kont76357;
clo76776[3] = a7626476499;
void* f7635976502 = encode_clo(clo76776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f7635976502;
arg_buffer[3] = proc;
arg_buffer[4] = a7626576501;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76647 = encode_clo(alloc_clo(lam76647_fptr, 0));

void* lam76649_fptr() // lam76649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76650 = arg_buffer[1];
//reading env and args
void* a7626476499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76650))[6];
//not do dummy comment
void* map = (decode_clo(env76650))[5];
//not do dummy comment
void* proc = (decode_clo(env76650))[4];
//not do dummy comment
void* cons = (decode_clo(env76650))[3];
//not do dummy comment
void* lst = (decode_clo(env76650))[2];
//not do dummy comment
void* kont76357 = (decode_clo(env76650))[1];

//creating new closure instance
void** clo76778 = alloc_clo(lam76647_fptr, 5);

//setting env list
clo76778[1] = cons;
clo76778[2] = proc;
clo76778[3] = map;
clo76778[4] = kont76357;
clo76778[5] = a7626476499;
void* f7636076500 = encode_clo(clo76778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7636076500;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76649 = encode_clo(alloc_clo(lam76649_fptr, 0));

void* lam76651_fptr() // lam76651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76652 = arg_buffer[1];
//reading env and args
void* a7626376497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76652))[6];
//not do dummy comment
void* map = (decode_clo(env76652))[5];
//not do dummy comment
void* proc = (decode_clo(env76652))[4];
//not do dummy comment
void* cons = (decode_clo(env76652))[3];
//not do dummy comment
void* lst = (decode_clo(env76652))[2];
//not do dummy comment
void* kont76357 = (decode_clo(env76652))[1];

//creating new closure instance
void** clo76780 = alloc_clo(lam76649_fptr, 6);

//setting env list
clo76780[1] = kont76357;
clo76780[2] = lst;
clo76780[3] = cons;
clo76780[4] = proc;
clo76780[5] = map;
clo76780[6] = cdr;
void* f7636176498 = encode_clo(clo76780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f7636176498;
arg_buffer[3] = a7626376497;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76651 = encode_clo(alloc_clo(lam76651_fptr, 0));

void* lam76653_fptr() // lam76653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76654 = arg_buffer[1];
//reading env and args
void* a7626176493 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env76654))[8];
//not do dummy comment
void* proc = (decode_clo(env76654))[7];
//not do dummy comment
void* car = (decode_clo(env76654))[6];
//not do dummy comment
void* cons = (decode_clo(env76654))[5];
//not do dummy comment
void* list = (decode_clo(env76654))[4];
//not do dummy comment
void* cdr = (decode_clo(env76654))[3];
//not do dummy comment
void* lst = (decode_clo(env76654))[2];
//not do dummy comment
void* kont76357 = (decode_clo(env76654))[1];

//if-clause
bool if_guard76781 = is_true(a7626176493);
if(if_guard76781)
{

//creating new closure instance
void** clo76783 = alloc_clo(lam76643_fptr, 1);

//setting env list
clo76783[1] = kont76357;
void* f7635876494 = encode_clo(clo76783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7635876494;
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
void** clo76785 = alloc_clo(lam76651_fptr, 6);

//setting env list
clo76785[1] = kont76357;
clo76785[2] = lst;
clo76785[3] = cons;
clo76785[4] = proc;
clo76785[5] = map;
clo76785[6] = cdr;
void* f7636276496 = encode_clo(clo76785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7636276496;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76653 = encode_clo(alloc_clo(lam76653_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76655 = arg_buffer[1];
//reading env and args
void* kont76357 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76787 = alloc_clo(lam76653_fptr, 8);

//setting env list
clo76787[1] = kont76357;
clo76787[2] = lst;
clo76787[3] = cdr;
clo76787[4] = list;
clo76787[5] = cons;
clo76787[6] = car;
clo76787[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo76787[8] = map;
void* f7636376492 = encode_clo(clo76787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7636376492;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam76656_fptr() // lam76656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76657 = arg_buffer[1];
//reading env and args
void* x7626876507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont76364 = (decode_clo(env76657))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76364);
arg_buffer[2] = x7626876507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76364))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76656 = encode_clo(alloc_clo(lam76656_fptr, 0));

void* lam76658_fptr() // lam76658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76659 = arg_buffer[1];
//reading env and args
void* a7627376517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7627176513 = (decode_clo(env76659))[3];
//not do dummy comment
void* kont76364 = (decode_clo(env76659))[2];
//not do dummy comment
void* cons = (decode_clo(env76659))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont76364;
arg_buffer[3] = a7627176513;
arg_buffer[4] = a7627376517;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76658 = encode_clo(alloc_clo(lam76658_fptr, 0));

void* lam76660_fptr() // lam76660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76661 = arg_buffer[1];
//reading env and args
void* a7627276515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7627176513 = (decode_clo(env76661))[5];
//not do dummy comment
void* op = (decode_clo(env76661))[4];
//not do dummy comment
void* kont76364 = (decode_clo(env76661))[3];
//not do dummy comment
void* filter = (decode_clo(env76661))[2];
//not do dummy comment
void* cons = (decode_clo(env76661))[1];

//creating new closure instance
void** clo76789 = alloc_clo(lam76658_fptr, 3);

//setting env list
clo76789[1] = cons;
clo76789[2] = kont76364;
clo76789[3] = a7627176513;
void* f7636676516 = encode_clo(clo76789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f7636676516;
arg_buffer[3] = op;
arg_buffer[4] = a7627276515;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76660 = encode_clo(alloc_clo(lam76660_fptr, 0));

void* lam76662_fptr() // lam76662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76663 = arg_buffer[1];
//reading env and args
void* a7627176513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76663))[6];
//not do dummy comment
void* lst = (decode_clo(env76663))[5];
//not do dummy comment
void* op = (decode_clo(env76663))[4];
//not do dummy comment
void* kont76364 = (decode_clo(env76663))[3];
//not do dummy comment
void* filter = (decode_clo(env76663))[2];
//not do dummy comment
void* cons = (decode_clo(env76663))[1];

//creating new closure instance
void** clo76791 = alloc_clo(lam76660_fptr, 5);

//setting env list
clo76791[1] = cons;
clo76791[2] = filter;
clo76791[3] = kont76364;
clo76791[4] = op;
clo76791[5] = a7627176513;
void* f7636776514 = encode_clo(clo76791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7636776514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76662 = encode_clo(alloc_clo(lam76662_fptr, 0));

void* lam76664_fptr() // lam76664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76665 = arg_buffer[1];
//reading env and args
void* a7627476519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env76665))[3];
//not do dummy comment
void* kont76364 = (decode_clo(env76665))[2];
//not do dummy comment
void* filter = (decode_clo(env76665))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont76364;
arg_buffer[3] = op;
arg_buffer[4] = a7627476519;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76664 = encode_clo(alloc_clo(lam76664_fptr, 0));

void* lam76666_fptr() // lam76666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76667 = arg_buffer[1];
//reading env and args
void* a7627076511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76667))[7];
//not do dummy comment
void* lst = (decode_clo(env76667))[6];
//not do dummy comment
void* op = (decode_clo(env76667))[5];
//not do dummy comment
void* kont76364 = (decode_clo(env76667))[4];
//not do dummy comment
void* cons = (decode_clo(env76667))[3];
//not do dummy comment
void* filter = (decode_clo(env76667))[2];
//not do dummy comment
void* car = (decode_clo(env76667))[1];

//if-clause
bool if_guard76792 = is_true(a7627076511);
if(if_guard76792)
{

//creating new closure instance
void** clo76794 = alloc_clo(lam76662_fptr, 6);

//setting env list
clo76794[1] = cons;
clo76794[2] = filter;
clo76794[3] = kont76364;
clo76794[4] = op;
clo76794[5] = lst;
clo76794[6] = cdr;
void* f7636876512 = encode_clo(clo76794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7636876512;
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
void** clo76796 = alloc_clo(lam76664_fptr, 3);

//setting env list
clo76796[1] = filter;
clo76796[2] = kont76364;
clo76796[3] = op;
void* f7636976518 = encode_clo(clo76796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7636976518;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76666 = encode_clo(alloc_clo(lam76666_fptr, 0));

void* lam76668_fptr() // lam76668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76669 = arg_buffer[1];
//reading env and args
void* a7626976509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76669))[7];
//not do dummy comment
void* lst = (decode_clo(env76669))[6];
//not do dummy comment
void* op = (decode_clo(env76669))[5];
//not do dummy comment
void* kont76364 = (decode_clo(env76669))[4];
//not do dummy comment
void* cons = (decode_clo(env76669))[3];
//not do dummy comment
void* filter = (decode_clo(env76669))[2];
//not do dummy comment
void* car = (decode_clo(env76669))[1];

//creating new closure instance
void** clo76798 = alloc_clo(lam76666_fptr, 7);

//setting env list
clo76798[1] = car;
clo76798[2] = filter;
clo76798[3] = cons;
clo76798[4] = kont76364;
clo76798[5] = op;
clo76798[6] = lst;
clo76798[7] = cdr;
void* f7637076510 = encode_clo(clo76798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f7637076510;
arg_buffer[3] = a7626976509;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76668 = encode_clo(alloc_clo(lam76668_fptr, 0));

void* lam76670_fptr() // lam76670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76671 = arg_buffer[1];
//reading env and args
void* a7626776505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env76671))[8];
//not do dummy comment
void* op = (decode_clo(env76671))[7];
//not do dummy comment
void* kont76364 = (decode_clo(env76671))[6];
//not do dummy comment
void* cons = (decode_clo(env76671))[5];
//not do dummy comment
void* list = (decode_clo(env76671))[4];
//not do dummy comment
void* cdr = (decode_clo(env76671))[3];
//not do dummy comment
void* filter = (decode_clo(env76671))[2];
//not do dummy comment
void* car = (decode_clo(env76671))[1];

//if-clause
bool if_guard76799 = is_true(a7626776505);
if(if_guard76799)
{

//creating new closure instance
void** clo76801 = alloc_clo(lam76656_fptr, 1);

//setting env list
clo76801[1] = kont76364;
void* f7636576506 = encode_clo(clo76801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7636576506;
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
void** clo76803 = alloc_clo(lam76668_fptr, 7);

//setting env list
clo76803[1] = car;
clo76803[2] = filter;
clo76803[3] = cons;
clo76803[4] = kont76364;
clo76803[5] = op;
clo76803[6] = lst;
clo76803[7] = cdr;
void* f7637176508 = encode_clo(clo76803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7637176508;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76670 = encode_clo(alloc_clo(lam76670_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76672 = arg_buffer[1];
//reading env and args
void* kont76364 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76805 = alloc_clo(lam76670_fptr, 8);

//setting env list
clo76805[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo76805[2] = filter;
clo76805[3] = cdr;
clo76805[4] = list;
clo76805[5] = cons;
clo76805[6] = kont76364;
clo76805[7] = op;
clo76805[8] = lst;
void* f7637276504 = encode_clo(clo76805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7637276504;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam76673_fptr() // lam76673 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76674 = arg_buffer[1];
//reading env and args
void* a7627976527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7627776524 = (decode_clo(env76674))[3];
//not do dummy comment
void* kont76373 = (decode_clo(env76674))[2];
//not do dummy comment
void* drop = (decode_clo(env76674))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont76373;
arg_buffer[3] = a7627776524;
arg_buffer[4] = a7627976527;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76673 = encode_clo(alloc_clo(lam76673_fptr, 0));

void* lam76676_fptr() // lam76676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76677 = arg_buffer[1];
//reading env and args
void* a7627776524 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env76677))[4];
//not do dummy comment
void* _u45 = (decode_clo(env76677))[3];
//not do dummy comment
void* kont76373 = (decode_clo(env76677))[2];
//not do dummy comment
void* drop = (decode_clo(env76677))[1];
mpz_t* mpzvar76806 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76806, "1", 10);
void* a7627876525 = encode_mpz(mpzvar76806);

//creating new closure instance
void** clo76808 = alloc_clo(lam76673_fptr, 3);

//setting env list
clo76808[1] = drop;
clo76808[2] = kont76373;
clo76808[3] = a7627776524;
void* f7637476526 = encode_clo(clo76808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7637476526;
arg_buffer[3] = n;
arg_buffer[4] = a7627876525;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76676 = encode_clo(alloc_clo(lam76676_fptr, 0));

void* lam76678_fptr() // lam76678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76679 = arg_buffer[1];
//reading env and args
void* a7627676522 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76679))[6];
//not do dummy comment
void* n = (decode_clo(env76679))[5];
//not do dummy comment
void* _u45 = (decode_clo(env76679))[4];
//not do dummy comment
void* lst = (decode_clo(env76679))[3];
//not do dummy comment
void* kont76373 = (decode_clo(env76679))[2];
//not do dummy comment
void* drop = (decode_clo(env76679))[1];

//if-clause
bool if_guard76809 = is_true(a7627676522);
if(if_guard76809)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76373);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76373))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76811 = alloc_clo(lam76676_fptr, 4);

//setting env list
clo76811[1] = drop;
clo76811[2] = kont76373;
clo76811[3] = _u45;
clo76811[4] = n;
void* f7637576523 = encode_clo(clo76811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7637576523;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76678 = encode_clo(alloc_clo(lam76678_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76681 = arg_buffer[1];
//reading env and args
void* kont76373 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar76812 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76812, "0", 10);
void* a7627576520 = encode_mpz(mpzvar76812);

//creating new closure instance
void** clo76814 = alloc_clo(lam76678_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo76814[1] = drop;
clo76814[2] = kont76373;
clo76814[3] = lst;
clo76814[4] = _u45;
clo76814[5] = n;
clo76814[6] = cdr;
void* f7637676521 = encode_clo(clo76814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7637676521;
arg_buffer[3] = n;
arg_buffer[4] = a7627576520;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam76682_fptr() // lam76682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76683 = arg_buffer[1];
//reading env and args
void* a7628376535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7628176531 = (decode_clo(env76683))[3];
//not do dummy comment
void* kont76377 = (decode_clo(env76683))[2];
//not do dummy comment
void* proc = (decode_clo(env76683))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont76377;
arg_buffer[3] = a7628176531;
arg_buffer[4] = a7628376535;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76682 = encode_clo(alloc_clo(lam76682_fptr, 0));

void* lam76684_fptr() // lam76684 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76685 = arg_buffer[1];
//reading env and args
void* a7628276533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7628176531 = (decode_clo(env76685))[5];
//not do dummy comment
void* foldr = (decode_clo(env76685))[4];
//not do dummy comment
void* kont76377 = (decode_clo(env76685))[3];
//not do dummy comment
void* proc = (decode_clo(env76685))[2];
//not do dummy comment
void* acc = (decode_clo(env76685))[1];

//creating new closure instance
void** clo76816 = alloc_clo(lam76682_fptr, 3);

//setting env list
clo76816[1] = proc;
clo76816[2] = kont76377;
clo76816[3] = a7628176531;
void* f7637876534 = encode_clo(clo76816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f7637876534;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a7628276533;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76684 = encode_clo(alloc_clo(lam76684_fptr, 0));

void* lam76686_fptr() // lam76686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76687 = arg_buffer[1];
//reading env and args
void* a7628176531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76687))[6];
//not do dummy comment
void* kont76377 = (decode_clo(env76687))[5];
//not do dummy comment
void* foldr = (decode_clo(env76687))[4];
//not do dummy comment
void* lst = (decode_clo(env76687))[3];
//not do dummy comment
void* proc = (decode_clo(env76687))[2];
//not do dummy comment
void* acc = (decode_clo(env76687))[1];

//creating new closure instance
void** clo76818 = alloc_clo(lam76684_fptr, 5);

//setting env list
clo76818[1] = acc;
clo76818[2] = proc;
clo76818[3] = kont76377;
clo76818[4] = foldr;
clo76818[5] = a7628176531;
void* f7637976532 = encode_clo(clo76818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7637976532;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76686 = encode_clo(alloc_clo(lam76686_fptr, 0));

void* lam76688_fptr() // lam76688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76689 = arg_buffer[1];
//reading env and args
void* a7628076529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76689))[7];
//not do dummy comment
void* kont76377 = (decode_clo(env76689))[6];
//not do dummy comment
void* car = (decode_clo(env76689))[5];
//not do dummy comment
void* foldr = (decode_clo(env76689))[4];
//not do dummy comment
void* lst = (decode_clo(env76689))[3];
//not do dummy comment
void* proc = (decode_clo(env76689))[2];
//not do dummy comment
void* acc = (decode_clo(env76689))[1];

//if-clause
bool if_guard76819 = is_true(a7628076529);
if(if_guard76819)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76377);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76377))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76821 = alloc_clo(lam76686_fptr, 6);

//setting env list
clo76821[1] = acc;
clo76821[2] = proc;
clo76821[3] = lst;
clo76821[4] = foldr;
clo76821[5] = kont76377;
clo76821[6] = cdr;
void* f7638076530 = encode_clo(clo76821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7638076530;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76688 = encode_clo(alloc_clo(lam76688_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76690 = arg_buffer[1];
//reading env and args
void* kont76377 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo76823 = alloc_clo(lam76688_fptr, 7);

//setting env list
clo76823[1] = acc;
clo76823[2] = proc;
clo76823[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo76823[4] = foldr;
clo76823[5] = car;
clo76823[6] = kont76377;
clo76823[7] = cdr;
void* f7638176528 = encode_clo(clo76823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7638176528;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam76691_fptr() // lam76691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76692 = arg_buffer[1];
//reading env and args
void* a7628776543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7628576539 = (decode_clo(env76692))[3];
//not do dummy comment
void* kont76382 = (decode_clo(env76692))[2];
//not do dummy comment
void* cons = (decode_clo(env76692))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont76382;
arg_buffer[3] = a7628576539;
arg_buffer[4] = a7628776543;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76691 = encode_clo(alloc_clo(lam76691_fptr, 0));

void* lam76693_fptr() // lam76693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76694 = arg_buffer[1];
//reading env and args
void* a7628676541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env76694))[5];
//not do dummy comment
void* a7628576539 = (decode_clo(env76694))[4];
//not do dummy comment
void* lst2 = (decode_clo(env76694))[3];
//not do dummy comment
void* kont76382 = (decode_clo(env76694))[2];
//not do dummy comment
void* cons = (decode_clo(env76694))[1];

//creating new closure instance
void** clo76825 = alloc_clo(lam76691_fptr, 3);

//setting env list
clo76825[1] = cons;
clo76825[2] = kont76382;
clo76825[3] = a7628576539;
void* f7638376542 = encode_clo(clo76825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f7638376542;
arg_buffer[3] = a7628676541;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76693 = encode_clo(alloc_clo(lam76693_fptr, 0));

void* lam76695_fptr() // lam76695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76696 = arg_buffer[1];
//reading env and args
void* a7628576539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76696))[6];
//not do dummy comment
void* append = (decode_clo(env76696))[5];
//not do dummy comment
void* lst2 = (decode_clo(env76696))[4];
//not do dummy comment
void* cons = (decode_clo(env76696))[3];
//not do dummy comment
void* kont76382 = (decode_clo(env76696))[2];
//not do dummy comment
void* lst1 = (decode_clo(env76696))[1];

//creating new closure instance
void** clo76827 = alloc_clo(lam76693_fptr, 5);

//setting env list
clo76827[1] = cons;
clo76827[2] = kont76382;
clo76827[3] = lst2;
clo76827[4] = a7628576539;
clo76827[5] = append;
void* f7638476540 = encode_clo(clo76827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7638476540;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76695 = encode_clo(alloc_clo(lam76695_fptr, 0));

void* lam76697_fptr() // lam76697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76698 = arg_buffer[1];
//reading env and args
void* a7628476537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env76698))[7];
//not do dummy comment
void* append = (decode_clo(env76698))[6];
//not do dummy comment
void* lst2 = (decode_clo(env76698))[5];
//not do dummy comment
void* cons = (decode_clo(env76698))[4];
//not do dummy comment
void* kont76382 = (decode_clo(env76698))[3];
//not do dummy comment
void* lst1 = (decode_clo(env76698))[2];
//not do dummy comment
void* car = (decode_clo(env76698))[1];

//if-clause
bool if_guard76828 = is_true(a7628476537);
if(if_guard76828)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76382);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76382))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76830 = alloc_clo(lam76695_fptr, 6);

//setting env list
clo76830[1] = lst1;
clo76830[2] = kont76382;
clo76830[3] = cons;
clo76830[4] = lst2;
clo76830[5] = append;
clo76830[6] = cdr;
void* f7638576538 = encode_clo(clo76830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7638576538;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam76697 = encode_clo(alloc_clo(lam76697_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76699 = arg_buffer[1];
//reading env and args
void* kont76382 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76832 = alloc_clo(lam76697_fptr, 7);

//setting env list
clo76832[1] = car;
clo76832[2] = lst1;
clo76832[3] = kont76382;
clo76832[4] = cons;
clo76832[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo76832[6] = append;
clo76832[7] = cdr;
void* f7638676536 = encode_clo(clo76832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7638676536;
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
void* _76700 = arg_buffer[1];
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

void* kont7638776544 = prim_car(lst);
void* lst76545 = prim_cdr(lst);
void* x7628876546 = apply_prim_hash(lst76545);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7638776544);
arg_buffer[2] = x7628876546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7638776544))[0]);
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
void* _76701 = arg_buffer[1];
//reading env and args
void* kont76389 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7628976547 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76389);
arg_buffer[2] = x7628976547;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76389))[0]);
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
void* _76702 = arg_buffer[1];
//reading env and args
void* kont76390 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x7629076548 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76390);
arg_buffer[2] = x7629076548;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76390))[0]);
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
void* _76703 = arg_buffer[1];
//reading env and args
void* kont76391 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7629176549 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76391);
arg_buffer[2] = x7629176549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76391))[0]);
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
void* _76704 = arg_buffer[1];
//reading env and args
void* kont76392 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x7629276550 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont76392);
arg_buffer[2] = x7629276550;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont76392))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam76705_fptr() // lam76705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env76706 = arg_buffer[1];
//reading env and args
void* cont7639476552 = arg_buffer[2];
void* a7620876553 = arg_buffer[3];
void* b7620976554 = arg_buffer[4];
//Dummy comment

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cont7639476552);
arg_buffer[2] = b7620976554;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont7639476552))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam76705 = encode_clo(alloc_clo(lam76705_fptr, 0));

void* lam_fptr() // lam 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76707 = arg_buffer[1];
//reading env and args
void* kont76393 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76834 = alloc_clo(lam76705_fptr, 0);
void* a7629376551 = encode_clo(clo76834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(a7629376551);
arg_buffer[2] = kont76393;
arg_buffer[3] = x;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(a7629376551))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam = encode_clo(alloc_clo(lam_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _76710 = arg_buffer[1];
//reading env and args
void* kont76395 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar76835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76835, "5", 10);
void* a7629476555 = encode_mpz(mpzvar76835);
mpz_t* mpzvar76836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76836, "6", 10);
void* a7629576556 = encode_mpz(mpzvar76836);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(lam);
arg_buffer[2] = kont76395;
arg_buffer[3] = a7629476555;
arg_buffer[4] = a7629576556;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(lam))[0]);
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

