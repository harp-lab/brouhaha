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
void* _9818 = arg_buffer[1];
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

void* kont95489652 = prim_car(lst);
void* lst9653 = prim_cdr(lst);
void* x94599654 = apply_prim__u43(lst9653);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95489652);
arg_buffer[2] = x94599654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95489652))[0]);
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
void* _9819 = arg_buffer[1];
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

void* kont95509655 = prim_car(lst);
void* lst9656 = prim_cdr(lst);
void* x94609657 = apply_prim__u45(lst9656);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95509655);
arg_buffer[2] = x94609657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95509655))[0]);
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
void* _9820 = arg_buffer[1];
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

void* kont95529658 = prim_car(lst);
void* lst9659 = prim_cdr(lst);
void* x94619660 = apply_prim__u42(lst9659);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95529658);
arg_buffer[2] = x94619660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95529658))[0]);
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
void* _9821 = arg_buffer[1];
//reading env and args
void* kont9554 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x94629661 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9554);
arg_buffer[2] = x94629661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9554))[0]);
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
void* _9822 = arg_buffer[1];
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

void* kont95559662 = prim_car(lst);
void* lst9663 = prim_cdr(lst);
void* x94639664 = apply_prim__u47(lst9663);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95559662);
arg_buffer[2] = x94639664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95559662))[0]);
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
void* _9823 = arg_buffer[1];
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

void* kont95579665 = prim_car(lst);
void* lst9666 = prim_cdr(lst);
void* x94649667 = apply_prim__u61(lst9666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95579665);
arg_buffer[2] = x94649667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95579665))[0]);
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
void* _9824 = arg_buffer[1];
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

void* kont95599668 = prim_car(lst);
void* lst9669 = prim_cdr(lst);
void* x94659670 = apply_prim__u62(lst9669);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95599668);
arg_buffer[2] = x94659670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95599668))[0]);
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
void* _9825 = arg_buffer[1];
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

void* kont95619671 = prim_car(lst);
void* lst9672 = prim_cdr(lst);
void* x94669673 = apply_prim__u60(lst9672);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95619671);
arg_buffer[2] = x94669673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95619671))[0]);
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
void* _9826 = arg_buffer[1];
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

void* kont95639674 = prim_car(lst);
void* lst9675 = prim_cdr(lst);
void* x94679676 = apply_prim__u60_u61(lst9675);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95639674);
arg_buffer[2] = x94679676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95639674))[0]);
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
void* _9827 = arg_buffer[1];
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

void* kont95659677 = prim_car(lst);
void* lst9678 = prim_cdr(lst);
void* x94689679 = apply_prim__u62_u61(lst9678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95659677);
arg_buffer[2] = x94689679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95659677))[0]);
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
void* _9828 = arg_buffer[1];
//reading env and args
void* kont9567 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x94699680 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9567);
arg_buffer[2] = x94699680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9567))[0]);
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
void* _9829 = arg_buffer[1];
//reading env and args
void* kont9568 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x94709681 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9568);
arg_buffer[2] = x94709681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9568))[0]);
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
void* _9830 = arg_buffer[1];
//reading env and args
void* kont9569 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x94719682 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9569);
arg_buffer[2] = x94719682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9569))[0]);
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
void* _9831 = arg_buffer[1];
//reading env and args
void* kont9570 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x94729683 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9570);
arg_buffer[2] = x94729683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9570))[0]);
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
void* _9832 = arg_buffer[1];
//reading env and args
void* kont9571 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x94739684 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9571);
arg_buffer[2] = x94739684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9571))[0]);
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
void* _9833 = arg_buffer[1];
//reading env and args
void* kont9572 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x94749685 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9572);
arg_buffer[2] = x94749685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9572))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam9834_fptr() // lam9834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9835 = arg_buffer[1];
//reading env and args
void* a94779689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env9835))[3];
//not do dummy comment
void* kont9573 = (decode_clo(env9835))[2];
//not do dummy comment
void* a94759686 = (decode_clo(env9835))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9573;
arg_buffer[3] = a94759686;
arg_buffer[4] = a94779689;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9834 = encode_clo(alloc_clo(lam9834_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9838 = arg_buffer[1];
//reading env and args
void* kont9573 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10515 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10515, "0", 10);
void* a94759686 = encode_mpz(mpzvar10515);
mpz_t* mpzvar10516 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10516, "2", 10);
void* a94769687 = encode_mpz(mpzvar10516);

//creating new closure instance
void** clo10518 = alloc_clo(lam9834_fptr, 3);

//setting env list
clo10518[1] = a94759686;
clo10518[2] = kont9573;
clo10518[3] = equal_u63;
void* f95749688 = encode_clo(clo10518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f95749688;
arg_buffer[3] = x;
arg_buffer[4] = a94769687;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam9839_fptr() // lam9839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9840 = arg_buffer[1];
//reading env and args
void* a94809693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9575 = (decode_clo(env9840))[3];
//not do dummy comment
void* a94789690 = (decode_clo(env9840))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9840))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9575;
arg_buffer[3] = a94789690;
arg_buffer[4] = a94809693;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9839 = encode_clo(alloc_clo(lam9839_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9843 = arg_buffer[1];
//reading env and args
void* kont9575 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10519 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10519, "1", 10);
void* a94789690 = encode_mpz(mpzvar10519);
mpz_t* mpzvar10520 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10520, "2", 10);
void* a94799691 = encode_mpz(mpzvar10520);

//creating new closure instance
void** clo10522 = alloc_clo(lam9839_fptr, 3);

//setting env list
clo10522[1] = equal_u63;
clo10522[2] = a94789690;
clo10522[3] = kont9575;
void* f95769692 = encode_clo(clo10522);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f95769692;
arg_buffer[3] = x;
arg_buffer[4] = a94799691;
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
void* _9844 = arg_buffer[1];
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

void* kont95779694 = prim_car(x);
void* x9695 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95779694);
arg_buffer[2] = x9695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95779694))[0]);
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
void* _9845 = arg_buffer[1];
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

void* kont95799696 = prim_car(lst);
void* lst9697 = prim_cdr(lst);
void* x94819698 = apply_prim_and(lst9697);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95799696);
arg_buffer[2] = x94819698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95799696))[0]);
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
void* _9846 = arg_buffer[1];
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

void* kont95819699 = prim_car(lst);
void* lst9700 = prim_cdr(lst);
void* x94829701 = apply_prim_or(lst9700);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95819699);
arg_buffer[2] = x94829701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95819699))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam9849_fptr() // lam9849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9850 = arg_buffer[1];
//reading env and args
void* a94889711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9583 = (decode_clo(env9850))[3];
//not do dummy comment
void* x = (decode_clo(env9850))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env9850))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont9583;
arg_buffer[3] = x;
arg_buffer[4] = a94889711;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9849 = encode_clo(alloc_clo(lam9849_fptr, 0));

void* lam9851_fptr() // lam9851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9852 = arg_buffer[1];
//reading env and args
void* a94869708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9852))[5];
//not do dummy comment
void* lst = (decode_clo(env9852))[4];
//not do dummy comment
void* kont9583 = (decode_clo(env9852))[3];
//not do dummy comment
void* x = (decode_clo(env9852))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env9852))[1];

//if-clause
bool if_guard10523 = is_true(a94869708);
if(if_guard10523)
{
void* x94879709 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9583);
arg_buffer[2] = x94879709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10525 = alloc_clo(lam9849_fptr, 3);

//setting env list
clo10525[1] = member_u63;
clo10525[2] = x;
clo10525[3] = kont9583;
void* f95849710 = encode_clo(clo10525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95849710;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9851 = encode_clo(alloc_clo(lam9851_fptr, 0));

void* lam9853_fptr() // lam9853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9854 = arg_buffer[1];
//reading env and args
void* a94859706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9854))[6];
//not do dummy comment
void* lst = (decode_clo(env9854))[5];
//not do dummy comment
void* x = (decode_clo(env9854))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9854))[3];
//not do dummy comment
void* kont9583 = (decode_clo(env9854))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9854))[1];

//creating new closure instance
void** clo10527 = alloc_clo(lam9851_fptr, 5);

//setting env list
clo10527[1] = member_u63;
clo10527[2] = x;
clo10527[3] = kont9583;
clo10527[4] = lst;
clo10527[5] = cdr;
void* f95859707 = encode_clo(clo10527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f95859707;
arg_buffer[3] = a94859706;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9853 = encode_clo(alloc_clo(lam9853_fptr, 0));

void* lam9855_fptr() // lam9855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9856 = arg_buffer[1];
//reading env and args
void* a94839703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9856))[7];
//not do dummy comment
void* lst = (decode_clo(env9856))[6];
//not do dummy comment
void* x = (decode_clo(env9856))[5];
//not do dummy comment
void* car = (decode_clo(env9856))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9856))[3];
//not do dummy comment
void* kont9583 = (decode_clo(env9856))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9856))[1];

//if-clause
bool if_guard10528 = is_true(a94839703);
if(if_guard10528)
{
void* x94849704 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9583);
arg_buffer[2] = x94849704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10530 = alloc_clo(lam9853_fptr, 6);

//setting env list
clo10530[1] = equal_u63;
clo10530[2] = kont9583;
clo10530[3] = member_u63;
clo10530[4] = x;
clo10530[5] = lst;
clo10530[6] = cdr;
void* f95869705 = encode_clo(clo10530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95869705;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9855 = encode_clo(alloc_clo(lam9855_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9857 = arg_buffer[1];
//reading env and args
void* kont9583 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10532 = alloc_clo(lam9855_fptr, 7);

//setting env list
clo10532[1] = equal_u63;
clo10532[2] = kont9583;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo10532[3] = member_u63;
clo10532[4] = car;
clo10532[5] = x;
clo10532[6] = lst;
clo10532[7] = cdr;
void* f95879702 = encode_clo(clo10532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95879702;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam9858_fptr() // lam9858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9859 = arg_buffer[1];
//reading env and args
void* a94929719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env9859))[4];
//not do dummy comment
void* kont9588 = (decode_clo(env9859))[3];
//not do dummy comment
void* a94919717 = (decode_clo(env9859))[2];
//not do dummy comment
void* foldl = (decode_clo(env9859))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont9588;
arg_buffer[3] = fun;
arg_buffer[4] = a94919717;
arg_buffer[5] = a94929719;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9858 = encode_clo(alloc_clo(lam9858_fptr, 0));

void* lam9860_fptr() // lam9860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9861 = arg_buffer[1];
//reading env and args
void* a94919717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9861))[5];
//not do dummy comment
void* lst = (decode_clo(env9861))[4];
//not do dummy comment
void* fun = (decode_clo(env9861))[3];
//not do dummy comment
void* kont9588 = (decode_clo(env9861))[2];
//not do dummy comment
void* foldl = (decode_clo(env9861))[1];

//creating new closure instance
void** clo10534 = alloc_clo(lam9858_fptr, 4);

//setting env list
clo10534[1] = foldl;
clo10534[2] = a94919717;
clo10534[3] = kont9588;
clo10534[4] = fun;
void* f95899718 = encode_clo(clo10534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95899718;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9860 = encode_clo(alloc_clo(lam9860_fptr, 0));

void* lam9862_fptr() // lam9862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9863 = arg_buffer[1];
//reading env and args
void* a94909715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9863))[6];
//not do dummy comment
void* lst = (decode_clo(env9863))[5];
//not do dummy comment
void* fun = (decode_clo(env9863))[4];
//not do dummy comment
void* acc = (decode_clo(env9863))[3];
//not do dummy comment
void* kont9588 = (decode_clo(env9863))[2];
//not do dummy comment
void* foldl = (decode_clo(env9863))[1];

//creating new closure instance
void** clo10536 = alloc_clo(lam9860_fptr, 5);

//setting env list
clo10536[1] = foldl;
clo10536[2] = kont9588;
clo10536[3] = fun;
clo10536[4] = lst;
clo10536[5] = cdr;
void* f95909716 = encode_clo(clo10536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f95909716;
arg_buffer[3] = a94909715;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9862 = encode_clo(alloc_clo(lam9862_fptr, 0));

void* lam9864_fptr() // lam9864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9865 = arg_buffer[1];
//reading env and args
void* a94899713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9865))[7];
//not do dummy comment
void* lst = (decode_clo(env9865))[6];
//not do dummy comment
void* fun = (decode_clo(env9865))[5];
//not do dummy comment
void* acc = (decode_clo(env9865))[4];
//not do dummy comment
void* foldl = (decode_clo(env9865))[3];
//not do dummy comment
void* kont9588 = (decode_clo(env9865))[2];
//not do dummy comment
void* car = (decode_clo(env9865))[1];

//if-clause
bool if_guard10537 = is_true(a94899713);
if(if_guard10537)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9588);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10539 = alloc_clo(lam9862_fptr, 6);

//setting env list
clo10539[1] = foldl;
clo10539[2] = kont9588;
clo10539[3] = acc;
clo10539[4] = fun;
clo10539[5] = lst;
clo10539[6] = cdr;
void* f95919714 = encode_clo(clo10539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95919714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9864 = encode_clo(alloc_clo(lam9864_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9866 = arg_buffer[1];
//reading env and args
void* kont9588 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10541 = alloc_clo(lam9864_fptr, 7);

//setting env list
clo10541[1] = car;
clo10541[2] = kont9588;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo10541[3] = foldl;
clo10541[4] = acc;
clo10541[5] = fun;
clo10541[6] = lst;
clo10541[7] = cdr;
void* f95929712 = encode_clo(clo10541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95929712;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam9867_fptr() // lam9867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9868 = arg_buffer[1];
//reading env and args
void* a94969727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9593 = (decode_clo(env9868))[3];
//not do dummy comment
void* a94949723 = (decode_clo(env9868))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9868))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9593;
arg_buffer[3] = a94949723;
arg_buffer[4] = a94969727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9867 = encode_clo(alloc_clo(lam9867_fptr, 0));

void* lam9869_fptr() // lam9869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9870 = arg_buffer[1];
//reading env and args
void* a94959725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9593 = (decode_clo(env9870))[5];
//not do dummy comment
void* a94949723 = (decode_clo(env9870))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9870))[3];
//not do dummy comment
void* lst2 = (decode_clo(env9870))[2];
//not do dummy comment
void* cons = (decode_clo(env9870))[1];

//creating new closure instance
void** clo10543 = alloc_clo(lam9867_fptr, 3);

//setting env list
clo10543[1] = reverse_u45helper;
clo10543[2] = a94949723;
clo10543[3] = kont9593;
void* f95949726 = encode_clo(clo10543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f95949726;
arg_buffer[3] = a94959725;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9869 = encode_clo(alloc_clo(lam9869_fptr, 0));

void* lam9871_fptr() // lam9871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9872 = arg_buffer[1];
//reading env and args
void* a94949723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9593 = (decode_clo(env9872))[6];
//not do dummy comment
void* lst = (decode_clo(env9872))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9872))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9872))[3];
//not do dummy comment
void* car = (decode_clo(env9872))[2];
//not do dummy comment
void* cons = (decode_clo(env9872))[1];

//creating new closure instance
void** clo10545 = alloc_clo(lam9869_fptr, 5);

//setting env list
clo10545[1] = cons;
clo10545[2] = lst2;
clo10545[3] = reverse_u45helper;
clo10545[4] = a94949723;
clo10545[5] = kont9593;
void* f95959724 = encode_clo(clo10545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95959724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9871 = encode_clo(alloc_clo(lam9871_fptr, 0));

void* lam9873_fptr() // lam9873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9874 = arg_buffer[1];
//reading env and args
void* a94939721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9874))[7];
//not do dummy comment
void* kont9593 = (decode_clo(env9874))[6];
//not do dummy comment
void* lst = (decode_clo(env9874))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9874))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9874))[3];
//not do dummy comment
void* car = (decode_clo(env9874))[2];
//not do dummy comment
void* cons = (decode_clo(env9874))[1];

//if-clause
bool if_guard10546 = is_true(a94939721);
if(if_guard10546)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9593);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9593))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10548 = alloc_clo(lam9871_fptr, 6);

//setting env list
clo10548[1] = cons;
clo10548[2] = car;
clo10548[3] = lst2;
clo10548[4] = reverse_u45helper;
clo10548[5] = lst;
clo10548[6] = kont9593;
void* f95969722 = encode_clo(clo10548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95969722;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9873 = encode_clo(alloc_clo(lam9873_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9875 = arg_buffer[1];
//reading env and args
void* kont9593 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10550 = alloc_clo(lam9873_fptr, 7);

//setting env list
clo10550[1] = cons;
clo10550[2] = car;
clo10550[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo10550[4] = reverse_u45helper;
clo10550[5] = lst;
clo10550[6] = kont9593;
clo10550[7] = cdr;
void* f95979720 = encode_clo(clo10550);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95979720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam9876_fptr() // lam9876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9877 = arg_buffer[1];
//reading env and args
void* a94979729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9877))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9877))[2];
//not do dummy comment
void* kont9598 = (decode_clo(env9877))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9598;
arg_buffer[3] = lst;
arg_buffer[4] = a94979729;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9876 = encode_clo(alloc_clo(lam9876_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9878 = arg_buffer[1];
//reading env and args
void* kont9598 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10552 = alloc_clo(lam9876_fptr, 3);

//setting env list
clo10552[1] = kont9598;
clo10552[2] = reverse_u45helper;
clo10552[3] = lst;
void* f95999728 = encode_clo(clo10552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95999728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam9879_fptr() // lam9879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9880 = arg_buffer[1];
//reading env and args
void* x95009734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9600 = (decode_clo(env9880))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9600);
arg_buffer[2] = x95009734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9600))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9879 = encode_clo(alloc_clo(lam9879_fptr, 0));

void* lam9881_fptr() // lam9881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9882 = arg_buffer[1];
//reading env and args
void* a95059743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95019736 = (decode_clo(env9882))[4];
//not do dummy comment
void* a95039739 = (decode_clo(env9882))[3];
//not do dummy comment
void* kont9600 = (decode_clo(env9882))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env9882))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9600;
arg_buffer[3] = a95019736;
arg_buffer[4] = a95039739;
arg_buffer[5] = a95059743;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9881 = encode_clo(alloc_clo(lam9881_fptr, 0));

void* lam9883_fptr() // lam9883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9884 = arg_buffer[1];
//reading env and args
void* a95049741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95019736 = (decode_clo(env9884))[6];
//not do dummy comment
void* a95039739 = (decode_clo(env9884))[5];
//not do dummy comment
void* kont9600 = (decode_clo(env9884))[4];
//not do dummy comment
void* cons = (decode_clo(env9884))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9884))[2];
//not do dummy comment
void* lst2 = (decode_clo(env9884))[1];

//creating new closure instance
void** clo10554 = alloc_clo(lam9881_fptr, 4);

//setting env list
clo10554[1] = take_u45helper;
clo10554[2] = kont9600;
clo10554[3] = a95039739;
clo10554[4] = a95019736;
void* f96029742 = encode_clo(clo10554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f96029742;
arg_buffer[3] = a95049741;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9883 = encode_clo(alloc_clo(lam9883_fptr, 0));

void* lam9885_fptr() // lam9885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9886 = arg_buffer[1];
//reading env and args
void* a95039739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95019736 = (decode_clo(env9886))[7];
//not do dummy comment
void* lst = (decode_clo(env9886))[6];
//not do dummy comment
void* kont9600 = (decode_clo(env9886))[5];
//not do dummy comment
void* car = (decode_clo(env9886))[4];
//not do dummy comment
void* cons = (decode_clo(env9886))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9886))[2];
//not do dummy comment
void* lst2 = (decode_clo(env9886))[1];

//creating new closure instance
void** clo10556 = alloc_clo(lam9883_fptr, 6);

//setting env list
clo10556[1] = lst2;
clo10556[2] = take_u45helper;
clo10556[3] = cons;
clo10556[4] = kont9600;
clo10556[5] = a95039739;
clo10556[6] = a95019736;
void* f96039740 = encode_clo(clo10556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96039740;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9885 = encode_clo(alloc_clo(lam9885_fptr, 0));

void* lam9888_fptr() // lam9888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9889 = arg_buffer[1];
//reading env and args
void* a95019736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9889))[8];
//not do dummy comment
void* kont9600 = (decode_clo(env9889))[7];
//not do dummy comment
void* cons = (decode_clo(env9889))[6];
//not do dummy comment
void* _u45 = (decode_clo(env9889))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env9889))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9889))[3];
//not do dummy comment
void* n = (decode_clo(env9889))[2];
//not do dummy comment
void* car = (decode_clo(env9889))[1];
mpz_t* mpzvar10557 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10557, "1", 10);
void* a95029737 = encode_mpz(mpzvar10557);

//creating new closure instance
void** clo10559 = alloc_clo(lam9885_fptr, 7);

//setting env list
clo10559[1] = lst2;
clo10559[2] = take_u45helper;
clo10559[3] = cons;
clo10559[4] = car;
clo10559[5] = kont9600;
clo10559[6] = lst;
clo10559[7] = a95019736;
void* f96049738 = encode_clo(clo10559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f96049738;
arg_buffer[3] = n;
arg_buffer[4] = a95029737;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9888 = encode_clo(alloc_clo(lam9888_fptr, 0));

void* lam9890_fptr() // lam9890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9891 = arg_buffer[1];
//reading env and args
void* a94999732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9891))[10];
//not do dummy comment
void* lst = (decode_clo(env9891))[9];
//not do dummy comment
void* reverse = (decode_clo(env9891))[8];
//not do dummy comment
void* kont9600 = (decode_clo(env9891))[7];
//not do dummy comment
void* cons = (decode_clo(env9891))[6];
//not do dummy comment
void* _u45 = (decode_clo(env9891))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env9891))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9891))[3];
//not do dummy comment
void* n = (decode_clo(env9891))[2];
//not do dummy comment
void* car = (decode_clo(env9891))[1];

//if-clause
bool if_guard10560 = is_true(a94999732);
if(if_guard10560)
{

//creating new closure instance
void** clo10562 = alloc_clo(lam9879_fptr, 1);

//setting env list
clo10562[1] = kont9600;
void* f96019733 = encode_clo(clo10562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f96019733;
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
void** clo10564 = alloc_clo(lam9888_fptr, 8);

//setting env list
clo10564[1] = car;
clo10564[2] = n;
clo10564[3] = lst2;
clo10564[4] = take_u45helper;
clo10564[5] = _u45;
clo10564[6] = cons;
clo10564[7] = kont9600;
clo10564[8] = lst;
void* f96059735 = encode_clo(clo10564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96059735;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9890 = encode_clo(alloc_clo(lam9890_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9893 = arg_buffer[1];
//reading env and args
void* kont9600 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar10565 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10565, "0", 10);
void* a94989730 = encode_mpz(mpzvar10565);

//creating new closure instance
void** clo10567 = alloc_clo(lam9890_fptr, 10);

//setting env list
clo10567[1] = car;
clo10567[2] = n;
clo10567[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo10567[4] = take_u45helper;
clo10567[5] = _u45;
clo10567[6] = cons;
clo10567[7] = kont9600;
clo10567[8] = reverse;
clo10567[9] = lst;
clo10567[10] = cdr;
void* f96069731 = encode_clo(clo10567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f96069731;
arg_buffer[3] = n;
arg_buffer[4] = a94989730;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam9894_fptr() // lam9894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9895 = arg_buffer[1];
//reading env and args
void* a95069745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9607 = (decode_clo(env9895))[4];
//not do dummy comment
void* lst = (decode_clo(env9895))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9895))[2];
//not do dummy comment
void* n = (decode_clo(env9895))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9607;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a95069745;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9894 = encode_clo(alloc_clo(lam9894_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9896 = arg_buffer[1];
//reading env and args
void* kont9607 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10569 = alloc_clo(lam9894_fptr, 4);

//setting env list
clo10569[1] = n;
clo10569[2] = take_u45helper;
clo10569[3] = lst;
clo10569[4] = kont9607;
void* f96089744 = encode_clo(clo10569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f96089744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam9898_fptr() // lam9898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9899 = arg_buffer[1];
//reading env and args
void* a95119753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9609 = (decode_clo(env9899))[3];
//not do dummy comment
void* _u43 = (decode_clo(env9899))[2];
//not do dummy comment
void* a95099749 = (decode_clo(env9899))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont9609;
arg_buffer[3] = a95099749;
arg_buffer[4] = a95119753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9898 = encode_clo(alloc_clo(lam9898_fptr, 0));

void* lam9900_fptr() // lam9900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9901 = arg_buffer[1];
//reading env and args
void* a95109751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9609 = (decode_clo(env9901))[4];
//not do dummy comment
void* length = (decode_clo(env9901))[3];
//not do dummy comment
void* _u43 = (decode_clo(env9901))[2];
//not do dummy comment
void* a95099749 = (decode_clo(env9901))[1];

//creating new closure instance
void** clo10571 = alloc_clo(lam9898_fptr, 3);

//setting env list
clo10571[1] = a95099749;
clo10571[2] = _u43;
clo10571[3] = kont9609;
void* f96109752 = encode_clo(clo10571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f96109752;
arg_buffer[3] = a95109751;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9900 = encode_clo(alloc_clo(lam9900_fptr, 0));

void* lam9903_fptr() // lam9903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9904 = arg_buffer[1];
//reading env and args
void* a95079747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9904))[5];
//not do dummy comment
void* kont9609 = (decode_clo(env9904))[4];
//not do dummy comment
void* lst = (decode_clo(env9904))[3];
//not do dummy comment
void* length = (decode_clo(env9904))[2];
//not do dummy comment
void* _u43 = (decode_clo(env9904))[1];

//if-clause
bool if_guard10572 = is_true(a95079747);
if(if_guard10572)
{
mpz_t* mpzvar10573 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10573, "0", 10);
void* x95089748 = encode_mpz(mpzvar10573);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9609);
arg_buffer[2] = x95089748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9609))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar10574 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10574, "1", 10);
void* a95099749 = encode_mpz(mpzvar10574);

//creating new closure instance
void** clo10576 = alloc_clo(lam9900_fptr, 4);

//setting env list
clo10576[1] = a95099749;
clo10576[2] = _u43;
clo10576[3] = length;
clo10576[4] = kont9609;
void* f96119750 = encode_clo(clo10576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96119750;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9903 = encode_clo(alloc_clo(lam9903_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9905 = arg_buffer[1];
//reading env and args
void* kont9609 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10578 = alloc_clo(lam9903_fptr, 5);

//setting env list
clo10578[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo10578[2] = length;
clo10578[3] = lst;
clo10578[4] = kont9609;
clo10578[5] = cdr;
void* f96129746 = encode_clo(clo10578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96129746;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam9906_fptr() // lam9906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9907 = arg_buffer[1];
//reading env and args
void* x95139757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9613 = (decode_clo(env9907))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9613);
arg_buffer[2] = x95139757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9613))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9906 = encode_clo(alloc_clo(lam9906_fptr, 0));

void* lam9908_fptr() // lam9908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9909 = arg_buffer[1];
//reading env and args
void* a95179765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9613 = (decode_clo(env9909))[3];
//not do dummy comment
void* a95159761 = (decode_clo(env9909))[2];
//not do dummy comment
void* cons = (decode_clo(env9909))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9613;
arg_buffer[3] = a95159761;
arg_buffer[4] = a95179765;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9908 = encode_clo(alloc_clo(lam9908_fptr, 0));

void* lam9910_fptr() // lam9910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9911 = arg_buffer[1];
//reading env and args
void* a95169763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env9911))[5];
//not do dummy comment
void* kont9613 = (decode_clo(env9911))[4];
//not do dummy comment
void* a95159761 = (decode_clo(env9911))[3];
//not do dummy comment
void* proc = (decode_clo(env9911))[2];
//not do dummy comment
void* cons = (decode_clo(env9911))[1];

//creating new closure instance
void** clo10580 = alloc_clo(lam9908_fptr, 3);

//setting env list
clo10580[1] = cons;
clo10580[2] = a95159761;
clo10580[3] = kont9613;
void* f96159764 = encode_clo(clo10580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f96159764;
arg_buffer[3] = proc;
arg_buffer[4] = a95169763;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9910 = encode_clo(alloc_clo(lam9910_fptr, 0));

void* lam9912_fptr() // lam9912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9913 = arg_buffer[1];
//reading env and args
void* a95159761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9913))[6];
//not do dummy comment
void* lst = (decode_clo(env9913))[5];
//not do dummy comment
void* map = (decode_clo(env9913))[4];
//not do dummy comment
void* kont9613 = (decode_clo(env9913))[3];
//not do dummy comment
void* proc = (decode_clo(env9913))[2];
//not do dummy comment
void* cons = (decode_clo(env9913))[1];

//creating new closure instance
void** clo10582 = alloc_clo(lam9910_fptr, 5);

//setting env list
clo10582[1] = cons;
clo10582[2] = proc;
clo10582[3] = a95159761;
clo10582[4] = kont9613;
clo10582[5] = map;
void* f96169762 = encode_clo(clo10582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96169762;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9912 = encode_clo(alloc_clo(lam9912_fptr, 0));

void* lam9914_fptr() // lam9914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9915 = arg_buffer[1];
//reading env and args
void* a95149759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9915))[6];
//not do dummy comment
void* lst = (decode_clo(env9915))[5];
//not do dummy comment
void* map = (decode_clo(env9915))[4];
//not do dummy comment
void* kont9613 = (decode_clo(env9915))[3];
//not do dummy comment
void* proc = (decode_clo(env9915))[2];
//not do dummy comment
void* cons = (decode_clo(env9915))[1];

//creating new closure instance
void** clo10584 = alloc_clo(lam9912_fptr, 6);

//setting env list
clo10584[1] = cons;
clo10584[2] = proc;
clo10584[3] = kont9613;
clo10584[4] = map;
clo10584[5] = lst;
clo10584[6] = cdr;
void* f96179760 = encode_clo(clo10584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f96179760;
arg_buffer[3] = a95149759;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9914 = encode_clo(alloc_clo(lam9914_fptr, 0));

void* lam9916_fptr() // lam9916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9917 = arg_buffer[1];
//reading env and args
void* a95129755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9917))[8];
//not do dummy comment
void* map = (decode_clo(env9917))[7];
//not do dummy comment
void* kont9613 = (decode_clo(env9917))[6];
//not do dummy comment
void* proc = (decode_clo(env9917))[5];
//not do dummy comment
void* car = (decode_clo(env9917))[4];
//not do dummy comment
void* cons = (decode_clo(env9917))[3];
//not do dummy comment
void* list = (decode_clo(env9917))[2];
//not do dummy comment
void* cdr = (decode_clo(env9917))[1];

//if-clause
bool if_guard10585 = is_true(a95129755);
if(if_guard10585)
{

//creating new closure instance
void** clo10587 = alloc_clo(lam9906_fptr, 1);

//setting env list
clo10587[1] = kont9613;
void* f96149756 = encode_clo(clo10587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f96149756;
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
void** clo10589 = alloc_clo(lam9914_fptr, 6);

//setting env list
clo10589[1] = cons;
clo10589[2] = proc;
clo10589[3] = kont9613;
clo10589[4] = map;
clo10589[5] = lst;
clo10589[6] = cdr;
void* f96189758 = encode_clo(clo10589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96189758;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9916 = encode_clo(alloc_clo(lam9916_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9918 = arg_buffer[1];
//reading env and args
void* kont9613 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10591 = alloc_clo(lam9916_fptr, 8);

//setting env list
clo10591[1] = cdr;
clo10591[2] = list;
clo10591[3] = cons;
clo10591[4] = car;
clo10591[5] = proc;
clo10591[6] = kont9613;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo10591[7] = map;
clo10591[8] = lst;
void* f96199754 = encode_clo(clo10591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96199754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam9919_fptr() // lam9919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9920 = arg_buffer[1];
//reading env and args
void* x95199769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9620 = (decode_clo(env9920))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9620);
arg_buffer[2] = x95199769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9620))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9919 = encode_clo(alloc_clo(lam9919_fptr, 0));

void* lam9921_fptr() // lam9921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9922 = arg_buffer[1];
//reading env and args
void* a95249779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95229775 = (decode_clo(env9922))[3];
//not do dummy comment
void* kont9620 = (decode_clo(env9922))[2];
//not do dummy comment
void* cons = (decode_clo(env9922))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9620;
arg_buffer[3] = a95229775;
arg_buffer[4] = a95249779;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9921 = encode_clo(alloc_clo(lam9921_fptr, 0));

void* lam9923_fptr() // lam9923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9924 = arg_buffer[1];
//reading env and args
void* a95239777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env9924))[5];
//not do dummy comment
void* a95229775 = (decode_clo(env9924))[4];
//not do dummy comment
void* cons = (decode_clo(env9924))[3];
//not do dummy comment
void* filter = (decode_clo(env9924))[2];
//not do dummy comment
void* kont9620 = (decode_clo(env9924))[1];

//creating new closure instance
void** clo10593 = alloc_clo(lam9921_fptr, 3);

//setting env list
clo10593[1] = cons;
clo10593[2] = kont9620;
clo10593[3] = a95229775;
void* f96229778 = encode_clo(clo10593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f96229778;
arg_buffer[3] = op;
arg_buffer[4] = a95239777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9923 = encode_clo(alloc_clo(lam9923_fptr, 0));

void* lam9925_fptr() // lam9925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9926 = arg_buffer[1];
//reading env and args
void* a95229775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9926))[6];
//not do dummy comment
void* lst = (decode_clo(env9926))[5];
//not do dummy comment
void* op = (decode_clo(env9926))[4];
//not do dummy comment
void* cons = (decode_clo(env9926))[3];
//not do dummy comment
void* filter = (decode_clo(env9926))[2];
//not do dummy comment
void* kont9620 = (decode_clo(env9926))[1];

//creating new closure instance
void** clo10595 = alloc_clo(lam9923_fptr, 5);

//setting env list
clo10595[1] = kont9620;
clo10595[2] = filter;
clo10595[3] = cons;
clo10595[4] = a95229775;
clo10595[5] = op;
void* f96239776 = encode_clo(clo10595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96239776;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9925 = encode_clo(alloc_clo(lam9925_fptr, 0));

void* lam9927_fptr() // lam9927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9928 = arg_buffer[1];
//reading env and args
void* a95259781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env9928))[3];
//not do dummy comment
void* filter = (decode_clo(env9928))[2];
//not do dummy comment
void* kont9620 = (decode_clo(env9928))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont9620;
arg_buffer[3] = op;
arg_buffer[4] = a95259781;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9927 = encode_clo(alloc_clo(lam9927_fptr, 0));

void* lam9929_fptr() // lam9929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9930 = arg_buffer[1];
//reading env and args
void* a95219773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9930))[7];
//not do dummy comment
void* lst = (decode_clo(env9930))[6];
//not do dummy comment
void* op = (decode_clo(env9930))[5];
//not do dummy comment
void* cons = (decode_clo(env9930))[4];
//not do dummy comment
void* filter = (decode_clo(env9930))[3];
//not do dummy comment
void* kont9620 = (decode_clo(env9930))[2];
//not do dummy comment
void* car = (decode_clo(env9930))[1];

//if-clause
bool if_guard10596 = is_true(a95219773);
if(if_guard10596)
{

//creating new closure instance
void** clo10598 = alloc_clo(lam9925_fptr, 6);

//setting env list
clo10598[1] = kont9620;
clo10598[2] = filter;
clo10598[3] = cons;
clo10598[4] = op;
clo10598[5] = lst;
clo10598[6] = cdr;
void* f96249774 = encode_clo(clo10598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96249774;
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
void** clo10600 = alloc_clo(lam9927_fptr, 3);

//setting env list
clo10600[1] = kont9620;
clo10600[2] = filter;
clo10600[3] = op;
void* f96259780 = encode_clo(clo10600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96259780;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9929 = encode_clo(alloc_clo(lam9929_fptr, 0));

void* lam9931_fptr() // lam9931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9932 = arg_buffer[1];
//reading env and args
void* a95209771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9932))[7];
//not do dummy comment
void* lst = (decode_clo(env9932))[6];
//not do dummy comment
void* op = (decode_clo(env9932))[5];
//not do dummy comment
void* cons = (decode_clo(env9932))[4];
//not do dummy comment
void* filter = (decode_clo(env9932))[3];
//not do dummy comment
void* kont9620 = (decode_clo(env9932))[2];
//not do dummy comment
void* car = (decode_clo(env9932))[1];

//creating new closure instance
void** clo10602 = alloc_clo(lam9929_fptr, 7);

//setting env list
clo10602[1] = car;
clo10602[2] = kont9620;
clo10602[3] = filter;
clo10602[4] = cons;
clo10602[5] = op;
clo10602[6] = lst;
clo10602[7] = cdr;
void* f96269772 = encode_clo(clo10602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f96269772;
arg_buffer[3] = a95209771;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9931 = encode_clo(alloc_clo(lam9931_fptr, 0));

void* lam9933_fptr() // lam9933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9934 = arg_buffer[1];
//reading env and args
void* a95189767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9934))[8];
//not do dummy comment
void* op = (decode_clo(env9934))[7];
//not do dummy comment
void* cons = (decode_clo(env9934))[6];
//not do dummy comment
void* list = (decode_clo(env9934))[5];
//not do dummy comment
void* cdr = (decode_clo(env9934))[4];
//not do dummy comment
void* filter = (decode_clo(env9934))[3];
//not do dummy comment
void* kont9620 = (decode_clo(env9934))[2];
//not do dummy comment
void* car = (decode_clo(env9934))[1];

//if-clause
bool if_guard10603 = is_true(a95189767);
if(if_guard10603)
{

//creating new closure instance
void** clo10605 = alloc_clo(lam9919_fptr, 1);

//setting env list
clo10605[1] = kont9620;
void* f96219768 = encode_clo(clo10605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f96219768;
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
void** clo10607 = alloc_clo(lam9931_fptr, 7);

//setting env list
clo10607[1] = car;
clo10607[2] = kont9620;
clo10607[3] = filter;
clo10607[4] = cons;
clo10607[5] = op;
clo10607[6] = lst;
clo10607[7] = cdr;
void* f96279770 = encode_clo(clo10607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96279770;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9933 = encode_clo(alloc_clo(lam9933_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9935 = arg_buffer[1];
//reading env and args
void* kont9620 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10609 = alloc_clo(lam9933_fptr, 8);

//setting env list
clo10609[1] = car;
clo10609[2] = kont9620;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo10609[3] = filter;
clo10609[4] = cdr;
clo10609[5] = list;
clo10609[6] = cons;
clo10609[7] = op;
clo10609[8] = lst;
void* f96289766 = encode_clo(clo10609);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96289766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam9936_fptr() // lam9936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9937 = arg_buffer[1];
//reading env and args
void* a95309789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95289786 = (decode_clo(env9937))[3];
//not do dummy comment
void* drop = (decode_clo(env9937))[2];
//not do dummy comment
void* kont9629 = (decode_clo(env9937))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont9629;
arg_buffer[3] = a95289786;
arg_buffer[4] = a95309789;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9936 = encode_clo(alloc_clo(lam9936_fptr, 0));

void* lam9939_fptr() // lam9939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9940 = arg_buffer[1];
//reading env and args
void* a95289786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env9940))[4];
//not do dummy comment
void* kont9629 = (decode_clo(env9940))[3];
//not do dummy comment
void* n = (decode_clo(env9940))[2];
//not do dummy comment
void* _u45 = (decode_clo(env9940))[1];
mpz_t* mpzvar10610 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10610, "1", 10);
void* a95299787 = encode_mpz(mpzvar10610);

//creating new closure instance
void** clo10612 = alloc_clo(lam9936_fptr, 3);

//setting env list
clo10612[1] = kont9629;
clo10612[2] = drop;
clo10612[3] = a95289786;
void* f96309788 = encode_clo(clo10612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f96309788;
arg_buffer[3] = n;
arg_buffer[4] = a95299787;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9939 = encode_clo(alloc_clo(lam9939_fptr, 0));

void* lam9941_fptr() // lam9941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9942 = arg_buffer[1];
//reading env and args
void* a95279784 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9942))[6];
//not do dummy comment
void* kont9629 = (decode_clo(env9942))[5];
//not do dummy comment
void* n = (decode_clo(env9942))[4];
//not do dummy comment
void* _u45 = (decode_clo(env9942))[3];
//not do dummy comment
void* lst = (decode_clo(env9942))[2];
//not do dummy comment
void* drop = (decode_clo(env9942))[1];

//if-clause
bool if_guard10613 = is_true(a95279784);
if(if_guard10613)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9629);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9629))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10615 = alloc_clo(lam9939_fptr, 4);

//setting env list
clo10615[1] = _u45;
clo10615[2] = n;
clo10615[3] = kont9629;
clo10615[4] = drop;
void* f96319785 = encode_clo(clo10615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96319785;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9941 = encode_clo(alloc_clo(lam9941_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9944 = arg_buffer[1];
//reading env and args
void* kont9629 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar10616 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10616, "0", 10);
void* a95269782 = encode_mpz(mpzvar10616);

//creating new closure instance
void** clo10618 = alloc_clo(lam9941_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo10618[1] = drop;
clo10618[2] = lst;
clo10618[3] = _u45;
clo10618[4] = n;
clo10618[5] = kont9629;
clo10618[6] = cdr;
void* f96329783 = encode_clo(clo10618);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f96329783;
arg_buffer[3] = n;
arg_buffer[4] = a95269782;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam9945_fptr() // lam9945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9946 = arg_buffer[1];
//reading env and args
void* a95349797 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env9946))[3];
//not do dummy comment
void* a95329793 = (decode_clo(env9946))[2];
//not do dummy comment
void* kont9633 = (decode_clo(env9946))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont9633;
arg_buffer[3] = a95329793;
arg_buffer[4] = a95349797;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9945 = encode_clo(alloc_clo(lam9945_fptr, 0));

void* lam9947_fptr() // lam9947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9948 = arg_buffer[1];
//reading env and args
void* a95339795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env9948))[5];
//not do dummy comment
void* a95329793 = (decode_clo(env9948))[4];
//not do dummy comment
void* kont9633 = (decode_clo(env9948))[3];
//not do dummy comment
void* proc = (decode_clo(env9948))[2];
//not do dummy comment
void* acc = (decode_clo(env9948))[1];

//creating new closure instance
void** clo10620 = alloc_clo(lam9945_fptr, 3);

//setting env list
clo10620[1] = kont9633;
clo10620[2] = a95329793;
clo10620[3] = proc;
void* f96349796 = encode_clo(clo10620);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f96349796;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a95339795;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9947 = encode_clo(alloc_clo(lam9947_fptr, 0));

void* lam9949_fptr() // lam9949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9950 = arg_buffer[1];
//reading env and args
void* a95329793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9950))[6];
//not do dummy comment
void* kont9633 = (decode_clo(env9950))[5];
//not do dummy comment
void* foldr = (decode_clo(env9950))[4];
//not do dummy comment
void* lst = (decode_clo(env9950))[3];
//not do dummy comment
void* proc = (decode_clo(env9950))[2];
//not do dummy comment
void* acc = (decode_clo(env9950))[1];

//creating new closure instance
void** clo10622 = alloc_clo(lam9947_fptr, 5);

//setting env list
clo10622[1] = acc;
clo10622[2] = proc;
clo10622[3] = kont9633;
clo10622[4] = a95329793;
clo10622[5] = foldr;
void* f96359794 = encode_clo(clo10622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96359794;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9949 = encode_clo(alloc_clo(lam9949_fptr, 0));

void* lam9951_fptr() // lam9951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9952 = arg_buffer[1];
//reading env and args
void* a95319791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9952))[7];
//not do dummy comment
void* kont9633 = (decode_clo(env9952))[6];
//not do dummy comment
void* car = (decode_clo(env9952))[5];
//not do dummy comment
void* foldr = (decode_clo(env9952))[4];
//not do dummy comment
void* lst = (decode_clo(env9952))[3];
//not do dummy comment
void* proc = (decode_clo(env9952))[2];
//not do dummy comment
void* acc = (decode_clo(env9952))[1];

//if-clause
bool if_guard10623 = is_true(a95319791);
if(if_guard10623)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9633);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9633))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10625 = alloc_clo(lam9949_fptr, 6);

//setting env list
clo10625[1] = acc;
clo10625[2] = proc;
clo10625[3] = lst;
clo10625[4] = foldr;
clo10625[5] = kont9633;
clo10625[6] = cdr;
void* f96369792 = encode_clo(clo10625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96369792;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9951 = encode_clo(alloc_clo(lam9951_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9953 = arg_buffer[1];
//reading env and args
void* kont9633 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10627 = alloc_clo(lam9951_fptr, 7);

//setting env list
clo10627[1] = acc;
clo10627[2] = proc;
clo10627[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo10627[4] = foldr;
clo10627[5] = car;
clo10627[6] = kont9633;
clo10627[7] = cdr;
void* f96379790 = encode_clo(clo10627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96379790;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam9954_fptr() // lam9954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9955 = arg_buffer[1];
//reading env and args
void* a95389805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95369801 = (decode_clo(env9955))[3];
//not do dummy comment
void* cons = (decode_clo(env9955))[2];
//not do dummy comment
void* kont9638 = (decode_clo(env9955))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9638;
arg_buffer[3] = a95369801;
arg_buffer[4] = a95389805;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9954 = encode_clo(alloc_clo(lam9954_fptr, 0));

void* lam9956_fptr() // lam9956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9957 = arg_buffer[1];
//reading env and args
void* a95379803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95369801 = (decode_clo(env9957))[5];
//not do dummy comment
void* append = (decode_clo(env9957))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9957))[3];
//not do dummy comment
void* cons = (decode_clo(env9957))[2];
//not do dummy comment
void* kont9638 = (decode_clo(env9957))[1];

//creating new closure instance
void** clo10629 = alloc_clo(lam9954_fptr, 3);

//setting env list
clo10629[1] = kont9638;
clo10629[2] = cons;
clo10629[3] = a95369801;
void* f96399804 = encode_clo(clo10629);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f96399804;
arg_buffer[3] = a95379803;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9956 = encode_clo(alloc_clo(lam9956_fptr, 0));

void* lam9958_fptr() // lam9958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9959 = arg_buffer[1];
//reading env and args
void* a95369801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9959))[6];
//not do dummy comment
void* append = (decode_clo(env9959))[5];
//not do dummy comment
void* lst2 = (decode_clo(env9959))[4];
//not do dummy comment
void* lst1 = (decode_clo(env9959))[3];
//not do dummy comment
void* cons = (decode_clo(env9959))[2];
//not do dummy comment
void* kont9638 = (decode_clo(env9959))[1];

//creating new closure instance
void** clo10631 = alloc_clo(lam9956_fptr, 5);

//setting env list
clo10631[1] = kont9638;
clo10631[2] = cons;
clo10631[3] = lst2;
clo10631[4] = append;
clo10631[5] = a95369801;
void* f96409802 = encode_clo(clo10631);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96409802;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9958 = encode_clo(alloc_clo(lam9958_fptr, 0));

void* lam9960_fptr() // lam9960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9961 = arg_buffer[1];
//reading env and args
void* a95359799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9961))[7];
//not do dummy comment
void* append = (decode_clo(env9961))[6];
//not do dummy comment
void* lst2 = (decode_clo(env9961))[5];
//not do dummy comment
void* cons = (decode_clo(env9961))[4];
//not do dummy comment
void* kont9638 = (decode_clo(env9961))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9961))[2];
//not do dummy comment
void* car = (decode_clo(env9961))[1];

//if-clause
bool if_guard10632 = is_true(a95359799);
if(if_guard10632)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9638);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9638))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10634 = alloc_clo(lam9958_fptr, 6);

//setting env list
clo10634[1] = kont9638;
clo10634[2] = cons;
clo10634[3] = lst1;
clo10634[4] = lst2;
clo10634[5] = append;
clo10634[6] = cdr;
void* f96419800 = encode_clo(clo10634);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96419800;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9960 = encode_clo(alloc_clo(lam9960_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9962 = arg_buffer[1];
//reading env and args
void* kont9638 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10636 = alloc_clo(lam9960_fptr, 7);

//setting env list
clo10636[1] = car;
clo10636[2] = lst1;
clo10636[3] = kont9638;
clo10636[4] = cons;
clo10636[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo10636[6] = append;
clo10636[7] = cdr;
void* f96429798 = encode_clo(clo10636);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96429798;
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
void* _9963 = arg_buffer[1];
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

void* kont96439806 = prim_car(lst);
void* lst9807 = prim_cdr(lst);
void* x95399808 = apply_prim_hash(lst9807);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96439806);
arg_buffer[2] = x95399808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96439806))[0]);
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
void* _9964 = arg_buffer[1];
//reading env and args
void* kont9645 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x95409809 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9645);
arg_buffer[2] = x95409809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9645))[0]);
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
void* _9965 = arg_buffer[1];
//reading env and args
void* kont9646 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x95419810 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9646);
arg_buffer[2] = x95419810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9646))[0]);
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
void* _9966 = arg_buffer[1];
//reading env and args
void* kont9647 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x95429811 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9647);
arg_buffer[2] = x95429811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9647))[0]);
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
void* _9967 = arg_buffer[1];
//reading env and args
void* kont9648 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x95439812 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9648);
arg_buffer[2] = x95439812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9648))[0]);
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
void* _9971 = arg_buffer[1];
//reading env and args
void* kont9649 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar10637 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10637, "100", 10);
void* a95449813 = encode_mpz(mpzvar10637);
mpz_t* mpzvar10638 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10638, "2", 10);
void* a95459814 = encode_mpz(mpzvar10638);
mpz_t* mpzvar10639 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10639, "1", 10);
void* a95469815 = encode_mpz(mpzvar10639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = kont9649;
arg_buffer[3] = a95449813;
arg_buffer[4] = a95459814;
arg_buffer[5] = a95469815;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam9972_fptr() // lam9972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9973 = arg_buffer[1];
//reading env and args
void* x95479817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9650 = (decode_clo(env9973))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9650);
arg_buffer[2] = x95479817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9650))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9972 = encode_clo(alloc_clo(lam9972_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9974 = arg_buffer[1];
//reading env and args
void* kont9650 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo10641 = alloc_clo(lam9972_fptr, 1);

//setting env list
clo10641[1] = kont9650;
void* f96519816 = encode_clo(clo10641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f96519816;
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

