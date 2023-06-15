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
void* _52589 = arg_buffer[1];
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

void* kont5232752427 = prim_car(lst);
void* lst52428 = prim_cdr(lst);
void* x5223852429 = apply_prim__u43(lst52428);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5232752427);
arg_buffer[2] = x5223852429;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5232752427))[0]);
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
void* _52590 = arg_buffer[1];
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

void* kont5232952430 = prim_car(lst);
void* lst52431 = prim_cdr(lst);
void* x5223952432 = apply_prim__u45(lst52431);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5232952430);
arg_buffer[2] = x5223952432;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5232952430))[0]);
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
void* _52591 = arg_buffer[1];
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

void* kont5233152433 = prim_car(lst);
void* lst52434 = prim_cdr(lst);
void* x5224052435 = apply_prim__u42(lst52434);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5233152433);
arg_buffer[2] = x5224052435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5233152433))[0]);
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
void* _52592 = arg_buffer[1];
//reading env and args
void* kont52333 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5224152436 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52333);
arg_buffer[2] = x5224152436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52333))[0]);
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
void* _52593 = arg_buffer[1];
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

void* kont5233452437 = prim_car(lst);
void* lst52438 = prim_cdr(lst);
void* x5224252439 = apply_prim__u47(lst52438);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5233452437);
arg_buffer[2] = x5224252439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5233452437))[0]);
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
void* _52594 = arg_buffer[1];
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

void* kont5233652440 = prim_car(lst);
void* lst52441 = prim_cdr(lst);
void* x5224352442 = apply_prim__u61(lst52441);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5233652440);
arg_buffer[2] = x5224352442;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5233652440))[0]);
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
void* _52595 = arg_buffer[1];
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

void* kont5233852443 = prim_car(lst);
void* lst52444 = prim_cdr(lst);
void* x5224452445 = apply_prim__u62(lst52444);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5233852443);
arg_buffer[2] = x5224452445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5233852443))[0]);
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
void* _52596 = arg_buffer[1];
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

void* kont5234052446 = prim_car(lst);
void* lst52447 = prim_cdr(lst);
void* x5224552448 = apply_prim__u60(lst52447);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5234052446);
arg_buffer[2] = x5224552448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5234052446))[0]);
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
void* _52597 = arg_buffer[1];
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

void* kont5234252449 = prim_car(lst);
void* lst52450 = prim_cdr(lst);
void* x5224652451 = apply_prim__u60_u61(lst52450);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5234252449);
arg_buffer[2] = x5224652451;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5234252449))[0]);
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
void* _52598 = arg_buffer[1];
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

void* kont5234452452 = prim_car(lst);
void* lst52453 = prim_cdr(lst);
void* x5224752454 = apply_prim__u62_u61(lst52453);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5234452452);
arg_buffer[2] = x5224752454;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5234452452))[0]);
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
void* _52599 = arg_buffer[1];
//reading env and args
void* kont52346 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5224852455 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52346);
arg_buffer[2] = x5224852455;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52346))[0]);
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
void* _52600 = arg_buffer[1];
//reading env and args
void* kont52347 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5224952456 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52347);
arg_buffer[2] = x5224952456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52347))[0]);
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
void* _52601 = arg_buffer[1];
//reading env and args
void* kont52348 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5225052457 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52348);
arg_buffer[2] = x5225052457;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52348))[0]);
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
void* _52602 = arg_buffer[1];
//reading env and args
void* kont52349 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5225152458 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52349);
arg_buffer[2] = x5225152458;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52349))[0]);
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
void* _52603 = arg_buffer[1];
//reading env and args
void* kont52350 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5225252459 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52350);
arg_buffer[2] = x5225252459;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52350))[0]);
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
void* _52604 = arg_buffer[1];
//reading env and args
void* kont52351 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5225352460 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52351);
arg_buffer[2] = x5225352460;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52351))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam52605_fptr() // lam52605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52606 = arg_buffer[1];
//reading env and args
void* a5225652464 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5225452461 = (decode_clo(env52606))[3];
//not do dummy comment
void* kont52352 = (decode_clo(env52606))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env52606))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont52352;
arg_buffer[3] = a5225452461;
arg_buffer[4] = a5225652464;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52605 = encode_clo(alloc_clo(lam52605_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52609 = arg_buffer[1];
//reading env and args
void* kont52352 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53286 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53286, "0", 10);
void* a5225452461 = encode_mpz(mpzvar53286);
mpz_t* mpzvar53287 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53287, "2", 10);
void* a5225552462 = encode_mpz(mpzvar53287);

//creating new closure instance
void** clo53289 = alloc_clo(lam52605_fptr, 3);

//setting env list
clo53289[1] = equal_u63;
clo53289[2] = kont52352;
clo53289[3] = a5225452461;
void* f5235352463 = encode_clo(clo53289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5235352463;
arg_buffer[3] = x;
arg_buffer[4] = a5225552462;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam52610_fptr() // lam52610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52611 = arg_buffer[1];
//reading env and args
void* a5225952468 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5225752465 = (decode_clo(env52611))[3];
//not do dummy comment
void* kont52354 = (decode_clo(env52611))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env52611))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont52354;
arg_buffer[3] = a5225752465;
arg_buffer[4] = a5225952468;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52610 = encode_clo(alloc_clo(lam52610_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52614 = arg_buffer[1];
//reading env and args
void* kont52354 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53290 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53290, "1", 10);
void* a5225752465 = encode_mpz(mpzvar53290);
mpz_t* mpzvar53291 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53291, "2", 10);
void* a5225852466 = encode_mpz(mpzvar53291);

//creating new closure instance
void** clo53293 = alloc_clo(lam52610_fptr, 3);

//setting env list
clo53293[1] = equal_u63;
clo53293[2] = kont52354;
clo53293[3] = a5225752465;
void* f5235552467 = encode_clo(clo53293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5235552467;
arg_buffer[3] = x;
arg_buffer[4] = a5225852466;
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
void* _52615 = arg_buffer[1];
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

void* kont5235652469 = prim_car(x);
void* x52470 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5235652469);
arg_buffer[2] = x52470;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5235652469))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam52618_fptr() // lam52618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52619 = arg_buffer[1];
//reading env and args
void* a5226552480 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52358 = (decode_clo(env52619))[3];
//not do dummy comment
void* x = (decode_clo(env52619))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52619))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont52358;
arg_buffer[3] = x;
arg_buffer[4] = a5226552480;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52618 = encode_clo(alloc_clo(lam52618_fptr, 0));

void* lam52620_fptr() // lam52620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52621 = arg_buffer[1];
//reading env and args
void* a5226352477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52621))[5];
//not do dummy comment
void* lst = (decode_clo(env52621))[4];
//not do dummy comment
void* kont52358 = (decode_clo(env52621))[3];
//not do dummy comment
void* x = (decode_clo(env52621))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52621))[1];

//if-clause
bool if_guard53294 = is_true(a5226352477);
if(if_guard53294)
{
void* x5226452478 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52358);
arg_buffer[2] = x5226452478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52358))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53296 = alloc_clo(lam52618_fptr, 3);

//setting env list
clo53296[1] = member_u63;
clo53296[2] = x;
clo53296[3] = kont52358;
void* f5235952479 = encode_clo(clo53296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5235952479;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52620 = encode_clo(alloc_clo(lam52620_fptr, 0));

void* lam52622_fptr() // lam52622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52623 = arg_buffer[1];
//reading env and args
void* a5226252475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52623))[6];
//not do dummy comment
void* lst = (decode_clo(env52623))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env52623))[4];
//not do dummy comment
void* kont52358 = (decode_clo(env52623))[3];
//not do dummy comment
void* x = (decode_clo(env52623))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52623))[1];

//creating new closure instance
void** clo53298 = alloc_clo(lam52620_fptr, 5);

//setting env list
clo53298[1] = member_u63;
clo53298[2] = x;
clo53298[3] = kont52358;
clo53298[4] = lst;
clo53298[5] = cdr;
void* f5236052476 = encode_clo(clo53298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5236052476;
arg_buffer[3] = a5226252475;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52622 = encode_clo(alloc_clo(lam52622_fptr, 0));

void* lam52624_fptr() // lam52624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52625 = arg_buffer[1];
//reading env and args
void* a5226052472 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52625))[7];
//not do dummy comment
void* lst = (decode_clo(env52625))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env52625))[5];
//not do dummy comment
void* kont52358 = (decode_clo(env52625))[4];
//not do dummy comment
void* x = (decode_clo(env52625))[3];
//not do dummy comment
void* car = (decode_clo(env52625))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52625))[1];

//if-clause
bool if_guard53299 = is_true(a5226052472);
if(if_guard53299)
{
void* x5226152473 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52358);
arg_buffer[2] = x5226152473;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52358))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53301 = alloc_clo(lam52622_fptr, 6);

//setting env list
clo53301[1] = member_u63;
clo53301[2] = x;
clo53301[3] = kont52358;
clo53301[4] = equal_u63;
clo53301[5] = lst;
clo53301[6] = cdr;
void* f5236152474 = encode_clo(clo53301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5236152474;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52624 = encode_clo(alloc_clo(lam52624_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52626 = arg_buffer[1];
//reading env and args
void* kont52358 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53303 = alloc_clo(lam52624_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo53303[1] = member_u63;
clo53303[2] = car;
clo53303[3] = x;
clo53303[4] = kont52358;
clo53303[5] = equal_u63;
clo53303[6] = lst;
clo53303[7] = cdr;
void* f5236252471 = encode_clo(clo53303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5236252471;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam52627_fptr() // lam52627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52628 = arg_buffer[1];
//reading env and args
void* a5226952488 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5226852486 = (decode_clo(env52628))[4];
//not do dummy comment
void* fun = (decode_clo(env52628))[3];
//not do dummy comment
void* kont52363 = (decode_clo(env52628))[2];
//not do dummy comment
void* foldl = (decode_clo(env52628))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont52363;
arg_buffer[3] = fun;
arg_buffer[4] = a5226852486;
arg_buffer[5] = a5226952488;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52627 = encode_clo(alloc_clo(lam52627_fptr, 0));

void* lam52629_fptr() // lam52629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52630 = arg_buffer[1];
//reading env and args
void* a5226852486 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52630))[5];
//not do dummy comment
void* lst = (decode_clo(env52630))[4];
//not do dummy comment
void* fun = (decode_clo(env52630))[3];
//not do dummy comment
void* kont52363 = (decode_clo(env52630))[2];
//not do dummy comment
void* foldl = (decode_clo(env52630))[1];

//creating new closure instance
void** clo53305 = alloc_clo(lam52627_fptr, 4);

//setting env list
clo53305[1] = foldl;
clo53305[2] = kont52363;
clo53305[3] = fun;
clo53305[4] = a5226852486;
void* f5236452487 = encode_clo(clo53305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5236452487;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52629 = encode_clo(alloc_clo(lam52629_fptr, 0));

void* lam52631_fptr() // lam52631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52632 = arg_buffer[1];
//reading env and args
void* a5226752484 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52632))[6];
//not do dummy comment
void* lst = (decode_clo(env52632))[5];
//not do dummy comment
void* fun = (decode_clo(env52632))[4];
//not do dummy comment
void* acc = (decode_clo(env52632))[3];
//not do dummy comment
void* kont52363 = (decode_clo(env52632))[2];
//not do dummy comment
void* foldl = (decode_clo(env52632))[1];

//creating new closure instance
void** clo53307 = alloc_clo(lam52629_fptr, 5);

//setting env list
clo53307[1] = foldl;
clo53307[2] = kont52363;
clo53307[3] = fun;
clo53307[4] = lst;
clo53307[5] = cdr;
void* f5236552485 = encode_clo(clo53307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5236552485;
arg_buffer[3] = a5226752484;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52631 = encode_clo(alloc_clo(lam52631_fptr, 0));

void* lam52633_fptr() // lam52633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52634 = arg_buffer[1];
//reading env and args
void* a5226652482 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52634))[7];
//not do dummy comment
void* lst = (decode_clo(env52634))[6];
//not do dummy comment
void* fun = (decode_clo(env52634))[5];
//not do dummy comment
void* acc = (decode_clo(env52634))[4];
//not do dummy comment
void* car = (decode_clo(env52634))[3];
//not do dummy comment
void* kont52363 = (decode_clo(env52634))[2];
//not do dummy comment
void* foldl = (decode_clo(env52634))[1];

//if-clause
bool if_guard53308 = is_true(a5226652482);
if(if_guard53308)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52363);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52363))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53310 = alloc_clo(lam52631_fptr, 6);

//setting env list
clo53310[1] = foldl;
clo53310[2] = kont52363;
clo53310[3] = acc;
clo53310[4] = fun;
clo53310[5] = lst;
clo53310[6] = cdr;
void* f5236652483 = encode_clo(clo53310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5236652483;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52633 = encode_clo(alloc_clo(lam52633_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52635 = arg_buffer[1];
//reading env and args
void* kont52363 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53312 = alloc_clo(lam52633_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo53312[1] = foldl;
clo53312[2] = kont52363;
clo53312[3] = car;
clo53312[4] = acc;
clo53312[5] = fun;
clo53312[6] = lst;
clo53312[7] = cdr;
void* f5236752481 = encode_clo(clo53312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5236752481;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam52636_fptr() // lam52636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52637 = arg_buffer[1];
//reading env and args
void* a5227352496 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52368 = (decode_clo(env52637))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52637))[2];
//not do dummy comment
void* a5227152492 = (decode_clo(env52637))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont52368;
arg_buffer[3] = a5227152492;
arg_buffer[4] = a5227352496;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52636 = encode_clo(alloc_clo(lam52636_fptr, 0));

void* lam52638_fptr() // lam52638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52639 = arg_buffer[1];
//reading env and args
void* a5227252494 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52368 = (decode_clo(env52639))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52639))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52639))[3];
//not do dummy comment
void* cons = (decode_clo(env52639))[2];
//not do dummy comment
void* a5227152492 = (decode_clo(env52639))[1];

//creating new closure instance
void** clo53314 = alloc_clo(lam52636_fptr, 3);

//setting env list
clo53314[1] = a5227152492;
clo53314[2] = reverse_u45helper;
clo53314[3] = kont52368;
void* f5236952495 = encode_clo(clo53314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5236952495;
arg_buffer[3] = a5227252494;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52638 = encode_clo(alloc_clo(lam52638_fptr, 0));

void* lam52640_fptr() // lam52640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52641 = arg_buffer[1];
//reading env and args
void* a5227152492 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52368 = (decode_clo(env52641))[6];
//not do dummy comment
void* lst = (decode_clo(env52641))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52641))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52641))[3];
//not do dummy comment
void* car = (decode_clo(env52641))[2];
//not do dummy comment
void* cons = (decode_clo(env52641))[1];

//creating new closure instance
void** clo53316 = alloc_clo(lam52638_fptr, 5);

//setting env list
clo53316[1] = a5227152492;
clo53316[2] = cons;
clo53316[3] = lst2;
clo53316[4] = reverse_u45helper;
clo53316[5] = kont52368;
void* f5237052493 = encode_clo(clo53316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5237052493;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52640 = encode_clo(alloc_clo(lam52640_fptr, 0));

void* lam52642_fptr() // lam52642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52643 = arg_buffer[1];
//reading env and args
void* a5227052490 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52643))[7];
//not do dummy comment
void* kont52368 = (decode_clo(env52643))[6];
//not do dummy comment
void* lst = (decode_clo(env52643))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52643))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52643))[3];
//not do dummy comment
void* car = (decode_clo(env52643))[2];
//not do dummy comment
void* cons = (decode_clo(env52643))[1];

//if-clause
bool if_guard53317 = is_true(a5227052490);
if(if_guard53317)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52368);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52368))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53319 = alloc_clo(lam52640_fptr, 6);

//setting env list
clo53319[1] = cons;
clo53319[2] = car;
clo53319[3] = lst2;
clo53319[4] = reverse_u45helper;
clo53319[5] = lst;
clo53319[6] = kont52368;
void* f5237152491 = encode_clo(clo53319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5237152491;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52642 = encode_clo(alloc_clo(lam52642_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52644 = arg_buffer[1];
//reading env and args
void* kont52368 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53321 = alloc_clo(lam52642_fptr, 7);

//setting env list
clo53321[1] = cons;
clo53321[2] = car;
clo53321[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo53321[4] = reverse_u45helper;
clo53321[5] = lst;
clo53321[6] = kont52368;
clo53321[7] = cdr;
void* f5237252489 = encode_clo(clo53321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5237252489;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam52645_fptr() // lam52645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52646 = arg_buffer[1];
//reading env and args
void* a5227452498 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52646))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52646))[2];
//not do dummy comment
void* kont52373 = (decode_clo(env52646))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont52373;
arg_buffer[3] = lst;
arg_buffer[4] = a5227452498;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52645 = encode_clo(alloc_clo(lam52645_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52647 = arg_buffer[1];
//reading env and args
void* kont52373 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53323 = alloc_clo(lam52645_fptr, 3);

//setting env list
clo53323[1] = kont52373;
clo53323[2] = reverse_u45helper;
clo53323[3] = lst;
void* f5237452497 = encode_clo(clo53323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5237452497;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam52648_fptr() // lam52648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52649 = arg_buffer[1];
//reading env and args
void* x5227752503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52375 = (decode_clo(env52649))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52375);
arg_buffer[2] = x5227752503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52375))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52648 = encode_clo(alloc_clo(lam52648_fptr, 0));

void* lam52650_fptr() // lam52650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52651 = arg_buffer[1];
//reading env and args
void* a5228252512 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52375 = (decode_clo(env52651))[4];
//not do dummy comment
void* a5228052508 = (decode_clo(env52651))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52651))[2];
//not do dummy comment
void* a5227852505 = (decode_clo(env52651))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont52375;
arg_buffer[3] = a5227852505;
arg_buffer[4] = a5228052508;
arg_buffer[5] = a5228252512;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52650 = encode_clo(alloc_clo(lam52650_fptr, 0));

void* lam52652_fptr() // lam52652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52653 = arg_buffer[1];
//reading env and args
void* a5228152510 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52375 = (decode_clo(env52653))[6];
//not do dummy comment
void* cons = (decode_clo(env52653))[5];
//not do dummy comment
void* a5228052508 = (decode_clo(env52653))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env52653))[3];
//not do dummy comment
void* a5227852505 = (decode_clo(env52653))[2];
//not do dummy comment
void* lst2 = (decode_clo(env52653))[1];

//creating new closure instance
void** clo53325 = alloc_clo(lam52650_fptr, 4);

//setting env list
clo53325[1] = a5227852505;
clo53325[2] = take_u45helper;
clo53325[3] = a5228052508;
clo53325[4] = kont52375;
void* f5237752511 = encode_clo(clo53325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5237752511;
arg_buffer[3] = a5228152510;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52652 = encode_clo(alloc_clo(lam52652_fptr, 0));

void* lam52654_fptr() // lam52654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52655 = arg_buffer[1];
//reading env and args
void* a5228052508 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52655))[7];
//not do dummy comment
void* kont52375 = (decode_clo(env52655))[6];
//not do dummy comment
void* car = (decode_clo(env52655))[5];
//not do dummy comment
void* cons = (decode_clo(env52655))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env52655))[3];
//not do dummy comment
void* a5227852505 = (decode_clo(env52655))[2];
//not do dummy comment
void* lst2 = (decode_clo(env52655))[1];

//creating new closure instance
void** clo53327 = alloc_clo(lam52652_fptr, 6);

//setting env list
clo53327[1] = lst2;
clo53327[2] = a5227852505;
clo53327[3] = take_u45helper;
clo53327[4] = a5228052508;
clo53327[5] = cons;
clo53327[6] = kont52375;
void* f5237852509 = encode_clo(clo53327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5237852509;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52654 = encode_clo(alloc_clo(lam52654_fptr, 0));

void* lam52657_fptr() // lam52657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52658 = arg_buffer[1];
//reading env and args
void* a5227852505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52658))[8];
//not do dummy comment
void* kont52375 = (decode_clo(env52658))[7];
//not do dummy comment
void* cons = (decode_clo(env52658))[6];
//not do dummy comment
void* _u45 = (decode_clo(env52658))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env52658))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52658))[3];
//not do dummy comment
void* n = (decode_clo(env52658))[2];
//not do dummy comment
void* car = (decode_clo(env52658))[1];
mpz_t* mpzvar53328 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53328, "1", 10);
void* a5227952506 = encode_mpz(mpzvar53328);

//creating new closure instance
void** clo53330 = alloc_clo(lam52654_fptr, 7);

//setting env list
clo53330[1] = lst2;
clo53330[2] = a5227852505;
clo53330[3] = take_u45helper;
clo53330[4] = cons;
clo53330[5] = car;
clo53330[6] = kont52375;
clo53330[7] = lst;
void* f5237952507 = encode_clo(clo53330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5237952507;
arg_buffer[3] = n;
arg_buffer[4] = a5227952506;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52657 = encode_clo(alloc_clo(lam52657_fptr, 0));

void* lam52659_fptr() // lam52659 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52660 = arg_buffer[1];
//reading env and args
void* a5227652501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52660))[10];
//not do dummy comment
void* lst = (decode_clo(env52660))[9];
//not do dummy comment
void* reverse = (decode_clo(env52660))[8];
//not do dummy comment
void* kont52375 = (decode_clo(env52660))[7];
//not do dummy comment
void* cons = (decode_clo(env52660))[6];
//not do dummy comment
void* _u45 = (decode_clo(env52660))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env52660))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52660))[3];
//not do dummy comment
void* n = (decode_clo(env52660))[2];
//not do dummy comment
void* car = (decode_clo(env52660))[1];

//if-clause
bool if_guard53331 = is_true(a5227652501);
if(if_guard53331)
{

//creating new closure instance
void** clo53333 = alloc_clo(lam52648_fptr, 1);

//setting env list
clo53333[1] = kont52375;
void* f5237652502 = encode_clo(clo53333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5237652502;
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
void** clo53335 = alloc_clo(lam52657_fptr, 8);

//setting env list
clo53335[1] = car;
clo53335[2] = n;
clo53335[3] = lst2;
clo53335[4] = take_u45helper;
clo53335[5] = _u45;
clo53335[6] = cons;
clo53335[7] = kont52375;
clo53335[8] = lst;
void* f5238052504 = encode_clo(clo53335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5238052504;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52659 = encode_clo(alloc_clo(lam52659_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52662 = arg_buffer[1];
//reading env and args
void* kont52375 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar53336 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53336, "0", 10);
void* a5227552499 = encode_mpz(mpzvar53336);

//creating new closure instance
void** clo53338 = alloc_clo(lam52659_fptr, 10);

//setting env list
clo53338[1] = car;
clo53338[2] = n;
clo53338[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo53338[4] = take_u45helper;
clo53338[5] = _u45;
clo53338[6] = cons;
clo53338[7] = kont52375;
clo53338[8] = reverse;
clo53338[9] = lst;
clo53338[10] = cdr;
void* f5238152500 = encode_clo(clo53338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5238152500;
arg_buffer[3] = n;
arg_buffer[4] = a5227552499;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam52663_fptr() // lam52663 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52664 = arg_buffer[1];
//reading env and args
void* a5228352514 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52382 = (decode_clo(env52664))[4];
//not do dummy comment
void* lst = (decode_clo(env52664))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52664))[2];
//not do dummy comment
void* n = (decode_clo(env52664))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont52382;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5228352514;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52663 = encode_clo(alloc_clo(lam52663_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52665 = arg_buffer[1];
//reading env and args
void* kont52382 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53340 = alloc_clo(lam52663_fptr, 4);

//setting env list
clo53340[1] = n;
clo53340[2] = take_u45helper;
clo53340[3] = lst;
clo53340[4] = kont52382;
void* f5238352513 = encode_clo(clo53340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5238352513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam52667_fptr() // lam52667 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52668 = arg_buffer[1];
//reading env and args
void* a5228852522 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52384 = (decode_clo(env52668))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52668))[2];
//not do dummy comment
void* a5228652518 = (decode_clo(env52668))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont52384;
arg_buffer[3] = a5228652518;
arg_buffer[4] = a5228852522;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52667 = encode_clo(alloc_clo(lam52667_fptr, 0));

void* lam52669_fptr() // lam52669 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52670 = arg_buffer[1];
//reading env and args
void* a5228752520 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52384 = (decode_clo(env52670))[4];
//not do dummy comment
void* length = (decode_clo(env52670))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52670))[2];
//not do dummy comment
void* a5228652518 = (decode_clo(env52670))[1];

//creating new closure instance
void** clo53342 = alloc_clo(lam52667_fptr, 3);

//setting env list
clo53342[1] = a5228652518;
clo53342[2] = _u43;
clo53342[3] = kont52384;
void* f5238552521 = encode_clo(clo53342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5238552521;
arg_buffer[3] = a5228752520;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52669 = encode_clo(alloc_clo(lam52669_fptr, 0));

void* lam52672_fptr() // lam52672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52673 = arg_buffer[1];
//reading env and args
void* a5228452516 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52673))[5];
//not do dummy comment
void* kont52384 = (decode_clo(env52673))[4];
//not do dummy comment
void* lst = (decode_clo(env52673))[3];
//not do dummy comment
void* length = (decode_clo(env52673))[2];
//not do dummy comment
void* _u43 = (decode_clo(env52673))[1];

//if-clause
bool if_guard53343 = is_true(a5228452516);
if(if_guard53343)
{
mpz_t* mpzvar53344 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53344, "0", 10);
void* x5228552517 = encode_mpz(mpzvar53344);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52384);
arg_buffer[2] = x5228552517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52384))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53345 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53345, "1", 10);
void* a5228652518 = encode_mpz(mpzvar53345);

//creating new closure instance
void** clo53347 = alloc_clo(lam52669_fptr, 4);

//setting env list
clo53347[1] = a5228652518;
clo53347[2] = _u43;
clo53347[3] = length;
clo53347[4] = kont52384;
void* f5238652519 = encode_clo(clo53347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5238652519;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52672 = encode_clo(alloc_clo(lam52672_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52674 = arg_buffer[1];
//reading env and args
void* kont52384 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53349 = alloc_clo(lam52672_fptr, 5);

//setting env list
clo53349[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo53349[2] = length;
clo53349[3] = lst;
clo53349[4] = kont52384;
clo53349[5] = cdr;
void* f5238752515 = encode_clo(clo53349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5238752515;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam52675_fptr() // lam52675 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52676 = arg_buffer[1];
//reading env and args
void* x5229052526 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52388 = (decode_clo(env52676))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52388);
arg_buffer[2] = x5229052526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52388))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52675 = encode_clo(alloc_clo(lam52675_fptr, 0));

void* lam52677_fptr() // lam52677 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52678 = arg_buffer[1];
//reading env and args
void* a5229452534 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5229252530 = (decode_clo(env52678))[3];
//not do dummy comment
void* kont52388 = (decode_clo(env52678))[2];
//not do dummy comment
void* cons = (decode_clo(env52678))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52388;
arg_buffer[3] = a5229252530;
arg_buffer[4] = a5229452534;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52677 = encode_clo(alloc_clo(lam52677_fptr, 0));

void* lam52679_fptr() // lam52679 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52680 = arg_buffer[1];
//reading env and args
void* a5229352532 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52388 = (decode_clo(env52680))[5];
//not do dummy comment
void* proc = (decode_clo(env52680))[4];
//not do dummy comment
void* cons = (decode_clo(env52680))[3];
//not do dummy comment
void* map = (decode_clo(env52680))[2];
//not do dummy comment
void* a5229252530 = (decode_clo(env52680))[1];

//creating new closure instance
void** clo53351 = alloc_clo(lam52677_fptr, 3);

//setting env list
clo53351[1] = cons;
clo53351[2] = kont52388;
clo53351[3] = a5229252530;
void* f5239052533 = encode_clo(clo53351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5239052533;
arg_buffer[3] = proc;
arg_buffer[4] = a5229352532;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52679 = encode_clo(alloc_clo(lam52679_fptr, 0));

void* lam52681_fptr() // lam52681 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52682 = arg_buffer[1];
//reading env and args
void* a5229252530 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52682))[6];
//not do dummy comment
void* lst = (decode_clo(env52682))[5];
//not do dummy comment
void* map = (decode_clo(env52682))[4];
//not do dummy comment
void* kont52388 = (decode_clo(env52682))[3];
//not do dummy comment
void* proc = (decode_clo(env52682))[2];
//not do dummy comment
void* cons = (decode_clo(env52682))[1];

//creating new closure instance
void** clo53353 = alloc_clo(lam52679_fptr, 5);

//setting env list
clo53353[1] = a5229252530;
clo53353[2] = map;
clo53353[3] = cons;
clo53353[4] = proc;
clo53353[5] = kont52388;
void* f5239152531 = encode_clo(clo53353);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5239152531;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52681 = encode_clo(alloc_clo(lam52681_fptr, 0));

void* lam52683_fptr() // lam52683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52684 = arg_buffer[1];
//reading env and args
void* a5229152528 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52684))[6];
//not do dummy comment
void* lst = (decode_clo(env52684))[5];
//not do dummy comment
void* map = (decode_clo(env52684))[4];
//not do dummy comment
void* kont52388 = (decode_clo(env52684))[3];
//not do dummy comment
void* proc = (decode_clo(env52684))[2];
//not do dummy comment
void* cons = (decode_clo(env52684))[1];

//creating new closure instance
void** clo53355 = alloc_clo(lam52681_fptr, 6);

//setting env list
clo53355[1] = cons;
clo53355[2] = proc;
clo53355[3] = kont52388;
clo53355[4] = map;
clo53355[5] = lst;
clo53355[6] = cdr;
void* f5239252529 = encode_clo(clo53355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5239252529;
arg_buffer[3] = a5229152528;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52683 = encode_clo(alloc_clo(lam52683_fptr, 0));

void* lam52685_fptr() // lam52685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52686 = arg_buffer[1];
//reading env and args
void* a5228952524 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52686))[8];
//not do dummy comment
void* map = (decode_clo(env52686))[7];
//not do dummy comment
void* kont52388 = (decode_clo(env52686))[6];
//not do dummy comment
void* proc = (decode_clo(env52686))[5];
//not do dummy comment
void* car = (decode_clo(env52686))[4];
//not do dummy comment
void* cons = (decode_clo(env52686))[3];
//not do dummy comment
void* list = (decode_clo(env52686))[2];
//not do dummy comment
void* cdr = (decode_clo(env52686))[1];

//if-clause
bool if_guard53356 = is_true(a5228952524);
if(if_guard53356)
{

//creating new closure instance
void** clo53358 = alloc_clo(lam52675_fptr, 1);

//setting env list
clo53358[1] = kont52388;
void* f5238952525 = encode_clo(clo53358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5238952525;
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
void** clo53360 = alloc_clo(lam52683_fptr, 6);

//setting env list
clo53360[1] = cons;
clo53360[2] = proc;
clo53360[3] = kont52388;
clo53360[4] = map;
clo53360[5] = lst;
clo53360[6] = cdr;
void* f5239352527 = encode_clo(clo53360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5239352527;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52685 = encode_clo(alloc_clo(lam52685_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52687 = arg_buffer[1];
//reading env and args
void* kont52388 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53362 = alloc_clo(lam52685_fptr, 8);

//setting env list
clo53362[1] = cdr;
clo53362[2] = list;
clo53362[3] = cons;
clo53362[4] = car;
clo53362[5] = proc;
clo53362[6] = kont52388;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo53362[7] = map;
clo53362[8] = lst;
void* f5239452523 = encode_clo(clo53362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5239452523;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam52688_fptr() // lam52688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52689 = arg_buffer[1];
//reading env and args
void* x5229652538 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52395 = (decode_clo(env52689))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52395);
arg_buffer[2] = x5229652538;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52395))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52688 = encode_clo(alloc_clo(lam52688_fptr, 0));

void* lam52690_fptr() // lam52690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52691 = arg_buffer[1];
//reading env and args
void* a5230152548 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5229952544 = (decode_clo(env52691))[3];
//not do dummy comment
void* cons = (decode_clo(env52691))[2];
//not do dummy comment
void* kont52395 = (decode_clo(env52691))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52395;
arg_buffer[3] = a5229952544;
arg_buffer[4] = a5230152548;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52690 = encode_clo(alloc_clo(lam52690_fptr, 0));

void* lam52692_fptr() // lam52692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52693 = arg_buffer[1];
//reading env and args
void* a5230052546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5229952544 = (decode_clo(env52693))[5];
//not do dummy comment
void* op = (decode_clo(env52693))[4];
//not do dummy comment
void* filter = (decode_clo(env52693))[3];
//not do dummy comment
void* cons = (decode_clo(env52693))[2];
//not do dummy comment
void* kont52395 = (decode_clo(env52693))[1];

//creating new closure instance
void** clo53364 = alloc_clo(lam52690_fptr, 3);

//setting env list
clo53364[1] = kont52395;
clo53364[2] = cons;
clo53364[3] = a5229952544;
void* f5239752547 = encode_clo(clo53364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5239752547;
arg_buffer[3] = op;
arg_buffer[4] = a5230052546;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52692 = encode_clo(alloc_clo(lam52692_fptr, 0));

void* lam52694_fptr() // lam52694 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52695 = arg_buffer[1];
//reading env and args
void* a5229952544 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52695))[6];
//not do dummy comment
void* lst = (decode_clo(env52695))[5];
//not do dummy comment
void* op = (decode_clo(env52695))[4];
//not do dummy comment
void* filter = (decode_clo(env52695))[3];
//not do dummy comment
void* cons = (decode_clo(env52695))[2];
//not do dummy comment
void* kont52395 = (decode_clo(env52695))[1];

//creating new closure instance
void** clo53366 = alloc_clo(lam52692_fptr, 5);

//setting env list
clo53366[1] = kont52395;
clo53366[2] = cons;
clo53366[3] = filter;
clo53366[4] = op;
clo53366[5] = a5229952544;
void* f5239852545 = encode_clo(clo53366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5239852545;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52694 = encode_clo(alloc_clo(lam52694_fptr, 0));

void* lam52696_fptr() // lam52696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52697 = arg_buffer[1];
//reading env and args
void* a5230252550 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env52697))[3];
//not do dummy comment
void* filter = (decode_clo(env52697))[2];
//not do dummy comment
void* kont52395 = (decode_clo(env52697))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont52395;
arg_buffer[3] = op;
arg_buffer[4] = a5230252550;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52696 = encode_clo(alloc_clo(lam52696_fptr, 0));

void* lam52698_fptr() // lam52698 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52699 = arg_buffer[1];
//reading env and args
void* a5229852542 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52699))[7];
//not do dummy comment
void* lst = (decode_clo(env52699))[6];
//not do dummy comment
void* op = (decode_clo(env52699))[5];
//not do dummy comment
void* filter = (decode_clo(env52699))[4];
//not do dummy comment
void* car = (decode_clo(env52699))[3];
//not do dummy comment
void* cons = (decode_clo(env52699))[2];
//not do dummy comment
void* kont52395 = (decode_clo(env52699))[1];

//if-clause
bool if_guard53367 = is_true(a5229852542);
if(if_guard53367)
{

//creating new closure instance
void** clo53369 = alloc_clo(lam52694_fptr, 6);

//setting env list
clo53369[1] = kont52395;
clo53369[2] = cons;
clo53369[3] = filter;
clo53369[4] = op;
clo53369[5] = lst;
clo53369[6] = cdr;
void* f5239952543 = encode_clo(clo53369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5239952543;
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
void** clo53371 = alloc_clo(lam52696_fptr, 3);

//setting env list
clo53371[1] = kont52395;
clo53371[2] = filter;
clo53371[3] = op;
void* f5240052549 = encode_clo(clo53371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5240052549;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52698 = encode_clo(alloc_clo(lam52698_fptr, 0));

void* lam52700_fptr() // lam52700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52701 = arg_buffer[1];
//reading env and args
void* a5229752540 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52701))[7];
//not do dummy comment
void* lst = (decode_clo(env52701))[6];
//not do dummy comment
void* op = (decode_clo(env52701))[5];
//not do dummy comment
void* filter = (decode_clo(env52701))[4];
//not do dummy comment
void* car = (decode_clo(env52701))[3];
//not do dummy comment
void* cons = (decode_clo(env52701))[2];
//not do dummy comment
void* kont52395 = (decode_clo(env52701))[1];

//creating new closure instance
void** clo53373 = alloc_clo(lam52698_fptr, 7);

//setting env list
clo53373[1] = kont52395;
clo53373[2] = cons;
clo53373[3] = car;
clo53373[4] = filter;
clo53373[5] = op;
clo53373[6] = lst;
clo53373[7] = cdr;
void* f5240152541 = encode_clo(clo53373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5240152541;
arg_buffer[3] = a5229752540;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52700 = encode_clo(alloc_clo(lam52700_fptr, 0));

void* lam52702_fptr() // lam52702 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52703 = arg_buffer[1];
//reading env and args
void* a5229552536 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52703))[8];
//not do dummy comment
void* op = (decode_clo(env52703))[7];
//not do dummy comment
void* list = (decode_clo(env52703))[6];
//not do dummy comment
void* cdr = (decode_clo(env52703))[5];
//not do dummy comment
void* filter = (decode_clo(env52703))[4];
//not do dummy comment
void* car = (decode_clo(env52703))[3];
//not do dummy comment
void* cons = (decode_clo(env52703))[2];
//not do dummy comment
void* kont52395 = (decode_clo(env52703))[1];

//if-clause
bool if_guard53374 = is_true(a5229552536);
if(if_guard53374)
{

//creating new closure instance
void** clo53376 = alloc_clo(lam52688_fptr, 1);

//setting env list
clo53376[1] = kont52395;
void* f5239652537 = encode_clo(clo53376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5239652537;
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
void** clo53378 = alloc_clo(lam52700_fptr, 7);

//setting env list
clo53378[1] = kont52395;
clo53378[2] = cons;
clo53378[3] = car;
clo53378[4] = filter;
clo53378[5] = op;
clo53378[6] = lst;
clo53378[7] = cdr;
void* f5240252539 = encode_clo(clo53378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5240252539;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52702 = encode_clo(alloc_clo(lam52702_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52704 = arg_buffer[1];
//reading env and args
void* kont52395 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53380 = alloc_clo(lam52702_fptr, 8);

//setting env list
clo53380[1] = kont52395;
clo53380[2] = cons;
clo53380[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo53380[4] = filter;
clo53380[5] = cdr;
clo53380[6] = list;
clo53380[7] = op;
clo53380[8] = lst;
void* f5240352535 = encode_clo(clo53380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5240352535;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam52705_fptr() // lam52705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52706 = arg_buffer[1];
//reading env and args
void* a5230752558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env52706))[3];
//not do dummy comment
void* kont52404 = (decode_clo(env52706))[2];
//not do dummy comment
void* a5230552555 = (decode_clo(env52706))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont52404;
arg_buffer[3] = a5230552555;
arg_buffer[4] = a5230752558;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52705 = encode_clo(alloc_clo(lam52705_fptr, 0));

void* lam52708_fptr() // lam52708 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52709 = arg_buffer[1];
//reading env and args
void* a5230552555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env52709))[4];
//not do dummy comment
void* kont52404 = (decode_clo(env52709))[3];
//not do dummy comment
void* n = (decode_clo(env52709))[2];
//not do dummy comment
void* _u45 = (decode_clo(env52709))[1];
mpz_t* mpzvar53381 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53381, "1", 10);
void* a5230652556 = encode_mpz(mpzvar53381);

//creating new closure instance
void** clo53383 = alloc_clo(lam52705_fptr, 3);

//setting env list
clo53383[1] = a5230552555;
clo53383[2] = kont52404;
clo53383[3] = drop;
void* f5240552557 = encode_clo(clo53383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5240552557;
arg_buffer[3] = n;
arg_buffer[4] = a5230652556;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52708 = encode_clo(alloc_clo(lam52708_fptr, 0));

void* lam52710_fptr() // lam52710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52711 = arg_buffer[1];
//reading env and args
void* a5230452553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52711))[6];
//not do dummy comment
void* kont52404 = (decode_clo(env52711))[5];
//not do dummy comment
void* n = (decode_clo(env52711))[4];
//not do dummy comment
void* _u45 = (decode_clo(env52711))[3];
//not do dummy comment
void* lst = (decode_clo(env52711))[2];
//not do dummy comment
void* drop = (decode_clo(env52711))[1];

//if-clause
bool if_guard53384 = is_true(a5230452553);
if(if_guard53384)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52404);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52404))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53386 = alloc_clo(lam52708_fptr, 4);

//setting env list
clo53386[1] = _u45;
clo53386[2] = n;
clo53386[3] = kont52404;
clo53386[4] = drop;
void* f5240652554 = encode_clo(clo53386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5240652554;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52710 = encode_clo(alloc_clo(lam52710_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52713 = arg_buffer[1];
//reading env and args
void* kont52404 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar53387 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53387, "0", 10);
void* a5230352551 = encode_mpz(mpzvar53387);

//creating new closure instance
void** clo53389 = alloc_clo(lam52710_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo53389[1] = drop;
clo53389[2] = lst;
clo53389[3] = _u45;
clo53389[4] = n;
clo53389[5] = kont52404;
clo53389[6] = cdr;
void* f5240752552 = encode_clo(clo53389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5240752552;
arg_buffer[3] = n;
arg_buffer[4] = a5230352551;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam52714_fptr() // lam52714 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52715 = arg_buffer[1];
//reading env and args
void* a5231152566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5230952562 = (decode_clo(env52715))[3];
//not do dummy comment
void* proc = (decode_clo(env52715))[2];
//not do dummy comment
void* kont52408 = (decode_clo(env52715))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont52408;
arg_buffer[3] = a5230952562;
arg_buffer[4] = a5231152566;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52714 = encode_clo(alloc_clo(lam52714_fptr, 0));

void* lam52716_fptr() // lam52716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52717 = arg_buffer[1];
//reading env and args
void* a5231052564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env52717))[5];
//not do dummy comment
void* a5230952562 = (decode_clo(env52717))[4];
//not do dummy comment
void* proc = (decode_clo(env52717))[3];
//not do dummy comment
void* acc = (decode_clo(env52717))[2];
//not do dummy comment
void* kont52408 = (decode_clo(env52717))[1];

//creating new closure instance
void** clo53391 = alloc_clo(lam52714_fptr, 3);

//setting env list
clo53391[1] = kont52408;
clo53391[2] = proc;
clo53391[3] = a5230952562;
void* f5240952565 = encode_clo(clo53391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5240952565;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5231052564;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52716 = encode_clo(alloc_clo(lam52716_fptr, 0));

void* lam52718_fptr() // lam52718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52719 = arg_buffer[1];
//reading env and args
void* a5230952562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52719))[6];
//not do dummy comment
void* foldr = (decode_clo(env52719))[5];
//not do dummy comment
void* lst = (decode_clo(env52719))[4];
//not do dummy comment
void* proc = (decode_clo(env52719))[3];
//not do dummy comment
void* acc = (decode_clo(env52719))[2];
//not do dummy comment
void* kont52408 = (decode_clo(env52719))[1];

//creating new closure instance
void** clo53393 = alloc_clo(lam52716_fptr, 5);

//setting env list
clo53393[1] = kont52408;
clo53393[2] = acc;
clo53393[3] = proc;
clo53393[4] = a5230952562;
clo53393[5] = foldr;
void* f5241052563 = encode_clo(clo53393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5241052563;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52718 = encode_clo(alloc_clo(lam52718_fptr, 0));

void* lam52720_fptr() // lam52720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52721 = arg_buffer[1];
//reading env and args
void* a5230852560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52721))[7];
//not do dummy comment
void* car = (decode_clo(env52721))[6];
//not do dummy comment
void* foldr = (decode_clo(env52721))[5];
//not do dummy comment
void* lst = (decode_clo(env52721))[4];
//not do dummy comment
void* proc = (decode_clo(env52721))[3];
//not do dummy comment
void* acc = (decode_clo(env52721))[2];
//not do dummy comment
void* kont52408 = (decode_clo(env52721))[1];

//if-clause
bool if_guard53394 = is_true(a5230852560);
if(if_guard53394)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52408);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52408))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53396 = alloc_clo(lam52718_fptr, 6);

//setting env list
clo53396[1] = kont52408;
clo53396[2] = acc;
clo53396[3] = proc;
clo53396[4] = lst;
clo53396[5] = foldr;
clo53396[6] = cdr;
void* f5241152561 = encode_clo(clo53396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5241152561;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52720 = encode_clo(alloc_clo(lam52720_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52722 = arg_buffer[1];
//reading env and args
void* kont52408 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53398 = alloc_clo(lam52720_fptr, 7);

//setting env list
clo53398[1] = kont52408;
clo53398[2] = acc;
clo53398[3] = proc;
clo53398[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo53398[5] = foldr;
clo53398[6] = car;
clo53398[7] = cdr;
void* f5241252559 = encode_clo(clo53398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5241252559;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam52723_fptr() // lam52723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52724 = arg_buffer[1];
//reading env and args
void* a5231552574 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52413 = (decode_clo(env52724))[3];
//not do dummy comment
void* a5231352570 = (decode_clo(env52724))[2];
//not do dummy comment
void* cons = (decode_clo(env52724))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52413;
arg_buffer[3] = a5231352570;
arg_buffer[4] = a5231552574;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52723 = encode_clo(alloc_clo(lam52723_fptr, 0));

void* lam52725_fptr() // lam52725 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52726 = arg_buffer[1];
//reading env and args
void* a5231452572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52413 = (decode_clo(env52726))[5];
//not do dummy comment
void* append = (decode_clo(env52726))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52726))[3];
//not do dummy comment
void* a5231352570 = (decode_clo(env52726))[2];
//not do dummy comment
void* cons = (decode_clo(env52726))[1];

//creating new closure instance
void** clo53400 = alloc_clo(lam52723_fptr, 3);

//setting env list
clo53400[1] = cons;
clo53400[2] = a5231352570;
clo53400[3] = kont52413;
void* f5241452573 = encode_clo(clo53400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5241452573;
arg_buffer[3] = a5231452572;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52725 = encode_clo(alloc_clo(lam52725_fptr, 0));

void* lam52727_fptr() // lam52727 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52728 = arg_buffer[1];
//reading env and args
void* a5231352570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env52728))[6];
//not do dummy comment
void* lst2 = (decode_clo(env52728))[5];
//not do dummy comment
void* lst1 = (decode_clo(env52728))[4];
//not do dummy comment
void* cons = (decode_clo(env52728))[3];
//not do dummy comment
void* kont52413 = (decode_clo(env52728))[2];
//not do dummy comment
void* cdr = (decode_clo(env52728))[1];

//creating new closure instance
void** clo53402 = alloc_clo(lam52725_fptr, 5);

//setting env list
clo53402[1] = cons;
clo53402[2] = a5231352570;
clo53402[3] = lst2;
clo53402[4] = append;
clo53402[5] = kont52413;
void* f5241552571 = encode_clo(clo53402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5241552571;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52727 = encode_clo(alloc_clo(lam52727_fptr, 0));

void* lam52729_fptr() // lam52729 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52730 = arg_buffer[1];
//reading env and args
void* a5231252568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env52730))[7];
//not do dummy comment
void* lst2 = (decode_clo(env52730))[6];
//not do dummy comment
void* cons = (decode_clo(env52730))[5];
//not do dummy comment
void* kont52413 = (decode_clo(env52730))[4];
//not do dummy comment
void* cdr = (decode_clo(env52730))[3];
//not do dummy comment
void* lst1 = (decode_clo(env52730))[2];
//not do dummy comment
void* car = (decode_clo(env52730))[1];

//if-clause
bool if_guard53403 = is_true(a5231252568);
if(if_guard53403)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52413);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52413))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53405 = alloc_clo(lam52727_fptr, 6);

//setting env list
clo53405[1] = cdr;
clo53405[2] = kont52413;
clo53405[3] = cons;
clo53405[4] = lst1;
clo53405[5] = lst2;
clo53405[6] = append;
void* f5241652569 = encode_clo(clo53405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5241652569;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52729 = encode_clo(alloc_clo(lam52729_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52731 = arg_buffer[1];
//reading env and args
void* kont52413 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53407 = alloc_clo(lam52729_fptr, 7);

//setting env list
clo53407[1] = car;
clo53407[2] = lst1;
clo53407[3] = cdr;
clo53407[4] = kont52413;
clo53407[5] = cons;
clo53407[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo53407[7] = append;
void* f5241752567 = encode_clo(clo53407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5241752567;
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
void* _52732 = arg_buffer[1];
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

void* kont5241852575 = prim_car(lst);
void* lst52576 = prim_cdr(lst);
void* x5231652577 = apply_prim_hash(lst52576);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5241852575);
arg_buffer[2] = x5231652577;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5241852575))[0]);
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
void* _52733 = arg_buffer[1];
//reading env and args
void* kont52420 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5231752578 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52420);
arg_buffer[2] = x5231752578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52420))[0]);
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
void* _52734 = arg_buffer[1];
//reading env and args
void* kont52421 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5231852579 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52421);
arg_buffer[2] = x5231852579;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52421))[0]);
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
void* _52735 = arg_buffer[1];
//reading env and args
void* kont52422 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5231952580 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52422);
arg_buffer[2] = x5231952580;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52422))[0]);
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
void* _52736 = arg_buffer[1];
//reading env and args
void* kont52423 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5232052581 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52423);
arg_buffer[2] = x5232052581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52423))[0]);
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
void* _52742 = arg_buffer[1];
//reading env and args
void* kont52424 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar53408 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53408, "100", 10);
void* a5232152582 = encode_mpz(mpzvar53408);
mpz_t* mpzvar53409 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53409, "20", 10);
void* a5232252583 = encode_mpz(mpzvar53409);
mpz_t* mpzvar53410 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53410, "10", 10);
void* a5232352584 = encode_mpz(mpzvar53410);
mpz_t* mpzvar53411 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53411, "5", 10);
void* a5232452585 = encode_mpz(mpzvar53411);
mpz_t* mpzvar53412 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53412, "1", 10);
void* a5232552586 = encode_mpz(mpzvar53412);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = kont52424;
arg_buffer[3] = a5232152582;
arg_buffer[4] = a5232252583;
arg_buffer[5] = a5232352584;
arg_buffer[6] = a5232452585;
arg_buffer[7] = a5232552586;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam52743_fptr() // lam52743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52744 = arg_buffer[1];
//reading env and args
void* x5232652588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52425 = (decode_clo(env52744))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52425);
arg_buffer[2] = x5232652588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52425))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52743 = encode_clo(alloc_clo(lam52743_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52745 = arg_buffer[1];
//reading env and args
void* kont52425 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo53414 = alloc_clo(lam52743_fptr, 1);

//setting env list
clo53414[1] = kont52425;
void* f5242652587 = encode_clo(clo53414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5242652587;
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

