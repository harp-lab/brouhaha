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
void* _50763 = arg_buffer[1];
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

void* kont5050150601 = prim_car(lst);
void* lst50602 = prim_cdr(lst);
void* x5041250603 = apply_prim__u43(lst50602);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5050150601);
arg_buffer[2] = x5041250603;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5050150601))[0]);
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
void* _50764 = arg_buffer[1];
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

void* kont5050350604 = prim_car(lst);
void* lst50605 = prim_cdr(lst);
void* x5041350606 = apply_prim__u45(lst50605);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5050350604);
arg_buffer[2] = x5041350606;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5050350604))[0]);
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
void* _50765 = arg_buffer[1];
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

void* kont5050550607 = prim_car(lst);
void* lst50608 = prim_cdr(lst);
void* x5041450609 = apply_prim__u42(lst50608);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5050550607);
arg_buffer[2] = x5041450609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5050550607))[0]);
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
void* _50766 = arg_buffer[1];
//reading env and args
void* kont50507 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5041550610 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50507);
arg_buffer[2] = x5041550610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50507))[0]);
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
void* _50767 = arg_buffer[1];
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

void* kont5050850611 = prim_car(lst);
void* lst50612 = prim_cdr(lst);
void* x5041650613 = apply_prim__u47(lst50612);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5050850611);
arg_buffer[2] = x5041650613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5050850611))[0]);
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
void* _50768 = arg_buffer[1];
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

void* kont5051050614 = prim_car(lst);
void* lst50615 = prim_cdr(lst);
void* x5041750616 = apply_prim__u61(lst50615);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5051050614);
arg_buffer[2] = x5041750616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5051050614))[0]);
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
void* _50769 = arg_buffer[1];
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

void* kont5051250617 = prim_car(lst);
void* lst50618 = prim_cdr(lst);
void* x5041850619 = apply_prim__u62(lst50618);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5051250617);
arg_buffer[2] = x5041850619;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5051250617))[0]);
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
void* _50770 = arg_buffer[1];
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

void* kont5051450620 = prim_car(lst);
void* lst50621 = prim_cdr(lst);
void* x5041950622 = apply_prim__u60(lst50621);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5051450620);
arg_buffer[2] = x5041950622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5051450620))[0]);
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
void* _50771 = arg_buffer[1];
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

void* kont5051650623 = prim_car(lst);
void* lst50624 = prim_cdr(lst);
void* x5042050625 = apply_prim__u60_u61(lst50624);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5051650623);
arg_buffer[2] = x5042050625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5051650623))[0]);
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
void* _50772 = arg_buffer[1];
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

void* kont5051850626 = prim_car(lst);
void* lst50627 = prim_cdr(lst);
void* x5042150628 = apply_prim__u62_u61(lst50627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5051850626);
arg_buffer[2] = x5042150628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5051850626))[0]);
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
void* _50773 = arg_buffer[1];
//reading env and args
void* kont50520 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5042250629 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50520);
arg_buffer[2] = x5042250629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50520))[0]);
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
void* _50774 = arg_buffer[1];
//reading env and args
void* kont50521 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5042350630 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50521);
arg_buffer[2] = x5042350630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50521))[0]);
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
void* _50775 = arg_buffer[1];
//reading env and args
void* kont50522 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5042450631 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50522);
arg_buffer[2] = x5042450631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50522))[0]);
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
void* _50776 = arg_buffer[1];
//reading env and args
void* kont50523 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5042550632 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50523);
arg_buffer[2] = x5042550632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50523))[0]);
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
void* _50777 = arg_buffer[1];
//reading env and args
void* kont50524 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5042650633 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50524);
arg_buffer[2] = x5042650633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50524))[0]);
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
void* _50778 = arg_buffer[1];
//reading env and args
void* kont50525 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5042750634 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50525);
arg_buffer[2] = x5042750634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50525))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam50779_fptr() // lam50779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50780 = arg_buffer[1];
//reading env and args
void* a5043050638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env50780))[3];
//not do dummy comment
void* a5042850635 = (decode_clo(env50780))[2];
//not do dummy comment
void* kont50526 = (decode_clo(env50780))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50526;
arg_buffer[3] = a5042850635;
arg_buffer[4] = a5043050638;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50779 = encode_clo(alloc_clo(lam50779_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50783 = arg_buffer[1];
//reading env and args
void* kont50526 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57220 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57220, "0", 10);
void* a5042850635 = encode_mpz(mpzvar57220);
mpz_t* mpzvar57221 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57221, "2", 10);
void* a5042950636 = encode_mpz(mpzvar57221);

//creating new closure instance
void** clo57223 = alloc_clo(lam50779_fptr, 3);

//setting env list
clo57223[1] = kont50526;
clo57223[2] = a5042850635;
clo57223[3] = equal_u63;
void* f5052750637 = encode_clo(clo57223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5052750637;
arg_buffer[3] = x;
arg_buffer[4] = a5042950636;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam50784_fptr() // lam50784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50785 = arg_buffer[1];
//reading env and args
void* a5043350642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env50785))[3];
//not do dummy comment
void* a5043150639 = (decode_clo(env50785))[2];
//not do dummy comment
void* kont50528 = (decode_clo(env50785))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50528;
arg_buffer[3] = a5043150639;
arg_buffer[4] = a5043350642;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50784 = encode_clo(alloc_clo(lam50784_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50788 = arg_buffer[1];
//reading env and args
void* kont50528 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57224 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57224, "1", 10);
void* a5043150639 = encode_mpz(mpzvar57224);
mpz_t* mpzvar57225 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57225, "2", 10);
void* a5043250640 = encode_mpz(mpzvar57225);

//creating new closure instance
void** clo57227 = alloc_clo(lam50784_fptr, 3);

//setting env list
clo57227[1] = kont50528;
clo57227[2] = a5043150639;
clo57227[3] = equal_u63;
void* f5052950641 = encode_clo(clo57227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5052950641;
arg_buffer[3] = x;
arg_buffer[4] = a5043250640;
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
void* _50789 = arg_buffer[1];
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

void* kont5053050643 = prim_car(x);
void* x50644 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5053050643);
arg_buffer[2] = x50644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5053050643))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam50792_fptr() // lam50792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50793 = arg_buffer[1];
//reading env and args
void* a5043950654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50532 = (decode_clo(env50793))[3];
//not do dummy comment
void* x = (decode_clo(env50793))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50793))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont50532;
arg_buffer[3] = x;
arg_buffer[4] = a5043950654;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50792 = encode_clo(alloc_clo(lam50792_fptr, 0));

void* lam50794_fptr() // lam50794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50795 = arg_buffer[1];
//reading env and args
void* a5043750651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50795))[5];
//not do dummy comment
void* kont50532 = (decode_clo(env50795))[4];
//not do dummy comment
void* lst = (decode_clo(env50795))[3];
//not do dummy comment
void* x = (decode_clo(env50795))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50795))[1];

//if-clause
bool if_guard57228 = is_true(a5043750651);
if(if_guard57228)
{
void* x5043850652 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50532);
arg_buffer[2] = x5043850652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50532))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57230 = alloc_clo(lam50792_fptr, 3);

//setting env list
clo57230[1] = member_u63;
clo57230[2] = x;
clo57230[3] = kont50532;
void* f5053350653 = encode_clo(clo57230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5053350653;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50794 = encode_clo(alloc_clo(lam50794_fptr, 0));

void* lam50796_fptr() // lam50796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50797 = arg_buffer[1];
//reading env and args
void* a5043650649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50797))[6];
//not do dummy comment
void* kont50532 = (decode_clo(env50797))[5];
//not do dummy comment
void* lst = (decode_clo(env50797))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env50797))[3];
//not do dummy comment
void* x = (decode_clo(env50797))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50797))[1];

//creating new closure instance
void** clo57232 = alloc_clo(lam50794_fptr, 5);

//setting env list
clo57232[1] = member_u63;
clo57232[2] = x;
clo57232[3] = lst;
clo57232[4] = kont50532;
clo57232[5] = cdr;
void* f5053450650 = encode_clo(clo57232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5053450650;
arg_buffer[3] = a5043650649;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50796 = encode_clo(alloc_clo(lam50796_fptr, 0));

void* lam50798_fptr() // lam50798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50799 = arg_buffer[1];
//reading env and args
void* a5043450646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50799))[7];
//not do dummy comment
void* kont50532 = (decode_clo(env50799))[6];
//not do dummy comment
void* lst = (decode_clo(env50799))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env50799))[4];
//not do dummy comment
void* x = (decode_clo(env50799))[3];
//not do dummy comment
void* car = (decode_clo(env50799))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50799))[1];

//if-clause
bool if_guard57233 = is_true(a5043450646);
if(if_guard57233)
{
void* x5043550647 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50532);
arg_buffer[2] = x5043550647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50532))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57235 = alloc_clo(lam50796_fptr, 6);

//setting env list
clo57235[1] = member_u63;
clo57235[2] = x;
clo57235[3] = equal_u63;
clo57235[4] = lst;
clo57235[5] = kont50532;
clo57235[6] = cdr;
void* f5053550648 = encode_clo(clo57235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5053550648;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50798 = encode_clo(alloc_clo(lam50798_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50800 = arg_buffer[1];
//reading env and args
void* kont50532 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57237 = alloc_clo(lam50798_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo57237[1] = member_u63;
clo57237[2] = car;
clo57237[3] = x;
clo57237[4] = equal_u63;
clo57237[5] = lst;
clo57237[6] = kont50532;
clo57237[7] = cdr;
void* f5053650645 = encode_clo(clo57237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5053650645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam50801_fptr() // lam50801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50802 = arg_buffer[1];
//reading env and args
void* a5044350662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5044250660 = (decode_clo(env50802))[4];
//not do dummy comment
void* kont50537 = (decode_clo(env50802))[3];
//not do dummy comment
void* fun = (decode_clo(env50802))[2];
//not do dummy comment
void* foldl = (decode_clo(env50802))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont50537;
arg_buffer[3] = fun;
arg_buffer[4] = a5044250660;
arg_buffer[5] = a5044350662;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50801 = encode_clo(alloc_clo(lam50801_fptr, 0));

void* lam50803_fptr() // lam50803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50804 = arg_buffer[1];
//reading env and args
void* a5044250660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50804))[5];
//not do dummy comment
void* lst = (decode_clo(env50804))[4];
//not do dummy comment
void* kont50537 = (decode_clo(env50804))[3];
//not do dummy comment
void* fun = (decode_clo(env50804))[2];
//not do dummy comment
void* foldl = (decode_clo(env50804))[1];

//creating new closure instance
void** clo57239 = alloc_clo(lam50801_fptr, 4);

//setting env list
clo57239[1] = foldl;
clo57239[2] = fun;
clo57239[3] = kont50537;
clo57239[4] = a5044250660;
void* f5053850661 = encode_clo(clo57239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5053850661;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50803 = encode_clo(alloc_clo(lam50803_fptr, 0));

void* lam50805_fptr() // lam50805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50806 = arg_buffer[1];
//reading env and args
void* a5044150658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50806))[6];
//not do dummy comment
void* lst = (decode_clo(env50806))[5];
//not do dummy comment
void* kont50537 = (decode_clo(env50806))[4];
//not do dummy comment
void* fun = (decode_clo(env50806))[3];
//not do dummy comment
void* acc = (decode_clo(env50806))[2];
//not do dummy comment
void* foldl = (decode_clo(env50806))[1];

//creating new closure instance
void** clo57241 = alloc_clo(lam50803_fptr, 5);

//setting env list
clo57241[1] = foldl;
clo57241[2] = fun;
clo57241[3] = kont50537;
clo57241[4] = lst;
clo57241[5] = cdr;
void* f5053950659 = encode_clo(clo57241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5053950659;
arg_buffer[3] = a5044150658;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50805 = encode_clo(alloc_clo(lam50805_fptr, 0));

void* lam50807_fptr() // lam50807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50808 = arg_buffer[1];
//reading env and args
void* a5044050656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50808))[7];
//not do dummy comment
void* lst = (decode_clo(env50808))[6];
//not do dummy comment
void* kont50537 = (decode_clo(env50808))[5];
//not do dummy comment
void* fun = (decode_clo(env50808))[4];
//not do dummy comment
void* acc = (decode_clo(env50808))[3];
//not do dummy comment
void* car = (decode_clo(env50808))[2];
//not do dummy comment
void* foldl = (decode_clo(env50808))[1];

//if-clause
bool if_guard57242 = is_true(a5044050656);
if(if_guard57242)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50537);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50537))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57244 = alloc_clo(lam50805_fptr, 6);

//setting env list
clo57244[1] = foldl;
clo57244[2] = acc;
clo57244[3] = fun;
clo57244[4] = kont50537;
clo57244[5] = lst;
clo57244[6] = cdr;
void* f5054050657 = encode_clo(clo57244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5054050657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50807 = encode_clo(alloc_clo(lam50807_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50809 = arg_buffer[1];
//reading env and args
void* kont50537 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57246 = alloc_clo(lam50807_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo57246[1] = foldl;
clo57246[2] = car;
clo57246[3] = acc;
clo57246[4] = fun;
clo57246[5] = kont50537;
clo57246[6] = lst;
clo57246[7] = cdr;
void* f5054150655 = encode_clo(clo57246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5054150655;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam50810_fptr() // lam50810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50811 = arg_buffer[1];
//reading env and args
void* a5044750670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50811))[3];
//not do dummy comment
void* a5044550666 = (decode_clo(env50811))[2];
//not do dummy comment
void* kont50542 = (decode_clo(env50811))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50542;
arg_buffer[3] = a5044550666;
arg_buffer[4] = a5044750670;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50810 = encode_clo(alloc_clo(lam50810_fptr, 0));

void* lam50812_fptr() // lam50812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50813 = arg_buffer[1];
//reading env and args
void* a5044650668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50813))[5];
//not do dummy comment
void* a5044550666 = (decode_clo(env50813))[4];
//not do dummy comment
void* cons = (decode_clo(env50813))[3];
//not do dummy comment
void* kont50542 = (decode_clo(env50813))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50813))[1];

//creating new closure instance
void** clo57248 = alloc_clo(lam50810_fptr, 3);

//setting env list
clo57248[1] = kont50542;
clo57248[2] = a5044550666;
clo57248[3] = reverse_u45helper;
void* f5054350669 = encode_clo(clo57248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5054350669;
arg_buffer[3] = a5044650668;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50812 = encode_clo(alloc_clo(lam50812_fptr, 0));

void* lam50814_fptr() // lam50814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50815 = arg_buffer[1];
//reading env and args
void* a5044550666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50815))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50815))[5];
//not do dummy comment
void* car = (decode_clo(env50815))[4];
//not do dummy comment
void* cons = (decode_clo(env50815))[3];
//not do dummy comment
void* kont50542 = (decode_clo(env50815))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50815))[1];

//creating new closure instance
void** clo57250 = alloc_clo(lam50812_fptr, 5);

//setting env list
clo57250[1] = lst2;
clo57250[2] = kont50542;
clo57250[3] = cons;
clo57250[4] = a5044550666;
clo57250[5] = reverse_u45helper;
void* f5054450667 = encode_clo(clo57250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5054450667;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50814 = encode_clo(alloc_clo(lam50814_fptr, 0));

void* lam50816_fptr() // lam50816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50817 = arg_buffer[1];
//reading env and args
void* a5044450664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50817))[7];
//not do dummy comment
void* lst = (decode_clo(env50817))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50817))[5];
//not do dummy comment
void* car = (decode_clo(env50817))[4];
//not do dummy comment
void* cons = (decode_clo(env50817))[3];
//not do dummy comment
void* kont50542 = (decode_clo(env50817))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50817))[1];

//if-clause
bool if_guard57251 = is_true(a5044450664);
if(if_guard57251)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50542);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50542))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57253 = alloc_clo(lam50814_fptr, 6);

//setting env list
clo57253[1] = lst2;
clo57253[2] = kont50542;
clo57253[3] = cons;
clo57253[4] = car;
clo57253[5] = reverse_u45helper;
clo57253[6] = lst;
void* f5054550665 = encode_clo(clo57253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5054550665;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50816 = encode_clo(alloc_clo(lam50816_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50818 = arg_buffer[1];
//reading env and args
void* kont50542 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57255 = alloc_clo(lam50816_fptr, 7);

//setting env list
clo57255[1] = lst2;
clo57255[2] = kont50542;
clo57255[3] = cons;
clo57255[4] = car;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo57255[5] = reverse_u45helper;
clo57255[6] = lst;
clo57255[7] = cdr;
void* f5054650663 = encode_clo(clo57255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5054650663;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam50819_fptr() // lam50819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50820 = arg_buffer[1];
//reading env and args
void* a5044850672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50547 = (decode_clo(env50820))[3];
//not do dummy comment
void* lst = (decode_clo(env50820))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50820))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50547;
arg_buffer[3] = lst;
arg_buffer[4] = a5044850672;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50819 = encode_clo(alloc_clo(lam50819_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50821 = arg_buffer[1];
//reading env and args
void* kont50547 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57257 = alloc_clo(lam50819_fptr, 3);

//setting env list
clo57257[1] = reverse_u45helper;
clo57257[2] = lst;
clo57257[3] = kont50547;
void* f5054850671 = encode_clo(clo57257);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5054850671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam50822_fptr() // lam50822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50823 = arg_buffer[1];
//reading env and args
void* x5045150677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50549 = (decode_clo(env50823))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50549);
arg_buffer[2] = x5045150677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50549))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50822 = encode_clo(alloc_clo(lam50822_fptr, 0));

void* lam50824_fptr() // lam50824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50825 = arg_buffer[1];
//reading env and args
void* a5045650686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50549 = (decode_clo(env50825))[4];
//not do dummy comment
void* a5045250679 = (decode_clo(env50825))[3];
//not do dummy comment
void* a5045450682 = (decode_clo(env50825))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env50825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50549;
arg_buffer[3] = a5045250679;
arg_buffer[4] = a5045450682;
arg_buffer[5] = a5045650686;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50824 = encode_clo(alloc_clo(lam50824_fptr, 0));

void* lam50826_fptr() // lam50826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50827 = arg_buffer[1];
//reading env and args
void* a5045550684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50549 = (decode_clo(env50827))[6];
//not do dummy comment
void* a5045250679 = (decode_clo(env50827))[5];
//not do dummy comment
void* a5045450682 = (decode_clo(env50827))[4];
//not do dummy comment
void* cons = (decode_clo(env50827))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50827))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50827))[1];

//creating new closure instance
void** clo57259 = alloc_clo(lam50824_fptr, 4);

//setting env list
clo57259[1] = take_u45helper;
clo57259[2] = a5045450682;
clo57259[3] = a5045250679;
clo57259[4] = kont50549;
void* f5055150685 = encode_clo(clo57259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5055150685;
arg_buffer[3] = a5045550684;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50826 = encode_clo(alloc_clo(lam50826_fptr, 0));

void* lam50828_fptr() // lam50828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50829 = arg_buffer[1];
//reading env and args
void* a5045450682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50549 = (decode_clo(env50829))[7];
//not do dummy comment
void* lst = (decode_clo(env50829))[6];
//not do dummy comment
void* a5045250679 = (decode_clo(env50829))[5];
//not do dummy comment
void* car = (decode_clo(env50829))[4];
//not do dummy comment
void* cons = (decode_clo(env50829))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50829))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50829))[1];

//creating new closure instance
void** clo57261 = alloc_clo(lam50826_fptr, 6);

//setting env list
clo57261[1] = lst2;
clo57261[2] = take_u45helper;
clo57261[3] = cons;
clo57261[4] = a5045450682;
clo57261[5] = a5045250679;
clo57261[6] = kont50549;
void* f5055250683 = encode_clo(clo57261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5055250683;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50828 = encode_clo(alloc_clo(lam50828_fptr, 0));

void* lam50831_fptr() // lam50831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50832 = arg_buffer[1];
//reading env and args
void* a5045250679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50549 = (decode_clo(env50832))[8];
//not do dummy comment
void* lst = (decode_clo(env50832))[7];
//not do dummy comment
void* cons = (decode_clo(env50832))[6];
//not do dummy comment
void* _u45 = (decode_clo(env50832))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50832))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50832))[3];
//not do dummy comment
void* n = (decode_clo(env50832))[2];
//not do dummy comment
void* car = (decode_clo(env50832))[1];
mpz_t* mpzvar57262 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57262, "1", 10);
void* a5045350680 = encode_mpz(mpzvar57262);

//creating new closure instance
void** clo57264 = alloc_clo(lam50828_fptr, 7);

//setting env list
clo57264[1] = lst2;
clo57264[2] = take_u45helper;
clo57264[3] = cons;
clo57264[4] = car;
clo57264[5] = a5045250679;
clo57264[6] = lst;
clo57264[7] = kont50549;
void* f5055350681 = encode_clo(clo57264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5055350681;
arg_buffer[3] = n;
arg_buffer[4] = a5045350680;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50831 = encode_clo(alloc_clo(lam50831_fptr, 0));

void* lam50833_fptr() // lam50833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50834 = arg_buffer[1];
//reading env and args
void* a5045050675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50834))[10];
//not do dummy comment
void* kont50549 = (decode_clo(env50834))[9];
//not do dummy comment
void* lst = (decode_clo(env50834))[8];
//not do dummy comment
void* reverse = (decode_clo(env50834))[7];
//not do dummy comment
void* cons = (decode_clo(env50834))[6];
//not do dummy comment
void* _u45 = (decode_clo(env50834))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50834))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50834))[3];
//not do dummy comment
void* n = (decode_clo(env50834))[2];
//not do dummy comment
void* car = (decode_clo(env50834))[1];

//if-clause
bool if_guard57265 = is_true(a5045050675);
if(if_guard57265)
{

//creating new closure instance
void** clo57267 = alloc_clo(lam50822_fptr, 1);

//setting env list
clo57267[1] = kont50549;
void* f5055050676 = encode_clo(clo57267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5055050676;
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
void** clo57269 = alloc_clo(lam50831_fptr, 8);

//setting env list
clo57269[1] = car;
clo57269[2] = n;
clo57269[3] = lst2;
clo57269[4] = take_u45helper;
clo57269[5] = _u45;
clo57269[6] = cons;
clo57269[7] = lst;
clo57269[8] = kont50549;
void* f5055450678 = encode_clo(clo57269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5055450678;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50833 = encode_clo(alloc_clo(lam50833_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50836 = arg_buffer[1];
//reading env and args
void* kont50549 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar57270 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57270, "0", 10);
void* a5044950673 = encode_mpz(mpzvar57270);

//creating new closure instance
void** clo57272 = alloc_clo(lam50833_fptr, 10);

//setting env list
clo57272[1] = car;
clo57272[2] = n;
clo57272[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo57272[4] = take_u45helper;
clo57272[5] = _u45;
clo57272[6] = cons;
clo57272[7] = reverse;
clo57272[8] = lst;
clo57272[9] = kont50549;
clo57272[10] = cdr;
void* f5055550674 = encode_clo(clo57272);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5055550674;
arg_buffer[3] = n;
arg_buffer[4] = a5044950673;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam50837_fptr() // lam50837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50838 = arg_buffer[1];
//reading env and args
void* a5045750688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50838))[4];
//not do dummy comment
void* kont50556 = (decode_clo(env50838))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50838))[2];
//not do dummy comment
void* n = (decode_clo(env50838))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50556;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5045750688;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50837 = encode_clo(alloc_clo(lam50837_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50839 = arg_buffer[1];
//reading env and args
void* kont50556 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57274 = alloc_clo(lam50837_fptr, 4);

//setting env list
clo57274[1] = n;
clo57274[2] = take_u45helper;
clo57274[3] = kont50556;
clo57274[4] = lst;
void* f5055750687 = encode_clo(clo57274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5055750687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam50841_fptr() // lam50841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50842 = arg_buffer[1];
//reading env and args
void* a5046250696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5046050692 = (decode_clo(env50842))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50842))[2];
//not do dummy comment
void* kont50558 = (decode_clo(env50842))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont50558;
arg_buffer[3] = a5046050692;
arg_buffer[4] = a5046250696;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50841 = encode_clo(alloc_clo(lam50841_fptr, 0));

void* lam50843_fptr() // lam50843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50844 = arg_buffer[1];
//reading env and args
void* a5046150694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5046050692 = (decode_clo(env50844))[4];
//not do dummy comment
void* length = (decode_clo(env50844))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50844))[2];
//not do dummy comment
void* kont50558 = (decode_clo(env50844))[1];

//creating new closure instance
void** clo57276 = alloc_clo(lam50841_fptr, 3);

//setting env list
clo57276[1] = kont50558;
clo57276[2] = _u43;
clo57276[3] = a5046050692;
void* f5055950695 = encode_clo(clo57276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5055950695;
arg_buffer[3] = a5046150694;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50843 = encode_clo(alloc_clo(lam50843_fptr, 0));

void* lam50846_fptr() // lam50846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50847 = arg_buffer[1];
//reading env and args
void* a5045850690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50847))[5];
//not do dummy comment
void* lst = (decode_clo(env50847))[4];
//not do dummy comment
void* length = (decode_clo(env50847))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50847))[2];
//not do dummy comment
void* kont50558 = (decode_clo(env50847))[1];

//if-clause
bool if_guard57277 = is_true(a5045850690);
if(if_guard57277)
{
mpz_t* mpzvar57278 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57278, "0", 10);
void* x5045950691 = encode_mpz(mpzvar57278);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50558);
arg_buffer[2] = x5045950691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50558))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar57279 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57279, "1", 10);
void* a5046050692 = encode_mpz(mpzvar57279);

//creating new closure instance
void** clo57281 = alloc_clo(lam50843_fptr, 4);

//setting env list
clo57281[1] = kont50558;
clo57281[2] = _u43;
clo57281[3] = length;
clo57281[4] = a5046050692;
void* f5056050693 = encode_clo(clo57281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5056050693;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50846 = encode_clo(alloc_clo(lam50846_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50848 = arg_buffer[1];
//reading env and args
void* kont50558 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57283 = alloc_clo(lam50846_fptr, 5);

//setting env list
clo57283[1] = kont50558;
clo57283[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo57283[3] = length;
clo57283[4] = lst;
clo57283[5] = cdr;
void* f5056150689 = encode_clo(clo57283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5056150689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam50849_fptr() // lam50849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50850 = arg_buffer[1];
//reading env and args
void* x5046450700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50562 = (decode_clo(env50850))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50562);
arg_buffer[2] = x5046450700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50562))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50849 = encode_clo(alloc_clo(lam50849_fptr, 0));

void* lam50851_fptr() // lam50851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50852 = arg_buffer[1];
//reading env and args
void* a5046850708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50562 = (decode_clo(env50852))[3];
//not do dummy comment
void* cons = (decode_clo(env50852))[2];
//not do dummy comment
void* a5046650704 = (decode_clo(env50852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50562;
arg_buffer[3] = a5046650704;
arg_buffer[4] = a5046850708;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50851 = encode_clo(alloc_clo(lam50851_fptr, 0));

void* lam50853_fptr() // lam50853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50854 = arg_buffer[1];
//reading env and args
void* a5046750706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50562 = (decode_clo(env50854))[5];
//not do dummy comment
void* map = (decode_clo(env50854))[4];
//not do dummy comment
void* proc = (decode_clo(env50854))[3];
//not do dummy comment
void* cons = (decode_clo(env50854))[2];
//not do dummy comment
void* a5046650704 = (decode_clo(env50854))[1];

//creating new closure instance
void** clo57285 = alloc_clo(lam50851_fptr, 3);

//setting env list
clo57285[1] = a5046650704;
clo57285[2] = cons;
clo57285[3] = kont50562;
void* f5056450707 = encode_clo(clo57285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5056450707;
arg_buffer[3] = proc;
arg_buffer[4] = a5046750706;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50853 = encode_clo(alloc_clo(lam50853_fptr, 0));

void* lam50855_fptr() // lam50855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50856 = arg_buffer[1];
//reading env and args
void* a5046650704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50856))[6];
//not do dummy comment
void* map = (decode_clo(env50856))[5];
//not do dummy comment
void* proc = (decode_clo(env50856))[4];
//not do dummy comment
void* cons = (decode_clo(env50856))[3];
//not do dummy comment
void* cdr = (decode_clo(env50856))[2];
//not do dummy comment
void* kont50562 = (decode_clo(env50856))[1];

//creating new closure instance
void** clo57287 = alloc_clo(lam50853_fptr, 5);

//setting env list
clo57287[1] = a5046650704;
clo57287[2] = cons;
clo57287[3] = proc;
clo57287[4] = map;
clo57287[5] = kont50562;
void* f5056550705 = encode_clo(clo57287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5056550705;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50855 = encode_clo(alloc_clo(lam50855_fptr, 0));

void* lam50857_fptr() // lam50857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50858 = arg_buffer[1];
//reading env and args
void* a5046550702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50858))[6];
//not do dummy comment
void* map = (decode_clo(env50858))[5];
//not do dummy comment
void* proc = (decode_clo(env50858))[4];
//not do dummy comment
void* cons = (decode_clo(env50858))[3];
//not do dummy comment
void* cdr = (decode_clo(env50858))[2];
//not do dummy comment
void* kont50562 = (decode_clo(env50858))[1];

//creating new closure instance
void** clo57289 = alloc_clo(lam50855_fptr, 6);

//setting env list
clo57289[1] = kont50562;
clo57289[2] = cdr;
clo57289[3] = cons;
clo57289[4] = proc;
clo57289[5] = map;
clo57289[6] = lst;
void* f5056650703 = encode_clo(clo57289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5056650703;
arg_buffer[3] = a5046550702;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50857 = encode_clo(alloc_clo(lam50857_fptr, 0));

void* lam50859_fptr() // lam50859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50860 = arg_buffer[1];
//reading env and args
void* a5046350698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50860))[8];
//not do dummy comment
void* map = (decode_clo(env50860))[7];
//not do dummy comment
void* proc = (decode_clo(env50860))[6];
//not do dummy comment
void* car = (decode_clo(env50860))[5];
//not do dummy comment
void* cons = (decode_clo(env50860))[4];
//not do dummy comment
void* list = (decode_clo(env50860))[3];
//not do dummy comment
void* cdr = (decode_clo(env50860))[2];
//not do dummy comment
void* kont50562 = (decode_clo(env50860))[1];

//if-clause
bool if_guard57290 = is_true(a5046350698);
if(if_guard57290)
{

//creating new closure instance
void** clo57292 = alloc_clo(lam50849_fptr, 1);

//setting env list
clo57292[1] = kont50562;
void* f5056350699 = encode_clo(clo57292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5056350699;
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
void** clo57294 = alloc_clo(lam50857_fptr, 6);

//setting env list
clo57294[1] = kont50562;
clo57294[2] = cdr;
clo57294[3] = cons;
clo57294[4] = proc;
clo57294[5] = map;
clo57294[6] = lst;
void* f5056750701 = encode_clo(clo57294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5056750701;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50859 = encode_clo(alloc_clo(lam50859_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50861 = arg_buffer[1];
//reading env and args
void* kont50562 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57296 = alloc_clo(lam50859_fptr, 8);

//setting env list
clo57296[1] = kont50562;
clo57296[2] = cdr;
clo57296[3] = list;
clo57296[4] = cons;
clo57296[5] = car;
clo57296[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo57296[7] = map;
clo57296[8] = lst;
void* f5056850697 = encode_clo(clo57296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5056850697;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam50862_fptr() // lam50862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50863 = arg_buffer[1];
//reading env and args
void* x5047050712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50569 = (decode_clo(env50863))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50569);
arg_buffer[2] = x5047050712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50569))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50862 = encode_clo(alloc_clo(lam50862_fptr, 0));

void* lam50864_fptr() // lam50864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50865 = arg_buffer[1];
//reading env and args
void* a5047550722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50569 = (decode_clo(env50865))[3];
//not do dummy comment
void* a5047350718 = (decode_clo(env50865))[2];
//not do dummy comment
void* cons = (decode_clo(env50865))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50569;
arg_buffer[3] = a5047350718;
arg_buffer[4] = a5047550722;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50864 = encode_clo(alloc_clo(lam50864_fptr, 0));

void* lam50866_fptr() // lam50866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50867 = arg_buffer[1];
//reading env and args
void* a5047450720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5047350718 = (decode_clo(env50867))[5];
//not do dummy comment
void* filter = (decode_clo(env50867))[4];
//not do dummy comment
void* cons = (decode_clo(env50867))[3];
//not do dummy comment
void* op = (decode_clo(env50867))[2];
//not do dummy comment
void* kont50569 = (decode_clo(env50867))[1];

//creating new closure instance
void** clo57298 = alloc_clo(lam50864_fptr, 3);

//setting env list
clo57298[1] = cons;
clo57298[2] = a5047350718;
clo57298[3] = kont50569;
void* f5057150721 = encode_clo(clo57298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5057150721;
arg_buffer[3] = op;
arg_buffer[4] = a5047450720;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50866 = encode_clo(alloc_clo(lam50866_fptr, 0));

void* lam50868_fptr() // lam50868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50869 = arg_buffer[1];
//reading env and args
void* a5047350718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50869))[6];
//not do dummy comment
void* lst = (decode_clo(env50869))[5];
//not do dummy comment
void* filter = (decode_clo(env50869))[4];
//not do dummy comment
void* cons = (decode_clo(env50869))[3];
//not do dummy comment
void* op = (decode_clo(env50869))[2];
//not do dummy comment
void* kont50569 = (decode_clo(env50869))[1];

//creating new closure instance
void** clo57300 = alloc_clo(lam50866_fptr, 5);

//setting env list
clo57300[1] = kont50569;
clo57300[2] = op;
clo57300[3] = cons;
clo57300[4] = filter;
clo57300[5] = a5047350718;
void* f5057250719 = encode_clo(clo57300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5057250719;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50868 = encode_clo(alloc_clo(lam50868_fptr, 0));

void* lam50870_fptr() // lam50870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50871 = arg_buffer[1];
//reading env and args
void* a5047650724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* filter = (decode_clo(env50871))[3];
//not do dummy comment
void* op = (decode_clo(env50871))[2];
//not do dummy comment
void* kont50569 = (decode_clo(env50871))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont50569;
arg_buffer[3] = op;
arg_buffer[4] = a5047650724;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50870 = encode_clo(alloc_clo(lam50870_fptr, 0));

void* lam50872_fptr() // lam50872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50873 = arg_buffer[1];
//reading env and args
void* a5047250716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50873))[7];
//not do dummy comment
void* lst = (decode_clo(env50873))[6];
//not do dummy comment
void* cons = (decode_clo(env50873))[5];
//not do dummy comment
void* op = (decode_clo(env50873))[4];
//not do dummy comment
void* kont50569 = (decode_clo(env50873))[3];
//not do dummy comment
void* filter = (decode_clo(env50873))[2];
//not do dummy comment
void* car = (decode_clo(env50873))[1];

//if-clause
bool if_guard57301 = is_true(a5047250716);
if(if_guard57301)
{

//creating new closure instance
void** clo57303 = alloc_clo(lam50868_fptr, 6);

//setting env list
clo57303[1] = kont50569;
clo57303[2] = op;
clo57303[3] = cons;
clo57303[4] = filter;
clo57303[5] = lst;
clo57303[6] = cdr;
void* f5057350717 = encode_clo(clo57303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5057350717;
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
void** clo57305 = alloc_clo(lam50870_fptr, 3);

//setting env list
clo57305[1] = kont50569;
clo57305[2] = op;
clo57305[3] = filter;
void* f5057450723 = encode_clo(clo57305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5057450723;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50872 = encode_clo(alloc_clo(lam50872_fptr, 0));

void* lam50874_fptr() // lam50874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50875 = arg_buffer[1];
//reading env and args
void* a5047150714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50875))[7];
//not do dummy comment
void* lst = (decode_clo(env50875))[6];
//not do dummy comment
void* cons = (decode_clo(env50875))[5];
//not do dummy comment
void* op = (decode_clo(env50875))[4];
//not do dummy comment
void* kont50569 = (decode_clo(env50875))[3];
//not do dummy comment
void* filter = (decode_clo(env50875))[2];
//not do dummy comment
void* car = (decode_clo(env50875))[1];

//creating new closure instance
void** clo57307 = alloc_clo(lam50872_fptr, 7);

//setting env list
clo57307[1] = car;
clo57307[2] = filter;
clo57307[3] = kont50569;
clo57307[4] = op;
clo57307[5] = cons;
clo57307[6] = lst;
clo57307[7] = cdr;
void* f5057550715 = encode_clo(clo57307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5057550715;
arg_buffer[3] = a5047150714;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50874 = encode_clo(alloc_clo(lam50874_fptr, 0));

void* lam50876_fptr() // lam50876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50877 = arg_buffer[1];
//reading env and args
void* a5046950710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50877))[8];
//not do dummy comment
void* cons = (decode_clo(env50877))[7];
//not do dummy comment
void* list = (decode_clo(env50877))[6];
//not do dummy comment
void* cdr = (decode_clo(env50877))[5];
//not do dummy comment
void* op = (decode_clo(env50877))[4];
//not do dummy comment
void* kont50569 = (decode_clo(env50877))[3];
//not do dummy comment
void* filter = (decode_clo(env50877))[2];
//not do dummy comment
void* car = (decode_clo(env50877))[1];

//if-clause
bool if_guard57308 = is_true(a5046950710);
if(if_guard57308)
{

//creating new closure instance
void** clo57310 = alloc_clo(lam50862_fptr, 1);

//setting env list
clo57310[1] = kont50569;
void* f5057050711 = encode_clo(clo57310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5057050711;
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
void** clo57312 = alloc_clo(lam50874_fptr, 7);

//setting env list
clo57312[1] = car;
clo57312[2] = filter;
clo57312[3] = kont50569;
clo57312[4] = op;
clo57312[5] = cons;
clo57312[6] = lst;
clo57312[7] = cdr;
void* f5057650713 = encode_clo(clo57312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5057650713;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50876 = encode_clo(alloc_clo(lam50876_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50878 = arg_buffer[1];
//reading env and args
void* kont50569 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57314 = alloc_clo(lam50876_fptr, 8);

//setting env list
clo57314[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo57314[2] = filter;
clo57314[3] = kont50569;
clo57314[4] = op;
clo57314[5] = cdr;
clo57314[6] = list;
clo57314[7] = cons;
clo57314[8] = lst;
void* f5057750709 = encode_clo(clo57314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5057750709;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam50879_fptr() // lam50879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50880 = arg_buffer[1];
//reading env and args
void* a5048150732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50578 = (decode_clo(env50880))[3];
//not do dummy comment
void* drop = (decode_clo(env50880))[2];
//not do dummy comment
void* a5047950729 = (decode_clo(env50880))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont50578;
arg_buffer[3] = a5047950729;
arg_buffer[4] = a5048150732;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50879 = encode_clo(alloc_clo(lam50879_fptr, 0));

void* lam50882_fptr() // lam50882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50883 = arg_buffer[1];
//reading env and args
void* a5047950729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50578 = (decode_clo(env50883))[4];
//not do dummy comment
void* drop = (decode_clo(env50883))[3];
//not do dummy comment
void* n = (decode_clo(env50883))[2];
//not do dummy comment
void* _u45 = (decode_clo(env50883))[1];
mpz_t* mpzvar57315 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57315, "1", 10);
void* a5048050730 = encode_mpz(mpzvar57315);

//creating new closure instance
void** clo57317 = alloc_clo(lam50879_fptr, 3);

//setting env list
clo57317[1] = a5047950729;
clo57317[2] = drop;
clo57317[3] = kont50578;
void* f5057950731 = encode_clo(clo57317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5057950731;
arg_buffer[3] = n;
arg_buffer[4] = a5048050730;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50882 = encode_clo(alloc_clo(lam50882_fptr, 0));

void* lam50884_fptr() // lam50884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50885 = arg_buffer[1];
//reading env and args
void* a5047850727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env50885))[6];
//not do dummy comment
void* _u45 = (decode_clo(env50885))[5];
//not do dummy comment
void* cdr = (decode_clo(env50885))[4];
//not do dummy comment
void* kont50578 = (decode_clo(env50885))[3];
//not do dummy comment
void* lst = (decode_clo(env50885))[2];
//not do dummy comment
void* drop = (decode_clo(env50885))[1];

//if-clause
bool if_guard57318 = is_true(a5047850727);
if(if_guard57318)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50578);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50578))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57320 = alloc_clo(lam50882_fptr, 4);

//setting env list
clo57320[1] = _u45;
clo57320[2] = n;
clo57320[3] = drop;
clo57320[4] = kont50578;
void* f5058050728 = encode_clo(clo57320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5058050728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50884 = encode_clo(alloc_clo(lam50884_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50887 = arg_buffer[1];
//reading env and args
void* kont50578 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar57321 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57321, "0", 10);
void* a5047750725 = encode_mpz(mpzvar57321);

//creating new closure instance
void** clo57323 = alloc_clo(lam50884_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo57323[1] = drop;
clo57323[2] = lst;
clo57323[3] = kont50578;
clo57323[4] = cdr;
clo57323[5] = _u45;
clo57323[6] = n;
void* f5058150726 = encode_clo(clo57323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5058150726;
arg_buffer[3] = n;
arg_buffer[4] = a5047750725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam50888_fptr() // lam50888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50889 = arg_buffer[1];
//reading env and args
void* a5048550740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50582 = (decode_clo(env50889))[3];
//not do dummy comment
void* proc = (decode_clo(env50889))[2];
//not do dummy comment
void* a5048350736 = (decode_clo(env50889))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont50582;
arg_buffer[3] = a5048350736;
arg_buffer[4] = a5048550740;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50888 = encode_clo(alloc_clo(lam50888_fptr, 0));

void* lam50890_fptr() // lam50890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50891 = arg_buffer[1];
//reading env and args
void* a5048450738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5048350736 = (decode_clo(env50891))[5];
//not do dummy comment
void* foldr = (decode_clo(env50891))[4];
//not do dummy comment
void* kont50582 = (decode_clo(env50891))[3];
//not do dummy comment
void* proc = (decode_clo(env50891))[2];
//not do dummy comment
void* acc = (decode_clo(env50891))[1];

//creating new closure instance
void** clo57325 = alloc_clo(lam50888_fptr, 3);

//setting env list
clo57325[1] = a5048350736;
clo57325[2] = proc;
clo57325[3] = kont50582;
void* f5058350739 = encode_clo(clo57325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5058350739;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5048450738;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50890 = encode_clo(alloc_clo(lam50890_fptr, 0));

void* lam50892_fptr() // lam50892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50893 = arg_buffer[1];
//reading env and args
void* a5048350736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50893))[6];
//not do dummy comment
void* kont50582 = (decode_clo(env50893))[5];
//not do dummy comment
void* foldr = (decode_clo(env50893))[4];
//not do dummy comment
void* lst = (decode_clo(env50893))[3];
//not do dummy comment
void* proc = (decode_clo(env50893))[2];
//not do dummy comment
void* acc = (decode_clo(env50893))[1];

//creating new closure instance
void** clo57327 = alloc_clo(lam50890_fptr, 5);

//setting env list
clo57327[1] = acc;
clo57327[2] = proc;
clo57327[3] = kont50582;
clo57327[4] = foldr;
clo57327[5] = a5048350736;
void* f5058450737 = encode_clo(clo57327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5058450737;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50892 = encode_clo(alloc_clo(lam50892_fptr, 0));

void* lam50894_fptr() // lam50894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50895 = arg_buffer[1];
//reading env and args
void* a5048250734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50895))[7];
//not do dummy comment
void* car = (decode_clo(env50895))[6];
//not do dummy comment
void* kont50582 = (decode_clo(env50895))[5];
//not do dummy comment
void* foldr = (decode_clo(env50895))[4];
//not do dummy comment
void* lst = (decode_clo(env50895))[3];
//not do dummy comment
void* proc = (decode_clo(env50895))[2];
//not do dummy comment
void* acc = (decode_clo(env50895))[1];

//if-clause
bool if_guard57328 = is_true(a5048250734);
if(if_guard57328)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50582);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50582))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57330 = alloc_clo(lam50892_fptr, 6);

//setting env list
clo57330[1] = acc;
clo57330[2] = proc;
clo57330[3] = lst;
clo57330[4] = foldr;
clo57330[5] = kont50582;
clo57330[6] = cdr;
void* f5058550735 = encode_clo(clo57330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5058550735;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50894 = encode_clo(alloc_clo(lam50894_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50896 = arg_buffer[1];
//reading env and args
void* kont50582 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57332 = alloc_clo(lam50894_fptr, 7);

//setting env list
clo57332[1] = acc;
clo57332[2] = proc;
clo57332[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo57332[4] = foldr;
clo57332[5] = kont50582;
clo57332[6] = car;
clo57332[7] = cdr;
void* f5058650733 = encode_clo(clo57332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5058650733;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam50897_fptr() // lam50897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50898 = arg_buffer[1];
//reading env and args
void* a5048950748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5048750744 = (decode_clo(env50898))[3];
//not do dummy comment
void* kont50587 = (decode_clo(env50898))[2];
//not do dummy comment
void* cons = (decode_clo(env50898))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50587;
arg_buffer[3] = a5048750744;
arg_buffer[4] = a5048950748;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50897 = encode_clo(alloc_clo(lam50897_fptr, 0));

void* lam50899_fptr() // lam50899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50900 = arg_buffer[1];
//reading env and args
void* a5048850746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5048750744 = (decode_clo(env50900))[5];
//not do dummy comment
void* append = (decode_clo(env50900))[4];
//not do dummy comment
void* kont50587 = (decode_clo(env50900))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50900))[2];
//not do dummy comment
void* cons = (decode_clo(env50900))[1];

//creating new closure instance
void** clo57334 = alloc_clo(lam50897_fptr, 3);

//setting env list
clo57334[1] = cons;
clo57334[2] = kont50587;
clo57334[3] = a5048750744;
void* f5058850747 = encode_clo(clo57334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5058850747;
arg_buffer[3] = a5048850746;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50899 = encode_clo(alloc_clo(lam50899_fptr, 0));

void* lam50901_fptr() // lam50901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50902 = arg_buffer[1];
//reading env and args
void* a5048750744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50902))[6];
//not do dummy comment
void* append = (decode_clo(env50902))[5];
//not do dummy comment
void* kont50587 = (decode_clo(env50902))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50902))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50902))[2];
//not do dummy comment
void* cons = (decode_clo(env50902))[1];

//creating new closure instance
void** clo57336 = alloc_clo(lam50899_fptr, 5);

//setting env list
clo57336[1] = cons;
clo57336[2] = lst2;
clo57336[3] = kont50587;
clo57336[4] = append;
clo57336[5] = a5048750744;
void* f5058950745 = encode_clo(clo57336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5058950745;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50901 = encode_clo(alloc_clo(lam50901_fptr, 0));

void* lam50903_fptr() // lam50903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50904 = arg_buffer[1];
//reading env and args
void* a5048650742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50904))[7];
//not do dummy comment
void* append = (decode_clo(env50904))[6];
//not do dummy comment
void* kont50587 = (decode_clo(env50904))[5];
//not do dummy comment
void* lst2 = (decode_clo(env50904))[4];
//not do dummy comment
void* cons = (decode_clo(env50904))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50904))[2];
//not do dummy comment
void* car = (decode_clo(env50904))[1];

//if-clause
bool if_guard57337 = is_true(a5048650742);
if(if_guard57337)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50587);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50587))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57339 = alloc_clo(lam50901_fptr, 6);

//setting env list
clo57339[1] = cons;
clo57339[2] = lst1;
clo57339[3] = lst2;
clo57339[4] = kont50587;
clo57339[5] = append;
clo57339[6] = cdr;
void* f5059050743 = encode_clo(clo57339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5059050743;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50903 = encode_clo(alloc_clo(lam50903_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50905 = arg_buffer[1];
//reading env and args
void* kont50587 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57341 = alloc_clo(lam50903_fptr, 7);

//setting env list
clo57341[1] = car;
clo57341[2] = lst1;
clo57341[3] = cons;
clo57341[4] = lst2;
clo57341[5] = kont50587;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo57341[6] = append;
clo57341[7] = cdr;
void* f5059150741 = encode_clo(clo57341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5059150741;
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
void* _50906 = arg_buffer[1];
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

void* kont5059250749 = prim_car(lst);
void* lst50750 = prim_cdr(lst);
void* x5049050751 = apply_prim_hash(lst50750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5059250749);
arg_buffer[2] = x5049050751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5059250749))[0]);
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
void* _50907 = arg_buffer[1];
//reading env and args
void* kont50594 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5049150752 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50594);
arg_buffer[2] = x5049150752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50594))[0]);
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
void* _50908 = arg_buffer[1];
//reading env and args
void* kont50595 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5049250753 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50595);
arg_buffer[2] = x5049250753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50595))[0]);
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
void* _50909 = arg_buffer[1];
//reading env and args
void* kont50596 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5049350754 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50596);
arg_buffer[2] = x5049350754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50596))[0]);
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
void* _50910 = arg_buffer[1];
//reading env and args
void* kont50597 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5049450755 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50597);
arg_buffer[2] = x5049450755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50597))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_u45foldl_fptr() // call-foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50912 = arg_buffer[1];
//reading env and args
void* kont50598 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57342 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57342, "0", 10);
void* a5049550756 = encode_mpz(mpzvar57342);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont50598;
arg_buffer[3] = _u43;
arg_buffer[4] = a5049550756;
arg_buffer[5] = lst;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call_u45foldl = encode_clo(alloc_clo(call_u45foldl_fptr, 0));

void* lam50913_fptr() // lam50913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50914 = arg_buffer[1];
//reading env and args
void* a5050050762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50599 = (decode_clo(env50914))[2];
//not do dummy comment
void* call_u45foldl = (decode_clo(env50914))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call_u45foldl);
arg_buffer[2] = kont50599;
arg_buffer[3] = a5050050762;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50913 = encode_clo(alloc_clo(lam50913_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50919 = arg_buffer[1];
//reading env and args
void* kont50599 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar57343 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57343, "1", 10);
void* a5049650757 = encode_mpz(mpzvar57343);
mpz_t* mpzvar57344 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57344, "2", 10);
void* a5049750758 = encode_mpz(mpzvar57344);
mpz_t* mpzvar57345 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57345, "3", 10);
void* a5049850759 = encode_mpz(mpzvar57345);
mpz_t* mpzvar57346 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57346, "4", 10);
void* a5049950760 = encode_mpz(mpzvar57346);

//creating new closure instance
void** clo57348 = alloc_clo(lam50913_fptr, 2);

//setting env list
clo57348[1] = call_u45foldl;
clo57348[2] = kont50599;
void* f5060050761 = encode_clo(clo57348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5060050761;
arg_buffer[3] = a5049650757;
arg_buffer[4] = a5049750758;
arg_buffer[5] = a5049850759;
arg_buffer[6] = a5049950760;
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

