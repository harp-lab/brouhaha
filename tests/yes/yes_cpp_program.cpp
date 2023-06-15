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
void* _133429 = arg_buffer[1];
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

void* kont133170133270 = prim_car(lst);
void* lst133271 = prim_cdr(lst);
void* x133086133272 = apply_prim__u43(lst133271);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133170133270);
arg_buffer[2] = x133086133272;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133170133270))[0]);
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
void* _133430 = arg_buffer[1];
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

void* kont133172133273 = prim_car(lst);
void* lst133274 = prim_cdr(lst);
void* x133087133275 = apply_prim__u45(lst133274);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133172133273);
arg_buffer[2] = x133087133275;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133172133273))[0]);
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
void* _133431 = arg_buffer[1];
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

void* kont133174133276 = prim_car(lst);
void* lst133277 = prim_cdr(lst);
void* x133088133278 = apply_prim__u42(lst133277);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133174133276);
arg_buffer[2] = x133088133278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133174133276))[0]);
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
void* _133432 = arg_buffer[1];
//reading env and args
void* kont133176 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x133089133279 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133176);
arg_buffer[2] = x133089133279;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133176))[0]);
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
void* _133433 = arg_buffer[1];
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

void* kont133177133280 = prim_car(lst);
void* lst133281 = prim_cdr(lst);
void* x133090133282 = apply_prim__u47(lst133281);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133177133280);
arg_buffer[2] = x133090133282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133177133280))[0]);
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
void* _133434 = arg_buffer[1];
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

void* kont133179133283 = prim_car(lst);
void* lst133284 = prim_cdr(lst);
void* x133091133285 = apply_prim__u61(lst133284);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133179133283);
arg_buffer[2] = x133091133285;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133179133283))[0]);
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
void* _133435 = arg_buffer[1];
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

void* kont133181133286 = prim_car(lst);
void* lst133287 = prim_cdr(lst);
void* x133092133288 = apply_prim__u62(lst133287);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133181133286);
arg_buffer[2] = x133092133288;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133181133286))[0]);
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
void* _133436 = arg_buffer[1];
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

void* kont133183133289 = prim_car(lst);
void* lst133290 = prim_cdr(lst);
void* x133093133291 = apply_prim__u60(lst133290);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133183133289);
arg_buffer[2] = x133093133291;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133183133289))[0]);
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
void* _133437 = arg_buffer[1];
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

void* kont133185133292 = prim_car(lst);
void* lst133293 = prim_cdr(lst);
void* x133094133294 = apply_prim__u60_u61(lst133293);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133185133292);
arg_buffer[2] = x133094133294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133185133292))[0]);
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
void* _133438 = arg_buffer[1];
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

void* kont133187133295 = prim_car(lst);
void* lst133296 = prim_cdr(lst);
void* x133095133297 = apply_prim__u62_u61(lst133296);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133187133295);
arg_buffer[2] = x133095133297;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133187133295))[0]);
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
void* _133439 = arg_buffer[1];
//reading env and args
void* kont133189 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x133096133298 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133189);
arg_buffer[2] = x133096133298;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133189))[0]);
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
void* _133440 = arg_buffer[1];
//reading env and args
void* kont133190 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x133097133299 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133190);
arg_buffer[2] = x133097133299;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133190))[0]);
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
void* _133441 = arg_buffer[1];
//reading env and args
void* kont133191 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x133098133300 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133191);
arg_buffer[2] = x133098133300;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133191))[0]);
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
void* _133442 = arg_buffer[1];
//reading env and args
void* kont133192 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x133099133301 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133192);
arg_buffer[2] = x133099133301;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133192))[0]);
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
void* _133443 = arg_buffer[1];
//reading env and args
void* kont133193 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x133100133302 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133193);
arg_buffer[2] = x133100133302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133193))[0]);
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
void* _133444 = arg_buffer[1];
//reading env and args
void* kont133194 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x133101133303 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133194);
arg_buffer[2] = x133101133303;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133194))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam133445_fptr() // lam133445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133446 = arg_buffer[1];
//reading env and args
void* a133104133307 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env133446))[3];
//not do dummy comment
void* a133102133304 = (decode_clo(env133446))[2];
//not do dummy comment
void* kont133195 = (decode_clo(env133446))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont133195;
arg_buffer[3] = a133102133304;
arg_buffer[4] = a133104133307;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133445 = encode_clo(alloc_clo(lam133445_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133449 = arg_buffer[1];
//reading env and args
void* kont133195 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar133583 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133583, "0", 10);
void* a133102133304 = encode_mpz(mpzvar133583);
mpz_t* mpzvar133584 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133584, "2", 10);
void* a133103133305 = encode_mpz(mpzvar133584);

//creating new closure instance
void** clo133586 = alloc_clo(lam133445_fptr, 3);

//setting env list
clo133586[1] = kont133195;
clo133586[2] = a133102133304;
clo133586[3] = equal_u63;
void* f133196133306 = encode_clo(clo133586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f133196133306;
arg_buffer[3] = x;
arg_buffer[4] = a133103133305;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam133450_fptr() // lam133450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133451 = arg_buffer[1];
//reading env and args
void* a133107133311 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133197 = (decode_clo(env133451))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env133451))[2];
//not do dummy comment
void* a133105133308 = (decode_clo(env133451))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont133197;
arg_buffer[3] = a133105133308;
arg_buffer[4] = a133107133311;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133450 = encode_clo(alloc_clo(lam133450_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133454 = arg_buffer[1];
//reading env and args
void* kont133197 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar133587 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133587, "1", 10);
void* a133105133308 = encode_mpz(mpzvar133587);
mpz_t* mpzvar133588 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133588, "2", 10);
void* a133106133309 = encode_mpz(mpzvar133588);

//creating new closure instance
void** clo133590 = alloc_clo(lam133450_fptr, 3);

//setting env list
clo133590[1] = a133105133308;
clo133590[2] = equal_u63;
clo133590[3] = kont133197;
void* f133198133310 = encode_clo(clo133590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f133198133310;
arg_buffer[3] = x;
arg_buffer[4] = a133106133309;
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
void* _133455 = arg_buffer[1];
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

void* kont133199133312 = prim_car(x);
void* x133313 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133199133312);
arg_buffer[2] = x133313;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133199133312))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam133458_fptr() // lam133458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133459 = arg_buffer[1];
//reading env and args
void* a133113133323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133201 = (decode_clo(env133459))[3];
//not do dummy comment
void* x = (decode_clo(env133459))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env133459))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont133201;
arg_buffer[3] = x;
arg_buffer[4] = a133113133323;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133458 = encode_clo(alloc_clo(lam133458_fptr, 0));

void* lam133460_fptr() // lam133460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133461 = arg_buffer[1];
//reading env and args
void* a133111133320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133461))[5];
//not do dummy comment
void* x = (decode_clo(env133461))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env133461))[3];
//not do dummy comment
void* lst = (decode_clo(env133461))[2];
//not do dummy comment
void* kont133201 = (decode_clo(env133461))[1];

//if-clause
bool if_guard133591 = is_true(a133111133320);
if(if_guard133591)
{
void* x133112133321 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133201);
arg_buffer[2] = x133112133321;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133201))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133593 = alloc_clo(lam133458_fptr, 3);

//setting env list
clo133593[1] = member_u63;
clo133593[2] = x;
clo133593[3] = kont133201;
void* f133202133322 = encode_clo(clo133593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133202133322;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133460 = encode_clo(alloc_clo(lam133460_fptr, 0));

void* lam133462_fptr() // lam133462 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133463 = arg_buffer[1];
//reading env and args
void* a133110133318 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133463))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env133463))[5];
//not do dummy comment
void* x = (decode_clo(env133463))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env133463))[3];
//not do dummy comment
void* lst = (decode_clo(env133463))[2];
//not do dummy comment
void* kont133201 = (decode_clo(env133463))[1];

//creating new closure instance
void** clo133595 = alloc_clo(lam133460_fptr, 5);

//setting env list
clo133595[1] = kont133201;
clo133595[2] = lst;
clo133595[3] = member_u63;
clo133595[4] = x;
clo133595[5] = cdr;
void* f133203133319 = encode_clo(clo133595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f133203133319;
arg_buffer[3] = a133110133318;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133462 = encode_clo(alloc_clo(lam133462_fptr, 0));

void* lam133464_fptr() // lam133464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133465 = arg_buffer[1];
//reading env and args
void* a133108133315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133465))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env133465))[6];
//not do dummy comment
void* x = (decode_clo(env133465))[5];
//not do dummy comment
void* car = (decode_clo(env133465))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env133465))[3];
//not do dummy comment
void* lst = (decode_clo(env133465))[2];
//not do dummy comment
void* kont133201 = (decode_clo(env133465))[1];

//if-clause
bool if_guard133596 = is_true(a133108133315);
if(if_guard133596)
{
void* x133109133316 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133201);
arg_buffer[2] = x133109133316;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133201))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133598 = alloc_clo(lam133462_fptr, 6);

//setting env list
clo133598[1] = kont133201;
clo133598[2] = lst;
clo133598[3] = member_u63;
clo133598[4] = x;
clo133598[5] = equal_u63;
clo133598[6] = cdr;
void* f133204133317 = encode_clo(clo133598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133204133317;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133464 = encode_clo(alloc_clo(lam133464_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133466 = arg_buffer[1];
//reading env and args
void* kont133201 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133600 = alloc_clo(lam133464_fptr, 7);

//setting env list
clo133600[1] = kont133201;
clo133600[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo133600[3] = member_u63;
clo133600[4] = car;
clo133600[5] = x;
clo133600[6] = equal_u63;
clo133600[7] = cdr;
void* f133205133314 = encode_clo(clo133600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133205133314;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam133467_fptr() // lam133467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133468 = arg_buffer[1];
//reading env and args
void* a133117133331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133116133329 = (decode_clo(env133468))[4];
//not do dummy comment
void* kont133206 = (decode_clo(env133468))[3];
//not do dummy comment
void* fun = (decode_clo(env133468))[2];
//not do dummy comment
void* foldl = (decode_clo(env133468))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont133206;
arg_buffer[3] = fun;
arg_buffer[4] = a133116133329;
arg_buffer[5] = a133117133331;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133467 = encode_clo(alloc_clo(lam133467_fptr, 0));

void* lam133469_fptr() // lam133469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133470 = arg_buffer[1];
//reading env and args
void* a133116133329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133470))[5];
//not do dummy comment
void* lst = (decode_clo(env133470))[4];
//not do dummy comment
void* kont133206 = (decode_clo(env133470))[3];
//not do dummy comment
void* fun = (decode_clo(env133470))[2];
//not do dummy comment
void* foldl = (decode_clo(env133470))[1];

//creating new closure instance
void** clo133602 = alloc_clo(lam133467_fptr, 4);

//setting env list
clo133602[1] = foldl;
clo133602[2] = fun;
clo133602[3] = kont133206;
clo133602[4] = a133116133329;
void* f133207133330 = encode_clo(clo133602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133207133330;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133469 = encode_clo(alloc_clo(lam133469_fptr, 0));

void* lam133471_fptr() // lam133471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133472 = arg_buffer[1];
//reading env and args
void* a133115133327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133472))[6];
//not do dummy comment
void* lst = (decode_clo(env133472))[5];
//not do dummy comment
void* kont133206 = (decode_clo(env133472))[4];
//not do dummy comment
void* fun = (decode_clo(env133472))[3];
//not do dummy comment
void* acc = (decode_clo(env133472))[2];
//not do dummy comment
void* foldl = (decode_clo(env133472))[1];

//creating new closure instance
void** clo133604 = alloc_clo(lam133469_fptr, 5);

//setting env list
clo133604[1] = foldl;
clo133604[2] = fun;
clo133604[3] = kont133206;
clo133604[4] = lst;
clo133604[5] = cdr;
void* f133208133328 = encode_clo(clo133604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f133208133328;
arg_buffer[3] = a133115133327;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133471 = encode_clo(alloc_clo(lam133471_fptr, 0));

void* lam133473_fptr() // lam133473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133474 = arg_buffer[1];
//reading env and args
void* a133114133325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133474))[7];
//not do dummy comment
void* lst = (decode_clo(env133474))[6];
//not do dummy comment
void* kont133206 = (decode_clo(env133474))[5];
//not do dummy comment
void* fun = (decode_clo(env133474))[4];
//not do dummy comment
void* acc = (decode_clo(env133474))[3];
//not do dummy comment
void* car = (decode_clo(env133474))[2];
//not do dummy comment
void* foldl = (decode_clo(env133474))[1];

//if-clause
bool if_guard133605 = is_true(a133114133325);
if(if_guard133605)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133206);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133206))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133607 = alloc_clo(lam133471_fptr, 6);

//setting env list
clo133607[1] = foldl;
clo133607[2] = acc;
clo133607[3] = fun;
clo133607[4] = kont133206;
clo133607[5] = lst;
clo133607[6] = cdr;
void* f133209133326 = encode_clo(clo133607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133209133326;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133473 = encode_clo(alloc_clo(lam133473_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133475 = arg_buffer[1];
//reading env and args
void* kont133206 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo133609 = alloc_clo(lam133473_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo133609[1] = foldl;
clo133609[2] = car;
clo133609[3] = acc;
clo133609[4] = fun;
clo133609[5] = kont133206;
clo133609[6] = lst;
clo133609[7] = cdr;
void* f133210133324 = encode_clo(clo133609);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133210133324;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam133476_fptr() // lam133476 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133477 = arg_buffer[1];
//reading env and args
void* a133121133339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env133477))[3];
//not do dummy comment
void* a133119133335 = (decode_clo(env133477))[2];
//not do dummy comment
void* kont133211 = (decode_clo(env133477))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont133211;
arg_buffer[3] = a133119133335;
arg_buffer[4] = a133121133339;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133476 = encode_clo(alloc_clo(lam133476_fptr, 0));

void* lam133478_fptr() // lam133478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133479 = arg_buffer[1];
//reading env and args
void* a133120133337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env133479))[5];
//not do dummy comment
void* a133119133335 = (decode_clo(env133479))[4];
//not do dummy comment
void* lst2 = (decode_clo(env133479))[3];
//not do dummy comment
void* cons = (decode_clo(env133479))[2];
//not do dummy comment
void* kont133211 = (decode_clo(env133479))[1];

//creating new closure instance
void** clo133611 = alloc_clo(lam133476_fptr, 3);

//setting env list
clo133611[1] = kont133211;
clo133611[2] = a133119133335;
clo133611[3] = reverse_u45helper;
void* f133212133338 = encode_clo(clo133611);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f133212133338;
arg_buffer[3] = a133120133337;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133478 = encode_clo(alloc_clo(lam133478_fptr, 0));

void* lam133480_fptr() // lam133480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133481 = arg_buffer[1];
//reading env and args
void* a133119133335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env133481))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env133481))[5];
//not do dummy comment
void* lst2 = (decode_clo(env133481))[4];
//not do dummy comment
void* car = (decode_clo(env133481))[3];
//not do dummy comment
void* cons = (decode_clo(env133481))[2];
//not do dummy comment
void* kont133211 = (decode_clo(env133481))[1];

//creating new closure instance
void** clo133613 = alloc_clo(lam133478_fptr, 5);

//setting env list
clo133613[1] = kont133211;
clo133613[2] = cons;
clo133613[3] = lst2;
clo133613[4] = a133119133335;
clo133613[5] = reverse_u45helper;
void* f133213133336 = encode_clo(clo133613);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133213133336;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133480 = encode_clo(alloc_clo(lam133480_fptr, 0));

void* lam133482_fptr() // lam133482 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133483 = arg_buffer[1];
//reading env and args
void* a133118133333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133483))[7];
//not do dummy comment
void* lst = (decode_clo(env133483))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env133483))[5];
//not do dummy comment
void* lst2 = (decode_clo(env133483))[4];
//not do dummy comment
void* car = (decode_clo(env133483))[3];
//not do dummy comment
void* cons = (decode_clo(env133483))[2];
//not do dummy comment
void* kont133211 = (decode_clo(env133483))[1];

//if-clause
bool if_guard133614 = is_true(a133118133333);
if(if_guard133614)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133211);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133211))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133616 = alloc_clo(lam133480_fptr, 6);

//setting env list
clo133616[1] = kont133211;
clo133616[2] = cons;
clo133616[3] = car;
clo133616[4] = lst2;
clo133616[5] = reverse_u45helper;
clo133616[6] = lst;
void* f133214133334 = encode_clo(clo133616);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133214133334;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133482 = encode_clo(alloc_clo(lam133482_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133484 = arg_buffer[1];
//reading env and args
void* kont133211 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133618 = alloc_clo(lam133482_fptr, 7);

//setting env list
clo133618[1] = kont133211;
clo133618[2] = cons;
clo133618[3] = car;
clo133618[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo133618[5] = reverse_u45helper;
clo133618[6] = lst;
clo133618[7] = cdr;
void* f133215133332 = encode_clo(clo133618);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133215133332;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam133485_fptr() // lam133485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133486 = arg_buffer[1];
//reading env and args
void* a133122133341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133216 = (decode_clo(env133486))[3];
//not do dummy comment
void* lst = (decode_clo(env133486))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env133486))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont133216;
arg_buffer[3] = lst;
arg_buffer[4] = a133122133341;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133485 = encode_clo(alloc_clo(lam133485_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133487 = arg_buffer[1];
//reading env and args
void* kont133216 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo133620 = alloc_clo(lam133485_fptr, 3);

//setting env list
clo133620[1] = reverse_u45helper;
clo133620[2] = lst;
clo133620[3] = kont133216;
void* f133217133340 = encode_clo(clo133620);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f133217133340;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam133488_fptr() // lam133488 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133489 = arg_buffer[1];
//reading env and args
void* x133125133346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133218 = (decode_clo(env133489))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133218);
arg_buffer[2] = x133125133346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133218))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133488 = encode_clo(alloc_clo(lam133488_fptr, 0));

void* lam133490_fptr() // lam133490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133491 = arg_buffer[1];
//reading env and args
void* a133130133355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133218 = (decode_clo(env133491))[4];
//not do dummy comment
void* a133126133348 = (decode_clo(env133491))[3];
//not do dummy comment
void* a133128133351 = (decode_clo(env133491))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env133491))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont133218;
arg_buffer[3] = a133126133348;
arg_buffer[4] = a133128133351;
arg_buffer[5] = a133130133355;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133490 = encode_clo(alloc_clo(lam133490_fptr, 0));

void* lam133492_fptr() // lam133492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133493 = arg_buffer[1];
//reading env and args
void* a133129133353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133218 = (decode_clo(env133493))[6];
//not do dummy comment
void* a133126133348 = (decode_clo(env133493))[5];
//not do dummy comment
void* a133128133351 = (decode_clo(env133493))[4];
//not do dummy comment
void* cons = (decode_clo(env133493))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env133493))[2];
//not do dummy comment
void* lst2 = (decode_clo(env133493))[1];

//creating new closure instance
void** clo133622 = alloc_clo(lam133490_fptr, 4);

//setting env list
clo133622[1] = take_u45helper;
clo133622[2] = a133128133351;
clo133622[3] = a133126133348;
clo133622[4] = kont133218;
void* f133220133354 = encode_clo(clo133622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f133220133354;
arg_buffer[3] = a133129133353;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133492 = encode_clo(alloc_clo(lam133492_fptr, 0));

void* lam133494_fptr() // lam133494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133495 = arg_buffer[1];
//reading env and args
void* a133128133351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env133495))[7];
//not do dummy comment
void* kont133218 = (decode_clo(env133495))[6];
//not do dummy comment
void* a133126133348 = (decode_clo(env133495))[5];
//not do dummy comment
void* car = (decode_clo(env133495))[4];
//not do dummy comment
void* cons = (decode_clo(env133495))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env133495))[2];
//not do dummy comment
void* lst2 = (decode_clo(env133495))[1];

//creating new closure instance
void** clo133624 = alloc_clo(lam133492_fptr, 6);

//setting env list
clo133624[1] = lst2;
clo133624[2] = take_u45helper;
clo133624[3] = cons;
clo133624[4] = a133128133351;
clo133624[5] = a133126133348;
clo133624[6] = kont133218;
void* f133221133352 = encode_clo(clo133624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133221133352;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133494 = encode_clo(alloc_clo(lam133494_fptr, 0));

void* lam133497_fptr() // lam133497 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133498 = arg_buffer[1];
//reading env and args
void* a133126133348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env133498))[8];
//not do dummy comment
void* kont133218 = (decode_clo(env133498))[7];
//not do dummy comment
void* cons = (decode_clo(env133498))[6];
//not do dummy comment
void* _u45 = (decode_clo(env133498))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env133498))[4];
//not do dummy comment
void* lst2 = (decode_clo(env133498))[3];
//not do dummy comment
void* n = (decode_clo(env133498))[2];
//not do dummy comment
void* car = (decode_clo(env133498))[1];
mpz_t* mpzvar133625 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133625, "1", 10);
void* a133127133349 = encode_mpz(mpzvar133625);

//creating new closure instance
void** clo133627 = alloc_clo(lam133494_fptr, 7);

//setting env list
clo133627[1] = lst2;
clo133627[2] = take_u45helper;
clo133627[3] = cons;
clo133627[4] = car;
clo133627[5] = a133126133348;
clo133627[6] = kont133218;
clo133627[7] = lst;
void* f133222133350 = encode_clo(clo133627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f133222133350;
arg_buffer[3] = n;
arg_buffer[4] = a133127133349;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133497 = encode_clo(alloc_clo(lam133497_fptr, 0));

void* lam133499_fptr() // lam133499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133500 = arg_buffer[1];
//reading env and args
void* a133124133344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133500))[10];
//not do dummy comment
void* lst = (decode_clo(env133500))[9];
//not do dummy comment
void* kont133218 = (decode_clo(env133500))[8];
//not do dummy comment
void* reverse = (decode_clo(env133500))[7];
//not do dummy comment
void* cons = (decode_clo(env133500))[6];
//not do dummy comment
void* _u45 = (decode_clo(env133500))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env133500))[4];
//not do dummy comment
void* lst2 = (decode_clo(env133500))[3];
//not do dummy comment
void* n = (decode_clo(env133500))[2];
//not do dummy comment
void* car = (decode_clo(env133500))[1];

//if-clause
bool if_guard133628 = is_true(a133124133344);
if(if_guard133628)
{

//creating new closure instance
void** clo133630 = alloc_clo(lam133488_fptr, 1);

//setting env list
clo133630[1] = kont133218;
void* f133219133345 = encode_clo(clo133630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f133219133345;
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
void** clo133632 = alloc_clo(lam133497_fptr, 8);

//setting env list
clo133632[1] = car;
clo133632[2] = n;
clo133632[3] = lst2;
clo133632[4] = take_u45helper;
clo133632[5] = _u45;
clo133632[6] = cons;
clo133632[7] = kont133218;
clo133632[8] = lst;
void* f133223133347 = encode_clo(clo133632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133223133347;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133499 = encode_clo(alloc_clo(lam133499_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133502 = arg_buffer[1];
//reading env and args
void* kont133218 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar133633 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133633, "0", 10);
void* a133123133342 = encode_mpz(mpzvar133633);

//creating new closure instance
void** clo133635 = alloc_clo(lam133499_fptr, 10);

//setting env list
clo133635[1] = car;
clo133635[2] = n;
clo133635[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo133635[4] = take_u45helper;
clo133635[5] = _u45;
clo133635[6] = cons;
clo133635[7] = reverse;
clo133635[8] = kont133218;
clo133635[9] = lst;
clo133635[10] = cdr;
void* f133224133343 = encode_clo(clo133635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f133224133343;
arg_buffer[3] = n;
arg_buffer[4] = a133123133342;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam133503_fptr() // lam133503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133504 = arg_buffer[1];
//reading env and args
void* a133131133357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env133504))[4];
//not do dummy comment
void* n = (decode_clo(env133504))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env133504))[2];
//not do dummy comment
void* kont133225 = (decode_clo(env133504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont133225;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a133131133357;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133503 = encode_clo(alloc_clo(lam133503_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133505 = arg_buffer[1];
//reading env and args
void* kont133225 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133637 = alloc_clo(lam133503_fptr, 4);

//setting env list
clo133637[1] = kont133225;
clo133637[2] = take_u45helper;
clo133637[3] = n;
clo133637[4] = lst;
void* f133226133356 = encode_clo(clo133637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f133226133356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam133507_fptr() // lam133507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133508 = arg_buffer[1];
//reading env and args
void* a133136133365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133134133361 = (decode_clo(env133508))[3];
//not do dummy comment
void* _u43 = (decode_clo(env133508))[2];
//not do dummy comment
void* kont133227 = (decode_clo(env133508))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont133227;
arg_buffer[3] = a133134133361;
arg_buffer[4] = a133136133365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133507 = encode_clo(alloc_clo(lam133507_fptr, 0));

void* lam133509_fptr() // lam133509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133510 = arg_buffer[1];
//reading env and args
void* a133135133363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133134133361 = (decode_clo(env133510))[4];
//not do dummy comment
void* length = (decode_clo(env133510))[3];
//not do dummy comment
void* _u43 = (decode_clo(env133510))[2];
//not do dummy comment
void* kont133227 = (decode_clo(env133510))[1];

//creating new closure instance
void** clo133639 = alloc_clo(lam133507_fptr, 3);

//setting env list
clo133639[1] = kont133227;
clo133639[2] = _u43;
clo133639[3] = a133134133361;
void* f133228133364 = encode_clo(clo133639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f133228133364;
arg_buffer[3] = a133135133363;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133509 = encode_clo(alloc_clo(lam133509_fptr, 0));

void* lam133512_fptr() // lam133512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133513 = arg_buffer[1];
//reading env and args
void* a133132133359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133513))[5];
//not do dummy comment
void* lst = (decode_clo(env133513))[4];
//not do dummy comment
void* length = (decode_clo(env133513))[3];
//not do dummy comment
void* _u43 = (decode_clo(env133513))[2];
//not do dummy comment
void* kont133227 = (decode_clo(env133513))[1];

//if-clause
bool if_guard133640 = is_true(a133132133359);
if(if_guard133640)
{
mpz_t* mpzvar133641 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133641, "0", 10);
void* x133133133360 = encode_mpz(mpzvar133641);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133227);
arg_buffer[2] = x133133133360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133227))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar133642 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133642, "1", 10);
void* a133134133361 = encode_mpz(mpzvar133642);

//creating new closure instance
void** clo133644 = alloc_clo(lam133509_fptr, 4);

//setting env list
clo133644[1] = kont133227;
clo133644[2] = _u43;
clo133644[3] = length;
clo133644[4] = a133134133361;
void* f133229133362 = encode_clo(clo133644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133229133362;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133512 = encode_clo(alloc_clo(lam133512_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133514 = arg_buffer[1];
//reading env and args
void* kont133227 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo133646 = alloc_clo(lam133512_fptr, 5);

//setting env list
clo133646[1] = kont133227;
clo133646[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo133646[3] = length;
clo133646[4] = lst;
clo133646[5] = cdr;
void* f133230133358 = encode_clo(clo133646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133230133358;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam133515_fptr() // lam133515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133516 = arg_buffer[1];
//reading env and args
void* x133138133369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133231 = (decode_clo(env133516))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133231);
arg_buffer[2] = x133138133369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133231))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133515 = encode_clo(alloc_clo(lam133515_fptr, 0));

void* lam133517_fptr() // lam133517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133518 = arg_buffer[1];
//reading env and args
void* a133142133377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133140133373 = (decode_clo(env133518))[3];
//not do dummy comment
void* kont133231 = (decode_clo(env133518))[2];
//not do dummy comment
void* cons = (decode_clo(env133518))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont133231;
arg_buffer[3] = a133140133373;
arg_buffer[4] = a133142133377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133517 = encode_clo(alloc_clo(lam133517_fptr, 0));

void* lam133519_fptr() // lam133519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133520 = arg_buffer[1];
//reading env and args
void* a133141133375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133140133373 = (decode_clo(env133520))[5];
//not do dummy comment
void* kont133231 = (decode_clo(env133520))[4];
//not do dummy comment
void* map = (decode_clo(env133520))[3];
//not do dummy comment
void* proc = (decode_clo(env133520))[2];
//not do dummy comment
void* cons = (decode_clo(env133520))[1];

//creating new closure instance
void** clo133648 = alloc_clo(lam133517_fptr, 3);

//setting env list
clo133648[1] = cons;
clo133648[2] = kont133231;
clo133648[3] = a133140133373;
void* f133233133376 = encode_clo(clo133648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f133233133376;
arg_buffer[3] = proc;
arg_buffer[4] = a133141133375;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133519 = encode_clo(alloc_clo(lam133519_fptr, 0));

void* lam133521_fptr() // lam133521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133522 = arg_buffer[1];
//reading env and args
void* a133140133373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133522))[6];
//not do dummy comment
void* kont133231 = (decode_clo(env133522))[5];
//not do dummy comment
void* lst = (decode_clo(env133522))[4];
//not do dummy comment
void* map = (decode_clo(env133522))[3];
//not do dummy comment
void* proc = (decode_clo(env133522))[2];
//not do dummy comment
void* cons = (decode_clo(env133522))[1];

//creating new closure instance
void** clo133650 = alloc_clo(lam133519_fptr, 5);

//setting env list
clo133650[1] = cons;
clo133650[2] = proc;
clo133650[3] = map;
clo133650[4] = kont133231;
clo133650[5] = a133140133373;
void* f133234133374 = encode_clo(clo133650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133234133374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133521 = encode_clo(alloc_clo(lam133521_fptr, 0));

void* lam133523_fptr() // lam133523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133524 = arg_buffer[1];
//reading env and args
void* a133139133371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133524))[6];
//not do dummy comment
void* kont133231 = (decode_clo(env133524))[5];
//not do dummy comment
void* lst = (decode_clo(env133524))[4];
//not do dummy comment
void* map = (decode_clo(env133524))[3];
//not do dummy comment
void* proc = (decode_clo(env133524))[2];
//not do dummy comment
void* cons = (decode_clo(env133524))[1];

//creating new closure instance
void** clo133652 = alloc_clo(lam133521_fptr, 6);

//setting env list
clo133652[1] = cons;
clo133652[2] = proc;
clo133652[3] = map;
clo133652[4] = lst;
clo133652[5] = kont133231;
clo133652[6] = cdr;
void* f133235133372 = encode_clo(clo133652);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f133235133372;
arg_buffer[3] = a133139133371;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133523 = encode_clo(alloc_clo(lam133523_fptr, 0));

void* lam133525_fptr() // lam133525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133526 = arg_buffer[1];
//reading env and args
void* a133137133367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133231 = (decode_clo(env133526))[8];
//not do dummy comment
void* lst = (decode_clo(env133526))[7];
//not do dummy comment
void* map = (decode_clo(env133526))[6];
//not do dummy comment
void* proc = (decode_clo(env133526))[5];
//not do dummy comment
void* car = (decode_clo(env133526))[4];
//not do dummy comment
void* cons = (decode_clo(env133526))[3];
//not do dummy comment
void* list = (decode_clo(env133526))[2];
//not do dummy comment
void* cdr = (decode_clo(env133526))[1];

//if-clause
bool if_guard133653 = is_true(a133137133367);
if(if_guard133653)
{

//creating new closure instance
void** clo133655 = alloc_clo(lam133515_fptr, 1);

//setting env list
clo133655[1] = kont133231;
void* f133232133368 = encode_clo(clo133655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f133232133368;
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
void** clo133657 = alloc_clo(lam133523_fptr, 6);

//setting env list
clo133657[1] = cons;
clo133657[2] = proc;
clo133657[3] = map;
clo133657[4] = lst;
clo133657[5] = kont133231;
clo133657[6] = cdr;
void* f133236133370 = encode_clo(clo133657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133236133370;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133525 = encode_clo(alloc_clo(lam133525_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133527 = arg_buffer[1];
//reading env and args
void* kont133231 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133659 = alloc_clo(lam133525_fptr, 8);

//setting env list
clo133659[1] = cdr;
clo133659[2] = list;
clo133659[3] = cons;
clo133659[4] = car;
clo133659[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo133659[6] = map;
clo133659[7] = lst;
clo133659[8] = kont133231;
void* f133237133366 = encode_clo(clo133659);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133237133366;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam133528_fptr() // lam133528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133529 = arg_buffer[1];
//reading env and args
void* x133144133381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133238 = (decode_clo(env133529))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133238);
arg_buffer[2] = x133144133381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133238))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133528 = encode_clo(alloc_clo(lam133528_fptr, 0));

void* lam133530_fptr() // lam133530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133531 = arg_buffer[1];
//reading env and args
void* a133149133391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133238 = (decode_clo(env133531))[3];
//not do dummy comment
void* cons = (decode_clo(env133531))[2];
//not do dummy comment
void* a133147133387 = (decode_clo(env133531))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont133238;
arg_buffer[3] = a133147133387;
arg_buffer[4] = a133149133391;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133530 = encode_clo(alloc_clo(lam133530_fptr, 0));

void* lam133532_fptr() // lam133532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133533 = arg_buffer[1];
//reading env and args
void* a133148133389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env133533))[5];
//not do dummy comment
void* kont133238 = (decode_clo(env133533))[4];
//not do dummy comment
void* filter = (decode_clo(env133533))[3];
//not do dummy comment
void* cons = (decode_clo(env133533))[2];
//not do dummy comment
void* a133147133387 = (decode_clo(env133533))[1];

//creating new closure instance
void** clo133661 = alloc_clo(lam133530_fptr, 3);

//setting env list
clo133661[1] = a133147133387;
clo133661[2] = cons;
clo133661[3] = kont133238;
void* f133240133390 = encode_clo(clo133661);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f133240133390;
arg_buffer[3] = op;
arg_buffer[4] = a133148133389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133532 = encode_clo(alloc_clo(lam133532_fptr, 0));

void* lam133534_fptr() // lam133534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133535 = arg_buffer[1];
//reading env and args
void* a133147133387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133535))[6];
//not do dummy comment
void* lst = (decode_clo(env133535))[5];
//not do dummy comment
void* op = (decode_clo(env133535))[4];
//not do dummy comment
void* kont133238 = (decode_clo(env133535))[3];
//not do dummy comment
void* filter = (decode_clo(env133535))[2];
//not do dummy comment
void* cons = (decode_clo(env133535))[1];

//creating new closure instance
void** clo133663 = alloc_clo(lam133532_fptr, 5);

//setting env list
clo133663[1] = a133147133387;
clo133663[2] = cons;
clo133663[3] = filter;
clo133663[4] = kont133238;
clo133663[5] = op;
void* f133241133388 = encode_clo(clo133663);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133241133388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133534 = encode_clo(alloc_clo(lam133534_fptr, 0));

void* lam133536_fptr() // lam133536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133537 = arg_buffer[1];
//reading env and args
void* a133150133393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env133537))[3];
//not do dummy comment
void* kont133238 = (decode_clo(env133537))[2];
//not do dummy comment
void* filter = (decode_clo(env133537))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont133238;
arg_buffer[3] = op;
arg_buffer[4] = a133150133393;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133536 = encode_clo(alloc_clo(lam133536_fptr, 0));

void* lam133538_fptr() // lam133538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133539 = arg_buffer[1];
//reading env and args
void* a133146133385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133539))[7];
//not do dummy comment
void* lst = (decode_clo(env133539))[6];
//not do dummy comment
void* op = (decode_clo(env133539))[5];
//not do dummy comment
void* kont133238 = (decode_clo(env133539))[4];
//not do dummy comment
void* cons = (decode_clo(env133539))[3];
//not do dummy comment
void* filter = (decode_clo(env133539))[2];
//not do dummy comment
void* car = (decode_clo(env133539))[1];

//if-clause
bool if_guard133664 = is_true(a133146133385);
if(if_guard133664)
{

//creating new closure instance
void** clo133666 = alloc_clo(lam133534_fptr, 6);

//setting env list
clo133666[1] = cons;
clo133666[2] = filter;
clo133666[3] = kont133238;
clo133666[4] = op;
clo133666[5] = lst;
clo133666[6] = cdr;
void* f133242133386 = encode_clo(clo133666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133242133386;
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
void** clo133668 = alloc_clo(lam133536_fptr, 3);

//setting env list
clo133668[1] = filter;
clo133668[2] = kont133238;
clo133668[3] = op;
void* f133243133392 = encode_clo(clo133668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133243133392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133538 = encode_clo(alloc_clo(lam133538_fptr, 0));

void* lam133540_fptr() // lam133540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133541 = arg_buffer[1];
//reading env and args
void* a133145133383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133541))[7];
//not do dummy comment
void* lst = (decode_clo(env133541))[6];
//not do dummy comment
void* op = (decode_clo(env133541))[5];
//not do dummy comment
void* kont133238 = (decode_clo(env133541))[4];
//not do dummy comment
void* cons = (decode_clo(env133541))[3];
//not do dummy comment
void* filter = (decode_clo(env133541))[2];
//not do dummy comment
void* car = (decode_clo(env133541))[1];

//creating new closure instance
void** clo133670 = alloc_clo(lam133538_fptr, 7);

//setting env list
clo133670[1] = car;
clo133670[2] = filter;
clo133670[3] = cons;
clo133670[4] = kont133238;
clo133670[5] = op;
clo133670[6] = lst;
clo133670[7] = cdr;
void* f133244133384 = encode_clo(clo133670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f133244133384;
arg_buffer[3] = a133145133383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133540 = encode_clo(alloc_clo(lam133540_fptr, 0));

void* lam133542_fptr() // lam133542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133543 = arg_buffer[1];
//reading env and args
void* a133143133379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env133543))[8];
//not do dummy comment
void* op = (decode_clo(env133543))[7];
//not do dummy comment
void* kont133238 = (decode_clo(env133543))[6];
//not do dummy comment
void* cons = (decode_clo(env133543))[5];
//not do dummy comment
void* list = (decode_clo(env133543))[4];
//not do dummy comment
void* cdr = (decode_clo(env133543))[3];
//not do dummy comment
void* filter = (decode_clo(env133543))[2];
//not do dummy comment
void* car = (decode_clo(env133543))[1];

//if-clause
bool if_guard133671 = is_true(a133143133379);
if(if_guard133671)
{

//creating new closure instance
void** clo133673 = alloc_clo(lam133528_fptr, 1);

//setting env list
clo133673[1] = kont133238;
void* f133239133380 = encode_clo(clo133673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f133239133380;
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
void** clo133675 = alloc_clo(lam133540_fptr, 7);

//setting env list
clo133675[1] = car;
clo133675[2] = filter;
clo133675[3] = cons;
clo133675[4] = kont133238;
clo133675[5] = op;
clo133675[6] = lst;
clo133675[7] = cdr;
void* f133245133382 = encode_clo(clo133675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133245133382;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133542 = encode_clo(alloc_clo(lam133542_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133544 = arg_buffer[1];
//reading env and args
void* kont133238 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133677 = alloc_clo(lam133542_fptr, 8);

//setting env list
clo133677[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo133677[2] = filter;
clo133677[3] = cdr;
clo133677[4] = list;
clo133677[5] = cons;
clo133677[6] = kont133238;
clo133677[7] = op;
clo133677[8] = lst;
void* f133246133378 = encode_clo(clo133677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133246133378;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam133545_fptr() // lam133545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133546 = arg_buffer[1];
//reading env and args
void* a133155133401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133247 = (decode_clo(env133546))[3];
//not do dummy comment
void* drop = (decode_clo(env133546))[2];
//not do dummy comment
void* a133153133398 = (decode_clo(env133546))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont133247;
arg_buffer[3] = a133153133398;
arg_buffer[4] = a133155133401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133545 = encode_clo(alloc_clo(lam133545_fptr, 0));

void* lam133548_fptr() // lam133548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133549 = arg_buffer[1];
//reading env and args
void* a133153133398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133247 = (decode_clo(env133549))[4];
//not do dummy comment
void* drop = (decode_clo(env133549))[3];
//not do dummy comment
void* n = (decode_clo(env133549))[2];
//not do dummy comment
void* _u45 = (decode_clo(env133549))[1];
mpz_t* mpzvar133678 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133678, "1", 10);
void* a133154133399 = encode_mpz(mpzvar133678);

//creating new closure instance
void** clo133680 = alloc_clo(lam133545_fptr, 3);

//setting env list
clo133680[1] = a133153133398;
clo133680[2] = drop;
clo133680[3] = kont133247;
void* f133248133400 = encode_clo(clo133680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f133248133400;
arg_buffer[3] = n;
arg_buffer[4] = a133154133399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133548 = encode_clo(alloc_clo(lam133548_fptr, 0));

void* lam133550_fptr() // lam133550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133551 = arg_buffer[1];
//reading env and args
void* a133152133396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133551))[6];
//not do dummy comment
void* kont133247 = (decode_clo(env133551))[5];
//not do dummy comment
void* n = (decode_clo(env133551))[4];
//not do dummy comment
void* _u45 = (decode_clo(env133551))[3];
//not do dummy comment
void* lst = (decode_clo(env133551))[2];
//not do dummy comment
void* drop = (decode_clo(env133551))[1];

//if-clause
bool if_guard133681 = is_true(a133152133396);
if(if_guard133681)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133247);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133247))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133683 = alloc_clo(lam133548_fptr, 4);

//setting env list
clo133683[1] = _u45;
clo133683[2] = n;
clo133683[3] = drop;
clo133683[4] = kont133247;
void* f133249133397 = encode_clo(clo133683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133249133397;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133550 = encode_clo(alloc_clo(lam133550_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133553 = arg_buffer[1];
//reading env and args
void* kont133247 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar133684 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133684, "0", 10);
void* a133151133394 = encode_mpz(mpzvar133684);

//creating new closure instance
void** clo133686 = alloc_clo(lam133550_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo133686[1] = drop;
clo133686[2] = lst;
clo133686[3] = _u45;
clo133686[4] = n;
clo133686[5] = kont133247;
clo133686[6] = cdr;
void* f133250133395 = encode_clo(clo133686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f133250133395;
arg_buffer[3] = n;
arg_buffer[4] = a133151133394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam133554_fptr() // lam133554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133555 = arg_buffer[1];
//reading env and args
void* a133159133409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133157133405 = (decode_clo(env133555))[3];
//not do dummy comment
void* kont133251 = (decode_clo(env133555))[2];
//not do dummy comment
void* proc = (decode_clo(env133555))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont133251;
arg_buffer[3] = a133157133405;
arg_buffer[4] = a133159133409;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133554 = encode_clo(alloc_clo(lam133554_fptr, 0));

void* lam133556_fptr() // lam133556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133557 = arg_buffer[1];
//reading env and args
void* a133158133407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133157133405 = (decode_clo(env133557))[5];
//not do dummy comment
void* foldr = (decode_clo(env133557))[4];
//not do dummy comment
void* kont133251 = (decode_clo(env133557))[3];
//not do dummy comment
void* proc = (decode_clo(env133557))[2];
//not do dummy comment
void* acc = (decode_clo(env133557))[1];

//creating new closure instance
void** clo133688 = alloc_clo(lam133554_fptr, 3);

//setting env list
clo133688[1] = proc;
clo133688[2] = kont133251;
clo133688[3] = a133157133405;
void* f133252133408 = encode_clo(clo133688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f133252133408;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a133158133407;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133556 = encode_clo(alloc_clo(lam133556_fptr, 0));

void* lam133558_fptr() // lam133558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133559 = arg_buffer[1];
//reading env and args
void* a133157133405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133559))[6];
//not do dummy comment
void* kont133251 = (decode_clo(env133559))[5];
//not do dummy comment
void* foldr = (decode_clo(env133559))[4];
//not do dummy comment
void* lst = (decode_clo(env133559))[3];
//not do dummy comment
void* proc = (decode_clo(env133559))[2];
//not do dummy comment
void* acc = (decode_clo(env133559))[1];

//creating new closure instance
void** clo133690 = alloc_clo(lam133556_fptr, 5);

//setting env list
clo133690[1] = acc;
clo133690[2] = proc;
clo133690[3] = kont133251;
clo133690[4] = foldr;
clo133690[5] = a133157133405;
void* f133253133406 = encode_clo(clo133690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133253133406;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133558 = encode_clo(alloc_clo(lam133558_fptr, 0));

void* lam133560_fptr() // lam133560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133561 = arg_buffer[1];
//reading env and args
void* a133156133403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133561))[7];
//not do dummy comment
void* kont133251 = (decode_clo(env133561))[6];
//not do dummy comment
void* car = (decode_clo(env133561))[5];
//not do dummy comment
void* foldr = (decode_clo(env133561))[4];
//not do dummy comment
void* lst = (decode_clo(env133561))[3];
//not do dummy comment
void* proc = (decode_clo(env133561))[2];
//not do dummy comment
void* acc = (decode_clo(env133561))[1];

//if-clause
bool if_guard133691 = is_true(a133156133403);
if(if_guard133691)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133251);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133251))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133693 = alloc_clo(lam133558_fptr, 6);

//setting env list
clo133693[1] = acc;
clo133693[2] = proc;
clo133693[3] = lst;
clo133693[4] = foldr;
clo133693[5] = kont133251;
clo133693[6] = cdr;
void* f133254133404 = encode_clo(clo133693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133254133404;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133560 = encode_clo(alloc_clo(lam133560_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133562 = arg_buffer[1];
//reading env and args
void* kont133251 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo133695 = alloc_clo(lam133560_fptr, 7);

//setting env list
clo133695[1] = acc;
clo133695[2] = proc;
clo133695[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo133695[4] = foldr;
clo133695[5] = car;
clo133695[6] = kont133251;
clo133695[7] = cdr;
void* f133255133402 = encode_clo(clo133695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133255133402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam133563_fptr() // lam133563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133564 = arg_buffer[1];
//reading env and args
void* a133163133417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a133161133413 = (decode_clo(env133564))[3];
//not do dummy comment
void* kont133256 = (decode_clo(env133564))[2];
//not do dummy comment
void* cons = (decode_clo(env133564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont133256;
arg_buffer[3] = a133161133413;
arg_buffer[4] = a133163133417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133563 = encode_clo(alloc_clo(lam133563_fptr, 0));

void* lam133565_fptr() // lam133565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133566 = arg_buffer[1];
//reading env and args
void* a133162133415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133256 = (decode_clo(env133566))[5];
//not do dummy comment
void* lst2 = (decode_clo(env133566))[4];
//not do dummy comment
void* cons = (decode_clo(env133566))[3];
//not do dummy comment
void* append = (decode_clo(env133566))[2];
//not do dummy comment
void* a133161133413 = (decode_clo(env133566))[1];

//creating new closure instance
void** clo133697 = alloc_clo(lam133563_fptr, 3);

//setting env list
clo133697[1] = cons;
clo133697[2] = kont133256;
clo133697[3] = a133161133413;
void* f133257133416 = encode_clo(clo133697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f133257133416;
arg_buffer[3] = a133162133415;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133565 = encode_clo(alloc_clo(lam133565_fptr, 0));

void* lam133567_fptr() // lam133567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133568 = arg_buffer[1];
//reading env and args
void* a133161133413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133568))[6];
//not do dummy comment
void* append = (decode_clo(env133568))[5];
//not do dummy comment
void* kont133256 = (decode_clo(env133568))[4];
//not do dummy comment
void* lst2 = (decode_clo(env133568))[3];
//not do dummy comment
void* lst1 = (decode_clo(env133568))[2];
//not do dummy comment
void* cons = (decode_clo(env133568))[1];

//creating new closure instance
void** clo133699 = alloc_clo(lam133565_fptr, 5);

//setting env list
clo133699[1] = a133161133413;
clo133699[2] = append;
clo133699[3] = cons;
clo133699[4] = lst2;
clo133699[5] = kont133256;
void* f133258133414 = encode_clo(clo133699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f133258133414;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133567 = encode_clo(alloc_clo(lam133567_fptr, 0));

void* lam133569_fptr() // lam133569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133570 = arg_buffer[1];
//reading env and args
void* a133160133411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env133570))[7];
//not do dummy comment
void* append = (decode_clo(env133570))[6];
//not do dummy comment
void* kont133256 = (decode_clo(env133570))[5];
//not do dummy comment
void* lst2 = (decode_clo(env133570))[4];
//not do dummy comment
void* cons = (decode_clo(env133570))[3];
//not do dummy comment
void* lst1 = (decode_clo(env133570))[2];
//not do dummy comment
void* car = (decode_clo(env133570))[1];

//if-clause
bool if_guard133700 = is_true(a133160133411);
if(if_guard133700)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133256);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133256))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133702 = alloc_clo(lam133567_fptr, 6);

//setting env list
clo133702[1] = cons;
clo133702[2] = lst1;
clo133702[3] = lst2;
clo133702[4] = kont133256;
clo133702[5] = append;
clo133702[6] = cdr;
void* f133259133412 = encode_clo(clo133702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f133259133412;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam133569 = encode_clo(alloc_clo(lam133569_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133571 = arg_buffer[1];
//reading env and args
void* kont133256 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133704 = alloc_clo(lam133569_fptr, 7);

//setting env list
clo133704[1] = car;
clo133704[2] = lst1;
clo133704[3] = cons;
clo133704[4] = lst2;
clo133704[5] = kont133256;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo133704[6] = append;
clo133704[7] = cdr;
void* f133260133410 = encode_clo(clo133704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f133260133410;
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
void* _133572 = arg_buffer[1];
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

void* kont133261133418 = prim_car(lst);
void* lst133419 = prim_cdr(lst);
void* x133164133420 = apply_prim_hash(lst133419);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133261133418);
arg_buffer[2] = x133164133420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133261133418))[0]);
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
void* _133573 = arg_buffer[1];
//reading env and args
void* kont133263 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x133165133421 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133263);
arg_buffer[2] = x133165133421;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133263))[0]);
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
void* _133574 = arg_buffer[1];
//reading env and args
void* kont133264 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x133166133422 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133264);
arg_buffer[2] = x133166133422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133264))[0]);
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
void* _133575 = arg_buffer[1];
//reading env and args
void* kont133265 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x133167133423 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133265);
arg_buffer[2] = x133167133423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133265))[0]);
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
void* _133576 = arg_buffer[1];
//reading env and args
void* kont133266 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x133168133424 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133266);
arg_buffer[2] = x133168133424;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133266))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* yes_fptr() // yes 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133579 = arg_buffer[1];
//reading env and args
void* kont133267 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar133705 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133705, "5", 10);
void* x133084133425 = encode_mpz(mpzvar133705);
mpz_t* mpzvar133706 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133706, "6", 10);
void* y133085133426 = encode_mpz(mpzvar133706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133267);
arg_buffer[2] = x133084133425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133267))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* yes = encode_clo(alloc_clo(yes_fptr, 0));

void* lam133580_fptr() // lam133580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env133581 = arg_buffer[1];
//reading env and args
void* x133169133428 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont133268 = (decode_clo(env133581))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont133268);
arg_buffer[2] = x133169133428;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont133268))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam133580 = encode_clo(alloc_clo(lam133580_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _133582 = arg_buffer[1];
//reading env and args
void* kont133268 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo133708 = alloc_clo(lam133580_fptr, 1);

//setting env list
clo133708[1] = kont133268;
void* f133269133427 = encode_clo(clo133708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(yes);
arg_buffer[2] = f133269133427;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(yes))[0]);
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

