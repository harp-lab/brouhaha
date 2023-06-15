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
void* _30314 = arg_buffer[1];
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

void* kont3005130151 = prim_car(lst);
void* lst30152 = prim_cdr(lst);
void* x2996130153 = apply_prim__u43(lst30152);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3005130151);
arg_buffer[2] = x2996130153;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3005130151))[0]);
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
void* _30315 = arg_buffer[1];
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

void* kont3005330154 = prim_car(lst);
void* lst30155 = prim_cdr(lst);
void* x2996230156 = apply_prim__u45(lst30155);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3005330154);
arg_buffer[2] = x2996230156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3005330154))[0]);
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
void* _30316 = arg_buffer[1];
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

void* kont3005530157 = prim_car(lst);
void* lst30158 = prim_cdr(lst);
void* x2996330159 = apply_prim__u42(lst30158);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3005530157);
arg_buffer[2] = x2996330159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3005530157))[0]);
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
void* _30317 = arg_buffer[1];
//reading env and args
void* kont30057 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2996430160 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30057);
arg_buffer[2] = x2996430160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30057))[0]);
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
void* _30318 = arg_buffer[1];
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

void* kont3005830161 = prim_car(lst);
void* lst30162 = prim_cdr(lst);
void* x2996530163 = apply_prim__u47(lst30162);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3005830161);
arg_buffer[2] = x2996530163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3005830161))[0]);
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
void* _30319 = arg_buffer[1];
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

void* kont3006030164 = prim_car(lst);
void* lst30165 = prim_cdr(lst);
void* x2996630166 = apply_prim__u61(lst30165);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3006030164);
arg_buffer[2] = x2996630166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3006030164))[0]);
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
void* _30320 = arg_buffer[1];
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

void* kont3006230167 = prim_car(lst);
void* lst30168 = prim_cdr(lst);
void* x2996730169 = apply_prim__u62(lst30168);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3006230167);
arg_buffer[2] = x2996730169;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3006230167))[0]);
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
void* _30321 = arg_buffer[1];
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

void* kont3006430170 = prim_car(lst);
void* lst30171 = prim_cdr(lst);
void* x2996830172 = apply_prim__u60(lst30171);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3006430170);
arg_buffer[2] = x2996830172;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3006430170))[0]);
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
void* _30322 = arg_buffer[1];
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

void* kont3006630173 = prim_car(lst);
void* lst30174 = prim_cdr(lst);
void* x2996930175 = apply_prim__u60_u61(lst30174);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3006630173);
arg_buffer[2] = x2996930175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3006630173))[0]);
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
void* _30323 = arg_buffer[1];
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

void* kont3006830176 = prim_car(lst);
void* lst30177 = prim_cdr(lst);
void* x2997030178 = apply_prim__u62_u61(lst30177);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3006830176);
arg_buffer[2] = x2997030178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3006830176))[0]);
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
void* _30324 = arg_buffer[1];
//reading env and args
void* kont30070 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2997130179 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30070);
arg_buffer[2] = x2997130179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30070))[0]);
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
void* _30325 = arg_buffer[1];
//reading env and args
void* kont30071 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2997230180 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30071);
arg_buffer[2] = x2997230180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30071))[0]);
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
void* _30326 = arg_buffer[1];
//reading env and args
void* kont30072 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2997330181 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30072);
arg_buffer[2] = x2997330181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30072))[0]);
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
void* _30327 = arg_buffer[1];
//reading env and args
void* kont30073 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2997430182 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30073);
arg_buffer[2] = x2997430182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30073))[0]);
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
void* _30328 = arg_buffer[1];
//reading env and args
void* kont30074 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2997530183 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30074);
arg_buffer[2] = x2997530183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30074))[0]);
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
void* _30329 = arg_buffer[1];
//reading env and args
void* kont30075 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2997630184 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30075);
arg_buffer[2] = x2997630184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30075))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam30330_fptr() // lam30330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30331 = arg_buffer[1];
//reading env and args
void* a2997930188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2997730185 = (decode_clo(env30331))[3];
//not do dummy comment
void* kont30076 = (decode_clo(env30331))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env30331))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30076;
arg_buffer[3] = a2997730185;
arg_buffer[4] = a2997930188;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30330 = encode_clo(alloc_clo(lam30330_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30334 = arg_buffer[1];
//reading env and args
void* kont30076 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar38212 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38212, "0", 10);
void* a2997730185 = encode_mpz(mpzvar38212);
mpz_t* mpzvar38213 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38213, "2", 10);
void* a2997830186 = encode_mpz(mpzvar38213);

//creating new closure instance
void** clo38215 = alloc_clo(lam30330_fptr, 3);

//setting env list
clo38215[1] = equal_u63;
clo38215[2] = kont30076;
clo38215[3] = a2997730185;
void* f3007730187 = encode_clo(clo38215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3007730187;
arg_buffer[3] = x;
arg_buffer[4] = a2997830186;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam30335_fptr() // lam30335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30336 = arg_buffer[1];
//reading env and args
void* a2998230192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2998030189 = (decode_clo(env30336))[3];
//not do dummy comment
void* kont30078 = (decode_clo(env30336))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env30336))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30078;
arg_buffer[3] = a2998030189;
arg_buffer[4] = a2998230192;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30335 = encode_clo(alloc_clo(lam30335_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30339 = arg_buffer[1];
//reading env and args
void* kont30078 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar38216 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38216, "1", 10);
void* a2998030189 = encode_mpz(mpzvar38216);
mpz_t* mpzvar38217 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38217, "2", 10);
void* a2998130190 = encode_mpz(mpzvar38217);

//creating new closure instance
void** clo38219 = alloc_clo(lam30335_fptr, 3);

//setting env list
clo38219[1] = equal_u63;
clo38219[2] = kont30078;
clo38219[3] = a2998030189;
void* f3007930191 = encode_clo(clo38219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3007930191;
arg_buffer[3] = x;
arg_buffer[4] = a2998130190;
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
void* _30340 = arg_buffer[1];
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

void* kont3008030193 = prim_car(x);
void* x30194 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3008030193);
arg_buffer[2] = x30194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3008030193))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam30343_fptr() // lam30343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30344 = arg_buffer[1];
//reading env and args
void* a2998830204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env30344))[3];
//not do dummy comment
void* kont30082 = (decode_clo(env30344))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30344))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont30082;
arg_buffer[3] = x;
arg_buffer[4] = a2998830204;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30343 = encode_clo(alloc_clo(lam30343_fptr, 0));

void* lam30345_fptr() // lam30345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30346 = arg_buffer[1];
//reading env and args
void* a2998630201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30346))[5];
//not do dummy comment
void* lst = (decode_clo(env30346))[4];
//not do dummy comment
void* x = (decode_clo(env30346))[3];
//not do dummy comment
void* kont30082 = (decode_clo(env30346))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30346))[1];

//if-clause
bool if_guard38220 = is_true(a2998630201);
if(if_guard38220)
{
void* x2998730202 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30082);
arg_buffer[2] = x2998730202;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30082))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38222 = alloc_clo(lam30343_fptr, 3);

//setting env list
clo38222[1] = member_u63;
clo38222[2] = kont30082;
clo38222[3] = x;
void* f3008330203 = encode_clo(clo38222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3008330203;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30345 = encode_clo(alloc_clo(lam30345_fptr, 0));

void* lam30347_fptr() // lam30347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30348 = arg_buffer[1];
//reading env and args
void* a2998530199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30348))[6];
//not do dummy comment
void* lst = (decode_clo(env30348))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env30348))[4];
//not do dummy comment
void* x = (decode_clo(env30348))[3];
//not do dummy comment
void* kont30082 = (decode_clo(env30348))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30348))[1];

//creating new closure instance
void** clo38224 = alloc_clo(lam30345_fptr, 5);

//setting env list
clo38224[1] = member_u63;
clo38224[2] = kont30082;
clo38224[3] = x;
clo38224[4] = lst;
clo38224[5] = cdr;
void* f3008430200 = encode_clo(clo38224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3008430200;
arg_buffer[3] = a2998530199;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30347 = encode_clo(alloc_clo(lam30347_fptr, 0));

void* lam30349_fptr() // lam30349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30350 = arg_buffer[1];
//reading env and args
void* a2998330196 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30350))[7];
//not do dummy comment
void* lst = (decode_clo(env30350))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env30350))[5];
//not do dummy comment
void* x = (decode_clo(env30350))[4];
//not do dummy comment
void* kont30082 = (decode_clo(env30350))[3];
//not do dummy comment
void* car = (decode_clo(env30350))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30350))[1];

//if-clause
bool if_guard38225 = is_true(a2998330196);
if(if_guard38225)
{
void* x2998430197 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30082);
arg_buffer[2] = x2998430197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30082))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38227 = alloc_clo(lam30347_fptr, 6);

//setting env list
clo38227[1] = member_u63;
clo38227[2] = kont30082;
clo38227[3] = x;
clo38227[4] = equal_u63;
clo38227[5] = lst;
clo38227[6] = cdr;
void* f3008530198 = encode_clo(clo38227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3008530198;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30349 = encode_clo(alloc_clo(lam30349_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30351 = arg_buffer[1];
//reading env and args
void* kont30082 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38229 = alloc_clo(lam30349_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo38229[1] = member_u63;
clo38229[2] = car;
clo38229[3] = kont30082;
clo38229[4] = x;
clo38229[5] = equal_u63;
clo38229[6] = lst;
clo38229[7] = cdr;
void* f3008630195 = encode_clo(clo38229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3008630195;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam30352_fptr() // lam30352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30353 = arg_buffer[1];
//reading env and args
void* a2999230212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30087 = (decode_clo(env30353))[4];
//not do dummy comment
void* fun = (decode_clo(env30353))[3];
//not do dummy comment
void* a2999130210 = (decode_clo(env30353))[2];
//not do dummy comment
void* foldl = (decode_clo(env30353))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont30087;
arg_buffer[3] = fun;
arg_buffer[4] = a2999130210;
arg_buffer[5] = a2999230212;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30352 = encode_clo(alloc_clo(lam30352_fptr, 0));

void* lam30354_fptr() // lam30354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30355 = arg_buffer[1];
//reading env and args
void* a2999130210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30355))[5];
//not do dummy comment
void* kont30087 = (decode_clo(env30355))[4];
//not do dummy comment
void* lst = (decode_clo(env30355))[3];
//not do dummy comment
void* fun = (decode_clo(env30355))[2];
//not do dummy comment
void* foldl = (decode_clo(env30355))[1];

//creating new closure instance
void** clo38231 = alloc_clo(lam30352_fptr, 4);

//setting env list
clo38231[1] = foldl;
clo38231[2] = a2999130210;
clo38231[3] = fun;
clo38231[4] = kont30087;
void* f3008830211 = encode_clo(clo38231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3008830211;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30354 = encode_clo(alloc_clo(lam30354_fptr, 0));

void* lam30356_fptr() // lam30356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30357 = arg_buffer[1];
//reading env and args
void* a2999030208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30357))[6];
//not do dummy comment
void* kont30087 = (decode_clo(env30357))[5];
//not do dummy comment
void* lst = (decode_clo(env30357))[4];
//not do dummy comment
void* fun = (decode_clo(env30357))[3];
//not do dummy comment
void* acc = (decode_clo(env30357))[2];
//not do dummy comment
void* foldl = (decode_clo(env30357))[1];

//creating new closure instance
void** clo38233 = alloc_clo(lam30354_fptr, 5);

//setting env list
clo38233[1] = foldl;
clo38233[2] = fun;
clo38233[3] = lst;
clo38233[4] = kont30087;
clo38233[5] = cdr;
void* f3008930209 = encode_clo(clo38233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3008930209;
arg_buffer[3] = a2999030208;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30356 = encode_clo(alloc_clo(lam30356_fptr, 0));

void* lam30358_fptr() // lam30358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30359 = arg_buffer[1];
//reading env and args
void* a2998930206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30359))[7];
//not do dummy comment
void* kont30087 = (decode_clo(env30359))[6];
//not do dummy comment
void* lst = (decode_clo(env30359))[5];
//not do dummy comment
void* fun = (decode_clo(env30359))[4];
//not do dummy comment
void* acc = (decode_clo(env30359))[3];
//not do dummy comment
void* car = (decode_clo(env30359))[2];
//not do dummy comment
void* foldl = (decode_clo(env30359))[1];

//if-clause
bool if_guard38234 = is_true(a2998930206);
if(if_guard38234)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30087);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30087))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38236 = alloc_clo(lam30356_fptr, 6);

//setting env list
clo38236[1] = foldl;
clo38236[2] = acc;
clo38236[3] = fun;
clo38236[4] = lst;
clo38236[5] = kont30087;
clo38236[6] = cdr;
void* f3009030207 = encode_clo(clo38236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3009030207;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30358 = encode_clo(alloc_clo(lam30358_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30360 = arg_buffer[1];
//reading env and args
void* kont30087 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo38238 = alloc_clo(lam30358_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo38238[1] = foldl;
clo38238[2] = car;
clo38238[3] = acc;
clo38238[4] = fun;
clo38238[5] = lst;
clo38238[6] = kont30087;
clo38238[7] = cdr;
void* f3009130205 = encode_clo(clo38238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3009130205;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam30361_fptr() // lam30361 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30362 = arg_buffer[1];
//reading env and args
void* a2999630220 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2999430216 = (decode_clo(env30362))[3];
//not do dummy comment
void* kont30092 = (decode_clo(env30362))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30362))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30092;
arg_buffer[3] = a2999430216;
arg_buffer[4] = a2999630220;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30361 = encode_clo(alloc_clo(lam30361_fptr, 0));

void* lam30363_fptr() // lam30363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30364 = arg_buffer[1];
//reading env and args
void* a2999530218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2999430216 = (decode_clo(env30364))[5];
//not do dummy comment
void* kont30092 = (decode_clo(env30364))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30364))[3];
//not do dummy comment
void* lst2 = (decode_clo(env30364))[2];
//not do dummy comment
void* cons = (decode_clo(env30364))[1];

//creating new closure instance
void** clo38240 = alloc_clo(lam30361_fptr, 3);

//setting env list
clo38240[1] = reverse_u45helper;
clo38240[2] = kont30092;
clo38240[3] = a2999430216;
void* f3009330219 = encode_clo(clo38240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3009330219;
arg_buffer[3] = a2999530218;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30363 = encode_clo(alloc_clo(lam30363_fptr, 0));

void* lam30365_fptr() // lam30365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30366 = arg_buffer[1];
//reading env and args
void* a2999430216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30366))[6];
//not do dummy comment
void* kont30092 = (decode_clo(env30366))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30366))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30366))[3];
//not do dummy comment
void* car = (decode_clo(env30366))[2];
//not do dummy comment
void* cons = (decode_clo(env30366))[1];

//creating new closure instance
void** clo38242 = alloc_clo(lam30363_fptr, 5);

//setting env list
clo38242[1] = cons;
clo38242[2] = lst2;
clo38242[3] = reverse_u45helper;
clo38242[4] = kont30092;
clo38242[5] = a2999430216;
void* f3009430217 = encode_clo(clo38242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3009430217;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30365 = encode_clo(alloc_clo(lam30365_fptr, 0));

void* lam30367_fptr() // lam30367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30368 = arg_buffer[1];
//reading env and args
void* a2999330214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30368))[7];
//not do dummy comment
void* lst = (decode_clo(env30368))[6];
//not do dummy comment
void* kont30092 = (decode_clo(env30368))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30368))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30368))[3];
//not do dummy comment
void* car = (decode_clo(env30368))[2];
//not do dummy comment
void* cons = (decode_clo(env30368))[1];

//if-clause
bool if_guard38243 = is_true(a2999330214);
if(if_guard38243)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30092);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30092))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38245 = alloc_clo(lam30365_fptr, 6);

//setting env list
clo38245[1] = cons;
clo38245[2] = car;
clo38245[3] = lst2;
clo38245[4] = reverse_u45helper;
clo38245[5] = kont30092;
clo38245[6] = lst;
void* f3009530215 = encode_clo(clo38245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3009530215;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30367 = encode_clo(alloc_clo(lam30367_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30369 = arg_buffer[1];
//reading env and args
void* kont30092 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38247 = alloc_clo(lam30367_fptr, 7);

//setting env list
clo38247[1] = cons;
clo38247[2] = car;
clo38247[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo38247[4] = reverse_u45helper;
clo38247[5] = kont30092;
clo38247[6] = lst;
clo38247[7] = cdr;
void* f3009630213 = encode_clo(clo38247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3009630213;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam30370_fptr() // lam30370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30371 = arg_buffer[1];
//reading env and args
void* a2999730222 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30371))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30371))[2];
//not do dummy comment
void* kont30097 = (decode_clo(env30371))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30097;
arg_buffer[3] = lst;
arg_buffer[4] = a2999730222;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30370 = encode_clo(alloc_clo(lam30370_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30372 = arg_buffer[1];
//reading env and args
void* kont30097 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo38249 = alloc_clo(lam30370_fptr, 3);

//setting env list
clo38249[1] = kont30097;
clo38249[2] = reverse_u45helper;
clo38249[3] = lst;
void* f3009830221 = encode_clo(clo38249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3009830221;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam30373_fptr() // lam30373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30374 = arg_buffer[1];
//reading env and args
void* x3000030227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30099 = (decode_clo(env30374))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30099);
arg_buffer[2] = x3000030227;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30099))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30373 = encode_clo(alloc_clo(lam30373_fptr, 0));

void* lam30375_fptr() // lam30375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30376 = arg_buffer[1];
//reading env and args
void* a3000530236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3000330232 = (decode_clo(env30376))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env30376))[3];
//not do dummy comment
void* kont30099 = (decode_clo(env30376))[2];
//not do dummy comment
void* a3000130229 = (decode_clo(env30376))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30099;
arg_buffer[3] = a3000130229;
arg_buffer[4] = a3000330232;
arg_buffer[5] = a3000530236;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30375 = encode_clo(alloc_clo(lam30375_fptr, 0));

void* lam30377_fptr() // lam30377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30378 = arg_buffer[1];
//reading env and args
void* a3000430234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3000330232 = (decode_clo(env30378))[6];
//not do dummy comment
void* kont30099 = (decode_clo(env30378))[5];
//not do dummy comment
void* cons = (decode_clo(env30378))[4];
//not do dummy comment
void* a3000130229 = (decode_clo(env30378))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30378))[2];
//not do dummy comment
void* lst2 = (decode_clo(env30378))[1];

//creating new closure instance
void** clo38251 = alloc_clo(lam30375_fptr, 4);

//setting env list
clo38251[1] = a3000130229;
clo38251[2] = kont30099;
clo38251[3] = take_u45helper;
clo38251[4] = a3000330232;
void* f3010130235 = encode_clo(clo38251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3010130235;
arg_buffer[3] = a3000430234;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30377 = encode_clo(alloc_clo(lam30377_fptr, 0));

void* lam30379_fptr() // lam30379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30380 = arg_buffer[1];
//reading env and args
void* a3000330232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30380))[7];
//not do dummy comment
void* cons = (decode_clo(env30380))[6];
//not do dummy comment
void* a3000130229 = (decode_clo(env30380))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30380))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30380))[3];
//not do dummy comment
void* kont30099 = (decode_clo(env30380))[2];
//not do dummy comment
void* car = (decode_clo(env30380))[1];

//creating new closure instance
void** clo38253 = alloc_clo(lam30377_fptr, 6);

//setting env list
clo38253[1] = lst2;
clo38253[2] = take_u45helper;
clo38253[3] = a3000130229;
clo38253[4] = cons;
clo38253[5] = kont30099;
clo38253[6] = a3000330232;
void* f3010230233 = encode_clo(clo38253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3010230233;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30379 = encode_clo(alloc_clo(lam30379_fptr, 0));

void* lam30382_fptr() // lam30382 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30383 = arg_buffer[1];
//reading env and args
void* a3000130229 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30383))[8];
//not do dummy comment
void* cons = (decode_clo(env30383))[7];
//not do dummy comment
void* _u45 = (decode_clo(env30383))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env30383))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30383))[4];
//not do dummy comment
void* kont30099 = (decode_clo(env30383))[3];
//not do dummy comment
void* n = (decode_clo(env30383))[2];
//not do dummy comment
void* car = (decode_clo(env30383))[1];
mpz_t* mpzvar38254 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38254, "1", 10);
void* a3000230230 = encode_mpz(mpzvar38254);

//creating new closure instance
void** clo38256 = alloc_clo(lam30379_fptr, 7);

//setting env list
clo38256[1] = car;
clo38256[2] = kont30099;
clo38256[3] = lst2;
clo38256[4] = take_u45helper;
clo38256[5] = a3000130229;
clo38256[6] = cons;
clo38256[7] = lst;
void* f3010330231 = encode_clo(clo38256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3010330231;
arg_buffer[3] = n;
arg_buffer[4] = a3000230230;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30382 = encode_clo(alloc_clo(lam30382_fptr, 0));

void* lam30384_fptr() // lam30384 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30385 = arg_buffer[1];
//reading env and args
void* a2999930225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30385))[10];
//not do dummy comment
void* lst = (decode_clo(env30385))[9];
//not do dummy comment
void* reverse = (decode_clo(env30385))[8];
//not do dummy comment
void* cons = (decode_clo(env30385))[7];
//not do dummy comment
void* _u45 = (decode_clo(env30385))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env30385))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30385))[4];
//not do dummy comment
void* kont30099 = (decode_clo(env30385))[3];
//not do dummy comment
void* n = (decode_clo(env30385))[2];
//not do dummy comment
void* car = (decode_clo(env30385))[1];

//if-clause
bool if_guard38257 = is_true(a2999930225);
if(if_guard38257)
{

//creating new closure instance
void** clo38259 = alloc_clo(lam30373_fptr, 1);

//setting env list
clo38259[1] = kont30099;
void* f3010030226 = encode_clo(clo38259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3010030226;
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
void** clo38261 = alloc_clo(lam30382_fptr, 8);

//setting env list
clo38261[1] = car;
clo38261[2] = n;
clo38261[3] = kont30099;
clo38261[4] = lst2;
clo38261[5] = take_u45helper;
clo38261[6] = _u45;
clo38261[7] = cons;
clo38261[8] = lst;
void* f3010430228 = encode_clo(clo38261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3010430228;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30384 = encode_clo(alloc_clo(lam30384_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30387 = arg_buffer[1];
//reading env and args
void* kont30099 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar38262 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38262, "0", 10);
void* a2999830223 = encode_mpz(mpzvar38262);

//creating new closure instance
void** clo38264 = alloc_clo(lam30384_fptr, 10);

//setting env list
clo38264[1] = car;
clo38264[2] = n;
clo38264[3] = kont30099;
clo38264[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo38264[5] = take_u45helper;
clo38264[6] = _u45;
clo38264[7] = cons;
clo38264[8] = reverse;
clo38264[9] = lst;
clo38264[10] = cdr;
void* f3010530224 = encode_clo(clo38264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3010530224;
arg_buffer[3] = n;
arg_buffer[4] = a2999830223;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam30388_fptr() // lam30388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30389 = arg_buffer[1];
//reading env and args
void* a3000630238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env30389))[4];
//not do dummy comment
void* n = (decode_clo(env30389))[3];
//not do dummy comment
void* lst = (decode_clo(env30389))[2];
//not do dummy comment
void* kont30106 = (decode_clo(env30389))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30106;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3000630238;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30388 = encode_clo(alloc_clo(lam30388_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30390 = arg_buffer[1];
//reading env and args
void* kont30106 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38266 = alloc_clo(lam30388_fptr, 4);

//setting env list
clo38266[1] = kont30106;
clo38266[2] = lst;
clo38266[3] = n;
clo38266[4] = take_u45helper;
void* f3010730237 = encode_clo(clo38266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3010730237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam30392_fptr() // lam30392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30393 = arg_buffer[1];
//reading env and args
void* a3001130246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30108 = (decode_clo(env30393))[3];
//not do dummy comment
void* _u43 = (decode_clo(env30393))[2];
//not do dummy comment
void* a3000930242 = (decode_clo(env30393))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont30108;
arg_buffer[3] = a3000930242;
arg_buffer[4] = a3001130246;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30392 = encode_clo(alloc_clo(lam30392_fptr, 0));

void* lam30394_fptr() // lam30394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30395 = arg_buffer[1];
//reading env and args
void* a3001030244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env30395))[4];
//not do dummy comment
void* kont30108 = (decode_clo(env30395))[3];
//not do dummy comment
void* _u43 = (decode_clo(env30395))[2];
//not do dummy comment
void* a3000930242 = (decode_clo(env30395))[1];

//creating new closure instance
void** clo38268 = alloc_clo(lam30392_fptr, 3);

//setting env list
clo38268[1] = a3000930242;
clo38268[2] = _u43;
clo38268[3] = kont30108;
void* f3010930245 = encode_clo(clo38268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3010930245;
arg_buffer[3] = a3001030244;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30394 = encode_clo(alloc_clo(lam30394_fptr, 0));

void* lam30397_fptr() // lam30397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30398 = arg_buffer[1];
//reading env and args
void* a3000730240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30398))[5];
//not do dummy comment
void* lst = (decode_clo(env30398))[4];
//not do dummy comment
void* length = (decode_clo(env30398))[3];
//not do dummy comment
void* kont30108 = (decode_clo(env30398))[2];
//not do dummy comment
void* _u43 = (decode_clo(env30398))[1];

//if-clause
bool if_guard38269 = is_true(a3000730240);
if(if_guard38269)
{
mpz_t* mpzvar38270 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38270, "0", 10);
void* x3000830241 = encode_mpz(mpzvar38270);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30108);
arg_buffer[2] = x3000830241;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30108))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar38271 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38271, "1", 10);
void* a3000930242 = encode_mpz(mpzvar38271);

//creating new closure instance
void** clo38273 = alloc_clo(lam30394_fptr, 4);

//setting env list
clo38273[1] = a3000930242;
clo38273[2] = _u43;
clo38273[3] = kont30108;
clo38273[4] = length;
void* f3011030243 = encode_clo(clo38273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3011030243;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30397 = encode_clo(alloc_clo(lam30397_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30399 = arg_buffer[1];
//reading env and args
void* kont30108 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo38275 = alloc_clo(lam30397_fptr, 5);

//setting env list
clo38275[1] = _u43;
clo38275[2] = kont30108;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo38275[3] = length;
clo38275[4] = lst;
clo38275[5] = cdr;
void* f3011130239 = encode_clo(clo38275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3011130239;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam30400_fptr() // lam30400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30401 = arg_buffer[1];
//reading env and args
void* x3001330250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30112 = (decode_clo(env30401))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30112);
arg_buffer[2] = x3001330250;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30112))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30400 = encode_clo(alloc_clo(lam30400_fptr, 0));

void* lam30402_fptr() // lam30402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30403 = arg_buffer[1];
//reading env and args
void* a3001730258 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3001530254 = (decode_clo(env30403))[3];
//not do dummy comment
void* kont30112 = (decode_clo(env30403))[2];
//not do dummy comment
void* cons = (decode_clo(env30403))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30112;
arg_buffer[3] = a3001530254;
arg_buffer[4] = a3001730258;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30402 = encode_clo(alloc_clo(lam30402_fptr, 0));

void* lam30404_fptr() // lam30404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30405 = arg_buffer[1];
//reading env and args
void* a3001630256 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env30405))[5];
//not do dummy comment
void* a3001530254 = (decode_clo(env30405))[4];
//not do dummy comment
void* kont30112 = (decode_clo(env30405))[3];
//not do dummy comment
void* proc = (decode_clo(env30405))[2];
//not do dummy comment
void* cons = (decode_clo(env30405))[1];

//creating new closure instance
void** clo38277 = alloc_clo(lam30402_fptr, 3);

//setting env list
clo38277[1] = cons;
clo38277[2] = kont30112;
clo38277[3] = a3001530254;
void* f3011430257 = encode_clo(clo38277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3011430257;
arg_buffer[3] = proc;
arg_buffer[4] = a3001630256;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30404 = encode_clo(alloc_clo(lam30404_fptr, 0));

void* lam30406_fptr() // lam30406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30407 = arg_buffer[1];
//reading env and args
void* a3001530254 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30407))[6];
//not do dummy comment
void* lst = (decode_clo(env30407))[5];
//not do dummy comment
void* map = (decode_clo(env30407))[4];
//not do dummy comment
void* kont30112 = (decode_clo(env30407))[3];
//not do dummy comment
void* proc = (decode_clo(env30407))[2];
//not do dummy comment
void* cons = (decode_clo(env30407))[1];

//creating new closure instance
void** clo38279 = alloc_clo(lam30404_fptr, 5);

//setting env list
clo38279[1] = cons;
clo38279[2] = proc;
clo38279[3] = kont30112;
clo38279[4] = a3001530254;
clo38279[5] = map;
void* f3011530255 = encode_clo(clo38279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3011530255;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30406 = encode_clo(alloc_clo(lam30406_fptr, 0));

void* lam30408_fptr() // lam30408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30409 = arg_buffer[1];
//reading env and args
void* a3001430252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30409))[6];
//not do dummy comment
void* lst = (decode_clo(env30409))[5];
//not do dummy comment
void* map = (decode_clo(env30409))[4];
//not do dummy comment
void* kont30112 = (decode_clo(env30409))[3];
//not do dummy comment
void* proc = (decode_clo(env30409))[2];
//not do dummy comment
void* cons = (decode_clo(env30409))[1];

//creating new closure instance
void** clo38281 = alloc_clo(lam30406_fptr, 6);

//setting env list
clo38281[1] = cons;
clo38281[2] = proc;
clo38281[3] = kont30112;
clo38281[4] = map;
clo38281[5] = lst;
clo38281[6] = cdr;
void* f3011630253 = encode_clo(clo38281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3011630253;
arg_buffer[3] = a3001430252;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30408 = encode_clo(alloc_clo(lam30408_fptr, 0));

void* lam30410_fptr() // lam30410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30411 = arg_buffer[1];
//reading env and args
void* a3001230248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30411))[8];
//not do dummy comment
void* map = (decode_clo(env30411))[7];
//not do dummy comment
void* kont30112 = (decode_clo(env30411))[6];
//not do dummy comment
void* proc = (decode_clo(env30411))[5];
//not do dummy comment
void* car = (decode_clo(env30411))[4];
//not do dummy comment
void* cons = (decode_clo(env30411))[3];
//not do dummy comment
void* list = (decode_clo(env30411))[2];
//not do dummy comment
void* cdr = (decode_clo(env30411))[1];

//if-clause
bool if_guard38282 = is_true(a3001230248);
if(if_guard38282)
{

//creating new closure instance
void** clo38284 = alloc_clo(lam30400_fptr, 1);

//setting env list
clo38284[1] = kont30112;
void* f3011330249 = encode_clo(clo38284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3011330249;
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
void** clo38286 = alloc_clo(lam30408_fptr, 6);

//setting env list
clo38286[1] = cons;
clo38286[2] = proc;
clo38286[3] = kont30112;
clo38286[4] = map;
clo38286[5] = lst;
clo38286[6] = cdr;
void* f3011730251 = encode_clo(clo38286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3011730251;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30410 = encode_clo(alloc_clo(lam30410_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30412 = arg_buffer[1];
//reading env and args
void* kont30112 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38288 = alloc_clo(lam30410_fptr, 8);

//setting env list
clo38288[1] = cdr;
clo38288[2] = list;
clo38288[3] = cons;
clo38288[4] = car;
clo38288[5] = proc;
clo38288[6] = kont30112;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo38288[7] = map;
clo38288[8] = lst;
void* f3011830247 = encode_clo(clo38288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3011830247;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam30413_fptr() // lam30413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30414 = arg_buffer[1];
//reading env and args
void* x3001930262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30119 = (decode_clo(env30414))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30119);
arg_buffer[2] = x3001930262;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30119))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30413 = encode_clo(alloc_clo(lam30413_fptr, 0));

void* lam30415_fptr() // lam30415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30416 = arg_buffer[1];
//reading env and args
void* a3002430272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30119 = (decode_clo(env30416))[3];
//not do dummy comment
void* a3002230268 = (decode_clo(env30416))[2];
//not do dummy comment
void* cons = (decode_clo(env30416))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30119;
arg_buffer[3] = a3002230268;
arg_buffer[4] = a3002430272;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30415 = encode_clo(alloc_clo(lam30415_fptr, 0));

void* lam30417_fptr() // lam30417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30418 = arg_buffer[1];
//reading env and args
void* a3002330270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30119 = (decode_clo(env30418))[5];
//not do dummy comment
void* a3002230268 = (decode_clo(env30418))[4];
//not do dummy comment
void* op = (decode_clo(env30418))[3];
//not do dummy comment
void* filter = (decode_clo(env30418))[2];
//not do dummy comment
void* cons = (decode_clo(env30418))[1];

//creating new closure instance
void** clo38290 = alloc_clo(lam30415_fptr, 3);

//setting env list
clo38290[1] = cons;
clo38290[2] = a3002230268;
clo38290[3] = kont30119;
void* f3012130271 = encode_clo(clo38290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3012130271;
arg_buffer[3] = op;
arg_buffer[4] = a3002330270;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30417 = encode_clo(alloc_clo(lam30417_fptr, 0));

void* lam30419_fptr() // lam30419 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30420 = arg_buffer[1];
//reading env and args
void* a3002230268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30420))[6];
//not do dummy comment
void* kont30119 = (decode_clo(env30420))[5];
//not do dummy comment
void* lst = (decode_clo(env30420))[4];
//not do dummy comment
void* op = (decode_clo(env30420))[3];
//not do dummy comment
void* filter = (decode_clo(env30420))[2];
//not do dummy comment
void* cons = (decode_clo(env30420))[1];

//creating new closure instance
void** clo38292 = alloc_clo(lam30417_fptr, 5);

//setting env list
clo38292[1] = cons;
clo38292[2] = filter;
clo38292[3] = op;
clo38292[4] = a3002230268;
clo38292[5] = kont30119;
void* f3012230269 = encode_clo(clo38292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3012230269;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30419 = encode_clo(alloc_clo(lam30419_fptr, 0));

void* lam30421_fptr() // lam30421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30422 = arg_buffer[1];
//reading env and args
void* a3002530274 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30119 = (decode_clo(env30422))[3];
//not do dummy comment
void* op = (decode_clo(env30422))[2];
//not do dummy comment
void* filter = (decode_clo(env30422))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont30119;
arg_buffer[3] = op;
arg_buffer[4] = a3002530274;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30421 = encode_clo(alloc_clo(lam30421_fptr, 0));

void* lam30423_fptr() // lam30423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30424 = arg_buffer[1];
//reading env and args
void* a3002130266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30424))[7];
//not do dummy comment
void* kont30119 = (decode_clo(env30424))[6];
//not do dummy comment
void* lst = (decode_clo(env30424))[5];
//not do dummy comment
void* op = (decode_clo(env30424))[4];
//not do dummy comment
void* cons = (decode_clo(env30424))[3];
//not do dummy comment
void* filter = (decode_clo(env30424))[2];
//not do dummy comment
void* car = (decode_clo(env30424))[1];

//if-clause
bool if_guard38293 = is_true(a3002130266);
if(if_guard38293)
{

//creating new closure instance
void** clo38295 = alloc_clo(lam30419_fptr, 6);

//setting env list
clo38295[1] = cons;
clo38295[2] = filter;
clo38295[3] = op;
clo38295[4] = lst;
clo38295[5] = kont30119;
clo38295[6] = cdr;
void* f3012330267 = encode_clo(clo38295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3012330267;
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
void** clo38297 = alloc_clo(lam30421_fptr, 3);

//setting env list
clo38297[1] = filter;
clo38297[2] = op;
clo38297[3] = kont30119;
void* f3012430273 = encode_clo(clo38297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3012430273;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30423 = encode_clo(alloc_clo(lam30423_fptr, 0));

void* lam30425_fptr() // lam30425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30426 = arg_buffer[1];
//reading env and args
void* a3002030264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30426))[7];
//not do dummy comment
void* kont30119 = (decode_clo(env30426))[6];
//not do dummy comment
void* lst = (decode_clo(env30426))[5];
//not do dummy comment
void* op = (decode_clo(env30426))[4];
//not do dummy comment
void* cons = (decode_clo(env30426))[3];
//not do dummy comment
void* filter = (decode_clo(env30426))[2];
//not do dummy comment
void* car = (decode_clo(env30426))[1];

//creating new closure instance
void** clo38299 = alloc_clo(lam30423_fptr, 7);

//setting env list
clo38299[1] = car;
clo38299[2] = filter;
clo38299[3] = cons;
clo38299[4] = op;
clo38299[5] = lst;
clo38299[6] = kont30119;
clo38299[7] = cdr;
void* f3012530265 = encode_clo(clo38299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3012530265;
arg_buffer[3] = a3002030264;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30425 = encode_clo(alloc_clo(lam30425_fptr, 0));

void* lam30427_fptr() // lam30427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30428 = arg_buffer[1];
//reading env and args
void* a3001830260 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30119 = (decode_clo(env30428))[8];
//not do dummy comment
void* lst = (decode_clo(env30428))[7];
//not do dummy comment
void* op = (decode_clo(env30428))[6];
//not do dummy comment
void* cons = (decode_clo(env30428))[5];
//not do dummy comment
void* list = (decode_clo(env30428))[4];
//not do dummy comment
void* cdr = (decode_clo(env30428))[3];
//not do dummy comment
void* filter = (decode_clo(env30428))[2];
//not do dummy comment
void* car = (decode_clo(env30428))[1];

//if-clause
bool if_guard38300 = is_true(a3001830260);
if(if_guard38300)
{

//creating new closure instance
void** clo38302 = alloc_clo(lam30413_fptr, 1);

//setting env list
clo38302[1] = kont30119;
void* f3012030261 = encode_clo(clo38302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3012030261;
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
void** clo38304 = alloc_clo(lam30425_fptr, 7);

//setting env list
clo38304[1] = car;
clo38304[2] = filter;
clo38304[3] = cons;
clo38304[4] = op;
clo38304[5] = lst;
clo38304[6] = kont30119;
clo38304[7] = cdr;
void* f3012630263 = encode_clo(clo38304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3012630263;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30427 = encode_clo(alloc_clo(lam30427_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30429 = arg_buffer[1];
//reading env and args
void* kont30119 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38306 = alloc_clo(lam30427_fptr, 8);

//setting env list
clo38306[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo38306[2] = filter;
clo38306[3] = cdr;
clo38306[4] = list;
clo38306[5] = cons;
clo38306[6] = op;
clo38306[7] = lst;
clo38306[8] = kont30119;
void* f3012730259 = encode_clo(clo38306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3012730259;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam30430_fptr() // lam30430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30431 = arg_buffer[1];
//reading env and args
void* a3003030282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3002830279 = (decode_clo(env30431))[3];
//not do dummy comment
void* drop = (decode_clo(env30431))[2];
//not do dummy comment
void* kont30128 = (decode_clo(env30431))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont30128;
arg_buffer[3] = a3002830279;
arg_buffer[4] = a3003030282;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30430 = encode_clo(alloc_clo(lam30430_fptr, 0));

void* lam30433_fptr() // lam30433 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30434 = arg_buffer[1];
//reading env and args
void* a3002830279 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env30434))[4];
//not do dummy comment
void* kont30128 = (decode_clo(env30434))[3];
//not do dummy comment
void* n = (decode_clo(env30434))[2];
//not do dummy comment
void* _u45 = (decode_clo(env30434))[1];
mpz_t* mpzvar38307 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38307, "1", 10);
void* a3002930280 = encode_mpz(mpzvar38307);

//creating new closure instance
void** clo38309 = alloc_clo(lam30430_fptr, 3);

//setting env list
clo38309[1] = kont30128;
clo38309[2] = drop;
clo38309[3] = a3002830279;
void* f3012930281 = encode_clo(clo38309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3012930281;
arg_buffer[3] = n;
arg_buffer[4] = a3002930280;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30433 = encode_clo(alloc_clo(lam30433_fptr, 0));

void* lam30435_fptr() // lam30435 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30436 = arg_buffer[1];
//reading env and args
void* a3002730277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30436))[6];
//not do dummy comment
void* kont30128 = (decode_clo(env30436))[5];
//not do dummy comment
void* n = (decode_clo(env30436))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30436))[3];
//not do dummy comment
void* lst = (decode_clo(env30436))[2];
//not do dummy comment
void* drop = (decode_clo(env30436))[1];

//if-clause
bool if_guard38310 = is_true(a3002730277);
if(if_guard38310)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30128);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30128))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38312 = alloc_clo(lam30433_fptr, 4);

//setting env list
clo38312[1] = _u45;
clo38312[2] = n;
clo38312[3] = kont30128;
clo38312[4] = drop;
void* f3013030278 = encode_clo(clo38312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3013030278;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30435 = encode_clo(alloc_clo(lam30435_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30438 = arg_buffer[1];
//reading env and args
void* kont30128 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar38313 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38313, "0", 10);
void* a3002630275 = encode_mpz(mpzvar38313);

//creating new closure instance
void** clo38315 = alloc_clo(lam30435_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo38315[1] = drop;
clo38315[2] = lst;
clo38315[3] = _u45;
clo38315[4] = n;
clo38315[5] = kont30128;
clo38315[6] = cdr;
void* f3013130276 = encode_clo(clo38315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3013130276;
arg_buffer[3] = n;
arg_buffer[4] = a3002630275;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam30439_fptr() // lam30439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30440 = arg_buffer[1];
//reading env and args
void* a3003430290 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3003230286 = (decode_clo(env30440))[3];
//not do dummy comment
void* proc = (decode_clo(env30440))[2];
//not do dummy comment
void* kont30132 = (decode_clo(env30440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont30132;
arg_buffer[3] = a3003230286;
arg_buffer[4] = a3003430290;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30439 = encode_clo(alloc_clo(lam30439_fptr, 0));

void* lam30441_fptr() // lam30441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30442 = arg_buffer[1];
//reading env and args
void* a3003330288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env30442))[5];
//not do dummy comment
void* a3003230286 = (decode_clo(env30442))[4];
//not do dummy comment
void* kont30132 = (decode_clo(env30442))[3];
//not do dummy comment
void* proc = (decode_clo(env30442))[2];
//not do dummy comment
void* acc = (decode_clo(env30442))[1];

//creating new closure instance
void** clo38317 = alloc_clo(lam30439_fptr, 3);

//setting env list
clo38317[1] = kont30132;
clo38317[2] = proc;
clo38317[3] = a3003230286;
void* f3013330289 = encode_clo(clo38317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3013330289;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3003330288;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30441 = encode_clo(alloc_clo(lam30441_fptr, 0));

void* lam30443_fptr() // lam30443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30444 = arg_buffer[1];
//reading env and args
void* a3003230286 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30444))[6];
//not do dummy comment
void* kont30132 = (decode_clo(env30444))[5];
//not do dummy comment
void* foldr = (decode_clo(env30444))[4];
//not do dummy comment
void* lst = (decode_clo(env30444))[3];
//not do dummy comment
void* proc = (decode_clo(env30444))[2];
//not do dummy comment
void* acc = (decode_clo(env30444))[1];

//creating new closure instance
void** clo38319 = alloc_clo(lam30441_fptr, 5);

//setting env list
clo38319[1] = acc;
clo38319[2] = proc;
clo38319[3] = kont30132;
clo38319[4] = a3003230286;
clo38319[5] = foldr;
void* f3013430287 = encode_clo(clo38319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3013430287;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30443 = encode_clo(alloc_clo(lam30443_fptr, 0));

void* lam30445_fptr() // lam30445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30446 = arg_buffer[1];
//reading env and args
void* a3003130284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30446))[7];
//not do dummy comment
void* car = (decode_clo(env30446))[6];
//not do dummy comment
void* kont30132 = (decode_clo(env30446))[5];
//not do dummy comment
void* foldr = (decode_clo(env30446))[4];
//not do dummy comment
void* lst = (decode_clo(env30446))[3];
//not do dummy comment
void* proc = (decode_clo(env30446))[2];
//not do dummy comment
void* acc = (decode_clo(env30446))[1];

//if-clause
bool if_guard38320 = is_true(a3003130284);
if(if_guard38320)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30132);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30132))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38322 = alloc_clo(lam30443_fptr, 6);

//setting env list
clo38322[1] = acc;
clo38322[2] = proc;
clo38322[3] = lst;
clo38322[4] = foldr;
clo38322[5] = kont30132;
clo38322[6] = cdr;
void* f3013530285 = encode_clo(clo38322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3013530285;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30445 = encode_clo(alloc_clo(lam30445_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30447 = arg_buffer[1];
//reading env and args
void* kont30132 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo38324 = alloc_clo(lam30445_fptr, 7);

//setting env list
clo38324[1] = acc;
clo38324[2] = proc;
clo38324[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo38324[4] = foldr;
clo38324[5] = kont30132;
clo38324[6] = car;
clo38324[7] = cdr;
void* f3013630283 = encode_clo(clo38324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3013630283;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam30448_fptr() // lam30448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30449 = arg_buffer[1];
//reading env and args
void* a3003830298 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3003630294 = (decode_clo(env30449))[3];
//not do dummy comment
void* kont30137 = (decode_clo(env30449))[2];
//not do dummy comment
void* cons = (decode_clo(env30449))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30137;
arg_buffer[3] = a3003630294;
arg_buffer[4] = a3003830298;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30448 = encode_clo(alloc_clo(lam30448_fptr, 0));

void* lam30450_fptr() // lam30450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30451 = arg_buffer[1];
//reading env and args
void* a3003730296 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3003630294 = (decode_clo(env30451))[5];
//not do dummy comment
void* kont30137 = (decode_clo(env30451))[4];
//not do dummy comment
void* append = (decode_clo(env30451))[3];
//not do dummy comment
void* lst2 = (decode_clo(env30451))[2];
//not do dummy comment
void* cons = (decode_clo(env30451))[1];

//creating new closure instance
void** clo38326 = alloc_clo(lam30448_fptr, 3);

//setting env list
clo38326[1] = cons;
clo38326[2] = kont30137;
clo38326[3] = a3003630294;
void* f3013830297 = encode_clo(clo38326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3013830297;
arg_buffer[3] = a3003730296;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30450 = encode_clo(alloc_clo(lam30450_fptr, 0));

void* lam30452_fptr() // lam30452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30453 = arg_buffer[1];
//reading env and args
void* a3003630294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30453))[6];
//not do dummy comment
void* kont30137 = (decode_clo(env30453))[5];
//not do dummy comment
void* append = (decode_clo(env30453))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30453))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30453))[2];
//not do dummy comment
void* cons = (decode_clo(env30453))[1];

//creating new closure instance
void** clo38328 = alloc_clo(lam30450_fptr, 5);

//setting env list
clo38328[1] = cons;
clo38328[2] = lst2;
clo38328[3] = append;
clo38328[4] = kont30137;
clo38328[5] = a3003630294;
void* f3013930295 = encode_clo(clo38328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3013930295;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30452 = encode_clo(alloc_clo(lam30452_fptr, 0));

void* lam30454_fptr() // lam30454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30455 = arg_buffer[1];
//reading env and args
void* a3003530292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30455))[7];
//not do dummy comment
void* kont30137 = (decode_clo(env30455))[6];
//not do dummy comment
void* append = (decode_clo(env30455))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30455))[4];
//not do dummy comment
void* cons = (decode_clo(env30455))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30455))[2];
//not do dummy comment
void* car = (decode_clo(env30455))[1];

//if-clause
bool if_guard38329 = is_true(a3003530292);
if(if_guard38329)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30137);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30137))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38331 = alloc_clo(lam30452_fptr, 6);

//setting env list
clo38331[1] = cons;
clo38331[2] = lst1;
clo38331[3] = lst2;
clo38331[4] = append;
clo38331[5] = kont30137;
clo38331[6] = cdr;
void* f3014030293 = encode_clo(clo38331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3014030293;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30454 = encode_clo(alloc_clo(lam30454_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30456 = arg_buffer[1];
//reading env and args
void* kont30137 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38333 = alloc_clo(lam30454_fptr, 7);

//setting env list
clo38333[1] = car;
clo38333[2] = lst1;
clo38333[3] = cons;
clo38333[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo38333[5] = append;
clo38333[6] = kont30137;
clo38333[7] = cdr;
void* f3014130291 = encode_clo(clo38333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3014130291;
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
void* _30457 = arg_buffer[1];
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

void* kont3014230299 = prim_car(lst);
void* lst30300 = prim_cdr(lst);
void* x3003930301 = apply_prim_hash(lst30300);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3014230299);
arg_buffer[2] = x3003930301;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3014230299))[0]);
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
void* _30458 = arg_buffer[1];
//reading env and args
void* kont30144 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3004030302 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30144);
arg_buffer[2] = x3004030302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30144))[0]);
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
void* _30459 = arg_buffer[1];
//reading env and args
void* kont30145 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3004130303 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30145);
arg_buffer[2] = x3004130303;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30145))[0]);
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
void* _30460 = arg_buffer[1];
//reading env and args
void* kont30146 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3004230304 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30146);
arg_buffer[2] = x3004230304;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30146))[0]);
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
void* _30461 = arg_buffer[1];
//reading env and args
void* kont30147 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3004330305 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30147);
arg_buffer[2] = x3004330305;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30147))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_u45foldl_fptr() // call-foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30463 = arg_buffer[1];
//reading env and args
void* kont30148 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar38334 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38334, "0", 10);
void* a3004430306 = encode_mpz(mpzvar38334);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont30148;
arg_buffer[3] = _u43;
arg_buffer[4] = a3004430306;
arg_buffer[5] = lst;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call_u45foldl = encode_clo(alloc_clo(call_u45foldl_fptr, 0));

void* lam30464_fptr() // lam30464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30465 = arg_buffer[1];
//reading env and args
void* a3005030313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* call_u45foldl = (decode_clo(env30465))[2];
//not do dummy comment
void* kont30149 = (decode_clo(env30465))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call_u45foldl);
arg_buffer[2] = kont30149;
arg_buffer[3] = a3005030313;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30464 = encode_clo(alloc_clo(lam30464_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30471 = arg_buffer[1];
//reading env and args
void* kont30149 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar38335 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38335, "1", 10);
void* a3004530307 = encode_mpz(mpzvar38335);
mpz_t* mpzvar38336 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38336, "2", 10);
void* a3004630308 = encode_mpz(mpzvar38336);
mpz_t* mpzvar38337 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38337, "3", 10);
void* a3004730309 = encode_mpz(mpzvar38337);
mpz_t* mpzvar38338 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38338, "4", 10);
void* a3004830310 = encode_mpz(mpzvar38338);
mpz_t* mpzvar38339 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38339, "10", 10);
void* a3004930311 = encode_mpz(mpzvar38339);

//creating new closure instance
void** clo38341 = alloc_clo(lam30464_fptr, 2);

//setting env list
clo38341[1] = kont30149;
clo38341[2] = call_u45foldl;
void* f3015030312 = encode_clo(clo38341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3015030312;
arg_buffer[3] = a3004530307;
arg_buffer[4] = a3004630308;
arg_buffer[5] = a3004730309;
arg_buffer[6] = a3004830310;
arg_buffer[7] = a3004930311;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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

