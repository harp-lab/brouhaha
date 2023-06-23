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
void* _72866 = arg_buffer[1];
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

void* kont7260572705 = prim_car(lst);
void* lst72706 = prim_cdr(lst);
void* x7251972707 = apply_prim__u43(lst72706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7260572705);
arg_buffer[2] = x7251972707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7260572705))[0]);
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
void* _72867 = arg_buffer[1];
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

void* kont7260772708 = prim_car(lst);
void* lst72709 = prim_cdr(lst);
void* x7252072710 = apply_prim__u45(lst72709);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7260772708);
arg_buffer[2] = x7252072710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7260772708))[0]);
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
void* _72868 = arg_buffer[1];
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

void* kont7260972711 = prim_car(lst);
void* lst72712 = prim_cdr(lst);
void* x7252172713 = apply_prim__u42(lst72712);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7260972711);
arg_buffer[2] = x7252172713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7260972711))[0]);
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
void* _72869 = arg_buffer[1];
//reading env and args
void* kont72611 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7252272714 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72611);
arg_buffer[2] = x7252272714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72611))[0]);
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
void* _72870 = arg_buffer[1];
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

void* kont7261272715 = prim_car(lst);
void* lst72716 = prim_cdr(lst);
void* x7252372717 = apply_prim__u47(lst72716);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7261272715);
arg_buffer[2] = x7252372717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7261272715))[0]);
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
void* _72871 = arg_buffer[1];
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

void* kont7261472718 = prim_car(lst);
void* lst72719 = prim_cdr(lst);
void* x7252472720 = apply_prim__u61(lst72719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7261472718);
arg_buffer[2] = x7252472720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7261472718))[0]);
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
void* _72872 = arg_buffer[1];
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

void* kont7261672721 = prim_car(lst);
void* lst72722 = prim_cdr(lst);
void* x7252572723 = apply_prim__u62(lst72722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7261672721);
arg_buffer[2] = x7252572723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7261672721))[0]);
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
void* _72873 = arg_buffer[1];
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

void* kont7261872724 = prim_car(lst);
void* lst72725 = prim_cdr(lst);
void* x7252672726 = apply_prim__u60(lst72725);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7261872724);
arg_buffer[2] = x7252672726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7261872724))[0]);
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
void* _72874 = arg_buffer[1];
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

void* kont7262072727 = prim_car(lst);
void* lst72728 = prim_cdr(lst);
void* x7252772729 = apply_prim__u60_u61(lst72728);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7262072727);
arg_buffer[2] = x7252772729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7262072727))[0]);
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
void* _72875 = arg_buffer[1];
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

void* kont7262272730 = prim_car(lst);
void* lst72731 = prim_cdr(lst);
void* x7252872732 = apply_prim__u62_u61(lst72731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7262272730);
arg_buffer[2] = x7252872732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7262272730))[0]);
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
void* _72876 = arg_buffer[1];
//reading env and args
void* kont72624 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x7252972733 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72624);
arg_buffer[2] = x7252972733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72624))[0]);
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
void* _72877 = arg_buffer[1];
//reading env and args
void* kont72625 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7253072734 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72625);
arg_buffer[2] = x7253072734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72625))[0]);
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
void* _72878 = arg_buffer[1];
//reading env and args
void* kont72626 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7253172735 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72626);
arg_buffer[2] = x7253172735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72626))[0]);
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
void* _72879 = arg_buffer[1];
//reading env and args
void* kont72627 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7253272736 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72627);
arg_buffer[2] = x7253272736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72627))[0]);
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
void* _72880 = arg_buffer[1];
//reading env and args
void* kont72628 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7253372737 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72628);
arg_buffer[2] = x7253372737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72628))[0]);
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
void* _72881 = arg_buffer[1];
//reading env and args
void* kont72629 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7253472738 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72629);
arg_buffer[2] = x7253472738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72629))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam72882_fptr() // lam72882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72883 = arg_buffer[1];
//reading env and args
void* a7253772742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72630 = (decode_clo(env72883))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env72883))[2];
//not do dummy comment
void* a7253572739 = (decode_clo(env72883))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont72630;
arg_buffer[3] = a7253572739;
arg_buffer[4] = a7253772742;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72882 = encode_clo(alloc_clo(lam72882_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72886 = arg_buffer[1];
//reading env and args
void* kont72630 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar73020 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73020, "0", 10);
void* a7253572739 = encode_mpz(mpzvar73020);
mpz_t* mpzvar73021 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73021, "2", 10);
void* a7253672740 = encode_mpz(mpzvar73021);

//creating new closure instance
void** clo73023 = alloc_clo(lam72882_fptr, 3);

//setting env list
clo73023[1] = a7253572739;
clo73023[2] = equal_u63;
clo73023[3] = kont72630;
void* f7263172741 = encode_clo(clo73023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7263172741;
arg_buffer[3] = x;
arg_buffer[4] = a7253672740;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam72887_fptr() // lam72887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72888 = arg_buffer[1];
//reading env and args
void* a7254072746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7253872743 = (decode_clo(env72888))[3];
//not do dummy comment
void* kont72632 = (decode_clo(env72888))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env72888))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont72632;
arg_buffer[3] = a7253872743;
arg_buffer[4] = a7254072746;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72887 = encode_clo(alloc_clo(lam72887_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72891 = arg_buffer[1];
//reading env and args
void* kont72632 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar73024 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73024, "1", 10);
void* a7253872743 = encode_mpz(mpzvar73024);
mpz_t* mpzvar73025 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73025, "2", 10);
void* a7253972744 = encode_mpz(mpzvar73025);

//creating new closure instance
void** clo73027 = alloc_clo(lam72887_fptr, 3);

//setting env list
clo73027[1] = equal_u63;
clo73027[2] = kont72632;
clo73027[3] = a7253872743;
void* f7263372745 = encode_clo(clo73027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7263372745;
arg_buffer[3] = x;
arg_buffer[4] = a7253972744;
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
void* _72892 = arg_buffer[1];
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

void* kont7263472747 = prim_car(x);
void* x72748 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7263472747);
arg_buffer[2] = x72748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7263472747))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam72895_fptr() // lam72895 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72896 = arg_buffer[1];
//reading env and args
void* a7254672758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72636 = (decode_clo(env72896))[3];
//not do dummy comment
void* x = (decode_clo(env72896))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env72896))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont72636;
arg_buffer[3] = x;
arg_buffer[4] = a7254672758;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72895 = encode_clo(alloc_clo(lam72895_fptr, 0));

void* lam72897_fptr() // lam72897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72898 = arg_buffer[1];
//reading env and args
void* a7254472755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72898))[5];
//not do dummy comment
void* lst = (decode_clo(env72898))[4];
//not do dummy comment
void* kont72636 = (decode_clo(env72898))[3];
//not do dummy comment
void* x = (decode_clo(env72898))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env72898))[1];

//if-clause
bool if_guard73028 = is_true(a7254472755);
if(if_guard73028)
{
void* x7254572756 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72636);
arg_buffer[2] = x7254572756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72636))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo73030 = alloc_clo(lam72895_fptr, 3);

//setting env list
clo73030[1] = member_u63;
clo73030[2] = x;
clo73030[3] = kont72636;
void* f7263772757 = encode_clo(clo73030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7263772757;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72897 = encode_clo(alloc_clo(lam72897_fptr, 0));

void* lam72899_fptr() // lam72899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72900 = arg_buffer[1];
//reading env and args
void* a7254372753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72900))[6];
//not do dummy comment
void* lst = (decode_clo(env72900))[5];
//not do dummy comment
void* x = (decode_clo(env72900))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env72900))[3];
//not do dummy comment
void* kont72636 = (decode_clo(env72900))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env72900))[1];

//creating new closure instance
void** clo73032 = alloc_clo(lam72897_fptr, 5);

//setting env list
clo73032[1] = member_u63;
clo73032[2] = x;
clo73032[3] = kont72636;
clo73032[4] = lst;
clo73032[5] = cdr;
void* f7263872754 = encode_clo(clo73032);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f7263872754;
arg_buffer[3] = a7254372753;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72899 = encode_clo(alloc_clo(lam72899_fptr, 0));

void* lam72901_fptr() // lam72901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72902 = arg_buffer[1];
//reading env and args
void* a7254172750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72902))[7];
//not do dummy comment
void* lst = (decode_clo(env72902))[6];
//not do dummy comment
void* x = (decode_clo(env72902))[5];
//not do dummy comment
void* car = (decode_clo(env72902))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env72902))[3];
//not do dummy comment
void* kont72636 = (decode_clo(env72902))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env72902))[1];

//if-clause
bool if_guard73033 = is_true(a7254172750);
if(if_guard73033)
{
void* x7254272751 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72636);
arg_buffer[2] = x7254272751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72636))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo73035 = alloc_clo(lam72899_fptr, 6);

//setting env list
clo73035[1] = equal_u63;
clo73035[2] = kont72636;
clo73035[3] = member_u63;
clo73035[4] = x;
clo73035[5] = lst;
clo73035[6] = cdr;
void* f7263972752 = encode_clo(clo73035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7263972752;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72901 = encode_clo(alloc_clo(lam72901_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72903 = arg_buffer[1];
//reading env and args
void* kont72636 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo73037 = alloc_clo(lam72901_fptr, 7);

//setting env list
clo73037[1] = equal_u63;
clo73037[2] = kont72636;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo73037[3] = member_u63;
clo73037[4] = car;
clo73037[5] = x;
clo73037[6] = lst;
clo73037[7] = cdr;
void* f7264072749 = encode_clo(clo73037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7264072749;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam72904_fptr() // lam72904 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72905 = arg_buffer[1];
//reading env and args
void* a7255072766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7254972764 = (decode_clo(env72905))[4];
//not do dummy comment
void* fun = (decode_clo(env72905))[3];
//not do dummy comment
void* kont72641 = (decode_clo(env72905))[2];
//not do dummy comment
void* foldl = (decode_clo(env72905))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont72641;
arg_buffer[3] = fun;
arg_buffer[4] = a7254972764;
arg_buffer[5] = a7255072766;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72904 = encode_clo(alloc_clo(lam72904_fptr, 0));

void* lam72906_fptr() // lam72906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72907 = arg_buffer[1];
//reading env and args
void* a7254972764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72907))[5];
//not do dummy comment
void* lst = (decode_clo(env72907))[4];
//not do dummy comment
void* fun = (decode_clo(env72907))[3];
//not do dummy comment
void* kont72641 = (decode_clo(env72907))[2];
//not do dummy comment
void* foldl = (decode_clo(env72907))[1];

//creating new closure instance
void** clo73039 = alloc_clo(lam72904_fptr, 4);

//setting env list
clo73039[1] = foldl;
clo73039[2] = kont72641;
clo73039[3] = fun;
clo73039[4] = a7254972764;
void* f7264272765 = encode_clo(clo73039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7264272765;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72906 = encode_clo(alloc_clo(lam72906_fptr, 0));

void* lam72908_fptr() // lam72908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72909 = arg_buffer[1];
//reading env and args
void* a7254872762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72909))[6];
//not do dummy comment
void* lst = (decode_clo(env72909))[5];
//not do dummy comment
void* fun = (decode_clo(env72909))[4];
//not do dummy comment
void* acc = (decode_clo(env72909))[3];
//not do dummy comment
void* kont72641 = (decode_clo(env72909))[2];
//not do dummy comment
void* foldl = (decode_clo(env72909))[1];

//creating new closure instance
void** clo73041 = alloc_clo(lam72906_fptr, 5);

//setting env list
clo73041[1] = foldl;
clo73041[2] = kont72641;
clo73041[3] = fun;
clo73041[4] = lst;
clo73041[5] = cdr;
void* f7264372763 = encode_clo(clo73041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f7264372763;
arg_buffer[3] = a7254872762;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72908 = encode_clo(alloc_clo(lam72908_fptr, 0));

void* lam72910_fptr() // lam72910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72911 = arg_buffer[1];
//reading env and args
void* a7254772760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72911))[7];
//not do dummy comment
void* lst = (decode_clo(env72911))[6];
//not do dummy comment
void* fun = (decode_clo(env72911))[5];
//not do dummy comment
void* acc = (decode_clo(env72911))[4];
//not do dummy comment
void* foldl = (decode_clo(env72911))[3];
//not do dummy comment
void* kont72641 = (decode_clo(env72911))[2];
//not do dummy comment
void* car = (decode_clo(env72911))[1];

//if-clause
bool if_guard73042 = is_true(a7254772760);
if(if_guard73042)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72641);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72641))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo73044 = alloc_clo(lam72908_fptr, 6);

//setting env list
clo73044[1] = foldl;
clo73044[2] = kont72641;
clo73044[3] = acc;
clo73044[4] = fun;
clo73044[5] = lst;
clo73044[6] = cdr;
void* f7264472761 = encode_clo(clo73044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7264472761;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72910 = encode_clo(alloc_clo(lam72910_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72912 = arg_buffer[1];
//reading env and args
void* kont72641 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo73046 = alloc_clo(lam72910_fptr, 7);

//setting env list
clo73046[1] = car;
clo73046[2] = kont72641;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo73046[3] = foldl;
clo73046[4] = acc;
clo73046[5] = fun;
clo73046[6] = lst;
clo73046[7] = cdr;
void* f7264572759 = encode_clo(clo73046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7264572759;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam72913_fptr() // lam72913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72914 = arg_buffer[1];
//reading env and args
void* a7255472774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72646 = (decode_clo(env72914))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env72914))[2];
//not do dummy comment
void* a7255272770 = (decode_clo(env72914))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont72646;
arg_buffer[3] = a7255272770;
arg_buffer[4] = a7255472774;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72913 = encode_clo(alloc_clo(lam72913_fptr, 0));

void* lam72915_fptr() // lam72915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72916 = arg_buffer[1];
//reading env and args
void* a7255372772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72646 = (decode_clo(env72916))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env72916))[4];
//not do dummy comment
void* lst2 = (decode_clo(env72916))[3];
//not do dummy comment
void* a7255272770 = (decode_clo(env72916))[2];
//not do dummy comment
void* cons = (decode_clo(env72916))[1];

//creating new closure instance
void** clo73048 = alloc_clo(lam72913_fptr, 3);

//setting env list
clo73048[1] = a7255272770;
clo73048[2] = reverse_u45helper;
clo73048[3] = kont72646;
void* f7264772773 = encode_clo(clo73048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7264772773;
arg_buffer[3] = a7255372772;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72915 = encode_clo(alloc_clo(lam72915_fptr, 0));

void* lam72917_fptr() // lam72917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72918 = arg_buffer[1];
//reading env and args
void* a7255272770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72646 = (decode_clo(env72918))[6];
//not do dummy comment
void* lst = (decode_clo(env72918))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env72918))[4];
//not do dummy comment
void* lst2 = (decode_clo(env72918))[3];
//not do dummy comment
void* car = (decode_clo(env72918))[2];
//not do dummy comment
void* cons = (decode_clo(env72918))[1];

//creating new closure instance
void** clo73050 = alloc_clo(lam72915_fptr, 5);

//setting env list
clo73050[1] = cons;
clo73050[2] = a7255272770;
clo73050[3] = lst2;
clo73050[4] = reverse_u45helper;
clo73050[5] = kont72646;
void* f7264872771 = encode_clo(clo73050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7264872771;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72917 = encode_clo(alloc_clo(lam72917_fptr, 0));

void* lam72919_fptr() // lam72919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72920 = arg_buffer[1];
//reading env and args
void* a7255172768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72920))[7];
//not do dummy comment
void* kont72646 = (decode_clo(env72920))[6];
//not do dummy comment
void* lst = (decode_clo(env72920))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env72920))[4];
//not do dummy comment
void* lst2 = (decode_clo(env72920))[3];
//not do dummy comment
void* car = (decode_clo(env72920))[2];
//not do dummy comment
void* cons = (decode_clo(env72920))[1];

//if-clause
bool if_guard73051 = is_true(a7255172768);
if(if_guard73051)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72646);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72646))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo73053 = alloc_clo(lam72917_fptr, 6);

//setting env list
clo73053[1] = cons;
clo73053[2] = car;
clo73053[3] = lst2;
clo73053[4] = reverse_u45helper;
clo73053[5] = lst;
clo73053[6] = kont72646;
void* f7264972769 = encode_clo(clo73053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7264972769;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72919 = encode_clo(alloc_clo(lam72919_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72921 = arg_buffer[1];
//reading env and args
void* kont72646 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo73055 = alloc_clo(lam72919_fptr, 7);

//setting env list
clo73055[1] = cons;
clo73055[2] = car;
clo73055[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo73055[4] = reverse_u45helper;
clo73055[5] = lst;
clo73055[6] = kont72646;
clo73055[7] = cdr;
void* f7265072767 = encode_clo(clo73055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7265072767;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam72922_fptr() // lam72922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72923 = arg_buffer[1];
//reading env and args
void* a7255572776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env72923))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env72923))[2];
//not do dummy comment
void* kont72651 = (decode_clo(env72923))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont72651;
arg_buffer[3] = lst;
arg_buffer[4] = a7255572776;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72922 = encode_clo(alloc_clo(lam72922_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72924 = arg_buffer[1];
//reading env and args
void* kont72651 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo73057 = alloc_clo(lam72922_fptr, 3);

//setting env list
clo73057[1] = kont72651;
clo73057[2] = reverse_u45helper;
clo73057[3] = lst;
void* f7265272775 = encode_clo(clo73057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7265272775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam72925_fptr() // lam72925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72926 = arg_buffer[1];
//reading env and args
void* x7255872781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72653 = (decode_clo(env72926))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72653);
arg_buffer[2] = x7255872781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72653))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72925 = encode_clo(alloc_clo(lam72925_fptr, 0));

void* lam72927_fptr() // lam72927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72928 = arg_buffer[1];
//reading env and args
void* a7256372790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72653 = (decode_clo(env72928))[4];
//not do dummy comment
void* a7255972783 = (decode_clo(env72928))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env72928))[2];
//not do dummy comment
void* a7256172786 = (decode_clo(env72928))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont72653;
arg_buffer[3] = a7255972783;
arg_buffer[4] = a7256172786;
arg_buffer[5] = a7256372790;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72927 = encode_clo(alloc_clo(lam72927_fptr, 0));

void* lam72929_fptr() // lam72929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72930 = arg_buffer[1];
//reading env and args
void* a7256272788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72653 = (decode_clo(env72930))[6];
//not do dummy comment
void* a7255972783 = (decode_clo(env72930))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env72930))[4];
//not do dummy comment
void* lst2 = (decode_clo(env72930))[3];
//not do dummy comment
void* cons = (decode_clo(env72930))[2];
//not do dummy comment
void* a7256172786 = (decode_clo(env72930))[1];

//creating new closure instance
void** clo73059 = alloc_clo(lam72927_fptr, 4);

//setting env list
clo73059[1] = a7256172786;
clo73059[2] = take_u45helper;
clo73059[3] = a7255972783;
clo73059[4] = kont72653;
void* f7265572789 = encode_clo(clo73059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7265572789;
arg_buffer[3] = a7256272788;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72929 = encode_clo(alloc_clo(lam72929_fptr, 0));

void* lam72931_fptr() // lam72931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72932 = arg_buffer[1];
//reading env and args
void* a7256172786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env72932))[7];
//not do dummy comment
void* kont72653 = (decode_clo(env72932))[6];
//not do dummy comment
void* a7255972783 = (decode_clo(env72932))[5];
//not do dummy comment
void* car = (decode_clo(env72932))[4];
//not do dummy comment
void* cons = (decode_clo(env72932))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env72932))[2];
//not do dummy comment
void* lst2 = (decode_clo(env72932))[1];

//creating new closure instance
void** clo73061 = alloc_clo(lam72929_fptr, 6);

//setting env list
clo73061[1] = a7256172786;
clo73061[2] = cons;
clo73061[3] = lst2;
clo73061[4] = take_u45helper;
clo73061[5] = a7255972783;
clo73061[6] = kont72653;
void* f7265672787 = encode_clo(clo73061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7265672787;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72931 = encode_clo(alloc_clo(lam72931_fptr, 0));

void* lam72934_fptr() // lam72934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72935 = arg_buffer[1];
//reading env and args
void* a7255972783 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env72935))[8];
//not do dummy comment
void* kont72653 = (decode_clo(env72935))[7];
//not do dummy comment
void* cons = (decode_clo(env72935))[6];
//not do dummy comment
void* _u45 = (decode_clo(env72935))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env72935))[4];
//not do dummy comment
void* lst2 = (decode_clo(env72935))[3];
//not do dummy comment
void* n = (decode_clo(env72935))[2];
//not do dummy comment
void* car = (decode_clo(env72935))[1];
mpz_t* mpzvar73062 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73062, "1", 10);
void* a7256072784 = encode_mpz(mpzvar73062);

//creating new closure instance
void** clo73064 = alloc_clo(lam72931_fptr, 7);

//setting env list
clo73064[1] = lst2;
clo73064[2] = take_u45helper;
clo73064[3] = cons;
clo73064[4] = car;
clo73064[5] = a7255972783;
clo73064[6] = kont72653;
clo73064[7] = lst;
void* f7265772785 = encode_clo(clo73064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7265772785;
arg_buffer[3] = n;
arg_buffer[4] = a7256072784;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72934 = encode_clo(alloc_clo(lam72934_fptr, 0));

void* lam72936_fptr() // lam72936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72937 = arg_buffer[1];
//reading env and args
void* a7255772779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72937))[10];
//not do dummy comment
void* lst = (decode_clo(env72937))[9];
//not do dummy comment
void* reverse = (decode_clo(env72937))[8];
//not do dummy comment
void* kont72653 = (decode_clo(env72937))[7];
//not do dummy comment
void* cons = (decode_clo(env72937))[6];
//not do dummy comment
void* _u45 = (decode_clo(env72937))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env72937))[4];
//not do dummy comment
void* lst2 = (decode_clo(env72937))[3];
//not do dummy comment
void* n = (decode_clo(env72937))[2];
//not do dummy comment
void* car = (decode_clo(env72937))[1];

//if-clause
bool if_guard73065 = is_true(a7255772779);
if(if_guard73065)
{

//creating new closure instance
void** clo73067 = alloc_clo(lam72925_fptr, 1);

//setting env list
clo73067[1] = kont72653;
void* f7265472780 = encode_clo(clo73067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f7265472780;
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
void** clo73069 = alloc_clo(lam72934_fptr, 8);

//setting env list
clo73069[1] = car;
clo73069[2] = n;
clo73069[3] = lst2;
clo73069[4] = take_u45helper;
clo73069[5] = _u45;
clo73069[6] = cons;
clo73069[7] = kont72653;
clo73069[8] = lst;
void* f7265872782 = encode_clo(clo73069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7265872782;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72936 = encode_clo(alloc_clo(lam72936_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72939 = arg_buffer[1];
//reading env and args
void* kont72653 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar73070 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73070, "0", 10);
void* a7255672777 = encode_mpz(mpzvar73070);

//creating new closure instance
void** clo73072 = alloc_clo(lam72936_fptr, 10);

//setting env list
clo73072[1] = car;
clo73072[2] = n;
clo73072[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo73072[4] = take_u45helper;
clo73072[5] = _u45;
clo73072[6] = cons;
clo73072[7] = kont72653;
clo73072[8] = reverse;
clo73072[9] = lst;
clo73072[10] = cdr;
void* f7265972778 = encode_clo(clo73072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7265972778;
arg_buffer[3] = n;
arg_buffer[4] = a7255672777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam72940_fptr() // lam72940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72941 = arg_buffer[1];
//reading env and args
void* a7256472792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72660 = (decode_clo(env72941))[4];
//not do dummy comment
void* lst = (decode_clo(env72941))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env72941))[2];
//not do dummy comment
void* n = (decode_clo(env72941))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont72660;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a7256472792;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72940 = encode_clo(alloc_clo(lam72940_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72942 = arg_buffer[1];
//reading env and args
void* kont72660 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo73074 = alloc_clo(lam72940_fptr, 4);

//setting env list
clo73074[1] = n;
clo73074[2] = take_u45helper;
clo73074[3] = lst;
clo73074[4] = kont72660;
void* f7266172791 = encode_clo(clo73074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7266172791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam72944_fptr() // lam72944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72945 = arg_buffer[1];
//reading env and args
void* a7256972800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72662 = (decode_clo(env72945))[3];
//not do dummy comment
void* a7256772796 = (decode_clo(env72945))[2];
//not do dummy comment
void* _u43 = (decode_clo(env72945))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont72662;
arg_buffer[3] = a7256772796;
arg_buffer[4] = a7256972800;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72944 = encode_clo(alloc_clo(lam72944_fptr, 0));

void* lam72946_fptr() // lam72946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72947 = arg_buffer[1];
//reading env and args
void* a7256872798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72662 = (decode_clo(env72947))[4];
//not do dummy comment
void* length = (decode_clo(env72947))[3];
//not do dummy comment
void* a7256772796 = (decode_clo(env72947))[2];
//not do dummy comment
void* _u43 = (decode_clo(env72947))[1];

//creating new closure instance
void** clo73076 = alloc_clo(lam72944_fptr, 3);

//setting env list
clo73076[1] = _u43;
clo73076[2] = a7256772796;
clo73076[3] = kont72662;
void* f7266372799 = encode_clo(clo73076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f7266372799;
arg_buffer[3] = a7256872798;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72946 = encode_clo(alloc_clo(lam72946_fptr, 0));

void* lam72949_fptr() // lam72949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72950 = arg_buffer[1];
//reading env and args
void* a7256572794 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72950))[5];
//not do dummy comment
void* kont72662 = (decode_clo(env72950))[4];
//not do dummy comment
void* lst = (decode_clo(env72950))[3];
//not do dummy comment
void* length = (decode_clo(env72950))[2];
//not do dummy comment
void* _u43 = (decode_clo(env72950))[1];

//if-clause
bool if_guard73077 = is_true(a7256572794);
if(if_guard73077)
{
mpz_t* mpzvar73078 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73078, "0", 10);
void* x7256672795 = encode_mpz(mpzvar73078);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72662);
arg_buffer[2] = x7256672795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72662))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar73079 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73079, "1", 10);
void* a7256772796 = encode_mpz(mpzvar73079);

//creating new closure instance
void** clo73081 = alloc_clo(lam72946_fptr, 4);

//setting env list
clo73081[1] = _u43;
clo73081[2] = a7256772796;
clo73081[3] = length;
clo73081[4] = kont72662;
void* f7266472797 = encode_clo(clo73081);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7266472797;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72949 = encode_clo(alloc_clo(lam72949_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72951 = arg_buffer[1];
//reading env and args
void* kont72662 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo73083 = alloc_clo(lam72949_fptr, 5);

//setting env list
clo73083[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo73083[2] = length;
clo73083[3] = lst;
clo73083[4] = kont72662;
clo73083[5] = cdr;
void* f7266572793 = encode_clo(clo73083);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7266572793;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam72952_fptr() // lam72952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72953 = arg_buffer[1];
//reading env and args
void* x7257172804 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72666 = (decode_clo(env72953))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72666);
arg_buffer[2] = x7257172804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72666))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72952 = encode_clo(alloc_clo(lam72952_fptr, 0));

void* lam72954_fptr() // lam72954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72955 = arg_buffer[1];
//reading env and args
void* a7257572812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7257372808 = (decode_clo(env72955))[3];
//not do dummy comment
void* kont72666 = (decode_clo(env72955))[2];
//not do dummy comment
void* cons = (decode_clo(env72955))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont72666;
arg_buffer[3] = a7257372808;
arg_buffer[4] = a7257572812;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72954 = encode_clo(alloc_clo(lam72954_fptr, 0));

void* lam72956_fptr() // lam72956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72957 = arg_buffer[1];
//reading env and args
void* a7257472810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7257372808 = (decode_clo(env72957))[5];
//not do dummy comment
void* map = (decode_clo(env72957))[4];
//not do dummy comment
void* kont72666 = (decode_clo(env72957))[3];
//not do dummy comment
void* proc = (decode_clo(env72957))[2];
//not do dummy comment
void* cons = (decode_clo(env72957))[1];

//creating new closure instance
void** clo73085 = alloc_clo(lam72954_fptr, 3);

//setting env list
clo73085[1] = cons;
clo73085[2] = kont72666;
clo73085[3] = a7257372808;
void* f7266872811 = encode_clo(clo73085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f7266872811;
arg_buffer[3] = proc;
arg_buffer[4] = a7257472810;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72956 = encode_clo(alloc_clo(lam72956_fptr, 0));

void* lam72958_fptr() // lam72958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72959 = arg_buffer[1];
//reading env and args
void* a7257372808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72959))[6];
//not do dummy comment
void* lst = (decode_clo(env72959))[5];
//not do dummy comment
void* map = (decode_clo(env72959))[4];
//not do dummy comment
void* kont72666 = (decode_clo(env72959))[3];
//not do dummy comment
void* proc = (decode_clo(env72959))[2];
//not do dummy comment
void* cons = (decode_clo(env72959))[1];

//creating new closure instance
void** clo73087 = alloc_clo(lam72956_fptr, 5);

//setting env list
clo73087[1] = cons;
clo73087[2] = proc;
clo73087[3] = kont72666;
clo73087[4] = map;
clo73087[5] = a7257372808;
void* f7266972809 = encode_clo(clo73087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7266972809;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72958 = encode_clo(alloc_clo(lam72958_fptr, 0));

void* lam72960_fptr() // lam72960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72961 = arg_buffer[1];
//reading env and args
void* a7257272806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72961))[6];
//not do dummy comment
void* lst = (decode_clo(env72961))[5];
//not do dummy comment
void* map = (decode_clo(env72961))[4];
//not do dummy comment
void* kont72666 = (decode_clo(env72961))[3];
//not do dummy comment
void* proc = (decode_clo(env72961))[2];
//not do dummy comment
void* cons = (decode_clo(env72961))[1];

//creating new closure instance
void** clo73089 = alloc_clo(lam72958_fptr, 6);

//setting env list
clo73089[1] = cons;
clo73089[2] = proc;
clo73089[3] = kont72666;
clo73089[4] = map;
clo73089[5] = lst;
clo73089[6] = cdr;
void* f7267072807 = encode_clo(clo73089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f7267072807;
arg_buffer[3] = a7257272806;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72960 = encode_clo(alloc_clo(lam72960_fptr, 0));

void* lam72962_fptr() // lam72962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72963 = arg_buffer[1];
//reading env and args
void* a7257072802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env72963))[8];
//not do dummy comment
void* map = (decode_clo(env72963))[7];
//not do dummy comment
void* kont72666 = (decode_clo(env72963))[6];
//not do dummy comment
void* proc = (decode_clo(env72963))[5];
//not do dummy comment
void* car = (decode_clo(env72963))[4];
//not do dummy comment
void* cons = (decode_clo(env72963))[3];
//not do dummy comment
void* list = (decode_clo(env72963))[2];
//not do dummy comment
void* cdr = (decode_clo(env72963))[1];

//if-clause
bool if_guard73090 = is_true(a7257072802);
if(if_guard73090)
{

//creating new closure instance
void** clo73092 = alloc_clo(lam72952_fptr, 1);

//setting env list
clo73092[1] = kont72666;
void* f7266772803 = encode_clo(clo73092);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7266772803;
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
void** clo73094 = alloc_clo(lam72960_fptr, 6);

//setting env list
clo73094[1] = cons;
clo73094[2] = proc;
clo73094[3] = kont72666;
clo73094[4] = map;
clo73094[5] = lst;
clo73094[6] = cdr;
void* f7267172805 = encode_clo(clo73094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7267172805;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72962 = encode_clo(alloc_clo(lam72962_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72964 = arg_buffer[1];
//reading env and args
void* kont72666 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo73096 = alloc_clo(lam72962_fptr, 8);

//setting env list
clo73096[1] = cdr;
clo73096[2] = list;
clo73096[3] = cons;
clo73096[4] = car;
clo73096[5] = proc;
clo73096[6] = kont72666;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo73096[7] = map;
clo73096[8] = lst;
void* f7267272801 = encode_clo(clo73096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7267272801;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam72965_fptr() // lam72965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72966 = arg_buffer[1];
//reading env and args
void* x7257772816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72673 = (decode_clo(env72966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72673);
arg_buffer[2] = x7257772816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72673))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72965 = encode_clo(alloc_clo(lam72965_fptr, 0));

void* lam72967_fptr() // lam72967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72968 = arg_buffer[1];
//reading env and args
void* a7258272826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7258072822 = (decode_clo(env72968))[3];
//not do dummy comment
void* kont72673 = (decode_clo(env72968))[2];
//not do dummy comment
void* cons = (decode_clo(env72968))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont72673;
arg_buffer[3] = a7258072822;
arg_buffer[4] = a7258272826;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72967 = encode_clo(alloc_clo(lam72967_fptr, 0));

void* lam72969_fptr() // lam72969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72970 = arg_buffer[1];
//reading env and args
void* a7258172824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7258072822 = (decode_clo(env72970))[5];
//not do dummy comment
void* op = (decode_clo(env72970))[4];
//not do dummy comment
void* cons = (decode_clo(env72970))[3];
//not do dummy comment
void* filter = (decode_clo(env72970))[2];
//not do dummy comment
void* kont72673 = (decode_clo(env72970))[1];

//creating new closure instance
void** clo73098 = alloc_clo(lam72967_fptr, 3);

//setting env list
clo73098[1] = cons;
clo73098[2] = kont72673;
clo73098[3] = a7258072822;
void* f7267572825 = encode_clo(clo73098);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f7267572825;
arg_buffer[3] = op;
arg_buffer[4] = a7258172824;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72969 = encode_clo(alloc_clo(lam72969_fptr, 0));

void* lam72971_fptr() // lam72971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72972 = arg_buffer[1];
//reading env and args
void* a7258072822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72972))[6];
//not do dummy comment
void* lst = (decode_clo(env72972))[5];
//not do dummy comment
void* op = (decode_clo(env72972))[4];
//not do dummy comment
void* cons = (decode_clo(env72972))[3];
//not do dummy comment
void* filter = (decode_clo(env72972))[2];
//not do dummy comment
void* kont72673 = (decode_clo(env72972))[1];

//creating new closure instance
void** clo73100 = alloc_clo(lam72969_fptr, 5);

//setting env list
clo73100[1] = kont72673;
clo73100[2] = filter;
clo73100[3] = cons;
clo73100[4] = op;
clo73100[5] = a7258072822;
void* f7267672823 = encode_clo(clo73100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7267672823;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72971 = encode_clo(alloc_clo(lam72971_fptr, 0));

void* lam72973_fptr() // lam72973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72974 = arg_buffer[1];
//reading env and args
void* a7258372828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env72974))[3];
//not do dummy comment
void* filter = (decode_clo(env72974))[2];
//not do dummy comment
void* kont72673 = (decode_clo(env72974))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont72673;
arg_buffer[3] = op;
arg_buffer[4] = a7258372828;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72973 = encode_clo(alloc_clo(lam72973_fptr, 0));

void* lam72975_fptr() // lam72975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72976 = arg_buffer[1];
//reading env and args
void* a7257972820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72976))[7];
//not do dummy comment
void* lst = (decode_clo(env72976))[6];
//not do dummy comment
void* op = (decode_clo(env72976))[5];
//not do dummy comment
void* cons = (decode_clo(env72976))[4];
//not do dummy comment
void* filter = (decode_clo(env72976))[3];
//not do dummy comment
void* kont72673 = (decode_clo(env72976))[2];
//not do dummy comment
void* car = (decode_clo(env72976))[1];

//if-clause
bool if_guard73101 = is_true(a7257972820);
if(if_guard73101)
{

//creating new closure instance
void** clo73103 = alloc_clo(lam72971_fptr, 6);

//setting env list
clo73103[1] = kont72673;
clo73103[2] = filter;
clo73103[3] = cons;
clo73103[4] = op;
clo73103[5] = lst;
clo73103[6] = cdr;
void* f7267772821 = encode_clo(clo73103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7267772821;
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
void** clo73105 = alloc_clo(lam72973_fptr, 3);

//setting env list
clo73105[1] = kont72673;
clo73105[2] = filter;
clo73105[3] = op;
void* f7267872827 = encode_clo(clo73105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7267872827;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72975 = encode_clo(alloc_clo(lam72975_fptr, 0));

void* lam72977_fptr() // lam72977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72978 = arg_buffer[1];
//reading env and args
void* a7257872818 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72978))[7];
//not do dummy comment
void* lst = (decode_clo(env72978))[6];
//not do dummy comment
void* op = (decode_clo(env72978))[5];
//not do dummy comment
void* cons = (decode_clo(env72978))[4];
//not do dummy comment
void* filter = (decode_clo(env72978))[3];
//not do dummy comment
void* kont72673 = (decode_clo(env72978))[2];
//not do dummy comment
void* car = (decode_clo(env72978))[1];

//creating new closure instance
void** clo73107 = alloc_clo(lam72975_fptr, 7);

//setting env list
clo73107[1] = car;
clo73107[2] = kont72673;
clo73107[3] = filter;
clo73107[4] = cons;
clo73107[5] = op;
clo73107[6] = lst;
clo73107[7] = cdr;
void* f7267972819 = encode_clo(clo73107);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f7267972819;
arg_buffer[3] = a7257872818;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72977 = encode_clo(alloc_clo(lam72977_fptr, 0));

void* lam72979_fptr() // lam72979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72980 = arg_buffer[1];
//reading env and args
void* a7257672814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env72980))[8];
//not do dummy comment
void* op = (decode_clo(env72980))[7];
//not do dummy comment
void* cons = (decode_clo(env72980))[6];
//not do dummy comment
void* list = (decode_clo(env72980))[5];
//not do dummy comment
void* cdr = (decode_clo(env72980))[4];
//not do dummy comment
void* filter = (decode_clo(env72980))[3];
//not do dummy comment
void* kont72673 = (decode_clo(env72980))[2];
//not do dummy comment
void* car = (decode_clo(env72980))[1];

//if-clause
bool if_guard73108 = is_true(a7257672814);
if(if_guard73108)
{

//creating new closure instance
void** clo73110 = alloc_clo(lam72965_fptr, 1);

//setting env list
clo73110[1] = kont72673;
void* f7267472815 = encode_clo(clo73110);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7267472815;
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
void** clo73112 = alloc_clo(lam72977_fptr, 7);

//setting env list
clo73112[1] = car;
clo73112[2] = kont72673;
clo73112[3] = filter;
clo73112[4] = cons;
clo73112[5] = op;
clo73112[6] = lst;
clo73112[7] = cdr;
void* f7268072817 = encode_clo(clo73112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7268072817;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72979 = encode_clo(alloc_clo(lam72979_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72981 = arg_buffer[1];
//reading env and args
void* kont72673 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo73114 = alloc_clo(lam72979_fptr, 8);

//setting env list
clo73114[1] = car;
clo73114[2] = kont72673;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo73114[3] = filter;
clo73114[4] = cdr;
clo73114[5] = list;
clo73114[6] = cons;
clo73114[7] = op;
clo73114[8] = lst;
void* f7268172813 = encode_clo(clo73114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7268172813;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam72982_fptr() // lam72982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72983 = arg_buffer[1];
//reading env and args
void* a7258872836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env72983))[3];
//not do dummy comment
void* kont72682 = (decode_clo(env72983))[2];
//not do dummy comment
void* a7258672833 = (decode_clo(env72983))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont72682;
arg_buffer[3] = a7258672833;
arg_buffer[4] = a7258872836;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72982 = encode_clo(alloc_clo(lam72982_fptr, 0));

void* lam72985_fptr() // lam72985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72986 = arg_buffer[1];
//reading env and args
void* a7258672833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env72986))[4];
//not do dummy comment
void* kont72682 = (decode_clo(env72986))[3];
//not do dummy comment
void* n = (decode_clo(env72986))[2];
//not do dummy comment
void* _u45 = (decode_clo(env72986))[1];
mpz_t* mpzvar73115 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73115, "1", 10);
void* a7258772834 = encode_mpz(mpzvar73115);

//creating new closure instance
void** clo73117 = alloc_clo(lam72982_fptr, 3);

//setting env list
clo73117[1] = a7258672833;
clo73117[2] = kont72682;
clo73117[3] = drop;
void* f7268372835 = encode_clo(clo73117);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7268372835;
arg_buffer[3] = n;
arg_buffer[4] = a7258772834;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72985 = encode_clo(alloc_clo(lam72985_fptr, 0));

void* lam72987_fptr() // lam72987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72988 = arg_buffer[1];
//reading env and args
void* a7258572831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72988))[6];
//not do dummy comment
void* kont72682 = (decode_clo(env72988))[5];
//not do dummy comment
void* n = (decode_clo(env72988))[4];
//not do dummy comment
void* _u45 = (decode_clo(env72988))[3];
//not do dummy comment
void* lst = (decode_clo(env72988))[2];
//not do dummy comment
void* drop = (decode_clo(env72988))[1];

//if-clause
bool if_guard73118 = is_true(a7258572831);
if(if_guard73118)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72682);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72682))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo73120 = alloc_clo(lam72985_fptr, 4);

//setting env list
clo73120[1] = _u45;
clo73120[2] = n;
clo73120[3] = kont72682;
clo73120[4] = drop;
void* f7268472832 = encode_clo(clo73120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7268472832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72987 = encode_clo(alloc_clo(lam72987_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72990 = arg_buffer[1];
//reading env and args
void* kont72682 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar73121 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73121, "0", 10);
void* a7258472829 = encode_mpz(mpzvar73121);

//creating new closure instance
void** clo73123 = alloc_clo(lam72987_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo73123[1] = drop;
clo73123[2] = lst;
clo73123[3] = _u45;
clo73123[4] = n;
clo73123[5] = kont72682;
clo73123[6] = cdr;
void* f7268572830 = encode_clo(clo73123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7268572830;
arg_buffer[3] = n;
arg_buffer[4] = a7258472829;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam72991_fptr() // lam72991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72992 = arg_buffer[1];
//reading env and args
void* a7259272844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7259072840 = (decode_clo(env72992))[3];
//not do dummy comment
void* kont72686 = (decode_clo(env72992))[2];
//not do dummy comment
void* proc = (decode_clo(env72992))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont72686;
arg_buffer[3] = a7259072840;
arg_buffer[4] = a7259272844;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72991 = encode_clo(alloc_clo(lam72991_fptr, 0));

void* lam72993_fptr() // lam72993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72994 = arg_buffer[1];
//reading env and args
void* a7259172842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont72686 = (decode_clo(env72994))[5];
//not do dummy comment
void* foldr = (decode_clo(env72994))[4];
//not do dummy comment
void* a7259072840 = (decode_clo(env72994))[3];
//not do dummy comment
void* proc = (decode_clo(env72994))[2];
//not do dummy comment
void* acc = (decode_clo(env72994))[1];

//creating new closure instance
void** clo73125 = alloc_clo(lam72991_fptr, 3);

//setting env list
clo73125[1] = proc;
clo73125[2] = kont72686;
clo73125[3] = a7259072840;
void* f7268772843 = encode_clo(clo73125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f7268772843;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a7259172842;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72993 = encode_clo(alloc_clo(lam72993_fptr, 0));

void* lam72995_fptr() // lam72995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72996 = arg_buffer[1];
//reading env and args
void* a7259072840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72996))[6];
//not do dummy comment
void* kont72686 = (decode_clo(env72996))[5];
//not do dummy comment
void* foldr = (decode_clo(env72996))[4];
//not do dummy comment
void* lst = (decode_clo(env72996))[3];
//not do dummy comment
void* proc = (decode_clo(env72996))[2];
//not do dummy comment
void* acc = (decode_clo(env72996))[1];

//creating new closure instance
void** clo73127 = alloc_clo(lam72993_fptr, 5);

//setting env list
clo73127[1] = acc;
clo73127[2] = proc;
clo73127[3] = a7259072840;
clo73127[4] = foldr;
clo73127[5] = kont72686;
void* f7268872841 = encode_clo(clo73127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7268872841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam72995 = encode_clo(alloc_clo(lam72995_fptr, 0));

void* lam72997_fptr() // lam72997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env72998 = arg_buffer[1];
//reading env and args
void* a7258972838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env72998))[7];
//not do dummy comment
void* kont72686 = (decode_clo(env72998))[6];
//not do dummy comment
void* car = (decode_clo(env72998))[5];
//not do dummy comment
void* foldr = (decode_clo(env72998))[4];
//not do dummy comment
void* lst = (decode_clo(env72998))[3];
//not do dummy comment
void* proc = (decode_clo(env72998))[2];
//not do dummy comment
void* acc = (decode_clo(env72998))[1];

//if-clause
bool if_guard73128 = is_true(a7258972838);
if(if_guard73128)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72686);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72686))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo73130 = alloc_clo(lam72995_fptr, 6);

//setting env list
clo73130[1] = acc;
clo73130[2] = proc;
clo73130[3] = lst;
clo73130[4] = foldr;
clo73130[5] = kont72686;
clo73130[6] = cdr;
void* f7268972839 = encode_clo(clo73130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7268972839;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam72997 = encode_clo(alloc_clo(lam72997_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _72999 = arg_buffer[1];
//reading env and args
void* kont72686 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo73132 = alloc_clo(lam72997_fptr, 7);

//setting env list
clo73132[1] = acc;
clo73132[2] = proc;
clo73132[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo73132[4] = foldr;
clo73132[5] = car;
clo73132[6] = kont72686;
clo73132[7] = cdr;
void* f7269072837 = encode_clo(clo73132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7269072837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam73000_fptr() // lam73000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73001 = arg_buffer[1];
//reading env and args
void* a7259672852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7259472848 = (decode_clo(env73001))[3];
//not do dummy comment
void* cons = (decode_clo(env73001))[2];
//not do dummy comment
void* kont72691 = (decode_clo(env73001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont72691;
arg_buffer[3] = a7259472848;
arg_buffer[4] = a7259672852;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73000 = encode_clo(alloc_clo(lam73000_fptr, 0));

void* lam73002_fptr() // lam73002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73003 = arg_buffer[1];
//reading env and args
void* a7259572850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env73003))[5];
//not do dummy comment
void* cons = (decode_clo(env73003))[4];
//not do dummy comment
void* kont72691 = (decode_clo(env73003))[3];
//not do dummy comment
void* a7259472848 = (decode_clo(env73003))[2];
//not do dummy comment
void* lst2 = (decode_clo(env73003))[1];

//creating new closure instance
void** clo73134 = alloc_clo(lam73000_fptr, 3);

//setting env list
clo73134[1] = kont72691;
clo73134[2] = cons;
clo73134[3] = a7259472848;
void* f7269272851 = encode_clo(clo73134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f7269272851;
arg_buffer[3] = a7259572850;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73002 = encode_clo(alloc_clo(lam73002_fptr, 0));

void* lam73004_fptr() // lam73004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73005 = arg_buffer[1];
//reading env and args
void* a7259472848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73005))[6];
//not do dummy comment
void* append = (decode_clo(env73005))[5];
//not do dummy comment
void* lst2 = (decode_clo(env73005))[4];
//not do dummy comment
void* lst1 = (decode_clo(env73005))[3];
//not do dummy comment
void* cons = (decode_clo(env73005))[2];
//not do dummy comment
void* kont72691 = (decode_clo(env73005))[1];

//creating new closure instance
void** clo73136 = alloc_clo(lam73002_fptr, 5);

//setting env list
clo73136[1] = lst2;
clo73136[2] = a7259472848;
clo73136[3] = kont72691;
clo73136[4] = cons;
clo73136[5] = append;
void* f7269372849 = encode_clo(clo73136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7269372849;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73004 = encode_clo(alloc_clo(lam73004_fptr, 0));

void* lam73006_fptr() // lam73006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73007 = arg_buffer[1];
//reading env and args
void* a7259372846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73007))[7];
//not do dummy comment
void* append = (decode_clo(env73007))[6];
//not do dummy comment
void* lst2 = (decode_clo(env73007))[5];
//not do dummy comment
void* cons = (decode_clo(env73007))[4];
//not do dummy comment
void* kont72691 = (decode_clo(env73007))[3];
//not do dummy comment
void* lst1 = (decode_clo(env73007))[2];
//not do dummy comment
void* car = (decode_clo(env73007))[1];

//if-clause
bool if_guard73137 = is_true(a7259372846);
if(if_guard73137)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72691);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72691))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo73139 = alloc_clo(lam73004_fptr, 6);

//setting env list
clo73139[1] = kont72691;
clo73139[2] = cons;
clo73139[3] = lst1;
clo73139[4] = lst2;
clo73139[5] = append;
clo73139[6] = cdr;
void* f7269472847 = encode_clo(clo73139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7269472847;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73006 = encode_clo(alloc_clo(lam73006_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73008 = arg_buffer[1];
//reading env and args
void* kont72691 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo73141 = alloc_clo(lam73006_fptr, 7);

//setting env list
clo73141[1] = car;
clo73141[2] = lst1;
clo73141[3] = kont72691;
clo73141[4] = cons;
clo73141[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo73141[6] = append;
clo73141[7] = cdr;
void* f7269572845 = encode_clo(clo73141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7269572845;
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
void* _73009 = arg_buffer[1];
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

void* kont7269672853 = prim_car(lst);
void* lst72854 = prim_cdr(lst);
void* x7259772855 = apply_prim_hash(lst72854);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7269672853);
arg_buffer[2] = x7259772855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7269672853))[0]);
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
void* _73010 = arg_buffer[1];
//reading env and args
void* kont72698 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7259872856 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72698);
arg_buffer[2] = x7259872856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72698))[0]);
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
void* _73011 = arg_buffer[1];
//reading env and args
void* kont72699 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x7259972857 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72699);
arg_buffer[2] = x7259972857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72699))[0]);
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
void* _73012 = arg_buffer[1];
//reading env and args
void* kont72700 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7260072858 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72700);
arg_buffer[2] = x7260072858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72700))[0]);
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
void* _73013 = arg_buffer[1];
//reading env and args
void* kont72701 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x7260172859 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont72701);
arg_buffer[2] = x7260172859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont72701))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam73014_fptr() // lam73014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73015 = arg_buffer[1];
//reading env and args
void* cont7270372861 = arg_buffer[2];
void* a7251772862 = arg_buffer[3];
void* b7251872863 = arg_buffer[4];
//Dummy comment

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cont7270372861);
arg_buffer[2] = b7251872863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont7270372861))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73014 = encode_clo(alloc_clo(lam73014_fptr, 0));

void* lam_fptr() // lam 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73016 = arg_buffer[1];
//reading env and args
void* kont72702 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo73143 = alloc_clo(lam73014_fptr, 0);
void* a7260272860 = encode_clo(clo73143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(a7260272860);
arg_buffer[2] = kont72702;
arg_buffer[3] = x;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(a7260272860))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam = encode_clo(alloc_clo(lam_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73019 = arg_buffer[1];
//reading env and args
void* kont72704 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar73144 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73144, "5", 10);
void* a7260372864 = encode_mpz(mpzvar73144);
mpz_t* mpzvar73145 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar73145, "6", 10);
void* a7260472865 = encode_mpz(mpzvar73145);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(lam);
arg_buffer[2] = kont72704;
arg_buffer[3] = a7260372864;
arg_buffer[4] = a7260472865;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(lam))[0]);
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

