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
void* _42868 = arg_buffer[1];
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

void* kont4260342704 = prim_car(lst);
void* lst42705 = prim_cdr(lst);
void* x4251342706 = apply_prim__u43(lst42705);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4260342704);
arg_buffer[2] = x4251342706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4260342704))[0]);
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
void* _42869 = arg_buffer[1];
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

void* kont4260542707 = prim_car(lst);
void* lst42708 = prim_cdr(lst);
void* x4251442709 = apply_prim__u45(lst42708);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4260542707);
arg_buffer[2] = x4251442709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4260542707))[0]);
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
void* _42870 = arg_buffer[1];
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

void* kont4260742710 = prim_car(lst);
void* lst42711 = prim_cdr(lst);
void* x4251542712 = apply_prim__u42(lst42711);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4260742710);
arg_buffer[2] = x4251542712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4260742710))[0]);
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
void* _42871 = arg_buffer[1];
//reading env and args
void* kont42609 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4251642713 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42609);
arg_buffer[2] = x4251642713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42609))[0]);
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
void* _42872 = arg_buffer[1];
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

void* kont4261042714 = prim_car(lst);
void* lst42715 = prim_cdr(lst);
void* x4251742716 = apply_prim__u47(lst42715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4261042714);
arg_buffer[2] = x4251742716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4261042714))[0]);
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
void* _42873 = arg_buffer[1];
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

void* kont4261242717 = prim_car(lst);
void* lst42718 = prim_cdr(lst);
void* x4251842719 = apply_prim__u61(lst42718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4261242717);
arg_buffer[2] = x4251842719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4261242717))[0]);
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
void* _42874 = arg_buffer[1];
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

void* kont4261442720 = prim_car(lst);
void* lst42721 = prim_cdr(lst);
void* x4251942722 = apply_prim__u62(lst42721);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4261442720);
arg_buffer[2] = x4251942722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4261442720))[0]);
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
void* _42875 = arg_buffer[1];
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

void* kont4261642723 = prim_car(lst);
void* lst42724 = prim_cdr(lst);
void* x4252042725 = apply_prim__u60(lst42724);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4261642723);
arg_buffer[2] = x4252042725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4261642723))[0]);
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
void* _42876 = arg_buffer[1];
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

void* kont4261842726 = prim_car(lst);
void* lst42727 = prim_cdr(lst);
void* x4252142728 = apply_prim__u60_u61(lst42727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4261842726);
arg_buffer[2] = x4252142728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4261842726))[0]);
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
void* _42877 = arg_buffer[1];
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

void* kont4262042729 = prim_car(lst);
void* lst42730 = prim_cdr(lst);
void* x4252242731 = apply_prim__u62_u61(lst42730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4262042729);
arg_buffer[2] = x4252242731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4262042729))[0]);
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
void* _42878 = arg_buffer[1];
//reading env and args
void* kont42622 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4252342732 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42622);
arg_buffer[2] = x4252342732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42622))[0]);
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
void* _42879 = arg_buffer[1];
//reading env and args
void* kont42623 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4252442733 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42623);
arg_buffer[2] = x4252442733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42623))[0]);
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
void* _42880 = arg_buffer[1];
//reading env and args
void* kont42624 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4252542734 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42624);
arg_buffer[2] = x4252542734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42624))[0]);
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
void* _42881 = arg_buffer[1];
//reading env and args
void* kont42625 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4252642735 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42625);
arg_buffer[2] = x4252642735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42625))[0]);
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
void* _42882 = arg_buffer[1];
//reading env and args
void* kont42626 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4252742736 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42626);
arg_buffer[2] = x4252742736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42626))[0]);
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
void* _42883 = arg_buffer[1];
//reading env and args
void* kont42627 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4252842737 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42627);
arg_buffer[2] = x4252842737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42627))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam42884_fptr() // lam42884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42885 = arg_buffer[1];
//reading env and args
void* a4253142741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4252942738 = (decode_clo(env42885))[3];
//not do dummy comment
void* kont42628 = (decode_clo(env42885))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env42885))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42628;
arg_buffer[3] = a4252942738;
arg_buffer[4] = a4253142741;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42884 = encode_clo(alloc_clo(lam42884_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42888 = arg_buffer[1];
//reading env and args
void* kont42628 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar43867 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43867, "0", 10);
void* a4252942738 = encode_mpz(mpzvar43867);
mpz_t* mpzvar43868 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43868, "2", 10);
void* a4253042739 = encode_mpz(mpzvar43868);

//creating new closure instance
void** clo43870 = alloc_clo(lam42884_fptr, 3);

//setting env list
clo43870[1] = equal_u63;
clo43870[2] = kont42628;
clo43870[3] = a4252942738;
void* f4262942740 = encode_clo(clo43870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4262942740;
arg_buffer[3] = x;
arg_buffer[4] = a4253042739;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam42889_fptr() // lam42889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42890 = arg_buffer[1];
//reading env and args
void* a4253442745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env42890))[3];
//not do dummy comment
void* kont42630 = (decode_clo(env42890))[2];
//not do dummy comment
void* a4253242742 = (decode_clo(env42890))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42630;
arg_buffer[3] = a4253242742;
arg_buffer[4] = a4253442745;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42889 = encode_clo(alloc_clo(lam42889_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42893 = arg_buffer[1];
//reading env and args
void* kont42630 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar43871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43871, "1", 10);
void* a4253242742 = encode_mpz(mpzvar43871);
mpz_t* mpzvar43872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43872, "2", 10);
void* a4253342743 = encode_mpz(mpzvar43872);

//creating new closure instance
void** clo43874 = alloc_clo(lam42889_fptr, 3);

//setting env list
clo43874[1] = a4253242742;
clo43874[2] = kont42630;
clo43874[3] = equal_u63;
void* f4263142744 = encode_clo(clo43874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4263142744;
arg_buffer[3] = x;
arg_buffer[4] = a4253342743;
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
void* _42894 = arg_buffer[1];
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

void* kont4263242746 = prim_car(x);
void* x42747 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4263242746);
arg_buffer[2] = x42747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4263242746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam42897_fptr() // lam42897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42898 = arg_buffer[1];
//reading env and args
void* a4254042757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env42898))[3];
//not do dummy comment
void* kont42634 = (decode_clo(env42898))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42898))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont42634;
arg_buffer[3] = x;
arg_buffer[4] = a4254042757;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a4253842754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42900))[5];
//not do dummy comment
void* lst = (decode_clo(env42900))[4];
//not do dummy comment
void* x = (decode_clo(env42900))[3];
//not do dummy comment
void* kont42634 = (decode_clo(env42900))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42900))[1];

//if-clause
bool if_guard43875 = is_true(a4253842754);
if(if_guard43875)
{
void* x4253942755 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42634);
arg_buffer[2] = x4253942755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42634))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43877 = alloc_clo(lam42897_fptr, 3);

//setting env list
clo43877[1] = member_u63;
clo43877[2] = kont42634;
clo43877[3] = x;
void* f4263542756 = encode_clo(clo43877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4263542756;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42899 = encode_clo(alloc_clo(lam42899_fptr, 0));

void* lam42901_fptr() // lam42901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42902 = arg_buffer[1];
//reading env and args
void* a4253742752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42902))[6];
//not do dummy comment
void* lst = (decode_clo(env42902))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env42902))[4];
//not do dummy comment
void* x = (decode_clo(env42902))[3];
//not do dummy comment
void* kont42634 = (decode_clo(env42902))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42902))[1];

//creating new closure instance
void** clo43879 = alloc_clo(lam42899_fptr, 5);

//setting env list
clo43879[1] = member_u63;
clo43879[2] = kont42634;
clo43879[3] = x;
clo43879[4] = lst;
clo43879[5] = cdr;
void* f4263642753 = encode_clo(clo43879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4263642753;
arg_buffer[3] = a4253742752;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42901 = encode_clo(alloc_clo(lam42901_fptr, 0));

void* lam42903_fptr() // lam42903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42904 = arg_buffer[1];
//reading env and args
void* a4253542749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42904))[7];
//not do dummy comment
void* lst = (decode_clo(env42904))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env42904))[5];
//not do dummy comment
void* x = (decode_clo(env42904))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env42904))[3];
//not do dummy comment
void* kont42634 = (decode_clo(env42904))[2];
//not do dummy comment
void* car = (decode_clo(env42904))[1];

//if-clause
bool if_guard43880 = is_true(a4253542749);
if(if_guard43880)
{
void* x4253642750 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42634);
arg_buffer[2] = x4253642750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42634))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43882 = alloc_clo(lam42901_fptr, 6);

//setting env list
clo43882[1] = member_u63;
clo43882[2] = kont42634;
clo43882[3] = x;
clo43882[4] = equal_u63;
clo43882[5] = lst;
clo43882[6] = cdr;
void* f4263742751 = encode_clo(clo43882);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4263742751;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42903 = encode_clo(alloc_clo(lam42903_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42905 = arg_buffer[1];
//reading env and args
void* kont42634 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43884 = alloc_clo(lam42903_fptr, 7);

//setting env list
clo43884[1] = car;
clo43884[2] = kont42634;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo43884[3] = member_u63;
clo43884[4] = x;
clo43884[5] = equal_u63;
clo43884[6] = lst;
clo43884[7] = cdr;
void* f4263842748 = encode_clo(clo43884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4263842748;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam42906_fptr() // lam42906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42907 = arg_buffer[1];
//reading env and args
void* a4254442765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42639 = (decode_clo(env42907))[4];
//not do dummy comment
void* fun = (decode_clo(env42907))[3];
//not do dummy comment
void* a4254342763 = (decode_clo(env42907))[2];
//not do dummy comment
void* foldl = (decode_clo(env42907))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont42639;
arg_buffer[3] = fun;
arg_buffer[4] = a4254342763;
arg_buffer[5] = a4254442765;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a4254342763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42909))[5];
//not do dummy comment
void* kont42639 = (decode_clo(env42909))[4];
//not do dummy comment
void* lst = (decode_clo(env42909))[3];
//not do dummy comment
void* fun = (decode_clo(env42909))[2];
//not do dummy comment
void* foldl = (decode_clo(env42909))[1];

//creating new closure instance
void** clo43886 = alloc_clo(lam42906_fptr, 4);

//setting env list
clo43886[1] = foldl;
clo43886[2] = a4254342763;
clo43886[3] = fun;
clo43886[4] = kont42639;
void* f4264042764 = encode_clo(clo43886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4264042764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a4254242761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42911))[6];
//not do dummy comment
void* kont42639 = (decode_clo(env42911))[5];
//not do dummy comment
void* lst = (decode_clo(env42911))[4];
//not do dummy comment
void* fun = (decode_clo(env42911))[3];
//not do dummy comment
void* acc = (decode_clo(env42911))[2];
//not do dummy comment
void* foldl = (decode_clo(env42911))[1];

//creating new closure instance
void** clo43888 = alloc_clo(lam42908_fptr, 5);

//setting env list
clo43888[1] = foldl;
clo43888[2] = fun;
clo43888[3] = lst;
clo43888[4] = kont42639;
clo43888[5] = cdr;
void* f4264142762 = encode_clo(clo43888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4264142762;
arg_buffer[3] = a4254242761;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a4254142759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42913))[7];
//not do dummy comment
void* kont42639 = (decode_clo(env42913))[6];
//not do dummy comment
void* lst = (decode_clo(env42913))[5];
//not do dummy comment
void* fun = (decode_clo(env42913))[4];
//not do dummy comment
void* acc = (decode_clo(env42913))[3];
//not do dummy comment
void* car = (decode_clo(env42913))[2];
//not do dummy comment
void* foldl = (decode_clo(env42913))[1];

//if-clause
bool if_guard43889 = is_true(a4254142759);
if(if_guard43889)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42639);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42639))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43891 = alloc_clo(lam42910_fptr, 6);

//setting env list
clo43891[1] = foldl;
clo43891[2] = acc;
clo43891[3] = fun;
clo43891[4] = lst;
clo43891[5] = kont42639;
clo43891[6] = cdr;
void* f4264242760 = encode_clo(clo43891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4264242760;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42912 = encode_clo(alloc_clo(lam42912_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42914 = arg_buffer[1];
//reading env and args
void* kont42639 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo43893 = alloc_clo(lam42912_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo43893[1] = foldl;
clo43893[2] = car;
clo43893[3] = acc;
clo43893[4] = fun;
clo43893[5] = lst;
clo43893[6] = kont42639;
clo43893[7] = cdr;
void* f4264342758 = encode_clo(clo43893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4264342758;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam42915_fptr() // lam42915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42916 = arg_buffer[1];
//reading env and args
void* a4254842773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4254642769 = (decode_clo(env42916))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42916))[2];
//not do dummy comment
void* kont42644 = (decode_clo(env42916))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42644;
arg_buffer[3] = a4254642769;
arg_buffer[4] = a4254842773;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42915 = encode_clo(alloc_clo(lam42915_fptr, 0));

void* lam42917_fptr() // lam42917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42918 = arg_buffer[1];
//reading env and args
void* a4254742771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4254642769 = (decode_clo(env42918))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42918))[4];
//not do dummy comment
void* cons = (decode_clo(env42918))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42918))[2];
//not do dummy comment
void* kont42644 = (decode_clo(env42918))[1];

//creating new closure instance
void** clo43895 = alloc_clo(lam42915_fptr, 3);

//setting env list
clo43895[1] = kont42644;
clo43895[2] = reverse_u45helper;
clo43895[3] = a4254642769;
void* f4264542772 = encode_clo(clo43895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4264542772;
arg_buffer[3] = a4254742771;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42917 = encode_clo(alloc_clo(lam42917_fptr, 0));

void* lam42919_fptr() // lam42919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42920 = arg_buffer[1];
//reading env and args
void* a4254642769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42920))[6];
//not do dummy comment
void* lst2 = (decode_clo(env42920))[5];
//not do dummy comment
void* car = (decode_clo(env42920))[4];
//not do dummy comment
void* cons = (decode_clo(env42920))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42920))[2];
//not do dummy comment
void* kont42644 = (decode_clo(env42920))[1];

//creating new closure instance
void** clo43897 = alloc_clo(lam42917_fptr, 5);

//setting env list
clo43897[1] = kont42644;
clo43897[2] = reverse_u45helper;
clo43897[3] = cons;
clo43897[4] = lst2;
clo43897[5] = a4254642769;
void* f4264642770 = encode_clo(clo43897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4264642770;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42919 = encode_clo(alloc_clo(lam42919_fptr, 0));

void* lam42921_fptr() // lam42921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42922 = arg_buffer[1];
//reading env and args
void* a4254542767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42922))[7];
//not do dummy comment
void* lst = (decode_clo(env42922))[6];
//not do dummy comment
void* lst2 = (decode_clo(env42922))[5];
//not do dummy comment
void* car = (decode_clo(env42922))[4];
//not do dummy comment
void* cons = (decode_clo(env42922))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42922))[2];
//not do dummy comment
void* kont42644 = (decode_clo(env42922))[1];

//if-clause
bool if_guard43898 = is_true(a4254542767);
if(if_guard43898)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42644);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42644))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43900 = alloc_clo(lam42919_fptr, 6);

//setting env list
clo43900[1] = kont42644;
clo43900[2] = reverse_u45helper;
clo43900[3] = cons;
clo43900[4] = car;
clo43900[5] = lst2;
clo43900[6] = lst;
void* f4264742768 = encode_clo(clo43900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4264742768;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42921 = encode_clo(alloc_clo(lam42921_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42923 = arg_buffer[1];
//reading env and args
void* kont42644 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43902 = alloc_clo(lam42921_fptr, 7);

//setting env list
clo43902[1] = kont42644;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo43902[2] = reverse_u45helper;
clo43902[3] = cons;
clo43902[4] = car;
clo43902[5] = lst2;
clo43902[6] = lst;
clo43902[7] = cdr;
void* f4264842766 = encode_clo(clo43902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4264842766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam42924_fptr() // lam42924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42925 = arg_buffer[1];
//reading env and args
void* a4254942775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42925))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42925))[2];
//not do dummy comment
void* kont42649 = (decode_clo(env42925))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42649;
arg_buffer[3] = lst;
arg_buffer[4] = a4254942775;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42924 = encode_clo(alloc_clo(lam42924_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42926 = arg_buffer[1];
//reading env and args
void* kont42649 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo43904 = alloc_clo(lam42924_fptr, 3);

//setting env list
clo43904[1] = kont42649;
clo43904[2] = reverse_u45helper;
clo43904[3] = lst;
void* f4265042774 = encode_clo(clo43904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4265042774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam42927_fptr() // lam42927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42928 = arg_buffer[1];
//reading env and args
void* x4255242780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42651 = (decode_clo(env42928))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42651);
arg_buffer[2] = x4255242780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42651))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42927 = encode_clo(alloc_clo(lam42927_fptr, 0));

void* lam42929_fptr() // lam42929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42930 = arg_buffer[1];
//reading env and args
void* a4255742789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4255342782 = (decode_clo(env42930))[4];
//not do dummy comment
void* a4255542785 = (decode_clo(env42930))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42930))[2];
//not do dummy comment
void* kont42651 = (decode_clo(env42930))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42651;
arg_buffer[3] = a4255342782;
arg_buffer[4] = a4255542785;
arg_buffer[5] = a4255742789;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42929 = encode_clo(alloc_clo(lam42929_fptr, 0));

void* lam42931_fptr() // lam42931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42932 = arg_buffer[1];
//reading env and args
void* a4255642787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4255342782 = (decode_clo(env42932))[6];
//not do dummy comment
void* a4255542785 = (decode_clo(env42932))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42932))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42932))[3];
//not do dummy comment
void* cons = (decode_clo(env42932))[2];
//not do dummy comment
void* kont42651 = (decode_clo(env42932))[1];

//creating new closure instance
void** clo43906 = alloc_clo(lam42929_fptr, 4);

//setting env list
clo43906[1] = kont42651;
clo43906[2] = take_u45helper;
clo43906[3] = a4255542785;
clo43906[4] = a4255342782;
void* f4265342788 = encode_clo(clo43906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4265342788;
arg_buffer[3] = a4255642787;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42931 = encode_clo(alloc_clo(lam42931_fptr, 0));

void* lam42933_fptr() // lam42933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42934 = arg_buffer[1];
//reading env and args
void* a4255542785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4255342782 = (decode_clo(env42934))[7];
//not do dummy comment
void* lst = (decode_clo(env42934))[6];
//not do dummy comment
void* car = (decode_clo(env42934))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42934))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42934))[3];
//not do dummy comment
void* cons = (decode_clo(env42934))[2];
//not do dummy comment
void* kont42651 = (decode_clo(env42934))[1];

//creating new closure instance
void** clo43908 = alloc_clo(lam42931_fptr, 6);

//setting env list
clo43908[1] = kont42651;
clo43908[2] = cons;
clo43908[3] = lst2;
clo43908[4] = take_u45helper;
clo43908[5] = a4255542785;
clo43908[6] = a4255342782;
void* f4265442786 = encode_clo(clo43908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4265442786;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42933 = encode_clo(alloc_clo(lam42933_fptr, 0));

void* lam42936_fptr() // lam42936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42937 = arg_buffer[1];
//reading env and args
void* a4255342782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42937))[8];
//not do dummy comment
void* _u45 = (decode_clo(env42937))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env42937))[6];
//not do dummy comment
void* lst2 = (decode_clo(env42937))[5];
//not do dummy comment
void* n = (decode_clo(env42937))[4];
//not do dummy comment
void* car = (decode_clo(env42937))[3];
//not do dummy comment
void* cons = (decode_clo(env42937))[2];
//not do dummy comment
void* kont42651 = (decode_clo(env42937))[1];
mpz_t* mpzvar43909 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43909, "1", 10);
void* a4255442783 = encode_mpz(mpzvar43909);

//creating new closure instance
void** clo43911 = alloc_clo(lam42933_fptr, 7);

//setting env list
clo43911[1] = kont42651;
clo43911[2] = cons;
clo43911[3] = lst2;
clo43911[4] = take_u45helper;
clo43911[5] = car;
clo43911[6] = lst;
clo43911[7] = a4255342782;
void* f4265542784 = encode_clo(clo43911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4265542784;
arg_buffer[3] = n;
arg_buffer[4] = a4255442783;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42936 = encode_clo(alloc_clo(lam42936_fptr, 0));

void* lam42938_fptr() // lam42938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42939 = arg_buffer[1];
//reading env and args
void* a4255142778 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42939))[10];
//not do dummy comment
void* lst = (decode_clo(env42939))[9];
//not do dummy comment
void* reverse = (decode_clo(env42939))[8];
//not do dummy comment
void* _u45 = (decode_clo(env42939))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env42939))[6];
//not do dummy comment
void* lst2 = (decode_clo(env42939))[5];
//not do dummy comment
void* n = (decode_clo(env42939))[4];
//not do dummy comment
void* car = (decode_clo(env42939))[3];
//not do dummy comment
void* cons = (decode_clo(env42939))[2];
//not do dummy comment
void* kont42651 = (decode_clo(env42939))[1];

//if-clause
bool if_guard43912 = is_true(a4255142778);
if(if_guard43912)
{

//creating new closure instance
void** clo43914 = alloc_clo(lam42927_fptr, 1);

//setting env list
clo43914[1] = kont42651;
void* f4265242779 = encode_clo(clo43914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4265242779;
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
void** clo43916 = alloc_clo(lam42936_fptr, 8);

//setting env list
clo43916[1] = kont42651;
clo43916[2] = cons;
clo43916[3] = car;
clo43916[4] = n;
clo43916[5] = lst2;
clo43916[6] = take_u45helper;
clo43916[7] = _u45;
clo43916[8] = lst;
void* f4265642781 = encode_clo(clo43916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4265642781;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42938 = encode_clo(alloc_clo(lam42938_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42941 = arg_buffer[1];
//reading env and args
void* kont42651 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar43917 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43917, "0", 10);
void* a4255042776 = encode_mpz(mpzvar43917);

//creating new closure instance
void** clo43919 = alloc_clo(lam42938_fptr, 10);

//setting env list
clo43919[1] = kont42651;
clo43919[2] = cons;
clo43919[3] = car;
clo43919[4] = n;
clo43919[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo43919[6] = take_u45helper;
clo43919[7] = _u45;
clo43919[8] = reverse;
clo43919[9] = lst;
clo43919[10] = cdr;
void* f4265742777 = encode_clo(clo43919);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4265742777;
arg_buffer[3] = n;
arg_buffer[4] = a4255042776;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam42942_fptr() // lam42942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42943 = arg_buffer[1];
//reading env and args
void* a4255842791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42943))[4];
//not do dummy comment
void* kont42658 = (decode_clo(env42943))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42943))[2];
//not do dummy comment
void* n = (decode_clo(env42943))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42658;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4255842791;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42942 = encode_clo(alloc_clo(lam42942_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42944 = arg_buffer[1];
//reading env and args
void* kont42658 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43921 = alloc_clo(lam42942_fptr, 4);

//setting env list
clo43921[1] = n;
clo43921[2] = take_u45helper;
clo43921[3] = kont42658;
clo43921[4] = lst;
void* f4265942790 = encode_clo(clo43921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4265942790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam42946_fptr() // lam42946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42947 = arg_buffer[1];
//reading env and args
void* a4256342799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42660 = (decode_clo(env42947))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42947))[2];
//not do dummy comment
void* a4256142795 = (decode_clo(env42947))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont42660;
arg_buffer[3] = a4256142795;
arg_buffer[4] = a4256342799;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42946 = encode_clo(alloc_clo(lam42946_fptr, 0));

void* lam42948_fptr() // lam42948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42949 = arg_buffer[1];
//reading env and args
void* a4256242797 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env42949))[4];
//not do dummy comment
void* kont42660 = (decode_clo(env42949))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42949))[2];
//not do dummy comment
void* a4256142795 = (decode_clo(env42949))[1];

//creating new closure instance
void** clo43923 = alloc_clo(lam42946_fptr, 3);

//setting env list
clo43923[1] = a4256142795;
clo43923[2] = _u43;
clo43923[3] = kont42660;
void* f4266142798 = encode_clo(clo43923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4266142798;
arg_buffer[3] = a4256242797;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42948 = encode_clo(alloc_clo(lam42948_fptr, 0));

void* lam42951_fptr() // lam42951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42952 = arg_buffer[1];
//reading env and args
void* a4255942793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42952))[5];
//not do dummy comment
void* lst = (decode_clo(env42952))[4];
//not do dummy comment
void* length = (decode_clo(env42952))[3];
//not do dummy comment
void* kont42660 = (decode_clo(env42952))[2];
//not do dummy comment
void* _u43 = (decode_clo(env42952))[1];

//if-clause
bool if_guard43924 = is_true(a4255942793);
if(if_guard43924)
{
mpz_t* mpzvar43925 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43925, "0", 10);
void* x4256042794 = encode_mpz(mpzvar43925);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42660);
arg_buffer[2] = x4256042794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42660))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar43926 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43926, "1", 10);
void* a4256142795 = encode_mpz(mpzvar43926);

//creating new closure instance
void** clo43928 = alloc_clo(lam42948_fptr, 4);

//setting env list
clo43928[1] = a4256142795;
clo43928[2] = _u43;
clo43928[3] = kont42660;
clo43928[4] = length;
void* f4266242796 = encode_clo(clo43928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4266242796;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42951 = encode_clo(alloc_clo(lam42951_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42953 = arg_buffer[1];
//reading env and args
void* kont42660 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo43930 = alloc_clo(lam42951_fptr, 5);

//setting env list
clo43930[1] = _u43;
clo43930[2] = kont42660;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo43930[3] = length;
clo43930[4] = lst;
clo43930[5] = cdr;
void* f4266342792 = encode_clo(clo43930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4266342792;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam42954_fptr() // lam42954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42955 = arg_buffer[1];
//reading env and args
void* x4256542803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42664 = (decode_clo(env42955))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42664);
arg_buffer[2] = x4256542803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42664))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42954 = encode_clo(alloc_clo(lam42954_fptr, 0));

void* lam42956_fptr() // lam42956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42957 = arg_buffer[1];
//reading env and args
void* a4256942811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4256742807 = (decode_clo(env42957))[3];
//not do dummy comment
void* kont42664 = (decode_clo(env42957))[2];
//not do dummy comment
void* cons = (decode_clo(env42957))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42664;
arg_buffer[3] = a4256742807;
arg_buffer[4] = a4256942811;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42956 = encode_clo(alloc_clo(lam42956_fptr, 0));

void* lam42958_fptr() // lam42958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42959 = arg_buffer[1];
//reading env and args
void* a4256842809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env42959))[5];
//not do dummy comment
void* a4256742807 = (decode_clo(env42959))[4];
//not do dummy comment
void* cons = (decode_clo(env42959))[3];
//not do dummy comment
void* proc = (decode_clo(env42959))[2];
//not do dummy comment
void* kont42664 = (decode_clo(env42959))[1];

//creating new closure instance
void** clo43932 = alloc_clo(lam42956_fptr, 3);

//setting env list
clo43932[1] = cons;
clo43932[2] = kont42664;
clo43932[3] = a4256742807;
void* f4266642810 = encode_clo(clo43932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4266642810;
arg_buffer[3] = proc;
arg_buffer[4] = a4256842809;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42958 = encode_clo(alloc_clo(lam42958_fptr, 0));

void* lam42960_fptr() // lam42960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42961 = arg_buffer[1];
//reading env and args
void* a4256742807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42961))[6];
//not do dummy comment
void* lst = (decode_clo(env42961))[5];
//not do dummy comment
void* map = (decode_clo(env42961))[4];
//not do dummy comment
void* cons = (decode_clo(env42961))[3];
//not do dummy comment
void* proc = (decode_clo(env42961))[2];
//not do dummy comment
void* kont42664 = (decode_clo(env42961))[1];

//creating new closure instance
void** clo43934 = alloc_clo(lam42958_fptr, 5);

//setting env list
clo43934[1] = kont42664;
clo43934[2] = proc;
clo43934[3] = cons;
clo43934[4] = a4256742807;
clo43934[5] = map;
void* f4266742808 = encode_clo(clo43934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4266742808;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42960 = encode_clo(alloc_clo(lam42960_fptr, 0));

void* lam42962_fptr() // lam42962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42963 = arg_buffer[1];
//reading env and args
void* a4256642805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42963))[6];
//not do dummy comment
void* lst = (decode_clo(env42963))[5];
//not do dummy comment
void* map = (decode_clo(env42963))[4];
//not do dummy comment
void* cons = (decode_clo(env42963))[3];
//not do dummy comment
void* proc = (decode_clo(env42963))[2];
//not do dummy comment
void* kont42664 = (decode_clo(env42963))[1];

//creating new closure instance
void** clo43936 = alloc_clo(lam42960_fptr, 6);

//setting env list
clo43936[1] = kont42664;
clo43936[2] = proc;
clo43936[3] = cons;
clo43936[4] = map;
clo43936[5] = lst;
clo43936[6] = cdr;
void* f4266842806 = encode_clo(clo43936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4266842806;
arg_buffer[3] = a4256642805;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42962 = encode_clo(alloc_clo(lam42962_fptr, 0));

void* lam42964_fptr() // lam42964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42965 = arg_buffer[1];
//reading env and args
void* a4256442801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42965))[8];
//not do dummy comment
void* map = (decode_clo(env42965))[7];
//not do dummy comment
void* car = (decode_clo(env42965))[6];
//not do dummy comment
void* cons = (decode_clo(env42965))[5];
//not do dummy comment
void* list = (decode_clo(env42965))[4];
//not do dummy comment
void* cdr = (decode_clo(env42965))[3];
//not do dummy comment
void* proc = (decode_clo(env42965))[2];
//not do dummy comment
void* kont42664 = (decode_clo(env42965))[1];

//if-clause
bool if_guard43937 = is_true(a4256442801);
if(if_guard43937)
{

//creating new closure instance
void** clo43939 = alloc_clo(lam42954_fptr, 1);

//setting env list
clo43939[1] = kont42664;
void* f4266542802 = encode_clo(clo43939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4266542802;
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
void** clo43941 = alloc_clo(lam42962_fptr, 6);

//setting env list
clo43941[1] = kont42664;
clo43941[2] = proc;
clo43941[3] = cons;
clo43941[4] = map;
clo43941[5] = lst;
clo43941[6] = cdr;
void* f4266942804 = encode_clo(clo43941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4266942804;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42964 = encode_clo(alloc_clo(lam42964_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42966 = arg_buffer[1];
//reading env and args
void* kont42664 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43943 = alloc_clo(lam42964_fptr, 8);

//setting env list
clo43943[1] = kont42664;
clo43943[2] = proc;
clo43943[3] = cdr;
clo43943[4] = list;
clo43943[5] = cons;
clo43943[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo43943[7] = map;
clo43943[8] = lst;
void* f4267042800 = encode_clo(clo43943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4267042800;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam42967_fptr() // lam42967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42968 = arg_buffer[1];
//reading env and args
void* x4257142815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42671 = (decode_clo(env42968))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42671);
arg_buffer[2] = x4257142815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42671))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42967 = encode_clo(alloc_clo(lam42967_fptr, 0));

void* lam42969_fptr() // lam42969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42970 = arg_buffer[1];
//reading env and args
void* a4257642825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42671 = (decode_clo(env42970))[3];
//not do dummy comment
void* a4257442821 = (decode_clo(env42970))[2];
//not do dummy comment
void* cons = (decode_clo(env42970))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42671;
arg_buffer[3] = a4257442821;
arg_buffer[4] = a4257642825;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42969 = encode_clo(alloc_clo(lam42969_fptr, 0));

void* lam42971_fptr() // lam42971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42972 = arg_buffer[1];
//reading env and args
void* a4257542823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42671 = (decode_clo(env42972))[5];
//not do dummy comment
void* op = (decode_clo(env42972))[4];
//not do dummy comment
void* a4257442821 = (decode_clo(env42972))[3];
//not do dummy comment
void* filter = (decode_clo(env42972))[2];
//not do dummy comment
void* cons = (decode_clo(env42972))[1];

//creating new closure instance
void** clo43945 = alloc_clo(lam42969_fptr, 3);

//setting env list
clo43945[1] = cons;
clo43945[2] = a4257442821;
clo43945[3] = kont42671;
void* f4267342824 = encode_clo(clo43945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4267342824;
arg_buffer[3] = op;
arg_buffer[4] = a4257542823;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42971 = encode_clo(alloc_clo(lam42971_fptr, 0));

void* lam42973_fptr() // lam42973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42974 = arg_buffer[1];
//reading env and args
void* a4257442821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42974))[6];
//not do dummy comment
void* kont42671 = (decode_clo(env42974))[5];
//not do dummy comment
void* lst = (decode_clo(env42974))[4];
//not do dummy comment
void* op = (decode_clo(env42974))[3];
//not do dummy comment
void* filter = (decode_clo(env42974))[2];
//not do dummy comment
void* cons = (decode_clo(env42974))[1];

//creating new closure instance
void** clo43947 = alloc_clo(lam42971_fptr, 5);

//setting env list
clo43947[1] = cons;
clo43947[2] = filter;
clo43947[3] = a4257442821;
clo43947[4] = op;
clo43947[5] = kont42671;
void* f4267442822 = encode_clo(clo43947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4267442822;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42973 = encode_clo(alloc_clo(lam42973_fptr, 0));

void* lam42975_fptr() // lam42975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42976 = arg_buffer[1];
//reading env and args
void* a4257742827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42671 = (decode_clo(env42976))[3];
//not do dummy comment
void* op = (decode_clo(env42976))[2];
//not do dummy comment
void* filter = (decode_clo(env42976))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont42671;
arg_buffer[3] = op;
arg_buffer[4] = a4257742827;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42975 = encode_clo(alloc_clo(lam42975_fptr, 0));

void* lam42977_fptr() // lam42977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42978 = arg_buffer[1];
//reading env and args
void* a4257342819 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42978))[7];
//not do dummy comment
void* kont42671 = (decode_clo(env42978))[6];
//not do dummy comment
void* lst = (decode_clo(env42978))[5];
//not do dummy comment
void* op = (decode_clo(env42978))[4];
//not do dummy comment
void* cons = (decode_clo(env42978))[3];
//not do dummy comment
void* filter = (decode_clo(env42978))[2];
//not do dummy comment
void* car = (decode_clo(env42978))[1];

//if-clause
bool if_guard43948 = is_true(a4257342819);
if(if_guard43948)
{

//creating new closure instance
void** clo43950 = alloc_clo(lam42973_fptr, 6);

//setting env list
clo43950[1] = cons;
clo43950[2] = filter;
clo43950[3] = op;
clo43950[4] = lst;
clo43950[5] = kont42671;
clo43950[6] = cdr;
void* f4267542820 = encode_clo(clo43950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4267542820;
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
void** clo43952 = alloc_clo(lam42975_fptr, 3);

//setting env list
clo43952[1] = filter;
clo43952[2] = op;
clo43952[3] = kont42671;
void* f4267642826 = encode_clo(clo43952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4267642826;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42977 = encode_clo(alloc_clo(lam42977_fptr, 0));

void* lam42979_fptr() // lam42979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42980 = arg_buffer[1];
//reading env and args
void* a4257242817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42980))[7];
//not do dummy comment
void* kont42671 = (decode_clo(env42980))[6];
//not do dummy comment
void* lst = (decode_clo(env42980))[5];
//not do dummy comment
void* op = (decode_clo(env42980))[4];
//not do dummy comment
void* cons = (decode_clo(env42980))[3];
//not do dummy comment
void* filter = (decode_clo(env42980))[2];
//not do dummy comment
void* car = (decode_clo(env42980))[1];

//creating new closure instance
void** clo43954 = alloc_clo(lam42977_fptr, 7);

//setting env list
clo43954[1] = car;
clo43954[2] = filter;
clo43954[3] = cons;
clo43954[4] = op;
clo43954[5] = lst;
clo43954[6] = kont42671;
clo43954[7] = cdr;
void* f4267742818 = encode_clo(clo43954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4267742818;
arg_buffer[3] = a4257242817;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42979 = encode_clo(alloc_clo(lam42979_fptr, 0));

void* lam42981_fptr() // lam42981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42982 = arg_buffer[1];
//reading env and args
void* a4257042813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42671 = (decode_clo(env42982))[8];
//not do dummy comment
void* lst = (decode_clo(env42982))[7];
//not do dummy comment
void* op = (decode_clo(env42982))[6];
//not do dummy comment
void* cons = (decode_clo(env42982))[5];
//not do dummy comment
void* list = (decode_clo(env42982))[4];
//not do dummy comment
void* cdr = (decode_clo(env42982))[3];
//not do dummy comment
void* filter = (decode_clo(env42982))[2];
//not do dummy comment
void* car = (decode_clo(env42982))[1];

//if-clause
bool if_guard43955 = is_true(a4257042813);
if(if_guard43955)
{

//creating new closure instance
void** clo43957 = alloc_clo(lam42967_fptr, 1);

//setting env list
clo43957[1] = kont42671;
void* f4267242814 = encode_clo(clo43957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4267242814;
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
void** clo43959 = alloc_clo(lam42979_fptr, 7);

//setting env list
clo43959[1] = car;
clo43959[2] = filter;
clo43959[3] = cons;
clo43959[4] = op;
clo43959[5] = lst;
clo43959[6] = kont42671;
clo43959[7] = cdr;
void* f4267842816 = encode_clo(clo43959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4267842816;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42981 = encode_clo(alloc_clo(lam42981_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42983 = arg_buffer[1];
//reading env and args
void* kont42671 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43961 = alloc_clo(lam42981_fptr, 8);

//setting env list
clo43961[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo43961[2] = filter;
clo43961[3] = cdr;
clo43961[4] = list;
clo43961[5] = cons;
clo43961[6] = op;
clo43961[7] = lst;
clo43961[8] = kont42671;
void* f4267942812 = encode_clo(clo43961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4267942812;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam42984_fptr() // lam42984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42985 = arg_buffer[1];
//reading env and args
void* a4258242835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4258042832 = (decode_clo(env42985))[3];
//not do dummy comment
void* drop = (decode_clo(env42985))[2];
//not do dummy comment
void* kont42680 = (decode_clo(env42985))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont42680;
arg_buffer[3] = a4258042832;
arg_buffer[4] = a4258242835;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42984 = encode_clo(alloc_clo(lam42984_fptr, 0));

void* lam42987_fptr() // lam42987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42988 = arg_buffer[1];
//reading env and args
void* a4258042832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env42988))[4];
//not do dummy comment
void* kont42680 = (decode_clo(env42988))[3];
//not do dummy comment
void* n = (decode_clo(env42988))[2];
//not do dummy comment
void* _u45 = (decode_clo(env42988))[1];
mpz_t* mpzvar43962 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43962, "1", 10);
void* a4258142833 = encode_mpz(mpzvar43962);

//creating new closure instance
void** clo43964 = alloc_clo(lam42984_fptr, 3);

//setting env list
clo43964[1] = kont42680;
clo43964[2] = drop;
clo43964[3] = a4258042832;
void* f4268142834 = encode_clo(clo43964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4268142834;
arg_buffer[3] = n;
arg_buffer[4] = a4258142833;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42987 = encode_clo(alloc_clo(lam42987_fptr, 0));

void* lam42989_fptr() // lam42989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42990 = arg_buffer[1];
//reading env and args
void* a4257942830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42990))[6];
//not do dummy comment
void* kont42680 = (decode_clo(env42990))[5];
//not do dummy comment
void* n = (decode_clo(env42990))[4];
//not do dummy comment
void* _u45 = (decode_clo(env42990))[3];
//not do dummy comment
void* lst = (decode_clo(env42990))[2];
//not do dummy comment
void* drop = (decode_clo(env42990))[1];

//if-clause
bool if_guard43965 = is_true(a4257942830);
if(if_guard43965)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42680);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42680))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43967 = alloc_clo(lam42987_fptr, 4);

//setting env list
clo43967[1] = _u45;
clo43967[2] = n;
clo43967[3] = kont42680;
clo43967[4] = drop;
void* f4268242831 = encode_clo(clo43967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4268242831;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42989 = encode_clo(alloc_clo(lam42989_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42992 = arg_buffer[1];
//reading env and args
void* kont42680 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar43968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43968, "0", 10);
void* a4257842828 = encode_mpz(mpzvar43968);

//creating new closure instance
void** clo43970 = alloc_clo(lam42989_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo43970[1] = drop;
clo43970[2] = lst;
clo43970[3] = _u45;
clo43970[4] = n;
clo43970[5] = kont42680;
clo43970[6] = cdr;
void* f4268342829 = encode_clo(clo43970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4268342829;
arg_buffer[3] = n;
arg_buffer[4] = a4257842828;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam42993_fptr() // lam42993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42994 = arg_buffer[1];
//reading env and args
void* a4258642843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4258442839 = (decode_clo(env42994))[3];
//not do dummy comment
void* proc = (decode_clo(env42994))[2];
//not do dummy comment
void* kont42684 = (decode_clo(env42994))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont42684;
arg_buffer[3] = a4258442839;
arg_buffer[4] = a4258642843;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42993 = encode_clo(alloc_clo(lam42993_fptr, 0));

void* lam42995_fptr() // lam42995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42996 = arg_buffer[1];
//reading env and args
void* a4258542841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env42996))[5];
//not do dummy comment
void* a4258442839 = (decode_clo(env42996))[4];
//not do dummy comment
void* kont42684 = (decode_clo(env42996))[3];
//not do dummy comment
void* proc = (decode_clo(env42996))[2];
//not do dummy comment
void* acc = (decode_clo(env42996))[1];

//creating new closure instance
void** clo43972 = alloc_clo(lam42993_fptr, 3);

//setting env list
clo43972[1] = kont42684;
clo43972[2] = proc;
clo43972[3] = a4258442839;
void* f4268542842 = encode_clo(clo43972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4268542842;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4258542841;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42995 = encode_clo(alloc_clo(lam42995_fptr, 0));

void* lam42997_fptr() // lam42997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42998 = arg_buffer[1];
//reading env and args
void* a4258442839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42998))[6];
//not do dummy comment
void* kont42684 = (decode_clo(env42998))[5];
//not do dummy comment
void* foldr = (decode_clo(env42998))[4];
//not do dummy comment
void* lst = (decode_clo(env42998))[3];
//not do dummy comment
void* proc = (decode_clo(env42998))[2];
//not do dummy comment
void* acc = (decode_clo(env42998))[1];

//creating new closure instance
void** clo43974 = alloc_clo(lam42995_fptr, 5);

//setting env list
clo43974[1] = acc;
clo43974[2] = proc;
clo43974[3] = kont42684;
clo43974[4] = a4258442839;
clo43974[5] = foldr;
void* f4268642840 = encode_clo(clo43974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4268642840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42997 = encode_clo(alloc_clo(lam42997_fptr, 0));

void* lam42999_fptr() // lam42999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43000 = arg_buffer[1];
//reading env and args
void* a4258342837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43000))[7];
//not do dummy comment
void* car = (decode_clo(env43000))[6];
//not do dummy comment
void* kont42684 = (decode_clo(env43000))[5];
//not do dummy comment
void* foldr = (decode_clo(env43000))[4];
//not do dummy comment
void* lst = (decode_clo(env43000))[3];
//not do dummy comment
void* proc = (decode_clo(env43000))[2];
//not do dummy comment
void* acc = (decode_clo(env43000))[1];

//if-clause
bool if_guard43975 = is_true(a4258342837);
if(if_guard43975)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42684);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42684))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43977 = alloc_clo(lam42997_fptr, 6);

//setting env list
clo43977[1] = acc;
clo43977[2] = proc;
clo43977[3] = lst;
clo43977[4] = foldr;
clo43977[5] = kont42684;
clo43977[6] = cdr;
void* f4268742838 = encode_clo(clo43977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4268742838;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42999 = encode_clo(alloc_clo(lam42999_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43001 = arg_buffer[1];
//reading env and args
void* kont42684 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo43979 = alloc_clo(lam42999_fptr, 7);

//setting env list
clo43979[1] = acc;
clo43979[2] = proc;
clo43979[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo43979[4] = foldr;
clo43979[5] = kont42684;
clo43979[6] = car;
clo43979[7] = cdr;
void* f4268842836 = encode_clo(clo43979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4268842836;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam43002_fptr() // lam43002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43003 = arg_buffer[1];
//reading env and args
void* a4259042851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4258842847 = (decode_clo(env43003))[3];
//not do dummy comment
void* kont42689 = (decode_clo(env43003))[2];
//not do dummy comment
void* cons = (decode_clo(env43003))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42689;
arg_buffer[3] = a4258842847;
arg_buffer[4] = a4259042851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43002 = encode_clo(alloc_clo(lam43002_fptr, 0));

void* lam43004_fptr() // lam43004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43005 = arg_buffer[1];
//reading env and args
void* a4258942849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4258842847 = (decode_clo(env43005))[5];
//not do dummy comment
void* kont42689 = (decode_clo(env43005))[4];
//not do dummy comment
void* append = (decode_clo(env43005))[3];
//not do dummy comment
void* lst2 = (decode_clo(env43005))[2];
//not do dummy comment
void* cons = (decode_clo(env43005))[1];

//creating new closure instance
void** clo43981 = alloc_clo(lam43002_fptr, 3);

//setting env list
clo43981[1] = cons;
clo43981[2] = kont42689;
clo43981[3] = a4258842847;
void* f4269042850 = encode_clo(clo43981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4269042850;
arg_buffer[3] = a4258942849;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43004 = encode_clo(alloc_clo(lam43004_fptr, 0));

void* lam43006_fptr() // lam43006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43007 = arg_buffer[1];
//reading env and args
void* a4258842847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43007))[6];
//not do dummy comment
void* kont42689 = (decode_clo(env43007))[5];
//not do dummy comment
void* append = (decode_clo(env43007))[4];
//not do dummy comment
void* lst2 = (decode_clo(env43007))[3];
//not do dummy comment
void* lst1 = (decode_clo(env43007))[2];
//not do dummy comment
void* cons = (decode_clo(env43007))[1];

//creating new closure instance
void** clo43983 = alloc_clo(lam43004_fptr, 5);

//setting env list
clo43983[1] = cons;
clo43983[2] = lst2;
clo43983[3] = append;
clo43983[4] = kont42689;
clo43983[5] = a4258842847;
void* f4269142848 = encode_clo(clo43983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4269142848;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43006 = encode_clo(alloc_clo(lam43006_fptr, 0));

void* lam43008_fptr() // lam43008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43009 = arg_buffer[1];
//reading env and args
void* a4258742845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43009))[7];
//not do dummy comment
void* kont42689 = (decode_clo(env43009))[6];
//not do dummy comment
void* append = (decode_clo(env43009))[5];
//not do dummy comment
void* lst2 = (decode_clo(env43009))[4];
//not do dummy comment
void* cons = (decode_clo(env43009))[3];
//not do dummy comment
void* lst1 = (decode_clo(env43009))[2];
//not do dummy comment
void* car = (decode_clo(env43009))[1];

//if-clause
bool if_guard43984 = is_true(a4258742845);
if(if_guard43984)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42689);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42689))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43986 = alloc_clo(lam43006_fptr, 6);

//setting env list
clo43986[1] = cons;
clo43986[2] = lst1;
clo43986[3] = lst2;
clo43986[4] = append;
clo43986[5] = kont42689;
clo43986[6] = cdr;
void* f4269242846 = encode_clo(clo43986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4269242846;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43008 = encode_clo(alloc_clo(lam43008_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43010 = arg_buffer[1];
//reading env and args
void* kont42689 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43988 = alloc_clo(lam43008_fptr, 7);

//setting env list
clo43988[1] = car;
clo43988[2] = lst1;
clo43988[3] = cons;
clo43988[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo43988[5] = append;
clo43988[6] = kont42689;
clo43988[7] = cdr;
void* f4269342844 = encode_clo(clo43988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4269342844;
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
void* _43011 = arg_buffer[1];
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

void* kont4269442852 = prim_car(lst);
void* lst42853 = prim_cdr(lst);
void* x4259142854 = apply_prim_hash(lst42853);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4269442852);
arg_buffer[2] = x4259142854;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4269442852))[0]);
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
void* _43012 = arg_buffer[1];
//reading env and args
void* kont42696 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4259242855 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42696);
arg_buffer[2] = x4259242855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42696))[0]);
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
void* _43013 = arg_buffer[1];
//reading env and args
void* kont42697 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4259342856 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42697);
arg_buffer[2] = x4259342856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42697))[0]);
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
void* _43014 = arg_buffer[1];
//reading env and args
void* kont42698 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4259442857 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42698);
arg_buffer[2] = x4259442857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42698))[0]);
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
void* _43015 = arg_buffer[1];
//reading env and args
void* kont42699 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4259542858 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42699);
arg_buffer[2] = x4259542858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42699))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam43017_fptr() // lam43017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43018 = arg_buffer[1];
//reading env and args
void* a4260042864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env43018))[2];
//not do dummy comment
void* kont42700 = (decode_clo(env43018))[1];
mpz_t* mpzvar43989 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43989, "10", 10);
void* a4260142865 = encode_mpz(mpzvar43989);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont42700;
arg_buffer[3] = a4260042864;
arg_buffer[4] = a4260142865;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43017 = encode_clo(alloc_clo(lam43017_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43023 = arg_buffer[1];
//reading env and args
void* kont42700 = arg_buffer[2];
//Dummy comment
void* a4259642859 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar43990 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43990, "80", 10);
void* a4259742860 = encode_mpz(mpzvar43990);
mpz_t* mpzvar43991 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43991, "10", 10);
void* a4259842861 = encode_mpz(mpzvar43991);
void* a4259942862 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo43993 = alloc_clo(lam43017_fptr, 2);

//setting env list
clo43993[1] = kont42700;
clo43993[2] = hash_u45ref;
void* f4270142863 = encode_clo(clo43993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4270142863;
arg_buffer[3] = a4259642859;
arg_buffer[4] = a4259742860;
arg_buffer[5] = a4259842861;
arg_buffer[6] = a4259942862;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam43024_fptr() // lam43024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43025 = arg_buffer[1];
//reading env and args
void* x4260242867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42702 = (decode_clo(env43025))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42702);
arg_buffer[2] = x4260242867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42702))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43024 = encode_clo(alloc_clo(lam43024_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43026 = arg_buffer[1];
//reading env and args
void* kont42702 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo43995 = alloc_clo(lam43024_fptr, 1);

//setting env list
clo43995[1] = kont42702;
void* f4270342866 = encode_clo(clo43995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4270342866;
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

