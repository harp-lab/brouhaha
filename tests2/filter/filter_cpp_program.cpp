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
void* _22751 = arg_buffer[1];
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

void* kont2247822583 = prim_car(lst);
void* lst22584 = prim_cdr(lst);
void* x2238822585 = apply_prim__u43(lst22584);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2247822583);
arg_buffer[2] = x2238822585;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2247822583))[0]);
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
void* _22752 = arg_buffer[1];
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

void* kont2248022586 = prim_car(lst);
void* lst22587 = prim_cdr(lst);
void* x2238922588 = apply_prim__u45(lst22587);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2248022586);
arg_buffer[2] = x2238922588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2248022586))[0]);
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
void* _22753 = arg_buffer[1];
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

void* kont2248222589 = prim_car(lst);
void* lst22590 = prim_cdr(lst);
void* x2239022591 = apply_prim__u42(lst22590);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2248222589);
arg_buffer[2] = x2239022591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2248222589))[0]);
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
void* _22754 = arg_buffer[1];
//reading env and args
void* kont22484 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2239122592 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22484);
arg_buffer[2] = x2239122592;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22484))[0]);
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
void* _22755 = arg_buffer[1];
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

void* kont2248522593 = prim_car(lst);
void* lst22594 = prim_cdr(lst);
void* x2239222595 = apply_prim__u47(lst22594);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2248522593);
arg_buffer[2] = x2239222595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2248522593))[0]);
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
void* _22756 = arg_buffer[1];
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

void* kont2248722596 = prim_car(lst);
void* lst22597 = prim_cdr(lst);
void* x2239322598 = apply_prim__u61(lst22597);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2248722596);
arg_buffer[2] = x2239322598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2248722596))[0]);
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
void* _22757 = arg_buffer[1];
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

void* kont2248922599 = prim_car(lst);
void* lst22600 = prim_cdr(lst);
void* x2239422601 = apply_prim__u62(lst22600);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2248922599);
arg_buffer[2] = x2239422601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2248922599))[0]);
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
void* _22758 = arg_buffer[1];
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

void* kont2249122602 = prim_car(lst);
void* lst22603 = prim_cdr(lst);
void* x2239522604 = apply_prim__u60(lst22603);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2249122602);
arg_buffer[2] = x2239522604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2249122602))[0]);
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
void* _22759 = arg_buffer[1];
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

void* kont2249322605 = prim_car(lst);
void* lst22606 = prim_cdr(lst);
void* x2239622607 = apply_prim__u60_u61(lst22606);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2249322605);
arg_buffer[2] = x2239622607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2249322605))[0]);
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
void* _22760 = arg_buffer[1];
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

void* kont2249522608 = prim_car(lst);
void* lst22609 = prim_cdr(lst);
void* x2239722610 = apply_prim__u62_u61(lst22609);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2249522608);
arg_buffer[2] = x2239722610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2249522608))[0]);
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
void* _22761 = arg_buffer[1];
//reading env and args
void* kont22497 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2239822611 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22497);
arg_buffer[2] = x2239822611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22497))[0]);
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
void* _22762 = arg_buffer[1];
//reading env and args
void* kont22498 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2239922612 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22498);
arg_buffer[2] = x2239922612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22498))[0]);
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
void* _22763 = arg_buffer[1];
//reading env and args
void* kont22499 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2240022613 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22499);
arg_buffer[2] = x2240022613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22499))[0]);
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
void* _22764 = arg_buffer[1];
//reading env and args
void* kont22500 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2240122614 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22500);
arg_buffer[2] = x2240122614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22500))[0]);
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
void* _22765 = arg_buffer[1];
//reading env and args
void* kont22501 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2240222615 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22501);
arg_buffer[2] = x2240222615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22501))[0]);
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
void* _22766 = arg_buffer[1];
//reading env and args
void* kont22502 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2240322616 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22502);
arg_buffer[2] = x2240322616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22502))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam22767_fptr() // lam22767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22768 = arg_buffer[1];
//reading env and args
void* a2240622620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22503 = (decode_clo(env22768))[3];
//not do dummy comment
void* a2240422617 = (decode_clo(env22768))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env22768))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22503;
arg_buffer[3] = a2240422617;
arg_buffer[4] = a2240622620;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22767 = encode_clo(alloc_clo(lam22767_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22771 = arg_buffer[1];
//reading env and args
void* kont22503 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29390 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29390, "0", 10);
void* a2240422617 = encode_mpz(mpzvar29390);
mpz_t* mpzvar29391 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29391, "2", 10);
void* a2240522618 = encode_mpz(mpzvar29391);

//creating new closure instance
void** clo29393 = alloc_clo(lam22767_fptr, 3);

//setting env list
clo29393[1] = equal_u63;
clo29393[2] = a2240422617;
clo29393[3] = kont22503;
void* f2250422619 = encode_clo(clo29393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2250422619;
arg_buffer[3] = x;
arg_buffer[4] = a2240522618;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam22772_fptr() // lam22772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22773 = arg_buffer[1];
//reading env and args
void* a2240922624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22505 = (decode_clo(env22773))[3];
//not do dummy comment
void* a2240722621 = (decode_clo(env22773))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env22773))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22505;
arg_buffer[3] = a2240722621;
arg_buffer[4] = a2240922624;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22772 = encode_clo(alloc_clo(lam22772_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22776 = arg_buffer[1];
//reading env and args
void* kont22505 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29394 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29394, "1", 10);
void* a2240722621 = encode_mpz(mpzvar29394);
mpz_t* mpzvar29395 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29395, "2", 10);
void* a2240822622 = encode_mpz(mpzvar29395);

//creating new closure instance
void** clo29397 = alloc_clo(lam22772_fptr, 3);

//setting env list
clo29397[1] = equal_u63;
clo29397[2] = a2240722621;
clo29397[3] = kont22505;
void* f2250622623 = encode_clo(clo29397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2250622623;
arg_buffer[3] = x;
arg_buffer[4] = a2240822622;
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
void* _22777 = arg_buffer[1];
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

void* kont2250722625 = prim_car(x);
void* x22626 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2250722625);
arg_buffer[2] = x22626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2250722625))[0]);
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
void* _22778 = arg_buffer[1];
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

void* kont2250922627 = prim_car(lst);
void* lst22628 = prim_cdr(lst);
void* x2241022629 = apply_prim_and(lst22628);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2250922627);
arg_buffer[2] = x2241022629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2250922627))[0]);
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
void* _22779 = arg_buffer[1];
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

void* kont2251122630 = prim_car(lst);
void* lst22631 = prim_cdr(lst);
void* x2241122632 = apply_prim_or(lst22631);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2251122630);
arg_buffer[2] = x2241122632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2251122630))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam22782_fptr() // lam22782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22783 = arg_buffer[1];
//reading env and args
void* a2241722642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22513 = (decode_clo(env22783))[3];
//not do dummy comment
void* x = (decode_clo(env22783))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22783))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont22513;
arg_buffer[3] = x;
arg_buffer[4] = a2241722642;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22782 = encode_clo(alloc_clo(lam22782_fptr, 0));

void* lam22784_fptr() // lam22784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22785 = arg_buffer[1];
//reading env and args
void* a2241522639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22785))[5];
//not do dummy comment
void* lst = (decode_clo(env22785))[4];
//not do dummy comment
void* kont22513 = (decode_clo(env22785))[3];
//not do dummy comment
void* x = (decode_clo(env22785))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22785))[1];

//if-clause
bool if_guard29398 = is_true(a2241522639);
if(if_guard29398)
{
void* x2241622640 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22513);
arg_buffer[2] = x2241622640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22513))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29400 = alloc_clo(lam22782_fptr, 3);

//setting env list
clo29400[1] = member_u63;
clo29400[2] = x;
clo29400[3] = kont22513;
void* f2251422641 = encode_clo(clo29400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2251422641;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22784 = encode_clo(alloc_clo(lam22784_fptr, 0));

void* lam22786_fptr() // lam22786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22787 = arg_buffer[1];
//reading env and args
void* a2241422637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22787))[6];
//not do dummy comment
void* lst = (decode_clo(env22787))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env22787))[4];
//not do dummy comment
void* kont22513 = (decode_clo(env22787))[3];
//not do dummy comment
void* x = (decode_clo(env22787))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22787))[1];

//creating new closure instance
void** clo29402 = alloc_clo(lam22784_fptr, 5);

//setting env list
clo29402[1] = member_u63;
clo29402[2] = x;
clo29402[3] = kont22513;
clo29402[4] = lst;
clo29402[5] = cdr;
void* f2251522638 = encode_clo(clo29402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2251522638;
arg_buffer[3] = a2241422637;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22786 = encode_clo(alloc_clo(lam22786_fptr, 0));

void* lam22788_fptr() // lam22788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22789 = arg_buffer[1];
//reading env and args
void* a2241222634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22789))[7];
//not do dummy comment
void* lst = (decode_clo(env22789))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env22789))[5];
//not do dummy comment
void* kont22513 = (decode_clo(env22789))[4];
//not do dummy comment
void* x = (decode_clo(env22789))[3];
//not do dummy comment
void* car = (decode_clo(env22789))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22789))[1];

//if-clause
bool if_guard29403 = is_true(a2241222634);
if(if_guard29403)
{
void* x2241322635 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22513);
arg_buffer[2] = x2241322635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22513))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29405 = alloc_clo(lam22786_fptr, 6);

//setting env list
clo29405[1] = member_u63;
clo29405[2] = x;
clo29405[3] = kont22513;
clo29405[4] = equal_u63;
clo29405[5] = lst;
clo29405[6] = cdr;
void* f2251622636 = encode_clo(clo29405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2251622636;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22788 = encode_clo(alloc_clo(lam22788_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22790 = arg_buffer[1];
//reading env and args
void* kont22513 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29407 = alloc_clo(lam22788_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo29407[1] = member_u63;
clo29407[2] = car;
clo29407[3] = x;
clo29407[4] = kont22513;
clo29407[5] = equal_u63;
clo29407[6] = lst;
clo29407[7] = cdr;
void* f2251722633 = encode_clo(clo29407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2251722633;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam22791_fptr() // lam22791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22792 = arg_buffer[1];
//reading env and args
void* a2242122650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2242022648 = (decode_clo(env22792))[4];
//not do dummy comment
void* fun = (decode_clo(env22792))[3];
//not do dummy comment
void* foldl = (decode_clo(env22792))[2];
//not do dummy comment
void* kont22518 = (decode_clo(env22792))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont22518;
arg_buffer[3] = fun;
arg_buffer[4] = a2242022648;
arg_buffer[5] = a2242122650;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22791 = encode_clo(alloc_clo(lam22791_fptr, 0));

void* lam22793_fptr() // lam22793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22794 = arg_buffer[1];
//reading env and args
void* a2242022648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22794))[5];
//not do dummy comment
void* lst = (decode_clo(env22794))[4];
//not do dummy comment
void* fun = (decode_clo(env22794))[3];
//not do dummy comment
void* foldl = (decode_clo(env22794))[2];
//not do dummy comment
void* kont22518 = (decode_clo(env22794))[1];

//creating new closure instance
void** clo29409 = alloc_clo(lam22791_fptr, 4);

//setting env list
clo29409[1] = kont22518;
clo29409[2] = foldl;
clo29409[3] = fun;
clo29409[4] = a2242022648;
void* f2251922649 = encode_clo(clo29409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2251922649;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22793 = encode_clo(alloc_clo(lam22793_fptr, 0));

void* lam22795_fptr() // lam22795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22796 = arg_buffer[1];
//reading env and args
void* a2241922646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22796))[6];
//not do dummy comment
void* lst = (decode_clo(env22796))[5];
//not do dummy comment
void* fun = (decode_clo(env22796))[4];
//not do dummy comment
void* acc = (decode_clo(env22796))[3];
//not do dummy comment
void* foldl = (decode_clo(env22796))[2];
//not do dummy comment
void* kont22518 = (decode_clo(env22796))[1];

//creating new closure instance
void** clo29411 = alloc_clo(lam22793_fptr, 5);

//setting env list
clo29411[1] = kont22518;
clo29411[2] = foldl;
clo29411[3] = fun;
clo29411[4] = lst;
clo29411[5] = cdr;
void* f2252022647 = encode_clo(clo29411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2252022647;
arg_buffer[3] = a2241922646;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22795 = encode_clo(alloc_clo(lam22795_fptr, 0));

void* lam22797_fptr() // lam22797 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22798 = arg_buffer[1];
//reading env and args
void* a2241822644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22798))[7];
//not do dummy comment
void* lst = (decode_clo(env22798))[6];
//not do dummy comment
void* fun = (decode_clo(env22798))[5];
//not do dummy comment
void* acc = (decode_clo(env22798))[4];
//not do dummy comment
void* car = (decode_clo(env22798))[3];
//not do dummy comment
void* foldl = (decode_clo(env22798))[2];
//not do dummy comment
void* kont22518 = (decode_clo(env22798))[1];

//if-clause
bool if_guard29412 = is_true(a2241822644);
if(if_guard29412)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22518);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22518))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29414 = alloc_clo(lam22795_fptr, 6);

//setting env list
clo29414[1] = kont22518;
clo29414[2] = foldl;
clo29414[3] = acc;
clo29414[4] = fun;
clo29414[5] = lst;
clo29414[6] = cdr;
void* f2252122645 = encode_clo(clo29414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2252122645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22797 = encode_clo(alloc_clo(lam22797_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22799 = arg_buffer[1];
//reading env and args
void* kont22518 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29416 = alloc_clo(lam22797_fptr, 7);

//setting env list
clo29416[1] = kont22518;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo29416[2] = foldl;
clo29416[3] = car;
clo29416[4] = acc;
clo29416[5] = fun;
clo29416[6] = lst;
clo29416[7] = cdr;
void* f2252222643 = encode_clo(clo29416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2252222643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam22800_fptr() // lam22800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22801 = arg_buffer[1];
//reading env and args
void* a2242522658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22523 = (decode_clo(env22801))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22801))[2];
//not do dummy comment
void* a2242322654 = (decode_clo(env22801))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22523;
arg_buffer[3] = a2242322654;
arg_buffer[4] = a2242522658;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22800 = encode_clo(alloc_clo(lam22800_fptr, 0));

void* lam22802_fptr() // lam22802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22803 = arg_buffer[1];
//reading env and args
void* a2242422656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22523 = (decode_clo(env22803))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22803))[4];
//not do dummy comment
void* cons = (decode_clo(env22803))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22803))[2];
//not do dummy comment
void* a2242322654 = (decode_clo(env22803))[1];

//creating new closure instance
void** clo29418 = alloc_clo(lam22800_fptr, 3);

//setting env list
clo29418[1] = a2242322654;
clo29418[2] = reverse_u45helper;
clo29418[3] = kont22523;
void* f2252422657 = encode_clo(clo29418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2252422657;
arg_buffer[3] = a2242422656;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22802 = encode_clo(alloc_clo(lam22802_fptr, 0));

void* lam22804_fptr() // lam22804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22805 = arg_buffer[1];
//reading env and args
void* a2242322654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22805))[6];
//not do dummy comment
void* lst2 = (decode_clo(env22805))[5];
//not do dummy comment
void* car = (decode_clo(env22805))[4];
//not do dummy comment
void* cons = (decode_clo(env22805))[3];
//not do dummy comment
void* lst = (decode_clo(env22805))[2];
//not do dummy comment
void* kont22523 = (decode_clo(env22805))[1];

//creating new closure instance
void** clo29420 = alloc_clo(lam22802_fptr, 5);

//setting env list
clo29420[1] = a2242322654;
clo29420[2] = reverse_u45helper;
clo29420[3] = cons;
clo29420[4] = lst2;
clo29420[5] = kont22523;
void* f2252522655 = encode_clo(clo29420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2252522655;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22804 = encode_clo(alloc_clo(lam22804_fptr, 0));

void* lam22806_fptr() // lam22806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22807 = arg_buffer[1];
//reading env and args
void* a2242222652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22807))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22807))[6];
//not do dummy comment
void* lst2 = (decode_clo(env22807))[5];
//not do dummy comment
void* car = (decode_clo(env22807))[4];
//not do dummy comment
void* cons = (decode_clo(env22807))[3];
//not do dummy comment
void* lst = (decode_clo(env22807))[2];
//not do dummy comment
void* kont22523 = (decode_clo(env22807))[1];

//if-clause
bool if_guard29421 = is_true(a2242222652);
if(if_guard29421)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22523);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22523))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29423 = alloc_clo(lam22804_fptr, 6);

//setting env list
clo29423[1] = kont22523;
clo29423[2] = lst;
clo29423[3] = cons;
clo29423[4] = car;
clo29423[5] = lst2;
clo29423[6] = reverse_u45helper;
void* f2252622653 = encode_clo(clo29423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2252622653;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22806 = encode_clo(alloc_clo(lam22806_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22808 = arg_buffer[1];
//reading env and args
void* kont22523 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29425 = alloc_clo(lam22806_fptr, 7);

//setting env list
clo29425[1] = kont22523;
clo29425[2] = lst;
clo29425[3] = cons;
clo29425[4] = car;
clo29425[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo29425[6] = reverse_u45helper;
clo29425[7] = cdr;
void* f2252722651 = encode_clo(clo29425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2252722651;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam22809_fptr() // lam22809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22810 = arg_buffer[1];
//reading env and args
void* a2242622660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22810))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22810))[2];
//not do dummy comment
void* kont22528 = (decode_clo(env22810))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22528;
arg_buffer[3] = lst;
arg_buffer[4] = a2242622660;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22809 = encode_clo(alloc_clo(lam22809_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22811 = arg_buffer[1];
//reading env and args
void* kont22528 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29427 = alloc_clo(lam22809_fptr, 3);

//setting env list
clo29427[1] = kont22528;
clo29427[2] = reverse_u45helper;
clo29427[3] = lst;
void* f2252922659 = encode_clo(clo29427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2252922659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam22812_fptr() // lam22812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22813 = arg_buffer[1];
//reading env and args
void* x2242922665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22530 = (decode_clo(env22813))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22530);
arg_buffer[2] = x2242922665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22530))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22812 = encode_clo(alloc_clo(lam22812_fptr, 0));

void* lam22814_fptr() // lam22814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22815 = arg_buffer[1];
//reading env and args
void* a2243422674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2243022667 = (decode_clo(env22815))[4];
//not do dummy comment
void* a2243222670 = (decode_clo(env22815))[3];
//not do dummy comment
void* kont22530 = (decode_clo(env22815))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env22815))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22530;
arg_buffer[3] = a2243022667;
arg_buffer[4] = a2243222670;
arg_buffer[5] = a2243422674;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22814 = encode_clo(alloc_clo(lam22814_fptr, 0));

void* lam22816_fptr() // lam22816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22817 = arg_buffer[1];
//reading env and args
void* a2243322672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2243022667 = (decode_clo(env22817))[6];
//not do dummy comment
void* a2243222670 = (decode_clo(env22817))[5];
//not do dummy comment
void* kont22530 = (decode_clo(env22817))[4];
//not do dummy comment
void* cons = (decode_clo(env22817))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22817))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22817))[1];

//creating new closure instance
void** clo29429 = alloc_clo(lam22814_fptr, 4);

//setting env list
clo29429[1] = take_u45helper;
clo29429[2] = kont22530;
clo29429[3] = a2243222670;
clo29429[4] = a2243022667;
void* f2253222673 = encode_clo(clo29429);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2253222673;
arg_buffer[3] = a2243322672;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22816 = encode_clo(alloc_clo(lam22816_fptr, 0));

void* lam22818_fptr() // lam22818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22819 = arg_buffer[1];
//reading env and args
void* a2243222670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22530 = (decode_clo(env22819))[7];
//not do dummy comment
void* car = (decode_clo(env22819))[6];
//not do dummy comment
void* cons = (decode_clo(env22819))[5];
//not do dummy comment
void* lst = (decode_clo(env22819))[4];
//not do dummy comment
void* a2243022667 = (decode_clo(env22819))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22819))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22819))[1];

//creating new closure instance
void** clo29431 = alloc_clo(lam22816_fptr, 6);

//setting env list
clo29431[1] = lst2;
clo29431[2] = take_u45helper;
clo29431[3] = cons;
clo29431[4] = kont22530;
clo29431[5] = a2243222670;
clo29431[6] = a2243022667;
void* f2253322671 = encode_clo(clo29431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2253322671;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22818 = encode_clo(alloc_clo(lam22818_fptr, 0));

void* lam22821_fptr() // lam22821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22822 = arg_buffer[1];
//reading env and args
void* a2243022667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22822))[8];
//not do dummy comment
void* kont22530 = (decode_clo(env22822))[7];
//not do dummy comment
void* cons = (decode_clo(env22822))[6];
//not do dummy comment
void* _u45 = (decode_clo(env22822))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env22822))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22822))[3];
//not do dummy comment
void* n = (decode_clo(env22822))[2];
//not do dummy comment
void* car = (decode_clo(env22822))[1];
mpz_t* mpzvar29432 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29432, "1", 10);
void* a2243122668 = encode_mpz(mpzvar29432);

//creating new closure instance
void** clo29434 = alloc_clo(lam22818_fptr, 7);

//setting env list
clo29434[1] = lst2;
clo29434[2] = take_u45helper;
clo29434[3] = a2243022667;
clo29434[4] = lst;
clo29434[5] = cons;
clo29434[6] = car;
clo29434[7] = kont22530;
void* f2253422669 = encode_clo(clo29434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2253422669;
arg_buffer[3] = n;
arg_buffer[4] = a2243122668;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22821 = encode_clo(alloc_clo(lam22821_fptr, 0));

void* lam22823_fptr() // lam22823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22824 = arg_buffer[1];
//reading env and args
void* a2242822663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22824))[10];
//not do dummy comment
void* lst = (decode_clo(env22824))[9];
//not do dummy comment
void* reverse = (decode_clo(env22824))[8];
//not do dummy comment
void* kont22530 = (decode_clo(env22824))[7];
//not do dummy comment
void* cons = (decode_clo(env22824))[6];
//not do dummy comment
void* _u45 = (decode_clo(env22824))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env22824))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22824))[3];
//not do dummy comment
void* n = (decode_clo(env22824))[2];
//not do dummy comment
void* car = (decode_clo(env22824))[1];

//if-clause
bool if_guard29435 = is_true(a2242822663);
if(if_guard29435)
{

//creating new closure instance
void** clo29437 = alloc_clo(lam22812_fptr, 1);

//setting env list
clo29437[1] = kont22530;
void* f2253122664 = encode_clo(clo29437);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2253122664;
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
void** clo29439 = alloc_clo(lam22821_fptr, 8);

//setting env list
clo29439[1] = car;
clo29439[2] = n;
clo29439[3] = lst2;
clo29439[4] = take_u45helper;
clo29439[5] = _u45;
clo29439[6] = cons;
clo29439[7] = kont22530;
clo29439[8] = lst;
void* f2253522666 = encode_clo(clo29439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2253522666;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22823 = encode_clo(alloc_clo(lam22823_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22826 = arg_buffer[1];
//reading env and args
void* kont22530 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar29440 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29440, "0", 10);
void* a2242722661 = encode_mpz(mpzvar29440);

//creating new closure instance
void** clo29442 = alloc_clo(lam22823_fptr, 10);

//setting env list
clo29442[1] = car;
clo29442[2] = n;
clo29442[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo29442[4] = take_u45helper;
clo29442[5] = _u45;
clo29442[6] = cons;
clo29442[7] = kont22530;
clo29442[8] = reverse;
clo29442[9] = lst;
clo29442[10] = cdr;
void* f2253622662 = encode_clo(clo29442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2253622662;
arg_buffer[3] = n;
arg_buffer[4] = a2242722661;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam22827_fptr() // lam22827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22828 = arg_buffer[1];
//reading env and args
void* a2243522676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22537 = (decode_clo(env22828))[4];
//not do dummy comment
void* lst = (decode_clo(env22828))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22828))[2];
//not do dummy comment
void* n = (decode_clo(env22828))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22537;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2243522676;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22827 = encode_clo(alloc_clo(lam22827_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22829 = arg_buffer[1];
//reading env and args
void* kont22537 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29444 = alloc_clo(lam22827_fptr, 4);

//setting env list
clo29444[1] = n;
clo29444[2] = take_u45helper;
clo29444[3] = lst;
clo29444[4] = kont22537;
void* f2253822675 = encode_clo(clo29444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2253822675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam22831_fptr() // lam22831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22832 = arg_buffer[1];
//reading env and args
void* a2244022684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2243822680 = (decode_clo(env22832))[3];
//not do dummy comment
void* kont22539 = (decode_clo(env22832))[2];
//not do dummy comment
void* _u43 = (decode_clo(env22832))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont22539;
arg_buffer[3] = a2243822680;
arg_buffer[4] = a2244022684;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22831 = encode_clo(alloc_clo(lam22831_fptr, 0));

void* lam22833_fptr() // lam22833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22834 = arg_buffer[1];
//reading env and args
void* a2243922682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2243822680 = (decode_clo(env22834))[4];
//not do dummy comment
void* kont22539 = (decode_clo(env22834))[3];
//not do dummy comment
void* length = (decode_clo(env22834))[2];
//not do dummy comment
void* _u43 = (decode_clo(env22834))[1];

//creating new closure instance
void** clo29446 = alloc_clo(lam22831_fptr, 3);

//setting env list
clo29446[1] = _u43;
clo29446[2] = kont22539;
clo29446[3] = a2243822680;
void* f2254022683 = encode_clo(clo29446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2254022683;
arg_buffer[3] = a2243922682;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22833 = encode_clo(alloc_clo(lam22833_fptr, 0));

void* lam22836_fptr() // lam22836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22837 = arg_buffer[1];
//reading env and args
void* a2243622678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22837))[5];
//not do dummy comment
void* length = (decode_clo(env22837))[4];
//not do dummy comment
void* _u43 = (decode_clo(env22837))[3];
//not do dummy comment
void* lst = (decode_clo(env22837))[2];
//not do dummy comment
void* kont22539 = (decode_clo(env22837))[1];

//if-clause
bool if_guard29447 = is_true(a2243622678);
if(if_guard29447)
{
mpz_t* mpzvar29448 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29448, "0", 10);
void* x2243722679 = encode_mpz(mpzvar29448);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22539);
arg_buffer[2] = x2243722679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22539))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar29449 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29449, "1", 10);
void* a2243822680 = encode_mpz(mpzvar29449);

//creating new closure instance
void** clo29451 = alloc_clo(lam22833_fptr, 4);

//setting env list
clo29451[1] = _u43;
clo29451[2] = length;
clo29451[3] = kont22539;
clo29451[4] = a2243822680;
void* f2254122681 = encode_clo(clo29451);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2254122681;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22836 = encode_clo(alloc_clo(lam22836_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22838 = arg_buffer[1];
//reading env and args
void* kont22539 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29453 = alloc_clo(lam22836_fptr, 5);

//setting env list
clo29453[1] = kont22539;
clo29453[2] = lst;
clo29453[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo29453[4] = length;
clo29453[5] = cdr;
void* f2254222677 = encode_clo(clo29453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2254222677;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam22839_fptr() // lam22839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22840 = arg_buffer[1];
//reading env and args
void* x2244222688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22543 = (decode_clo(env22840))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22543);
arg_buffer[2] = x2244222688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22543))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22839 = encode_clo(alloc_clo(lam22839_fptr, 0));

void* lam22841_fptr() // lam22841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22842 = arg_buffer[1];
//reading env and args
void* a2244622696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22543 = (decode_clo(env22842))[3];
//not do dummy comment
void* a2244422692 = (decode_clo(env22842))[2];
//not do dummy comment
void* cons = (decode_clo(env22842))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22543;
arg_buffer[3] = a2244422692;
arg_buffer[4] = a2244622696;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22841 = encode_clo(alloc_clo(lam22841_fptr, 0));

void* lam22843_fptr() // lam22843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22844 = arg_buffer[1];
//reading env and args
void* a2244522694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env22844))[5];
//not do dummy comment
void* kont22543 = (decode_clo(env22844))[4];
//not do dummy comment
void* proc = (decode_clo(env22844))[3];
//not do dummy comment
void* a2244422692 = (decode_clo(env22844))[2];
//not do dummy comment
void* cons = (decode_clo(env22844))[1];

//creating new closure instance
void** clo29455 = alloc_clo(lam22841_fptr, 3);

//setting env list
clo29455[1] = cons;
clo29455[2] = a2244422692;
clo29455[3] = kont22543;
void* f2254522695 = encode_clo(clo29455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2254522695;
arg_buffer[3] = proc;
arg_buffer[4] = a2244522694;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22843 = encode_clo(alloc_clo(lam22843_fptr, 0));

void* lam22845_fptr() // lam22845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22846 = arg_buffer[1];
//reading env and args
void* a2244422692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22846))[6];
//not do dummy comment
void* lst = (decode_clo(env22846))[5];
//not do dummy comment
void* map = (decode_clo(env22846))[4];
//not do dummy comment
void* kont22543 = (decode_clo(env22846))[3];
//not do dummy comment
void* proc = (decode_clo(env22846))[2];
//not do dummy comment
void* cons = (decode_clo(env22846))[1];

//creating new closure instance
void** clo29457 = alloc_clo(lam22843_fptr, 5);

//setting env list
clo29457[1] = cons;
clo29457[2] = a2244422692;
clo29457[3] = proc;
clo29457[4] = kont22543;
clo29457[5] = map;
void* f2254622693 = encode_clo(clo29457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2254622693;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22845 = encode_clo(alloc_clo(lam22845_fptr, 0));

void* lam22847_fptr() // lam22847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22848 = arg_buffer[1];
//reading env and args
void* a2244322690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22848))[6];
//not do dummy comment
void* lst = (decode_clo(env22848))[5];
//not do dummy comment
void* map = (decode_clo(env22848))[4];
//not do dummy comment
void* kont22543 = (decode_clo(env22848))[3];
//not do dummy comment
void* proc = (decode_clo(env22848))[2];
//not do dummy comment
void* cons = (decode_clo(env22848))[1];

//creating new closure instance
void** clo29459 = alloc_clo(lam22845_fptr, 6);

//setting env list
clo29459[1] = cons;
clo29459[2] = proc;
clo29459[3] = kont22543;
clo29459[4] = map;
clo29459[5] = lst;
clo29459[6] = cdr;
void* f2254722691 = encode_clo(clo29459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2254722691;
arg_buffer[3] = a2244322690;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22847 = encode_clo(alloc_clo(lam22847_fptr, 0));

void* lam22849_fptr() // lam22849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22850 = arg_buffer[1];
//reading env and args
void* a2244122686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22850))[8];
//not do dummy comment
void* map = (decode_clo(env22850))[7];
//not do dummy comment
void* kont22543 = (decode_clo(env22850))[6];
//not do dummy comment
void* proc = (decode_clo(env22850))[5];
//not do dummy comment
void* car = (decode_clo(env22850))[4];
//not do dummy comment
void* cons = (decode_clo(env22850))[3];
//not do dummy comment
void* list = (decode_clo(env22850))[2];
//not do dummy comment
void* cdr = (decode_clo(env22850))[1];

//if-clause
bool if_guard29460 = is_true(a2244122686);
if(if_guard29460)
{

//creating new closure instance
void** clo29462 = alloc_clo(lam22839_fptr, 1);

//setting env list
clo29462[1] = kont22543;
void* f2254422687 = encode_clo(clo29462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2254422687;
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
void** clo29464 = alloc_clo(lam22847_fptr, 6);

//setting env list
clo29464[1] = cons;
clo29464[2] = proc;
clo29464[3] = kont22543;
clo29464[4] = map;
clo29464[5] = lst;
clo29464[6] = cdr;
void* f2254822689 = encode_clo(clo29464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2254822689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22849 = encode_clo(alloc_clo(lam22849_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22851 = arg_buffer[1];
//reading env and args
void* kont22543 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29466 = alloc_clo(lam22849_fptr, 8);

//setting env list
clo29466[1] = cdr;
clo29466[2] = list;
clo29466[3] = cons;
clo29466[4] = car;
clo29466[5] = proc;
clo29466[6] = kont22543;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo29466[7] = map;
clo29466[8] = lst;
void* f2254922685 = encode_clo(clo29466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2254922685;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam22852_fptr() // lam22852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22853 = arg_buffer[1];
//reading env and args
void* x2244822700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22550 = (decode_clo(env22853))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22550);
arg_buffer[2] = x2244822700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22550))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22852 = encode_clo(alloc_clo(lam22852_fptr, 0));

void* lam22854_fptr() // lam22854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22855 = arg_buffer[1];
//reading env and args
void* a2245322710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2245122706 = (decode_clo(env22855))[3];
//not do dummy comment
void* cons = (decode_clo(env22855))[2];
//not do dummy comment
void* kont22550 = (decode_clo(env22855))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22550;
arg_buffer[3] = a2245122706;
arg_buffer[4] = a2245322710;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22854 = encode_clo(alloc_clo(lam22854_fptr, 0));

void* lam22856_fptr() // lam22856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22857 = arg_buffer[1];
//reading env and args
void* a2245222708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env22857))[5];
//not do dummy comment
void* a2245122706 = (decode_clo(env22857))[4];
//not do dummy comment
void* filter = (decode_clo(env22857))[3];
//not do dummy comment
void* cons = (decode_clo(env22857))[2];
//not do dummy comment
void* kont22550 = (decode_clo(env22857))[1];

//creating new closure instance
void** clo29468 = alloc_clo(lam22854_fptr, 3);

//setting env list
clo29468[1] = kont22550;
clo29468[2] = cons;
clo29468[3] = a2245122706;
void* f2255222709 = encode_clo(clo29468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2255222709;
arg_buffer[3] = op;
arg_buffer[4] = a2245222708;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22856 = encode_clo(alloc_clo(lam22856_fptr, 0));

void* lam22858_fptr() // lam22858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22859 = arg_buffer[1];
//reading env and args
void* a2245122706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22859))[6];
//not do dummy comment
void* lst = (decode_clo(env22859))[5];
//not do dummy comment
void* op = (decode_clo(env22859))[4];
//not do dummy comment
void* filter = (decode_clo(env22859))[3];
//not do dummy comment
void* cons = (decode_clo(env22859))[2];
//not do dummy comment
void* kont22550 = (decode_clo(env22859))[1];

//creating new closure instance
void** clo29470 = alloc_clo(lam22856_fptr, 5);

//setting env list
clo29470[1] = kont22550;
clo29470[2] = cons;
clo29470[3] = filter;
clo29470[4] = a2245122706;
clo29470[5] = op;
void* f2255322707 = encode_clo(clo29470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2255322707;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22858 = encode_clo(alloc_clo(lam22858_fptr, 0));

void* lam22860_fptr() // lam22860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22861 = arg_buffer[1];
//reading env and args
void* a2245422712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env22861))[3];
//not do dummy comment
void* filter = (decode_clo(env22861))[2];
//not do dummy comment
void* kont22550 = (decode_clo(env22861))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont22550;
arg_buffer[3] = op;
arg_buffer[4] = a2245422712;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22860 = encode_clo(alloc_clo(lam22860_fptr, 0));

void* lam22862_fptr() // lam22862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22863 = arg_buffer[1];
//reading env and args
void* a2245022704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22863))[7];
//not do dummy comment
void* lst = (decode_clo(env22863))[6];
//not do dummy comment
void* op = (decode_clo(env22863))[5];
//not do dummy comment
void* cons = (decode_clo(env22863))[4];
//not do dummy comment
void* kont22550 = (decode_clo(env22863))[3];
//not do dummy comment
void* filter = (decode_clo(env22863))[2];
//not do dummy comment
void* car = (decode_clo(env22863))[1];

//if-clause
bool if_guard29471 = is_true(a2245022704);
if(if_guard29471)
{

//creating new closure instance
void** clo29473 = alloc_clo(lam22858_fptr, 6);

//setting env list
clo29473[1] = kont22550;
clo29473[2] = cons;
clo29473[3] = filter;
clo29473[4] = op;
clo29473[5] = lst;
clo29473[6] = cdr;
void* f2255422705 = encode_clo(clo29473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2255422705;
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
void** clo29475 = alloc_clo(lam22860_fptr, 3);

//setting env list
clo29475[1] = kont22550;
clo29475[2] = filter;
clo29475[3] = op;
void* f2255522711 = encode_clo(clo29475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2255522711;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22862 = encode_clo(alloc_clo(lam22862_fptr, 0));

void* lam22864_fptr() // lam22864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22865 = arg_buffer[1];
//reading env and args
void* a2244922702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22865))[7];
//not do dummy comment
void* lst = (decode_clo(env22865))[6];
//not do dummy comment
void* op = (decode_clo(env22865))[5];
//not do dummy comment
void* cons = (decode_clo(env22865))[4];
//not do dummy comment
void* kont22550 = (decode_clo(env22865))[3];
//not do dummy comment
void* filter = (decode_clo(env22865))[2];
//not do dummy comment
void* car = (decode_clo(env22865))[1];

//creating new closure instance
void** clo29477 = alloc_clo(lam22862_fptr, 7);

//setting env list
clo29477[1] = car;
clo29477[2] = filter;
clo29477[3] = kont22550;
clo29477[4] = cons;
clo29477[5] = op;
clo29477[6] = lst;
clo29477[7] = cdr;
void* f2255622703 = encode_clo(clo29477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2255622703;
arg_buffer[3] = a2244922702;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22864 = encode_clo(alloc_clo(lam22864_fptr, 0));

void* lam22866_fptr() // lam22866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22867 = arg_buffer[1];
//reading env and args
void* a2244722698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22867))[8];
//not do dummy comment
void* op = (decode_clo(env22867))[7];
//not do dummy comment
void* cons = (decode_clo(env22867))[6];
//not do dummy comment
void* kont22550 = (decode_clo(env22867))[5];
//not do dummy comment
void* list = (decode_clo(env22867))[4];
//not do dummy comment
void* cdr = (decode_clo(env22867))[3];
//not do dummy comment
void* filter = (decode_clo(env22867))[2];
//not do dummy comment
void* car = (decode_clo(env22867))[1];

//if-clause
bool if_guard29478 = is_true(a2244722698);
if(if_guard29478)
{

//creating new closure instance
void** clo29480 = alloc_clo(lam22852_fptr, 1);

//setting env list
clo29480[1] = kont22550;
void* f2255122699 = encode_clo(clo29480);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2255122699;
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
void** clo29482 = alloc_clo(lam22864_fptr, 7);

//setting env list
clo29482[1] = car;
clo29482[2] = filter;
clo29482[3] = kont22550;
clo29482[4] = cons;
clo29482[5] = op;
clo29482[6] = lst;
clo29482[7] = cdr;
void* f2255722701 = encode_clo(clo29482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2255722701;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22866 = encode_clo(alloc_clo(lam22866_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22868 = arg_buffer[1];
//reading env and args
void* kont22550 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29484 = alloc_clo(lam22866_fptr, 8);

//setting env list
clo29484[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo29484[2] = filter;
clo29484[3] = cdr;
clo29484[4] = list;
clo29484[5] = kont22550;
clo29484[6] = cons;
clo29484[7] = op;
clo29484[8] = lst;
void* f2255822697 = encode_clo(clo29484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2255822697;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam22869_fptr() // lam22869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22870 = arg_buffer[1];
//reading env and args
void* a2245922720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env22870))[3];
//not do dummy comment
void* a2245722717 = (decode_clo(env22870))[2];
//not do dummy comment
void* kont22559 = (decode_clo(env22870))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont22559;
arg_buffer[3] = a2245722717;
arg_buffer[4] = a2245922720;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22869 = encode_clo(alloc_clo(lam22869_fptr, 0));

void* lam22872_fptr() // lam22872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22873 = arg_buffer[1];
//reading env and args
void* a2245722717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env22873))[4];
//not do dummy comment
void* kont22559 = (decode_clo(env22873))[3];
//not do dummy comment
void* n = (decode_clo(env22873))[2];
//not do dummy comment
void* _u45 = (decode_clo(env22873))[1];
mpz_t* mpzvar29485 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29485, "1", 10);
void* a2245822718 = encode_mpz(mpzvar29485);

//creating new closure instance
void** clo29487 = alloc_clo(lam22869_fptr, 3);

//setting env list
clo29487[1] = kont22559;
clo29487[2] = a2245722717;
clo29487[3] = drop;
void* f2256022719 = encode_clo(clo29487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2256022719;
arg_buffer[3] = n;
arg_buffer[4] = a2245822718;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22872 = encode_clo(alloc_clo(lam22872_fptr, 0));

void* lam22874_fptr() // lam22874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22875 = arg_buffer[1];
//reading env and args
void* a2245622715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22875))[6];
//not do dummy comment
void* kont22559 = (decode_clo(env22875))[5];
//not do dummy comment
void* n = (decode_clo(env22875))[4];
//not do dummy comment
void* _u45 = (decode_clo(env22875))[3];
//not do dummy comment
void* lst = (decode_clo(env22875))[2];
//not do dummy comment
void* drop = (decode_clo(env22875))[1];

//if-clause
bool if_guard29488 = is_true(a2245622715);
if(if_guard29488)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22559);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22559))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29490 = alloc_clo(lam22872_fptr, 4);

//setting env list
clo29490[1] = _u45;
clo29490[2] = n;
clo29490[3] = kont22559;
clo29490[4] = drop;
void* f2256122716 = encode_clo(clo29490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2256122716;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22874 = encode_clo(alloc_clo(lam22874_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22877 = arg_buffer[1];
//reading env and args
void* kont22559 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar29491 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29491, "0", 10);
void* a2245522713 = encode_mpz(mpzvar29491);

//creating new closure instance
void** clo29493 = alloc_clo(lam22874_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo29493[1] = drop;
clo29493[2] = lst;
clo29493[3] = _u45;
clo29493[4] = n;
clo29493[5] = kont22559;
clo29493[6] = cdr;
void* f2256222714 = encode_clo(clo29493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2256222714;
arg_buffer[3] = n;
arg_buffer[4] = a2245522713;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam22878_fptr() // lam22878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22879 = arg_buffer[1];
//reading env and args
void* a2246322728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env22879))[3];
//not do dummy comment
void* kont22563 = (decode_clo(env22879))[2];
//not do dummy comment
void* a2246122724 = (decode_clo(env22879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont22563;
arg_buffer[3] = a2246122724;
arg_buffer[4] = a2246322728;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22878 = encode_clo(alloc_clo(lam22878_fptr, 0));

void* lam22880_fptr() // lam22880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22881 = arg_buffer[1];
//reading env and args
void* a2246222726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env22881))[5];
//not do dummy comment
void* kont22563 = (decode_clo(env22881))[4];
//not do dummy comment
void* a2246122724 = (decode_clo(env22881))[3];
//not do dummy comment
void* proc = (decode_clo(env22881))[2];
//not do dummy comment
void* acc = (decode_clo(env22881))[1];

//creating new closure instance
void** clo29495 = alloc_clo(lam22878_fptr, 3);

//setting env list
clo29495[1] = a2246122724;
clo29495[2] = kont22563;
clo29495[3] = proc;
void* f2256422727 = encode_clo(clo29495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2256422727;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2246222726;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22880 = encode_clo(alloc_clo(lam22880_fptr, 0));

void* lam22882_fptr() // lam22882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22883 = arg_buffer[1];
//reading env and args
void* a2246122724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22883))[6];
//not do dummy comment
void* kont22563 = (decode_clo(env22883))[5];
//not do dummy comment
void* foldr = (decode_clo(env22883))[4];
//not do dummy comment
void* lst = (decode_clo(env22883))[3];
//not do dummy comment
void* proc = (decode_clo(env22883))[2];
//not do dummy comment
void* acc = (decode_clo(env22883))[1];

//creating new closure instance
void** clo29497 = alloc_clo(lam22880_fptr, 5);

//setting env list
clo29497[1] = acc;
clo29497[2] = proc;
clo29497[3] = a2246122724;
clo29497[4] = kont22563;
clo29497[5] = foldr;
void* f2256522725 = encode_clo(clo29497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2256522725;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22882 = encode_clo(alloc_clo(lam22882_fptr, 0));

void* lam22884_fptr() // lam22884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22885 = arg_buffer[1];
//reading env and args
void* a2246022722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22885))[7];
//not do dummy comment
void* kont22563 = (decode_clo(env22885))[6];
//not do dummy comment
void* car = (decode_clo(env22885))[5];
//not do dummy comment
void* foldr = (decode_clo(env22885))[4];
//not do dummy comment
void* lst = (decode_clo(env22885))[3];
//not do dummy comment
void* proc = (decode_clo(env22885))[2];
//not do dummy comment
void* acc = (decode_clo(env22885))[1];

//if-clause
bool if_guard29498 = is_true(a2246022722);
if(if_guard29498)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22563);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29500 = alloc_clo(lam22882_fptr, 6);

//setting env list
clo29500[1] = acc;
clo29500[2] = proc;
clo29500[3] = lst;
clo29500[4] = foldr;
clo29500[5] = kont22563;
clo29500[6] = cdr;
void* f2256622723 = encode_clo(clo29500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2256622723;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22884 = encode_clo(alloc_clo(lam22884_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22886 = arg_buffer[1];
//reading env and args
void* kont22563 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29502 = alloc_clo(lam22884_fptr, 7);

//setting env list
clo29502[1] = acc;
clo29502[2] = proc;
clo29502[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo29502[4] = foldr;
clo29502[5] = car;
clo29502[6] = kont22563;
clo29502[7] = cdr;
void* f2256722721 = encode_clo(clo29502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2256722721;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam22887_fptr() // lam22887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22888 = arg_buffer[1];
//reading env and args
void* a2246722736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22568 = (decode_clo(env22888))[3];
//not do dummy comment
void* a2246522732 = (decode_clo(env22888))[2];
//not do dummy comment
void* cons = (decode_clo(env22888))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22568;
arg_buffer[3] = a2246522732;
arg_buffer[4] = a2246722736;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22887 = encode_clo(alloc_clo(lam22887_fptr, 0));

void* lam22889_fptr() // lam22889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22890 = arg_buffer[1];
//reading env and args
void* a2246622734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22568 = (decode_clo(env22890))[5];
//not do dummy comment
void* a2246522732 = (decode_clo(env22890))[4];
//not do dummy comment
void* append = (decode_clo(env22890))[3];
//not do dummy comment
void* lst2 = (decode_clo(env22890))[2];
//not do dummy comment
void* cons = (decode_clo(env22890))[1];

//creating new closure instance
void** clo29504 = alloc_clo(lam22887_fptr, 3);

//setting env list
clo29504[1] = cons;
clo29504[2] = a2246522732;
clo29504[3] = kont22568;
void* f2256922735 = encode_clo(clo29504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2256922735;
arg_buffer[3] = a2246622734;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22889 = encode_clo(alloc_clo(lam22889_fptr, 0));

void* lam22891_fptr() // lam22891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22892 = arg_buffer[1];
//reading env and args
void* a2246522732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22892))[6];
//not do dummy comment
void* kont22568 = (decode_clo(env22892))[5];
//not do dummy comment
void* append = (decode_clo(env22892))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22892))[3];
//not do dummy comment
void* lst1 = (decode_clo(env22892))[2];
//not do dummy comment
void* cons = (decode_clo(env22892))[1];

//creating new closure instance
void** clo29506 = alloc_clo(lam22889_fptr, 5);

//setting env list
clo29506[1] = cons;
clo29506[2] = lst2;
clo29506[3] = append;
clo29506[4] = a2246522732;
clo29506[5] = kont22568;
void* f2257022733 = encode_clo(clo29506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2257022733;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22891 = encode_clo(alloc_clo(lam22891_fptr, 0));

void* lam22893_fptr() // lam22893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22894 = arg_buffer[1];
//reading env and args
void* a2246422730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22894))[7];
//not do dummy comment
void* kont22568 = (decode_clo(env22894))[6];
//not do dummy comment
void* append = (decode_clo(env22894))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22894))[4];
//not do dummy comment
void* cons = (decode_clo(env22894))[3];
//not do dummy comment
void* lst1 = (decode_clo(env22894))[2];
//not do dummy comment
void* car = (decode_clo(env22894))[1];

//if-clause
bool if_guard29507 = is_true(a2246422730);
if(if_guard29507)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22568);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22568))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29509 = alloc_clo(lam22891_fptr, 6);

//setting env list
clo29509[1] = cons;
clo29509[2] = lst1;
clo29509[3] = lst2;
clo29509[4] = append;
clo29509[5] = kont22568;
clo29509[6] = cdr;
void* f2257122731 = encode_clo(clo29509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2257122731;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22893 = encode_clo(alloc_clo(lam22893_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22895 = arg_buffer[1];
//reading env and args
void* kont22568 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29511 = alloc_clo(lam22893_fptr, 7);

//setting env list
clo29511[1] = car;
clo29511[2] = lst1;
clo29511[3] = cons;
clo29511[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo29511[5] = append;
clo29511[6] = kont22568;
clo29511[7] = cdr;
void* f2257222729 = encode_clo(clo29511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2257222729;
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
void* _22896 = arg_buffer[1];
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

void* kont2257322737 = prim_car(lst);
void* lst22738 = prim_cdr(lst);
void* x2246822739 = apply_prim_hash(lst22738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2257322737);
arg_buffer[2] = x2246822739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2257322737))[0]);
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
void* _22897 = arg_buffer[1];
//reading env and args
void* kont22575 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2246922740 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22575);
arg_buffer[2] = x2246922740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22575))[0]);
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
void* _22898 = arg_buffer[1];
//reading env and args
void* kont22576 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2247022741 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22576);
arg_buffer[2] = x2247022741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22576))[0]);
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
void* _22899 = arg_buffer[1];
//reading env and args
void* kont22577 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2247122742 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22577);
arg_buffer[2] = x2247122742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22577))[0]);
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
void* _22900 = arg_buffer[1];
//reading env and args
void* kont22578 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2247222743 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22578);
arg_buffer[2] = x2247222743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22578))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam22901_fptr() // lam22901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22902 = arg_buffer[1];
//reading env and args
void* a2247622748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env22902))[3];
//not do dummy comment
void* kont22579 = (decode_clo(env22902))[2];
//not do dummy comment
void* filter = (decode_clo(env22902))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont22579;
arg_buffer[3] = odd_u63;
arg_buffer[4] = a2247622748;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22901 = encode_clo(alloc_clo(lam22901_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22906 = arg_buffer[1];
//reading env and args
void* kont22579 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar29512 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29512, "1", 10);
void* a2247322744 = encode_mpz(mpzvar29512);
mpz_t* mpzvar29513 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29513, "2", 10);
void* a2247422745 = encode_mpz(mpzvar29513);
mpz_t* mpzvar29514 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29514, "3", 10);
void* a2247522746 = encode_mpz(mpzvar29514);

//creating new closure instance
void** clo29516 = alloc_clo(lam22901_fptr, 3);

//setting env list
clo29516[1] = filter;
clo29516[2] = kont22579;
clo29516[3] = odd_u63;
void* f2258022747 = encode_clo(clo29516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2258022747;
arg_buffer[3] = a2247322744;
arg_buffer[4] = a2247422745;
arg_buffer[5] = a2247522746;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam22907_fptr() // lam22907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22908 = arg_buffer[1];
//reading env and args
void* x2247722750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22581 = (decode_clo(env22908))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22581);
arg_buffer[2] = x2247722750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22581))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22907 = encode_clo(alloc_clo(lam22907_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22909 = arg_buffer[1];
//reading env and args
void* kont22581 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo29518 = alloc_clo(lam22907_fptr, 1);

//setting env list
clo29518[1] = kont22581;
void* f2258222749 = encode_clo(clo29518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2258222749;
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

