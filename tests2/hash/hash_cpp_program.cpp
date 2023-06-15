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
void* _44603 = arg_buffer[1];
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

void* kont4433244436 = prim_car(lst);
void* lst44437 = prim_cdr(lst);
void* x4424244438 = apply_prim__u43(lst44437);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4433244436);
arg_buffer[2] = x4424244438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4433244436))[0]);
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
void* _44604 = arg_buffer[1];
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

void* kont4433444439 = prim_car(lst);
void* lst44440 = prim_cdr(lst);
void* x4424344441 = apply_prim__u45(lst44440);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4433444439);
arg_buffer[2] = x4424344441;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4433444439))[0]);
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
void* _44605 = arg_buffer[1];
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

void* kont4433644442 = prim_car(lst);
void* lst44443 = prim_cdr(lst);
void* x4424444444 = apply_prim__u42(lst44443);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4433644442);
arg_buffer[2] = x4424444444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4433644442))[0]);
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
void* _44606 = arg_buffer[1];
//reading env and args
void* kont44338 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4424544445 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44338);
arg_buffer[2] = x4424544445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44338))[0]);
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
void* _44607 = arg_buffer[1];
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

void* kont4433944446 = prim_car(lst);
void* lst44447 = prim_cdr(lst);
void* x4424644448 = apply_prim__u47(lst44447);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4433944446);
arg_buffer[2] = x4424644448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4433944446))[0]);
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
void* _44608 = arg_buffer[1];
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

void* kont4434144449 = prim_car(lst);
void* lst44450 = prim_cdr(lst);
void* x4424744451 = apply_prim__u61(lst44450);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4434144449);
arg_buffer[2] = x4424744451;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4434144449))[0]);
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
void* _44609 = arg_buffer[1];
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

void* kont4434344452 = prim_car(lst);
void* lst44453 = prim_cdr(lst);
void* x4424844454 = apply_prim__u62(lst44453);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4434344452);
arg_buffer[2] = x4424844454;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4434344452))[0]);
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
void* _44610 = arg_buffer[1];
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

void* kont4434544455 = prim_car(lst);
void* lst44456 = prim_cdr(lst);
void* x4424944457 = apply_prim__u60(lst44456);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4434544455);
arg_buffer[2] = x4424944457;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4434544455))[0]);
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
void* _44611 = arg_buffer[1];
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

void* kont4434744458 = prim_car(lst);
void* lst44459 = prim_cdr(lst);
void* x4425044460 = apply_prim__u60_u61(lst44459);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4434744458);
arg_buffer[2] = x4425044460;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4434744458))[0]);
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
void* _44612 = arg_buffer[1];
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

void* kont4434944461 = prim_car(lst);
void* lst44462 = prim_cdr(lst);
void* x4425144463 = apply_prim__u62_u61(lst44462);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4434944461);
arg_buffer[2] = x4425144463;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4434944461))[0]);
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
void* _44613 = arg_buffer[1];
//reading env and args
void* kont44351 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4425244464 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44351);
arg_buffer[2] = x4425244464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44351))[0]);
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
void* _44614 = arg_buffer[1];
//reading env and args
void* kont44352 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4425344465 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44352);
arg_buffer[2] = x4425344465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44352))[0]);
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
void* _44615 = arg_buffer[1];
//reading env and args
void* kont44353 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4425444466 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44353);
arg_buffer[2] = x4425444466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44353))[0]);
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
void* _44616 = arg_buffer[1];
//reading env and args
void* kont44354 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4425544467 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44354);
arg_buffer[2] = x4425544467;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44354))[0]);
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
void* _44617 = arg_buffer[1];
//reading env and args
void* kont44355 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4425644468 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44355);
arg_buffer[2] = x4425644468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44355))[0]);
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
void* _44618 = arg_buffer[1];
//reading env and args
void* kont44356 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4425744469 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44356);
arg_buffer[2] = x4425744469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44356))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam44619_fptr() // lam44619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44620 = arg_buffer[1];
//reading env and args
void* a4426044473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env44620))[3];
//not do dummy comment
void* kont44357 = (decode_clo(env44620))[2];
//not do dummy comment
void* a4425844470 = (decode_clo(env44620))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44357;
arg_buffer[3] = a4425844470;
arg_buffer[4] = a4426044473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44619 = encode_clo(alloc_clo(lam44619_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44623 = arg_buffer[1];
//reading env and args
void* kont44357 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45301 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45301, "0", 10);
void* a4425844470 = encode_mpz(mpzvar45301);
mpz_t* mpzvar45302 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45302, "2", 10);
void* a4425944471 = encode_mpz(mpzvar45302);

//creating new closure instance
void** clo45304 = alloc_clo(lam44619_fptr, 3);

//setting env list
clo45304[1] = a4425844470;
clo45304[2] = kont44357;
clo45304[3] = equal_u63;
void* f4435844472 = encode_clo(clo45304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4435844472;
arg_buffer[3] = x;
arg_buffer[4] = a4425944471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam44624_fptr() // lam44624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44625 = arg_buffer[1];
//reading env and args
void* a4426344477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4426144474 = (decode_clo(env44625))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env44625))[2];
//not do dummy comment
void* kont44359 = (decode_clo(env44625))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44359;
arg_buffer[3] = a4426144474;
arg_buffer[4] = a4426344477;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44624 = encode_clo(alloc_clo(lam44624_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44628 = arg_buffer[1];
//reading env and args
void* kont44359 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45305 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45305, "1", 10);
void* a4426144474 = encode_mpz(mpzvar45305);
mpz_t* mpzvar45306 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45306, "2", 10);
void* a4426244475 = encode_mpz(mpzvar45306);

//creating new closure instance
void** clo45308 = alloc_clo(lam44624_fptr, 3);

//setting env list
clo45308[1] = kont44359;
clo45308[2] = equal_u63;
clo45308[3] = a4426144474;
void* f4436044476 = encode_clo(clo45308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4436044476;
arg_buffer[3] = x;
arg_buffer[4] = a4426244475;
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
void* _44629 = arg_buffer[1];
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

void* kont4436144478 = prim_car(x);
void* x44479 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4436144478);
arg_buffer[2] = x44479;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4436144478))[0]);
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
void* _44630 = arg_buffer[1];
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

void* kont4436344480 = prim_car(lst);
void* lst44481 = prim_cdr(lst);
void* x4426444482 = apply_prim_and(lst44481);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4436344480);
arg_buffer[2] = x4426444482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4436344480))[0]);
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
void* _44631 = arg_buffer[1];
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

void* kont4436544483 = prim_car(lst);
void* lst44484 = prim_cdr(lst);
void* x4426544485 = apply_prim_or(lst44484);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4436544483);
arg_buffer[2] = x4426544485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4436544483))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam44634_fptr() // lam44634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44635 = arg_buffer[1];
//reading env and args
void* a4427144495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44367 = (decode_clo(env44635))[3];
//not do dummy comment
void* x = (decode_clo(env44635))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44635))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont44367;
arg_buffer[3] = x;
arg_buffer[4] = a4427144495;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44634 = encode_clo(alloc_clo(lam44634_fptr, 0));

void* lam44636_fptr() // lam44636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44637 = arg_buffer[1];
//reading env and args
void* a4426944492 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44637))[5];
//not do dummy comment
void* lst = (decode_clo(env44637))[4];
//not do dummy comment
void* kont44367 = (decode_clo(env44637))[3];
//not do dummy comment
void* x = (decode_clo(env44637))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44637))[1];

//if-clause
bool if_guard45309 = is_true(a4426944492);
if(if_guard45309)
{
void* x4427044493 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44367);
arg_buffer[2] = x4427044493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44367))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45311 = alloc_clo(lam44634_fptr, 3);

//setting env list
clo45311[1] = member_u63;
clo45311[2] = x;
clo45311[3] = kont44367;
void* f4436844494 = encode_clo(clo45311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4436844494;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44636 = encode_clo(alloc_clo(lam44636_fptr, 0));

void* lam44638_fptr() // lam44638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44639 = arg_buffer[1];
//reading env and args
void* a4426844490 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44639))[6];
//not do dummy comment
void* lst = (decode_clo(env44639))[5];
//not do dummy comment
void* kont44367 = (decode_clo(env44639))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env44639))[3];
//not do dummy comment
void* x = (decode_clo(env44639))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44639))[1];

//creating new closure instance
void** clo45313 = alloc_clo(lam44636_fptr, 5);

//setting env list
clo45313[1] = member_u63;
clo45313[2] = x;
clo45313[3] = kont44367;
clo45313[4] = lst;
clo45313[5] = cdr;
void* f4436944491 = encode_clo(clo45313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4436944491;
arg_buffer[3] = a4426844490;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44638 = encode_clo(alloc_clo(lam44638_fptr, 0));

void* lam44640_fptr() // lam44640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44641 = arg_buffer[1];
//reading env and args
void* a4426644487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44641))[7];
//not do dummy comment
void* lst = (decode_clo(env44641))[6];
//not do dummy comment
void* kont44367 = (decode_clo(env44641))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env44641))[4];
//not do dummy comment
void* x = (decode_clo(env44641))[3];
//not do dummy comment
void* car = (decode_clo(env44641))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44641))[1];

//if-clause
bool if_guard45314 = is_true(a4426644487);
if(if_guard45314)
{
void* x4426744488 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44367);
arg_buffer[2] = x4426744488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44367))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45316 = alloc_clo(lam44638_fptr, 6);

//setting env list
clo45316[1] = member_u63;
clo45316[2] = x;
clo45316[3] = equal_u63;
clo45316[4] = kont44367;
clo45316[5] = lst;
clo45316[6] = cdr;
void* f4437044489 = encode_clo(clo45316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4437044489;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44640 = encode_clo(alloc_clo(lam44640_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44642 = arg_buffer[1];
//reading env and args
void* kont44367 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45318 = alloc_clo(lam44640_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo45318[1] = member_u63;
clo45318[2] = car;
clo45318[3] = x;
clo45318[4] = equal_u63;
clo45318[5] = kont44367;
clo45318[6] = lst;
clo45318[7] = cdr;
void* f4437144486 = encode_clo(clo45318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4437144486;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam44643_fptr() // lam44643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44644 = arg_buffer[1];
//reading env and args
void* a4427544503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4427444501 = (decode_clo(env44644))[4];
//not do dummy comment
void* foldl = (decode_clo(env44644))[3];
//not do dummy comment
void* kont44372 = (decode_clo(env44644))[2];
//not do dummy comment
void* fun = (decode_clo(env44644))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont44372;
arg_buffer[3] = fun;
arg_buffer[4] = a4427444501;
arg_buffer[5] = a4427544503;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44643 = encode_clo(alloc_clo(lam44643_fptr, 0));

void* lam44645_fptr() // lam44645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44646 = arg_buffer[1];
//reading env and args
void* a4427444501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44646))[5];
//not do dummy comment
void* lst = (decode_clo(env44646))[4];
//not do dummy comment
void* foldl = (decode_clo(env44646))[3];
//not do dummy comment
void* kont44372 = (decode_clo(env44646))[2];
//not do dummy comment
void* fun = (decode_clo(env44646))[1];

//creating new closure instance
void** clo45320 = alloc_clo(lam44643_fptr, 4);

//setting env list
clo45320[1] = fun;
clo45320[2] = kont44372;
clo45320[3] = foldl;
clo45320[4] = a4427444501;
void* f4437344502 = encode_clo(clo45320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4437344502;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44645 = encode_clo(alloc_clo(lam44645_fptr, 0));

void* lam44647_fptr() // lam44647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44648 = arg_buffer[1];
//reading env and args
void* a4427344499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44648))[6];
//not do dummy comment
void* lst = (decode_clo(env44648))[5];
//not do dummy comment
void* acc = (decode_clo(env44648))[4];
//not do dummy comment
void* foldl = (decode_clo(env44648))[3];
//not do dummy comment
void* kont44372 = (decode_clo(env44648))[2];
//not do dummy comment
void* fun = (decode_clo(env44648))[1];

//creating new closure instance
void** clo45322 = alloc_clo(lam44645_fptr, 5);

//setting env list
clo45322[1] = fun;
clo45322[2] = kont44372;
clo45322[3] = foldl;
clo45322[4] = lst;
clo45322[5] = cdr;
void* f4437444500 = encode_clo(clo45322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4437444500;
arg_buffer[3] = a4427344499;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44647 = encode_clo(alloc_clo(lam44647_fptr, 0));

void* lam44649_fptr() // lam44649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44650 = arg_buffer[1];
//reading env and args
void* a4427244497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44650))[7];
//not do dummy comment
void* lst = (decode_clo(env44650))[6];
//not do dummy comment
void* acc = (decode_clo(env44650))[5];
//not do dummy comment
void* car = (decode_clo(env44650))[4];
//not do dummy comment
void* foldl = (decode_clo(env44650))[3];
//not do dummy comment
void* kont44372 = (decode_clo(env44650))[2];
//not do dummy comment
void* fun = (decode_clo(env44650))[1];

//if-clause
bool if_guard45323 = is_true(a4427244497);
if(if_guard45323)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44372);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44372))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45325 = alloc_clo(lam44647_fptr, 6);

//setting env list
clo45325[1] = fun;
clo45325[2] = kont44372;
clo45325[3] = foldl;
clo45325[4] = acc;
clo45325[5] = lst;
clo45325[6] = cdr;
void* f4437544498 = encode_clo(clo45325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4437544498;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44649 = encode_clo(alloc_clo(lam44649_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44651 = arg_buffer[1];
//reading env and args
void* kont44372 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45327 = alloc_clo(lam44649_fptr, 7);

//setting env list
clo45327[1] = fun;
clo45327[2] = kont44372;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo45327[3] = foldl;
clo45327[4] = car;
clo45327[5] = acc;
clo45327[6] = lst;
clo45327[7] = cdr;
void* f4437644496 = encode_clo(clo45327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4437644496;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam44652_fptr() // lam44652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44653 = arg_buffer[1];
//reading env and args
void* a4427944511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4427744507 = (decode_clo(env44653))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44653))[2];
//not do dummy comment
void* kont44377 = (decode_clo(env44653))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44377;
arg_buffer[3] = a4427744507;
arg_buffer[4] = a4427944511;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44652 = encode_clo(alloc_clo(lam44652_fptr, 0));

void* lam44654_fptr() // lam44654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44655 = arg_buffer[1];
//reading env and args
void* a4427844509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4427744507 = (decode_clo(env44655))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44655))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44655))[3];
//not do dummy comment
void* cons = (decode_clo(env44655))[2];
//not do dummy comment
void* kont44377 = (decode_clo(env44655))[1];

//creating new closure instance
void** clo45329 = alloc_clo(lam44652_fptr, 3);

//setting env list
clo45329[1] = kont44377;
clo45329[2] = reverse_u45helper;
clo45329[3] = a4427744507;
void* f4437844510 = encode_clo(clo45329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4437844510;
arg_buffer[3] = a4427844509;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44654 = encode_clo(alloc_clo(lam44654_fptr, 0));

void* lam44656_fptr() // lam44656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44657 = arg_buffer[1];
//reading env and args
void* a4427744507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44657))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44657))[5];
//not do dummy comment
void* lst2 = (decode_clo(env44657))[4];
//not do dummy comment
void* car = (decode_clo(env44657))[3];
//not do dummy comment
void* cons = (decode_clo(env44657))[2];
//not do dummy comment
void* kont44377 = (decode_clo(env44657))[1];

//creating new closure instance
void** clo45331 = alloc_clo(lam44654_fptr, 5);

//setting env list
clo45331[1] = kont44377;
clo45331[2] = cons;
clo45331[3] = lst2;
clo45331[4] = reverse_u45helper;
clo45331[5] = a4427744507;
void* f4437944508 = encode_clo(clo45331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4437944508;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44656 = encode_clo(alloc_clo(lam44656_fptr, 0));

void* lam44658_fptr() // lam44658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44659 = arg_buffer[1];
//reading env and args
void* a4427644505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44659))[7];
//not do dummy comment
void* lst = (decode_clo(env44659))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44659))[5];
//not do dummy comment
void* lst2 = (decode_clo(env44659))[4];
//not do dummy comment
void* car = (decode_clo(env44659))[3];
//not do dummy comment
void* cons = (decode_clo(env44659))[2];
//not do dummy comment
void* kont44377 = (decode_clo(env44659))[1];

//if-clause
bool if_guard45332 = is_true(a4427644505);
if(if_guard45332)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44377);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44377))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45334 = alloc_clo(lam44656_fptr, 6);

//setting env list
clo45334[1] = kont44377;
clo45334[2] = cons;
clo45334[3] = car;
clo45334[4] = lst2;
clo45334[5] = reverse_u45helper;
clo45334[6] = lst;
void* f4438044506 = encode_clo(clo45334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4438044506;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44658 = encode_clo(alloc_clo(lam44658_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44660 = arg_buffer[1];
//reading env and args
void* kont44377 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45336 = alloc_clo(lam44658_fptr, 7);

//setting env list
clo45336[1] = kont44377;
clo45336[2] = cons;
clo45336[3] = car;
clo45336[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo45336[5] = reverse_u45helper;
clo45336[6] = lst;
clo45336[7] = cdr;
void* f4438144504 = encode_clo(clo45336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4438144504;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam44661_fptr() // lam44661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44662 = arg_buffer[1];
//reading env and args
void* a4428044513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44662))[3];
//not do dummy comment
void* lst = (decode_clo(env44662))[2];
//not do dummy comment
void* kont44382 = (decode_clo(env44662))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44382;
arg_buffer[3] = lst;
arg_buffer[4] = a4428044513;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44661 = encode_clo(alloc_clo(lam44661_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44663 = arg_buffer[1];
//reading env and args
void* kont44382 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45338 = alloc_clo(lam44661_fptr, 3);

//setting env list
clo45338[1] = kont44382;
clo45338[2] = lst;
clo45338[3] = reverse_u45helper;
void* f4438344512 = encode_clo(clo45338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4438344512;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam44664_fptr() // lam44664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44665 = arg_buffer[1];
//reading env and args
void* x4428344518 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44384 = (decode_clo(env44665))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44384);
arg_buffer[2] = x4428344518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44384))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44664 = encode_clo(alloc_clo(lam44664_fptr, 0));

void* lam44666_fptr() // lam44666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44667 = arg_buffer[1];
//reading env and args
void* a4428844527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4428644523 = (decode_clo(env44667))[4];
//not do dummy comment
void* kont44384 = (decode_clo(env44667))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44667))[2];
//not do dummy comment
void* a4428444520 = (decode_clo(env44667))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44384;
arg_buffer[3] = a4428444520;
arg_buffer[4] = a4428644523;
arg_buffer[5] = a4428844527;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44666 = encode_clo(alloc_clo(lam44666_fptr, 0));

void* lam44668_fptr() // lam44668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44669 = arg_buffer[1];
//reading env and args
void* a4428744525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4428644523 = (decode_clo(env44669))[6];
//not do dummy comment
void* kont44384 = (decode_clo(env44669))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44669))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44669))[3];
//not do dummy comment
void* cons = (decode_clo(env44669))[2];
//not do dummy comment
void* a4428444520 = (decode_clo(env44669))[1];

//creating new closure instance
void** clo45340 = alloc_clo(lam44666_fptr, 4);

//setting env list
clo45340[1] = a4428444520;
clo45340[2] = take_u45helper;
clo45340[3] = kont44384;
clo45340[4] = a4428644523;
void* f4438644526 = encode_clo(clo45340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4438644526;
arg_buffer[3] = a4428744525;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44668 = encode_clo(alloc_clo(lam44668_fptr, 0));

void* lam44670_fptr() // lam44670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44671 = arg_buffer[1];
//reading env and args
void* a4428644523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44671))[7];
//not do dummy comment
void* kont44384 = (decode_clo(env44671))[6];
//not do dummy comment
void* car = (decode_clo(env44671))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44671))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44671))[3];
//not do dummy comment
void* cons = (decode_clo(env44671))[2];
//not do dummy comment
void* a4428444520 = (decode_clo(env44671))[1];

//creating new closure instance
void** clo45342 = alloc_clo(lam44668_fptr, 6);

//setting env list
clo45342[1] = a4428444520;
clo45342[2] = cons;
clo45342[3] = lst2;
clo45342[4] = take_u45helper;
clo45342[5] = kont44384;
clo45342[6] = a4428644523;
void* f4438744524 = encode_clo(clo45342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4438744524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44670 = encode_clo(alloc_clo(lam44670_fptr, 0));

void* lam44673_fptr() // lam44673 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44674 = arg_buffer[1];
//reading env and args
void* a4428444520 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44674))[8];
//not do dummy comment
void* kont44384 = (decode_clo(env44674))[7];
//not do dummy comment
void* cons = (decode_clo(env44674))[6];
//not do dummy comment
void* _u45 = (decode_clo(env44674))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44674))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44674))[3];
//not do dummy comment
void* n = (decode_clo(env44674))[2];
//not do dummy comment
void* car = (decode_clo(env44674))[1];
mpz_t* mpzvar45343 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45343, "1", 10);
void* a4428544521 = encode_mpz(mpzvar45343);

//creating new closure instance
void** clo45345 = alloc_clo(lam44670_fptr, 7);

//setting env list
clo45345[1] = a4428444520;
clo45345[2] = cons;
clo45345[3] = lst2;
clo45345[4] = take_u45helper;
clo45345[5] = car;
clo45345[6] = kont44384;
clo45345[7] = lst;
void* f4438844522 = encode_clo(clo45345);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4438844522;
arg_buffer[3] = n;
arg_buffer[4] = a4428544521;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44673 = encode_clo(alloc_clo(lam44673_fptr, 0));

void* lam44675_fptr() // lam44675 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44676 = arg_buffer[1];
//reading env and args
void* a4428244516 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44676))[10];
//not do dummy comment
void* lst = (decode_clo(env44676))[9];
//not do dummy comment
void* kont44384 = (decode_clo(env44676))[8];
//not do dummy comment
void* reverse = (decode_clo(env44676))[7];
//not do dummy comment
void* cons = (decode_clo(env44676))[6];
//not do dummy comment
void* _u45 = (decode_clo(env44676))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44676))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44676))[3];
//not do dummy comment
void* n = (decode_clo(env44676))[2];
//not do dummy comment
void* car = (decode_clo(env44676))[1];

//if-clause
bool if_guard45346 = is_true(a4428244516);
if(if_guard45346)
{

//creating new closure instance
void** clo45348 = alloc_clo(lam44664_fptr, 1);

//setting env list
clo45348[1] = kont44384;
void* f4438544517 = encode_clo(clo45348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4438544517;
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
void** clo45350 = alloc_clo(lam44673_fptr, 8);

//setting env list
clo45350[1] = car;
clo45350[2] = n;
clo45350[3] = lst2;
clo45350[4] = take_u45helper;
clo45350[5] = _u45;
clo45350[6] = cons;
clo45350[7] = kont44384;
clo45350[8] = lst;
void* f4438944519 = encode_clo(clo45350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4438944519;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44675 = encode_clo(alloc_clo(lam44675_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44678 = arg_buffer[1];
//reading env and args
void* kont44384 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar45351 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45351, "0", 10);
void* a4428144514 = encode_mpz(mpzvar45351);

//creating new closure instance
void** clo45353 = alloc_clo(lam44675_fptr, 10);

//setting env list
clo45353[1] = car;
clo45353[2] = n;
clo45353[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo45353[4] = take_u45helper;
clo45353[5] = _u45;
clo45353[6] = cons;
clo45353[7] = reverse;
clo45353[8] = kont44384;
clo45353[9] = lst;
clo45353[10] = cdr;
void* f4439044515 = encode_clo(clo45353);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4439044515;
arg_buffer[3] = n;
arg_buffer[4] = a4428144514;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam44679_fptr() // lam44679 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44680 = arg_buffer[1];
//reading env and args
void* a4428944529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44680))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env44680))[3];
//not do dummy comment
void* kont44391 = (decode_clo(env44680))[2];
//not do dummy comment
void* n = (decode_clo(env44680))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44391;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4428944529;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44679 = encode_clo(alloc_clo(lam44679_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44681 = arg_buffer[1];
//reading env and args
void* kont44391 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45355 = alloc_clo(lam44679_fptr, 4);

//setting env list
clo45355[1] = n;
clo45355[2] = kont44391;
clo45355[3] = take_u45helper;
clo45355[4] = lst;
void* f4439244528 = encode_clo(clo45355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4439244528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam44683_fptr() // lam44683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44684 = arg_buffer[1];
//reading env and args
void* a4429444537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env44684))[3];
//not do dummy comment
void* a4429244533 = (decode_clo(env44684))[2];
//not do dummy comment
void* kont44393 = (decode_clo(env44684))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont44393;
arg_buffer[3] = a4429244533;
arg_buffer[4] = a4429444537;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44683 = encode_clo(alloc_clo(lam44683_fptr, 0));

void* lam44685_fptr() // lam44685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44686 = arg_buffer[1];
//reading env and args
void* a4429344535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env44686))[4];
//not do dummy comment
void* _u43 = (decode_clo(env44686))[3];
//not do dummy comment
void* a4429244533 = (decode_clo(env44686))[2];
//not do dummy comment
void* kont44393 = (decode_clo(env44686))[1];

//creating new closure instance
void** clo45357 = alloc_clo(lam44683_fptr, 3);

//setting env list
clo45357[1] = kont44393;
clo45357[2] = a4429244533;
clo45357[3] = _u43;
void* f4439444536 = encode_clo(clo45357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4439444536;
arg_buffer[3] = a4429344535;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44685 = encode_clo(alloc_clo(lam44685_fptr, 0));

void* lam44688_fptr() // lam44688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44689 = arg_buffer[1];
//reading env and args
void* a4429044531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44689))[5];
//not do dummy comment
void* lst = (decode_clo(env44689))[4];
//not do dummy comment
void* length = (decode_clo(env44689))[3];
//not do dummy comment
void* _u43 = (decode_clo(env44689))[2];
//not do dummy comment
void* kont44393 = (decode_clo(env44689))[1];

//if-clause
bool if_guard45358 = is_true(a4429044531);
if(if_guard45358)
{
mpz_t* mpzvar45359 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45359, "0", 10);
void* x4429144532 = encode_mpz(mpzvar45359);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44393);
arg_buffer[2] = x4429144532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44393))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar45360 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45360, "1", 10);
void* a4429244533 = encode_mpz(mpzvar45360);

//creating new closure instance
void** clo45362 = alloc_clo(lam44685_fptr, 4);

//setting env list
clo45362[1] = kont44393;
clo45362[2] = a4429244533;
clo45362[3] = _u43;
clo45362[4] = length;
void* f4439544534 = encode_clo(clo45362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4439544534;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44688 = encode_clo(alloc_clo(lam44688_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44690 = arg_buffer[1];
//reading env and args
void* kont44393 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45364 = alloc_clo(lam44688_fptr, 5);

//setting env list
clo45364[1] = kont44393;
clo45364[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo45364[3] = length;
clo45364[4] = lst;
clo45364[5] = cdr;
void* f4439644530 = encode_clo(clo45364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4439644530;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam44691_fptr() // lam44691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44692 = arg_buffer[1];
//reading env and args
void* x4429644541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44397 = (decode_clo(env44692))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44397);
arg_buffer[2] = x4429644541;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44397))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44691 = encode_clo(alloc_clo(lam44691_fptr, 0));

void* lam44693_fptr() // lam44693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44694 = arg_buffer[1];
//reading env and args
void* a4430044549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44397 = (decode_clo(env44694))[3];
//not do dummy comment
void* a4429844545 = (decode_clo(env44694))[2];
//not do dummy comment
void* cons = (decode_clo(env44694))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44397;
arg_buffer[3] = a4429844545;
arg_buffer[4] = a4430044549;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44693 = encode_clo(alloc_clo(lam44693_fptr, 0));

void* lam44695_fptr() // lam44695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44696 = arg_buffer[1];
//reading env and args
void* a4429944547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44397 = (decode_clo(env44696))[5];
//not do dummy comment
void* map = (decode_clo(env44696))[4];
//not do dummy comment
void* a4429844545 = (decode_clo(env44696))[3];
//not do dummy comment
void* proc = (decode_clo(env44696))[2];
//not do dummy comment
void* cons = (decode_clo(env44696))[1];

//creating new closure instance
void** clo45366 = alloc_clo(lam44693_fptr, 3);

//setting env list
clo45366[1] = cons;
clo45366[2] = a4429844545;
clo45366[3] = kont44397;
void* f4439944548 = encode_clo(clo45366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4439944548;
arg_buffer[3] = proc;
arg_buffer[4] = a4429944547;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44695 = encode_clo(alloc_clo(lam44695_fptr, 0));

void* lam44697_fptr() // lam44697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44698 = arg_buffer[1];
//reading env and args
void* a4429844545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44698))[6];
//not do dummy comment
void* kont44397 = (decode_clo(env44698))[5];
//not do dummy comment
void* lst = (decode_clo(env44698))[4];
//not do dummy comment
void* map = (decode_clo(env44698))[3];
//not do dummy comment
void* proc = (decode_clo(env44698))[2];
//not do dummy comment
void* cons = (decode_clo(env44698))[1];

//creating new closure instance
void** clo45368 = alloc_clo(lam44695_fptr, 5);

//setting env list
clo45368[1] = cons;
clo45368[2] = proc;
clo45368[3] = a4429844545;
clo45368[4] = map;
clo45368[5] = kont44397;
void* f4440044546 = encode_clo(clo45368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4440044546;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44697 = encode_clo(alloc_clo(lam44697_fptr, 0));

void* lam44699_fptr() // lam44699 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44700 = arg_buffer[1];
//reading env and args
void* a4429744543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44700))[6];
//not do dummy comment
void* kont44397 = (decode_clo(env44700))[5];
//not do dummy comment
void* lst = (decode_clo(env44700))[4];
//not do dummy comment
void* map = (decode_clo(env44700))[3];
//not do dummy comment
void* proc = (decode_clo(env44700))[2];
//not do dummy comment
void* cons = (decode_clo(env44700))[1];

//creating new closure instance
void** clo45370 = alloc_clo(lam44697_fptr, 6);

//setting env list
clo45370[1] = cons;
clo45370[2] = proc;
clo45370[3] = map;
clo45370[4] = lst;
clo45370[5] = kont44397;
clo45370[6] = cdr;
void* f4440144544 = encode_clo(clo45370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4440144544;
arg_buffer[3] = a4429744543;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44699 = encode_clo(alloc_clo(lam44699_fptr, 0));

void* lam44701_fptr() // lam44701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44702 = arg_buffer[1];
//reading env and args
void* a4429544539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44397 = (decode_clo(env44702))[8];
//not do dummy comment
void* lst = (decode_clo(env44702))[7];
//not do dummy comment
void* map = (decode_clo(env44702))[6];
//not do dummy comment
void* proc = (decode_clo(env44702))[5];
//not do dummy comment
void* car = (decode_clo(env44702))[4];
//not do dummy comment
void* cons = (decode_clo(env44702))[3];
//not do dummy comment
void* list = (decode_clo(env44702))[2];
//not do dummy comment
void* cdr = (decode_clo(env44702))[1];

//if-clause
bool if_guard45371 = is_true(a4429544539);
if(if_guard45371)
{

//creating new closure instance
void** clo45373 = alloc_clo(lam44691_fptr, 1);

//setting env list
clo45373[1] = kont44397;
void* f4439844540 = encode_clo(clo45373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4439844540;
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
void** clo45375 = alloc_clo(lam44699_fptr, 6);

//setting env list
clo45375[1] = cons;
clo45375[2] = proc;
clo45375[3] = map;
clo45375[4] = lst;
clo45375[5] = kont44397;
clo45375[6] = cdr;
void* f4440244542 = encode_clo(clo45375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4440244542;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44701 = encode_clo(alloc_clo(lam44701_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44703 = arg_buffer[1];
//reading env and args
void* kont44397 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45377 = alloc_clo(lam44701_fptr, 8);

//setting env list
clo45377[1] = cdr;
clo45377[2] = list;
clo45377[3] = cons;
clo45377[4] = car;
clo45377[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo45377[6] = map;
clo45377[7] = lst;
clo45377[8] = kont44397;
void* f4440344538 = encode_clo(clo45377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4440344538;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam44704_fptr() // lam44704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44705 = arg_buffer[1];
//reading env and args
void* x4430244553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44404 = (decode_clo(env44705))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44404);
arg_buffer[2] = x4430244553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44404))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44704 = encode_clo(alloc_clo(lam44704_fptr, 0));

void* lam44706_fptr() // lam44706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44707 = arg_buffer[1];
//reading env and args
void* a4430744563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4430544559 = (decode_clo(env44707))[3];
//not do dummy comment
void* kont44404 = (decode_clo(env44707))[2];
//not do dummy comment
void* cons = (decode_clo(env44707))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44404;
arg_buffer[3] = a4430544559;
arg_buffer[4] = a4430744563;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44706 = encode_clo(alloc_clo(lam44706_fptr, 0));

void* lam44708_fptr() // lam44708 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44709 = arg_buffer[1];
//reading env and args
void* a4430644561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4430544559 = (decode_clo(env44709))[5];
//not do dummy comment
void* op = (decode_clo(env44709))[4];
//not do dummy comment
void* kont44404 = (decode_clo(env44709))[3];
//not do dummy comment
void* filter = (decode_clo(env44709))[2];
//not do dummy comment
void* cons = (decode_clo(env44709))[1];

//creating new closure instance
void** clo45379 = alloc_clo(lam44706_fptr, 3);

//setting env list
clo45379[1] = cons;
clo45379[2] = kont44404;
clo45379[3] = a4430544559;
void* f4440644562 = encode_clo(clo45379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4440644562;
arg_buffer[3] = op;
arg_buffer[4] = a4430644561;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44708 = encode_clo(alloc_clo(lam44708_fptr, 0));

void* lam44710_fptr() // lam44710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44711 = arg_buffer[1];
//reading env and args
void* a4430544559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44711))[6];
//not do dummy comment
void* lst = (decode_clo(env44711))[5];
//not do dummy comment
void* op = (decode_clo(env44711))[4];
//not do dummy comment
void* kont44404 = (decode_clo(env44711))[3];
//not do dummy comment
void* filter = (decode_clo(env44711))[2];
//not do dummy comment
void* cons = (decode_clo(env44711))[1];

//creating new closure instance
void** clo45381 = alloc_clo(lam44708_fptr, 5);

//setting env list
clo45381[1] = cons;
clo45381[2] = filter;
clo45381[3] = kont44404;
clo45381[4] = op;
clo45381[5] = a4430544559;
void* f4440744560 = encode_clo(clo45381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4440744560;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44710 = encode_clo(alloc_clo(lam44710_fptr, 0));

void* lam44712_fptr() // lam44712 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44713 = arg_buffer[1];
//reading env and args
void* a4430844565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env44713))[3];
//not do dummy comment
void* kont44404 = (decode_clo(env44713))[2];
//not do dummy comment
void* filter = (decode_clo(env44713))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont44404;
arg_buffer[3] = op;
arg_buffer[4] = a4430844565;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44712 = encode_clo(alloc_clo(lam44712_fptr, 0));

void* lam44714_fptr() // lam44714 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44715 = arg_buffer[1];
//reading env and args
void* a4430444557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44715))[7];
//not do dummy comment
void* lst = (decode_clo(env44715))[6];
//not do dummy comment
void* op = (decode_clo(env44715))[5];
//not do dummy comment
void* kont44404 = (decode_clo(env44715))[4];
//not do dummy comment
void* cons = (decode_clo(env44715))[3];
//not do dummy comment
void* filter = (decode_clo(env44715))[2];
//not do dummy comment
void* car = (decode_clo(env44715))[1];

//if-clause
bool if_guard45382 = is_true(a4430444557);
if(if_guard45382)
{

//creating new closure instance
void** clo45384 = alloc_clo(lam44710_fptr, 6);

//setting env list
clo45384[1] = cons;
clo45384[2] = filter;
clo45384[3] = kont44404;
clo45384[4] = op;
clo45384[5] = lst;
clo45384[6] = cdr;
void* f4440844558 = encode_clo(clo45384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4440844558;
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
void** clo45386 = alloc_clo(lam44712_fptr, 3);

//setting env list
clo45386[1] = filter;
clo45386[2] = kont44404;
clo45386[3] = op;
void* f4440944564 = encode_clo(clo45386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4440944564;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44714 = encode_clo(alloc_clo(lam44714_fptr, 0));

void* lam44716_fptr() // lam44716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44717 = arg_buffer[1];
//reading env and args
void* a4430344555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44717))[7];
//not do dummy comment
void* lst = (decode_clo(env44717))[6];
//not do dummy comment
void* op = (decode_clo(env44717))[5];
//not do dummy comment
void* kont44404 = (decode_clo(env44717))[4];
//not do dummy comment
void* cons = (decode_clo(env44717))[3];
//not do dummy comment
void* filter = (decode_clo(env44717))[2];
//not do dummy comment
void* car = (decode_clo(env44717))[1];

//creating new closure instance
void** clo45388 = alloc_clo(lam44714_fptr, 7);

//setting env list
clo45388[1] = car;
clo45388[2] = filter;
clo45388[3] = cons;
clo45388[4] = kont44404;
clo45388[5] = op;
clo45388[6] = lst;
clo45388[7] = cdr;
void* f4441044556 = encode_clo(clo45388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4441044556;
arg_buffer[3] = a4430344555;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44716 = encode_clo(alloc_clo(lam44716_fptr, 0));

void* lam44718_fptr() // lam44718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44719 = arg_buffer[1];
//reading env and args
void* a4430144551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44719))[8];
//not do dummy comment
void* op = (decode_clo(env44719))[7];
//not do dummy comment
void* kont44404 = (decode_clo(env44719))[6];
//not do dummy comment
void* cons = (decode_clo(env44719))[5];
//not do dummy comment
void* list = (decode_clo(env44719))[4];
//not do dummy comment
void* cdr = (decode_clo(env44719))[3];
//not do dummy comment
void* filter = (decode_clo(env44719))[2];
//not do dummy comment
void* car = (decode_clo(env44719))[1];

//if-clause
bool if_guard45389 = is_true(a4430144551);
if(if_guard45389)
{

//creating new closure instance
void** clo45391 = alloc_clo(lam44704_fptr, 1);

//setting env list
clo45391[1] = kont44404;
void* f4440544552 = encode_clo(clo45391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4440544552;
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
void** clo45393 = alloc_clo(lam44716_fptr, 7);

//setting env list
clo45393[1] = car;
clo45393[2] = filter;
clo45393[3] = cons;
clo45393[4] = kont44404;
clo45393[5] = op;
clo45393[6] = lst;
clo45393[7] = cdr;
void* f4441144554 = encode_clo(clo45393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4441144554;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44718 = encode_clo(alloc_clo(lam44718_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44720 = arg_buffer[1];
//reading env and args
void* kont44404 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45395 = alloc_clo(lam44718_fptr, 8);

//setting env list
clo45395[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo45395[2] = filter;
clo45395[3] = cdr;
clo45395[4] = list;
clo45395[5] = cons;
clo45395[6] = kont44404;
clo45395[7] = op;
clo45395[8] = lst;
void* f4441244550 = encode_clo(clo45395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4441244550;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam44721_fptr() // lam44721 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44722 = arg_buffer[1];
//reading env and args
void* a4431344573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4431144570 = (decode_clo(env44722))[3];
//not do dummy comment
void* kont44413 = (decode_clo(env44722))[2];
//not do dummy comment
void* drop = (decode_clo(env44722))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont44413;
arg_buffer[3] = a4431144570;
arg_buffer[4] = a4431344573;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44721 = encode_clo(alloc_clo(lam44721_fptr, 0));

void* lam44724_fptr() // lam44724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44725 = arg_buffer[1];
//reading env and args
void* a4431144570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44413 = (decode_clo(env44725))[4];
//not do dummy comment
void* drop = (decode_clo(env44725))[3];
//not do dummy comment
void* n = (decode_clo(env44725))[2];
//not do dummy comment
void* _u45 = (decode_clo(env44725))[1];
mpz_t* mpzvar45396 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45396, "1", 10);
void* a4431244571 = encode_mpz(mpzvar45396);

//creating new closure instance
void** clo45398 = alloc_clo(lam44721_fptr, 3);

//setting env list
clo45398[1] = drop;
clo45398[2] = kont44413;
clo45398[3] = a4431144570;
void* f4441444572 = encode_clo(clo45398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4441444572;
arg_buffer[3] = n;
arg_buffer[4] = a4431244571;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44724 = encode_clo(alloc_clo(lam44724_fptr, 0));

void* lam44726_fptr() // lam44726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44727 = arg_buffer[1];
//reading env and args
void* a4431044568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44727))[6];
//not do dummy comment
void* kont44413 = (decode_clo(env44727))[5];
//not do dummy comment
void* n = (decode_clo(env44727))[4];
//not do dummy comment
void* _u45 = (decode_clo(env44727))[3];
//not do dummy comment
void* lst = (decode_clo(env44727))[2];
//not do dummy comment
void* drop = (decode_clo(env44727))[1];

//if-clause
bool if_guard45399 = is_true(a4431044568);
if(if_guard45399)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44413);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44413))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45401 = alloc_clo(lam44724_fptr, 4);

//setting env list
clo45401[1] = _u45;
clo45401[2] = n;
clo45401[3] = drop;
clo45401[4] = kont44413;
void* f4441544569 = encode_clo(clo45401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4441544569;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44726 = encode_clo(alloc_clo(lam44726_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44729 = arg_buffer[1];
//reading env and args
void* kont44413 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar45402 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45402, "0", 10);
void* a4430944566 = encode_mpz(mpzvar45402);

//creating new closure instance
void** clo45404 = alloc_clo(lam44726_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo45404[1] = drop;
clo45404[2] = lst;
clo45404[3] = _u45;
clo45404[4] = n;
clo45404[5] = kont44413;
clo45404[6] = cdr;
void* f4441644567 = encode_clo(clo45404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4441644567;
arg_buffer[3] = n;
arg_buffer[4] = a4430944566;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam44730_fptr() // lam44730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44731 = arg_buffer[1];
//reading env and args
void* a4431744581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env44731))[3];
//not do dummy comment
void* a4431544577 = (decode_clo(env44731))[2];
//not do dummy comment
void* kont44417 = (decode_clo(env44731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont44417;
arg_buffer[3] = a4431544577;
arg_buffer[4] = a4431744581;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44730 = encode_clo(alloc_clo(lam44730_fptr, 0));

void* lam44732_fptr() // lam44732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44733 = arg_buffer[1];
//reading env and args
void* a4431644579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env44733))[5];
//not do dummy comment
void* a4431544577 = (decode_clo(env44733))[4];
//not do dummy comment
void* kont44417 = (decode_clo(env44733))[3];
//not do dummy comment
void* proc = (decode_clo(env44733))[2];
//not do dummy comment
void* acc = (decode_clo(env44733))[1];

//creating new closure instance
void** clo45406 = alloc_clo(lam44730_fptr, 3);

//setting env list
clo45406[1] = kont44417;
clo45406[2] = a4431544577;
clo45406[3] = proc;
void* f4441844580 = encode_clo(clo45406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4441844580;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4431644579;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44732 = encode_clo(alloc_clo(lam44732_fptr, 0));

void* lam44734_fptr() // lam44734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44735 = arg_buffer[1];
//reading env and args
void* a4431544577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44735))[6];
//not do dummy comment
void* kont44417 = (decode_clo(env44735))[5];
//not do dummy comment
void* foldr = (decode_clo(env44735))[4];
//not do dummy comment
void* lst = (decode_clo(env44735))[3];
//not do dummy comment
void* proc = (decode_clo(env44735))[2];
//not do dummy comment
void* acc = (decode_clo(env44735))[1];

//creating new closure instance
void** clo45408 = alloc_clo(lam44732_fptr, 5);

//setting env list
clo45408[1] = acc;
clo45408[2] = proc;
clo45408[3] = kont44417;
clo45408[4] = a4431544577;
clo45408[5] = foldr;
void* f4441944578 = encode_clo(clo45408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4441944578;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44734 = encode_clo(alloc_clo(lam44734_fptr, 0));

void* lam44736_fptr() // lam44736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44737 = arg_buffer[1];
//reading env and args
void* a4431444575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44737))[7];
//not do dummy comment
void* kont44417 = (decode_clo(env44737))[6];
//not do dummy comment
void* car = (decode_clo(env44737))[5];
//not do dummy comment
void* foldr = (decode_clo(env44737))[4];
//not do dummy comment
void* lst = (decode_clo(env44737))[3];
//not do dummy comment
void* proc = (decode_clo(env44737))[2];
//not do dummy comment
void* acc = (decode_clo(env44737))[1];

//if-clause
bool if_guard45409 = is_true(a4431444575);
if(if_guard45409)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44417);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44417))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45411 = alloc_clo(lam44734_fptr, 6);

//setting env list
clo45411[1] = acc;
clo45411[2] = proc;
clo45411[3] = lst;
clo45411[4] = foldr;
clo45411[5] = kont44417;
clo45411[6] = cdr;
void* f4442044576 = encode_clo(clo45411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4442044576;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44736 = encode_clo(alloc_clo(lam44736_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44738 = arg_buffer[1];
//reading env and args
void* kont44417 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45413 = alloc_clo(lam44736_fptr, 7);

//setting env list
clo45413[1] = acc;
clo45413[2] = proc;
clo45413[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo45413[4] = foldr;
clo45413[5] = car;
clo45413[6] = kont44417;
clo45413[7] = cdr;
void* f4442144574 = encode_clo(clo45413);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4442144574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam44739_fptr() // lam44739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44740 = arg_buffer[1];
//reading env and args
void* a4432144589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44422 = (decode_clo(env44740))[3];
//not do dummy comment
void* cons = (decode_clo(env44740))[2];
//not do dummy comment
void* a4431944585 = (decode_clo(env44740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44422;
arg_buffer[3] = a4431944585;
arg_buffer[4] = a4432144589;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44739 = encode_clo(alloc_clo(lam44739_fptr, 0));

void* lam44741_fptr() // lam44741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44742 = arg_buffer[1];
//reading env and args
void* a4432044587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env44742))[5];
//not do dummy comment
void* cons = (decode_clo(env44742))[4];
//not do dummy comment
void* a4431944585 = (decode_clo(env44742))[3];
//not do dummy comment
void* lst2 = (decode_clo(env44742))[2];
//not do dummy comment
void* kont44422 = (decode_clo(env44742))[1];

//creating new closure instance
void** clo45415 = alloc_clo(lam44739_fptr, 3);

//setting env list
clo45415[1] = a4431944585;
clo45415[2] = cons;
clo45415[3] = kont44422;
void* f4442344588 = encode_clo(clo45415);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4442344588;
arg_buffer[3] = a4432044587;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44741 = encode_clo(alloc_clo(lam44741_fptr, 0));

void* lam44743_fptr() // lam44743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44744 = arg_buffer[1];
//reading env and args
void* a4431944585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44744))[6];
//not do dummy comment
void* append = (decode_clo(env44744))[5];
//not do dummy comment
void* lst1 = (decode_clo(env44744))[4];
//not do dummy comment
void* cons = (decode_clo(env44744))[3];
//not do dummy comment
void* lst2 = (decode_clo(env44744))[2];
//not do dummy comment
void* kont44422 = (decode_clo(env44744))[1];

//creating new closure instance
void** clo45417 = alloc_clo(lam44741_fptr, 5);

//setting env list
clo45417[1] = kont44422;
clo45417[2] = lst2;
clo45417[3] = a4431944585;
clo45417[4] = cons;
clo45417[5] = append;
void* f4442444586 = encode_clo(clo45417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4442444586;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44743 = encode_clo(alloc_clo(lam44743_fptr, 0));

void* lam44745_fptr() // lam44745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44746 = arg_buffer[1];
//reading env and args
void* a4431844583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44746))[7];
//not do dummy comment
void* append = (decode_clo(env44746))[6];
//not do dummy comment
void* cons = (decode_clo(env44746))[5];
//not do dummy comment
void* lst2 = (decode_clo(env44746))[4];
//not do dummy comment
void* kont44422 = (decode_clo(env44746))[3];
//not do dummy comment
void* lst1 = (decode_clo(env44746))[2];
//not do dummy comment
void* car = (decode_clo(env44746))[1];

//if-clause
bool if_guard45418 = is_true(a4431844583);
if(if_guard45418)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44422);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44422))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45420 = alloc_clo(lam44743_fptr, 6);

//setting env list
clo45420[1] = kont44422;
clo45420[2] = lst2;
clo45420[3] = cons;
clo45420[4] = lst1;
clo45420[5] = append;
clo45420[6] = cdr;
void* f4442544584 = encode_clo(clo45420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4442544584;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44745 = encode_clo(alloc_clo(lam44745_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44747 = arg_buffer[1];
//reading env and args
void* kont44422 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45422 = alloc_clo(lam44745_fptr, 7);

//setting env list
clo45422[1] = car;
clo45422[2] = lst1;
clo45422[3] = kont44422;
clo45422[4] = lst2;
clo45422[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo45422[6] = append;
clo45422[7] = cdr;
void* f4442644582 = encode_clo(clo45422);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4442644582;
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
void* _44748 = arg_buffer[1];
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

void* kont4442744590 = prim_car(lst);
void* lst44591 = prim_cdr(lst);
void* x4432244592 = apply_prim_hash(lst44591);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4442744590);
arg_buffer[2] = x4432244592;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4442744590))[0]);
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
void* _44749 = arg_buffer[1];
//reading env and args
void* kont44429 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4432344593 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44429);
arg_buffer[2] = x4432344593;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44429))[0]);
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
void* _44750 = arg_buffer[1];
//reading env and args
void* kont44430 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4432444594 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44430);
arg_buffer[2] = x4432444594;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44430))[0]);
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
void* _44751 = arg_buffer[1];
//reading env and args
void* kont44431 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4432544595 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44431);
arg_buffer[2] = x4432544595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44431))[0]);
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
void* _44752 = arg_buffer[1];
//reading env and args
void* kont44432 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4432644596 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44432);
arg_buffer[2] = x4432644596;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44432))[0]);
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
void* _44757 = arg_buffer[1];
//reading env and args
void* kont44433 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar45423 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45423, "100", 10);
void* a4432744597 = encode_mpz(mpzvar45423);
mpz_t* mpzvar45424 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45424, "80", 10);
void* a4432844598 = encode_mpz(mpzvar45424);
mpz_t* mpzvar45425 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45425, "10", 10);
void* a4432944599 = encode_mpz(mpzvar45425);
mpz_t* mpzvar45426 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45426, "2", 10);
void* a4433044600 = encode_mpz(mpzvar45426);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont44433;
arg_buffer[3] = a4432744597;
arg_buffer[4] = a4432844598;
arg_buffer[5] = a4432944599;
arg_buffer[6] = a4433044600;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam44758_fptr() // lam44758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44759 = arg_buffer[1];
//reading env and args
void* x4433144602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44434 = (decode_clo(env44759))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44434);
arg_buffer[2] = x4433144602;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44434))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44758 = encode_clo(alloc_clo(lam44758_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44760 = arg_buffer[1];
//reading env and args
void* kont44434 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo45428 = alloc_clo(lam44758_fptr, 1);

//setting env list
clo45428[1] = kont44434;
void* f4443544601 = encode_clo(clo45428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4443544601;
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

