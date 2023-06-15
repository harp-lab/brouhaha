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
void* _57305 = arg_buffer[1];
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

void* kont5704357143 = prim_car(lst);
void* lst57144 = prim_cdr(lst);
void* x5695457145 = apply_prim__u43(lst57144);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5704357143);
arg_buffer[2] = x5695457145;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5704357143))[0]);
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
void* _57306 = arg_buffer[1];
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

void* kont5704557146 = prim_car(lst);
void* lst57147 = prim_cdr(lst);
void* x5695557148 = apply_prim__u45(lst57147);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5704557146);
arg_buffer[2] = x5695557148;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5704557146))[0]);
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
void* _57307 = arg_buffer[1];
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

void* kont5704757149 = prim_car(lst);
void* lst57150 = prim_cdr(lst);
void* x5695657151 = apply_prim__u42(lst57150);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5704757149);
arg_buffer[2] = x5695657151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5704757149))[0]);
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
void* _57308 = arg_buffer[1];
//reading env and args
void* kont57049 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5695757152 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57049);
arg_buffer[2] = x5695757152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57049))[0]);
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
void* _57309 = arg_buffer[1];
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

void* kont5705057153 = prim_car(lst);
void* lst57154 = prim_cdr(lst);
void* x5695857155 = apply_prim__u47(lst57154);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5705057153);
arg_buffer[2] = x5695857155;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5705057153))[0]);
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
void* _57310 = arg_buffer[1];
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

void* kont5705257156 = prim_car(lst);
void* lst57157 = prim_cdr(lst);
void* x5695957158 = apply_prim__u61(lst57157);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5705257156);
arg_buffer[2] = x5695957158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5705257156))[0]);
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
void* _57311 = arg_buffer[1];
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

void* kont5705457159 = prim_car(lst);
void* lst57160 = prim_cdr(lst);
void* x5696057161 = apply_prim__u62(lst57160);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5705457159);
arg_buffer[2] = x5696057161;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5705457159))[0]);
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
void* _57312 = arg_buffer[1];
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

void* kont5705657162 = prim_car(lst);
void* lst57163 = prim_cdr(lst);
void* x5696157164 = apply_prim__u60(lst57163);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5705657162);
arg_buffer[2] = x5696157164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5705657162))[0]);
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
void* _57313 = arg_buffer[1];
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

void* kont5705857165 = prim_car(lst);
void* lst57166 = prim_cdr(lst);
void* x5696257167 = apply_prim__u60_u61(lst57166);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5705857165);
arg_buffer[2] = x5696257167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5705857165))[0]);
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
void* _57314 = arg_buffer[1];
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

void* kont5706057168 = prim_car(lst);
void* lst57169 = prim_cdr(lst);
void* x5696357170 = apply_prim__u62_u61(lst57169);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5706057168);
arg_buffer[2] = x5696357170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5706057168))[0]);
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
void* _57315 = arg_buffer[1];
//reading env and args
void* kont57062 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5696457171 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57062);
arg_buffer[2] = x5696457171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57062))[0]);
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
void* _57316 = arg_buffer[1];
//reading env and args
void* kont57063 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5696557172 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57063);
arg_buffer[2] = x5696557172;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57063))[0]);
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
void* _57317 = arg_buffer[1];
//reading env and args
void* kont57064 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5696657173 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57064);
arg_buffer[2] = x5696657173;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57064))[0]);
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
void* _57318 = arg_buffer[1];
//reading env and args
void* kont57065 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5696757174 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57065);
arg_buffer[2] = x5696757174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57065))[0]);
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
void* _57319 = arg_buffer[1];
//reading env and args
void* kont57066 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5696857175 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57066);
arg_buffer[2] = x5696857175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57066))[0]);
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
void* _57320 = arg_buffer[1];
//reading env and args
void* kont57067 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5696957176 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57067);
arg_buffer[2] = x5696957176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57067))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam57321_fptr() // lam57321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57322 = arg_buffer[1];
//reading env and args
void* a5697257180 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57068 = (decode_clo(env57322))[3];
//not do dummy comment
void* a5697057177 = (decode_clo(env57322))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env57322))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57068;
arg_buffer[3] = a5697057177;
arg_buffer[4] = a5697257180;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57321 = encode_clo(alloc_clo(lam57321_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57325 = arg_buffer[1];
//reading env and args
void* kont57068 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58002 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58002, "0", 10);
void* a5697057177 = encode_mpz(mpzvar58002);
mpz_t* mpzvar58003 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58003, "2", 10);
void* a5697157178 = encode_mpz(mpzvar58003);

//creating new closure instance
void** clo58005 = alloc_clo(lam57321_fptr, 3);

//setting env list
clo58005[1] = equal_u63;
clo58005[2] = a5697057177;
clo58005[3] = kont57068;
void* f5706957179 = encode_clo(clo58005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5706957179;
arg_buffer[3] = x;
arg_buffer[4] = a5697157178;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam57326_fptr() // lam57326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57327 = arg_buffer[1];
//reading env and args
void* a5697557184 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env57327))[3];
//not do dummy comment
void* a5697357181 = (decode_clo(env57327))[2];
//not do dummy comment
void* kont57070 = (decode_clo(env57327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57070;
arg_buffer[3] = a5697357181;
arg_buffer[4] = a5697557184;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57326 = encode_clo(alloc_clo(lam57326_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57330 = arg_buffer[1];
//reading env and args
void* kont57070 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58006 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58006, "1", 10);
void* a5697357181 = encode_mpz(mpzvar58006);
mpz_t* mpzvar58007 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58007, "2", 10);
void* a5697457182 = encode_mpz(mpzvar58007);

//creating new closure instance
void** clo58009 = alloc_clo(lam57326_fptr, 3);

//setting env list
clo58009[1] = kont57070;
clo58009[2] = a5697357181;
clo58009[3] = equal_u63;
void* f5707157183 = encode_clo(clo58009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5707157183;
arg_buffer[3] = x;
arg_buffer[4] = a5697457182;
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
void* _57331 = arg_buffer[1];
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

void* kont5707257185 = prim_car(x);
void* x57186 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5707257185);
arg_buffer[2] = x57186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5707257185))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam57334_fptr() // lam57334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57335 = arg_buffer[1];
//reading env and args
void* a5698157196 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57074 = (decode_clo(env57335))[3];
//not do dummy comment
void* x = (decode_clo(env57335))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57335))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont57074;
arg_buffer[3] = x;
arg_buffer[4] = a5698157196;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57334 = encode_clo(alloc_clo(lam57334_fptr, 0));

void* lam57336_fptr() // lam57336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57337 = arg_buffer[1];
//reading env and args
void* a5697957193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57337))[5];
//not do dummy comment
void* kont57074 = (decode_clo(env57337))[4];
//not do dummy comment
void* lst = (decode_clo(env57337))[3];
//not do dummy comment
void* x = (decode_clo(env57337))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57337))[1];

//if-clause
bool if_guard58010 = is_true(a5697957193);
if(if_guard58010)
{
void* x5698057194 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57074);
arg_buffer[2] = x5698057194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57074))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58012 = alloc_clo(lam57334_fptr, 3);

//setting env list
clo58012[1] = member_u63;
clo58012[2] = x;
clo58012[3] = kont57074;
void* f5707557195 = encode_clo(clo58012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5707557195;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57336 = encode_clo(alloc_clo(lam57336_fptr, 0));

void* lam57338_fptr() // lam57338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57339 = arg_buffer[1];
//reading env and args
void* a5697857191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57339))[6];
//not do dummy comment
void* kont57074 = (decode_clo(env57339))[5];
//not do dummy comment
void* lst = (decode_clo(env57339))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env57339))[3];
//not do dummy comment
void* x = (decode_clo(env57339))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57339))[1];

//creating new closure instance
void** clo58014 = alloc_clo(lam57336_fptr, 5);

//setting env list
clo58014[1] = member_u63;
clo58014[2] = x;
clo58014[3] = lst;
clo58014[4] = kont57074;
clo58014[5] = cdr;
void* f5707657192 = encode_clo(clo58014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5707657192;
arg_buffer[3] = a5697857191;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57338 = encode_clo(alloc_clo(lam57338_fptr, 0));

void* lam57340_fptr() // lam57340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57341 = arg_buffer[1];
//reading env and args
void* a5697657188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57341))[7];
//not do dummy comment
void* kont57074 = (decode_clo(env57341))[6];
//not do dummy comment
void* lst = (decode_clo(env57341))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env57341))[4];
//not do dummy comment
void* x = (decode_clo(env57341))[3];
//not do dummy comment
void* car = (decode_clo(env57341))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57341))[1];

//if-clause
bool if_guard58015 = is_true(a5697657188);
if(if_guard58015)
{
void* x5697757189 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57074);
arg_buffer[2] = x5697757189;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57074))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58017 = alloc_clo(lam57338_fptr, 6);

//setting env list
clo58017[1] = member_u63;
clo58017[2] = x;
clo58017[3] = equal_u63;
clo58017[4] = lst;
clo58017[5] = kont57074;
clo58017[6] = cdr;
void* f5707757190 = encode_clo(clo58017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5707757190;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57340 = encode_clo(alloc_clo(lam57340_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57342 = arg_buffer[1];
//reading env and args
void* kont57074 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58019 = alloc_clo(lam57340_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo58019[1] = member_u63;
clo58019[2] = car;
clo58019[3] = x;
clo58019[4] = equal_u63;
clo58019[5] = lst;
clo58019[6] = kont57074;
clo58019[7] = cdr;
void* f5707857187 = encode_clo(clo58019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5707857187;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam57343_fptr() // lam57343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57344 = arg_buffer[1];
//reading env and args
void* a5698557204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5698457202 = (decode_clo(env57344))[4];
//not do dummy comment
void* kont57079 = (decode_clo(env57344))[3];
//not do dummy comment
void* fun = (decode_clo(env57344))[2];
//not do dummy comment
void* foldl = (decode_clo(env57344))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont57079;
arg_buffer[3] = fun;
arg_buffer[4] = a5698457202;
arg_buffer[5] = a5698557204;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57343 = encode_clo(alloc_clo(lam57343_fptr, 0));

void* lam57345_fptr() // lam57345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57346 = arg_buffer[1];
//reading env and args
void* a5698457202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57346))[5];
//not do dummy comment
void* lst = (decode_clo(env57346))[4];
//not do dummy comment
void* kont57079 = (decode_clo(env57346))[3];
//not do dummy comment
void* fun = (decode_clo(env57346))[2];
//not do dummy comment
void* foldl = (decode_clo(env57346))[1];

//creating new closure instance
void** clo58021 = alloc_clo(lam57343_fptr, 4);

//setting env list
clo58021[1] = foldl;
clo58021[2] = fun;
clo58021[3] = kont57079;
clo58021[4] = a5698457202;
void* f5708057203 = encode_clo(clo58021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5708057203;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57345 = encode_clo(alloc_clo(lam57345_fptr, 0));

void* lam57347_fptr() // lam57347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57348 = arg_buffer[1];
//reading env and args
void* a5698357200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57348))[6];
//not do dummy comment
void* lst = (decode_clo(env57348))[5];
//not do dummy comment
void* kont57079 = (decode_clo(env57348))[4];
//not do dummy comment
void* fun = (decode_clo(env57348))[3];
//not do dummy comment
void* acc = (decode_clo(env57348))[2];
//not do dummy comment
void* foldl = (decode_clo(env57348))[1];

//creating new closure instance
void** clo58023 = alloc_clo(lam57345_fptr, 5);

//setting env list
clo58023[1] = foldl;
clo58023[2] = fun;
clo58023[3] = kont57079;
clo58023[4] = lst;
clo58023[5] = cdr;
void* f5708157201 = encode_clo(clo58023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5708157201;
arg_buffer[3] = a5698357200;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57347 = encode_clo(alloc_clo(lam57347_fptr, 0));

void* lam57349_fptr() // lam57349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57350 = arg_buffer[1];
//reading env and args
void* a5698257198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57350))[7];
//not do dummy comment
void* lst = (decode_clo(env57350))[6];
//not do dummy comment
void* kont57079 = (decode_clo(env57350))[5];
//not do dummy comment
void* fun = (decode_clo(env57350))[4];
//not do dummy comment
void* acc = (decode_clo(env57350))[3];
//not do dummy comment
void* car = (decode_clo(env57350))[2];
//not do dummy comment
void* foldl = (decode_clo(env57350))[1];

//if-clause
bool if_guard58024 = is_true(a5698257198);
if(if_guard58024)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57079);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57079))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58026 = alloc_clo(lam57347_fptr, 6);

//setting env list
clo58026[1] = foldl;
clo58026[2] = acc;
clo58026[3] = fun;
clo58026[4] = kont57079;
clo58026[5] = lst;
clo58026[6] = cdr;
void* f5708257199 = encode_clo(clo58026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5708257199;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57349 = encode_clo(alloc_clo(lam57349_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57351 = arg_buffer[1];
//reading env and args
void* kont57079 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58028 = alloc_clo(lam57349_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo58028[1] = foldl;
clo58028[2] = car;
clo58028[3] = acc;
clo58028[4] = fun;
clo58028[5] = kont57079;
clo58028[6] = lst;
clo58028[7] = cdr;
void* f5708357197 = encode_clo(clo58028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5708357197;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam57352_fptr() // lam57352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57353 = arg_buffer[1];
//reading env and args
void* a5698957212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57084 = (decode_clo(env57353))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57353))[2];
//not do dummy comment
void* a5698757208 = (decode_clo(env57353))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57084;
arg_buffer[3] = a5698757208;
arg_buffer[4] = a5698957212;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57352 = encode_clo(alloc_clo(lam57352_fptr, 0));

void* lam57354_fptr() // lam57354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57355 = arg_buffer[1];
//reading env and args
void* a5698857210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57084 = (decode_clo(env57355))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57355))[4];
//not do dummy comment
void* cons = (decode_clo(env57355))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57355))[2];
//not do dummy comment
void* a5698757208 = (decode_clo(env57355))[1];

//creating new closure instance
void** clo58030 = alloc_clo(lam57352_fptr, 3);

//setting env list
clo58030[1] = a5698757208;
clo58030[2] = reverse_u45helper;
clo58030[3] = kont57084;
void* f5708557211 = encode_clo(clo58030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5708557211;
arg_buffer[3] = a5698857210;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57354 = encode_clo(alloc_clo(lam57354_fptr, 0));

void* lam57356_fptr() // lam57356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57357 = arg_buffer[1];
//reading env and args
void* a5698757208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57357))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57357))[5];
//not do dummy comment
void* kont57084 = (decode_clo(env57357))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57357))[3];
//not do dummy comment
void* car = (decode_clo(env57357))[2];
//not do dummy comment
void* cons = (decode_clo(env57357))[1];

//creating new closure instance
void** clo58032 = alloc_clo(lam57354_fptr, 5);

//setting env list
clo58032[1] = a5698757208;
clo58032[2] = reverse_u45helper;
clo58032[3] = cons;
clo58032[4] = lst2;
clo58032[5] = kont57084;
void* f5708657209 = encode_clo(clo58032);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5708657209;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57356 = encode_clo(alloc_clo(lam57356_fptr, 0));

void* lam57358_fptr() // lam57358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57359 = arg_buffer[1];
//reading env and args
void* a5698657206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57359))[7];
//not do dummy comment
void* lst = (decode_clo(env57359))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57359))[5];
//not do dummy comment
void* kont57084 = (decode_clo(env57359))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57359))[3];
//not do dummy comment
void* car = (decode_clo(env57359))[2];
//not do dummy comment
void* cons = (decode_clo(env57359))[1];

//if-clause
bool if_guard58033 = is_true(a5698657206);
if(if_guard58033)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57084);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57084))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58035 = alloc_clo(lam57356_fptr, 6);

//setting env list
clo58035[1] = cons;
clo58035[2] = car;
clo58035[3] = lst2;
clo58035[4] = kont57084;
clo58035[5] = reverse_u45helper;
clo58035[6] = lst;
void* f5708757207 = encode_clo(clo58035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5708757207;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57358 = encode_clo(alloc_clo(lam57358_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57360 = arg_buffer[1];
//reading env and args
void* kont57084 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58037 = alloc_clo(lam57358_fptr, 7);

//setting env list
clo58037[1] = cons;
clo58037[2] = car;
clo58037[3] = lst2;
clo58037[4] = kont57084;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo58037[5] = reverse_u45helper;
clo58037[6] = lst;
clo58037[7] = cdr;
void* f5708857205 = encode_clo(clo58037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5708857205;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam57361_fptr() // lam57361 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57362 = arg_buffer[1];
//reading env and args
void* a5699057214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57089 = (decode_clo(env57362))[3];
//not do dummy comment
void* lst = (decode_clo(env57362))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57362))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57089;
arg_buffer[3] = lst;
arg_buffer[4] = a5699057214;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57361 = encode_clo(alloc_clo(lam57361_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57363 = arg_buffer[1];
//reading env and args
void* kont57089 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58039 = alloc_clo(lam57361_fptr, 3);

//setting env list
clo58039[1] = reverse_u45helper;
clo58039[2] = lst;
clo58039[3] = kont57089;
void* f5709057213 = encode_clo(clo58039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5709057213;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam57364_fptr() // lam57364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57365 = arg_buffer[1];
//reading env and args
void* x5699357219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57091 = (decode_clo(env57365))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57091);
arg_buffer[2] = x5699357219;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57091))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57364 = encode_clo(alloc_clo(lam57364_fptr, 0));

void* lam57366_fptr() // lam57366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57367 = arg_buffer[1];
//reading env and args
void* a5699857228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57091 = (decode_clo(env57367))[4];
//not do dummy comment
void* a5699457221 = (decode_clo(env57367))[3];
//not do dummy comment
void* a5699657224 = (decode_clo(env57367))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env57367))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57091;
arg_buffer[3] = a5699457221;
arg_buffer[4] = a5699657224;
arg_buffer[5] = a5699857228;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57366 = encode_clo(alloc_clo(lam57366_fptr, 0));

void* lam57368_fptr() // lam57368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57369 = arg_buffer[1];
//reading env and args
void* a5699757226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57091 = (decode_clo(env57369))[6];
//not do dummy comment
void* a5699457221 = (decode_clo(env57369))[5];
//not do dummy comment
void* a5699657224 = (decode_clo(env57369))[4];
//not do dummy comment
void* cons = (decode_clo(env57369))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57369))[2];
//not do dummy comment
void* lst2 = (decode_clo(env57369))[1];

//creating new closure instance
void** clo58041 = alloc_clo(lam57366_fptr, 4);

//setting env list
clo58041[1] = take_u45helper;
clo58041[2] = a5699657224;
clo58041[3] = a5699457221;
clo58041[4] = kont57091;
void* f5709357227 = encode_clo(clo58041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5709357227;
arg_buffer[3] = a5699757226;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57368 = encode_clo(alloc_clo(lam57368_fptr, 0));

void* lam57370_fptr() // lam57370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57371 = arg_buffer[1];
//reading env and args
void* a5699657224 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57091 = (decode_clo(env57371))[7];
//not do dummy comment
void* car = (decode_clo(env57371))[6];
//not do dummy comment
void* cons = (decode_clo(env57371))[5];
//not do dummy comment
void* lst = (decode_clo(env57371))[4];
//not do dummy comment
void* a5699457221 = (decode_clo(env57371))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57371))[2];
//not do dummy comment
void* lst2 = (decode_clo(env57371))[1];

//creating new closure instance
void** clo58043 = alloc_clo(lam57368_fptr, 6);

//setting env list
clo58043[1] = lst2;
clo58043[2] = take_u45helper;
clo58043[3] = cons;
clo58043[4] = a5699657224;
clo58043[5] = a5699457221;
clo58043[6] = kont57091;
void* f5709457225 = encode_clo(clo58043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5709457225;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57370 = encode_clo(alloc_clo(lam57370_fptr, 0));

void* lam57373_fptr() // lam57373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57374 = arg_buffer[1];
//reading env and args
void* a5699457221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57091 = (decode_clo(env57374))[8];
//not do dummy comment
void* lst = (decode_clo(env57374))[7];
//not do dummy comment
void* cons = (decode_clo(env57374))[6];
//not do dummy comment
void* _u45 = (decode_clo(env57374))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57374))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57374))[3];
//not do dummy comment
void* n = (decode_clo(env57374))[2];
//not do dummy comment
void* car = (decode_clo(env57374))[1];
mpz_t* mpzvar58044 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58044, "1", 10);
void* a5699557222 = encode_mpz(mpzvar58044);

//creating new closure instance
void** clo58046 = alloc_clo(lam57370_fptr, 7);

//setting env list
clo58046[1] = lst2;
clo58046[2] = take_u45helper;
clo58046[3] = a5699457221;
clo58046[4] = lst;
clo58046[5] = cons;
clo58046[6] = car;
clo58046[7] = kont57091;
void* f5709557223 = encode_clo(clo58046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5709557223;
arg_buffer[3] = n;
arg_buffer[4] = a5699557222;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57373 = encode_clo(alloc_clo(lam57373_fptr, 0));

void* lam57375_fptr() // lam57375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57376 = arg_buffer[1];
//reading env and args
void* a5699257217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57376))[10];
//not do dummy comment
void* kont57091 = (decode_clo(env57376))[9];
//not do dummy comment
void* lst = (decode_clo(env57376))[8];
//not do dummy comment
void* reverse = (decode_clo(env57376))[7];
//not do dummy comment
void* cons = (decode_clo(env57376))[6];
//not do dummy comment
void* _u45 = (decode_clo(env57376))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57376))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57376))[3];
//not do dummy comment
void* n = (decode_clo(env57376))[2];
//not do dummy comment
void* car = (decode_clo(env57376))[1];

//if-clause
bool if_guard58047 = is_true(a5699257217);
if(if_guard58047)
{

//creating new closure instance
void** clo58049 = alloc_clo(lam57364_fptr, 1);

//setting env list
clo58049[1] = kont57091;
void* f5709257218 = encode_clo(clo58049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5709257218;
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
void** clo58051 = alloc_clo(lam57373_fptr, 8);

//setting env list
clo58051[1] = car;
clo58051[2] = n;
clo58051[3] = lst2;
clo58051[4] = take_u45helper;
clo58051[5] = _u45;
clo58051[6] = cons;
clo58051[7] = lst;
clo58051[8] = kont57091;
void* f5709657220 = encode_clo(clo58051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5709657220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57375 = encode_clo(alloc_clo(lam57375_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57378 = arg_buffer[1];
//reading env and args
void* kont57091 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar58052 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58052, "0", 10);
void* a5699157215 = encode_mpz(mpzvar58052);

//creating new closure instance
void** clo58054 = alloc_clo(lam57375_fptr, 10);

//setting env list
clo58054[1] = car;
clo58054[2] = n;
clo58054[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo58054[4] = take_u45helper;
clo58054[5] = _u45;
clo58054[6] = cons;
clo58054[7] = reverse;
clo58054[8] = lst;
clo58054[9] = kont57091;
clo58054[10] = cdr;
void* f5709757216 = encode_clo(clo58054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5709757216;
arg_buffer[3] = n;
arg_buffer[4] = a5699157215;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam57379_fptr() // lam57379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57380 = arg_buffer[1];
//reading env and args
void* a5699957230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57380))[4];
//not do dummy comment
void* kont57098 = (decode_clo(env57380))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57380))[2];
//not do dummy comment
void* n = (decode_clo(env57380))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57098;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5699957230;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57379 = encode_clo(alloc_clo(lam57379_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57381 = arg_buffer[1];
//reading env and args
void* kont57098 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58056 = alloc_clo(lam57379_fptr, 4);

//setting env list
clo58056[1] = n;
clo58056[2] = take_u45helper;
clo58056[3] = kont57098;
clo58056[4] = lst;
void* f5709957229 = encode_clo(clo58056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5709957229;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam57383_fptr() // lam57383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57384 = arg_buffer[1];
//reading env and args
void* a5700457238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5700257234 = (decode_clo(env57384))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57384))[2];
//not do dummy comment
void* kont57100 = (decode_clo(env57384))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont57100;
arg_buffer[3] = a5700257234;
arg_buffer[4] = a5700457238;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57383 = encode_clo(alloc_clo(lam57383_fptr, 0));

void* lam57385_fptr() // lam57385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57386 = arg_buffer[1];
//reading env and args
void* a5700357236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5700257234 = (decode_clo(env57386))[4];
//not do dummy comment
void* length = (decode_clo(env57386))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57386))[2];
//not do dummy comment
void* kont57100 = (decode_clo(env57386))[1];

//creating new closure instance
void** clo58058 = alloc_clo(lam57383_fptr, 3);

//setting env list
clo58058[1] = kont57100;
clo58058[2] = _u43;
clo58058[3] = a5700257234;
void* f5710157237 = encode_clo(clo58058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5710157237;
arg_buffer[3] = a5700357236;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57385 = encode_clo(alloc_clo(lam57385_fptr, 0));

void* lam57388_fptr() // lam57388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57389 = arg_buffer[1];
//reading env and args
void* a5700057232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57389))[5];
//not do dummy comment
void* lst = (decode_clo(env57389))[4];
//not do dummy comment
void* length = (decode_clo(env57389))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57389))[2];
//not do dummy comment
void* kont57100 = (decode_clo(env57389))[1];

//if-clause
bool if_guard58059 = is_true(a5700057232);
if(if_guard58059)
{
mpz_t* mpzvar58060 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58060, "0", 10);
void* x5700157233 = encode_mpz(mpzvar58060);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57100);
arg_buffer[2] = x5700157233;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57100))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar58061 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58061, "1", 10);
void* a5700257234 = encode_mpz(mpzvar58061);

//creating new closure instance
void** clo58063 = alloc_clo(lam57385_fptr, 4);

//setting env list
clo58063[1] = kont57100;
clo58063[2] = _u43;
clo58063[3] = length;
clo58063[4] = a5700257234;
void* f5710257235 = encode_clo(clo58063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5710257235;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57388 = encode_clo(alloc_clo(lam57388_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57390 = arg_buffer[1];
//reading env and args
void* kont57100 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58065 = alloc_clo(lam57388_fptr, 5);

//setting env list
clo58065[1] = kont57100;
clo58065[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo58065[3] = length;
clo58065[4] = lst;
clo58065[5] = cdr;
void* f5710357231 = encode_clo(clo58065);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5710357231;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam57391_fptr() // lam57391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57392 = arg_buffer[1];
//reading env and args
void* x5700657242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57104 = (decode_clo(env57392))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57104);
arg_buffer[2] = x5700657242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57104))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57391 = encode_clo(alloc_clo(lam57391_fptr, 0));

void* lam57393_fptr() // lam57393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57394 = arg_buffer[1];
//reading env and args
void* a5701057250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5700857246 = (decode_clo(env57394))[3];
//not do dummy comment
void* cons = (decode_clo(env57394))[2];
//not do dummy comment
void* kont57104 = (decode_clo(env57394))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57104;
arg_buffer[3] = a5700857246;
arg_buffer[4] = a5701057250;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57393 = encode_clo(alloc_clo(lam57393_fptr, 0));

void* lam57395_fptr() // lam57395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57396 = arg_buffer[1];
//reading env and args
void* a5700957248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env57396))[5];
//not do dummy comment
void* proc = (decode_clo(env57396))[4];
//not do dummy comment
void* a5700857246 = (decode_clo(env57396))[3];
//not do dummy comment
void* cons = (decode_clo(env57396))[2];
//not do dummy comment
void* kont57104 = (decode_clo(env57396))[1];

//creating new closure instance
void** clo58067 = alloc_clo(lam57393_fptr, 3);

//setting env list
clo58067[1] = kont57104;
clo58067[2] = cons;
clo58067[3] = a5700857246;
void* f5710657249 = encode_clo(clo58067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5710657249;
arg_buffer[3] = proc;
arg_buffer[4] = a5700957248;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57395 = encode_clo(alloc_clo(lam57395_fptr, 0));

void* lam57397_fptr() // lam57397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57398 = arg_buffer[1];
//reading env and args
void* a5700857246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57398))[6];
//not do dummy comment
void* lst = (decode_clo(env57398))[5];
//not do dummy comment
void* map = (decode_clo(env57398))[4];
//not do dummy comment
void* proc = (decode_clo(env57398))[3];
//not do dummy comment
void* cons = (decode_clo(env57398))[2];
//not do dummy comment
void* kont57104 = (decode_clo(env57398))[1];

//creating new closure instance
void** clo58069 = alloc_clo(lam57395_fptr, 5);

//setting env list
clo58069[1] = kont57104;
clo58069[2] = cons;
clo58069[3] = a5700857246;
clo58069[4] = proc;
clo58069[5] = map;
void* f5710757247 = encode_clo(clo58069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5710757247;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57397 = encode_clo(alloc_clo(lam57397_fptr, 0));

void* lam57399_fptr() // lam57399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57400 = arg_buffer[1];
//reading env and args
void* a5700757244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57400))[6];
//not do dummy comment
void* lst = (decode_clo(env57400))[5];
//not do dummy comment
void* map = (decode_clo(env57400))[4];
//not do dummy comment
void* proc = (decode_clo(env57400))[3];
//not do dummy comment
void* cons = (decode_clo(env57400))[2];
//not do dummy comment
void* kont57104 = (decode_clo(env57400))[1];

//creating new closure instance
void** clo58071 = alloc_clo(lam57397_fptr, 6);

//setting env list
clo58071[1] = kont57104;
clo58071[2] = cons;
clo58071[3] = proc;
clo58071[4] = map;
clo58071[5] = lst;
clo58071[6] = cdr;
void* f5710857245 = encode_clo(clo58071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5710857245;
arg_buffer[3] = a5700757244;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57399 = encode_clo(alloc_clo(lam57399_fptr, 0));

void* lam57401_fptr() // lam57401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57402 = arg_buffer[1];
//reading env and args
void* a5700557240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57402))[8];
//not do dummy comment
void* map = (decode_clo(env57402))[7];
//not do dummy comment
void* proc = (decode_clo(env57402))[6];
//not do dummy comment
void* car = (decode_clo(env57402))[5];
//not do dummy comment
void* cons = (decode_clo(env57402))[4];
//not do dummy comment
void* kont57104 = (decode_clo(env57402))[3];
//not do dummy comment
void* list = (decode_clo(env57402))[2];
//not do dummy comment
void* cdr = (decode_clo(env57402))[1];

//if-clause
bool if_guard58072 = is_true(a5700557240);
if(if_guard58072)
{

//creating new closure instance
void** clo58074 = alloc_clo(lam57391_fptr, 1);

//setting env list
clo58074[1] = kont57104;
void* f5710557241 = encode_clo(clo58074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5710557241;
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
void** clo58076 = alloc_clo(lam57399_fptr, 6);

//setting env list
clo58076[1] = kont57104;
clo58076[2] = cons;
clo58076[3] = proc;
clo58076[4] = map;
clo58076[5] = lst;
clo58076[6] = cdr;
void* f5710957243 = encode_clo(clo58076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5710957243;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57401 = encode_clo(alloc_clo(lam57401_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57403 = arg_buffer[1];
//reading env and args
void* kont57104 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58078 = alloc_clo(lam57401_fptr, 8);

//setting env list
clo58078[1] = cdr;
clo58078[2] = list;
clo58078[3] = kont57104;
clo58078[4] = cons;
clo58078[5] = car;
clo58078[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo58078[7] = map;
clo58078[8] = lst;
void* f5711057239 = encode_clo(clo58078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5711057239;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam57404_fptr() // lam57404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57405 = arg_buffer[1];
//reading env and args
void* x5701257254 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57111 = (decode_clo(env57405))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57111);
arg_buffer[2] = x5701257254;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57111))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57404 = encode_clo(alloc_clo(lam57404_fptr, 0));

void* lam57406_fptr() // lam57406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57407 = arg_buffer[1];
//reading env and args
void* a5701757264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57111 = (decode_clo(env57407))[3];
//not do dummy comment
void* a5701557260 = (decode_clo(env57407))[2];
//not do dummy comment
void* cons = (decode_clo(env57407))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57111;
arg_buffer[3] = a5701557260;
arg_buffer[4] = a5701757264;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57406 = encode_clo(alloc_clo(lam57406_fptr, 0));

void* lam57408_fptr() // lam57408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57409 = arg_buffer[1];
//reading env and args
void* a5701657262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57111 = (decode_clo(env57409))[5];
//not do dummy comment
void* op = (decode_clo(env57409))[4];
//not do dummy comment
void* a5701557260 = (decode_clo(env57409))[3];
//not do dummy comment
void* filter = (decode_clo(env57409))[2];
//not do dummy comment
void* cons = (decode_clo(env57409))[1];

//creating new closure instance
void** clo58080 = alloc_clo(lam57406_fptr, 3);

//setting env list
clo58080[1] = cons;
clo58080[2] = a5701557260;
clo58080[3] = kont57111;
void* f5711357263 = encode_clo(clo58080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5711357263;
arg_buffer[3] = op;
arg_buffer[4] = a5701657262;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57408 = encode_clo(alloc_clo(lam57408_fptr, 0));

void* lam57410_fptr() // lam57410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57411 = arg_buffer[1];
//reading env and args
void* a5701557260 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57411))[6];
//not do dummy comment
void* lst = (decode_clo(env57411))[5];
//not do dummy comment
void* kont57111 = (decode_clo(env57411))[4];
//not do dummy comment
void* op = (decode_clo(env57411))[3];
//not do dummy comment
void* filter = (decode_clo(env57411))[2];
//not do dummy comment
void* cons = (decode_clo(env57411))[1];

//creating new closure instance
void** clo58082 = alloc_clo(lam57408_fptr, 5);

//setting env list
clo58082[1] = cons;
clo58082[2] = filter;
clo58082[3] = a5701557260;
clo58082[4] = op;
clo58082[5] = kont57111;
void* f5711457261 = encode_clo(clo58082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5711457261;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57410 = encode_clo(alloc_clo(lam57410_fptr, 0));

void* lam57412_fptr() // lam57412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57413 = arg_buffer[1];
//reading env and args
void* a5701857266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57111 = (decode_clo(env57413))[3];
//not do dummy comment
void* op = (decode_clo(env57413))[2];
//not do dummy comment
void* filter = (decode_clo(env57413))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont57111;
arg_buffer[3] = op;
arg_buffer[4] = a5701857266;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57412 = encode_clo(alloc_clo(lam57412_fptr, 0));

void* lam57414_fptr() // lam57414 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57415 = arg_buffer[1];
//reading env and args
void* a5701457258 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57415))[7];
//not do dummy comment
void* lst = (decode_clo(env57415))[6];
//not do dummy comment
void* kont57111 = (decode_clo(env57415))[5];
//not do dummy comment
void* op = (decode_clo(env57415))[4];
//not do dummy comment
void* cons = (decode_clo(env57415))[3];
//not do dummy comment
void* filter = (decode_clo(env57415))[2];
//not do dummy comment
void* car = (decode_clo(env57415))[1];

//if-clause
bool if_guard58083 = is_true(a5701457258);
if(if_guard58083)
{

//creating new closure instance
void** clo58085 = alloc_clo(lam57410_fptr, 6);

//setting env list
clo58085[1] = cons;
clo58085[2] = filter;
clo58085[3] = op;
clo58085[4] = kont57111;
clo58085[5] = lst;
clo58085[6] = cdr;
void* f5711557259 = encode_clo(clo58085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5711557259;
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
void** clo58087 = alloc_clo(lam57412_fptr, 3);

//setting env list
clo58087[1] = filter;
clo58087[2] = op;
clo58087[3] = kont57111;
void* f5711657265 = encode_clo(clo58087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5711657265;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57414 = encode_clo(alloc_clo(lam57414_fptr, 0));

void* lam57416_fptr() // lam57416 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57417 = arg_buffer[1];
//reading env and args
void* a5701357256 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57417))[7];
//not do dummy comment
void* lst = (decode_clo(env57417))[6];
//not do dummy comment
void* kont57111 = (decode_clo(env57417))[5];
//not do dummy comment
void* op = (decode_clo(env57417))[4];
//not do dummy comment
void* cons = (decode_clo(env57417))[3];
//not do dummy comment
void* filter = (decode_clo(env57417))[2];
//not do dummy comment
void* car = (decode_clo(env57417))[1];

//creating new closure instance
void** clo58089 = alloc_clo(lam57414_fptr, 7);

//setting env list
clo58089[1] = car;
clo58089[2] = filter;
clo58089[3] = cons;
clo58089[4] = op;
clo58089[5] = kont57111;
clo58089[6] = lst;
clo58089[7] = cdr;
void* f5711757257 = encode_clo(clo58089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5711757257;
arg_buffer[3] = a5701357256;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57416 = encode_clo(alloc_clo(lam57416_fptr, 0));

void* lam57418_fptr() // lam57418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57419 = arg_buffer[1];
//reading env and args
void* a5701157252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57419))[8];
//not do dummy comment
void* kont57111 = (decode_clo(env57419))[7];
//not do dummy comment
void* op = (decode_clo(env57419))[6];
//not do dummy comment
void* cons = (decode_clo(env57419))[5];
//not do dummy comment
void* list = (decode_clo(env57419))[4];
//not do dummy comment
void* cdr = (decode_clo(env57419))[3];
//not do dummy comment
void* filter = (decode_clo(env57419))[2];
//not do dummy comment
void* car = (decode_clo(env57419))[1];

//if-clause
bool if_guard58090 = is_true(a5701157252);
if(if_guard58090)
{

//creating new closure instance
void** clo58092 = alloc_clo(lam57404_fptr, 1);

//setting env list
clo58092[1] = kont57111;
void* f5711257253 = encode_clo(clo58092);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5711257253;
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
void** clo58094 = alloc_clo(lam57416_fptr, 7);

//setting env list
clo58094[1] = car;
clo58094[2] = filter;
clo58094[3] = cons;
clo58094[4] = op;
clo58094[5] = kont57111;
clo58094[6] = lst;
clo58094[7] = cdr;
void* f5711857255 = encode_clo(clo58094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5711857255;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57418 = encode_clo(alloc_clo(lam57418_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57420 = arg_buffer[1];
//reading env and args
void* kont57111 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58096 = alloc_clo(lam57418_fptr, 8);

//setting env list
clo58096[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo58096[2] = filter;
clo58096[3] = cdr;
clo58096[4] = list;
clo58096[5] = cons;
clo58096[6] = op;
clo58096[7] = kont57111;
clo58096[8] = lst;
void* f5711957251 = encode_clo(clo58096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5711957251;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam57421_fptr() // lam57421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57422 = arg_buffer[1];
//reading env and args
void* a5702357274 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env57422))[3];
//not do dummy comment
void* a5702157271 = (decode_clo(env57422))[2];
//not do dummy comment
void* kont57120 = (decode_clo(env57422))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont57120;
arg_buffer[3] = a5702157271;
arg_buffer[4] = a5702357274;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57421 = encode_clo(alloc_clo(lam57421_fptr, 0));

void* lam57424_fptr() // lam57424 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57425 = arg_buffer[1];
//reading env and args
void* a5702157271 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env57425))[4];
//not do dummy comment
void* n = (decode_clo(env57425))[3];
//not do dummy comment
void* kont57120 = (decode_clo(env57425))[2];
//not do dummy comment
void* _u45 = (decode_clo(env57425))[1];
mpz_t* mpzvar58097 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58097, "1", 10);
void* a5702257272 = encode_mpz(mpzvar58097);

//creating new closure instance
void** clo58099 = alloc_clo(lam57421_fptr, 3);

//setting env list
clo58099[1] = kont57120;
clo58099[2] = a5702157271;
clo58099[3] = drop;
void* f5712157273 = encode_clo(clo58099);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5712157273;
arg_buffer[3] = n;
arg_buffer[4] = a5702257272;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57424 = encode_clo(alloc_clo(lam57424_fptr, 0));

void* lam57426_fptr() // lam57426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57427 = arg_buffer[1];
//reading env and args
void* a5702057269 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57427))[6];
//not do dummy comment
void* n = (decode_clo(env57427))[5];
//not do dummy comment
void* lst = (decode_clo(env57427))[4];
//not do dummy comment
void* drop = (decode_clo(env57427))[3];
//not do dummy comment
void* kont57120 = (decode_clo(env57427))[2];
//not do dummy comment
void* _u45 = (decode_clo(env57427))[1];

//if-clause
bool if_guard58100 = is_true(a5702057269);
if(if_guard58100)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57120);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57120))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58102 = alloc_clo(lam57424_fptr, 4);

//setting env list
clo58102[1] = _u45;
clo58102[2] = kont57120;
clo58102[3] = n;
clo58102[4] = drop;
void* f5712257270 = encode_clo(clo58102);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5712257270;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57426 = encode_clo(alloc_clo(lam57426_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57429 = arg_buffer[1];
//reading env and args
void* kont57120 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar58103 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58103, "0", 10);
void* a5701957267 = encode_mpz(mpzvar58103);

//creating new closure instance
void** clo58105 = alloc_clo(lam57426_fptr, 6);

//setting env list
clo58105[1] = _u45;
clo58105[2] = kont57120;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo58105[3] = drop;
clo58105[4] = lst;
clo58105[5] = n;
clo58105[6] = cdr;
void* f5712357268 = encode_clo(clo58105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5712357268;
arg_buffer[3] = n;
arg_buffer[4] = a5701957267;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam57430_fptr() // lam57430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57431 = arg_buffer[1];
//reading env and args
void* a5702757282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57124 = (decode_clo(env57431))[3];
//not do dummy comment
void* proc = (decode_clo(env57431))[2];
//not do dummy comment
void* a5702557278 = (decode_clo(env57431))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont57124;
arg_buffer[3] = a5702557278;
arg_buffer[4] = a5702757282;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57430 = encode_clo(alloc_clo(lam57430_fptr, 0));

void* lam57432_fptr() // lam57432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57433 = arg_buffer[1];
//reading env and args
void* a5702657280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57124 = (decode_clo(env57433))[5];
//not do dummy comment
void* foldr = (decode_clo(env57433))[4];
//not do dummy comment
void* a5702557278 = (decode_clo(env57433))[3];
//not do dummy comment
void* proc = (decode_clo(env57433))[2];
//not do dummy comment
void* acc = (decode_clo(env57433))[1];

//creating new closure instance
void** clo58107 = alloc_clo(lam57430_fptr, 3);

//setting env list
clo58107[1] = a5702557278;
clo58107[2] = proc;
clo58107[3] = kont57124;
void* f5712557281 = encode_clo(clo58107);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5712557281;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5702657280;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57432 = encode_clo(alloc_clo(lam57432_fptr, 0));

void* lam57434_fptr() // lam57434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57435 = arg_buffer[1];
//reading env and args
void* a5702557278 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57435))[6];
//not do dummy comment
void* kont57124 = (decode_clo(env57435))[5];
//not do dummy comment
void* foldr = (decode_clo(env57435))[4];
//not do dummy comment
void* lst = (decode_clo(env57435))[3];
//not do dummy comment
void* proc = (decode_clo(env57435))[2];
//not do dummy comment
void* acc = (decode_clo(env57435))[1];

//creating new closure instance
void** clo58109 = alloc_clo(lam57432_fptr, 5);

//setting env list
clo58109[1] = acc;
clo58109[2] = proc;
clo58109[3] = a5702557278;
clo58109[4] = foldr;
clo58109[5] = kont57124;
void* f5712657279 = encode_clo(clo58109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5712657279;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57434 = encode_clo(alloc_clo(lam57434_fptr, 0));

void* lam57436_fptr() // lam57436 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57437 = arg_buffer[1];
//reading env and args
void* a5702457276 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57437))[7];
//not do dummy comment
void* kont57124 = (decode_clo(env57437))[6];
//not do dummy comment
void* car = (decode_clo(env57437))[5];
//not do dummy comment
void* foldr = (decode_clo(env57437))[4];
//not do dummy comment
void* lst = (decode_clo(env57437))[3];
//not do dummy comment
void* proc = (decode_clo(env57437))[2];
//not do dummy comment
void* acc = (decode_clo(env57437))[1];

//if-clause
bool if_guard58110 = is_true(a5702457276);
if(if_guard58110)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57124);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57124))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58112 = alloc_clo(lam57434_fptr, 6);

//setting env list
clo58112[1] = acc;
clo58112[2] = proc;
clo58112[3] = lst;
clo58112[4] = foldr;
clo58112[5] = kont57124;
clo58112[6] = cdr;
void* f5712757277 = encode_clo(clo58112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5712757277;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57436 = encode_clo(alloc_clo(lam57436_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57438 = arg_buffer[1];
//reading env and args
void* kont57124 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58114 = alloc_clo(lam57436_fptr, 7);

//setting env list
clo58114[1] = acc;
clo58114[2] = proc;
clo58114[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo58114[4] = foldr;
clo58114[5] = car;
clo58114[6] = kont57124;
clo58114[7] = cdr;
void* f5712857275 = encode_clo(clo58114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5712857275;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam57439_fptr() // lam57439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57440 = arg_buffer[1];
//reading env and args
void* a5703157290 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5702957286 = (decode_clo(env57440))[3];
//not do dummy comment
void* kont57129 = (decode_clo(env57440))[2];
//not do dummy comment
void* cons = (decode_clo(env57440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57129;
arg_buffer[3] = a5702957286;
arg_buffer[4] = a5703157290;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57439 = encode_clo(alloc_clo(lam57439_fptr, 0));

void* lam57441_fptr() // lam57441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57442 = arg_buffer[1];
//reading env and args
void* a5703057288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5702957286 = (decode_clo(env57442))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57442))[4];
//not do dummy comment
void* cons = (decode_clo(env57442))[3];
//not do dummy comment
void* append = (decode_clo(env57442))[2];
//not do dummy comment
void* kont57129 = (decode_clo(env57442))[1];

//creating new closure instance
void** clo58116 = alloc_clo(lam57439_fptr, 3);

//setting env list
clo58116[1] = cons;
clo58116[2] = kont57129;
clo58116[3] = a5702957286;
void* f5713057289 = encode_clo(clo58116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5713057289;
arg_buffer[3] = a5703057288;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57441 = encode_clo(alloc_clo(lam57441_fptr, 0));

void* lam57443_fptr() // lam57443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57444 = arg_buffer[1];
//reading env and args
void* a5702957286 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57444))[6];
//not do dummy comment
void* lst2 = (decode_clo(env57444))[5];
//not do dummy comment
void* lst1 = (decode_clo(env57444))[4];
//not do dummy comment
void* cons = (decode_clo(env57444))[3];
//not do dummy comment
void* append = (decode_clo(env57444))[2];
//not do dummy comment
void* kont57129 = (decode_clo(env57444))[1];

//creating new closure instance
void** clo58118 = alloc_clo(lam57441_fptr, 5);

//setting env list
clo58118[1] = kont57129;
clo58118[2] = append;
clo58118[3] = cons;
clo58118[4] = lst2;
clo58118[5] = a5702957286;
void* f5713157287 = encode_clo(clo58118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5713157287;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57443 = encode_clo(alloc_clo(lam57443_fptr, 0));

void* lam57445_fptr() // lam57445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57446 = arg_buffer[1];
//reading env and args
void* a5702857284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57446))[7];
//not do dummy comment
void* lst2 = (decode_clo(env57446))[6];
//not do dummy comment
void* cons = (decode_clo(env57446))[5];
//not do dummy comment
void* append = (decode_clo(env57446))[4];
//not do dummy comment
void* kont57129 = (decode_clo(env57446))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57446))[2];
//not do dummy comment
void* car = (decode_clo(env57446))[1];

//if-clause
bool if_guard58119 = is_true(a5702857284);
if(if_guard58119)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57129);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57129))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58121 = alloc_clo(lam57443_fptr, 6);

//setting env list
clo58121[1] = kont57129;
clo58121[2] = append;
clo58121[3] = cons;
clo58121[4] = lst1;
clo58121[5] = lst2;
clo58121[6] = cdr;
void* f5713257285 = encode_clo(clo58121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5713257285;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57445 = encode_clo(alloc_clo(lam57445_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57447 = arg_buffer[1];
//reading env and args
void* kont57129 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58123 = alloc_clo(lam57445_fptr, 7);

//setting env list
clo58123[1] = car;
clo58123[2] = lst1;
clo58123[3] = kont57129;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo58123[4] = append;
clo58123[5] = cons;
clo58123[6] = lst2;
clo58123[7] = cdr;
void* f5713357283 = encode_clo(clo58123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5713357283;
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
void* _57448 = arg_buffer[1];
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

void* kont5713457291 = prim_car(lst);
void* lst57292 = prim_cdr(lst);
void* x5703257293 = apply_prim_hash(lst57292);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5713457291);
arg_buffer[2] = x5703257293;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5713457291))[0]);
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
void* _57449 = arg_buffer[1];
//reading env and args
void* kont57136 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5703357294 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57136);
arg_buffer[2] = x5703357294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57136))[0]);
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
void* _57450 = arg_buffer[1];
//reading env and args
void* kont57137 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5703457295 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57137);
arg_buffer[2] = x5703457295;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57137))[0]);
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
void* _57451 = arg_buffer[1];
//reading env and args
void* kont57138 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5703557296 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57138);
arg_buffer[2] = x5703557296;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57138))[0]);
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
void* _57452 = arg_buffer[1];
//reading env and args
void* kont57139 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5703657297 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57139);
arg_buffer[2] = x5703657297;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57139))[0]);
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
void* _57458 = arg_buffer[1];
//reading env and args
void* kont57140 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar58124 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58124, "100", 10);
void* a5703757298 = encode_mpz(mpzvar58124);
mpz_t* mpzvar58125 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58125, "90", 10);
void* a5703857299 = encode_mpz(mpzvar58125);
mpz_t* mpzvar58126 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58126, "80", 10);
void* a5703957300 = encode_mpz(mpzvar58126);
mpz_t* mpzvar58127 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58127, "70", 10);
void* a5704057301 = encode_mpz(mpzvar58127);
mpz_t* mpzvar58128 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58128, "60", 10);
void* a5704157302 = encode_mpz(mpzvar58128);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62_u61);
arg_buffer[2] = kont57140;
arg_buffer[3] = a5703757298;
arg_buffer[4] = a5703857299;
arg_buffer[5] = a5703957300;
arg_buffer[6] = a5704057301;
arg_buffer[7] = a5704157302;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam57459_fptr() // lam57459 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57460 = arg_buffer[1];
//reading env and args
void* x5704257304 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57141 = (decode_clo(env57460))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57141);
arg_buffer[2] = x5704257304;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57141))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57459 = encode_clo(alloc_clo(lam57459_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57461 = arg_buffer[1];
//reading env and args
void* kont57141 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo58130 = alloc_clo(lam57459_fptr, 1);

//setting env list
clo58130[1] = kont57141;
void* f5714257303 = encode_clo(clo58130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5714257303;
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

