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
void* _96057 = arg_buffer[1];
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

void* kont9579795897 = prim_car(lst);
void* lst95898 = prim_cdr(lst);
void* x9571095899 = apply_prim__u43(lst95898);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9579795897);
arg_buffer[2] = x9571095899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9579795897))[0]);
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
void* _96058 = arg_buffer[1];
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

void* kont9579995900 = prim_car(lst);
void* lst95901 = prim_cdr(lst);
void* x9571195902 = apply_prim__u45(lst95901);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9579995900);
arg_buffer[2] = x9571195902;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9579995900))[0]);
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
void* _96059 = arg_buffer[1];
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

void* kont9580195903 = prim_car(lst);
void* lst95904 = prim_cdr(lst);
void* x9571295905 = apply_prim__u42(lst95904);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9580195903);
arg_buffer[2] = x9571295905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9580195903))[0]);
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
void* _96060 = arg_buffer[1];
//reading env and args
void* kont95803 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9571395906 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95803);
arg_buffer[2] = x9571395906;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95803))[0]);
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
void* _96061 = arg_buffer[1];
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

void* kont9580495907 = prim_car(lst);
void* lst95908 = prim_cdr(lst);
void* x9571495909 = apply_prim__u47(lst95908);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9580495907);
arg_buffer[2] = x9571495909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9580495907))[0]);
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
void* _96062 = arg_buffer[1];
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

void* kont9580695910 = prim_car(lst);
void* lst95911 = prim_cdr(lst);
void* x9571595912 = apply_prim__u61(lst95911);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9580695910);
arg_buffer[2] = x9571595912;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9580695910))[0]);
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
void* _96063 = arg_buffer[1];
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

void* kont9580895913 = prim_car(lst);
void* lst95914 = prim_cdr(lst);
void* x9571695915 = apply_prim__u62(lst95914);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9580895913);
arg_buffer[2] = x9571695915;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9580895913))[0]);
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
void* _96064 = arg_buffer[1];
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

void* kont9581095916 = prim_car(lst);
void* lst95917 = prim_cdr(lst);
void* x9571795918 = apply_prim__u60(lst95917);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9581095916);
arg_buffer[2] = x9571795918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9581095916))[0]);
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
void* _96065 = arg_buffer[1];
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

void* kont9581295919 = prim_car(lst);
void* lst95920 = prim_cdr(lst);
void* x9571895921 = apply_prim__u60_u61(lst95920);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9581295919);
arg_buffer[2] = x9571895921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9581295919))[0]);
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
void* _96066 = arg_buffer[1];
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

void* kont9581495922 = prim_car(lst);
void* lst95923 = prim_cdr(lst);
void* x9571995924 = apply_prim__u62_u61(lst95923);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9581495922);
arg_buffer[2] = x9571995924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9581495922))[0]);
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
void* _96067 = arg_buffer[1];
//reading env and args
void* kont95816 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9572095925 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95816);
arg_buffer[2] = x9572095925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95816))[0]);
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
void* _96068 = arg_buffer[1];
//reading env and args
void* kont95817 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9572195926 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95817);
arg_buffer[2] = x9572195926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95817))[0]);
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
void* _96069 = arg_buffer[1];
//reading env and args
void* kont95818 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9572295927 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95818);
arg_buffer[2] = x9572295927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95818))[0]);
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
void* _96070 = arg_buffer[1];
//reading env and args
void* kont95819 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9572395928 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95819);
arg_buffer[2] = x9572395928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95819))[0]);
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
void* _96071 = arg_buffer[1];
//reading env and args
void* kont95820 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9572495929 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95820);
arg_buffer[2] = x9572495929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95820))[0]);
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
void* _96072 = arg_buffer[1];
//reading env and args
void* kont95821 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9572595930 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95821);
arg_buffer[2] = x9572595930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95821))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam96073_fptr() // lam96073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96074 = arg_buffer[1];
//reading env and args
void* a9572895934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env96074))[3];
//not do dummy comment
void* a9572695931 = (decode_clo(env96074))[2];
//not do dummy comment
void* kont95822 = (decode_clo(env96074))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont95822;
arg_buffer[3] = a9572695931;
arg_buffer[4] = a9572895934;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96073 = encode_clo(alloc_clo(lam96073_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96077 = arg_buffer[1];
//reading env and args
void* kont95822 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar96212 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96212, "0", 10);
void* a9572695931 = encode_mpz(mpzvar96212);
mpz_t* mpzvar96213 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96213, "2", 10);
void* a9572795932 = encode_mpz(mpzvar96213);

//creating new closure instance
void** clo96215 = alloc_clo(lam96073_fptr, 3);

//setting env list
clo96215[1] = kont95822;
clo96215[2] = a9572695931;
clo96215[3] = equal_u63;
void* f9582395933 = encode_clo(clo96215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9582395933;
arg_buffer[3] = x;
arg_buffer[4] = a9572795932;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam96078_fptr() // lam96078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96079 = arg_buffer[1];
//reading env and args
void* a9573195938 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env96079))[3];
//not do dummy comment
void* a9572995935 = (decode_clo(env96079))[2];
//not do dummy comment
void* kont95824 = (decode_clo(env96079))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont95824;
arg_buffer[3] = a9572995935;
arg_buffer[4] = a9573195938;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96078 = encode_clo(alloc_clo(lam96078_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96082 = arg_buffer[1];
//reading env and args
void* kont95824 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar96216 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96216, "1", 10);
void* a9572995935 = encode_mpz(mpzvar96216);
mpz_t* mpzvar96217 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96217, "2", 10);
void* a9573095936 = encode_mpz(mpzvar96217);

//creating new closure instance
void** clo96219 = alloc_clo(lam96078_fptr, 3);

//setting env list
clo96219[1] = kont95824;
clo96219[2] = a9572995935;
clo96219[3] = equal_u63;
void* f9582595937 = encode_clo(clo96219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9582595937;
arg_buffer[3] = x;
arg_buffer[4] = a9573095936;
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
void* _96083 = arg_buffer[1];
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

void* kont9582695939 = prim_car(x);
void* x95940 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9582695939);
arg_buffer[2] = x95940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9582695939))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam96086_fptr() // lam96086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96087 = arg_buffer[1];
//reading env and args
void* a9573795950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95828 = (decode_clo(env96087))[3];
//not do dummy comment
void* x = (decode_clo(env96087))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96087))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont95828;
arg_buffer[3] = x;
arg_buffer[4] = a9573795950;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96086 = encode_clo(alloc_clo(lam96086_fptr, 0));

void* lam96088_fptr() // lam96088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96089 = arg_buffer[1];
//reading env and args
void* a9573595947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96089))[5];
//not do dummy comment
void* kont95828 = (decode_clo(env96089))[4];
//not do dummy comment
void* lst = (decode_clo(env96089))[3];
//not do dummy comment
void* x = (decode_clo(env96089))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96089))[1];

//if-clause
bool if_guard96220 = is_true(a9573595947);
if(if_guard96220)
{
void* x9573695948 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95828);
arg_buffer[2] = x9573695948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95828))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo96222 = alloc_clo(lam96086_fptr, 3);

//setting env list
clo96222[1] = member_u63;
clo96222[2] = x;
clo96222[3] = kont95828;
void* f9582995949 = encode_clo(clo96222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9582995949;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96088 = encode_clo(alloc_clo(lam96088_fptr, 0));

void* lam96090_fptr() // lam96090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96091 = arg_buffer[1];
//reading env and args
void* a9573495945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96091))[6];
//not do dummy comment
void* kont95828 = (decode_clo(env96091))[5];
//not do dummy comment
void* lst = (decode_clo(env96091))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env96091))[3];
//not do dummy comment
void* x = (decode_clo(env96091))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96091))[1];

//creating new closure instance
void** clo96224 = alloc_clo(lam96088_fptr, 5);

//setting env list
clo96224[1] = member_u63;
clo96224[2] = x;
clo96224[3] = lst;
clo96224[4] = kont95828;
clo96224[5] = cdr;
void* f9583095946 = encode_clo(clo96224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9583095946;
arg_buffer[3] = a9573495945;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96090 = encode_clo(alloc_clo(lam96090_fptr, 0));

void* lam96092_fptr() // lam96092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96093 = arg_buffer[1];
//reading env and args
void* a9573295942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96093))[7];
//not do dummy comment
void* kont95828 = (decode_clo(env96093))[6];
//not do dummy comment
void* lst = (decode_clo(env96093))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env96093))[4];
//not do dummy comment
void* x = (decode_clo(env96093))[3];
//not do dummy comment
void* car = (decode_clo(env96093))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96093))[1];

//if-clause
bool if_guard96225 = is_true(a9573295942);
if(if_guard96225)
{
void* x9573395943 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95828);
arg_buffer[2] = x9573395943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95828))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo96227 = alloc_clo(lam96090_fptr, 6);

//setting env list
clo96227[1] = member_u63;
clo96227[2] = x;
clo96227[3] = equal_u63;
clo96227[4] = lst;
clo96227[5] = kont95828;
clo96227[6] = cdr;
void* f9583195944 = encode_clo(clo96227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9583195944;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96092 = encode_clo(alloc_clo(lam96092_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96094 = arg_buffer[1];
//reading env and args
void* kont95828 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo96229 = alloc_clo(lam96092_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo96229[1] = member_u63;
clo96229[2] = car;
clo96229[3] = x;
clo96229[4] = equal_u63;
clo96229[5] = lst;
clo96229[6] = kont95828;
clo96229[7] = cdr;
void* f9583295941 = encode_clo(clo96229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9583295941;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam96095_fptr() // lam96095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96096 = arg_buffer[1];
//reading env and args
void* a9574195958 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9574095956 = (decode_clo(env96096))[4];
//not do dummy comment
void* kont95833 = (decode_clo(env96096))[3];
//not do dummy comment
void* fun = (decode_clo(env96096))[2];
//not do dummy comment
void* foldl = (decode_clo(env96096))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont95833;
arg_buffer[3] = fun;
arg_buffer[4] = a9574095956;
arg_buffer[5] = a9574195958;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96095 = encode_clo(alloc_clo(lam96095_fptr, 0));

void* lam96097_fptr() // lam96097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96098 = arg_buffer[1];
//reading env and args
void* a9574095956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96098))[5];
//not do dummy comment
void* lst = (decode_clo(env96098))[4];
//not do dummy comment
void* kont95833 = (decode_clo(env96098))[3];
//not do dummy comment
void* fun = (decode_clo(env96098))[2];
//not do dummy comment
void* foldl = (decode_clo(env96098))[1];

//creating new closure instance
void** clo96231 = alloc_clo(lam96095_fptr, 4);

//setting env list
clo96231[1] = foldl;
clo96231[2] = fun;
clo96231[3] = kont95833;
clo96231[4] = a9574095956;
void* f9583495957 = encode_clo(clo96231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9583495957;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96097 = encode_clo(alloc_clo(lam96097_fptr, 0));

void* lam96099_fptr() // lam96099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96100 = arg_buffer[1];
//reading env and args
void* a9573995954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96100))[6];
//not do dummy comment
void* lst = (decode_clo(env96100))[5];
//not do dummy comment
void* kont95833 = (decode_clo(env96100))[4];
//not do dummy comment
void* fun = (decode_clo(env96100))[3];
//not do dummy comment
void* acc = (decode_clo(env96100))[2];
//not do dummy comment
void* foldl = (decode_clo(env96100))[1];

//creating new closure instance
void** clo96233 = alloc_clo(lam96097_fptr, 5);

//setting env list
clo96233[1] = foldl;
clo96233[2] = fun;
clo96233[3] = kont95833;
clo96233[4] = lst;
clo96233[5] = cdr;
void* f9583595955 = encode_clo(clo96233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9583595955;
arg_buffer[3] = a9573995954;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96099 = encode_clo(alloc_clo(lam96099_fptr, 0));

void* lam96101_fptr() // lam96101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96102 = arg_buffer[1];
//reading env and args
void* a9573895952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96102))[7];
//not do dummy comment
void* lst = (decode_clo(env96102))[6];
//not do dummy comment
void* kont95833 = (decode_clo(env96102))[5];
//not do dummy comment
void* fun = (decode_clo(env96102))[4];
//not do dummy comment
void* acc = (decode_clo(env96102))[3];
//not do dummy comment
void* car = (decode_clo(env96102))[2];
//not do dummy comment
void* foldl = (decode_clo(env96102))[1];

//if-clause
bool if_guard96234 = is_true(a9573895952);
if(if_guard96234)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95833);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95833))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo96236 = alloc_clo(lam96099_fptr, 6);

//setting env list
clo96236[1] = foldl;
clo96236[2] = acc;
clo96236[3] = fun;
clo96236[4] = kont95833;
clo96236[5] = lst;
clo96236[6] = cdr;
void* f9583695953 = encode_clo(clo96236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9583695953;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96101 = encode_clo(alloc_clo(lam96101_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96103 = arg_buffer[1];
//reading env and args
void* kont95833 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo96238 = alloc_clo(lam96101_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo96238[1] = foldl;
clo96238[2] = car;
clo96238[3] = acc;
clo96238[4] = fun;
clo96238[5] = kont95833;
clo96238[6] = lst;
clo96238[7] = cdr;
void* f9583795951 = encode_clo(clo96238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9583795951;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam96104_fptr() // lam96104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96105 = arg_buffer[1];
//reading env and args
void* a9574595966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96105))[3];
//not do dummy comment
void* a9574395962 = (decode_clo(env96105))[2];
//not do dummy comment
void* kont95838 = (decode_clo(env96105))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont95838;
arg_buffer[3] = a9574395962;
arg_buffer[4] = a9574595966;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96104 = encode_clo(alloc_clo(lam96104_fptr, 0));

void* lam96106_fptr() // lam96106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96107 = arg_buffer[1];
//reading env and args
void* a9574495964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96107))[5];
//not do dummy comment
void* a9574395962 = (decode_clo(env96107))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96107))[3];
//not do dummy comment
void* kont95838 = (decode_clo(env96107))[2];
//not do dummy comment
void* cons = (decode_clo(env96107))[1];

//creating new closure instance
void** clo96240 = alloc_clo(lam96104_fptr, 3);

//setting env list
clo96240[1] = kont95838;
clo96240[2] = a9574395962;
clo96240[3] = reverse_u45helper;
void* f9583995965 = encode_clo(clo96240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9583995965;
arg_buffer[3] = a9574495964;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96106 = encode_clo(alloc_clo(lam96106_fptr, 0));

void* lam96108_fptr() // lam96108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96109 = arg_buffer[1];
//reading env and args
void* a9574395962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96109))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96109))[5];
//not do dummy comment
void* lst2 = (decode_clo(env96109))[4];
//not do dummy comment
void* cons = (decode_clo(env96109))[3];
//not do dummy comment
void* kont95838 = (decode_clo(env96109))[2];
//not do dummy comment
void* car = (decode_clo(env96109))[1];

//creating new closure instance
void** clo96242 = alloc_clo(lam96106_fptr, 5);

//setting env list
clo96242[1] = cons;
clo96242[2] = kont95838;
clo96242[3] = lst2;
clo96242[4] = a9574395962;
clo96242[5] = reverse_u45helper;
void* f9584095963 = encode_clo(clo96242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9584095963;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96108 = encode_clo(alloc_clo(lam96108_fptr, 0));

void* lam96110_fptr() // lam96110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96111 = arg_buffer[1];
//reading env and args
void* a9574295960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96111))[7];
//not do dummy comment
void* lst = (decode_clo(env96111))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96111))[5];
//not do dummy comment
void* lst2 = (decode_clo(env96111))[4];
//not do dummy comment
void* cons = (decode_clo(env96111))[3];
//not do dummy comment
void* kont95838 = (decode_clo(env96111))[2];
//not do dummy comment
void* car = (decode_clo(env96111))[1];

//if-clause
bool if_guard96243 = is_true(a9574295960);
if(if_guard96243)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95838);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95838))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo96245 = alloc_clo(lam96108_fptr, 6);

//setting env list
clo96245[1] = car;
clo96245[2] = kont95838;
clo96245[3] = cons;
clo96245[4] = lst2;
clo96245[5] = reverse_u45helper;
clo96245[6] = lst;
void* f9584195961 = encode_clo(clo96245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9584195961;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96110 = encode_clo(alloc_clo(lam96110_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96112 = arg_buffer[1];
//reading env and args
void* kont95838 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo96247 = alloc_clo(lam96110_fptr, 7);

//setting env list
clo96247[1] = car;
clo96247[2] = kont95838;
clo96247[3] = cons;
clo96247[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo96247[5] = reverse_u45helper;
clo96247[6] = lst;
clo96247[7] = cdr;
void* f9584295959 = encode_clo(clo96247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9584295959;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam96113_fptr() // lam96113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96114 = arg_buffer[1];
//reading env and args
void* a9574695968 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95843 = (decode_clo(env96114))[3];
//not do dummy comment
void* lst = (decode_clo(env96114))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96114))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont95843;
arg_buffer[3] = lst;
arg_buffer[4] = a9574695968;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96113 = encode_clo(alloc_clo(lam96113_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96115 = arg_buffer[1];
//reading env and args
void* kont95843 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo96249 = alloc_clo(lam96113_fptr, 3);

//setting env list
clo96249[1] = reverse_u45helper;
clo96249[2] = lst;
clo96249[3] = kont95843;
void* f9584495967 = encode_clo(clo96249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9584495967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam96116_fptr() // lam96116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96117 = arg_buffer[1];
//reading env and args
void* x9574995973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95845 = (decode_clo(env96117))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95845);
arg_buffer[2] = x9574995973;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95845))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96116 = encode_clo(alloc_clo(lam96116_fptr, 0));

void* lam96118_fptr() // lam96118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96119 = arg_buffer[1];
//reading env and args
void* a9575495982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95845 = (decode_clo(env96119))[4];
//not do dummy comment
void* a9575095975 = (decode_clo(env96119))[3];
//not do dummy comment
void* a9575295978 = (decode_clo(env96119))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env96119))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont95845;
arg_buffer[3] = a9575095975;
arg_buffer[4] = a9575295978;
arg_buffer[5] = a9575495982;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96118 = encode_clo(alloc_clo(lam96118_fptr, 0));

void* lam96120_fptr() // lam96120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96121 = arg_buffer[1];
//reading env and args
void* a9575395980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95845 = (decode_clo(env96121))[6];
//not do dummy comment
void* a9575095975 = (decode_clo(env96121))[5];
//not do dummy comment
void* a9575295978 = (decode_clo(env96121))[4];
//not do dummy comment
void* cons = (decode_clo(env96121))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env96121))[2];
//not do dummy comment
void* lst2 = (decode_clo(env96121))[1];

//creating new closure instance
void** clo96251 = alloc_clo(lam96118_fptr, 4);

//setting env list
clo96251[1] = take_u45helper;
clo96251[2] = a9575295978;
clo96251[3] = a9575095975;
clo96251[4] = kont95845;
void* f9584795981 = encode_clo(clo96251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9584795981;
arg_buffer[3] = a9575395980;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96120 = encode_clo(alloc_clo(lam96120_fptr, 0));

void* lam96122_fptr() // lam96122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96123 = arg_buffer[1];
//reading env and args
void* a9575295978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9575095975 = (decode_clo(env96123))[7];
//not do dummy comment
void* car = (decode_clo(env96123))[6];
//not do dummy comment
void* cons = (decode_clo(env96123))[5];
//not do dummy comment
void* lst = (decode_clo(env96123))[4];
//not do dummy comment
void* kont95845 = (decode_clo(env96123))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env96123))[2];
//not do dummy comment
void* lst2 = (decode_clo(env96123))[1];

//creating new closure instance
void** clo96253 = alloc_clo(lam96120_fptr, 6);

//setting env list
clo96253[1] = lst2;
clo96253[2] = take_u45helper;
clo96253[3] = cons;
clo96253[4] = a9575295978;
clo96253[5] = a9575095975;
clo96253[6] = kont95845;
void* f9584895979 = encode_clo(clo96253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9584895979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96122 = encode_clo(alloc_clo(lam96122_fptr, 0));

void* lam96125_fptr() // lam96125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96126 = arg_buffer[1];
//reading env and args
void* a9575095975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env96126))[8];
//not do dummy comment
void* _u45 = (decode_clo(env96126))[7];
//not do dummy comment
void* lst = (decode_clo(env96126))[6];
//not do dummy comment
void* kont95845 = (decode_clo(env96126))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env96126))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96126))[3];
//not do dummy comment
void* n = (decode_clo(env96126))[2];
//not do dummy comment
void* car = (decode_clo(env96126))[1];
mpz_t* mpzvar96254 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96254, "1", 10);
void* a9575195976 = encode_mpz(mpzvar96254);

//creating new closure instance
void** clo96256 = alloc_clo(lam96122_fptr, 7);

//setting env list
clo96256[1] = lst2;
clo96256[2] = take_u45helper;
clo96256[3] = kont95845;
clo96256[4] = lst;
clo96256[5] = cons;
clo96256[6] = car;
clo96256[7] = a9575095975;
void* f9584995977 = encode_clo(clo96256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9584995977;
arg_buffer[3] = n;
arg_buffer[4] = a9575195976;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96125 = encode_clo(alloc_clo(lam96125_fptr, 0));

void* lam96127_fptr() // lam96127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96128 = arg_buffer[1];
//reading env and args
void* a9574895971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96128))[10];
//not do dummy comment
void* reverse = (decode_clo(env96128))[9];
//not do dummy comment
void* cons = (decode_clo(env96128))[8];
//not do dummy comment
void* _u45 = (decode_clo(env96128))[7];
//not do dummy comment
void* lst = (decode_clo(env96128))[6];
//not do dummy comment
void* kont95845 = (decode_clo(env96128))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env96128))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96128))[3];
//not do dummy comment
void* n = (decode_clo(env96128))[2];
//not do dummy comment
void* car = (decode_clo(env96128))[1];

//if-clause
bool if_guard96257 = is_true(a9574895971);
if(if_guard96257)
{

//creating new closure instance
void** clo96259 = alloc_clo(lam96116_fptr, 1);

//setting env list
clo96259[1] = kont95845;
void* f9584695972 = encode_clo(clo96259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9584695972;
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
void** clo96261 = alloc_clo(lam96125_fptr, 8);

//setting env list
clo96261[1] = car;
clo96261[2] = n;
clo96261[3] = lst2;
clo96261[4] = take_u45helper;
clo96261[5] = kont95845;
clo96261[6] = lst;
clo96261[7] = _u45;
clo96261[8] = cons;
void* f9585095974 = encode_clo(clo96261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9585095974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96127 = encode_clo(alloc_clo(lam96127_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96130 = arg_buffer[1];
//reading env and args
void* kont95845 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar96262 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96262, "0", 10);
void* a9574795969 = encode_mpz(mpzvar96262);

//creating new closure instance
void** clo96264 = alloc_clo(lam96127_fptr, 10);

//setting env list
clo96264[1] = car;
clo96264[2] = n;
clo96264[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo96264[4] = take_u45helper;
clo96264[5] = kont95845;
clo96264[6] = lst;
clo96264[7] = _u45;
clo96264[8] = cons;
clo96264[9] = reverse;
clo96264[10] = cdr;
void* f9585195970 = encode_clo(clo96264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9585195970;
arg_buffer[3] = n;
arg_buffer[4] = a9574795969;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam96131_fptr() // lam96131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96132 = arg_buffer[1];
//reading env and args
void* a9575595984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96132))[4];
//not do dummy comment
void* kont95852 = (decode_clo(env96132))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env96132))[2];
//not do dummy comment
void* n = (decode_clo(env96132))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont95852;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9575595984;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96131 = encode_clo(alloc_clo(lam96131_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96133 = arg_buffer[1];
//reading env and args
void* kont95852 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo96266 = alloc_clo(lam96131_fptr, 4);

//setting env list
clo96266[1] = n;
clo96266[2] = take_u45helper;
clo96266[3] = kont95852;
clo96266[4] = lst;
void* f9585395983 = encode_clo(clo96266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9585395983;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam96135_fptr() // lam96135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96136 = arg_buffer[1];
//reading env and args
void* a9576095992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9575895988 = (decode_clo(env96136))[3];
//not do dummy comment
void* _u43 = (decode_clo(env96136))[2];
//not do dummy comment
void* kont95854 = (decode_clo(env96136))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont95854;
arg_buffer[3] = a9575895988;
arg_buffer[4] = a9576095992;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96135 = encode_clo(alloc_clo(lam96135_fptr, 0));

void* lam96137_fptr() // lam96137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96138 = arg_buffer[1];
//reading env and args
void* a9575995990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9575895988 = (decode_clo(env96138))[4];
//not do dummy comment
void* length = (decode_clo(env96138))[3];
//not do dummy comment
void* _u43 = (decode_clo(env96138))[2];
//not do dummy comment
void* kont95854 = (decode_clo(env96138))[1];

//creating new closure instance
void** clo96268 = alloc_clo(lam96135_fptr, 3);

//setting env list
clo96268[1] = kont95854;
clo96268[2] = _u43;
clo96268[3] = a9575895988;
void* f9585595991 = encode_clo(clo96268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9585595991;
arg_buffer[3] = a9575995990;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96137 = encode_clo(alloc_clo(lam96137_fptr, 0));

void* lam96140_fptr() // lam96140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96141 = arg_buffer[1];
//reading env and args
void* a9575695986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96141))[5];
//not do dummy comment
void* lst = (decode_clo(env96141))[4];
//not do dummy comment
void* length = (decode_clo(env96141))[3];
//not do dummy comment
void* _u43 = (decode_clo(env96141))[2];
//not do dummy comment
void* kont95854 = (decode_clo(env96141))[1];

//if-clause
bool if_guard96269 = is_true(a9575695986);
if(if_guard96269)
{
mpz_t* mpzvar96270 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96270, "0", 10);
void* x9575795987 = encode_mpz(mpzvar96270);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95854);
arg_buffer[2] = x9575795987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95854))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar96271 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96271, "1", 10);
void* a9575895988 = encode_mpz(mpzvar96271);

//creating new closure instance
void** clo96273 = alloc_clo(lam96137_fptr, 4);

//setting env list
clo96273[1] = kont95854;
clo96273[2] = _u43;
clo96273[3] = length;
clo96273[4] = a9575895988;
void* f9585695989 = encode_clo(clo96273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9585695989;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96140 = encode_clo(alloc_clo(lam96140_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96142 = arg_buffer[1];
//reading env and args
void* kont95854 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo96275 = alloc_clo(lam96140_fptr, 5);

//setting env list
clo96275[1] = kont95854;
clo96275[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo96275[3] = length;
clo96275[4] = lst;
clo96275[5] = cdr;
void* f9585795985 = encode_clo(clo96275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9585795985;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam96143_fptr() // lam96143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96144 = arg_buffer[1];
//reading env and args
void* x9576295996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95858 = (decode_clo(env96144))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95858);
arg_buffer[2] = x9576295996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95858))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96143 = encode_clo(alloc_clo(lam96143_fptr, 0));

void* lam96145_fptr() // lam96145 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96146 = arg_buffer[1];
//reading env and args
void* a9576696004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95858 = (decode_clo(env96146))[3];
//not do dummy comment
void* cons = (decode_clo(env96146))[2];
//not do dummy comment
void* a9576496000 = (decode_clo(env96146))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont95858;
arg_buffer[3] = a9576496000;
arg_buffer[4] = a9576696004;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96145 = encode_clo(alloc_clo(lam96145_fptr, 0));

void* lam96147_fptr() // lam96147 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96148 = arg_buffer[1];
//reading env and args
void* a9576596002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95858 = (decode_clo(env96148))[5];
//not do dummy comment
void* map = (decode_clo(env96148))[4];
//not do dummy comment
void* proc = (decode_clo(env96148))[3];
//not do dummy comment
void* cons = (decode_clo(env96148))[2];
//not do dummy comment
void* a9576496000 = (decode_clo(env96148))[1];

//creating new closure instance
void** clo96277 = alloc_clo(lam96145_fptr, 3);

//setting env list
clo96277[1] = a9576496000;
clo96277[2] = cons;
clo96277[3] = kont95858;
void* f9586096003 = encode_clo(clo96277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9586096003;
arg_buffer[3] = proc;
arg_buffer[4] = a9576596002;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96147 = encode_clo(alloc_clo(lam96147_fptr, 0));

void* lam96149_fptr() // lam96149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96150 = arg_buffer[1];
//reading env and args
void* a9576496000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96150))[6];
//not do dummy comment
void* kont95858 = (decode_clo(env96150))[5];
//not do dummy comment
void* lst = (decode_clo(env96150))[4];
//not do dummy comment
void* map = (decode_clo(env96150))[3];
//not do dummy comment
void* proc = (decode_clo(env96150))[2];
//not do dummy comment
void* cons = (decode_clo(env96150))[1];

//creating new closure instance
void** clo96279 = alloc_clo(lam96147_fptr, 5);

//setting env list
clo96279[1] = a9576496000;
clo96279[2] = cons;
clo96279[3] = proc;
clo96279[4] = map;
clo96279[5] = kont95858;
void* f9586196001 = encode_clo(clo96279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9586196001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96149 = encode_clo(alloc_clo(lam96149_fptr, 0));

void* lam96151_fptr() // lam96151 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96152 = arg_buffer[1];
//reading env and args
void* a9576395998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96152))[6];
//not do dummy comment
void* kont95858 = (decode_clo(env96152))[5];
//not do dummy comment
void* lst = (decode_clo(env96152))[4];
//not do dummy comment
void* map = (decode_clo(env96152))[3];
//not do dummy comment
void* proc = (decode_clo(env96152))[2];
//not do dummy comment
void* cons = (decode_clo(env96152))[1];

//creating new closure instance
void** clo96281 = alloc_clo(lam96149_fptr, 6);

//setting env list
clo96281[1] = cons;
clo96281[2] = proc;
clo96281[3] = map;
clo96281[4] = lst;
clo96281[5] = kont95858;
clo96281[6] = cdr;
void* f9586295999 = encode_clo(clo96281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9586295999;
arg_buffer[3] = a9576395998;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96151 = encode_clo(alloc_clo(lam96151_fptr, 0));

void* lam96153_fptr() // lam96153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96154 = arg_buffer[1];
//reading env and args
void* a9576195994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95858 = (decode_clo(env96154))[8];
//not do dummy comment
void* lst = (decode_clo(env96154))[7];
//not do dummy comment
void* map = (decode_clo(env96154))[6];
//not do dummy comment
void* proc = (decode_clo(env96154))[5];
//not do dummy comment
void* car = (decode_clo(env96154))[4];
//not do dummy comment
void* cons = (decode_clo(env96154))[3];
//not do dummy comment
void* list = (decode_clo(env96154))[2];
//not do dummy comment
void* cdr = (decode_clo(env96154))[1];

//if-clause
bool if_guard96282 = is_true(a9576195994);
if(if_guard96282)
{

//creating new closure instance
void** clo96284 = alloc_clo(lam96143_fptr, 1);

//setting env list
clo96284[1] = kont95858;
void* f9585995995 = encode_clo(clo96284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9585995995;
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
void** clo96286 = alloc_clo(lam96151_fptr, 6);

//setting env list
clo96286[1] = cons;
clo96286[2] = proc;
clo96286[3] = map;
clo96286[4] = lst;
clo96286[5] = kont95858;
clo96286[6] = cdr;
void* f9586395997 = encode_clo(clo96286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9586395997;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96153 = encode_clo(alloc_clo(lam96153_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96155 = arg_buffer[1];
//reading env and args
void* kont95858 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo96288 = alloc_clo(lam96153_fptr, 8);

//setting env list
clo96288[1] = cdr;
clo96288[2] = list;
clo96288[3] = cons;
clo96288[4] = car;
clo96288[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo96288[6] = map;
clo96288[7] = lst;
clo96288[8] = kont95858;
void* f9586495993 = encode_clo(clo96288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9586495993;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam96156_fptr() // lam96156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96157 = arg_buffer[1];
//reading env and args
void* x9576896008 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95865 = (decode_clo(env96157))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95865);
arg_buffer[2] = x9576896008;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95865))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96156 = encode_clo(alloc_clo(lam96156_fptr, 0));

void* lam96158_fptr() // lam96158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96159 = arg_buffer[1];
//reading env and args
void* a9577396018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95865 = (decode_clo(env96159))[3];
//not do dummy comment
void* a9577196014 = (decode_clo(env96159))[2];
//not do dummy comment
void* cons = (decode_clo(env96159))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont95865;
arg_buffer[3] = a9577196014;
arg_buffer[4] = a9577396018;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96158 = encode_clo(alloc_clo(lam96158_fptr, 0));

void* lam96160_fptr() // lam96160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96161 = arg_buffer[1];
//reading env and args
void* a9577296016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env96161))[5];
//not do dummy comment
void* kont95865 = (decode_clo(env96161))[4];
//not do dummy comment
void* cons = (decode_clo(env96161))[3];
//not do dummy comment
void* a9577196014 = (decode_clo(env96161))[2];
//not do dummy comment
void* filter = (decode_clo(env96161))[1];

//creating new closure instance
void** clo96290 = alloc_clo(lam96158_fptr, 3);

//setting env list
clo96290[1] = cons;
clo96290[2] = a9577196014;
clo96290[3] = kont95865;
void* f9586796017 = encode_clo(clo96290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9586796017;
arg_buffer[3] = op;
arg_buffer[4] = a9577296016;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96160 = encode_clo(alloc_clo(lam96160_fptr, 0));

void* lam96162_fptr() // lam96162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96163 = arg_buffer[1];
//reading env and args
void* a9577196014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96163))[6];
//not do dummy comment
void* lst = (decode_clo(env96163))[5];
//not do dummy comment
void* op = (decode_clo(env96163))[4];
//not do dummy comment
void* kont95865 = (decode_clo(env96163))[3];
//not do dummy comment
void* filter = (decode_clo(env96163))[2];
//not do dummy comment
void* cons = (decode_clo(env96163))[1];

//creating new closure instance
void** clo96292 = alloc_clo(lam96160_fptr, 5);

//setting env list
clo96292[1] = filter;
clo96292[2] = a9577196014;
clo96292[3] = cons;
clo96292[4] = kont95865;
clo96292[5] = op;
void* f9586896015 = encode_clo(clo96292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9586896015;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96162 = encode_clo(alloc_clo(lam96162_fptr, 0));

void* lam96164_fptr() // lam96164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96165 = arg_buffer[1];
//reading env and args
void* a9577496020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env96165))[3];
//not do dummy comment
void* kont95865 = (decode_clo(env96165))[2];
//not do dummy comment
void* filter = (decode_clo(env96165))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont95865;
arg_buffer[3] = op;
arg_buffer[4] = a9577496020;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96164 = encode_clo(alloc_clo(lam96164_fptr, 0));

void* lam96166_fptr() // lam96166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96167 = arg_buffer[1];
//reading env and args
void* a9577096012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96167))[7];
//not do dummy comment
void* lst = (decode_clo(env96167))[6];
//not do dummy comment
void* op = (decode_clo(env96167))[5];
//not do dummy comment
void* kont95865 = (decode_clo(env96167))[4];
//not do dummy comment
void* cons = (decode_clo(env96167))[3];
//not do dummy comment
void* filter = (decode_clo(env96167))[2];
//not do dummy comment
void* car = (decode_clo(env96167))[1];

//if-clause
bool if_guard96293 = is_true(a9577096012);
if(if_guard96293)
{

//creating new closure instance
void** clo96295 = alloc_clo(lam96162_fptr, 6);

//setting env list
clo96295[1] = cons;
clo96295[2] = filter;
clo96295[3] = kont95865;
clo96295[4] = op;
clo96295[5] = lst;
clo96295[6] = cdr;
void* f9586996013 = encode_clo(clo96295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9586996013;
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
void** clo96297 = alloc_clo(lam96164_fptr, 3);

//setting env list
clo96297[1] = filter;
clo96297[2] = kont95865;
clo96297[3] = op;
void* f9587096019 = encode_clo(clo96297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9587096019;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96166 = encode_clo(alloc_clo(lam96166_fptr, 0));

void* lam96168_fptr() // lam96168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96169 = arg_buffer[1];
//reading env and args
void* a9576996010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96169))[7];
//not do dummy comment
void* lst = (decode_clo(env96169))[6];
//not do dummy comment
void* op = (decode_clo(env96169))[5];
//not do dummy comment
void* kont95865 = (decode_clo(env96169))[4];
//not do dummy comment
void* cons = (decode_clo(env96169))[3];
//not do dummy comment
void* filter = (decode_clo(env96169))[2];
//not do dummy comment
void* car = (decode_clo(env96169))[1];

//creating new closure instance
void** clo96299 = alloc_clo(lam96166_fptr, 7);

//setting env list
clo96299[1] = car;
clo96299[2] = filter;
clo96299[3] = cons;
clo96299[4] = kont95865;
clo96299[5] = op;
clo96299[6] = lst;
clo96299[7] = cdr;
void* f9587196011 = encode_clo(clo96299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9587196011;
arg_buffer[3] = a9576996010;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96168 = encode_clo(alloc_clo(lam96168_fptr, 0));

void* lam96170_fptr() // lam96170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96171 = arg_buffer[1];
//reading env and args
void* a9576796006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96171))[8];
//not do dummy comment
void* op = (decode_clo(env96171))[7];
//not do dummy comment
void* kont95865 = (decode_clo(env96171))[6];
//not do dummy comment
void* cons = (decode_clo(env96171))[5];
//not do dummy comment
void* list = (decode_clo(env96171))[4];
//not do dummy comment
void* cdr = (decode_clo(env96171))[3];
//not do dummy comment
void* filter = (decode_clo(env96171))[2];
//not do dummy comment
void* car = (decode_clo(env96171))[1];

//if-clause
bool if_guard96300 = is_true(a9576796006);
if(if_guard96300)
{

//creating new closure instance
void** clo96302 = alloc_clo(lam96156_fptr, 1);

//setting env list
clo96302[1] = kont95865;
void* f9586696007 = encode_clo(clo96302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9586696007;
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
void** clo96304 = alloc_clo(lam96168_fptr, 7);

//setting env list
clo96304[1] = car;
clo96304[2] = filter;
clo96304[3] = cons;
clo96304[4] = kont95865;
clo96304[5] = op;
clo96304[6] = lst;
clo96304[7] = cdr;
void* f9587296009 = encode_clo(clo96304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9587296009;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96170 = encode_clo(alloc_clo(lam96170_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96172 = arg_buffer[1];
//reading env and args
void* kont95865 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo96306 = alloc_clo(lam96170_fptr, 8);

//setting env list
clo96306[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo96306[2] = filter;
clo96306[3] = cdr;
clo96306[4] = list;
clo96306[5] = cons;
clo96306[6] = kont95865;
clo96306[7] = op;
clo96306[8] = lst;
void* f9587396005 = encode_clo(clo96306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9587396005;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam96173_fptr() // lam96173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96174 = arg_buffer[1];
//reading env and args
void* a9577996028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95874 = (decode_clo(env96174))[3];
//not do dummy comment
void* drop = (decode_clo(env96174))[2];
//not do dummy comment
void* a9577796025 = (decode_clo(env96174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont95874;
arg_buffer[3] = a9577796025;
arg_buffer[4] = a9577996028;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96173 = encode_clo(alloc_clo(lam96173_fptr, 0));

void* lam96176_fptr() // lam96176 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96177 = arg_buffer[1];
//reading env and args
void* a9577796025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95874 = (decode_clo(env96177))[4];
//not do dummy comment
void* drop = (decode_clo(env96177))[3];
//not do dummy comment
void* n = (decode_clo(env96177))[2];
//not do dummy comment
void* _u45 = (decode_clo(env96177))[1];
mpz_t* mpzvar96307 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96307, "1", 10);
void* a9577896026 = encode_mpz(mpzvar96307);

//creating new closure instance
void** clo96309 = alloc_clo(lam96173_fptr, 3);

//setting env list
clo96309[1] = a9577796025;
clo96309[2] = drop;
clo96309[3] = kont95874;
void* f9587596027 = encode_clo(clo96309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9587596027;
arg_buffer[3] = n;
arg_buffer[4] = a9577896026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96176 = encode_clo(alloc_clo(lam96176_fptr, 0));

void* lam96178_fptr() // lam96178 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96179 = arg_buffer[1];
//reading env and args
void* a9577696023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96179))[6];
//not do dummy comment
void* kont95874 = (decode_clo(env96179))[5];
//not do dummy comment
void* n = (decode_clo(env96179))[4];
//not do dummy comment
void* _u45 = (decode_clo(env96179))[3];
//not do dummy comment
void* lst = (decode_clo(env96179))[2];
//not do dummy comment
void* drop = (decode_clo(env96179))[1];

//if-clause
bool if_guard96310 = is_true(a9577696023);
if(if_guard96310)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95874);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95874))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo96312 = alloc_clo(lam96176_fptr, 4);

//setting env list
clo96312[1] = _u45;
clo96312[2] = n;
clo96312[3] = drop;
clo96312[4] = kont95874;
void* f9587696024 = encode_clo(clo96312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9587696024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96178 = encode_clo(alloc_clo(lam96178_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96181 = arg_buffer[1];
//reading env and args
void* kont95874 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar96313 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar96313, "0", 10);
void* a9577596021 = encode_mpz(mpzvar96313);

//creating new closure instance
void** clo96315 = alloc_clo(lam96178_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo96315[1] = drop;
clo96315[2] = lst;
clo96315[3] = _u45;
clo96315[4] = n;
clo96315[5] = kont95874;
clo96315[6] = cdr;
void* f9587796022 = encode_clo(clo96315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9587796022;
arg_buffer[3] = n;
arg_buffer[4] = a9577596021;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam96182_fptr() // lam96182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96183 = arg_buffer[1];
//reading env and args
void* a9578396036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95878 = (decode_clo(env96183))[3];
//not do dummy comment
void* proc = (decode_clo(env96183))[2];
//not do dummy comment
void* a9578196032 = (decode_clo(env96183))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont95878;
arg_buffer[3] = a9578196032;
arg_buffer[4] = a9578396036;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96182 = encode_clo(alloc_clo(lam96182_fptr, 0));

void* lam96184_fptr() // lam96184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96185 = arg_buffer[1];
//reading env and args
void* a9578296034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env96185))[5];
//not do dummy comment
void* kont95878 = (decode_clo(env96185))[4];
//not do dummy comment
void* a9578196032 = (decode_clo(env96185))[3];
//not do dummy comment
void* proc = (decode_clo(env96185))[2];
//not do dummy comment
void* acc = (decode_clo(env96185))[1];

//creating new closure instance
void** clo96317 = alloc_clo(lam96182_fptr, 3);

//setting env list
clo96317[1] = a9578196032;
clo96317[2] = proc;
clo96317[3] = kont95878;
void* f9587996035 = encode_clo(clo96317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9587996035;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9578296034;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96184 = encode_clo(alloc_clo(lam96184_fptr, 0));

void* lam96186_fptr() // lam96186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96187 = arg_buffer[1];
//reading env and args
void* a9578196032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96187))[6];
//not do dummy comment
void* kont95878 = (decode_clo(env96187))[5];
//not do dummy comment
void* foldr = (decode_clo(env96187))[4];
//not do dummy comment
void* lst = (decode_clo(env96187))[3];
//not do dummy comment
void* proc = (decode_clo(env96187))[2];
//not do dummy comment
void* acc = (decode_clo(env96187))[1];

//creating new closure instance
void** clo96319 = alloc_clo(lam96184_fptr, 5);

//setting env list
clo96319[1] = acc;
clo96319[2] = proc;
clo96319[3] = a9578196032;
clo96319[4] = kont95878;
clo96319[5] = foldr;
void* f9588096033 = encode_clo(clo96319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9588096033;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96186 = encode_clo(alloc_clo(lam96186_fptr, 0));

void* lam96188_fptr() // lam96188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96189 = arg_buffer[1];
//reading env and args
void* a9578096030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96189))[7];
//not do dummy comment
void* kont95878 = (decode_clo(env96189))[6];
//not do dummy comment
void* car = (decode_clo(env96189))[5];
//not do dummy comment
void* foldr = (decode_clo(env96189))[4];
//not do dummy comment
void* lst = (decode_clo(env96189))[3];
//not do dummy comment
void* proc = (decode_clo(env96189))[2];
//not do dummy comment
void* acc = (decode_clo(env96189))[1];

//if-clause
bool if_guard96320 = is_true(a9578096030);
if(if_guard96320)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95878);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95878))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo96322 = alloc_clo(lam96186_fptr, 6);

//setting env list
clo96322[1] = acc;
clo96322[2] = proc;
clo96322[3] = lst;
clo96322[4] = foldr;
clo96322[5] = kont95878;
clo96322[6] = cdr;
void* f9588196031 = encode_clo(clo96322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9588196031;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96188 = encode_clo(alloc_clo(lam96188_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96190 = arg_buffer[1];
//reading env and args
void* kont95878 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo96324 = alloc_clo(lam96188_fptr, 7);

//setting env list
clo96324[1] = acc;
clo96324[2] = proc;
clo96324[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo96324[4] = foldr;
clo96324[5] = car;
clo96324[6] = kont95878;
clo96324[7] = cdr;
void* f9588296029 = encode_clo(clo96324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9588296029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam96191_fptr() // lam96191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96192 = arg_buffer[1];
//reading env and args
void* a9578796044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9578596040 = (decode_clo(env96192))[3];
//not do dummy comment
void* kont95883 = (decode_clo(env96192))[2];
//not do dummy comment
void* cons = (decode_clo(env96192))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont95883;
arg_buffer[3] = a9578596040;
arg_buffer[4] = a9578796044;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96191 = encode_clo(alloc_clo(lam96191_fptr, 0));

void* lam96193_fptr() // lam96193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96194 = arg_buffer[1];
//reading env and args
void* a9578696042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9578596040 = (decode_clo(env96194))[5];
//not do dummy comment
void* append = (decode_clo(env96194))[4];
//not do dummy comment
void* kont95883 = (decode_clo(env96194))[3];
//not do dummy comment
void* lst2 = (decode_clo(env96194))[2];
//not do dummy comment
void* cons = (decode_clo(env96194))[1];

//creating new closure instance
void** clo96326 = alloc_clo(lam96191_fptr, 3);

//setting env list
clo96326[1] = cons;
clo96326[2] = kont95883;
clo96326[3] = a9578596040;
void* f9588496043 = encode_clo(clo96326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9588496043;
arg_buffer[3] = a9578696042;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96193 = encode_clo(alloc_clo(lam96193_fptr, 0));

void* lam96195_fptr() // lam96195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96196 = arg_buffer[1];
//reading env and args
void* a9578596040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96196))[6];
//not do dummy comment
void* append = (decode_clo(env96196))[5];
//not do dummy comment
void* kont95883 = (decode_clo(env96196))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96196))[3];
//not do dummy comment
void* lst1 = (decode_clo(env96196))[2];
//not do dummy comment
void* cons = (decode_clo(env96196))[1];

//creating new closure instance
void** clo96328 = alloc_clo(lam96193_fptr, 5);

//setting env list
clo96328[1] = cons;
clo96328[2] = lst2;
clo96328[3] = kont95883;
clo96328[4] = append;
clo96328[5] = a9578596040;
void* f9588596041 = encode_clo(clo96328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9588596041;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96195 = encode_clo(alloc_clo(lam96195_fptr, 0));

void* lam96197_fptr() // lam96197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96198 = arg_buffer[1];
//reading env and args
void* a9578496038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96198))[7];
//not do dummy comment
void* append = (decode_clo(env96198))[6];
//not do dummy comment
void* kont95883 = (decode_clo(env96198))[5];
//not do dummy comment
void* lst2 = (decode_clo(env96198))[4];
//not do dummy comment
void* cons = (decode_clo(env96198))[3];
//not do dummy comment
void* lst1 = (decode_clo(env96198))[2];
//not do dummy comment
void* car = (decode_clo(env96198))[1];

//if-clause
bool if_guard96329 = is_true(a9578496038);
if(if_guard96329)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95883);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo96331 = alloc_clo(lam96195_fptr, 6);

//setting env list
clo96331[1] = cons;
clo96331[2] = lst1;
clo96331[3] = lst2;
clo96331[4] = kont95883;
clo96331[5] = append;
clo96331[6] = cdr;
void* f9588696039 = encode_clo(clo96331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9588696039;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96197 = encode_clo(alloc_clo(lam96197_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96199 = arg_buffer[1];
//reading env and args
void* kont95883 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo96333 = alloc_clo(lam96197_fptr, 7);

//setting env list
clo96333[1] = car;
clo96333[2] = lst1;
clo96333[3] = cons;
clo96333[4] = lst2;
clo96333[5] = kont95883;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo96333[6] = append;
clo96333[7] = cdr;
void* f9588796037 = encode_clo(clo96333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9588796037;
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
void* _96200 = arg_buffer[1];
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

void* kont9588896045 = prim_car(lst);
void* lst96046 = prim_cdr(lst);
void* x9578896047 = apply_prim_hash(lst96046);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9588896045);
arg_buffer[2] = x9578896047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9588896045))[0]);
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
void* _96201 = arg_buffer[1];
//reading env and args
void* kont95890 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9578996048 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95890);
arg_buffer[2] = x9578996048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95890))[0]);
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
void* _96202 = arg_buffer[1];
//reading env and args
void* kont95891 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9579096049 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95891);
arg_buffer[2] = x9579096049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95891))[0]);
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
void* _96203 = arg_buffer[1];
//reading env and args
void* kont95892 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9579196050 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95892);
arg_buffer[2] = x9579196050;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95892))[0]);
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
void* _96204 = arg_buffer[1];
//reading env and args
void* kont95893 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9579296051 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95893);
arg_buffer[2] = x9579296051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95893))[0]);
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
void* _96208 = arg_buffer[1];
//reading env and args
void* kont95894 = arg_buffer[2];
//Dummy comment
void* a9579396052 = encode_bool(false);

//if-clause
bool if_guard96334 = is_true(a9579396052);
if(if_guard96334)
{
void* x9579496053 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95894);
arg_buffer[2] = x9579496053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95894))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x9579596054 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95894);
arg_buffer[2] = x9579596054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95894))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam96209_fptr() // lam96209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96210 = arg_buffer[1];
//reading env and args
void* x9579696056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont95895 = (decode_clo(env96210))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95895);
arg_buffer[2] = x9579696056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95895))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96209 = encode_clo(alloc_clo(lam96209_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96211 = arg_buffer[1];
//reading env and args
void* kont95895 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo96336 = alloc_clo(lam96209_fptr, 1);

//setting env list
clo96336[1] = kont95895;
void* f9589696055 = encode_clo(clo96336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f9589696055;
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

