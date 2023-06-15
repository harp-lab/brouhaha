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
void* _46132 = arg_buffer[1];
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

void* kont4587345973 = prim_car(lst);
void* lst45974 = prim_cdr(lst);
void* x4578745975 = apply_prim__u43(lst45974);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4587345973);
arg_buffer[2] = x4578745975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4587345973))[0]);
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
void* _46133 = arg_buffer[1];
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

void* kont4587545976 = prim_car(lst);
void* lst45977 = prim_cdr(lst);
void* x4578845978 = apply_prim__u45(lst45977);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4587545976);
arg_buffer[2] = x4578845978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4587545976))[0]);
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
void* _46134 = arg_buffer[1];
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

void* kont4587745979 = prim_car(lst);
void* lst45980 = prim_cdr(lst);
void* x4578945981 = apply_prim__u42(lst45980);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4587745979);
arg_buffer[2] = x4578945981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4587745979))[0]);
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
void* _46135 = arg_buffer[1];
//reading env and args
void* kont45879 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4579045982 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45879);
arg_buffer[2] = x4579045982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45879))[0]);
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
void* _46136 = arg_buffer[1];
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

void* kont4588045983 = prim_car(lst);
void* lst45984 = prim_cdr(lst);
void* x4579145985 = apply_prim__u47(lst45984);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4588045983);
arg_buffer[2] = x4579145985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4588045983))[0]);
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
void* _46137 = arg_buffer[1];
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

void* kont4588245986 = prim_car(lst);
void* lst45987 = prim_cdr(lst);
void* x4579245988 = apply_prim__u61(lst45987);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4588245986);
arg_buffer[2] = x4579245988;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4588245986))[0]);
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
void* _46138 = arg_buffer[1];
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

void* kont4588445989 = prim_car(lst);
void* lst45990 = prim_cdr(lst);
void* x4579345991 = apply_prim__u62(lst45990);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4588445989);
arg_buffer[2] = x4579345991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4588445989))[0]);
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
void* _46139 = arg_buffer[1];
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

void* kont4588645992 = prim_car(lst);
void* lst45993 = prim_cdr(lst);
void* x4579445994 = apply_prim__u60(lst45993);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4588645992);
arg_buffer[2] = x4579445994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4588645992))[0]);
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
void* _46140 = arg_buffer[1];
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

void* kont4588845995 = prim_car(lst);
void* lst45996 = prim_cdr(lst);
void* x4579545997 = apply_prim__u60_u61(lst45996);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4588845995);
arg_buffer[2] = x4579545997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4588845995))[0]);
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
void* _46141 = arg_buffer[1];
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

void* kont4589045998 = prim_car(lst);
void* lst45999 = prim_cdr(lst);
void* x4579646000 = apply_prim__u62_u61(lst45999);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4589045998);
arg_buffer[2] = x4579646000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4589045998))[0]);
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
void* _46142 = arg_buffer[1];
//reading env and args
void* kont45892 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4579746001 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45892);
arg_buffer[2] = x4579746001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45892))[0]);
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
void* _46143 = arg_buffer[1];
//reading env and args
void* kont45893 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4579846002 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45893);
arg_buffer[2] = x4579846002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45893))[0]);
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
void* _46144 = arg_buffer[1];
//reading env and args
void* kont45894 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4579946003 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45894);
arg_buffer[2] = x4579946003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45894))[0]);
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
void* _46145 = arg_buffer[1];
//reading env and args
void* kont45895 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4580046004 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45895);
arg_buffer[2] = x4580046004;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45895))[0]);
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
void* _46146 = arg_buffer[1];
//reading env and args
void* kont45896 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4580146005 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45896);
arg_buffer[2] = x4580146005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45896))[0]);
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
void* _46147 = arg_buffer[1];
//reading env and args
void* kont45897 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4580246006 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45897);
arg_buffer[2] = x4580246006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45897))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam46148_fptr() // lam46148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46149 = arg_buffer[1];
//reading env and args
void* a4580546010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env46149))[3];
//not do dummy comment
void* a4580346007 = (decode_clo(env46149))[2];
//not do dummy comment
void* kont45898 = (decode_clo(env46149))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45898;
arg_buffer[3] = a4580346007;
arg_buffer[4] = a4580546010;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46148 = encode_clo(alloc_clo(lam46148_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46152 = arg_buffer[1];
//reading env and args
void* kont45898 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46586 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46586, "0", 10);
void* a4580346007 = encode_mpz(mpzvar46586);
mpz_t* mpzvar46587 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46587, "2", 10);
void* a4580446008 = encode_mpz(mpzvar46587);

//creating new closure instance
void** clo46589 = alloc_clo(lam46148_fptr, 3);

//setting env list
clo46589[1] = kont45898;
clo46589[2] = a4580346007;
clo46589[3] = equal_u63;
void* f4589946009 = encode_clo(clo46589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4589946009;
arg_buffer[3] = x;
arg_buffer[4] = a4580446008;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam46153_fptr() // lam46153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46154 = arg_buffer[1];
//reading env and args
void* a4580846014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env46154))[3];
//not do dummy comment
void* a4580646011 = (decode_clo(env46154))[2];
//not do dummy comment
void* kont45900 = (decode_clo(env46154))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45900;
arg_buffer[3] = a4580646011;
arg_buffer[4] = a4580846014;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46153 = encode_clo(alloc_clo(lam46153_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46157 = arg_buffer[1];
//reading env and args
void* kont45900 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46590 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46590, "1", 10);
void* a4580646011 = encode_mpz(mpzvar46590);
mpz_t* mpzvar46591 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46591, "2", 10);
void* a4580746012 = encode_mpz(mpzvar46591);

//creating new closure instance
void** clo46593 = alloc_clo(lam46153_fptr, 3);

//setting env list
clo46593[1] = kont45900;
clo46593[2] = a4580646011;
clo46593[3] = equal_u63;
void* f4590146013 = encode_clo(clo46593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4590146013;
arg_buffer[3] = x;
arg_buffer[4] = a4580746012;
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
void* _46158 = arg_buffer[1];
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

void* kont4590246015 = prim_car(x);
void* x46016 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4590246015);
arg_buffer[2] = x46016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4590246015))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam46161_fptr() // lam46161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46162 = arg_buffer[1];
//reading env and args
void* a4581446026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45904 = (decode_clo(env46162))[3];
//not do dummy comment
void* x = (decode_clo(env46162))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46162))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont45904;
arg_buffer[3] = x;
arg_buffer[4] = a4581446026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46161 = encode_clo(alloc_clo(lam46161_fptr, 0));

void* lam46163_fptr() // lam46163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46164 = arg_buffer[1];
//reading env and args
void* a4581246023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46164))[5];
//not do dummy comment
void* kont45904 = (decode_clo(env46164))[4];
//not do dummy comment
void* lst = (decode_clo(env46164))[3];
//not do dummy comment
void* x = (decode_clo(env46164))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46164))[1];

//if-clause
bool if_guard46594 = is_true(a4581246023);
if(if_guard46594)
{
void* x4581346024 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45904);
arg_buffer[2] = x4581346024;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45904))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46596 = alloc_clo(lam46161_fptr, 3);

//setting env list
clo46596[1] = member_u63;
clo46596[2] = x;
clo46596[3] = kont45904;
void* f4590546025 = encode_clo(clo46596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4590546025;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46163 = encode_clo(alloc_clo(lam46163_fptr, 0));

void* lam46165_fptr() // lam46165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46166 = arg_buffer[1];
//reading env and args
void* a4581146021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46166))[6];
//not do dummy comment
void* kont45904 = (decode_clo(env46166))[5];
//not do dummy comment
void* lst = (decode_clo(env46166))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env46166))[3];
//not do dummy comment
void* x = (decode_clo(env46166))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46166))[1];

//creating new closure instance
void** clo46598 = alloc_clo(lam46163_fptr, 5);

//setting env list
clo46598[1] = member_u63;
clo46598[2] = x;
clo46598[3] = lst;
clo46598[4] = kont45904;
clo46598[5] = cdr;
void* f4590646022 = encode_clo(clo46598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4590646022;
arg_buffer[3] = a4581146021;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46165 = encode_clo(alloc_clo(lam46165_fptr, 0));

void* lam46167_fptr() // lam46167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46168 = arg_buffer[1];
//reading env and args
void* a4580946018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46168))[7];
//not do dummy comment
void* kont45904 = (decode_clo(env46168))[6];
//not do dummy comment
void* lst = (decode_clo(env46168))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env46168))[4];
//not do dummy comment
void* x = (decode_clo(env46168))[3];
//not do dummy comment
void* car = (decode_clo(env46168))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46168))[1];

//if-clause
bool if_guard46599 = is_true(a4580946018);
if(if_guard46599)
{
void* x4581046019 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45904);
arg_buffer[2] = x4581046019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45904))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46601 = alloc_clo(lam46165_fptr, 6);

//setting env list
clo46601[1] = member_u63;
clo46601[2] = x;
clo46601[3] = equal_u63;
clo46601[4] = lst;
clo46601[5] = kont45904;
clo46601[6] = cdr;
void* f4590746020 = encode_clo(clo46601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4590746020;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46167 = encode_clo(alloc_clo(lam46167_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46169 = arg_buffer[1];
//reading env and args
void* kont45904 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46603 = alloc_clo(lam46167_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo46603[1] = member_u63;
clo46603[2] = car;
clo46603[3] = x;
clo46603[4] = equal_u63;
clo46603[5] = lst;
clo46603[6] = kont45904;
clo46603[7] = cdr;
void* f4590846017 = encode_clo(clo46603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4590846017;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam46170_fptr() // lam46170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46171 = arg_buffer[1];
//reading env and args
void* a4581846034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4581746032 = (decode_clo(env46171))[4];
//not do dummy comment
void* kont45909 = (decode_clo(env46171))[3];
//not do dummy comment
void* fun = (decode_clo(env46171))[2];
//not do dummy comment
void* foldl = (decode_clo(env46171))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont45909;
arg_buffer[3] = fun;
arg_buffer[4] = a4581746032;
arg_buffer[5] = a4581846034;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46170 = encode_clo(alloc_clo(lam46170_fptr, 0));

void* lam46172_fptr() // lam46172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46173 = arg_buffer[1];
//reading env and args
void* a4581746032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46173))[5];
//not do dummy comment
void* lst = (decode_clo(env46173))[4];
//not do dummy comment
void* kont45909 = (decode_clo(env46173))[3];
//not do dummy comment
void* fun = (decode_clo(env46173))[2];
//not do dummy comment
void* foldl = (decode_clo(env46173))[1];

//creating new closure instance
void** clo46605 = alloc_clo(lam46170_fptr, 4);

//setting env list
clo46605[1] = foldl;
clo46605[2] = fun;
clo46605[3] = kont45909;
clo46605[4] = a4581746032;
void* f4591046033 = encode_clo(clo46605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4591046033;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46172 = encode_clo(alloc_clo(lam46172_fptr, 0));

void* lam46174_fptr() // lam46174 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46175 = arg_buffer[1];
//reading env and args
void* a4581646030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46175))[6];
//not do dummy comment
void* lst = (decode_clo(env46175))[5];
//not do dummy comment
void* kont45909 = (decode_clo(env46175))[4];
//not do dummy comment
void* fun = (decode_clo(env46175))[3];
//not do dummy comment
void* acc = (decode_clo(env46175))[2];
//not do dummy comment
void* foldl = (decode_clo(env46175))[1];

//creating new closure instance
void** clo46607 = alloc_clo(lam46172_fptr, 5);

//setting env list
clo46607[1] = foldl;
clo46607[2] = fun;
clo46607[3] = kont45909;
clo46607[4] = lst;
clo46607[5] = cdr;
void* f4591146031 = encode_clo(clo46607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4591146031;
arg_buffer[3] = a4581646030;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46174 = encode_clo(alloc_clo(lam46174_fptr, 0));

void* lam46176_fptr() // lam46176 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46177 = arg_buffer[1];
//reading env and args
void* a4581546028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46177))[7];
//not do dummy comment
void* lst = (decode_clo(env46177))[6];
//not do dummy comment
void* kont45909 = (decode_clo(env46177))[5];
//not do dummy comment
void* fun = (decode_clo(env46177))[4];
//not do dummy comment
void* acc = (decode_clo(env46177))[3];
//not do dummy comment
void* car = (decode_clo(env46177))[2];
//not do dummy comment
void* foldl = (decode_clo(env46177))[1];

//if-clause
bool if_guard46608 = is_true(a4581546028);
if(if_guard46608)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45909);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45909))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46610 = alloc_clo(lam46174_fptr, 6);

//setting env list
clo46610[1] = foldl;
clo46610[2] = acc;
clo46610[3] = fun;
clo46610[4] = kont45909;
clo46610[5] = lst;
clo46610[6] = cdr;
void* f4591246029 = encode_clo(clo46610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4591246029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46176 = encode_clo(alloc_clo(lam46176_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46178 = arg_buffer[1];
//reading env and args
void* kont45909 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46612 = alloc_clo(lam46176_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo46612[1] = foldl;
clo46612[2] = car;
clo46612[3] = acc;
clo46612[4] = fun;
clo46612[5] = kont45909;
clo46612[6] = lst;
clo46612[7] = cdr;
void* f4591346027 = encode_clo(clo46612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4591346027;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam46179_fptr() // lam46179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46180 = arg_buffer[1];
//reading env and args
void* a4582246042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46180))[3];
//not do dummy comment
void* a4582046038 = (decode_clo(env46180))[2];
//not do dummy comment
void* kont45914 = (decode_clo(env46180))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45914;
arg_buffer[3] = a4582046038;
arg_buffer[4] = a4582246042;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46179 = encode_clo(alloc_clo(lam46179_fptr, 0));

void* lam46181_fptr() // lam46181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46182 = arg_buffer[1];
//reading env and args
void* a4582146040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46182))[5];
//not do dummy comment
void* a4582046038 = (decode_clo(env46182))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46182))[3];
//not do dummy comment
void* kont45914 = (decode_clo(env46182))[2];
//not do dummy comment
void* cons = (decode_clo(env46182))[1];

//creating new closure instance
void** clo46614 = alloc_clo(lam46179_fptr, 3);

//setting env list
clo46614[1] = kont45914;
clo46614[2] = a4582046038;
clo46614[3] = reverse_u45helper;
void* f4591546041 = encode_clo(clo46614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4591546041;
arg_buffer[3] = a4582146040;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46181 = encode_clo(alloc_clo(lam46181_fptr, 0));

void* lam46183_fptr() // lam46183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46184 = arg_buffer[1];
//reading env and args
void* a4582046038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46184))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46184))[5];
//not do dummy comment
void* lst2 = (decode_clo(env46184))[4];
//not do dummy comment
void* cons = (decode_clo(env46184))[3];
//not do dummy comment
void* kont45914 = (decode_clo(env46184))[2];
//not do dummy comment
void* car = (decode_clo(env46184))[1];

//creating new closure instance
void** clo46616 = alloc_clo(lam46181_fptr, 5);

//setting env list
clo46616[1] = cons;
clo46616[2] = kont45914;
clo46616[3] = lst2;
clo46616[4] = a4582046038;
clo46616[5] = reverse_u45helper;
void* f4591646039 = encode_clo(clo46616);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4591646039;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46183 = encode_clo(alloc_clo(lam46183_fptr, 0));

void* lam46185_fptr() // lam46185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46186 = arg_buffer[1];
//reading env and args
void* a4581946036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46186))[7];
//not do dummy comment
void* lst = (decode_clo(env46186))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46186))[5];
//not do dummy comment
void* lst2 = (decode_clo(env46186))[4];
//not do dummy comment
void* cons = (decode_clo(env46186))[3];
//not do dummy comment
void* kont45914 = (decode_clo(env46186))[2];
//not do dummy comment
void* car = (decode_clo(env46186))[1];

//if-clause
bool if_guard46617 = is_true(a4581946036);
if(if_guard46617)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45914);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45914))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46619 = alloc_clo(lam46183_fptr, 6);

//setting env list
clo46619[1] = car;
clo46619[2] = kont45914;
clo46619[3] = cons;
clo46619[4] = lst2;
clo46619[5] = reverse_u45helper;
clo46619[6] = lst;
void* f4591746037 = encode_clo(clo46619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4591746037;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46185 = encode_clo(alloc_clo(lam46185_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46187 = arg_buffer[1];
//reading env and args
void* kont45914 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46621 = alloc_clo(lam46185_fptr, 7);

//setting env list
clo46621[1] = car;
clo46621[2] = kont45914;
clo46621[3] = cons;
clo46621[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo46621[5] = reverse_u45helper;
clo46621[6] = lst;
clo46621[7] = cdr;
void* f4591846035 = encode_clo(clo46621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4591846035;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam46188_fptr() // lam46188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46189 = arg_buffer[1];
//reading env and args
void* a4582346044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45919 = (decode_clo(env46189))[3];
//not do dummy comment
void* lst = (decode_clo(env46189))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46189))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45919;
arg_buffer[3] = lst;
arg_buffer[4] = a4582346044;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46188 = encode_clo(alloc_clo(lam46188_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46190 = arg_buffer[1];
//reading env and args
void* kont45919 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46623 = alloc_clo(lam46188_fptr, 3);

//setting env list
clo46623[1] = reverse_u45helper;
clo46623[2] = lst;
clo46623[3] = kont45919;
void* f4592046043 = encode_clo(clo46623);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4592046043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam46191_fptr() // lam46191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46192 = arg_buffer[1];
//reading env and args
void* x4582646049 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45921 = (decode_clo(env46192))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45921);
arg_buffer[2] = x4582646049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45921))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46191 = encode_clo(alloc_clo(lam46191_fptr, 0));

void* lam46193_fptr() // lam46193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46194 = arg_buffer[1];
//reading env and args
void* a4583146058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45921 = (decode_clo(env46194))[4];
//not do dummy comment
void* a4582746051 = (decode_clo(env46194))[3];
//not do dummy comment
void* a4582946054 = (decode_clo(env46194))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env46194))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45921;
arg_buffer[3] = a4582746051;
arg_buffer[4] = a4582946054;
arg_buffer[5] = a4583146058;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46193 = encode_clo(alloc_clo(lam46193_fptr, 0));

void* lam46195_fptr() // lam46195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46196 = arg_buffer[1];
//reading env and args
void* a4583046056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45921 = (decode_clo(env46196))[6];
//not do dummy comment
void* a4582746051 = (decode_clo(env46196))[5];
//not do dummy comment
void* a4582946054 = (decode_clo(env46196))[4];
//not do dummy comment
void* cons = (decode_clo(env46196))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46196))[2];
//not do dummy comment
void* lst2 = (decode_clo(env46196))[1];

//creating new closure instance
void** clo46625 = alloc_clo(lam46193_fptr, 4);

//setting env list
clo46625[1] = take_u45helper;
clo46625[2] = a4582946054;
clo46625[3] = a4582746051;
clo46625[4] = kont45921;
void* f4592346057 = encode_clo(clo46625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4592346057;
arg_buffer[3] = a4583046056;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46195 = encode_clo(alloc_clo(lam46195_fptr, 0));

void* lam46197_fptr() // lam46197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46198 = arg_buffer[1];
//reading env and args
void* a4582946054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4582746051 = (decode_clo(env46198))[7];
//not do dummy comment
void* car = (decode_clo(env46198))[6];
//not do dummy comment
void* cons = (decode_clo(env46198))[5];
//not do dummy comment
void* lst = (decode_clo(env46198))[4];
//not do dummy comment
void* kont45921 = (decode_clo(env46198))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46198))[2];
//not do dummy comment
void* lst2 = (decode_clo(env46198))[1];

//creating new closure instance
void** clo46627 = alloc_clo(lam46195_fptr, 6);

//setting env list
clo46627[1] = lst2;
clo46627[2] = take_u45helper;
clo46627[3] = cons;
clo46627[4] = a4582946054;
clo46627[5] = a4582746051;
clo46627[6] = kont45921;
void* f4592446055 = encode_clo(clo46627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4592446055;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46197 = encode_clo(alloc_clo(lam46197_fptr, 0));

void* lam46200_fptr() // lam46200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46201 = arg_buffer[1];
//reading env and args
void* a4582746051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env46201))[8];
//not do dummy comment
void* _u45 = (decode_clo(env46201))[7];
//not do dummy comment
void* lst = (decode_clo(env46201))[6];
//not do dummy comment
void* kont45921 = (decode_clo(env46201))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env46201))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46201))[3];
//not do dummy comment
void* n = (decode_clo(env46201))[2];
//not do dummy comment
void* car = (decode_clo(env46201))[1];
mpz_t* mpzvar46628 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46628, "1", 10);
void* a4582846052 = encode_mpz(mpzvar46628);

//creating new closure instance
void** clo46630 = alloc_clo(lam46197_fptr, 7);

//setting env list
clo46630[1] = lst2;
clo46630[2] = take_u45helper;
clo46630[3] = kont45921;
clo46630[4] = lst;
clo46630[5] = cons;
clo46630[6] = car;
clo46630[7] = a4582746051;
void* f4592546053 = encode_clo(clo46630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4592546053;
arg_buffer[3] = n;
arg_buffer[4] = a4582846052;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46200 = encode_clo(alloc_clo(lam46200_fptr, 0));

void* lam46202_fptr() // lam46202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46203 = arg_buffer[1];
//reading env and args
void* a4582546047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46203))[10];
//not do dummy comment
void* reverse = (decode_clo(env46203))[9];
//not do dummy comment
void* cons = (decode_clo(env46203))[8];
//not do dummy comment
void* _u45 = (decode_clo(env46203))[7];
//not do dummy comment
void* lst = (decode_clo(env46203))[6];
//not do dummy comment
void* kont45921 = (decode_clo(env46203))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env46203))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46203))[3];
//not do dummy comment
void* n = (decode_clo(env46203))[2];
//not do dummy comment
void* car = (decode_clo(env46203))[1];

//if-clause
bool if_guard46631 = is_true(a4582546047);
if(if_guard46631)
{

//creating new closure instance
void** clo46633 = alloc_clo(lam46191_fptr, 1);

//setting env list
clo46633[1] = kont45921;
void* f4592246048 = encode_clo(clo46633);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4592246048;
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
void** clo46635 = alloc_clo(lam46200_fptr, 8);

//setting env list
clo46635[1] = car;
clo46635[2] = n;
clo46635[3] = lst2;
clo46635[4] = take_u45helper;
clo46635[5] = kont45921;
clo46635[6] = lst;
clo46635[7] = _u45;
clo46635[8] = cons;
void* f4592646050 = encode_clo(clo46635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4592646050;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46202 = encode_clo(alloc_clo(lam46202_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46205 = arg_buffer[1];
//reading env and args
void* kont45921 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar46636 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46636, "0", 10);
void* a4582446045 = encode_mpz(mpzvar46636);

//creating new closure instance
void** clo46638 = alloc_clo(lam46202_fptr, 10);

//setting env list
clo46638[1] = car;
clo46638[2] = n;
clo46638[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo46638[4] = take_u45helper;
clo46638[5] = kont45921;
clo46638[6] = lst;
clo46638[7] = _u45;
clo46638[8] = cons;
clo46638[9] = reverse;
clo46638[10] = cdr;
void* f4592746046 = encode_clo(clo46638);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4592746046;
arg_buffer[3] = n;
arg_buffer[4] = a4582446045;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam46206_fptr() // lam46206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46207 = arg_buffer[1];
//reading env and args
void* a4583246060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46207))[4];
//not do dummy comment
void* kont45928 = (decode_clo(env46207))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46207))[2];
//not do dummy comment
void* n = (decode_clo(env46207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45928;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4583246060;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46206 = encode_clo(alloc_clo(lam46206_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46208 = arg_buffer[1];
//reading env and args
void* kont45928 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46640 = alloc_clo(lam46206_fptr, 4);

//setting env list
clo46640[1] = n;
clo46640[2] = take_u45helper;
clo46640[3] = kont45928;
clo46640[4] = lst;
void* f4592946059 = encode_clo(clo46640);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4592946059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam46210_fptr() // lam46210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46211 = arg_buffer[1];
//reading env and args
void* a4583746068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4583546064 = (decode_clo(env46211))[3];
//not do dummy comment
void* _u43 = (decode_clo(env46211))[2];
//not do dummy comment
void* kont45930 = (decode_clo(env46211))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont45930;
arg_buffer[3] = a4583546064;
arg_buffer[4] = a4583746068;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46210 = encode_clo(alloc_clo(lam46210_fptr, 0));

void* lam46212_fptr() // lam46212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46213 = arg_buffer[1];
//reading env and args
void* a4583646066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4583546064 = (decode_clo(env46213))[4];
//not do dummy comment
void* length = (decode_clo(env46213))[3];
//not do dummy comment
void* _u43 = (decode_clo(env46213))[2];
//not do dummy comment
void* kont45930 = (decode_clo(env46213))[1];

//creating new closure instance
void** clo46642 = alloc_clo(lam46210_fptr, 3);

//setting env list
clo46642[1] = kont45930;
clo46642[2] = _u43;
clo46642[3] = a4583546064;
void* f4593146067 = encode_clo(clo46642);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4593146067;
arg_buffer[3] = a4583646066;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46212 = encode_clo(alloc_clo(lam46212_fptr, 0));

void* lam46215_fptr() // lam46215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46216 = arg_buffer[1];
//reading env and args
void* a4583346062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46216))[5];
//not do dummy comment
void* lst = (decode_clo(env46216))[4];
//not do dummy comment
void* length = (decode_clo(env46216))[3];
//not do dummy comment
void* _u43 = (decode_clo(env46216))[2];
//not do dummy comment
void* kont45930 = (decode_clo(env46216))[1];

//if-clause
bool if_guard46643 = is_true(a4583346062);
if(if_guard46643)
{
mpz_t* mpzvar46644 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46644, "0", 10);
void* x4583446063 = encode_mpz(mpzvar46644);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45930);
arg_buffer[2] = x4583446063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45930))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar46645 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46645, "1", 10);
void* a4583546064 = encode_mpz(mpzvar46645);

//creating new closure instance
void** clo46647 = alloc_clo(lam46212_fptr, 4);

//setting env list
clo46647[1] = kont45930;
clo46647[2] = _u43;
clo46647[3] = length;
clo46647[4] = a4583546064;
void* f4593246065 = encode_clo(clo46647);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4593246065;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46215 = encode_clo(alloc_clo(lam46215_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46217 = arg_buffer[1];
//reading env and args
void* kont45930 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46649 = alloc_clo(lam46215_fptr, 5);

//setting env list
clo46649[1] = kont45930;
clo46649[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo46649[3] = length;
clo46649[4] = lst;
clo46649[5] = cdr;
void* f4593346061 = encode_clo(clo46649);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4593346061;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam46218_fptr() // lam46218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46219 = arg_buffer[1];
//reading env and args
void* x4583946072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45934 = (decode_clo(env46219))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45934);
arg_buffer[2] = x4583946072;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45934))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46218 = encode_clo(alloc_clo(lam46218_fptr, 0));

void* lam46220_fptr() // lam46220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46221 = arg_buffer[1];
//reading env and args
void* a4584346080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45934 = (decode_clo(env46221))[3];
//not do dummy comment
void* cons = (decode_clo(env46221))[2];
//not do dummy comment
void* a4584146076 = (decode_clo(env46221))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45934;
arg_buffer[3] = a4584146076;
arg_buffer[4] = a4584346080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46220 = encode_clo(alloc_clo(lam46220_fptr, 0));

void* lam46222_fptr() // lam46222 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46223 = arg_buffer[1];
//reading env and args
void* a4584246078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45934 = (decode_clo(env46223))[5];
//not do dummy comment
void* map = (decode_clo(env46223))[4];
//not do dummy comment
void* proc = (decode_clo(env46223))[3];
//not do dummy comment
void* cons = (decode_clo(env46223))[2];
//not do dummy comment
void* a4584146076 = (decode_clo(env46223))[1];

//creating new closure instance
void** clo46651 = alloc_clo(lam46220_fptr, 3);

//setting env list
clo46651[1] = a4584146076;
clo46651[2] = cons;
clo46651[3] = kont45934;
void* f4593646079 = encode_clo(clo46651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4593646079;
arg_buffer[3] = proc;
arg_buffer[4] = a4584246078;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46222 = encode_clo(alloc_clo(lam46222_fptr, 0));

void* lam46224_fptr() // lam46224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46225 = arg_buffer[1];
//reading env and args
void* a4584146076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46225))[6];
//not do dummy comment
void* kont45934 = (decode_clo(env46225))[5];
//not do dummy comment
void* lst = (decode_clo(env46225))[4];
//not do dummy comment
void* map = (decode_clo(env46225))[3];
//not do dummy comment
void* proc = (decode_clo(env46225))[2];
//not do dummy comment
void* cons = (decode_clo(env46225))[1];

//creating new closure instance
void** clo46653 = alloc_clo(lam46222_fptr, 5);

//setting env list
clo46653[1] = a4584146076;
clo46653[2] = cons;
clo46653[3] = proc;
clo46653[4] = map;
clo46653[5] = kont45934;
void* f4593746077 = encode_clo(clo46653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4593746077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46224 = encode_clo(alloc_clo(lam46224_fptr, 0));

void* lam46226_fptr() // lam46226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46227 = arg_buffer[1];
//reading env and args
void* a4584046074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46227))[6];
//not do dummy comment
void* kont45934 = (decode_clo(env46227))[5];
//not do dummy comment
void* lst = (decode_clo(env46227))[4];
//not do dummy comment
void* map = (decode_clo(env46227))[3];
//not do dummy comment
void* proc = (decode_clo(env46227))[2];
//not do dummy comment
void* cons = (decode_clo(env46227))[1];

//creating new closure instance
void** clo46655 = alloc_clo(lam46224_fptr, 6);

//setting env list
clo46655[1] = cons;
clo46655[2] = proc;
clo46655[3] = map;
clo46655[4] = lst;
clo46655[5] = kont45934;
clo46655[6] = cdr;
void* f4593846075 = encode_clo(clo46655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4593846075;
arg_buffer[3] = a4584046074;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46226 = encode_clo(alloc_clo(lam46226_fptr, 0));

void* lam46228_fptr() // lam46228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46229 = arg_buffer[1];
//reading env and args
void* a4583846070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45934 = (decode_clo(env46229))[8];
//not do dummy comment
void* lst = (decode_clo(env46229))[7];
//not do dummy comment
void* map = (decode_clo(env46229))[6];
//not do dummy comment
void* proc = (decode_clo(env46229))[5];
//not do dummy comment
void* car = (decode_clo(env46229))[4];
//not do dummy comment
void* cons = (decode_clo(env46229))[3];
//not do dummy comment
void* list = (decode_clo(env46229))[2];
//not do dummy comment
void* cdr = (decode_clo(env46229))[1];

//if-clause
bool if_guard46656 = is_true(a4583846070);
if(if_guard46656)
{

//creating new closure instance
void** clo46658 = alloc_clo(lam46218_fptr, 1);

//setting env list
clo46658[1] = kont45934;
void* f4593546071 = encode_clo(clo46658);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4593546071;
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
void** clo46660 = alloc_clo(lam46226_fptr, 6);

//setting env list
clo46660[1] = cons;
clo46660[2] = proc;
clo46660[3] = map;
clo46660[4] = lst;
clo46660[5] = kont45934;
clo46660[6] = cdr;
void* f4593946073 = encode_clo(clo46660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4593946073;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46228 = encode_clo(alloc_clo(lam46228_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46230 = arg_buffer[1];
//reading env and args
void* kont45934 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46662 = alloc_clo(lam46228_fptr, 8);

//setting env list
clo46662[1] = cdr;
clo46662[2] = list;
clo46662[3] = cons;
clo46662[4] = car;
clo46662[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo46662[6] = map;
clo46662[7] = lst;
clo46662[8] = kont45934;
void* f4594046069 = encode_clo(clo46662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4594046069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam46231_fptr() // lam46231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46232 = arg_buffer[1];
//reading env and args
void* x4584546084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45941 = (decode_clo(env46232))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45941);
arg_buffer[2] = x4584546084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45941))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46231 = encode_clo(alloc_clo(lam46231_fptr, 0));

void* lam46233_fptr() // lam46233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46234 = arg_buffer[1];
//reading env and args
void* a4585046094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45941 = (decode_clo(env46234))[3];
//not do dummy comment
void* a4584846090 = (decode_clo(env46234))[2];
//not do dummy comment
void* cons = (decode_clo(env46234))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45941;
arg_buffer[3] = a4584846090;
arg_buffer[4] = a4585046094;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46233 = encode_clo(alloc_clo(lam46233_fptr, 0));

void* lam46235_fptr() // lam46235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46236 = arg_buffer[1];
//reading env and args
void* a4584946092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env46236))[5];
//not do dummy comment
void* kont45941 = (decode_clo(env46236))[4];
//not do dummy comment
void* cons = (decode_clo(env46236))[3];
//not do dummy comment
void* a4584846090 = (decode_clo(env46236))[2];
//not do dummy comment
void* filter = (decode_clo(env46236))[1];

//creating new closure instance
void** clo46664 = alloc_clo(lam46233_fptr, 3);

//setting env list
clo46664[1] = cons;
clo46664[2] = a4584846090;
clo46664[3] = kont45941;
void* f4594346093 = encode_clo(clo46664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4594346093;
arg_buffer[3] = op;
arg_buffer[4] = a4584946092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46235 = encode_clo(alloc_clo(lam46235_fptr, 0));

void* lam46237_fptr() // lam46237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46238 = arg_buffer[1];
//reading env and args
void* a4584846090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46238))[6];
//not do dummy comment
void* lst = (decode_clo(env46238))[5];
//not do dummy comment
void* op = (decode_clo(env46238))[4];
//not do dummy comment
void* kont45941 = (decode_clo(env46238))[3];
//not do dummy comment
void* filter = (decode_clo(env46238))[2];
//not do dummy comment
void* cons = (decode_clo(env46238))[1];

//creating new closure instance
void** clo46666 = alloc_clo(lam46235_fptr, 5);

//setting env list
clo46666[1] = filter;
clo46666[2] = a4584846090;
clo46666[3] = cons;
clo46666[4] = kont45941;
clo46666[5] = op;
void* f4594446091 = encode_clo(clo46666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4594446091;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46237 = encode_clo(alloc_clo(lam46237_fptr, 0));

void* lam46239_fptr() // lam46239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46240 = arg_buffer[1];
//reading env and args
void* a4585146096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env46240))[3];
//not do dummy comment
void* kont45941 = (decode_clo(env46240))[2];
//not do dummy comment
void* filter = (decode_clo(env46240))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont45941;
arg_buffer[3] = op;
arg_buffer[4] = a4585146096;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46239 = encode_clo(alloc_clo(lam46239_fptr, 0));

void* lam46241_fptr() // lam46241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46242 = arg_buffer[1];
//reading env and args
void* a4584746088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46242))[7];
//not do dummy comment
void* lst = (decode_clo(env46242))[6];
//not do dummy comment
void* op = (decode_clo(env46242))[5];
//not do dummy comment
void* kont45941 = (decode_clo(env46242))[4];
//not do dummy comment
void* cons = (decode_clo(env46242))[3];
//not do dummy comment
void* filter = (decode_clo(env46242))[2];
//not do dummy comment
void* car = (decode_clo(env46242))[1];

//if-clause
bool if_guard46667 = is_true(a4584746088);
if(if_guard46667)
{

//creating new closure instance
void** clo46669 = alloc_clo(lam46237_fptr, 6);

//setting env list
clo46669[1] = cons;
clo46669[2] = filter;
clo46669[3] = kont45941;
clo46669[4] = op;
clo46669[5] = lst;
clo46669[6] = cdr;
void* f4594546089 = encode_clo(clo46669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4594546089;
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
void** clo46671 = alloc_clo(lam46239_fptr, 3);

//setting env list
clo46671[1] = filter;
clo46671[2] = kont45941;
clo46671[3] = op;
void* f4594646095 = encode_clo(clo46671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4594646095;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46241 = encode_clo(alloc_clo(lam46241_fptr, 0));

void* lam46243_fptr() // lam46243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46244 = arg_buffer[1];
//reading env and args
void* a4584646086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46244))[7];
//not do dummy comment
void* lst = (decode_clo(env46244))[6];
//not do dummy comment
void* op = (decode_clo(env46244))[5];
//not do dummy comment
void* kont45941 = (decode_clo(env46244))[4];
//not do dummy comment
void* cons = (decode_clo(env46244))[3];
//not do dummy comment
void* filter = (decode_clo(env46244))[2];
//not do dummy comment
void* car = (decode_clo(env46244))[1];

//creating new closure instance
void** clo46673 = alloc_clo(lam46241_fptr, 7);

//setting env list
clo46673[1] = car;
clo46673[2] = filter;
clo46673[3] = cons;
clo46673[4] = kont45941;
clo46673[5] = op;
clo46673[6] = lst;
clo46673[7] = cdr;
void* f4594746087 = encode_clo(clo46673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4594746087;
arg_buffer[3] = a4584646086;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46243 = encode_clo(alloc_clo(lam46243_fptr, 0));

void* lam46245_fptr() // lam46245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46246 = arg_buffer[1];
//reading env and args
void* a4584446082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46246))[8];
//not do dummy comment
void* op = (decode_clo(env46246))[7];
//not do dummy comment
void* kont45941 = (decode_clo(env46246))[6];
//not do dummy comment
void* cons = (decode_clo(env46246))[5];
//not do dummy comment
void* list = (decode_clo(env46246))[4];
//not do dummy comment
void* cdr = (decode_clo(env46246))[3];
//not do dummy comment
void* filter = (decode_clo(env46246))[2];
//not do dummy comment
void* car = (decode_clo(env46246))[1];

//if-clause
bool if_guard46674 = is_true(a4584446082);
if(if_guard46674)
{

//creating new closure instance
void** clo46676 = alloc_clo(lam46231_fptr, 1);

//setting env list
clo46676[1] = kont45941;
void* f4594246083 = encode_clo(clo46676);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4594246083;
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
void** clo46678 = alloc_clo(lam46243_fptr, 7);

//setting env list
clo46678[1] = car;
clo46678[2] = filter;
clo46678[3] = cons;
clo46678[4] = kont45941;
clo46678[5] = op;
clo46678[6] = lst;
clo46678[7] = cdr;
void* f4594846085 = encode_clo(clo46678);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4594846085;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46245 = encode_clo(alloc_clo(lam46245_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46247 = arg_buffer[1];
//reading env and args
void* kont45941 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46680 = alloc_clo(lam46245_fptr, 8);

//setting env list
clo46680[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo46680[2] = filter;
clo46680[3] = cdr;
clo46680[4] = list;
clo46680[5] = cons;
clo46680[6] = kont45941;
clo46680[7] = op;
clo46680[8] = lst;
void* f4594946081 = encode_clo(clo46680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4594946081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam46248_fptr() // lam46248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46249 = arg_buffer[1];
//reading env and args
void* a4585646104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45950 = (decode_clo(env46249))[3];
//not do dummy comment
void* drop = (decode_clo(env46249))[2];
//not do dummy comment
void* a4585446101 = (decode_clo(env46249))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont45950;
arg_buffer[3] = a4585446101;
arg_buffer[4] = a4585646104;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46248 = encode_clo(alloc_clo(lam46248_fptr, 0));

void* lam46251_fptr() // lam46251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46252 = arg_buffer[1];
//reading env and args
void* a4585446101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45950 = (decode_clo(env46252))[4];
//not do dummy comment
void* drop = (decode_clo(env46252))[3];
//not do dummy comment
void* n = (decode_clo(env46252))[2];
//not do dummy comment
void* _u45 = (decode_clo(env46252))[1];
mpz_t* mpzvar46681 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46681, "1", 10);
void* a4585546102 = encode_mpz(mpzvar46681);

//creating new closure instance
void** clo46683 = alloc_clo(lam46248_fptr, 3);

//setting env list
clo46683[1] = a4585446101;
clo46683[2] = drop;
clo46683[3] = kont45950;
void* f4595146103 = encode_clo(clo46683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4595146103;
arg_buffer[3] = n;
arg_buffer[4] = a4585546102;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46251 = encode_clo(alloc_clo(lam46251_fptr, 0));

void* lam46253_fptr() // lam46253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46254 = arg_buffer[1];
//reading env and args
void* a4585346099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46254))[6];
//not do dummy comment
void* kont45950 = (decode_clo(env46254))[5];
//not do dummy comment
void* n = (decode_clo(env46254))[4];
//not do dummy comment
void* _u45 = (decode_clo(env46254))[3];
//not do dummy comment
void* lst = (decode_clo(env46254))[2];
//not do dummy comment
void* drop = (decode_clo(env46254))[1];

//if-clause
bool if_guard46684 = is_true(a4585346099);
if(if_guard46684)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45950);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45950))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46686 = alloc_clo(lam46251_fptr, 4);

//setting env list
clo46686[1] = _u45;
clo46686[2] = n;
clo46686[3] = drop;
clo46686[4] = kont45950;
void* f4595246100 = encode_clo(clo46686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4595246100;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46253 = encode_clo(alloc_clo(lam46253_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46256 = arg_buffer[1];
//reading env and args
void* kont45950 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar46687 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46687, "0", 10);
void* a4585246097 = encode_mpz(mpzvar46687);

//creating new closure instance
void** clo46689 = alloc_clo(lam46253_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo46689[1] = drop;
clo46689[2] = lst;
clo46689[3] = _u45;
clo46689[4] = n;
clo46689[5] = kont45950;
clo46689[6] = cdr;
void* f4595346098 = encode_clo(clo46689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4595346098;
arg_buffer[3] = n;
arg_buffer[4] = a4585246097;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam46257_fptr() // lam46257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46258 = arg_buffer[1];
//reading env and args
void* a4586046112 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45954 = (decode_clo(env46258))[3];
//not do dummy comment
void* proc = (decode_clo(env46258))[2];
//not do dummy comment
void* a4585846108 = (decode_clo(env46258))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont45954;
arg_buffer[3] = a4585846108;
arg_buffer[4] = a4586046112;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46257 = encode_clo(alloc_clo(lam46257_fptr, 0));

void* lam46259_fptr() // lam46259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46260 = arg_buffer[1];
//reading env and args
void* a4585946110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env46260))[5];
//not do dummy comment
void* kont45954 = (decode_clo(env46260))[4];
//not do dummy comment
void* a4585846108 = (decode_clo(env46260))[3];
//not do dummy comment
void* proc = (decode_clo(env46260))[2];
//not do dummy comment
void* acc = (decode_clo(env46260))[1];

//creating new closure instance
void** clo46691 = alloc_clo(lam46257_fptr, 3);

//setting env list
clo46691[1] = a4585846108;
clo46691[2] = proc;
clo46691[3] = kont45954;
void* f4595546111 = encode_clo(clo46691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4595546111;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4585946110;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46259 = encode_clo(alloc_clo(lam46259_fptr, 0));

void* lam46261_fptr() // lam46261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46262 = arg_buffer[1];
//reading env and args
void* a4585846108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46262))[6];
//not do dummy comment
void* kont45954 = (decode_clo(env46262))[5];
//not do dummy comment
void* foldr = (decode_clo(env46262))[4];
//not do dummy comment
void* lst = (decode_clo(env46262))[3];
//not do dummy comment
void* proc = (decode_clo(env46262))[2];
//not do dummy comment
void* acc = (decode_clo(env46262))[1];

//creating new closure instance
void** clo46693 = alloc_clo(lam46259_fptr, 5);

//setting env list
clo46693[1] = acc;
clo46693[2] = proc;
clo46693[3] = a4585846108;
clo46693[4] = kont45954;
clo46693[5] = foldr;
void* f4595646109 = encode_clo(clo46693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4595646109;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46261 = encode_clo(alloc_clo(lam46261_fptr, 0));

void* lam46263_fptr() // lam46263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46264 = arg_buffer[1];
//reading env and args
void* a4585746106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46264))[7];
//not do dummy comment
void* kont45954 = (decode_clo(env46264))[6];
//not do dummy comment
void* car = (decode_clo(env46264))[5];
//not do dummy comment
void* foldr = (decode_clo(env46264))[4];
//not do dummy comment
void* lst = (decode_clo(env46264))[3];
//not do dummy comment
void* proc = (decode_clo(env46264))[2];
//not do dummy comment
void* acc = (decode_clo(env46264))[1];

//if-clause
bool if_guard46694 = is_true(a4585746106);
if(if_guard46694)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45954);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46696 = alloc_clo(lam46261_fptr, 6);

//setting env list
clo46696[1] = acc;
clo46696[2] = proc;
clo46696[3] = lst;
clo46696[4] = foldr;
clo46696[5] = kont45954;
clo46696[6] = cdr;
void* f4595746107 = encode_clo(clo46696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4595746107;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46263 = encode_clo(alloc_clo(lam46263_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46265 = arg_buffer[1];
//reading env and args
void* kont45954 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46698 = alloc_clo(lam46263_fptr, 7);

//setting env list
clo46698[1] = acc;
clo46698[2] = proc;
clo46698[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo46698[4] = foldr;
clo46698[5] = car;
clo46698[6] = kont45954;
clo46698[7] = cdr;
void* f4595846105 = encode_clo(clo46698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4595846105;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam46266_fptr() // lam46266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46267 = arg_buffer[1];
//reading env and args
void* a4586446120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4586246116 = (decode_clo(env46267))[3];
//not do dummy comment
void* kont45959 = (decode_clo(env46267))[2];
//not do dummy comment
void* cons = (decode_clo(env46267))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45959;
arg_buffer[3] = a4586246116;
arg_buffer[4] = a4586446120;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46266 = encode_clo(alloc_clo(lam46266_fptr, 0));

void* lam46268_fptr() // lam46268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46269 = arg_buffer[1];
//reading env and args
void* a4586346118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4586246116 = (decode_clo(env46269))[5];
//not do dummy comment
void* append = (decode_clo(env46269))[4];
//not do dummy comment
void* kont45959 = (decode_clo(env46269))[3];
//not do dummy comment
void* lst2 = (decode_clo(env46269))[2];
//not do dummy comment
void* cons = (decode_clo(env46269))[1];

//creating new closure instance
void** clo46700 = alloc_clo(lam46266_fptr, 3);

//setting env list
clo46700[1] = cons;
clo46700[2] = kont45959;
clo46700[3] = a4586246116;
void* f4596046119 = encode_clo(clo46700);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4596046119;
arg_buffer[3] = a4586346118;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46268 = encode_clo(alloc_clo(lam46268_fptr, 0));

void* lam46270_fptr() // lam46270 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46271 = arg_buffer[1];
//reading env and args
void* a4586246116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46271))[6];
//not do dummy comment
void* append = (decode_clo(env46271))[5];
//not do dummy comment
void* kont45959 = (decode_clo(env46271))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46271))[3];
//not do dummy comment
void* lst1 = (decode_clo(env46271))[2];
//not do dummy comment
void* cons = (decode_clo(env46271))[1];

//creating new closure instance
void** clo46702 = alloc_clo(lam46268_fptr, 5);

//setting env list
clo46702[1] = cons;
clo46702[2] = lst2;
clo46702[3] = kont45959;
clo46702[4] = append;
clo46702[5] = a4586246116;
void* f4596146117 = encode_clo(clo46702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4596146117;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46270 = encode_clo(alloc_clo(lam46270_fptr, 0));

void* lam46272_fptr() // lam46272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46273 = arg_buffer[1];
//reading env and args
void* a4586146114 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46273))[7];
//not do dummy comment
void* append = (decode_clo(env46273))[6];
//not do dummy comment
void* kont45959 = (decode_clo(env46273))[5];
//not do dummy comment
void* lst2 = (decode_clo(env46273))[4];
//not do dummy comment
void* cons = (decode_clo(env46273))[3];
//not do dummy comment
void* lst1 = (decode_clo(env46273))[2];
//not do dummy comment
void* car = (decode_clo(env46273))[1];

//if-clause
bool if_guard46703 = is_true(a4586146114);
if(if_guard46703)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45959);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45959))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46705 = alloc_clo(lam46270_fptr, 6);

//setting env list
clo46705[1] = cons;
clo46705[2] = lst1;
clo46705[3] = lst2;
clo46705[4] = kont45959;
clo46705[5] = append;
clo46705[6] = cdr;
void* f4596246115 = encode_clo(clo46705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4596246115;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46272 = encode_clo(alloc_clo(lam46272_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46274 = arg_buffer[1];
//reading env and args
void* kont45959 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46707 = alloc_clo(lam46272_fptr, 7);

//setting env list
clo46707[1] = car;
clo46707[2] = lst1;
clo46707[3] = cons;
clo46707[4] = lst2;
clo46707[5] = kont45959;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo46707[6] = append;
clo46707[7] = cdr;
void* f4596346113 = encode_clo(clo46707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4596346113;
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
void* _46275 = arg_buffer[1];
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

void* kont4596446121 = prim_car(lst);
void* lst46122 = prim_cdr(lst);
void* x4586546123 = apply_prim_hash(lst46122);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4596446121);
arg_buffer[2] = x4586546123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4596446121))[0]);
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
void* _46276 = arg_buffer[1];
//reading env and args
void* kont45966 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4586646124 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45966);
arg_buffer[2] = x4586646124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45966))[0]);
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
void* _46277 = arg_buffer[1];
//reading env and args
void* kont45967 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4586746125 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45967);
arg_buffer[2] = x4586746125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45967))[0]);
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
void* _46278 = arg_buffer[1];
//reading env and args
void* kont45968 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4586846126 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45968);
arg_buffer[2] = x4586846126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45968))[0]);
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
void* _46279 = arg_buffer[1];
//reading env and args
void* kont45969 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4586946127 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45969);
arg_buffer[2] = x4586946127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45969))[0]);
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
void* _46282 = arg_buffer[1];
//reading env and args
void* kont45970 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar46708 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46708, "28", 10);
void* a4587046128 = encode_mpz(mpzvar46708);
mpz_t* mpzvar46709 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46709, "8", 10);
void* a4587146129 = encode_mpz(mpzvar46709);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = kont45970;
arg_buffer[3] = a4587046128;
arg_buffer[4] = a4587146129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam46283_fptr() // lam46283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46284 = arg_buffer[1];
//reading env and args
void* x4587246131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45971 = (decode_clo(env46284))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45971);
arg_buffer[2] = x4587246131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46283 = encode_clo(alloc_clo(lam46283_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46285 = arg_buffer[1];
//reading env and args
void* kont45971 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo46711 = alloc_clo(lam46283_fptr, 1);

//setting env list
clo46711[1] = kont45971;
void* f4597246130 = encode_clo(clo46711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4597246130;
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

