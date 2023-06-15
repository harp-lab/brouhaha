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
void* _50305 = arg_buffer[1];
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

void* kont5003750141 = prim_car(lst);
void* lst50142 = prim_cdr(lst);
void* x4995050143 = apply_prim__u43(lst50142);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5003750141);
arg_buffer[2] = x4995050143;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5003750141))[0]);
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
void* _50306 = arg_buffer[1];
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

void* kont5003950144 = prim_car(lst);
void* lst50145 = prim_cdr(lst);
void* x4995150146 = apply_prim__u45(lst50145);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5003950144);
arg_buffer[2] = x4995150146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5003950144))[0]);
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
void* _50307 = arg_buffer[1];
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

void* kont5004150147 = prim_car(lst);
void* lst50148 = prim_cdr(lst);
void* x4995250149 = apply_prim__u42(lst50148);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5004150147);
arg_buffer[2] = x4995250149;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5004150147))[0]);
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
void* _50308 = arg_buffer[1];
//reading env and args
void* kont50043 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4995350150 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50043);
arg_buffer[2] = x4995350150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50043))[0]);
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
void* _50309 = arg_buffer[1];
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

void* kont5004450151 = prim_car(lst);
void* lst50152 = prim_cdr(lst);
void* x4995450153 = apply_prim__u47(lst50152);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5004450151);
arg_buffer[2] = x4995450153;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5004450151))[0]);
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
void* _50310 = arg_buffer[1];
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

void* kont5004650154 = prim_car(lst);
void* lst50155 = prim_cdr(lst);
void* x4995550156 = apply_prim__u61(lst50155);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5004650154);
arg_buffer[2] = x4995550156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5004650154))[0]);
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
void* _50311 = arg_buffer[1];
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

void* kont5004850157 = prim_car(lst);
void* lst50158 = prim_cdr(lst);
void* x4995650159 = apply_prim__u62(lst50158);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5004850157);
arg_buffer[2] = x4995650159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5004850157))[0]);
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
void* _50312 = arg_buffer[1];
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

void* kont5005050160 = prim_car(lst);
void* lst50161 = prim_cdr(lst);
void* x4995750162 = apply_prim__u60(lst50161);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5005050160);
arg_buffer[2] = x4995750162;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5005050160))[0]);
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
void* _50313 = arg_buffer[1];
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

void* kont5005250163 = prim_car(lst);
void* lst50164 = prim_cdr(lst);
void* x4995850165 = apply_prim__u60_u61(lst50164);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5005250163);
arg_buffer[2] = x4995850165;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5005250163))[0]);
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
void* _50314 = arg_buffer[1];
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

void* kont5005450166 = prim_car(lst);
void* lst50167 = prim_cdr(lst);
void* x4995950168 = apply_prim__u62_u61(lst50167);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5005450166);
arg_buffer[2] = x4995950168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5005450166))[0]);
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
void* _50315 = arg_buffer[1];
//reading env and args
void* kont50056 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4996050169 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50056);
arg_buffer[2] = x4996050169;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50056))[0]);
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
void* _50316 = arg_buffer[1];
//reading env and args
void* kont50057 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4996150170 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50057);
arg_buffer[2] = x4996150170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50057))[0]);
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
void* _50317 = arg_buffer[1];
//reading env and args
void* kont50058 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4996250171 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50058);
arg_buffer[2] = x4996250171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50058))[0]);
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
void* _50318 = arg_buffer[1];
//reading env and args
void* kont50059 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4996350172 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50059);
arg_buffer[2] = x4996350172;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50059))[0]);
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
void* _50319 = arg_buffer[1];
//reading env and args
void* kont50060 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4996450173 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50060);
arg_buffer[2] = x4996450173;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50060))[0]);
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
void* _50320 = arg_buffer[1];
//reading env and args
void* kont50061 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4996550174 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50061);
arg_buffer[2] = x4996550174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50061))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam50321_fptr() // lam50321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50322 = arg_buffer[1];
//reading env and args
void* a4996850178 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50062 = (decode_clo(env50322))[3];
//not do dummy comment
void* a4996650175 = (decode_clo(env50322))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env50322))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50062;
arg_buffer[3] = a4996650175;
arg_buffer[4] = a4996850178;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50321 = encode_clo(alloc_clo(lam50321_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50325 = arg_buffer[1];
//reading env and args
void* kont50062 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50760, "0", 10);
void* a4996650175 = encode_mpz(mpzvar50760);
mpz_t* mpzvar50761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50761, "2", 10);
void* a4996750176 = encode_mpz(mpzvar50761);

//creating new closure instance
void** clo50763 = alloc_clo(lam50321_fptr, 3);

//setting env list
clo50763[1] = equal_u63;
clo50763[2] = a4996650175;
clo50763[3] = kont50062;
void* f5006350177 = encode_clo(clo50763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5006350177;
arg_buffer[3] = x;
arg_buffer[4] = a4996750176;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam50326_fptr() // lam50326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50327 = arg_buffer[1];
//reading env and args
void* a4997150182 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50064 = (decode_clo(env50327))[3];
//not do dummy comment
void* a4996950179 = (decode_clo(env50327))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env50327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50064;
arg_buffer[3] = a4996950179;
arg_buffer[4] = a4997150182;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50326 = encode_clo(alloc_clo(lam50326_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50330 = arg_buffer[1];
//reading env and args
void* kont50064 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50764, "1", 10);
void* a4996950179 = encode_mpz(mpzvar50764);
mpz_t* mpzvar50765 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50765, "2", 10);
void* a4997050180 = encode_mpz(mpzvar50765);

//creating new closure instance
void** clo50767 = alloc_clo(lam50326_fptr, 3);

//setting env list
clo50767[1] = equal_u63;
clo50767[2] = a4996950179;
clo50767[3] = kont50064;
void* f5006550181 = encode_clo(clo50767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5006550181;
arg_buffer[3] = x;
arg_buffer[4] = a4997050180;
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
void* _50331 = arg_buffer[1];
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

void* kont5006650183 = prim_car(x);
void* x50184 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5006650183);
arg_buffer[2] = x50184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5006650183))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50332 = arg_buffer[1];
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

void* kont5006850185 = prim_car(lst);
void* lst50186 = prim_cdr(lst);
void* x4997250187 = apply_prim_and(lst50186);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5006850185);
arg_buffer[2] = x4997250187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5006850185))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50333 = arg_buffer[1];
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

void* kont5007050188 = prim_car(lst);
void* lst50189 = prim_cdr(lst);
void* x4997350190 = apply_prim_or(lst50189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5007050188);
arg_buffer[2] = x4997350190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5007050188))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam50336_fptr() // lam50336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50337 = arg_buffer[1];
//reading env and args
void* a4997950200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50072 = (decode_clo(env50337))[3];
//not do dummy comment
void* x = (decode_clo(env50337))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50337))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont50072;
arg_buffer[3] = x;
arg_buffer[4] = a4997950200;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50336 = encode_clo(alloc_clo(lam50336_fptr, 0));

void* lam50338_fptr() // lam50338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50339 = arg_buffer[1];
//reading env and args
void* a4997750197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50339))[5];
//not do dummy comment
void* lst = (decode_clo(env50339))[4];
//not do dummy comment
void* kont50072 = (decode_clo(env50339))[3];
//not do dummy comment
void* x = (decode_clo(env50339))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50339))[1];

//if-clause
bool if_guard50768 = is_true(a4997750197);
if(if_guard50768)
{
void* x4997850198 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50072);
arg_buffer[2] = x4997850198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50072))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50770 = alloc_clo(lam50336_fptr, 3);

//setting env list
clo50770[1] = member_u63;
clo50770[2] = x;
clo50770[3] = kont50072;
void* f5007350199 = encode_clo(clo50770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5007350199;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50338 = encode_clo(alloc_clo(lam50338_fptr, 0));

void* lam50340_fptr() // lam50340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50341 = arg_buffer[1];
//reading env and args
void* a4997650195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50341))[6];
//not do dummy comment
void* lst = (decode_clo(env50341))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env50341))[4];
//not do dummy comment
void* kont50072 = (decode_clo(env50341))[3];
//not do dummy comment
void* x = (decode_clo(env50341))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50341))[1];

//creating new closure instance
void** clo50772 = alloc_clo(lam50338_fptr, 5);

//setting env list
clo50772[1] = member_u63;
clo50772[2] = x;
clo50772[3] = kont50072;
clo50772[4] = lst;
clo50772[5] = cdr;
void* f5007450196 = encode_clo(clo50772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5007450196;
arg_buffer[3] = a4997650195;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50340 = encode_clo(alloc_clo(lam50340_fptr, 0));

void* lam50342_fptr() // lam50342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50343 = arg_buffer[1];
//reading env and args
void* a4997450192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50343))[7];
//not do dummy comment
void* lst = (decode_clo(env50343))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env50343))[5];
//not do dummy comment
void* kont50072 = (decode_clo(env50343))[4];
//not do dummy comment
void* x = (decode_clo(env50343))[3];
//not do dummy comment
void* car = (decode_clo(env50343))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50343))[1];

//if-clause
bool if_guard50773 = is_true(a4997450192);
if(if_guard50773)
{
void* x4997550193 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50072);
arg_buffer[2] = x4997550193;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50072))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50775 = alloc_clo(lam50340_fptr, 6);

//setting env list
clo50775[1] = member_u63;
clo50775[2] = x;
clo50775[3] = kont50072;
clo50775[4] = equal_u63;
clo50775[5] = lst;
clo50775[6] = cdr;
void* f5007550194 = encode_clo(clo50775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5007550194;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50342 = encode_clo(alloc_clo(lam50342_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50344 = arg_buffer[1];
//reading env and args
void* kont50072 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50777 = alloc_clo(lam50342_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo50777[1] = member_u63;
clo50777[2] = car;
clo50777[3] = x;
clo50777[4] = kont50072;
clo50777[5] = equal_u63;
clo50777[6] = lst;
clo50777[7] = cdr;
void* f5007650191 = encode_clo(clo50777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5007650191;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam50345_fptr() // lam50345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50346 = arg_buffer[1];
//reading env and args
void* a4998350208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4998250206 = (decode_clo(env50346))[4];
//not do dummy comment
void* fun = (decode_clo(env50346))[3];
//not do dummy comment
void* foldl = (decode_clo(env50346))[2];
//not do dummy comment
void* kont50077 = (decode_clo(env50346))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont50077;
arg_buffer[3] = fun;
arg_buffer[4] = a4998250206;
arg_buffer[5] = a4998350208;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50345 = encode_clo(alloc_clo(lam50345_fptr, 0));

void* lam50347_fptr() // lam50347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50348 = arg_buffer[1];
//reading env and args
void* a4998250206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50348))[5];
//not do dummy comment
void* lst = (decode_clo(env50348))[4];
//not do dummy comment
void* fun = (decode_clo(env50348))[3];
//not do dummy comment
void* foldl = (decode_clo(env50348))[2];
//not do dummy comment
void* kont50077 = (decode_clo(env50348))[1];

//creating new closure instance
void** clo50779 = alloc_clo(lam50345_fptr, 4);

//setting env list
clo50779[1] = kont50077;
clo50779[2] = foldl;
clo50779[3] = fun;
clo50779[4] = a4998250206;
void* f5007850207 = encode_clo(clo50779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5007850207;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50347 = encode_clo(alloc_clo(lam50347_fptr, 0));

void* lam50349_fptr() // lam50349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50350 = arg_buffer[1];
//reading env and args
void* a4998150204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50350))[6];
//not do dummy comment
void* lst = (decode_clo(env50350))[5];
//not do dummy comment
void* fun = (decode_clo(env50350))[4];
//not do dummy comment
void* acc = (decode_clo(env50350))[3];
//not do dummy comment
void* foldl = (decode_clo(env50350))[2];
//not do dummy comment
void* kont50077 = (decode_clo(env50350))[1];

//creating new closure instance
void** clo50781 = alloc_clo(lam50347_fptr, 5);

//setting env list
clo50781[1] = kont50077;
clo50781[2] = foldl;
clo50781[3] = fun;
clo50781[4] = lst;
clo50781[5] = cdr;
void* f5007950205 = encode_clo(clo50781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5007950205;
arg_buffer[3] = a4998150204;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50349 = encode_clo(alloc_clo(lam50349_fptr, 0));

void* lam50351_fptr() // lam50351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50352 = arg_buffer[1];
//reading env and args
void* a4998050202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50352))[7];
//not do dummy comment
void* lst = (decode_clo(env50352))[6];
//not do dummy comment
void* fun = (decode_clo(env50352))[5];
//not do dummy comment
void* acc = (decode_clo(env50352))[4];
//not do dummy comment
void* car = (decode_clo(env50352))[3];
//not do dummy comment
void* foldl = (decode_clo(env50352))[2];
//not do dummy comment
void* kont50077 = (decode_clo(env50352))[1];

//if-clause
bool if_guard50782 = is_true(a4998050202);
if(if_guard50782)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50077);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50077))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50784 = alloc_clo(lam50349_fptr, 6);

//setting env list
clo50784[1] = kont50077;
clo50784[2] = foldl;
clo50784[3] = acc;
clo50784[4] = fun;
clo50784[5] = lst;
clo50784[6] = cdr;
void* f5008050203 = encode_clo(clo50784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5008050203;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50351 = encode_clo(alloc_clo(lam50351_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50353 = arg_buffer[1];
//reading env and args
void* kont50077 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50786 = alloc_clo(lam50351_fptr, 7);

//setting env list
clo50786[1] = kont50077;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo50786[2] = foldl;
clo50786[3] = car;
clo50786[4] = acc;
clo50786[5] = fun;
clo50786[6] = lst;
clo50786[7] = cdr;
void* f5008150201 = encode_clo(clo50786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5008150201;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam50354_fptr() // lam50354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50355 = arg_buffer[1];
//reading env and args
void* a4998750216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50082 = (decode_clo(env50355))[3];
//not do dummy comment
void* a4998550212 = (decode_clo(env50355))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50355))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50082;
arg_buffer[3] = a4998550212;
arg_buffer[4] = a4998750216;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50354 = encode_clo(alloc_clo(lam50354_fptr, 0));

void* lam50356_fptr() // lam50356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50357 = arg_buffer[1];
//reading env and args
void* a4998650214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50082 = (decode_clo(env50357))[5];
//not do dummy comment
void* a4998550212 = (decode_clo(env50357))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50357))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50357))[2];
//not do dummy comment
void* cons = (decode_clo(env50357))[1];

//creating new closure instance
void** clo50788 = alloc_clo(lam50354_fptr, 3);

//setting env list
clo50788[1] = reverse_u45helper;
clo50788[2] = a4998550212;
clo50788[3] = kont50082;
void* f5008350215 = encode_clo(clo50788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5008350215;
arg_buffer[3] = a4998650214;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50356 = encode_clo(alloc_clo(lam50356_fptr, 0));

void* lam50358_fptr() // lam50358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50359 = arg_buffer[1];
//reading env and args
void* a4998550212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50359))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50359))[5];
//not do dummy comment
void* car = (decode_clo(env50359))[4];
//not do dummy comment
void* cons = (decode_clo(env50359))[3];
//not do dummy comment
void* lst = (decode_clo(env50359))[2];
//not do dummy comment
void* kont50082 = (decode_clo(env50359))[1];

//creating new closure instance
void** clo50790 = alloc_clo(lam50356_fptr, 5);

//setting env list
clo50790[1] = cons;
clo50790[2] = lst2;
clo50790[3] = reverse_u45helper;
clo50790[4] = a4998550212;
clo50790[5] = kont50082;
void* f5008450213 = encode_clo(clo50790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5008450213;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50358 = encode_clo(alloc_clo(lam50358_fptr, 0));

void* lam50360_fptr() // lam50360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50361 = arg_buffer[1];
//reading env and args
void* a4998450210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50361))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50361))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50361))[5];
//not do dummy comment
void* car = (decode_clo(env50361))[4];
//not do dummy comment
void* cons = (decode_clo(env50361))[3];
//not do dummy comment
void* lst = (decode_clo(env50361))[2];
//not do dummy comment
void* kont50082 = (decode_clo(env50361))[1];

//if-clause
bool if_guard50791 = is_true(a4998450210);
if(if_guard50791)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50082);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50082))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50793 = alloc_clo(lam50358_fptr, 6);

//setting env list
clo50793[1] = kont50082;
clo50793[2] = lst;
clo50793[3] = cons;
clo50793[4] = car;
clo50793[5] = lst2;
clo50793[6] = reverse_u45helper;
void* f5008550211 = encode_clo(clo50793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5008550211;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50360 = encode_clo(alloc_clo(lam50360_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50362 = arg_buffer[1];
//reading env and args
void* kont50082 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50795 = alloc_clo(lam50360_fptr, 7);

//setting env list
clo50795[1] = kont50082;
clo50795[2] = lst;
clo50795[3] = cons;
clo50795[4] = car;
clo50795[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo50795[6] = reverse_u45helper;
clo50795[7] = cdr;
void* f5008650209 = encode_clo(clo50795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5008650209;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam50363_fptr() // lam50363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50364 = arg_buffer[1];
//reading env and args
void* a4998850218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50364))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50364))[2];
//not do dummy comment
void* kont50087 = (decode_clo(env50364))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50087;
arg_buffer[3] = lst;
arg_buffer[4] = a4998850218;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50363 = encode_clo(alloc_clo(lam50363_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50365 = arg_buffer[1];
//reading env and args
void* kont50087 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50797 = alloc_clo(lam50363_fptr, 3);

//setting env list
clo50797[1] = kont50087;
clo50797[2] = reverse_u45helper;
clo50797[3] = lst;
void* f5008850217 = encode_clo(clo50797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5008850217;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam50366_fptr() // lam50366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50367 = arg_buffer[1];
//reading env and args
void* x4999150223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50089 = (decode_clo(env50367))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50089);
arg_buffer[2] = x4999150223;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50089))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50366 = encode_clo(alloc_clo(lam50366_fptr, 0));

void* lam50368_fptr() // lam50368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50369 = arg_buffer[1];
//reading env and args
void* a4999650232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4999250225 = (decode_clo(env50369))[4];
//not do dummy comment
void* a4999450228 = (decode_clo(env50369))[3];
//not do dummy comment
void* kont50089 = (decode_clo(env50369))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env50369))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50089;
arg_buffer[3] = a4999250225;
arg_buffer[4] = a4999450228;
arg_buffer[5] = a4999650232;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50368 = encode_clo(alloc_clo(lam50368_fptr, 0));

void* lam50370_fptr() // lam50370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50371 = arg_buffer[1];
//reading env and args
void* a4999550230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4999250225 = (decode_clo(env50371))[6];
//not do dummy comment
void* a4999450228 = (decode_clo(env50371))[5];
//not do dummy comment
void* kont50089 = (decode_clo(env50371))[4];
//not do dummy comment
void* cons = (decode_clo(env50371))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50371))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50371))[1];

//creating new closure instance
void** clo50799 = alloc_clo(lam50368_fptr, 4);

//setting env list
clo50799[1] = take_u45helper;
clo50799[2] = kont50089;
clo50799[3] = a4999450228;
clo50799[4] = a4999250225;
void* f5009150231 = encode_clo(clo50799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5009150231;
arg_buffer[3] = a4999550230;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50370 = encode_clo(alloc_clo(lam50370_fptr, 0));

void* lam50372_fptr() // lam50372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50373 = arg_buffer[1];
//reading env and args
void* a4999450228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4999250225 = (decode_clo(env50373))[7];
//not do dummy comment
void* lst = (decode_clo(env50373))[6];
//not do dummy comment
void* kont50089 = (decode_clo(env50373))[5];
//not do dummy comment
void* car = (decode_clo(env50373))[4];
//not do dummy comment
void* cons = (decode_clo(env50373))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50373))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50373))[1];

//creating new closure instance
void** clo50801 = alloc_clo(lam50370_fptr, 6);

//setting env list
clo50801[1] = lst2;
clo50801[2] = take_u45helper;
clo50801[3] = cons;
clo50801[4] = kont50089;
clo50801[5] = a4999450228;
clo50801[6] = a4999250225;
void* f5009250229 = encode_clo(clo50801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5009250229;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50372 = encode_clo(alloc_clo(lam50372_fptr, 0));

void* lam50375_fptr() // lam50375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50376 = arg_buffer[1];
//reading env and args
void* a4999250225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50376))[8];
//not do dummy comment
void* kont50089 = (decode_clo(env50376))[7];
//not do dummy comment
void* cons = (decode_clo(env50376))[6];
//not do dummy comment
void* _u45 = (decode_clo(env50376))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50376))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50376))[3];
//not do dummy comment
void* n = (decode_clo(env50376))[2];
//not do dummy comment
void* car = (decode_clo(env50376))[1];
mpz_t* mpzvar50802 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50802, "1", 10);
void* a4999350226 = encode_mpz(mpzvar50802);

//creating new closure instance
void** clo50804 = alloc_clo(lam50372_fptr, 7);

//setting env list
clo50804[1] = lst2;
clo50804[2] = take_u45helper;
clo50804[3] = cons;
clo50804[4] = car;
clo50804[5] = kont50089;
clo50804[6] = lst;
clo50804[7] = a4999250225;
void* f5009350227 = encode_clo(clo50804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5009350227;
arg_buffer[3] = n;
arg_buffer[4] = a4999350226;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50375 = encode_clo(alloc_clo(lam50375_fptr, 0));

void* lam50377_fptr() // lam50377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50378 = arg_buffer[1];
//reading env and args
void* a4999050221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50378))[10];
//not do dummy comment
void* lst = (decode_clo(env50378))[9];
//not do dummy comment
void* reverse = (decode_clo(env50378))[8];
//not do dummy comment
void* kont50089 = (decode_clo(env50378))[7];
//not do dummy comment
void* cons = (decode_clo(env50378))[6];
//not do dummy comment
void* _u45 = (decode_clo(env50378))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50378))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50378))[3];
//not do dummy comment
void* n = (decode_clo(env50378))[2];
//not do dummy comment
void* car = (decode_clo(env50378))[1];

//if-clause
bool if_guard50805 = is_true(a4999050221);
if(if_guard50805)
{

//creating new closure instance
void** clo50807 = alloc_clo(lam50366_fptr, 1);

//setting env list
clo50807[1] = kont50089;
void* f5009050222 = encode_clo(clo50807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5009050222;
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
void** clo50809 = alloc_clo(lam50375_fptr, 8);

//setting env list
clo50809[1] = car;
clo50809[2] = n;
clo50809[3] = lst2;
clo50809[4] = take_u45helper;
clo50809[5] = _u45;
clo50809[6] = cons;
clo50809[7] = kont50089;
clo50809[8] = lst;
void* f5009450224 = encode_clo(clo50809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5009450224;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50377 = encode_clo(alloc_clo(lam50377_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50380 = arg_buffer[1];
//reading env and args
void* kont50089 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar50810 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50810, "0", 10);
void* a4998950219 = encode_mpz(mpzvar50810);

//creating new closure instance
void** clo50812 = alloc_clo(lam50377_fptr, 10);

//setting env list
clo50812[1] = car;
clo50812[2] = n;
clo50812[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo50812[4] = take_u45helper;
clo50812[5] = _u45;
clo50812[6] = cons;
clo50812[7] = kont50089;
clo50812[8] = reverse;
clo50812[9] = lst;
clo50812[10] = cdr;
void* f5009550220 = encode_clo(clo50812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5009550220;
arg_buffer[3] = n;
arg_buffer[4] = a4998950219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam50381_fptr() // lam50381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50382 = arg_buffer[1];
//reading env and args
void* a4999750234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50096 = (decode_clo(env50382))[4];
//not do dummy comment
void* lst = (decode_clo(env50382))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50382))[2];
//not do dummy comment
void* n = (decode_clo(env50382))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50096;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4999750234;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50381 = encode_clo(alloc_clo(lam50381_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50383 = arg_buffer[1];
//reading env and args
void* kont50096 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50814 = alloc_clo(lam50381_fptr, 4);

//setting env list
clo50814[1] = n;
clo50814[2] = take_u45helper;
clo50814[3] = lst;
clo50814[4] = kont50096;
void* f5009750233 = encode_clo(clo50814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5009750233;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam50385_fptr() // lam50385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50386 = arg_buffer[1];
//reading env and args
void* a5000250242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5000050238 = (decode_clo(env50386))[3];
//not do dummy comment
void* kont50098 = (decode_clo(env50386))[2];
//not do dummy comment
void* _u43 = (decode_clo(env50386))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont50098;
arg_buffer[3] = a5000050238;
arg_buffer[4] = a5000250242;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50385 = encode_clo(alloc_clo(lam50385_fptr, 0));

void* lam50387_fptr() // lam50387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50388 = arg_buffer[1];
//reading env and args
void* a5000150240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5000050238 = (decode_clo(env50388))[4];
//not do dummy comment
void* kont50098 = (decode_clo(env50388))[3];
//not do dummy comment
void* length = (decode_clo(env50388))[2];
//not do dummy comment
void* _u43 = (decode_clo(env50388))[1];

//creating new closure instance
void** clo50816 = alloc_clo(lam50385_fptr, 3);

//setting env list
clo50816[1] = _u43;
clo50816[2] = kont50098;
clo50816[3] = a5000050238;
void* f5009950241 = encode_clo(clo50816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5009950241;
arg_buffer[3] = a5000150240;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50387 = encode_clo(alloc_clo(lam50387_fptr, 0));

void* lam50390_fptr() // lam50390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50391 = arg_buffer[1];
//reading env and args
void* a4999850236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50391))[5];
//not do dummy comment
void* length = (decode_clo(env50391))[4];
//not do dummy comment
void* _u43 = (decode_clo(env50391))[3];
//not do dummy comment
void* lst = (decode_clo(env50391))[2];
//not do dummy comment
void* kont50098 = (decode_clo(env50391))[1];

//if-clause
bool if_guard50817 = is_true(a4999850236);
if(if_guard50817)
{
mpz_t* mpzvar50818 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50818, "0", 10);
void* x4999950237 = encode_mpz(mpzvar50818);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50098);
arg_buffer[2] = x4999950237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50098))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar50819 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50819, "1", 10);
void* a5000050238 = encode_mpz(mpzvar50819);

//creating new closure instance
void** clo50821 = alloc_clo(lam50387_fptr, 4);

//setting env list
clo50821[1] = _u43;
clo50821[2] = length;
clo50821[3] = kont50098;
clo50821[4] = a5000050238;
void* f5010050239 = encode_clo(clo50821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5010050239;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50390 = encode_clo(alloc_clo(lam50390_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50392 = arg_buffer[1];
//reading env and args
void* kont50098 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50823 = alloc_clo(lam50390_fptr, 5);

//setting env list
clo50823[1] = kont50098;
clo50823[2] = lst;
clo50823[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo50823[4] = length;
clo50823[5] = cdr;
void* f5010150235 = encode_clo(clo50823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5010150235;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam50393_fptr() // lam50393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50394 = arg_buffer[1];
//reading env and args
void* x5000450246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50102 = (decode_clo(env50394))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50102);
arg_buffer[2] = x5000450246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50102))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50393 = encode_clo(alloc_clo(lam50393_fptr, 0));

void* lam50395_fptr() // lam50395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50396 = arg_buffer[1];
//reading env and args
void* a5000850254 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50102 = (decode_clo(env50396))[3];
//not do dummy comment
void* a5000650250 = (decode_clo(env50396))[2];
//not do dummy comment
void* cons = (decode_clo(env50396))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50102;
arg_buffer[3] = a5000650250;
arg_buffer[4] = a5000850254;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50395 = encode_clo(alloc_clo(lam50395_fptr, 0));

void* lam50397_fptr() // lam50397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50398 = arg_buffer[1];
//reading env and args
void* a5000750252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env50398))[5];
//not do dummy comment
void* kont50102 = (decode_clo(env50398))[4];
//not do dummy comment
void* proc = (decode_clo(env50398))[3];
//not do dummy comment
void* a5000650250 = (decode_clo(env50398))[2];
//not do dummy comment
void* cons = (decode_clo(env50398))[1];

//creating new closure instance
void** clo50825 = alloc_clo(lam50395_fptr, 3);

//setting env list
clo50825[1] = cons;
clo50825[2] = a5000650250;
clo50825[3] = kont50102;
void* f5010450253 = encode_clo(clo50825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5010450253;
arg_buffer[3] = proc;
arg_buffer[4] = a5000750252;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50397 = encode_clo(alloc_clo(lam50397_fptr, 0));

void* lam50399_fptr() // lam50399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50400 = arg_buffer[1];
//reading env and args
void* a5000650250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50400))[6];
//not do dummy comment
void* lst = (decode_clo(env50400))[5];
//not do dummy comment
void* map = (decode_clo(env50400))[4];
//not do dummy comment
void* kont50102 = (decode_clo(env50400))[3];
//not do dummy comment
void* proc = (decode_clo(env50400))[2];
//not do dummy comment
void* cons = (decode_clo(env50400))[1];

//creating new closure instance
void** clo50827 = alloc_clo(lam50397_fptr, 5);

//setting env list
clo50827[1] = cons;
clo50827[2] = a5000650250;
clo50827[3] = proc;
clo50827[4] = kont50102;
clo50827[5] = map;
void* f5010550251 = encode_clo(clo50827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5010550251;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50399 = encode_clo(alloc_clo(lam50399_fptr, 0));

void* lam50401_fptr() // lam50401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50402 = arg_buffer[1];
//reading env and args
void* a5000550248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50402))[6];
//not do dummy comment
void* lst = (decode_clo(env50402))[5];
//not do dummy comment
void* map = (decode_clo(env50402))[4];
//not do dummy comment
void* kont50102 = (decode_clo(env50402))[3];
//not do dummy comment
void* proc = (decode_clo(env50402))[2];
//not do dummy comment
void* cons = (decode_clo(env50402))[1];

//creating new closure instance
void** clo50829 = alloc_clo(lam50399_fptr, 6);

//setting env list
clo50829[1] = cons;
clo50829[2] = proc;
clo50829[3] = kont50102;
clo50829[4] = map;
clo50829[5] = lst;
clo50829[6] = cdr;
void* f5010650249 = encode_clo(clo50829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5010650249;
arg_buffer[3] = a5000550248;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50401 = encode_clo(alloc_clo(lam50401_fptr, 0));

void* lam50403_fptr() // lam50403 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50404 = arg_buffer[1];
//reading env and args
void* a5000350244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50404))[8];
//not do dummy comment
void* map = (decode_clo(env50404))[7];
//not do dummy comment
void* kont50102 = (decode_clo(env50404))[6];
//not do dummy comment
void* proc = (decode_clo(env50404))[5];
//not do dummy comment
void* car = (decode_clo(env50404))[4];
//not do dummy comment
void* cons = (decode_clo(env50404))[3];
//not do dummy comment
void* list = (decode_clo(env50404))[2];
//not do dummy comment
void* cdr = (decode_clo(env50404))[1];

//if-clause
bool if_guard50830 = is_true(a5000350244);
if(if_guard50830)
{

//creating new closure instance
void** clo50832 = alloc_clo(lam50393_fptr, 1);

//setting env list
clo50832[1] = kont50102;
void* f5010350245 = encode_clo(clo50832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5010350245;
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
void** clo50834 = alloc_clo(lam50401_fptr, 6);

//setting env list
clo50834[1] = cons;
clo50834[2] = proc;
clo50834[3] = kont50102;
clo50834[4] = map;
clo50834[5] = lst;
clo50834[6] = cdr;
void* f5010750247 = encode_clo(clo50834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5010750247;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50403 = encode_clo(alloc_clo(lam50403_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50405 = arg_buffer[1];
//reading env and args
void* kont50102 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50836 = alloc_clo(lam50403_fptr, 8);

//setting env list
clo50836[1] = cdr;
clo50836[2] = list;
clo50836[3] = cons;
clo50836[4] = car;
clo50836[5] = proc;
clo50836[6] = kont50102;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo50836[7] = map;
clo50836[8] = lst;
void* f5010850243 = encode_clo(clo50836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5010850243;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam50406_fptr() // lam50406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50407 = arg_buffer[1];
//reading env and args
void* x5001050258 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50109 = (decode_clo(env50407))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50109);
arg_buffer[2] = x5001050258;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50109))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50406 = encode_clo(alloc_clo(lam50406_fptr, 0));

void* lam50408_fptr() // lam50408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50409 = arg_buffer[1];
//reading env and args
void* a5001550268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5001350264 = (decode_clo(env50409))[3];
//not do dummy comment
void* cons = (decode_clo(env50409))[2];
//not do dummy comment
void* kont50109 = (decode_clo(env50409))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50109;
arg_buffer[3] = a5001350264;
arg_buffer[4] = a5001550268;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50408 = encode_clo(alloc_clo(lam50408_fptr, 0));

void* lam50410_fptr() // lam50410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50411 = arg_buffer[1];
//reading env and args
void* a5001450266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env50411))[5];
//not do dummy comment
void* a5001350264 = (decode_clo(env50411))[4];
//not do dummy comment
void* filter = (decode_clo(env50411))[3];
//not do dummy comment
void* cons = (decode_clo(env50411))[2];
//not do dummy comment
void* kont50109 = (decode_clo(env50411))[1];

//creating new closure instance
void** clo50838 = alloc_clo(lam50408_fptr, 3);

//setting env list
clo50838[1] = kont50109;
clo50838[2] = cons;
clo50838[3] = a5001350264;
void* f5011150267 = encode_clo(clo50838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5011150267;
arg_buffer[3] = op;
arg_buffer[4] = a5001450266;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50410 = encode_clo(alloc_clo(lam50410_fptr, 0));

void* lam50412_fptr() // lam50412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50413 = arg_buffer[1];
//reading env and args
void* a5001350264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50413))[6];
//not do dummy comment
void* lst = (decode_clo(env50413))[5];
//not do dummy comment
void* op = (decode_clo(env50413))[4];
//not do dummy comment
void* filter = (decode_clo(env50413))[3];
//not do dummy comment
void* cons = (decode_clo(env50413))[2];
//not do dummy comment
void* kont50109 = (decode_clo(env50413))[1];

//creating new closure instance
void** clo50840 = alloc_clo(lam50410_fptr, 5);

//setting env list
clo50840[1] = kont50109;
clo50840[2] = cons;
clo50840[3] = filter;
clo50840[4] = a5001350264;
clo50840[5] = op;
void* f5011250265 = encode_clo(clo50840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5011250265;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50412 = encode_clo(alloc_clo(lam50412_fptr, 0));

void* lam50414_fptr() // lam50414 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50415 = arg_buffer[1];
//reading env and args
void* a5001650270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env50415))[3];
//not do dummy comment
void* filter = (decode_clo(env50415))[2];
//not do dummy comment
void* kont50109 = (decode_clo(env50415))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont50109;
arg_buffer[3] = op;
arg_buffer[4] = a5001650270;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50414 = encode_clo(alloc_clo(lam50414_fptr, 0));

void* lam50416_fptr() // lam50416 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50417 = arg_buffer[1];
//reading env and args
void* a5001250262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50417))[7];
//not do dummy comment
void* lst = (decode_clo(env50417))[6];
//not do dummy comment
void* op = (decode_clo(env50417))[5];
//not do dummy comment
void* cons = (decode_clo(env50417))[4];
//not do dummy comment
void* kont50109 = (decode_clo(env50417))[3];
//not do dummy comment
void* filter = (decode_clo(env50417))[2];
//not do dummy comment
void* car = (decode_clo(env50417))[1];

//if-clause
bool if_guard50841 = is_true(a5001250262);
if(if_guard50841)
{

//creating new closure instance
void** clo50843 = alloc_clo(lam50412_fptr, 6);

//setting env list
clo50843[1] = kont50109;
clo50843[2] = cons;
clo50843[3] = filter;
clo50843[4] = op;
clo50843[5] = lst;
clo50843[6] = cdr;
void* f5011350263 = encode_clo(clo50843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5011350263;
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
void** clo50845 = alloc_clo(lam50414_fptr, 3);

//setting env list
clo50845[1] = kont50109;
clo50845[2] = filter;
clo50845[3] = op;
void* f5011450269 = encode_clo(clo50845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5011450269;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50416 = encode_clo(alloc_clo(lam50416_fptr, 0));

void* lam50418_fptr() // lam50418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50419 = arg_buffer[1];
//reading env and args
void* a5001150260 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50419))[7];
//not do dummy comment
void* lst = (decode_clo(env50419))[6];
//not do dummy comment
void* op = (decode_clo(env50419))[5];
//not do dummy comment
void* cons = (decode_clo(env50419))[4];
//not do dummy comment
void* kont50109 = (decode_clo(env50419))[3];
//not do dummy comment
void* filter = (decode_clo(env50419))[2];
//not do dummy comment
void* car = (decode_clo(env50419))[1];

//creating new closure instance
void** clo50847 = alloc_clo(lam50416_fptr, 7);

//setting env list
clo50847[1] = car;
clo50847[2] = filter;
clo50847[3] = kont50109;
clo50847[4] = cons;
clo50847[5] = op;
clo50847[6] = lst;
clo50847[7] = cdr;
void* f5011550261 = encode_clo(clo50847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5011550261;
arg_buffer[3] = a5001150260;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50418 = encode_clo(alloc_clo(lam50418_fptr, 0));

void* lam50420_fptr() // lam50420 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50421 = arg_buffer[1];
//reading env and args
void* a5000950256 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50421))[8];
//not do dummy comment
void* op = (decode_clo(env50421))[7];
//not do dummy comment
void* cons = (decode_clo(env50421))[6];
//not do dummy comment
void* kont50109 = (decode_clo(env50421))[5];
//not do dummy comment
void* list = (decode_clo(env50421))[4];
//not do dummy comment
void* cdr = (decode_clo(env50421))[3];
//not do dummy comment
void* filter = (decode_clo(env50421))[2];
//not do dummy comment
void* car = (decode_clo(env50421))[1];

//if-clause
bool if_guard50848 = is_true(a5000950256);
if(if_guard50848)
{

//creating new closure instance
void** clo50850 = alloc_clo(lam50406_fptr, 1);

//setting env list
clo50850[1] = kont50109;
void* f5011050257 = encode_clo(clo50850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5011050257;
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
void** clo50852 = alloc_clo(lam50418_fptr, 7);

//setting env list
clo50852[1] = car;
clo50852[2] = filter;
clo50852[3] = kont50109;
clo50852[4] = cons;
clo50852[5] = op;
clo50852[6] = lst;
clo50852[7] = cdr;
void* f5011650259 = encode_clo(clo50852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5011650259;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50420 = encode_clo(alloc_clo(lam50420_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50422 = arg_buffer[1];
//reading env and args
void* kont50109 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50854 = alloc_clo(lam50420_fptr, 8);

//setting env list
clo50854[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo50854[2] = filter;
clo50854[3] = cdr;
clo50854[4] = list;
clo50854[5] = kont50109;
clo50854[6] = cons;
clo50854[7] = op;
clo50854[8] = lst;
void* f5011750255 = encode_clo(clo50854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5011750255;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam50423_fptr() // lam50423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50424 = arg_buffer[1];
//reading env and args
void* a5002150278 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env50424))[3];
//not do dummy comment
void* a5001950275 = (decode_clo(env50424))[2];
//not do dummy comment
void* kont50118 = (decode_clo(env50424))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont50118;
arg_buffer[3] = a5001950275;
arg_buffer[4] = a5002150278;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50423 = encode_clo(alloc_clo(lam50423_fptr, 0));

void* lam50426_fptr() // lam50426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50427 = arg_buffer[1];
//reading env and args
void* a5001950275 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env50427))[4];
//not do dummy comment
void* kont50118 = (decode_clo(env50427))[3];
//not do dummy comment
void* n = (decode_clo(env50427))[2];
//not do dummy comment
void* _u45 = (decode_clo(env50427))[1];
mpz_t* mpzvar50855 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50855, "1", 10);
void* a5002050276 = encode_mpz(mpzvar50855);

//creating new closure instance
void** clo50857 = alloc_clo(lam50423_fptr, 3);

//setting env list
clo50857[1] = kont50118;
clo50857[2] = a5001950275;
clo50857[3] = drop;
void* f5011950277 = encode_clo(clo50857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5011950277;
arg_buffer[3] = n;
arg_buffer[4] = a5002050276;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50426 = encode_clo(alloc_clo(lam50426_fptr, 0));

void* lam50428_fptr() // lam50428 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50429 = arg_buffer[1];
//reading env and args
void* a5001850273 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50429))[6];
//not do dummy comment
void* kont50118 = (decode_clo(env50429))[5];
//not do dummy comment
void* n = (decode_clo(env50429))[4];
//not do dummy comment
void* _u45 = (decode_clo(env50429))[3];
//not do dummy comment
void* lst = (decode_clo(env50429))[2];
//not do dummy comment
void* drop = (decode_clo(env50429))[1];

//if-clause
bool if_guard50858 = is_true(a5001850273);
if(if_guard50858)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50118);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50118))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50860 = alloc_clo(lam50426_fptr, 4);

//setting env list
clo50860[1] = _u45;
clo50860[2] = n;
clo50860[3] = kont50118;
clo50860[4] = drop;
void* f5012050274 = encode_clo(clo50860);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5012050274;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50428 = encode_clo(alloc_clo(lam50428_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50431 = arg_buffer[1];
//reading env and args
void* kont50118 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar50861 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50861, "0", 10);
void* a5001750271 = encode_mpz(mpzvar50861);

//creating new closure instance
void** clo50863 = alloc_clo(lam50428_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo50863[1] = drop;
clo50863[2] = lst;
clo50863[3] = _u45;
clo50863[4] = n;
clo50863[5] = kont50118;
clo50863[6] = cdr;
void* f5012150272 = encode_clo(clo50863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5012150272;
arg_buffer[3] = n;
arg_buffer[4] = a5001750271;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam50432_fptr() // lam50432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50433 = arg_buffer[1];
//reading env and args
void* a5002550286 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env50433))[3];
//not do dummy comment
void* kont50122 = (decode_clo(env50433))[2];
//not do dummy comment
void* a5002350282 = (decode_clo(env50433))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont50122;
arg_buffer[3] = a5002350282;
arg_buffer[4] = a5002550286;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50432 = encode_clo(alloc_clo(lam50432_fptr, 0));

void* lam50434_fptr() // lam50434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50435 = arg_buffer[1];
//reading env and args
void* a5002450284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env50435))[5];
//not do dummy comment
void* proc = (decode_clo(env50435))[4];
//not do dummy comment
void* acc = (decode_clo(env50435))[3];
//not do dummy comment
void* kont50122 = (decode_clo(env50435))[2];
//not do dummy comment
void* a5002350282 = (decode_clo(env50435))[1];

//creating new closure instance
void** clo50865 = alloc_clo(lam50432_fptr, 3);

//setting env list
clo50865[1] = a5002350282;
clo50865[2] = kont50122;
clo50865[3] = proc;
void* f5012350285 = encode_clo(clo50865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5012350285;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5002450284;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50434 = encode_clo(alloc_clo(lam50434_fptr, 0));

void* lam50436_fptr() // lam50436 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50437 = arg_buffer[1];
//reading env and args
void* a5002350282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50437))[6];
//not do dummy comment
void* kont50122 = (decode_clo(env50437))[5];
//not do dummy comment
void* foldr = (decode_clo(env50437))[4];
//not do dummy comment
void* lst = (decode_clo(env50437))[3];
//not do dummy comment
void* proc = (decode_clo(env50437))[2];
//not do dummy comment
void* acc = (decode_clo(env50437))[1];

//creating new closure instance
void** clo50867 = alloc_clo(lam50434_fptr, 5);

//setting env list
clo50867[1] = a5002350282;
clo50867[2] = kont50122;
clo50867[3] = acc;
clo50867[4] = proc;
clo50867[5] = foldr;
void* f5012450283 = encode_clo(clo50867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5012450283;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50436 = encode_clo(alloc_clo(lam50436_fptr, 0));

void* lam50438_fptr() // lam50438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50439 = arg_buffer[1];
//reading env and args
void* a5002250280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50439))[7];
//not do dummy comment
void* kont50122 = (decode_clo(env50439))[6];
//not do dummy comment
void* car = (decode_clo(env50439))[5];
//not do dummy comment
void* foldr = (decode_clo(env50439))[4];
//not do dummy comment
void* lst = (decode_clo(env50439))[3];
//not do dummy comment
void* proc = (decode_clo(env50439))[2];
//not do dummy comment
void* acc = (decode_clo(env50439))[1];

//if-clause
bool if_guard50868 = is_true(a5002250280);
if(if_guard50868)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50122);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50122))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50870 = alloc_clo(lam50436_fptr, 6);

//setting env list
clo50870[1] = acc;
clo50870[2] = proc;
clo50870[3] = lst;
clo50870[4] = foldr;
clo50870[5] = kont50122;
clo50870[6] = cdr;
void* f5012550281 = encode_clo(clo50870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5012550281;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50438 = encode_clo(alloc_clo(lam50438_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50440 = arg_buffer[1];
//reading env and args
void* kont50122 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50872 = alloc_clo(lam50438_fptr, 7);

//setting env list
clo50872[1] = acc;
clo50872[2] = proc;
clo50872[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo50872[4] = foldr;
clo50872[5] = car;
clo50872[6] = kont50122;
clo50872[7] = cdr;
void* f5012650279 = encode_clo(clo50872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5012650279;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam50441_fptr() // lam50441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50442 = arg_buffer[1];
//reading env and args
void* a5002950294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50127 = (decode_clo(env50442))[3];
//not do dummy comment
void* a5002750290 = (decode_clo(env50442))[2];
//not do dummy comment
void* cons = (decode_clo(env50442))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50127;
arg_buffer[3] = a5002750290;
arg_buffer[4] = a5002950294;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50441 = encode_clo(alloc_clo(lam50441_fptr, 0));

void* lam50443_fptr() // lam50443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50444 = arg_buffer[1];
//reading env and args
void* a5002850292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50127 = (decode_clo(env50444))[5];
//not do dummy comment
void* a5002750290 = (decode_clo(env50444))[4];
//not do dummy comment
void* append = (decode_clo(env50444))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50444))[2];
//not do dummy comment
void* cons = (decode_clo(env50444))[1];

//creating new closure instance
void** clo50874 = alloc_clo(lam50441_fptr, 3);

//setting env list
clo50874[1] = cons;
clo50874[2] = a5002750290;
clo50874[3] = kont50127;
void* f5012850293 = encode_clo(clo50874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5012850293;
arg_buffer[3] = a5002850292;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50443 = encode_clo(alloc_clo(lam50443_fptr, 0));

void* lam50445_fptr() // lam50445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50446 = arg_buffer[1];
//reading env and args
void* a5002750290 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50446))[6];
//not do dummy comment
void* kont50127 = (decode_clo(env50446))[5];
//not do dummy comment
void* append = (decode_clo(env50446))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50446))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50446))[2];
//not do dummy comment
void* cons = (decode_clo(env50446))[1];

//creating new closure instance
void** clo50876 = alloc_clo(lam50443_fptr, 5);

//setting env list
clo50876[1] = cons;
clo50876[2] = lst2;
clo50876[3] = append;
clo50876[4] = a5002750290;
clo50876[5] = kont50127;
void* f5012950291 = encode_clo(clo50876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5012950291;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50445 = encode_clo(alloc_clo(lam50445_fptr, 0));

void* lam50447_fptr() // lam50447 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50448 = arg_buffer[1];
//reading env and args
void* a5002650288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50448))[7];
//not do dummy comment
void* kont50127 = (decode_clo(env50448))[6];
//not do dummy comment
void* append = (decode_clo(env50448))[5];
//not do dummy comment
void* lst2 = (decode_clo(env50448))[4];
//not do dummy comment
void* cons = (decode_clo(env50448))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50448))[2];
//not do dummy comment
void* car = (decode_clo(env50448))[1];

//if-clause
bool if_guard50877 = is_true(a5002650288);
if(if_guard50877)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50127);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50127))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50879 = alloc_clo(lam50445_fptr, 6);

//setting env list
clo50879[1] = cons;
clo50879[2] = lst1;
clo50879[3] = lst2;
clo50879[4] = append;
clo50879[5] = kont50127;
clo50879[6] = cdr;
void* f5013050289 = encode_clo(clo50879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5013050289;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50447 = encode_clo(alloc_clo(lam50447_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50449 = arg_buffer[1];
//reading env and args
void* kont50127 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50881 = alloc_clo(lam50447_fptr, 7);

//setting env list
clo50881[1] = car;
clo50881[2] = lst1;
clo50881[3] = cons;
clo50881[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo50881[5] = append;
clo50881[6] = kont50127;
clo50881[7] = cdr;
void* f5013150287 = encode_clo(clo50881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5013150287;
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
void* _50450 = arg_buffer[1];
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

void* kont5013250295 = prim_car(lst);
void* lst50296 = prim_cdr(lst);
void* x5003050297 = apply_prim_hash(lst50296);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5013250295);
arg_buffer[2] = x5003050297;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5013250295))[0]);
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
void* _50451 = arg_buffer[1];
//reading env and args
void* kont50134 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5003150298 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50134);
arg_buffer[2] = x5003150298;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50134))[0]);
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
void* _50452 = arg_buffer[1];
//reading env and args
void* kont50135 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5003250299 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50135);
arg_buffer[2] = x5003250299;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50135))[0]);
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
void* _50453 = arg_buffer[1];
//reading env and args
void* kont50136 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5003350300 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50136);
arg_buffer[2] = x5003350300;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50136))[0]);
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
void* _50454 = arg_buffer[1];
//reading env and args
void* kont50137 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5003450301 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50137);
arg_buffer[2] = x5003450301;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50137))[0]);
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
void* _50456 = arg_buffer[1];
//reading env and args
void* kont50138 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar50882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50882, "1", 10);
void* a5003550302 = encode_mpz(mpzvar50882);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = kont50138;
arg_buffer[3] = a5003550302;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam50457_fptr() // lam50457 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50458 = arg_buffer[1];
//reading env and args
void* x5003650304 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50139 = (decode_clo(env50458))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50139);
arg_buffer[2] = x5003650304;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50139))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50457 = encode_clo(alloc_clo(lam50457_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50459 = arg_buffer[1];
//reading env and args
void* kont50139 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo50884 = alloc_clo(lam50457_fptr, 1);

//setting env list
clo50884[1] = kont50139;
void* f5014050303 = encode_clo(clo50884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5014050303;
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

