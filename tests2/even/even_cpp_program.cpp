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
void* _12667 = arg_buffer[1];
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

void* kont1240912509 = prim_car(lst);
void* lst12510 = prim_cdr(lst);
void* x1232412511 = apply_prim__u43(lst12510);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1240912509);
arg_buffer[2] = x1232412511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1240912509))[0]);
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
void* _12668 = arg_buffer[1];
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

void* kont1241112512 = prim_car(lst);
void* lst12513 = prim_cdr(lst);
void* x1232512514 = apply_prim__u45(lst12513);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1241112512);
arg_buffer[2] = x1232512514;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1241112512))[0]);
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
void* _12669 = arg_buffer[1];
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

void* kont1241312515 = prim_car(lst);
void* lst12516 = prim_cdr(lst);
void* x1232612517 = apply_prim__u42(lst12516);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1241312515);
arg_buffer[2] = x1232612517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1241312515))[0]);
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
void* _12670 = arg_buffer[1];
//reading env and args
void* kont12415 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1232712518 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12415);
arg_buffer[2] = x1232712518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12415))[0]);
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

void* kont1241612519 = prim_car(lst);
void* lst12520 = prim_cdr(lst);
void* x1232812521 = apply_prim__u47(lst12520);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1241612519);
arg_buffer[2] = x1232812521;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1241612519))[0]);
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

void* kont1241812522 = prim_car(lst);
void* lst12523 = prim_cdr(lst);
void* x1232912524 = apply_prim__u61(lst12523);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1241812522);
arg_buffer[2] = x1232912524;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1241812522))[0]);
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

void* kont1242012525 = prim_car(lst);
void* lst12526 = prim_cdr(lst);
void* x1233012527 = apply_prim__u62(lst12526);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242012525);
arg_buffer[2] = x1233012527;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242012525))[0]);
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
void* _12674 = arg_buffer[1];
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

void* kont1242212528 = prim_car(lst);
void* lst12529 = prim_cdr(lst);
void* x1233112530 = apply_prim__u60(lst12529);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242212528);
arg_buffer[2] = x1233112530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242212528))[0]);
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

void* kont1242412531 = prim_car(lst);
void* lst12532 = prim_cdr(lst);
void* x1233212533 = apply_prim__u60_u61(lst12532);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242412531);
arg_buffer[2] = x1233212533;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242412531))[0]);
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

void* kont1242612534 = prim_car(lst);
void* lst12535 = prim_cdr(lst);
void* x1233312536 = apply_prim__u62_u61(lst12535);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1242612534);
arg_buffer[2] = x1233312536;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1242612534))[0]);
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
void* _12677 = arg_buffer[1];
//reading env and args
void* kont12428 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1233412537 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12428);
arg_buffer[2] = x1233412537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12428))[0]);
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
void* _12678 = arg_buffer[1];
//reading env and args
void* kont12429 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1233512538 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12429);
arg_buffer[2] = x1233512538;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12429))[0]);
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
void* _12679 = arg_buffer[1];
//reading env and args
void* kont12430 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1233612539 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12430);
arg_buffer[2] = x1233612539;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12430))[0]);
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
void* _12680 = arg_buffer[1];
//reading env and args
void* kont12431 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1233712540 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12431);
arg_buffer[2] = x1233712540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12431))[0]);
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
void* _12681 = arg_buffer[1];
//reading env and args
void* kont12432 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1233812541 = prim_car(lst);

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

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12682 = arg_buffer[1];
//reading env and args
void* kont12433 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1233912542 = prim_cdr(lst);

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

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam12683_fptr() // lam12683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12684 = arg_buffer[1];
//reading env and args
void* a1234212546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1234012543 = (decode_clo(env12684))[3];
//not do dummy comment
void* kont12434 = (decode_clo(env12684))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12684))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12434;
arg_buffer[3] = a1234012543;
arg_buffer[4] = a1234212546;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12683 = encode_clo(alloc_clo(lam12683_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12687 = arg_buffer[1];
//reading env and args
void* kont12434 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13420 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13420, "0", 10);
void* a1234012543 = encode_mpz(mpzvar13420);
mpz_t* mpzvar13421 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13421, "2", 10);
void* a1234112544 = encode_mpz(mpzvar13421);

//creating new closure instance
void** clo13423 = alloc_clo(lam12683_fptr, 3);

//setting env list
clo13423[1] = equal_u63;
clo13423[2] = kont12434;
clo13423[3] = a1234012543;
void* f1243512545 = encode_clo(clo13423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1243512545;
arg_buffer[3] = x;
arg_buffer[4] = a1234112544;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam12688_fptr() // lam12688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12689 = arg_buffer[1];
//reading env and args
void* a1234512550 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1234312547 = (decode_clo(env12689))[3];
//not do dummy comment
void* kont12436 = (decode_clo(env12689))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12689))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12436;
arg_buffer[3] = a1234312547;
arg_buffer[4] = a1234512550;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12688 = encode_clo(alloc_clo(lam12688_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12692 = arg_buffer[1];
//reading env and args
void* kont12436 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13424 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13424, "1", 10);
void* a1234312547 = encode_mpz(mpzvar13424);
mpz_t* mpzvar13425 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13425, "2", 10);
void* a1234412548 = encode_mpz(mpzvar13425);

//creating new closure instance
void** clo13427 = alloc_clo(lam12688_fptr, 3);

//setting env list
clo13427[1] = equal_u63;
clo13427[2] = kont12436;
clo13427[3] = a1234312547;
void* f1243712549 = encode_clo(clo13427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1243712549;
arg_buffer[3] = x;
arg_buffer[4] = a1234412548;
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
void* _12693 = arg_buffer[1];
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

void* kont1243812551 = prim_car(x);
void* x12552 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1243812551);
arg_buffer[2] = x12552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1243812551))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam12696_fptr() // lam12696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12697 = arg_buffer[1];
//reading env and args
void* a1235112562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12440 = (decode_clo(env12697))[3];
//not do dummy comment
void* x = (decode_clo(env12697))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12697))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont12440;
arg_buffer[3] = x;
arg_buffer[4] = a1235112562;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12696 = encode_clo(alloc_clo(lam12696_fptr, 0));

void* lam12698_fptr() // lam12698 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12699 = arg_buffer[1];
//reading env and args
void* a1234912559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12699))[5];
//not do dummy comment
void* lst = (decode_clo(env12699))[4];
//not do dummy comment
void* kont12440 = (decode_clo(env12699))[3];
//not do dummy comment
void* x = (decode_clo(env12699))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12699))[1];

//if-clause
bool if_guard13428 = is_true(a1234912559);
if(if_guard13428)
{
void* x1235012560 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12440);
arg_buffer[2] = x1235012560;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12440))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13430 = alloc_clo(lam12696_fptr, 3);

//setting env list
clo13430[1] = member_u63;
clo13430[2] = x;
clo13430[3] = kont12440;
void* f1244112561 = encode_clo(clo13430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1244112561;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12698 = encode_clo(alloc_clo(lam12698_fptr, 0));

void* lam12700_fptr() // lam12700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12701 = arg_buffer[1];
//reading env and args
void* a1234812557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12701))[6];
//not do dummy comment
void* lst = (decode_clo(env12701))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env12701))[4];
//not do dummy comment
void* kont12440 = (decode_clo(env12701))[3];
//not do dummy comment
void* x = (decode_clo(env12701))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12701))[1];

//creating new closure instance
void** clo13432 = alloc_clo(lam12698_fptr, 5);

//setting env list
clo13432[1] = member_u63;
clo13432[2] = x;
clo13432[3] = kont12440;
clo13432[4] = lst;
clo13432[5] = cdr;
void* f1244212558 = encode_clo(clo13432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1244212558;
arg_buffer[3] = a1234812557;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
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
void* a1234612554 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12703))[7];
//not do dummy comment
void* lst = (decode_clo(env12703))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env12703))[5];
//not do dummy comment
void* kont12440 = (decode_clo(env12703))[4];
//not do dummy comment
void* x = (decode_clo(env12703))[3];
//not do dummy comment
void* car = (decode_clo(env12703))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12703))[1];

//if-clause
bool if_guard13433 = is_true(a1234612554);
if(if_guard13433)
{
void* x1234712555 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12440);
arg_buffer[2] = x1234712555;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12440))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13435 = alloc_clo(lam12700_fptr, 6);

//setting env list
clo13435[1] = member_u63;
clo13435[2] = x;
clo13435[3] = kont12440;
clo13435[4] = equal_u63;
clo13435[5] = lst;
clo13435[6] = cdr;
void* f1244312556 = encode_clo(clo13435);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1244312556;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12702 = encode_clo(alloc_clo(lam12702_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12704 = arg_buffer[1];
//reading env and args
void* kont12440 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13437 = alloc_clo(lam12702_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo13437[1] = member_u63;
clo13437[2] = car;
clo13437[3] = x;
clo13437[4] = kont12440;
clo13437[5] = equal_u63;
clo13437[6] = lst;
clo13437[7] = cdr;
void* f1244412553 = encode_clo(clo13437);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1244412553;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam12705_fptr() // lam12705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12706 = arg_buffer[1];
//reading env and args
void* a1235512570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env12706))[4];
//not do dummy comment
void* kont12445 = (decode_clo(env12706))[3];
//not do dummy comment
void* a1235412568 = (decode_clo(env12706))[2];
//not do dummy comment
void* fun = (decode_clo(env12706))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont12445;
arg_buffer[3] = fun;
arg_buffer[4] = a1235412568;
arg_buffer[5] = a1235512570;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12705 = encode_clo(alloc_clo(lam12705_fptr, 0));

void* lam12707_fptr() // lam12707 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12708 = arg_buffer[1];
//reading env and args
void* a1235412568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12708))[5];
//not do dummy comment
void* lst = (decode_clo(env12708))[4];
//not do dummy comment
void* fun = (decode_clo(env12708))[3];
//not do dummy comment
void* foldl = (decode_clo(env12708))[2];
//not do dummy comment
void* kont12445 = (decode_clo(env12708))[1];

//creating new closure instance
void** clo13439 = alloc_clo(lam12705_fptr, 4);

//setting env list
clo13439[1] = fun;
clo13439[2] = a1235412568;
clo13439[3] = kont12445;
clo13439[4] = foldl;
void* f1244612569 = encode_clo(clo13439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1244612569;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12707 = encode_clo(alloc_clo(lam12707_fptr, 0));

void* lam12709_fptr() // lam12709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12710 = arg_buffer[1];
//reading env and args
void* a1235312566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12710))[6];
//not do dummy comment
void* lst = (decode_clo(env12710))[5];
//not do dummy comment
void* fun = (decode_clo(env12710))[4];
//not do dummy comment
void* acc = (decode_clo(env12710))[3];
//not do dummy comment
void* foldl = (decode_clo(env12710))[2];
//not do dummy comment
void* kont12445 = (decode_clo(env12710))[1];

//creating new closure instance
void** clo13441 = alloc_clo(lam12707_fptr, 5);

//setting env list
clo13441[1] = kont12445;
clo13441[2] = foldl;
clo13441[3] = fun;
clo13441[4] = lst;
clo13441[5] = cdr;
void* f1244712567 = encode_clo(clo13441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1244712567;
arg_buffer[3] = a1235312566;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a1235212564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12712))[7];
//not do dummy comment
void* lst = (decode_clo(env12712))[6];
//not do dummy comment
void* fun = (decode_clo(env12712))[5];
//not do dummy comment
void* acc = (decode_clo(env12712))[4];
//not do dummy comment
void* car = (decode_clo(env12712))[3];
//not do dummy comment
void* foldl = (decode_clo(env12712))[2];
//not do dummy comment
void* kont12445 = (decode_clo(env12712))[1];

//if-clause
bool if_guard13442 = is_true(a1235212564);
if(if_guard13442)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12445);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12445))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13444 = alloc_clo(lam12709_fptr, 6);

//setting env list
clo13444[1] = kont12445;
clo13444[2] = foldl;
clo13444[3] = acc;
clo13444[4] = fun;
clo13444[5] = lst;
clo13444[6] = cdr;
void* f1244812565 = encode_clo(clo13444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1244812565;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12711 = encode_clo(alloc_clo(lam12711_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12713 = arg_buffer[1];
//reading env and args
void* kont12445 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13446 = alloc_clo(lam12711_fptr, 7);

//setting env list
clo13446[1] = kont12445;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo13446[2] = foldl;
clo13446[3] = car;
clo13446[4] = acc;
clo13446[5] = fun;
clo13446[6] = lst;
clo13446[7] = cdr;
void* f1244912563 = encode_clo(clo13446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1244912563;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam12714_fptr() // lam12714 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12715 = arg_buffer[1];
//reading env and args
void* a1235912578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1235712574 = (decode_clo(env12715))[3];
//not do dummy comment
void* kont12450 = (decode_clo(env12715))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12715))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12450;
arg_buffer[3] = a1235712574;
arg_buffer[4] = a1235912578;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12714 = encode_clo(alloc_clo(lam12714_fptr, 0));

void* lam12716_fptr() // lam12716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12717 = arg_buffer[1];
//reading env and args
void* a1235812576 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1235712574 = (decode_clo(env12717))[5];
//not do dummy comment
void* kont12450 = (decode_clo(env12717))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12717))[3];
//not do dummy comment
void* lst2 = (decode_clo(env12717))[2];
//not do dummy comment
void* cons = (decode_clo(env12717))[1];

//creating new closure instance
void** clo13448 = alloc_clo(lam12714_fptr, 3);

//setting env list
clo13448[1] = reverse_u45helper;
clo13448[2] = kont12450;
clo13448[3] = a1235712574;
void* f1245112577 = encode_clo(clo13448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1245112577;
arg_buffer[3] = a1235812576;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12716 = encode_clo(alloc_clo(lam12716_fptr, 0));

void* lam12718_fptr() // lam12718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12719 = arg_buffer[1];
//reading env and args
void* a1235712574 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12719))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12719))[5];
//not do dummy comment
void* car = (decode_clo(env12719))[4];
//not do dummy comment
void* cons = (decode_clo(env12719))[3];
//not do dummy comment
void* lst = (decode_clo(env12719))[2];
//not do dummy comment
void* kont12450 = (decode_clo(env12719))[1];

//creating new closure instance
void** clo13450 = alloc_clo(lam12716_fptr, 5);

//setting env list
clo13450[1] = cons;
clo13450[2] = lst2;
clo13450[3] = reverse_u45helper;
clo13450[4] = kont12450;
clo13450[5] = a1235712574;
void* f1245212575 = encode_clo(clo13450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1245212575;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a1235612572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12721))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12721))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12721))[5];
//not do dummy comment
void* car = (decode_clo(env12721))[4];
//not do dummy comment
void* cons = (decode_clo(env12721))[3];
//not do dummy comment
void* lst = (decode_clo(env12721))[2];
//not do dummy comment
void* kont12450 = (decode_clo(env12721))[1];

//if-clause
bool if_guard13451 = is_true(a1235612572);
if(if_guard13451)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12450);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12450))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13453 = alloc_clo(lam12718_fptr, 6);

//setting env list
clo13453[1] = kont12450;
clo13453[2] = lst;
clo13453[3] = cons;
clo13453[4] = car;
clo13453[5] = lst2;
clo13453[6] = reverse_u45helper;
void* f1245312573 = encode_clo(clo13453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1245312573;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12720 = encode_clo(alloc_clo(lam12720_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12722 = arg_buffer[1];
//reading env and args
void* kont12450 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13455 = alloc_clo(lam12720_fptr, 7);

//setting env list
clo13455[1] = kont12450;
clo13455[2] = lst;
clo13455[3] = cons;
clo13455[4] = car;
clo13455[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo13455[6] = reverse_u45helper;
clo13455[7] = cdr;
void* f1245412571 = encode_clo(clo13455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1245412571;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam12723_fptr() // lam12723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12724 = arg_buffer[1];
//reading env and args
void* a1236012580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12724))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12724))[2];
//not do dummy comment
void* kont12455 = (decode_clo(env12724))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12455;
arg_buffer[3] = lst;
arg_buffer[4] = a1236012580;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12723 = encode_clo(alloc_clo(lam12723_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12725 = arg_buffer[1];
//reading env and args
void* kont12455 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13457 = alloc_clo(lam12723_fptr, 3);

//setting env list
clo13457[1] = kont12455;
clo13457[2] = reverse_u45helper;
clo13457[3] = lst;
void* f1245612579 = encode_clo(clo13457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1245612579;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam12726_fptr() // lam12726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12727 = arg_buffer[1];
//reading env and args
void* x1236312585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12457 = (decode_clo(env12727))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12457);
arg_buffer[2] = x1236312585;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12457))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12726 = encode_clo(alloc_clo(lam12726_fptr, 0));

void* lam12728_fptr() // lam12728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12729 = arg_buffer[1];
//reading env and args
void* a1236812594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1236612590 = (decode_clo(env12729))[4];
//not do dummy comment
void* kont12457 = (decode_clo(env12729))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12729))[2];
//not do dummy comment
void* a1236412587 = (decode_clo(env12729))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12457;
arg_buffer[3] = a1236412587;
arg_buffer[4] = a1236612590;
arg_buffer[5] = a1236812594;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12728 = encode_clo(alloc_clo(lam12728_fptr, 0));

void* lam12730_fptr() // lam12730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12731 = arg_buffer[1];
//reading env and args
void* a1236712592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1236612590 = (decode_clo(env12731))[6];
//not do dummy comment
void* kont12457 = (decode_clo(env12731))[5];
//not do dummy comment
void* a1236412587 = (decode_clo(env12731))[4];
//not do dummy comment
void* cons = (decode_clo(env12731))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12731))[2];
//not do dummy comment
void* lst2 = (decode_clo(env12731))[1];

//creating new closure instance
void** clo13459 = alloc_clo(lam12728_fptr, 4);

//setting env list
clo13459[1] = a1236412587;
clo13459[2] = take_u45helper;
clo13459[3] = kont12457;
clo13459[4] = a1236612590;
void* f1245912593 = encode_clo(clo13459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1245912593;
arg_buffer[3] = a1236712592;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a1236612590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12733))[7];
//not do dummy comment
void* kont12457 = (decode_clo(env12733))[6];
//not do dummy comment
void* cons = (decode_clo(env12733))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12733))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12733))[3];
//not do dummy comment
void* a1236412587 = (decode_clo(env12733))[2];
//not do dummy comment
void* car = (decode_clo(env12733))[1];

//creating new closure instance
void** clo13461 = alloc_clo(lam12730_fptr, 6);

//setting env list
clo13461[1] = lst2;
clo13461[2] = take_u45helper;
clo13461[3] = cons;
clo13461[4] = a1236412587;
clo13461[5] = kont12457;
clo13461[6] = a1236612590;
void* f1246012591 = encode_clo(clo13461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1246012591;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12732 = encode_clo(alloc_clo(lam12732_fptr, 0));

void* lam12735_fptr() // lam12735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12736 = arg_buffer[1];
//reading env and args
void* a1236412587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12736))[8];
//not do dummy comment
void* kont12457 = (decode_clo(env12736))[7];
//not do dummy comment
void* cons = (decode_clo(env12736))[6];
//not do dummy comment
void* _u45 = (decode_clo(env12736))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12736))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12736))[3];
//not do dummy comment
void* n = (decode_clo(env12736))[2];
//not do dummy comment
void* car = (decode_clo(env12736))[1];
mpz_t* mpzvar13462 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13462, "1", 10);
void* a1236512588 = encode_mpz(mpzvar13462);

//creating new closure instance
void** clo13464 = alloc_clo(lam12732_fptr, 7);

//setting env list
clo13464[1] = car;
clo13464[2] = a1236412587;
clo13464[3] = lst2;
clo13464[4] = take_u45helper;
clo13464[5] = cons;
clo13464[6] = kont12457;
clo13464[7] = lst;
void* f1246112589 = encode_clo(clo13464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1246112589;
arg_buffer[3] = n;
arg_buffer[4] = a1236512588;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12735 = encode_clo(alloc_clo(lam12735_fptr, 0));

void* lam12737_fptr() // lam12737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12738 = arg_buffer[1];
//reading env and args
void* a1236212583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12738))[10];
//not do dummy comment
void* lst = (decode_clo(env12738))[9];
//not do dummy comment
void* reverse = (decode_clo(env12738))[8];
//not do dummy comment
void* kont12457 = (decode_clo(env12738))[7];
//not do dummy comment
void* cons = (decode_clo(env12738))[6];
//not do dummy comment
void* _u45 = (decode_clo(env12738))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12738))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12738))[3];
//not do dummy comment
void* n = (decode_clo(env12738))[2];
//not do dummy comment
void* car = (decode_clo(env12738))[1];

//if-clause
bool if_guard13465 = is_true(a1236212583);
if(if_guard13465)
{

//creating new closure instance
void** clo13467 = alloc_clo(lam12726_fptr, 1);

//setting env list
clo13467[1] = kont12457;
void* f1245812584 = encode_clo(clo13467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1245812584;
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
void** clo13469 = alloc_clo(lam12735_fptr, 8);

//setting env list
clo13469[1] = car;
clo13469[2] = n;
clo13469[3] = lst2;
clo13469[4] = take_u45helper;
clo13469[5] = _u45;
clo13469[6] = cons;
clo13469[7] = kont12457;
clo13469[8] = lst;
void* f1246212586 = encode_clo(clo13469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1246212586;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12737 = encode_clo(alloc_clo(lam12737_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12740 = arg_buffer[1];
//reading env and args
void* kont12457 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar13470 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13470, "0", 10);
void* a1236112581 = encode_mpz(mpzvar13470);

//creating new closure instance
void** clo13472 = alloc_clo(lam12737_fptr, 10);

//setting env list
clo13472[1] = car;
clo13472[2] = n;
clo13472[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo13472[4] = take_u45helper;
clo13472[5] = _u45;
clo13472[6] = cons;
clo13472[7] = kont12457;
clo13472[8] = reverse;
clo13472[9] = lst;
clo13472[10] = cdr;
void* f1246312582 = encode_clo(clo13472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1246312582;
arg_buffer[3] = n;
arg_buffer[4] = a1236112581;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam12741_fptr() // lam12741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12742 = arg_buffer[1];
//reading env and args
void* a1236912596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12464 = (decode_clo(env12742))[4];
//not do dummy comment
void* lst = (decode_clo(env12742))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12742))[2];
//not do dummy comment
void* n = (decode_clo(env12742))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12464;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1236912596;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12741 = encode_clo(alloc_clo(lam12741_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12743 = arg_buffer[1];
//reading env and args
void* kont12464 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13474 = alloc_clo(lam12741_fptr, 4);

//setting env list
clo13474[1] = n;
clo13474[2] = take_u45helper;
clo13474[3] = lst;
clo13474[4] = kont12464;
void* f1246512595 = encode_clo(clo13474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1246512595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam12745_fptr() // lam12745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12746 = arg_buffer[1];
//reading env and args
void* a1237412604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12466 = (decode_clo(env12746))[3];
//not do dummy comment
void* _u43 = (decode_clo(env12746))[2];
//not do dummy comment
void* a1237212600 = (decode_clo(env12746))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont12466;
arg_buffer[3] = a1237212600;
arg_buffer[4] = a1237412604;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12745 = encode_clo(alloc_clo(lam12745_fptr, 0));

void* lam12747_fptr() // lam12747 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12748 = arg_buffer[1];
//reading env and args
void* a1237312602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12466 = (decode_clo(env12748))[4];
//not do dummy comment
void* length = (decode_clo(env12748))[3];
//not do dummy comment
void* _u43 = (decode_clo(env12748))[2];
//not do dummy comment
void* a1237212600 = (decode_clo(env12748))[1];

//creating new closure instance
void** clo13476 = alloc_clo(lam12745_fptr, 3);

//setting env list
clo13476[1] = a1237212600;
clo13476[2] = _u43;
clo13476[3] = kont12466;
void* f1246712603 = encode_clo(clo13476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1246712603;
arg_buffer[3] = a1237312602;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12747 = encode_clo(alloc_clo(lam12747_fptr, 0));

void* lam12750_fptr() // lam12750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12751 = arg_buffer[1];
//reading env and args
void* a1237012598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12751))[5];
//not do dummy comment
void* length = (decode_clo(env12751))[4];
//not do dummy comment
void* _u43 = (decode_clo(env12751))[3];
//not do dummy comment
void* lst = (decode_clo(env12751))[2];
//not do dummy comment
void* kont12466 = (decode_clo(env12751))[1];

//if-clause
bool if_guard13477 = is_true(a1237012598);
if(if_guard13477)
{
mpz_t* mpzvar13478 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13478, "0", 10);
void* x1237112599 = encode_mpz(mpzvar13478);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12466);
arg_buffer[2] = x1237112599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12466))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar13479 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13479, "1", 10);
void* a1237212600 = encode_mpz(mpzvar13479);

//creating new closure instance
void** clo13481 = alloc_clo(lam12747_fptr, 4);

//setting env list
clo13481[1] = a1237212600;
clo13481[2] = _u43;
clo13481[3] = length;
clo13481[4] = kont12466;
void* f1246812601 = encode_clo(clo13481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1246812601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12750 = encode_clo(alloc_clo(lam12750_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12752 = arg_buffer[1];
//reading env and args
void* kont12466 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13483 = alloc_clo(lam12750_fptr, 5);

//setting env list
clo13483[1] = kont12466;
clo13483[2] = lst;
clo13483[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo13483[4] = length;
clo13483[5] = cdr;
void* f1246912597 = encode_clo(clo13483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1246912597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam12753_fptr() // lam12753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12754 = arg_buffer[1];
//reading env and args
void* x1237612608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12470 = (decode_clo(env12754))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12470);
arg_buffer[2] = x1237612608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12470))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12753 = encode_clo(alloc_clo(lam12753_fptr, 0));

void* lam12755_fptr() // lam12755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12756 = arg_buffer[1];
//reading env and args
void* a1238012616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1237812612 = (decode_clo(env12756))[3];
//not do dummy comment
void* kont12470 = (decode_clo(env12756))[2];
//not do dummy comment
void* cons = (decode_clo(env12756))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12470;
arg_buffer[3] = a1237812612;
arg_buffer[4] = a1238012616;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12755 = encode_clo(alloc_clo(lam12755_fptr, 0));

void* lam12757_fptr() // lam12757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12758 = arg_buffer[1];
//reading env and args
void* a1237912614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env12758))[5];
//not do dummy comment
void* a1237812612 = (decode_clo(env12758))[4];
//not do dummy comment
void* kont12470 = (decode_clo(env12758))[3];
//not do dummy comment
void* proc = (decode_clo(env12758))[2];
//not do dummy comment
void* cons = (decode_clo(env12758))[1];

//creating new closure instance
void** clo13485 = alloc_clo(lam12755_fptr, 3);

//setting env list
clo13485[1] = cons;
clo13485[2] = kont12470;
clo13485[3] = a1237812612;
void* f1247212615 = encode_clo(clo13485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1247212615;
arg_buffer[3] = proc;
arg_buffer[4] = a1237912614;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a1237812612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12760))[6];
//not do dummy comment
void* lst = (decode_clo(env12760))[5];
//not do dummy comment
void* map = (decode_clo(env12760))[4];
//not do dummy comment
void* kont12470 = (decode_clo(env12760))[3];
//not do dummy comment
void* proc = (decode_clo(env12760))[2];
//not do dummy comment
void* cons = (decode_clo(env12760))[1];

//creating new closure instance
void** clo13487 = alloc_clo(lam12757_fptr, 5);

//setting env list
clo13487[1] = cons;
clo13487[2] = proc;
clo13487[3] = kont12470;
clo13487[4] = a1237812612;
clo13487[5] = map;
void* f1247312613 = encode_clo(clo13487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1247312613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1237712610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12762))[6];
//not do dummy comment
void* lst = (decode_clo(env12762))[5];
//not do dummy comment
void* map = (decode_clo(env12762))[4];
//not do dummy comment
void* kont12470 = (decode_clo(env12762))[3];
//not do dummy comment
void* proc = (decode_clo(env12762))[2];
//not do dummy comment
void* cons = (decode_clo(env12762))[1];

//creating new closure instance
void** clo13489 = alloc_clo(lam12759_fptr, 6);

//setting env list
clo13489[1] = cons;
clo13489[2] = proc;
clo13489[3] = kont12470;
clo13489[4] = map;
clo13489[5] = lst;
clo13489[6] = cdr;
void* f1247412611 = encode_clo(clo13489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1247412611;
arg_buffer[3] = a1237712610;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a1237512606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12764))[8];
//not do dummy comment
void* map = (decode_clo(env12764))[7];
//not do dummy comment
void* kont12470 = (decode_clo(env12764))[6];
//not do dummy comment
void* proc = (decode_clo(env12764))[5];
//not do dummy comment
void* car = (decode_clo(env12764))[4];
//not do dummy comment
void* cons = (decode_clo(env12764))[3];
//not do dummy comment
void* list = (decode_clo(env12764))[2];
//not do dummy comment
void* cdr = (decode_clo(env12764))[1];

//if-clause
bool if_guard13490 = is_true(a1237512606);
if(if_guard13490)
{

//creating new closure instance
void** clo13492 = alloc_clo(lam12753_fptr, 1);

//setting env list
clo13492[1] = kont12470;
void* f1247112607 = encode_clo(clo13492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1247112607;
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
void** clo13494 = alloc_clo(lam12761_fptr, 6);

//setting env list
clo13494[1] = cons;
clo13494[2] = proc;
clo13494[3] = kont12470;
clo13494[4] = map;
clo13494[5] = lst;
clo13494[6] = cdr;
void* f1247512609 = encode_clo(clo13494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1247512609;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12763 = encode_clo(alloc_clo(lam12763_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12765 = arg_buffer[1];
//reading env and args
void* kont12470 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13496 = alloc_clo(lam12763_fptr, 8);

//setting env list
clo13496[1] = cdr;
clo13496[2] = list;
clo13496[3] = cons;
clo13496[4] = car;
clo13496[5] = proc;
clo13496[6] = kont12470;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo13496[7] = map;
clo13496[8] = lst;
void* f1247612605 = encode_clo(clo13496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1247612605;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam12766_fptr() // lam12766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12767 = arg_buffer[1];
//reading env and args
void* x1238212620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12477 = (decode_clo(env12767))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12477);
arg_buffer[2] = x1238212620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12477))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12766 = encode_clo(alloc_clo(lam12766_fptr, 0));

void* lam12768_fptr() // lam12768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12769 = arg_buffer[1];
//reading env and args
void* a1238712630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1238512626 = (decode_clo(env12769))[3];
//not do dummy comment
void* cons = (decode_clo(env12769))[2];
//not do dummy comment
void* kont12477 = (decode_clo(env12769))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12477;
arg_buffer[3] = a1238512626;
arg_buffer[4] = a1238712630;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12768 = encode_clo(alloc_clo(lam12768_fptr, 0));

void* lam12770_fptr() // lam12770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12771 = arg_buffer[1];
//reading env and args
void* a1238612628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1238512626 = (decode_clo(env12771))[5];
//not do dummy comment
void* op = (decode_clo(env12771))[4];
//not do dummy comment
void* filter = (decode_clo(env12771))[3];
//not do dummy comment
void* cons = (decode_clo(env12771))[2];
//not do dummy comment
void* kont12477 = (decode_clo(env12771))[1];

//creating new closure instance
void** clo13498 = alloc_clo(lam12768_fptr, 3);

//setting env list
clo13498[1] = kont12477;
clo13498[2] = cons;
clo13498[3] = a1238512626;
void* f1247912629 = encode_clo(clo13498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1247912629;
arg_buffer[3] = op;
arg_buffer[4] = a1238612628;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a1238512626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12773))[6];
//not do dummy comment
void* lst = (decode_clo(env12773))[5];
//not do dummy comment
void* op = (decode_clo(env12773))[4];
//not do dummy comment
void* filter = (decode_clo(env12773))[3];
//not do dummy comment
void* cons = (decode_clo(env12773))[2];
//not do dummy comment
void* kont12477 = (decode_clo(env12773))[1];

//creating new closure instance
void** clo13500 = alloc_clo(lam12770_fptr, 5);

//setting env list
clo13500[1] = kont12477;
clo13500[2] = cons;
clo13500[3] = filter;
clo13500[4] = op;
clo13500[5] = a1238512626;
void* f1248012627 = encode_clo(clo13500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1248012627;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1238812632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env12775))[3];
//not do dummy comment
void* filter = (decode_clo(env12775))[2];
//not do dummy comment
void* kont12477 = (decode_clo(env12775))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont12477;
arg_buffer[3] = op;
arg_buffer[4] = a1238812632;
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
void* a1238412624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12777))[7];
//not do dummy comment
void* lst = (decode_clo(env12777))[6];
//not do dummy comment
void* op = (decode_clo(env12777))[5];
//not do dummy comment
void* cons = (decode_clo(env12777))[4];
//not do dummy comment
void* kont12477 = (decode_clo(env12777))[3];
//not do dummy comment
void* filter = (decode_clo(env12777))[2];
//not do dummy comment
void* car = (decode_clo(env12777))[1];

//if-clause
bool if_guard13501 = is_true(a1238412624);
if(if_guard13501)
{

//creating new closure instance
void** clo13503 = alloc_clo(lam12772_fptr, 6);

//setting env list
clo13503[1] = kont12477;
clo13503[2] = cons;
clo13503[3] = filter;
clo13503[4] = op;
clo13503[5] = lst;
clo13503[6] = cdr;
void* f1248112625 = encode_clo(clo13503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1248112625;
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
void** clo13505 = alloc_clo(lam12774_fptr, 3);

//setting env list
clo13505[1] = kont12477;
clo13505[2] = filter;
clo13505[3] = op;
void* f1248212631 = encode_clo(clo13505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1248212631;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12776 = encode_clo(alloc_clo(lam12776_fptr, 0));

void* lam12778_fptr() // lam12778 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12779 = arg_buffer[1];
//reading env and args
void* a1238312622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12779))[7];
//not do dummy comment
void* lst = (decode_clo(env12779))[6];
//not do dummy comment
void* op = (decode_clo(env12779))[5];
//not do dummy comment
void* cons = (decode_clo(env12779))[4];
//not do dummy comment
void* kont12477 = (decode_clo(env12779))[3];
//not do dummy comment
void* filter = (decode_clo(env12779))[2];
//not do dummy comment
void* car = (decode_clo(env12779))[1];

//creating new closure instance
void** clo13507 = alloc_clo(lam12776_fptr, 7);

//setting env list
clo13507[1] = car;
clo13507[2] = filter;
clo13507[3] = kont12477;
clo13507[4] = cons;
clo13507[5] = op;
clo13507[6] = lst;
clo13507[7] = cdr;
void* f1248312623 = encode_clo(clo13507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1248312623;
arg_buffer[3] = a1238312622;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a1238112618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12781))[8];
//not do dummy comment
void* op = (decode_clo(env12781))[7];
//not do dummy comment
void* cons = (decode_clo(env12781))[6];
//not do dummy comment
void* kont12477 = (decode_clo(env12781))[5];
//not do dummy comment
void* list = (decode_clo(env12781))[4];
//not do dummy comment
void* cdr = (decode_clo(env12781))[3];
//not do dummy comment
void* filter = (decode_clo(env12781))[2];
//not do dummy comment
void* car = (decode_clo(env12781))[1];

//if-clause
bool if_guard13508 = is_true(a1238112618);
if(if_guard13508)
{

//creating new closure instance
void** clo13510 = alloc_clo(lam12766_fptr, 1);

//setting env list
clo13510[1] = kont12477;
void* f1247812619 = encode_clo(clo13510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1247812619;
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
void** clo13512 = alloc_clo(lam12778_fptr, 7);

//setting env list
clo13512[1] = car;
clo13512[2] = filter;
clo13512[3] = kont12477;
clo13512[4] = cons;
clo13512[5] = op;
clo13512[6] = lst;
clo13512[7] = cdr;
void* f1248412621 = encode_clo(clo13512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1248412621;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12780 = encode_clo(alloc_clo(lam12780_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12782 = arg_buffer[1];
//reading env and args
void* kont12477 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13514 = alloc_clo(lam12780_fptr, 8);

//setting env list
clo13514[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo13514[2] = filter;
clo13514[3] = cdr;
clo13514[4] = list;
clo13514[5] = kont12477;
clo13514[6] = cons;
clo13514[7] = op;
clo13514[8] = lst;
void* f1248512617 = encode_clo(clo13514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1248512617;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam12783_fptr() // lam12783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12784 = arg_buffer[1];
//reading env and args
void* a1239312640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12784))[3];
//not do dummy comment
void* kont12486 = (decode_clo(env12784))[2];
//not do dummy comment
void* a1239112637 = (decode_clo(env12784))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont12486;
arg_buffer[3] = a1239112637;
arg_buffer[4] = a1239312640;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12783 = encode_clo(alloc_clo(lam12783_fptr, 0));

void* lam12786_fptr() // lam12786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12787 = arg_buffer[1];
//reading env and args
void* a1239112637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12787))[4];
//not do dummy comment
void* kont12486 = (decode_clo(env12787))[3];
//not do dummy comment
void* n = (decode_clo(env12787))[2];
//not do dummy comment
void* _u45 = (decode_clo(env12787))[1];
mpz_t* mpzvar13515 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13515, "1", 10);
void* a1239212638 = encode_mpz(mpzvar13515);

//creating new closure instance
void** clo13517 = alloc_clo(lam12783_fptr, 3);

//setting env list
clo13517[1] = a1239112637;
clo13517[2] = kont12486;
clo13517[3] = drop;
void* f1248712639 = encode_clo(clo13517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1248712639;
arg_buffer[3] = n;
arg_buffer[4] = a1239212638;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12786 = encode_clo(alloc_clo(lam12786_fptr, 0));

void* lam12788_fptr() // lam12788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12789 = arg_buffer[1];
//reading env and args
void* a1239012635 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12789))[6];
//not do dummy comment
void* kont12486 = (decode_clo(env12789))[5];
//not do dummy comment
void* n = (decode_clo(env12789))[4];
//not do dummy comment
void* _u45 = (decode_clo(env12789))[3];
//not do dummy comment
void* lst = (decode_clo(env12789))[2];
//not do dummy comment
void* drop = (decode_clo(env12789))[1];

//if-clause
bool if_guard13518 = is_true(a1239012635);
if(if_guard13518)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12486);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12486))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13520 = alloc_clo(lam12786_fptr, 4);

//setting env list
clo13520[1] = _u45;
clo13520[2] = n;
clo13520[3] = kont12486;
clo13520[4] = drop;
void* f1248812636 = encode_clo(clo13520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1248812636;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12788 = encode_clo(alloc_clo(lam12788_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12791 = arg_buffer[1];
//reading env and args
void* kont12486 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar13521 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13521, "0", 10);
void* a1238912633 = encode_mpz(mpzvar13521);

//creating new closure instance
void** clo13523 = alloc_clo(lam12788_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo13523[1] = drop;
clo13523[2] = lst;
clo13523[3] = _u45;
clo13523[4] = n;
clo13523[5] = kont12486;
clo13523[6] = cdr;
void* f1248912634 = encode_clo(clo13523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1248912634;
arg_buffer[3] = n;
arg_buffer[4] = a1238912633;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam12792_fptr() // lam12792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12793 = arg_buffer[1];
//reading env and args
void* a1239712648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1239512644 = (decode_clo(env12793))[3];
//not do dummy comment
void* proc = (decode_clo(env12793))[2];
//not do dummy comment
void* kont12490 = (decode_clo(env12793))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont12490;
arg_buffer[3] = a1239512644;
arg_buffer[4] = a1239712648;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12792 = encode_clo(alloc_clo(lam12792_fptr, 0));

void* lam12794_fptr() // lam12794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12795 = arg_buffer[1];
//reading env and args
void* a1239612646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env12795))[5];
//not do dummy comment
void* a1239512644 = (decode_clo(env12795))[4];
//not do dummy comment
void* kont12490 = (decode_clo(env12795))[3];
//not do dummy comment
void* proc = (decode_clo(env12795))[2];
//not do dummy comment
void* acc = (decode_clo(env12795))[1];

//creating new closure instance
void** clo13525 = alloc_clo(lam12792_fptr, 3);

//setting env list
clo13525[1] = kont12490;
clo13525[2] = proc;
clo13525[3] = a1239512644;
void* f1249112647 = encode_clo(clo13525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1249112647;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1239612646;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12794 = encode_clo(alloc_clo(lam12794_fptr, 0));

void* lam12796_fptr() // lam12796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12797 = arg_buffer[1];
//reading env and args
void* a1239512644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12797))[6];
//not do dummy comment
void* kont12490 = (decode_clo(env12797))[5];
//not do dummy comment
void* foldr = (decode_clo(env12797))[4];
//not do dummy comment
void* lst = (decode_clo(env12797))[3];
//not do dummy comment
void* proc = (decode_clo(env12797))[2];
//not do dummy comment
void* acc = (decode_clo(env12797))[1];

//creating new closure instance
void** clo13527 = alloc_clo(lam12794_fptr, 5);

//setting env list
clo13527[1] = acc;
clo13527[2] = proc;
clo13527[3] = kont12490;
clo13527[4] = a1239512644;
clo13527[5] = foldr;
void* f1249212645 = encode_clo(clo13527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1249212645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1239412642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12799))[7];
//not do dummy comment
void* kont12490 = (decode_clo(env12799))[6];
//not do dummy comment
void* car = (decode_clo(env12799))[5];
//not do dummy comment
void* foldr = (decode_clo(env12799))[4];
//not do dummy comment
void* lst = (decode_clo(env12799))[3];
//not do dummy comment
void* proc = (decode_clo(env12799))[2];
//not do dummy comment
void* acc = (decode_clo(env12799))[1];

//if-clause
bool if_guard13528 = is_true(a1239412642);
if(if_guard13528)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12490);
arg_buffer[2] = acc;
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
void** clo13530 = alloc_clo(lam12796_fptr, 6);

//setting env list
clo13530[1] = acc;
clo13530[2] = proc;
clo13530[3] = lst;
clo13530[4] = foldr;
clo13530[5] = kont12490;
clo13530[6] = cdr;
void* f1249312643 = encode_clo(clo13530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1249312643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12798 = encode_clo(alloc_clo(lam12798_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12800 = arg_buffer[1];
//reading env and args
void* kont12490 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13532 = alloc_clo(lam12798_fptr, 7);

//setting env list
clo13532[1] = acc;
clo13532[2] = proc;
clo13532[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo13532[4] = foldr;
clo13532[5] = car;
clo13532[6] = kont12490;
clo13532[7] = cdr;
void* f1249412641 = encode_clo(clo13532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1249412641;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam12801_fptr() // lam12801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12802 = arg_buffer[1];
//reading env and args
void* a1240112656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12495 = (decode_clo(env12802))[3];
//not do dummy comment
void* cons = (decode_clo(env12802))[2];
//not do dummy comment
void* a1239912652 = (decode_clo(env12802))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12495;
arg_buffer[3] = a1239912652;
arg_buffer[4] = a1240112656;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12801 = encode_clo(alloc_clo(lam12801_fptr, 0));

void* lam12803_fptr() // lam12803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12804 = arg_buffer[1];
//reading env and args
void* a1240012654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12495 = (decode_clo(env12804))[5];
//not do dummy comment
void* append = (decode_clo(env12804))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12804))[3];
//not do dummy comment
void* cons = (decode_clo(env12804))[2];
//not do dummy comment
void* a1239912652 = (decode_clo(env12804))[1];

//creating new closure instance
void** clo13534 = alloc_clo(lam12801_fptr, 3);

//setting env list
clo13534[1] = a1239912652;
clo13534[2] = cons;
clo13534[3] = kont12495;
void* f1249612655 = encode_clo(clo13534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1249612655;
arg_buffer[3] = a1240012654;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12803 = encode_clo(alloc_clo(lam12803_fptr, 0));

void* lam12805_fptr() // lam12805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12806 = arg_buffer[1];
//reading env and args
void* a1239912652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12806))[6];
//not do dummy comment
void* kont12495 = (decode_clo(env12806))[5];
//not do dummy comment
void* append = (decode_clo(env12806))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12806))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12806))[2];
//not do dummy comment
void* cons = (decode_clo(env12806))[1];

//creating new closure instance
void** clo13536 = alloc_clo(lam12803_fptr, 5);

//setting env list
clo13536[1] = a1239912652;
clo13536[2] = cons;
clo13536[3] = lst2;
clo13536[4] = append;
clo13536[5] = kont12495;
void* f1249712653 = encode_clo(clo13536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1249712653;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1239812650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12808))[7];
//not do dummy comment
void* kont12495 = (decode_clo(env12808))[6];
//not do dummy comment
void* append = (decode_clo(env12808))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12808))[4];
//not do dummy comment
void* cons = (decode_clo(env12808))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12808))[2];
//not do dummy comment
void* car = (decode_clo(env12808))[1];

//if-clause
bool if_guard13537 = is_true(a1239812650);
if(if_guard13537)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12495);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12495))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13539 = alloc_clo(lam12805_fptr, 6);

//setting env list
clo13539[1] = cons;
clo13539[2] = lst1;
clo13539[3] = lst2;
clo13539[4] = append;
clo13539[5] = kont12495;
clo13539[6] = cdr;
void* f1249812651 = encode_clo(clo13539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1249812651;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12807 = encode_clo(alloc_clo(lam12807_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12809 = arg_buffer[1];
//reading env and args
void* kont12495 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13541 = alloc_clo(lam12807_fptr, 7);

//setting env list
clo13541[1] = car;
clo13541[2] = lst1;
clo13541[3] = cons;
clo13541[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo13541[5] = append;
clo13541[6] = kont12495;
clo13541[7] = cdr;
void* f1249912649 = encode_clo(clo13541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1249912649;
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
void* _12810 = arg_buffer[1];
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

void* kont1250012657 = prim_car(lst);
void* lst12658 = prim_cdr(lst);
void* x1240212659 = apply_prim_hash(lst12658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1250012657);
arg_buffer[2] = x1240212659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1250012657))[0]);
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
void* _12811 = arg_buffer[1];
//reading env and args
void* kont12502 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1240312660 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12502);
arg_buffer[2] = x1240312660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12502))[0]);
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
void* _12812 = arg_buffer[1];
//reading env and args
void* kont12503 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1240412661 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12503);
arg_buffer[2] = x1240412661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12503))[0]);
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
void* _12813 = arg_buffer[1];
//reading env and args
void* kont12504 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1240512662 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12504);
arg_buffer[2] = x1240512662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12504))[0]);
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
void* _12814 = arg_buffer[1];
//reading env and args
void* kont12505 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1240612663 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12505);
arg_buffer[2] = x1240612663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12505))[0]);
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
void* _12816 = arg_buffer[1];
//reading env and args
void* kont12506 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar13542 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13542, "5", 10);
void* a1240712664 = encode_mpz(mpzvar13542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont12506;
arg_buffer[3] = a1240712664;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam12817_fptr() // lam12817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12818 = arg_buffer[1];
//reading env and args
void* x1240812666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12507 = (decode_clo(env12818))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12507);
arg_buffer[2] = x1240812666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12507))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12817 = encode_clo(alloc_clo(lam12817_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12819 = arg_buffer[1];
//reading env and args
void* kont12507 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo13544 = alloc_clo(lam12817_fptr, 1);

//setting env list
clo13544[1] = kont12507;
void* f1250812665 = encode_clo(clo13544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1250812665;
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

