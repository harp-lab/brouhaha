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
void* _54314 = arg_buffer[1];
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

void* kont5405654156 = prim_car(lst);
void* lst54157 = prim_cdr(lst);
void* x5397154158 = apply_prim__u43(lst54157);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5405654156);
arg_buffer[2] = x5397154158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5405654156))[0]);
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
void* _54315 = arg_buffer[1];
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

void* kont5405854159 = prim_car(lst);
void* lst54160 = prim_cdr(lst);
void* x5397254161 = apply_prim__u45(lst54160);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5405854159);
arg_buffer[2] = x5397254161;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5405854159))[0]);
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
void* _54316 = arg_buffer[1];
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

void* kont5406054162 = prim_car(lst);
void* lst54163 = prim_cdr(lst);
void* x5397354164 = apply_prim__u42(lst54163);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5406054162);
arg_buffer[2] = x5397354164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5406054162))[0]);
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
void* _54317 = arg_buffer[1];
//reading env and args
void* kont54062 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5397454165 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54062);
arg_buffer[2] = x5397454165;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54062))[0]);
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
void* _54318 = arg_buffer[1];
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

void* kont5406354166 = prim_car(lst);
void* lst54167 = prim_cdr(lst);
void* x5397554168 = apply_prim__u47(lst54167);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5406354166);
arg_buffer[2] = x5397554168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5406354166))[0]);
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
void* _54319 = arg_buffer[1];
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

void* kont5406554169 = prim_car(lst);
void* lst54170 = prim_cdr(lst);
void* x5397654171 = apply_prim__u61(lst54170);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5406554169);
arg_buffer[2] = x5397654171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5406554169))[0]);
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
void* _54320 = arg_buffer[1];
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

void* kont5406754172 = prim_car(lst);
void* lst54173 = prim_cdr(lst);
void* x5397754174 = apply_prim__u62(lst54173);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5406754172);
arg_buffer[2] = x5397754174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5406754172))[0]);
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
void* _54321 = arg_buffer[1];
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

void* kont5406954175 = prim_car(lst);
void* lst54176 = prim_cdr(lst);
void* x5397854177 = apply_prim__u60(lst54176);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5406954175);
arg_buffer[2] = x5397854177;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5406954175))[0]);
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
void* _54322 = arg_buffer[1];
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

void* kont5407154178 = prim_car(lst);
void* lst54179 = prim_cdr(lst);
void* x5397954180 = apply_prim__u60_u61(lst54179);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5407154178);
arg_buffer[2] = x5397954180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5407154178))[0]);
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
void* _54323 = arg_buffer[1];
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

void* kont5407354181 = prim_car(lst);
void* lst54182 = prim_cdr(lst);
void* x5398054183 = apply_prim__u62_u61(lst54182);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5407354181);
arg_buffer[2] = x5398054183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5407354181))[0]);
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
void* _54324 = arg_buffer[1];
//reading env and args
void* kont54075 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5398154184 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54075);
arg_buffer[2] = x5398154184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54075))[0]);
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
void* _54325 = arg_buffer[1];
//reading env and args
void* kont54076 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5398254185 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54076);
arg_buffer[2] = x5398254185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54076))[0]);
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
void* _54326 = arg_buffer[1];
//reading env and args
void* kont54077 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5398354186 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54077);
arg_buffer[2] = x5398354186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54077))[0]);
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
void* _54327 = arg_buffer[1];
//reading env and args
void* kont54078 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5398454187 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54078);
arg_buffer[2] = x5398454187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54078))[0]);
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
void* _54328 = arg_buffer[1];
//reading env and args
void* kont54079 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5398554188 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54079);
arg_buffer[2] = x5398554188;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54079))[0]);
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
void* _54329 = arg_buffer[1];
//reading env and args
void* kont54080 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5398654189 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54080);
arg_buffer[2] = x5398654189;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54080))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam54330_fptr() // lam54330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54331 = arg_buffer[1];
//reading env and args
void* a5398954193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5398754190 = (decode_clo(env54331))[3];
//not do dummy comment
void* kont54081 = (decode_clo(env54331))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env54331))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54081;
arg_buffer[3] = a5398754190;
arg_buffer[4] = a5398954193;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54330 = encode_clo(alloc_clo(lam54330_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54334 = arg_buffer[1];
//reading env and args
void* kont54081 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54467 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54467, "0", 10);
void* a5398754190 = encode_mpz(mpzvar54467);
mpz_t* mpzvar54468 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54468, "2", 10);
void* a5398854191 = encode_mpz(mpzvar54468);

//creating new closure instance
void** clo54470 = alloc_clo(lam54330_fptr, 3);

//setting env list
clo54470[1] = equal_u63;
clo54470[2] = kont54081;
clo54470[3] = a5398754190;
void* f5408254192 = encode_clo(clo54470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5408254192;
arg_buffer[3] = x;
arg_buffer[4] = a5398854191;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam54335_fptr() // lam54335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54336 = arg_buffer[1];
//reading env and args
void* a5399254197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env54336))[3];
//not do dummy comment
void* a5399054194 = (decode_clo(env54336))[2];
//not do dummy comment
void* kont54083 = (decode_clo(env54336))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54083;
arg_buffer[3] = a5399054194;
arg_buffer[4] = a5399254197;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54335 = encode_clo(alloc_clo(lam54335_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54339 = arg_buffer[1];
//reading env and args
void* kont54083 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54471 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54471, "1", 10);
void* a5399054194 = encode_mpz(mpzvar54471);
mpz_t* mpzvar54472 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54472, "2", 10);
void* a5399154195 = encode_mpz(mpzvar54472);

//creating new closure instance
void** clo54474 = alloc_clo(lam54335_fptr, 3);

//setting env list
clo54474[1] = kont54083;
clo54474[2] = a5399054194;
clo54474[3] = equal_u63;
void* f5408454196 = encode_clo(clo54474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5408454196;
arg_buffer[3] = x;
arg_buffer[4] = a5399154195;
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
void* _54340 = arg_buffer[1];
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

void* kont5408554198 = prim_car(x);
void* x54199 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5408554198);
arg_buffer[2] = x54199;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5408554198))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam54343_fptr() // lam54343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54344 = arg_buffer[1];
//reading env and args
void* a5399854209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env54344))[3];
//not do dummy comment
void* kont54087 = (decode_clo(env54344))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54344))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont54087;
arg_buffer[3] = x;
arg_buffer[4] = a5399854209;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54343 = encode_clo(alloc_clo(lam54343_fptr, 0));

void* lam54345_fptr() // lam54345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54346 = arg_buffer[1];
//reading env and args
void* a5399654206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54346))[5];
//not do dummy comment
void* lst = (decode_clo(env54346))[4];
//not do dummy comment
void* x = (decode_clo(env54346))[3];
//not do dummy comment
void* kont54087 = (decode_clo(env54346))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54346))[1];

//if-clause
bool if_guard54475 = is_true(a5399654206);
if(if_guard54475)
{
void* x5399754207 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54087);
arg_buffer[2] = x5399754207;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54087))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54477 = alloc_clo(lam54343_fptr, 3);

//setting env list
clo54477[1] = member_u63;
clo54477[2] = kont54087;
clo54477[3] = x;
void* f5408854208 = encode_clo(clo54477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5408854208;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54345 = encode_clo(alloc_clo(lam54345_fptr, 0));

void* lam54347_fptr() // lam54347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54348 = arg_buffer[1];
//reading env and args
void* a5399554204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54348))[6];
//not do dummy comment
void* lst = (decode_clo(env54348))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env54348))[4];
//not do dummy comment
void* x = (decode_clo(env54348))[3];
//not do dummy comment
void* kont54087 = (decode_clo(env54348))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54348))[1];

//creating new closure instance
void** clo54479 = alloc_clo(lam54345_fptr, 5);

//setting env list
clo54479[1] = member_u63;
clo54479[2] = kont54087;
clo54479[3] = x;
clo54479[4] = lst;
clo54479[5] = cdr;
void* f5408954205 = encode_clo(clo54479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5408954205;
arg_buffer[3] = a5399554204;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54347 = encode_clo(alloc_clo(lam54347_fptr, 0));

void* lam54349_fptr() // lam54349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54350 = arg_buffer[1];
//reading env and args
void* a5399354201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54350))[7];
//not do dummy comment
void* lst = (decode_clo(env54350))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env54350))[5];
//not do dummy comment
void* x = (decode_clo(env54350))[4];
//not do dummy comment
void* car = (decode_clo(env54350))[3];
//not do dummy comment
void* kont54087 = (decode_clo(env54350))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54350))[1];

//if-clause
bool if_guard54480 = is_true(a5399354201);
if(if_guard54480)
{
void* x5399454202 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54087);
arg_buffer[2] = x5399454202;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54087))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54482 = alloc_clo(lam54347_fptr, 6);

//setting env list
clo54482[1] = member_u63;
clo54482[2] = kont54087;
clo54482[3] = x;
clo54482[4] = equal_u63;
clo54482[5] = lst;
clo54482[6] = cdr;
void* f5409054203 = encode_clo(clo54482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5409054203;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54349 = encode_clo(alloc_clo(lam54349_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54351 = arg_buffer[1];
//reading env and args
void* kont54087 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54484 = alloc_clo(lam54349_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo54484[1] = member_u63;
clo54484[2] = kont54087;
clo54484[3] = car;
clo54484[4] = x;
clo54484[5] = equal_u63;
clo54484[6] = lst;
clo54484[7] = cdr;
void* f5409154200 = encode_clo(clo54484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5409154200;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam54352_fptr() // lam54352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54353 = arg_buffer[1];
//reading env and args
void* a5400254217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54092 = (decode_clo(env54353))[4];
//not do dummy comment
void* fun = (decode_clo(env54353))[3];
//not do dummy comment
void* a5400154215 = (decode_clo(env54353))[2];
//not do dummy comment
void* foldl = (decode_clo(env54353))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont54092;
arg_buffer[3] = fun;
arg_buffer[4] = a5400154215;
arg_buffer[5] = a5400254217;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54352 = encode_clo(alloc_clo(lam54352_fptr, 0));

void* lam54354_fptr() // lam54354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54355 = arg_buffer[1];
//reading env and args
void* a5400154215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54355))[5];
//not do dummy comment
void* kont54092 = (decode_clo(env54355))[4];
//not do dummy comment
void* lst = (decode_clo(env54355))[3];
//not do dummy comment
void* fun = (decode_clo(env54355))[2];
//not do dummy comment
void* foldl = (decode_clo(env54355))[1];

//creating new closure instance
void** clo54486 = alloc_clo(lam54352_fptr, 4);

//setting env list
clo54486[1] = foldl;
clo54486[2] = a5400154215;
clo54486[3] = fun;
clo54486[4] = kont54092;
void* f5409354216 = encode_clo(clo54486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5409354216;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54354 = encode_clo(alloc_clo(lam54354_fptr, 0));

void* lam54356_fptr() // lam54356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54357 = arg_buffer[1];
//reading env and args
void* a5400054213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54357))[6];
//not do dummy comment
void* kont54092 = (decode_clo(env54357))[5];
//not do dummy comment
void* lst = (decode_clo(env54357))[4];
//not do dummy comment
void* fun = (decode_clo(env54357))[3];
//not do dummy comment
void* acc = (decode_clo(env54357))[2];
//not do dummy comment
void* foldl = (decode_clo(env54357))[1];

//creating new closure instance
void** clo54488 = alloc_clo(lam54354_fptr, 5);

//setting env list
clo54488[1] = foldl;
clo54488[2] = fun;
clo54488[3] = lst;
clo54488[4] = kont54092;
clo54488[5] = cdr;
void* f5409454214 = encode_clo(clo54488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5409454214;
arg_buffer[3] = a5400054213;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54356 = encode_clo(alloc_clo(lam54356_fptr, 0));

void* lam54358_fptr() // lam54358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54359 = arg_buffer[1];
//reading env and args
void* a5399954211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54359))[7];
//not do dummy comment
void* kont54092 = (decode_clo(env54359))[6];
//not do dummy comment
void* lst = (decode_clo(env54359))[5];
//not do dummy comment
void* fun = (decode_clo(env54359))[4];
//not do dummy comment
void* acc = (decode_clo(env54359))[3];
//not do dummy comment
void* car = (decode_clo(env54359))[2];
//not do dummy comment
void* foldl = (decode_clo(env54359))[1];

//if-clause
bool if_guard54489 = is_true(a5399954211);
if(if_guard54489)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54092);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54092))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54491 = alloc_clo(lam54356_fptr, 6);

//setting env list
clo54491[1] = foldl;
clo54491[2] = acc;
clo54491[3] = fun;
clo54491[4] = lst;
clo54491[5] = kont54092;
clo54491[6] = cdr;
void* f5409554212 = encode_clo(clo54491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5409554212;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54358 = encode_clo(alloc_clo(lam54358_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54360 = arg_buffer[1];
//reading env and args
void* kont54092 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54493 = alloc_clo(lam54358_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo54493[1] = foldl;
clo54493[2] = car;
clo54493[3] = acc;
clo54493[4] = fun;
clo54493[5] = lst;
clo54493[6] = kont54092;
clo54493[7] = cdr;
void* f5409654210 = encode_clo(clo54493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5409654210;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam54361_fptr() // lam54361 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54362 = arg_buffer[1];
//reading env and args
void* a5400654225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5400454221 = (decode_clo(env54362))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54362))[2];
//not do dummy comment
void* kont54097 = (decode_clo(env54362))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54097;
arg_buffer[3] = a5400454221;
arg_buffer[4] = a5400654225;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54361 = encode_clo(alloc_clo(lam54361_fptr, 0));

void* lam54363_fptr() // lam54363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54364 = arg_buffer[1];
//reading env and args
void* a5400554223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5400454221 = (decode_clo(env54364))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54364))[4];
//not do dummy comment
void* kont54097 = (decode_clo(env54364))[3];
//not do dummy comment
void* lst2 = (decode_clo(env54364))[2];
//not do dummy comment
void* cons = (decode_clo(env54364))[1];

//creating new closure instance
void** clo54495 = alloc_clo(lam54361_fptr, 3);

//setting env list
clo54495[1] = kont54097;
clo54495[2] = reverse_u45helper;
clo54495[3] = a5400454221;
void* f5409854224 = encode_clo(clo54495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5409854224;
arg_buffer[3] = a5400554223;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54363 = encode_clo(alloc_clo(lam54363_fptr, 0));

void* lam54365_fptr() // lam54365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54366 = arg_buffer[1];
//reading env and args
void* a5400454221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54366))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54366))[5];
//not do dummy comment
void* kont54097 = (decode_clo(env54366))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54366))[3];
//not do dummy comment
void* car = (decode_clo(env54366))[2];
//not do dummy comment
void* cons = (decode_clo(env54366))[1];

//creating new closure instance
void** clo54497 = alloc_clo(lam54363_fptr, 5);

//setting env list
clo54497[1] = cons;
clo54497[2] = lst2;
clo54497[3] = kont54097;
clo54497[4] = reverse_u45helper;
clo54497[5] = a5400454221;
void* f5409954222 = encode_clo(clo54497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5409954222;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54365 = encode_clo(alloc_clo(lam54365_fptr, 0));

void* lam54367_fptr() // lam54367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54368 = arg_buffer[1];
//reading env and args
void* a5400354219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54368))[7];
//not do dummy comment
void* lst = (decode_clo(env54368))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54368))[5];
//not do dummy comment
void* kont54097 = (decode_clo(env54368))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54368))[3];
//not do dummy comment
void* car = (decode_clo(env54368))[2];
//not do dummy comment
void* cons = (decode_clo(env54368))[1];

//if-clause
bool if_guard54498 = is_true(a5400354219);
if(if_guard54498)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54097);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54097))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54500 = alloc_clo(lam54365_fptr, 6);

//setting env list
clo54500[1] = cons;
clo54500[2] = car;
clo54500[3] = lst2;
clo54500[4] = kont54097;
clo54500[5] = reverse_u45helper;
clo54500[6] = lst;
void* f5410054220 = encode_clo(clo54500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5410054220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54367 = encode_clo(alloc_clo(lam54367_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54369 = arg_buffer[1];
//reading env and args
void* kont54097 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54502 = alloc_clo(lam54367_fptr, 7);

//setting env list
clo54502[1] = cons;
clo54502[2] = car;
clo54502[3] = lst2;
clo54502[4] = kont54097;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo54502[5] = reverse_u45helper;
clo54502[6] = lst;
clo54502[7] = cdr;
void* f5410154218 = encode_clo(clo54502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5410154218;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam54370_fptr() // lam54370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54371 = arg_buffer[1];
//reading env and args
void* a5400754227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54371))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54371))[2];
//not do dummy comment
void* kont54102 = (decode_clo(env54371))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54102;
arg_buffer[3] = lst;
arg_buffer[4] = a5400754227;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54370 = encode_clo(alloc_clo(lam54370_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54372 = arg_buffer[1];
//reading env and args
void* kont54102 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54504 = alloc_clo(lam54370_fptr, 3);

//setting env list
clo54504[1] = kont54102;
clo54504[2] = reverse_u45helper;
clo54504[3] = lst;
void* f5410354226 = encode_clo(clo54504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5410354226;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam54373_fptr() // lam54373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54374 = arg_buffer[1];
//reading env and args
void* x5401054232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54104 = (decode_clo(env54374))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54104);
arg_buffer[2] = x5401054232;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54104))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54373 = encode_clo(alloc_clo(lam54373_fptr, 0));

void* lam54375_fptr() // lam54375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54376 = arg_buffer[1];
//reading env and args
void* a5401554241 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5401154234 = (decode_clo(env54376))[4];
//not do dummy comment
void* a5401354237 = (decode_clo(env54376))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54376))[2];
//not do dummy comment
void* kont54104 = (decode_clo(env54376))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54104;
arg_buffer[3] = a5401154234;
arg_buffer[4] = a5401354237;
arg_buffer[5] = a5401554241;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54375 = encode_clo(alloc_clo(lam54375_fptr, 0));

void* lam54377_fptr() // lam54377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54378 = arg_buffer[1];
//reading env and args
void* a5401454239 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5401154234 = (decode_clo(env54378))[6];
//not do dummy comment
void* a5401354237 = (decode_clo(env54378))[5];
//not do dummy comment
void* cons = (decode_clo(env54378))[4];
//not do dummy comment
void* kont54104 = (decode_clo(env54378))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54378))[2];
//not do dummy comment
void* lst2 = (decode_clo(env54378))[1];

//creating new closure instance
void** clo54506 = alloc_clo(lam54375_fptr, 4);

//setting env list
clo54506[1] = kont54104;
clo54506[2] = take_u45helper;
clo54506[3] = a5401354237;
clo54506[4] = a5401154234;
void* f5410654240 = encode_clo(clo54506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5410654240;
arg_buffer[3] = a5401454239;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54377 = encode_clo(alloc_clo(lam54377_fptr, 0));

void* lam54379_fptr() // lam54379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54380 = arg_buffer[1];
//reading env and args
void* a5401354237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5401154234 = (decode_clo(env54380))[7];
//not do dummy comment
void* lst = (decode_clo(env54380))[6];
//not do dummy comment
void* car = (decode_clo(env54380))[5];
//not do dummy comment
void* cons = (decode_clo(env54380))[4];
//not do dummy comment
void* kont54104 = (decode_clo(env54380))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54380))[2];
//not do dummy comment
void* lst2 = (decode_clo(env54380))[1];

//creating new closure instance
void** clo54508 = alloc_clo(lam54377_fptr, 6);

//setting env list
clo54508[1] = lst2;
clo54508[2] = take_u45helper;
clo54508[3] = kont54104;
clo54508[4] = cons;
clo54508[5] = a5401354237;
clo54508[6] = a5401154234;
void* f5410754238 = encode_clo(clo54508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5410754238;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54379 = encode_clo(alloc_clo(lam54379_fptr, 0));

void* lam54382_fptr() // lam54382 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54383 = arg_buffer[1];
//reading env and args
void* a5401154234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54383))[8];
//not do dummy comment
void* cons = (decode_clo(env54383))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env54383))[6];
//not do dummy comment
void* lst2 = (decode_clo(env54383))[5];
//not do dummy comment
void* n = (decode_clo(env54383))[4];
//not do dummy comment
void* car = (decode_clo(env54383))[3];
//not do dummy comment
void* kont54104 = (decode_clo(env54383))[2];
//not do dummy comment
void* _u45 = (decode_clo(env54383))[1];
mpz_t* mpzvar54509 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54509, "1", 10);
void* a5401254235 = encode_mpz(mpzvar54509);

//creating new closure instance
void** clo54511 = alloc_clo(lam54379_fptr, 7);

//setting env list
clo54511[1] = lst2;
clo54511[2] = take_u45helper;
clo54511[3] = kont54104;
clo54511[4] = cons;
clo54511[5] = car;
clo54511[6] = lst;
clo54511[7] = a5401154234;
void* f5410854236 = encode_clo(clo54511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5410854236;
arg_buffer[3] = n;
arg_buffer[4] = a5401254235;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54382 = encode_clo(alloc_clo(lam54382_fptr, 0));

void* lam54384_fptr() // lam54384 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54385 = arg_buffer[1];
//reading env and args
void* a5400954230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54385))[10];
//not do dummy comment
void* lst = (decode_clo(env54385))[9];
//not do dummy comment
void* reverse = (decode_clo(env54385))[8];
//not do dummy comment
void* cons = (decode_clo(env54385))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env54385))[6];
//not do dummy comment
void* lst2 = (decode_clo(env54385))[5];
//not do dummy comment
void* n = (decode_clo(env54385))[4];
//not do dummy comment
void* car = (decode_clo(env54385))[3];
//not do dummy comment
void* kont54104 = (decode_clo(env54385))[2];
//not do dummy comment
void* _u45 = (decode_clo(env54385))[1];

//if-clause
bool if_guard54512 = is_true(a5400954230);
if(if_guard54512)
{

//creating new closure instance
void** clo54514 = alloc_clo(lam54373_fptr, 1);

//setting env list
clo54514[1] = kont54104;
void* f5410554231 = encode_clo(clo54514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5410554231;
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
void** clo54516 = alloc_clo(lam54382_fptr, 8);

//setting env list
clo54516[1] = _u45;
clo54516[2] = kont54104;
clo54516[3] = car;
clo54516[4] = n;
clo54516[5] = lst2;
clo54516[6] = take_u45helper;
clo54516[7] = cons;
clo54516[8] = lst;
void* f5410954233 = encode_clo(clo54516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5410954233;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54384 = encode_clo(alloc_clo(lam54384_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54387 = arg_buffer[1];
//reading env and args
void* kont54104 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar54517 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54517, "0", 10);
void* a5400854228 = encode_mpz(mpzvar54517);

//creating new closure instance
void** clo54519 = alloc_clo(lam54384_fptr, 10);

//setting env list
clo54519[1] = _u45;
clo54519[2] = kont54104;
clo54519[3] = car;
clo54519[4] = n;
clo54519[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo54519[6] = take_u45helper;
clo54519[7] = cons;
clo54519[8] = reverse;
clo54519[9] = lst;
clo54519[10] = cdr;
void* f5411054229 = encode_clo(clo54519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5411054229;
arg_buffer[3] = n;
arg_buffer[4] = a5400854228;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam54388_fptr() // lam54388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54389 = arg_buffer[1];
//reading env and args
void* a5401654243 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54389))[4];
//not do dummy comment
void* kont54111 = (decode_clo(env54389))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54389))[2];
//not do dummy comment
void* n = (decode_clo(env54389))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54111;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5401654243;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54388 = encode_clo(alloc_clo(lam54388_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54390 = arg_buffer[1];
//reading env and args
void* kont54111 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54521 = alloc_clo(lam54388_fptr, 4);

//setting env list
clo54521[1] = n;
clo54521[2] = take_u45helper;
clo54521[3] = kont54111;
clo54521[4] = lst;
void* f5411254242 = encode_clo(clo54521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5411254242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam54392_fptr() // lam54392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54393 = arg_buffer[1];
//reading env and args
void* a5402154251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54113 = (decode_clo(env54393))[3];
//not do dummy comment
void* _u43 = (decode_clo(env54393))[2];
//not do dummy comment
void* a5401954247 = (decode_clo(env54393))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont54113;
arg_buffer[3] = a5401954247;
arg_buffer[4] = a5402154251;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54392 = encode_clo(alloc_clo(lam54392_fptr, 0));

void* lam54394_fptr() // lam54394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54395 = arg_buffer[1];
//reading env and args
void* a5402054249 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env54395))[4];
//not do dummy comment
void* kont54113 = (decode_clo(env54395))[3];
//not do dummy comment
void* _u43 = (decode_clo(env54395))[2];
//not do dummy comment
void* a5401954247 = (decode_clo(env54395))[1];

//creating new closure instance
void** clo54523 = alloc_clo(lam54392_fptr, 3);

//setting env list
clo54523[1] = a5401954247;
clo54523[2] = _u43;
clo54523[3] = kont54113;
void* f5411454250 = encode_clo(clo54523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5411454250;
arg_buffer[3] = a5402054249;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54394 = encode_clo(alloc_clo(lam54394_fptr, 0));

void* lam54397_fptr() // lam54397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54398 = arg_buffer[1];
//reading env and args
void* a5401754245 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54398))[5];
//not do dummy comment
void* lst = (decode_clo(env54398))[4];
//not do dummy comment
void* length = (decode_clo(env54398))[3];
//not do dummy comment
void* kont54113 = (decode_clo(env54398))[2];
//not do dummy comment
void* _u43 = (decode_clo(env54398))[1];

//if-clause
bool if_guard54524 = is_true(a5401754245);
if(if_guard54524)
{
mpz_t* mpzvar54525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54525, "0", 10);
void* x5401854246 = encode_mpz(mpzvar54525);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54113);
arg_buffer[2] = x5401854246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54113))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar54526 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54526, "1", 10);
void* a5401954247 = encode_mpz(mpzvar54526);

//creating new closure instance
void** clo54528 = alloc_clo(lam54394_fptr, 4);

//setting env list
clo54528[1] = a5401954247;
clo54528[2] = _u43;
clo54528[3] = kont54113;
clo54528[4] = length;
void* f5411554248 = encode_clo(clo54528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5411554248;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54397 = encode_clo(alloc_clo(lam54397_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54399 = arg_buffer[1];
//reading env and args
void* kont54113 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54530 = alloc_clo(lam54397_fptr, 5);

//setting env list
clo54530[1] = _u43;
clo54530[2] = kont54113;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo54530[3] = length;
clo54530[4] = lst;
clo54530[5] = cdr;
void* f5411654244 = encode_clo(clo54530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5411654244;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam54400_fptr() // lam54400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54401 = arg_buffer[1];
//reading env and args
void* x5402354255 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54117 = (decode_clo(env54401))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54117);
arg_buffer[2] = x5402354255;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54117))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54400 = encode_clo(alloc_clo(lam54400_fptr, 0));

void* lam54402_fptr() // lam54402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54403 = arg_buffer[1];
//reading env and args
void* a5402754263 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5402554259 = (decode_clo(env54403))[3];
//not do dummy comment
void* kont54117 = (decode_clo(env54403))[2];
//not do dummy comment
void* cons = (decode_clo(env54403))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54117;
arg_buffer[3] = a5402554259;
arg_buffer[4] = a5402754263;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54402 = encode_clo(alloc_clo(lam54402_fptr, 0));

void* lam54404_fptr() // lam54404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54405 = arg_buffer[1];
//reading env and args
void* a5402654261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env54405))[5];
//not do dummy comment
void* a5402554259 = (decode_clo(env54405))[4];
//not do dummy comment
void* proc = (decode_clo(env54405))[3];
//not do dummy comment
void* kont54117 = (decode_clo(env54405))[2];
//not do dummy comment
void* cons = (decode_clo(env54405))[1];

//creating new closure instance
void** clo54532 = alloc_clo(lam54402_fptr, 3);

//setting env list
clo54532[1] = cons;
clo54532[2] = kont54117;
clo54532[3] = a5402554259;
void* f5411954262 = encode_clo(clo54532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5411954262;
arg_buffer[3] = proc;
arg_buffer[4] = a5402654261;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54404 = encode_clo(alloc_clo(lam54404_fptr, 0));

void* lam54406_fptr() // lam54406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54407 = arg_buffer[1];
//reading env and args
void* a5402554259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54407))[6];
//not do dummy comment
void* lst = (decode_clo(env54407))[5];
//not do dummy comment
void* map = (decode_clo(env54407))[4];
//not do dummy comment
void* proc = (decode_clo(env54407))[3];
//not do dummy comment
void* kont54117 = (decode_clo(env54407))[2];
//not do dummy comment
void* cons = (decode_clo(env54407))[1];

//creating new closure instance
void** clo54534 = alloc_clo(lam54404_fptr, 5);

//setting env list
clo54534[1] = cons;
clo54534[2] = kont54117;
clo54534[3] = proc;
clo54534[4] = a5402554259;
clo54534[5] = map;
void* f5412054260 = encode_clo(clo54534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5412054260;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54406 = encode_clo(alloc_clo(lam54406_fptr, 0));

void* lam54408_fptr() // lam54408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54409 = arg_buffer[1];
//reading env and args
void* a5402454257 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54409))[6];
//not do dummy comment
void* lst = (decode_clo(env54409))[5];
//not do dummy comment
void* map = (decode_clo(env54409))[4];
//not do dummy comment
void* proc = (decode_clo(env54409))[3];
//not do dummy comment
void* kont54117 = (decode_clo(env54409))[2];
//not do dummy comment
void* cons = (decode_clo(env54409))[1];

//creating new closure instance
void** clo54536 = alloc_clo(lam54406_fptr, 6);

//setting env list
clo54536[1] = cons;
clo54536[2] = kont54117;
clo54536[3] = proc;
clo54536[4] = map;
clo54536[5] = lst;
clo54536[6] = cdr;
void* f5412154258 = encode_clo(clo54536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5412154258;
arg_buffer[3] = a5402454257;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54408 = encode_clo(alloc_clo(lam54408_fptr, 0));

void* lam54410_fptr() // lam54410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54411 = arg_buffer[1];
//reading env and args
void* a5402254253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54411))[8];
//not do dummy comment
void* map = (decode_clo(env54411))[7];
//not do dummy comment
void* proc = (decode_clo(env54411))[6];
//not do dummy comment
void* kont54117 = (decode_clo(env54411))[5];
//not do dummy comment
void* car = (decode_clo(env54411))[4];
//not do dummy comment
void* cons = (decode_clo(env54411))[3];
//not do dummy comment
void* list = (decode_clo(env54411))[2];
//not do dummy comment
void* cdr = (decode_clo(env54411))[1];

//if-clause
bool if_guard54537 = is_true(a5402254253);
if(if_guard54537)
{

//creating new closure instance
void** clo54539 = alloc_clo(lam54400_fptr, 1);

//setting env list
clo54539[1] = kont54117;
void* f5411854254 = encode_clo(clo54539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5411854254;
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
void** clo54541 = alloc_clo(lam54408_fptr, 6);

//setting env list
clo54541[1] = cons;
clo54541[2] = kont54117;
clo54541[3] = proc;
clo54541[4] = map;
clo54541[5] = lst;
clo54541[6] = cdr;
void* f5412254256 = encode_clo(clo54541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5412254256;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54410 = encode_clo(alloc_clo(lam54410_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54412 = arg_buffer[1];
//reading env and args
void* kont54117 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54543 = alloc_clo(lam54410_fptr, 8);

//setting env list
clo54543[1] = cdr;
clo54543[2] = list;
clo54543[3] = cons;
clo54543[4] = car;
clo54543[5] = kont54117;
clo54543[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo54543[7] = map;
clo54543[8] = lst;
void* f5412354252 = encode_clo(clo54543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5412354252;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam54413_fptr() // lam54413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54414 = arg_buffer[1];
//reading env and args
void* x5402954267 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54124 = (decode_clo(env54414))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54124);
arg_buffer[2] = x5402954267;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54124))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54413 = encode_clo(alloc_clo(lam54413_fptr, 0));

void* lam54415_fptr() // lam54415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54416 = arg_buffer[1];
//reading env and args
void* a5403454277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54124 = (decode_clo(env54416))[3];
//not do dummy comment
void* a5403254273 = (decode_clo(env54416))[2];
//not do dummy comment
void* cons = (decode_clo(env54416))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54124;
arg_buffer[3] = a5403254273;
arg_buffer[4] = a5403454277;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54415 = encode_clo(alloc_clo(lam54415_fptr, 0));

void* lam54417_fptr() // lam54417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54418 = arg_buffer[1];
//reading env and args
void* a5403354275 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54124 = (decode_clo(env54418))[5];
//not do dummy comment
void* op = (decode_clo(env54418))[4];
//not do dummy comment
void* a5403254273 = (decode_clo(env54418))[3];
//not do dummy comment
void* filter = (decode_clo(env54418))[2];
//not do dummy comment
void* cons = (decode_clo(env54418))[1];

//creating new closure instance
void** clo54545 = alloc_clo(lam54415_fptr, 3);

//setting env list
clo54545[1] = cons;
clo54545[2] = a5403254273;
clo54545[3] = kont54124;
void* f5412654276 = encode_clo(clo54545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5412654276;
arg_buffer[3] = op;
arg_buffer[4] = a5403354275;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54417 = encode_clo(alloc_clo(lam54417_fptr, 0));

void* lam54419_fptr() // lam54419 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54420 = arg_buffer[1];
//reading env and args
void* a5403254273 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54420))[6];
//not do dummy comment
void* kont54124 = (decode_clo(env54420))[5];
//not do dummy comment
void* lst = (decode_clo(env54420))[4];
//not do dummy comment
void* op = (decode_clo(env54420))[3];
//not do dummy comment
void* filter = (decode_clo(env54420))[2];
//not do dummy comment
void* cons = (decode_clo(env54420))[1];

//creating new closure instance
void** clo54547 = alloc_clo(lam54417_fptr, 5);

//setting env list
clo54547[1] = cons;
clo54547[2] = filter;
clo54547[3] = a5403254273;
clo54547[4] = op;
clo54547[5] = kont54124;
void* f5412754274 = encode_clo(clo54547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5412754274;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54419 = encode_clo(alloc_clo(lam54419_fptr, 0));

void* lam54421_fptr() // lam54421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54422 = arg_buffer[1];
//reading env and args
void* a5403554279 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54124 = (decode_clo(env54422))[3];
//not do dummy comment
void* op = (decode_clo(env54422))[2];
//not do dummy comment
void* filter = (decode_clo(env54422))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont54124;
arg_buffer[3] = op;
arg_buffer[4] = a5403554279;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54421 = encode_clo(alloc_clo(lam54421_fptr, 0));

void* lam54423_fptr() // lam54423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54424 = arg_buffer[1];
//reading env and args
void* a5403154271 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54424))[7];
//not do dummy comment
void* kont54124 = (decode_clo(env54424))[6];
//not do dummy comment
void* lst = (decode_clo(env54424))[5];
//not do dummy comment
void* op = (decode_clo(env54424))[4];
//not do dummy comment
void* cons = (decode_clo(env54424))[3];
//not do dummy comment
void* filter = (decode_clo(env54424))[2];
//not do dummy comment
void* car = (decode_clo(env54424))[1];

//if-clause
bool if_guard54548 = is_true(a5403154271);
if(if_guard54548)
{

//creating new closure instance
void** clo54550 = alloc_clo(lam54419_fptr, 6);

//setting env list
clo54550[1] = cons;
clo54550[2] = filter;
clo54550[3] = op;
clo54550[4] = lst;
clo54550[5] = kont54124;
clo54550[6] = cdr;
void* f5412854272 = encode_clo(clo54550);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5412854272;
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
void** clo54552 = alloc_clo(lam54421_fptr, 3);

//setting env list
clo54552[1] = filter;
clo54552[2] = op;
clo54552[3] = kont54124;
void* f5412954278 = encode_clo(clo54552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5412954278;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54423 = encode_clo(alloc_clo(lam54423_fptr, 0));

void* lam54425_fptr() // lam54425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54426 = arg_buffer[1];
//reading env and args
void* a5403054269 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54426))[7];
//not do dummy comment
void* kont54124 = (decode_clo(env54426))[6];
//not do dummy comment
void* lst = (decode_clo(env54426))[5];
//not do dummy comment
void* op = (decode_clo(env54426))[4];
//not do dummy comment
void* cons = (decode_clo(env54426))[3];
//not do dummy comment
void* filter = (decode_clo(env54426))[2];
//not do dummy comment
void* car = (decode_clo(env54426))[1];

//creating new closure instance
void** clo54554 = alloc_clo(lam54423_fptr, 7);

//setting env list
clo54554[1] = car;
clo54554[2] = filter;
clo54554[3] = cons;
clo54554[4] = op;
clo54554[5] = lst;
clo54554[6] = kont54124;
clo54554[7] = cdr;
void* f5413054270 = encode_clo(clo54554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5413054270;
arg_buffer[3] = a5403054269;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54425 = encode_clo(alloc_clo(lam54425_fptr, 0));

void* lam54427_fptr() // lam54427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54428 = arg_buffer[1];
//reading env and args
void* a5402854265 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54124 = (decode_clo(env54428))[8];
//not do dummy comment
void* lst = (decode_clo(env54428))[7];
//not do dummy comment
void* op = (decode_clo(env54428))[6];
//not do dummy comment
void* cons = (decode_clo(env54428))[5];
//not do dummy comment
void* list = (decode_clo(env54428))[4];
//not do dummy comment
void* cdr = (decode_clo(env54428))[3];
//not do dummy comment
void* filter = (decode_clo(env54428))[2];
//not do dummy comment
void* car = (decode_clo(env54428))[1];

//if-clause
bool if_guard54555 = is_true(a5402854265);
if(if_guard54555)
{

//creating new closure instance
void** clo54557 = alloc_clo(lam54413_fptr, 1);

//setting env list
clo54557[1] = kont54124;
void* f5412554266 = encode_clo(clo54557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5412554266;
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
void** clo54559 = alloc_clo(lam54425_fptr, 7);

//setting env list
clo54559[1] = car;
clo54559[2] = filter;
clo54559[3] = cons;
clo54559[4] = op;
clo54559[5] = lst;
clo54559[6] = kont54124;
clo54559[7] = cdr;
void* f5413154268 = encode_clo(clo54559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5413154268;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54427 = encode_clo(alloc_clo(lam54427_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54429 = arg_buffer[1];
//reading env and args
void* kont54124 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54561 = alloc_clo(lam54427_fptr, 8);

//setting env list
clo54561[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo54561[2] = filter;
clo54561[3] = cdr;
clo54561[4] = list;
clo54561[5] = cons;
clo54561[6] = op;
clo54561[7] = lst;
clo54561[8] = kont54124;
void* f5413254264 = encode_clo(clo54561);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5413254264;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam54430_fptr() // lam54430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54431 = arg_buffer[1];
//reading env and args
void* a5404054287 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5403854284 = (decode_clo(env54431))[3];
//not do dummy comment
void* drop = (decode_clo(env54431))[2];
//not do dummy comment
void* kont54133 = (decode_clo(env54431))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont54133;
arg_buffer[3] = a5403854284;
arg_buffer[4] = a5404054287;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54430 = encode_clo(alloc_clo(lam54430_fptr, 0));

void* lam54433_fptr() // lam54433 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54434 = arg_buffer[1];
//reading env and args
void* a5403854284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env54434))[4];
//not do dummy comment
void* kont54133 = (decode_clo(env54434))[3];
//not do dummy comment
void* n = (decode_clo(env54434))[2];
//not do dummy comment
void* _u45 = (decode_clo(env54434))[1];
mpz_t* mpzvar54562 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54562, "1", 10);
void* a5403954285 = encode_mpz(mpzvar54562);

//creating new closure instance
void** clo54564 = alloc_clo(lam54430_fptr, 3);

//setting env list
clo54564[1] = kont54133;
clo54564[2] = drop;
clo54564[3] = a5403854284;
void* f5413454286 = encode_clo(clo54564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5413454286;
arg_buffer[3] = n;
arg_buffer[4] = a5403954285;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54433 = encode_clo(alloc_clo(lam54433_fptr, 0));

void* lam54435_fptr() // lam54435 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54436 = arg_buffer[1];
//reading env and args
void* a5403754282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54436))[6];
//not do dummy comment
void* kont54133 = (decode_clo(env54436))[5];
//not do dummy comment
void* n = (decode_clo(env54436))[4];
//not do dummy comment
void* _u45 = (decode_clo(env54436))[3];
//not do dummy comment
void* lst = (decode_clo(env54436))[2];
//not do dummy comment
void* drop = (decode_clo(env54436))[1];

//if-clause
bool if_guard54565 = is_true(a5403754282);
if(if_guard54565)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54133);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54133))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54567 = alloc_clo(lam54433_fptr, 4);

//setting env list
clo54567[1] = _u45;
clo54567[2] = n;
clo54567[3] = kont54133;
clo54567[4] = drop;
void* f5413554283 = encode_clo(clo54567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5413554283;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54435 = encode_clo(alloc_clo(lam54435_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54438 = arg_buffer[1];
//reading env and args
void* kont54133 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar54568 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54568, "0", 10);
void* a5403654280 = encode_mpz(mpzvar54568);

//creating new closure instance
void** clo54570 = alloc_clo(lam54435_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo54570[1] = drop;
clo54570[2] = lst;
clo54570[3] = _u45;
clo54570[4] = n;
clo54570[5] = kont54133;
clo54570[6] = cdr;
void* f5413654281 = encode_clo(clo54570);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5413654281;
arg_buffer[3] = n;
arg_buffer[4] = a5403654280;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam54439_fptr() // lam54439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54440 = arg_buffer[1];
//reading env and args
void* a5404454295 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54137 = (decode_clo(env54440))[3];
//not do dummy comment
void* a5404254291 = (decode_clo(env54440))[2];
//not do dummy comment
void* proc = (decode_clo(env54440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont54137;
arg_buffer[3] = a5404254291;
arg_buffer[4] = a5404454295;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54439 = encode_clo(alloc_clo(lam54439_fptr, 0));

void* lam54441_fptr() // lam54441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54442 = arg_buffer[1];
//reading env and args
void* a5404354293 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54137 = (decode_clo(env54442))[5];
//not do dummy comment
void* foldr = (decode_clo(env54442))[4];
//not do dummy comment
void* a5404254291 = (decode_clo(env54442))[3];
//not do dummy comment
void* proc = (decode_clo(env54442))[2];
//not do dummy comment
void* acc = (decode_clo(env54442))[1];

//creating new closure instance
void** clo54572 = alloc_clo(lam54439_fptr, 3);

//setting env list
clo54572[1] = proc;
clo54572[2] = a5404254291;
clo54572[3] = kont54137;
void* f5413854294 = encode_clo(clo54572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5413854294;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5404354293;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54441 = encode_clo(alloc_clo(lam54441_fptr, 0));

void* lam54443_fptr() // lam54443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54444 = arg_buffer[1];
//reading env and args
void* a5404254291 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54137 = (decode_clo(env54444))[6];
//not do dummy comment
void* cdr = (decode_clo(env54444))[5];
//not do dummy comment
void* foldr = (decode_clo(env54444))[4];
//not do dummy comment
void* lst = (decode_clo(env54444))[3];
//not do dummy comment
void* proc = (decode_clo(env54444))[2];
//not do dummy comment
void* acc = (decode_clo(env54444))[1];

//creating new closure instance
void** clo54574 = alloc_clo(lam54441_fptr, 5);

//setting env list
clo54574[1] = acc;
clo54574[2] = proc;
clo54574[3] = a5404254291;
clo54574[4] = foldr;
clo54574[5] = kont54137;
void* f5413954292 = encode_clo(clo54574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5413954292;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54443 = encode_clo(alloc_clo(lam54443_fptr, 0));

void* lam54445_fptr() // lam54445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54446 = arg_buffer[1];
//reading env and args
void* a5404154289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env54446))[7];
//not do dummy comment
void* kont54137 = (decode_clo(env54446))[6];
//not do dummy comment
void* cdr = (decode_clo(env54446))[5];
//not do dummy comment
void* foldr = (decode_clo(env54446))[4];
//not do dummy comment
void* lst = (decode_clo(env54446))[3];
//not do dummy comment
void* proc = (decode_clo(env54446))[2];
//not do dummy comment
void* acc = (decode_clo(env54446))[1];

//if-clause
bool if_guard54575 = is_true(a5404154289);
if(if_guard54575)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54137);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54137))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54577 = alloc_clo(lam54443_fptr, 6);

//setting env list
clo54577[1] = acc;
clo54577[2] = proc;
clo54577[3] = lst;
clo54577[4] = foldr;
clo54577[5] = cdr;
clo54577[6] = kont54137;
void* f5414054290 = encode_clo(clo54577);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5414054290;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54445 = encode_clo(alloc_clo(lam54445_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54447 = arg_buffer[1];
//reading env and args
void* kont54137 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54579 = alloc_clo(lam54445_fptr, 7);

//setting env list
clo54579[1] = acc;
clo54579[2] = proc;
clo54579[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo54579[4] = foldr;
clo54579[5] = cdr;
clo54579[6] = kont54137;
clo54579[7] = car;
void* f5414154288 = encode_clo(clo54579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5414154288;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam54448_fptr() // lam54448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54449 = arg_buffer[1];
//reading env and args
void* a5404854303 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5404654299 = (decode_clo(env54449))[3];
//not do dummy comment
void* kont54142 = (decode_clo(env54449))[2];
//not do dummy comment
void* cons = (decode_clo(env54449))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54142;
arg_buffer[3] = a5404654299;
arg_buffer[4] = a5404854303;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54448 = encode_clo(alloc_clo(lam54448_fptr, 0));

void* lam54450_fptr() // lam54450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54451 = arg_buffer[1];
//reading env and args
void* a5404754301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5404654299 = (decode_clo(env54451))[5];
//not do dummy comment
void* kont54142 = (decode_clo(env54451))[4];
//not do dummy comment
void* append = (decode_clo(env54451))[3];
//not do dummy comment
void* lst2 = (decode_clo(env54451))[2];
//not do dummy comment
void* cons = (decode_clo(env54451))[1];

//creating new closure instance
void** clo54581 = alloc_clo(lam54448_fptr, 3);

//setting env list
clo54581[1] = cons;
clo54581[2] = kont54142;
clo54581[3] = a5404654299;
void* f5414354302 = encode_clo(clo54581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5414354302;
arg_buffer[3] = a5404754301;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54450 = encode_clo(alloc_clo(lam54450_fptr, 0));

void* lam54452_fptr() // lam54452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54453 = arg_buffer[1];
//reading env and args
void* a5404654299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54453))[6];
//not do dummy comment
void* kont54142 = (decode_clo(env54453))[5];
//not do dummy comment
void* append = (decode_clo(env54453))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54453))[3];
//not do dummy comment
void* lst1 = (decode_clo(env54453))[2];
//not do dummy comment
void* cons = (decode_clo(env54453))[1];

//creating new closure instance
void** clo54583 = alloc_clo(lam54450_fptr, 5);

//setting env list
clo54583[1] = cons;
clo54583[2] = lst2;
clo54583[3] = append;
clo54583[4] = kont54142;
clo54583[5] = a5404654299;
void* f5414454300 = encode_clo(clo54583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5414454300;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54452 = encode_clo(alloc_clo(lam54452_fptr, 0));

void* lam54454_fptr() // lam54454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54455 = arg_buffer[1];
//reading env and args
void* a5404554297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54455))[7];
//not do dummy comment
void* kont54142 = (decode_clo(env54455))[6];
//not do dummy comment
void* append = (decode_clo(env54455))[5];
//not do dummy comment
void* lst2 = (decode_clo(env54455))[4];
//not do dummy comment
void* cons = (decode_clo(env54455))[3];
//not do dummy comment
void* lst1 = (decode_clo(env54455))[2];
//not do dummy comment
void* car = (decode_clo(env54455))[1];

//if-clause
bool if_guard54584 = is_true(a5404554297);
if(if_guard54584)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54142);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54142))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54586 = alloc_clo(lam54452_fptr, 6);

//setting env list
clo54586[1] = cons;
clo54586[2] = lst1;
clo54586[3] = lst2;
clo54586[4] = append;
clo54586[5] = kont54142;
clo54586[6] = cdr;
void* f5414554298 = encode_clo(clo54586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5414554298;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54454 = encode_clo(alloc_clo(lam54454_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54456 = arg_buffer[1];
//reading env and args
void* kont54142 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54588 = alloc_clo(lam54454_fptr, 7);

//setting env list
clo54588[1] = car;
clo54588[2] = lst1;
clo54588[3] = cons;
clo54588[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo54588[5] = append;
clo54588[6] = kont54142;
clo54588[7] = cdr;
void* f5414654296 = encode_clo(clo54588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5414654296;
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
void* _54457 = arg_buffer[1];
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

void* kont5414754304 = prim_car(lst);
void* lst54305 = prim_cdr(lst);
void* x5404954306 = apply_prim_hash(lst54305);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5414754304);
arg_buffer[2] = x5404954306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5414754304))[0]);
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
void* _54458 = arg_buffer[1];
//reading env and args
void* kont54149 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5405054307 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54149);
arg_buffer[2] = x5405054307;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54149))[0]);
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
void* _54459 = arg_buffer[1];
//reading env and args
void* kont54150 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5405154308 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54150);
arg_buffer[2] = x5405154308;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54150))[0]);
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
void* _54460 = arg_buffer[1];
//reading env and args
void* kont54151 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5405254309 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54151);
arg_buffer[2] = x5405254309;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54151))[0]);
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
void* _54461 = arg_buffer[1];
//reading env and args
void* kont54152 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5405354310 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54152);
arg_buffer[2] = x5405354310;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54152))[0]);
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
void* _54463 = arg_buffer[1];
//reading env and args
void* kont54153 = arg_buffer[2];
//Dummy comment
void* x5405454311 = encode_str(new(GC) std::string("random"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54153);
arg_buffer[2] = x5405454311;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54153))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam54464_fptr() // lam54464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54465 = arg_buffer[1];
//reading env and args
void* x5405554313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54154 = (decode_clo(env54465))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54154);
arg_buffer[2] = x5405554313;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54154))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54464 = encode_clo(alloc_clo(lam54464_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54466 = arg_buffer[1];
//reading env and args
void* kont54154 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo54590 = alloc_clo(lam54464_fptr, 1);

//setting env list
clo54590[1] = kont54154;
void* f5415554312 = encode_clo(clo54590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5415554312;
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

