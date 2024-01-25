#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16060 = arg_buffer[1];
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

void* kont16058 = prim_car(lst);
void* lst16061 = prim_cdr(lst);
void* x16059 = apply_prim__u43(lst16061);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16058);
arg_buffer[2] = x16059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16058))[0]);
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
void* _env16064 = arg_buffer[1];
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

void* kont16062 = prim_car(lst);
void* lst16065 = prim_cdr(lst);
void* x16063 = apply_prim__u45(lst16065);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16062);
arg_buffer[2] = x16063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16062))[0]);
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
void* _env16068 = arg_buffer[1];
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

void* kont16066 = prim_car(lst);
void* lst16069 = prim_cdr(lst);
void* x16067 = apply_prim__u42(lst16069);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16066);
arg_buffer[2] = x16067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16066))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16072 = arg_buffer[1];
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

void* kont16070 = prim_car(lst);
void* lst16073 = prim_cdr(lst);
void* x16071 = apply_prim__u47(lst16073);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16070);
arg_buffer[2] = x16071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16070))[0]);
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
void* _env16076 = arg_buffer[1];
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

void* kont16074 = prim_car(lst);
void* lst16077 = prim_cdr(lst);
void* x16075 = apply_prim__u61(lst16077);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16074);
arg_buffer[2] = x16075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16074))[0]);
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
void* _env16080 = arg_buffer[1];
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

void* kont16078 = prim_car(lst);
void* lst16081 = prim_cdr(lst);
void* x16079 = apply_prim__u62(lst16081);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16078);
arg_buffer[2] = x16079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16078))[0]);
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
void* _env16084 = arg_buffer[1];
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

void* kont16082 = prim_car(lst);
void* lst16085 = prim_cdr(lst);
void* x16083 = apply_prim__u60(lst16085);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16082);
arg_buffer[2] = x16083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16082))[0]);
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
void* _env16088 = arg_buffer[1];
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

void* kont16086 = prim_car(lst);
void* lst16089 = prim_cdr(lst);
void* x16087 = apply_prim__u60_u61(lst16089);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16086);
arg_buffer[2] = x16087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16086))[0]);
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
void* _env16092 = arg_buffer[1];
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

void* kont16090 = prim_car(lst);
void* lst16093 = prim_cdr(lst);
void* x16091 = apply_prim__u62_u61(lst16093);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16090);
arg_buffer[2] = x16091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16090))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void* modulo_fptr() // modulo 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16096 = arg_buffer[1];
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

void* kont16094 = prim_car(lst);
void* lst16097 = prim_cdr(lst);
void* x16095 = apply_prim_modulo(lst16097);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16094);
arg_buffer[2] = x16095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16094))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void* null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16100 = arg_buffer[1];
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

void* kont16098 = prim_car(lst);
void* lst16101 = prim_cdr(lst);
void* x16099 = apply_prim_null_u63(lst16101);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16098);
arg_buffer[2] = x16099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16098))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16104 = arg_buffer[1];
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

void* kont16102 = prim_car(lst);
void* lst16105 = prim_cdr(lst);
void* x16103 = apply_prim_equal_u63(lst16105);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16102);
arg_buffer[2] = x16103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16102))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* eq_u63_fptr() // eq? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16108 = arg_buffer[1];
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

void* kont16106 = prim_car(lst);
void* lst16109 = prim_cdr(lst);
void* x16107 = apply_prim_eq_u63(lst16109);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16106);
arg_buffer[2] = x16107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16106))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16112 = arg_buffer[1];
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

void* kont16110 = prim_car(lst);
void* lst16113 = prim_cdr(lst);
void* x16111 = apply_prim_cons(lst16113);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16110);
arg_buffer[2] = x16111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16110))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void* car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16116 = arg_buffer[1];
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

void* kont16114 = prim_car(lst);
void* lst16117 = prim_cdr(lst);
void* x16115 = apply_prim_car(lst16117);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16114);
arg_buffer[2] = x16115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16114))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16120 = arg_buffer[1];
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

void* kont16118 = prim_car(lst);
void* lst16121 = prim_cdr(lst);
void* x16119 = apply_prim_cdr(lst16121);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16118);
arg_buffer[2] = x16119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16118))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16124 = arg_buffer[1];
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

void* kont16122 = prim_car(lst);
void* lst16125 = prim_cdr(lst);
void* x16123 = apply_prim_float_u45_u62int(lst16125);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16122);
arg_buffer[2] = x16123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16122))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16128 = arg_buffer[1];
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

void* kont16126 = prim_car(lst);
void* lst16129 = prim_cdr(lst);
void* x16127 = apply_prim_int_u45_u62float(lst16129);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16126);
arg_buffer[2] = x16127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16126))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16132 = arg_buffer[1];
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

void* kont16130 = prim_car(lst);
void* lst16133 = prim_cdr(lst);
void* x16131 = apply_prim_hash(lst16133);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16130);
arg_buffer[2] = x16131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16130))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45ref_fptr() // hash-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16136 = arg_buffer[1];
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

void* kont16134 = prim_car(lst);
void* lst16137 = prim_cdr(lst);
void* x16135 = apply_prim_hash_u45ref(lst16137);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16134);
arg_buffer[2] = x16135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16134))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void* hash_u45set_fptr() // hash-set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16140 = arg_buffer[1];
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

void* kont16138 = prim_car(lst);
void* lst16141 = prim_cdr(lst);
void* x16139 = apply_prim_hash_u45set(lst16141);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16138);
arg_buffer[2] = x16139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16138))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void* hash_u45keys_fptr() // hash-keys 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16144 = arg_buffer[1];
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

void* kont16142 = prim_car(lst);
void* lst16145 = prim_cdr(lst);
void* x16143 = apply_prim_hash_u45keys(lst16145);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16142);
arg_buffer[2] = x16143;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16142))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16148 = arg_buffer[1];
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

void* kont16146 = prim_car(lst);
void* lst16149 = prim_cdr(lst);
void* x16147 = apply_prim_hash_u45has_u45key_u63(lst16149);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16146);
arg_buffer[2] = x16147;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16146))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void* hash_u45count_fptr() // hash-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16152 = arg_buffer[1];
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

void* kont16150 = prim_car(lst);
void* lst16153 = prim_cdr(lst);
void* x16151 = apply_prim_hash_u45count(lst16153);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16150);
arg_buffer[2] = x16151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16150))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16156 = arg_buffer[1];
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

void* kont16154 = prim_car(lst);
void* lst16157 = prim_cdr(lst);
void* x16155 = apply_prim_set(lst16157);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16154);
arg_buffer[2] = x16155;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16154))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45_u62list_fptr() // set->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16160 = arg_buffer[1];
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

void* kont16158 = prim_car(lst);
void* lst16161 = prim_cdr(lst);
void* x16159 = apply_prim_set_u45_u62list(lst16161);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16158);
arg_buffer[2] = x16159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16158))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void* list_u45_u62set_fptr() // list->set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16164 = arg_buffer[1];
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

void* kont16162 = prim_car(lst);
void* lst16165 = prim_cdr(lst);
void* x16163 = apply_prim_list_u45_u62set(lst16165);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16162);
arg_buffer[2] = x16163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16162))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16168 = arg_buffer[1];
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

void* kont16166 = prim_car(lst);
void* lst16169 = prim_cdr(lst);
void* x16167 = apply_prim_set_u45add(lst16169);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16166);
arg_buffer[2] = x16167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16166))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16172 = arg_buffer[1];
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

void* kont16170 = prim_car(lst);
void* lst16173 = prim_cdr(lst);
void* x16171 = apply_prim_set_u45member_u63(lst16173);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16170);
arg_buffer[2] = x16171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16170))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16176 = arg_buffer[1];
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

void* kont16174 = prim_car(lst);
void* lst16177 = prim_cdr(lst);
void* x16175 = apply_prim_set_u45remove(lst16177);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16174);
arg_buffer[2] = x16175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16174))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16180 = arg_buffer[1];
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

void* kont16178 = prim_car(lst);
void* lst16181 = prim_cdr(lst);
void* x16179 = apply_prim_set_u45count(lst16181);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16178);
arg_buffer[2] = x16179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16178))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16184 = arg_buffer[1];
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

void* kont16182 = prim_car(lst);
void* lst16185 = prim_cdr(lst);
void* x16183 = apply_prim_string_u63(lst16185);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16182);
arg_buffer[2] = x16183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16182))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16188 = arg_buffer[1];
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

void* kont16186 = prim_car(lst);
void* lst16189 = prim_cdr(lst);
void* x16187 = apply_prim_string_u45length(lst16189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16186);
arg_buffer[2] = x16187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16186))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16192 = arg_buffer[1];
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

void* kont16190 = prim_car(lst);
void* lst16193 = prim_cdr(lst);
void* x16191 = apply_prim_string_u45ref(lst16193);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16190);
arg_buffer[2] = x16191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16190))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16196 = arg_buffer[1];
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

void* kont16194 = prim_car(lst);
void* lst16197 = prim_cdr(lst);
void* x16195 = apply_prim_substring(lst16197);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16194);
arg_buffer[2] = x16195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16194))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16200 = arg_buffer[1];
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

void* kont16198 = prim_car(lst);
void* lst16201 = prim_cdr(lst);
void* x16199 = apply_prim_string_u45append(lst16201);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16198);
arg_buffer[2] = x16199;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16198))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16204 = arg_buffer[1];
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

void* kont16202 = prim_car(lst);
void* lst16205 = prim_cdr(lst);
void* x16203 = apply_prim_string_u45_u62list(lst16205);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16202);
arg_buffer[2] = x16203;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16202))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16208 = arg_buffer[1];
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

void* kont16206 = prim_car(lst);
void* lst16209 = prim_cdr(lst);
void* x16207 = apply_prim_exact_u45floor(lst16209);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16206);
arg_buffer[2] = x16207;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16206))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void* exact_u45ceiling_fptr() // exact-ceiling 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16212 = arg_buffer[1];
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

void* kont16210 = prim_car(lst);
void* lst16213 = prim_cdr(lst);
void* x16211 = apply_prim_exact_u45ceiling(lst16213);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16210);
arg_buffer[2] = x16211;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16210))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void* exact_u45round_fptr() // exact-round 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16216 = arg_buffer[1];
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

void* kont16214 = prim_car(lst);
void* lst16217 = prim_cdr(lst);
void* x16215 = apply_prim_exact_u45round(lst16217);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16214);
arg_buffer[2] = x16215;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16214))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void* absolute_fptr() // absolute 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16220 = arg_buffer[1];
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

void* kont16218 = prim_car(lst);
void* lst16221 = prim_cdr(lst);
void* x16219 = apply_prim_absolute(lst16221);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16218);
arg_buffer[2] = x16219;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16218))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* absolute = encode_clo(alloc_clo(absolute_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16224 = arg_buffer[1];
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

void* kont16222 = prim_car(lst);
void* lst16225 = prim_cdr(lst);
void* x16223 = apply_prim_max(lst16225);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16222);
arg_buffer[2] = x16223;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16222))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* min_fptr() // min 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16228 = arg_buffer[1];
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

void* kont16226 = prim_car(lst);
void* lst16229 = prim_cdr(lst);
void* x16227 = apply_prim_min(lst16229);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16226);
arg_buffer[2] = x16227;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16226))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* min = encode_clo(alloc_clo(min_fptr, 0));

void* expt_fptr() // expt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16232 = arg_buffer[1];
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

void* kont16230 = prim_car(lst);
void* lst16233 = prim_cdr(lst);
void* x16231 = apply_prim_expt(lst16233);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16230);
arg_buffer[2] = x16231;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16230))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void* squareroot_fptr() // squareroot 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16236 = arg_buffer[1];
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

void* kont16234 = prim_car(lst);
void* lst16237 = prim_cdr(lst);
void* x16235 = apply_prim_squareroot(lst16237);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16234);
arg_buffer[2] = x16235;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16234))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* squareroot = encode_clo(alloc_clo(squareroot_fptr, 0));

void* remaind_fptr() // remaind 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16240 = arg_buffer[1];
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

void* kont16238 = prim_car(lst);
void* lst16241 = prim_cdr(lst);
void* x16239 = apply_prim_remaind(lst16241);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16238);
arg_buffer[2] = x16239;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16238))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* remaind = encode_clo(alloc_clo(remaind_fptr, 0));

void* quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16244 = arg_buffer[1];
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

void* kont16242 = prim_car(lst);
void* lst16245 = prim_cdr(lst);
void* x16243 = apply_prim_quotient(lst16245);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16242);
arg_buffer[2] = x16243;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16242))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void* randnum_fptr() // randnum 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16248 = arg_buffer[1];
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

void* kont16246 = prim_car(lst);
void* lst16249 = prim_cdr(lst);
void* x16247 = apply_prim_randnum(lst16249);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16246);
arg_buffer[2] = x16247;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16246))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* randnum = encode_clo(alloc_clo(randnum_fptr, 0));

void* symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16252 = arg_buffer[1];
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

void* kont16250 = prim_car(lst);
void* lst16253 = prim_cdr(lst);
void* x16251 = apply_prim_symbol_u63(lst16253);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16250);
arg_buffer[2] = x16251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16250))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void* pair_u63_fptr() // pair? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16256 = arg_buffer[1];
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

void* kont16254 = prim_car(lst);
void* lst16257 = prim_cdr(lst);
void* x16255 = apply_prim_pair_u63(lst16257);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16254);
arg_buffer[2] = x16255;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16254))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void* positive_u63_fptr() // positive? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16260 = arg_buffer[1];
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

void* kont16258 = prim_car(lst);
void* lst16261 = prim_cdr(lst);
void* x16259 = apply_prim_positive_u63(lst16261);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16258);
arg_buffer[2] = x16259;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16258))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void* negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env16264 = arg_buffer[1];
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

void* kont16262 = prim_car(lst);
void* lst16265 = prim_cdr(lst);
void* x16263 = apply_prim_negative_u63(lst16265);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont16262);
arg_buffer[2] = x16263;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont16262))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8490 = arg_buffer[1];
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

void* kont8419 = prim_car(x);
void* x8489 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8419);
arg_buffer[2] = x8489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8491_fptr() // lam8491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8492 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8420 = (decode_clo(env8492))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8492))[2];
//not do dummy comment
void* a8350 = (decode_clo(env8492))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8420;
arg_buffer[3] = a8350;
arg_buffer[4] = a8352;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8491 = encode_clo(alloc_clo(lam8491_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8495 = arg_buffer[1];
//reading env and args
void* kont8420 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar16266 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16266, "0", 10);
void* a8350 = encode_mpz(mpzvar16266);
mpz_t* mpzvar16267 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16267, "2", 10);
void* a8351 = encode_mpz(mpzvar16267);

//creating new closure instance
void** clo16269 = alloc_clo(lam8491_fptr, 3);

//setting env list
clo16269[1] = a8350;
clo16269[2] = equal_u63;
clo16269[3] = kont8420;
void* f8421 = encode_clo(clo16269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8421;
arg_buffer[3] = x;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8496_fptr() // lam8496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8497 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8353 = (decode_clo(env8497))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8497))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8422;
arg_buffer[3] = a8353;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8496 = encode_clo(alloc_clo(lam8496_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8500 = arg_buffer[1];
//reading env and args
void* kont8422 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar16270 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16270, "1", 10);
void* a8353 = encode_mpz(mpzvar16270);
mpz_t* mpzvar16271 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16271, "2", 10);
void* a8354 = encode_mpz(mpzvar16271);

//creating new closure instance
void** clo16273 = alloc_clo(lam8496_fptr, 3);

//setting env list
clo16273[1] = equal_u63;
clo16273[2] = kont8422;
clo16273[3] = a8353;
void* f8423 = encode_clo(clo16273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8423;
arg_buffer[3] = x;
arg_buffer[4] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8424 = (decode_clo(env8504))[3];
//not do dummy comment
void* x = (decode_clo(env8504))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8424;
arg_buffer[3] = x;
arg_buffer[4] = a8361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void* lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8506))[5];
//not do dummy comment
void* lst = (decode_clo(env8506))[4];
//not do dummy comment
void* kont8424 = (decode_clo(env8506))[3];
//not do dummy comment
void* x = (decode_clo(env8506))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8506))[1];

//if-clause
bool if_guard16274 = is_true(a8359);
if(if_guard16274)
{
void* xy8360 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[2] = xy8360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16276 = alloc_clo(lam8503_fptr, 3);

//setting env list
clo16276[1] = member_u63;
clo16276[2] = x;
clo16276[3] = kont8424;
void* f8425 = encode_clo(clo16276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8425;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void* lam8507_fptr() // lam8507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8508 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8508))[6];
//not do dummy comment
void* lst = (decode_clo(env8508))[5];
//not do dummy comment
void* kont8424 = (decode_clo(env8508))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8508))[3];
//not do dummy comment
void* x = (decode_clo(env8508))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8508))[1];

//creating new closure instance
void** clo16278 = alloc_clo(lam8505_fptr, 5);

//setting env list
clo16278[1] = member_u63;
clo16278[2] = x;
clo16278[3] = kont8424;
clo16278[4] = lst;
clo16278[5] = cdr;
void* f8426 = encode_clo(clo16278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8426;
arg_buffer[3] = a8358;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void* lam8509_fptr() // lam8509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8510 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8510))[7];
//not do dummy comment
void* lst = (decode_clo(env8510))[6];
//not do dummy comment
void* kont8424 = (decode_clo(env8510))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8510))[4];
//not do dummy comment
void* x = (decode_clo(env8510))[3];
//not do dummy comment
void* car = (decode_clo(env8510))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8510))[1];

//if-clause
bool if_guard16279 = is_true(a8356);
if(if_guard16279)
{
void* xy8357 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[2] = xy8357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16281 = alloc_clo(lam8507_fptr, 6);

//setting env list
clo16281[1] = member_u63;
clo16281[2] = x;
clo16281[3] = equal_u63;
clo16281[4] = kont8424;
clo16281[5] = lst;
clo16281[6] = cdr;
void* f8427 = encode_clo(clo16281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8509 = encode_clo(alloc_clo(lam8509_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8511 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo16283 = alloc_clo(lam8509_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo16283[1] = member_u63;
clo16283[2] = car;
clo16283[3] = x;
clo16283[4] = equal_u63;
clo16283[5] = kont8424;
clo16283[6] = lst;
clo16283[7] = cdr;
void* f8428 = encode_clo(clo16283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8512_fptr() // lam8512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8513))[3];
//not do dummy comment
void* a8363 = (decode_clo(env8513))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8513))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8429;
arg_buffer[3] = a8363;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8512 = encode_clo(alloc_clo(lam8512_fptr, 0));

void* lam8514_fptr() // lam8514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8515))[5];
//not do dummy comment
void* a8363 = (decode_clo(env8515))[4];
//not do dummy comment
void* cons = (decode_clo(env8515))[3];
//not do dummy comment
void* kont8429 = (decode_clo(env8515))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8515))[1];

//creating new closure instance
void** clo16285 = alloc_clo(lam8512_fptr, 3);

//setting env list
clo16285[1] = kont8429;
clo16285[2] = a8363;
clo16285[3] = reverse_u45helper;
void* f8430 = encode_clo(clo16285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8430;
arg_buffer[3] = a8364;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void* lam8516_fptr() // lam8516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8517 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8517))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8517))[5];
//not do dummy comment
void* car = (decode_clo(env8517))[4];
//not do dummy comment
void* cons = (decode_clo(env8517))[3];
//not do dummy comment
void* kont8429 = (decode_clo(env8517))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8517))[1];

//creating new closure instance
void** clo16287 = alloc_clo(lam8514_fptr, 5);

//setting env list
clo16287[1] = lst2;
clo16287[2] = kont8429;
clo16287[3] = cons;
clo16287[4] = a8363;
clo16287[5] = reverse_u45helper;
void* f8431 = encode_clo(clo16287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void* lam8518_fptr() // lam8518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8519))[7];
//not do dummy comment
void* lst = (decode_clo(env8519))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8519))[5];
//not do dummy comment
void* car = (decode_clo(env8519))[4];
//not do dummy comment
void* cons = (decode_clo(env8519))[3];
//not do dummy comment
void* kont8429 = (decode_clo(env8519))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8519))[1];

//if-clause
bool if_guard16288 = is_true(a8362);
if(if_guard16288)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8429);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8429))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16290 = alloc_clo(lam8516_fptr, 6);

//setting env list
clo16290[1] = lst2;
clo16290[2] = kont8429;
clo16290[3] = cons;
clo16290[4] = car;
clo16290[5] = reverse_u45helper;
clo16290[6] = lst;
void* f8432 = encode_clo(clo16290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8520 = arg_buffer[1];
//reading env and args
void* kont8429 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo16292 = alloc_clo(lam8518_fptr, 7);

//setting env list
clo16292[1] = lst2;
clo16292[2] = kont8429;
clo16292[3] = cons;
clo16292[4] = car;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo16292[5] = reverse_u45helper;
clo16292[6] = lst;
clo16292[7] = cdr;
void* f8433 = encode_clo(clo16292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8434 = (decode_clo(env8522))[3];
//not do dummy comment
void* lst = (decode_clo(env8522))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8434;
arg_buffer[3] = lst;
arg_buffer[4] = a8366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8523 = arg_buffer[1];
//reading env and args
void* kont8434 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo16294 = alloc_clo(lam8521_fptr, 3);

//setting env list
clo16294[1] = reverse_u45helper;
clo16294[2] = lst;
clo16294[3] = kont8434;
void* f8435 = encode_clo(clo16294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* xy8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8436 = (decode_clo(env8525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8436);
arg_buffer[2] = xy8369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8436))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8524 = encode_clo(alloc_clo(lam8524_fptr, 0));

void* lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8527))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8527))[3];
//not do dummy comment
void* a8372 = (decode_clo(env8527))[2];
//not do dummy comment
void* kont8436 = (decode_clo(env8527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8436;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[5] = a8374;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void* lam8528_fptr() // lam8528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8529))[6];
//not do dummy comment
void* cons = (decode_clo(env8529))[5];
//not do dummy comment
void* a8372 = (decode_clo(env8529))[4];
//not do dummy comment
void* kont8436 = (decode_clo(env8529))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8529))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8529))[1];

//creating new closure instance
void** clo16296 = alloc_clo(lam8526_fptr, 4);

//setting env list
clo16296[1] = kont8436;
clo16296[2] = a8372;
clo16296[3] = take_u45helper;
clo16296[4] = a8370;
void* f8438 = encode_clo(clo16296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8438;
arg_buffer[3] = a8373;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

void* lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8531))[7];
//not do dummy comment
void* kont8436 = (decode_clo(env8531))[6];
//not do dummy comment
void* lst = (decode_clo(env8531))[5];
//not do dummy comment
void* car = (decode_clo(env8531))[4];
//not do dummy comment
void* cons = (decode_clo(env8531))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8531))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8531))[1];

//creating new closure instance
void** clo16298 = alloc_clo(lam8528_fptr, 6);

//setting env list
clo16298[1] = lst2;
clo16298[2] = take_u45helper;
clo16298[3] = kont8436;
clo16298[4] = a8372;
clo16298[5] = cons;
clo16298[6] = a8370;
void* f8439 = encode_clo(clo16298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void* lam8533_fptr() // lam8533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8436 = (decode_clo(env8534))[8];
//not do dummy comment
void* lst = (decode_clo(env8534))[7];
//not do dummy comment
void* cons = (decode_clo(env8534))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8534))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8534))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8534))[3];
//not do dummy comment
void* n = (decode_clo(env8534))[2];
//not do dummy comment
void* car = (decode_clo(env8534))[1];
mpz_t* mpzvar16299 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16299, "1", 10);
void* a8371 = encode_mpz(mpzvar16299);

//creating new closure instance
void** clo16301 = alloc_clo(lam8530_fptr, 7);

//setting env list
clo16301[1] = lst2;
clo16301[2] = take_u45helper;
clo16301[3] = cons;
clo16301[4] = car;
clo16301[5] = lst;
clo16301[6] = kont8436;
clo16301[7] = a8370;
void* f8440 = encode_clo(clo16301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8440;
arg_buffer[3] = n;
arg_buffer[4] = a8371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8536))[10];
//not do dummy comment
void* kont8436 = (decode_clo(env8536))[9];
//not do dummy comment
void* lst = (decode_clo(env8536))[8];
//not do dummy comment
void* reverse = (decode_clo(env8536))[7];
//not do dummy comment
void* cons = (decode_clo(env8536))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8536))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8536))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8536))[3];
//not do dummy comment
void* n = (decode_clo(env8536))[2];
//not do dummy comment
void* car = (decode_clo(env8536))[1];

//if-clause
bool if_guard16302 = is_true(a8368);
if(if_guard16302)
{

//creating new closure instance
void** clo16304 = alloc_clo(lam8524_fptr, 1);

//setting env list
clo16304[1] = kont8436;
void* f8437 = encode_clo(clo16304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8437;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16306 = alloc_clo(lam8533_fptr, 8);

//setting env list
clo16306[1] = car;
clo16306[2] = n;
clo16306[3] = lst2;
clo16306[4] = take_u45helper;
clo16306[5] = _u45;
clo16306[6] = cons;
clo16306[7] = lst;
clo16306[8] = kont8436;
void* f8441 = encode_clo(clo16306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8441;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8538 = arg_buffer[1];
//reading env and args
void* kont8436 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar16307 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16307, "0", 10);
void* a8367 = encode_mpz(mpzvar16307);

//creating new closure instance
void** clo16309 = alloc_clo(lam8535_fptr, 10);

//setting env list
clo16309[1] = car;
clo16309[2] = n;
clo16309[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo16309[4] = take_u45helper;
clo16309[5] = _u45;
clo16309[6] = cons;
clo16309[7] = reverse;
clo16309[8] = lst;
clo16309[9] = kont8436;
clo16309[10] = cdr;
void* f8442 = encode_clo(clo16309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8442;
arg_buffer[3] = n;
arg_buffer[4] = a8367;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8540))[4];
//not do dummy comment
void* kont8443 = (decode_clo(env8540))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8540))[2];
//not do dummy comment
void* n = (decode_clo(env8540))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8443;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8541 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo16311 = alloc_clo(lam8539_fptr, 4);

//setting env list
clo16311[1] = n;
clo16311[2] = take_u45helper;
clo16311[3] = kont8443;
clo16311[4] = lst;
void* f8444 = encode_clo(clo16311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8544))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8544))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8445;
arg_buffer[3] = a8378;
arg_buffer[4] = a8380;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void* lam8545_fptr() // lam8545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8546 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8546))[4];
//not do dummy comment
void* kont8445 = (decode_clo(env8546))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8546))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8546))[1];

//creating new closure instance
void** clo16313 = alloc_clo(lam8543_fptr, 3);

//setting env list
clo16313[1] = a8378;
clo16313[2] = _u43;
clo16313[3] = kont8445;
void* f8446 = encode_clo(clo16313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8446;
arg_buffer[3] = a8379;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8549))[5];
//not do dummy comment
void* lst = (decode_clo(env8549))[4];
//not do dummy comment
void* length = (decode_clo(env8549))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8549))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8549))[1];

//if-clause
bool if_guard16314 = is_true(a8376);
if(if_guard16314)
{
mpz_t* mpzvar16315 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16315, "0", 10);
void* xy8377 = encode_mpz(mpzvar16315);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8445);
arg_buffer[2] = xy8377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar16316 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16316, "1", 10);
void* a8378 = encode_mpz(mpzvar16316);

//creating new closure instance
void** clo16318 = alloc_clo(lam8545_fptr, 4);

//setting env list
clo16318[1] = a8378;
clo16318[2] = _u43;
clo16318[3] = kont8445;
clo16318[4] = length;
void* f8447 = encode_clo(clo16318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8550 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo16320 = alloc_clo(lam8548_fptr, 5);

//setting env list
clo16320[1] = kont8445;
clo16320[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo16320[3] = length;
clo16320[4] = lst;
clo16320[5] = cdr;
void* f8448 = encode_clo(clo16320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* xy8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8449 = (decode_clo(env8552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8449);
arg_buffer[2] = xy8382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void* lam8553_fptr() // lam8553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8449 = (decode_clo(env8554))[3];
//not do dummy comment
void* cons = (decode_clo(env8554))[2];
//not do dummy comment
void* a8384 = (decode_clo(env8554))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8449;
arg_buffer[3] = a8384;
arg_buffer[4] = a8386;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void* lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8449 = (decode_clo(env8556))[5];
//not do dummy comment
void* map = (decode_clo(env8556))[4];
//not do dummy comment
void* proc = (decode_clo(env8556))[3];
//not do dummy comment
void* cons = (decode_clo(env8556))[2];
//not do dummy comment
void* a8384 = (decode_clo(env8556))[1];

//creating new closure instance
void** clo16322 = alloc_clo(lam8553_fptr, 3);

//setting env list
clo16322[1] = a8384;
clo16322[2] = cons;
clo16322[3] = kont8449;
void* f8451 = encode_clo(clo16322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8451;
arg_buffer[3] = proc;
arg_buffer[4] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void* lam8557_fptr() // lam8557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8558 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8558))[6];
//not do dummy comment
void* map = (decode_clo(env8558))[5];
//not do dummy comment
void* proc = (decode_clo(env8558))[4];
//not do dummy comment
void* cons = (decode_clo(env8558))[3];
//not do dummy comment
void* cdr = (decode_clo(env8558))[2];
//not do dummy comment
void* kont8449 = (decode_clo(env8558))[1];

//creating new closure instance
void** clo16324 = alloc_clo(lam8555_fptr, 5);

//setting env list
clo16324[1] = a8384;
clo16324[2] = cons;
clo16324[3] = proc;
clo16324[4] = map;
clo16324[5] = kont8449;
void* f8452 = encode_clo(clo16324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void* lam8559_fptr() // lam8559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8560))[6];
//not do dummy comment
void* map = (decode_clo(env8560))[5];
//not do dummy comment
void* proc = (decode_clo(env8560))[4];
//not do dummy comment
void* cons = (decode_clo(env8560))[3];
//not do dummy comment
void* cdr = (decode_clo(env8560))[2];
//not do dummy comment
void* kont8449 = (decode_clo(env8560))[1];

//creating new closure instance
void** clo16326 = alloc_clo(lam8557_fptr, 6);

//setting env list
clo16326[1] = kont8449;
clo16326[2] = cdr;
clo16326[3] = cons;
clo16326[4] = proc;
clo16326[5] = map;
clo16326[6] = lst;
void* f8453 = encode_clo(clo16326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8453;
arg_buffer[3] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void* lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8562))[8];
//not do dummy comment
void* map = (decode_clo(env8562))[7];
//not do dummy comment
void* proc = (decode_clo(env8562))[6];
//not do dummy comment
void* car = (decode_clo(env8562))[5];
//not do dummy comment
void* cons = (decode_clo(env8562))[4];
//not do dummy comment
void* list = (decode_clo(env8562))[3];
//not do dummy comment
void* cdr = (decode_clo(env8562))[2];
//not do dummy comment
void* kont8449 = (decode_clo(env8562))[1];

//if-clause
bool if_guard16327 = is_true(a8381);
if(if_guard16327)
{

//creating new closure instance
void** clo16329 = alloc_clo(lam8551_fptr, 1);

//setting env list
clo16329[1] = kont8449;
void* f8450 = encode_clo(clo16329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16331 = alloc_clo(lam8559_fptr, 6);

//setting env list
clo16331[1] = kont8449;
clo16331[2] = cdr;
clo16331[3] = cons;
clo16331[4] = proc;
clo16331[5] = map;
clo16331[6] = lst;
void* f8454 = encode_clo(clo16331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8563 = arg_buffer[1];
//reading env and args
void* kont8449 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo16333 = alloc_clo(lam8561_fptr, 8);

//setting env list
clo16333[1] = kont8449;
clo16333[2] = cdr;
clo16333[3] = list;
clo16333[4] = cons;
clo16333[5] = car;
clo16333[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo16333[7] = map;
clo16333[8] = lst;
void* f8455 = encode_clo(clo16333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8455;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* xy8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8456 = (decode_clo(env8565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8456);
arg_buffer[2] = xy8388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void* lam8566_fptr() // lam8566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8567 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8391 = (decode_clo(env8567))[3];
//not do dummy comment
void* kont8456 = (decode_clo(env8567))[2];
//not do dummy comment
void* cons = (decode_clo(env8567))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8456;
arg_buffer[3] = a8391;
arg_buffer[4] = a8393;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void* lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8391 = (decode_clo(env8569))[5];
//not do dummy comment
void* filter = (decode_clo(env8569))[4];
//not do dummy comment
void* cons = (decode_clo(env8569))[3];
//not do dummy comment
void* op = (decode_clo(env8569))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8569))[1];

//creating new closure instance
void** clo16335 = alloc_clo(lam8566_fptr, 3);

//setting env list
clo16335[1] = cons;
clo16335[2] = kont8456;
clo16335[3] = a8391;
void* f8458 = encode_clo(clo16335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8458;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void* lam8570_fptr() // lam8570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8571))[6];
//not do dummy comment
void* lst = (decode_clo(env8571))[5];
//not do dummy comment
void* filter = (decode_clo(env8571))[4];
//not do dummy comment
void* cons = (decode_clo(env8571))[3];
//not do dummy comment
void* op = (decode_clo(env8571))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8571))[1];

//creating new closure instance
void** clo16337 = alloc_clo(lam8568_fptr, 5);

//setting env list
clo16337[1] = kont8456;
clo16337[2] = op;
clo16337[3] = cons;
clo16337[4] = filter;
clo16337[5] = a8391;
void* f8459 = encode_clo(clo16337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8459;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* lam8572_fptr() // lam8572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* filter = (decode_clo(env8573))[3];
//not do dummy comment
void* op = (decode_clo(env8573))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8573))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8456;
arg_buffer[3] = op;
arg_buffer[4] = a8394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void* lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8575))[7];
//not do dummy comment
void* lst = (decode_clo(env8575))[6];
//not do dummy comment
void* cons = (decode_clo(env8575))[5];
//not do dummy comment
void* op = (decode_clo(env8575))[4];
//not do dummy comment
void* kont8456 = (decode_clo(env8575))[3];
//not do dummy comment
void* filter = (decode_clo(env8575))[2];
//not do dummy comment
void* car = (decode_clo(env8575))[1];

//if-clause
bool if_guard16338 = is_true(a8390);
if(if_guard16338)
{

//creating new closure instance
void** clo16340 = alloc_clo(lam8570_fptr, 6);

//setting env list
clo16340[1] = kont8456;
clo16340[2] = op;
clo16340[3] = cons;
clo16340[4] = filter;
clo16340[5] = lst;
clo16340[6] = cdr;
void* f8460 = encode_clo(clo16340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16342 = alloc_clo(lam8572_fptr, 3);

//setting env list
clo16342[1] = kont8456;
clo16342[2] = op;
clo16342[3] = filter;
void* f8461 = encode_clo(clo16342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8461;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void* lam8576_fptr() // lam8576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8577))[7];
//not do dummy comment
void* lst = (decode_clo(env8577))[6];
//not do dummy comment
void* cons = (decode_clo(env8577))[5];
//not do dummy comment
void* op = (decode_clo(env8577))[4];
//not do dummy comment
void* kont8456 = (decode_clo(env8577))[3];
//not do dummy comment
void* filter = (decode_clo(env8577))[2];
//not do dummy comment
void* car = (decode_clo(env8577))[1];

//creating new closure instance
void** clo16344 = alloc_clo(lam8574_fptr, 7);

//setting env list
clo16344[1] = car;
clo16344[2] = filter;
clo16344[3] = kont8456;
clo16344[4] = op;
clo16344[5] = cons;
clo16344[6] = lst;
clo16344[7] = cdr;
void* f8462 = encode_clo(clo16344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8462;
arg_buffer[3] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8579))[8];
//not do dummy comment
void* cons = (decode_clo(env8579))[7];
//not do dummy comment
void* list = (decode_clo(env8579))[6];
//not do dummy comment
void* cdr = (decode_clo(env8579))[5];
//not do dummy comment
void* op = (decode_clo(env8579))[4];
//not do dummy comment
void* kont8456 = (decode_clo(env8579))[3];
//not do dummy comment
void* filter = (decode_clo(env8579))[2];
//not do dummy comment
void* car = (decode_clo(env8579))[1];

//if-clause
bool if_guard16345 = is_true(a8387);
if(if_guard16345)
{

//creating new closure instance
void** clo16347 = alloc_clo(lam8564_fptr, 1);

//setting env list
clo16347[1] = kont8456;
void* f8457 = encode_clo(clo16347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8457;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16349 = alloc_clo(lam8576_fptr, 7);

//setting env list
clo16349[1] = car;
clo16349[2] = filter;
clo16349[3] = kont8456;
clo16349[4] = op;
clo16349[5] = cons;
clo16349[6] = lst;
clo16349[7] = cdr;
void* f8463 = encode_clo(clo16349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8463;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8580 = arg_buffer[1];
//reading env and args
void* kont8456 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo16351 = alloc_clo(lam8578_fptr, 8);

//setting env list
clo16351[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo16351[2] = filter;
clo16351[3] = kont8456;
clo16351[4] = op;
clo16351[5] = cdr;
clo16351[6] = list;
clo16351[7] = cons;
clo16351[8] = lst;
void* f8464 = encode_clo(clo16351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8464;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8465 = (decode_clo(env8582))[3];
//not do dummy comment
void* drop = (decode_clo(env8582))[2];
//not do dummy comment
void* a8397 = (decode_clo(env8582))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8465;
arg_buffer[3] = a8397;
arg_buffer[4] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void* lam8584_fptr() // lam8584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8585 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8465 = (decode_clo(env8585))[4];
//not do dummy comment
void* drop = (decode_clo(env8585))[3];
//not do dummy comment
void* n = (decode_clo(env8585))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8585))[1];
mpz_t* mpzvar16352 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16352, "1", 10);
void* a8398 = encode_mpz(mpzvar16352);

//creating new closure instance
void** clo16354 = alloc_clo(lam8581_fptr, 3);

//setting env list
clo16354[1] = a8397;
clo16354[2] = drop;
clo16354[3] = kont8465;
void* f8466 = encode_clo(clo16354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8466;
arg_buffer[3] = n;
arg_buffer[4] = a8398;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env8587))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8587))[5];
//not do dummy comment
void* cdr = (decode_clo(env8587))[4];
//not do dummy comment
void* kont8465 = (decode_clo(env8587))[3];
//not do dummy comment
void* lst = (decode_clo(env8587))[2];
//not do dummy comment
void* drop = (decode_clo(env8587))[1];

//if-clause
bool if_guard16355 = is_true(a8396);
if(if_guard16355)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8465);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16357 = alloc_clo(lam8584_fptr, 4);

//setting env list
clo16357[1] = _u45;
clo16357[2] = n;
clo16357[3] = drop;
clo16357[4] = kont8465;
void* f8467 = encode_clo(clo16357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8467;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8589 = arg_buffer[1];
//reading env and args
void* kont8465 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar16358 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16358, "0", 10);
void* a8395 = encode_mpz(mpzvar16358);

//creating new closure instance
void** clo16360 = alloc_clo(lam8586_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo16360[1] = drop;
clo16360[2] = lst;
clo16360[3] = kont8465;
clo16360[4] = cdr;
clo16360[5] = _u45;
clo16360[6] = n;
void* f8468 = encode_clo(clo16360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8468;
arg_buffer[3] = n;
arg_buffer[4] = a8395;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8590_fptr() // lam8590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8591 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8402 = (decode_clo(env8591))[4];
//not do dummy comment
void* kont8469 = (decode_clo(env8591))[3];
//not do dummy comment
void* fun = (decode_clo(env8591))[2];
//not do dummy comment
void* foldl = (decode_clo(env8591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8469;
arg_buffer[3] = fun;
arg_buffer[4] = a8402;
arg_buffer[5] = a8403;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void* lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8593))[5];
//not do dummy comment
void* fun = (decode_clo(env8593))[4];
//not do dummy comment
void* foldl = (decode_clo(env8593))[3];
//not do dummy comment
void* lst = (decode_clo(env8593))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8593))[1];

//creating new closure instance
void** clo16362 = alloc_clo(lam8590_fptr, 4);

//setting env list
clo16362[1] = foldl;
clo16362[2] = fun;
clo16362[3] = kont8469;
clo16362[4] = a8402;
void* f8470 = encode_clo(clo16362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8470;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void* lam8594_fptr() // lam8594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8595))[6];
//not do dummy comment
void* fun = (decode_clo(env8595))[5];
//not do dummy comment
void* acc = (decode_clo(env8595))[4];
//not do dummy comment
void* foldl = (decode_clo(env8595))[3];
//not do dummy comment
void* lst = (decode_clo(env8595))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8595))[1];

//creating new closure instance
void** clo16364 = alloc_clo(lam8592_fptr, 5);

//setting env list
clo16364[1] = kont8469;
clo16364[2] = lst;
clo16364[3] = foldl;
clo16364[4] = fun;
clo16364[5] = cdr;
void* f8471 = encode_clo(clo16364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8471;
arg_buffer[3] = a8401;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void* lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8597))[7];
//not do dummy comment
void* fun = (decode_clo(env8597))[6];
//not do dummy comment
void* acc = (decode_clo(env8597))[5];
//not do dummy comment
void* car = (decode_clo(env8597))[4];
//not do dummy comment
void* foldl = (decode_clo(env8597))[3];
//not do dummy comment
void* lst = (decode_clo(env8597))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8597))[1];

//if-clause
bool if_guard16365 = is_true(a8400);
if(if_guard16365)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8469);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16367 = alloc_clo(lam8594_fptr, 6);

//setting env list
clo16367[1] = kont8469;
clo16367[2] = lst;
clo16367[3] = foldl;
clo16367[4] = acc;
clo16367[5] = fun;
clo16367[6] = cdr;
void* f8472 = encode_clo(clo16367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8472;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8598 = arg_buffer[1];
//reading env and args
void* kont8469 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo16369 = alloc_clo(lam8596_fptr, 7);

//setting env list
clo16369[1] = kont8469;
clo16369[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo16369[3] = foldl;
clo16369[4] = car;
clo16369[5] = acc;
clo16369[6] = fun;
clo16369[7] = cdr;
void* f8473 = encode_clo(clo16369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8473;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8599_fptr() // lam8599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8600 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8405 = (decode_clo(env8600))[3];
//not do dummy comment
void* kont8474 = (decode_clo(env8600))[2];
//not do dummy comment
void* fun = (decode_clo(env8600))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8474;
arg_buffer[3] = a8405;
arg_buffer[4] = a8407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void* lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8474 = (decode_clo(env8602))[5];
//not do dummy comment
void* fun = (decode_clo(env8602))[4];
//not do dummy comment
void* acc = (decode_clo(env8602))[3];
//not do dummy comment
void* foldr = (decode_clo(env8602))[2];
//not do dummy comment
void* a8405 = (decode_clo(env8602))[1];

//creating new closure instance
void** clo16371 = alloc_clo(lam8599_fptr, 3);

//setting env list
clo16371[1] = fun;
clo16371[2] = kont8474;
clo16371[3] = a8405;
void* f8475 = encode_clo(clo16371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8475;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void* lam8603_fptr() // lam8603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8604 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8604))[6];
//not do dummy comment
void* kont8474 = (decode_clo(env8604))[5];
//not do dummy comment
void* fun = (decode_clo(env8604))[4];
//not do dummy comment
void* acc = (decode_clo(env8604))[3];
//not do dummy comment
void* foldr = (decode_clo(env8604))[2];
//not do dummy comment
void* lst = (decode_clo(env8604))[1];

//creating new closure instance
void** clo16373 = alloc_clo(lam8601_fptr, 5);

//setting env list
clo16373[1] = a8405;
clo16373[2] = foldr;
clo16373[3] = acc;
clo16373[4] = fun;
clo16373[5] = kont8474;
void* f8476 = encode_clo(clo16373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8476;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void* lam8605_fptr() // lam8605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8606 = arg_buffer[1];
//reading env and args
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8606))[7];
//not do dummy comment
void* kont8474 = (decode_clo(env8606))[6];
//not do dummy comment
void* fun = (decode_clo(env8606))[5];
//not do dummy comment
void* acc = (decode_clo(env8606))[4];
//not do dummy comment
void* car = (decode_clo(env8606))[3];
//not do dummy comment
void* foldr = (decode_clo(env8606))[2];
//not do dummy comment
void* lst = (decode_clo(env8606))[1];

//if-clause
bool if_guard16374 = is_true(a8404);
if(if_guard16374)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8474);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16376 = alloc_clo(lam8603_fptr, 6);

//setting env list
clo16376[1] = lst;
clo16376[2] = foldr;
clo16376[3] = acc;
clo16376[4] = fun;
clo16376[5] = kont8474;
clo16376[6] = cdr;
void* f8477 = encode_clo(clo16376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8477;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8607 = arg_buffer[1];
//reading env and args
void* kont8474 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo16378 = alloc_clo(lam8605_fptr, 7);

//setting env list
clo16378[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo16378[2] = foldr;
clo16378[3] = car;
clo16378[4] = acc;
clo16378[5] = fun;
clo16378[6] = kont8474;
clo16378[7] = cdr;
void* f8478 = encode_clo(clo16378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8478;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8409 = (decode_clo(env8609))[3];
//not do dummy comment
void* cons = (decode_clo(env8609))[2];
//not do dummy comment
void* kont8479 = (decode_clo(env8609))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8479;
arg_buffer[3] = a8409;
arg_buffer[4] = a8411;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void* lam8610_fptr() // lam8610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst2 = (decode_clo(env8611))[5];
//not do dummy comment
void* append = (decode_clo(env8611))[4];
//not do dummy comment
void* a8409 = (decode_clo(env8611))[3];
//not do dummy comment
void* cons = (decode_clo(env8611))[2];
//not do dummy comment
void* kont8479 = (decode_clo(env8611))[1];

//creating new closure instance
void** clo16380 = alloc_clo(lam8608_fptr, 3);

//setting env list
clo16380[1] = kont8479;
clo16380[2] = cons;
clo16380[3] = a8409;
void* f8480 = encode_clo(clo16380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8480;
arg_buffer[3] = a8410;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void* lam8612_fptr() // lam8612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8613))[6];
//not do dummy comment
void* append = (decode_clo(env8613))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8613))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8613))[3];
//not do dummy comment
void* cons = (decode_clo(env8613))[2];
//not do dummy comment
void* kont8479 = (decode_clo(env8613))[1];

//creating new closure instance
void** clo16382 = alloc_clo(lam8610_fptr, 5);

//setting env list
clo16382[1] = kont8479;
clo16382[2] = cons;
clo16382[3] = a8409;
clo16382[4] = append;
clo16382[5] = lst2;
void* f8481 = encode_clo(clo16382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8481;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void* lam8614_fptr() // lam8614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8615 = arg_buffer[1];
//reading env and args
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8615))[7];
//not do dummy comment
void* append = (decode_clo(env8615))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8615))[5];
//not do dummy comment
void* lst1 = (decode_clo(env8615))[4];
//not do dummy comment
void* car = (decode_clo(env8615))[3];
//not do dummy comment
void* cons = (decode_clo(env8615))[2];
//not do dummy comment
void* kont8479 = (decode_clo(env8615))[1];

//if-clause
bool if_guard16383 = is_true(a8408);
if(if_guard16383)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8479);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8479))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo16385 = alloc_clo(lam8612_fptr, 6);

//setting env list
clo16385[1] = kont8479;
clo16385[2] = cons;
clo16385[3] = lst1;
clo16385[4] = lst2;
clo16385[5] = append;
clo16385[6] = cdr;
void* f8482 = encode_clo(clo16385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8482;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8616 = arg_buffer[1];
//reading env and args
void* kont8479 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo16387 = alloc_clo(lam8614_fptr, 7);

//setting env list
clo16387[1] = kont8479;
clo16387[2] = cons;
clo16387[3] = car;
clo16387[4] = lst1;
clo16387[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo16387[6] = append;
clo16387[7] = cdr;
void* f8483 = encode_clo(clo16387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8483;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8617_fptr() // lam8617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8618 = arg_buffer[1];
//reading env and args
void* a8417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8484 = (decode_clo(env8618))[3];
//not do dummy comment
void* append = (decode_clo(env8618))[2];
//not do dummy comment
void* a8414 = (decode_clo(env8618))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = kont8484;
arg_buffer[3] = a8414;
arg_buffer[4] = a8417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void* lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8622))[3];
//not do dummy comment
void* kont8484 = (decode_clo(env8622))[2];
//not do dummy comment
void* append = (decode_clo(env8622))[1];
mpz_t* mpzvar16388 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16388, "3", 10);
void* a8415 = encode_mpz(mpzvar16388);
mpz_t* mpzvar16389 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16389, "4", 10);
void* a8416 = encode_mpz(mpzvar16389);

//creating new closure instance
void** clo16391 = alloc_clo(lam8617_fptr, 3);

//setting env list
clo16391[1] = a8414;
clo16391[2] = append;
clo16391[3] = kont8484;
void* f8485 = encode_clo(clo16391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8485;
arg_buffer[3] = a8415;
arg_buffer[4] = a8416;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8625 = arg_buffer[1];
//reading env and args
void* kont8484 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar16392 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16392, "1", 10);
void* a8412 = encode_mpz(mpzvar16392);
mpz_t* mpzvar16393 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar16393, "2", 10);
void* a8413 = encode_mpz(mpzvar16393);

//creating new closure instance
void** clo16395 = alloc_clo(lam8621_fptr, 3);

//setting env list
clo16395[1] = append;
clo16395[2] = kont8484;
clo16395[3] = list;
void* f8486 = encode_clo(clo16395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8486;
arg_buffer[3] = a8412;
arg_buffer[4] = a8413;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8626_fptr() // lam8626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8627 = arg_buffer[1];
//reading env and args
void* xy8418 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8487 = (decode_clo(env8627))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8487);
arg_buffer[2] = xy8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8487))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8626 = encode_clo(alloc_clo(lam8626_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8628 = arg_buffer[1];
//reading env and args
void* kont8487 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo16397 = alloc_clo(lam8626_fptr, 1);

//setting env list
clo16397[1] = kont8487;
void* f8488 = encode_clo(clo16397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
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

