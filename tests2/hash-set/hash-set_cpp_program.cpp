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
void* _43174 = arg_buffer[1];
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

void* kont4290443006 = prim_car(lst);
void* lst43007 = prim_cdr(lst);
void* x4281143008 = apply_prim__u43(lst43007);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4290443006);
arg_buffer[2] = x4281143008;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4290443006))[0]);
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
void* _43175 = arg_buffer[1];
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

void* kont4290643009 = prim_car(lst);
void* lst43010 = prim_cdr(lst);
void* x4281243011 = apply_prim__u45(lst43010);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4290643009);
arg_buffer[2] = x4281243011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4290643009))[0]);
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
void* _43176 = arg_buffer[1];
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

void* kont4290843012 = prim_car(lst);
void* lst43013 = prim_cdr(lst);
void* x4281343014 = apply_prim__u42(lst43013);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4290843012);
arg_buffer[2] = x4281343014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4290843012))[0]);
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
void* _43177 = arg_buffer[1];
//reading env and args
void* kont42910 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4281443015 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42910);
arg_buffer[2] = x4281443015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42910))[0]);
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
void* _43178 = arg_buffer[1];
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

void* kont4291143016 = prim_car(lst);
void* lst43017 = prim_cdr(lst);
void* x4281543018 = apply_prim__u47(lst43017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4291143016);
arg_buffer[2] = x4281543018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4291143016))[0]);
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
void* _43179 = arg_buffer[1];
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

void* kont4291343019 = prim_car(lst);
void* lst43020 = prim_cdr(lst);
void* x4281643021 = apply_prim__u61(lst43020);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4291343019);
arg_buffer[2] = x4281643021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4291343019))[0]);
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
void* _43180 = arg_buffer[1];
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

void* kont4291543022 = prim_car(lst);
void* lst43023 = prim_cdr(lst);
void* x4281743024 = apply_prim__u62(lst43023);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4291543022);
arg_buffer[2] = x4281743024;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4291543022))[0]);
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
void* _43181 = arg_buffer[1];
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

void* kont4291743025 = prim_car(lst);
void* lst43026 = prim_cdr(lst);
void* x4281843027 = apply_prim__u60(lst43026);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4291743025);
arg_buffer[2] = x4281843027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4291743025))[0]);
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
void* _43182 = arg_buffer[1];
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

void* kont4291943028 = prim_car(lst);
void* lst43029 = prim_cdr(lst);
void* x4281943030 = apply_prim__u60_u61(lst43029);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4291943028);
arg_buffer[2] = x4281943030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4291943028))[0]);
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
void* _43183 = arg_buffer[1];
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

void* kont4292143031 = prim_car(lst);
void* lst43032 = prim_cdr(lst);
void* x4282043033 = apply_prim__u62_u61(lst43032);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4292143031);
arg_buffer[2] = x4282043033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4292143031))[0]);
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
void* _43184 = arg_buffer[1];
//reading env and args
void* kont42923 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4282143034 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42923);
arg_buffer[2] = x4282143034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42923))[0]);
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
void* _43185 = arg_buffer[1];
//reading env and args
void* kont42924 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4282243035 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42924);
arg_buffer[2] = x4282243035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42924))[0]);
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
void* _43186 = arg_buffer[1];
//reading env and args
void* kont42925 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4282343036 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42925);
arg_buffer[2] = x4282343036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42925))[0]);
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
void* _43187 = arg_buffer[1];
//reading env and args
void* kont42926 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4282443037 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42926);
arg_buffer[2] = x4282443037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42926))[0]);
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
void* _43188 = arg_buffer[1];
//reading env and args
void* kont42927 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4282543038 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42927);
arg_buffer[2] = x4282543038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42927))[0]);
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
void* _43189 = arg_buffer[1];
//reading env and args
void* kont42928 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4282643039 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42928);
arg_buffer[2] = x4282643039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42928))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam43190_fptr() // lam43190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43191 = arg_buffer[1];
//reading env and args
void* a4282943043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4282743040 = (decode_clo(env43191))[3];
//not do dummy comment
void* kont42929 = (decode_clo(env43191))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env43191))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42929;
arg_buffer[3] = a4282743040;
arg_buffer[4] = a4282943043;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43190 = encode_clo(alloc_clo(lam43190_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43194 = arg_buffer[1];
//reading env and args
void* kont42929 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44477 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44477, "0", 10);
void* a4282743040 = encode_mpz(mpzvar44477);
mpz_t* mpzvar44478 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44478, "2", 10);
void* a4282843041 = encode_mpz(mpzvar44478);

//creating new closure instance
void** clo44480 = alloc_clo(lam43190_fptr, 3);

//setting env list
clo44480[1] = equal_u63;
clo44480[2] = kont42929;
clo44480[3] = a4282743040;
void* f4293043042 = encode_clo(clo44480);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4293043042;
arg_buffer[3] = x;
arg_buffer[4] = a4282843041;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam43195_fptr() // lam43195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43196 = arg_buffer[1];
//reading env and args
void* a4283243047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42931 = (decode_clo(env43196))[3];
//not do dummy comment
void* a4283043044 = (decode_clo(env43196))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env43196))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42931;
arg_buffer[3] = a4283043044;
arg_buffer[4] = a4283243047;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43195 = encode_clo(alloc_clo(lam43195_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43199 = arg_buffer[1];
//reading env and args
void* kont42931 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44481 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44481, "1", 10);
void* a4283043044 = encode_mpz(mpzvar44481);
mpz_t* mpzvar44482 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44482, "2", 10);
void* a4283143045 = encode_mpz(mpzvar44482);

//creating new closure instance
void** clo44484 = alloc_clo(lam43195_fptr, 3);

//setting env list
clo44484[1] = equal_u63;
clo44484[2] = a4283043044;
clo44484[3] = kont42931;
void* f4293243046 = encode_clo(clo44484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4293243046;
arg_buffer[3] = x;
arg_buffer[4] = a4283143045;
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
void* _43200 = arg_buffer[1];
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

void* kont4293343048 = prim_car(x);
void* x43049 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4293343048);
arg_buffer[2] = x43049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4293343048))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam43203_fptr() // lam43203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43204 = arg_buffer[1];
//reading env and args
void* a4283843059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42935 = (decode_clo(env43204))[3];
//not do dummy comment
void* x = (decode_clo(env43204))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env43204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont42935;
arg_buffer[3] = x;
arg_buffer[4] = a4283843059;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43203 = encode_clo(alloc_clo(lam43203_fptr, 0));

void* lam43205_fptr() // lam43205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43206 = arg_buffer[1];
//reading env and args
void* a4283643056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43206))[5];
//not do dummy comment
void* lst = (decode_clo(env43206))[4];
//not do dummy comment
void* kont42935 = (decode_clo(env43206))[3];
//not do dummy comment
void* x = (decode_clo(env43206))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env43206))[1];

//if-clause
bool if_guard44485 = is_true(a4283643056);
if(if_guard44485)
{
void* x4283743057 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42935);
arg_buffer[2] = x4283743057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42935))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44487 = alloc_clo(lam43203_fptr, 3);

//setting env list
clo44487[1] = member_u63;
clo44487[2] = x;
clo44487[3] = kont42935;
void* f4293643058 = encode_clo(clo44487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4293643058;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43205 = encode_clo(alloc_clo(lam43205_fptr, 0));

void* lam43207_fptr() // lam43207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43208 = arg_buffer[1];
//reading env and args
void* a4283543054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43208))[6];
//not do dummy comment
void* lst = (decode_clo(env43208))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env43208))[4];
//not do dummy comment
void* kont42935 = (decode_clo(env43208))[3];
//not do dummy comment
void* x = (decode_clo(env43208))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env43208))[1];

//creating new closure instance
void** clo44489 = alloc_clo(lam43205_fptr, 5);

//setting env list
clo44489[1] = member_u63;
clo44489[2] = x;
clo44489[3] = kont42935;
clo44489[4] = lst;
clo44489[5] = cdr;
void* f4293743055 = encode_clo(clo44489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4293743055;
arg_buffer[3] = a4283543054;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43207 = encode_clo(alloc_clo(lam43207_fptr, 0));

void* lam43209_fptr() // lam43209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43210 = arg_buffer[1];
//reading env and args
void* a4283343051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43210))[7];
//not do dummy comment
void* lst = (decode_clo(env43210))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env43210))[5];
//not do dummy comment
void* kont42935 = (decode_clo(env43210))[4];
//not do dummy comment
void* x = (decode_clo(env43210))[3];
//not do dummy comment
void* car = (decode_clo(env43210))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env43210))[1];

//if-clause
bool if_guard44490 = is_true(a4283343051);
if(if_guard44490)
{
void* x4283443052 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42935);
arg_buffer[2] = x4283443052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42935))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44492 = alloc_clo(lam43207_fptr, 6);

//setting env list
clo44492[1] = member_u63;
clo44492[2] = x;
clo44492[3] = kont42935;
clo44492[4] = equal_u63;
clo44492[5] = lst;
clo44492[6] = cdr;
void* f4293843053 = encode_clo(clo44492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4293843053;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43209 = encode_clo(alloc_clo(lam43209_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43211 = arg_buffer[1];
//reading env and args
void* kont42935 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44494 = alloc_clo(lam43209_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo44494[1] = member_u63;
clo44494[2] = car;
clo44494[3] = x;
clo44494[4] = kont42935;
clo44494[5] = equal_u63;
clo44494[6] = lst;
clo44494[7] = cdr;
void* f4293943050 = encode_clo(clo44494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4293943050;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam43212_fptr() // lam43212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43213 = arg_buffer[1];
//reading env and args
void* a4284243067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env43213))[4];
//not do dummy comment
void* a4284143065 = (decode_clo(env43213))[3];
//not do dummy comment
void* foldl = (decode_clo(env43213))[2];
//not do dummy comment
void* kont42940 = (decode_clo(env43213))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont42940;
arg_buffer[3] = fun;
arg_buffer[4] = a4284143065;
arg_buffer[5] = a4284243067;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43212 = encode_clo(alloc_clo(lam43212_fptr, 0));

void* lam43214_fptr() // lam43214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43215 = arg_buffer[1];
//reading env and args
void* a4284143065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43215))[5];
//not do dummy comment
void* lst = (decode_clo(env43215))[4];
//not do dummy comment
void* fun = (decode_clo(env43215))[3];
//not do dummy comment
void* foldl = (decode_clo(env43215))[2];
//not do dummy comment
void* kont42940 = (decode_clo(env43215))[1];

//creating new closure instance
void** clo44496 = alloc_clo(lam43212_fptr, 4);

//setting env list
clo44496[1] = kont42940;
clo44496[2] = foldl;
clo44496[3] = a4284143065;
clo44496[4] = fun;
void* f4294143066 = encode_clo(clo44496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4294143066;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43214 = encode_clo(alloc_clo(lam43214_fptr, 0));

void* lam43216_fptr() // lam43216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43217 = arg_buffer[1];
//reading env and args
void* a4284043063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43217))[6];
//not do dummy comment
void* lst = (decode_clo(env43217))[5];
//not do dummy comment
void* fun = (decode_clo(env43217))[4];
//not do dummy comment
void* acc = (decode_clo(env43217))[3];
//not do dummy comment
void* foldl = (decode_clo(env43217))[2];
//not do dummy comment
void* kont42940 = (decode_clo(env43217))[1];

//creating new closure instance
void** clo44498 = alloc_clo(lam43214_fptr, 5);

//setting env list
clo44498[1] = kont42940;
clo44498[2] = foldl;
clo44498[3] = fun;
clo44498[4] = lst;
clo44498[5] = cdr;
void* f4294243064 = encode_clo(clo44498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4294243064;
arg_buffer[3] = a4284043063;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43216 = encode_clo(alloc_clo(lam43216_fptr, 0));

void* lam43218_fptr() // lam43218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43219 = arg_buffer[1];
//reading env and args
void* a4283943061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43219))[7];
//not do dummy comment
void* lst = (decode_clo(env43219))[6];
//not do dummy comment
void* fun = (decode_clo(env43219))[5];
//not do dummy comment
void* acc = (decode_clo(env43219))[4];
//not do dummy comment
void* car = (decode_clo(env43219))[3];
//not do dummy comment
void* foldl = (decode_clo(env43219))[2];
//not do dummy comment
void* kont42940 = (decode_clo(env43219))[1];

//if-clause
bool if_guard44499 = is_true(a4283943061);
if(if_guard44499)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42940);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42940))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44501 = alloc_clo(lam43216_fptr, 6);

//setting env list
clo44501[1] = kont42940;
clo44501[2] = foldl;
clo44501[3] = acc;
clo44501[4] = fun;
clo44501[5] = lst;
clo44501[6] = cdr;
void* f4294343062 = encode_clo(clo44501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4294343062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43218 = encode_clo(alloc_clo(lam43218_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43220 = arg_buffer[1];
//reading env and args
void* kont42940 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo44503 = alloc_clo(lam43218_fptr, 7);

//setting env list
clo44503[1] = kont42940;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo44503[2] = foldl;
clo44503[3] = car;
clo44503[4] = acc;
clo44503[5] = fun;
clo44503[6] = lst;
clo44503[7] = cdr;
void* f4294443060 = encode_clo(clo44503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4294443060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam43221_fptr() // lam43221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43222 = arg_buffer[1];
//reading env and args
void* a4284643075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4284443071 = (decode_clo(env43222))[3];
//not do dummy comment
void* kont42945 = (decode_clo(env43222))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env43222))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42945;
arg_buffer[3] = a4284443071;
arg_buffer[4] = a4284643075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43221 = encode_clo(alloc_clo(lam43221_fptr, 0));

void* lam43223_fptr() // lam43223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43224 = arg_buffer[1];
//reading env and args
void* a4284543073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4284443071 = (decode_clo(env43224))[5];
//not do dummy comment
void* kont42945 = (decode_clo(env43224))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env43224))[3];
//not do dummy comment
void* lst2 = (decode_clo(env43224))[2];
//not do dummy comment
void* cons = (decode_clo(env43224))[1];

//creating new closure instance
void** clo44505 = alloc_clo(lam43221_fptr, 3);

//setting env list
clo44505[1] = reverse_u45helper;
clo44505[2] = kont42945;
clo44505[3] = a4284443071;
void* f4294643074 = encode_clo(clo44505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4294643074;
arg_buffer[3] = a4284543073;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43223 = encode_clo(alloc_clo(lam43223_fptr, 0));

void* lam43225_fptr() // lam43225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43226 = arg_buffer[1];
//reading env and args
void* a4284443071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env43226))[6];
//not do dummy comment
void* lst2 = (decode_clo(env43226))[5];
//not do dummy comment
void* car = (decode_clo(env43226))[4];
//not do dummy comment
void* cons = (decode_clo(env43226))[3];
//not do dummy comment
void* lst = (decode_clo(env43226))[2];
//not do dummy comment
void* kont42945 = (decode_clo(env43226))[1];

//creating new closure instance
void** clo44507 = alloc_clo(lam43223_fptr, 5);

//setting env list
clo44507[1] = cons;
clo44507[2] = lst2;
clo44507[3] = reverse_u45helper;
clo44507[4] = kont42945;
clo44507[5] = a4284443071;
void* f4294743072 = encode_clo(clo44507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4294743072;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43225 = encode_clo(alloc_clo(lam43225_fptr, 0));

void* lam43227_fptr() // lam43227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43228 = arg_buffer[1];
//reading env and args
void* a4284343069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43228))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env43228))[6];
//not do dummy comment
void* lst2 = (decode_clo(env43228))[5];
//not do dummy comment
void* car = (decode_clo(env43228))[4];
//not do dummy comment
void* cons = (decode_clo(env43228))[3];
//not do dummy comment
void* lst = (decode_clo(env43228))[2];
//not do dummy comment
void* kont42945 = (decode_clo(env43228))[1];

//if-clause
bool if_guard44508 = is_true(a4284343069);
if(if_guard44508)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42945);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42945))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44510 = alloc_clo(lam43225_fptr, 6);

//setting env list
clo44510[1] = kont42945;
clo44510[2] = lst;
clo44510[3] = cons;
clo44510[4] = car;
clo44510[5] = lst2;
clo44510[6] = reverse_u45helper;
void* f4294843070 = encode_clo(clo44510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4294843070;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43227 = encode_clo(alloc_clo(lam43227_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43229 = arg_buffer[1];
//reading env and args
void* kont42945 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44512 = alloc_clo(lam43227_fptr, 7);

//setting env list
clo44512[1] = kont42945;
clo44512[2] = lst;
clo44512[3] = cons;
clo44512[4] = car;
clo44512[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo44512[6] = reverse_u45helper;
clo44512[7] = cdr;
void* f4294943068 = encode_clo(clo44512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4294943068;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam43230_fptr() // lam43230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43231 = arg_buffer[1];
//reading env and args
void* a4284743077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env43231))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env43231))[2];
//not do dummy comment
void* kont42950 = (decode_clo(env43231))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42950;
arg_buffer[3] = lst;
arg_buffer[4] = a4284743077;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43230 = encode_clo(alloc_clo(lam43230_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43232 = arg_buffer[1];
//reading env and args
void* kont42950 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo44514 = alloc_clo(lam43230_fptr, 3);

//setting env list
clo44514[1] = kont42950;
clo44514[2] = reverse_u45helper;
clo44514[3] = lst;
void* f4295143076 = encode_clo(clo44514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4295143076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam43233_fptr() // lam43233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43234 = arg_buffer[1];
//reading env and args
void* x4285043082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42952 = (decode_clo(env43234))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42952);
arg_buffer[2] = x4285043082;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42952))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43233 = encode_clo(alloc_clo(lam43233_fptr, 0));

void* lam43235_fptr() // lam43235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43236 = arg_buffer[1];
//reading env and args
void* a4285543091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4285343087 = (decode_clo(env43236))[4];
//not do dummy comment
void* kont42952 = (decode_clo(env43236))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env43236))[2];
//not do dummy comment
void* a4285143084 = (decode_clo(env43236))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42952;
arg_buffer[3] = a4285143084;
arg_buffer[4] = a4285343087;
arg_buffer[5] = a4285543091;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43235 = encode_clo(alloc_clo(lam43235_fptr, 0));

void* lam43237_fptr() // lam43237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43238 = arg_buffer[1];
//reading env and args
void* a4285443089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4285343087 = (decode_clo(env43238))[6];
//not do dummy comment
void* kont42952 = (decode_clo(env43238))[5];
//not do dummy comment
void* cons = (decode_clo(env43238))[4];
//not do dummy comment
void* a4285143084 = (decode_clo(env43238))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env43238))[2];
//not do dummy comment
void* lst2 = (decode_clo(env43238))[1];

//creating new closure instance
void** clo44516 = alloc_clo(lam43235_fptr, 4);

//setting env list
clo44516[1] = a4285143084;
clo44516[2] = take_u45helper;
clo44516[3] = kont42952;
clo44516[4] = a4285343087;
void* f4295443090 = encode_clo(clo44516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4295443090;
arg_buffer[3] = a4285443089;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43237 = encode_clo(alloc_clo(lam43237_fptr, 0));

void* lam43239_fptr() // lam43239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43240 = arg_buffer[1];
//reading env and args
void* a4285343087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env43240))[7];
//not do dummy comment
void* kont42952 = (decode_clo(env43240))[6];
//not do dummy comment
void* car = (decode_clo(env43240))[5];
//not do dummy comment
void* cons = (decode_clo(env43240))[4];
//not do dummy comment
void* a4285143084 = (decode_clo(env43240))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env43240))[2];
//not do dummy comment
void* lst2 = (decode_clo(env43240))[1];

//creating new closure instance
void** clo44518 = alloc_clo(lam43237_fptr, 6);

//setting env list
clo44518[1] = lst2;
clo44518[2] = take_u45helper;
clo44518[3] = a4285143084;
clo44518[4] = cons;
clo44518[5] = kont42952;
clo44518[6] = a4285343087;
void* f4295543088 = encode_clo(clo44518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4295543088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43239 = encode_clo(alloc_clo(lam43239_fptr, 0));

void* lam43242_fptr() // lam43242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43243 = arg_buffer[1];
//reading env and args
void* a4285143084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env43243))[8];
//not do dummy comment
void* kont42952 = (decode_clo(env43243))[7];
//not do dummy comment
void* cons = (decode_clo(env43243))[6];
//not do dummy comment
void* _u45 = (decode_clo(env43243))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env43243))[4];
//not do dummy comment
void* lst2 = (decode_clo(env43243))[3];
//not do dummy comment
void* n = (decode_clo(env43243))[2];
//not do dummy comment
void* car = (decode_clo(env43243))[1];
mpz_t* mpzvar44519 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44519, "1", 10);
void* a4285243085 = encode_mpz(mpzvar44519);

//creating new closure instance
void** clo44521 = alloc_clo(lam43239_fptr, 7);

//setting env list
clo44521[1] = lst2;
clo44521[2] = take_u45helper;
clo44521[3] = a4285143084;
clo44521[4] = cons;
clo44521[5] = car;
clo44521[6] = kont42952;
clo44521[7] = lst;
void* f4295643086 = encode_clo(clo44521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4295643086;
arg_buffer[3] = n;
arg_buffer[4] = a4285243085;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43242 = encode_clo(alloc_clo(lam43242_fptr, 0));

void* lam43244_fptr() // lam43244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43245 = arg_buffer[1];
//reading env and args
void* a4284943080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43245))[10];
//not do dummy comment
void* lst = (decode_clo(env43245))[9];
//not do dummy comment
void* reverse = (decode_clo(env43245))[8];
//not do dummy comment
void* kont42952 = (decode_clo(env43245))[7];
//not do dummy comment
void* cons = (decode_clo(env43245))[6];
//not do dummy comment
void* _u45 = (decode_clo(env43245))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env43245))[4];
//not do dummy comment
void* lst2 = (decode_clo(env43245))[3];
//not do dummy comment
void* n = (decode_clo(env43245))[2];
//not do dummy comment
void* car = (decode_clo(env43245))[1];

//if-clause
bool if_guard44522 = is_true(a4284943080);
if(if_guard44522)
{

//creating new closure instance
void** clo44524 = alloc_clo(lam43233_fptr, 1);

//setting env list
clo44524[1] = kont42952;
void* f4295343081 = encode_clo(clo44524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4295343081;
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
void** clo44526 = alloc_clo(lam43242_fptr, 8);

//setting env list
clo44526[1] = car;
clo44526[2] = n;
clo44526[3] = lst2;
clo44526[4] = take_u45helper;
clo44526[5] = _u45;
clo44526[6] = cons;
clo44526[7] = kont42952;
clo44526[8] = lst;
void* f4295743083 = encode_clo(clo44526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4295743083;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43244 = encode_clo(alloc_clo(lam43244_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43247 = arg_buffer[1];
//reading env and args
void* kont42952 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar44527 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44527, "0", 10);
void* a4284843078 = encode_mpz(mpzvar44527);

//creating new closure instance
void** clo44529 = alloc_clo(lam43244_fptr, 10);

//setting env list
clo44529[1] = car;
clo44529[2] = n;
clo44529[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo44529[4] = take_u45helper;
clo44529[5] = _u45;
clo44529[6] = cons;
clo44529[7] = kont42952;
clo44529[8] = reverse;
clo44529[9] = lst;
clo44529[10] = cdr;
void* f4295843079 = encode_clo(clo44529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4295843079;
arg_buffer[3] = n;
arg_buffer[4] = a4284843078;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam43248_fptr() // lam43248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43249 = arg_buffer[1];
//reading env and args
void* a4285643093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42959 = (decode_clo(env43249))[4];
//not do dummy comment
void* lst = (decode_clo(env43249))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env43249))[2];
//not do dummy comment
void* n = (decode_clo(env43249))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42959;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4285643093;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43248 = encode_clo(alloc_clo(lam43248_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43250 = arg_buffer[1];
//reading env and args
void* kont42959 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44531 = alloc_clo(lam43248_fptr, 4);

//setting env list
clo44531[1] = n;
clo44531[2] = take_u45helper;
clo44531[3] = lst;
clo44531[4] = kont42959;
void* f4296043092 = encode_clo(clo44531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4296043092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam43252_fptr() // lam43252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43253 = arg_buffer[1];
//reading env and args
void* a4286143101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42961 = (decode_clo(env43253))[3];
//not do dummy comment
void* _u43 = (decode_clo(env43253))[2];
//not do dummy comment
void* a4285943097 = (decode_clo(env43253))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont42961;
arg_buffer[3] = a4285943097;
arg_buffer[4] = a4286143101;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43252 = encode_clo(alloc_clo(lam43252_fptr, 0));

void* lam43254_fptr() // lam43254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43255 = arg_buffer[1];
//reading env and args
void* a4286043099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42961 = (decode_clo(env43255))[4];
//not do dummy comment
void* length = (decode_clo(env43255))[3];
//not do dummy comment
void* _u43 = (decode_clo(env43255))[2];
//not do dummy comment
void* a4285943097 = (decode_clo(env43255))[1];

//creating new closure instance
void** clo44533 = alloc_clo(lam43252_fptr, 3);

//setting env list
clo44533[1] = a4285943097;
clo44533[2] = _u43;
clo44533[3] = kont42961;
void* f4296243100 = encode_clo(clo44533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4296243100;
arg_buffer[3] = a4286043099;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43254 = encode_clo(alloc_clo(lam43254_fptr, 0));

void* lam43257_fptr() // lam43257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43258 = arg_buffer[1];
//reading env and args
void* a4285743095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43258))[5];
//not do dummy comment
void* length = (decode_clo(env43258))[4];
//not do dummy comment
void* _u43 = (decode_clo(env43258))[3];
//not do dummy comment
void* lst = (decode_clo(env43258))[2];
//not do dummy comment
void* kont42961 = (decode_clo(env43258))[1];

//if-clause
bool if_guard44534 = is_true(a4285743095);
if(if_guard44534)
{
mpz_t* mpzvar44535 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44535, "0", 10);
void* x4285843096 = encode_mpz(mpzvar44535);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42961);
arg_buffer[2] = x4285843096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42961))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar44536 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44536, "1", 10);
void* a4285943097 = encode_mpz(mpzvar44536);

//creating new closure instance
void** clo44538 = alloc_clo(lam43254_fptr, 4);

//setting env list
clo44538[1] = a4285943097;
clo44538[2] = _u43;
clo44538[3] = length;
clo44538[4] = kont42961;
void* f4296343098 = encode_clo(clo44538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4296343098;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43257 = encode_clo(alloc_clo(lam43257_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43259 = arg_buffer[1];
//reading env and args
void* kont42961 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo44540 = alloc_clo(lam43257_fptr, 5);

//setting env list
clo44540[1] = kont42961;
clo44540[2] = lst;
clo44540[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo44540[4] = length;
clo44540[5] = cdr;
void* f4296443094 = encode_clo(clo44540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4296443094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam43260_fptr() // lam43260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43261 = arg_buffer[1];
//reading env and args
void* x4286343105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42965 = (decode_clo(env43261))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42965);
arg_buffer[2] = x4286343105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43260 = encode_clo(alloc_clo(lam43260_fptr, 0));

void* lam43262_fptr() // lam43262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43263 = arg_buffer[1];
//reading env and args
void* a4286743113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env43263))[3];
//not do dummy comment
void* a4286543109 = (decode_clo(env43263))[2];
//not do dummy comment
void* kont42965 = (decode_clo(env43263))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42965;
arg_buffer[3] = a4286543109;
arg_buffer[4] = a4286743113;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43262 = encode_clo(alloc_clo(lam43262_fptr, 0));

void* lam43264_fptr() // lam43264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43265 = arg_buffer[1];
//reading env and args
void* a4286643111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env43265))[5];
//not do dummy comment
void* proc = (decode_clo(env43265))[4];
//not do dummy comment
void* cons = (decode_clo(env43265))[3];
//not do dummy comment
void* a4286543109 = (decode_clo(env43265))[2];
//not do dummy comment
void* kont42965 = (decode_clo(env43265))[1];

//creating new closure instance
void** clo44542 = alloc_clo(lam43262_fptr, 3);

//setting env list
clo44542[1] = kont42965;
clo44542[2] = a4286543109;
clo44542[3] = cons;
void* f4296743112 = encode_clo(clo44542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4296743112;
arg_buffer[3] = proc;
arg_buffer[4] = a4286643111;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43264 = encode_clo(alloc_clo(lam43264_fptr, 0));

void* lam43266_fptr() // lam43266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43267 = arg_buffer[1];
//reading env and args
void* a4286543109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43267))[6];
//not do dummy comment
void* lst = (decode_clo(env43267))[5];
//not do dummy comment
void* map = (decode_clo(env43267))[4];
//not do dummy comment
void* kont42965 = (decode_clo(env43267))[3];
//not do dummy comment
void* proc = (decode_clo(env43267))[2];
//not do dummy comment
void* cons = (decode_clo(env43267))[1];

//creating new closure instance
void** clo44544 = alloc_clo(lam43264_fptr, 5);

//setting env list
clo44544[1] = kont42965;
clo44544[2] = a4286543109;
clo44544[3] = cons;
clo44544[4] = proc;
clo44544[5] = map;
void* f4296843110 = encode_clo(clo44544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4296843110;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43266 = encode_clo(alloc_clo(lam43266_fptr, 0));

void* lam43268_fptr() // lam43268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43269 = arg_buffer[1];
//reading env and args
void* a4286443107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43269))[6];
//not do dummy comment
void* lst = (decode_clo(env43269))[5];
//not do dummy comment
void* map = (decode_clo(env43269))[4];
//not do dummy comment
void* kont42965 = (decode_clo(env43269))[3];
//not do dummy comment
void* proc = (decode_clo(env43269))[2];
//not do dummy comment
void* cons = (decode_clo(env43269))[1];

//creating new closure instance
void** clo44546 = alloc_clo(lam43266_fptr, 6);

//setting env list
clo44546[1] = cons;
clo44546[2] = proc;
clo44546[3] = kont42965;
clo44546[4] = map;
clo44546[5] = lst;
clo44546[6] = cdr;
void* f4296943108 = encode_clo(clo44546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4296943108;
arg_buffer[3] = a4286443107;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43268 = encode_clo(alloc_clo(lam43268_fptr, 0));

void* lam43270_fptr() // lam43270 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43271 = arg_buffer[1];
//reading env and args
void* a4286243103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env43271))[8];
//not do dummy comment
void* map = (decode_clo(env43271))[7];
//not do dummy comment
void* kont42965 = (decode_clo(env43271))[6];
//not do dummy comment
void* proc = (decode_clo(env43271))[5];
//not do dummy comment
void* car = (decode_clo(env43271))[4];
//not do dummy comment
void* cons = (decode_clo(env43271))[3];
//not do dummy comment
void* list = (decode_clo(env43271))[2];
//not do dummy comment
void* cdr = (decode_clo(env43271))[1];

//if-clause
bool if_guard44547 = is_true(a4286243103);
if(if_guard44547)
{

//creating new closure instance
void** clo44549 = alloc_clo(lam43260_fptr, 1);

//setting env list
clo44549[1] = kont42965;
void* f4296643104 = encode_clo(clo44549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4296643104;
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
void** clo44551 = alloc_clo(lam43268_fptr, 6);

//setting env list
clo44551[1] = cons;
clo44551[2] = proc;
clo44551[3] = kont42965;
clo44551[4] = map;
clo44551[5] = lst;
clo44551[6] = cdr;
void* f4297043106 = encode_clo(clo44551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4297043106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43270 = encode_clo(alloc_clo(lam43270_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43272 = arg_buffer[1];
//reading env and args
void* kont42965 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44553 = alloc_clo(lam43270_fptr, 8);

//setting env list
clo44553[1] = cdr;
clo44553[2] = list;
clo44553[3] = cons;
clo44553[4] = car;
clo44553[5] = proc;
clo44553[6] = kont42965;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo44553[7] = map;
clo44553[8] = lst;
void* f4297143102 = encode_clo(clo44553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4297143102;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam43273_fptr() // lam43273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43274 = arg_buffer[1];
//reading env and args
void* x4286943117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42972 = (decode_clo(env43274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42972);
arg_buffer[2] = x4286943117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42972))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43273 = encode_clo(alloc_clo(lam43273_fptr, 0));

void* lam43275_fptr() // lam43275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43276 = arg_buffer[1];
//reading env and args
void* a4287443127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4287243123 = (decode_clo(env43276))[3];
//not do dummy comment
void* cons = (decode_clo(env43276))[2];
//not do dummy comment
void* kont42972 = (decode_clo(env43276))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42972;
arg_buffer[3] = a4287243123;
arg_buffer[4] = a4287443127;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43275 = encode_clo(alloc_clo(lam43275_fptr, 0));

void* lam43277_fptr() // lam43277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43278 = arg_buffer[1];
//reading env and args
void* a4287343125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4287243123 = (decode_clo(env43278))[5];
//not do dummy comment
void* op = (decode_clo(env43278))[4];
//not do dummy comment
void* filter = (decode_clo(env43278))[3];
//not do dummy comment
void* cons = (decode_clo(env43278))[2];
//not do dummy comment
void* kont42972 = (decode_clo(env43278))[1];

//creating new closure instance
void** clo44555 = alloc_clo(lam43275_fptr, 3);

//setting env list
clo44555[1] = kont42972;
clo44555[2] = cons;
clo44555[3] = a4287243123;
void* f4297443126 = encode_clo(clo44555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4297443126;
arg_buffer[3] = op;
arg_buffer[4] = a4287343125;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43277 = encode_clo(alloc_clo(lam43277_fptr, 0));

void* lam43279_fptr() // lam43279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43280 = arg_buffer[1];
//reading env and args
void* a4287243123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43280))[6];
//not do dummy comment
void* lst = (decode_clo(env43280))[5];
//not do dummy comment
void* op = (decode_clo(env43280))[4];
//not do dummy comment
void* filter = (decode_clo(env43280))[3];
//not do dummy comment
void* cons = (decode_clo(env43280))[2];
//not do dummy comment
void* kont42972 = (decode_clo(env43280))[1];

//creating new closure instance
void** clo44557 = alloc_clo(lam43277_fptr, 5);

//setting env list
clo44557[1] = kont42972;
clo44557[2] = cons;
clo44557[3] = filter;
clo44557[4] = op;
clo44557[5] = a4287243123;
void* f4297543124 = encode_clo(clo44557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4297543124;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43279 = encode_clo(alloc_clo(lam43279_fptr, 0));

void* lam43281_fptr() // lam43281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43282 = arg_buffer[1];
//reading env and args
void* a4287543129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env43282))[3];
//not do dummy comment
void* filter = (decode_clo(env43282))[2];
//not do dummy comment
void* kont42972 = (decode_clo(env43282))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont42972;
arg_buffer[3] = op;
arg_buffer[4] = a4287543129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43281 = encode_clo(alloc_clo(lam43281_fptr, 0));

void* lam43283_fptr() // lam43283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43284 = arg_buffer[1];
//reading env and args
void* a4287143121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43284))[7];
//not do dummy comment
void* lst = (decode_clo(env43284))[6];
//not do dummy comment
void* op = (decode_clo(env43284))[5];
//not do dummy comment
void* cons = (decode_clo(env43284))[4];
//not do dummy comment
void* kont42972 = (decode_clo(env43284))[3];
//not do dummy comment
void* filter = (decode_clo(env43284))[2];
//not do dummy comment
void* car = (decode_clo(env43284))[1];

//if-clause
bool if_guard44558 = is_true(a4287143121);
if(if_guard44558)
{

//creating new closure instance
void** clo44560 = alloc_clo(lam43279_fptr, 6);

//setting env list
clo44560[1] = kont42972;
clo44560[2] = cons;
clo44560[3] = filter;
clo44560[4] = op;
clo44560[5] = lst;
clo44560[6] = cdr;
void* f4297643122 = encode_clo(clo44560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4297643122;
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
void** clo44562 = alloc_clo(lam43281_fptr, 3);

//setting env list
clo44562[1] = kont42972;
clo44562[2] = filter;
clo44562[3] = op;
void* f4297743128 = encode_clo(clo44562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4297743128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43283 = encode_clo(alloc_clo(lam43283_fptr, 0));

void* lam43285_fptr() // lam43285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43286 = arg_buffer[1];
//reading env and args
void* a4287043119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43286))[7];
//not do dummy comment
void* lst = (decode_clo(env43286))[6];
//not do dummy comment
void* op = (decode_clo(env43286))[5];
//not do dummy comment
void* cons = (decode_clo(env43286))[4];
//not do dummy comment
void* kont42972 = (decode_clo(env43286))[3];
//not do dummy comment
void* filter = (decode_clo(env43286))[2];
//not do dummy comment
void* car = (decode_clo(env43286))[1];

//creating new closure instance
void** clo44564 = alloc_clo(lam43283_fptr, 7);

//setting env list
clo44564[1] = car;
clo44564[2] = filter;
clo44564[3] = kont42972;
clo44564[4] = cons;
clo44564[5] = op;
clo44564[6] = lst;
clo44564[7] = cdr;
void* f4297843120 = encode_clo(clo44564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4297843120;
arg_buffer[3] = a4287043119;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43285 = encode_clo(alloc_clo(lam43285_fptr, 0));

void* lam43287_fptr() // lam43287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43288 = arg_buffer[1];
//reading env and args
void* a4286843115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env43288))[8];
//not do dummy comment
void* op = (decode_clo(env43288))[7];
//not do dummy comment
void* cons = (decode_clo(env43288))[6];
//not do dummy comment
void* kont42972 = (decode_clo(env43288))[5];
//not do dummy comment
void* list = (decode_clo(env43288))[4];
//not do dummy comment
void* cdr = (decode_clo(env43288))[3];
//not do dummy comment
void* filter = (decode_clo(env43288))[2];
//not do dummy comment
void* car = (decode_clo(env43288))[1];

//if-clause
bool if_guard44565 = is_true(a4286843115);
if(if_guard44565)
{

//creating new closure instance
void** clo44567 = alloc_clo(lam43273_fptr, 1);

//setting env list
clo44567[1] = kont42972;
void* f4297343116 = encode_clo(clo44567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4297343116;
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
void** clo44569 = alloc_clo(lam43285_fptr, 7);

//setting env list
clo44569[1] = car;
clo44569[2] = filter;
clo44569[3] = kont42972;
clo44569[4] = cons;
clo44569[5] = op;
clo44569[6] = lst;
clo44569[7] = cdr;
void* f4297943118 = encode_clo(clo44569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4297943118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43287 = encode_clo(alloc_clo(lam43287_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43289 = arg_buffer[1];
//reading env and args
void* kont42972 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44571 = alloc_clo(lam43287_fptr, 8);

//setting env list
clo44571[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo44571[2] = filter;
clo44571[3] = cdr;
clo44571[4] = list;
clo44571[5] = kont42972;
clo44571[6] = cons;
clo44571[7] = op;
clo44571[8] = lst;
void* f4298043114 = encode_clo(clo44571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4298043114;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam43290_fptr() // lam43290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43291 = arg_buffer[1];
//reading env and args
void* a4288043137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4287843134 = (decode_clo(env43291))[3];
//not do dummy comment
void* drop = (decode_clo(env43291))[2];
//not do dummy comment
void* kont42981 = (decode_clo(env43291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont42981;
arg_buffer[3] = a4287843134;
arg_buffer[4] = a4288043137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43290 = encode_clo(alloc_clo(lam43290_fptr, 0));

void* lam43293_fptr() // lam43293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43294 = arg_buffer[1];
//reading env and args
void* a4287843134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env43294))[4];
//not do dummy comment
void* kont42981 = (decode_clo(env43294))[3];
//not do dummy comment
void* n = (decode_clo(env43294))[2];
//not do dummy comment
void* _u45 = (decode_clo(env43294))[1];
mpz_t* mpzvar44572 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44572, "1", 10);
void* a4287943135 = encode_mpz(mpzvar44572);

//creating new closure instance
void** clo44574 = alloc_clo(lam43290_fptr, 3);

//setting env list
clo44574[1] = kont42981;
clo44574[2] = drop;
clo44574[3] = a4287843134;
void* f4298243136 = encode_clo(clo44574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4298243136;
arg_buffer[3] = n;
arg_buffer[4] = a4287943135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43293 = encode_clo(alloc_clo(lam43293_fptr, 0));

void* lam43295_fptr() // lam43295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43296 = arg_buffer[1];
//reading env and args
void* a4287743132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43296))[6];
//not do dummy comment
void* kont42981 = (decode_clo(env43296))[5];
//not do dummy comment
void* n = (decode_clo(env43296))[4];
//not do dummy comment
void* _u45 = (decode_clo(env43296))[3];
//not do dummy comment
void* lst = (decode_clo(env43296))[2];
//not do dummy comment
void* drop = (decode_clo(env43296))[1];

//if-clause
bool if_guard44575 = is_true(a4287743132);
if(if_guard44575)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42981);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42981))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44577 = alloc_clo(lam43293_fptr, 4);

//setting env list
clo44577[1] = _u45;
clo44577[2] = n;
clo44577[3] = kont42981;
clo44577[4] = drop;
void* f4298343133 = encode_clo(clo44577);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4298343133;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43295 = encode_clo(alloc_clo(lam43295_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43298 = arg_buffer[1];
//reading env and args
void* kont42981 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar44578 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44578, "0", 10);
void* a4287643130 = encode_mpz(mpzvar44578);

//creating new closure instance
void** clo44580 = alloc_clo(lam43295_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo44580[1] = drop;
clo44580[2] = lst;
clo44580[3] = _u45;
clo44580[4] = n;
clo44580[5] = kont42981;
clo44580[6] = cdr;
void* f4298443131 = encode_clo(clo44580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4298443131;
arg_buffer[3] = n;
arg_buffer[4] = a4287643130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam43299_fptr() // lam43299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43300 = arg_buffer[1];
//reading env and args
void* a4288443145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4288243141 = (decode_clo(env43300))[3];
//not do dummy comment
void* proc = (decode_clo(env43300))[2];
//not do dummy comment
void* kont42985 = (decode_clo(env43300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont42985;
arg_buffer[3] = a4288243141;
arg_buffer[4] = a4288443145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43299 = encode_clo(alloc_clo(lam43299_fptr, 0));

void* lam43301_fptr() // lam43301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43302 = arg_buffer[1];
//reading env and args
void* a4288343143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env43302))[5];
//not do dummy comment
void* a4288243141 = (decode_clo(env43302))[4];
//not do dummy comment
void* kont42985 = (decode_clo(env43302))[3];
//not do dummy comment
void* proc = (decode_clo(env43302))[2];
//not do dummy comment
void* acc = (decode_clo(env43302))[1];

//creating new closure instance
void** clo44582 = alloc_clo(lam43299_fptr, 3);

//setting env list
clo44582[1] = kont42985;
clo44582[2] = proc;
clo44582[3] = a4288243141;
void* f4298643144 = encode_clo(clo44582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4298643144;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4288343143;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43301 = encode_clo(alloc_clo(lam43301_fptr, 0));

void* lam43303_fptr() // lam43303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43304 = arg_buffer[1];
//reading env and args
void* a4288243141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43304))[6];
//not do dummy comment
void* kont42985 = (decode_clo(env43304))[5];
//not do dummy comment
void* foldr = (decode_clo(env43304))[4];
//not do dummy comment
void* lst = (decode_clo(env43304))[3];
//not do dummy comment
void* proc = (decode_clo(env43304))[2];
//not do dummy comment
void* acc = (decode_clo(env43304))[1];

//creating new closure instance
void** clo44584 = alloc_clo(lam43301_fptr, 5);

//setting env list
clo44584[1] = acc;
clo44584[2] = proc;
clo44584[3] = kont42985;
clo44584[4] = a4288243141;
clo44584[5] = foldr;
void* f4298743142 = encode_clo(clo44584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4298743142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43303 = encode_clo(alloc_clo(lam43303_fptr, 0));

void* lam43305_fptr() // lam43305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43306 = arg_buffer[1];
//reading env and args
void* a4288143139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43306))[7];
//not do dummy comment
void* kont42985 = (decode_clo(env43306))[6];
//not do dummy comment
void* car = (decode_clo(env43306))[5];
//not do dummy comment
void* foldr = (decode_clo(env43306))[4];
//not do dummy comment
void* lst = (decode_clo(env43306))[3];
//not do dummy comment
void* proc = (decode_clo(env43306))[2];
//not do dummy comment
void* acc = (decode_clo(env43306))[1];

//if-clause
bool if_guard44585 = is_true(a4288143139);
if(if_guard44585)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42985);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42985))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44587 = alloc_clo(lam43303_fptr, 6);

//setting env list
clo44587[1] = acc;
clo44587[2] = proc;
clo44587[3] = lst;
clo44587[4] = foldr;
clo44587[5] = kont42985;
clo44587[6] = cdr;
void* f4298843140 = encode_clo(clo44587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4298843140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43305 = encode_clo(alloc_clo(lam43305_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43307 = arg_buffer[1];
//reading env and args
void* kont42985 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo44589 = alloc_clo(lam43305_fptr, 7);

//setting env list
clo44589[1] = acc;
clo44589[2] = proc;
clo44589[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo44589[4] = foldr;
clo44589[5] = car;
clo44589[6] = kont42985;
clo44589[7] = cdr;
void* f4298943138 = encode_clo(clo44589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4298943138;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam43308_fptr() // lam43308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43309 = arg_buffer[1];
//reading env and args
void* a4288843153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4288643149 = (decode_clo(env43309))[3];
//not do dummy comment
void* kont42990 = (decode_clo(env43309))[2];
//not do dummy comment
void* cons = (decode_clo(env43309))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42990;
arg_buffer[3] = a4288643149;
arg_buffer[4] = a4288843153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43308 = encode_clo(alloc_clo(lam43308_fptr, 0));

void* lam43310_fptr() // lam43310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43311 = arg_buffer[1];
//reading env and args
void* a4288743151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4288643149 = (decode_clo(env43311))[5];
//not do dummy comment
void* kont42990 = (decode_clo(env43311))[4];
//not do dummy comment
void* append = (decode_clo(env43311))[3];
//not do dummy comment
void* lst2 = (decode_clo(env43311))[2];
//not do dummy comment
void* cons = (decode_clo(env43311))[1];

//creating new closure instance
void** clo44591 = alloc_clo(lam43308_fptr, 3);

//setting env list
clo44591[1] = cons;
clo44591[2] = kont42990;
clo44591[3] = a4288643149;
void* f4299143152 = encode_clo(clo44591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4299143152;
arg_buffer[3] = a4288743151;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43310 = encode_clo(alloc_clo(lam43310_fptr, 0));

void* lam43312_fptr() // lam43312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43313 = arg_buffer[1];
//reading env and args
void* a4288643149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43313))[6];
//not do dummy comment
void* kont42990 = (decode_clo(env43313))[5];
//not do dummy comment
void* append = (decode_clo(env43313))[4];
//not do dummy comment
void* lst2 = (decode_clo(env43313))[3];
//not do dummy comment
void* lst1 = (decode_clo(env43313))[2];
//not do dummy comment
void* cons = (decode_clo(env43313))[1];

//creating new closure instance
void** clo44593 = alloc_clo(lam43310_fptr, 5);

//setting env list
clo44593[1] = cons;
clo44593[2] = lst2;
clo44593[3] = append;
clo44593[4] = kont42990;
clo44593[5] = a4288643149;
void* f4299243150 = encode_clo(clo44593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4299243150;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43312 = encode_clo(alloc_clo(lam43312_fptr, 0));

void* lam43314_fptr() // lam43314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43315 = arg_buffer[1];
//reading env and args
void* a4288543147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env43315))[7];
//not do dummy comment
void* kont42990 = (decode_clo(env43315))[6];
//not do dummy comment
void* append = (decode_clo(env43315))[5];
//not do dummy comment
void* lst2 = (decode_clo(env43315))[4];
//not do dummy comment
void* cons = (decode_clo(env43315))[3];
//not do dummy comment
void* lst1 = (decode_clo(env43315))[2];
//not do dummy comment
void* car = (decode_clo(env43315))[1];

//if-clause
bool if_guard44594 = is_true(a4288543147);
if(if_guard44594)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42990);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42990))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44596 = alloc_clo(lam43312_fptr, 6);

//setting env list
clo44596[1] = cons;
clo44596[2] = lst1;
clo44596[3] = lst2;
clo44596[4] = append;
clo44596[5] = kont42990;
clo44596[6] = cdr;
void* f4299343148 = encode_clo(clo44596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4299343148;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam43314 = encode_clo(alloc_clo(lam43314_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43316 = arg_buffer[1];
//reading env and args
void* kont42990 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44598 = alloc_clo(lam43314_fptr, 7);

//setting env list
clo44598[1] = car;
clo44598[2] = lst1;
clo44598[3] = cons;
clo44598[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo44598[5] = append;
clo44598[6] = kont42990;
clo44598[7] = cdr;
void* f4299443146 = encode_clo(clo44598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4299443146;
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
void* _43317 = arg_buffer[1];
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

void* kont4299543154 = prim_car(lst);
void* lst43155 = prim_cdr(lst);
void* x4288943156 = apply_prim_hash(lst43155);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4299543154);
arg_buffer[2] = x4288943156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4299543154))[0]);
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
void* _43318 = arg_buffer[1];
//reading env and args
void* kont42997 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4289043157 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42997);
arg_buffer[2] = x4289043157;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42997))[0]);
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
void* _43319 = arg_buffer[1];
//reading env and args
void* kont42998 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4289143158 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42998);
arg_buffer[2] = x4289143158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42998))[0]);
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
void* _43320 = arg_buffer[1];
//reading env and args
void* kont42999 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4289243159 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42999);
arg_buffer[2] = x4289243159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42999))[0]);
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
void* _43321 = arg_buffer[1];
//reading env and args
void* kont43000 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4289343160 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43000);
arg_buffer[2] = x4289343160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43000))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam43323_fptr() // lam43323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43324 = arg_buffer[1];
//reading env and args
void* a4290143170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env43324))[2];
//not do dummy comment
void* kont43001 = (decode_clo(env43324))[1];
void* a4290243171 = encode_str(new(GC) std::string("work"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont43001;
arg_buffer[3] = a4290143170;
arg_buffer[4] = a4290243171;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43323 = encode_clo(alloc_clo(lam43323_fptr, 0));

void* lam43327_fptr() // lam43327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43328 = arg_buffer[1];
//reading env and args
void* a4289843166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env43328))[3];
//not do dummy comment
void* hash_u45set = (decode_clo(env43328))[2];
//not do dummy comment
void* kont43001 = (decode_clo(env43328))[1];
void* a4289943167 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar44599 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44599, "90", 10);
void* a4290043168 = encode_mpz(mpzvar44599);

//creating new closure instance
void** clo44601 = alloc_clo(lam43323_fptr, 2);

//setting env list
clo44601[1] = kont43001;
clo44601[2] = hash_u45ref;
void* f4300243169 = encode_clo(clo44601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45set);
arg_buffer[2] = f4300243169;
arg_buffer[3] = a4289843166;
arg_buffer[4] = a4289943167;
arg_buffer[5] = a4290043168;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43327 = encode_clo(alloc_clo(lam43327_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43333 = arg_buffer[1];
//reading env and args
void* kont43001 = arg_buffer[2];
//Dummy comment
void* a4289443161 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar44602 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44602, "80", 10);
void* a4289543162 = encode_mpz(mpzvar44602);
mpz_t* mpzvar44603 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44603, "10", 10);
void* a4289643163 = encode_mpz(mpzvar44603);
void* a4289743164 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo44605 = alloc_clo(lam43327_fptr, 3);

//setting env list
clo44605[1] = kont43001;
clo44605[2] = hash_u45set;
clo44605[3] = hash_u45ref;
void* f4300343165 = encode_clo(clo44605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4300343165;
arg_buffer[3] = a4289443161;
arg_buffer[4] = a4289543162;
arg_buffer[5] = a4289643163;
arg_buffer[6] = a4289743164;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam43334_fptr() // lam43334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43335 = arg_buffer[1];
//reading env and args
void* x4290343173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43004 = (decode_clo(env43335))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43004);
arg_buffer[2] = x4290343173;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43004))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43334 = encode_clo(alloc_clo(lam43334_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43336 = arg_buffer[1];
//reading env and args
void* kont43004 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo44607 = alloc_clo(lam43334_fptr, 1);

//setting env list
clo44607[1] = kont43004;
void* f4300543172 = encode_clo(clo44607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4300543172;
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

