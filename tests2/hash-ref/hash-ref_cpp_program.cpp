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
void* _40828 = arg_buffer[1];
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

void* kont4056340664 = prim_car(lst);
void* lst40665 = prim_cdr(lst);
void* x4047340666 = apply_prim__u43(lst40665);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4056340664);
arg_buffer[2] = x4047340666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4056340664))[0]);
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
void* _40829 = arg_buffer[1];
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

void* kont4056540667 = prim_car(lst);
void* lst40668 = prim_cdr(lst);
void* x4047440669 = apply_prim__u45(lst40668);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4056540667);
arg_buffer[2] = x4047440669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4056540667))[0]);
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
void* _40830 = arg_buffer[1];
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

void* kont4056740670 = prim_car(lst);
void* lst40671 = prim_cdr(lst);
void* x4047540672 = apply_prim__u42(lst40671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4056740670);
arg_buffer[2] = x4047540672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4056740670))[0]);
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
void* _40831 = arg_buffer[1];
//reading env and args
void* kont40569 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4047640673 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40569);
arg_buffer[2] = x4047640673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40569))[0]);
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
void* _40832 = arg_buffer[1];
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

void* kont4057040674 = prim_car(lst);
void* lst40675 = prim_cdr(lst);
void* x4047740676 = apply_prim__u47(lst40675);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4057040674);
arg_buffer[2] = x4047740676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4057040674))[0]);
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
void* _40833 = arg_buffer[1];
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

void* kont4057240677 = prim_car(lst);
void* lst40678 = prim_cdr(lst);
void* x4047840679 = apply_prim__u61(lst40678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4057240677);
arg_buffer[2] = x4047840679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4057240677))[0]);
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
void* _40834 = arg_buffer[1];
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

void* kont4057440680 = prim_car(lst);
void* lst40681 = prim_cdr(lst);
void* x4047940682 = apply_prim__u62(lst40681);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4057440680);
arg_buffer[2] = x4047940682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4057440680))[0]);
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
void* _40835 = arg_buffer[1];
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

void* kont4057640683 = prim_car(lst);
void* lst40684 = prim_cdr(lst);
void* x4048040685 = apply_prim__u60(lst40684);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4057640683);
arg_buffer[2] = x4048040685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4057640683))[0]);
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
void* _40836 = arg_buffer[1];
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

void* kont4057840686 = prim_car(lst);
void* lst40687 = prim_cdr(lst);
void* x4048140688 = apply_prim__u60_u61(lst40687);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4057840686);
arg_buffer[2] = x4048140688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4057840686))[0]);
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
void* _40837 = arg_buffer[1];
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

void* kont4058040689 = prim_car(lst);
void* lst40690 = prim_cdr(lst);
void* x4048240691 = apply_prim__u62_u61(lst40690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4058040689);
arg_buffer[2] = x4048240691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4058040689))[0]);
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
void* _40838 = arg_buffer[1];
//reading env and args
void* kont40582 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4048340692 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40582);
arg_buffer[2] = x4048340692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40582))[0]);
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
void* _40839 = arg_buffer[1];
//reading env and args
void* kont40583 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4048440693 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40583);
arg_buffer[2] = x4048440693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40583))[0]);
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
void* _40840 = arg_buffer[1];
//reading env and args
void* kont40584 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4048540694 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40584);
arg_buffer[2] = x4048540694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40584))[0]);
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
void* _40841 = arg_buffer[1];
//reading env and args
void* kont40585 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4048640695 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40585);
arg_buffer[2] = x4048640695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40585))[0]);
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
void* _40842 = arg_buffer[1];
//reading env and args
void* kont40586 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4048740696 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40586);
arg_buffer[2] = x4048740696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40586))[0]);
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
void* _40843 = arg_buffer[1];
//reading env and args
void* kont40587 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4048840697 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40587);
arg_buffer[2] = x4048840697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40587))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam40844_fptr() // lam40844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40845 = arg_buffer[1];
//reading env and args
void* a4049140701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4048940698 = (decode_clo(env40845))[3];
//not do dummy comment
void* kont40588 = (decode_clo(env40845))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env40845))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont40588;
arg_buffer[3] = a4048940698;
arg_buffer[4] = a4049140701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40844 = encode_clo(alloc_clo(lam40844_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40848 = arg_buffer[1];
//reading env and args
void* kont40588 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar41771 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41771, "0", 10);
void* a4048940698 = encode_mpz(mpzvar41771);
mpz_t* mpzvar41772 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41772, "2", 10);
void* a4049040699 = encode_mpz(mpzvar41772);

//creating new closure instance
void** clo41774 = alloc_clo(lam40844_fptr, 3);

//setting env list
clo41774[1] = equal_u63;
clo41774[2] = kont40588;
clo41774[3] = a4048940698;
void* f4058940700 = encode_clo(clo41774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4058940700;
arg_buffer[3] = x;
arg_buffer[4] = a4049040699;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam40849_fptr() // lam40849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40850 = arg_buffer[1];
//reading env and args
void* a4049440705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env40850))[3];
//not do dummy comment
void* kont40590 = (decode_clo(env40850))[2];
//not do dummy comment
void* a4049240702 = (decode_clo(env40850))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont40590;
arg_buffer[3] = a4049240702;
arg_buffer[4] = a4049440705;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40849 = encode_clo(alloc_clo(lam40849_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40853 = arg_buffer[1];
//reading env and args
void* kont40590 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar41775 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41775, "1", 10);
void* a4049240702 = encode_mpz(mpzvar41775);
mpz_t* mpzvar41776 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41776, "2", 10);
void* a4049340703 = encode_mpz(mpzvar41776);

//creating new closure instance
void** clo41778 = alloc_clo(lam40849_fptr, 3);

//setting env list
clo41778[1] = a4049240702;
clo41778[2] = kont40590;
clo41778[3] = equal_u63;
void* f4059140704 = encode_clo(clo41778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4059140704;
arg_buffer[3] = x;
arg_buffer[4] = a4049340703;
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
void* _40854 = arg_buffer[1];
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

void* kont4059240706 = prim_car(x);
void* x40707 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4059240706);
arg_buffer[2] = x40707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4059240706))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam40857_fptr() // lam40857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40858 = arg_buffer[1];
//reading env and args
void* a4050040717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env40858))[3];
//not do dummy comment
void* kont40594 = (decode_clo(env40858))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env40858))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont40594;
arg_buffer[3] = x;
arg_buffer[4] = a4050040717;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40857 = encode_clo(alloc_clo(lam40857_fptr, 0));

void* lam40859_fptr() // lam40859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40860 = arg_buffer[1];
//reading env and args
void* a4049840714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40860))[5];
//not do dummy comment
void* lst = (decode_clo(env40860))[4];
//not do dummy comment
void* x = (decode_clo(env40860))[3];
//not do dummy comment
void* kont40594 = (decode_clo(env40860))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env40860))[1];

//if-clause
bool if_guard41779 = is_true(a4049840714);
if(if_guard41779)
{
void* x4049940715 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40594);
arg_buffer[2] = x4049940715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40594))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41781 = alloc_clo(lam40857_fptr, 3);

//setting env list
clo41781[1] = member_u63;
clo41781[2] = kont40594;
clo41781[3] = x;
void* f4059540716 = encode_clo(clo41781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4059540716;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40859 = encode_clo(alloc_clo(lam40859_fptr, 0));

void* lam40861_fptr() // lam40861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40862 = arg_buffer[1];
//reading env and args
void* a4049740712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40862))[6];
//not do dummy comment
void* lst = (decode_clo(env40862))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env40862))[4];
//not do dummy comment
void* x = (decode_clo(env40862))[3];
//not do dummy comment
void* kont40594 = (decode_clo(env40862))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env40862))[1];

//creating new closure instance
void** clo41783 = alloc_clo(lam40859_fptr, 5);

//setting env list
clo41783[1] = member_u63;
clo41783[2] = kont40594;
clo41783[3] = x;
clo41783[4] = lst;
clo41783[5] = cdr;
void* f4059640713 = encode_clo(clo41783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4059640713;
arg_buffer[3] = a4049740712;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40861 = encode_clo(alloc_clo(lam40861_fptr, 0));

void* lam40863_fptr() // lam40863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40864 = arg_buffer[1];
//reading env and args
void* a4049540709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40864))[7];
//not do dummy comment
void* lst = (decode_clo(env40864))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env40864))[5];
//not do dummy comment
void* x = (decode_clo(env40864))[4];
//not do dummy comment
void* car = (decode_clo(env40864))[3];
//not do dummy comment
void* kont40594 = (decode_clo(env40864))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env40864))[1];

//if-clause
bool if_guard41784 = is_true(a4049540709);
if(if_guard41784)
{
void* x4049640710 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40594);
arg_buffer[2] = x4049640710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40594))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41786 = alloc_clo(lam40861_fptr, 6);

//setting env list
clo41786[1] = member_u63;
clo41786[2] = kont40594;
clo41786[3] = x;
clo41786[4] = equal_u63;
clo41786[5] = lst;
clo41786[6] = cdr;
void* f4059740711 = encode_clo(clo41786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4059740711;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40863 = encode_clo(alloc_clo(lam40863_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40865 = arg_buffer[1];
//reading env and args
void* kont40594 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41788 = alloc_clo(lam40863_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo41788[1] = member_u63;
clo41788[2] = kont40594;
clo41788[3] = car;
clo41788[4] = x;
clo41788[5] = equal_u63;
clo41788[6] = lst;
clo41788[7] = cdr;
void* f4059840708 = encode_clo(clo41788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4059840708;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam40866_fptr() // lam40866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40867 = arg_buffer[1];
//reading env and args
void* a4050440725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40599 = (decode_clo(env40867))[4];
//not do dummy comment
void* fun = (decode_clo(env40867))[3];
//not do dummy comment
void* foldl = (decode_clo(env40867))[2];
//not do dummy comment
void* a4050340723 = (decode_clo(env40867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont40599;
arg_buffer[3] = fun;
arg_buffer[4] = a4050340723;
arg_buffer[5] = a4050440725;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40866 = encode_clo(alloc_clo(lam40866_fptr, 0));

void* lam40868_fptr() // lam40868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40869 = arg_buffer[1];
//reading env and args
void* a4050340723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40869))[5];
//not do dummy comment
void* kont40599 = (decode_clo(env40869))[4];
//not do dummy comment
void* lst = (decode_clo(env40869))[3];
//not do dummy comment
void* fun = (decode_clo(env40869))[2];
//not do dummy comment
void* foldl = (decode_clo(env40869))[1];

//creating new closure instance
void** clo41790 = alloc_clo(lam40866_fptr, 4);

//setting env list
clo41790[1] = a4050340723;
clo41790[2] = foldl;
clo41790[3] = fun;
clo41790[4] = kont40599;
void* f4060040724 = encode_clo(clo41790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4060040724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40868 = encode_clo(alloc_clo(lam40868_fptr, 0));

void* lam40870_fptr() // lam40870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40871 = arg_buffer[1];
//reading env and args
void* a4050240721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40871))[6];
//not do dummy comment
void* kont40599 = (decode_clo(env40871))[5];
//not do dummy comment
void* lst = (decode_clo(env40871))[4];
//not do dummy comment
void* fun = (decode_clo(env40871))[3];
//not do dummy comment
void* acc = (decode_clo(env40871))[2];
//not do dummy comment
void* foldl = (decode_clo(env40871))[1];

//creating new closure instance
void** clo41792 = alloc_clo(lam40868_fptr, 5);

//setting env list
clo41792[1] = foldl;
clo41792[2] = fun;
clo41792[3] = lst;
clo41792[4] = kont40599;
clo41792[5] = cdr;
void* f4060140722 = encode_clo(clo41792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4060140722;
arg_buffer[3] = a4050240721;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40870 = encode_clo(alloc_clo(lam40870_fptr, 0));

void* lam40872_fptr() // lam40872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40873 = arg_buffer[1];
//reading env and args
void* a4050140719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40873))[7];
//not do dummy comment
void* kont40599 = (decode_clo(env40873))[6];
//not do dummy comment
void* lst = (decode_clo(env40873))[5];
//not do dummy comment
void* fun = (decode_clo(env40873))[4];
//not do dummy comment
void* acc = (decode_clo(env40873))[3];
//not do dummy comment
void* car = (decode_clo(env40873))[2];
//not do dummy comment
void* foldl = (decode_clo(env40873))[1];

//if-clause
bool if_guard41793 = is_true(a4050140719);
if(if_guard41793)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40599);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40599))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41795 = alloc_clo(lam40870_fptr, 6);

//setting env list
clo41795[1] = foldl;
clo41795[2] = acc;
clo41795[3] = fun;
clo41795[4] = lst;
clo41795[5] = kont40599;
clo41795[6] = cdr;
void* f4060240720 = encode_clo(clo41795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4060240720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40872 = encode_clo(alloc_clo(lam40872_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40874 = arg_buffer[1];
//reading env and args
void* kont40599 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo41797 = alloc_clo(lam40872_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo41797[1] = foldl;
clo41797[2] = car;
clo41797[3] = acc;
clo41797[4] = fun;
clo41797[5] = lst;
clo41797[6] = kont40599;
clo41797[7] = cdr;
void* f4060340718 = encode_clo(clo41797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4060340718;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam40875_fptr() // lam40875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40876 = arg_buffer[1];
//reading env and args
void* a4050840733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4050640729 = (decode_clo(env40876))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40876))[2];
//not do dummy comment
void* kont40604 = (decode_clo(env40876))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont40604;
arg_buffer[3] = a4050640729;
arg_buffer[4] = a4050840733;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40875 = encode_clo(alloc_clo(lam40875_fptr, 0));

void* lam40877_fptr() // lam40877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40878 = arg_buffer[1];
//reading env and args
void* a4050740731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4050640729 = (decode_clo(env40878))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40878))[4];
//not do dummy comment
void* kont40604 = (decode_clo(env40878))[3];
//not do dummy comment
void* lst2 = (decode_clo(env40878))[2];
//not do dummy comment
void* cons = (decode_clo(env40878))[1];

//creating new closure instance
void** clo41799 = alloc_clo(lam40875_fptr, 3);

//setting env list
clo41799[1] = kont40604;
clo41799[2] = reverse_u45helper;
clo41799[3] = a4050640729;
void* f4060540732 = encode_clo(clo41799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4060540732;
arg_buffer[3] = a4050740731;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40877 = encode_clo(alloc_clo(lam40877_fptr, 0));

void* lam40879_fptr() // lam40879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40880 = arg_buffer[1];
//reading env and args
void* a4050640729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40880))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40880))[5];
//not do dummy comment
void* kont40604 = (decode_clo(env40880))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40880))[3];
//not do dummy comment
void* car = (decode_clo(env40880))[2];
//not do dummy comment
void* cons = (decode_clo(env40880))[1];

//creating new closure instance
void** clo41801 = alloc_clo(lam40877_fptr, 5);

//setting env list
clo41801[1] = cons;
clo41801[2] = lst2;
clo41801[3] = kont40604;
clo41801[4] = reverse_u45helper;
clo41801[5] = a4050640729;
void* f4060640730 = encode_clo(clo41801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4060640730;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40879 = encode_clo(alloc_clo(lam40879_fptr, 0));

void* lam40881_fptr() // lam40881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40882 = arg_buffer[1];
//reading env and args
void* a4050540727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40882))[7];
//not do dummy comment
void* lst = (decode_clo(env40882))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40882))[5];
//not do dummy comment
void* kont40604 = (decode_clo(env40882))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40882))[3];
//not do dummy comment
void* car = (decode_clo(env40882))[2];
//not do dummy comment
void* cons = (decode_clo(env40882))[1];

//if-clause
bool if_guard41802 = is_true(a4050540727);
if(if_guard41802)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40604);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40604))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41804 = alloc_clo(lam40879_fptr, 6);

//setting env list
clo41804[1] = cons;
clo41804[2] = car;
clo41804[3] = lst2;
clo41804[4] = kont40604;
clo41804[5] = reverse_u45helper;
clo41804[6] = lst;
void* f4060740728 = encode_clo(clo41804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4060740728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40881 = encode_clo(alloc_clo(lam40881_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40883 = arg_buffer[1];
//reading env and args
void* kont40604 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41806 = alloc_clo(lam40881_fptr, 7);

//setting env list
clo41806[1] = cons;
clo41806[2] = car;
clo41806[3] = lst2;
clo41806[4] = kont40604;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo41806[5] = reverse_u45helper;
clo41806[6] = lst;
clo41806[7] = cdr;
void* f4060840726 = encode_clo(clo41806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4060840726;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam40884_fptr() // lam40884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40885 = arg_buffer[1];
//reading env and args
void* a4050940735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40885))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40885))[2];
//not do dummy comment
void* kont40609 = (decode_clo(env40885))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont40609;
arg_buffer[3] = lst;
arg_buffer[4] = a4050940735;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40884 = encode_clo(alloc_clo(lam40884_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40886 = arg_buffer[1];
//reading env and args
void* kont40609 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo41808 = alloc_clo(lam40884_fptr, 3);

//setting env list
clo41808[1] = kont40609;
clo41808[2] = reverse_u45helper;
clo41808[3] = lst;
void* f4061040734 = encode_clo(clo41808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4061040734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam40887_fptr() // lam40887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40888 = arg_buffer[1];
//reading env and args
void* x4051240740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40611 = (decode_clo(env40888))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40611);
arg_buffer[2] = x4051240740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40611))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40887 = encode_clo(alloc_clo(lam40887_fptr, 0));

void* lam40889_fptr() // lam40889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40890 = arg_buffer[1];
//reading env and args
void* a4051740749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4051340742 = (decode_clo(env40890))[4];
//not do dummy comment
void* a4051540745 = (decode_clo(env40890))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40890))[2];
//not do dummy comment
void* kont40611 = (decode_clo(env40890))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont40611;
arg_buffer[3] = a4051340742;
arg_buffer[4] = a4051540745;
arg_buffer[5] = a4051740749;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40889 = encode_clo(alloc_clo(lam40889_fptr, 0));

void* lam40891_fptr() // lam40891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40892 = arg_buffer[1];
//reading env and args
void* a4051640747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4051340742 = (decode_clo(env40892))[6];
//not do dummy comment
void* a4051540745 = (decode_clo(env40892))[5];
//not do dummy comment
void* cons = (decode_clo(env40892))[4];
//not do dummy comment
void* kont40611 = (decode_clo(env40892))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40892))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40892))[1];

//creating new closure instance
void** clo41810 = alloc_clo(lam40889_fptr, 4);

//setting env list
clo41810[1] = kont40611;
clo41810[2] = take_u45helper;
clo41810[3] = a4051540745;
clo41810[4] = a4051340742;
void* f4061340748 = encode_clo(clo41810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4061340748;
arg_buffer[3] = a4051640747;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40891 = encode_clo(alloc_clo(lam40891_fptr, 0));

void* lam40893_fptr() // lam40893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40894 = arg_buffer[1];
//reading env and args
void* a4051540745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4051340742 = (decode_clo(env40894))[7];
//not do dummy comment
void* lst = (decode_clo(env40894))[6];
//not do dummy comment
void* car = (decode_clo(env40894))[5];
//not do dummy comment
void* cons = (decode_clo(env40894))[4];
//not do dummy comment
void* kont40611 = (decode_clo(env40894))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40894))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40894))[1];

//creating new closure instance
void** clo41812 = alloc_clo(lam40891_fptr, 6);

//setting env list
clo41812[1] = lst2;
clo41812[2] = take_u45helper;
clo41812[3] = kont40611;
clo41812[4] = cons;
clo41812[5] = a4051540745;
clo41812[6] = a4051340742;
void* f4061440746 = encode_clo(clo41812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4061440746;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40893 = encode_clo(alloc_clo(lam40893_fptr, 0));

void* lam40896_fptr() // lam40896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40897 = arg_buffer[1];
//reading env and args
void* a4051340742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40897))[8];
//not do dummy comment
void* cons = (decode_clo(env40897))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env40897))[6];
//not do dummy comment
void* lst2 = (decode_clo(env40897))[5];
//not do dummy comment
void* n = (decode_clo(env40897))[4];
//not do dummy comment
void* car = (decode_clo(env40897))[3];
//not do dummy comment
void* kont40611 = (decode_clo(env40897))[2];
//not do dummy comment
void* _u45 = (decode_clo(env40897))[1];
mpz_t* mpzvar41813 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41813, "1", 10);
void* a4051440743 = encode_mpz(mpzvar41813);

//creating new closure instance
void** clo41815 = alloc_clo(lam40893_fptr, 7);

//setting env list
clo41815[1] = lst2;
clo41815[2] = take_u45helper;
clo41815[3] = kont40611;
clo41815[4] = cons;
clo41815[5] = car;
clo41815[6] = lst;
clo41815[7] = a4051340742;
void* f4061540744 = encode_clo(clo41815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4061540744;
arg_buffer[3] = n;
arg_buffer[4] = a4051440743;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40896 = encode_clo(alloc_clo(lam40896_fptr, 0));

void* lam40898_fptr() // lam40898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40899 = arg_buffer[1];
//reading env and args
void* a4051140738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40899))[10];
//not do dummy comment
void* lst = (decode_clo(env40899))[9];
//not do dummy comment
void* reverse = (decode_clo(env40899))[8];
//not do dummy comment
void* cons = (decode_clo(env40899))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env40899))[6];
//not do dummy comment
void* lst2 = (decode_clo(env40899))[5];
//not do dummy comment
void* n = (decode_clo(env40899))[4];
//not do dummy comment
void* car = (decode_clo(env40899))[3];
//not do dummy comment
void* kont40611 = (decode_clo(env40899))[2];
//not do dummy comment
void* _u45 = (decode_clo(env40899))[1];

//if-clause
bool if_guard41816 = is_true(a4051140738);
if(if_guard41816)
{

//creating new closure instance
void** clo41818 = alloc_clo(lam40887_fptr, 1);

//setting env list
clo41818[1] = kont40611;
void* f4061240739 = encode_clo(clo41818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4061240739;
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
void** clo41820 = alloc_clo(lam40896_fptr, 8);

//setting env list
clo41820[1] = _u45;
clo41820[2] = kont40611;
clo41820[3] = car;
clo41820[4] = n;
clo41820[5] = lst2;
clo41820[6] = take_u45helper;
clo41820[7] = cons;
clo41820[8] = lst;
void* f4061640741 = encode_clo(clo41820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4061640741;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40898 = encode_clo(alloc_clo(lam40898_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40901 = arg_buffer[1];
//reading env and args
void* kont40611 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar41821 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41821, "0", 10);
void* a4051040736 = encode_mpz(mpzvar41821);

//creating new closure instance
void** clo41823 = alloc_clo(lam40898_fptr, 10);

//setting env list
clo41823[1] = _u45;
clo41823[2] = kont40611;
clo41823[3] = car;
clo41823[4] = n;
clo41823[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo41823[6] = take_u45helper;
clo41823[7] = cons;
clo41823[8] = reverse;
clo41823[9] = lst;
clo41823[10] = cdr;
void* f4061740737 = encode_clo(clo41823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4061740737;
arg_buffer[3] = n;
arg_buffer[4] = a4051040736;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam40902_fptr() // lam40902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40903 = arg_buffer[1];
//reading env and args
void* a4051840751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40903))[4];
//not do dummy comment
void* kont40618 = (decode_clo(env40903))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40903))[2];
//not do dummy comment
void* n = (decode_clo(env40903))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont40618;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4051840751;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40902 = encode_clo(alloc_clo(lam40902_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40904 = arg_buffer[1];
//reading env and args
void* kont40618 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41825 = alloc_clo(lam40902_fptr, 4);

//setting env list
clo41825[1] = n;
clo41825[2] = take_u45helper;
clo41825[3] = kont40618;
clo41825[4] = lst;
void* f4061940750 = encode_clo(clo41825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4061940750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam40906_fptr() // lam40906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40907 = arg_buffer[1];
//reading env and args
void* a4052340759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40620 = (decode_clo(env40907))[3];
//not do dummy comment
void* _u43 = (decode_clo(env40907))[2];
//not do dummy comment
void* a4052140755 = (decode_clo(env40907))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont40620;
arg_buffer[3] = a4052140755;
arg_buffer[4] = a4052340759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40906 = encode_clo(alloc_clo(lam40906_fptr, 0));

void* lam40908_fptr() // lam40908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40909 = arg_buffer[1];
//reading env and args
void* a4052240757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env40909))[4];
//not do dummy comment
void* kont40620 = (decode_clo(env40909))[3];
//not do dummy comment
void* _u43 = (decode_clo(env40909))[2];
//not do dummy comment
void* a4052140755 = (decode_clo(env40909))[1];

//creating new closure instance
void** clo41827 = alloc_clo(lam40906_fptr, 3);

//setting env list
clo41827[1] = a4052140755;
clo41827[2] = _u43;
clo41827[3] = kont40620;
void* f4062140758 = encode_clo(clo41827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4062140758;
arg_buffer[3] = a4052240757;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40908 = encode_clo(alloc_clo(lam40908_fptr, 0));

void* lam40911_fptr() // lam40911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40912 = arg_buffer[1];
//reading env and args
void* a4051940753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40912))[5];
//not do dummy comment
void* lst = (decode_clo(env40912))[4];
//not do dummy comment
void* length = (decode_clo(env40912))[3];
//not do dummy comment
void* kont40620 = (decode_clo(env40912))[2];
//not do dummy comment
void* _u43 = (decode_clo(env40912))[1];

//if-clause
bool if_guard41828 = is_true(a4051940753);
if(if_guard41828)
{
mpz_t* mpzvar41829 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41829, "0", 10);
void* x4052040754 = encode_mpz(mpzvar41829);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40620);
arg_buffer[2] = x4052040754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40620))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar41830 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41830, "1", 10);
void* a4052140755 = encode_mpz(mpzvar41830);

//creating new closure instance
void** clo41832 = alloc_clo(lam40908_fptr, 4);

//setting env list
clo41832[1] = a4052140755;
clo41832[2] = _u43;
clo41832[3] = kont40620;
clo41832[4] = length;
void* f4062240756 = encode_clo(clo41832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4062240756;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40911 = encode_clo(alloc_clo(lam40911_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40913 = arg_buffer[1];
//reading env and args
void* kont40620 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo41834 = alloc_clo(lam40911_fptr, 5);

//setting env list
clo41834[1] = _u43;
clo41834[2] = kont40620;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo41834[3] = length;
clo41834[4] = lst;
clo41834[5] = cdr;
void* f4062340752 = encode_clo(clo41834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4062340752;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam40914_fptr() // lam40914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40915 = arg_buffer[1];
//reading env and args
void* x4052540763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40624 = (decode_clo(env40915))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40624);
arg_buffer[2] = x4052540763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40624))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40914 = encode_clo(alloc_clo(lam40914_fptr, 0));

void* lam40916_fptr() // lam40916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40917 = arg_buffer[1];
//reading env and args
void* a4052940771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4052740767 = (decode_clo(env40917))[3];
//not do dummy comment
void* kont40624 = (decode_clo(env40917))[2];
//not do dummy comment
void* cons = (decode_clo(env40917))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont40624;
arg_buffer[3] = a4052740767;
arg_buffer[4] = a4052940771;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40916 = encode_clo(alloc_clo(lam40916_fptr, 0));

void* lam40918_fptr() // lam40918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40919 = arg_buffer[1];
//reading env and args
void* a4052840769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env40919))[5];
//not do dummy comment
void* kont40624 = (decode_clo(env40919))[4];
//not do dummy comment
void* cons = (decode_clo(env40919))[3];
//not do dummy comment
void* proc = (decode_clo(env40919))[2];
//not do dummy comment
void* a4052740767 = (decode_clo(env40919))[1];

//creating new closure instance
void** clo41836 = alloc_clo(lam40916_fptr, 3);

//setting env list
clo41836[1] = cons;
clo41836[2] = kont40624;
clo41836[3] = a4052740767;
void* f4062640770 = encode_clo(clo41836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4062640770;
arg_buffer[3] = proc;
arg_buffer[4] = a4052840769;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40918 = encode_clo(alloc_clo(lam40918_fptr, 0));

void* lam40920_fptr() // lam40920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40921 = arg_buffer[1];
//reading env and args
void* a4052740767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40921))[6];
//not do dummy comment
void* lst = (decode_clo(env40921))[5];
//not do dummy comment
void* map = (decode_clo(env40921))[4];
//not do dummy comment
void* proc = (decode_clo(env40921))[3];
//not do dummy comment
void* kont40624 = (decode_clo(env40921))[2];
//not do dummy comment
void* cons = (decode_clo(env40921))[1];

//creating new closure instance
void** clo41838 = alloc_clo(lam40918_fptr, 5);

//setting env list
clo41838[1] = a4052740767;
clo41838[2] = proc;
clo41838[3] = cons;
clo41838[4] = kont40624;
clo41838[5] = map;
void* f4062740768 = encode_clo(clo41838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4062740768;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40920 = encode_clo(alloc_clo(lam40920_fptr, 0));

void* lam40922_fptr() // lam40922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40923 = arg_buffer[1];
//reading env and args
void* a4052640765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40923))[6];
//not do dummy comment
void* lst = (decode_clo(env40923))[5];
//not do dummy comment
void* map = (decode_clo(env40923))[4];
//not do dummy comment
void* proc = (decode_clo(env40923))[3];
//not do dummy comment
void* kont40624 = (decode_clo(env40923))[2];
//not do dummy comment
void* cons = (decode_clo(env40923))[1];

//creating new closure instance
void** clo41840 = alloc_clo(lam40920_fptr, 6);

//setting env list
clo41840[1] = cons;
clo41840[2] = kont40624;
clo41840[3] = proc;
clo41840[4] = map;
clo41840[5] = lst;
clo41840[6] = cdr;
void* f4062840766 = encode_clo(clo41840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4062840766;
arg_buffer[3] = a4052640765;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40922 = encode_clo(alloc_clo(lam40922_fptr, 0));

void* lam40924_fptr() // lam40924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40925 = arg_buffer[1];
//reading env and args
void* a4052440761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40925))[8];
//not do dummy comment
void* map = (decode_clo(env40925))[7];
//not do dummy comment
void* proc = (decode_clo(env40925))[6];
//not do dummy comment
void* kont40624 = (decode_clo(env40925))[5];
//not do dummy comment
void* car = (decode_clo(env40925))[4];
//not do dummy comment
void* cons = (decode_clo(env40925))[3];
//not do dummy comment
void* list = (decode_clo(env40925))[2];
//not do dummy comment
void* cdr = (decode_clo(env40925))[1];

//if-clause
bool if_guard41841 = is_true(a4052440761);
if(if_guard41841)
{

//creating new closure instance
void** clo41843 = alloc_clo(lam40914_fptr, 1);

//setting env list
clo41843[1] = kont40624;
void* f4062540762 = encode_clo(clo41843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4062540762;
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
void** clo41845 = alloc_clo(lam40922_fptr, 6);

//setting env list
clo41845[1] = cons;
clo41845[2] = kont40624;
clo41845[3] = proc;
clo41845[4] = map;
clo41845[5] = lst;
clo41845[6] = cdr;
void* f4062940764 = encode_clo(clo41845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4062940764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40924 = encode_clo(alloc_clo(lam40924_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40926 = arg_buffer[1];
//reading env and args
void* kont40624 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41847 = alloc_clo(lam40924_fptr, 8);

//setting env list
clo41847[1] = cdr;
clo41847[2] = list;
clo41847[3] = cons;
clo41847[4] = car;
clo41847[5] = kont40624;
clo41847[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo41847[7] = map;
clo41847[8] = lst;
void* f4063040760 = encode_clo(clo41847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4063040760;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam40927_fptr() // lam40927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40928 = arg_buffer[1];
//reading env and args
void* x4053140775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40631 = (decode_clo(env40928))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40631);
arg_buffer[2] = x4053140775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40631))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40927 = encode_clo(alloc_clo(lam40927_fptr, 0));

void* lam40929_fptr() // lam40929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40930 = arg_buffer[1];
//reading env and args
void* a4053640785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40631 = (decode_clo(env40930))[3];
//not do dummy comment
void* a4053440781 = (decode_clo(env40930))[2];
//not do dummy comment
void* cons = (decode_clo(env40930))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont40631;
arg_buffer[3] = a4053440781;
arg_buffer[4] = a4053640785;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40929 = encode_clo(alloc_clo(lam40929_fptr, 0));

void* lam40931_fptr() // lam40931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40932 = arg_buffer[1];
//reading env and args
void* a4053540783 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40631 = (decode_clo(env40932))[5];
//not do dummy comment
void* op = (decode_clo(env40932))[4];
//not do dummy comment
void* a4053440781 = (decode_clo(env40932))[3];
//not do dummy comment
void* filter = (decode_clo(env40932))[2];
//not do dummy comment
void* cons = (decode_clo(env40932))[1];

//creating new closure instance
void** clo41849 = alloc_clo(lam40929_fptr, 3);

//setting env list
clo41849[1] = cons;
clo41849[2] = a4053440781;
clo41849[3] = kont40631;
void* f4063340784 = encode_clo(clo41849);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4063340784;
arg_buffer[3] = op;
arg_buffer[4] = a4053540783;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40931 = encode_clo(alloc_clo(lam40931_fptr, 0));

void* lam40933_fptr() // lam40933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40934 = arg_buffer[1];
//reading env and args
void* a4053440781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40934))[6];
//not do dummy comment
void* kont40631 = (decode_clo(env40934))[5];
//not do dummy comment
void* lst = (decode_clo(env40934))[4];
//not do dummy comment
void* op = (decode_clo(env40934))[3];
//not do dummy comment
void* filter = (decode_clo(env40934))[2];
//not do dummy comment
void* cons = (decode_clo(env40934))[1];

//creating new closure instance
void** clo41851 = alloc_clo(lam40931_fptr, 5);

//setting env list
clo41851[1] = cons;
clo41851[2] = filter;
clo41851[3] = a4053440781;
clo41851[4] = op;
clo41851[5] = kont40631;
void* f4063440782 = encode_clo(clo41851);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4063440782;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40933 = encode_clo(alloc_clo(lam40933_fptr, 0));

void* lam40935_fptr() // lam40935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40936 = arg_buffer[1];
//reading env and args
void* a4053740787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40631 = (decode_clo(env40936))[3];
//not do dummy comment
void* op = (decode_clo(env40936))[2];
//not do dummy comment
void* filter = (decode_clo(env40936))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont40631;
arg_buffer[3] = op;
arg_buffer[4] = a4053740787;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40935 = encode_clo(alloc_clo(lam40935_fptr, 0));

void* lam40937_fptr() // lam40937 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40938 = arg_buffer[1];
//reading env and args
void* a4053340779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40938))[7];
//not do dummy comment
void* kont40631 = (decode_clo(env40938))[6];
//not do dummy comment
void* lst = (decode_clo(env40938))[5];
//not do dummy comment
void* op = (decode_clo(env40938))[4];
//not do dummy comment
void* cons = (decode_clo(env40938))[3];
//not do dummy comment
void* filter = (decode_clo(env40938))[2];
//not do dummy comment
void* car = (decode_clo(env40938))[1];

//if-clause
bool if_guard41852 = is_true(a4053340779);
if(if_guard41852)
{

//creating new closure instance
void** clo41854 = alloc_clo(lam40933_fptr, 6);

//setting env list
clo41854[1] = cons;
clo41854[2] = filter;
clo41854[3] = op;
clo41854[4] = lst;
clo41854[5] = kont40631;
clo41854[6] = cdr;
void* f4063540780 = encode_clo(clo41854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4063540780;
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
void** clo41856 = alloc_clo(lam40935_fptr, 3);

//setting env list
clo41856[1] = filter;
clo41856[2] = op;
clo41856[3] = kont40631;
void* f4063640786 = encode_clo(clo41856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4063640786;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40937 = encode_clo(alloc_clo(lam40937_fptr, 0));

void* lam40939_fptr() // lam40939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40940 = arg_buffer[1];
//reading env and args
void* a4053240777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40940))[7];
//not do dummy comment
void* kont40631 = (decode_clo(env40940))[6];
//not do dummy comment
void* lst = (decode_clo(env40940))[5];
//not do dummy comment
void* op = (decode_clo(env40940))[4];
//not do dummy comment
void* cons = (decode_clo(env40940))[3];
//not do dummy comment
void* filter = (decode_clo(env40940))[2];
//not do dummy comment
void* car = (decode_clo(env40940))[1];

//creating new closure instance
void** clo41858 = alloc_clo(lam40937_fptr, 7);

//setting env list
clo41858[1] = car;
clo41858[2] = filter;
clo41858[3] = cons;
clo41858[4] = op;
clo41858[5] = lst;
clo41858[6] = kont40631;
clo41858[7] = cdr;
void* f4063740778 = encode_clo(clo41858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4063740778;
arg_buffer[3] = a4053240777;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40939 = encode_clo(alloc_clo(lam40939_fptr, 0));

void* lam40941_fptr() // lam40941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40942 = arg_buffer[1];
//reading env and args
void* a4053040773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40631 = (decode_clo(env40942))[8];
//not do dummy comment
void* lst = (decode_clo(env40942))[7];
//not do dummy comment
void* op = (decode_clo(env40942))[6];
//not do dummy comment
void* cons = (decode_clo(env40942))[5];
//not do dummy comment
void* list = (decode_clo(env40942))[4];
//not do dummy comment
void* cdr = (decode_clo(env40942))[3];
//not do dummy comment
void* filter = (decode_clo(env40942))[2];
//not do dummy comment
void* car = (decode_clo(env40942))[1];

//if-clause
bool if_guard41859 = is_true(a4053040773);
if(if_guard41859)
{

//creating new closure instance
void** clo41861 = alloc_clo(lam40927_fptr, 1);

//setting env list
clo41861[1] = kont40631;
void* f4063240774 = encode_clo(clo41861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4063240774;
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
void** clo41863 = alloc_clo(lam40939_fptr, 7);

//setting env list
clo41863[1] = car;
clo41863[2] = filter;
clo41863[3] = cons;
clo41863[4] = op;
clo41863[5] = lst;
clo41863[6] = kont40631;
clo41863[7] = cdr;
void* f4063840776 = encode_clo(clo41863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4063840776;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40941 = encode_clo(alloc_clo(lam40941_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40943 = arg_buffer[1];
//reading env and args
void* kont40631 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41865 = alloc_clo(lam40941_fptr, 8);

//setting env list
clo41865[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo41865[2] = filter;
clo41865[3] = cdr;
clo41865[4] = list;
clo41865[5] = cons;
clo41865[6] = op;
clo41865[7] = lst;
clo41865[8] = kont40631;
void* f4063940772 = encode_clo(clo41865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4063940772;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam40944_fptr() // lam40944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40945 = arg_buffer[1];
//reading env and args
void* a4054240795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40640 = (decode_clo(env40945))[3];
//not do dummy comment
void* a4054040792 = (decode_clo(env40945))[2];
//not do dummy comment
void* drop = (decode_clo(env40945))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont40640;
arg_buffer[3] = a4054040792;
arg_buffer[4] = a4054240795;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40944 = encode_clo(alloc_clo(lam40944_fptr, 0));

void* lam40947_fptr() // lam40947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40948 = arg_buffer[1];
//reading env and args
void* a4054040792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env40948))[4];
//not do dummy comment
void* kont40640 = (decode_clo(env40948))[3];
//not do dummy comment
void* n = (decode_clo(env40948))[2];
//not do dummy comment
void* _u45 = (decode_clo(env40948))[1];
mpz_t* mpzvar41866 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41866, "1", 10);
void* a4054140793 = encode_mpz(mpzvar41866);

//creating new closure instance
void** clo41868 = alloc_clo(lam40944_fptr, 3);

//setting env list
clo41868[1] = drop;
clo41868[2] = a4054040792;
clo41868[3] = kont40640;
void* f4064140794 = encode_clo(clo41868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4064140794;
arg_buffer[3] = n;
arg_buffer[4] = a4054140793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40947 = encode_clo(alloc_clo(lam40947_fptr, 0));

void* lam40949_fptr() // lam40949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40950 = arg_buffer[1];
//reading env and args
void* a4053940790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40950))[6];
//not do dummy comment
void* kont40640 = (decode_clo(env40950))[5];
//not do dummy comment
void* n = (decode_clo(env40950))[4];
//not do dummy comment
void* _u45 = (decode_clo(env40950))[3];
//not do dummy comment
void* lst = (decode_clo(env40950))[2];
//not do dummy comment
void* drop = (decode_clo(env40950))[1];

//if-clause
bool if_guard41869 = is_true(a4053940790);
if(if_guard41869)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40640);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40640))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41871 = alloc_clo(lam40947_fptr, 4);

//setting env list
clo41871[1] = _u45;
clo41871[2] = n;
clo41871[3] = kont40640;
clo41871[4] = drop;
void* f4064240791 = encode_clo(clo41871);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4064240791;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40949 = encode_clo(alloc_clo(lam40949_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40952 = arg_buffer[1];
//reading env and args
void* kont40640 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar41872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41872, "0", 10);
void* a4053840788 = encode_mpz(mpzvar41872);

//creating new closure instance
void** clo41874 = alloc_clo(lam40949_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo41874[1] = drop;
clo41874[2] = lst;
clo41874[3] = _u45;
clo41874[4] = n;
clo41874[5] = kont40640;
clo41874[6] = cdr;
void* f4064340789 = encode_clo(clo41874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4064340789;
arg_buffer[3] = n;
arg_buffer[4] = a4053840788;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam40953_fptr() // lam40953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40954 = arg_buffer[1];
//reading env and args
void* a4054640803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40644 = (decode_clo(env40954))[3];
//not do dummy comment
void* proc = (decode_clo(env40954))[2];
//not do dummy comment
void* a4054440799 = (decode_clo(env40954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont40644;
arg_buffer[3] = a4054440799;
arg_buffer[4] = a4054640803;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40953 = encode_clo(alloc_clo(lam40953_fptr, 0));

void* lam40955_fptr() // lam40955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40956 = arg_buffer[1];
//reading env and args
void* a4054540801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40644 = (decode_clo(env40956))[5];
//not do dummy comment
void* foldr = (decode_clo(env40956))[4];
//not do dummy comment
void* acc = (decode_clo(env40956))[3];
//not do dummy comment
void* proc = (decode_clo(env40956))[2];
//not do dummy comment
void* a4054440799 = (decode_clo(env40956))[1];

//creating new closure instance
void** clo41876 = alloc_clo(lam40953_fptr, 3);

//setting env list
clo41876[1] = a4054440799;
clo41876[2] = proc;
clo41876[3] = kont40644;
void* f4064540802 = encode_clo(clo41876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4064540802;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4054540801;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40955 = encode_clo(alloc_clo(lam40955_fptr, 0));

void* lam40957_fptr() // lam40957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40958 = arg_buffer[1];
//reading env and args
void* a4054440799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40644 = (decode_clo(env40958))[6];
//not do dummy comment
void* cdr = (decode_clo(env40958))[5];
//not do dummy comment
void* foldr = (decode_clo(env40958))[4];
//not do dummy comment
void* lst = (decode_clo(env40958))[3];
//not do dummy comment
void* proc = (decode_clo(env40958))[2];
//not do dummy comment
void* acc = (decode_clo(env40958))[1];

//creating new closure instance
void** clo41878 = alloc_clo(lam40955_fptr, 5);

//setting env list
clo41878[1] = a4054440799;
clo41878[2] = proc;
clo41878[3] = acc;
clo41878[4] = foldr;
clo41878[5] = kont40644;
void* f4064640800 = encode_clo(clo41878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4064640800;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40957 = encode_clo(alloc_clo(lam40957_fptr, 0));

void* lam40959_fptr() // lam40959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40960 = arg_buffer[1];
//reading env and args
void* a4054340797 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env40960))[7];
//not do dummy comment
void* kont40644 = (decode_clo(env40960))[6];
//not do dummy comment
void* cdr = (decode_clo(env40960))[5];
//not do dummy comment
void* foldr = (decode_clo(env40960))[4];
//not do dummy comment
void* lst = (decode_clo(env40960))[3];
//not do dummy comment
void* proc = (decode_clo(env40960))[2];
//not do dummy comment
void* acc = (decode_clo(env40960))[1];

//if-clause
bool if_guard41879 = is_true(a4054340797);
if(if_guard41879)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40644);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40644))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41881 = alloc_clo(lam40957_fptr, 6);

//setting env list
clo41881[1] = acc;
clo41881[2] = proc;
clo41881[3] = lst;
clo41881[4] = foldr;
clo41881[5] = cdr;
clo41881[6] = kont40644;
void* f4064740798 = encode_clo(clo41881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4064740798;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40959 = encode_clo(alloc_clo(lam40959_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40961 = arg_buffer[1];
//reading env and args
void* kont40644 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo41883 = alloc_clo(lam40959_fptr, 7);

//setting env list
clo41883[1] = acc;
clo41883[2] = proc;
clo41883[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo41883[4] = foldr;
clo41883[5] = cdr;
clo41883[6] = kont40644;
clo41883[7] = car;
void* f4064840796 = encode_clo(clo41883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4064840796;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam40962_fptr() // lam40962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40963 = arg_buffer[1];
//reading env and args
void* a4055040811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4054840807 = (decode_clo(env40963))[3];
//not do dummy comment
void* kont40649 = (decode_clo(env40963))[2];
//not do dummy comment
void* cons = (decode_clo(env40963))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont40649;
arg_buffer[3] = a4054840807;
arg_buffer[4] = a4055040811;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40962 = encode_clo(alloc_clo(lam40962_fptr, 0));

void* lam40964_fptr() // lam40964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40965 = arg_buffer[1];
//reading env and args
void* a4054940809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4054840807 = (decode_clo(env40965))[5];
//not do dummy comment
void* kont40649 = (decode_clo(env40965))[4];
//not do dummy comment
void* append = (decode_clo(env40965))[3];
//not do dummy comment
void* lst2 = (decode_clo(env40965))[2];
//not do dummy comment
void* cons = (decode_clo(env40965))[1];

//creating new closure instance
void** clo41885 = alloc_clo(lam40962_fptr, 3);

//setting env list
clo41885[1] = cons;
clo41885[2] = kont40649;
clo41885[3] = a4054840807;
void* f4065040810 = encode_clo(clo41885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4065040810;
arg_buffer[3] = a4054940809;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40964 = encode_clo(alloc_clo(lam40964_fptr, 0));

void* lam40966_fptr() // lam40966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40967 = arg_buffer[1];
//reading env and args
void* a4054840807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40967))[6];
//not do dummy comment
void* kont40649 = (decode_clo(env40967))[5];
//not do dummy comment
void* append = (decode_clo(env40967))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40967))[3];
//not do dummy comment
void* lst1 = (decode_clo(env40967))[2];
//not do dummy comment
void* cons = (decode_clo(env40967))[1];

//creating new closure instance
void** clo41887 = alloc_clo(lam40964_fptr, 5);

//setting env list
clo41887[1] = cons;
clo41887[2] = lst2;
clo41887[3] = append;
clo41887[4] = kont40649;
clo41887[5] = a4054840807;
void* f4065140808 = encode_clo(clo41887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4065140808;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40966 = encode_clo(alloc_clo(lam40966_fptr, 0));

void* lam40968_fptr() // lam40968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40969 = arg_buffer[1];
//reading env and args
void* a4054740805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40969))[7];
//not do dummy comment
void* kont40649 = (decode_clo(env40969))[6];
//not do dummy comment
void* append = (decode_clo(env40969))[5];
//not do dummy comment
void* lst2 = (decode_clo(env40969))[4];
//not do dummy comment
void* cons = (decode_clo(env40969))[3];
//not do dummy comment
void* lst1 = (decode_clo(env40969))[2];
//not do dummy comment
void* car = (decode_clo(env40969))[1];

//if-clause
bool if_guard41888 = is_true(a4054740805);
if(if_guard41888)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40649);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41890 = alloc_clo(lam40966_fptr, 6);

//setting env list
clo41890[1] = cons;
clo41890[2] = lst1;
clo41890[3] = lst2;
clo41890[4] = append;
clo41890[5] = kont40649;
clo41890[6] = cdr;
void* f4065240806 = encode_clo(clo41890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4065240806;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40968 = encode_clo(alloc_clo(lam40968_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40970 = arg_buffer[1];
//reading env and args
void* kont40649 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41892 = alloc_clo(lam40968_fptr, 7);

//setting env list
clo41892[1] = car;
clo41892[2] = lst1;
clo41892[3] = cons;
clo41892[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo41892[5] = append;
clo41892[6] = kont40649;
clo41892[7] = cdr;
void* f4065340804 = encode_clo(clo41892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4065340804;
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
void* _40971 = arg_buffer[1];
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

void* kont4065440812 = prim_car(lst);
void* lst40813 = prim_cdr(lst);
void* x4055140814 = apply_prim_hash(lst40813);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4065440812);
arg_buffer[2] = x4055140814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4065440812))[0]);
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
void* _40972 = arg_buffer[1];
//reading env and args
void* kont40656 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4055240815 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40656);
arg_buffer[2] = x4055240815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40656))[0]);
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
void* _40973 = arg_buffer[1];
//reading env and args
void* kont40657 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4055340816 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40657);
arg_buffer[2] = x4055340816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40657))[0]);
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
void* _40974 = arg_buffer[1];
//reading env and args
void* kont40658 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4055440817 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40658);
arg_buffer[2] = x4055440817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40658))[0]);
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
void* _40975 = arg_buffer[1];
//reading env and args
void* kont40659 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4055540818 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40659);
arg_buffer[2] = x4055540818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40659))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam40977_fptr() // lam40977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40978 = arg_buffer[1];
//reading env and args
void* a4056040824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40660 = (decode_clo(env40978))[2];
//not do dummy comment
void* hash_u45ref = (decode_clo(env40978))[1];
mpz_t* mpzvar41893 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41893, "10", 10);
void* a4056140825 = encode_mpz(mpzvar41893);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont40660;
arg_buffer[3] = a4056040824;
arg_buffer[4] = a4056140825;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40977 = encode_clo(alloc_clo(lam40977_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40983 = arg_buffer[1];
//reading env and args
void* kont40660 = arg_buffer[2];
//Dummy comment
void* a4055640819 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar41894 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41894, "80", 10);
void* a4055740820 = encode_mpz(mpzvar41894);
mpz_t* mpzvar41895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41895, "10", 10);
void* a4055840821 = encode_mpz(mpzvar41895);
void* a4055940822 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo41897 = alloc_clo(lam40977_fptr, 2);

//setting env list
clo41897[1] = hash_u45ref;
clo41897[2] = kont40660;
void* f4066140823 = encode_clo(clo41897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4066140823;
arg_buffer[3] = a4055640819;
arg_buffer[4] = a4055740820;
arg_buffer[5] = a4055840821;
arg_buffer[6] = a4055940822;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam40984_fptr() // lam40984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40985 = arg_buffer[1];
//reading env and args
void* x4056240827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40662 = (decode_clo(env40985))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40662);
arg_buffer[2] = x4056240827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40662))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40984 = encode_clo(alloc_clo(lam40984_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40986 = arg_buffer[1];
//reading env and args
void* kont40662 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo41899 = alloc_clo(lam40984_fptr, 1);

//setting env list
clo41899[1] = kont40662;
void* f4066340826 = encode_clo(clo41899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4066340826;
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

