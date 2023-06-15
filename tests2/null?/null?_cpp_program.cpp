#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.h"
using namespace std;

void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10546 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1047010502 = prim_car(lst);
void* lst10503 = prim_cdr(lst);
void* x1044710504 = apply_prim__u43(lst10503);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1047010502);
arg_buffer[2] = x1044710504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1047010502))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _10547 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1047210505 = prim_car(lst);
void* lst10506 = prim_cdr(lst);
void* x1044810507 = apply_prim__u45(lst10506);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1047210505);
arg_buffer[2] = x1044810507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1047210505))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _10548 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1047410508 = prim_car(lst);
void* lst10509 = prim_cdr(lst);
void* x1044910510 = apply_prim__u42(lst10509);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1047410508);
arg_buffer[2] = x1044910510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1047410508))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* modulo_fptr() // modulo 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10549 = arg_buffer[1];
//reading env and args
void* kont10476 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1045010511 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10476);
arg_buffer[2] = x1045010511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10476))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void* _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10550 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1047710512 = prim_car(lst);
void* lst10513 = prim_cdr(lst);
void* x1045110514 = apply_prim__u61(lst10513);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1047710512);
arg_buffer[2] = x1045110514;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1047710512))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _10551 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1047910515 = prim_car(lst);
void* lst10516 = prim_cdr(lst);
void* x1045210517 = apply_prim__u62(lst10516);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1047910515);
arg_buffer[2] = x1045210517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1047910515))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _10552 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1048110518 = prim_car(lst);
void* lst10519 = prim_cdr(lst);
void* x1045310520 = apply_prim__u60(lst10519);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1048110518);
arg_buffer[2] = x1045310520;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1048110518))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _10553 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1048310521 = prim_car(lst);
void* lst10522 = prim_cdr(lst);
void* x1045410523 = apply_prim__u60_u61(lst10522);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1048310521);
arg_buffer[2] = x1045410523;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1048310521))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _10554 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont1048510524 = prim_car(lst);
void* lst10525 = prim_cdr(lst);
void* x1045510526 = apply_prim__u62_u61(lst10525);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1048510524);
arg_buffer[2] = x1045510526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1048510524))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void* null_u63_fptr() // null? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10555 = arg_buffer[1];
//reading env and args
void* kont10487 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1045610527 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10487);
arg_buffer[2] = x1045610527;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10487))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10556 = arg_buffer[1];
//reading env and args
void* kont10488 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1045710528 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10488);
arg_buffer[2] = x1045710528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10488))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* eq_u63_fptr() // eq? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10557 = arg_buffer[1];
//reading env and args
void* kont10489 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1045810529 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10489);
arg_buffer[2] = x1045810529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10489))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10558 = arg_buffer[1];
//reading env and args
void* kont10490 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1045910530 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10490);
arg_buffer[2] = x1045910530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10490))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void* car_fptr() // car 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10559 = arg_buffer[1];
//reading env and args
void* kont10491 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1046010531 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10491);
arg_buffer[2] = x1046010531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10491))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10560 = arg_buffer[1];
//reading env and args
void* kont10492 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1046110532 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10492);
arg_buffer[2] = x1046110532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10492))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam10561_fptr() // lam10561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10562 = arg_buffer[1];
//reading env and args
void* a1046410536 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1046210533 = (decode_clo(env10562))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env10562))[2];
//not do dummy comment
void* kont10493 = (decode_clo(env10562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10493;
arg_buffer[3] = a1046210533;
arg_buffer[4] = a1046410536;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10561 = encode_clo(alloc_clo(lam10561_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10565 = arg_buffer[1];
//reading env and args
void* kont10493 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10877 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10877, "0", 10);;
void* a1046210533 = reinterpret_cast<void *>(encode_mpz(mpzvar10877));
mpz_t* mpzvar10878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10878, "2", 10);;
void* a1046310534 = reinterpret_cast<void *>(encode_mpz(mpzvar10878));

//creating new closure instance
void** clo10880 = alloc_clo(lam10561_fptr, 3);

//setting env list
clo10880[1] = kont10493;
clo10880[2] = equal_u63;
clo10880[3] = a1046210533;
void* f1049410535 = encode_clo(clo10880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1049410535;
arg_buffer[3] = x;
arg_buffer[4] = a1046310534;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam10566_fptr() // lam10566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10567 = arg_buffer[1];
//reading env and args
void* a1046710540 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10495 = (decode_clo(env10567))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env10567))[2];
//not do dummy comment
void* a1046510537 = (decode_clo(env10567))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10495;
arg_buffer[3] = a1046510537;
arg_buffer[4] = a1046710540;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10566 = encode_clo(alloc_clo(lam10566_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10570 = arg_buffer[1];
//reading env and args
void* kont10495 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10881, "1", 10);;
void* a1046510537 = reinterpret_cast<void *>(encode_mpz(mpzvar10881));
mpz_t* mpzvar10882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10882, "2", 10);;
void* a1046610538 = reinterpret_cast<void *>(encode_mpz(mpzvar10882));

//creating new closure instance
void** clo10884 = alloc_clo(lam10566_fptr, 3);

//setting env list
clo10884[1] = a1046510537;
clo10884[2] = equal_u63;
clo10884[3] = kont10495;
void* f1049610539 = encode_clo(clo10884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1049610539;
arg_buffer[3] = x;
arg_buffer[4] = a1046610538;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _10571 = arg_buffer[1];
//building cons cell

void* x = encode_null();
for(int i = numArgs; i >= 2; i--)
{
x = prim_cons(arg_buffer[i], x);

}

void* kont1049710541 = prim_car(x);
void* x10542 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1049710541);
arg_buffer[2] = x10542;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1049710541))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10573 = arg_buffer[1];
//reading env and args
void* kont10499 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar10885 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10885, "1", 10);;
void* a1046810543 = reinterpret_cast<void *>(encode_mpz(mpzvar10885));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = kont10499;
arg_buffer[3] = a1046810543;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam10574_fptr() // lam10574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10575 = arg_buffer[1];
//reading env and args
void* x1046910545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10500 = (decode_clo(env10575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10500);
arg_buffer[2] = x1046910545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10500))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10574 = encode_clo(alloc_clo(lam10574_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10576 = arg_buffer[1];
//reading env and args
void* kont10500 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo10887 = alloc_clo(lam10574_fptr, 1);

//setting env list
clo10887[1] = kont10500;
void* f1050110544 = encode_clo(clo10887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1050110544;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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

