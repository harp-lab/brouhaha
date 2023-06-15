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
void* _120147 = arg_buffer[1];
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

void* kont119885119985 = prim_car(lst);
void* lst119986 = prim_cdr(lst);
void* x119796119987 = apply_prim__u43(lst119986);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119885119985);
arg_buffer[2] = x119796119987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119885119985))[0]);
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
void* _120148 = arg_buffer[1];
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

void* kont119887119988 = prim_car(lst);
void* lst119989 = prim_cdr(lst);
void* x119797119990 = apply_prim__u45(lst119989);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119887119988);
arg_buffer[2] = x119797119990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119887119988))[0]);
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
void* _120149 = arg_buffer[1];
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

void* kont119889119991 = prim_car(lst);
void* lst119992 = prim_cdr(lst);
void* x119798119993 = apply_prim__u42(lst119992);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119889119991);
arg_buffer[2] = x119798119993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119889119991))[0]);
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
void* _120150 = arg_buffer[1];
//reading env and args
void* kont119891 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x119799119994 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119891);
arg_buffer[2] = x119799119994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119891))[0]);
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
void* _120151 = arg_buffer[1];
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

void* kont119892119995 = prim_car(lst);
void* lst119996 = prim_cdr(lst);
void* x119800119997 = apply_prim__u47(lst119996);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119892119995);
arg_buffer[2] = x119800119997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119892119995))[0]);
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
void* _120152 = arg_buffer[1];
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

void* kont119894119998 = prim_car(lst);
void* lst119999 = prim_cdr(lst);
void* x119801120000 = apply_prim__u61(lst119999);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119894119998);
arg_buffer[2] = x119801120000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119894119998))[0]);
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
void* _120153 = arg_buffer[1];
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

void* kont119896120001 = prim_car(lst);
void* lst120002 = prim_cdr(lst);
void* x119802120003 = apply_prim__u62(lst120002);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119896120001);
arg_buffer[2] = x119802120003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119896120001))[0]);
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
void* _120154 = arg_buffer[1];
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

void* kont119898120004 = prim_car(lst);
void* lst120005 = prim_cdr(lst);
void* x119803120006 = apply_prim__u60(lst120005);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119898120004);
arg_buffer[2] = x119803120006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119898120004))[0]);
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
void* _120155 = arg_buffer[1];
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

void* kont119900120007 = prim_car(lst);
void* lst120008 = prim_cdr(lst);
void* x119804120009 = apply_prim__u60_u61(lst120008);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119900120007);
arg_buffer[2] = x119804120009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119900120007))[0]);
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
void* _120156 = arg_buffer[1];
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

void* kont119902120010 = prim_car(lst);
void* lst120011 = prim_cdr(lst);
void* x119805120012 = apply_prim__u62_u61(lst120011);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119902120010);
arg_buffer[2] = x119805120012;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119902120010))[0]);
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
void* _120157 = arg_buffer[1];
//reading env and args
void* kont119904 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x119806120013 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119904);
arg_buffer[2] = x119806120013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119904))[0]);
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
void* _120158 = arg_buffer[1];
//reading env and args
void* kont119905 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x119807120014 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119905);
arg_buffer[2] = x119807120014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119905))[0]);
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
void* _120159 = arg_buffer[1];
//reading env and args
void* kont119906 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x119808120015 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119906);
arg_buffer[2] = x119808120015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119906))[0]);
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
void* _120160 = arg_buffer[1];
//reading env and args
void* kont119907 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x119809120016 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119907);
arg_buffer[2] = x119809120016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119907))[0]);
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
void* _120161 = arg_buffer[1];
//reading env and args
void* kont119908 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x119810120017 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119908);
arg_buffer[2] = x119810120017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119908))[0]);
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
void* _120162 = arg_buffer[1];
//reading env and args
void* kont119909 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x119811120018 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119909);
arg_buffer[2] = x119811120018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119909))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam120163_fptr() // lam120163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120164 = arg_buffer[1];
//reading env and args
void* a119814120022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a119812120019 = (decode_clo(env120164))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env120164))[2];
//not do dummy comment
void* kont119910 = (decode_clo(env120164))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont119910;
arg_buffer[3] = a119812120019;
arg_buffer[4] = a119814120022;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120163 = encode_clo(alloc_clo(lam120163_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120167 = arg_buffer[1];
//reading env and args
void* kont119910 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar120844 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120844, "0", 10);
void* a119812120019 = encode_mpz(mpzvar120844);
mpz_t* mpzvar120845 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120845, "2", 10);
void* a119813120020 = encode_mpz(mpzvar120845);

//creating new closure instance
void** clo120847 = alloc_clo(lam120163_fptr, 3);

//setting env list
clo120847[1] = kont119910;
clo120847[2] = equal_u63;
clo120847[3] = a119812120019;
void* f119911120021 = encode_clo(clo120847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f119911120021;
arg_buffer[3] = x;
arg_buffer[4] = a119813120020;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam120168_fptr() // lam120168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120169 = arg_buffer[1];
//reading env and args
void* a119817120026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env120169))[3];
//not do dummy comment
void* a119815120023 = (decode_clo(env120169))[2];
//not do dummy comment
void* kont119912 = (decode_clo(env120169))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont119912;
arg_buffer[3] = a119815120023;
arg_buffer[4] = a119817120026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120168 = encode_clo(alloc_clo(lam120168_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120172 = arg_buffer[1];
//reading env and args
void* kont119912 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar120848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120848, "1", 10);
void* a119815120023 = encode_mpz(mpzvar120848);
mpz_t* mpzvar120849 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120849, "2", 10);
void* a119816120024 = encode_mpz(mpzvar120849);

//creating new closure instance
void** clo120851 = alloc_clo(lam120168_fptr, 3);

//setting env list
clo120851[1] = kont119912;
clo120851[2] = a119815120023;
clo120851[3] = equal_u63;
void* f119913120025 = encode_clo(clo120851);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f119913120025;
arg_buffer[3] = x;
arg_buffer[4] = a119816120024;
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
void* _120173 = arg_buffer[1];
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

void* kont119914120027 = prim_car(x);
void* x120028 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119914120027);
arg_buffer[2] = x120028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119914120027))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam120176_fptr() // lam120176 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120177 = arg_buffer[1];
//reading env and args
void* a119823120038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env120177))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env120177))[2];
//not do dummy comment
void* kont119916 = (decode_clo(env120177))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont119916;
arg_buffer[3] = x;
arg_buffer[4] = a119823120038;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120176 = encode_clo(alloc_clo(lam120176_fptr, 0));

void* lam120178_fptr() // lam120178 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120179 = arg_buffer[1];
//reading env and args
void* a119821120035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120179))[5];
//not do dummy comment
void* lst = (decode_clo(env120179))[4];
//not do dummy comment
void* x = (decode_clo(env120179))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env120179))[2];
//not do dummy comment
void* kont119916 = (decode_clo(env120179))[1];

//if-clause
bool if_guard120852 = is_true(a119821120035);
if(if_guard120852)
{
void* x119822120036 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119916);
arg_buffer[2] = x119822120036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119916))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo120854 = alloc_clo(lam120176_fptr, 3);

//setting env list
clo120854[1] = kont119916;
clo120854[2] = member_u63;
clo120854[3] = x;
void* f119917120037 = encode_clo(clo120854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119917120037;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120178 = encode_clo(alloc_clo(lam120178_fptr, 0));

void* lam120180_fptr() // lam120180 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120181 = arg_buffer[1];
//reading env and args
void* a119820120033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120181))[6];
//not do dummy comment
void* lst = (decode_clo(env120181))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env120181))[4];
//not do dummy comment
void* x = (decode_clo(env120181))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env120181))[2];
//not do dummy comment
void* kont119916 = (decode_clo(env120181))[1];

//creating new closure instance
void** clo120856 = alloc_clo(lam120178_fptr, 5);

//setting env list
clo120856[1] = kont119916;
clo120856[2] = member_u63;
clo120856[3] = x;
clo120856[4] = lst;
clo120856[5] = cdr;
void* f119918120034 = encode_clo(clo120856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f119918120034;
arg_buffer[3] = a119820120033;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120180 = encode_clo(alloc_clo(lam120180_fptr, 0));

void* lam120182_fptr() // lam120182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120183 = arg_buffer[1];
//reading env and args
void* a119818120030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120183))[7];
//not do dummy comment
void* lst = (decode_clo(env120183))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env120183))[5];
//not do dummy comment
void* x = (decode_clo(env120183))[4];
//not do dummy comment
void* car = (decode_clo(env120183))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env120183))[2];
//not do dummy comment
void* kont119916 = (decode_clo(env120183))[1];

//if-clause
bool if_guard120857 = is_true(a119818120030);
if(if_guard120857)
{
void* x119819120031 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119916);
arg_buffer[2] = x119819120031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119916))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo120859 = alloc_clo(lam120180_fptr, 6);

//setting env list
clo120859[1] = kont119916;
clo120859[2] = member_u63;
clo120859[3] = x;
clo120859[4] = equal_u63;
clo120859[5] = lst;
clo120859[6] = cdr;
void* f119919120032 = encode_clo(clo120859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119919120032;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120182 = encode_clo(alloc_clo(lam120182_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120184 = arg_buffer[1];
//reading env and args
void* kont119916 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo120861 = alloc_clo(lam120182_fptr, 7);

//setting env list
clo120861[1] = kont119916;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo120861[2] = member_u63;
clo120861[3] = car;
clo120861[4] = x;
clo120861[5] = equal_u63;
clo120861[6] = lst;
clo120861[7] = cdr;
void* f119920120029 = encode_clo(clo120861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119920120029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam120185_fptr() // lam120185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120186 = arg_buffer[1];
//reading env and args
void* a119827120046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119921 = (decode_clo(env120186))[4];
//not do dummy comment
void* fun = (decode_clo(env120186))[3];
//not do dummy comment
void* foldl = (decode_clo(env120186))[2];
//not do dummy comment
void* a119826120044 = (decode_clo(env120186))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont119921;
arg_buffer[3] = fun;
arg_buffer[4] = a119826120044;
arg_buffer[5] = a119827120046;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120185 = encode_clo(alloc_clo(lam120185_fptr, 0));

void* lam120187_fptr() // lam120187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120188 = arg_buffer[1];
//reading env and args
void* a119826120044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120188))[5];
//not do dummy comment
void* fun = (decode_clo(env120188))[4];
//not do dummy comment
void* foldl = (decode_clo(env120188))[3];
//not do dummy comment
void* lst = (decode_clo(env120188))[2];
//not do dummy comment
void* kont119921 = (decode_clo(env120188))[1];

//creating new closure instance
void** clo120863 = alloc_clo(lam120185_fptr, 4);

//setting env list
clo120863[1] = a119826120044;
clo120863[2] = foldl;
clo120863[3] = fun;
clo120863[4] = kont119921;
void* f119922120045 = encode_clo(clo120863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119922120045;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120187 = encode_clo(alloc_clo(lam120187_fptr, 0));

void* lam120189_fptr() // lam120189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120190 = arg_buffer[1];
//reading env and args
void* a119825120042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120190))[6];
//not do dummy comment
void* fun = (decode_clo(env120190))[5];
//not do dummy comment
void* acc = (decode_clo(env120190))[4];
//not do dummy comment
void* foldl = (decode_clo(env120190))[3];
//not do dummy comment
void* lst = (decode_clo(env120190))[2];
//not do dummy comment
void* kont119921 = (decode_clo(env120190))[1];

//creating new closure instance
void** clo120865 = alloc_clo(lam120187_fptr, 5);

//setting env list
clo120865[1] = kont119921;
clo120865[2] = lst;
clo120865[3] = foldl;
clo120865[4] = fun;
clo120865[5] = cdr;
void* f119923120043 = encode_clo(clo120865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f119923120043;
arg_buffer[3] = a119825120042;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120189 = encode_clo(alloc_clo(lam120189_fptr, 0));

void* lam120191_fptr() // lam120191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120192 = arg_buffer[1];
//reading env and args
void* a119824120040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120192))[7];
//not do dummy comment
void* fun = (decode_clo(env120192))[6];
//not do dummy comment
void* acc = (decode_clo(env120192))[5];
//not do dummy comment
void* car = (decode_clo(env120192))[4];
//not do dummy comment
void* foldl = (decode_clo(env120192))[3];
//not do dummy comment
void* lst = (decode_clo(env120192))[2];
//not do dummy comment
void* kont119921 = (decode_clo(env120192))[1];

//if-clause
bool if_guard120866 = is_true(a119824120040);
if(if_guard120866)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119921);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119921))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo120868 = alloc_clo(lam120189_fptr, 6);

//setting env list
clo120868[1] = kont119921;
clo120868[2] = lst;
clo120868[3] = foldl;
clo120868[4] = acc;
clo120868[5] = fun;
clo120868[6] = cdr;
void* f119924120041 = encode_clo(clo120868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119924120041;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120191 = encode_clo(alloc_clo(lam120191_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120193 = arg_buffer[1];
//reading env and args
void* kont119921 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo120870 = alloc_clo(lam120191_fptr, 7);

//setting env list
clo120870[1] = kont119921;
clo120870[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo120870[3] = foldl;
clo120870[4] = car;
clo120870[5] = acc;
clo120870[6] = fun;
clo120870[7] = cdr;
void* f119925120039 = encode_clo(clo120870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119925120039;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam120194_fptr() // lam120194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120195 = arg_buffer[1];
//reading env and args
void* a119831120054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a119829120050 = (decode_clo(env120195))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env120195))[2];
//not do dummy comment
void* kont119926 = (decode_clo(env120195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont119926;
arg_buffer[3] = a119829120050;
arg_buffer[4] = a119831120054;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120194 = encode_clo(alloc_clo(lam120194_fptr, 0));

void* lam120196_fptr() // lam120196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120197 = arg_buffer[1];
//reading env and args
void* a119830120052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a119829120050 = (decode_clo(env120197))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env120197))[4];
//not do dummy comment
void* kont119926 = (decode_clo(env120197))[3];
//not do dummy comment
void* lst2 = (decode_clo(env120197))[2];
//not do dummy comment
void* cons = (decode_clo(env120197))[1];

//creating new closure instance
void** clo120872 = alloc_clo(lam120194_fptr, 3);

//setting env list
clo120872[1] = kont119926;
clo120872[2] = reverse_u45helper;
clo120872[3] = a119829120050;
void* f119927120053 = encode_clo(clo120872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f119927120053;
arg_buffer[3] = a119830120052;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120196 = encode_clo(alloc_clo(lam120196_fptr, 0));

void* lam120198_fptr() // lam120198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120199 = arg_buffer[1];
//reading env and args
void* a119829120050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env120199))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env120199))[5];
//not do dummy comment
void* kont119926 = (decode_clo(env120199))[4];
//not do dummy comment
void* lst2 = (decode_clo(env120199))[3];
//not do dummy comment
void* car = (decode_clo(env120199))[2];
//not do dummy comment
void* cons = (decode_clo(env120199))[1];

//creating new closure instance
void** clo120874 = alloc_clo(lam120196_fptr, 5);

//setting env list
clo120874[1] = cons;
clo120874[2] = lst2;
clo120874[3] = kont119926;
clo120874[4] = reverse_u45helper;
clo120874[5] = a119829120050;
void* f119928120051 = encode_clo(clo120874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119928120051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120198 = encode_clo(alloc_clo(lam120198_fptr, 0));

void* lam120200_fptr() // lam120200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120201 = arg_buffer[1];
//reading env and args
void* a119828120048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120201))[7];
//not do dummy comment
void* lst = (decode_clo(env120201))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env120201))[5];
//not do dummy comment
void* kont119926 = (decode_clo(env120201))[4];
//not do dummy comment
void* lst2 = (decode_clo(env120201))[3];
//not do dummy comment
void* car = (decode_clo(env120201))[2];
//not do dummy comment
void* cons = (decode_clo(env120201))[1];

//if-clause
bool if_guard120875 = is_true(a119828120048);
if(if_guard120875)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119926);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119926))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo120877 = alloc_clo(lam120198_fptr, 6);

//setting env list
clo120877[1] = cons;
clo120877[2] = car;
clo120877[3] = lst2;
clo120877[4] = kont119926;
clo120877[5] = reverse_u45helper;
clo120877[6] = lst;
void* f119929120049 = encode_clo(clo120877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119929120049;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120200 = encode_clo(alloc_clo(lam120200_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120202 = arg_buffer[1];
//reading env and args
void* kont119926 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo120879 = alloc_clo(lam120200_fptr, 7);

//setting env list
clo120879[1] = cons;
clo120879[2] = car;
clo120879[3] = lst2;
clo120879[4] = kont119926;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo120879[5] = reverse_u45helper;
clo120879[6] = lst;
clo120879[7] = cdr;
void* f119930120047 = encode_clo(clo120879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119930120047;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam120203_fptr() // lam120203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120204 = arg_buffer[1];
//reading env and args
void* a119832120056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env120204))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env120204))[2];
//not do dummy comment
void* kont119931 = (decode_clo(env120204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont119931;
arg_buffer[3] = lst;
arg_buffer[4] = a119832120056;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120203 = encode_clo(alloc_clo(lam120203_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120205 = arg_buffer[1];
//reading env and args
void* kont119931 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo120881 = alloc_clo(lam120203_fptr, 3);

//setting env list
clo120881[1] = kont119931;
clo120881[2] = reverse_u45helper;
clo120881[3] = lst;
void* f119932120055 = encode_clo(clo120881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f119932120055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam120206_fptr() // lam120206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120207 = arg_buffer[1];
//reading env and args
void* x119835120061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119933 = (decode_clo(env120207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119933);
arg_buffer[2] = x119835120061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119933))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120206 = encode_clo(alloc_clo(lam120206_fptr, 0));

void* lam120208_fptr() // lam120208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120209 = arg_buffer[1];
//reading env and args
void* a119840120070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119933 = (decode_clo(env120209))[4];
//not do dummy comment
void* a119836120063 = (decode_clo(env120209))[3];
//not do dummy comment
void* a119838120066 = (decode_clo(env120209))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env120209))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont119933;
arg_buffer[3] = a119836120063;
arg_buffer[4] = a119838120066;
arg_buffer[5] = a119840120070;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120208 = encode_clo(alloc_clo(lam120208_fptr, 0));

void* lam120210_fptr() // lam120210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120211 = arg_buffer[1];
//reading env and args
void* a119839120068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119933 = (decode_clo(env120211))[6];
//not do dummy comment
void* a119836120063 = (decode_clo(env120211))[5];
//not do dummy comment
void* a119838120066 = (decode_clo(env120211))[4];
//not do dummy comment
void* cons = (decode_clo(env120211))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env120211))[2];
//not do dummy comment
void* lst2 = (decode_clo(env120211))[1];

//creating new closure instance
void** clo120883 = alloc_clo(lam120208_fptr, 4);

//setting env list
clo120883[1] = take_u45helper;
clo120883[2] = a119838120066;
clo120883[3] = a119836120063;
clo120883[4] = kont119933;
void* f119935120069 = encode_clo(clo120883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f119935120069;
arg_buffer[3] = a119839120068;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120210 = encode_clo(alloc_clo(lam120210_fptr, 0));

void* lam120212_fptr() // lam120212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120213 = arg_buffer[1];
//reading env and args
void* a119838120066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119933 = (decode_clo(env120213))[7];
//not do dummy comment
void* a119836120063 = (decode_clo(env120213))[6];
//not do dummy comment
void* lst = (decode_clo(env120213))[5];
//not do dummy comment
void* car = (decode_clo(env120213))[4];
//not do dummy comment
void* cons = (decode_clo(env120213))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env120213))[2];
//not do dummy comment
void* lst2 = (decode_clo(env120213))[1];

//creating new closure instance
void** clo120885 = alloc_clo(lam120210_fptr, 6);

//setting env list
clo120885[1] = lst2;
clo120885[2] = take_u45helper;
clo120885[3] = cons;
clo120885[4] = a119838120066;
clo120885[5] = a119836120063;
clo120885[6] = kont119933;
void* f119936120067 = encode_clo(clo120885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119936120067;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120212 = encode_clo(alloc_clo(lam120212_fptr, 0));

void* lam120215_fptr() // lam120215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120216 = arg_buffer[1];
//reading env and args
void* a119836120063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119933 = (decode_clo(env120216))[8];
//not do dummy comment
void* lst = (decode_clo(env120216))[7];
//not do dummy comment
void* cons = (decode_clo(env120216))[6];
//not do dummy comment
void* _u45 = (decode_clo(env120216))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env120216))[4];
//not do dummy comment
void* lst2 = (decode_clo(env120216))[3];
//not do dummy comment
void* n = (decode_clo(env120216))[2];
//not do dummy comment
void* car = (decode_clo(env120216))[1];
mpz_t* mpzvar120886 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120886, "1", 10);
void* a119837120064 = encode_mpz(mpzvar120886);

//creating new closure instance
void** clo120888 = alloc_clo(lam120212_fptr, 7);

//setting env list
clo120888[1] = lst2;
clo120888[2] = take_u45helper;
clo120888[3] = cons;
clo120888[4] = car;
clo120888[5] = lst;
clo120888[6] = a119836120063;
clo120888[7] = kont119933;
void* f119937120065 = encode_clo(clo120888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f119937120065;
arg_buffer[3] = n;
arg_buffer[4] = a119837120064;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120215 = encode_clo(alloc_clo(lam120215_fptr, 0));

void* lam120217_fptr() // lam120217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120218 = arg_buffer[1];
//reading env and args
void* a119834120059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env120218))[10];
//not do dummy comment
void* reverse = (decode_clo(env120218))[9];
//not do dummy comment
void* cons = (decode_clo(env120218))[8];
//not do dummy comment
void* _u45 = (decode_clo(env120218))[7];
//not do dummy comment
void* kont119933 = (decode_clo(env120218))[6];
//not do dummy comment
void* cdr = (decode_clo(env120218))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env120218))[4];
//not do dummy comment
void* lst2 = (decode_clo(env120218))[3];
//not do dummy comment
void* n = (decode_clo(env120218))[2];
//not do dummy comment
void* car = (decode_clo(env120218))[1];

//if-clause
bool if_guard120889 = is_true(a119834120059);
if(if_guard120889)
{

//creating new closure instance
void** clo120891 = alloc_clo(lam120206_fptr, 1);

//setting env list
clo120891[1] = kont119933;
void* f119934120060 = encode_clo(clo120891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f119934120060;
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
void** clo120893 = alloc_clo(lam120215_fptr, 8);

//setting env list
clo120893[1] = car;
clo120893[2] = n;
clo120893[3] = lst2;
clo120893[4] = take_u45helper;
clo120893[5] = _u45;
clo120893[6] = cons;
clo120893[7] = lst;
clo120893[8] = kont119933;
void* f119938120062 = encode_clo(clo120893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119938120062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120217 = encode_clo(alloc_clo(lam120217_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120220 = arg_buffer[1];
//reading env and args
void* kont119933 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar120894 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120894, "0", 10);
void* a119833120057 = encode_mpz(mpzvar120894);

//creating new closure instance
void** clo120896 = alloc_clo(lam120217_fptr, 10);

//setting env list
clo120896[1] = car;
clo120896[2] = n;
clo120896[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo120896[4] = take_u45helper;
clo120896[5] = cdr;
clo120896[6] = kont119933;
clo120896[7] = _u45;
clo120896[8] = cons;
clo120896[9] = reverse;
clo120896[10] = lst;
void* f119939120058 = encode_clo(clo120896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f119939120058;
arg_buffer[3] = n;
arg_buffer[4] = a119833120057;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam120221_fptr() // lam120221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120222 = arg_buffer[1];
//reading env and args
void* a119841120072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env120222))[4];
//not do dummy comment
void* kont119940 = (decode_clo(env120222))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env120222))[2];
//not do dummy comment
void* n = (decode_clo(env120222))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont119940;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a119841120072;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120221 = encode_clo(alloc_clo(lam120221_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120223 = arg_buffer[1];
//reading env and args
void* kont119940 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo120898 = alloc_clo(lam120221_fptr, 4);

//setting env list
clo120898[1] = n;
clo120898[2] = take_u45helper;
clo120898[3] = kont119940;
clo120898[4] = lst;
void* f119941120071 = encode_clo(clo120898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f119941120071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam120225_fptr() // lam120225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120226 = arg_buffer[1];
//reading env and args
void* a119846120080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a119844120076 = (decode_clo(env120226))[3];
//not do dummy comment
void* _u43 = (decode_clo(env120226))[2];
//not do dummy comment
void* kont119942 = (decode_clo(env120226))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont119942;
arg_buffer[3] = a119844120076;
arg_buffer[4] = a119846120080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120225 = encode_clo(alloc_clo(lam120225_fptr, 0));

void* lam120227_fptr() // lam120227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120228 = arg_buffer[1];
//reading env and args
void* a119845120078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env120228))[4];
//not do dummy comment
void* a119844120076 = (decode_clo(env120228))[3];
//not do dummy comment
void* _u43 = (decode_clo(env120228))[2];
//not do dummy comment
void* kont119942 = (decode_clo(env120228))[1];

//creating new closure instance
void** clo120900 = alloc_clo(lam120225_fptr, 3);

//setting env list
clo120900[1] = kont119942;
clo120900[2] = _u43;
clo120900[3] = a119844120076;
void* f119943120079 = encode_clo(clo120900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f119943120079;
arg_buffer[3] = a119845120078;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120227 = encode_clo(alloc_clo(lam120227_fptr, 0));

void* lam120230_fptr() // lam120230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120231 = arg_buffer[1];
//reading env and args
void* a119842120074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120231))[5];
//not do dummy comment
void* lst = (decode_clo(env120231))[4];
//not do dummy comment
void* length = (decode_clo(env120231))[3];
//not do dummy comment
void* _u43 = (decode_clo(env120231))[2];
//not do dummy comment
void* kont119942 = (decode_clo(env120231))[1];

//if-clause
bool if_guard120901 = is_true(a119842120074);
if(if_guard120901)
{
mpz_t* mpzvar120902 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120902, "0", 10);
void* x119843120075 = encode_mpz(mpzvar120902);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119942);
arg_buffer[2] = x119843120075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119942))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar120903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120903, "1", 10);
void* a119844120076 = encode_mpz(mpzvar120903);

//creating new closure instance
void** clo120905 = alloc_clo(lam120227_fptr, 4);

//setting env list
clo120905[1] = kont119942;
clo120905[2] = _u43;
clo120905[3] = a119844120076;
clo120905[4] = length;
void* f119944120077 = encode_clo(clo120905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119944120077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120230 = encode_clo(alloc_clo(lam120230_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120232 = arg_buffer[1];
//reading env and args
void* kont119942 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo120907 = alloc_clo(lam120230_fptr, 5);

//setting env list
clo120907[1] = kont119942;
clo120907[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo120907[3] = length;
clo120907[4] = lst;
clo120907[5] = cdr;
void* f119945120073 = encode_clo(clo120907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119945120073;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam120233_fptr() // lam120233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120234 = arg_buffer[1];
//reading env and args
void* x119848120084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119946 = (decode_clo(env120234))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119946);
arg_buffer[2] = x119848120084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119946))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120233 = encode_clo(alloc_clo(lam120233_fptr, 0));

void* lam120235_fptr() // lam120235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120236 = arg_buffer[1];
//reading env and args
void* a119852120092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a119850120088 = (decode_clo(env120236))[3];
//not do dummy comment
void* kont119946 = (decode_clo(env120236))[2];
//not do dummy comment
void* cons = (decode_clo(env120236))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont119946;
arg_buffer[3] = a119850120088;
arg_buffer[4] = a119852120092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120235 = encode_clo(alloc_clo(lam120235_fptr, 0));

void* lam120237_fptr() // lam120237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120238 = arg_buffer[1];
//reading env and args
void* a119851120090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env120238))[5];
//not do dummy comment
void* kont119946 = (decode_clo(env120238))[4];
//not do dummy comment
void* cons = (decode_clo(env120238))[3];
//not do dummy comment
void* proc = (decode_clo(env120238))[2];
//not do dummy comment
void* a119850120088 = (decode_clo(env120238))[1];

//creating new closure instance
void** clo120909 = alloc_clo(lam120235_fptr, 3);

//setting env list
clo120909[1] = cons;
clo120909[2] = kont119946;
clo120909[3] = a119850120088;
void* f119948120091 = encode_clo(clo120909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f119948120091;
arg_buffer[3] = proc;
arg_buffer[4] = a119851120090;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120237 = encode_clo(alloc_clo(lam120237_fptr, 0));

void* lam120239_fptr() // lam120239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120240 = arg_buffer[1];
//reading env and args
void* a119850120088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120240))[6];
//not do dummy comment
void* lst = (decode_clo(env120240))[5];
//not do dummy comment
void* map = (decode_clo(env120240))[4];
//not do dummy comment
void* proc = (decode_clo(env120240))[3];
//not do dummy comment
void* kont119946 = (decode_clo(env120240))[2];
//not do dummy comment
void* cons = (decode_clo(env120240))[1];

//creating new closure instance
void** clo120911 = alloc_clo(lam120237_fptr, 5);

//setting env list
clo120911[1] = a119850120088;
clo120911[2] = proc;
clo120911[3] = cons;
clo120911[4] = kont119946;
clo120911[5] = map;
void* f119949120089 = encode_clo(clo120911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119949120089;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120239 = encode_clo(alloc_clo(lam120239_fptr, 0));

void* lam120241_fptr() // lam120241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120242 = arg_buffer[1];
//reading env and args
void* a119849120086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120242))[6];
//not do dummy comment
void* lst = (decode_clo(env120242))[5];
//not do dummy comment
void* map = (decode_clo(env120242))[4];
//not do dummy comment
void* proc = (decode_clo(env120242))[3];
//not do dummy comment
void* kont119946 = (decode_clo(env120242))[2];
//not do dummy comment
void* cons = (decode_clo(env120242))[1];

//creating new closure instance
void** clo120913 = alloc_clo(lam120239_fptr, 6);

//setting env list
clo120913[1] = cons;
clo120913[2] = kont119946;
clo120913[3] = proc;
clo120913[4] = map;
clo120913[5] = lst;
clo120913[6] = cdr;
void* f119950120087 = encode_clo(clo120913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f119950120087;
arg_buffer[3] = a119849120086;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120241 = encode_clo(alloc_clo(lam120241_fptr, 0));

void* lam120243_fptr() // lam120243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120244 = arg_buffer[1];
//reading env and args
void* a119847120082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env120244))[8];
//not do dummy comment
void* map = (decode_clo(env120244))[7];
//not do dummy comment
void* proc = (decode_clo(env120244))[6];
//not do dummy comment
void* cons = (decode_clo(env120244))[5];
//not do dummy comment
void* list = (decode_clo(env120244))[4];
//not do dummy comment
void* cdr = (decode_clo(env120244))[3];
//not do dummy comment
void* kont119946 = (decode_clo(env120244))[2];
//not do dummy comment
void* car = (decode_clo(env120244))[1];

//if-clause
bool if_guard120914 = is_true(a119847120082);
if(if_guard120914)
{

//creating new closure instance
void** clo120916 = alloc_clo(lam120233_fptr, 1);

//setting env list
clo120916[1] = kont119946;
void* f119947120083 = encode_clo(clo120916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f119947120083;
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
void** clo120918 = alloc_clo(lam120241_fptr, 6);

//setting env list
clo120918[1] = cons;
clo120918[2] = kont119946;
clo120918[3] = proc;
clo120918[4] = map;
clo120918[5] = lst;
clo120918[6] = cdr;
void* f119951120085 = encode_clo(clo120918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119951120085;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120243 = encode_clo(alloc_clo(lam120243_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120245 = arg_buffer[1];
//reading env and args
void* kont119946 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo120920 = alloc_clo(lam120243_fptr, 8);

//setting env list
clo120920[1] = car;
clo120920[2] = kont119946;
clo120920[3] = cdr;
clo120920[4] = list;
clo120920[5] = cons;
clo120920[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo120920[7] = map;
clo120920[8] = lst;
void* f119952120081 = encode_clo(clo120920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119952120081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam120246_fptr() // lam120246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120247 = arg_buffer[1];
//reading env and args
void* x119854120096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119953 = (decode_clo(env120247))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119953);
arg_buffer[2] = x119854120096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119953))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120246 = encode_clo(alloc_clo(lam120246_fptr, 0));

void* lam120248_fptr() // lam120248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120249 = arg_buffer[1];
//reading env and args
void* a119859120106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119953 = (decode_clo(env120249))[3];
//not do dummy comment
void* a119857120102 = (decode_clo(env120249))[2];
//not do dummy comment
void* cons = (decode_clo(env120249))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont119953;
arg_buffer[3] = a119857120102;
arg_buffer[4] = a119859120106;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120248 = encode_clo(alloc_clo(lam120248_fptr, 0));

void* lam120250_fptr() // lam120250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120251 = arg_buffer[1];
//reading env and args
void* a119858120104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119953 = (decode_clo(env120251))[5];
//not do dummy comment
void* op = (decode_clo(env120251))[4];
//not do dummy comment
void* a119857120102 = (decode_clo(env120251))[3];
//not do dummy comment
void* filter = (decode_clo(env120251))[2];
//not do dummy comment
void* cons = (decode_clo(env120251))[1];

//creating new closure instance
void** clo120922 = alloc_clo(lam120248_fptr, 3);

//setting env list
clo120922[1] = cons;
clo120922[2] = a119857120102;
clo120922[3] = kont119953;
void* f119955120105 = encode_clo(clo120922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f119955120105;
arg_buffer[3] = op;
arg_buffer[4] = a119858120104;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120250 = encode_clo(alloc_clo(lam120250_fptr, 0));

void* lam120252_fptr() // lam120252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120253 = arg_buffer[1];
//reading env and args
void* a119857120102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120253))[6];
//not do dummy comment
void* op = (decode_clo(env120253))[5];
//not do dummy comment
void* filter = (decode_clo(env120253))[4];
//not do dummy comment
void* cons = (decode_clo(env120253))[3];
//not do dummy comment
void* lst = (decode_clo(env120253))[2];
//not do dummy comment
void* kont119953 = (decode_clo(env120253))[1];

//creating new closure instance
void** clo120924 = alloc_clo(lam120250_fptr, 5);

//setting env list
clo120924[1] = cons;
clo120924[2] = filter;
clo120924[3] = a119857120102;
clo120924[4] = op;
clo120924[5] = kont119953;
void* f119956120103 = encode_clo(clo120924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119956120103;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120252 = encode_clo(alloc_clo(lam120252_fptr, 0));

void* lam120254_fptr() // lam120254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120255 = arg_buffer[1];
//reading env and args
void* a119860120108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119953 = (decode_clo(env120255))[3];
//not do dummy comment
void* op = (decode_clo(env120255))[2];
//not do dummy comment
void* filter = (decode_clo(env120255))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont119953;
arg_buffer[3] = op;
arg_buffer[4] = a119860120108;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120254 = encode_clo(alloc_clo(lam120254_fptr, 0));

void* lam120256_fptr() // lam120256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120257 = arg_buffer[1];
//reading env and args
void* a119856120100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120257))[7];
//not do dummy comment
void* op = (decode_clo(env120257))[6];
//not do dummy comment
void* cons = (decode_clo(env120257))[5];
//not do dummy comment
void* lst = (decode_clo(env120257))[4];
//not do dummy comment
void* kont119953 = (decode_clo(env120257))[3];
//not do dummy comment
void* filter = (decode_clo(env120257))[2];
//not do dummy comment
void* car = (decode_clo(env120257))[1];

//if-clause
bool if_guard120925 = is_true(a119856120100);
if(if_guard120925)
{

//creating new closure instance
void** clo120927 = alloc_clo(lam120252_fptr, 6);

//setting env list
clo120927[1] = kont119953;
clo120927[2] = lst;
clo120927[3] = cons;
clo120927[4] = filter;
clo120927[5] = op;
clo120927[6] = cdr;
void* f119957120101 = encode_clo(clo120927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119957120101;
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
void** clo120929 = alloc_clo(lam120254_fptr, 3);

//setting env list
clo120929[1] = filter;
clo120929[2] = op;
clo120929[3] = kont119953;
void* f119958120107 = encode_clo(clo120929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119958120107;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120256 = encode_clo(alloc_clo(lam120256_fptr, 0));

void* lam120258_fptr() // lam120258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120259 = arg_buffer[1];
//reading env and args
void* a119855120098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120259))[7];
//not do dummy comment
void* op = (decode_clo(env120259))[6];
//not do dummy comment
void* cons = (decode_clo(env120259))[5];
//not do dummy comment
void* lst = (decode_clo(env120259))[4];
//not do dummy comment
void* kont119953 = (decode_clo(env120259))[3];
//not do dummy comment
void* filter = (decode_clo(env120259))[2];
//not do dummy comment
void* car = (decode_clo(env120259))[1];

//creating new closure instance
void** clo120931 = alloc_clo(lam120256_fptr, 7);

//setting env list
clo120931[1] = car;
clo120931[2] = filter;
clo120931[3] = kont119953;
clo120931[4] = lst;
clo120931[5] = cons;
clo120931[6] = op;
clo120931[7] = cdr;
void* f119959120099 = encode_clo(clo120931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f119959120099;
arg_buffer[3] = a119855120098;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120258 = encode_clo(alloc_clo(lam120258_fptr, 0));

void* lam120260_fptr() // lam120260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120261 = arg_buffer[1];
//reading env and args
void* a119853120094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env120261))[8];
//not do dummy comment
void* cons = (decode_clo(env120261))[7];
//not do dummy comment
void* list = (decode_clo(env120261))[6];
//not do dummy comment
void* cdr = (decode_clo(env120261))[5];
//not do dummy comment
void* lst = (decode_clo(env120261))[4];
//not do dummy comment
void* kont119953 = (decode_clo(env120261))[3];
//not do dummy comment
void* filter = (decode_clo(env120261))[2];
//not do dummy comment
void* car = (decode_clo(env120261))[1];

//if-clause
bool if_guard120932 = is_true(a119853120094);
if(if_guard120932)
{

//creating new closure instance
void** clo120934 = alloc_clo(lam120246_fptr, 1);

//setting env list
clo120934[1] = kont119953;
void* f119954120095 = encode_clo(clo120934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f119954120095;
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
void** clo120936 = alloc_clo(lam120258_fptr, 7);

//setting env list
clo120936[1] = car;
clo120936[2] = filter;
clo120936[3] = kont119953;
clo120936[4] = lst;
clo120936[5] = cons;
clo120936[6] = op;
clo120936[7] = cdr;
void* f119960120097 = encode_clo(clo120936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119960120097;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120260 = encode_clo(alloc_clo(lam120260_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120262 = arg_buffer[1];
//reading env and args
void* kont119953 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo120938 = alloc_clo(lam120260_fptr, 8);

//setting env list
clo120938[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo120938[2] = filter;
clo120938[3] = kont119953;
clo120938[4] = lst;
clo120938[5] = cdr;
clo120938[6] = list;
clo120938[7] = cons;
clo120938[8] = op;
void* f119961120093 = encode_clo(clo120938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119961120093;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam120263_fptr() // lam120263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120264 = arg_buffer[1];
//reading env and args
void* a119865120116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119962 = (decode_clo(env120264))[3];
//not do dummy comment
void* a119863120113 = (decode_clo(env120264))[2];
//not do dummy comment
void* drop = (decode_clo(env120264))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont119962;
arg_buffer[3] = a119863120113;
arg_buffer[4] = a119865120116;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120263 = encode_clo(alloc_clo(lam120263_fptr, 0));

void* lam120266_fptr() // lam120266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120267 = arg_buffer[1];
//reading env and args
void* a119863120113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env120267))[4];
//not do dummy comment
void* _u45 = (decode_clo(env120267))[3];
//not do dummy comment
void* kont119962 = (decode_clo(env120267))[2];
//not do dummy comment
void* n = (decode_clo(env120267))[1];
mpz_t* mpzvar120939 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120939, "1", 10);
void* a119864120114 = encode_mpz(mpzvar120939);

//creating new closure instance
void** clo120941 = alloc_clo(lam120263_fptr, 3);

//setting env list
clo120941[1] = drop;
clo120941[2] = a119863120113;
clo120941[3] = kont119962;
void* f119963120115 = encode_clo(clo120941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f119963120115;
arg_buffer[3] = n;
arg_buffer[4] = a119864120114;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120266 = encode_clo(alloc_clo(lam120266_fptr, 0));

void* lam120268_fptr() // lam120268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120269 = arg_buffer[1];
//reading env and args
void* a119862120111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120269))[6];
//not do dummy comment
void* _u45 = (decode_clo(env120269))[5];
//not do dummy comment
void* lst = (decode_clo(env120269))[4];
//not do dummy comment
void* drop = (decode_clo(env120269))[3];
//not do dummy comment
void* kont119962 = (decode_clo(env120269))[2];
//not do dummy comment
void* n = (decode_clo(env120269))[1];

//if-clause
bool if_guard120942 = is_true(a119862120111);
if(if_guard120942)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119962);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119962))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo120944 = alloc_clo(lam120266_fptr, 4);

//setting env list
clo120944[1] = n;
clo120944[2] = kont119962;
clo120944[3] = _u45;
clo120944[4] = drop;
void* f119964120112 = encode_clo(clo120944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119964120112;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120268 = encode_clo(alloc_clo(lam120268_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120271 = arg_buffer[1];
//reading env and args
void* kont119962 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar120945 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120945, "0", 10);
void* a119861120109 = encode_mpz(mpzvar120945);

//creating new closure instance
void** clo120947 = alloc_clo(lam120268_fptr, 6);

//setting env list
clo120947[1] = n;
clo120947[2] = kont119962;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo120947[3] = drop;
clo120947[4] = lst;
clo120947[5] = _u45;
clo120947[6] = cdr;
void* f119965120110 = encode_clo(clo120947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f119965120110;
arg_buffer[3] = n;
arg_buffer[4] = a119861120109;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam120272_fptr() // lam120272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120273 = arg_buffer[1];
//reading env and args
void* a119869120124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119966 = (decode_clo(env120273))[3];
//not do dummy comment
void* proc = (decode_clo(env120273))[2];
//not do dummy comment
void* a119867120120 = (decode_clo(env120273))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont119966;
arg_buffer[3] = a119867120120;
arg_buffer[4] = a119869120124;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120272 = encode_clo(alloc_clo(lam120272_fptr, 0));

void* lam120274_fptr() // lam120274 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120275 = arg_buffer[1];
//reading env and args
void* a119868120122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119966 = (decode_clo(env120275))[5];
//not do dummy comment
void* foldr = (decode_clo(env120275))[4];
//not do dummy comment
void* proc = (decode_clo(env120275))[3];
//not do dummy comment
void* acc = (decode_clo(env120275))[2];
//not do dummy comment
void* a119867120120 = (decode_clo(env120275))[1];

//creating new closure instance
void** clo120949 = alloc_clo(lam120272_fptr, 3);

//setting env list
clo120949[1] = a119867120120;
clo120949[2] = proc;
clo120949[3] = kont119966;
void* f119967120123 = encode_clo(clo120949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f119967120123;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a119868120122;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120274 = encode_clo(alloc_clo(lam120274_fptr, 0));

void* lam120276_fptr() // lam120276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120277 = arg_buffer[1];
//reading env and args
void* a119867120120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120277))[6];
//not do dummy comment
void* kont119966 = (decode_clo(env120277))[5];
//not do dummy comment
void* foldr = (decode_clo(env120277))[4];
//not do dummy comment
void* lst = (decode_clo(env120277))[3];
//not do dummy comment
void* proc = (decode_clo(env120277))[2];
//not do dummy comment
void* acc = (decode_clo(env120277))[1];

//creating new closure instance
void** clo120951 = alloc_clo(lam120274_fptr, 5);

//setting env list
clo120951[1] = a119867120120;
clo120951[2] = acc;
clo120951[3] = proc;
clo120951[4] = foldr;
clo120951[5] = kont119966;
void* f119968120121 = encode_clo(clo120951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119968120121;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120276 = encode_clo(alloc_clo(lam120276_fptr, 0));

void* lam120278_fptr() // lam120278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120279 = arg_buffer[1];
//reading env and args
void* a119866120118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120279))[7];
//not do dummy comment
void* kont119966 = (decode_clo(env120279))[6];
//not do dummy comment
void* car = (decode_clo(env120279))[5];
//not do dummy comment
void* foldr = (decode_clo(env120279))[4];
//not do dummy comment
void* lst = (decode_clo(env120279))[3];
//not do dummy comment
void* proc = (decode_clo(env120279))[2];
//not do dummy comment
void* acc = (decode_clo(env120279))[1];

//if-clause
bool if_guard120952 = is_true(a119866120118);
if(if_guard120952)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119966);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119966))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo120954 = alloc_clo(lam120276_fptr, 6);

//setting env list
clo120954[1] = acc;
clo120954[2] = proc;
clo120954[3] = lst;
clo120954[4] = foldr;
clo120954[5] = kont119966;
clo120954[6] = cdr;
void* f119969120119 = encode_clo(clo120954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119969120119;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120278 = encode_clo(alloc_clo(lam120278_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120280 = arg_buffer[1];
//reading env and args
void* kont119966 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo120956 = alloc_clo(lam120278_fptr, 7);

//setting env list
clo120956[1] = acc;
clo120956[2] = proc;
clo120956[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo120956[4] = foldr;
clo120956[5] = car;
clo120956[6] = kont119966;
clo120956[7] = cdr;
void* f119970120117 = encode_clo(clo120956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119970120117;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam120281_fptr() // lam120281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120282 = arg_buffer[1];
//reading env and args
void* a119873120132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a119871120128 = (decode_clo(env120282))[3];
//not do dummy comment
void* kont119971 = (decode_clo(env120282))[2];
//not do dummy comment
void* cons = (decode_clo(env120282))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont119971;
arg_buffer[3] = a119871120128;
arg_buffer[4] = a119873120132;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120281 = encode_clo(alloc_clo(lam120281_fptr, 0));

void* lam120283_fptr() // lam120283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120284 = arg_buffer[1];
//reading env and args
void* a119872120130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a119871120128 = (decode_clo(env120284))[5];
//not do dummy comment
void* kont119971 = (decode_clo(env120284))[4];
//not do dummy comment
void* append = (decode_clo(env120284))[3];
//not do dummy comment
void* lst2 = (decode_clo(env120284))[2];
//not do dummy comment
void* cons = (decode_clo(env120284))[1];

//creating new closure instance
void** clo120958 = alloc_clo(lam120281_fptr, 3);

//setting env list
clo120958[1] = cons;
clo120958[2] = kont119971;
clo120958[3] = a119871120128;
void* f119972120131 = encode_clo(clo120958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f119972120131;
arg_buffer[3] = a119872120130;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120283 = encode_clo(alloc_clo(lam120283_fptr, 0));

void* lam120285_fptr() // lam120285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120286 = arg_buffer[1];
//reading env and args
void* a119871120128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120286))[6];
//not do dummy comment
void* kont119971 = (decode_clo(env120286))[5];
//not do dummy comment
void* append = (decode_clo(env120286))[4];
//not do dummy comment
void* lst2 = (decode_clo(env120286))[3];
//not do dummy comment
void* lst1 = (decode_clo(env120286))[2];
//not do dummy comment
void* cons = (decode_clo(env120286))[1];

//creating new closure instance
void** clo120960 = alloc_clo(lam120283_fptr, 5);

//setting env list
clo120960[1] = cons;
clo120960[2] = lst2;
clo120960[3] = append;
clo120960[4] = kont119971;
clo120960[5] = a119871120128;
void* f119973120129 = encode_clo(clo120960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f119973120129;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120285 = encode_clo(alloc_clo(lam120285_fptr, 0));

void* lam120287_fptr() // lam120287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120288 = arg_buffer[1];
//reading env and args
void* a119870120126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env120288))[7];
//not do dummy comment
void* kont119971 = (decode_clo(env120288))[6];
//not do dummy comment
void* append = (decode_clo(env120288))[5];
//not do dummy comment
void* lst2 = (decode_clo(env120288))[4];
//not do dummy comment
void* cons = (decode_clo(env120288))[3];
//not do dummy comment
void* lst1 = (decode_clo(env120288))[2];
//not do dummy comment
void* car = (decode_clo(env120288))[1];

//if-clause
bool if_guard120961 = is_true(a119870120126);
if(if_guard120961)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119971);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo120963 = alloc_clo(lam120285_fptr, 6);

//setting env list
clo120963[1] = cons;
clo120963[2] = lst1;
clo120963[3] = lst2;
clo120963[4] = append;
clo120963[5] = kont119971;
clo120963[6] = cdr;
void* f119974120127 = encode_clo(clo120963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f119974120127;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam120287 = encode_clo(alloc_clo(lam120287_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120289 = arg_buffer[1];
//reading env and args
void* kont119971 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo120965 = alloc_clo(lam120287_fptr, 7);

//setting env list
clo120965[1] = car;
clo120965[2] = lst1;
clo120965[3] = cons;
clo120965[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo120965[5] = append;
clo120965[6] = kont119971;
clo120965[7] = cdr;
void* f119975120125 = encode_clo(clo120965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f119975120125;
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
void* _120290 = arg_buffer[1];
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

void* kont119976120133 = prim_car(lst);
void* lst120134 = prim_cdr(lst);
void* x119874120135 = apply_prim_hash(lst120134);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119976120133);
arg_buffer[2] = x119874120135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119976120133))[0]);
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
void* _120291 = arg_buffer[1];
//reading env and args
void* kont119978 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x119875120136 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119978);
arg_buffer[2] = x119875120136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119978))[0]);
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
void* _120292 = arg_buffer[1];
//reading env and args
void* kont119979 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x119876120137 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119979);
arg_buffer[2] = x119876120137;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119979))[0]);
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
void* _120293 = arg_buffer[1];
//reading env and args
void* kont119980 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x119877120138 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119980);
arg_buffer[2] = x119877120138;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119980))[0]);
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
void* _120294 = arg_buffer[1];
//reading env and args
void* kont119981 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x119878120139 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119981);
arg_buffer[2] = x119878120139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119981))[0]);
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
void* _120300 = arg_buffer[1];
//reading env and args
void* kont119982 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar120966 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120966, "100", 10);
void* a119879120140 = encode_mpz(mpzvar120966);
mpz_t* mpzvar120967 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120967, "90", 10);
void* a119880120141 = encode_mpz(mpzvar120967);
mpz_t* mpzvar120968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120968, "80", 10);
void* a119881120142 = encode_mpz(mpzvar120968);
mpz_t* mpzvar120969 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120969, "70", 10);
void* a119882120143 = encode_mpz(mpzvar120969);
mpz_t* mpzvar120970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar120970, "60", 10);
void* a119883120144 = encode_mpz(mpzvar120970);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62_u61);
arg_buffer[2] = kont119982;
arg_buffer[3] = a119879120140;
arg_buffer[4] = a119880120141;
arg_buffer[5] = a119881120142;
arg_buffer[6] = a119882120143;
arg_buffer[7] = a119883120144;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam120301_fptr() // lam120301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env120302 = arg_buffer[1];
//reading env and args
void* x119884120146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont119983 = (decode_clo(env120302))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont119983);
arg_buffer[2] = x119884120146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont119983))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam120301 = encode_clo(alloc_clo(lam120301_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _120303 = arg_buffer[1];
//reading env and args
void* kont119983 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo120972 = alloc_clo(lam120301_fptr, 1);

//setting env list
clo120972[1] = kont119983;
void* f119984120145 = encode_clo(clo120972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f119984120145;
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

