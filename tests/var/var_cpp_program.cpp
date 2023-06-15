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
void* _132259 = arg_buffer[1];
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

void* kont131999132099 = prim_car(lst);
void* lst132100 = prim_cdr(lst);
void* x131912132101 = apply_prim__u43(lst132100);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont131999132099);
arg_buffer[2] = x131912132101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont131999132099))[0]);
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
void* _132260 = arg_buffer[1];
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

void* kont132001132102 = prim_car(lst);
void* lst132103 = prim_cdr(lst);
void* x131913132104 = apply_prim__u45(lst132103);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132001132102);
arg_buffer[2] = x131913132104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132001132102))[0]);
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
void* _132261 = arg_buffer[1];
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

void* kont132003132105 = prim_car(lst);
void* lst132106 = prim_cdr(lst);
void* x131914132107 = apply_prim__u42(lst132106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132003132105);
arg_buffer[2] = x131914132107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132003132105))[0]);
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
void* _132262 = arg_buffer[1];
//reading env and args
void* kont132005 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x131915132108 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132005);
arg_buffer[2] = x131915132108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132005))[0]);
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
void* _132263 = arg_buffer[1];
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

void* kont132006132109 = prim_car(lst);
void* lst132110 = prim_cdr(lst);
void* x131916132111 = apply_prim__u47(lst132110);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132006132109);
arg_buffer[2] = x131916132111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132006132109))[0]);
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
void* _132264 = arg_buffer[1];
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

void* kont132008132112 = prim_car(lst);
void* lst132113 = prim_cdr(lst);
void* x131917132114 = apply_prim__u61(lst132113);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132008132112);
arg_buffer[2] = x131917132114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132008132112))[0]);
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
void* _132265 = arg_buffer[1];
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

void* kont132010132115 = prim_car(lst);
void* lst132116 = prim_cdr(lst);
void* x131918132117 = apply_prim__u62(lst132116);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132010132115);
arg_buffer[2] = x131918132117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132010132115))[0]);
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
void* _132266 = arg_buffer[1];
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

void* kont132012132118 = prim_car(lst);
void* lst132119 = prim_cdr(lst);
void* x131919132120 = apply_prim__u60(lst132119);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132012132118);
arg_buffer[2] = x131919132120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132012132118))[0]);
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
void* _132267 = arg_buffer[1];
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

void* kont132014132121 = prim_car(lst);
void* lst132122 = prim_cdr(lst);
void* x131920132123 = apply_prim__u60_u61(lst132122);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132014132121);
arg_buffer[2] = x131920132123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132014132121))[0]);
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
void* _132268 = arg_buffer[1];
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

void* kont132016132124 = prim_car(lst);
void* lst132125 = prim_cdr(lst);
void* x131921132126 = apply_prim__u62_u61(lst132125);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132016132124);
arg_buffer[2] = x131921132126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132016132124))[0]);
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
void* _132269 = arg_buffer[1];
//reading env and args
void* kont132018 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x131922132127 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132018);
arg_buffer[2] = x131922132127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132018))[0]);
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
void* _132270 = arg_buffer[1];
//reading env and args
void* kont132019 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x131923132128 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132019);
arg_buffer[2] = x131923132128;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132019))[0]);
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
void* _132271 = arg_buffer[1];
//reading env and args
void* kont132020 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x131924132129 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132020);
arg_buffer[2] = x131924132129;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132020))[0]);
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
void* _132272 = arg_buffer[1];
//reading env and args
void* kont132021 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x131925132130 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132021);
arg_buffer[2] = x131925132130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132021))[0]);
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
void* _132273 = arg_buffer[1];
//reading env and args
void* kont132022 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x131926132131 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132022);
arg_buffer[2] = x131926132131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132022))[0]);
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
void* _132274 = arg_buffer[1];
//reading env and args
void* kont132023 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x131927132132 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132023);
arg_buffer[2] = x131927132132;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132023))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam132275_fptr() // lam132275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132276 = arg_buffer[1];
//reading env and args
void* a131930132136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env132276))[3];
//not do dummy comment
void* a131928132133 = (decode_clo(env132276))[2];
//not do dummy comment
void* kont132024 = (decode_clo(env132276))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont132024;
arg_buffer[3] = a131928132133;
arg_buffer[4] = a131930132136;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132275 = encode_clo(alloc_clo(lam132275_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132279 = arg_buffer[1];
//reading env and args
void* kont132024 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar132954 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar132954, "0", 10);
void* a131928132133 = encode_mpz(mpzvar132954);
mpz_t* mpzvar132955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar132955, "2", 10);
void* a131929132134 = encode_mpz(mpzvar132955);

//creating new closure instance
void** clo132957 = alloc_clo(lam132275_fptr, 3);

//setting env list
clo132957[1] = kont132024;
clo132957[2] = a131928132133;
clo132957[3] = equal_u63;
void* f132025132135 = encode_clo(clo132957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f132025132135;
arg_buffer[3] = x;
arg_buffer[4] = a131929132134;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam132280_fptr() // lam132280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132281 = arg_buffer[1];
//reading env and args
void* a131933132140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131931132137 = (decode_clo(env132281))[3];
//not do dummy comment
void* kont132026 = (decode_clo(env132281))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env132281))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont132026;
arg_buffer[3] = a131931132137;
arg_buffer[4] = a131933132140;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132280 = encode_clo(alloc_clo(lam132280_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132284 = arg_buffer[1];
//reading env and args
void* kont132026 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar132958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar132958, "1", 10);
void* a131931132137 = encode_mpz(mpzvar132958);
mpz_t* mpzvar132959 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar132959, "2", 10);
void* a131932132138 = encode_mpz(mpzvar132959);

//creating new closure instance
void** clo132961 = alloc_clo(lam132280_fptr, 3);

//setting env list
clo132961[1] = equal_u63;
clo132961[2] = kont132026;
clo132961[3] = a131931132137;
void* f132027132139 = encode_clo(clo132961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f132027132139;
arg_buffer[3] = x;
arg_buffer[4] = a131932132138;
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
void* _132285 = arg_buffer[1];
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

void* kont132028132141 = prim_car(x);
void* x132142 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132028132141);
arg_buffer[2] = x132142;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132028132141))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam132288_fptr() // lam132288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132289 = arg_buffer[1];
//reading env and args
void* a131939132152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132030 = (decode_clo(env132289))[3];
//not do dummy comment
void* x = (decode_clo(env132289))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env132289))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont132030;
arg_buffer[3] = x;
arg_buffer[4] = a131939132152;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132288 = encode_clo(alloc_clo(lam132288_fptr, 0));

void* lam132290_fptr() // lam132290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132291 = arg_buffer[1];
//reading env and args
void* a131937132149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132291))[5];
//not do dummy comment
void* lst = (decode_clo(env132291))[4];
//not do dummy comment
void* kont132030 = (decode_clo(env132291))[3];
//not do dummy comment
void* x = (decode_clo(env132291))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env132291))[1];

//if-clause
bool if_guard132962 = is_true(a131937132149);
if(if_guard132962)
{
void* x131938132150 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132030);
arg_buffer[2] = x131938132150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132030))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo132964 = alloc_clo(lam132288_fptr, 3);

//setting env list
clo132964[1] = member_u63;
clo132964[2] = x;
clo132964[3] = kont132030;
void* f132031132151 = encode_clo(clo132964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132031132151;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132290 = encode_clo(alloc_clo(lam132290_fptr, 0));

void* lam132292_fptr() // lam132292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132293 = arg_buffer[1];
//reading env and args
void* a131936132147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132293))[6];
//not do dummy comment
void* lst = (decode_clo(env132293))[5];
//not do dummy comment
void* kont132030 = (decode_clo(env132293))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env132293))[3];
//not do dummy comment
void* x = (decode_clo(env132293))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env132293))[1];

//creating new closure instance
void** clo132966 = alloc_clo(lam132290_fptr, 5);

//setting env list
clo132966[1] = member_u63;
clo132966[2] = x;
clo132966[3] = kont132030;
clo132966[4] = lst;
clo132966[5] = cdr;
void* f132032132148 = encode_clo(clo132966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f132032132148;
arg_buffer[3] = a131936132147;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132292 = encode_clo(alloc_clo(lam132292_fptr, 0));

void* lam132294_fptr() // lam132294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132295 = arg_buffer[1];
//reading env and args
void* a131934132144 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132295))[7];
//not do dummy comment
void* lst = (decode_clo(env132295))[6];
//not do dummy comment
void* kont132030 = (decode_clo(env132295))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env132295))[4];
//not do dummy comment
void* x = (decode_clo(env132295))[3];
//not do dummy comment
void* car = (decode_clo(env132295))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env132295))[1];

//if-clause
bool if_guard132967 = is_true(a131934132144);
if(if_guard132967)
{
void* x131935132145 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132030);
arg_buffer[2] = x131935132145;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132030))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo132969 = alloc_clo(lam132292_fptr, 6);

//setting env list
clo132969[1] = member_u63;
clo132969[2] = x;
clo132969[3] = equal_u63;
clo132969[4] = kont132030;
clo132969[5] = lst;
clo132969[6] = cdr;
void* f132033132146 = encode_clo(clo132969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132033132146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132294 = encode_clo(alloc_clo(lam132294_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132296 = arg_buffer[1];
//reading env and args
void* kont132030 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo132971 = alloc_clo(lam132294_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo132971[1] = member_u63;
clo132971[2] = car;
clo132971[3] = x;
clo132971[4] = equal_u63;
clo132971[5] = kont132030;
clo132971[6] = lst;
clo132971[7] = cdr;
void* f132034132143 = encode_clo(clo132971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132034132143;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam132297_fptr() // lam132297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132298 = arg_buffer[1];
//reading env and args
void* a131943132160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131942132158 = (decode_clo(env132298))[4];
//not do dummy comment
void* foldl = (decode_clo(env132298))[3];
//not do dummy comment
void* kont132035 = (decode_clo(env132298))[2];
//not do dummy comment
void* fun = (decode_clo(env132298))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont132035;
arg_buffer[3] = fun;
arg_buffer[4] = a131942132158;
arg_buffer[5] = a131943132160;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132297 = encode_clo(alloc_clo(lam132297_fptr, 0));

void* lam132299_fptr() // lam132299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132300 = arg_buffer[1];
//reading env and args
void* a131942132158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132300))[5];
//not do dummy comment
void* lst = (decode_clo(env132300))[4];
//not do dummy comment
void* foldl = (decode_clo(env132300))[3];
//not do dummy comment
void* kont132035 = (decode_clo(env132300))[2];
//not do dummy comment
void* fun = (decode_clo(env132300))[1];

//creating new closure instance
void** clo132973 = alloc_clo(lam132297_fptr, 4);

//setting env list
clo132973[1] = fun;
clo132973[2] = kont132035;
clo132973[3] = foldl;
clo132973[4] = a131942132158;
void* f132036132159 = encode_clo(clo132973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132036132159;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132299 = encode_clo(alloc_clo(lam132299_fptr, 0));

void* lam132301_fptr() // lam132301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132302 = arg_buffer[1];
//reading env and args
void* a131941132156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132302))[6];
//not do dummy comment
void* lst = (decode_clo(env132302))[5];
//not do dummy comment
void* acc = (decode_clo(env132302))[4];
//not do dummy comment
void* foldl = (decode_clo(env132302))[3];
//not do dummy comment
void* kont132035 = (decode_clo(env132302))[2];
//not do dummy comment
void* fun = (decode_clo(env132302))[1];

//creating new closure instance
void** clo132975 = alloc_clo(lam132299_fptr, 5);

//setting env list
clo132975[1] = fun;
clo132975[2] = kont132035;
clo132975[3] = foldl;
clo132975[4] = lst;
clo132975[5] = cdr;
void* f132037132157 = encode_clo(clo132975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f132037132157;
arg_buffer[3] = a131941132156;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132301 = encode_clo(alloc_clo(lam132301_fptr, 0));

void* lam132303_fptr() // lam132303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132304 = arg_buffer[1];
//reading env and args
void* a131940132154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132304))[7];
//not do dummy comment
void* lst = (decode_clo(env132304))[6];
//not do dummy comment
void* acc = (decode_clo(env132304))[5];
//not do dummy comment
void* car = (decode_clo(env132304))[4];
//not do dummy comment
void* foldl = (decode_clo(env132304))[3];
//not do dummy comment
void* kont132035 = (decode_clo(env132304))[2];
//not do dummy comment
void* fun = (decode_clo(env132304))[1];

//if-clause
bool if_guard132976 = is_true(a131940132154);
if(if_guard132976)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132035);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132035))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo132978 = alloc_clo(lam132301_fptr, 6);

//setting env list
clo132978[1] = fun;
clo132978[2] = kont132035;
clo132978[3] = foldl;
clo132978[4] = acc;
clo132978[5] = lst;
clo132978[6] = cdr;
void* f132038132155 = encode_clo(clo132978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132038132155;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132303 = encode_clo(alloc_clo(lam132303_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132305 = arg_buffer[1];
//reading env and args
void* kont132035 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo132980 = alloc_clo(lam132303_fptr, 7);

//setting env list
clo132980[1] = fun;
clo132980[2] = kont132035;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo132980[3] = foldl;
clo132980[4] = car;
clo132980[5] = acc;
clo132980[6] = lst;
clo132980[7] = cdr;
void* f132039132153 = encode_clo(clo132980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132039132153;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam132306_fptr() // lam132306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132307 = arg_buffer[1];
//reading env and args
void* a131947132168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env132307))[3];
//not do dummy comment
void* a131945132164 = (decode_clo(env132307))[2];
//not do dummy comment
void* kont132040 = (decode_clo(env132307))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont132040;
arg_buffer[3] = a131945132164;
arg_buffer[4] = a131947132168;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132306 = encode_clo(alloc_clo(lam132306_fptr, 0));

void* lam132308_fptr() // lam132308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132309 = arg_buffer[1];
//reading env and args
void* a131946132166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env132309))[5];
//not do dummy comment
void* a131945132164 = (decode_clo(env132309))[4];
//not do dummy comment
void* lst2 = (decode_clo(env132309))[3];
//not do dummy comment
void* cons = (decode_clo(env132309))[2];
//not do dummy comment
void* kont132040 = (decode_clo(env132309))[1];

//creating new closure instance
void** clo132982 = alloc_clo(lam132306_fptr, 3);

//setting env list
clo132982[1] = kont132040;
clo132982[2] = a131945132164;
clo132982[3] = reverse_u45helper;
void* f132041132167 = encode_clo(clo132982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f132041132167;
arg_buffer[3] = a131946132166;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132308 = encode_clo(alloc_clo(lam132308_fptr, 0));

void* lam132310_fptr() // lam132310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132311 = arg_buffer[1];
//reading env and args
void* a131945132164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env132311))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env132311))[5];
//not do dummy comment
void* lst2 = (decode_clo(env132311))[4];
//not do dummy comment
void* car = (decode_clo(env132311))[3];
//not do dummy comment
void* cons = (decode_clo(env132311))[2];
//not do dummy comment
void* kont132040 = (decode_clo(env132311))[1];

//creating new closure instance
void** clo132984 = alloc_clo(lam132308_fptr, 5);

//setting env list
clo132984[1] = kont132040;
clo132984[2] = cons;
clo132984[3] = lst2;
clo132984[4] = a131945132164;
clo132984[5] = reverse_u45helper;
void* f132042132165 = encode_clo(clo132984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132042132165;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132310 = encode_clo(alloc_clo(lam132310_fptr, 0));

void* lam132312_fptr() // lam132312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132313 = arg_buffer[1];
//reading env and args
void* a131944132162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132313))[7];
//not do dummy comment
void* lst = (decode_clo(env132313))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env132313))[5];
//not do dummy comment
void* lst2 = (decode_clo(env132313))[4];
//not do dummy comment
void* car = (decode_clo(env132313))[3];
//not do dummy comment
void* cons = (decode_clo(env132313))[2];
//not do dummy comment
void* kont132040 = (decode_clo(env132313))[1];

//if-clause
bool if_guard132985 = is_true(a131944132162);
if(if_guard132985)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132040);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132040))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo132987 = alloc_clo(lam132310_fptr, 6);

//setting env list
clo132987[1] = kont132040;
clo132987[2] = cons;
clo132987[3] = car;
clo132987[4] = lst2;
clo132987[5] = reverse_u45helper;
clo132987[6] = lst;
void* f132043132163 = encode_clo(clo132987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132043132163;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132312 = encode_clo(alloc_clo(lam132312_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132314 = arg_buffer[1];
//reading env and args
void* kont132040 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo132989 = alloc_clo(lam132312_fptr, 7);

//setting env list
clo132989[1] = kont132040;
clo132989[2] = cons;
clo132989[3] = car;
clo132989[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo132989[5] = reverse_u45helper;
clo132989[6] = lst;
clo132989[7] = cdr;
void* f132044132161 = encode_clo(clo132989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132044132161;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam132315_fptr() // lam132315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132316 = arg_buffer[1];
//reading env and args
void* a131948132170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env132316))[3];
//not do dummy comment
void* lst = (decode_clo(env132316))[2];
//not do dummy comment
void* kont132045 = (decode_clo(env132316))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont132045;
arg_buffer[3] = lst;
arg_buffer[4] = a131948132170;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132315 = encode_clo(alloc_clo(lam132315_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132317 = arg_buffer[1];
//reading env and args
void* kont132045 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo132991 = alloc_clo(lam132315_fptr, 3);

//setting env list
clo132991[1] = kont132045;
clo132991[2] = lst;
clo132991[3] = reverse_u45helper;
void* f132046132169 = encode_clo(clo132991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f132046132169;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam132318_fptr() // lam132318 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132319 = arg_buffer[1];
//reading env and args
void* x131951132175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132047 = (decode_clo(env132319))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132047);
arg_buffer[2] = x131951132175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132047))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132318 = encode_clo(alloc_clo(lam132318_fptr, 0));

void* lam132320_fptr() // lam132320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132321 = arg_buffer[1];
//reading env and args
void* a131956132184 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132047 = (decode_clo(env132321))[4];
//not do dummy comment
void* a131952132177 = (decode_clo(env132321))[3];
//not do dummy comment
void* a131954132180 = (decode_clo(env132321))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env132321))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont132047;
arg_buffer[3] = a131952132177;
arg_buffer[4] = a131954132180;
arg_buffer[5] = a131956132184;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132320 = encode_clo(alloc_clo(lam132320_fptr, 0));

void* lam132322_fptr() // lam132322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132323 = arg_buffer[1];
//reading env and args
void* a131955132182 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132047 = (decode_clo(env132323))[6];
//not do dummy comment
void* a131952132177 = (decode_clo(env132323))[5];
//not do dummy comment
void* a131954132180 = (decode_clo(env132323))[4];
//not do dummy comment
void* cons = (decode_clo(env132323))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env132323))[2];
//not do dummy comment
void* lst2 = (decode_clo(env132323))[1];

//creating new closure instance
void** clo132993 = alloc_clo(lam132320_fptr, 4);

//setting env list
clo132993[1] = take_u45helper;
clo132993[2] = a131954132180;
clo132993[3] = a131952132177;
clo132993[4] = kont132047;
void* f132049132183 = encode_clo(clo132993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f132049132183;
arg_buffer[3] = a131955132182;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132322 = encode_clo(alloc_clo(lam132322_fptr, 0));

void* lam132324_fptr() // lam132324 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132325 = arg_buffer[1];
//reading env and args
void* a131954132180 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env132325))[7];
//not do dummy comment
void* kont132047 = (decode_clo(env132325))[6];
//not do dummy comment
void* a131952132177 = (decode_clo(env132325))[5];
//not do dummy comment
void* car = (decode_clo(env132325))[4];
//not do dummy comment
void* cons = (decode_clo(env132325))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env132325))[2];
//not do dummy comment
void* lst2 = (decode_clo(env132325))[1];

//creating new closure instance
void** clo132995 = alloc_clo(lam132322_fptr, 6);

//setting env list
clo132995[1] = lst2;
clo132995[2] = take_u45helper;
clo132995[3] = cons;
clo132995[4] = a131954132180;
clo132995[5] = a131952132177;
clo132995[6] = kont132047;
void* f132050132181 = encode_clo(clo132995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132050132181;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132324 = encode_clo(alloc_clo(lam132324_fptr, 0));

void* lam132327_fptr() // lam132327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132328 = arg_buffer[1];
//reading env and args
void* a131952132177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env132328))[8];
//not do dummy comment
void* kont132047 = (decode_clo(env132328))[7];
//not do dummy comment
void* cons = (decode_clo(env132328))[6];
//not do dummy comment
void* _u45 = (decode_clo(env132328))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env132328))[4];
//not do dummy comment
void* lst2 = (decode_clo(env132328))[3];
//not do dummy comment
void* n = (decode_clo(env132328))[2];
//not do dummy comment
void* car = (decode_clo(env132328))[1];
mpz_t* mpzvar132996 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar132996, "1", 10);
void* a131953132178 = encode_mpz(mpzvar132996);

//creating new closure instance
void** clo132998 = alloc_clo(lam132324_fptr, 7);

//setting env list
clo132998[1] = lst2;
clo132998[2] = take_u45helper;
clo132998[3] = cons;
clo132998[4] = car;
clo132998[5] = a131952132177;
clo132998[6] = kont132047;
clo132998[7] = lst;
void* f132051132179 = encode_clo(clo132998);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f132051132179;
arg_buffer[3] = n;
arg_buffer[4] = a131953132178;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132327 = encode_clo(alloc_clo(lam132327_fptr, 0));

void* lam132329_fptr() // lam132329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132330 = arg_buffer[1];
//reading env and args
void* a131950132173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132330))[10];
//not do dummy comment
void* lst = (decode_clo(env132330))[9];
//not do dummy comment
void* kont132047 = (decode_clo(env132330))[8];
//not do dummy comment
void* reverse = (decode_clo(env132330))[7];
//not do dummy comment
void* cons = (decode_clo(env132330))[6];
//not do dummy comment
void* _u45 = (decode_clo(env132330))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env132330))[4];
//not do dummy comment
void* lst2 = (decode_clo(env132330))[3];
//not do dummy comment
void* n = (decode_clo(env132330))[2];
//not do dummy comment
void* car = (decode_clo(env132330))[1];

//if-clause
bool if_guard132999 = is_true(a131950132173);
if(if_guard132999)
{

//creating new closure instance
void** clo133001 = alloc_clo(lam132318_fptr, 1);

//setting env list
clo133001[1] = kont132047;
void* f132048132174 = encode_clo(clo133001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f132048132174;
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
void** clo133003 = alloc_clo(lam132327_fptr, 8);

//setting env list
clo133003[1] = car;
clo133003[2] = n;
clo133003[3] = lst2;
clo133003[4] = take_u45helper;
clo133003[5] = _u45;
clo133003[6] = cons;
clo133003[7] = kont132047;
clo133003[8] = lst;
void* f132052132176 = encode_clo(clo133003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132052132176;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132329 = encode_clo(alloc_clo(lam132329_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132332 = arg_buffer[1];
//reading env and args
void* kont132047 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar133004 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133004, "0", 10);
void* a131949132171 = encode_mpz(mpzvar133004);

//creating new closure instance
void** clo133006 = alloc_clo(lam132329_fptr, 10);

//setting env list
clo133006[1] = car;
clo133006[2] = n;
clo133006[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo133006[4] = take_u45helper;
clo133006[5] = _u45;
clo133006[6] = cons;
clo133006[7] = reverse;
clo133006[8] = kont132047;
clo133006[9] = lst;
clo133006[10] = cdr;
void* f132053132172 = encode_clo(clo133006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f132053132172;
arg_buffer[3] = n;
arg_buffer[4] = a131949132171;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam132333_fptr() // lam132333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132334 = arg_buffer[1];
//reading env and args
void* a131957132186 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env132334))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env132334))[3];
//not do dummy comment
void* kont132054 = (decode_clo(env132334))[2];
//not do dummy comment
void* n = (decode_clo(env132334))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont132054;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a131957132186;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132333 = encode_clo(alloc_clo(lam132333_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132335 = arg_buffer[1];
//reading env and args
void* kont132054 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133008 = alloc_clo(lam132333_fptr, 4);

//setting env list
clo133008[1] = n;
clo133008[2] = kont132054;
clo133008[3] = take_u45helper;
clo133008[4] = lst;
void* f132055132185 = encode_clo(clo133008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f132055132185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam132337_fptr() // lam132337 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132338 = arg_buffer[1];
//reading env and args
void* a131962132194 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131960132190 = (decode_clo(env132338))[3];
//not do dummy comment
void* _u43 = (decode_clo(env132338))[2];
//not do dummy comment
void* kont132056 = (decode_clo(env132338))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont132056;
arg_buffer[3] = a131960132190;
arg_buffer[4] = a131962132194;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132337 = encode_clo(alloc_clo(lam132337_fptr, 0));

void* lam132339_fptr() // lam132339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132340 = arg_buffer[1];
//reading env and args
void* a131961132192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env132340))[4];
//not do dummy comment
void* kont132056 = (decode_clo(env132340))[3];
//not do dummy comment
void* a131960132190 = (decode_clo(env132340))[2];
//not do dummy comment
void* length = (decode_clo(env132340))[1];

//creating new closure instance
void** clo133010 = alloc_clo(lam132337_fptr, 3);

//setting env list
clo133010[1] = kont132056;
clo133010[2] = _u43;
clo133010[3] = a131960132190;
void* f132057132193 = encode_clo(clo133010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f132057132193;
arg_buffer[3] = a131961132192;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132339 = encode_clo(alloc_clo(lam132339_fptr, 0));

void* lam132342_fptr() // lam132342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132343 = arg_buffer[1];
//reading env and args
void* a131958132188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132343))[5];
//not do dummy comment
void* lst = (decode_clo(env132343))[4];
//not do dummy comment
void* length = (decode_clo(env132343))[3];
//not do dummy comment
void* _u43 = (decode_clo(env132343))[2];
//not do dummy comment
void* kont132056 = (decode_clo(env132343))[1];

//if-clause
bool if_guard133011 = is_true(a131958132188);
if(if_guard133011)
{
mpz_t* mpzvar133012 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133012, "0", 10);
void* x131959132189 = encode_mpz(mpzvar133012);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132056);
arg_buffer[2] = x131959132189;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132056))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar133013 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133013, "1", 10);
void* a131960132190 = encode_mpz(mpzvar133013);

//creating new closure instance
void** clo133015 = alloc_clo(lam132339_fptr, 4);

//setting env list
clo133015[1] = length;
clo133015[2] = a131960132190;
clo133015[3] = kont132056;
clo133015[4] = _u43;
void* f132058132191 = encode_clo(clo133015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132058132191;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132342 = encode_clo(alloc_clo(lam132342_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132344 = arg_buffer[1];
//reading env and args
void* kont132056 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo133017 = alloc_clo(lam132342_fptr, 5);

//setting env list
clo133017[1] = kont132056;
clo133017[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo133017[3] = length;
clo133017[4] = lst;
clo133017[5] = cdr;
void* f132059132187 = encode_clo(clo133017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132059132187;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam132345_fptr() // lam132345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132346 = arg_buffer[1];
//reading env and args
void* x131964132198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132060 = (decode_clo(env132346))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132060);
arg_buffer[2] = x131964132198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132060))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132345 = encode_clo(alloc_clo(lam132345_fptr, 0));

void* lam132347_fptr() // lam132347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132348 = arg_buffer[1];
//reading env and args
void* a131968132206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131966132202 = (decode_clo(env132348))[3];
//not do dummy comment
void* kont132060 = (decode_clo(env132348))[2];
//not do dummy comment
void* cons = (decode_clo(env132348))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont132060;
arg_buffer[3] = a131966132202;
arg_buffer[4] = a131968132206;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132347 = encode_clo(alloc_clo(lam132347_fptr, 0));

void* lam132349_fptr() // lam132349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132350 = arg_buffer[1];
//reading env and args
void* a131967132204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131966132202 = (decode_clo(env132350))[5];
//not do dummy comment
void* kont132060 = (decode_clo(env132350))[4];
//not do dummy comment
void* map = (decode_clo(env132350))[3];
//not do dummy comment
void* proc = (decode_clo(env132350))[2];
//not do dummy comment
void* cons = (decode_clo(env132350))[1];

//creating new closure instance
void** clo133019 = alloc_clo(lam132347_fptr, 3);

//setting env list
clo133019[1] = cons;
clo133019[2] = kont132060;
clo133019[3] = a131966132202;
void* f132062132205 = encode_clo(clo133019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f132062132205;
arg_buffer[3] = proc;
arg_buffer[4] = a131967132204;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132349 = encode_clo(alloc_clo(lam132349_fptr, 0));

void* lam132351_fptr() // lam132351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132352 = arg_buffer[1];
//reading env and args
void* a131966132202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132352))[6];
//not do dummy comment
void* kont132060 = (decode_clo(env132352))[5];
//not do dummy comment
void* lst = (decode_clo(env132352))[4];
//not do dummy comment
void* map = (decode_clo(env132352))[3];
//not do dummy comment
void* proc = (decode_clo(env132352))[2];
//not do dummy comment
void* cons = (decode_clo(env132352))[1];

//creating new closure instance
void** clo133021 = alloc_clo(lam132349_fptr, 5);

//setting env list
clo133021[1] = cons;
clo133021[2] = proc;
clo133021[3] = map;
clo133021[4] = kont132060;
clo133021[5] = a131966132202;
void* f132063132203 = encode_clo(clo133021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132063132203;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132351 = encode_clo(alloc_clo(lam132351_fptr, 0));

void* lam132353_fptr() // lam132353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132354 = arg_buffer[1];
//reading env and args
void* a131965132200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132354))[6];
//not do dummy comment
void* kont132060 = (decode_clo(env132354))[5];
//not do dummy comment
void* lst = (decode_clo(env132354))[4];
//not do dummy comment
void* map = (decode_clo(env132354))[3];
//not do dummy comment
void* proc = (decode_clo(env132354))[2];
//not do dummy comment
void* cons = (decode_clo(env132354))[1];

//creating new closure instance
void** clo133023 = alloc_clo(lam132351_fptr, 6);

//setting env list
clo133023[1] = cons;
clo133023[2] = proc;
clo133023[3] = map;
clo133023[4] = lst;
clo133023[5] = kont132060;
clo133023[6] = cdr;
void* f132064132201 = encode_clo(clo133023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f132064132201;
arg_buffer[3] = a131965132200;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132353 = encode_clo(alloc_clo(lam132353_fptr, 0));

void* lam132355_fptr() // lam132355 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132356 = arg_buffer[1];
//reading env and args
void* a131963132196 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132060 = (decode_clo(env132356))[8];
//not do dummy comment
void* lst = (decode_clo(env132356))[7];
//not do dummy comment
void* map = (decode_clo(env132356))[6];
//not do dummy comment
void* proc = (decode_clo(env132356))[5];
//not do dummy comment
void* car = (decode_clo(env132356))[4];
//not do dummy comment
void* cons = (decode_clo(env132356))[3];
//not do dummy comment
void* list = (decode_clo(env132356))[2];
//not do dummy comment
void* cdr = (decode_clo(env132356))[1];

//if-clause
bool if_guard133024 = is_true(a131963132196);
if(if_guard133024)
{

//creating new closure instance
void** clo133026 = alloc_clo(lam132345_fptr, 1);

//setting env list
clo133026[1] = kont132060;
void* f132061132197 = encode_clo(clo133026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f132061132197;
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
void** clo133028 = alloc_clo(lam132353_fptr, 6);

//setting env list
clo133028[1] = cons;
clo133028[2] = proc;
clo133028[3] = map;
clo133028[4] = lst;
clo133028[5] = kont132060;
clo133028[6] = cdr;
void* f132065132199 = encode_clo(clo133028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132065132199;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132355 = encode_clo(alloc_clo(lam132355_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132357 = arg_buffer[1];
//reading env and args
void* kont132060 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133030 = alloc_clo(lam132355_fptr, 8);

//setting env list
clo133030[1] = cdr;
clo133030[2] = list;
clo133030[3] = cons;
clo133030[4] = car;
clo133030[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo133030[6] = map;
clo133030[7] = lst;
clo133030[8] = kont132060;
void* f132066132195 = encode_clo(clo133030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132066132195;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam132358_fptr() // lam132358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132359 = arg_buffer[1];
//reading env and args
void* x131970132210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132067 = (decode_clo(env132359))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132067);
arg_buffer[2] = x131970132210;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132067))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132358 = encode_clo(alloc_clo(lam132358_fptr, 0));

void* lam132360_fptr() // lam132360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132361 = arg_buffer[1];
//reading env and args
void* a131975132220 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132067 = (decode_clo(env132361))[3];
//not do dummy comment
void* cons = (decode_clo(env132361))[2];
//not do dummy comment
void* a131973132216 = (decode_clo(env132361))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont132067;
arg_buffer[3] = a131973132216;
arg_buffer[4] = a131975132220;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132360 = encode_clo(alloc_clo(lam132360_fptr, 0));

void* lam132362_fptr() // lam132362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132363 = arg_buffer[1];
//reading env and args
void* a131974132218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env132363))[5];
//not do dummy comment
void* kont132067 = (decode_clo(env132363))[4];
//not do dummy comment
void* filter = (decode_clo(env132363))[3];
//not do dummy comment
void* cons = (decode_clo(env132363))[2];
//not do dummy comment
void* a131973132216 = (decode_clo(env132363))[1];

//creating new closure instance
void** clo133032 = alloc_clo(lam132360_fptr, 3);

//setting env list
clo133032[1] = a131973132216;
clo133032[2] = cons;
clo133032[3] = kont132067;
void* f132069132219 = encode_clo(clo133032);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f132069132219;
arg_buffer[3] = op;
arg_buffer[4] = a131974132218;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132362 = encode_clo(alloc_clo(lam132362_fptr, 0));

void* lam132364_fptr() // lam132364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132365 = arg_buffer[1];
//reading env and args
void* a131973132216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132365))[6];
//not do dummy comment
void* lst = (decode_clo(env132365))[5];
//not do dummy comment
void* op = (decode_clo(env132365))[4];
//not do dummy comment
void* kont132067 = (decode_clo(env132365))[3];
//not do dummy comment
void* filter = (decode_clo(env132365))[2];
//not do dummy comment
void* cons = (decode_clo(env132365))[1];

//creating new closure instance
void** clo133034 = alloc_clo(lam132362_fptr, 5);

//setting env list
clo133034[1] = a131973132216;
clo133034[2] = cons;
clo133034[3] = filter;
clo133034[4] = kont132067;
clo133034[5] = op;
void* f132070132217 = encode_clo(clo133034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132070132217;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132364 = encode_clo(alloc_clo(lam132364_fptr, 0));

void* lam132366_fptr() // lam132366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132367 = arg_buffer[1];
//reading env and args
void* a131976132222 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env132367))[3];
//not do dummy comment
void* kont132067 = (decode_clo(env132367))[2];
//not do dummy comment
void* filter = (decode_clo(env132367))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont132067;
arg_buffer[3] = op;
arg_buffer[4] = a131976132222;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132366 = encode_clo(alloc_clo(lam132366_fptr, 0));

void* lam132368_fptr() // lam132368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132369 = arg_buffer[1];
//reading env and args
void* a131972132214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132369))[7];
//not do dummy comment
void* lst = (decode_clo(env132369))[6];
//not do dummy comment
void* op = (decode_clo(env132369))[5];
//not do dummy comment
void* kont132067 = (decode_clo(env132369))[4];
//not do dummy comment
void* cons = (decode_clo(env132369))[3];
//not do dummy comment
void* filter = (decode_clo(env132369))[2];
//not do dummy comment
void* car = (decode_clo(env132369))[1];

//if-clause
bool if_guard133035 = is_true(a131972132214);
if(if_guard133035)
{

//creating new closure instance
void** clo133037 = alloc_clo(lam132364_fptr, 6);

//setting env list
clo133037[1] = cons;
clo133037[2] = filter;
clo133037[3] = kont132067;
clo133037[4] = op;
clo133037[5] = lst;
clo133037[6] = cdr;
void* f132071132215 = encode_clo(clo133037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132071132215;
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
void** clo133039 = alloc_clo(lam132366_fptr, 3);

//setting env list
clo133039[1] = filter;
clo133039[2] = kont132067;
clo133039[3] = op;
void* f132072132221 = encode_clo(clo133039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132072132221;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132368 = encode_clo(alloc_clo(lam132368_fptr, 0));

void* lam132370_fptr() // lam132370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132371 = arg_buffer[1];
//reading env and args
void* a131971132212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132371))[7];
//not do dummy comment
void* lst = (decode_clo(env132371))[6];
//not do dummy comment
void* op = (decode_clo(env132371))[5];
//not do dummy comment
void* kont132067 = (decode_clo(env132371))[4];
//not do dummy comment
void* cons = (decode_clo(env132371))[3];
//not do dummy comment
void* filter = (decode_clo(env132371))[2];
//not do dummy comment
void* car = (decode_clo(env132371))[1];

//creating new closure instance
void** clo133041 = alloc_clo(lam132368_fptr, 7);

//setting env list
clo133041[1] = car;
clo133041[2] = filter;
clo133041[3] = cons;
clo133041[4] = kont132067;
clo133041[5] = op;
clo133041[6] = lst;
clo133041[7] = cdr;
void* f132073132213 = encode_clo(clo133041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f132073132213;
arg_buffer[3] = a131971132212;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132370 = encode_clo(alloc_clo(lam132370_fptr, 0));

void* lam132372_fptr() // lam132372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132373 = arg_buffer[1];
//reading env and args
void* a131969132208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env132373))[8];
//not do dummy comment
void* op = (decode_clo(env132373))[7];
//not do dummy comment
void* kont132067 = (decode_clo(env132373))[6];
//not do dummy comment
void* cons = (decode_clo(env132373))[5];
//not do dummy comment
void* list = (decode_clo(env132373))[4];
//not do dummy comment
void* cdr = (decode_clo(env132373))[3];
//not do dummy comment
void* filter = (decode_clo(env132373))[2];
//not do dummy comment
void* car = (decode_clo(env132373))[1];

//if-clause
bool if_guard133042 = is_true(a131969132208);
if(if_guard133042)
{

//creating new closure instance
void** clo133044 = alloc_clo(lam132358_fptr, 1);

//setting env list
clo133044[1] = kont132067;
void* f132068132209 = encode_clo(clo133044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f132068132209;
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
void** clo133046 = alloc_clo(lam132370_fptr, 7);

//setting env list
clo133046[1] = car;
clo133046[2] = filter;
clo133046[3] = cons;
clo133046[4] = kont132067;
clo133046[5] = op;
clo133046[6] = lst;
clo133046[7] = cdr;
void* f132074132211 = encode_clo(clo133046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132074132211;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132372 = encode_clo(alloc_clo(lam132372_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132374 = arg_buffer[1];
//reading env and args
void* kont132067 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133048 = alloc_clo(lam132372_fptr, 8);

//setting env list
clo133048[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo133048[2] = filter;
clo133048[3] = cdr;
clo133048[4] = list;
clo133048[5] = cons;
clo133048[6] = kont132067;
clo133048[7] = op;
clo133048[8] = lst;
void* f132075132207 = encode_clo(clo133048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132075132207;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam132375_fptr() // lam132375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132376 = arg_buffer[1];
//reading env and args
void* a131981132230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132076 = (decode_clo(env132376))[3];
//not do dummy comment
void* drop = (decode_clo(env132376))[2];
//not do dummy comment
void* a131979132227 = (decode_clo(env132376))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont132076;
arg_buffer[3] = a131979132227;
arg_buffer[4] = a131981132230;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132375 = encode_clo(alloc_clo(lam132375_fptr, 0));

void* lam132378_fptr() // lam132378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132379 = arg_buffer[1];
//reading env and args
void* a131979132227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132076 = (decode_clo(env132379))[4];
//not do dummy comment
void* drop = (decode_clo(env132379))[3];
//not do dummy comment
void* n = (decode_clo(env132379))[2];
//not do dummy comment
void* _u45 = (decode_clo(env132379))[1];
mpz_t* mpzvar133049 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133049, "1", 10);
void* a131980132228 = encode_mpz(mpzvar133049);

//creating new closure instance
void** clo133051 = alloc_clo(lam132375_fptr, 3);

//setting env list
clo133051[1] = a131979132227;
clo133051[2] = drop;
clo133051[3] = kont132076;
void* f132077132229 = encode_clo(clo133051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f132077132229;
arg_buffer[3] = n;
arg_buffer[4] = a131980132228;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132378 = encode_clo(alloc_clo(lam132378_fptr, 0));

void* lam132380_fptr() // lam132380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132381 = arg_buffer[1];
//reading env and args
void* a131978132225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132381))[6];
//not do dummy comment
void* kont132076 = (decode_clo(env132381))[5];
//not do dummy comment
void* n = (decode_clo(env132381))[4];
//not do dummy comment
void* _u45 = (decode_clo(env132381))[3];
//not do dummy comment
void* lst = (decode_clo(env132381))[2];
//not do dummy comment
void* drop = (decode_clo(env132381))[1];

//if-clause
bool if_guard133052 = is_true(a131978132225);
if(if_guard133052)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132076);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132076))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133054 = alloc_clo(lam132378_fptr, 4);

//setting env list
clo133054[1] = _u45;
clo133054[2] = n;
clo133054[3] = drop;
clo133054[4] = kont132076;
void* f132078132226 = encode_clo(clo133054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132078132226;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132380 = encode_clo(alloc_clo(lam132380_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132383 = arg_buffer[1];
//reading env and args
void* kont132076 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar133055 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133055, "0", 10);
void* a131977132223 = encode_mpz(mpzvar133055);

//creating new closure instance
void** clo133057 = alloc_clo(lam132380_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo133057[1] = drop;
clo133057[2] = lst;
clo133057[3] = _u45;
clo133057[4] = n;
clo133057[5] = kont132076;
clo133057[6] = cdr;
void* f132079132224 = encode_clo(clo133057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f132079132224;
arg_buffer[3] = n;
arg_buffer[4] = a131977132223;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam132384_fptr() // lam132384 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132385 = arg_buffer[1];
//reading env and args
void* a131985132238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131983132234 = (decode_clo(env132385))[3];
//not do dummy comment
void* kont132080 = (decode_clo(env132385))[2];
//not do dummy comment
void* proc = (decode_clo(env132385))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont132080;
arg_buffer[3] = a131983132234;
arg_buffer[4] = a131985132238;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132384 = encode_clo(alloc_clo(lam132384_fptr, 0));

void* lam132386_fptr() // lam132386 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132387 = arg_buffer[1];
//reading env and args
void* a131984132236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131983132234 = (decode_clo(env132387))[5];
//not do dummy comment
void* foldr = (decode_clo(env132387))[4];
//not do dummy comment
void* kont132080 = (decode_clo(env132387))[3];
//not do dummy comment
void* proc = (decode_clo(env132387))[2];
//not do dummy comment
void* acc = (decode_clo(env132387))[1];

//creating new closure instance
void** clo133059 = alloc_clo(lam132384_fptr, 3);

//setting env list
clo133059[1] = proc;
clo133059[2] = kont132080;
clo133059[3] = a131983132234;
void* f132081132237 = encode_clo(clo133059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f132081132237;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a131984132236;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132386 = encode_clo(alloc_clo(lam132386_fptr, 0));

void* lam132388_fptr() // lam132388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132389 = arg_buffer[1];
//reading env and args
void* a131983132234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132389))[6];
//not do dummy comment
void* kont132080 = (decode_clo(env132389))[5];
//not do dummy comment
void* foldr = (decode_clo(env132389))[4];
//not do dummy comment
void* lst = (decode_clo(env132389))[3];
//not do dummy comment
void* proc = (decode_clo(env132389))[2];
//not do dummy comment
void* acc = (decode_clo(env132389))[1];

//creating new closure instance
void** clo133061 = alloc_clo(lam132386_fptr, 5);

//setting env list
clo133061[1] = acc;
clo133061[2] = proc;
clo133061[3] = kont132080;
clo133061[4] = foldr;
clo133061[5] = a131983132234;
void* f132082132235 = encode_clo(clo133061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132082132235;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132388 = encode_clo(alloc_clo(lam132388_fptr, 0));

void* lam132390_fptr() // lam132390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132391 = arg_buffer[1];
//reading env and args
void* a131982132232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132391))[7];
//not do dummy comment
void* kont132080 = (decode_clo(env132391))[6];
//not do dummy comment
void* car = (decode_clo(env132391))[5];
//not do dummy comment
void* foldr = (decode_clo(env132391))[4];
//not do dummy comment
void* lst = (decode_clo(env132391))[3];
//not do dummy comment
void* proc = (decode_clo(env132391))[2];
//not do dummy comment
void* acc = (decode_clo(env132391))[1];

//if-clause
bool if_guard133062 = is_true(a131982132232);
if(if_guard133062)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132080);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132080))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133064 = alloc_clo(lam132388_fptr, 6);

//setting env list
clo133064[1] = acc;
clo133064[2] = proc;
clo133064[3] = lst;
clo133064[4] = foldr;
clo133064[5] = kont132080;
clo133064[6] = cdr;
void* f132083132233 = encode_clo(clo133064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132083132233;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132390 = encode_clo(alloc_clo(lam132390_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132392 = arg_buffer[1];
//reading env and args
void* kont132080 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo133066 = alloc_clo(lam132390_fptr, 7);

//setting env list
clo133066[1] = acc;
clo133066[2] = proc;
clo133066[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo133066[4] = foldr;
clo133066[5] = car;
clo133066[6] = kont132080;
clo133066[7] = cdr;
void* f132084132231 = encode_clo(clo133066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132084132231;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam132393_fptr() // lam132393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132394 = arg_buffer[1];
//reading env and args
void* a131989132246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a131987132242 = (decode_clo(env132394))[3];
//not do dummy comment
void* kont132085 = (decode_clo(env132394))[2];
//not do dummy comment
void* cons = (decode_clo(env132394))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont132085;
arg_buffer[3] = a131987132242;
arg_buffer[4] = a131989132246;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132393 = encode_clo(alloc_clo(lam132393_fptr, 0));

void* lam132395_fptr() // lam132395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132396 = arg_buffer[1];
//reading env and args
void* a131988132244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env132396))[5];
//not do dummy comment
void* a131987132242 = (decode_clo(env132396))[4];
//not do dummy comment
void* cons = (decode_clo(env132396))[3];
//not do dummy comment
void* kont132085 = (decode_clo(env132396))[2];
//not do dummy comment
void* lst2 = (decode_clo(env132396))[1];

//creating new closure instance
void** clo133068 = alloc_clo(lam132393_fptr, 3);

//setting env list
clo133068[1] = cons;
clo133068[2] = kont132085;
clo133068[3] = a131987132242;
void* f132086132245 = encode_clo(clo133068);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f132086132245;
arg_buffer[3] = a131988132244;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132395 = encode_clo(alloc_clo(lam132395_fptr, 0));

void* lam132397_fptr() // lam132397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132398 = arg_buffer[1];
//reading env and args
void* a131987132242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132398))[6];
//not do dummy comment
void* append = (decode_clo(env132398))[5];
//not do dummy comment
void* lst1 = (decode_clo(env132398))[4];
//not do dummy comment
void* cons = (decode_clo(env132398))[3];
//not do dummy comment
void* kont132085 = (decode_clo(env132398))[2];
//not do dummy comment
void* lst2 = (decode_clo(env132398))[1];

//creating new closure instance
void** clo133070 = alloc_clo(lam132395_fptr, 5);

//setting env list
clo133070[1] = lst2;
clo133070[2] = kont132085;
clo133070[3] = cons;
clo133070[4] = a131987132242;
clo133070[5] = append;
void* f132087132243 = encode_clo(clo133070);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f132087132243;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132397 = encode_clo(alloc_clo(lam132397_fptr, 0));

void* lam132399_fptr() // lam132399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132400 = arg_buffer[1];
//reading env and args
void* a131986132240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env132400))[7];
//not do dummy comment
void* append = (decode_clo(env132400))[6];
//not do dummy comment
void* cons = (decode_clo(env132400))[5];
//not do dummy comment
void* kont132085 = (decode_clo(env132400))[4];
//not do dummy comment
void* lst2 = (decode_clo(env132400))[3];
//not do dummy comment
void* lst1 = (decode_clo(env132400))[2];
//not do dummy comment
void* car = (decode_clo(env132400))[1];

//if-clause
bool if_guard133071 = is_true(a131986132240);
if(if_guard133071)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132085);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132085))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo133073 = alloc_clo(lam132397_fptr, 6);

//setting env list
clo133073[1] = lst2;
clo133073[2] = kont132085;
clo133073[3] = cons;
clo133073[4] = lst1;
clo133073[5] = append;
clo133073[6] = cdr;
void* f132088132241 = encode_clo(clo133073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f132088132241;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam132399 = encode_clo(alloc_clo(lam132399_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132401 = arg_buffer[1];
//reading env and args
void* kont132085 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo133075 = alloc_clo(lam132399_fptr, 7);

//setting env list
clo133075[1] = car;
clo133075[2] = lst1;
clo133075[3] = lst2;
clo133075[4] = kont132085;
clo133075[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo133075[6] = append;
clo133075[7] = cdr;
void* f132089132239 = encode_clo(clo133075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f132089132239;
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
void* _132402 = arg_buffer[1];
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

void* kont132090132247 = prim_car(lst);
void* lst132248 = prim_cdr(lst);
void* x131990132249 = apply_prim_hash(lst132248);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132090132247);
arg_buffer[2] = x131990132249;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132090132247))[0]);
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
void* _132403 = arg_buffer[1];
//reading env and args
void* kont132092 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x131991132250 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132092);
arg_buffer[2] = x131991132250;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132092))[0]);
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
void* _132404 = arg_buffer[1];
//reading env and args
void* kont132093 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x131992132251 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132093);
arg_buffer[2] = x131992132251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132093))[0]);
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
void* _132405 = arg_buffer[1];
//reading env and args
void* kont132094 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x131993132252 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132094);
arg_buffer[2] = x131993132252;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132094))[0]);
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
void* _132406 = arg_buffer[1];
//reading env and args
void* kont132095 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x131994132253 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132095);
arg_buffer[2] = x131994132253;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132095))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam132407_fptr() // lam132407 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env132408 = arg_buffer[1];
//reading env and args
void* x131995132255 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont132096 = (decode_clo(env132408))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont132096);
arg_buffer[2] = x131995132255;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont132096))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam132407 = encode_clo(alloc_clo(lam132407_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132409 = arg_buffer[1];
//reading env and args
void* kont132096 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
void* z = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo133077 = alloc_clo(lam132407_fptr, 1);

//setting env list
clo133077[1] = kont132096;
void* f132097132254 = encode_clo(clo133077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f132097132254;
arg_buffer[3] = x;
arg_buffer[4] = y;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _132413 = arg_buffer[1];
//reading env and args
void* kont132098 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar133078 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133078, "1", 10);
void* a131996132256 = encode_mpz(mpzvar133078);
mpz_t* mpzvar133079 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133079, "2", 10);
void* a131997132257 = encode_mpz(mpzvar133079);
mpz_t* mpzvar133080 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar133080, "3", 10);
void* a131998132258 = encode_mpz(mpzvar133080);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont132098;
arg_buffer[3] = a131996132256;
arg_buffer[4] = a131997132257;
arg_buffer[5] = a131998132258;
arg_buffer[0] = reinterpret_cast<void*>(5);
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

