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
void* _58850 = arg_buffer[1];
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

void* kont5857758681 = prim_car(lst);
void* lst58682 = prim_cdr(lst);
void* x5848558683 = apply_prim__u43(lst58682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5857758681);
arg_buffer[2] = x5848558683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5857758681))[0]);
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
void* _58851 = arg_buffer[1];
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

void* kont5857958684 = prim_car(lst);
void* lst58685 = prim_cdr(lst);
void* x5848658686 = apply_prim__u45(lst58685);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5857958684);
arg_buffer[2] = x5848658686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5857958684))[0]);
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
void* _58852 = arg_buffer[1];
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

void* kont5858158687 = prim_car(lst);
void* lst58688 = prim_cdr(lst);
void* x5848758689 = apply_prim__u42(lst58688);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858158687);
arg_buffer[2] = x5848758689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5858158687))[0]);
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
void* _58853 = arg_buffer[1];
//reading env and args
void* kont58583 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5848858690 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58583);
arg_buffer[2] = x5848858690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58583))[0]);
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
void* _58854 = arg_buffer[1];
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

void* kont5858458691 = prim_car(lst);
void* lst58692 = prim_cdr(lst);
void* x5848958693 = apply_prim__u47(lst58692);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858458691);
arg_buffer[2] = x5848958693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5858458691))[0]);
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
void* _58855 = arg_buffer[1];
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

void* kont5858658694 = prim_car(lst);
void* lst58695 = prim_cdr(lst);
void* x5849058696 = apply_prim__u61(lst58695);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858658694);
arg_buffer[2] = x5849058696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5858658694))[0]);
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
void* _58856 = arg_buffer[1];
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

void* kont5858858697 = prim_car(lst);
void* lst58698 = prim_cdr(lst);
void* x5849158699 = apply_prim__u62(lst58698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858858697);
arg_buffer[2] = x5849158699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5858858697))[0]);
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
void* _58857 = arg_buffer[1];
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

void* kont5859058700 = prim_car(lst);
void* lst58701 = prim_cdr(lst);
void* x5849258702 = apply_prim__u60(lst58701);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5859058700);
arg_buffer[2] = x5849258702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5859058700))[0]);
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
void* _58858 = arg_buffer[1];
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

void* kont5859258703 = prim_car(lst);
void* lst58704 = prim_cdr(lst);
void* x5849358705 = apply_prim__u60_u61(lst58704);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5859258703);
arg_buffer[2] = x5849358705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5859258703))[0]);
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
void* _58859 = arg_buffer[1];
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

void* kont5859458706 = prim_car(lst);
void* lst58707 = prim_cdr(lst);
void* x5849458708 = apply_prim__u62_u61(lst58707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5859458706);
arg_buffer[2] = x5849458708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5859458706))[0]);
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
void* _58860 = arg_buffer[1];
//reading env and args
void* kont58596 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5849558709 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58596);
arg_buffer[2] = x5849558709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58596))[0]);
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
void* _58861 = arg_buffer[1];
//reading env and args
void* kont58597 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5849658710 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58597);
arg_buffer[2] = x5849658710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58597))[0]);
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
void* _58862 = arg_buffer[1];
//reading env and args
void* kont58598 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5849758711 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58598);
arg_buffer[2] = x5849758711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58598))[0]);
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
void* _58863 = arg_buffer[1];
//reading env and args
void* kont58599 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5849858712 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58599);
arg_buffer[2] = x5849858712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58599))[0]);
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
void* _58864 = arg_buffer[1];
//reading env and args
void* kont58600 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5849958713 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58600);
arg_buffer[2] = x5849958713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58600))[0]);
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
void* _58865 = arg_buffer[1];
//reading env and args
void* kont58601 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5850058714 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58601);
arg_buffer[2] = x5850058714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58601))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam58866_fptr() // lam58866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58867 = arg_buffer[1];
//reading env and args
void* a5850358718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58602 = (decode_clo(env58867))[3];
//not do dummy comment
void* a5850158715 = (decode_clo(env58867))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env58867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58602;
arg_buffer[3] = a5850158715;
arg_buffer[4] = a5850358718;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58866 = encode_clo(alloc_clo(lam58866_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58870 = arg_buffer[1];
//reading env and args
void* kont58602 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar59550 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59550, "0", 10);
void* a5850158715 = encode_mpz(mpzvar59550);
mpz_t* mpzvar59551 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59551, "2", 10);
void* a5850258716 = encode_mpz(mpzvar59551);

//creating new closure instance
void** clo59553 = alloc_clo(lam58866_fptr, 3);

//setting env list
clo59553[1] = equal_u63;
clo59553[2] = a5850158715;
clo59553[3] = kont58602;
void* f5860358717 = encode_clo(clo59553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5860358717;
arg_buffer[3] = x;
arg_buffer[4] = a5850258716;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam58871_fptr() // lam58871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58872 = arg_buffer[1];
//reading env and args
void* a5850658722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58604 = (decode_clo(env58872))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env58872))[2];
//not do dummy comment
void* a5850458719 = (decode_clo(env58872))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58604;
arg_buffer[3] = a5850458719;
arg_buffer[4] = a5850658722;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58871 = encode_clo(alloc_clo(lam58871_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58875 = arg_buffer[1];
//reading env and args
void* kont58604 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar59554 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59554, "1", 10);
void* a5850458719 = encode_mpz(mpzvar59554);
mpz_t* mpzvar59555 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59555, "2", 10);
void* a5850558720 = encode_mpz(mpzvar59555);

//creating new closure instance
void** clo59557 = alloc_clo(lam58871_fptr, 3);

//setting env list
clo59557[1] = a5850458719;
clo59557[2] = equal_u63;
clo59557[3] = kont58604;
void* f5860558721 = encode_clo(clo59557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5860558721;
arg_buffer[3] = x;
arg_buffer[4] = a5850558720;
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
void* _58876 = arg_buffer[1];
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

void* kont5860658723 = prim_car(x);
void* x58724 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5860658723);
arg_buffer[2] = x58724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5860658723))[0]);
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
void* _58877 = arg_buffer[1];
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

void* kont5860858725 = prim_car(lst);
void* lst58726 = prim_cdr(lst);
void* x5850758727 = apply_prim_and(lst58726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5860858725);
arg_buffer[2] = x5850758727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5860858725))[0]);
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
void* _58878 = arg_buffer[1];
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

void* kont5861058728 = prim_car(lst);
void* lst58729 = prim_cdr(lst);
void* x5850858730 = apply_prim_or(lst58729);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5861058728);
arg_buffer[2] = x5850858730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5861058728))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam58881_fptr() // lam58881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58882 = arg_buffer[1];
//reading env and args
void* a5851458740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env58882))[3];
//not do dummy comment
void* kont58612 = (decode_clo(env58882))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58882))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont58612;
arg_buffer[3] = x;
arg_buffer[4] = a5851458740;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58881 = encode_clo(alloc_clo(lam58881_fptr, 0));

void* lam58883_fptr() // lam58883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58884 = arg_buffer[1];
//reading env and args
void* a5851258737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58884))[5];
//not do dummy comment
void* lst = (decode_clo(env58884))[4];
//not do dummy comment
void* x = (decode_clo(env58884))[3];
//not do dummy comment
void* kont58612 = (decode_clo(env58884))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58884))[1];

//if-clause
bool if_guard59558 = is_true(a5851258737);
if(if_guard59558)
{
void* x5851358738 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58612);
arg_buffer[2] = x5851358738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58612))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59560 = alloc_clo(lam58881_fptr, 3);

//setting env list
clo59560[1] = member_u63;
clo59560[2] = kont58612;
clo59560[3] = x;
void* f5861358739 = encode_clo(clo59560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5861358739;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58883 = encode_clo(alloc_clo(lam58883_fptr, 0));

void* lam58885_fptr() // lam58885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58886 = arg_buffer[1];
//reading env and args
void* a5851158735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58886))[6];
//not do dummy comment
void* lst = (decode_clo(env58886))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env58886))[4];
//not do dummy comment
void* x = (decode_clo(env58886))[3];
//not do dummy comment
void* kont58612 = (decode_clo(env58886))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58886))[1];

//creating new closure instance
void** clo59562 = alloc_clo(lam58883_fptr, 5);

//setting env list
clo59562[1] = member_u63;
clo59562[2] = kont58612;
clo59562[3] = x;
clo59562[4] = lst;
clo59562[5] = cdr;
void* f5861458736 = encode_clo(clo59562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5861458736;
arg_buffer[3] = a5851158735;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58885 = encode_clo(alloc_clo(lam58885_fptr, 0));

void* lam58887_fptr() // lam58887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58888 = arg_buffer[1];
//reading env and args
void* a5850958732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58888))[7];
//not do dummy comment
void* lst = (decode_clo(env58888))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env58888))[5];
//not do dummy comment
void* x = (decode_clo(env58888))[4];
//not do dummy comment
void* car = (decode_clo(env58888))[3];
//not do dummy comment
void* kont58612 = (decode_clo(env58888))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58888))[1];

//if-clause
bool if_guard59563 = is_true(a5850958732);
if(if_guard59563)
{
void* x5851058733 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58612);
arg_buffer[2] = x5851058733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58612))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59565 = alloc_clo(lam58885_fptr, 6);

//setting env list
clo59565[1] = member_u63;
clo59565[2] = kont58612;
clo59565[3] = x;
clo59565[4] = equal_u63;
clo59565[5] = lst;
clo59565[6] = cdr;
void* f5861558734 = encode_clo(clo59565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5861558734;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58887 = encode_clo(alloc_clo(lam58887_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58889 = arg_buffer[1];
//reading env and args
void* kont58612 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59567 = alloc_clo(lam58887_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo59567[1] = member_u63;
clo59567[2] = kont58612;
clo59567[3] = car;
clo59567[4] = x;
clo59567[5] = equal_u63;
clo59567[6] = lst;
clo59567[7] = cdr;
void* f5861658731 = encode_clo(clo59567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5861658731;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam58890_fptr() // lam58890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58891 = arg_buffer[1];
//reading env and args
void* a5851858748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58617 = (decode_clo(env58891))[4];
//not do dummy comment
void* a5851758746 = (decode_clo(env58891))[3];
//not do dummy comment
void* fun = (decode_clo(env58891))[2];
//not do dummy comment
void* foldl = (decode_clo(env58891))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont58617;
arg_buffer[3] = fun;
arg_buffer[4] = a5851758746;
arg_buffer[5] = a5851858748;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58890 = encode_clo(alloc_clo(lam58890_fptr, 0));

void* lam58892_fptr() // lam58892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58893 = arg_buffer[1];
//reading env and args
void* a5851758746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58893))[5];
//not do dummy comment
void* kont58617 = (decode_clo(env58893))[4];
//not do dummy comment
void* lst = (decode_clo(env58893))[3];
//not do dummy comment
void* fun = (decode_clo(env58893))[2];
//not do dummy comment
void* foldl = (decode_clo(env58893))[1];

//creating new closure instance
void** clo59569 = alloc_clo(lam58890_fptr, 4);

//setting env list
clo59569[1] = foldl;
clo59569[2] = fun;
clo59569[3] = a5851758746;
clo59569[4] = kont58617;
void* f5861858747 = encode_clo(clo59569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5861858747;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58892 = encode_clo(alloc_clo(lam58892_fptr, 0));

void* lam58894_fptr() // lam58894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58895 = arg_buffer[1];
//reading env and args
void* a5851658744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58895))[6];
//not do dummy comment
void* kont58617 = (decode_clo(env58895))[5];
//not do dummy comment
void* lst = (decode_clo(env58895))[4];
//not do dummy comment
void* fun = (decode_clo(env58895))[3];
//not do dummy comment
void* acc = (decode_clo(env58895))[2];
//not do dummy comment
void* foldl = (decode_clo(env58895))[1];

//creating new closure instance
void** clo59571 = alloc_clo(lam58892_fptr, 5);

//setting env list
clo59571[1] = foldl;
clo59571[2] = fun;
clo59571[3] = lst;
clo59571[4] = kont58617;
clo59571[5] = cdr;
void* f5861958745 = encode_clo(clo59571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5861958745;
arg_buffer[3] = a5851658744;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58894 = encode_clo(alloc_clo(lam58894_fptr, 0));

void* lam58896_fptr() // lam58896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58897 = arg_buffer[1];
//reading env and args
void* a5851558742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58897))[7];
//not do dummy comment
void* kont58617 = (decode_clo(env58897))[6];
//not do dummy comment
void* lst = (decode_clo(env58897))[5];
//not do dummy comment
void* fun = (decode_clo(env58897))[4];
//not do dummy comment
void* acc = (decode_clo(env58897))[3];
//not do dummy comment
void* car = (decode_clo(env58897))[2];
//not do dummy comment
void* foldl = (decode_clo(env58897))[1];

//if-clause
bool if_guard59572 = is_true(a5851558742);
if(if_guard59572)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58617);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58617))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59574 = alloc_clo(lam58894_fptr, 6);

//setting env list
clo59574[1] = foldl;
clo59574[2] = acc;
clo59574[3] = fun;
clo59574[4] = lst;
clo59574[5] = kont58617;
clo59574[6] = cdr;
void* f5862058743 = encode_clo(clo59574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5862058743;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58896 = encode_clo(alloc_clo(lam58896_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58898 = arg_buffer[1];
//reading env and args
void* kont58617 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo59576 = alloc_clo(lam58896_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo59576[1] = foldl;
clo59576[2] = car;
clo59576[3] = acc;
clo59576[4] = fun;
clo59576[5] = lst;
clo59576[6] = kont58617;
clo59576[7] = cdr;
void* f5862158741 = encode_clo(clo59576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5862158741;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam58899_fptr() // lam58899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58900 = arg_buffer[1];
//reading env and args
void* a5852258756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58900))[3];
//not do dummy comment
void* kont58622 = (decode_clo(env58900))[2];
//not do dummy comment
void* a5852058752 = (decode_clo(env58900))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58622;
arg_buffer[3] = a5852058752;
arg_buffer[4] = a5852258756;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58899 = encode_clo(alloc_clo(lam58899_fptr, 0));

void* lam58901_fptr() // lam58901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58902 = arg_buffer[1];
//reading env and args
void* a5852158754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58902))[5];
//not do dummy comment
void* kont58622 = (decode_clo(env58902))[4];
//not do dummy comment
void* a5852058752 = (decode_clo(env58902))[3];
//not do dummy comment
void* lst2 = (decode_clo(env58902))[2];
//not do dummy comment
void* cons = (decode_clo(env58902))[1];

//creating new closure instance
void** clo59578 = alloc_clo(lam58899_fptr, 3);

//setting env list
clo59578[1] = a5852058752;
clo59578[2] = kont58622;
clo59578[3] = reverse_u45helper;
void* f5862358755 = encode_clo(clo59578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5862358755;
arg_buffer[3] = a5852158754;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58901 = encode_clo(alloc_clo(lam58901_fptr, 0));

void* lam58903_fptr() // lam58903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58904 = arg_buffer[1];
//reading env and args
void* a5852058752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58904))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58904))[5];
//not do dummy comment
void* kont58622 = (decode_clo(env58904))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58904))[3];
//not do dummy comment
void* car = (decode_clo(env58904))[2];
//not do dummy comment
void* cons = (decode_clo(env58904))[1];

//creating new closure instance
void** clo59580 = alloc_clo(lam58901_fptr, 5);

//setting env list
clo59580[1] = cons;
clo59580[2] = lst2;
clo59580[3] = a5852058752;
clo59580[4] = kont58622;
clo59580[5] = reverse_u45helper;
void* f5862458753 = encode_clo(clo59580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5862458753;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58903 = encode_clo(alloc_clo(lam58903_fptr, 0));

void* lam58905_fptr() // lam58905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58906 = arg_buffer[1];
//reading env and args
void* a5851958750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58906))[7];
//not do dummy comment
void* lst = (decode_clo(env58906))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58906))[5];
//not do dummy comment
void* kont58622 = (decode_clo(env58906))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58906))[3];
//not do dummy comment
void* car = (decode_clo(env58906))[2];
//not do dummy comment
void* cons = (decode_clo(env58906))[1];

//if-clause
bool if_guard59581 = is_true(a5851958750);
if(if_guard59581)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58622);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58622))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59583 = alloc_clo(lam58903_fptr, 6);

//setting env list
clo59583[1] = cons;
clo59583[2] = car;
clo59583[3] = lst2;
clo59583[4] = kont58622;
clo59583[5] = reverse_u45helper;
clo59583[6] = lst;
void* f5862558751 = encode_clo(clo59583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5862558751;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58905 = encode_clo(alloc_clo(lam58905_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58907 = arg_buffer[1];
//reading env and args
void* kont58622 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59585 = alloc_clo(lam58905_fptr, 7);

//setting env list
clo59585[1] = cons;
clo59585[2] = car;
clo59585[3] = lst2;
clo59585[4] = kont58622;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo59585[5] = reverse_u45helper;
clo59585[6] = lst;
clo59585[7] = cdr;
void* f5862658749 = encode_clo(clo59585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5862658749;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam58908_fptr() // lam58908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58909 = arg_buffer[1];
//reading env and args
void* a5852358758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58909))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58909))[2];
//not do dummy comment
void* kont58627 = (decode_clo(env58909))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58627;
arg_buffer[3] = lst;
arg_buffer[4] = a5852358758;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58908 = encode_clo(alloc_clo(lam58908_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58910 = arg_buffer[1];
//reading env and args
void* kont58627 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo59587 = alloc_clo(lam58908_fptr, 3);

//setting env list
clo59587[1] = kont58627;
clo59587[2] = reverse_u45helper;
clo59587[3] = lst;
void* f5862858757 = encode_clo(clo59587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5862858757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam58911_fptr() // lam58911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58912 = arg_buffer[1];
//reading env and args
void* x5852658763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58629 = (decode_clo(env58912))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58629);
arg_buffer[2] = x5852658763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58629))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58911 = encode_clo(alloc_clo(lam58911_fptr, 0));

void* lam58913_fptr() // lam58913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58914 = arg_buffer[1];
//reading env and args
void* a5853158772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5852758765 = (decode_clo(env58914))[4];
//not do dummy comment
void* a5852958768 = (decode_clo(env58914))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env58914))[2];
//not do dummy comment
void* kont58629 = (decode_clo(env58914))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58629;
arg_buffer[3] = a5852758765;
arg_buffer[4] = a5852958768;
arg_buffer[5] = a5853158772;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58913 = encode_clo(alloc_clo(lam58913_fptr, 0));

void* lam58915_fptr() // lam58915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58916 = arg_buffer[1];
//reading env and args
void* a5853058770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5852758765 = (decode_clo(env58916))[6];
//not do dummy comment
void* a5852958768 = (decode_clo(env58916))[5];
//not do dummy comment
void* cons = (decode_clo(env58916))[4];
//not do dummy comment
void* kont58629 = (decode_clo(env58916))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env58916))[2];
//not do dummy comment
void* lst2 = (decode_clo(env58916))[1];

//creating new closure instance
void** clo59589 = alloc_clo(lam58913_fptr, 4);

//setting env list
clo59589[1] = kont58629;
clo59589[2] = take_u45helper;
clo59589[3] = a5852958768;
clo59589[4] = a5852758765;
void* f5863158771 = encode_clo(clo59589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5863158771;
arg_buffer[3] = a5853058770;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58915 = encode_clo(alloc_clo(lam58915_fptr, 0));

void* lam58917_fptr() // lam58917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58918 = arg_buffer[1];
//reading env and args
void* a5852958768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58918))[7];
//not do dummy comment
void* a5852758765 = (decode_clo(env58918))[6];
//not do dummy comment
void* car = (decode_clo(env58918))[5];
//not do dummy comment
void* cons = (decode_clo(env58918))[4];
//not do dummy comment
void* kont58629 = (decode_clo(env58918))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env58918))[2];
//not do dummy comment
void* lst2 = (decode_clo(env58918))[1];

//creating new closure instance
void** clo59591 = alloc_clo(lam58915_fptr, 6);

//setting env list
clo59591[1] = lst2;
clo59591[2] = take_u45helper;
clo59591[3] = kont58629;
clo59591[4] = cons;
clo59591[5] = a5852958768;
clo59591[6] = a5852758765;
void* f5863258769 = encode_clo(clo59591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5863258769;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58917 = encode_clo(alloc_clo(lam58917_fptr, 0));

void* lam58920_fptr() // lam58920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58921 = arg_buffer[1];
//reading env and args
void* a5852758765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58921))[8];
//not do dummy comment
void* cons = (decode_clo(env58921))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env58921))[6];
//not do dummy comment
void* lst2 = (decode_clo(env58921))[5];
//not do dummy comment
void* n = (decode_clo(env58921))[4];
//not do dummy comment
void* car = (decode_clo(env58921))[3];
//not do dummy comment
void* kont58629 = (decode_clo(env58921))[2];
//not do dummy comment
void* _u45 = (decode_clo(env58921))[1];
mpz_t* mpzvar59592 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59592, "1", 10);
void* a5852858766 = encode_mpz(mpzvar59592);

//creating new closure instance
void** clo59594 = alloc_clo(lam58917_fptr, 7);

//setting env list
clo59594[1] = lst2;
clo59594[2] = take_u45helper;
clo59594[3] = kont58629;
clo59594[4] = cons;
clo59594[5] = car;
clo59594[6] = a5852758765;
clo59594[7] = lst;
void* f5863358767 = encode_clo(clo59594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5863358767;
arg_buffer[3] = n;
arg_buffer[4] = a5852858766;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58920 = encode_clo(alloc_clo(lam58920_fptr, 0));

void* lam58922_fptr() // lam58922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58923 = arg_buffer[1];
//reading env and args
void* a5852558761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58923))[10];
//not do dummy comment
void* lst = (decode_clo(env58923))[9];
//not do dummy comment
void* reverse = (decode_clo(env58923))[8];
//not do dummy comment
void* cons = (decode_clo(env58923))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env58923))[6];
//not do dummy comment
void* lst2 = (decode_clo(env58923))[5];
//not do dummy comment
void* n = (decode_clo(env58923))[4];
//not do dummy comment
void* car = (decode_clo(env58923))[3];
//not do dummy comment
void* kont58629 = (decode_clo(env58923))[2];
//not do dummy comment
void* _u45 = (decode_clo(env58923))[1];

//if-clause
bool if_guard59595 = is_true(a5852558761);
if(if_guard59595)
{

//creating new closure instance
void** clo59597 = alloc_clo(lam58911_fptr, 1);

//setting env list
clo59597[1] = kont58629;
void* f5863058762 = encode_clo(clo59597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5863058762;
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
void** clo59599 = alloc_clo(lam58920_fptr, 8);

//setting env list
clo59599[1] = _u45;
clo59599[2] = kont58629;
clo59599[3] = car;
clo59599[4] = n;
clo59599[5] = lst2;
clo59599[6] = take_u45helper;
clo59599[7] = cons;
clo59599[8] = lst;
void* f5863458764 = encode_clo(clo59599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5863458764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58922 = encode_clo(alloc_clo(lam58922_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58925 = arg_buffer[1];
//reading env and args
void* kont58629 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar59600 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59600, "0", 10);
void* a5852458759 = encode_mpz(mpzvar59600);

//creating new closure instance
void** clo59602 = alloc_clo(lam58922_fptr, 10);

//setting env list
clo59602[1] = _u45;
clo59602[2] = kont58629;
clo59602[3] = car;
clo59602[4] = n;
clo59602[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo59602[6] = take_u45helper;
clo59602[7] = cons;
clo59602[8] = reverse;
clo59602[9] = lst;
clo59602[10] = cdr;
void* f5863558760 = encode_clo(clo59602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5863558760;
arg_buffer[3] = n;
arg_buffer[4] = a5852458759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam58926_fptr() // lam58926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58927 = arg_buffer[1];
//reading env and args
void* a5853258774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58927))[4];
//not do dummy comment
void* kont58636 = (decode_clo(env58927))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env58927))[2];
//not do dummy comment
void* n = (decode_clo(env58927))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58636;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5853258774;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58926 = encode_clo(alloc_clo(lam58926_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58928 = arg_buffer[1];
//reading env and args
void* kont58636 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59604 = alloc_clo(lam58926_fptr, 4);

//setting env list
clo59604[1] = n;
clo59604[2] = take_u45helper;
clo59604[3] = kont58636;
clo59604[4] = lst;
void* f5863758773 = encode_clo(clo59604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5863758773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam58930_fptr() // lam58930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58931 = arg_buffer[1];
//reading env and args
void* a5853758782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5853558778 = (decode_clo(env58931))[3];
//not do dummy comment
void* kont58638 = (decode_clo(env58931))[2];
//not do dummy comment
void* _u43 = (decode_clo(env58931))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont58638;
arg_buffer[3] = a5853558778;
arg_buffer[4] = a5853758782;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58930 = encode_clo(alloc_clo(lam58930_fptr, 0));

void* lam58932_fptr() // lam58932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58933 = arg_buffer[1];
//reading env and args
void* a5853658780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5853558778 = (decode_clo(env58933))[4];
//not do dummy comment
void* length = (decode_clo(env58933))[3];
//not do dummy comment
void* kont58638 = (decode_clo(env58933))[2];
//not do dummy comment
void* _u43 = (decode_clo(env58933))[1];

//creating new closure instance
void** clo59606 = alloc_clo(lam58930_fptr, 3);

//setting env list
clo59606[1] = _u43;
clo59606[2] = kont58638;
clo59606[3] = a5853558778;
void* f5863958781 = encode_clo(clo59606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5863958781;
arg_buffer[3] = a5853658780;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58932 = encode_clo(alloc_clo(lam58932_fptr, 0));

void* lam58935_fptr() // lam58935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58936 = arg_buffer[1];
//reading env and args
void* a5853358776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58936))[5];
//not do dummy comment
void* lst = (decode_clo(env58936))[4];
//not do dummy comment
void* length = (decode_clo(env58936))[3];
//not do dummy comment
void* kont58638 = (decode_clo(env58936))[2];
//not do dummy comment
void* _u43 = (decode_clo(env58936))[1];

//if-clause
bool if_guard59607 = is_true(a5853358776);
if(if_guard59607)
{
mpz_t* mpzvar59608 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59608, "0", 10);
void* x5853458777 = encode_mpz(mpzvar59608);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58638);
arg_buffer[2] = x5853458777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58638))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar59609 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59609, "1", 10);
void* a5853558778 = encode_mpz(mpzvar59609);

//creating new closure instance
void** clo59611 = alloc_clo(lam58932_fptr, 4);

//setting env list
clo59611[1] = _u43;
clo59611[2] = kont58638;
clo59611[3] = length;
clo59611[4] = a5853558778;
void* f5864058779 = encode_clo(clo59611);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5864058779;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58935 = encode_clo(alloc_clo(lam58935_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58937 = arg_buffer[1];
//reading env and args
void* kont58638 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo59613 = alloc_clo(lam58935_fptr, 5);

//setting env list
clo59613[1] = _u43;
clo59613[2] = kont58638;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo59613[3] = length;
clo59613[4] = lst;
clo59613[5] = cdr;
void* f5864158775 = encode_clo(clo59613);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5864158775;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam58938_fptr() // lam58938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58939 = arg_buffer[1];
//reading env and args
void* x5853958786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58642 = (decode_clo(env58939))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58642);
arg_buffer[2] = x5853958786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58642))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58938 = encode_clo(alloc_clo(lam58938_fptr, 0));

void* lam58940_fptr() // lam58940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58941 = arg_buffer[1];
//reading env and args
void* a5854358794 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5854158790 = (decode_clo(env58941))[3];
//not do dummy comment
void* kont58642 = (decode_clo(env58941))[2];
//not do dummy comment
void* cons = (decode_clo(env58941))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58642;
arg_buffer[3] = a5854158790;
arg_buffer[4] = a5854358794;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58940 = encode_clo(alloc_clo(lam58940_fptr, 0));

void* lam58942_fptr() // lam58942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58943 = arg_buffer[1];
//reading env and args
void* a5854258792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5854158790 = (decode_clo(env58943))[5];
//not do dummy comment
void* map = (decode_clo(env58943))[4];
//not do dummy comment
void* proc = (decode_clo(env58943))[3];
//not do dummy comment
void* kont58642 = (decode_clo(env58943))[2];
//not do dummy comment
void* cons = (decode_clo(env58943))[1];

//creating new closure instance
void** clo59615 = alloc_clo(lam58940_fptr, 3);

//setting env list
clo59615[1] = cons;
clo59615[2] = kont58642;
clo59615[3] = a5854158790;
void* f5864458793 = encode_clo(clo59615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5864458793;
arg_buffer[3] = proc;
arg_buffer[4] = a5854258792;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58942 = encode_clo(alloc_clo(lam58942_fptr, 0));

void* lam58944_fptr() // lam58944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58945 = arg_buffer[1];
//reading env and args
void* a5854158790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58945))[6];
//not do dummy comment
void* lst = (decode_clo(env58945))[5];
//not do dummy comment
void* map = (decode_clo(env58945))[4];
//not do dummy comment
void* proc = (decode_clo(env58945))[3];
//not do dummy comment
void* kont58642 = (decode_clo(env58945))[2];
//not do dummy comment
void* cons = (decode_clo(env58945))[1];

//creating new closure instance
void** clo59617 = alloc_clo(lam58942_fptr, 5);

//setting env list
clo59617[1] = cons;
clo59617[2] = kont58642;
clo59617[3] = proc;
clo59617[4] = map;
clo59617[5] = a5854158790;
void* f5864558791 = encode_clo(clo59617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5864558791;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58944 = encode_clo(alloc_clo(lam58944_fptr, 0));

void* lam58946_fptr() // lam58946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58947 = arg_buffer[1];
//reading env and args
void* a5854058788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58947))[6];
//not do dummy comment
void* lst = (decode_clo(env58947))[5];
//not do dummy comment
void* map = (decode_clo(env58947))[4];
//not do dummy comment
void* proc = (decode_clo(env58947))[3];
//not do dummy comment
void* kont58642 = (decode_clo(env58947))[2];
//not do dummy comment
void* cons = (decode_clo(env58947))[1];

//creating new closure instance
void** clo59619 = alloc_clo(lam58944_fptr, 6);

//setting env list
clo59619[1] = cons;
clo59619[2] = kont58642;
clo59619[3] = proc;
clo59619[4] = map;
clo59619[5] = lst;
clo59619[6] = cdr;
void* f5864658789 = encode_clo(clo59619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5864658789;
arg_buffer[3] = a5854058788;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58946 = encode_clo(alloc_clo(lam58946_fptr, 0));

void* lam58948_fptr() // lam58948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58949 = arg_buffer[1];
//reading env and args
void* a5853858784 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58949))[8];
//not do dummy comment
void* map = (decode_clo(env58949))[7];
//not do dummy comment
void* proc = (decode_clo(env58949))[6];
//not do dummy comment
void* kont58642 = (decode_clo(env58949))[5];
//not do dummy comment
void* car = (decode_clo(env58949))[4];
//not do dummy comment
void* cons = (decode_clo(env58949))[3];
//not do dummy comment
void* list = (decode_clo(env58949))[2];
//not do dummy comment
void* cdr = (decode_clo(env58949))[1];

//if-clause
bool if_guard59620 = is_true(a5853858784);
if(if_guard59620)
{

//creating new closure instance
void** clo59622 = alloc_clo(lam58938_fptr, 1);

//setting env list
clo59622[1] = kont58642;
void* f5864358785 = encode_clo(clo59622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5864358785;
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
void** clo59624 = alloc_clo(lam58946_fptr, 6);

//setting env list
clo59624[1] = cons;
clo59624[2] = kont58642;
clo59624[3] = proc;
clo59624[4] = map;
clo59624[5] = lst;
clo59624[6] = cdr;
void* f5864758787 = encode_clo(clo59624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5864758787;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58948 = encode_clo(alloc_clo(lam58948_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58950 = arg_buffer[1];
//reading env and args
void* kont58642 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59626 = alloc_clo(lam58948_fptr, 8);

//setting env list
clo59626[1] = cdr;
clo59626[2] = list;
clo59626[3] = cons;
clo59626[4] = car;
clo59626[5] = kont58642;
clo59626[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo59626[7] = map;
clo59626[8] = lst;
void* f5864858783 = encode_clo(clo59626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5864858783;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam58951_fptr() // lam58951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58952 = arg_buffer[1];
//reading env and args
void* x5854558798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58649 = (decode_clo(env58952))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58649);
arg_buffer[2] = x5854558798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58951 = encode_clo(alloc_clo(lam58951_fptr, 0));

void* lam58953_fptr() // lam58953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58954 = arg_buffer[1];
//reading env and args
void* a5855058808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58649 = (decode_clo(env58954))[3];
//not do dummy comment
void* a5854858804 = (decode_clo(env58954))[2];
//not do dummy comment
void* cons = (decode_clo(env58954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58649;
arg_buffer[3] = a5854858804;
arg_buffer[4] = a5855058808;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58953 = encode_clo(alloc_clo(lam58953_fptr, 0));

void* lam58955_fptr() // lam58955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58956 = arg_buffer[1];
//reading env and args
void* a5854958806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58649 = (decode_clo(env58956))[5];
//not do dummy comment
void* op = (decode_clo(env58956))[4];
//not do dummy comment
void* filter = (decode_clo(env58956))[3];
//not do dummy comment
void* a5854858804 = (decode_clo(env58956))[2];
//not do dummy comment
void* cons = (decode_clo(env58956))[1];

//creating new closure instance
void** clo59628 = alloc_clo(lam58953_fptr, 3);

//setting env list
clo59628[1] = cons;
clo59628[2] = a5854858804;
clo59628[3] = kont58649;
void* f5865158807 = encode_clo(clo59628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5865158807;
arg_buffer[3] = op;
arg_buffer[4] = a5854958806;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58955 = encode_clo(alloc_clo(lam58955_fptr, 0));

void* lam58957_fptr() // lam58957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58958 = arg_buffer[1];
//reading env and args
void* a5854858804 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58958))[6];
//not do dummy comment
void* kont58649 = (decode_clo(env58958))[5];
//not do dummy comment
void* lst = (decode_clo(env58958))[4];
//not do dummy comment
void* op = (decode_clo(env58958))[3];
//not do dummy comment
void* filter = (decode_clo(env58958))[2];
//not do dummy comment
void* cons = (decode_clo(env58958))[1];

//creating new closure instance
void** clo59630 = alloc_clo(lam58955_fptr, 5);

//setting env list
clo59630[1] = cons;
clo59630[2] = a5854858804;
clo59630[3] = filter;
clo59630[4] = op;
clo59630[5] = kont58649;
void* f5865258805 = encode_clo(clo59630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5865258805;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58957 = encode_clo(alloc_clo(lam58957_fptr, 0));

void* lam58959_fptr() // lam58959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58960 = arg_buffer[1];
//reading env and args
void* a5855158810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58649 = (decode_clo(env58960))[3];
//not do dummy comment
void* op = (decode_clo(env58960))[2];
//not do dummy comment
void* filter = (decode_clo(env58960))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont58649;
arg_buffer[3] = op;
arg_buffer[4] = a5855158810;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58959 = encode_clo(alloc_clo(lam58959_fptr, 0));

void* lam58961_fptr() // lam58961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58962 = arg_buffer[1];
//reading env and args
void* a5854758802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58962))[7];
//not do dummy comment
void* kont58649 = (decode_clo(env58962))[6];
//not do dummy comment
void* lst = (decode_clo(env58962))[5];
//not do dummy comment
void* op = (decode_clo(env58962))[4];
//not do dummy comment
void* cons = (decode_clo(env58962))[3];
//not do dummy comment
void* filter = (decode_clo(env58962))[2];
//not do dummy comment
void* car = (decode_clo(env58962))[1];

//if-clause
bool if_guard59631 = is_true(a5854758802);
if(if_guard59631)
{

//creating new closure instance
void** clo59633 = alloc_clo(lam58957_fptr, 6);

//setting env list
clo59633[1] = cons;
clo59633[2] = filter;
clo59633[3] = op;
clo59633[4] = lst;
clo59633[5] = kont58649;
clo59633[6] = cdr;
void* f5865358803 = encode_clo(clo59633);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5865358803;
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
void** clo59635 = alloc_clo(lam58959_fptr, 3);

//setting env list
clo59635[1] = filter;
clo59635[2] = op;
clo59635[3] = kont58649;
void* f5865458809 = encode_clo(clo59635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5865458809;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58961 = encode_clo(alloc_clo(lam58961_fptr, 0));

void* lam58963_fptr() // lam58963 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58964 = arg_buffer[1];
//reading env and args
void* a5854658800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58964))[7];
//not do dummy comment
void* kont58649 = (decode_clo(env58964))[6];
//not do dummy comment
void* lst = (decode_clo(env58964))[5];
//not do dummy comment
void* op = (decode_clo(env58964))[4];
//not do dummy comment
void* cons = (decode_clo(env58964))[3];
//not do dummy comment
void* filter = (decode_clo(env58964))[2];
//not do dummy comment
void* car = (decode_clo(env58964))[1];

//creating new closure instance
void** clo59637 = alloc_clo(lam58961_fptr, 7);

//setting env list
clo59637[1] = car;
clo59637[2] = filter;
clo59637[3] = cons;
clo59637[4] = op;
clo59637[5] = lst;
clo59637[6] = kont58649;
clo59637[7] = cdr;
void* f5865558801 = encode_clo(clo59637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5865558801;
arg_buffer[3] = a5854658800;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58963 = encode_clo(alloc_clo(lam58963_fptr, 0));

void* lam58965_fptr() // lam58965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58966 = arg_buffer[1];
//reading env and args
void* a5854458796 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58649 = (decode_clo(env58966))[8];
//not do dummy comment
void* lst = (decode_clo(env58966))[7];
//not do dummy comment
void* op = (decode_clo(env58966))[6];
//not do dummy comment
void* cons = (decode_clo(env58966))[5];
//not do dummy comment
void* list = (decode_clo(env58966))[4];
//not do dummy comment
void* cdr = (decode_clo(env58966))[3];
//not do dummy comment
void* filter = (decode_clo(env58966))[2];
//not do dummy comment
void* car = (decode_clo(env58966))[1];

//if-clause
bool if_guard59638 = is_true(a5854458796);
if(if_guard59638)
{

//creating new closure instance
void** clo59640 = alloc_clo(lam58951_fptr, 1);

//setting env list
clo59640[1] = kont58649;
void* f5865058797 = encode_clo(clo59640);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5865058797;
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
void** clo59642 = alloc_clo(lam58963_fptr, 7);

//setting env list
clo59642[1] = car;
clo59642[2] = filter;
clo59642[3] = cons;
clo59642[4] = op;
clo59642[5] = lst;
clo59642[6] = kont58649;
clo59642[7] = cdr;
void* f5865658799 = encode_clo(clo59642);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5865658799;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58965 = encode_clo(alloc_clo(lam58965_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58967 = arg_buffer[1];
//reading env and args
void* kont58649 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59644 = alloc_clo(lam58965_fptr, 8);

//setting env list
clo59644[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo59644[2] = filter;
clo59644[3] = cdr;
clo59644[4] = list;
clo59644[5] = cons;
clo59644[6] = op;
clo59644[7] = lst;
clo59644[8] = kont58649;
void* f5865758795 = encode_clo(clo59644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5865758795;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam58968_fptr() // lam58968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58969 = arg_buffer[1];
//reading env and args
void* a5855658818 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env58969))[3];
//not do dummy comment
void* a5855458815 = (decode_clo(env58969))[2];
//not do dummy comment
void* kont58658 = (decode_clo(env58969))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont58658;
arg_buffer[3] = a5855458815;
arg_buffer[4] = a5855658818;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58968 = encode_clo(alloc_clo(lam58968_fptr, 0));

void* lam58971_fptr() // lam58971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58972 = arg_buffer[1];
//reading env and args
void* a5855458815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env58972))[4];
//not do dummy comment
void* kont58658 = (decode_clo(env58972))[3];
//not do dummy comment
void* n = (decode_clo(env58972))[2];
//not do dummy comment
void* _u45 = (decode_clo(env58972))[1];
mpz_t* mpzvar59645 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59645, "1", 10);
void* a5855558816 = encode_mpz(mpzvar59645);

//creating new closure instance
void** clo59647 = alloc_clo(lam58968_fptr, 3);

//setting env list
clo59647[1] = kont58658;
clo59647[2] = a5855458815;
clo59647[3] = drop;
void* f5865958817 = encode_clo(clo59647);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5865958817;
arg_buffer[3] = n;
arg_buffer[4] = a5855558816;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58971 = encode_clo(alloc_clo(lam58971_fptr, 0));

void* lam58973_fptr() // lam58973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58974 = arg_buffer[1];
//reading env and args
void* a5855358813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58974))[6];
//not do dummy comment
void* kont58658 = (decode_clo(env58974))[5];
//not do dummy comment
void* n = (decode_clo(env58974))[4];
//not do dummy comment
void* _u45 = (decode_clo(env58974))[3];
//not do dummy comment
void* lst = (decode_clo(env58974))[2];
//not do dummy comment
void* drop = (decode_clo(env58974))[1];

//if-clause
bool if_guard59648 = is_true(a5855358813);
if(if_guard59648)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58658);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58658))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59650 = alloc_clo(lam58971_fptr, 4);

//setting env list
clo59650[1] = _u45;
clo59650[2] = n;
clo59650[3] = kont58658;
clo59650[4] = drop;
void* f5866058814 = encode_clo(clo59650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5866058814;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58973 = encode_clo(alloc_clo(lam58973_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58976 = arg_buffer[1];
//reading env and args
void* kont58658 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar59651 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59651, "0", 10);
void* a5855258811 = encode_mpz(mpzvar59651);

//creating new closure instance
void** clo59653 = alloc_clo(lam58973_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo59653[1] = drop;
clo59653[2] = lst;
clo59653[3] = _u45;
clo59653[4] = n;
clo59653[5] = kont58658;
clo59653[6] = cdr;
void* f5866158812 = encode_clo(clo59653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5866158812;
arg_buffer[3] = n;
arg_buffer[4] = a5855258811;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam58977_fptr() // lam58977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58978 = arg_buffer[1];
//reading env and args
void* a5856058826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env58978))[3];
//not do dummy comment
void* a5855858822 = (decode_clo(env58978))[2];
//not do dummy comment
void* kont58662 = (decode_clo(env58978))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont58662;
arg_buffer[3] = a5855858822;
arg_buffer[4] = a5856058826;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58977 = encode_clo(alloc_clo(lam58977_fptr, 0));

void* lam58979_fptr() // lam58979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58980 = arg_buffer[1];
//reading env and args
void* a5855958824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env58980))[5];
//not do dummy comment
void* a5855858822 = (decode_clo(env58980))[4];
//not do dummy comment
void* kont58662 = (decode_clo(env58980))[3];
//not do dummy comment
void* proc = (decode_clo(env58980))[2];
//not do dummy comment
void* acc = (decode_clo(env58980))[1];

//creating new closure instance
void** clo59655 = alloc_clo(lam58977_fptr, 3);

//setting env list
clo59655[1] = kont58662;
clo59655[2] = a5855858822;
clo59655[3] = proc;
void* f5866358825 = encode_clo(clo59655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5866358825;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5855958824;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58979 = encode_clo(alloc_clo(lam58979_fptr, 0));

void* lam58981_fptr() // lam58981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58982 = arg_buffer[1];
//reading env and args
void* a5855858822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58662 = (decode_clo(env58982))[6];
//not do dummy comment
void* cdr = (decode_clo(env58982))[5];
//not do dummy comment
void* foldr = (decode_clo(env58982))[4];
//not do dummy comment
void* lst = (decode_clo(env58982))[3];
//not do dummy comment
void* proc = (decode_clo(env58982))[2];
//not do dummy comment
void* acc = (decode_clo(env58982))[1];

//creating new closure instance
void** clo59657 = alloc_clo(lam58979_fptr, 5);

//setting env list
clo59657[1] = acc;
clo59657[2] = proc;
clo59657[3] = kont58662;
clo59657[4] = a5855858822;
clo59657[5] = foldr;
void* f5866458823 = encode_clo(clo59657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5866458823;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58981 = encode_clo(alloc_clo(lam58981_fptr, 0));

void* lam58983_fptr() // lam58983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58984 = arg_buffer[1];
//reading env and args
void* a5855758820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env58984))[7];
//not do dummy comment
void* kont58662 = (decode_clo(env58984))[6];
//not do dummy comment
void* cdr = (decode_clo(env58984))[5];
//not do dummy comment
void* foldr = (decode_clo(env58984))[4];
//not do dummy comment
void* lst = (decode_clo(env58984))[3];
//not do dummy comment
void* proc = (decode_clo(env58984))[2];
//not do dummy comment
void* acc = (decode_clo(env58984))[1];

//if-clause
bool if_guard59658 = is_true(a5855758820);
if(if_guard59658)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58662);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58662))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59660 = alloc_clo(lam58981_fptr, 6);

//setting env list
clo59660[1] = acc;
clo59660[2] = proc;
clo59660[3] = lst;
clo59660[4] = foldr;
clo59660[5] = cdr;
clo59660[6] = kont58662;
void* f5866558821 = encode_clo(clo59660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5866558821;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58983 = encode_clo(alloc_clo(lam58983_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58985 = arg_buffer[1];
//reading env and args
void* kont58662 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo59662 = alloc_clo(lam58983_fptr, 7);

//setting env list
clo59662[1] = acc;
clo59662[2] = proc;
clo59662[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo59662[4] = foldr;
clo59662[5] = cdr;
clo59662[6] = kont58662;
clo59662[7] = car;
void* f5866658819 = encode_clo(clo59662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5866658819;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam58986_fptr() // lam58986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58987 = arg_buffer[1];
//reading env and args
void* a5856458834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58667 = (decode_clo(env58987))[3];
//not do dummy comment
void* a5856258830 = (decode_clo(env58987))[2];
//not do dummy comment
void* cons = (decode_clo(env58987))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58667;
arg_buffer[3] = a5856258830;
arg_buffer[4] = a5856458834;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58986 = encode_clo(alloc_clo(lam58986_fptr, 0));

void* lam58988_fptr() // lam58988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58989 = arg_buffer[1];
//reading env and args
void* a5856358832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58667 = (decode_clo(env58989))[5];
//not do dummy comment
void* lst2 = (decode_clo(env58989))[4];
//not do dummy comment
void* cons = (decode_clo(env58989))[3];
//not do dummy comment
void* append = (decode_clo(env58989))[2];
//not do dummy comment
void* a5856258830 = (decode_clo(env58989))[1];

//creating new closure instance
void** clo59664 = alloc_clo(lam58986_fptr, 3);

//setting env list
clo59664[1] = cons;
clo59664[2] = a5856258830;
clo59664[3] = kont58667;
void* f5866858833 = encode_clo(clo59664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5866858833;
arg_buffer[3] = a5856358832;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58988 = encode_clo(alloc_clo(lam58988_fptr, 0));

void* lam58990_fptr() // lam58990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58991 = arg_buffer[1];
//reading env and args
void* a5856258830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58991))[6];
//not do dummy comment
void* kont58667 = (decode_clo(env58991))[5];
//not do dummy comment
void* append = (decode_clo(env58991))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58991))[3];
//not do dummy comment
void* lst1 = (decode_clo(env58991))[2];
//not do dummy comment
void* cons = (decode_clo(env58991))[1];

//creating new closure instance
void** clo59666 = alloc_clo(lam58988_fptr, 5);

//setting env list
clo59666[1] = a5856258830;
clo59666[2] = append;
clo59666[3] = cons;
clo59666[4] = lst2;
clo59666[5] = kont58667;
void* f5866958831 = encode_clo(clo59666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5866958831;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58990 = encode_clo(alloc_clo(lam58990_fptr, 0));

void* lam58992_fptr() // lam58992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58993 = arg_buffer[1];
//reading env and args
void* a5856158828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58993))[7];
//not do dummy comment
void* kont58667 = (decode_clo(env58993))[6];
//not do dummy comment
void* append = (decode_clo(env58993))[5];
//not do dummy comment
void* lst2 = (decode_clo(env58993))[4];
//not do dummy comment
void* cons = (decode_clo(env58993))[3];
//not do dummy comment
void* lst1 = (decode_clo(env58993))[2];
//not do dummy comment
void* car = (decode_clo(env58993))[1];

//if-clause
bool if_guard59667 = is_true(a5856158828);
if(if_guard59667)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58667);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58667))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59669 = alloc_clo(lam58990_fptr, 6);

//setting env list
clo59669[1] = cons;
clo59669[2] = lst1;
clo59669[3] = lst2;
clo59669[4] = append;
clo59669[5] = kont58667;
clo59669[6] = cdr;
void* f5867058829 = encode_clo(clo59669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5867058829;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58992 = encode_clo(alloc_clo(lam58992_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58994 = arg_buffer[1];
//reading env and args
void* kont58667 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59671 = alloc_clo(lam58992_fptr, 7);

//setting env list
clo59671[1] = car;
clo59671[2] = lst1;
clo59671[3] = cons;
clo59671[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo59671[5] = append;
clo59671[6] = kont58667;
clo59671[7] = cdr;
void* f5867158827 = encode_clo(clo59671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5867158827;
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
void* _58995 = arg_buffer[1];
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

void* kont5867258835 = prim_car(lst);
void* lst58836 = prim_cdr(lst);
void* x5856558837 = apply_prim_hash(lst58836);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5867258835);
arg_buffer[2] = x5856558837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5867258835))[0]);
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
void* _58996 = arg_buffer[1];
//reading env and args
void* kont58674 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5856658838 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58674);
arg_buffer[2] = x5856658838;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58674))[0]);
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
void* _58997 = arg_buffer[1];
//reading env and args
void* kont58675 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5856758839 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58675);
arg_buffer[2] = x5856758839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58675))[0]);
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
void* _58998 = arg_buffer[1];
//reading env and args
void* kont58676 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5856858840 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58676);
arg_buffer[2] = x5856858840;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58676))[0]);
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
void* _58999 = arg_buffer[1];
//reading env and args
void* kont58677 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5856958841 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58677);
arg_buffer[2] = x5856958841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58677))[0]);
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
void* _59006 = arg_buffer[1];
//reading env and args
void* kont58678 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar59672 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59672, "1", 10);
void* a5857058842 = encode_mpz(mpzvar59672);
mpz_t* mpzvar59673 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59673, "2", 10);
void* a5857158843 = encode_mpz(mpzvar59673);
mpz_t* mpzvar59674 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59674, "3", 10);
void* a5857258844 = encode_mpz(mpzvar59674);
mpz_t* mpzvar59675 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59675, "4", 10);
void* a5857358845 = encode_mpz(mpzvar59675);
mpz_t* mpzvar59676 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59676, "5", 10);
void* a5857458846 = encode_mpz(mpzvar59676);
mpz_t* mpzvar59677 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59677, "100", 10);
void* a5857558847 = encode_mpz(mpzvar59677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60_u61);
arg_buffer[2] = kont58678;
arg_buffer[3] = a5857058842;
arg_buffer[4] = a5857158843;
arg_buffer[5] = a5857258844;
arg_buffer[6] = a5857358845;
arg_buffer[7] = a5857458846;
arg_buffer[8] = a5857558847;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam59007_fptr() // lam59007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59008 = arg_buffer[1];
//reading env and args
void* x5857658849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58679 = (decode_clo(env59008))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58679);
arg_buffer[2] = x5857658849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58679))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59007 = encode_clo(alloc_clo(lam59007_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59009 = arg_buffer[1];
//reading env and args
void* kont58679 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo59679 = alloc_clo(lam59007_fptr, 1);

//setting env list
clo59679[1] = kont58679;
void* f5868058848 = encode_clo(clo59679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5868058848;
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

