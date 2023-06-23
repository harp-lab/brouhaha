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
void* _105555 = arg_buffer[1];
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

void* kont105291105392 = prim_car(lst);
void* lst105393 = prim_cdr(lst);
void* x105202105394 = apply_prim__u43(lst105393);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105291105392);
arg_buffer[2] = x105202105394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105291105392))[0]);
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
void* _105556 = arg_buffer[1];
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

void* kont105293105395 = prim_car(lst);
void* lst105396 = prim_cdr(lst);
void* x105203105397 = apply_prim__u45(lst105396);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105293105395);
arg_buffer[2] = x105203105397;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105293105395))[0]);
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
void* _105557 = arg_buffer[1];
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

void* kont105295105398 = prim_car(lst);
void* lst105399 = prim_cdr(lst);
void* x105204105400 = apply_prim__u42(lst105399);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105295105398);
arg_buffer[2] = x105204105400;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105295105398))[0]);
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
void* _105558 = arg_buffer[1];
//reading env and args
void* kont105297 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x105205105401 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105297);
arg_buffer[2] = x105205105401;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105297))[0]);
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
void* _105559 = arg_buffer[1];
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

void* kont105298105402 = prim_car(lst);
void* lst105403 = prim_cdr(lst);
void* x105206105404 = apply_prim__u47(lst105403);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105298105402);
arg_buffer[2] = x105206105404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105298105402))[0]);
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
void* _105560 = arg_buffer[1];
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

void* kont105300105405 = prim_car(lst);
void* lst105406 = prim_cdr(lst);
void* x105207105407 = apply_prim__u61(lst105406);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105300105405);
arg_buffer[2] = x105207105407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105300105405))[0]);
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
void* _105561 = arg_buffer[1];
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

void* kont105302105408 = prim_car(lst);
void* lst105409 = prim_cdr(lst);
void* x105208105410 = apply_prim__u62(lst105409);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105302105408);
arg_buffer[2] = x105208105410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105302105408))[0]);
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
void* _105562 = arg_buffer[1];
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

void* kont105304105411 = prim_car(lst);
void* lst105412 = prim_cdr(lst);
void* x105209105413 = apply_prim__u60(lst105412);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105304105411);
arg_buffer[2] = x105209105413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105304105411))[0]);
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
void* _105563 = arg_buffer[1];
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

void* kont105306105414 = prim_car(lst);
void* lst105415 = prim_cdr(lst);
void* x105210105416 = apply_prim__u60_u61(lst105415);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105306105414);
arg_buffer[2] = x105210105416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105306105414))[0]);
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
void* _105564 = arg_buffer[1];
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

void* kont105308105417 = prim_car(lst);
void* lst105418 = prim_cdr(lst);
void* x105211105419 = apply_prim__u62_u61(lst105418);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105308105417);
arg_buffer[2] = x105211105419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105308105417))[0]);
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
void* _105565 = arg_buffer[1];
//reading env and args
void* kont105310 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x105212105420 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105310);
arg_buffer[2] = x105212105420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105310))[0]);
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
void* _105566 = arg_buffer[1];
//reading env and args
void* kont105311 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x105213105421 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105311);
arg_buffer[2] = x105213105421;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105311))[0]);
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
void* _105567 = arg_buffer[1];
//reading env and args
void* kont105312 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x105214105422 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105312);
arg_buffer[2] = x105214105422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105312))[0]);
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
void* _105568 = arg_buffer[1];
//reading env and args
void* kont105313 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x105215105423 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105313);
arg_buffer[2] = x105215105423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105313))[0]);
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
void* _105569 = arg_buffer[1];
//reading env and args
void* kont105314 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x105216105424 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105314);
arg_buffer[2] = x105216105424;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105314))[0]);
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
void* _105570 = arg_buffer[1];
//reading env and args
void* kont105315 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x105217105425 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105315);
arg_buffer[2] = x105217105425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105315))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam105571_fptr() // lam105571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105572 = arg_buffer[1];
//reading env and args
void* a105220105429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105316 = (decode_clo(env105572))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env105572))[2];
//not do dummy comment
void* a105218105426 = (decode_clo(env105572))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont105316;
arg_buffer[3] = a105218105426;
arg_buffer[4] = a105220105429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105571 = encode_clo(alloc_clo(lam105571_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105575 = arg_buffer[1];
//reading env and args
void* kont105316 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar110921 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110921, "0", 10);
void* a105218105426 = encode_mpz(mpzvar110921);
mpz_t* mpzvar110922 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110922, "2", 10);
void* a105219105427 = encode_mpz(mpzvar110922);

//creating new closure instance
void** clo110924 = alloc_clo(lam105571_fptr, 3);

//setting env list
clo110924[1] = a105218105426;
clo110924[2] = equal_u63;
clo110924[3] = kont105316;
void* f105317105428 = encode_clo(clo110924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f105317105428;
arg_buffer[3] = x;
arg_buffer[4] = a105219105427;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam105576_fptr() // lam105576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105577 = arg_buffer[1];
//reading env and args
void* a105223105433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env105577))[3];
//not do dummy comment
void* kont105318 = (decode_clo(env105577))[2];
//not do dummy comment
void* a105221105430 = (decode_clo(env105577))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont105318;
arg_buffer[3] = a105221105430;
arg_buffer[4] = a105223105433;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105576 = encode_clo(alloc_clo(lam105576_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105580 = arg_buffer[1];
//reading env and args
void* kont105318 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar110925 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110925, "1", 10);
void* a105221105430 = encode_mpz(mpzvar110925);
mpz_t* mpzvar110926 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110926, "2", 10);
void* a105222105431 = encode_mpz(mpzvar110926);

//creating new closure instance
void** clo110928 = alloc_clo(lam105576_fptr, 3);

//setting env list
clo110928[1] = a105221105430;
clo110928[2] = kont105318;
clo110928[3] = equal_u63;
void* f105319105432 = encode_clo(clo110928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f105319105432;
arg_buffer[3] = x;
arg_buffer[4] = a105222105431;
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
void* _105581 = arg_buffer[1];
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

void* kont105320105434 = prim_car(x);
void* x105435 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105320105434);
arg_buffer[2] = x105435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105320105434))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam105584_fptr() // lam105584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105585 = arg_buffer[1];
//reading env and args
void* a105229105445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105322 = (decode_clo(env105585))[3];
//not do dummy comment
void* x = (decode_clo(env105585))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env105585))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont105322;
arg_buffer[3] = x;
arg_buffer[4] = a105229105445;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105584 = encode_clo(alloc_clo(lam105584_fptr, 0));

void* lam105586_fptr() // lam105586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105587 = arg_buffer[1];
//reading env and args
void* a105227105442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105587))[5];
//not do dummy comment
void* lst = (decode_clo(env105587))[4];
//not do dummy comment
void* kont105322 = (decode_clo(env105587))[3];
//not do dummy comment
void* x = (decode_clo(env105587))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env105587))[1];

//if-clause
bool if_guard110929 = is_true(a105227105442);
if(if_guard110929)
{
void* x105228105443 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105322);
arg_buffer[2] = x105228105443;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105322))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110931 = alloc_clo(lam105584_fptr, 3);

//setting env list
clo110931[1] = member_u63;
clo110931[2] = x;
clo110931[3] = kont105322;
void* f105323105444 = encode_clo(clo110931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105323105444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105586 = encode_clo(alloc_clo(lam105586_fptr, 0));

void* lam105588_fptr() // lam105588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105589 = arg_buffer[1];
//reading env and args
void* a105226105440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105589))[6];
//not do dummy comment
void* lst = (decode_clo(env105589))[5];
//not do dummy comment
void* kont105322 = (decode_clo(env105589))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env105589))[3];
//not do dummy comment
void* x = (decode_clo(env105589))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env105589))[1];

//creating new closure instance
void** clo110933 = alloc_clo(lam105586_fptr, 5);

//setting env list
clo110933[1] = member_u63;
clo110933[2] = x;
clo110933[3] = kont105322;
clo110933[4] = lst;
clo110933[5] = cdr;
void* f105324105441 = encode_clo(clo110933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f105324105441;
arg_buffer[3] = a105226105440;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105588 = encode_clo(alloc_clo(lam105588_fptr, 0));

void* lam105590_fptr() // lam105590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105591 = arg_buffer[1];
//reading env and args
void* a105224105437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105591))[7];
//not do dummy comment
void* lst = (decode_clo(env105591))[6];
//not do dummy comment
void* kont105322 = (decode_clo(env105591))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env105591))[4];
//not do dummy comment
void* x = (decode_clo(env105591))[3];
//not do dummy comment
void* car = (decode_clo(env105591))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env105591))[1];

//if-clause
bool if_guard110934 = is_true(a105224105437);
if(if_guard110934)
{
void* x105225105438 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105322);
arg_buffer[2] = x105225105438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105322))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110936 = alloc_clo(lam105588_fptr, 6);

//setting env list
clo110936[1] = member_u63;
clo110936[2] = x;
clo110936[3] = equal_u63;
clo110936[4] = kont105322;
clo110936[5] = lst;
clo110936[6] = cdr;
void* f105325105439 = encode_clo(clo110936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105325105439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105590 = encode_clo(alloc_clo(lam105590_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105592 = arg_buffer[1];
//reading env and args
void* kont105322 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110938 = alloc_clo(lam105590_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo110938[1] = member_u63;
clo110938[2] = car;
clo110938[3] = x;
clo110938[4] = equal_u63;
clo110938[5] = kont105322;
clo110938[6] = lst;
clo110938[7] = cdr;
void* f105326105436 = encode_clo(clo110938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105326105436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam105593_fptr() // lam105593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105594 = arg_buffer[1];
//reading env and args
void* a105233105453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105232105451 = (decode_clo(env105594))[4];
//not do dummy comment
void* fun = (decode_clo(env105594))[3];
//not do dummy comment
void* kont105327 = (decode_clo(env105594))[2];
//not do dummy comment
void* foldl = (decode_clo(env105594))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont105327;
arg_buffer[3] = fun;
arg_buffer[4] = a105232105451;
arg_buffer[5] = a105233105453;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105593 = encode_clo(alloc_clo(lam105593_fptr, 0));

void* lam105595_fptr() // lam105595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105596 = arg_buffer[1];
//reading env and args
void* a105232105451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105596))[5];
//not do dummy comment
void* lst = (decode_clo(env105596))[4];
//not do dummy comment
void* fun = (decode_clo(env105596))[3];
//not do dummy comment
void* kont105327 = (decode_clo(env105596))[2];
//not do dummy comment
void* foldl = (decode_clo(env105596))[1];

//creating new closure instance
void** clo110940 = alloc_clo(lam105593_fptr, 4);

//setting env list
clo110940[1] = foldl;
clo110940[2] = kont105327;
clo110940[3] = fun;
clo110940[4] = a105232105451;
void* f105328105452 = encode_clo(clo110940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105328105452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105595 = encode_clo(alloc_clo(lam105595_fptr, 0));

void* lam105597_fptr() // lam105597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105598 = arg_buffer[1];
//reading env and args
void* a105231105449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105598))[6];
//not do dummy comment
void* lst = (decode_clo(env105598))[5];
//not do dummy comment
void* fun = (decode_clo(env105598))[4];
//not do dummy comment
void* foldl = (decode_clo(env105598))[3];
//not do dummy comment
void* acc = (decode_clo(env105598))[2];
//not do dummy comment
void* kont105327 = (decode_clo(env105598))[1];

//creating new closure instance
void** clo110942 = alloc_clo(lam105595_fptr, 5);

//setting env list
clo110942[1] = foldl;
clo110942[2] = kont105327;
clo110942[3] = fun;
clo110942[4] = lst;
clo110942[5] = cdr;
void* f105329105450 = encode_clo(clo110942);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f105329105450;
arg_buffer[3] = a105231105449;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105597 = encode_clo(alloc_clo(lam105597_fptr, 0));

void* lam105599_fptr() // lam105599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105600 = arg_buffer[1];
//reading env and args
void* a105230105447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105600))[7];
//not do dummy comment
void* lst = (decode_clo(env105600))[6];
//not do dummy comment
void* fun = (decode_clo(env105600))[5];
//not do dummy comment
void* car = (decode_clo(env105600))[4];
//not do dummy comment
void* foldl = (decode_clo(env105600))[3];
//not do dummy comment
void* acc = (decode_clo(env105600))[2];
//not do dummy comment
void* kont105327 = (decode_clo(env105600))[1];

//if-clause
bool if_guard110943 = is_true(a105230105447);
if(if_guard110943)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105327);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105327))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110945 = alloc_clo(lam105597_fptr, 6);

//setting env list
clo110945[1] = kont105327;
clo110945[2] = acc;
clo110945[3] = foldl;
clo110945[4] = fun;
clo110945[5] = lst;
clo110945[6] = cdr;
void* f105330105448 = encode_clo(clo110945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105330105448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105599 = encode_clo(alloc_clo(lam105599_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105601 = arg_buffer[1];
//reading env and args
void* kont105327 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo110947 = alloc_clo(lam105599_fptr, 7);

//setting env list
clo110947[1] = kont105327;
clo110947[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo110947[3] = foldl;
clo110947[4] = car;
clo110947[5] = fun;
clo110947[6] = lst;
clo110947[7] = cdr;
void* f105331105446 = encode_clo(clo110947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105331105446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam105602_fptr() // lam105602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105603 = arg_buffer[1];
//reading env and args
void* a105237105461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105332 = (decode_clo(env105603))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env105603))[2];
//not do dummy comment
void* a105235105457 = (decode_clo(env105603))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont105332;
arg_buffer[3] = a105235105457;
arg_buffer[4] = a105237105461;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105602 = encode_clo(alloc_clo(lam105602_fptr, 0));

void* lam105604_fptr() // lam105604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105605 = arg_buffer[1];
//reading env and args
void* a105236105459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105332 = (decode_clo(env105605))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env105605))[4];
//not do dummy comment
void* lst2 = (decode_clo(env105605))[3];
//not do dummy comment
void* a105235105457 = (decode_clo(env105605))[2];
//not do dummy comment
void* cons = (decode_clo(env105605))[1];

//creating new closure instance
void** clo110949 = alloc_clo(lam105602_fptr, 3);

//setting env list
clo110949[1] = a105235105457;
clo110949[2] = reverse_u45helper;
clo110949[3] = kont105332;
void* f105333105460 = encode_clo(clo110949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f105333105460;
arg_buffer[3] = a105236105459;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105604 = encode_clo(alloc_clo(lam105604_fptr, 0));

void* lam105606_fptr() // lam105606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105607 = arg_buffer[1];
//reading env and args
void* a105235105457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105332 = (decode_clo(env105607))[6];
//not do dummy comment
void* lst = (decode_clo(env105607))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env105607))[4];
//not do dummy comment
void* lst2 = (decode_clo(env105607))[3];
//not do dummy comment
void* car = (decode_clo(env105607))[2];
//not do dummy comment
void* cons = (decode_clo(env105607))[1];

//creating new closure instance
void** clo110951 = alloc_clo(lam105604_fptr, 5);

//setting env list
clo110951[1] = cons;
clo110951[2] = a105235105457;
clo110951[3] = lst2;
clo110951[4] = reverse_u45helper;
clo110951[5] = kont105332;
void* f105334105458 = encode_clo(clo110951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105334105458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105606 = encode_clo(alloc_clo(lam105606_fptr, 0));

void* lam105608_fptr() // lam105608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105609 = arg_buffer[1];
//reading env and args
void* a105234105455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env105609))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env105609))[6];
//not do dummy comment
void* lst2 = (decode_clo(env105609))[5];
//not do dummy comment
void* car = (decode_clo(env105609))[4];
//not do dummy comment
void* cons = (decode_clo(env105609))[3];
//not do dummy comment
void* kont105332 = (decode_clo(env105609))[2];
//not do dummy comment
void* cdr = (decode_clo(env105609))[1];

//if-clause
bool if_guard110952 = is_true(a105234105455);
if(if_guard110952)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105332);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105332))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110954 = alloc_clo(lam105606_fptr, 6);

//setting env list
clo110954[1] = cons;
clo110954[2] = car;
clo110954[3] = lst2;
clo110954[4] = reverse_u45helper;
clo110954[5] = lst;
clo110954[6] = kont105332;
void* f105335105456 = encode_clo(clo110954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105335105456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105608 = encode_clo(alloc_clo(lam105608_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105610 = arg_buffer[1];
//reading env and args
void* kont105332 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110956 = alloc_clo(lam105608_fptr, 7);

//setting env list
clo110956[1] = cdr;
clo110956[2] = kont105332;
clo110956[3] = cons;
clo110956[4] = car;
clo110956[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo110956[6] = reverse_u45helper;
clo110956[7] = lst;
void* f105336105454 = encode_clo(clo110956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105336105454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam105611_fptr() // lam105611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105612 = arg_buffer[1];
//reading env and args
void* a105238105463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env105612))[3];
//not do dummy comment
void* kont105337 = (decode_clo(env105612))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env105612))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont105337;
arg_buffer[3] = lst;
arg_buffer[4] = a105238105463;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105611 = encode_clo(alloc_clo(lam105611_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105613 = arg_buffer[1];
//reading env and args
void* kont105337 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo110958 = alloc_clo(lam105611_fptr, 3);

//setting env list
clo110958[1] = reverse_u45helper;
clo110958[2] = kont105337;
clo110958[3] = lst;
void* f105338105462 = encode_clo(clo110958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f105338105462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam105614_fptr() // lam105614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105615 = arg_buffer[1];
//reading env and args
void* x105241105468 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105339 = (decode_clo(env105615))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105339);
arg_buffer[2] = x105241105468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105339))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105614 = encode_clo(alloc_clo(lam105614_fptr, 0));

void* lam105616_fptr() // lam105616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105617 = arg_buffer[1];
//reading env and args
void* a105246105477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105339 = (decode_clo(env105617))[4];
//not do dummy comment
void* a105242105470 = (decode_clo(env105617))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env105617))[2];
//not do dummy comment
void* a105244105473 = (decode_clo(env105617))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont105339;
arg_buffer[3] = a105242105470;
arg_buffer[4] = a105244105473;
arg_buffer[5] = a105246105477;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105616 = encode_clo(alloc_clo(lam105616_fptr, 0));

void* lam105618_fptr() // lam105618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105619 = arg_buffer[1];
//reading env and args
void* a105245105475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105339 = (decode_clo(env105619))[6];
//not do dummy comment
void* a105242105470 = (decode_clo(env105619))[5];
//not do dummy comment
void* a105244105473 = (decode_clo(env105619))[4];
//not do dummy comment
void* cons = (decode_clo(env105619))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env105619))[2];
//not do dummy comment
void* lst2 = (decode_clo(env105619))[1];

//creating new closure instance
void** clo110960 = alloc_clo(lam105616_fptr, 4);

//setting env list
clo110960[1] = a105244105473;
clo110960[2] = take_u45helper;
clo110960[3] = a105242105470;
clo110960[4] = kont105339;
void* f105341105476 = encode_clo(clo110960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f105341105476;
arg_buffer[3] = a105245105475;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105618 = encode_clo(alloc_clo(lam105618_fptr, 0));

void* lam105620_fptr() // lam105620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105621 = arg_buffer[1];
//reading env and args
void* a105244105473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env105621))[7];
//not do dummy comment
void* kont105339 = (decode_clo(env105621))[6];
//not do dummy comment
void* a105242105470 = (decode_clo(env105621))[5];
//not do dummy comment
void* car = (decode_clo(env105621))[4];
//not do dummy comment
void* cons = (decode_clo(env105621))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env105621))[2];
//not do dummy comment
void* lst2 = (decode_clo(env105621))[1];

//creating new closure instance
void** clo110962 = alloc_clo(lam105618_fptr, 6);

//setting env list
clo110962[1] = lst2;
clo110962[2] = take_u45helper;
clo110962[3] = cons;
clo110962[4] = a105244105473;
clo110962[5] = a105242105470;
clo110962[6] = kont105339;
void* f105342105474 = encode_clo(clo110962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105342105474;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105620 = encode_clo(alloc_clo(lam105620_fptr, 0));

void* lam105623_fptr() // lam105623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105624 = arg_buffer[1];
//reading env and args
void* a105242105470 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env105624))[8];
//not do dummy comment
void* kont105339 = (decode_clo(env105624))[7];
//not do dummy comment
void* cons = (decode_clo(env105624))[6];
//not do dummy comment
void* _u45 = (decode_clo(env105624))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env105624))[4];
//not do dummy comment
void* lst2 = (decode_clo(env105624))[3];
//not do dummy comment
void* n = (decode_clo(env105624))[2];
//not do dummy comment
void* car = (decode_clo(env105624))[1];
mpz_t* mpzvar110963 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110963, "1", 10);
void* a105243105471 = encode_mpz(mpzvar110963);

//creating new closure instance
void** clo110965 = alloc_clo(lam105620_fptr, 7);

//setting env list
clo110965[1] = lst2;
clo110965[2] = take_u45helper;
clo110965[3] = cons;
clo110965[4] = car;
clo110965[5] = a105242105470;
clo110965[6] = kont105339;
clo110965[7] = lst;
void* f105343105472 = encode_clo(clo110965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f105343105472;
arg_buffer[3] = n;
arg_buffer[4] = a105243105471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105623 = encode_clo(alloc_clo(lam105623_fptr, 0));

void* lam105625_fptr() // lam105625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105626 = arg_buffer[1];
//reading env and args
void* a105240105466 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105626))[10];
//not do dummy comment
void* lst = (decode_clo(env105626))[9];
//not do dummy comment
void* cons = (decode_clo(env105626))[8];
//not do dummy comment
void* _u45 = (decode_clo(env105626))[7];
//not do dummy comment
void* kont105339 = (decode_clo(env105626))[6];
//not do dummy comment
void* reverse = (decode_clo(env105626))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env105626))[4];
//not do dummy comment
void* lst2 = (decode_clo(env105626))[3];
//not do dummy comment
void* n = (decode_clo(env105626))[2];
//not do dummy comment
void* car = (decode_clo(env105626))[1];

//if-clause
bool if_guard110966 = is_true(a105240105466);
if(if_guard110966)
{

//creating new closure instance
void** clo110968 = alloc_clo(lam105614_fptr, 1);

//setting env list
clo110968[1] = kont105339;
void* f105340105467 = encode_clo(clo110968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f105340105467;
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
void** clo110970 = alloc_clo(lam105623_fptr, 8);

//setting env list
clo110970[1] = car;
clo110970[2] = n;
clo110970[3] = lst2;
clo110970[4] = take_u45helper;
clo110970[5] = _u45;
clo110970[6] = cons;
clo110970[7] = kont105339;
clo110970[8] = lst;
void* f105344105469 = encode_clo(clo110970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105344105469;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105625 = encode_clo(alloc_clo(lam105625_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105628 = arg_buffer[1];
//reading env and args
void* kont105339 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar110971 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110971, "0", 10);
void* a105239105464 = encode_mpz(mpzvar110971);

//creating new closure instance
void** clo110973 = alloc_clo(lam105625_fptr, 10);

//setting env list
clo110973[1] = car;
clo110973[2] = n;
clo110973[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo110973[4] = take_u45helper;
clo110973[5] = reverse;
clo110973[6] = kont105339;
clo110973[7] = _u45;
clo110973[8] = cons;
clo110973[9] = lst;
clo110973[10] = cdr;
void* f105345105465 = encode_clo(clo110973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f105345105465;
arg_buffer[3] = n;
arg_buffer[4] = a105239105464;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam105629_fptr() // lam105629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105630 = arg_buffer[1];
//reading env and args
void* a105247105479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env105630))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env105630))[3];
//not do dummy comment
void* n = (decode_clo(env105630))[2];
//not do dummy comment
void* kont105346 = (decode_clo(env105630))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont105346;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a105247105479;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105629 = encode_clo(alloc_clo(lam105629_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105631 = arg_buffer[1];
//reading env and args
void* kont105346 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110975 = alloc_clo(lam105629_fptr, 4);

//setting env list
clo110975[1] = kont105346;
clo110975[2] = n;
clo110975[3] = take_u45helper;
clo110975[4] = lst;
void* f105347105478 = encode_clo(clo110975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f105347105478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam105633_fptr() // lam105633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105634 = arg_buffer[1];
//reading env and args
void* a105252105487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105348 = (decode_clo(env105634))[3];
//not do dummy comment
void* a105250105483 = (decode_clo(env105634))[2];
//not do dummy comment
void* _u43 = (decode_clo(env105634))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont105348;
arg_buffer[3] = a105250105483;
arg_buffer[4] = a105252105487;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105633 = encode_clo(alloc_clo(lam105633_fptr, 0));

void* lam105635_fptr() // lam105635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105636 = arg_buffer[1];
//reading env and args
void* a105251105485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105348 = (decode_clo(env105636))[4];
//not do dummy comment
void* length = (decode_clo(env105636))[3];
//not do dummy comment
void* a105250105483 = (decode_clo(env105636))[2];
//not do dummy comment
void* _u43 = (decode_clo(env105636))[1];

//creating new closure instance
void** clo110977 = alloc_clo(lam105633_fptr, 3);

//setting env list
clo110977[1] = _u43;
clo110977[2] = a105250105483;
clo110977[3] = kont105348;
void* f105349105486 = encode_clo(clo110977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f105349105486;
arg_buffer[3] = a105251105485;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105635 = encode_clo(alloc_clo(lam105635_fptr, 0));

void* lam105638_fptr() // lam105638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105639 = arg_buffer[1];
//reading env and args
void* a105248105481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env105639))[5];
//not do dummy comment
void* length = (decode_clo(env105639))[4];
//not do dummy comment
void* _u43 = (decode_clo(env105639))[3];
//not do dummy comment
void* kont105348 = (decode_clo(env105639))[2];
//not do dummy comment
void* cdr = (decode_clo(env105639))[1];

//if-clause
bool if_guard110978 = is_true(a105248105481);
if(if_guard110978)
{
mpz_t* mpzvar110979 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110979, "0", 10);
void* x105249105482 = encode_mpz(mpzvar110979);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105348);
arg_buffer[2] = x105249105482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105348))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar110980 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110980, "1", 10);
void* a105250105483 = encode_mpz(mpzvar110980);

//creating new closure instance
void** clo110982 = alloc_clo(lam105635_fptr, 4);

//setting env list
clo110982[1] = _u43;
clo110982[2] = a105250105483;
clo110982[3] = length;
clo110982[4] = kont105348;
void* f105350105484 = encode_clo(clo110982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105350105484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105638 = encode_clo(alloc_clo(lam105638_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105640 = arg_buffer[1];
//reading env and args
void* kont105348 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo110984 = alloc_clo(lam105638_fptr, 5);

//setting env list
clo110984[1] = cdr;
clo110984[2] = kont105348;
clo110984[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo110984[4] = length;
clo110984[5] = lst;
void* f105351105480 = encode_clo(clo110984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105351105480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam105641_fptr() // lam105641 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105642 = arg_buffer[1];
//reading env and args
void* x105254105491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105352 = (decode_clo(env105642))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105352);
arg_buffer[2] = x105254105491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105352))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105641 = encode_clo(alloc_clo(lam105641_fptr, 0));

void* lam105643_fptr() // lam105643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105644 = arg_buffer[1];
//reading env and args
void* a105258105499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105256105495 = (decode_clo(env105644))[3];
//not do dummy comment
void* kont105352 = (decode_clo(env105644))[2];
//not do dummy comment
void* cons = (decode_clo(env105644))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont105352;
arg_buffer[3] = a105256105495;
arg_buffer[4] = a105258105499;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105643 = encode_clo(alloc_clo(lam105643_fptr, 0));

void* lam105645_fptr() // lam105645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105646 = arg_buffer[1];
//reading env and args
void* a105257105497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105256105495 = (decode_clo(env105646))[5];
//not do dummy comment
void* kont105352 = (decode_clo(env105646))[4];
//not do dummy comment
void* map = (decode_clo(env105646))[3];
//not do dummy comment
void* proc = (decode_clo(env105646))[2];
//not do dummy comment
void* cons = (decode_clo(env105646))[1];

//creating new closure instance
void** clo110986 = alloc_clo(lam105643_fptr, 3);

//setting env list
clo110986[1] = cons;
clo110986[2] = kont105352;
clo110986[3] = a105256105495;
void* f105354105498 = encode_clo(clo110986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f105354105498;
arg_buffer[3] = proc;
arg_buffer[4] = a105257105497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105645 = encode_clo(alloc_clo(lam105645_fptr, 0));

void* lam105647_fptr() // lam105647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105648 = arg_buffer[1];
//reading env and args
void* a105256105495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105648))[6];
//not do dummy comment
void* map = (decode_clo(env105648))[5];
//not do dummy comment
void* proc = (decode_clo(env105648))[4];
//not do dummy comment
void* cons = (decode_clo(env105648))[3];
//not do dummy comment
void* lst = (decode_clo(env105648))[2];
//not do dummy comment
void* kont105352 = (decode_clo(env105648))[1];

//creating new closure instance
void** clo110988 = alloc_clo(lam105645_fptr, 5);

//setting env list
clo110988[1] = cons;
clo110988[2] = proc;
clo110988[3] = map;
clo110988[4] = kont105352;
clo110988[5] = a105256105495;
void* f105355105496 = encode_clo(clo110988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105355105496;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105647 = encode_clo(alloc_clo(lam105647_fptr, 0));

void* lam105649_fptr() // lam105649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105650 = arg_buffer[1];
//reading env and args
void* a105255105493 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105650))[6];
//not do dummy comment
void* map = (decode_clo(env105650))[5];
//not do dummy comment
void* proc = (decode_clo(env105650))[4];
//not do dummy comment
void* cons = (decode_clo(env105650))[3];
//not do dummy comment
void* lst = (decode_clo(env105650))[2];
//not do dummy comment
void* kont105352 = (decode_clo(env105650))[1];

//creating new closure instance
void** clo110990 = alloc_clo(lam105647_fptr, 6);

//setting env list
clo110990[1] = kont105352;
clo110990[2] = lst;
clo110990[3] = cons;
clo110990[4] = proc;
clo110990[5] = map;
clo110990[6] = cdr;
void* f105356105494 = encode_clo(clo110990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f105356105494;
arg_buffer[3] = a105255105493;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105649 = encode_clo(alloc_clo(lam105649_fptr, 0));

void* lam105651_fptr() // lam105651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105652 = arg_buffer[1];
//reading env and args
void* a105253105489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env105652))[8];
//not do dummy comment
void* proc = (decode_clo(env105652))[7];
//not do dummy comment
void* car = (decode_clo(env105652))[6];
//not do dummy comment
void* cons = (decode_clo(env105652))[5];
//not do dummy comment
void* list = (decode_clo(env105652))[4];
//not do dummy comment
void* cdr = (decode_clo(env105652))[3];
//not do dummy comment
void* lst = (decode_clo(env105652))[2];
//not do dummy comment
void* kont105352 = (decode_clo(env105652))[1];

//if-clause
bool if_guard110991 = is_true(a105253105489);
if(if_guard110991)
{

//creating new closure instance
void** clo110993 = alloc_clo(lam105641_fptr, 1);

//setting env list
clo110993[1] = kont105352;
void* f105353105490 = encode_clo(clo110993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f105353105490;
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
void** clo110995 = alloc_clo(lam105649_fptr, 6);

//setting env list
clo110995[1] = kont105352;
clo110995[2] = lst;
clo110995[3] = cons;
clo110995[4] = proc;
clo110995[5] = map;
clo110995[6] = cdr;
void* f105357105492 = encode_clo(clo110995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105357105492;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105651 = encode_clo(alloc_clo(lam105651_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105653 = arg_buffer[1];
//reading env and args
void* kont105352 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110997 = alloc_clo(lam105651_fptr, 8);

//setting env list
clo110997[1] = kont105352;
clo110997[2] = lst;
clo110997[3] = cdr;
clo110997[4] = list;
clo110997[5] = cons;
clo110997[6] = car;
clo110997[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo110997[8] = map;
void* f105358105488 = encode_clo(clo110997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105358105488;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam105654_fptr() // lam105654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105655 = arg_buffer[1];
//reading env and args
void* x105260105503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105359 = (decode_clo(env105655))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105359);
arg_buffer[2] = x105260105503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105359))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105654 = encode_clo(alloc_clo(lam105654_fptr, 0));

void* lam105656_fptr() // lam105656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105657 = arg_buffer[1];
//reading env and args
void* a105265105513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105263105509 = (decode_clo(env105657))[3];
//not do dummy comment
void* kont105359 = (decode_clo(env105657))[2];
//not do dummy comment
void* cons = (decode_clo(env105657))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont105359;
arg_buffer[3] = a105263105509;
arg_buffer[4] = a105265105513;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105656 = encode_clo(alloc_clo(lam105656_fptr, 0));

void* lam105658_fptr() // lam105658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105659 = arg_buffer[1];
//reading env and args
void* a105264105511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105263105509 = (decode_clo(env105659))[5];
//not do dummy comment
void* op = (decode_clo(env105659))[4];
//not do dummy comment
void* kont105359 = (decode_clo(env105659))[3];
//not do dummy comment
void* filter = (decode_clo(env105659))[2];
//not do dummy comment
void* cons = (decode_clo(env105659))[1];

//creating new closure instance
void** clo110999 = alloc_clo(lam105656_fptr, 3);

//setting env list
clo110999[1] = cons;
clo110999[2] = kont105359;
clo110999[3] = a105263105509;
void* f105361105512 = encode_clo(clo110999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f105361105512;
arg_buffer[3] = op;
arg_buffer[4] = a105264105511;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105658 = encode_clo(alloc_clo(lam105658_fptr, 0));

void* lam105660_fptr() // lam105660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105661 = arg_buffer[1];
//reading env and args
void* a105263105509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105661))[6];
//not do dummy comment
void* lst = (decode_clo(env105661))[5];
//not do dummy comment
void* op = (decode_clo(env105661))[4];
//not do dummy comment
void* kont105359 = (decode_clo(env105661))[3];
//not do dummy comment
void* filter = (decode_clo(env105661))[2];
//not do dummy comment
void* cons = (decode_clo(env105661))[1];

//creating new closure instance
void** clo111001 = alloc_clo(lam105658_fptr, 5);

//setting env list
clo111001[1] = cons;
clo111001[2] = filter;
clo111001[3] = kont105359;
clo111001[4] = op;
clo111001[5] = a105263105509;
void* f105362105510 = encode_clo(clo111001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105362105510;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105660 = encode_clo(alloc_clo(lam105660_fptr, 0));

void* lam105662_fptr() // lam105662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105663 = arg_buffer[1];
//reading env and args
void* a105266105515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env105663))[3];
//not do dummy comment
void* kont105359 = (decode_clo(env105663))[2];
//not do dummy comment
void* filter = (decode_clo(env105663))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont105359;
arg_buffer[3] = op;
arg_buffer[4] = a105266105515;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105662 = encode_clo(alloc_clo(lam105662_fptr, 0));

void* lam105664_fptr() // lam105664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105665 = arg_buffer[1];
//reading env and args
void* a105262105507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105665))[7];
//not do dummy comment
void* lst = (decode_clo(env105665))[6];
//not do dummy comment
void* op = (decode_clo(env105665))[5];
//not do dummy comment
void* kont105359 = (decode_clo(env105665))[4];
//not do dummy comment
void* cons = (decode_clo(env105665))[3];
//not do dummy comment
void* filter = (decode_clo(env105665))[2];
//not do dummy comment
void* car = (decode_clo(env105665))[1];

//if-clause
bool if_guard111002 = is_true(a105262105507);
if(if_guard111002)
{

//creating new closure instance
void** clo111004 = alloc_clo(lam105660_fptr, 6);

//setting env list
clo111004[1] = cons;
clo111004[2] = filter;
clo111004[3] = kont105359;
clo111004[4] = op;
clo111004[5] = lst;
clo111004[6] = cdr;
void* f105363105508 = encode_clo(clo111004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105363105508;
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
void** clo111006 = alloc_clo(lam105662_fptr, 3);

//setting env list
clo111006[1] = filter;
clo111006[2] = kont105359;
clo111006[3] = op;
void* f105364105514 = encode_clo(clo111006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105364105514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105664 = encode_clo(alloc_clo(lam105664_fptr, 0));

void* lam105666_fptr() // lam105666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105667 = arg_buffer[1];
//reading env and args
void* a105261105505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105667))[7];
//not do dummy comment
void* lst = (decode_clo(env105667))[6];
//not do dummy comment
void* op = (decode_clo(env105667))[5];
//not do dummy comment
void* kont105359 = (decode_clo(env105667))[4];
//not do dummy comment
void* cons = (decode_clo(env105667))[3];
//not do dummy comment
void* filter = (decode_clo(env105667))[2];
//not do dummy comment
void* car = (decode_clo(env105667))[1];

//creating new closure instance
void** clo111008 = alloc_clo(lam105664_fptr, 7);

//setting env list
clo111008[1] = car;
clo111008[2] = filter;
clo111008[3] = cons;
clo111008[4] = kont105359;
clo111008[5] = op;
clo111008[6] = lst;
clo111008[7] = cdr;
void* f105365105506 = encode_clo(clo111008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f105365105506;
arg_buffer[3] = a105261105505;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105666 = encode_clo(alloc_clo(lam105666_fptr, 0));

void* lam105668_fptr() // lam105668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105669 = arg_buffer[1];
//reading env and args
void* a105259105501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env105669))[8];
//not do dummy comment
void* op = (decode_clo(env105669))[7];
//not do dummy comment
void* kont105359 = (decode_clo(env105669))[6];
//not do dummy comment
void* cons = (decode_clo(env105669))[5];
//not do dummy comment
void* list = (decode_clo(env105669))[4];
//not do dummy comment
void* cdr = (decode_clo(env105669))[3];
//not do dummy comment
void* filter = (decode_clo(env105669))[2];
//not do dummy comment
void* car = (decode_clo(env105669))[1];

//if-clause
bool if_guard111009 = is_true(a105259105501);
if(if_guard111009)
{

//creating new closure instance
void** clo111011 = alloc_clo(lam105654_fptr, 1);

//setting env list
clo111011[1] = kont105359;
void* f105360105502 = encode_clo(clo111011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f105360105502;
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
void** clo111013 = alloc_clo(lam105666_fptr, 7);

//setting env list
clo111013[1] = car;
clo111013[2] = filter;
clo111013[3] = cons;
clo111013[4] = kont105359;
clo111013[5] = op;
clo111013[6] = lst;
clo111013[7] = cdr;
void* f105366105504 = encode_clo(clo111013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105366105504;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105668 = encode_clo(alloc_clo(lam105668_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105670 = arg_buffer[1];
//reading env and args
void* kont105359 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111015 = alloc_clo(lam105668_fptr, 8);

//setting env list
clo111015[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo111015[2] = filter;
clo111015[3] = cdr;
clo111015[4] = list;
clo111015[5] = cons;
clo111015[6] = kont105359;
clo111015[7] = op;
clo111015[8] = lst;
void* f105367105500 = encode_clo(clo111015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105367105500;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam105671_fptr() // lam105671 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105672 = arg_buffer[1];
//reading env and args
void* a105271105523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105269105520 = (decode_clo(env105672))[3];
//not do dummy comment
void* kont105368 = (decode_clo(env105672))[2];
//not do dummy comment
void* drop = (decode_clo(env105672))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont105368;
arg_buffer[3] = a105269105520;
arg_buffer[4] = a105271105523;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105671 = encode_clo(alloc_clo(lam105671_fptr, 0));

void* lam105674_fptr() // lam105674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105675 = arg_buffer[1];
//reading env and args
void* a105269105520 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env105675))[4];
//not do dummy comment
void* _u45 = (decode_clo(env105675))[3];
//not do dummy comment
void* kont105368 = (decode_clo(env105675))[2];
//not do dummy comment
void* drop = (decode_clo(env105675))[1];
mpz_t* mpzvar111016 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111016, "1", 10);
void* a105270105521 = encode_mpz(mpzvar111016);

//creating new closure instance
void** clo111018 = alloc_clo(lam105671_fptr, 3);

//setting env list
clo111018[1] = drop;
clo111018[2] = kont105368;
clo111018[3] = a105269105520;
void* f105369105522 = encode_clo(clo111018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f105369105522;
arg_buffer[3] = n;
arg_buffer[4] = a105270105521;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105674 = encode_clo(alloc_clo(lam105674_fptr, 0));

void* lam105676_fptr() // lam105676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105677 = arg_buffer[1];
//reading env and args
void* a105268105518 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105677))[6];
//not do dummy comment
void* n = (decode_clo(env105677))[5];
//not do dummy comment
void* _u45 = (decode_clo(env105677))[4];
//not do dummy comment
void* lst = (decode_clo(env105677))[3];
//not do dummy comment
void* kont105368 = (decode_clo(env105677))[2];
//not do dummy comment
void* drop = (decode_clo(env105677))[1];

//if-clause
bool if_guard111019 = is_true(a105268105518);
if(if_guard111019)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105368);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105368))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111021 = alloc_clo(lam105674_fptr, 4);

//setting env list
clo111021[1] = drop;
clo111021[2] = kont105368;
clo111021[3] = _u45;
clo111021[4] = n;
void* f105370105519 = encode_clo(clo111021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105370105519;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105676 = encode_clo(alloc_clo(lam105676_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105679 = arg_buffer[1];
//reading env and args
void* kont105368 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar111022 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111022, "0", 10);
void* a105267105516 = encode_mpz(mpzvar111022);

//creating new closure instance
void** clo111024 = alloc_clo(lam105676_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo111024[1] = drop;
clo111024[2] = kont105368;
clo111024[3] = lst;
clo111024[4] = _u45;
clo111024[5] = n;
clo111024[6] = cdr;
void* f105371105517 = encode_clo(clo111024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f105371105517;
arg_buffer[3] = n;
arg_buffer[4] = a105267105516;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam105680_fptr() // lam105680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105681 = arg_buffer[1];
//reading env and args
void* a105275105531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105273105527 = (decode_clo(env105681))[3];
//not do dummy comment
void* kont105372 = (decode_clo(env105681))[2];
//not do dummy comment
void* proc = (decode_clo(env105681))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont105372;
arg_buffer[3] = a105273105527;
arg_buffer[4] = a105275105531;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105680 = encode_clo(alloc_clo(lam105680_fptr, 0));

void* lam105682_fptr() // lam105682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105683 = arg_buffer[1];
//reading env and args
void* a105274105529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105273105527 = (decode_clo(env105683))[5];
//not do dummy comment
void* foldr = (decode_clo(env105683))[4];
//not do dummy comment
void* kont105372 = (decode_clo(env105683))[3];
//not do dummy comment
void* proc = (decode_clo(env105683))[2];
//not do dummy comment
void* acc = (decode_clo(env105683))[1];

//creating new closure instance
void** clo111026 = alloc_clo(lam105680_fptr, 3);

//setting env list
clo111026[1] = proc;
clo111026[2] = kont105372;
clo111026[3] = a105273105527;
void* f105373105530 = encode_clo(clo111026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f105373105530;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a105274105529;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105682 = encode_clo(alloc_clo(lam105682_fptr, 0));

void* lam105684_fptr() // lam105684 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105685 = arg_buffer[1];
//reading env and args
void* a105273105527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105685))[6];
//not do dummy comment
void* kont105372 = (decode_clo(env105685))[5];
//not do dummy comment
void* foldr = (decode_clo(env105685))[4];
//not do dummy comment
void* lst = (decode_clo(env105685))[3];
//not do dummy comment
void* proc = (decode_clo(env105685))[2];
//not do dummy comment
void* acc = (decode_clo(env105685))[1];

//creating new closure instance
void** clo111028 = alloc_clo(lam105682_fptr, 5);

//setting env list
clo111028[1] = acc;
clo111028[2] = proc;
clo111028[3] = kont105372;
clo111028[4] = foldr;
clo111028[5] = a105273105527;
void* f105374105528 = encode_clo(clo111028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105374105528;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105684 = encode_clo(alloc_clo(lam105684_fptr, 0));

void* lam105686_fptr() // lam105686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105687 = arg_buffer[1];
//reading env and args
void* a105272105525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105687))[7];
//not do dummy comment
void* kont105372 = (decode_clo(env105687))[6];
//not do dummy comment
void* car = (decode_clo(env105687))[5];
//not do dummy comment
void* foldr = (decode_clo(env105687))[4];
//not do dummy comment
void* lst = (decode_clo(env105687))[3];
//not do dummy comment
void* proc = (decode_clo(env105687))[2];
//not do dummy comment
void* acc = (decode_clo(env105687))[1];

//if-clause
bool if_guard111029 = is_true(a105272105525);
if(if_guard111029)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105372);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105372))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111031 = alloc_clo(lam105684_fptr, 6);

//setting env list
clo111031[1] = acc;
clo111031[2] = proc;
clo111031[3] = lst;
clo111031[4] = foldr;
clo111031[5] = kont105372;
clo111031[6] = cdr;
void* f105375105526 = encode_clo(clo111031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105375105526;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105686 = encode_clo(alloc_clo(lam105686_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105688 = arg_buffer[1];
//reading env and args
void* kont105372 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo111033 = alloc_clo(lam105686_fptr, 7);

//setting env list
clo111033[1] = acc;
clo111033[2] = proc;
clo111033[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo111033[4] = foldr;
clo111033[5] = car;
clo111033[6] = kont105372;
clo111033[7] = cdr;
void* f105376105524 = encode_clo(clo111033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105376105524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam105689_fptr() // lam105689 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105690 = arg_buffer[1];
//reading env and args
void* a105279105539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a105277105535 = (decode_clo(env105690))[3];
//not do dummy comment
void* kont105377 = (decode_clo(env105690))[2];
//not do dummy comment
void* cons = (decode_clo(env105690))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont105377;
arg_buffer[3] = a105277105535;
arg_buffer[4] = a105279105539;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105689 = encode_clo(alloc_clo(lam105689_fptr, 0));

void* lam105691_fptr() // lam105691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105692 = arg_buffer[1];
//reading env and args
void* a105278105537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env105692))[5];
//not do dummy comment
void* a105277105535 = (decode_clo(env105692))[4];
//not do dummy comment
void* lst2 = (decode_clo(env105692))[3];
//not do dummy comment
void* kont105377 = (decode_clo(env105692))[2];
//not do dummy comment
void* cons = (decode_clo(env105692))[1];

//creating new closure instance
void** clo111035 = alloc_clo(lam105689_fptr, 3);

//setting env list
clo111035[1] = cons;
clo111035[2] = kont105377;
clo111035[3] = a105277105535;
void* f105378105538 = encode_clo(clo111035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f105378105538;
arg_buffer[3] = a105278105537;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105691 = encode_clo(alloc_clo(lam105691_fptr, 0));

void* lam105693_fptr() // lam105693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105694 = arg_buffer[1];
//reading env and args
void* a105277105535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105694))[6];
//not do dummy comment
void* append = (decode_clo(env105694))[5];
//not do dummy comment
void* lst2 = (decode_clo(env105694))[4];
//not do dummy comment
void* cons = (decode_clo(env105694))[3];
//not do dummy comment
void* kont105377 = (decode_clo(env105694))[2];
//not do dummy comment
void* lst1 = (decode_clo(env105694))[1];

//creating new closure instance
void** clo111037 = alloc_clo(lam105691_fptr, 5);

//setting env list
clo111037[1] = cons;
clo111037[2] = kont105377;
clo111037[3] = lst2;
clo111037[4] = a105277105535;
clo111037[5] = append;
void* f105379105536 = encode_clo(clo111037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f105379105536;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105693 = encode_clo(alloc_clo(lam105693_fptr, 0));

void* lam105695_fptr() // lam105695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105696 = arg_buffer[1];
//reading env and args
void* a105276105533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env105696))[7];
//not do dummy comment
void* append = (decode_clo(env105696))[6];
//not do dummy comment
void* lst2 = (decode_clo(env105696))[5];
//not do dummy comment
void* cons = (decode_clo(env105696))[4];
//not do dummy comment
void* kont105377 = (decode_clo(env105696))[3];
//not do dummy comment
void* lst1 = (decode_clo(env105696))[2];
//not do dummy comment
void* car = (decode_clo(env105696))[1];

//if-clause
bool if_guard111038 = is_true(a105276105533);
if(if_guard111038)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105377);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105377))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111040 = alloc_clo(lam105693_fptr, 6);

//setting env list
clo111040[1] = lst1;
clo111040[2] = kont105377;
clo111040[3] = cons;
clo111040[4] = lst2;
clo111040[5] = append;
clo111040[6] = cdr;
void* f105380105534 = encode_clo(clo111040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f105380105534;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam105695 = encode_clo(alloc_clo(lam105695_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105697 = arg_buffer[1];
//reading env and args
void* kont105377 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111042 = alloc_clo(lam105695_fptr, 7);

//setting env list
clo111042[1] = car;
clo111042[2] = lst1;
clo111042[3] = kont105377;
clo111042[4] = cons;
clo111042[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo111042[6] = append;
clo111042[7] = cdr;
void* f105381105532 = encode_clo(clo111042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f105381105532;
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
void* _105698 = arg_buffer[1];
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

void* kont105382105540 = prim_car(lst);
void* lst105541 = prim_cdr(lst);
void* x105280105542 = apply_prim_hash(lst105541);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105382105540);
arg_buffer[2] = x105280105542;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105382105540))[0]);
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
void* _105699 = arg_buffer[1];
//reading env and args
void* kont105384 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x105281105543 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105384);
arg_buffer[2] = x105281105543;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105384))[0]);
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
void* _105700 = arg_buffer[1];
//reading env and args
void* kont105385 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x105282105544 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105385);
arg_buffer[2] = x105282105544;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105385))[0]);
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
void* _105701 = arg_buffer[1];
//reading env and args
void* kont105386 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x105283105545 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105386);
arg_buffer[2] = x105283105545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105386))[0]);
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
void* _105702 = arg_buffer[1];
//reading env and args
void* kont105387 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x105284105546 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105387);
arg_buffer[2] = x105284105546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105387))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam105703_fptr() // lam105703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105704 = arg_buffer[1];
//reading env and args
void* x105285105548 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105388 = (decode_clo(env105704))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont105388);
arg_buffer[2] = x105285105548;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont105388))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105703 = encode_clo(alloc_clo(lam105703_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105705 = arg_buffer[1];
//reading env and args
void* kont105388 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo111044 = alloc_clo(lam105703_fptr, 1);

//setting env list
clo111044[1] = kont105388;
void* f105389105547 = encode_clo(clo111044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f105389105547;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam105706_fptr() // lam105706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env105707 = arg_buffer[1];
//reading env and args
void* a105290105554 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont105390 = (decode_clo(env105707))[2];
//not do dummy comment
void* call = (decode_clo(env105707))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont105390;
arg_buffer[3] = a105290105554;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam105706 = encode_clo(alloc_clo(lam105706_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _105712 = arg_buffer[1];
//reading env and args
void* kont105390 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar111045 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111045, "1", 10);
void* a105286105549 = encode_mpz(mpzvar111045);
mpz_t* mpzvar111046 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111046, "2", 10);
void* a105287105550 = encode_mpz(mpzvar111046);
mpz_t* mpzvar111047 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111047, "3", 10);
void* a105288105551 = encode_mpz(mpzvar111047);
mpz_t* mpzvar111048 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111048, "4", 10);
void* a105289105552 = encode_mpz(mpzvar111048);

//creating new closure instance
void** clo111050 = alloc_clo(lam105706_fptr, 2);

//setting env list
clo111050[1] = call;
clo111050[2] = kont105390;
void* f105391105553 = encode_clo(clo111050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f105391105553;
arg_buffer[3] = a105286105549;
arg_buffer[4] = a105287105550;
arg_buffer[5] = a105288105551;
arg_buffer[6] = a105289105552;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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

