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
void* _42803 = arg_buffer[1];
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

void* kont4252342629 = prim_car(lst);
void* lst42630 = prim_cdr(lst);
void* x4242842631 = apply_prim__u43(lst42630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4252342629);
arg_buffer[2] = x4242842631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4252342629))[0]);
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
void* _42804 = arg_buffer[1];
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

void* kont4252542632 = prim_car(lst);
void* lst42633 = prim_cdr(lst);
void* x4242942634 = apply_prim__u45(lst42633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4252542632);
arg_buffer[2] = x4242942634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4252542632))[0]);
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
void* _42805 = arg_buffer[1];
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

void* kont4252742635 = prim_car(lst);
void* lst42636 = prim_cdr(lst);
void* x4243042637 = apply_prim__u42(lst42636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4252742635);
arg_buffer[2] = x4243042637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4252742635))[0]);
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
void* _42806 = arg_buffer[1];
//reading env and args
void* kont42529 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4243142638 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42529);
arg_buffer[2] = x4243142638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42529))[0]);
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
void* _42807 = arg_buffer[1];
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

void* kont4253042639 = prim_car(lst);
void* lst42640 = prim_cdr(lst);
void* x4243242641 = apply_prim__u47(lst42640);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4253042639);
arg_buffer[2] = x4243242641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4253042639))[0]);
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
void* _42808 = arg_buffer[1];
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

void* kont4253242642 = prim_car(lst);
void* lst42643 = prim_cdr(lst);
void* x4243342644 = apply_prim__u61(lst42643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4253242642);
arg_buffer[2] = x4243342644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4253242642))[0]);
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
void* _42809 = arg_buffer[1];
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

void* kont4253442645 = prim_car(lst);
void* lst42646 = prim_cdr(lst);
void* x4243442647 = apply_prim__u62(lst42646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4253442645);
arg_buffer[2] = x4243442647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4253442645))[0]);
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
void* _42810 = arg_buffer[1];
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

void* kont4253642648 = prim_car(lst);
void* lst42649 = prim_cdr(lst);
void* x4243542650 = apply_prim__u60(lst42649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4253642648);
arg_buffer[2] = x4243542650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4253642648))[0]);
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
void* _42811 = arg_buffer[1];
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

void* kont4253842651 = prim_car(lst);
void* lst42652 = prim_cdr(lst);
void* x4243642653 = apply_prim__u60_u61(lst42652);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4253842651);
arg_buffer[2] = x4243642653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4253842651))[0]);
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
void* _42812 = arg_buffer[1];
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

void* kont4254042654 = prim_car(lst);
void* lst42655 = prim_cdr(lst);
void* x4243742656 = apply_prim__u62_u61(lst42655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4254042654);
arg_buffer[2] = x4243742656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4254042654))[0]);
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
void* _42813 = arg_buffer[1];
//reading env and args
void* kont42542 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4243842657 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42542);
arg_buffer[2] = x4243842657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42542))[0]);
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
void* _42814 = arg_buffer[1];
//reading env and args
void* kont42543 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4243942658 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42543);
arg_buffer[2] = x4243942658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42543))[0]);
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
void* _42815 = arg_buffer[1];
//reading env and args
void* kont42544 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4244042659 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42544);
arg_buffer[2] = x4244042659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42544))[0]);
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
void* _42816 = arg_buffer[1];
//reading env and args
void* kont42545 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4244142660 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42545);
arg_buffer[2] = x4244142660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42545))[0]);
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
void* _42817 = arg_buffer[1];
//reading env and args
void* kont42546 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4244242661 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42546);
arg_buffer[2] = x4244242661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42546))[0]);
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
void* _42818 = arg_buffer[1];
//reading env and args
void* kont42547 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4244342662 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42547);
arg_buffer[2] = x4244342662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42547))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam42819_fptr() // lam42819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42820 = arg_buffer[1];
//reading env and args
void* a4244642666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42548 = (decode_clo(env42820))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env42820))[2];
//not do dummy comment
void* a4244442663 = (decode_clo(env42820))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42548;
arg_buffer[3] = a4244442663;
arg_buffer[4] = a4244642666;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42819 = encode_clo(alloc_clo(lam42819_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42823 = arg_buffer[1];
//reading env and args
void* kont42548 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44108 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44108, "0", 10);
void* a4244442663 = encode_mpz(mpzvar44108);
mpz_t* mpzvar44109 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44109, "2", 10);
void* a4244542664 = encode_mpz(mpzvar44109);

//creating new closure instance
void** clo44111 = alloc_clo(lam42819_fptr, 3);

//setting env list
clo44111[1] = a4244442663;
clo44111[2] = equal_u63;
clo44111[3] = kont42548;
void* f4254942665 = encode_clo(clo44111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4254942665;
arg_buffer[3] = x;
arg_buffer[4] = a4244542664;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam42824_fptr() // lam42824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42825 = arg_buffer[1];
//reading env and args
void* a4244942670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4244742667 = (decode_clo(env42825))[3];
//not do dummy comment
void* kont42550 = (decode_clo(env42825))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env42825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42550;
arg_buffer[3] = a4244742667;
arg_buffer[4] = a4244942670;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42824 = encode_clo(alloc_clo(lam42824_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42828 = arg_buffer[1];
//reading env and args
void* kont42550 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44112 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44112, "1", 10);
void* a4244742667 = encode_mpz(mpzvar44112);
mpz_t* mpzvar44113 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44113, "2", 10);
void* a4244842668 = encode_mpz(mpzvar44113);

//creating new closure instance
void** clo44115 = alloc_clo(lam42824_fptr, 3);

//setting env list
clo44115[1] = equal_u63;
clo44115[2] = kont42550;
clo44115[3] = a4244742667;
void* f4255142669 = encode_clo(clo44115);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4255142669;
arg_buffer[3] = x;
arg_buffer[4] = a4244842668;
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
void* _42829 = arg_buffer[1];
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

void* kont4255242671 = prim_car(x);
void* x42672 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4255242671);
arg_buffer[2] = x42672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4255242671))[0]);
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
void* _42830 = arg_buffer[1];
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

void* kont4255442673 = prim_car(lst);
void* lst42674 = prim_cdr(lst);
void* x4245042675 = apply_prim_and(lst42674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4255442673);
arg_buffer[2] = x4245042675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4255442673))[0]);
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
void* _42831 = arg_buffer[1];
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

void* kont4255642676 = prim_car(lst);
void* lst42677 = prim_cdr(lst);
void* x4245142678 = apply_prim_or(lst42677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4255642676);
arg_buffer[2] = x4245142678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4255642676))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam42834_fptr() // lam42834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42835 = arg_buffer[1];
//reading env and args
void* a4245742688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42558 = (decode_clo(env42835))[3];
//not do dummy comment
void* x = (decode_clo(env42835))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42835))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont42558;
arg_buffer[3] = x;
arg_buffer[4] = a4245742688;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42834 = encode_clo(alloc_clo(lam42834_fptr, 0));

void* lam42836_fptr() // lam42836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42837 = arg_buffer[1];
//reading env and args
void* a4245542685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42837))[5];
//not do dummy comment
void* x = (decode_clo(env42837))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env42837))[3];
//not do dummy comment
void* kont42558 = (decode_clo(env42837))[2];
//not do dummy comment
void* cdr = (decode_clo(env42837))[1];

//if-clause
bool if_guard44116 = is_true(a4245542685);
if(if_guard44116)
{
void* x4245642686 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42558);
arg_buffer[2] = x4245642686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42558))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44118 = alloc_clo(lam42834_fptr, 3);

//setting env list
clo44118[1] = member_u63;
clo44118[2] = x;
clo44118[3] = kont42558;
void* f4255942687 = encode_clo(clo44118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4255942687;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42836 = encode_clo(alloc_clo(lam42836_fptr, 0));

void* lam42838_fptr() // lam42838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42839 = arg_buffer[1];
//reading env and args
void* a4245442683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42839))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env42839))[5];
//not do dummy comment
void* x = (decode_clo(env42839))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env42839))[3];
//not do dummy comment
void* kont42558 = (decode_clo(env42839))[2];
//not do dummy comment
void* cdr = (decode_clo(env42839))[1];

//creating new closure instance
void** clo44120 = alloc_clo(lam42836_fptr, 5);

//setting env list
clo44120[1] = cdr;
clo44120[2] = kont42558;
clo44120[3] = member_u63;
clo44120[4] = x;
clo44120[5] = lst;
void* f4256042684 = encode_clo(clo44120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4256042684;
arg_buffer[3] = a4245442683;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42838 = encode_clo(alloc_clo(lam42838_fptr, 0));

void* lam42840_fptr() // lam42840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42841 = arg_buffer[1];
//reading env and args
void* a4245242680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42841))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env42841))[6];
//not do dummy comment
void* x = (decode_clo(env42841))[5];
//not do dummy comment
void* car = (decode_clo(env42841))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env42841))[3];
//not do dummy comment
void* kont42558 = (decode_clo(env42841))[2];
//not do dummy comment
void* cdr = (decode_clo(env42841))[1];

//if-clause
bool if_guard44121 = is_true(a4245242680);
if(if_guard44121)
{
void* x4245342681 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42558);
arg_buffer[2] = x4245342681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42558))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44123 = alloc_clo(lam42838_fptr, 6);

//setting env list
clo44123[1] = cdr;
clo44123[2] = kont42558;
clo44123[3] = member_u63;
clo44123[4] = x;
clo44123[5] = equal_u63;
clo44123[6] = lst;
void* f4256142682 = encode_clo(clo44123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4256142682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42840 = encode_clo(alloc_clo(lam42840_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42842 = arg_buffer[1];
//reading env and args
void* kont42558 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44125 = alloc_clo(lam42840_fptr, 7);

//setting env list
clo44125[1] = cdr;
clo44125[2] = kont42558;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo44125[3] = member_u63;
clo44125[4] = car;
clo44125[5] = x;
clo44125[6] = equal_u63;
clo44125[7] = lst;
void* f4256242679 = encode_clo(clo44125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4256242679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam42843_fptr() // lam42843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42844 = arg_buffer[1];
//reading env and args
void* a4246142696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42563 = (decode_clo(env42844))[4];
//not do dummy comment
void* a4246042694 = (decode_clo(env42844))[3];
//not do dummy comment
void* fun = (decode_clo(env42844))[2];
//not do dummy comment
void* foldl = (decode_clo(env42844))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont42563;
arg_buffer[3] = fun;
arg_buffer[4] = a4246042694;
arg_buffer[5] = a4246142696;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42843 = encode_clo(alloc_clo(lam42843_fptr, 0));

void* lam42845_fptr() // lam42845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42846 = arg_buffer[1];
//reading env and args
void* a4246042694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42846))[5];
//not do dummy comment
void* lst = (decode_clo(env42846))[4];
//not do dummy comment
void* kont42563 = (decode_clo(env42846))[3];
//not do dummy comment
void* fun = (decode_clo(env42846))[2];
//not do dummy comment
void* foldl = (decode_clo(env42846))[1];

//creating new closure instance
void** clo44127 = alloc_clo(lam42843_fptr, 4);

//setting env list
clo44127[1] = foldl;
clo44127[2] = fun;
clo44127[3] = a4246042694;
clo44127[4] = kont42563;
void* f4256442695 = encode_clo(clo44127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4256442695;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42845 = encode_clo(alloc_clo(lam42845_fptr, 0));

void* lam42847_fptr() // lam42847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42848 = arg_buffer[1];
//reading env and args
void* a4245942692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42848))[6];
//not do dummy comment
void* lst = (decode_clo(env42848))[5];
//not do dummy comment
void* kont42563 = (decode_clo(env42848))[4];
//not do dummy comment
void* fun = (decode_clo(env42848))[3];
//not do dummy comment
void* acc = (decode_clo(env42848))[2];
//not do dummy comment
void* foldl = (decode_clo(env42848))[1];

//creating new closure instance
void** clo44129 = alloc_clo(lam42845_fptr, 5);

//setting env list
clo44129[1] = foldl;
clo44129[2] = fun;
clo44129[3] = kont42563;
clo44129[4] = lst;
clo44129[5] = cdr;
void* f4256542693 = encode_clo(clo44129);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4256542693;
arg_buffer[3] = a4245942692;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42847 = encode_clo(alloc_clo(lam42847_fptr, 0));

void* lam42849_fptr() // lam42849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42850 = arg_buffer[1];
//reading env and args
void* a4245842690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42850))[7];
//not do dummy comment
void* lst = (decode_clo(env42850))[6];
//not do dummy comment
void* kont42563 = (decode_clo(env42850))[5];
//not do dummy comment
void* fun = (decode_clo(env42850))[4];
//not do dummy comment
void* acc = (decode_clo(env42850))[3];
//not do dummy comment
void* car = (decode_clo(env42850))[2];
//not do dummy comment
void* foldl = (decode_clo(env42850))[1];

//if-clause
bool if_guard44130 = is_true(a4245842690);
if(if_guard44130)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42563);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44132 = alloc_clo(lam42847_fptr, 6);

//setting env list
clo44132[1] = foldl;
clo44132[2] = acc;
clo44132[3] = fun;
clo44132[4] = kont42563;
clo44132[5] = lst;
clo44132[6] = cdr;
void* f4256642691 = encode_clo(clo44132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4256642691;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42849 = encode_clo(alloc_clo(lam42849_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42851 = arg_buffer[1];
//reading env and args
void* kont42563 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo44134 = alloc_clo(lam42849_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo44134[1] = foldl;
clo44134[2] = car;
clo44134[3] = acc;
clo44134[4] = fun;
clo44134[5] = kont42563;
clo44134[6] = lst;
clo44134[7] = cdr;
void* f4256742689 = encode_clo(clo44134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4256742689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam42852_fptr() // lam42852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42853 = arg_buffer[1];
//reading env and args
void* a4246542704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42853))[3];
//not do dummy comment
void* kont42568 = (decode_clo(env42853))[2];
//not do dummy comment
void* a4246342700 = (decode_clo(env42853))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42568;
arg_buffer[3] = a4246342700;
arg_buffer[4] = a4246542704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42852 = encode_clo(alloc_clo(lam42852_fptr, 0));

void* lam42854_fptr() // lam42854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42855 = arg_buffer[1];
//reading env and args
void* a4246442702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42855))[5];
//not do dummy comment
void* kont42568 = (decode_clo(env42855))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42855))[3];
//not do dummy comment
void* cons = (decode_clo(env42855))[2];
//not do dummy comment
void* a4246342700 = (decode_clo(env42855))[1];

//creating new closure instance
void** clo44136 = alloc_clo(lam42852_fptr, 3);

//setting env list
clo44136[1] = a4246342700;
clo44136[2] = kont42568;
clo44136[3] = reverse_u45helper;
void* f4256942703 = encode_clo(clo44136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4256942703;
arg_buffer[3] = a4246442702;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42854 = encode_clo(alloc_clo(lam42854_fptr, 0));

void* lam42856_fptr() // lam42856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42857 = arg_buffer[1];
//reading env and args
void* a4246342700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42857))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42857))[5];
//not do dummy comment
void* kont42568 = (decode_clo(env42857))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42857))[3];
//not do dummy comment
void* car = (decode_clo(env42857))[2];
//not do dummy comment
void* cons = (decode_clo(env42857))[1];

//creating new closure instance
void** clo44138 = alloc_clo(lam42854_fptr, 5);

//setting env list
clo44138[1] = a4246342700;
clo44138[2] = cons;
clo44138[3] = lst2;
clo44138[4] = kont42568;
clo44138[5] = reverse_u45helper;
void* f4257042701 = encode_clo(clo44138);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4257042701;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42856 = encode_clo(alloc_clo(lam42856_fptr, 0));

void* lam42858_fptr() // lam42858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42859 = arg_buffer[1];
//reading env and args
void* a4246242698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42859))[7];
//not do dummy comment
void* lst = (decode_clo(env42859))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42859))[5];
//not do dummy comment
void* kont42568 = (decode_clo(env42859))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42859))[3];
//not do dummy comment
void* car = (decode_clo(env42859))[2];
//not do dummy comment
void* cons = (decode_clo(env42859))[1];

//if-clause
bool if_guard44139 = is_true(a4246242698);
if(if_guard44139)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42568);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42568))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44141 = alloc_clo(lam42856_fptr, 6);

//setting env list
clo44141[1] = cons;
clo44141[2] = car;
clo44141[3] = lst2;
clo44141[4] = kont42568;
clo44141[5] = reverse_u45helper;
clo44141[6] = lst;
void* f4257142699 = encode_clo(clo44141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4257142699;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42858 = encode_clo(alloc_clo(lam42858_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42860 = arg_buffer[1];
//reading env and args
void* kont42568 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44143 = alloc_clo(lam42858_fptr, 7);

//setting env list
clo44143[1] = cons;
clo44143[2] = car;
clo44143[3] = lst2;
clo44143[4] = kont42568;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo44143[5] = reverse_u45helper;
clo44143[6] = lst;
clo44143[7] = cdr;
void* f4257242697 = encode_clo(clo44143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4257242697;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam42861_fptr() // lam42861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42862 = arg_buffer[1];
//reading env and args
void* a4246642706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42862))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42862))[2];
//not do dummy comment
void* kont42573 = (decode_clo(env42862))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42573;
arg_buffer[3] = lst;
arg_buffer[4] = a4246642706;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42861 = encode_clo(alloc_clo(lam42861_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42863 = arg_buffer[1];
//reading env and args
void* kont42573 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo44145 = alloc_clo(lam42861_fptr, 3);

//setting env list
clo44145[1] = kont42573;
clo44145[2] = reverse_u45helper;
clo44145[3] = lst;
void* f4257442705 = encode_clo(clo44145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4257442705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam42864_fptr() // lam42864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42865 = arg_buffer[1];
//reading env and args
void* x4246942711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42575 = (decode_clo(env42865))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42575);
arg_buffer[2] = x4246942711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42575))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42864 = encode_clo(alloc_clo(lam42864_fptr, 0));

void* lam42866_fptr() // lam42866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42867 = arg_buffer[1];
//reading env and args
void* a4247442720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42575 = (decode_clo(env42867))[4];
//not do dummy comment
void* a4247042713 = (decode_clo(env42867))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42867))[2];
//not do dummy comment
void* a4247242716 = (decode_clo(env42867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42575;
arg_buffer[3] = a4247042713;
arg_buffer[4] = a4247242716;
arg_buffer[5] = a4247442720;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42866 = encode_clo(alloc_clo(lam42866_fptr, 0));

void* lam42868_fptr() // lam42868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42869 = arg_buffer[1];
//reading env and args
void* a4247342718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42575 = (decode_clo(env42869))[6];
//not do dummy comment
void* a4247042713 = (decode_clo(env42869))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42869))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42869))[3];
//not do dummy comment
void* cons = (decode_clo(env42869))[2];
//not do dummy comment
void* a4247242716 = (decode_clo(env42869))[1];

//creating new closure instance
void** clo44147 = alloc_clo(lam42866_fptr, 4);

//setting env list
clo44147[1] = a4247242716;
clo44147[2] = take_u45helper;
clo44147[3] = a4247042713;
clo44147[4] = kont42575;
void* f4257742719 = encode_clo(clo44147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4257742719;
arg_buffer[3] = a4247342718;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42868 = encode_clo(alloc_clo(lam42868_fptr, 0));

void* lam42870_fptr() // lam42870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42871 = arg_buffer[1];
//reading env and args
void* a4247242716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42575 = (decode_clo(env42871))[7];
//not do dummy comment
void* lst = (decode_clo(env42871))[6];
//not do dummy comment
void* a4247042713 = (decode_clo(env42871))[5];
//not do dummy comment
void* car = (decode_clo(env42871))[4];
//not do dummy comment
void* cons = (decode_clo(env42871))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42871))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42871))[1];

//creating new closure instance
void** clo44149 = alloc_clo(lam42868_fptr, 6);

//setting env list
clo44149[1] = a4247242716;
clo44149[2] = cons;
clo44149[3] = lst2;
clo44149[4] = take_u45helper;
clo44149[5] = a4247042713;
clo44149[6] = kont42575;
void* f4257842717 = encode_clo(clo44149);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4257842717;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42870 = encode_clo(alloc_clo(lam42870_fptr, 0));

void* lam42873_fptr() // lam42873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42874 = arg_buffer[1];
//reading env and args
void* a4247042713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42575 = (decode_clo(env42874))[8];
//not do dummy comment
void* lst = (decode_clo(env42874))[7];
//not do dummy comment
void* cons = (decode_clo(env42874))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42874))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42874))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42874))[3];
//not do dummy comment
void* n = (decode_clo(env42874))[2];
//not do dummy comment
void* car = (decode_clo(env42874))[1];
mpz_t* mpzvar44150 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44150, "1", 10);
void* a4247142714 = encode_mpz(mpzvar44150);

//creating new closure instance
void** clo44152 = alloc_clo(lam42870_fptr, 7);

//setting env list
clo44152[1] = lst2;
clo44152[2] = take_u45helper;
clo44152[3] = cons;
clo44152[4] = car;
clo44152[5] = a4247042713;
clo44152[6] = lst;
clo44152[7] = kont42575;
void* f4257942715 = encode_clo(clo44152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4257942715;
arg_buffer[3] = n;
arg_buffer[4] = a4247142714;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42873 = encode_clo(alloc_clo(lam42873_fptr, 0));

void* lam42875_fptr() // lam42875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42876 = arg_buffer[1];
//reading env and args
void* a4246842709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42876))[10];
//not do dummy comment
void* kont42575 = (decode_clo(env42876))[9];
//not do dummy comment
void* lst = (decode_clo(env42876))[8];
//not do dummy comment
void* reverse = (decode_clo(env42876))[7];
//not do dummy comment
void* cons = (decode_clo(env42876))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42876))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42876))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42876))[3];
//not do dummy comment
void* n = (decode_clo(env42876))[2];
//not do dummy comment
void* car = (decode_clo(env42876))[1];

//if-clause
bool if_guard44153 = is_true(a4246842709);
if(if_guard44153)
{

//creating new closure instance
void** clo44155 = alloc_clo(lam42864_fptr, 1);

//setting env list
clo44155[1] = kont42575;
void* f4257642710 = encode_clo(clo44155);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4257642710;
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
void** clo44157 = alloc_clo(lam42873_fptr, 8);

//setting env list
clo44157[1] = car;
clo44157[2] = n;
clo44157[3] = lst2;
clo44157[4] = take_u45helper;
clo44157[5] = _u45;
clo44157[6] = cons;
clo44157[7] = lst;
clo44157[8] = kont42575;
void* f4258042712 = encode_clo(clo44157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4258042712;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42875 = encode_clo(alloc_clo(lam42875_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42878 = arg_buffer[1];
//reading env and args
void* kont42575 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar44158 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44158, "0", 10);
void* a4246742707 = encode_mpz(mpzvar44158);

//creating new closure instance
void** clo44160 = alloc_clo(lam42875_fptr, 10);

//setting env list
clo44160[1] = car;
clo44160[2] = n;
clo44160[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo44160[4] = take_u45helper;
clo44160[5] = _u45;
clo44160[6] = cons;
clo44160[7] = reverse;
clo44160[8] = lst;
clo44160[9] = kont42575;
clo44160[10] = cdr;
void* f4258142708 = encode_clo(clo44160);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4258142708;
arg_buffer[3] = n;
arg_buffer[4] = a4246742707;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam42879_fptr() // lam42879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42880 = arg_buffer[1];
//reading env and args
void* a4247542722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42880))[4];
//not do dummy comment
void* kont42582 = (decode_clo(env42880))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42880))[2];
//not do dummy comment
void* n = (decode_clo(env42880))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42582;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4247542722;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42879 = encode_clo(alloc_clo(lam42879_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42881 = arg_buffer[1];
//reading env and args
void* kont42582 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44162 = alloc_clo(lam42879_fptr, 4);

//setting env list
clo44162[1] = n;
clo44162[2] = take_u45helper;
clo44162[3] = kont42582;
clo44162[4] = lst;
void* f4258342721 = encode_clo(clo44162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4258342721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam42883_fptr() // lam42883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42884 = arg_buffer[1];
//reading env and args
void* a4248042730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4247842726 = (decode_clo(env42884))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42884))[2];
//not do dummy comment
void* kont42584 = (decode_clo(env42884))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont42584;
arg_buffer[3] = a4247842726;
arg_buffer[4] = a4248042730;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42883 = encode_clo(alloc_clo(lam42883_fptr, 0));

void* lam42885_fptr() // lam42885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42886 = arg_buffer[1];
//reading env and args
void* a4247942728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env42886))[4];
//not do dummy comment
void* a4247842726 = (decode_clo(env42886))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42886))[2];
//not do dummy comment
void* kont42584 = (decode_clo(env42886))[1];

//creating new closure instance
void** clo44164 = alloc_clo(lam42883_fptr, 3);

//setting env list
clo44164[1] = kont42584;
clo44164[2] = _u43;
clo44164[3] = a4247842726;
void* f4258542729 = encode_clo(clo44164);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4258542729;
arg_buffer[3] = a4247942728;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42885 = encode_clo(alloc_clo(lam42885_fptr, 0));

void* lam42888_fptr() // lam42888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42889 = arg_buffer[1];
//reading env and args
void* a4247642724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42889))[5];
//not do dummy comment
void* lst = (decode_clo(env42889))[4];
//not do dummy comment
void* length = (decode_clo(env42889))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42889))[2];
//not do dummy comment
void* kont42584 = (decode_clo(env42889))[1];

//if-clause
bool if_guard44165 = is_true(a4247642724);
if(if_guard44165)
{
mpz_t* mpzvar44166 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44166, "0", 10);
void* x4247742725 = encode_mpz(mpzvar44166);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42584);
arg_buffer[2] = x4247742725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42584))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar44167 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44167, "1", 10);
void* a4247842726 = encode_mpz(mpzvar44167);

//creating new closure instance
void** clo44169 = alloc_clo(lam42885_fptr, 4);

//setting env list
clo44169[1] = kont42584;
clo44169[2] = _u43;
clo44169[3] = a4247842726;
clo44169[4] = length;
void* f4258642727 = encode_clo(clo44169);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4258642727;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42888 = encode_clo(alloc_clo(lam42888_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42890 = arg_buffer[1];
//reading env and args
void* kont42584 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo44171 = alloc_clo(lam42888_fptr, 5);

//setting env list
clo44171[1] = kont42584;
clo44171[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo44171[3] = length;
clo44171[4] = lst;
clo44171[5] = cdr;
void* f4258742723 = encode_clo(clo44171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4258742723;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam42891_fptr() // lam42891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42892 = arg_buffer[1];
//reading env and args
void* x4248242734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42588 = (decode_clo(env42892))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42588);
arg_buffer[2] = x4248242734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42891 = encode_clo(alloc_clo(lam42891_fptr, 0));

void* lam42893_fptr() // lam42893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42894 = arg_buffer[1];
//reading env and args
void* a4248642742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4248442738 = (decode_clo(env42894))[3];
//not do dummy comment
void* cons = (decode_clo(env42894))[2];
//not do dummy comment
void* kont42588 = (decode_clo(env42894))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42588;
arg_buffer[3] = a4248442738;
arg_buffer[4] = a4248642742;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42893 = encode_clo(alloc_clo(lam42893_fptr, 0));

void* lam42895_fptr() // lam42895 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42896 = arg_buffer[1];
//reading env and args
void* a4248542740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4248442738 = (decode_clo(env42896))[5];
//not do dummy comment
void* map = (decode_clo(env42896))[4];
//not do dummy comment
void* proc = (decode_clo(env42896))[3];
//not do dummy comment
void* cons = (decode_clo(env42896))[2];
//not do dummy comment
void* kont42588 = (decode_clo(env42896))[1];

//creating new closure instance
void** clo44173 = alloc_clo(lam42893_fptr, 3);

//setting env list
clo44173[1] = kont42588;
clo44173[2] = cons;
clo44173[3] = a4248442738;
void* f4259042741 = encode_clo(clo44173);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4259042741;
arg_buffer[3] = proc;
arg_buffer[4] = a4248542740;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42895 = encode_clo(alloc_clo(lam42895_fptr, 0));

void* lam42897_fptr() // lam42897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42898 = arg_buffer[1];
//reading env and args
void* a4248442738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42898))[6];
//not do dummy comment
void* lst = (decode_clo(env42898))[5];
//not do dummy comment
void* map = (decode_clo(env42898))[4];
//not do dummy comment
void* proc = (decode_clo(env42898))[3];
//not do dummy comment
void* cons = (decode_clo(env42898))[2];
//not do dummy comment
void* kont42588 = (decode_clo(env42898))[1];

//creating new closure instance
void** clo44175 = alloc_clo(lam42895_fptr, 5);

//setting env list
clo44175[1] = kont42588;
clo44175[2] = cons;
clo44175[3] = proc;
clo44175[4] = map;
clo44175[5] = a4248442738;
void* f4259142739 = encode_clo(clo44175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4259142739;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42897 = encode_clo(alloc_clo(lam42897_fptr, 0));

void* lam42899_fptr() // lam42899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42900 = arg_buffer[1];
//reading env and args
void* a4248342736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42900))[6];
//not do dummy comment
void* lst = (decode_clo(env42900))[5];
//not do dummy comment
void* map = (decode_clo(env42900))[4];
//not do dummy comment
void* proc = (decode_clo(env42900))[3];
//not do dummy comment
void* cons = (decode_clo(env42900))[2];
//not do dummy comment
void* kont42588 = (decode_clo(env42900))[1];

//creating new closure instance
void** clo44177 = alloc_clo(lam42897_fptr, 6);

//setting env list
clo44177[1] = kont42588;
clo44177[2] = cons;
clo44177[3] = proc;
clo44177[4] = map;
clo44177[5] = lst;
clo44177[6] = cdr;
void* f4259242737 = encode_clo(clo44177);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4259242737;
arg_buffer[3] = a4248342736;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42899 = encode_clo(alloc_clo(lam42899_fptr, 0));

void* lam42901_fptr() // lam42901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42902 = arg_buffer[1];
//reading env and args
void* a4248142732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42902))[8];
//not do dummy comment
void* map = (decode_clo(env42902))[7];
//not do dummy comment
void* proc = (decode_clo(env42902))[6];
//not do dummy comment
void* car = (decode_clo(env42902))[5];
//not do dummy comment
void* list = (decode_clo(env42902))[4];
//not do dummy comment
void* cdr = (decode_clo(env42902))[3];
//not do dummy comment
void* cons = (decode_clo(env42902))[2];
//not do dummy comment
void* kont42588 = (decode_clo(env42902))[1];

//if-clause
bool if_guard44178 = is_true(a4248142732);
if(if_guard44178)
{

//creating new closure instance
void** clo44180 = alloc_clo(lam42891_fptr, 1);

//setting env list
clo44180[1] = kont42588;
void* f4258942733 = encode_clo(clo44180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4258942733;
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
void** clo44182 = alloc_clo(lam42899_fptr, 6);

//setting env list
clo44182[1] = kont42588;
clo44182[2] = cons;
clo44182[3] = proc;
clo44182[4] = map;
clo44182[5] = lst;
clo44182[6] = cdr;
void* f4259342735 = encode_clo(clo44182);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4259342735;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42901 = encode_clo(alloc_clo(lam42901_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42903 = arg_buffer[1];
//reading env and args
void* kont42588 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44184 = alloc_clo(lam42901_fptr, 8);

//setting env list
clo44184[1] = kont42588;
clo44184[2] = cons;
clo44184[3] = cdr;
clo44184[4] = list;
clo44184[5] = car;
clo44184[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo44184[7] = map;
clo44184[8] = lst;
void* f4259442731 = encode_clo(clo44184);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4259442731;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam42904_fptr() // lam42904 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42905 = arg_buffer[1];
//reading env and args
void* x4248842746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42595 = (decode_clo(env42905))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42595);
arg_buffer[2] = x4248842746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42595))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42904 = encode_clo(alloc_clo(lam42904_fptr, 0));

void* lam42906_fptr() // lam42906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42907 = arg_buffer[1];
//reading env and args
void* a4249342756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4249142752 = (decode_clo(env42907))[3];
//not do dummy comment
void* kont42595 = (decode_clo(env42907))[2];
//not do dummy comment
void* cons = (decode_clo(env42907))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42595;
arg_buffer[3] = a4249142752;
arg_buffer[4] = a4249342756;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42906 = encode_clo(alloc_clo(lam42906_fptr, 0));

void* lam42908_fptr() // lam42908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42909 = arg_buffer[1];
//reading env and args
void* a4249242754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4249142752 = (decode_clo(env42909))[5];
//not do dummy comment
void* kont42595 = (decode_clo(env42909))[4];
//not do dummy comment
void* op = (decode_clo(env42909))[3];
//not do dummy comment
void* filter = (decode_clo(env42909))[2];
//not do dummy comment
void* cons = (decode_clo(env42909))[1];

//creating new closure instance
void** clo44186 = alloc_clo(lam42906_fptr, 3);

//setting env list
clo44186[1] = cons;
clo44186[2] = kont42595;
clo44186[3] = a4249142752;
void* f4259742755 = encode_clo(clo44186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4259742755;
arg_buffer[3] = op;
arg_buffer[4] = a4249242754;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42908 = encode_clo(alloc_clo(lam42908_fptr, 0));

void* lam42910_fptr() // lam42910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42911 = arg_buffer[1];
//reading env and args
void* a4249142752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42911))[6];
//not do dummy comment
void* lst = (decode_clo(env42911))[5];
//not do dummy comment
void* kont42595 = (decode_clo(env42911))[4];
//not do dummy comment
void* op = (decode_clo(env42911))[3];
//not do dummy comment
void* filter = (decode_clo(env42911))[2];
//not do dummy comment
void* cons = (decode_clo(env42911))[1];

//creating new closure instance
void** clo44188 = alloc_clo(lam42908_fptr, 5);

//setting env list
clo44188[1] = cons;
clo44188[2] = filter;
clo44188[3] = op;
clo44188[4] = kont42595;
clo44188[5] = a4249142752;
void* f4259842753 = encode_clo(clo44188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4259842753;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42910 = encode_clo(alloc_clo(lam42910_fptr, 0));

void* lam42912_fptr() // lam42912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42913 = arg_buffer[1];
//reading env and args
void* a4249442758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42595 = (decode_clo(env42913))[3];
//not do dummy comment
void* op = (decode_clo(env42913))[2];
//not do dummy comment
void* filter = (decode_clo(env42913))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont42595;
arg_buffer[3] = op;
arg_buffer[4] = a4249442758;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42912 = encode_clo(alloc_clo(lam42912_fptr, 0));

void* lam42914_fptr() // lam42914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42915 = arg_buffer[1];
//reading env and args
void* a4249042750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42915))[7];
//not do dummy comment
void* lst = (decode_clo(env42915))[6];
//not do dummy comment
void* kont42595 = (decode_clo(env42915))[5];
//not do dummy comment
void* op = (decode_clo(env42915))[4];
//not do dummy comment
void* cons = (decode_clo(env42915))[3];
//not do dummy comment
void* filter = (decode_clo(env42915))[2];
//not do dummy comment
void* car = (decode_clo(env42915))[1];

//if-clause
bool if_guard44189 = is_true(a4249042750);
if(if_guard44189)
{

//creating new closure instance
void** clo44191 = alloc_clo(lam42910_fptr, 6);

//setting env list
clo44191[1] = cons;
clo44191[2] = filter;
clo44191[3] = op;
clo44191[4] = kont42595;
clo44191[5] = lst;
clo44191[6] = cdr;
void* f4259942751 = encode_clo(clo44191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4259942751;
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
void** clo44193 = alloc_clo(lam42912_fptr, 3);

//setting env list
clo44193[1] = filter;
clo44193[2] = op;
clo44193[3] = kont42595;
void* f4260042757 = encode_clo(clo44193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4260042757;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42914 = encode_clo(alloc_clo(lam42914_fptr, 0));

void* lam42916_fptr() // lam42916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42917 = arg_buffer[1];
//reading env and args
void* a4248942748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42917))[7];
//not do dummy comment
void* lst = (decode_clo(env42917))[6];
//not do dummy comment
void* kont42595 = (decode_clo(env42917))[5];
//not do dummy comment
void* op = (decode_clo(env42917))[4];
//not do dummy comment
void* cons = (decode_clo(env42917))[3];
//not do dummy comment
void* filter = (decode_clo(env42917))[2];
//not do dummy comment
void* car = (decode_clo(env42917))[1];

//creating new closure instance
void** clo44195 = alloc_clo(lam42914_fptr, 7);

//setting env list
clo44195[1] = car;
clo44195[2] = filter;
clo44195[3] = cons;
clo44195[4] = op;
clo44195[5] = kont42595;
clo44195[6] = lst;
clo44195[7] = cdr;
void* f4260142749 = encode_clo(clo44195);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4260142749;
arg_buffer[3] = a4248942748;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42916 = encode_clo(alloc_clo(lam42916_fptr, 0));

void* lam42918_fptr() // lam42918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42919 = arg_buffer[1];
//reading env and args
void* a4248742744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42919))[8];
//not do dummy comment
void* kont42595 = (decode_clo(env42919))[7];
//not do dummy comment
void* op = (decode_clo(env42919))[6];
//not do dummy comment
void* cons = (decode_clo(env42919))[5];
//not do dummy comment
void* list = (decode_clo(env42919))[4];
//not do dummy comment
void* cdr = (decode_clo(env42919))[3];
//not do dummy comment
void* filter = (decode_clo(env42919))[2];
//not do dummy comment
void* car = (decode_clo(env42919))[1];

//if-clause
bool if_guard44196 = is_true(a4248742744);
if(if_guard44196)
{

//creating new closure instance
void** clo44198 = alloc_clo(lam42904_fptr, 1);

//setting env list
clo44198[1] = kont42595;
void* f4259642745 = encode_clo(clo44198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4259642745;
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
void** clo44200 = alloc_clo(lam42916_fptr, 7);

//setting env list
clo44200[1] = car;
clo44200[2] = filter;
clo44200[3] = cons;
clo44200[4] = op;
clo44200[5] = kont42595;
clo44200[6] = lst;
clo44200[7] = cdr;
void* f4260242747 = encode_clo(clo44200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4260242747;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42918 = encode_clo(alloc_clo(lam42918_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42920 = arg_buffer[1];
//reading env and args
void* kont42595 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44202 = alloc_clo(lam42918_fptr, 8);

//setting env list
clo44202[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo44202[2] = filter;
clo44202[3] = cdr;
clo44202[4] = list;
clo44202[5] = cons;
clo44202[6] = op;
clo44202[7] = kont42595;
clo44202[8] = lst;
void* f4260342743 = encode_clo(clo44202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4260342743;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam42921_fptr() // lam42921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42922 = arg_buffer[1];
//reading env and args
void* a4249942766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env42922))[3];
//not do dummy comment
void* a4249742763 = (decode_clo(env42922))[2];
//not do dummy comment
void* kont42604 = (decode_clo(env42922))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont42604;
arg_buffer[3] = a4249742763;
arg_buffer[4] = a4249942766;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42921 = encode_clo(alloc_clo(lam42921_fptr, 0));

void* lam42924_fptr() // lam42924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42925 = arg_buffer[1];
//reading env and args
void* a4249742763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env42925))[4];
//not do dummy comment
void* n = (decode_clo(env42925))[3];
//not do dummy comment
void* kont42604 = (decode_clo(env42925))[2];
//not do dummy comment
void* _u45 = (decode_clo(env42925))[1];
mpz_t* mpzvar44203 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44203, "1", 10);
void* a4249842764 = encode_mpz(mpzvar44203);

//creating new closure instance
void** clo44205 = alloc_clo(lam42921_fptr, 3);

//setting env list
clo44205[1] = kont42604;
clo44205[2] = a4249742763;
clo44205[3] = drop;
void* f4260542765 = encode_clo(clo44205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4260542765;
arg_buffer[3] = n;
arg_buffer[4] = a4249842764;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42924 = encode_clo(alloc_clo(lam42924_fptr, 0));

void* lam42926_fptr() // lam42926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42927 = arg_buffer[1];
//reading env and args
void* a4249642761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42927))[6];
//not do dummy comment
void* n = (decode_clo(env42927))[5];
//not do dummy comment
void* kont42604 = (decode_clo(env42927))[4];
//not do dummy comment
void* _u45 = (decode_clo(env42927))[3];
//not do dummy comment
void* lst = (decode_clo(env42927))[2];
//not do dummy comment
void* drop = (decode_clo(env42927))[1];

//if-clause
bool if_guard44206 = is_true(a4249642761);
if(if_guard44206)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42604);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42604))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44208 = alloc_clo(lam42924_fptr, 4);

//setting env list
clo44208[1] = _u45;
clo44208[2] = kont42604;
clo44208[3] = n;
clo44208[4] = drop;
void* f4260642762 = encode_clo(clo44208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4260642762;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42926 = encode_clo(alloc_clo(lam42926_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42929 = arg_buffer[1];
//reading env and args
void* kont42604 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar44209 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44209, "0", 10);
void* a4249542759 = encode_mpz(mpzvar44209);

//creating new closure instance
void** clo44211 = alloc_clo(lam42926_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo44211[1] = drop;
clo44211[2] = lst;
clo44211[3] = _u45;
clo44211[4] = kont42604;
clo44211[5] = n;
clo44211[6] = cdr;
void* f4260742760 = encode_clo(clo44211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4260742760;
arg_buffer[3] = n;
arg_buffer[4] = a4249542759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam42930_fptr() // lam42930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42931 = arg_buffer[1];
//reading env and args
void* a4250342774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42608 = (decode_clo(env42931))[3];
//not do dummy comment
void* a4250142770 = (decode_clo(env42931))[2];
//not do dummy comment
void* proc = (decode_clo(env42931))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont42608;
arg_buffer[3] = a4250142770;
arg_buffer[4] = a4250342774;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42930 = encode_clo(alloc_clo(lam42930_fptr, 0));

void* lam42932_fptr() // lam42932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42933 = arg_buffer[1];
//reading env and args
void* a4250242772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42608 = (decode_clo(env42933))[5];
//not do dummy comment
void* foldr = (decode_clo(env42933))[4];
//not do dummy comment
void* a4250142770 = (decode_clo(env42933))[3];
//not do dummy comment
void* proc = (decode_clo(env42933))[2];
//not do dummy comment
void* acc = (decode_clo(env42933))[1];

//creating new closure instance
void** clo44213 = alloc_clo(lam42930_fptr, 3);

//setting env list
clo44213[1] = proc;
clo44213[2] = a4250142770;
clo44213[3] = kont42608;
void* f4260942773 = encode_clo(clo44213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4260942773;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4250242772;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42932 = encode_clo(alloc_clo(lam42932_fptr, 0));

void* lam42934_fptr() // lam42934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42935 = arg_buffer[1];
//reading env and args
void* a4250142770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42935))[6];
//not do dummy comment
void* kont42608 = (decode_clo(env42935))[5];
//not do dummy comment
void* foldr = (decode_clo(env42935))[4];
//not do dummy comment
void* lst = (decode_clo(env42935))[3];
//not do dummy comment
void* proc = (decode_clo(env42935))[2];
//not do dummy comment
void* acc = (decode_clo(env42935))[1];

//creating new closure instance
void** clo44215 = alloc_clo(lam42932_fptr, 5);

//setting env list
clo44215[1] = acc;
clo44215[2] = proc;
clo44215[3] = a4250142770;
clo44215[4] = foldr;
clo44215[5] = kont42608;
void* f4261042771 = encode_clo(clo44215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4261042771;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42934 = encode_clo(alloc_clo(lam42934_fptr, 0));

void* lam42936_fptr() // lam42936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42937 = arg_buffer[1];
//reading env and args
void* a4250042768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42937))[7];
//not do dummy comment
void* kont42608 = (decode_clo(env42937))[6];
//not do dummy comment
void* car = (decode_clo(env42937))[5];
//not do dummy comment
void* foldr = (decode_clo(env42937))[4];
//not do dummy comment
void* lst = (decode_clo(env42937))[3];
//not do dummy comment
void* proc = (decode_clo(env42937))[2];
//not do dummy comment
void* acc = (decode_clo(env42937))[1];

//if-clause
bool if_guard44216 = is_true(a4250042768);
if(if_guard44216)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42608);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42608))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44218 = alloc_clo(lam42934_fptr, 6);

//setting env list
clo44218[1] = acc;
clo44218[2] = proc;
clo44218[3] = lst;
clo44218[4] = foldr;
clo44218[5] = kont42608;
clo44218[6] = cdr;
void* f4261142769 = encode_clo(clo44218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4261142769;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42936 = encode_clo(alloc_clo(lam42936_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42938 = arg_buffer[1];
//reading env and args
void* kont42608 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo44220 = alloc_clo(lam42936_fptr, 7);

//setting env list
clo44220[1] = acc;
clo44220[2] = proc;
clo44220[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo44220[4] = foldr;
clo44220[5] = car;
clo44220[6] = kont42608;
clo44220[7] = cdr;
void* f4261242767 = encode_clo(clo44220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4261242767;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam42939_fptr() // lam42939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42940 = arg_buffer[1];
//reading env and args
void* a4250742782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42613 = (decode_clo(env42940))[3];
//not do dummy comment
void* a4250542778 = (decode_clo(env42940))[2];
//not do dummy comment
void* cons = (decode_clo(env42940))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42613;
arg_buffer[3] = a4250542778;
arg_buffer[4] = a4250742782;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42939 = encode_clo(alloc_clo(lam42939_fptr, 0));

void* lam42941_fptr() // lam42941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42942 = arg_buffer[1];
//reading env and args
void* a4250642780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42613 = (decode_clo(env42942))[5];
//not do dummy comment
void* append = (decode_clo(env42942))[4];
//not do dummy comment
void* cons = (decode_clo(env42942))[3];
//not do dummy comment
void* a4250542778 = (decode_clo(env42942))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42942))[1];

//creating new closure instance
void** clo44222 = alloc_clo(lam42939_fptr, 3);

//setting env list
clo44222[1] = cons;
clo44222[2] = a4250542778;
clo44222[3] = kont42613;
void* f4261442781 = encode_clo(clo44222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4261442781;
arg_buffer[3] = a4250642780;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42941 = encode_clo(alloc_clo(lam42941_fptr, 0));

void* lam42943_fptr() // lam42943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42944 = arg_buffer[1];
//reading env and args
void* a4250542778 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42944))[6];
//not do dummy comment
void* kont42613 = (decode_clo(env42944))[5];
//not do dummy comment
void* append = (decode_clo(env42944))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42944))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42944))[2];
//not do dummy comment
void* cons = (decode_clo(env42944))[1];

//creating new closure instance
void** clo44224 = alloc_clo(lam42941_fptr, 5);

//setting env list
clo44224[1] = lst2;
clo44224[2] = a4250542778;
clo44224[3] = cons;
clo44224[4] = append;
clo44224[5] = kont42613;
void* f4261542779 = encode_clo(clo44224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4261542779;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42943 = encode_clo(alloc_clo(lam42943_fptr, 0));

void* lam42945_fptr() // lam42945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42946 = arg_buffer[1];
//reading env and args
void* a4250442776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42946))[7];
//not do dummy comment
void* kont42613 = (decode_clo(env42946))[6];
//not do dummy comment
void* append = (decode_clo(env42946))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42946))[4];
//not do dummy comment
void* cons = (decode_clo(env42946))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42946))[2];
//not do dummy comment
void* car = (decode_clo(env42946))[1];

//if-clause
bool if_guard44225 = is_true(a4250442776);
if(if_guard44225)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42613);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42613))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44227 = alloc_clo(lam42943_fptr, 6);

//setting env list
clo44227[1] = cons;
clo44227[2] = lst1;
clo44227[3] = lst2;
clo44227[4] = append;
clo44227[5] = kont42613;
clo44227[6] = cdr;
void* f4261642777 = encode_clo(clo44227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4261642777;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42945 = encode_clo(alloc_clo(lam42945_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42947 = arg_buffer[1];
//reading env and args
void* kont42613 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44229 = alloc_clo(lam42945_fptr, 7);

//setting env list
clo44229[1] = car;
clo44229[2] = lst1;
clo44229[3] = cons;
clo44229[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo44229[5] = append;
clo44229[6] = kont42613;
clo44229[7] = cdr;
void* f4261742775 = encode_clo(clo44229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4261742775;
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
void* _42948 = arg_buffer[1];
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

void* kont4261842783 = prim_car(lst);
void* lst42784 = prim_cdr(lst);
void* x4250842785 = apply_prim_hash(lst42784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4261842783);
arg_buffer[2] = x4250842785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4261842783))[0]);
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
void* _42949 = arg_buffer[1];
//reading env and args
void* kont42620 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4250942786 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42620);
arg_buffer[2] = x4250942786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42620))[0]);
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
void* _42950 = arg_buffer[1];
//reading env and args
void* kont42621 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4251042787 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42621);
arg_buffer[2] = x4251042787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42621))[0]);
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
void* _42951 = arg_buffer[1];
//reading env and args
void* kont42622 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4251142788 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42622);
arg_buffer[2] = x4251142788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42622))[0]);
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
void* _42952 = arg_buffer[1];
//reading env and args
void* kont42623 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4251242789 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42623);
arg_buffer[2] = x4251242789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42623))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam42954_fptr() // lam42954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42955 = arg_buffer[1];
//reading env and args
void* a4252042799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env42955))[2];
//not do dummy comment
void* kont42624 = (decode_clo(env42955))[1];
void* a4252142800 = encode_str(new(GC) std::string("work"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont42624;
arg_buffer[3] = a4252042799;
arg_buffer[4] = a4252142800;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42954 = encode_clo(alloc_clo(lam42954_fptr, 0));

void* lam42958_fptr() // lam42958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42959 = arg_buffer[1];
//reading env and args
void* a4251742795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env42959))[3];
//not do dummy comment
void* kont42624 = (decode_clo(env42959))[2];
//not do dummy comment
void* hash_u45set = (decode_clo(env42959))[1];
void* a4251842796 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar44230 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44230, "90", 10);
void* a4251942797 = encode_mpz(mpzvar44230);

//creating new closure instance
void** clo44232 = alloc_clo(lam42954_fptr, 2);

//setting env list
clo44232[1] = kont42624;
clo44232[2] = hash_u45ref;
void* f4262542798 = encode_clo(clo44232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45set);
arg_buffer[2] = f4262542798;
arg_buffer[3] = a4251742795;
arg_buffer[4] = a4251842796;
arg_buffer[5] = a4251942797;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42958 = encode_clo(alloc_clo(lam42958_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42964 = arg_buffer[1];
//reading env and args
void* kont42624 = arg_buffer[2];
//Dummy comment
void* a4251342790 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar44233 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44233, "80", 10);
void* a4251442791 = encode_mpz(mpzvar44233);
mpz_t* mpzvar44234 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44234, "10", 10);
void* a4251542792 = encode_mpz(mpzvar44234);
void* a4251642793 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo44236 = alloc_clo(lam42958_fptr, 3);

//setting env list
clo44236[1] = hash_u45set;
clo44236[2] = kont42624;
clo44236[3] = hash_u45ref;
void* f4262642794 = encode_clo(clo44236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4262642794;
arg_buffer[3] = a4251342790;
arg_buffer[4] = a4251442791;
arg_buffer[5] = a4251542792;
arg_buffer[6] = a4251642793;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam42965_fptr() // lam42965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42966 = arg_buffer[1];
//reading env and args
void* x4252242802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42627 = (decode_clo(env42966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42627);
arg_buffer[2] = x4252242802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42627))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42965 = encode_clo(alloc_clo(lam42965_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42967 = arg_buffer[1];
//reading env and args
void* kont42627 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo44238 = alloc_clo(lam42965_fptr, 1);

//setting env list
clo44238[1] = kont42627;
void* f4262842801 = encode_clo(clo44238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4262842801;
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

