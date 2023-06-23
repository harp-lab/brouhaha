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
void* _117760 = arg_buffer[1];
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

void* kont117495117596 = prim_car(lst);
void* lst117597 = prim_cdr(lst);
void* x117405117598 = apply_prim__u43(lst117597);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117495117596);
arg_buffer[2] = x117405117598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117495117596))[0]);
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
void* _117761 = arg_buffer[1];
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

void* kont117497117599 = prim_car(lst);
void* lst117600 = prim_cdr(lst);
void* x117406117601 = apply_prim__u45(lst117600);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117497117599);
arg_buffer[2] = x117406117601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117497117599))[0]);
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
void* _117762 = arg_buffer[1];
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

void* kont117499117602 = prim_car(lst);
void* lst117603 = prim_cdr(lst);
void* x117407117604 = apply_prim__u42(lst117603);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117499117602);
arg_buffer[2] = x117407117604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117499117602))[0]);
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
void* _117763 = arg_buffer[1];
//reading env and args
void* kont117501 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x117408117605 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117501);
arg_buffer[2] = x117408117605;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117501))[0]);
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
void* _117764 = arg_buffer[1];
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

void* kont117502117606 = prim_car(lst);
void* lst117607 = prim_cdr(lst);
void* x117409117608 = apply_prim__u47(lst117607);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117502117606);
arg_buffer[2] = x117409117608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117502117606))[0]);
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
void* _117765 = arg_buffer[1];
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

void* kont117504117609 = prim_car(lst);
void* lst117610 = prim_cdr(lst);
void* x117410117611 = apply_prim__u61(lst117610);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117504117609);
arg_buffer[2] = x117410117611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117504117609))[0]);
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
void* _117766 = arg_buffer[1];
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

void* kont117506117612 = prim_car(lst);
void* lst117613 = prim_cdr(lst);
void* x117411117614 = apply_prim__u62(lst117613);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117506117612);
arg_buffer[2] = x117411117614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117506117612))[0]);
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
void* _117767 = arg_buffer[1];
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

void* kont117508117615 = prim_car(lst);
void* lst117616 = prim_cdr(lst);
void* x117412117617 = apply_prim__u60(lst117616);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117508117615);
arg_buffer[2] = x117412117617;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117508117615))[0]);
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
void* _117768 = arg_buffer[1];
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

void* kont117510117618 = prim_car(lst);
void* lst117619 = prim_cdr(lst);
void* x117413117620 = apply_prim__u60_u61(lst117619);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117510117618);
arg_buffer[2] = x117413117620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117510117618))[0]);
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
void* _117769 = arg_buffer[1];
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

void* kont117512117621 = prim_car(lst);
void* lst117622 = prim_cdr(lst);
void* x117414117623 = apply_prim__u62_u61(lst117622);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117512117621);
arg_buffer[2] = x117414117623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117512117621))[0]);
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
void* _117770 = arg_buffer[1];
//reading env and args
void* kont117514 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x117415117624 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117514);
arg_buffer[2] = x117415117624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117514))[0]);
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
void* _117771 = arg_buffer[1];
//reading env and args
void* kont117515 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x117416117625 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117515);
arg_buffer[2] = x117416117625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117515))[0]);
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
void* _117772 = arg_buffer[1];
//reading env and args
void* kont117516 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x117417117626 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117516);
arg_buffer[2] = x117417117626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117516))[0]);
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
void* _117773 = arg_buffer[1];
//reading env and args
void* kont117517 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x117418117627 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117517);
arg_buffer[2] = x117418117627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117517))[0]);
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
void* _117774 = arg_buffer[1];
//reading env and args
void* kont117518 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x117419117628 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117518);
arg_buffer[2] = x117419117628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117518))[0]);
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
void* _117775 = arg_buffer[1];
//reading env and args
void* kont117519 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x117420117629 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117519);
arg_buffer[2] = x117420117629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117519))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam117776_fptr() // lam117776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117777 = arg_buffer[1];
//reading env and args
void* a117423117633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117421117630 = (decode_clo(env117777))[3];
//not do dummy comment
void* kont117520 = (decode_clo(env117777))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env117777))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont117520;
arg_buffer[3] = a117421117630;
arg_buffer[4] = a117423117633;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117776 = encode_clo(alloc_clo(lam117776_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117780 = arg_buffer[1];
//reading env and args
void* kont117520 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar125311 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125311, "0", 10);
void* a117421117630 = encode_mpz(mpzvar125311);
mpz_t* mpzvar125312 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125312, "2", 10);
void* a117422117631 = encode_mpz(mpzvar125312);

//creating new closure instance
void** clo125314 = alloc_clo(lam117776_fptr, 3);

//setting env list
clo125314[1] = equal_u63;
clo125314[2] = kont117520;
clo125314[3] = a117421117630;
void* f117521117632 = encode_clo(clo125314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f117521117632;
arg_buffer[3] = x;
arg_buffer[4] = a117422117631;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam117781_fptr() // lam117781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117782 = arg_buffer[1];
//reading env and args
void* a117426117637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env117782))[3];
//not do dummy comment
void* kont117522 = (decode_clo(env117782))[2];
//not do dummy comment
void* a117424117634 = (decode_clo(env117782))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont117522;
arg_buffer[3] = a117424117634;
arg_buffer[4] = a117426117637;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117781 = encode_clo(alloc_clo(lam117781_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117785 = arg_buffer[1];
//reading env and args
void* kont117522 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar125315 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125315, "1", 10);
void* a117424117634 = encode_mpz(mpzvar125315);
mpz_t* mpzvar125316 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125316, "2", 10);
void* a117425117635 = encode_mpz(mpzvar125316);

//creating new closure instance
void** clo125318 = alloc_clo(lam117781_fptr, 3);

//setting env list
clo125318[1] = a117424117634;
clo125318[2] = kont117522;
clo125318[3] = equal_u63;
void* f117523117636 = encode_clo(clo125318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f117523117636;
arg_buffer[3] = x;
arg_buffer[4] = a117425117635;
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
void* _117786 = arg_buffer[1];
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

void* kont117524117638 = prim_car(x);
void* x117639 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117524117638);
arg_buffer[2] = x117639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117524117638))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam117789_fptr() // lam117789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117790 = arg_buffer[1];
//reading env and args
void* a117432117649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117526 = (decode_clo(env117790))[3];
//not do dummy comment
void* x = (decode_clo(env117790))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117790))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont117526;
arg_buffer[3] = x;
arg_buffer[4] = a117432117649;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117789 = encode_clo(alloc_clo(lam117789_fptr, 0));

void* lam117791_fptr() // lam117791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117792 = arg_buffer[1];
//reading env and args
void* a117430117646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117792))[5];
//not do dummy comment
void* lst = (decode_clo(env117792))[4];
//not do dummy comment
void* kont117526 = (decode_clo(env117792))[3];
//not do dummy comment
void* x = (decode_clo(env117792))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117792))[1];

//if-clause
bool if_guard125319 = is_true(a117430117646);
if(if_guard125319)
{
void* x117431117647 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117526);
arg_buffer[2] = x117431117647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117526))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo125321 = alloc_clo(lam117789_fptr, 3);

//setting env list
clo125321[1] = member_u63;
clo125321[2] = x;
clo125321[3] = kont117526;
void* f117527117648 = encode_clo(clo125321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117527117648;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117791 = encode_clo(alloc_clo(lam117791_fptr, 0));

void* lam117793_fptr() // lam117793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117794 = arg_buffer[1];
//reading env and args
void* a117429117644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117794))[6];
//not do dummy comment
void* lst = (decode_clo(env117794))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env117794))[4];
//not do dummy comment
void* kont117526 = (decode_clo(env117794))[3];
//not do dummy comment
void* x = (decode_clo(env117794))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117794))[1];

//creating new closure instance
void** clo125323 = alloc_clo(lam117791_fptr, 5);

//setting env list
clo125323[1] = member_u63;
clo125323[2] = x;
clo125323[3] = kont117526;
clo125323[4] = lst;
clo125323[5] = cdr;
void* f117528117645 = encode_clo(clo125323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f117528117645;
arg_buffer[3] = a117429117644;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117793 = encode_clo(alloc_clo(lam117793_fptr, 0));

void* lam117795_fptr() // lam117795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117796 = arg_buffer[1];
//reading env and args
void* a117427117641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117796))[7];
//not do dummy comment
void* lst = (decode_clo(env117796))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env117796))[5];
//not do dummy comment
void* kont117526 = (decode_clo(env117796))[4];
//not do dummy comment
void* x = (decode_clo(env117796))[3];
//not do dummy comment
void* car = (decode_clo(env117796))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117796))[1];

//if-clause
bool if_guard125324 = is_true(a117427117641);
if(if_guard125324)
{
void* x117428117642 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117526);
arg_buffer[2] = x117428117642;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117526))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo125326 = alloc_clo(lam117793_fptr, 6);

//setting env list
clo125326[1] = member_u63;
clo125326[2] = x;
clo125326[3] = kont117526;
clo125326[4] = equal_u63;
clo125326[5] = lst;
clo125326[6] = cdr;
void* f117529117643 = encode_clo(clo125326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117529117643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117795 = encode_clo(alloc_clo(lam117795_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117797 = arg_buffer[1];
//reading env and args
void* kont117526 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo125328 = alloc_clo(lam117795_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo125328[1] = member_u63;
clo125328[2] = car;
clo125328[3] = x;
clo125328[4] = kont117526;
clo125328[5] = equal_u63;
clo125328[6] = lst;
clo125328[7] = cdr;
void* f117530117640 = encode_clo(clo125328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117530117640;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam117798_fptr() // lam117798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117799 = arg_buffer[1];
//reading env and args
void* a117436117657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env117799))[4];
//not do dummy comment
void* a117435117655 = (decode_clo(env117799))[3];
//not do dummy comment
void* foldl = (decode_clo(env117799))[2];
//not do dummy comment
void* kont117531 = (decode_clo(env117799))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont117531;
arg_buffer[3] = fun;
arg_buffer[4] = a117435117655;
arg_buffer[5] = a117436117657;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117798 = encode_clo(alloc_clo(lam117798_fptr, 0));

void* lam117800_fptr() // lam117800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117801 = arg_buffer[1];
//reading env and args
void* a117435117655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117801))[5];
//not do dummy comment
void* lst = (decode_clo(env117801))[4];
//not do dummy comment
void* fun = (decode_clo(env117801))[3];
//not do dummy comment
void* foldl = (decode_clo(env117801))[2];
//not do dummy comment
void* kont117531 = (decode_clo(env117801))[1];

//creating new closure instance
void** clo125330 = alloc_clo(lam117798_fptr, 4);

//setting env list
clo125330[1] = kont117531;
clo125330[2] = foldl;
clo125330[3] = a117435117655;
clo125330[4] = fun;
void* f117532117656 = encode_clo(clo125330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117532117656;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117800 = encode_clo(alloc_clo(lam117800_fptr, 0));

void* lam117802_fptr() // lam117802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117803 = arg_buffer[1];
//reading env and args
void* a117434117653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117803))[6];
//not do dummy comment
void* lst = (decode_clo(env117803))[5];
//not do dummy comment
void* fun = (decode_clo(env117803))[4];
//not do dummy comment
void* acc = (decode_clo(env117803))[3];
//not do dummy comment
void* foldl = (decode_clo(env117803))[2];
//not do dummy comment
void* kont117531 = (decode_clo(env117803))[1];

//creating new closure instance
void** clo125332 = alloc_clo(lam117800_fptr, 5);

//setting env list
clo125332[1] = kont117531;
clo125332[2] = foldl;
clo125332[3] = fun;
clo125332[4] = lst;
clo125332[5] = cdr;
void* f117533117654 = encode_clo(clo125332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f117533117654;
arg_buffer[3] = a117434117653;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117802 = encode_clo(alloc_clo(lam117802_fptr, 0));

void* lam117804_fptr() // lam117804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117805 = arg_buffer[1];
//reading env and args
void* a117433117651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117805))[7];
//not do dummy comment
void* lst = (decode_clo(env117805))[6];
//not do dummy comment
void* fun = (decode_clo(env117805))[5];
//not do dummy comment
void* acc = (decode_clo(env117805))[4];
//not do dummy comment
void* car = (decode_clo(env117805))[3];
//not do dummy comment
void* foldl = (decode_clo(env117805))[2];
//not do dummy comment
void* kont117531 = (decode_clo(env117805))[1];

//if-clause
bool if_guard125333 = is_true(a117433117651);
if(if_guard125333)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117531);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117531))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo125335 = alloc_clo(lam117802_fptr, 6);

//setting env list
clo125335[1] = kont117531;
clo125335[2] = foldl;
clo125335[3] = acc;
clo125335[4] = fun;
clo125335[5] = lst;
clo125335[6] = cdr;
void* f117534117652 = encode_clo(clo125335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117534117652;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117804 = encode_clo(alloc_clo(lam117804_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117806 = arg_buffer[1];
//reading env and args
void* kont117531 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo125337 = alloc_clo(lam117804_fptr, 7);

//setting env list
clo125337[1] = kont117531;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo125337[2] = foldl;
clo125337[3] = car;
clo125337[4] = acc;
clo125337[5] = fun;
clo125337[6] = lst;
clo125337[7] = cdr;
void* f117535117650 = encode_clo(clo125337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117535117650;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam117807_fptr() // lam117807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117808 = arg_buffer[1];
//reading env and args
void* a117440117665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117438117661 = (decode_clo(env117808))[3];
//not do dummy comment
void* kont117536 = (decode_clo(env117808))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117808))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont117536;
arg_buffer[3] = a117438117661;
arg_buffer[4] = a117440117665;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117807 = encode_clo(alloc_clo(lam117807_fptr, 0));

void* lam117809_fptr() // lam117809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117810 = arg_buffer[1];
//reading env and args
void* a117439117663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117438117661 = (decode_clo(env117810))[5];
//not do dummy comment
void* kont117536 = (decode_clo(env117810))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117810))[3];
//not do dummy comment
void* lst2 = (decode_clo(env117810))[2];
//not do dummy comment
void* cons = (decode_clo(env117810))[1];

//creating new closure instance
void** clo125339 = alloc_clo(lam117807_fptr, 3);

//setting env list
clo125339[1] = reverse_u45helper;
clo125339[2] = kont117536;
clo125339[3] = a117438117661;
void* f117537117664 = encode_clo(clo125339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f117537117664;
arg_buffer[3] = a117439117663;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117809 = encode_clo(alloc_clo(lam117809_fptr, 0));

void* lam117811_fptr() // lam117811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117812 = arg_buffer[1];
//reading env and args
void* a117438117661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117812))[6];
//not do dummy comment
void* lst2 = (decode_clo(env117812))[5];
//not do dummy comment
void* car = (decode_clo(env117812))[4];
//not do dummy comment
void* cons = (decode_clo(env117812))[3];
//not do dummy comment
void* lst = (decode_clo(env117812))[2];
//not do dummy comment
void* kont117536 = (decode_clo(env117812))[1];

//creating new closure instance
void** clo125341 = alloc_clo(lam117809_fptr, 5);

//setting env list
clo125341[1] = cons;
clo125341[2] = lst2;
clo125341[3] = reverse_u45helper;
clo125341[4] = kont117536;
clo125341[5] = a117438117661;
void* f117538117662 = encode_clo(clo125341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117538117662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117811 = encode_clo(alloc_clo(lam117811_fptr, 0));

void* lam117813_fptr() // lam117813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117814 = arg_buffer[1];
//reading env and args
void* a117437117659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117814))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117814))[6];
//not do dummy comment
void* lst2 = (decode_clo(env117814))[5];
//not do dummy comment
void* car = (decode_clo(env117814))[4];
//not do dummy comment
void* cons = (decode_clo(env117814))[3];
//not do dummy comment
void* lst = (decode_clo(env117814))[2];
//not do dummy comment
void* kont117536 = (decode_clo(env117814))[1];

//if-clause
bool if_guard125342 = is_true(a117437117659);
if(if_guard125342)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117536);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117536))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo125344 = alloc_clo(lam117811_fptr, 6);

//setting env list
clo125344[1] = kont117536;
clo125344[2] = lst;
clo125344[3] = cons;
clo125344[4] = car;
clo125344[5] = lst2;
clo125344[6] = reverse_u45helper;
void* f117539117660 = encode_clo(clo125344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117539117660;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117813 = encode_clo(alloc_clo(lam117813_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117815 = arg_buffer[1];
//reading env and args
void* kont117536 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo125346 = alloc_clo(lam117813_fptr, 7);

//setting env list
clo125346[1] = kont117536;
clo125346[2] = lst;
clo125346[3] = cons;
clo125346[4] = car;
clo125346[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo125346[6] = reverse_u45helper;
clo125346[7] = cdr;
void* f117540117658 = encode_clo(clo125346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117540117658;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam117816_fptr() // lam117816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117817 = arg_buffer[1];
//reading env and args
void* a117441117667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117817))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117817))[2];
//not do dummy comment
void* kont117541 = (decode_clo(env117817))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont117541;
arg_buffer[3] = lst;
arg_buffer[4] = a117441117667;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117816 = encode_clo(alloc_clo(lam117816_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117818 = arg_buffer[1];
//reading env and args
void* kont117541 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo125348 = alloc_clo(lam117816_fptr, 3);

//setting env list
clo125348[1] = kont117541;
clo125348[2] = reverse_u45helper;
clo125348[3] = lst;
void* f117542117666 = encode_clo(clo125348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117542117666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam117819_fptr() // lam117819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117820 = arg_buffer[1];
//reading env and args
void* x117444117672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117543 = (decode_clo(env117820))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117543);
arg_buffer[2] = x117444117672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117543))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117819 = encode_clo(alloc_clo(lam117819_fptr, 0));

void* lam117821_fptr() // lam117821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117822 = arg_buffer[1];
//reading env and args
void* a117449117681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117447117677 = (decode_clo(env117822))[4];
//not do dummy comment
void* kont117543 = (decode_clo(env117822))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env117822))[2];
//not do dummy comment
void* a117445117674 = (decode_clo(env117822))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont117543;
arg_buffer[3] = a117445117674;
arg_buffer[4] = a117447117677;
arg_buffer[5] = a117449117681;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117821 = encode_clo(alloc_clo(lam117821_fptr, 0));

void* lam117823_fptr() // lam117823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117824 = arg_buffer[1];
//reading env and args
void* a117448117679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117447117677 = (decode_clo(env117824))[6];
//not do dummy comment
void* kont117543 = (decode_clo(env117824))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env117824))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117824))[3];
//not do dummy comment
void* cons = (decode_clo(env117824))[2];
//not do dummy comment
void* a117445117674 = (decode_clo(env117824))[1];

//creating new closure instance
void** clo125350 = alloc_clo(lam117821_fptr, 4);

//setting env list
clo125350[1] = a117445117674;
clo125350[2] = take_u45helper;
clo125350[3] = kont117543;
clo125350[4] = a117447117677;
void* f117545117680 = encode_clo(clo125350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f117545117680;
arg_buffer[3] = a117448117679;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117823 = encode_clo(alloc_clo(lam117823_fptr, 0));

void* lam117825_fptr() // lam117825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117826 = arg_buffer[1];
//reading env and args
void* a117447117677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117826))[7];
//not do dummy comment
void* kont117543 = (decode_clo(env117826))[6];
//not do dummy comment
void* car = (decode_clo(env117826))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env117826))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117826))[3];
//not do dummy comment
void* cons = (decode_clo(env117826))[2];
//not do dummy comment
void* a117445117674 = (decode_clo(env117826))[1];

//creating new closure instance
void** clo125352 = alloc_clo(lam117823_fptr, 6);

//setting env list
clo125352[1] = a117445117674;
clo125352[2] = cons;
clo125352[3] = lst2;
clo125352[4] = take_u45helper;
clo125352[5] = kont117543;
clo125352[6] = a117447117677;
void* f117546117678 = encode_clo(clo125352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117546117678;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117825 = encode_clo(alloc_clo(lam117825_fptr, 0));

void* lam117828_fptr() // lam117828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117829 = arg_buffer[1];
//reading env and args
void* a117445117674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117829))[8];
//not do dummy comment
void* kont117543 = (decode_clo(env117829))[7];
//not do dummy comment
void* cons = (decode_clo(env117829))[6];
//not do dummy comment
void* _u45 = (decode_clo(env117829))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env117829))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117829))[3];
//not do dummy comment
void* n = (decode_clo(env117829))[2];
//not do dummy comment
void* car = (decode_clo(env117829))[1];
mpz_t* mpzvar125353 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125353, "1", 10);
void* a117446117675 = encode_mpz(mpzvar125353);

//creating new closure instance
void** clo125355 = alloc_clo(lam117825_fptr, 7);

//setting env list
clo125355[1] = a117445117674;
clo125355[2] = cons;
clo125355[3] = lst2;
clo125355[4] = take_u45helper;
clo125355[5] = car;
clo125355[6] = kont117543;
clo125355[7] = lst;
void* f117547117676 = encode_clo(clo125355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f117547117676;
arg_buffer[3] = n;
arg_buffer[4] = a117446117675;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117828 = encode_clo(alloc_clo(lam117828_fptr, 0));

void* lam117830_fptr() // lam117830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117831 = arg_buffer[1];
//reading env and args
void* a117443117670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117831))[10];
//not do dummy comment
void* lst = (decode_clo(env117831))[9];
//not do dummy comment
void* reverse = (decode_clo(env117831))[8];
//not do dummy comment
void* kont117543 = (decode_clo(env117831))[7];
//not do dummy comment
void* cons = (decode_clo(env117831))[6];
//not do dummy comment
void* _u45 = (decode_clo(env117831))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env117831))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117831))[3];
//not do dummy comment
void* n = (decode_clo(env117831))[2];
//not do dummy comment
void* car = (decode_clo(env117831))[1];

//if-clause
bool if_guard125356 = is_true(a117443117670);
if(if_guard125356)
{

//creating new closure instance
void** clo125358 = alloc_clo(lam117819_fptr, 1);

//setting env list
clo125358[1] = kont117543;
void* f117544117671 = encode_clo(clo125358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f117544117671;
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
void** clo125360 = alloc_clo(lam117828_fptr, 8);

//setting env list
clo125360[1] = car;
clo125360[2] = n;
clo125360[3] = lst2;
clo125360[4] = take_u45helper;
clo125360[5] = _u45;
clo125360[6] = cons;
clo125360[7] = kont117543;
clo125360[8] = lst;
void* f117548117673 = encode_clo(clo125360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117548117673;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117830 = encode_clo(alloc_clo(lam117830_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117833 = arg_buffer[1];
//reading env and args
void* kont117543 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar125361 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125361, "0", 10);
void* a117442117668 = encode_mpz(mpzvar125361);

//creating new closure instance
void** clo125363 = alloc_clo(lam117830_fptr, 10);

//setting env list
clo125363[1] = car;
clo125363[2] = n;
clo125363[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo125363[4] = take_u45helper;
clo125363[5] = _u45;
clo125363[6] = cons;
clo125363[7] = kont117543;
clo125363[8] = reverse;
clo125363[9] = lst;
clo125363[10] = cdr;
void* f117549117669 = encode_clo(clo125363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f117549117669;
arg_buffer[3] = n;
arg_buffer[4] = a117442117668;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam117834_fptr() // lam117834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117835 = arg_buffer[1];
//reading env and args
void* a117450117683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117550 = (decode_clo(env117835))[4];
//not do dummy comment
void* lst = (decode_clo(env117835))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env117835))[2];
//not do dummy comment
void* n = (decode_clo(env117835))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont117550;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a117450117683;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117834 = encode_clo(alloc_clo(lam117834_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117836 = arg_buffer[1];
//reading env and args
void* kont117550 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo125365 = alloc_clo(lam117834_fptr, 4);

//setting env list
clo125365[1] = n;
clo125365[2] = take_u45helper;
clo125365[3] = lst;
clo125365[4] = kont117550;
void* f117551117682 = encode_clo(clo125365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117551117682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam117838_fptr() // lam117838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117839 = arg_buffer[1];
//reading env and args
void* a117455117691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117552 = (decode_clo(env117839))[3];
//not do dummy comment
void* _u43 = (decode_clo(env117839))[2];
//not do dummy comment
void* a117453117687 = (decode_clo(env117839))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont117552;
arg_buffer[3] = a117453117687;
arg_buffer[4] = a117455117691;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117838 = encode_clo(alloc_clo(lam117838_fptr, 0));

void* lam117840_fptr() // lam117840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117841 = arg_buffer[1];
//reading env and args
void* a117454117689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117552 = (decode_clo(env117841))[4];
//not do dummy comment
void* length = (decode_clo(env117841))[3];
//not do dummy comment
void* _u43 = (decode_clo(env117841))[2];
//not do dummy comment
void* a117453117687 = (decode_clo(env117841))[1];

//creating new closure instance
void** clo125367 = alloc_clo(lam117838_fptr, 3);

//setting env list
clo125367[1] = a117453117687;
clo125367[2] = _u43;
clo125367[3] = kont117552;
void* f117553117690 = encode_clo(clo125367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f117553117690;
arg_buffer[3] = a117454117689;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117840 = encode_clo(alloc_clo(lam117840_fptr, 0));

void* lam117843_fptr() // lam117843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117844 = arg_buffer[1];
//reading env and args
void* a117451117685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117844))[5];
//not do dummy comment
void* length = (decode_clo(env117844))[4];
//not do dummy comment
void* _u43 = (decode_clo(env117844))[3];
//not do dummy comment
void* lst = (decode_clo(env117844))[2];
//not do dummy comment
void* kont117552 = (decode_clo(env117844))[1];

//if-clause
bool if_guard125368 = is_true(a117451117685);
if(if_guard125368)
{
mpz_t* mpzvar125369 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125369, "0", 10);
void* x117452117686 = encode_mpz(mpzvar125369);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117552);
arg_buffer[2] = x117452117686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117552))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar125370 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125370, "1", 10);
void* a117453117687 = encode_mpz(mpzvar125370);

//creating new closure instance
void** clo125372 = alloc_clo(lam117840_fptr, 4);

//setting env list
clo125372[1] = a117453117687;
clo125372[2] = _u43;
clo125372[3] = length;
clo125372[4] = kont117552;
void* f117554117688 = encode_clo(clo125372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117554117688;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117843 = encode_clo(alloc_clo(lam117843_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117845 = arg_buffer[1];
//reading env and args
void* kont117552 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo125374 = alloc_clo(lam117843_fptr, 5);

//setting env list
clo125374[1] = kont117552;
clo125374[2] = lst;
clo125374[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo125374[4] = length;
clo125374[5] = cdr;
void* f117555117684 = encode_clo(clo125374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117555117684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam117846_fptr() // lam117846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117847 = arg_buffer[1];
//reading env and args
void* x117457117695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117556 = (decode_clo(env117847))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117556);
arg_buffer[2] = x117457117695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117556))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117846 = encode_clo(alloc_clo(lam117846_fptr, 0));

void* lam117848_fptr() // lam117848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117849 = arg_buffer[1];
//reading env and args
void* a117461117703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117459117699 = (decode_clo(env117849))[3];
//not do dummy comment
void* kont117556 = (decode_clo(env117849))[2];
//not do dummy comment
void* cons = (decode_clo(env117849))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont117556;
arg_buffer[3] = a117459117699;
arg_buffer[4] = a117461117703;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117848 = encode_clo(alloc_clo(lam117848_fptr, 0));

void* lam117850_fptr() // lam117850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117851 = arg_buffer[1];
//reading env and args
void* a117460117701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env117851))[5];
//not do dummy comment
void* a117459117699 = (decode_clo(env117851))[4];
//not do dummy comment
void* kont117556 = (decode_clo(env117851))[3];
//not do dummy comment
void* proc = (decode_clo(env117851))[2];
//not do dummy comment
void* cons = (decode_clo(env117851))[1];

//creating new closure instance
void** clo125376 = alloc_clo(lam117848_fptr, 3);

//setting env list
clo125376[1] = cons;
clo125376[2] = kont117556;
clo125376[3] = a117459117699;
void* f117558117702 = encode_clo(clo125376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f117558117702;
arg_buffer[3] = proc;
arg_buffer[4] = a117460117701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117850 = encode_clo(alloc_clo(lam117850_fptr, 0));

void* lam117852_fptr() // lam117852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117853 = arg_buffer[1];
//reading env and args
void* a117459117699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117853))[6];
//not do dummy comment
void* lst = (decode_clo(env117853))[5];
//not do dummy comment
void* map = (decode_clo(env117853))[4];
//not do dummy comment
void* kont117556 = (decode_clo(env117853))[3];
//not do dummy comment
void* proc = (decode_clo(env117853))[2];
//not do dummy comment
void* cons = (decode_clo(env117853))[1];

//creating new closure instance
void** clo125378 = alloc_clo(lam117850_fptr, 5);

//setting env list
clo125378[1] = cons;
clo125378[2] = proc;
clo125378[3] = kont117556;
clo125378[4] = a117459117699;
clo125378[5] = map;
void* f117559117700 = encode_clo(clo125378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117559117700;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117852 = encode_clo(alloc_clo(lam117852_fptr, 0));

void* lam117854_fptr() // lam117854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117855 = arg_buffer[1];
//reading env and args
void* a117458117697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117855))[6];
//not do dummy comment
void* lst = (decode_clo(env117855))[5];
//not do dummy comment
void* map = (decode_clo(env117855))[4];
//not do dummy comment
void* kont117556 = (decode_clo(env117855))[3];
//not do dummy comment
void* proc = (decode_clo(env117855))[2];
//not do dummy comment
void* cons = (decode_clo(env117855))[1];

//creating new closure instance
void** clo125380 = alloc_clo(lam117852_fptr, 6);

//setting env list
clo125380[1] = cons;
clo125380[2] = proc;
clo125380[3] = kont117556;
clo125380[4] = map;
clo125380[5] = lst;
clo125380[6] = cdr;
void* f117560117698 = encode_clo(clo125380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f117560117698;
arg_buffer[3] = a117458117697;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117854 = encode_clo(alloc_clo(lam117854_fptr, 0));

void* lam117856_fptr() // lam117856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117857 = arg_buffer[1];
//reading env and args
void* a117456117693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117857))[8];
//not do dummy comment
void* map = (decode_clo(env117857))[7];
//not do dummy comment
void* kont117556 = (decode_clo(env117857))[6];
//not do dummy comment
void* proc = (decode_clo(env117857))[5];
//not do dummy comment
void* car = (decode_clo(env117857))[4];
//not do dummy comment
void* cons = (decode_clo(env117857))[3];
//not do dummy comment
void* list = (decode_clo(env117857))[2];
//not do dummy comment
void* cdr = (decode_clo(env117857))[1];

//if-clause
bool if_guard125381 = is_true(a117456117693);
if(if_guard125381)
{

//creating new closure instance
void** clo125383 = alloc_clo(lam117846_fptr, 1);

//setting env list
clo125383[1] = kont117556;
void* f117557117694 = encode_clo(clo125383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117557117694;
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
void** clo125385 = alloc_clo(lam117854_fptr, 6);

//setting env list
clo125385[1] = cons;
clo125385[2] = proc;
clo125385[3] = kont117556;
clo125385[4] = map;
clo125385[5] = lst;
clo125385[6] = cdr;
void* f117561117696 = encode_clo(clo125385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117561117696;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117856 = encode_clo(alloc_clo(lam117856_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117858 = arg_buffer[1];
//reading env and args
void* kont117556 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo125387 = alloc_clo(lam117856_fptr, 8);

//setting env list
clo125387[1] = cdr;
clo125387[2] = list;
clo125387[3] = cons;
clo125387[4] = car;
clo125387[5] = proc;
clo125387[6] = kont117556;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo125387[7] = map;
clo125387[8] = lst;
void* f117562117692 = encode_clo(clo125387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117562117692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam117859_fptr() // lam117859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117860 = arg_buffer[1];
//reading env and args
void* x117463117707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117563 = (decode_clo(env117860))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117563);
arg_buffer[2] = x117463117707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117859 = encode_clo(alloc_clo(lam117859_fptr, 0));

void* lam117861_fptr() // lam117861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117862 = arg_buffer[1];
//reading env and args
void* a117468117717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117466117713 = (decode_clo(env117862))[3];
//not do dummy comment
void* cons = (decode_clo(env117862))[2];
//not do dummy comment
void* kont117563 = (decode_clo(env117862))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont117563;
arg_buffer[3] = a117466117713;
arg_buffer[4] = a117468117717;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117861 = encode_clo(alloc_clo(lam117861_fptr, 0));

void* lam117863_fptr() // lam117863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117864 = arg_buffer[1];
//reading env and args
void* a117467117715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117466117713 = (decode_clo(env117864))[5];
//not do dummy comment
void* op = (decode_clo(env117864))[4];
//not do dummy comment
void* filter = (decode_clo(env117864))[3];
//not do dummy comment
void* cons = (decode_clo(env117864))[2];
//not do dummy comment
void* kont117563 = (decode_clo(env117864))[1];

//creating new closure instance
void** clo125389 = alloc_clo(lam117861_fptr, 3);

//setting env list
clo125389[1] = kont117563;
clo125389[2] = cons;
clo125389[3] = a117466117713;
void* f117565117716 = encode_clo(clo125389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f117565117716;
arg_buffer[3] = op;
arg_buffer[4] = a117467117715;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117863 = encode_clo(alloc_clo(lam117863_fptr, 0));

void* lam117865_fptr() // lam117865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117866 = arg_buffer[1];
//reading env and args
void* a117466117713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117866))[6];
//not do dummy comment
void* lst = (decode_clo(env117866))[5];
//not do dummy comment
void* op = (decode_clo(env117866))[4];
//not do dummy comment
void* filter = (decode_clo(env117866))[3];
//not do dummy comment
void* cons = (decode_clo(env117866))[2];
//not do dummy comment
void* kont117563 = (decode_clo(env117866))[1];

//creating new closure instance
void** clo125391 = alloc_clo(lam117863_fptr, 5);

//setting env list
clo125391[1] = kont117563;
clo125391[2] = cons;
clo125391[3] = filter;
clo125391[4] = op;
clo125391[5] = a117466117713;
void* f117566117714 = encode_clo(clo125391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117566117714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117865 = encode_clo(alloc_clo(lam117865_fptr, 0));

void* lam117867_fptr() // lam117867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117868 = arg_buffer[1];
//reading env and args
void* a117469117719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env117868))[3];
//not do dummy comment
void* filter = (decode_clo(env117868))[2];
//not do dummy comment
void* kont117563 = (decode_clo(env117868))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont117563;
arg_buffer[3] = op;
arg_buffer[4] = a117469117719;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117867 = encode_clo(alloc_clo(lam117867_fptr, 0));

void* lam117869_fptr() // lam117869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117870 = arg_buffer[1];
//reading env and args
void* a117465117711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117870))[7];
//not do dummy comment
void* lst = (decode_clo(env117870))[6];
//not do dummy comment
void* op = (decode_clo(env117870))[5];
//not do dummy comment
void* cons = (decode_clo(env117870))[4];
//not do dummy comment
void* kont117563 = (decode_clo(env117870))[3];
//not do dummy comment
void* filter = (decode_clo(env117870))[2];
//not do dummy comment
void* car = (decode_clo(env117870))[1];

//if-clause
bool if_guard125392 = is_true(a117465117711);
if(if_guard125392)
{

//creating new closure instance
void** clo125394 = alloc_clo(lam117865_fptr, 6);

//setting env list
clo125394[1] = kont117563;
clo125394[2] = cons;
clo125394[3] = filter;
clo125394[4] = op;
clo125394[5] = lst;
clo125394[6] = cdr;
void* f117567117712 = encode_clo(clo125394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117567117712;
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
void** clo125396 = alloc_clo(lam117867_fptr, 3);

//setting env list
clo125396[1] = kont117563;
clo125396[2] = filter;
clo125396[3] = op;
void* f117568117718 = encode_clo(clo125396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117568117718;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117869 = encode_clo(alloc_clo(lam117869_fptr, 0));

void* lam117871_fptr() // lam117871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117872 = arg_buffer[1];
//reading env and args
void* a117464117709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117872))[7];
//not do dummy comment
void* lst = (decode_clo(env117872))[6];
//not do dummy comment
void* op = (decode_clo(env117872))[5];
//not do dummy comment
void* cons = (decode_clo(env117872))[4];
//not do dummy comment
void* kont117563 = (decode_clo(env117872))[3];
//not do dummy comment
void* filter = (decode_clo(env117872))[2];
//not do dummy comment
void* car = (decode_clo(env117872))[1];

//creating new closure instance
void** clo125398 = alloc_clo(lam117869_fptr, 7);

//setting env list
clo125398[1] = car;
clo125398[2] = filter;
clo125398[3] = kont117563;
clo125398[4] = cons;
clo125398[5] = op;
clo125398[6] = lst;
clo125398[7] = cdr;
void* f117569117710 = encode_clo(clo125398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f117569117710;
arg_buffer[3] = a117464117709;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117871 = encode_clo(alloc_clo(lam117871_fptr, 0));

void* lam117873_fptr() // lam117873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117874 = arg_buffer[1];
//reading env and args
void* a117462117705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117874))[8];
//not do dummy comment
void* op = (decode_clo(env117874))[7];
//not do dummy comment
void* cons = (decode_clo(env117874))[6];
//not do dummy comment
void* kont117563 = (decode_clo(env117874))[5];
//not do dummy comment
void* list = (decode_clo(env117874))[4];
//not do dummy comment
void* cdr = (decode_clo(env117874))[3];
//not do dummy comment
void* filter = (decode_clo(env117874))[2];
//not do dummy comment
void* car = (decode_clo(env117874))[1];

//if-clause
bool if_guard125399 = is_true(a117462117705);
if(if_guard125399)
{

//creating new closure instance
void** clo125401 = alloc_clo(lam117859_fptr, 1);

//setting env list
clo125401[1] = kont117563;
void* f117564117706 = encode_clo(clo125401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117564117706;
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
void** clo125403 = alloc_clo(lam117871_fptr, 7);

//setting env list
clo125403[1] = car;
clo125403[2] = filter;
clo125403[3] = kont117563;
clo125403[4] = cons;
clo125403[5] = op;
clo125403[6] = lst;
clo125403[7] = cdr;
void* f117570117708 = encode_clo(clo125403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117570117708;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117873 = encode_clo(alloc_clo(lam117873_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117875 = arg_buffer[1];
//reading env and args
void* kont117563 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo125405 = alloc_clo(lam117873_fptr, 8);

//setting env list
clo125405[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo125405[2] = filter;
clo125405[3] = cdr;
clo125405[4] = list;
clo125405[5] = kont117563;
clo125405[6] = cons;
clo125405[7] = op;
clo125405[8] = lst;
void* f117571117704 = encode_clo(clo125405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117571117704;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam117876_fptr() // lam117876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117877 = arg_buffer[1];
//reading env and args
void* a117474117727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117472117724 = (decode_clo(env117877))[3];
//not do dummy comment
void* drop = (decode_clo(env117877))[2];
//not do dummy comment
void* kont117572 = (decode_clo(env117877))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont117572;
arg_buffer[3] = a117472117724;
arg_buffer[4] = a117474117727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117876 = encode_clo(alloc_clo(lam117876_fptr, 0));

void* lam117879_fptr() // lam117879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117880 = arg_buffer[1];
//reading env and args
void* a117472117724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env117880))[4];
//not do dummy comment
void* kont117572 = (decode_clo(env117880))[3];
//not do dummy comment
void* n = (decode_clo(env117880))[2];
//not do dummy comment
void* _u45 = (decode_clo(env117880))[1];
mpz_t* mpzvar125406 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125406, "1", 10);
void* a117473117725 = encode_mpz(mpzvar125406);

//creating new closure instance
void** clo125408 = alloc_clo(lam117876_fptr, 3);

//setting env list
clo125408[1] = kont117572;
clo125408[2] = drop;
clo125408[3] = a117472117724;
void* f117573117726 = encode_clo(clo125408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f117573117726;
arg_buffer[3] = n;
arg_buffer[4] = a117473117725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117879 = encode_clo(alloc_clo(lam117879_fptr, 0));

void* lam117881_fptr() // lam117881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117882 = arg_buffer[1];
//reading env and args
void* a117471117722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117882))[6];
//not do dummy comment
void* kont117572 = (decode_clo(env117882))[5];
//not do dummy comment
void* n = (decode_clo(env117882))[4];
//not do dummy comment
void* _u45 = (decode_clo(env117882))[3];
//not do dummy comment
void* lst = (decode_clo(env117882))[2];
//not do dummy comment
void* drop = (decode_clo(env117882))[1];

//if-clause
bool if_guard125409 = is_true(a117471117722);
if(if_guard125409)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117572);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117572))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo125411 = alloc_clo(lam117879_fptr, 4);

//setting env list
clo125411[1] = _u45;
clo125411[2] = n;
clo125411[3] = kont117572;
clo125411[4] = drop;
void* f117574117723 = encode_clo(clo125411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117574117723;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117881 = encode_clo(alloc_clo(lam117881_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117884 = arg_buffer[1];
//reading env and args
void* kont117572 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar125412 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125412, "0", 10);
void* a117470117720 = encode_mpz(mpzvar125412);

//creating new closure instance
void** clo125414 = alloc_clo(lam117881_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo125414[1] = drop;
clo125414[2] = lst;
clo125414[3] = _u45;
clo125414[4] = n;
clo125414[5] = kont117572;
clo125414[6] = cdr;
void* f117575117721 = encode_clo(clo125414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f117575117721;
arg_buffer[3] = n;
arg_buffer[4] = a117470117720;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam117885_fptr() // lam117885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117886 = arg_buffer[1];
//reading env and args
void* a117478117735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117476117731 = (decode_clo(env117886))[3];
//not do dummy comment
void* proc = (decode_clo(env117886))[2];
//not do dummy comment
void* kont117576 = (decode_clo(env117886))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont117576;
arg_buffer[3] = a117476117731;
arg_buffer[4] = a117478117735;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117885 = encode_clo(alloc_clo(lam117885_fptr, 0));

void* lam117887_fptr() // lam117887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117888 = arg_buffer[1];
//reading env and args
void* a117477117733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env117888))[5];
//not do dummy comment
void* a117476117731 = (decode_clo(env117888))[4];
//not do dummy comment
void* kont117576 = (decode_clo(env117888))[3];
//not do dummy comment
void* proc = (decode_clo(env117888))[2];
//not do dummy comment
void* acc = (decode_clo(env117888))[1];

//creating new closure instance
void** clo125416 = alloc_clo(lam117885_fptr, 3);

//setting env list
clo125416[1] = kont117576;
clo125416[2] = proc;
clo125416[3] = a117476117731;
void* f117577117734 = encode_clo(clo125416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f117577117734;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a117477117733;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117887 = encode_clo(alloc_clo(lam117887_fptr, 0));

void* lam117889_fptr() // lam117889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117890 = arg_buffer[1];
//reading env and args
void* a117476117731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117890))[6];
//not do dummy comment
void* kont117576 = (decode_clo(env117890))[5];
//not do dummy comment
void* foldr = (decode_clo(env117890))[4];
//not do dummy comment
void* lst = (decode_clo(env117890))[3];
//not do dummy comment
void* proc = (decode_clo(env117890))[2];
//not do dummy comment
void* acc = (decode_clo(env117890))[1];

//creating new closure instance
void** clo125418 = alloc_clo(lam117887_fptr, 5);

//setting env list
clo125418[1] = acc;
clo125418[2] = proc;
clo125418[3] = kont117576;
clo125418[4] = a117476117731;
clo125418[5] = foldr;
void* f117578117732 = encode_clo(clo125418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117578117732;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117889 = encode_clo(alloc_clo(lam117889_fptr, 0));

void* lam117891_fptr() // lam117891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117892 = arg_buffer[1];
//reading env and args
void* a117475117729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117892))[7];
//not do dummy comment
void* kont117576 = (decode_clo(env117892))[6];
//not do dummy comment
void* car = (decode_clo(env117892))[5];
//not do dummy comment
void* foldr = (decode_clo(env117892))[4];
//not do dummy comment
void* lst = (decode_clo(env117892))[3];
//not do dummy comment
void* proc = (decode_clo(env117892))[2];
//not do dummy comment
void* acc = (decode_clo(env117892))[1];

//if-clause
bool if_guard125419 = is_true(a117475117729);
if(if_guard125419)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117576);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117576))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo125421 = alloc_clo(lam117889_fptr, 6);

//setting env list
clo125421[1] = acc;
clo125421[2] = proc;
clo125421[3] = lst;
clo125421[4] = foldr;
clo125421[5] = kont117576;
clo125421[6] = cdr;
void* f117579117730 = encode_clo(clo125421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117579117730;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117891 = encode_clo(alloc_clo(lam117891_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117893 = arg_buffer[1];
//reading env and args
void* kont117576 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo125423 = alloc_clo(lam117891_fptr, 7);

//setting env list
clo125423[1] = acc;
clo125423[2] = proc;
clo125423[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo125423[4] = foldr;
clo125423[5] = car;
clo125423[6] = kont117576;
clo125423[7] = cdr;
void* f117580117728 = encode_clo(clo125423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117580117728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam117894_fptr() // lam117894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117895 = arg_buffer[1];
//reading env and args
void* a117482117743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117581 = (decode_clo(env117895))[3];
//not do dummy comment
void* cons = (decode_clo(env117895))[2];
//not do dummy comment
void* a117480117739 = (decode_clo(env117895))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont117581;
arg_buffer[3] = a117480117739;
arg_buffer[4] = a117482117743;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117894 = encode_clo(alloc_clo(lam117894_fptr, 0));

void* lam117896_fptr() // lam117896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117897 = arg_buffer[1];
//reading env and args
void* a117481117741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117581 = (decode_clo(env117897))[5];
//not do dummy comment
void* append = (decode_clo(env117897))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117897))[3];
//not do dummy comment
void* cons = (decode_clo(env117897))[2];
//not do dummy comment
void* a117480117739 = (decode_clo(env117897))[1];

//creating new closure instance
void** clo125425 = alloc_clo(lam117894_fptr, 3);

//setting env list
clo125425[1] = a117480117739;
clo125425[2] = cons;
clo125425[3] = kont117581;
void* f117582117742 = encode_clo(clo125425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f117582117742;
arg_buffer[3] = a117481117741;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117896 = encode_clo(alloc_clo(lam117896_fptr, 0));

void* lam117898_fptr() // lam117898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117899 = arg_buffer[1];
//reading env and args
void* a117480117739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117899))[6];
//not do dummy comment
void* kont117581 = (decode_clo(env117899))[5];
//not do dummy comment
void* append = (decode_clo(env117899))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117899))[3];
//not do dummy comment
void* lst1 = (decode_clo(env117899))[2];
//not do dummy comment
void* cons = (decode_clo(env117899))[1];

//creating new closure instance
void** clo125427 = alloc_clo(lam117896_fptr, 5);

//setting env list
clo125427[1] = a117480117739;
clo125427[2] = cons;
clo125427[3] = lst2;
clo125427[4] = append;
clo125427[5] = kont117581;
void* f117583117740 = encode_clo(clo125427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117583117740;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117898 = encode_clo(alloc_clo(lam117898_fptr, 0));

void* lam117900_fptr() // lam117900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117901 = arg_buffer[1];
//reading env and args
void* a117479117737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117901))[7];
//not do dummy comment
void* kont117581 = (decode_clo(env117901))[6];
//not do dummy comment
void* append = (decode_clo(env117901))[5];
//not do dummy comment
void* lst2 = (decode_clo(env117901))[4];
//not do dummy comment
void* cons = (decode_clo(env117901))[3];
//not do dummy comment
void* lst1 = (decode_clo(env117901))[2];
//not do dummy comment
void* car = (decode_clo(env117901))[1];

//if-clause
bool if_guard125428 = is_true(a117479117737);
if(if_guard125428)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117581);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117581))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo125430 = alloc_clo(lam117898_fptr, 6);

//setting env list
clo125430[1] = cons;
clo125430[2] = lst1;
clo125430[3] = lst2;
clo125430[4] = append;
clo125430[5] = kont117581;
clo125430[6] = cdr;
void* f117584117738 = encode_clo(clo125430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117584117738;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117900 = encode_clo(alloc_clo(lam117900_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117902 = arg_buffer[1];
//reading env and args
void* kont117581 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo125432 = alloc_clo(lam117900_fptr, 7);

//setting env list
clo125432[1] = car;
clo125432[2] = lst1;
clo125432[3] = cons;
clo125432[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo125432[5] = append;
clo125432[6] = kont117581;
clo125432[7] = cdr;
void* f117585117736 = encode_clo(clo125432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117585117736;
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
void* _117903 = arg_buffer[1];
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

void* kont117586117744 = prim_car(lst);
void* lst117745 = prim_cdr(lst);
void* x117483117746 = apply_prim_hash(lst117745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117586117744);
arg_buffer[2] = x117483117746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117586117744))[0]);
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
void* _117904 = arg_buffer[1];
//reading env and args
void* kont117588 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x117484117747 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117588);
arg_buffer[2] = x117484117747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117588))[0]);
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
void* _117905 = arg_buffer[1];
//reading env and args
void* kont117589 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x117485117748 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117589);
arg_buffer[2] = x117485117748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117589))[0]);
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
void* _117906 = arg_buffer[1];
//reading env and args
void* kont117590 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x117486117749 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117590);
arg_buffer[2] = x117486117749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117590))[0]);
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
void* _117907 = arg_buffer[1];
//reading env and args
void* kont117591 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x117487117750 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117591);
arg_buffer[2] = x117487117750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117591))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam117909_fptr() // lam117909 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117910 = arg_buffer[1];
//reading env and args
void* a117492117756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take = (decode_clo(env117910))[2];
//not do dummy comment
void* kont117592 = (decode_clo(env117910))[1];
mpz_t* mpzvar125433 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125433, "2", 10);
void* a117493117757 = encode_mpz(mpzvar125433);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take);
arg_buffer[2] = kont117592;
arg_buffer[3] = a117492117756;
arg_buffer[4] = a117493117757;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117909 = encode_clo(alloc_clo(lam117909_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117915 = arg_buffer[1];
//reading env and args
void* kont117592 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar125434 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125434, "1", 10);
void* a117488117751 = encode_mpz(mpzvar125434);
mpz_t* mpzvar125435 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125435, "2", 10);
void* a117489117752 = encode_mpz(mpzvar125435);
mpz_t* mpzvar125436 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125436, "3", 10);
void* a117490117753 = encode_mpz(mpzvar125436);
mpz_t* mpzvar125437 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar125437, "4", 10);
void* a117491117754 = encode_mpz(mpzvar125437);

//creating new closure instance
void** clo125439 = alloc_clo(lam117909_fptr, 2);

//setting env list
clo125439[1] = kont117592;
clo125439[2] = take;
void* f117593117755 = encode_clo(clo125439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117593117755;
arg_buffer[3] = a117488117751;
arg_buffer[4] = a117489117752;
arg_buffer[5] = a117490117753;
arg_buffer[6] = a117491117754;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam117916_fptr() // lam117916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117917 = arg_buffer[1];
//reading env and args
void* x117494117759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117594 = (decode_clo(env117917))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117594);
arg_buffer[2] = x117494117759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117594))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117916 = encode_clo(alloc_clo(lam117916_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117918 = arg_buffer[1];
//reading env and args
void* kont117594 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo125441 = alloc_clo(lam117916_fptr, 1);

//setting env list
clo125441[1] = kont117594;
void* f117595117758 = encode_clo(clo125441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f117595117758;
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

