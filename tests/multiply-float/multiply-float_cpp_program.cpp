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
void* _88008 = arg_buffer[1];
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

void* kont8774887848 = prim_car(lst);
void* lst87849 = prim_cdr(lst);
void* x8766187850 = apply_prim__u43(lst87849);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8774887848);
arg_buffer[2] = x8766187850;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8774887848))[0]);
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
void* _88009 = arg_buffer[1];
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

void* kont8775087851 = prim_car(lst);
void* lst87852 = prim_cdr(lst);
void* x8766287853 = apply_prim__u45(lst87852);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775087851);
arg_buffer[2] = x8766287853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775087851))[0]);
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
void* _88010 = arg_buffer[1];
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

void* kont8775287854 = prim_car(lst);
void* lst87855 = prim_cdr(lst);
void* x8766387856 = apply_prim__u42(lst87855);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775287854);
arg_buffer[2] = x8766387856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775287854))[0]);
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
void* _88011 = arg_buffer[1];
//reading env and args
void* kont87754 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8766487857 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87754);
arg_buffer[2] = x8766487857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87754))[0]);
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
void* _88012 = arg_buffer[1];
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

void* kont8775587858 = prim_car(lst);
void* lst87859 = prim_cdr(lst);
void* x8766587860 = apply_prim__u47(lst87859);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775587858);
arg_buffer[2] = x8766587860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775587858))[0]);
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
void* _88013 = arg_buffer[1];
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

void* kont8775787861 = prim_car(lst);
void* lst87862 = prim_cdr(lst);
void* x8766687863 = apply_prim__u61(lst87862);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775787861);
arg_buffer[2] = x8766687863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775787861))[0]);
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
void* _88014 = arg_buffer[1];
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

void* kont8775987864 = prim_car(lst);
void* lst87865 = prim_cdr(lst);
void* x8766787866 = apply_prim__u62(lst87865);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775987864);
arg_buffer[2] = x8766787866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775987864))[0]);
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
void* _88015 = arg_buffer[1];
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

void* kont8776187867 = prim_car(lst);
void* lst87868 = prim_cdr(lst);
void* x8766887869 = apply_prim__u60(lst87868);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8776187867);
arg_buffer[2] = x8766887869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776187867))[0]);
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
void* _88016 = arg_buffer[1];
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

void* kont8776387870 = prim_car(lst);
void* lst87871 = prim_cdr(lst);
void* x8766987872 = apply_prim__u60_u61(lst87871);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8776387870);
arg_buffer[2] = x8766987872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776387870))[0]);
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
void* _88017 = arg_buffer[1];
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

void* kont8776587873 = prim_car(lst);
void* lst87874 = prim_cdr(lst);
void* x8767087875 = apply_prim__u62_u61(lst87874);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8776587873);
arg_buffer[2] = x8767087875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776587873))[0]);
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
void* _88018 = arg_buffer[1];
//reading env and args
void* kont87767 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8767187876 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87767);
arg_buffer[2] = x8767187876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87767))[0]);
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
void* _88019 = arg_buffer[1];
//reading env and args
void* kont87768 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8767287877 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87768);
arg_buffer[2] = x8767287877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87768))[0]);
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
void* _88020 = arg_buffer[1];
//reading env and args
void* kont87769 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8767387878 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87769);
arg_buffer[2] = x8767387878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87769))[0]);
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
void* _88021 = arg_buffer[1];
//reading env and args
void* kont87770 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8767487879 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87770);
arg_buffer[2] = x8767487879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87770))[0]);
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
void* _88022 = arg_buffer[1];
//reading env and args
void* kont87771 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8767587880 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87771);
arg_buffer[2] = x8767587880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87771))[0]);
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
void* _88023 = arg_buffer[1];
//reading env and args
void* kont87772 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8767687881 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87772);
arg_buffer[2] = x8767687881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam88024_fptr() // lam88024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88025 = arg_buffer[1];
//reading env and args
void* a8767987885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87773 = (decode_clo(env88025))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env88025))[2];
//not do dummy comment
void* a8767787882 = (decode_clo(env88025))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont87773;
arg_buffer[3] = a8767787882;
arg_buffer[4] = a8767987885;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88024 = encode_clo(alloc_clo(lam88024_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88028 = arg_buffer[1];
//reading env and args
void* kont87773 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar88703 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88703, "0", 10);
void* a8767787882 = encode_mpz(mpzvar88703);
mpz_t* mpzvar88704 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88704, "2", 10);
void* a8767887883 = encode_mpz(mpzvar88704);

//creating new closure instance
void** clo88706 = alloc_clo(lam88024_fptr, 3);

//setting env list
clo88706[1] = a8767787882;
clo88706[2] = equal_u63;
clo88706[3] = kont87773;
void* f8777487884 = encode_clo(clo88706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8777487884;
arg_buffer[3] = x;
arg_buffer[4] = a8767887883;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam88029_fptr() // lam88029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88030 = arg_buffer[1];
//reading env and args
void* a8768287889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8768087886 = (decode_clo(env88030))[3];
//not do dummy comment
void* kont87775 = (decode_clo(env88030))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env88030))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont87775;
arg_buffer[3] = a8768087886;
arg_buffer[4] = a8768287889;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88029 = encode_clo(alloc_clo(lam88029_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88033 = arg_buffer[1];
//reading env and args
void* kont87775 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar88707 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88707, "1", 10);
void* a8768087886 = encode_mpz(mpzvar88707);
mpz_t* mpzvar88708 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88708, "2", 10);
void* a8768187887 = encode_mpz(mpzvar88708);

//creating new closure instance
void** clo88710 = alloc_clo(lam88029_fptr, 3);

//setting env list
clo88710[1] = equal_u63;
clo88710[2] = kont87775;
clo88710[3] = a8768087886;
void* f8777687888 = encode_clo(clo88710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8777687888;
arg_buffer[3] = x;
arg_buffer[4] = a8768187887;
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
void* _88034 = arg_buffer[1];
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

void* kont8777787890 = prim_car(x);
void* x87891 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8777787890);
arg_buffer[2] = x87891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8777787890))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam88037_fptr() // lam88037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88038 = arg_buffer[1];
//reading env and args
void* a8768887901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87779 = (decode_clo(env88038))[3];
//not do dummy comment
void* x = (decode_clo(env88038))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env88038))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont87779;
arg_buffer[3] = x;
arg_buffer[4] = a8768887901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88037 = encode_clo(alloc_clo(lam88037_fptr, 0));

void* lam88039_fptr() // lam88039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88040 = arg_buffer[1];
//reading env and args
void* a8768687898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88040))[5];
//not do dummy comment
void* lst = (decode_clo(env88040))[4];
//not do dummy comment
void* kont87779 = (decode_clo(env88040))[3];
//not do dummy comment
void* x = (decode_clo(env88040))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env88040))[1];

//if-clause
bool if_guard88711 = is_true(a8768687898);
if(if_guard88711)
{
void* x8768787899 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87779);
arg_buffer[2] = x8768787899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87779))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo88713 = alloc_clo(lam88037_fptr, 3);

//setting env list
clo88713[1] = member_u63;
clo88713[2] = x;
clo88713[3] = kont87779;
void* f8778087900 = encode_clo(clo88713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8778087900;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88039 = encode_clo(alloc_clo(lam88039_fptr, 0));

void* lam88041_fptr() // lam88041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88042 = arg_buffer[1];
//reading env and args
void* a8768587896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88042))[6];
//not do dummy comment
void* lst = (decode_clo(env88042))[5];
//not do dummy comment
void* kont87779 = (decode_clo(env88042))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env88042))[3];
//not do dummy comment
void* x = (decode_clo(env88042))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env88042))[1];

//creating new closure instance
void** clo88715 = alloc_clo(lam88039_fptr, 5);

//setting env list
clo88715[1] = member_u63;
clo88715[2] = x;
clo88715[3] = kont87779;
clo88715[4] = lst;
clo88715[5] = cdr;
void* f8778187897 = encode_clo(clo88715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8778187897;
arg_buffer[3] = a8768587896;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88041 = encode_clo(alloc_clo(lam88041_fptr, 0));

void* lam88043_fptr() // lam88043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88044 = arg_buffer[1];
//reading env and args
void* a8768387893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88044))[7];
//not do dummy comment
void* lst = (decode_clo(env88044))[6];
//not do dummy comment
void* kont87779 = (decode_clo(env88044))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env88044))[4];
//not do dummy comment
void* x = (decode_clo(env88044))[3];
//not do dummy comment
void* car = (decode_clo(env88044))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env88044))[1];

//if-clause
bool if_guard88716 = is_true(a8768387893);
if(if_guard88716)
{
void* x8768487894 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87779);
arg_buffer[2] = x8768487894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87779))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo88718 = alloc_clo(lam88041_fptr, 6);

//setting env list
clo88718[1] = member_u63;
clo88718[2] = x;
clo88718[3] = equal_u63;
clo88718[4] = kont87779;
clo88718[5] = lst;
clo88718[6] = cdr;
void* f8778287895 = encode_clo(clo88718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8778287895;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88043 = encode_clo(alloc_clo(lam88043_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88045 = arg_buffer[1];
//reading env and args
void* kont87779 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo88720 = alloc_clo(lam88043_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo88720[1] = member_u63;
clo88720[2] = car;
clo88720[3] = x;
clo88720[4] = equal_u63;
clo88720[5] = kont87779;
clo88720[6] = lst;
clo88720[7] = cdr;
void* f8778387892 = encode_clo(clo88720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8778387892;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam88046_fptr() // lam88046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88047 = arg_buffer[1];
//reading env and args
void* a8769287909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8769187907 = (decode_clo(env88047))[4];
//not do dummy comment
void* fun = (decode_clo(env88047))[3];
//not do dummy comment
void* kont87784 = (decode_clo(env88047))[2];
//not do dummy comment
void* foldl = (decode_clo(env88047))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont87784;
arg_buffer[3] = fun;
arg_buffer[4] = a8769187907;
arg_buffer[5] = a8769287909;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88046 = encode_clo(alloc_clo(lam88046_fptr, 0));

void* lam88048_fptr() // lam88048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88049 = arg_buffer[1];
//reading env and args
void* a8769187907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88049))[5];
//not do dummy comment
void* lst = (decode_clo(env88049))[4];
//not do dummy comment
void* fun = (decode_clo(env88049))[3];
//not do dummy comment
void* kont87784 = (decode_clo(env88049))[2];
//not do dummy comment
void* foldl = (decode_clo(env88049))[1];

//creating new closure instance
void** clo88722 = alloc_clo(lam88046_fptr, 4);

//setting env list
clo88722[1] = foldl;
clo88722[2] = kont87784;
clo88722[3] = fun;
clo88722[4] = a8769187907;
void* f8778587908 = encode_clo(clo88722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8778587908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88048 = encode_clo(alloc_clo(lam88048_fptr, 0));

void* lam88050_fptr() // lam88050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88051 = arg_buffer[1];
//reading env and args
void* a8769087905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88051))[6];
//not do dummy comment
void* lst = (decode_clo(env88051))[5];
//not do dummy comment
void* fun = (decode_clo(env88051))[4];
//not do dummy comment
void* foldl = (decode_clo(env88051))[3];
//not do dummy comment
void* acc = (decode_clo(env88051))[2];
//not do dummy comment
void* kont87784 = (decode_clo(env88051))[1];

//creating new closure instance
void** clo88724 = alloc_clo(lam88048_fptr, 5);

//setting env list
clo88724[1] = foldl;
clo88724[2] = kont87784;
clo88724[3] = fun;
clo88724[4] = lst;
clo88724[5] = cdr;
void* f8778687906 = encode_clo(clo88724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8778687906;
arg_buffer[3] = a8769087905;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88050 = encode_clo(alloc_clo(lam88050_fptr, 0));

void* lam88052_fptr() // lam88052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88053 = arg_buffer[1];
//reading env and args
void* a8768987903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88053))[7];
//not do dummy comment
void* lst = (decode_clo(env88053))[6];
//not do dummy comment
void* fun = (decode_clo(env88053))[5];
//not do dummy comment
void* car = (decode_clo(env88053))[4];
//not do dummy comment
void* foldl = (decode_clo(env88053))[3];
//not do dummy comment
void* acc = (decode_clo(env88053))[2];
//not do dummy comment
void* kont87784 = (decode_clo(env88053))[1];

//if-clause
bool if_guard88725 = is_true(a8768987903);
if(if_guard88725)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87784);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87784))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo88727 = alloc_clo(lam88050_fptr, 6);

//setting env list
clo88727[1] = kont87784;
clo88727[2] = acc;
clo88727[3] = foldl;
clo88727[4] = fun;
clo88727[5] = lst;
clo88727[6] = cdr;
void* f8778787904 = encode_clo(clo88727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8778787904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88052 = encode_clo(alloc_clo(lam88052_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88054 = arg_buffer[1];
//reading env and args
void* kont87784 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo88729 = alloc_clo(lam88052_fptr, 7);

//setting env list
clo88729[1] = kont87784;
clo88729[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo88729[3] = foldl;
clo88729[4] = car;
clo88729[5] = fun;
clo88729[6] = lst;
clo88729[7] = cdr;
void* f8778887902 = encode_clo(clo88729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8778887902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam88055_fptr() // lam88055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88056 = arg_buffer[1];
//reading env and args
void* a8769687917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87789 = (decode_clo(env88056))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env88056))[2];
//not do dummy comment
void* a8769487913 = (decode_clo(env88056))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont87789;
arg_buffer[3] = a8769487913;
arg_buffer[4] = a8769687917;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88055 = encode_clo(alloc_clo(lam88055_fptr, 0));

void* lam88057_fptr() // lam88057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88058 = arg_buffer[1];
//reading env and args
void* a8769587915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87789 = (decode_clo(env88058))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env88058))[4];
//not do dummy comment
void* cons = (decode_clo(env88058))[3];
//not do dummy comment
void* a8769487913 = (decode_clo(env88058))[2];
//not do dummy comment
void* lst2 = (decode_clo(env88058))[1];

//creating new closure instance
void** clo88731 = alloc_clo(lam88055_fptr, 3);

//setting env list
clo88731[1] = a8769487913;
clo88731[2] = reverse_u45helper;
clo88731[3] = kont87789;
void* f8779087916 = encode_clo(clo88731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8779087916;
arg_buffer[3] = a8769587915;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88057 = encode_clo(alloc_clo(lam88057_fptr, 0));

void* lam88059_fptr() // lam88059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88060 = arg_buffer[1];
//reading env and args
void* a8769487913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87789 = (decode_clo(env88060))[6];
//not do dummy comment
void* lst = (decode_clo(env88060))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env88060))[4];
//not do dummy comment
void* lst2 = (decode_clo(env88060))[3];
//not do dummy comment
void* car = (decode_clo(env88060))[2];
//not do dummy comment
void* cons = (decode_clo(env88060))[1];

//creating new closure instance
void** clo88733 = alloc_clo(lam88057_fptr, 5);

//setting env list
clo88733[1] = lst2;
clo88733[2] = a8769487913;
clo88733[3] = cons;
clo88733[4] = reverse_u45helper;
clo88733[5] = kont87789;
void* f8779187914 = encode_clo(clo88733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8779187914;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88059 = encode_clo(alloc_clo(lam88059_fptr, 0));

void* lam88061_fptr() // lam88061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88062 = arg_buffer[1];
//reading env and args
void* a8769387911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env88062))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env88062))[6];
//not do dummy comment
void* lst2 = (decode_clo(env88062))[5];
//not do dummy comment
void* car = (decode_clo(env88062))[4];
//not do dummy comment
void* cons = (decode_clo(env88062))[3];
//not do dummy comment
void* cdr = (decode_clo(env88062))[2];
//not do dummy comment
void* kont87789 = (decode_clo(env88062))[1];

//if-clause
bool if_guard88734 = is_true(a8769387911);
if(if_guard88734)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87789);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87789))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo88736 = alloc_clo(lam88059_fptr, 6);

//setting env list
clo88736[1] = cons;
clo88736[2] = car;
clo88736[3] = lst2;
clo88736[4] = reverse_u45helper;
clo88736[5] = lst;
clo88736[6] = kont87789;
void* f8779287912 = encode_clo(clo88736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8779287912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88061 = encode_clo(alloc_clo(lam88061_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88063 = arg_buffer[1];
//reading env and args
void* kont87789 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo88738 = alloc_clo(lam88061_fptr, 7);

//setting env list
clo88738[1] = kont87789;
clo88738[2] = cdr;
clo88738[3] = cons;
clo88738[4] = car;
clo88738[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo88738[6] = reverse_u45helper;
clo88738[7] = lst;
void* f8779387910 = encode_clo(clo88738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8779387910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam88064_fptr() // lam88064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88065 = arg_buffer[1];
//reading env and args
void* a8769787919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env88065))[3];
//not do dummy comment
void* kont87794 = (decode_clo(env88065))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env88065))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont87794;
arg_buffer[3] = lst;
arg_buffer[4] = a8769787919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88064 = encode_clo(alloc_clo(lam88064_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88066 = arg_buffer[1];
//reading env and args
void* kont87794 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo88740 = alloc_clo(lam88064_fptr, 3);

//setting env list
clo88740[1] = reverse_u45helper;
clo88740[2] = kont87794;
clo88740[3] = lst;
void* f8779587918 = encode_clo(clo88740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8779587918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam88067_fptr() // lam88067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88068 = arg_buffer[1];
//reading env and args
void* x8770087924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87796 = (decode_clo(env88068))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87796);
arg_buffer[2] = x8770087924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87796))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88067 = encode_clo(alloc_clo(lam88067_fptr, 0));

void* lam88069_fptr() // lam88069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88070 = arg_buffer[1];
//reading env and args
void* a8770587933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87796 = (decode_clo(env88070))[4];
//not do dummy comment
void* a8770187926 = (decode_clo(env88070))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env88070))[2];
//not do dummy comment
void* a8770387929 = (decode_clo(env88070))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont87796;
arg_buffer[3] = a8770187926;
arg_buffer[4] = a8770387929;
arg_buffer[5] = a8770587933;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88069 = encode_clo(alloc_clo(lam88069_fptr, 0));

void* lam88071_fptr() // lam88071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88072 = arg_buffer[1];
//reading env and args
void* a8770487931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87796 = (decode_clo(env88072))[6];
//not do dummy comment
void* a8770187926 = (decode_clo(env88072))[5];
//not do dummy comment
void* cons = (decode_clo(env88072))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env88072))[3];
//not do dummy comment
void* a8770387929 = (decode_clo(env88072))[2];
//not do dummy comment
void* lst2 = (decode_clo(env88072))[1];

//creating new closure instance
void** clo88742 = alloc_clo(lam88069_fptr, 4);

//setting env list
clo88742[1] = a8770387929;
clo88742[2] = take_u45helper;
clo88742[3] = a8770187926;
clo88742[4] = kont87796;
void* f8779887932 = encode_clo(clo88742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8779887932;
arg_buffer[3] = a8770487931;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88071 = encode_clo(alloc_clo(lam88071_fptr, 0));

void* lam88073_fptr() // lam88073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88074 = arg_buffer[1];
//reading env and args
void* a8770387929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env88074))[7];
//not do dummy comment
void* kont87796 = (decode_clo(env88074))[6];
//not do dummy comment
void* a8770187926 = (decode_clo(env88074))[5];
//not do dummy comment
void* car = (decode_clo(env88074))[4];
//not do dummy comment
void* cons = (decode_clo(env88074))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env88074))[2];
//not do dummy comment
void* lst2 = (decode_clo(env88074))[1];

//creating new closure instance
void** clo88744 = alloc_clo(lam88071_fptr, 6);

//setting env list
clo88744[1] = lst2;
clo88744[2] = a8770387929;
clo88744[3] = take_u45helper;
clo88744[4] = cons;
clo88744[5] = a8770187926;
clo88744[6] = kont87796;
void* f8779987930 = encode_clo(clo88744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8779987930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88073 = encode_clo(alloc_clo(lam88073_fptr, 0));

void* lam88076_fptr() // lam88076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88077 = arg_buffer[1];
//reading env and args
void* a8770187926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env88077))[8];
//not do dummy comment
void* kont87796 = (decode_clo(env88077))[7];
//not do dummy comment
void* cons = (decode_clo(env88077))[6];
//not do dummy comment
void* _u45 = (decode_clo(env88077))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env88077))[4];
//not do dummy comment
void* lst2 = (decode_clo(env88077))[3];
//not do dummy comment
void* n = (decode_clo(env88077))[2];
//not do dummy comment
void* car = (decode_clo(env88077))[1];
mpz_t* mpzvar88745 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88745, "1", 10);
void* a8770287927 = encode_mpz(mpzvar88745);

//creating new closure instance
void** clo88747 = alloc_clo(lam88073_fptr, 7);

//setting env list
clo88747[1] = lst2;
clo88747[2] = take_u45helper;
clo88747[3] = cons;
clo88747[4] = car;
clo88747[5] = a8770187926;
clo88747[6] = kont87796;
clo88747[7] = lst;
void* f8780087928 = encode_clo(clo88747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8780087928;
arg_buffer[3] = n;
arg_buffer[4] = a8770287927;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88076 = encode_clo(alloc_clo(lam88076_fptr, 0));

void* lam88078_fptr() // lam88078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88079 = arg_buffer[1];
//reading env and args
void* a8769987922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88079))[10];
//not do dummy comment
void* lst = (decode_clo(env88079))[9];
//not do dummy comment
void* cons = (decode_clo(env88079))[8];
//not do dummy comment
void* _u45 = (decode_clo(env88079))[7];
//not do dummy comment
void* kont87796 = (decode_clo(env88079))[6];
//not do dummy comment
void* reverse = (decode_clo(env88079))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env88079))[4];
//not do dummy comment
void* lst2 = (decode_clo(env88079))[3];
//not do dummy comment
void* n = (decode_clo(env88079))[2];
//not do dummy comment
void* car = (decode_clo(env88079))[1];

//if-clause
bool if_guard88748 = is_true(a8769987922);
if(if_guard88748)
{

//creating new closure instance
void** clo88750 = alloc_clo(lam88067_fptr, 1);

//setting env list
clo88750[1] = kont87796;
void* f8779787923 = encode_clo(clo88750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8779787923;
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
void** clo88752 = alloc_clo(lam88076_fptr, 8);

//setting env list
clo88752[1] = car;
clo88752[2] = n;
clo88752[3] = lst2;
clo88752[4] = take_u45helper;
clo88752[5] = _u45;
clo88752[6] = cons;
clo88752[7] = kont87796;
clo88752[8] = lst;
void* f8780187925 = encode_clo(clo88752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8780187925;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88078 = encode_clo(alloc_clo(lam88078_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88081 = arg_buffer[1];
//reading env and args
void* kont87796 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar88753 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88753, "0", 10);
void* a8769887920 = encode_mpz(mpzvar88753);

//creating new closure instance
void** clo88755 = alloc_clo(lam88078_fptr, 10);

//setting env list
clo88755[1] = car;
clo88755[2] = n;
clo88755[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo88755[4] = take_u45helper;
clo88755[5] = reverse;
clo88755[6] = kont87796;
clo88755[7] = _u45;
clo88755[8] = cons;
clo88755[9] = lst;
clo88755[10] = cdr;
void* f8780287921 = encode_clo(clo88755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8780287921;
arg_buffer[3] = n;
arg_buffer[4] = a8769887920;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam88082_fptr() // lam88082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88083 = arg_buffer[1];
//reading env and args
void* a8770687935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env88083))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env88083))[3];
//not do dummy comment
void* n = (decode_clo(env88083))[2];
//not do dummy comment
void* kont87803 = (decode_clo(env88083))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont87803;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8770687935;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88082 = encode_clo(alloc_clo(lam88082_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88084 = arg_buffer[1];
//reading env and args
void* kont87803 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo88757 = alloc_clo(lam88082_fptr, 4);

//setting env list
clo88757[1] = kont87803;
clo88757[2] = n;
clo88757[3] = take_u45helper;
clo88757[4] = lst;
void* f8780487934 = encode_clo(clo88757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8780487934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam88086_fptr() // lam88086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88087 = arg_buffer[1];
//reading env and args
void* a8771187943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87805 = (decode_clo(env88087))[3];
//not do dummy comment
void* a8770987939 = (decode_clo(env88087))[2];
//not do dummy comment
void* _u43 = (decode_clo(env88087))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont87805;
arg_buffer[3] = a8770987939;
arg_buffer[4] = a8771187943;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88086 = encode_clo(alloc_clo(lam88086_fptr, 0));

void* lam88088_fptr() // lam88088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88089 = arg_buffer[1];
//reading env and args
void* a8771087941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87805 = (decode_clo(env88089))[4];
//not do dummy comment
void* length = (decode_clo(env88089))[3];
//not do dummy comment
void* a8770987939 = (decode_clo(env88089))[2];
//not do dummy comment
void* _u43 = (decode_clo(env88089))[1];

//creating new closure instance
void** clo88759 = alloc_clo(lam88086_fptr, 3);

//setting env list
clo88759[1] = _u43;
clo88759[2] = a8770987939;
clo88759[3] = kont87805;
void* f8780687942 = encode_clo(clo88759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8780687942;
arg_buffer[3] = a8771087941;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88088 = encode_clo(alloc_clo(lam88088_fptr, 0));

void* lam88091_fptr() // lam88091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88092 = arg_buffer[1];
//reading env and args
void* a8770787937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env88092))[5];
//not do dummy comment
void* length = (decode_clo(env88092))[4];
//not do dummy comment
void* _u43 = (decode_clo(env88092))[3];
//not do dummy comment
void* cdr = (decode_clo(env88092))[2];
//not do dummy comment
void* kont87805 = (decode_clo(env88092))[1];

//if-clause
bool if_guard88760 = is_true(a8770787937);
if(if_guard88760)
{
mpz_t* mpzvar88761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88761, "0", 10);
void* x8770887938 = encode_mpz(mpzvar88761);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87805);
arg_buffer[2] = x8770887938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87805))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar88762 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88762, "1", 10);
void* a8770987939 = encode_mpz(mpzvar88762);

//creating new closure instance
void** clo88764 = alloc_clo(lam88088_fptr, 4);

//setting env list
clo88764[1] = _u43;
clo88764[2] = a8770987939;
clo88764[3] = length;
clo88764[4] = kont87805;
void* f8780787940 = encode_clo(clo88764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8780787940;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88091 = encode_clo(alloc_clo(lam88091_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88093 = arg_buffer[1];
//reading env and args
void* kont87805 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo88766 = alloc_clo(lam88091_fptr, 5);

//setting env list
clo88766[1] = kont87805;
clo88766[2] = cdr;
clo88766[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo88766[4] = length;
clo88766[5] = lst;
void* f8780887936 = encode_clo(clo88766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8780887936;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam88094_fptr() // lam88094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88095 = arg_buffer[1];
//reading env and args
void* x8771387947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87809 = (decode_clo(env88095))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87809);
arg_buffer[2] = x8771387947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88094 = encode_clo(alloc_clo(lam88094_fptr, 0));

void* lam88096_fptr() // lam88096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88097 = arg_buffer[1];
//reading env and args
void* a8771787955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8771587951 = (decode_clo(env88097))[3];
//not do dummy comment
void* kont87809 = (decode_clo(env88097))[2];
//not do dummy comment
void* cons = (decode_clo(env88097))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont87809;
arg_buffer[3] = a8771587951;
arg_buffer[4] = a8771787955;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88096 = encode_clo(alloc_clo(lam88096_fptr, 0));

void* lam88098_fptr() // lam88098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88099 = arg_buffer[1];
//reading env and args
void* a8771687953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8771587951 = (decode_clo(env88099))[5];
//not do dummy comment
void* kont87809 = (decode_clo(env88099))[4];
//not do dummy comment
void* map = (decode_clo(env88099))[3];
//not do dummy comment
void* proc = (decode_clo(env88099))[2];
//not do dummy comment
void* cons = (decode_clo(env88099))[1];

//creating new closure instance
void** clo88768 = alloc_clo(lam88096_fptr, 3);

//setting env list
clo88768[1] = cons;
clo88768[2] = kont87809;
clo88768[3] = a8771587951;
void* f8781187954 = encode_clo(clo88768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8781187954;
arg_buffer[3] = proc;
arg_buffer[4] = a8771687953;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88098 = encode_clo(alloc_clo(lam88098_fptr, 0));

void* lam88100_fptr() // lam88100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88101 = arg_buffer[1];
//reading env and args
void* a8771587951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88101))[6];
//not do dummy comment
void* map = (decode_clo(env88101))[5];
//not do dummy comment
void* proc = (decode_clo(env88101))[4];
//not do dummy comment
void* cons = (decode_clo(env88101))[3];
//not do dummy comment
void* lst = (decode_clo(env88101))[2];
//not do dummy comment
void* kont87809 = (decode_clo(env88101))[1];

//creating new closure instance
void** clo88770 = alloc_clo(lam88098_fptr, 5);

//setting env list
clo88770[1] = cons;
clo88770[2] = proc;
clo88770[3] = map;
clo88770[4] = kont87809;
clo88770[5] = a8771587951;
void* f8781287952 = encode_clo(clo88770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8781287952;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88100 = encode_clo(alloc_clo(lam88100_fptr, 0));

void* lam88102_fptr() // lam88102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88103 = arg_buffer[1];
//reading env and args
void* a8771487949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88103))[6];
//not do dummy comment
void* map = (decode_clo(env88103))[5];
//not do dummy comment
void* proc = (decode_clo(env88103))[4];
//not do dummy comment
void* cons = (decode_clo(env88103))[3];
//not do dummy comment
void* lst = (decode_clo(env88103))[2];
//not do dummy comment
void* kont87809 = (decode_clo(env88103))[1];

//creating new closure instance
void** clo88772 = alloc_clo(lam88100_fptr, 6);

//setting env list
clo88772[1] = kont87809;
clo88772[2] = lst;
clo88772[3] = cons;
clo88772[4] = proc;
clo88772[5] = map;
clo88772[6] = cdr;
void* f8781387950 = encode_clo(clo88772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8781387950;
arg_buffer[3] = a8771487949;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88102 = encode_clo(alloc_clo(lam88102_fptr, 0));

void* lam88104_fptr() // lam88104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88105 = arg_buffer[1];
//reading env and args
void* a8771287945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env88105))[8];
//not do dummy comment
void* proc = (decode_clo(env88105))[7];
//not do dummy comment
void* car = (decode_clo(env88105))[6];
//not do dummy comment
void* cons = (decode_clo(env88105))[5];
//not do dummy comment
void* list = (decode_clo(env88105))[4];
//not do dummy comment
void* cdr = (decode_clo(env88105))[3];
//not do dummy comment
void* lst = (decode_clo(env88105))[2];
//not do dummy comment
void* kont87809 = (decode_clo(env88105))[1];

//if-clause
bool if_guard88773 = is_true(a8771287945);
if(if_guard88773)
{

//creating new closure instance
void** clo88775 = alloc_clo(lam88094_fptr, 1);

//setting env list
clo88775[1] = kont87809;
void* f8781087946 = encode_clo(clo88775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8781087946;
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
void** clo88777 = alloc_clo(lam88102_fptr, 6);

//setting env list
clo88777[1] = kont87809;
clo88777[2] = lst;
clo88777[3] = cons;
clo88777[4] = proc;
clo88777[5] = map;
clo88777[6] = cdr;
void* f8781487948 = encode_clo(clo88777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8781487948;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88104 = encode_clo(alloc_clo(lam88104_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88106 = arg_buffer[1];
//reading env and args
void* kont87809 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo88779 = alloc_clo(lam88104_fptr, 8);

//setting env list
clo88779[1] = kont87809;
clo88779[2] = lst;
clo88779[3] = cdr;
clo88779[4] = list;
clo88779[5] = cons;
clo88779[6] = car;
clo88779[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo88779[8] = map;
void* f8781587944 = encode_clo(clo88779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8781587944;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam88107_fptr() // lam88107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88108 = arg_buffer[1];
//reading env and args
void* x8771987959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87816 = (decode_clo(env88108))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87816);
arg_buffer[2] = x8771987959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87816))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88107 = encode_clo(alloc_clo(lam88107_fptr, 0));

void* lam88109_fptr() // lam88109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88110 = arg_buffer[1];
//reading env and args
void* a8772487969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8772287965 = (decode_clo(env88110))[3];
//not do dummy comment
void* kont87816 = (decode_clo(env88110))[2];
//not do dummy comment
void* cons = (decode_clo(env88110))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont87816;
arg_buffer[3] = a8772287965;
arg_buffer[4] = a8772487969;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88109 = encode_clo(alloc_clo(lam88109_fptr, 0));

void* lam88111_fptr() // lam88111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88112 = arg_buffer[1];
//reading env and args
void* a8772387967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8772287965 = (decode_clo(env88112))[5];
//not do dummy comment
void* op = (decode_clo(env88112))[4];
//not do dummy comment
void* kont87816 = (decode_clo(env88112))[3];
//not do dummy comment
void* filter = (decode_clo(env88112))[2];
//not do dummy comment
void* cons = (decode_clo(env88112))[1];

//creating new closure instance
void** clo88781 = alloc_clo(lam88109_fptr, 3);

//setting env list
clo88781[1] = cons;
clo88781[2] = kont87816;
clo88781[3] = a8772287965;
void* f8781887968 = encode_clo(clo88781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8781887968;
arg_buffer[3] = op;
arg_buffer[4] = a8772387967;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88111 = encode_clo(alloc_clo(lam88111_fptr, 0));

void* lam88113_fptr() // lam88113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88114 = arg_buffer[1];
//reading env and args
void* a8772287965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88114))[6];
//not do dummy comment
void* lst = (decode_clo(env88114))[5];
//not do dummy comment
void* op = (decode_clo(env88114))[4];
//not do dummy comment
void* kont87816 = (decode_clo(env88114))[3];
//not do dummy comment
void* filter = (decode_clo(env88114))[2];
//not do dummy comment
void* cons = (decode_clo(env88114))[1];

//creating new closure instance
void** clo88783 = alloc_clo(lam88111_fptr, 5);

//setting env list
clo88783[1] = cons;
clo88783[2] = filter;
clo88783[3] = kont87816;
clo88783[4] = op;
clo88783[5] = a8772287965;
void* f8781987966 = encode_clo(clo88783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8781987966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88113 = encode_clo(alloc_clo(lam88113_fptr, 0));

void* lam88115_fptr() // lam88115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88116 = arg_buffer[1];
//reading env and args
void* a8772587971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env88116))[3];
//not do dummy comment
void* kont87816 = (decode_clo(env88116))[2];
//not do dummy comment
void* filter = (decode_clo(env88116))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont87816;
arg_buffer[3] = op;
arg_buffer[4] = a8772587971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88115 = encode_clo(alloc_clo(lam88115_fptr, 0));

void* lam88117_fptr() // lam88117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88118 = arg_buffer[1];
//reading env and args
void* a8772187963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88118))[7];
//not do dummy comment
void* lst = (decode_clo(env88118))[6];
//not do dummy comment
void* op = (decode_clo(env88118))[5];
//not do dummy comment
void* kont87816 = (decode_clo(env88118))[4];
//not do dummy comment
void* cons = (decode_clo(env88118))[3];
//not do dummy comment
void* filter = (decode_clo(env88118))[2];
//not do dummy comment
void* car = (decode_clo(env88118))[1];

//if-clause
bool if_guard88784 = is_true(a8772187963);
if(if_guard88784)
{

//creating new closure instance
void** clo88786 = alloc_clo(lam88113_fptr, 6);

//setting env list
clo88786[1] = cons;
clo88786[2] = filter;
clo88786[3] = kont87816;
clo88786[4] = op;
clo88786[5] = lst;
clo88786[6] = cdr;
void* f8782087964 = encode_clo(clo88786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8782087964;
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
void** clo88788 = alloc_clo(lam88115_fptr, 3);

//setting env list
clo88788[1] = filter;
clo88788[2] = kont87816;
clo88788[3] = op;
void* f8782187970 = encode_clo(clo88788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8782187970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88117 = encode_clo(alloc_clo(lam88117_fptr, 0));

void* lam88119_fptr() // lam88119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88120 = arg_buffer[1];
//reading env and args
void* a8772087961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88120))[7];
//not do dummy comment
void* lst = (decode_clo(env88120))[6];
//not do dummy comment
void* op = (decode_clo(env88120))[5];
//not do dummy comment
void* kont87816 = (decode_clo(env88120))[4];
//not do dummy comment
void* cons = (decode_clo(env88120))[3];
//not do dummy comment
void* filter = (decode_clo(env88120))[2];
//not do dummy comment
void* car = (decode_clo(env88120))[1];

//creating new closure instance
void** clo88790 = alloc_clo(lam88117_fptr, 7);

//setting env list
clo88790[1] = car;
clo88790[2] = filter;
clo88790[3] = cons;
clo88790[4] = kont87816;
clo88790[5] = op;
clo88790[6] = lst;
clo88790[7] = cdr;
void* f8782287962 = encode_clo(clo88790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8782287962;
arg_buffer[3] = a8772087961;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88119 = encode_clo(alloc_clo(lam88119_fptr, 0));

void* lam88121_fptr() // lam88121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88122 = arg_buffer[1];
//reading env and args
void* a8771887957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env88122))[8];
//not do dummy comment
void* op = (decode_clo(env88122))[7];
//not do dummy comment
void* kont87816 = (decode_clo(env88122))[6];
//not do dummy comment
void* cons = (decode_clo(env88122))[5];
//not do dummy comment
void* list = (decode_clo(env88122))[4];
//not do dummy comment
void* cdr = (decode_clo(env88122))[3];
//not do dummy comment
void* filter = (decode_clo(env88122))[2];
//not do dummy comment
void* car = (decode_clo(env88122))[1];

//if-clause
bool if_guard88791 = is_true(a8771887957);
if(if_guard88791)
{

//creating new closure instance
void** clo88793 = alloc_clo(lam88107_fptr, 1);

//setting env list
clo88793[1] = kont87816;
void* f8781787958 = encode_clo(clo88793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8781787958;
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
void** clo88795 = alloc_clo(lam88119_fptr, 7);

//setting env list
clo88795[1] = car;
clo88795[2] = filter;
clo88795[3] = cons;
clo88795[4] = kont87816;
clo88795[5] = op;
clo88795[6] = lst;
clo88795[7] = cdr;
void* f8782387960 = encode_clo(clo88795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8782387960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88121 = encode_clo(alloc_clo(lam88121_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88123 = arg_buffer[1];
//reading env and args
void* kont87816 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo88797 = alloc_clo(lam88121_fptr, 8);

//setting env list
clo88797[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo88797[2] = filter;
clo88797[3] = cdr;
clo88797[4] = list;
clo88797[5] = cons;
clo88797[6] = kont87816;
clo88797[7] = op;
clo88797[8] = lst;
void* f8782487956 = encode_clo(clo88797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8782487956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam88124_fptr() // lam88124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88125 = arg_buffer[1];
//reading env and args
void* a8773087979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8772887976 = (decode_clo(env88125))[3];
//not do dummy comment
void* drop = (decode_clo(env88125))[2];
//not do dummy comment
void* kont87825 = (decode_clo(env88125))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont87825;
arg_buffer[3] = a8772887976;
arg_buffer[4] = a8773087979;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88124 = encode_clo(alloc_clo(lam88124_fptr, 0));

void* lam88127_fptr() // lam88127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88128 = arg_buffer[1];
//reading env and args
void* a8772887976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env88128))[4];
//not do dummy comment
void* _u45 = (decode_clo(env88128))[3];
//not do dummy comment
void* drop = (decode_clo(env88128))[2];
//not do dummy comment
void* kont87825 = (decode_clo(env88128))[1];
mpz_t* mpzvar88798 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88798, "1", 10);
void* a8772987977 = encode_mpz(mpzvar88798);

//creating new closure instance
void** clo88800 = alloc_clo(lam88124_fptr, 3);

//setting env list
clo88800[1] = kont87825;
clo88800[2] = drop;
clo88800[3] = a8772887976;
void* f8782687978 = encode_clo(clo88800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8782687978;
arg_buffer[3] = n;
arg_buffer[4] = a8772987977;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88127 = encode_clo(alloc_clo(lam88127_fptr, 0));

void* lam88129_fptr() // lam88129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88130 = arg_buffer[1];
//reading env and args
void* a8772787974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88130))[6];
//not do dummy comment
void* n = (decode_clo(env88130))[5];
//not do dummy comment
void* _u45 = (decode_clo(env88130))[4];
//not do dummy comment
void* lst = (decode_clo(env88130))[3];
//not do dummy comment
void* drop = (decode_clo(env88130))[2];
//not do dummy comment
void* kont87825 = (decode_clo(env88130))[1];

//if-clause
bool if_guard88801 = is_true(a8772787974);
if(if_guard88801)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87825);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87825))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo88803 = alloc_clo(lam88127_fptr, 4);

//setting env list
clo88803[1] = kont87825;
clo88803[2] = drop;
clo88803[3] = _u45;
clo88803[4] = n;
void* f8782787975 = encode_clo(clo88803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8782787975;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88129 = encode_clo(alloc_clo(lam88129_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88132 = arg_buffer[1];
//reading env and args
void* kont87825 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar88804 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88804, "0", 10);
void* a8772687972 = encode_mpz(mpzvar88804);

//creating new closure instance
void** clo88806 = alloc_clo(lam88129_fptr, 6);

//setting env list
clo88806[1] = kont87825;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo88806[2] = drop;
clo88806[3] = lst;
clo88806[4] = _u45;
clo88806[5] = n;
clo88806[6] = cdr;
void* f8782887973 = encode_clo(clo88806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8782887973;
arg_buffer[3] = n;
arg_buffer[4] = a8772687972;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam88133_fptr() // lam88133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88134 = arg_buffer[1];
//reading env and args
void* a8773487987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8773287983 = (decode_clo(env88134))[3];
//not do dummy comment
void* kont87829 = (decode_clo(env88134))[2];
//not do dummy comment
void* proc = (decode_clo(env88134))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont87829;
arg_buffer[3] = a8773287983;
arg_buffer[4] = a8773487987;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88133 = encode_clo(alloc_clo(lam88133_fptr, 0));

void* lam88135_fptr() // lam88135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88136 = arg_buffer[1];
//reading env and args
void* a8773387985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8773287983 = (decode_clo(env88136))[5];
//not do dummy comment
void* foldr = (decode_clo(env88136))[4];
//not do dummy comment
void* kont87829 = (decode_clo(env88136))[3];
//not do dummy comment
void* proc = (decode_clo(env88136))[2];
//not do dummy comment
void* acc = (decode_clo(env88136))[1];

//creating new closure instance
void** clo88808 = alloc_clo(lam88133_fptr, 3);

//setting env list
clo88808[1] = proc;
clo88808[2] = kont87829;
clo88808[3] = a8773287983;
void* f8783087986 = encode_clo(clo88808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8783087986;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8773387985;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88135 = encode_clo(alloc_clo(lam88135_fptr, 0));

void* lam88137_fptr() // lam88137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88138 = arg_buffer[1];
//reading env and args
void* a8773287983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88138))[6];
//not do dummy comment
void* kont87829 = (decode_clo(env88138))[5];
//not do dummy comment
void* foldr = (decode_clo(env88138))[4];
//not do dummy comment
void* lst = (decode_clo(env88138))[3];
//not do dummy comment
void* proc = (decode_clo(env88138))[2];
//not do dummy comment
void* acc = (decode_clo(env88138))[1];

//creating new closure instance
void** clo88810 = alloc_clo(lam88135_fptr, 5);

//setting env list
clo88810[1] = acc;
clo88810[2] = proc;
clo88810[3] = kont87829;
clo88810[4] = foldr;
clo88810[5] = a8773287983;
void* f8783187984 = encode_clo(clo88810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8783187984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88137 = encode_clo(alloc_clo(lam88137_fptr, 0));

void* lam88139_fptr() // lam88139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88140 = arg_buffer[1];
//reading env and args
void* a8773187981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88140))[7];
//not do dummy comment
void* kont87829 = (decode_clo(env88140))[6];
//not do dummy comment
void* car = (decode_clo(env88140))[5];
//not do dummy comment
void* foldr = (decode_clo(env88140))[4];
//not do dummy comment
void* lst = (decode_clo(env88140))[3];
//not do dummy comment
void* proc = (decode_clo(env88140))[2];
//not do dummy comment
void* acc = (decode_clo(env88140))[1];

//if-clause
bool if_guard88811 = is_true(a8773187981);
if(if_guard88811)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87829);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87829))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo88813 = alloc_clo(lam88137_fptr, 6);

//setting env list
clo88813[1] = acc;
clo88813[2] = proc;
clo88813[3] = lst;
clo88813[4] = foldr;
clo88813[5] = kont87829;
clo88813[6] = cdr;
void* f8783287982 = encode_clo(clo88813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8783287982;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88139 = encode_clo(alloc_clo(lam88139_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88141 = arg_buffer[1];
//reading env and args
void* kont87829 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo88815 = alloc_clo(lam88139_fptr, 7);

//setting env list
clo88815[1] = acc;
clo88815[2] = proc;
clo88815[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo88815[4] = foldr;
clo88815[5] = car;
clo88815[6] = kont87829;
clo88815[7] = cdr;
void* f8783387980 = encode_clo(clo88815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8783387980;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam88142_fptr() // lam88142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88143 = arg_buffer[1];
//reading env and args
void* a8773887995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8773687991 = (decode_clo(env88143))[3];
//not do dummy comment
void* kont87834 = (decode_clo(env88143))[2];
//not do dummy comment
void* cons = (decode_clo(env88143))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont87834;
arg_buffer[3] = a8773687991;
arg_buffer[4] = a8773887995;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88142 = encode_clo(alloc_clo(lam88142_fptr, 0));

void* lam88144_fptr() // lam88144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88145 = arg_buffer[1];
//reading env and args
void* a8773787993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env88145))[5];
//not do dummy comment
void* a8773687991 = (decode_clo(env88145))[4];
//not do dummy comment
void* lst2 = (decode_clo(env88145))[3];
//not do dummy comment
void* kont87834 = (decode_clo(env88145))[2];
//not do dummy comment
void* cons = (decode_clo(env88145))[1];

//creating new closure instance
void** clo88817 = alloc_clo(lam88142_fptr, 3);

//setting env list
clo88817[1] = cons;
clo88817[2] = kont87834;
clo88817[3] = a8773687991;
void* f8783587994 = encode_clo(clo88817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8783587994;
arg_buffer[3] = a8773787993;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88144 = encode_clo(alloc_clo(lam88144_fptr, 0));

void* lam88146_fptr() // lam88146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88147 = arg_buffer[1];
//reading env and args
void* a8773687991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88147))[6];
//not do dummy comment
void* append = (decode_clo(env88147))[5];
//not do dummy comment
void* lst2 = (decode_clo(env88147))[4];
//not do dummy comment
void* cons = (decode_clo(env88147))[3];
//not do dummy comment
void* lst1 = (decode_clo(env88147))[2];
//not do dummy comment
void* kont87834 = (decode_clo(env88147))[1];

//creating new closure instance
void** clo88819 = alloc_clo(lam88144_fptr, 5);

//setting env list
clo88819[1] = cons;
clo88819[2] = kont87834;
clo88819[3] = lst2;
clo88819[4] = a8773687991;
clo88819[5] = append;
void* f8783687992 = encode_clo(clo88819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8783687992;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88146 = encode_clo(alloc_clo(lam88146_fptr, 0));

void* lam88148_fptr() // lam88148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88149 = arg_buffer[1];
//reading env and args
void* a8773587989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env88149))[7];
//not do dummy comment
void* append = (decode_clo(env88149))[6];
//not do dummy comment
void* lst2 = (decode_clo(env88149))[5];
//not do dummy comment
void* cons = (decode_clo(env88149))[4];
//not do dummy comment
void* lst1 = (decode_clo(env88149))[3];
//not do dummy comment
void* car = (decode_clo(env88149))[2];
//not do dummy comment
void* kont87834 = (decode_clo(env88149))[1];

//if-clause
bool if_guard88820 = is_true(a8773587989);
if(if_guard88820)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87834);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87834))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo88822 = alloc_clo(lam88146_fptr, 6);

//setting env list
clo88822[1] = kont87834;
clo88822[2] = lst1;
clo88822[3] = cons;
clo88822[4] = lst2;
clo88822[5] = append;
clo88822[6] = cdr;
void* f8783787990 = encode_clo(clo88822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8783787990;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam88148 = encode_clo(alloc_clo(lam88148_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88150 = arg_buffer[1];
//reading env and args
void* kont87834 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo88824 = alloc_clo(lam88148_fptr, 7);

//setting env list
clo88824[1] = kont87834;
clo88824[2] = car;
clo88824[3] = lst1;
clo88824[4] = cons;
clo88824[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo88824[6] = append;
clo88824[7] = cdr;
void* f8783887988 = encode_clo(clo88824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8783887988;
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
void* _88151 = arg_buffer[1];
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

void* kont8783987996 = prim_car(lst);
void* lst87997 = prim_cdr(lst);
void* x8773987998 = apply_prim_hash(lst87997);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8783987996);
arg_buffer[2] = x8773987998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8783987996))[0]);
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
void* _88152 = arg_buffer[1];
//reading env and args
void* kont87841 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8774087999 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87841);
arg_buffer[2] = x8774087999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87841))[0]);
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
void* _88153 = arg_buffer[1];
//reading env and args
void* kont87842 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8774188000 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87842);
arg_buffer[2] = x8774188000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87842))[0]);
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
void* _88154 = arg_buffer[1];
//reading env and args
void* kont87843 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8774288001 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87843);
arg_buffer[2] = x8774288001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87843))[0]);
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
void* _88155 = arg_buffer[1];
//reading env and args
void* kont87844 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8774388002 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87844);
arg_buffer[2] = x8774388002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87844))[0]);
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
void* _88159 = arg_buffer[1];
//reading env and args
void* kont87845 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar88825 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar88825, "1.4", 10);
void* a8774488003 = encode_mpf(mpfvar88825);
mpf_t* mpfvar88826 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar88826, "2.5", 10);
void* a8774588004 = encode_mpf(mpfvar88826);
mpz_t* mpzvar88827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar88827, "1.0", 10);
void* a8774688005 = encode_mpz(mpzvar88827);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont87845;
arg_buffer[3] = a8774488003;
arg_buffer[4] = a8774588004;
arg_buffer[5] = a8774688005;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam88160_fptr() // lam88160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env88161 = arg_buffer[1];
//reading env and args
void* x8774788007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont87846 = (decode_clo(env88161))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont87846);
arg_buffer[2] = x8774788007;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont87846))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam88160 = encode_clo(alloc_clo(lam88160_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _88162 = arg_buffer[1];
//reading env and args
void* kont87846 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo88829 = alloc_clo(lam88160_fptr, 1);

//setting env list
clo88829[1] = kont87846;
void* f8784788006 = encode_clo(clo88829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8784788006;
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

