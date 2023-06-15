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
void* _12671 = arg_buffer[1];
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

void* kont1241312513 = prim_car(lst);
void* lst12514 = prim_cdr(lst);
void* x1232812515 = apply_prim__u43(lst12514);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1241312513);
arg_buffer[2] = x1232812515;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1241312513))[0]);
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
void* _12672 = arg_buffer[1];
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

void* kont1241512516 = prim_car(lst);
void* lst12517 = prim_cdr(lst);
void* x1232912518 = apply_prim__u45(lst12517);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1241512516);
arg_buffer[2] = x1232912518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1241512516))[0]);
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
void* _12673 = arg_buffer[1];
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

void* kont1241712519 = prim_car(lst);
void* lst12520 = prim_cdr(lst);
void* x1233012521 = apply_prim__u42(lst12520);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1241712519);
arg_buffer[2] = x1233012521;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1241712519))[0]);
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
void* _12674 = arg_buffer[1];
//reading env and args
void* kont12419 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1233112522 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12419);
arg_buffer[2] = x1233112522;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12419))[0]);
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
void* _12675 = arg_buffer[1];
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

void* kont1242012523 = prim_car(lst);
void* lst12524 = prim_cdr(lst);
void* x1233212525 = apply_prim__u47(lst12524);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242012523);
arg_buffer[2] = x1233212525;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242012523))[0]);
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
void* _12676 = arg_buffer[1];
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

void* kont1242212526 = prim_car(lst);
void* lst12527 = prim_cdr(lst);
void* x1233312528 = apply_prim__u61(lst12527);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242212526);
arg_buffer[2] = x1233312528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242212526))[0]);
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
void* _12677 = arg_buffer[1];
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

void* kont1242412529 = prim_car(lst);
void* lst12530 = prim_cdr(lst);
void* x1233412531 = apply_prim__u62(lst12530);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242412529);
arg_buffer[2] = x1233412531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242412529))[0]);
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
void* _12678 = arg_buffer[1];
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

void* kont1242612532 = prim_car(lst);
void* lst12533 = prim_cdr(lst);
void* x1233512534 = apply_prim__u60(lst12533);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242612532);
arg_buffer[2] = x1233512534;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242612532))[0]);
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
void* _12679 = arg_buffer[1];
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

void* kont1242812535 = prim_car(lst);
void* lst12536 = prim_cdr(lst);
void* x1233612537 = apply_prim__u60_u61(lst12536);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242812535);
arg_buffer[2] = x1233612537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242812535))[0]);
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
void* _12680 = arg_buffer[1];
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

void* kont1243012538 = prim_car(lst);
void* lst12539 = prim_cdr(lst);
void* x1233712540 = apply_prim__u62_u61(lst12539);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1243012538);
arg_buffer[2] = x1233712540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1243012538))[0]);
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
void* _12681 = arg_buffer[1];
//reading env and args
void* kont12432 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1233812541 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12432);
arg_buffer[2] = x1233812541;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12432))[0]);
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
void* _12682 = arg_buffer[1];
//reading env and args
void* kont12433 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1233912542 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12433);
arg_buffer[2] = x1233912542;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12433))[0]);
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
void* _12683 = arg_buffer[1];
//reading env and args
void* kont12434 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1234012543 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12434);
arg_buffer[2] = x1234012543;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12434))[0]);
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
void* _12684 = arg_buffer[1];
//reading env and args
void* kont12435 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1234112544 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12435);
arg_buffer[2] = x1234112544;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12435))[0]);
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
void* _12685 = arg_buffer[1];
//reading env and args
void* kont12436 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1234212545 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12436);
arg_buffer[2] = x1234212545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12436))[0]);
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
void* _12686 = arg_buffer[1];
//reading env and args
void* kont12437 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1234312546 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12437);
arg_buffer[2] = x1234312546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12437))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam12687_fptr() // lam12687 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12688 = arg_buffer[1];
//reading env and args
void* a1234612550 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1234412547 = (decode_clo(env12688))[3];
//not do dummy comment
void* kont12438 = (decode_clo(env12688))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12688))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12438;
arg_buffer[3] = a1234412547;
arg_buffer[4] = a1234612550;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12687 = encode_clo(alloc_clo(lam12687_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12691 = arg_buffer[1];
//reading env and args
void* kont12438 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13424 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13424, "0", 10);
void* a1234412547 = encode_mpz(mpzvar13424);
mpz_t* mpzvar13425 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13425, "2", 10);
void* a1234512548 = encode_mpz(mpzvar13425);

//creating new closure instance
void** clo13427 = alloc_clo(lam12687_fptr, 3);

//setting env list
clo13427[1] = equal_u63;
clo13427[2] = kont12438;
clo13427[3] = a1234412547;
void* f1243912549 = encode_clo(clo13427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1243912549;
arg_buffer[3] = x;
arg_buffer[4] = a1234512548;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam12692_fptr() // lam12692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12693 = arg_buffer[1];
//reading env and args
void* a1234912554 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1234712551 = (decode_clo(env12693))[3];
//not do dummy comment
void* kont12440 = (decode_clo(env12693))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12693))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12440;
arg_buffer[3] = a1234712551;
arg_buffer[4] = a1234912554;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12692 = encode_clo(alloc_clo(lam12692_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12696 = arg_buffer[1];
//reading env and args
void* kont12440 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13428, "1", 10);
void* a1234712551 = encode_mpz(mpzvar13428);
mpz_t* mpzvar13429 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13429, "2", 10);
void* a1234812552 = encode_mpz(mpzvar13429);

//creating new closure instance
void** clo13431 = alloc_clo(lam12692_fptr, 3);

//setting env list
clo13431[1] = equal_u63;
clo13431[2] = kont12440;
clo13431[3] = a1234712551;
void* f1244112553 = encode_clo(clo13431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1244112553;
arg_buffer[3] = x;
arg_buffer[4] = a1234812552;
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
void* _12697 = arg_buffer[1];
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

void* kont1244212555 = prim_car(x);
void* x12556 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1244212555);
arg_buffer[2] = x12556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1244212555))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam12700_fptr() // lam12700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12701 = arg_buffer[1];
//reading env and args
void* a1235512566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12444 = (decode_clo(env12701))[3];
//not do dummy comment
void* x = (decode_clo(env12701))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12701))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont12444;
arg_buffer[3] = x;
arg_buffer[4] = a1235512566;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12700 = encode_clo(alloc_clo(lam12700_fptr, 0));

void* lam12702_fptr() // lam12702 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12703 = arg_buffer[1];
//reading env and args
void* a1235312563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12703))[5];
//not do dummy comment
void* lst = (decode_clo(env12703))[4];
//not do dummy comment
void* kont12444 = (decode_clo(env12703))[3];
//not do dummy comment
void* x = (decode_clo(env12703))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12703))[1];

//if-clause
bool if_guard13432 = is_true(a1235312563);
if(if_guard13432)
{
void* x1235412564 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12444);
arg_buffer[2] = x1235412564;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12444))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13434 = alloc_clo(lam12700_fptr, 3);

//setting env list
clo13434[1] = member_u63;
clo13434[2] = x;
clo13434[3] = kont12444;
void* f1244512565 = encode_clo(clo13434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1244512565;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12702 = encode_clo(alloc_clo(lam12702_fptr, 0));

void* lam12704_fptr() // lam12704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12705 = arg_buffer[1];
//reading env and args
void* a1235212561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12705))[6];
//not do dummy comment
void* lst = (decode_clo(env12705))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env12705))[4];
//not do dummy comment
void* kont12444 = (decode_clo(env12705))[3];
//not do dummy comment
void* x = (decode_clo(env12705))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12705))[1];

//creating new closure instance
void** clo13436 = alloc_clo(lam12702_fptr, 5);

//setting env list
clo13436[1] = member_u63;
clo13436[2] = x;
clo13436[3] = kont12444;
clo13436[4] = lst;
clo13436[5] = cdr;
void* f1244612562 = encode_clo(clo13436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1244612562;
arg_buffer[3] = a1235212561;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12704 = encode_clo(alloc_clo(lam12704_fptr, 0));

void* lam12706_fptr() // lam12706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12707 = arg_buffer[1];
//reading env and args
void* a1235012558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12707))[7];
//not do dummy comment
void* lst = (decode_clo(env12707))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env12707))[5];
//not do dummy comment
void* kont12444 = (decode_clo(env12707))[4];
//not do dummy comment
void* x = (decode_clo(env12707))[3];
//not do dummy comment
void* car = (decode_clo(env12707))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12707))[1];

//if-clause
bool if_guard13437 = is_true(a1235012558);
if(if_guard13437)
{
void* x1235112559 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12444);
arg_buffer[2] = x1235112559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12444))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13439 = alloc_clo(lam12704_fptr, 6);

//setting env list
clo13439[1] = member_u63;
clo13439[2] = x;
clo13439[3] = kont12444;
clo13439[4] = equal_u63;
clo13439[5] = lst;
clo13439[6] = cdr;
void* f1244712560 = encode_clo(clo13439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1244712560;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12706 = encode_clo(alloc_clo(lam12706_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12708 = arg_buffer[1];
//reading env and args
void* kont12444 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13441 = alloc_clo(lam12706_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo13441[1] = member_u63;
clo13441[2] = car;
clo13441[3] = x;
clo13441[4] = kont12444;
clo13441[5] = equal_u63;
clo13441[6] = lst;
clo13441[7] = cdr;
void* f1244812557 = encode_clo(clo13441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1244812557;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam12709_fptr() // lam12709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12710 = arg_buffer[1];
//reading env and args
void* a1235912574 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env12710))[4];
//not do dummy comment
void* kont12449 = (decode_clo(env12710))[3];
//not do dummy comment
void* a1235812572 = (decode_clo(env12710))[2];
//not do dummy comment
void* fun = (decode_clo(env12710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont12449;
arg_buffer[3] = fun;
arg_buffer[4] = a1235812572;
arg_buffer[5] = a1235912574;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12709 = encode_clo(alloc_clo(lam12709_fptr, 0));

void* lam12711_fptr() // lam12711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12712 = arg_buffer[1];
//reading env and args
void* a1235812572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12712))[5];
//not do dummy comment
void* lst = (decode_clo(env12712))[4];
//not do dummy comment
void* fun = (decode_clo(env12712))[3];
//not do dummy comment
void* foldl = (decode_clo(env12712))[2];
//not do dummy comment
void* kont12449 = (decode_clo(env12712))[1];

//creating new closure instance
void** clo13443 = alloc_clo(lam12709_fptr, 4);

//setting env list
clo13443[1] = fun;
clo13443[2] = a1235812572;
clo13443[3] = kont12449;
clo13443[4] = foldl;
void* f1245012573 = encode_clo(clo13443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1245012573;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12711 = encode_clo(alloc_clo(lam12711_fptr, 0));

void* lam12713_fptr() // lam12713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12714 = arg_buffer[1];
//reading env and args
void* a1235712570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12714))[6];
//not do dummy comment
void* lst = (decode_clo(env12714))[5];
//not do dummy comment
void* fun = (decode_clo(env12714))[4];
//not do dummy comment
void* acc = (decode_clo(env12714))[3];
//not do dummy comment
void* foldl = (decode_clo(env12714))[2];
//not do dummy comment
void* kont12449 = (decode_clo(env12714))[1];

//creating new closure instance
void** clo13445 = alloc_clo(lam12711_fptr, 5);

//setting env list
clo13445[1] = kont12449;
clo13445[2] = foldl;
clo13445[3] = fun;
clo13445[4] = lst;
clo13445[5] = cdr;
void* f1245112571 = encode_clo(clo13445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1245112571;
arg_buffer[3] = a1235712570;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12713 = encode_clo(alloc_clo(lam12713_fptr, 0));

void* lam12715_fptr() // lam12715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12716 = arg_buffer[1];
//reading env and args
void* a1235612568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12716))[7];
//not do dummy comment
void* lst = (decode_clo(env12716))[6];
//not do dummy comment
void* fun = (decode_clo(env12716))[5];
//not do dummy comment
void* acc = (decode_clo(env12716))[4];
//not do dummy comment
void* car = (decode_clo(env12716))[3];
//not do dummy comment
void* foldl = (decode_clo(env12716))[2];
//not do dummy comment
void* kont12449 = (decode_clo(env12716))[1];

//if-clause
bool if_guard13446 = is_true(a1235612568);
if(if_guard13446)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12449);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12449))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13448 = alloc_clo(lam12713_fptr, 6);

//setting env list
clo13448[1] = kont12449;
clo13448[2] = foldl;
clo13448[3] = acc;
clo13448[4] = fun;
clo13448[5] = lst;
clo13448[6] = cdr;
void* f1245212569 = encode_clo(clo13448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1245212569;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12715 = encode_clo(alloc_clo(lam12715_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12717 = arg_buffer[1];
//reading env and args
void* kont12449 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13450 = alloc_clo(lam12715_fptr, 7);

//setting env list
clo13450[1] = kont12449;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo13450[2] = foldl;
clo13450[3] = car;
clo13450[4] = acc;
clo13450[5] = fun;
clo13450[6] = lst;
clo13450[7] = cdr;
void* f1245312567 = encode_clo(clo13450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1245312567;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam12718_fptr() // lam12718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12719 = arg_buffer[1];
//reading env and args
void* a1236312582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1236112578 = (decode_clo(env12719))[3];
//not do dummy comment
void* kont12454 = (decode_clo(env12719))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12719))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12454;
arg_buffer[3] = a1236112578;
arg_buffer[4] = a1236312582;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12718 = encode_clo(alloc_clo(lam12718_fptr, 0));

void* lam12720_fptr() // lam12720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12721 = arg_buffer[1];
//reading env and args
void* a1236212580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1236112578 = (decode_clo(env12721))[5];
//not do dummy comment
void* kont12454 = (decode_clo(env12721))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12721))[3];
//not do dummy comment
void* lst2 = (decode_clo(env12721))[2];
//not do dummy comment
void* cons = (decode_clo(env12721))[1];

//creating new closure instance
void** clo13452 = alloc_clo(lam12718_fptr, 3);

//setting env list
clo13452[1] = reverse_u45helper;
clo13452[2] = kont12454;
clo13452[3] = a1236112578;
void* f1245512581 = encode_clo(clo13452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1245512581;
arg_buffer[3] = a1236212580;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12720 = encode_clo(alloc_clo(lam12720_fptr, 0));

void* lam12722_fptr() // lam12722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12723 = arg_buffer[1];
//reading env and args
void* a1236112578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12723))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12723))[5];
//not do dummy comment
void* car = (decode_clo(env12723))[4];
//not do dummy comment
void* cons = (decode_clo(env12723))[3];
//not do dummy comment
void* lst = (decode_clo(env12723))[2];
//not do dummy comment
void* kont12454 = (decode_clo(env12723))[1];

//creating new closure instance
void** clo13454 = alloc_clo(lam12720_fptr, 5);

//setting env list
clo13454[1] = cons;
clo13454[2] = lst2;
clo13454[3] = reverse_u45helper;
clo13454[4] = kont12454;
clo13454[5] = a1236112578;
void* f1245612579 = encode_clo(clo13454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1245612579;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12722 = encode_clo(alloc_clo(lam12722_fptr, 0));

void* lam12724_fptr() // lam12724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12725 = arg_buffer[1];
//reading env and args
void* a1236012576 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12725))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12725))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12725))[5];
//not do dummy comment
void* car = (decode_clo(env12725))[4];
//not do dummy comment
void* cons = (decode_clo(env12725))[3];
//not do dummy comment
void* lst = (decode_clo(env12725))[2];
//not do dummy comment
void* kont12454 = (decode_clo(env12725))[1];

//if-clause
bool if_guard13455 = is_true(a1236012576);
if(if_guard13455)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12454);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12454))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13457 = alloc_clo(lam12722_fptr, 6);

//setting env list
clo13457[1] = kont12454;
clo13457[2] = lst;
clo13457[3] = cons;
clo13457[4] = car;
clo13457[5] = lst2;
clo13457[6] = reverse_u45helper;
void* f1245712577 = encode_clo(clo13457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1245712577;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12724 = encode_clo(alloc_clo(lam12724_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12726 = arg_buffer[1];
//reading env and args
void* kont12454 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13459 = alloc_clo(lam12724_fptr, 7);

//setting env list
clo13459[1] = kont12454;
clo13459[2] = lst;
clo13459[3] = cons;
clo13459[4] = car;
clo13459[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo13459[6] = reverse_u45helper;
clo13459[7] = cdr;
void* f1245812575 = encode_clo(clo13459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1245812575;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam12727_fptr() // lam12727 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12728 = arg_buffer[1];
//reading env and args
void* a1236412584 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12728))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12728))[2];
//not do dummy comment
void* kont12459 = (decode_clo(env12728))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12459;
arg_buffer[3] = lst;
arg_buffer[4] = a1236412584;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12727 = encode_clo(alloc_clo(lam12727_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12729 = arg_buffer[1];
//reading env and args
void* kont12459 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13461 = alloc_clo(lam12727_fptr, 3);

//setting env list
clo13461[1] = kont12459;
clo13461[2] = reverse_u45helper;
clo13461[3] = lst;
void* f1246012583 = encode_clo(clo13461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1246012583;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam12730_fptr() // lam12730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12731 = arg_buffer[1];
//reading env and args
void* x1236712589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12461 = (decode_clo(env12731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12461);
arg_buffer[2] = x1236712589;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12461))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12730 = encode_clo(alloc_clo(lam12730_fptr, 0));

void* lam12732_fptr() // lam12732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12733 = arg_buffer[1];
//reading env and args
void* a1237212598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1237012594 = (decode_clo(env12733))[4];
//not do dummy comment
void* kont12461 = (decode_clo(env12733))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12733))[2];
//not do dummy comment
void* a1236812591 = (decode_clo(env12733))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12461;
arg_buffer[3] = a1236812591;
arg_buffer[4] = a1237012594;
arg_buffer[5] = a1237212598;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12732 = encode_clo(alloc_clo(lam12732_fptr, 0));

void* lam12734_fptr() // lam12734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12735 = arg_buffer[1];
//reading env and args
void* a1237112596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1237012594 = (decode_clo(env12735))[6];
//not do dummy comment
void* kont12461 = (decode_clo(env12735))[5];
//not do dummy comment
void* a1236812591 = (decode_clo(env12735))[4];
//not do dummy comment
void* cons = (decode_clo(env12735))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12735))[2];
//not do dummy comment
void* lst2 = (decode_clo(env12735))[1];

//creating new closure instance
void** clo13463 = alloc_clo(lam12732_fptr, 4);

//setting env list
clo13463[1] = a1236812591;
clo13463[2] = take_u45helper;
clo13463[3] = kont12461;
clo13463[4] = a1237012594;
void* f1246312597 = encode_clo(clo13463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1246312597;
arg_buffer[3] = a1237112596;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12734 = encode_clo(alloc_clo(lam12734_fptr, 0));

void* lam12736_fptr() // lam12736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12737 = arg_buffer[1];
//reading env and args
void* a1237012594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12737))[7];
//not do dummy comment
void* kont12461 = (decode_clo(env12737))[6];
//not do dummy comment
void* cons = (decode_clo(env12737))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12737))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12737))[3];
//not do dummy comment
void* a1236812591 = (decode_clo(env12737))[2];
//not do dummy comment
void* car = (decode_clo(env12737))[1];

//creating new closure instance
void** clo13465 = alloc_clo(lam12734_fptr, 6);

//setting env list
clo13465[1] = lst2;
clo13465[2] = take_u45helper;
clo13465[3] = cons;
clo13465[4] = a1236812591;
clo13465[5] = kont12461;
clo13465[6] = a1237012594;
void* f1246412595 = encode_clo(clo13465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1246412595;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12736 = encode_clo(alloc_clo(lam12736_fptr, 0));

void* lam12739_fptr() // lam12739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12740 = arg_buffer[1];
//reading env and args
void* a1236812591 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12740))[8];
//not do dummy comment
void* kont12461 = (decode_clo(env12740))[7];
//not do dummy comment
void* cons = (decode_clo(env12740))[6];
//not do dummy comment
void* _u45 = (decode_clo(env12740))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12740))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12740))[3];
//not do dummy comment
void* n = (decode_clo(env12740))[2];
//not do dummy comment
void* car = (decode_clo(env12740))[1];
mpz_t* mpzvar13466 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13466, "1", 10);
void* a1236912592 = encode_mpz(mpzvar13466);

//creating new closure instance
void** clo13468 = alloc_clo(lam12736_fptr, 7);

//setting env list
clo13468[1] = car;
clo13468[2] = a1236812591;
clo13468[3] = lst2;
clo13468[4] = take_u45helper;
clo13468[5] = cons;
clo13468[6] = kont12461;
clo13468[7] = lst;
void* f1246512593 = encode_clo(clo13468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1246512593;
arg_buffer[3] = n;
arg_buffer[4] = a1236912592;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12739 = encode_clo(alloc_clo(lam12739_fptr, 0));

void* lam12741_fptr() // lam12741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12742 = arg_buffer[1];
//reading env and args
void* a1236612587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12742))[10];
//not do dummy comment
void* lst = (decode_clo(env12742))[9];
//not do dummy comment
void* reverse = (decode_clo(env12742))[8];
//not do dummy comment
void* kont12461 = (decode_clo(env12742))[7];
//not do dummy comment
void* cons = (decode_clo(env12742))[6];
//not do dummy comment
void* _u45 = (decode_clo(env12742))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12742))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12742))[3];
//not do dummy comment
void* n = (decode_clo(env12742))[2];
//not do dummy comment
void* car = (decode_clo(env12742))[1];

//if-clause
bool if_guard13469 = is_true(a1236612587);
if(if_guard13469)
{

//creating new closure instance
void** clo13471 = alloc_clo(lam12730_fptr, 1);

//setting env list
clo13471[1] = kont12461;
void* f1246212588 = encode_clo(clo13471);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1246212588;
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
void** clo13473 = alloc_clo(lam12739_fptr, 8);

//setting env list
clo13473[1] = car;
clo13473[2] = n;
clo13473[3] = lst2;
clo13473[4] = take_u45helper;
clo13473[5] = _u45;
clo13473[6] = cons;
clo13473[7] = kont12461;
clo13473[8] = lst;
void* f1246612590 = encode_clo(clo13473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1246612590;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12741 = encode_clo(alloc_clo(lam12741_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12744 = arg_buffer[1];
//reading env and args
void* kont12461 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar13474 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13474, "0", 10);
void* a1236512585 = encode_mpz(mpzvar13474);

//creating new closure instance
void** clo13476 = alloc_clo(lam12741_fptr, 10);

//setting env list
clo13476[1] = car;
clo13476[2] = n;
clo13476[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo13476[4] = take_u45helper;
clo13476[5] = _u45;
clo13476[6] = cons;
clo13476[7] = kont12461;
clo13476[8] = reverse;
clo13476[9] = lst;
clo13476[10] = cdr;
void* f1246712586 = encode_clo(clo13476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1246712586;
arg_buffer[3] = n;
arg_buffer[4] = a1236512585;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam12745_fptr() // lam12745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12746 = arg_buffer[1];
//reading env and args
void* a1237312600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12468 = (decode_clo(env12746))[4];
//not do dummy comment
void* lst = (decode_clo(env12746))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12746))[2];
//not do dummy comment
void* n = (decode_clo(env12746))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12468;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1237312600;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12745 = encode_clo(alloc_clo(lam12745_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12747 = arg_buffer[1];
//reading env and args
void* kont12468 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13478 = alloc_clo(lam12745_fptr, 4);

//setting env list
clo13478[1] = n;
clo13478[2] = take_u45helper;
clo13478[3] = lst;
clo13478[4] = kont12468;
void* f1246912599 = encode_clo(clo13478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1246912599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam12749_fptr() // lam12749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12750 = arg_buffer[1];
//reading env and args
void* a1237812608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12470 = (decode_clo(env12750))[3];
//not do dummy comment
void* _u43 = (decode_clo(env12750))[2];
//not do dummy comment
void* a1237612604 = (decode_clo(env12750))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont12470;
arg_buffer[3] = a1237612604;
arg_buffer[4] = a1237812608;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12749 = encode_clo(alloc_clo(lam12749_fptr, 0));

void* lam12751_fptr() // lam12751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12752 = arg_buffer[1];
//reading env and args
void* a1237712606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12470 = (decode_clo(env12752))[4];
//not do dummy comment
void* length = (decode_clo(env12752))[3];
//not do dummy comment
void* _u43 = (decode_clo(env12752))[2];
//not do dummy comment
void* a1237612604 = (decode_clo(env12752))[1];

//creating new closure instance
void** clo13480 = alloc_clo(lam12749_fptr, 3);

//setting env list
clo13480[1] = a1237612604;
clo13480[2] = _u43;
clo13480[3] = kont12470;
void* f1247112607 = encode_clo(clo13480);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1247112607;
arg_buffer[3] = a1237712606;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12751 = encode_clo(alloc_clo(lam12751_fptr, 0));

void* lam12754_fptr() // lam12754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12755 = arg_buffer[1];
//reading env and args
void* a1237412602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12755))[5];
//not do dummy comment
void* length = (decode_clo(env12755))[4];
//not do dummy comment
void* _u43 = (decode_clo(env12755))[3];
//not do dummy comment
void* lst = (decode_clo(env12755))[2];
//not do dummy comment
void* kont12470 = (decode_clo(env12755))[1];

//if-clause
bool if_guard13481 = is_true(a1237412602);
if(if_guard13481)
{
mpz_t* mpzvar13482 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13482, "0", 10);
void* x1237512603 = encode_mpz(mpzvar13482);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12470);
arg_buffer[2] = x1237512603;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12470))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar13483 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13483, "1", 10);
void* a1237612604 = encode_mpz(mpzvar13483);

//creating new closure instance
void** clo13485 = alloc_clo(lam12751_fptr, 4);

//setting env list
clo13485[1] = a1237612604;
clo13485[2] = _u43;
clo13485[3] = length;
clo13485[4] = kont12470;
void* f1247212605 = encode_clo(clo13485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1247212605;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12754 = encode_clo(alloc_clo(lam12754_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12756 = arg_buffer[1];
//reading env and args
void* kont12470 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13487 = alloc_clo(lam12754_fptr, 5);

//setting env list
clo13487[1] = kont12470;
clo13487[2] = lst;
clo13487[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo13487[4] = length;
clo13487[5] = cdr;
void* f1247312601 = encode_clo(clo13487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1247312601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam12757_fptr() // lam12757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12758 = arg_buffer[1];
//reading env and args
void* x1238012612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12474 = (decode_clo(env12758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12474);
arg_buffer[2] = x1238012612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12474))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12757 = encode_clo(alloc_clo(lam12757_fptr, 0));

void* lam12759_fptr() // lam12759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12760 = arg_buffer[1];
//reading env and args
void* a1238412620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1238212616 = (decode_clo(env12760))[3];
//not do dummy comment
void* kont12474 = (decode_clo(env12760))[2];
//not do dummy comment
void* cons = (decode_clo(env12760))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12474;
arg_buffer[3] = a1238212616;
arg_buffer[4] = a1238412620;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12759 = encode_clo(alloc_clo(lam12759_fptr, 0));

void* lam12761_fptr() // lam12761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12762 = arg_buffer[1];
//reading env and args
void* a1238312618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env12762))[5];
//not do dummy comment
void* a1238212616 = (decode_clo(env12762))[4];
//not do dummy comment
void* kont12474 = (decode_clo(env12762))[3];
//not do dummy comment
void* proc = (decode_clo(env12762))[2];
//not do dummy comment
void* cons = (decode_clo(env12762))[1];

//creating new closure instance
void** clo13489 = alloc_clo(lam12759_fptr, 3);

//setting env list
clo13489[1] = cons;
clo13489[2] = kont12474;
clo13489[3] = a1238212616;
void* f1247612619 = encode_clo(clo13489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1247612619;
arg_buffer[3] = proc;
arg_buffer[4] = a1238312618;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12761 = encode_clo(alloc_clo(lam12761_fptr, 0));

void* lam12763_fptr() // lam12763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12764 = arg_buffer[1];
//reading env and args
void* a1238212616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12764))[6];
//not do dummy comment
void* lst = (decode_clo(env12764))[5];
//not do dummy comment
void* map = (decode_clo(env12764))[4];
//not do dummy comment
void* kont12474 = (decode_clo(env12764))[3];
//not do dummy comment
void* proc = (decode_clo(env12764))[2];
//not do dummy comment
void* cons = (decode_clo(env12764))[1];

//creating new closure instance
void** clo13491 = alloc_clo(lam12761_fptr, 5);

//setting env list
clo13491[1] = cons;
clo13491[2] = proc;
clo13491[3] = kont12474;
clo13491[4] = a1238212616;
clo13491[5] = map;
void* f1247712617 = encode_clo(clo13491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1247712617;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12763 = encode_clo(alloc_clo(lam12763_fptr, 0));

void* lam12765_fptr() // lam12765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12766 = arg_buffer[1];
//reading env and args
void* a1238112614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12766))[6];
//not do dummy comment
void* lst = (decode_clo(env12766))[5];
//not do dummy comment
void* map = (decode_clo(env12766))[4];
//not do dummy comment
void* kont12474 = (decode_clo(env12766))[3];
//not do dummy comment
void* proc = (decode_clo(env12766))[2];
//not do dummy comment
void* cons = (decode_clo(env12766))[1];

//creating new closure instance
void** clo13493 = alloc_clo(lam12763_fptr, 6);

//setting env list
clo13493[1] = cons;
clo13493[2] = proc;
clo13493[3] = kont12474;
clo13493[4] = map;
clo13493[5] = lst;
clo13493[6] = cdr;
void* f1247812615 = encode_clo(clo13493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1247812615;
arg_buffer[3] = a1238112614;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12765 = encode_clo(alloc_clo(lam12765_fptr, 0));

void* lam12767_fptr() // lam12767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12768 = arg_buffer[1];
//reading env and args
void* a1237912610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12768))[8];
//not do dummy comment
void* map = (decode_clo(env12768))[7];
//not do dummy comment
void* kont12474 = (decode_clo(env12768))[6];
//not do dummy comment
void* proc = (decode_clo(env12768))[5];
//not do dummy comment
void* car = (decode_clo(env12768))[4];
//not do dummy comment
void* cons = (decode_clo(env12768))[3];
//not do dummy comment
void* list = (decode_clo(env12768))[2];
//not do dummy comment
void* cdr = (decode_clo(env12768))[1];

//if-clause
bool if_guard13494 = is_true(a1237912610);
if(if_guard13494)
{

//creating new closure instance
void** clo13496 = alloc_clo(lam12757_fptr, 1);

//setting env list
clo13496[1] = kont12474;
void* f1247512611 = encode_clo(clo13496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1247512611;
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
void** clo13498 = alloc_clo(lam12765_fptr, 6);

//setting env list
clo13498[1] = cons;
clo13498[2] = proc;
clo13498[3] = kont12474;
clo13498[4] = map;
clo13498[5] = lst;
clo13498[6] = cdr;
void* f1247912613 = encode_clo(clo13498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1247912613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12767 = encode_clo(alloc_clo(lam12767_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12769 = arg_buffer[1];
//reading env and args
void* kont12474 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13500 = alloc_clo(lam12767_fptr, 8);

//setting env list
clo13500[1] = cdr;
clo13500[2] = list;
clo13500[3] = cons;
clo13500[4] = car;
clo13500[5] = proc;
clo13500[6] = kont12474;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo13500[7] = map;
clo13500[8] = lst;
void* f1248012609 = encode_clo(clo13500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1248012609;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam12770_fptr() // lam12770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12771 = arg_buffer[1];
//reading env and args
void* x1238612624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12481 = (decode_clo(env12771))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12481);
arg_buffer[2] = x1238612624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12481))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12770 = encode_clo(alloc_clo(lam12770_fptr, 0));

void* lam12772_fptr() // lam12772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12773 = arg_buffer[1];
//reading env and args
void* a1239112634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1238912630 = (decode_clo(env12773))[3];
//not do dummy comment
void* cons = (decode_clo(env12773))[2];
//not do dummy comment
void* kont12481 = (decode_clo(env12773))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12481;
arg_buffer[3] = a1238912630;
arg_buffer[4] = a1239112634;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12772 = encode_clo(alloc_clo(lam12772_fptr, 0));

void* lam12774_fptr() // lam12774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12775 = arg_buffer[1];
//reading env and args
void* a1239012632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1238912630 = (decode_clo(env12775))[5];
//not do dummy comment
void* op = (decode_clo(env12775))[4];
//not do dummy comment
void* filter = (decode_clo(env12775))[3];
//not do dummy comment
void* cons = (decode_clo(env12775))[2];
//not do dummy comment
void* kont12481 = (decode_clo(env12775))[1];

//creating new closure instance
void** clo13502 = alloc_clo(lam12772_fptr, 3);

//setting env list
clo13502[1] = kont12481;
clo13502[2] = cons;
clo13502[3] = a1238912630;
void* f1248312633 = encode_clo(clo13502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1248312633;
arg_buffer[3] = op;
arg_buffer[4] = a1239012632;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12774 = encode_clo(alloc_clo(lam12774_fptr, 0));

void* lam12776_fptr() // lam12776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12777 = arg_buffer[1];
//reading env and args
void* a1238912630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12777))[6];
//not do dummy comment
void* lst = (decode_clo(env12777))[5];
//not do dummy comment
void* op = (decode_clo(env12777))[4];
//not do dummy comment
void* filter = (decode_clo(env12777))[3];
//not do dummy comment
void* cons = (decode_clo(env12777))[2];
//not do dummy comment
void* kont12481 = (decode_clo(env12777))[1];

//creating new closure instance
void** clo13504 = alloc_clo(lam12774_fptr, 5);

//setting env list
clo13504[1] = kont12481;
clo13504[2] = cons;
clo13504[3] = filter;
clo13504[4] = op;
clo13504[5] = a1238912630;
void* f1248412631 = encode_clo(clo13504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1248412631;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12776 = encode_clo(alloc_clo(lam12776_fptr, 0));

void* lam12778_fptr() // lam12778 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12779 = arg_buffer[1];
//reading env and args
void* a1239212636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env12779))[3];
//not do dummy comment
void* filter = (decode_clo(env12779))[2];
//not do dummy comment
void* kont12481 = (decode_clo(env12779))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont12481;
arg_buffer[3] = op;
arg_buffer[4] = a1239212636;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12778 = encode_clo(alloc_clo(lam12778_fptr, 0));

void* lam12780_fptr() // lam12780 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12781 = arg_buffer[1];
//reading env and args
void* a1238812628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12781))[7];
//not do dummy comment
void* lst = (decode_clo(env12781))[6];
//not do dummy comment
void* op = (decode_clo(env12781))[5];
//not do dummy comment
void* cons = (decode_clo(env12781))[4];
//not do dummy comment
void* kont12481 = (decode_clo(env12781))[3];
//not do dummy comment
void* filter = (decode_clo(env12781))[2];
//not do dummy comment
void* car = (decode_clo(env12781))[1];

//if-clause
bool if_guard13505 = is_true(a1238812628);
if(if_guard13505)
{

//creating new closure instance
void** clo13507 = alloc_clo(lam12776_fptr, 6);

//setting env list
clo13507[1] = kont12481;
clo13507[2] = cons;
clo13507[3] = filter;
clo13507[4] = op;
clo13507[5] = lst;
clo13507[6] = cdr;
void* f1248512629 = encode_clo(clo13507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1248512629;
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
void** clo13509 = alloc_clo(lam12778_fptr, 3);

//setting env list
clo13509[1] = kont12481;
clo13509[2] = filter;
clo13509[3] = op;
void* f1248612635 = encode_clo(clo13509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1248612635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12780 = encode_clo(alloc_clo(lam12780_fptr, 0));

void* lam12782_fptr() // lam12782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12783 = arg_buffer[1];
//reading env and args
void* a1238712626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12783))[7];
//not do dummy comment
void* lst = (decode_clo(env12783))[6];
//not do dummy comment
void* op = (decode_clo(env12783))[5];
//not do dummy comment
void* cons = (decode_clo(env12783))[4];
//not do dummy comment
void* kont12481 = (decode_clo(env12783))[3];
//not do dummy comment
void* filter = (decode_clo(env12783))[2];
//not do dummy comment
void* car = (decode_clo(env12783))[1];

//creating new closure instance
void** clo13511 = alloc_clo(lam12780_fptr, 7);

//setting env list
clo13511[1] = car;
clo13511[2] = filter;
clo13511[3] = kont12481;
clo13511[4] = cons;
clo13511[5] = op;
clo13511[6] = lst;
clo13511[7] = cdr;
void* f1248712627 = encode_clo(clo13511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1248712627;
arg_buffer[3] = a1238712626;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12782 = encode_clo(alloc_clo(lam12782_fptr, 0));

void* lam12784_fptr() // lam12784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12785 = arg_buffer[1];
//reading env and args
void* a1238512622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12785))[8];
//not do dummy comment
void* op = (decode_clo(env12785))[7];
//not do dummy comment
void* cons = (decode_clo(env12785))[6];
//not do dummy comment
void* kont12481 = (decode_clo(env12785))[5];
//not do dummy comment
void* list = (decode_clo(env12785))[4];
//not do dummy comment
void* cdr = (decode_clo(env12785))[3];
//not do dummy comment
void* filter = (decode_clo(env12785))[2];
//not do dummy comment
void* car = (decode_clo(env12785))[1];

//if-clause
bool if_guard13512 = is_true(a1238512622);
if(if_guard13512)
{

//creating new closure instance
void** clo13514 = alloc_clo(lam12770_fptr, 1);

//setting env list
clo13514[1] = kont12481;
void* f1248212623 = encode_clo(clo13514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1248212623;
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
void** clo13516 = alloc_clo(lam12782_fptr, 7);

//setting env list
clo13516[1] = car;
clo13516[2] = filter;
clo13516[3] = kont12481;
clo13516[4] = cons;
clo13516[5] = op;
clo13516[6] = lst;
clo13516[7] = cdr;
void* f1248812625 = encode_clo(clo13516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1248812625;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12784 = encode_clo(alloc_clo(lam12784_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12786 = arg_buffer[1];
//reading env and args
void* kont12481 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13518 = alloc_clo(lam12784_fptr, 8);

//setting env list
clo13518[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo13518[2] = filter;
clo13518[3] = cdr;
clo13518[4] = list;
clo13518[5] = kont12481;
clo13518[6] = cons;
clo13518[7] = op;
clo13518[8] = lst;
void* f1248912621 = encode_clo(clo13518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1248912621;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam12787_fptr() // lam12787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12788 = arg_buffer[1];
//reading env and args
void* a1239712644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12788))[3];
//not do dummy comment
void* kont12490 = (decode_clo(env12788))[2];
//not do dummy comment
void* a1239512641 = (decode_clo(env12788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont12490;
arg_buffer[3] = a1239512641;
arg_buffer[4] = a1239712644;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12787 = encode_clo(alloc_clo(lam12787_fptr, 0));

void* lam12790_fptr() // lam12790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12791 = arg_buffer[1];
//reading env and args
void* a1239512641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12791))[4];
//not do dummy comment
void* kont12490 = (decode_clo(env12791))[3];
//not do dummy comment
void* n = (decode_clo(env12791))[2];
//not do dummy comment
void* _u45 = (decode_clo(env12791))[1];
mpz_t* mpzvar13519 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13519, "1", 10);
void* a1239612642 = encode_mpz(mpzvar13519);

//creating new closure instance
void** clo13521 = alloc_clo(lam12787_fptr, 3);

//setting env list
clo13521[1] = a1239512641;
clo13521[2] = kont12490;
clo13521[3] = drop;
void* f1249112643 = encode_clo(clo13521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1249112643;
arg_buffer[3] = n;
arg_buffer[4] = a1239612642;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12790 = encode_clo(alloc_clo(lam12790_fptr, 0));

void* lam12792_fptr() // lam12792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12793 = arg_buffer[1];
//reading env and args
void* a1239412639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12793))[6];
//not do dummy comment
void* kont12490 = (decode_clo(env12793))[5];
//not do dummy comment
void* n = (decode_clo(env12793))[4];
//not do dummy comment
void* _u45 = (decode_clo(env12793))[3];
//not do dummy comment
void* lst = (decode_clo(env12793))[2];
//not do dummy comment
void* drop = (decode_clo(env12793))[1];

//if-clause
bool if_guard13522 = is_true(a1239412639);
if(if_guard13522)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12490);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12490))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13524 = alloc_clo(lam12790_fptr, 4);

//setting env list
clo13524[1] = _u45;
clo13524[2] = n;
clo13524[3] = kont12490;
clo13524[4] = drop;
void* f1249212640 = encode_clo(clo13524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1249212640;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12792 = encode_clo(alloc_clo(lam12792_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12795 = arg_buffer[1];
//reading env and args
void* kont12490 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar13525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13525, "0", 10);
void* a1239312637 = encode_mpz(mpzvar13525);

//creating new closure instance
void** clo13527 = alloc_clo(lam12792_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo13527[1] = drop;
clo13527[2] = lst;
clo13527[3] = _u45;
clo13527[4] = n;
clo13527[5] = kont12490;
clo13527[6] = cdr;
void* f1249312638 = encode_clo(clo13527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1249312638;
arg_buffer[3] = n;
arg_buffer[4] = a1239312637;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam12796_fptr() // lam12796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12797 = arg_buffer[1];
//reading env and args
void* a1240112652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1239912648 = (decode_clo(env12797))[3];
//not do dummy comment
void* proc = (decode_clo(env12797))[2];
//not do dummy comment
void* kont12494 = (decode_clo(env12797))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont12494;
arg_buffer[3] = a1239912648;
arg_buffer[4] = a1240112652;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12796 = encode_clo(alloc_clo(lam12796_fptr, 0));

void* lam12798_fptr() // lam12798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12799 = arg_buffer[1];
//reading env and args
void* a1240012650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env12799))[5];
//not do dummy comment
void* a1239912648 = (decode_clo(env12799))[4];
//not do dummy comment
void* kont12494 = (decode_clo(env12799))[3];
//not do dummy comment
void* proc = (decode_clo(env12799))[2];
//not do dummy comment
void* acc = (decode_clo(env12799))[1];

//creating new closure instance
void** clo13529 = alloc_clo(lam12796_fptr, 3);

//setting env list
clo13529[1] = kont12494;
clo13529[2] = proc;
clo13529[3] = a1239912648;
void* f1249512651 = encode_clo(clo13529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1249512651;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1240012650;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12798 = encode_clo(alloc_clo(lam12798_fptr, 0));

void* lam12800_fptr() // lam12800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12801 = arg_buffer[1];
//reading env and args
void* a1239912648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12801))[6];
//not do dummy comment
void* kont12494 = (decode_clo(env12801))[5];
//not do dummy comment
void* foldr = (decode_clo(env12801))[4];
//not do dummy comment
void* lst = (decode_clo(env12801))[3];
//not do dummy comment
void* proc = (decode_clo(env12801))[2];
//not do dummy comment
void* acc = (decode_clo(env12801))[1];

//creating new closure instance
void** clo13531 = alloc_clo(lam12798_fptr, 5);

//setting env list
clo13531[1] = acc;
clo13531[2] = proc;
clo13531[3] = kont12494;
clo13531[4] = a1239912648;
clo13531[5] = foldr;
void* f1249612649 = encode_clo(clo13531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1249612649;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12800 = encode_clo(alloc_clo(lam12800_fptr, 0));

void* lam12802_fptr() // lam12802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12803 = arg_buffer[1];
//reading env and args
void* a1239812646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12803))[7];
//not do dummy comment
void* kont12494 = (decode_clo(env12803))[6];
//not do dummy comment
void* car = (decode_clo(env12803))[5];
//not do dummy comment
void* foldr = (decode_clo(env12803))[4];
//not do dummy comment
void* lst = (decode_clo(env12803))[3];
//not do dummy comment
void* proc = (decode_clo(env12803))[2];
//not do dummy comment
void* acc = (decode_clo(env12803))[1];

//if-clause
bool if_guard13532 = is_true(a1239812646);
if(if_guard13532)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12494);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12494))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13534 = alloc_clo(lam12800_fptr, 6);

//setting env list
clo13534[1] = acc;
clo13534[2] = proc;
clo13534[3] = lst;
clo13534[4] = foldr;
clo13534[5] = kont12494;
clo13534[6] = cdr;
void* f1249712647 = encode_clo(clo13534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1249712647;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12802 = encode_clo(alloc_clo(lam12802_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12804 = arg_buffer[1];
//reading env and args
void* kont12494 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13536 = alloc_clo(lam12802_fptr, 7);

//setting env list
clo13536[1] = acc;
clo13536[2] = proc;
clo13536[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo13536[4] = foldr;
clo13536[5] = car;
clo13536[6] = kont12494;
clo13536[7] = cdr;
void* f1249812645 = encode_clo(clo13536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1249812645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam12805_fptr() // lam12805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12806 = arg_buffer[1];
//reading env and args
void* a1240512660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12499 = (decode_clo(env12806))[3];
//not do dummy comment
void* a1240312656 = (decode_clo(env12806))[2];
//not do dummy comment
void* cons = (decode_clo(env12806))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12499;
arg_buffer[3] = a1240312656;
arg_buffer[4] = a1240512660;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12805 = encode_clo(alloc_clo(lam12805_fptr, 0));

void* lam12807_fptr() // lam12807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12808 = arg_buffer[1];
//reading env and args
void* a1240412658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12499 = (decode_clo(env12808))[5];
//not do dummy comment
void* append = (decode_clo(env12808))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12808))[3];
//not do dummy comment
void* a1240312656 = (decode_clo(env12808))[2];
//not do dummy comment
void* cons = (decode_clo(env12808))[1];

//creating new closure instance
void** clo13538 = alloc_clo(lam12805_fptr, 3);

//setting env list
clo13538[1] = cons;
clo13538[2] = a1240312656;
clo13538[3] = kont12499;
void* f1250012659 = encode_clo(clo13538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1250012659;
arg_buffer[3] = a1240412658;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12807 = encode_clo(alloc_clo(lam12807_fptr, 0));

void* lam12809_fptr() // lam12809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12810 = arg_buffer[1];
//reading env and args
void* a1240312656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12810))[6];
//not do dummy comment
void* kont12499 = (decode_clo(env12810))[5];
//not do dummy comment
void* append = (decode_clo(env12810))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12810))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12810))[2];
//not do dummy comment
void* cons = (decode_clo(env12810))[1];

//creating new closure instance
void** clo13540 = alloc_clo(lam12807_fptr, 5);

//setting env list
clo13540[1] = cons;
clo13540[2] = a1240312656;
clo13540[3] = lst2;
clo13540[4] = append;
clo13540[5] = kont12499;
void* f1250112657 = encode_clo(clo13540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1250112657;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12809 = encode_clo(alloc_clo(lam12809_fptr, 0));

void* lam12811_fptr() // lam12811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12812 = arg_buffer[1];
//reading env and args
void* a1240212654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12812))[7];
//not do dummy comment
void* kont12499 = (decode_clo(env12812))[6];
//not do dummy comment
void* append = (decode_clo(env12812))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12812))[4];
//not do dummy comment
void* cons = (decode_clo(env12812))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12812))[2];
//not do dummy comment
void* car = (decode_clo(env12812))[1];

//if-clause
bool if_guard13541 = is_true(a1240212654);
if(if_guard13541)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12499);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12499))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13543 = alloc_clo(lam12809_fptr, 6);

//setting env list
clo13543[1] = cons;
clo13543[2] = lst1;
clo13543[3] = lst2;
clo13543[4] = append;
clo13543[5] = kont12499;
clo13543[6] = cdr;
void* f1250212655 = encode_clo(clo13543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1250212655;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12811 = encode_clo(alloc_clo(lam12811_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12813 = arg_buffer[1];
//reading env and args
void* kont12499 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13545 = alloc_clo(lam12811_fptr, 7);

//setting env list
clo13545[1] = car;
clo13545[2] = lst1;
clo13545[3] = cons;
clo13545[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo13545[5] = append;
clo13545[6] = kont12499;
clo13545[7] = cdr;
void* f1250312653 = encode_clo(clo13545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1250312653;
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
void* _12814 = arg_buffer[1];
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

void* kont1250412661 = prim_car(lst);
void* lst12662 = prim_cdr(lst);
void* x1240612663 = apply_prim_hash(lst12662);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1250412661);
arg_buffer[2] = x1240612663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1250412661))[0]);
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
void* _12815 = arg_buffer[1];
//reading env and args
void* kont12506 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1240712664 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12506);
arg_buffer[2] = x1240712664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12506))[0]);
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
void* _12816 = arg_buffer[1];
//reading env and args
void* kont12507 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1240812665 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12507);
arg_buffer[2] = x1240812665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12507))[0]);
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
void* _12817 = arg_buffer[1];
//reading env and args
void* kont12508 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1240912666 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12508);
arg_buffer[2] = x1240912666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12508))[0]);
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
void* _12818 = arg_buffer[1];
//reading env and args
void* kont12509 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1241012667 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12509);
arg_buffer[2] = x1241012667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12509))[0]);
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
void* _12820 = arg_buffer[1];
//reading env and args
void* kont12510 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar13546 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13546, "5", 10);
void* a1241112668 = encode_mpz(mpzvar13546);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont12510;
arg_buffer[3] = a1241112668;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam12821_fptr() // lam12821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12822 = arg_buffer[1];
//reading env and args
void* x1241212670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12511 = (decode_clo(env12822))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12511);
arg_buffer[2] = x1241212670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12511))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12821 = encode_clo(alloc_clo(lam12821_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12823 = arg_buffer[1];
//reading env and args
void* kont12511 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo13548 = alloc_clo(lam12821_fptr, 1);

//setting env list
clo13548[1] = kont12511;
void* f1251212669 = encode_clo(clo13548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1251212669;
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

