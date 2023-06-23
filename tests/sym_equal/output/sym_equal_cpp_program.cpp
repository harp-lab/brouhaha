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
void* _112028 = arg_buffer[1];
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

void* kont111766111866 = prim_car(lst);
void* lst111867 = prim_cdr(lst);
void* x111677111868 = apply_prim__u43(lst111867);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111766111866);
arg_buffer[2] = x111677111868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111766111866))[0]);
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
void* _112029 = arg_buffer[1];
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

void* kont111768111869 = prim_car(lst);
void* lst111870 = prim_cdr(lst);
void* x111678111871 = apply_prim__u45(lst111870);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111768111869);
arg_buffer[2] = x111678111871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111768111869))[0]);
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
void* _112030 = arg_buffer[1];
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

void* kont111770111872 = prim_car(lst);
void* lst111873 = prim_cdr(lst);
void* x111679111874 = apply_prim__u42(lst111873);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111770111872);
arg_buffer[2] = x111679111874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111770111872))[0]);
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
void* _112031 = arg_buffer[1];
//reading env and args
void* kont111772 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x111680111875 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111772);
arg_buffer[2] = x111680111875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111772))[0]);
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
void* _112032 = arg_buffer[1];
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

void* kont111773111876 = prim_car(lst);
void* lst111877 = prim_cdr(lst);
void* x111681111878 = apply_prim__u47(lst111877);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111773111876);
arg_buffer[2] = x111681111878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111773111876))[0]);
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
void* _112033 = arg_buffer[1];
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

void* kont111775111879 = prim_car(lst);
void* lst111880 = prim_cdr(lst);
void* x111682111881 = apply_prim__u61(lst111880);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111775111879);
arg_buffer[2] = x111682111881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111775111879))[0]);
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
void* _112034 = arg_buffer[1];
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

void* kont111777111882 = prim_car(lst);
void* lst111883 = prim_cdr(lst);
void* x111683111884 = apply_prim__u62(lst111883);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111777111882);
arg_buffer[2] = x111683111884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111777111882))[0]);
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
void* _112035 = arg_buffer[1];
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

void* kont111779111885 = prim_car(lst);
void* lst111886 = prim_cdr(lst);
void* x111684111887 = apply_prim__u60(lst111886);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111779111885);
arg_buffer[2] = x111684111887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111779111885))[0]);
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
void* _112036 = arg_buffer[1];
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

void* kont111781111888 = prim_car(lst);
void* lst111889 = prim_cdr(lst);
void* x111685111890 = apply_prim__u60_u61(lst111889);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111781111888);
arg_buffer[2] = x111685111890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111781111888))[0]);
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
void* _112037 = arg_buffer[1];
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

void* kont111783111891 = prim_car(lst);
void* lst111892 = prim_cdr(lst);
void* x111686111893 = apply_prim__u62_u61(lst111892);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111783111891);
arg_buffer[2] = x111686111893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111783111891))[0]);
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
void* _112038 = arg_buffer[1];
//reading env and args
void* kont111785 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x111687111894 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111785);
arg_buffer[2] = x111687111894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111785))[0]);
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
void* _112039 = arg_buffer[1];
//reading env and args
void* kont111786 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x111688111895 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111786);
arg_buffer[2] = x111688111895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111786))[0]);
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
void* _112040 = arg_buffer[1];
//reading env and args
void* kont111787 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x111689111896 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111787);
arg_buffer[2] = x111689111896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111787))[0]);
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
void* _112041 = arg_buffer[1];
//reading env and args
void* kont111788 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x111690111897 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111788);
arg_buffer[2] = x111690111897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111788))[0]);
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
void* _112042 = arg_buffer[1];
//reading env and args
void* kont111789 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x111691111898 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111789);
arg_buffer[2] = x111691111898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111789))[0]);
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
void* _112043 = arg_buffer[1];
//reading env and args
void* kont111790 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x111692111899 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111790);
arg_buffer[2] = x111692111899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111790))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam112044_fptr() // lam112044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112045 = arg_buffer[1];
//reading env and args
void* a111695111903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111693111900 = (decode_clo(env112045))[3];
//not do dummy comment
void* kont111791 = (decode_clo(env112045))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env112045))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont111791;
arg_buffer[3] = a111693111900;
arg_buffer[4] = a111695111903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112044 = encode_clo(alloc_clo(lam112044_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112048 = arg_buffer[1];
//reading env and args
void* kont111791 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar112689 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112689, "0", 10);
void* a111693111900 = encode_mpz(mpzvar112689);
mpz_t* mpzvar112690 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112690, "2", 10);
void* a111694111901 = encode_mpz(mpzvar112690);

//creating new closure instance
void** clo112692 = alloc_clo(lam112044_fptr, 3);

//setting env list
clo112692[1] = equal_u63;
clo112692[2] = kont111791;
clo112692[3] = a111693111900;
void* f111792111902 = encode_clo(clo112692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f111792111902;
arg_buffer[3] = x;
arg_buffer[4] = a111694111901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam112049_fptr() // lam112049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112050 = arg_buffer[1];
//reading env and args
void* a111698111907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111793 = (decode_clo(env112050))[3];
//not do dummy comment
void* a111696111904 = (decode_clo(env112050))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env112050))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont111793;
arg_buffer[3] = a111696111904;
arg_buffer[4] = a111698111907;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112049 = encode_clo(alloc_clo(lam112049_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112053 = arg_buffer[1];
//reading env and args
void* kont111793 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar112693 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112693, "1", 10);
void* a111696111904 = encode_mpz(mpzvar112693);
mpz_t* mpzvar112694 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112694, "2", 10);
void* a111697111905 = encode_mpz(mpzvar112694);

//creating new closure instance
void** clo112696 = alloc_clo(lam112049_fptr, 3);

//setting env list
clo112696[1] = equal_u63;
clo112696[2] = a111696111904;
clo112696[3] = kont111793;
void* f111794111906 = encode_clo(clo112696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f111794111906;
arg_buffer[3] = x;
arg_buffer[4] = a111697111905;
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
void* _112054 = arg_buffer[1];
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

void* kont111795111908 = prim_car(x);
void* x111909 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111795111908);
arg_buffer[2] = x111909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111795111908))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam112057_fptr() // lam112057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112058 = arg_buffer[1];
//reading env and args
void* a111704111919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env112058))[3];
//not do dummy comment
void* kont111797 = (decode_clo(env112058))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env112058))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont111797;
arg_buffer[3] = x;
arg_buffer[4] = a111704111919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112057 = encode_clo(alloc_clo(lam112057_fptr, 0));

void* lam112059_fptr() // lam112059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112060 = arg_buffer[1];
//reading env and args
void* a111702111916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112060))[5];
//not do dummy comment
void* lst = (decode_clo(env112060))[4];
//not do dummy comment
void* x = (decode_clo(env112060))[3];
//not do dummy comment
void* kont111797 = (decode_clo(env112060))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env112060))[1];

//if-clause
bool if_guard112697 = is_true(a111702111916);
if(if_guard112697)
{
void* x111703111917 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111797);
arg_buffer[2] = x111703111917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111797))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo112699 = alloc_clo(lam112057_fptr, 3);

//setting env list
clo112699[1] = member_u63;
clo112699[2] = kont111797;
clo112699[3] = x;
void* f111798111918 = encode_clo(clo112699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111798111918;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112059 = encode_clo(alloc_clo(lam112059_fptr, 0));

void* lam112061_fptr() // lam112061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112062 = arg_buffer[1];
//reading env and args
void* a111701111914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112062))[6];
//not do dummy comment
void* lst = (decode_clo(env112062))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env112062))[4];
//not do dummy comment
void* x = (decode_clo(env112062))[3];
//not do dummy comment
void* kont111797 = (decode_clo(env112062))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env112062))[1];

//creating new closure instance
void** clo112701 = alloc_clo(lam112059_fptr, 5);

//setting env list
clo112701[1] = member_u63;
clo112701[2] = kont111797;
clo112701[3] = x;
clo112701[4] = lst;
clo112701[5] = cdr;
void* f111799111915 = encode_clo(clo112701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f111799111915;
arg_buffer[3] = a111701111914;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112061 = encode_clo(alloc_clo(lam112061_fptr, 0));

void* lam112063_fptr() // lam112063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112064 = arg_buffer[1];
//reading env and args
void* a111699111911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112064))[7];
//not do dummy comment
void* lst = (decode_clo(env112064))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env112064))[5];
//not do dummy comment
void* x = (decode_clo(env112064))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env112064))[3];
//not do dummy comment
void* kont111797 = (decode_clo(env112064))[2];
//not do dummy comment
void* car = (decode_clo(env112064))[1];

//if-clause
bool if_guard112702 = is_true(a111699111911);
if(if_guard112702)
{
void* x111700111912 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111797);
arg_buffer[2] = x111700111912;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111797))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo112704 = alloc_clo(lam112061_fptr, 6);

//setting env list
clo112704[1] = member_u63;
clo112704[2] = kont111797;
clo112704[3] = x;
clo112704[4] = equal_u63;
clo112704[5] = lst;
clo112704[6] = cdr;
void* f111800111913 = encode_clo(clo112704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111800111913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112063 = encode_clo(alloc_clo(lam112063_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112065 = arg_buffer[1];
//reading env and args
void* kont111797 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo112706 = alloc_clo(lam112063_fptr, 7);

//setting env list
clo112706[1] = car;
clo112706[2] = kont111797;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo112706[3] = member_u63;
clo112706[4] = x;
clo112706[5] = equal_u63;
clo112706[6] = lst;
clo112706[7] = cdr;
void* f111801111910 = encode_clo(clo112706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111801111910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam112066_fptr() // lam112066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112067 = arg_buffer[1];
//reading env and args
void* a111708111927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111802 = (decode_clo(env112067))[4];
//not do dummy comment
void* fun = (decode_clo(env112067))[3];
//not do dummy comment
void* a111707111925 = (decode_clo(env112067))[2];
//not do dummy comment
void* foldl = (decode_clo(env112067))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont111802;
arg_buffer[3] = fun;
arg_buffer[4] = a111707111925;
arg_buffer[5] = a111708111927;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112066 = encode_clo(alloc_clo(lam112066_fptr, 0));

void* lam112068_fptr() // lam112068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112069 = arg_buffer[1];
//reading env and args
void* a111707111925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112069))[5];
//not do dummy comment
void* kont111802 = (decode_clo(env112069))[4];
//not do dummy comment
void* lst = (decode_clo(env112069))[3];
//not do dummy comment
void* fun = (decode_clo(env112069))[2];
//not do dummy comment
void* foldl = (decode_clo(env112069))[1];

//creating new closure instance
void** clo112708 = alloc_clo(lam112066_fptr, 4);

//setting env list
clo112708[1] = foldl;
clo112708[2] = a111707111925;
clo112708[3] = fun;
clo112708[4] = kont111802;
void* f111803111926 = encode_clo(clo112708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111803111926;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112068 = encode_clo(alloc_clo(lam112068_fptr, 0));

void* lam112070_fptr() // lam112070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112071 = arg_buffer[1];
//reading env and args
void* a111706111923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112071))[6];
//not do dummy comment
void* kont111802 = (decode_clo(env112071))[5];
//not do dummy comment
void* lst = (decode_clo(env112071))[4];
//not do dummy comment
void* fun = (decode_clo(env112071))[3];
//not do dummy comment
void* acc = (decode_clo(env112071))[2];
//not do dummy comment
void* foldl = (decode_clo(env112071))[1];

//creating new closure instance
void** clo112710 = alloc_clo(lam112068_fptr, 5);

//setting env list
clo112710[1] = foldl;
clo112710[2] = fun;
clo112710[3] = lst;
clo112710[4] = kont111802;
clo112710[5] = cdr;
void* f111804111924 = encode_clo(clo112710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f111804111924;
arg_buffer[3] = a111706111923;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112070 = encode_clo(alloc_clo(lam112070_fptr, 0));

void* lam112072_fptr() // lam112072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112073 = arg_buffer[1];
//reading env and args
void* a111705111921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112073))[7];
//not do dummy comment
void* kont111802 = (decode_clo(env112073))[6];
//not do dummy comment
void* lst = (decode_clo(env112073))[5];
//not do dummy comment
void* fun = (decode_clo(env112073))[4];
//not do dummy comment
void* acc = (decode_clo(env112073))[3];
//not do dummy comment
void* car = (decode_clo(env112073))[2];
//not do dummy comment
void* foldl = (decode_clo(env112073))[1];

//if-clause
bool if_guard112711 = is_true(a111705111921);
if(if_guard112711)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111802);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111802))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo112713 = alloc_clo(lam112070_fptr, 6);

//setting env list
clo112713[1] = foldl;
clo112713[2] = acc;
clo112713[3] = fun;
clo112713[4] = lst;
clo112713[5] = kont111802;
clo112713[6] = cdr;
void* f111805111922 = encode_clo(clo112713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111805111922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112072 = encode_clo(alloc_clo(lam112072_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112074 = arg_buffer[1];
//reading env and args
void* kont111802 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo112715 = alloc_clo(lam112072_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo112715[1] = foldl;
clo112715[2] = car;
clo112715[3] = acc;
clo112715[4] = fun;
clo112715[5] = lst;
clo112715[6] = kont111802;
clo112715[7] = cdr;
void* f111806111920 = encode_clo(clo112715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111806111920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam112075_fptr() // lam112075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112076 = arg_buffer[1];
//reading env and args
void* a111712111935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111710111931 = (decode_clo(env112076))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env112076))[2];
//not do dummy comment
void* kont111807 = (decode_clo(env112076))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont111807;
arg_buffer[3] = a111710111931;
arg_buffer[4] = a111712111935;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112075 = encode_clo(alloc_clo(lam112075_fptr, 0));

void* lam112077_fptr() // lam112077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112078 = arg_buffer[1];
//reading env and args
void* a111711111933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111710111931 = (decode_clo(env112078))[5];
//not do dummy comment
void* lst2 = (decode_clo(env112078))[4];
//not do dummy comment
void* cons = (decode_clo(env112078))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env112078))[2];
//not do dummy comment
void* kont111807 = (decode_clo(env112078))[1];

//creating new closure instance
void** clo112717 = alloc_clo(lam112075_fptr, 3);

//setting env list
clo112717[1] = kont111807;
clo112717[2] = reverse_u45helper;
clo112717[3] = a111710111931;
void* f111808111934 = encode_clo(clo112717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f111808111934;
arg_buffer[3] = a111711111933;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112077 = encode_clo(alloc_clo(lam112077_fptr, 0));

void* lam112079_fptr() // lam112079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112080 = arg_buffer[1];
//reading env and args
void* a111710111931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env112080))[6];
//not do dummy comment
void* lst2 = (decode_clo(env112080))[5];
//not do dummy comment
void* car = (decode_clo(env112080))[4];
//not do dummy comment
void* cons = (decode_clo(env112080))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env112080))[2];
//not do dummy comment
void* kont111807 = (decode_clo(env112080))[1];

//creating new closure instance
void** clo112719 = alloc_clo(lam112077_fptr, 5);

//setting env list
clo112719[1] = kont111807;
clo112719[2] = reverse_u45helper;
clo112719[3] = cons;
clo112719[4] = lst2;
clo112719[5] = a111710111931;
void* f111809111932 = encode_clo(clo112719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111809111932;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112079 = encode_clo(alloc_clo(lam112079_fptr, 0));

void* lam112081_fptr() // lam112081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112082 = arg_buffer[1];
//reading env and args
void* a111709111929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112082))[7];
//not do dummy comment
void* lst = (decode_clo(env112082))[6];
//not do dummy comment
void* lst2 = (decode_clo(env112082))[5];
//not do dummy comment
void* car = (decode_clo(env112082))[4];
//not do dummy comment
void* cons = (decode_clo(env112082))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env112082))[2];
//not do dummy comment
void* kont111807 = (decode_clo(env112082))[1];

//if-clause
bool if_guard112720 = is_true(a111709111929);
if(if_guard112720)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111807);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111807))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo112722 = alloc_clo(lam112079_fptr, 6);

//setting env list
clo112722[1] = kont111807;
clo112722[2] = reverse_u45helper;
clo112722[3] = cons;
clo112722[4] = car;
clo112722[5] = lst2;
clo112722[6] = lst;
void* f111810111930 = encode_clo(clo112722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111810111930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112081 = encode_clo(alloc_clo(lam112081_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112083 = arg_buffer[1];
//reading env and args
void* kont111807 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo112724 = alloc_clo(lam112081_fptr, 7);

//setting env list
clo112724[1] = kont111807;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo112724[2] = reverse_u45helper;
clo112724[3] = cons;
clo112724[4] = car;
clo112724[5] = lst2;
clo112724[6] = lst;
clo112724[7] = cdr;
void* f111811111928 = encode_clo(clo112724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111811111928;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam112084_fptr() // lam112084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112085 = arg_buffer[1];
//reading env and args
void* a111713111937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env112085))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env112085))[2];
//not do dummy comment
void* kont111812 = (decode_clo(env112085))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont111812;
arg_buffer[3] = lst;
arg_buffer[4] = a111713111937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112084 = encode_clo(alloc_clo(lam112084_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112086 = arg_buffer[1];
//reading env and args
void* kont111812 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo112726 = alloc_clo(lam112084_fptr, 3);

//setting env list
clo112726[1] = kont111812;
clo112726[2] = reverse_u45helper;
clo112726[3] = lst;
void* f111813111936 = encode_clo(clo112726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111813111936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam112087_fptr() // lam112087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112088 = arg_buffer[1];
//reading env and args
void* x111716111942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111814 = (decode_clo(env112088))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111814);
arg_buffer[2] = x111716111942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111814))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112087 = encode_clo(alloc_clo(lam112087_fptr, 0));

void* lam112089_fptr() // lam112089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112090 = arg_buffer[1];
//reading env and args
void* a111721111951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111717111944 = (decode_clo(env112090))[4];
//not do dummy comment
void* a111719111947 = (decode_clo(env112090))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env112090))[2];
//not do dummy comment
void* kont111814 = (decode_clo(env112090))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont111814;
arg_buffer[3] = a111717111944;
arg_buffer[4] = a111719111947;
arg_buffer[5] = a111721111951;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112089 = encode_clo(alloc_clo(lam112089_fptr, 0));

void* lam112091_fptr() // lam112091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112092 = arg_buffer[1];
//reading env and args
void* a111720111949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111717111944 = (decode_clo(env112092))[6];
//not do dummy comment
void* a111719111947 = (decode_clo(env112092))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env112092))[4];
//not do dummy comment
void* lst2 = (decode_clo(env112092))[3];
//not do dummy comment
void* cons = (decode_clo(env112092))[2];
//not do dummy comment
void* kont111814 = (decode_clo(env112092))[1];

//creating new closure instance
void** clo112728 = alloc_clo(lam112089_fptr, 4);

//setting env list
clo112728[1] = kont111814;
clo112728[2] = take_u45helper;
clo112728[3] = a111719111947;
clo112728[4] = a111717111944;
void* f111816111950 = encode_clo(clo112728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f111816111950;
arg_buffer[3] = a111720111949;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112091 = encode_clo(alloc_clo(lam112091_fptr, 0));

void* lam112093_fptr() // lam112093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112094 = arg_buffer[1];
//reading env and args
void* a111719111947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111717111944 = (decode_clo(env112094))[7];
//not do dummy comment
void* lst = (decode_clo(env112094))[6];
//not do dummy comment
void* car = (decode_clo(env112094))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env112094))[4];
//not do dummy comment
void* lst2 = (decode_clo(env112094))[3];
//not do dummy comment
void* cons = (decode_clo(env112094))[2];
//not do dummy comment
void* kont111814 = (decode_clo(env112094))[1];

//creating new closure instance
void** clo112730 = alloc_clo(lam112091_fptr, 6);

//setting env list
clo112730[1] = kont111814;
clo112730[2] = cons;
clo112730[3] = lst2;
clo112730[4] = take_u45helper;
clo112730[5] = a111719111947;
clo112730[6] = a111717111944;
void* f111817111948 = encode_clo(clo112730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111817111948;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112093 = encode_clo(alloc_clo(lam112093_fptr, 0));

void* lam112096_fptr() // lam112096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112097 = arg_buffer[1];
//reading env and args
void* a111717111944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env112097))[8];
//not do dummy comment
void* _u45 = (decode_clo(env112097))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env112097))[6];
//not do dummy comment
void* lst2 = (decode_clo(env112097))[5];
//not do dummy comment
void* n = (decode_clo(env112097))[4];
//not do dummy comment
void* car = (decode_clo(env112097))[3];
//not do dummy comment
void* cons = (decode_clo(env112097))[2];
//not do dummy comment
void* kont111814 = (decode_clo(env112097))[1];
mpz_t* mpzvar112731 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112731, "1", 10);
void* a111718111945 = encode_mpz(mpzvar112731);

//creating new closure instance
void** clo112733 = alloc_clo(lam112093_fptr, 7);

//setting env list
clo112733[1] = kont111814;
clo112733[2] = cons;
clo112733[3] = lst2;
clo112733[4] = take_u45helper;
clo112733[5] = car;
clo112733[6] = lst;
clo112733[7] = a111717111944;
void* f111818111946 = encode_clo(clo112733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f111818111946;
arg_buffer[3] = n;
arg_buffer[4] = a111718111945;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112096 = encode_clo(alloc_clo(lam112096_fptr, 0));

void* lam112098_fptr() // lam112098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112099 = arg_buffer[1];
//reading env and args
void* a111715111940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112099))[10];
//not do dummy comment
void* lst = (decode_clo(env112099))[9];
//not do dummy comment
void* reverse = (decode_clo(env112099))[8];
//not do dummy comment
void* _u45 = (decode_clo(env112099))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env112099))[6];
//not do dummy comment
void* lst2 = (decode_clo(env112099))[5];
//not do dummy comment
void* n = (decode_clo(env112099))[4];
//not do dummy comment
void* car = (decode_clo(env112099))[3];
//not do dummy comment
void* cons = (decode_clo(env112099))[2];
//not do dummy comment
void* kont111814 = (decode_clo(env112099))[1];

//if-clause
bool if_guard112734 = is_true(a111715111940);
if(if_guard112734)
{

//creating new closure instance
void** clo112736 = alloc_clo(lam112087_fptr, 1);

//setting env list
clo112736[1] = kont111814;
void* f111815111941 = encode_clo(clo112736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f111815111941;
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
void** clo112738 = alloc_clo(lam112096_fptr, 8);

//setting env list
clo112738[1] = kont111814;
clo112738[2] = cons;
clo112738[3] = car;
clo112738[4] = n;
clo112738[5] = lst2;
clo112738[6] = take_u45helper;
clo112738[7] = _u45;
clo112738[8] = lst;
void* f111819111943 = encode_clo(clo112738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111819111943;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112098 = encode_clo(alloc_clo(lam112098_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112101 = arg_buffer[1];
//reading env and args
void* kont111814 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar112739 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112739, "0", 10);
void* a111714111938 = encode_mpz(mpzvar112739);

//creating new closure instance
void** clo112741 = alloc_clo(lam112098_fptr, 10);

//setting env list
clo112741[1] = kont111814;
clo112741[2] = cons;
clo112741[3] = car;
clo112741[4] = n;
clo112741[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo112741[6] = take_u45helper;
clo112741[7] = _u45;
clo112741[8] = reverse;
clo112741[9] = lst;
clo112741[10] = cdr;
void* f111820111939 = encode_clo(clo112741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f111820111939;
arg_buffer[3] = n;
arg_buffer[4] = a111714111938;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam112102_fptr() // lam112102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112103 = arg_buffer[1];
//reading env and args
void* a111722111953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env112103))[4];
//not do dummy comment
void* kont111821 = (decode_clo(env112103))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env112103))[2];
//not do dummy comment
void* n = (decode_clo(env112103))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont111821;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a111722111953;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112102 = encode_clo(alloc_clo(lam112102_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112104 = arg_buffer[1];
//reading env and args
void* kont111821 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo112743 = alloc_clo(lam112102_fptr, 4);

//setting env list
clo112743[1] = n;
clo112743[2] = take_u45helper;
clo112743[3] = kont111821;
clo112743[4] = lst;
void* f111822111952 = encode_clo(clo112743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111822111952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam112106_fptr() // lam112106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112107 = arg_buffer[1];
//reading env and args
void* a111727111961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111823 = (decode_clo(env112107))[3];
//not do dummy comment
void* _u43 = (decode_clo(env112107))[2];
//not do dummy comment
void* a111725111957 = (decode_clo(env112107))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont111823;
arg_buffer[3] = a111725111957;
arg_buffer[4] = a111727111961;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112106 = encode_clo(alloc_clo(lam112106_fptr, 0));

void* lam112108_fptr() // lam112108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112109 = arg_buffer[1];
//reading env and args
void* a111726111959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env112109))[4];
//not do dummy comment
void* kont111823 = (decode_clo(env112109))[3];
//not do dummy comment
void* _u43 = (decode_clo(env112109))[2];
//not do dummy comment
void* a111725111957 = (decode_clo(env112109))[1];

//creating new closure instance
void** clo112745 = alloc_clo(lam112106_fptr, 3);

//setting env list
clo112745[1] = a111725111957;
clo112745[2] = _u43;
clo112745[3] = kont111823;
void* f111824111960 = encode_clo(clo112745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f111824111960;
arg_buffer[3] = a111726111959;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112108 = encode_clo(alloc_clo(lam112108_fptr, 0));

void* lam112111_fptr() // lam112111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112112 = arg_buffer[1];
//reading env and args
void* a111723111955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112112))[5];
//not do dummy comment
void* lst = (decode_clo(env112112))[4];
//not do dummy comment
void* length = (decode_clo(env112112))[3];
//not do dummy comment
void* kont111823 = (decode_clo(env112112))[2];
//not do dummy comment
void* _u43 = (decode_clo(env112112))[1];

//if-clause
bool if_guard112746 = is_true(a111723111955);
if(if_guard112746)
{
mpz_t* mpzvar112747 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112747, "0", 10);
void* x111724111956 = encode_mpz(mpzvar112747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111823);
arg_buffer[2] = x111724111956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111823))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar112748 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112748, "1", 10);
void* a111725111957 = encode_mpz(mpzvar112748);

//creating new closure instance
void** clo112750 = alloc_clo(lam112108_fptr, 4);

//setting env list
clo112750[1] = a111725111957;
clo112750[2] = _u43;
clo112750[3] = kont111823;
clo112750[4] = length;
void* f111825111958 = encode_clo(clo112750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111825111958;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112111 = encode_clo(alloc_clo(lam112111_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112113 = arg_buffer[1];
//reading env and args
void* kont111823 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo112752 = alloc_clo(lam112111_fptr, 5);

//setting env list
clo112752[1] = _u43;
clo112752[2] = kont111823;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo112752[3] = length;
clo112752[4] = lst;
clo112752[5] = cdr;
void* f111826111954 = encode_clo(clo112752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111826111954;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam112114_fptr() // lam112114 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112115 = arg_buffer[1];
//reading env and args
void* x111729111965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111827 = (decode_clo(env112115))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111827);
arg_buffer[2] = x111729111965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111827))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112114 = encode_clo(alloc_clo(lam112114_fptr, 0));

void* lam112116_fptr() // lam112116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112117 = arg_buffer[1];
//reading env and args
void* a111733111973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111731111969 = (decode_clo(env112117))[3];
//not do dummy comment
void* kont111827 = (decode_clo(env112117))[2];
//not do dummy comment
void* cons = (decode_clo(env112117))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont111827;
arg_buffer[3] = a111731111969;
arg_buffer[4] = a111733111973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112116 = encode_clo(alloc_clo(lam112116_fptr, 0));

void* lam112118_fptr() // lam112118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112119 = arg_buffer[1];
//reading env and args
void* a111732111971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env112119))[5];
//not do dummy comment
void* a111731111969 = (decode_clo(env112119))[4];
//not do dummy comment
void* cons = (decode_clo(env112119))[3];
//not do dummy comment
void* proc = (decode_clo(env112119))[2];
//not do dummy comment
void* kont111827 = (decode_clo(env112119))[1];

//creating new closure instance
void** clo112754 = alloc_clo(lam112116_fptr, 3);

//setting env list
clo112754[1] = cons;
clo112754[2] = kont111827;
clo112754[3] = a111731111969;
void* f111829111972 = encode_clo(clo112754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f111829111972;
arg_buffer[3] = proc;
arg_buffer[4] = a111732111971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112118 = encode_clo(alloc_clo(lam112118_fptr, 0));

void* lam112120_fptr() // lam112120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112121 = arg_buffer[1];
//reading env and args
void* a111731111969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112121))[6];
//not do dummy comment
void* lst = (decode_clo(env112121))[5];
//not do dummy comment
void* map = (decode_clo(env112121))[4];
//not do dummy comment
void* cons = (decode_clo(env112121))[3];
//not do dummy comment
void* proc = (decode_clo(env112121))[2];
//not do dummy comment
void* kont111827 = (decode_clo(env112121))[1];

//creating new closure instance
void** clo112756 = alloc_clo(lam112118_fptr, 5);

//setting env list
clo112756[1] = kont111827;
clo112756[2] = proc;
clo112756[3] = cons;
clo112756[4] = a111731111969;
clo112756[5] = map;
void* f111830111970 = encode_clo(clo112756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111830111970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112120 = encode_clo(alloc_clo(lam112120_fptr, 0));

void* lam112122_fptr() // lam112122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112123 = arg_buffer[1];
//reading env and args
void* a111730111967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112123))[6];
//not do dummy comment
void* lst = (decode_clo(env112123))[5];
//not do dummy comment
void* map = (decode_clo(env112123))[4];
//not do dummy comment
void* cons = (decode_clo(env112123))[3];
//not do dummy comment
void* proc = (decode_clo(env112123))[2];
//not do dummy comment
void* kont111827 = (decode_clo(env112123))[1];

//creating new closure instance
void** clo112758 = alloc_clo(lam112120_fptr, 6);

//setting env list
clo112758[1] = kont111827;
clo112758[2] = proc;
clo112758[3] = cons;
clo112758[4] = map;
clo112758[5] = lst;
clo112758[6] = cdr;
void* f111831111968 = encode_clo(clo112758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f111831111968;
arg_buffer[3] = a111730111967;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112122 = encode_clo(alloc_clo(lam112122_fptr, 0));

void* lam112124_fptr() // lam112124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112125 = arg_buffer[1];
//reading env and args
void* a111728111963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env112125))[8];
//not do dummy comment
void* map = (decode_clo(env112125))[7];
//not do dummy comment
void* car = (decode_clo(env112125))[6];
//not do dummy comment
void* cons = (decode_clo(env112125))[5];
//not do dummy comment
void* list = (decode_clo(env112125))[4];
//not do dummy comment
void* cdr = (decode_clo(env112125))[3];
//not do dummy comment
void* proc = (decode_clo(env112125))[2];
//not do dummy comment
void* kont111827 = (decode_clo(env112125))[1];

//if-clause
bool if_guard112759 = is_true(a111728111963);
if(if_guard112759)
{

//creating new closure instance
void** clo112761 = alloc_clo(lam112114_fptr, 1);

//setting env list
clo112761[1] = kont111827;
void* f111828111964 = encode_clo(clo112761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111828111964;
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
void** clo112763 = alloc_clo(lam112122_fptr, 6);

//setting env list
clo112763[1] = kont111827;
clo112763[2] = proc;
clo112763[3] = cons;
clo112763[4] = map;
clo112763[5] = lst;
clo112763[6] = cdr;
void* f111832111966 = encode_clo(clo112763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111832111966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112124 = encode_clo(alloc_clo(lam112124_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112126 = arg_buffer[1];
//reading env and args
void* kont111827 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo112765 = alloc_clo(lam112124_fptr, 8);

//setting env list
clo112765[1] = kont111827;
clo112765[2] = proc;
clo112765[3] = cdr;
clo112765[4] = list;
clo112765[5] = cons;
clo112765[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo112765[7] = map;
clo112765[8] = lst;
void* f111833111962 = encode_clo(clo112765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111833111962;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam112127_fptr() // lam112127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112128 = arg_buffer[1];
//reading env and args
void* x111735111977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111834 = (decode_clo(env112128))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111834);
arg_buffer[2] = x111735111977;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111834))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112127 = encode_clo(alloc_clo(lam112127_fptr, 0));

void* lam112129_fptr() // lam112129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112130 = arg_buffer[1];
//reading env and args
void* a111740111987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111834 = (decode_clo(env112130))[3];
//not do dummy comment
void* a111738111983 = (decode_clo(env112130))[2];
//not do dummy comment
void* cons = (decode_clo(env112130))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont111834;
arg_buffer[3] = a111738111983;
arg_buffer[4] = a111740111987;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112129 = encode_clo(alloc_clo(lam112129_fptr, 0));

void* lam112131_fptr() // lam112131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112132 = arg_buffer[1];
//reading env and args
void* a111739111985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111834 = (decode_clo(env112132))[5];
//not do dummy comment
void* filter = (decode_clo(env112132))[4];
//not do dummy comment
void* cons = (decode_clo(env112132))[3];
//not do dummy comment
void* a111738111983 = (decode_clo(env112132))[2];
//not do dummy comment
void* op = (decode_clo(env112132))[1];

//creating new closure instance
void** clo112767 = alloc_clo(lam112129_fptr, 3);

//setting env list
clo112767[1] = cons;
clo112767[2] = a111738111983;
clo112767[3] = kont111834;
void* f111836111986 = encode_clo(clo112767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f111836111986;
arg_buffer[3] = op;
arg_buffer[4] = a111739111985;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112131 = encode_clo(alloc_clo(lam112131_fptr, 0));

void* lam112133_fptr() // lam112133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112134 = arg_buffer[1];
//reading env and args
void* a111738111983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112134))[6];
//not do dummy comment
void* kont111834 = (decode_clo(env112134))[5];
//not do dummy comment
void* lst = (decode_clo(env112134))[4];
//not do dummy comment
void* op = (decode_clo(env112134))[3];
//not do dummy comment
void* filter = (decode_clo(env112134))[2];
//not do dummy comment
void* cons = (decode_clo(env112134))[1];

//creating new closure instance
void** clo112769 = alloc_clo(lam112131_fptr, 5);

//setting env list
clo112769[1] = op;
clo112769[2] = a111738111983;
clo112769[3] = cons;
clo112769[4] = filter;
clo112769[5] = kont111834;
void* f111837111984 = encode_clo(clo112769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111837111984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112133 = encode_clo(alloc_clo(lam112133_fptr, 0));

void* lam112135_fptr() // lam112135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112136 = arg_buffer[1];
//reading env and args
void* a111741111989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111834 = (decode_clo(env112136))[3];
//not do dummy comment
void* op = (decode_clo(env112136))[2];
//not do dummy comment
void* filter = (decode_clo(env112136))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont111834;
arg_buffer[3] = op;
arg_buffer[4] = a111741111989;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112135 = encode_clo(alloc_clo(lam112135_fptr, 0));

void* lam112137_fptr() // lam112137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112138 = arg_buffer[1];
//reading env and args
void* a111737111981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112138))[7];
//not do dummy comment
void* kont111834 = (decode_clo(env112138))[6];
//not do dummy comment
void* lst = (decode_clo(env112138))[5];
//not do dummy comment
void* op = (decode_clo(env112138))[4];
//not do dummy comment
void* cons = (decode_clo(env112138))[3];
//not do dummy comment
void* filter = (decode_clo(env112138))[2];
//not do dummy comment
void* car = (decode_clo(env112138))[1];

//if-clause
bool if_guard112770 = is_true(a111737111981);
if(if_guard112770)
{

//creating new closure instance
void** clo112772 = alloc_clo(lam112133_fptr, 6);

//setting env list
clo112772[1] = cons;
clo112772[2] = filter;
clo112772[3] = op;
clo112772[4] = lst;
clo112772[5] = kont111834;
clo112772[6] = cdr;
void* f111838111982 = encode_clo(clo112772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111838111982;
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
void** clo112774 = alloc_clo(lam112135_fptr, 3);

//setting env list
clo112774[1] = filter;
clo112774[2] = op;
clo112774[3] = kont111834;
void* f111839111988 = encode_clo(clo112774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111839111988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112137 = encode_clo(alloc_clo(lam112137_fptr, 0));

void* lam112139_fptr() // lam112139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112140 = arg_buffer[1];
//reading env and args
void* a111736111979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112140))[7];
//not do dummy comment
void* kont111834 = (decode_clo(env112140))[6];
//not do dummy comment
void* lst = (decode_clo(env112140))[5];
//not do dummy comment
void* op = (decode_clo(env112140))[4];
//not do dummy comment
void* cons = (decode_clo(env112140))[3];
//not do dummy comment
void* filter = (decode_clo(env112140))[2];
//not do dummy comment
void* car = (decode_clo(env112140))[1];

//creating new closure instance
void** clo112776 = alloc_clo(lam112137_fptr, 7);

//setting env list
clo112776[1] = car;
clo112776[2] = filter;
clo112776[3] = cons;
clo112776[4] = op;
clo112776[5] = lst;
clo112776[6] = kont111834;
clo112776[7] = cdr;
void* f111840111980 = encode_clo(clo112776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f111840111980;
arg_buffer[3] = a111736111979;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112139 = encode_clo(alloc_clo(lam112139_fptr, 0));

void* lam112141_fptr() // lam112141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112142 = arg_buffer[1];
//reading env and args
void* a111734111975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111834 = (decode_clo(env112142))[8];
//not do dummy comment
void* lst = (decode_clo(env112142))[7];
//not do dummy comment
void* op = (decode_clo(env112142))[6];
//not do dummy comment
void* cons = (decode_clo(env112142))[5];
//not do dummy comment
void* list = (decode_clo(env112142))[4];
//not do dummy comment
void* cdr = (decode_clo(env112142))[3];
//not do dummy comment
void* filter = (decode_clo(env112142))[2];
//not do dummy comment
void* car = (decode_clo(env112142))[1];

//if-clause
bool if_guard112777 = is_true(a111734111975);
if(if_guard112777)
{

//creating new closure instance
void** clo112779 = alloc_clo(lam112127_fptr, 1);

//setting env list
clo112779[1] = kont111834;
void* f111835111976 = encode_clo(clo112779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111835111976;
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
void** clo112781 = alloc_clo(lam112139_fptr, 7);

//setting env list
clo112781[1] = car;
clo112781[2] = filter;
clo112781[3] = cons;
clo112781[4] = op;
clo112781[5] = lst;
clo112781[6] = kont111834;
clo112781[7] = cdr;
void* f111841111978 = encode_clo(clo112781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111841111978;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112141 = encode_clo(alloc_clo(lam112141_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112143 = arg_buffer[1];
//reading env and args
void* kont111834 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo112783 = alloc_clo(lam112141_fptr, 8);

//setting env list
clo112783[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo112783[2] = filter;
clo112783[3] = cdr;
clo112783[4] = list;
clo112783[5] = cons;
clo112783[6] = op;
clo112783[7] = lst;
clo112783[8] = kont111834;
void* f111842111974 = encode_clo(clo112783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111842111974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam112144_fptr() // lam112144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112145 = arg_buffer[1];
//reading env and args
void* a111746111997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111744111994 = (decode_clo(env112145))[3];
//not do dummy comment
void* drop = (decode_clo(env112145))[2];
//not do dummy comment
void* kont111843 = (decode_clo(env112145))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont111843;
arg_buffer[3] = a111744111994;
arg_buffer[4] = a111746111997;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112144 = encode_clo(alloc_clo(lam112144_fptr, 0));

void* lam112147_fptr() // lam112147 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112148 = arg_buffer[1];
//reading env and args
void* a111744111994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env112148))[4];
//not do dummy comment
void* kont111843 = (decode_clo(env112148))[3];
//not do dummy comment
void* n = (decode_clo(env112148))[2];
//not do dummy comment
void* _u45 = (decode_clo(env112148))[1];
mpz_t* mpzvar112784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112784, "1", 10);
void* a111745111995 = encode_mpz(mpzvar112784);

//creating new closure instance
void** clo112786 = alloc_clo(lam112144_fptr, 3);

//setting env list
clo112786[1] = kont111843;
clo112786[2] = drop;
clo112786[3] = a111744111994;
void* f111844111996 = encode_clo(clo112786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f111844111996;
arg_buffer[3] = n;
arg_buffer[4] = a111745111995;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112147 = encode_clo(alloc_clo(lam112147_fptr, 0));

void* lam112149_fptr() // lam112149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112150 = arg_buffer[1];
//reading env and args
void* a111743111992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112150))[6];
//not do dummy comment
void* kont111843 = (decode_clo(env112150))[5];
//not do dummy comment
void* n = (decode_clo(env112150))[4];
//not do dummy comment
void* _u45 = (decode_clo(env112150))[3];
//not do dummy comment
void* lst = (decode_clo(env112150))[2];
//not do dummy comment
void* drop = (decode_clo(env112150))[1];

//if-clause
bool if_guard112787 = is_true(a111743111992);
if(if_guard112787)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111843);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111843))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo112789 = alloc_clo(lam112147_fptr, 4);

//setting env list
clo112789[1] = _u45;
clo112789[2] = n;
clo112789[3] = kont111843;
clo112789[4] = drop;
void* f111845111993 = encode_clo(clo112789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111845111993;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112149 = encode_clo(alloc_clo(lam112149_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112152 = arg_buffer[1];
//reading env and args
void* kont111843 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar112790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112790, "0", 10);
void* a111742111990 = encode_mpz(mpzvar112790);

//creating new closure instance
void** clo112792 = alloc_clo(lam112149_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo112792[1] = drop;
clo112792[2] = lst;
clo112792[3] = _u45;
clo112792[4] = n;
clo112792[5] = kont111843;
clo112792[6] = cdr;
void* f111846111991 = encode_clo(clo112792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f111846111991;
arg_buffer[3] = n;
arg_buffer[4] = a111742111990;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam112153_fptr() // lam112153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112154 = arg_buffer[1];
//reading env and args
void* a111750112005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111748112001 = (decode_clo(env112154))[3];
//not do dummy comment
void* proc = (decode_clo(env112154))[2];
//not do dummy comment
void* kont111847 = (decode_clo(env112154))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont111847;
arg_buffer[3] = a111748112001;
arg_buffer[4] = a111750112005;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112153 = encode_clo(alloc_clo(lam112153_fptr, 0));

void* lam112155_fptr() // lam112155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112156 = arg_buffer[1];
//reading env and args
void* a111749112003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env112156))[5];
//not do dummy comment
void* a111748112001 = (decode_clo(env112156))[4];
//not do dummy comment
void* kont111847 = (decode_clo(env112156))[3];
//not do dummy comment
void* proc = (decode_clo(env112156))[2];
//not do dummy comment
void* acc = (decode_clo(env112156))[1];

//creating new closure instance
void** clo112794 = alloc_clo(lam112153_fptr, 3);

//setting env list
clo112794[1] = kont111847;
clo112794[2] = proc;
clo112794[3] = a111748112001;
void* f111848112004 = encode_clo(clo112794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f111848112004;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a111749112003;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112155 = encode_clo(alloc_clo(lam112155_fptr, 0));

void* lam112157_fptr() // lam112157 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112158 = arg_buffer[1];
//reading env and args
void* a111748112001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112158))[6];
//not do dummy comment
void* kont111847 = (decode_clo(env112158))[5];
//not do dummy comment
void* foldr = (decode_clo(env112158))[4];
//not do dummy comment
void* lst = (decode_clo(env112158))[3];
//not do dummy comment
void* proc = (decode_clo(env112158))[2];
//not do dummy comment
void* acc = (decode_clo(env112158))[1];

//creating new closure instance
void** clo112796 = alloc_clo(lam112155_fptr, 5);

//setting env list
clo112796[1] = acc;
clo112796[2] = proc;
clo112796[3] = kont111847;
clo112796[4] = a111748112001;
clo112796[5] = foldr;
void* f111849112002 = encode_clo(clo112796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111849112002;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112157 = encode_clo(alloc_clo(lam112157_fptr, 0));

void* lam112159_fptr() // lam112159 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112160 = arg_buffer[1];
//reading env and args
void* a111747111999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112160))[7];
//not do dummy comment
void* car = (decode_clo(env112160))[6];
//not do dummy comment
void* kont111847 = (decode_clo(env112160))[5];
//not do dummy comment
void* foldr = (decode_clo(env112160))[4];
//not do dummy comment
void* lst = (decode_clo(env112160))[3];
//not do dummy comment
void* proc = (decode_clo(env112160))[2];
//not do dummy comment
void* acc = (decode_clo(env112160))[1];

//if-clause
bool if_guard112797 = is_true(a111747111999);
if(if_guard112797)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111847);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo112799 = alloc_clo(lam112157_fptr, 6);

//setting env list
clo112799[1] = acc;
clo112799[2] = proc;
clo112799[3] = lst;
clo112799[4] = foldr;
clo112799[5] = kont111847;
clo112799[6] = cdr;
void* f111850112000 = encode_clo(clo112799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111850112000;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112159 = encode_clo(alloc_clo(lam112159_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112161 = arg_buffer[1];
//reading env and args
void* kont111847 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo112801 = alloc_clo(lam112159_fptr, 7);

//setting env list
clo112801[1] = acc;
clo112801[2] = proc;
clo112801[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo112801[4] = foldr;
clo112801[5] = kont111847;
clo112801[6] = car;
clo112801[7] = cdr;
void* f111851111998 = encode_clo(clo112801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111851111998;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam112162_fptr() // lam112162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112163 = arg_buffer[1];
//reading env and args
void* a111754112013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111752112009 = (decode_clo(env112163))[3];
//not do dummy comment
void* kont111852 = (decode_clo(env112163))[2];
//not do dummy comment
void* cons = (decode_clo(env112163))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont111852;
arg_buffer[3] = a111752112009;
arg_buffer[4] = a111754112013;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112162 = encode_clo(alloc_clo(lam112162_fptr, 0));

void* lam112164_fptr() // lam112164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112165 = arg_buffer[1];
//reading env and args
void* a111753112011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111752112009 = (decode_clo(env112165))[5];
//not do dummy comment
void* kont111852 = (decode_clo(env112165))[4];
//not do dummy comment
void* append = (decode_clo(env112165))[3];
//not do dummy comment
void* lst2 = (decode_clo(env112165))[2];
//not do dummy comment
void* cons = (decode_clo(env112165))[1];

//creating new closure instance
void** clo112803 = alloc_clo(lam112162_fptr, 3);

//setting env list
clo112803[1] = cons;
clo112803[2] = kont111852;
clo112803[3] = a111752112009;
void* f111853112012 = encode_clo(clo112803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f111853112012;
arg_buffer[3] = a111753112011;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112164 = encode_clo(alloc_clo(lam112164_fptr, 0));

void* lam112166_fptr() // lam112166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112167 = arg_buffer[1];
//reading env and args
void* a111752112009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112167))[6];
//not do dummy comment
void* kont111852 = (decode_clo(env112167))[5];
//not do dummy comment
void* append = (decode_clo(env112167))[4];
//not do dummy comment
void* lst2 = (decode_clo(env112167))[3];
//not do dummy comment
void* lst1 = (decode_clo(env112167))[2];
//not do dummy comment
void* cons = (decode_clo(env112167))[1];

//creating new closure instance
void** clo112805 = alloc_clo(lam112164_fptr, 5);

//setting env list
clo112805[1] = cons;
clo112805[2] = lst2;
clo112805[3] = append;
clo112805[4] = kont111852;
clo112805[5] = a111752112009;
void* f111854112010 = encode_clo(clo112805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111854112010;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112166 = encode_clo(alloc_clo(lam112166_fptr, 0));

void* lam112168_fptr() // lam112168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112169 = arg_buffer[1];
//reading env and args
void* a111751112007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env112169))[7];
//not do dummy comment
void* kont111852 = (decode_clo(env112169))[6];
//not do dummy comment
void* append = (decode_clo(env112169))[5];
//not do dummy comment
void* lst2 = (decode_clo(env112169))[4];
//not do dummy comment
void* cons = (decode_clo(env112169))[3];
//not do dummy comment
void* lst1 = (decode_clo(env112169))[2];
//not do dummy comment
void* car = (decode_clo(env112169))[1];

//if-clause
bool if_guard112806 = is_true(a111751112007);
if(if_guard112806)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111852);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111852))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo112808 = alloc_clo(lam112166_fptr, 6);

//setting env list
clo112808[1] = cons;
clo112808[2] = lst1;
clo112808[3] = lst2;
clo112808[4] = append;
clo112808[5] = kont111852;
clo112808[6] = cdr;
void* f111855112008 = encode_clo(clo112808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111855112008;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam112168 = encode_clo(alloc_clo(lam112168_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112170 = arg_buffer[1];
//reading env and args
void* kont111852 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo112810 = alloc_clo(lam112168_fptr, 7);

//setting env list
clo112810[1] = car;
clo112810[2] = lst1;
clo112810[3] = cons;
clo112810[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo112810[5] = append;
clo112810[6] = kont111852;
clo112810[7] = cdr;
void* f111856112006 = encode_clo(clo112810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111856112006;
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
void* _112171 = arg_buffer[1];
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

void* kont111857112014 = prim_car(lst);
void* lst112015 = prim_cdr(lst);
void* x111755112016 = apply_prim_hash(lst112015);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111857112014);
arg_buffer[2] = x111755112016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111857112014))[0]);
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
void* _112172 = arg_buffer[1];
//reading env and args
void* kont111859 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x111756112017 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111859);
arg_buffer[2] = x111756112017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111859))[0]);
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
void* _112173 = arg_buffer[1];
//reading env and args
void* kont111860 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x111757112018 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111860);
arg_buffer[2] = x111757112018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111860))[0]);
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
void* _112174 = arg_buffer[1];
//reading env and args
void* kont111861 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x111758112019 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111861);
arg_buffer[2] = x111758112019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111861))[0]);
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
void* _112175 = arg_buffer[1];
//reading env and args
void* kont111862 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x111759112020 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111862);
arg_buffer[2] = x111759112020;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111862))[0]);
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
void* _112181 = arg_buffer[1];
//reading env and args
void* kont111863 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar112811 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112811, "100", 10);
void* a111760112021 = encode_mpz(mpzvar112811);
mpz_t* mpzvar112812 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112812, "100", 10);
void* a111761112022 = encode_mpz(mpzvar112812);
mpz_t* mpzvar112813 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112813, "100", 10);
void* a111762112023 = encode_mpz(mpzvar112813);
mpz_t* mpzvar112814 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112814, "100", 10);
void* a111763112024 = encode_mpz(mpzvar112814);
mpz_t* mpzvar112815 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar112815, "100", 10);
void* a111764112025 = encode_mpz(mpzvar112815);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = kont111863;
arg_buffer[3] = a111760112021;
arg_buffer[4] = a111761112022;
arg_buffer[5] = a111762112023;
arg_buffer[6] = a111763112024;
arg_buffer[7] = a111764112025;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam112182_fptr() // lam112182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env112183 = arg_buffer[1];
//reading env and args
void* x111765112027 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111864 = (decode_clo(env112183))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111864);
arg_buffer[2] = x111765112027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111864))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam112182 = encode_clo(alloc_clo(lam112182_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _112184 = arg_buffer[1];
//reading env and args
void* kont111864 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo112817 = alloc_clo(lam112182_fptr, 1);

//setting env list
clo112817[1] = kont111864;
void* f111865112026 = encode_clo(clo112817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f111865112026;
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

