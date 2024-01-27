#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
int int9139;
int int9138;
int int9140;


void _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9143 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9141 = prim_car(lst);
void* lst9144 = prim_cdr(lst);
void* x9142 = apply_prim__u43(lst9144);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9141))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9141 = arg_buffer[2];
void* x9142 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9141))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9147 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9145 = prim_car(lst);
void* lst9148 = prim_cdr(lst);
void* x9146 = apply_prim__u45(lst9148);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9145))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9145 = arg_buffer[2];
void* x9146 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9145))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr() // * 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9151 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9149 = prim_car(lst);
void* lst9152 = prim_cdr(lst);
void* x9150 = apply_prim__u42(lst9152);
arg_buffer[1] = kont9149;
arg_buffer[2] = x9150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9149))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9149 = arg_buffer[2];
void* x9150 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9149;
arg_buffer[2] = x9150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9149))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9155 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9153 = prim_car(lst);
void* lst9156 = prim_cdr(lst);
void* x9154 = apply_prim__u47(lst9156);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9153))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9153 = arg_buffer[2];
void* x9154 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9153))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9159 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9157 = prim_car(lst);
void* lst9160 = prim_cdr(lst);
void* x9158 = apply_prim__u61(lst9160);
arg_buffer[1] = kont9157;
arg_buffer[2] = x9158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9157))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9157 = arg_buffer[2];
void* x9158 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9157;
arg_buffer[2] = x9158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9157))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr() // > 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9163 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9161 = prim_car(lst);
void* lst9164 = prim_cdr(lst);
void* x9162 = apply_prim__u62(lst9164);
arg_buffer[1] = kont9161;
arg_buffer[2] = x9162;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9161))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9161 = arg_buffer[2];
void* x9162 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9161;
arg_buffer[2] = x9162;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9161))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr() // < 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9167 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9165 = prim_car(lst);
void* lst9168 = prim_cdr(lst);
void* x9166 = apply_prim__u60(lst9168);
arg_buffer[1] = kont9165;
arg_buffer[2] = x9166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9165))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9165 = arg_buffer[2];
void* x9166 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9165;
arg_buffer[2] = x9166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9165))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr() // <= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9171 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9169 = prim_car(lst);
void* lst9172 = prim_cdr(lst);
void* x9170 = apply_prim__u60_u61(lst9172);
arg_buffer[1] = kont9169;
arg_buffer[2] = x9170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9169))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9169 = arg_buffer[2];
void* x9170 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9169;
arg_buffer[2] = x9170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9169))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr() // >= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9175 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9173 = prim_car(lst);
void* lst9176 = prim_cdr(lst);
void* x9174 = apply_prim__u62_u61(lst9176);
arg_buffer[1] = kont9173;
arg_buffer[2] = x9174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9173))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9173 = arg_buffer[2];
void* x9174 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9173;
arg_buffer[2] = x9174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9173))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr() // modulo 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9179 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9177 = prim_car(lst);
void* lst9180 = prim_cdr(lst);
void* x9178 = apply_prim_modulo(lst9180);
arg_buffer[1] = kont9177;
arg_buffer[2] = x9178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9177))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9177 = arg_buffer[2];
void* x9178 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9177;
arg_buffer[2] = x9178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9177))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9183 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9181 = prim_car(lst);
void* lst9184 = prim_cdr(lst);
void* x9182 = apply_prim_null_u63(lst9184);
arg_buffer[1] = kont9181;
arg_buffer[2] = x9182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9181))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9181 = arg_buffer[2];
void* x9182 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9181;
arg_buffer[2] = x9182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9181))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr() // equal? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9187 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9185 = prim_car(lst);
void* lst9188 = prim_cdr(lst);
void* x9186 = apply_prim_equal_u63(lst9188);
arg_buffer[1] = kont9185;
arg_buffer[2] = x9186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9185))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9185 = arg_buffer[2];
void* x9186 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9185;
arg_buffer[2] = x9186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9185))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr() // eq? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9191 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9189 = prim_car(lst);
void* lst9192 = prim_cdr(lst);
void* x9190 = apply_prim_eq_u63(lst9192);
arg_buffer[1] = kont9189;
arg_buffer[2] = x9190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9189))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9189 = arg_buffer[2];
void* x9190 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9189;
arg_buffer[2] = x9190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9189))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9195 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9193 = prim_car(lst);
void* lst9196 = prim_cdr(lst);
void* x9194 = apply_prim_cons(lst9196);
arg_buffer[1] = kont9193;
arg_buffer[2] = x9194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9193))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9193 = arg_buffer[2];
void* x9194 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9193;
arg_buffer[2] = x9194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9193))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9199 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9197 = prim_car(lst);
void* lst9200 = prim_cdr(lst);
void* x9198 = apply_prim_car(lst9200);
arg_buffer[1] = kont9197;
arg_buffer[2] = x9198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9197))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9197 = arg_buffer[2];
void* x9198 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9197;
arg_buffer[2] = x9198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9197))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9203 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9201 = prim_car(lst);
void* lst9204 = prim_cdr(lst);
void* x9202 = apply_prim_cdr(lst9204);
arg_buffer[1] = kont9201;
arg_buffer[2] = x9202;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9201))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9201 = arg_buffer[2];
void* x9202 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9201;
arg_buffer[2] = x9202;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9201))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr() // float->int 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9207 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9205 = prim_car(lst);
void* lst9208 = prim_cdr(lst);
void* x9206 = apply_prim_float_u45_u62int(lst9208);
arg_buffer[1] = kont9205;
arg_buffer[2] = x9206;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9205))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9205 = arg_buffer[2];
void* x9206 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9205;
arg_buffer[2] = x9206;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9205))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9211 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9209 = prim_car(lst);
void* lst9212 = prim_cdr(lst);
void* x9210 = apply_prim_int_u45_u62float(lst9212);
arg_buffer[1] = kont9209;
arg_buffer[2] = x9210;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9209))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9209 = arg_buffer[2];
void* x9210 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9209;
arg_buffer[2] = x9210;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9209))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9215 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9213 = prim_car(lst);
void* lst9216 = prim_cdr(lst);
void* x9214 = apply_prim_hash(lst9216);
arg_buffer[1] = kont9213;
arg_buffer[2] = x9214;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9213))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9213 = arg_buffer[2];
void* x9214 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9213;
arg_buffer[2] = x9214;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9213))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr() // hash-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9219 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9217 = prim_car(lst);
void* lst9220 = prim_cdr(lst);
void* x9218 = apply_prim_hash_u45ref(lst9220);
arg_buffer[1] = kont9217;
arg_buffer[2] = x9218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9217))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9217 = arg_buffer[2];
void* x9218 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9217;
arg_buffer[2] = x9218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9217))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr() // hash-set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9223 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9221 = prim_car(lst);
void* lst9224 = prim_cdr(lst);
void* x9222 = apply_prim_hash_u45set(lst9224);
arg_buffer[1] = kont9221;
arg_buffer[2] = x9222;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9221))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9221 = arg_buffer[2];
void* x9222 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9221;
arg_buffer[2] = x9222;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9221))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr() // hash-keys 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9227 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9225 = prim_car(lst);
void* lst9228 = prim_cdr(lst);
void* x9226 = apply_prim_hash_u45keys(lst9228);
arg_buffer[1] = kont9225;
arg_buffer[2] = x9226;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9225))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9225 = arg_buffer[2];
void* x9226 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9225;
arg_buffer[2] = x9226;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9225))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9231 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9229 = prim_car(lst);
void* lst9232 = prim_cdr(lst);
void* x9230 = apply_prim_hash_u45has_u45key_u63(lst9232);
arg_buffer[1] = kont9229;
arg_buffer[2] = x9230;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9229))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9229 = arg_buffer[2];
void* x9230 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9229;
arg_buffer[2] = x9230;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9229))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr() // hash-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9235 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9233 = prim_car(lst);
void* lst9236 = prim_cdr(lst);
void* x9234 = apply_prim_hash_u45count(lst9236);
arg_buffer[1] = kont9233;
arg_buffer[2] = x9234;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9233))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9233 = arg_buffer[2];
void* x9234 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9233;
arg_buffer[2] = x9234;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9233))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9239 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9237 = prim_car(lst);
void* lst9240 = prim_cdr(lst);
void* x9238 = apply_prim_set(lst9240);
arg_buffer[1] = kont9237;
arg_buffer[2] = x9238;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9237))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9237 = arg_buffer[2];
void* x9238 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9237;
arg_buffer[2] = x9238;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9237))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr() // set->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9243 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9241 = prim_car(lst);
void* lst9244 = prim_cdr(lst);
void* x9242 = apply_prim_set_u45_u62list(lst9244);
arg_buffer[1] = kont9241;
arg_buffer[2] = x9242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9241))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9241 = arg_buffer[2];
void* x9242 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9241;
arg_buffer[2] = x9242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9241))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr() // list->set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9247 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9245 = prim_car(lst);
void* lst9248 = prim_cdr(lst);
void* x9246 = apply_prim_list_u45_u62set(lst9248);
arg_buffer[1] = kont9245;
arg_buffer[2] = x9246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9245))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9245 = arg_buffer[2];
void* x9246 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9245;
arg_buffer[2] = x9246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9245))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr() // set-add 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9251 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9249 = prim_car(lst);
void* lst9252 = prim_cdr(lst);
void* x9250 = apply_prim_set_u45add(lst9252);
arg_buffer[1] = kont9249;
arg_buffer[2] = x9250;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9249))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9249 = arg_buffer[2];
void* x9250 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9249;
arg_buffer[2] = x9250;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9249))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr() // set-member? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9255 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9253 = prim_car(lst);
void* lst9256 = prim_cdr(lst);
void* x9254 = apply_prim_set_u45member_u63(lst9256);
arg_buffer[1] = kont9253;
arg_buffer[2] = x9254;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9253))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9253 = arg_buffer[2];
void* x9254 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9253;
arg_buffer[2] = x9254;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9253))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr() // set-remove 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9259 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9257 = prim_car(lst);
void* lst9260 = prim_cdr(lst);
void* x9258 = apply_prim_set_u45remove(lst9260);
arg_buffer[1] = kont9257;
arg_buffer[2] = x9258;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9257))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9257 = arg_buffer[2];
void* x9258 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9257;
arg_buffer[2] = x9258;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9257))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr() // set-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9263 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9261 = prim_car(lst);
void* lst9264 = prim_cdr(lst);
void* x9262 = apply_prim_set_u45count(lst9264);
arg_buffer[1] = kont9261;
arg_buffer[2] = x9262;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9261))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9261 = arg_buffer[2];
void* x9262 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9261;
arg_buffer[2] = x9262;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9261))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9267 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9265 = prim_car(lst);
void* lst9268 = prim_cdr(lst);
void* x9266 = apply_prim_string_u63(lst9268);
arg_buffer[1] = kont9265;
arg_buffer[2] = x9266;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9265))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9265 = arg_buffer[2];
void* x9266 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9265;
arg_buffer[2] = x9266;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9265))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr() // string-length 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9271 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9269 = prim_car(lst);
void* lst9272 = prim_cdr(lst);
void* x9270 = apply_prim_string_u45length(lst9272);
arg_buffer[1] = kont9269;
arg_buffer[2] = x9270;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9269))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9269 = arg_buffer[2];
void* x9270 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9269;
arg_buffer[2] = x9270;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9269))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr() // string-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9275 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9273 = prim_car(lst);
void* lst9276 = prim_cdr(lst);
void* x9274 = apply_prim_string_u45ref(lst9276);
arg_buffer[1] = kont9273;
arg_buffer[2] = x9274;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9273))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9273 = arg_buffer[2];
void* x9274 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9273;
arg_buffer[2] = x9274;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9273))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr() // substring 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9279 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9277 = prim_car(lst);
void* lst9280 = prim_cdr(lst);
void* x9278 = apply_prim_substring(lst9280);
arg_buffer[1] = kont9277;
arg_buffer[2] = x9278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9277 = arg_buffer[2];
void* x9278 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9277;
arg_buffer[2] = x9278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr() // string-append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9283 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9281 = prim_car(lst);
void* lst9284 = prim_cdr(lst);
void* x9282 = apply_prim_string_u45append(lst9284);
arg_buffer[1] = kont9281;
arg_buffer[2] = x9282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9281))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9281 = arg_buffer[2];
void* x9282 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9281;
arg_buffer[2] = x9282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9281))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr() // string->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9287 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9285 = prim_car(lst);
void* lst9288 = prim_cdr(lst);
void* x9286 = apply_prim_string_u45_u62list(lst9288);
arg_buffer[1] = kont9285;
arg_buffer[2] = x9286;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9285))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9285 = arg_buffer[2];
void* x9286 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9285;
arg_buffer[2] = x9286;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9285))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9291 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9289 = prim_car(lst);
void* lst9292 = prim_cdr(lst);
void* x9290 = apply_prim_exact_u45floor(lst9292);
arg_buffer[1] = kont9289;
arg_buffer[2] = x9290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9289))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9289 = arg_buffer[2];
void* x9290 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9289;
arg_buffer[2] = x9290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9289))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr() // exact-ceiling 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9295 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9293 = prim_car(lst);
void* lst9296 = prim_cdr(lst);
void* x9294 = apply_prim_exact_u45ceiling(lst9296);
arg_buffer[1] = kont9293;
arg_buffer[2] = x9294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9293))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9293 = arg_buffer[2];
void* x9294 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9293;
arg_buffer[2] = x9294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9293))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr() // exact-round 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9299 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9297 = prim_car(lst);
void* lst9300 = prim_cdr(lst);
void* x9298 = apply_prim_exact_u45round(lst9300);
arg_buffer[1] = kont9297;
arg_buffer[2] = x9298;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9297))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9297 = arg_buffer[2];
void* x9298 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9297;
arg_buffer[2] = x9298;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9297))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr() // abs 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9303 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9301 = prim_car(lst);
void* lst9304 = prim_cdr(lst);
void* x9302 = apply_prim_abs(lst9304);
arg_buffer[1] = kont9301;
arg_buffer[2] = x9302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9301))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9301 = arg_buffer[2];
void* x9302 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9301;
arg_buffer[2] = x9302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9301))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9307 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9305 = prim_car(lst);
void* lst9308 = prim_cdr(lst);
void* x9306 = apply_prim_max(lst9308);
arg_buffer[1] = kont9305;
arg_buffer[2] = x9306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9305))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9305 = arg_buffer[2];
void* x9306 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9305;
arg_buffer[2] = x9306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9305))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr() // min 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9311 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9309 = prim_car(lst);
void* lst9312 = prim_cdr(lst);
void* x9310 = apply_prim_min(lst9312);
arg_buffer[1] = kont9309;
arg_buffer[2] = x9310;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9309))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9309 = arg_buffer[2];
void* x9310 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9309;
arg_buffer[2] = x9310;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9309))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr() // expt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9315 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9313 = prim_car(lst);
void* lst9316 = prim_cdr(lst);
void* x9314 = apply_prim_expt(lst9316);
arg_buffer[1] = kont9313;
arg_buffer[2] = x9314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9313))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9313 = arg_buffer[2];
void* x9314 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9313;
arg_buffer[2] = x9314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9313))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr() // sqrt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9319 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9317 = prim_car(lst);
void* lst9320 = prim_cdr(lst);
void* x9318 = apply_prim_sqrt(lst9320);
arg_buffer[1] = kont9317;
arg_buffer[2] = x9318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9317))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9317 = arg_buffer[2];
void* x9318 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9317;
arg_buffer[2] = x9318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9317))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr() // remainder 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9323 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9321 = prim_car(lst);
void* lst9324 = prim_cdr(lst);
void* x9322 = apply_prim_remainder(lst9324);
arg_buffer[1] = kont9321;
arg_buffer[2] = x9322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9321))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9321 = arg_buffer[2];
void* x9322 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9321;
arg_buffer[2] = x9322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9321))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9327 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9325 = prim_car(lst);
void* lst9328 = prim_cdr(lst);
void* x9326 = apply_prim_quotient(lst9328);
arg_buffer[1] = kont9325;
arg_buffer[2] = x9326;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9325))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9325 = arg_buffer[2];
void* x9326 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9325;
arg_buffer[2] = x9326;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9325))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr() // random 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9331 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9329 = prim_car(lst);
void* lst9332 = prim_cdr(lst);
void* x9330 = apply_prim_random(lst9332);
arg_buffer[1] = kont9329;
arg_buffer[2] = x9330;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9329))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9329 = arg_buffer[2];
void* x9330 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9329;
arg_buffer[2] = x9330;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9329))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9335 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9333 = prim_car(lst);
void* lst9336 = prim_cdr(lst);
void* x9334 = apply_prim_symbol_u63(lst9336);
arg_buffer[1] = kont9333;
arg_buffer[2] = x9334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9333))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9333 = arg_buffer[2];
void* x9334 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9333;
arg_buffer[2] = x9334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9333))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr() // pair? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9339 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9337 = prim_car(lst);
void* lst9340 = prim_cdr(lst);
void* x9338 = apply_prim_pair_u63(lst9340);
arg_buffer[1] = kont9337;
arg_buffer[2] = x9338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9337))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9337 = arg_buffer[2];
void* x9338 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9337;
arg_buffer[2] = x9338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9337))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr() // positive? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9343 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9341 = prim_car(lst);
void* lst9344 = prim_cdr(lst);
void* x9342 = apply_prim_positive_u63(lst9344);
arg_buffer[1] = kont9341;
arg_buffer[2] = x9342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9341))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9341 = arg_buffer[2];
void* x9342 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9341;
arg_buffer[2] = x9342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9341))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env9347 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont9345 = prim_car(lst);
void* lst9348 = prim_cdr(lst);
void* x9346 = apply_prim_negative_u63(lst9348);
arg_buffer[1] = kont9345;
arg_buffer[2] = x9346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9345))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont9345 = arg_buffer[2];
void* x9346 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9345;
arg_buffer[2] = x9346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9345))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8907 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* x = nullptr;
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

void* kont8792 = prim_car(x);
void* x8905 = prim_cdr(x);

//clo-app
arg_buffer[1] = kont8792;
arg_buffer[2] = x8905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8792))[0]);
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8908_fptr() // lam8908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8909 = arg_buffer[1];
//reading env and args
void* xy8686 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8909);
void* f8797 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8797;
arg_buffer[2] = xy8686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8797))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8908 = encode_clo(alloc_clo(lam8908_fptr, 0));

void lam8910_fptr() // lam8910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8911 = arg_buffer[1];
//reading env and args
void* xy8687 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8911);
void* f8797 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8797;
arg_buffer[2] = xy8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8797))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8910 = encode_clo(alloc_clo(lam8910_fptr, 0));

void lam8913_fptr() // lam8913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8914 = arg_buffer[1];
//reading env and args
void* a8692 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8914);
void* member = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8793 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8793;
arg_buffer[3] = item;
arg_buffer[4] = a8692;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8913 = encode_clo(alloc_clo(lam8913_fptr, 0));

void lam8915_fptr() // lam8915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8916 = arg_buffer[1];
//reading env and args
void* a8691 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8916);
void* cdr = decode_clo_array[5];
void* member = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8793 = decode_clo_array[1];

//if-clause
bool if_guard9349 = is_true(a8691);
if(if_guard9349)
{

//clo-app
arg_buffer[1] = kont8793;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8793))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9350 = alloc_clo(lam8913_fptr, 3);

//setting env list
clo9350[1] = kont8793;
clo9350[2] = item;
clo9350[3] = member;
void* f8794 = encode_clo(clo9350);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8794))[0]);
function_ptr();
}

}

void* lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void lam8917_fptr() // lam8917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8918 = arg_buffer[1];
//reading env and args
void* a8690 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);
void* cdr = decode_clo_array[6];
void* member = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* item = decode_clo_array[3];
void* kont8793 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9351 = alloc_clo(lam8915_fptr, 5);

//setting env list
clo9351[1] = kont8793;
clo9351[2] = item;
clo9351[3] = lst;
clo9351[4] = member;
clo9351[5] = cdr;
void* f8795 = encode_clo(clo9351);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(item, a8690);
arg_buffer[1] = f8795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8795))[0]);
function_ptr();
}

void* lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void lam8919_fptr() // lam8919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8920 = arg_buffer[1];
//reading env and args
void* a8688 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8920);
void* cdr = decode_clo_array[7];
void* member = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* item = decode_clo_array[4];
void* car = decode_clo_array[3];
void* kont8793 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//if-clause
bool if_guard9352 = is_true(a8688);
if(if_guard9352)
{
void* xy8689 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8793;
arg_buffer[2] = xy8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8793))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9353 = alloc_clo(lam8917_fptr, 6);

//setting env list
clo9353[1] = equal_u63;
clo9353[2] = kont8793;
clo9353[3] = item;
clo9353[4] = lst;
clo9353[5] = member;
clo9353[6] = cdr;
void* f8796 = encode_clo(clo9353);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8796))[0]);
function_ptr();
}

}

void* lam8919 = encode_clo(alloc_clo(lam8919_fptr, 0));

void lam8921_fptr() // lam8921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8922 = arg_buffer[1];
//reading env and args
void* a8685 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8922);
void* cdr = decode_clo_array[8];
void* member = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* null_u63 = decode_clo_array[5];
void* item = decode_clo_array[4];
void* car = decode_clo_array[3];
void* kont8793 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9354 = alloc_clo(lam8919_fptr, 7);

//setting env list
clo9354[1] = equal_u63;
clo9354[2] = kont8793;
clo9354[3] = car;
clo9354[4] = item;
clo9354[5] = lst;
clo9354[6] = member;
clo9354[7] = cdr;
void* f8797 = encode_clo(clo9354);



//if-clause
bool if_guard9355 = is_true(a8685);
if(if_guard9355)
{

//creating new closure instance
void** clo9356 = alloc_clo(lam8908_fptr, 1);

//setting env list
clo9356[1] = f8797;
void* f8798 = encode_clo(clo9356);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(item);
arg_buffer[1] = f8798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8798))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo9357 = alloc_clo(lam8910_fptr, 1);

//setting env list
clo9357[1] = f8797;
void* f8799 = encode_clo(clo9357);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8799))[0]);
function_ptr();
}

}

void* lam8921 = encode_clo(alloc_clo(lam8921_fptr, 0));

void member_fptr() // member 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8923 = arg_buffer[1];
//reading env and args
void* kont8793 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9358 = alloc_clo(lam8921_fptr, 8);

//setting env list
clo9358[1] = equal_u63;
clo9358[2] = kont8793;
clo9358[3] = car;
clo9358[4] = item;
clo9358[5] = null_u63;
clo9358[6] = lst;
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo9358[7] = member;
clo9358[8] = cdr;
void* f8800 = encode_clo(clo9358);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(item);
arg_buffer[1] = f8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8800))[0]);
function_ptr();
}

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8926_fptr() // lam8926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8927 = arg_buffer[1];
//reading env and args
void* a8698 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);
void* kont8801 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8801;
arg_buffer[3] = x;
arg_buffer[4] = a8698;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void lam8928_fptr() // lam8928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8929 = arg_buffer[1];
//reading env and args
void* a8696 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8929);
void* lst = decode_clo_array[5];
void* x = decode_clo_array[4];
void* member_u63 = decode_clo_array[3];
void* cdr = decode_clo_array[2];
void* kont8801 = decode_clo_array[1];

//if-clause
bool if_guard9359 = is_true(a8696);
if(if_guard9359)
{
void* xy8697 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8801;
arg_buffer[2] = xy8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8801))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9360 = alloc_clo(lam8926_fptr, 3);

//setting env list
clo9360[1] = member_u63;
clo9360[2] = x;
clo9360[3] = kont8801;
void* f8802 = encode_clo(clo9360);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8802))[0]);
function_ptr();
}

}

void* lam8928 = encode_clo(alloc_clo(lam8928_fptr, 0));

void lam8930_fptr() // lam8930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8931 = arg_buffer[1];
//reading env and args
void* a8695 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8931);
void* lst = decode_clo_array[6];
void* equal_u63 = decode_clo_array[5];
void* x = decode_clo_array[4];
void* member_u63 = decode_clo_array[3];
void* cdr = decode_clo_array[2];
void* kont8801 = decode_clo_array[1];

//creating new closure instance
void** clo9361 = alloc_clo(lam8928_fptr, 5);

//setting env list
clo9361[1] = kont8801;
clo9361[2] = cdr;
clo9361[3] = member_u63;
clo9361[4] = x;
clo9361[5] = lst;
void* f8803 = encode_clo(clo9361);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8695, x);
arg_buffer[1] = f8803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8803))[0]);
function_ptr();
}

void* lam8930 = encode_clo(alloc_clo(lam8930_fptr, 0));

void lam8932_fptr() // lam8932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8933 = arg_buffer[1];
//reading env and args
void* a8693 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8933);
void* lst = decode_clo_array[7];
void* equal_u63 = decode_clo_array[6];
void* x = decode_clo_array[5];
void* car = decode_clo_array[4];
void* member_u63 = decode_clo_array[3];
void* cdr = decode_clo_array[2];
void* kont8801 = decode_clo_array[1];

//if-clause
bool if_guard9362 = is_true(a8693);
if(if_guard9362)
{
void* xy8694 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8801;
arg_buffer[2] = xy8694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8801))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9363 = alloc_clo(lam8930_fptr, 6);

//setting env list
clo9363[1] = kont8801;
clo9363[2] = cdr;
clo9363[3] = member_u63;
clo9363[4] = x;
clo9363[5] = equal_u63;
clo9363[6] = lst;
void* f8804 = encode_clo(clo9363);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8804))[0]);
function_ptr();
}

}

void* lam8932 = encode_clo(alloc_clo(lam8932_fptr, 0));

void member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8934 = arg_buffer[1];
//reading env and args
void* kont8801 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9364 = alloc_clo(lam8932_fptr, 7);

//setting env list
clo9364[1] = kont8801;
clo9364[2] = cdr;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo9364[3] = member_u63;
clo9364[4] = car;
clo9364[5] = x;
clo9364[6] = equal_u63;
clo9364[7] = lst;
void* f8805 = encode_clo(clo9364);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8805))[0]);
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8935_fptr() // lam8935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8936 = arg_buffer[1];
//reading env and args
void* xy8700 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);
void* kont8806 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8806;
arg_buffer[2] = xy8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void lam8937_fptr() // lam8937 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8938 = arg_buffer[1];
//reading env and args
void* a8704 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8938);
void* kont8806 = decode_clo_array[3];
void* a8702 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8702, a8704);
arg_buffer[1] = kont8806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);
function_ptr();
}

void* lam8937 = encode_clo(alloc_clo(lam8937_fptr, 0));

void lam8939_fptr() // lam8939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8940 = arg_buffer[1];
//reading env and args
void* a8703 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8940);
void* proc = decode_clo_array[5];
void* a8702 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* map = decode_clo_array[2];
void* kont8806 = decode_clo_array[1];

//creating new closure instance
void** clo9365 = alloc_clo(lam8937_fptr, 3);

//setting env list
clo9365[1] = cons;
clo9365[2] = a8702;
clo9365[3] = kont8806;
void* f8808 = encode_clo(clo9365);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8808;
arg_buffer[3] = proc;
arg_buffer[4] = a8703;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8939 = encode_clo(alloc_clo(lam8939_fptr, 0));

void lam8941_fptr() // lam8941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8942 = arg_buffer[1];
//reading env and args
void* a8702 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8942);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* proc = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* map = decode_clo_array[2];
void* kont8806 = decode_clo_array[1];

//creating new closure instance
void** clo9366 = alloc_clo(lam8939_fptr, 5);

//setting env list
clo9366[1] = kont8806;
clo9366[2] = map;
clo9366[3] = cons;
clo9366[4] = a8702;
clo9366[5] = proc;
void* f8809 = encode_clo(clo9366);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8809))[0]);
function_ptr();
}

void* lam8941 = encode_clo(alloc_clo(lam8941_fptr, 0));

void lam8943_fptr() // lam8943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8944 = arg_buffer[1];
//reading env and args
void* a8701 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8944);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* proc = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* map = decode_clo_array[2];
void* kont8806 = decode_clo_array[1];

//creating new closure instance
void** clo9367 = alloc_clo(lam8941_fptr, 6);

//setting env list
clo9367[1] = kont8806;
clo9367[2] = map;
clo9367[3] = cons;
clo9367[4] = proc;
clo9367[5] = lst;
clo9367[6] = cdr;
void* f8810 = encode_clo(clo9367);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8810;
arg_buffer[3] = a8701;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8943 = encode_clo(alloc_clo(lam8943_fptr, 0));

void lam8945_fptr() // lam8945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8946 = arg_buffer[1];
//reading env and args
void* a8699 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8946);
void* lst = decode_clo_array[8];
void* proc = decode_clo_array[7];
void* car = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* map = decode_clo_array[2];
void* kont8806 = decode_clo_array[1];

//if-clause
bool if_guard9368 = is_true(a8699);
if(if_guard9368)
{

//creating new closure instance
void** clo9369 = alloc_clo(lam8935_fptr, 1);

//setting env list
clo9369[1] = kont8806;
void* f8807 = encode_clo(clo9369);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9370 = alloc_clo(lam8943_fptr, 6);

//setting env list
clo9370[1] = kont8806;
clo9370[2] = map;
clo9370[3] = cons;
clo9370[4] = proc;
clo9370[5] = lst;
clo9370[6] = cdr;
void* f8811 = encode_clo(clo9370);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8811))[0]);
function_ptr();
}

}

void* lam8945 = encode_clo(alloc_clo(lam8945_fptr, 0));

void map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8947 = arg_buffer[1];
//reading env and args
void* kont8806 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9371 = alloc_clo(lam8945_fptr, 8);

//setting env list
clo9371[1] = kont8806;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo9371[2] = map;
clo9371[3] = cdr;
clo9371[4] = list;
clo9371[5] = cons;
clo9371[6] = car;
clo9371[7] = proc;
clo9371[8] = lst;
void* f8812 = encode_clo(clo9371);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8812))[0]);
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8948_fptr() // lam8948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8949 = arg_buffer[1];
//reading env and args
void* xy8706 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8949);
void* kont8813 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8813;
arg_buffer[2] = xy8706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8813))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8948 = encode_clo(alloc_clo(lam8948_fptr, 0));

void lam8950_fptr() // lam8950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8951 = arg_buffer[1];
//reading env and args
void* a8711 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8951);
void* a8709 = decode_clo_array[3];
void* kont8813 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8709, a8711);
arg_buffer[1] = kont8813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8813))[0]);
function_ptr();
}

void* lam8950 = encode_clo(alloc_clo(lam8950_fptr, 0));

void lam8952_fptr() // lam8952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8953 = arg_buffer[1];
//reading env and args
void* a8710 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);
void* a8709 = decode_clo_array[5];
void* op = decode_clo_array[4];
void* kont8813 = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo9372 = alloc_clo(lam8950_fptr, 3);

//setting env list
clo9372[1] = cons;
clo9372[2] = kont8813;
clo9372[3] = a8709;
void* f8815 = encode_clo(clo9372);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8815;
arg_buffer[3] = op;
arg_buffer[4] = a8710;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void lam8954_fptr() // lam8954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8955 = arg_buffer[1];
//reading env and args
void* a8709 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8955);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* op = decode_clo_array[4];
void* kont8813 = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo9373 = alloc_clo(lam8952_fptr, 5);

//setting env list
clo9373[1] = cons;
clo9373[2] = filter;
clo9373[3] = kont8813;
clo9373[4] = op;
clo9373[5] = a8709;
void* f8816 = encode_clo(clo9373);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8816))[0]);
function_ptr();
}

void* lam8954 = encode_clo(alloc_clo(lam8954_fptr, 0));

void lam8956_fptr() // lam8956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8957 = arg_buffer[1];
//reading env and args
void* a8712 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8957);
void* op = decode_clo_array[3];
void* kont8813 = decode_clo_array[2];
void* filter = decode_clo_array[1];

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8813;
arg_buffer[3] = op;
arg_buffer[4] = a8712;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8956 = encode_clo(alloc_clo(lam8956_fptr, 0));

void lam8958_fptr() // lam8958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8959 = arg_buffer[1];
//reading env and args
void* a8708 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8959);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* op = decode_clo_array[5];
void* kont8813 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard9374 = is_true(a8708);
if(if_guard9374)
{

//creating new closure instance
void** clo9375 = alloc_clo(lam8954_fptr, 6);

//setting env list
clo9375[1] = cons;
clo9375[2] = filter;
clo9375[3] = kont8813;
clo9375[4] = op;
clo9375[5] = lst;
clo9375[6] = cdr;
void* f8817 = encode_clo(clo9375);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8817))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo9376 = alloc_clo(lam8956_fptr, 3);

//setting env list
clo9376[1] = filter;
clo9376[2] = kont8813;
clo9376[3] = op;
void* f8818 = encode_clo(clo9376);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8818))[0]);
function_ptr();
}

}

void* lam8958 = encode_clo(alloc_clo(lam8958_fptr, 0));

void lam8960_fptr() // lam8960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8961 = arg_buffer[1];
//reading env and args
void* a8707 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8961);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* op = decode_clo_array[5];
void* kont8813 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo9377 = alloc_clo(lam8958_fptr, 7);

//setting env list
clo9377[1] = car;
clo9377[2] = filter;
clo9377[3] = cons;
clo9377[4] = kont8813;
clo9377[5] = op;
clo9377[6] = lst;
clo9377[7] = cdr;
void* f8819 = encode_clo(clo9377);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8819;
arg_buffer[3] = a8707;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8960 = encode_clo(alloc_clo(lam8960_fptr, 0));

void lam8962_fptr() // lam8962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8963 = arg_buffer[1];
//reading env and args
void* a8705 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);
void* lst = decode_clo_array[8];
void* op = decode_clo_array[7];
void* kont8813 = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard9378 = is_true(a8705);
if(if_guard9378)
{

//creating new closure instance
void** clo9379 = alloc_clo(lam8948_fptr, 1);

//setting env list
clo9379[1] = kont8813;
void* f8814 = encode_clo(clo9379);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9380 = alloc_clo(lam8960_fptr, 7);

//setting env list
clo9380[1] = car;
clo9380[2] = filter;
clo9380[3] = cons;
clo9380[4] = kont8813;
clo9380[5] = op;
clo9380[6] = lst;
clo9380[7] = cdr;
void* f8820 = encode_clo(clo9380);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8820))[0]);
function_ptr();
}

}

void* lam8962 = encode_clo(alloc_clo(lam8962_fptr, 0));

void filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8964 = arg_buffer[1];
//reading env and args
void* kont8813 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9381 = alloc_clo(lam8962_fptr, 8);

//setting env list
clo9381[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo9381[2] = filter;
clo9381[3] = cdr;
clo9381[4] = list;
clo9381[5] = cons;
clo9381[6] = kont8813;
clo9381[7] = op;
clo9381[8] = lst;
void* f8821 = encode_clo(clo9381);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8821))[0]);
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8965_fptr() // lam8965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8966 = arg_buffer[1];
//reading env and args
void* a8716 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8966);
void* kont8822 = decode_clo_array[4];
void* foldl = decode_clo_array[3];
void* a8715 = decode_clo_array[2];
void* fun = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8822;
arg_buffer[3] = fun;
arg_buffer[4] = a8715;
arg_buffer[5] = a8716;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8965 = encode_clo(alloc_clo(lam8965_fptr, 0));

void lam8967_fptr() // lam8967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8968 = arg_buffer[1];
//reading env and args
void* a8715 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8968);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* kont8822 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo9382 = alloc_clo(lam8965_fptr, 4);

//setting env list
clo9382[1] = fun;
clo9382[2] = a8715;
clo9382[3] = foldl;
clo9382[4] = kont8822;
void* f8823 = encode_clo(clo9382);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8823))[0]);
function_ptr();
}

void* lam8967 = encode_clo(alloc_clo(lam8967_fptr, 0));

void lam8969_fptr() // lam8969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8970 = arg_buffer[1];
//reading env and args
void* a8714 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* kont8822 = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* acc = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo9383 = alloc_clo(lam8967_fptr, 5);

//setting env list
clo9383[1] = foldl;
clo9383[2] = fun;
clo9383[3] = kont8822;
clo9383[4] = lst;
clo9383[5] = cdr;
void* f8824 = encode_clo(clo9383);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8824;
arg_buffer[3] = a8714;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void lam8971_fptr() // lam8971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8972 = arg_buffer[1];
//reading env and args
void* a8713 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8822 = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* car = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//if-clause
bool if_guard9384 = is_true(a8713);
if(if_guard9384)
{

//clo-app
arg_buffer[1] = kont8822;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8822))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9385 = alloc_clo(lam8969_fptr, 6);

//setting env list
clo9385[1] = foldl;
clo9385[2] = acc;
clo9385[3] = fun;
clo9385[4] = kont8822;
clo9385[5] = lst;
clo9385[6] = cdr;
void* f8825 = encode_clo(clo9385);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8825))[0]);
function_ptr();
}

}

void* lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8973 = arg_buffer[1];
//reading env and args
void* kont8822 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9386 = alloc_clo(lam8971_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo9386[1] = foldl;
clo9386[2] = car;
clo9386[3] = acc;
clo9386[4] = fun;
clo9386[5] = kont8822;
clo9386[6] = lst;
clo9386[7] = cdr;
void* f8826 = encode_clo(clo9386);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8826))[0]);
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8974_fptr() // lam8974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8975 = arg_buffer[1];
//reading env and args
void* a8720 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);
void* a8718 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* kont8827 = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8827;
arg_buffer[3] = a8718;
arg_buffer[4] = a8720;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void lam8976_fptr() // lam8976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8977 = arg_buffer[1];
//reading env and args
void* a8719 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);
void* foldr = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* a8718 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* kont8827 = decode_clo_array[1];

//creating new closure instance
void** clo9387 = alloc_clo(lam8974_fptr, 3);

//setting env list
clo9387[1] = kont8827;
clo9387[2] = fun;
clo9387[3] = a8718;
void* f8828 = encode_clo(clo9387);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8828;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8719;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8976 = encode_clo(alloc_clo(lam8976_fptr, 0));

void lam8978_fptr() // lam8978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8979 = arg_buffer[1];
//reading env and args
void* a8718 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);
void* cdr = decode_clo_array[6];
void* acc = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* kont8827 = decode_clo_array[1];

//creating new closure instance
void** clo9388 = alloc_clo(lam8976_fptr, 5);

//setting env list
clo9388[1] = kont8827;
clo9388[2] = fun;
clo9388[3] = a8718;
clo9388[4] = acc;
clo9388[5] = foldr;
void* f8829 = encode_clo(clo9388);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8829))[0]);
function_ptr();
}

void* lam8978 = encode_clo(alloc_clo(lam8978_fptr, 0));

void lam8980_fptr() // lam8980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8981 = arg_buffer[1];
//reading env and args
void* a8717 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);
void* cdr = decode_clo_array[7];
void* acc = decode_clo_array[6];
void* car = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* kont8827 = decode_clo_array[1];

//if-clause
bool if_guard9389 = is_true(a8717);
if(if_guard9389)
{

//clo-app
arg_buffer[1] = kont8827;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8827))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9390 = alloc_clo(lam8978_fptr, 6);

//setting env list
clo9390[1] = kont8827;
clo9390[2] = fun;
clo9390[3] = lst;
clo9390[4] = foldr;
clo9390[5] = acc;
clo9390[6] = cdr;
void* f8830 = encode_clo(clo9390);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8830))[0]);
function_ptr();
}

}

void* lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8982 = arg_buffer[1];
//reading env and args
void* kont8827 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9391 = alloc_clo(lam8980_fptr, 7);

//setting env list
clo9391[1] = kont8827;
clo9391[2] = fun;
clo9391[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo9391[4] = foldr;
clo9391[5] = car;
clo9391[6] = acc;
clo9391[7] = cdr;
void* f8831 = encode_clo(clo9391);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8831))[0]);
function_ptr();
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8983_fptr() // lam8983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8984 = arg_buffer[1];
//reading env and args
void* a8724 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);
void* a8722 = decode_clo_array[3];
void* reverse_u45helper = decode_clo_array[2];
void* kont8832 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8832;
arg_buffer[3] = a8722;
arg_buffer[4] = a8724;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8983 = encode_clo(alloc_clo(lam8983_fptr, 0));

void lam8985_fptr() // lam8985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8986 = arg_buffer[1];
//reading env and args
void* a8723 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8986);
void* a8722 = decode_clo_array[5];
void* reverse_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8832 = decode_clo_array[1];

//creating new closure instance
void** clo9392 = alloc_clo(lam8983_fptr, 3);

//setting env list
clo9392[1] = kont8832;
clo9392[2] = reverse_u45helper;
clo9392[3] = a8722;
void* f8833 = encode_clo(clo9392);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8723, lst2);
arg_buffer[1] = f8833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8833))[0]);
function_ptr();
}

void* lam8985 = encode_clo(alloc_clo(lam8985_fptr, 0));

void lam8987_fptr() // lam8987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8988 = arg_buffer[1];
//reading env and args
void* a8722 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8988);
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* lst2 = decode_clo_array[4];
void* car = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8832 = decode_clo_array[1];

//creating new closure instance
void** clo9393 = alloc_clo(lam8985_fptr, 5);

//setting env list
clo9393[1] = kont8832;
clo9393[2] = cons;
clo9393[3] = lst2;
clo9393[4] = reverse_u45helper;
clo9393[5] = a8722;
void* f8834 = encode_clo(clo9393);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8834;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8834))[0]);
function_ptr();
}

void* lam8987 = encode_clo(alloc_clo(lam8987_fptr, 0));

void lam8989_fptr() // lam8989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8990 = arg_buffer[1];
//reading env and args
void* a8721 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8990);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* lst2 = decode_clo_array[4];
void* car = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8832 = decode_clo_array[1];

//if-clause
bool if_guard9394 = is_true(a8721);
if(if_guard9394)
{

//clo-app
arg_buffer[1] = kont8832;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8832))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9395 = alloc_clo(lam8987_fptr, 6);

//setting env list
clo9395[1] = kont8832;
clo9395[2] = cons;
clo9395[3] = car;
clo9395[4] = lst2;
clo9395[5] = reverse_u45helper;
clo9395[6] = lst;
void* f8835 = encode_clo(clo9395);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8835))[0]);
function_ptr();
}

}

void* lam8989 = encode_clo(alloc_clo(lam8989_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8991 = arg_buffer[1];
//reading env and args
void* kont8832 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9396 = alloc_clo(lam8989_fptr, 7);

//setting env list
clo9396[1] = kont8832;
clo9396[2] = cons;
clo9396[3] = car;
clo9396[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo9396[5] = reverse_u45helper;
clo9396[6] = lst;
clo9396[7] = cdr;
void* f8836 = encode_clo(clo9396);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8836))[0]);
function_ptr();
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8992_fptr() // lam8992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8993 = arg_buffer[1];
//reading env and args
void* a8725 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8993);
void* reverse_u45helper = decode_clo_array[3];
void* kont8837 = decode_clo_array[2];
void* lst = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8837;
arg_buffer[3] = lst;
arg_buffer[4] = a8725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8992 = encode_clo(alloc_clo(lam8992_fptr, 0));

void reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8994 = arg_buffer[1];
//reading env and args
void* kont8837 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9397 = alloc_clo(lam8992_fptr, 3);

//setting env list
clo9397[1] = lst;
clo9397[2] = kont8837;
clo9397[3] = reverse_u45helper;
void* f8838 = encode_clo(clo9397);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8838;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8995_fptr() // lam8995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8996 = arg_buffer[1];
//reading env and args
void* a8729 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);
void* cons = decode_clo_array[3];
void* kont8839 = decode_clo_array[2];
void* a8727 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8727, a8729);
arg_buffer[1] = kont8839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8839))[0]);
function_ptr();
}

void* lam8995 = encode_clo(alloc_clo(lam8995_fptr, 0));

void lam8997_fptr() // lam8997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8998 = arg_buffer[1];
//reading env and args
void* a8728 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8998);
void* append1 = decode_clo_array[5];
void* rhs = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* kont8839 = decode_clo_array[2];
void* a8727 = decode_clo_array[1];

//creating new closure instance
void** clo9398 = alloc_clo(lam8995_fptr, 3);

//setting env list
clo9398[1] = a8727;
clo9398[2] = kont8839;
clo9398[3] = cons;
void* f8840 = encode_clo(clo9398);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8840;
arg_buffer[3] = a8728;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8997 = encode_clo(alloc_clo(lam8997_fptr, 0));

void lam8999_fptr() // lam8999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9000 = arg_buffer[1];
//reading env and args
void* a8727 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);
void* cdr = decode_clo_array[6];
void* lhs = decode_clo_array[5];
void* kont8839 = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo9399 = alloc_clo(lam8997_fptr, 5);

//setting env list
clo9399[1] = a8727;
clo9399[2] = kont8839;
clo9399[3] = cons;
clo9399[4] = rhs;
clo9399[5] = append1;
void* f8841 = encode_clo(clo9399);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lhs);
arg_buffer[1] = f8841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8841))[0]);
function_ptr();
}

void* lam8999 = encode_clo(alloc_clo(lam8999_fptr, 0));

void lam9001_fptr() // lam9001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9002 = arg_buffer[1];
//reading env and args
void* a8726 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9002);
void* cdr = decode_clo_array[7];
void* lhs = decode_clo_array[6];
void* kont8839 = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard9400 = is_true(a8726);
if(if_guard9400)
{

//clo-app
arg_buffer[1] = kont8839;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8839))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9401 = alloc_clo(lam8999_fptr, 6);

//setting env list
clo9401[1] = cons;
clo9401[2] = rhs;
clo9401[3] = append1;
clo9401[4] = kont8839;
clo9401[5] = lhs;
clo9401[6] = cdr;
void* f8842 = encode_clo(clo9401);



//clo-app
arg_buffer[2]=apply_prim_car_1(lhs);
arg_buffer[1] = f8842;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8842))[0]);
function_ptr();
}

}

void* lam9001 = encode_clo(alloc_clo(lam9001_fptr, 0));

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9003 = arg_buffer[1];
//reading env and args
void* kont8839 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9402 = alloc_clo(lam9001_fptr, 7);

//setting env list
clo9402[1] = car;
clo9402[2] = rhs;
clo9402[3] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo9402[4] = append1;
clo9402[5] = kont8839;
clo9402[6] = lhs;
clo9402[7] = cdr;
void* f8843 = encode_clo(clo9402);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lhs);
arg_buffer[1] = f8843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8843))[0]);
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9004_fptr() // lam9004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9005 = arg_buffer[1];
//reading env and args
void* a8732 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9005);
void* foldr = decode_clo_array[4];
void* a8730 = decode_clo_array[3];
void* kont8844 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8844;
arg_buffer[3] = append1;
arg_buffer[4] = a8730;
arg_buffer[5] = a8732;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9004 = encode_clo(alloc_clo(lam9004_fptr, 0));

void lam9006_fptr() // lam9006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9007 = arg_buffer[1];
//reading env and args
void* a8731 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9007);
void* foldr = decode_clo_array[5];
void* a8730 = decode_clo_array[4];
void* kont8844 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo9403 = alloc_clo(lam9004_fptr, 4);

//setting env list
clo9403[1] = append1;
clo9403[2] = kont8844;
clo9403[3] = a8730;
clo9403[4] = foldr;
void* f8845 = encode_clo(clo9403);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8845;
arg_buffer[3] = a8731;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9006 = encode_clo(alloc_clo(lam9006_fptr, 0));

void lam9008_fptr() // lam9008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9009 = arg_buffer[1];
//reading env and args
void* a8730 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9009);
void* list = decode_clo_array[6];
void* foldr = decode_clo_array[5];
void* xs = decode_clo_array[4];
void* kont8844 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo9404 = alloc_clo(lam9006_fptr, 5);

//setting env list
clo9404[1] = append1;
clo9404[2] = x;
clo9404[3] = kont8844;
clo9404[4] = a8730;
clo9404[5] = foldr;
void* f8846 = encode_clo(clo9404);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8846;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9008 = encode_clo(alloc_clo(lam9008_fptr, 0));

void lam9010_fptr() // lam9010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9011 = arg_buffer[1];
//reading env and args
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9011);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* kont8844 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo9405 = alloc_clo(lam9008_fptr, 6);

//setting env list
clo9405[1] = append1;
clo9405[2] = x;
clo9405[3] = kont8844;
clo9405[4] = xs;
clo9405[5] = foldr;
clo9405[6] = list;
void* f8847 = encode_clo(clo9405);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9010 = encode_clo(alloc_clo(lam9010_fptr, 0));

void lam9012_fptr() // lam9012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9013 = arg_buffer[1];
//reading env and args
void* vargs8684 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9013);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* kont8844 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo9406 = alloc_clo(lam9010_fptr, 5);

//setting env list
clo9406[1] = append1;
clo9406[2] = kont8844;
clo9406[3] = xs;
clo9406[4] = foldr;
clo9406[5] = list;
void* f8848 = encode_clo(clo9406);



//clo-app
arg_buffer[1] = f8848;
arg_buffer[2] = vargs8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8848))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9012 = encode_clo(alloc_clo(lam9012_fptr, 0));

void lam9014_fptr() // lam9014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9015 = arg_buffer[1];
//reading env and args
void* xs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9015);
void* foldr = decode_clo_array[6];
void* vargs8906 = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* kont8844 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo9407 = alloc_clo(lam9012_fptr, 5);

//setting env list
clo9407[1] = append1;
clo9407[2] = kont8844;
clo9407[3] = xs;
clo9407[4] = foldr;
clo9407[5] = list;
void* f8849 = encode_clo(clo9407);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(vargs8906);
arg_buffer[1] = f8849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8849))[0]);
function_ptr();
}

void* lam9014 = encode_clo(alloc_clo(lam9014_fptr, 0));

void append_fptr() // append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9016 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* vargs = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
vargs = arg_buffer[2];
}
else
{
//building cons cell
vargs = encode_null();
for(int i = numArgs; i >= 2; i--)
{
vargs = prim_cons(arg_buffer[i], vargs);

}

}

void* kont8844 = prim_car(vargs);
void* vargs8906 = prim_cdr(vargs);

//creating new closure instance
void** clo9408 = alloc_clo(lam9014_fptr, 6);

//setting env list
clo9408[1] = append1;
clo9408[2] = kont8844;
clo9408[3] = cdr;
clo9408[4] = list;
clo9408[5] = vargs8906;
clo9408[6] = foldr;
void* f8850 = encode_clo(clo9408);



//clo-app
arg_buffer[2]=apply_prim_car_1(vargs8906);
arg_buffer[1] = f8850;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8850))[0]);
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9022_fptr() // lam9022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9023 = arg_buffer[1];
//reading env and args
void* a8749 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9023);
void* kont8851 = decode_clo_array[4];
void* ok_u63 = decode_clo_array[3];
void* a8748 = decode_clo_array[2];
void* row = decode_clo_array[1];

//clo-app
arg_buffer[1] = ok_u63;
arg_buffer[2] = kont8851;
arg_buffer[3] = row;
arg_buffer[4] = a8748;
arg_buffer[5] = a8749;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(ok_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9022 = encode_clo(alloc_clo(lam9022_fptr, 0));

void lam9024_fptr() // lam9024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9025 = arg_buffer[1];
//reading env and args
void* a8748 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9025);
void* cdr = decode_clo_array[5];
void* kont8851 = decode_clo_array[4];
void* row = decode_clo_array[3];
void* placed = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9409 = alloc_clo(lam9022_fptr, 4);

//setting env list
clo9409[1] = row;
clo9409[2] = a8748;
clo9409[3] = ok_u63;
clo9409[4] = kont8851;
void* f8852 = encode_clo(clo9409);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(placed);
arg_buffer[1] = f8852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8852))[0]);
function_ptr();
}

void* lam9024 = encode_clo(alloc_clo(lam9024_fptr, 0));

void lam9028_fptr() // lam9028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9029 = arg_buffer[1];
//reading env and args
void* a8746 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9029);
void* cdr = decode_clo_array[7];
void* kont8851 = decode_clo_array[6];
void* dist = decode_clo_array[5];
void* _u43 = decode_clo_array[4];
void* row = decode_clo_array[3];
void* placed = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//if-clause
bool if_guard9410 = is_true(a8746);
if(if_guard9410)
{
void* a8747 = reinterpret_cast<void*>(encode_int(int9138));

//creating new closure instance
void** clo9411 = alloc_clo(lam9024_fptr, 5);

//setting env list
clo9411[1] = ok_u63;
clo9411[2] = placed;
clo9411[3] = row;
clo9411[4] = kont8851;
clo9411[5] = cdr;
void* f8853 = encode_clo(clo9411);



//clo-app
arg_buffer[2]=apply_prim__u43_2(dist, a8747);
arg_buffer[1] = f8853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8853))[0]);
function_ptr();
}
else
{
void* xy8750 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8851;
arg_buffer[2] = xy8750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8851))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam9028 = encode_clo(alloc_clo(lam9028_fptr, 0));

void lam9030_fptr() // lam9030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9031 = arg_buffer[1];
//reading env and args
void* a8743 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9031);
void* cdr = decode_clo_array[7];
void* kont8851 = decode_clo_array[6];
void* dist = decode_clo_array[5];
void* _u43 = decode_clo_array[4];
void* row = decode_clo_array[3];
void* placed = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9412 = alloc_clo(lam9028_fptr, 7);

//setting env list
clo9412[1] = ok_u63;
clo9412[2] = placed;
clo9412[3] = row;
clo9412[4] = _u43;
clo9412[5] = dist;
clo9412[6] = kont8851;
clo9412[7] = cdr;
void* f8854 = encode_clo(clo9412);



//if-clause
bool if_guard9413 = is_true(a8743);
if(if_guard9413)
{
void* xy8744 = encode_bool(false);

//clo-app
arg_buffer[1] = f8854;
arg_buffer[2] = xy8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8854))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* xy8745 = encode_bool(true);

//clo-app
arg_buffer[1] = f8854;
arg_buffer[2] = xy8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8854))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam9030 = encode_clo(alloc_clo(lam9030_fptr, 0));

void lam9032_fptr() // lam9032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9033 = arg_buffer[1];
//reading env and args
void* a8742 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9033);
void* cdr = decode_clo_array[9];
void* kont8851 = decode_clo_array[8];
void* dist = decode_clo_array[7];
void* a8741 = decode_clo_array[6];
void* _u43 = decode_clo_array[5];
void* row = decode_clo_array[4];
void* placed = decode_clo_array[3];
void* _u61 = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9414 = alloc_clo(lam9030_fptr, 7);

//setting env list
clo9414[1] = ok_u63;
clo9414[2] = placed;
clo9414[3] = row;
clo9414[4] = _u43;
clo9414[5] = dist;
clo9414[6] = kont8851;
clo9414[7] = cdr;
void* f8855 = encode_clo(clo9414);



//clo-app
arg_buffer[2]=apply_prim__u61_2(a8741, a8742);
arg_buffer[1] = f8855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8855))[0]);
function_ptr();
}

void* lam9032 = encode_clo(alloc_clo(lam9032_fptr, 0));

void lam9034_fptr() // lam9034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9035 = arg_buffer[1];
//reading env and args
void* a8741 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9035);
void* cdr = decode_clo_array[9];
void* kont8851 = decode_clo_array[8];
void* dist = decode_clo_array[7];
void* _u43 = decode_clo_array[6];
void* row = decode_clo_array[5];
void* placed = decode_clo_array[4];
void* _u61 = decode_clo_array[3];
void* _u45 = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9415 = alloc_clo(lam9032_fptr, 9);

//setting env list
clo9415[1] = ok_u63;
clo9415[2] = _u61;
clo9415[3] = placed;
clo9415[4] = row;
clo9415[5] = _u43;
clo9415[6] = a8741;
clo9415[7] = dist;
clo9415[8] = kont8851;
clo9415[9] = cdr;
void* f8856 = encode_clo(clo9415);



//clo-app
arg_buffer[2]=apply_prim__u45_2(row, dist);
arg_buffer[1] = f8856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8856))[0]);
function_ptr();
}

void* lam9034 = encode_clo(alloc_clo(lam9034_fptr, 0));

void lam9037_fptr() // lam9037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9038 = arg_buffer[1];
//reading env and args
void* a8740 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9038);
void* cdr = decode_clo_array[10];
void* kont8851 = decode_clo_array[9];
void* dist = decode_clo_array[8];
void* _u43 = decode_clo_array[7];
void* row = decode_clo_array[6];
void* car = decode_clo_array[5];
void* placed = decode_clo_array[4];
void* _u61 = decode_clo_array[3];
void* _u45 = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//if-clause
bool if_guard9416 = is_true(a8740);
if(if_guard9416)
{

//creating new closure instance
void** clo9417 = alloc_clo(lam9034_fptr, 9);

//setting env list
clo9417[1] = ok_u63;
clo9417[2] = _u45;
clo9417[3] = _u61;
clo9417[4] = placed;
clo9417[5] = row;
clo9417[6] = _u43;
clo9417[7] = dist;
clo9417[8] = kont8851;
clo9417[9] = cdr;
void* f8857 = encode_clo(clo9417);



//clo-app
arg_buffer[2]=apply_prim_car_1(placed);
arg_buffer[1] = f8857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8857))[0]);
function_ptr();
}
else
{
void* xy8751 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8851;
arg_buffer[2] = xy8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8851))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam9037 = encode_clo(alloc_clo(lam9037_fptr, 0));

void lam9039_fptr() // lam9039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9040 = arg_buffer[1];
//reading env and args
void* a8737 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9040);
void* cdr = decode_clo_array[10];
void* kont8851 = decode_clo_array[9];
void* dist = decode_clo_array[8];
void* _u43 = decode_clo_array[7];
void* row = decode_clo_array[6];
void* car = decode_clo_array[5];
void* placed = decode_clo_array[4];
void* _u61 = decode_clo_array[3];
void* _u45 = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9418 = alloc_clo(lam9037_fptr, 10);

//setting env list
clo9418[1] = ok_u63;
clo9418[2] = _u45;
clo9418[3] = _u61;
clo9418[4] = placed;
clo9418[5] = car;
clo9418[6] = row;
clo9418[7] = _u43;
clo9418[8] = dist;
clo9418[9] = kont8851;
clo9418[10] = cdr;
void* f8858 = encode_clo(clo9418);



//if-clause
bool if_guard9419 = is_true(a8737);
if(if_guard9419)
{
void* xy8738 = encode_bool(false);

//clo-app
arg_buffer[1] = f8858;
arg_buffer[2] = xy8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8858))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* xy8739 = encode_bool(true);

//clo-app
arg_buffer[1] = f8858;
arg_buffer[2] = xy8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8858))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam9039 = encode_clo(alloc_clo(lam9039_fptr, 0));

void lam9041_fptr() // lam9041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9042 = arg_buffer[1];
//reading env and args
void* a8736 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9042);
void* cdr = decode_clo_array[11];
void* kont8851 = decode_clo_array[10];
void* dist = decode_clo_array[9];
void* _u43 = decode_clo_array[8];
void* row = decode_clo_array[7];
void* car = decode_clo_array[6];
void* a8735 = decode_clo_array[5];
void* placed = decode_clo_array[4];
void* _u61 = decode_clo_array[3];
void* _u45 = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9420 = alloc_clo(lam9039_fptr, 10);

//setting env list
clo9420[1] = ok_u63;
clo9420[2] = _u45;
clo9420[3] = _u61;
clo9420[4] = placed;
clo9420[5] = car;
clo9420[6] = row;
clo9420[7] = _u43;
clo9420[8] = dist;
clo9420[9] = kont8851;
clo9420[10] = cdr;
void* f8859 = encode_clo(clo9420);



//clo-app
arg_buffer[2]=apply_prim__u61_2(a8735, a8736);
arg_buffer[1] = f8859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8859))[0]);
function_ptr();
}

void* lam9041 = encode_clo(alloc_clo(lam9041_fptr, 0));

void lam9043_fptr() // lam9043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9044 = arg_buffer[1];
//reading env and args
void* a8735 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9044);
void* cdr = decode_clo_array[10];
void* kont8851 = decode_clo_array[9];
void* dist = decode_clo_array[8];
void* _u43 = decode_clo_array[7];
void* row = decode_clo_array[6];
void* car = decode_clo_array[5];
void* placed = decode_clo_array[4];
void* _u61 = decode_clo_array[3];
void* _u45 = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9421 = alloc_clo(lam9041_fptr, 11);

//setting env list
clo9421[1] = ok_u63;
clo9421[2] = _u45;
clo9421[3] = _u61;
clo9421[4] = placed;
clo9421[5] = a8735;
clo9421[6] = car;
clo9421[7] = row;
clo9421[8] = _u43;
clo9421[9] = dist;
clo9421[10] = kont8851;
clo9421[11] = cdr;
void* f8860 = encode_clo(clo9421);



//clo-app
arg_buffer[2]=apply_prim__u43_2(row, dist);
arg_buffer[1] = f8860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8860))[0]);
function_ptr();
}

void* lam9043 = encode_clo(alloc_clo(lam9043_fptr, 0));

void lam9045_fptr() // lam9045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9046 = arg_buffer[1];
//reading env and args
void* a8733 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9046);
void* cdr = decode_clo_array[10];
void* kont8851 = decode_clo_array[9];
void* dist = decode_clo_array[8];
void* _u43 = decode_clo_array[7];
void* row = decode_clo_array[6];
void* car = decode_clo_array[5];
void* placed = decode_clo_array[4];
void* _u61 = decode_clo_array[3];
void* _u45 = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//if-clause
bool if_guard9422 = is_true(a8733);
if(if_guard9422)
{
void* xy8734 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8851;
arg_buffer[2] = xy8734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8851))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9423 = alloc_clo(lam9043_fptr, 10);

//setting env list
clo9423[1] = ok_u63;
clo9423[2] = _u45;
clo9423[3] = _u61;
clo9423[4] = placed;
clo9423[5] = car;
clo9423[6] = row;
clo9423[7] = _u43;
clo9423[8] = dist;
clo9423[9] = kont8851;
clo9423[10] = cdr;
void* f8861 = encode_clo(clo9423);



//clo-app
arg_buffer[2]=apply_prim_car_1(placed);
arg_buffer[1] = f8861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8861))[0]);
function_ptr();
}

}

void* lam9045 = encode_clo(alloc_clo(lam9045_fptr, 0));

void ok_u63_fptr() // ok? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9047 = arg_buffer[1];
//reading env and args
void* kont8851 = arg_buffer[2];
void* row = arg_buffer[3];
void* dist = arg_buffer[4];
void* placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9424 = alloc_clo(lam9045_fptr, 10);

//setting env list
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

clo9424[1] = ok_u63;
clo9424[2] = _u45;
clo9424[3] = _u61;
clo9424[4] = placed;
clo9424[5] = car;
clo9424[6] = row;
clo9424[7] = _u43;
clo9424[8] = dist;
clo9424[9] = kont8851;
clo9424[10] = cdr;
void* f8862 = encode_clo(clo9424);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(placed);
arg_buffer[1] = f8862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8862))[0]);
function_ptr();
}

void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam9048_fptr() // lam9048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9049 = arg_buffer[1];
//reading env and args
void* a8753 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9049);
void* f8888 = decode_clo_array[2];
void* car = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_car_1(a8753);
arg_buffer[1] = f8888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8888))[0]);
function_ptr();
}

void* lam9048 = encode_clo(alloc_clo(lam9048_fptr, 0));

void lam9050_fptr() // lam9050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9051 = arg_buffer[1];
//reading env and args
void* a8755 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9051);
void* f8885 = decode_clo_array[2];
void* car = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_car_1(a8755);
arg_buffer[1] = f8885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8885))[0]);
function_ptr();
}

void* lam9050 = encode_clo(alloc_clo(lam9050_fptr, 0));

void lam9052_fptr() // lam9052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9053 = arg_buffer[1];
//reading env and args
void* a8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9053);
void* cdr = decode_clo_array[3];
void* f8885 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo9425 = alloc_clo(lam9050_fptr, 2);

//setting env list
clo9425[1] = car;
clo9425[2] = f8885;
void* f8886 = encode_clo(clo9425);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(a8754);
arg_buffer[1] = f8886;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8886))[0]);
function_ptr();
}

void* lam9052 = encode_clo(alloc_clo(lam9052_fptr, 0));

void lam9054_fptr() // lam9054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9055 = arg_buffer[1];
//reading env and args
void* a8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9055);
void* a8758 = decode_clo_array[3];
void* kont8863 = decode_clo_array[2];
void* q_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8863;
arg_buffer[3] = a8758;
arg_buffer[4] = a8760;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9054 = encode_clo(alloc_clo(lam9054_fptr, 0));

void lam9057_fptr() // lam9057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9058 = arg_buffer[1];
//reading env and args
void* a8758 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9058);
void* count = decode_clo_array[4];
void* _u43 = decode_clo_array[3];
void* kont8863 = decode_clo_array[2];
void* q_u45helper = decode_clo_array[1];
void* a8759 = reinterpret_cast<void*>(encode_int(int9138));

//creating new closure instance
void** clo9426 = alloc_clo(lam9054_fptr, 3);

//setting env list
clo9426[1] = q_u45helper;
clo9426[2] = kont8863;
clo9426[3] = a8758;
void* f8864 = encode_clo(clo9426);



//clo-app
arg_buffer[2]=apply_prim__u43_2(count, a8759);
arg_buffer[1] = f8864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8864))[0]);
function_ptr();
}

void* lam9057 = encode_clo(alloc_clo(lam9057_fptr, 0));

void lam9059_fptr() // lam9059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9060 = arg_buffer[1];
//reading env and args
void* a8761 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9060);
void* count = decode_clo_array[3];
void* kont8863 = decode_clo_array[2];
void* q_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8863;
arg_buffer[3] = a8761;
arg_buffer[4] = count;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9059 = encode_clo(alloc_clo(lam9059_fptr, 0));

void lam9061_fptr() // lam9061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9062 = arg_buffer[1];
//reading env and args
void* a8757 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9062);
void* count = decode_clo_array[6];
void* _u43 = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* q_u45helper = decode_clo_array[3];
void* stack = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//if-clause
bool if_guard9427 = is_true(a8757);
if(if_guard9427)
{

//creating new closure instance
void** clo9428 = alloc_clo(lam9057_fptr, 4);

//setting env list
clo9428[1] = q_u45helper;
clo9428[2] = kont8863;
clo9428[3] = _u43;
clo9428[4] = count;
void* f8865 = encode_clo(clo9428);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(stack);
arg_buffer[1] = f8865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8865))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo9429 = alloc_clo(lam9059_fptr, 3);

//setting env list
clo9429[1] = q_u45helper;
clo9429[2] = kont8863;
clo9429[3] = count;
void* f8866 = encode_clo(clo9429);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(stack);
arg_buffer[1] = f8866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8866))[0]);
function_ptr();
}

}

void* lam9061 = encode_clo(alloc_clo(lam9061_fptr, 0));

void lam9063_fptr() // lam9063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9064 = arg_buffer[1];
//reading env and args
void* a8775 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9064);
void* f8869 = decode_clo_array[3];
void* a8774 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8774, a8775);
arg_buffer[1] = f8869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8869))[0]);
function_ptr();
}

void* lam9063 = encode_clo(alloc_clo(lam9063_fptr, 0));

void lam9065_fptr() // lam9065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9066 = arg_buffer[1];
//reading env and args
void* a8774 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9066);
void* f8869 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* stack = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo9430 = alloc_clo(lam9063_fptr, 3);

//setting env list
clo9430[1] = cons;
clo9430[2] = a8774;
clo9430[3] = f8869;
void* f8870 = encode_clo(clo9430);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(stack);
arg_buffer[1] = f8870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8870))[0]);
function_ptr();
}

void* lam9065 = encode_clo(alloc_clo(lam9065_fptr, 0));

void lam9067_fptr() // lam9067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9068 = arg_buffer[1];
//reading env and args
void* a8773 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9068);
void* a8770 = decode_clo_array[7];
void* a8771 = decode_clo_array[6];
void* f8869 = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* stack = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo9431 = alloc_clo(lam9065_fptr, 4);

//setting env list
clo9431[1] = cdr;
clo9431[2] = stack;
clo9431[3] = cons;
clo9431[4] = f8869;
void* f8871 = encode_clo(clo9431);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8871;
arg_buffer[3] = a8770;
arg_buffer[4] = a8771;
arg_buffer[5] = a8773;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9067 = encode_clo(alloc_clo(lam9067_fptr, 0));

void lam9069_fptr() // lam9069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9070 = arg_buffer[1];
//reading env and args
void* a8772 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9070);
void* a8770 = decode_clo_array[8];
void* a8771 = decode_clo_array[7];
void* f8869 = decode_clo_array[6];
void* z = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* stack = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo9432 = alloc_clo(lam9067_fptr, 7);

//setting env list
clo9432[1] = cdr;
clo9432[2] = list;
clo9432[3] = stack;
clo9432[4] = cons;
clo9432[5] = f8869;
clo9432[6] = a8771;
clo9432[7] = a8770;
void* f8872 = encode_clo(clo9432);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8772, z);
arg_buffer[1] = f8872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8872))[0]);
function_ptr();
}

void* lam9069 = encode_clo(alloc_clo(lam9069_fptr, 0));

void lam9071_fptr() // lam9071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9072 = arg_buffer[1];
//reading env and args
void* a8771 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9072);
void* a8770 = decode_clo_array[9];
void* f8869 = decode_clo_array[8];
void* z = decode_clo_array[7];
void* x = decode_clo_array[6];
void* car = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* stack = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo9433 = alloc_clo(lam9069_fptr, 8);

//setting env list
clo9433[1] = cdr;
clo9433[2] = list;
clo9433[3] = stack;
clo9433[4] = cons;
clo9433[5] = z;
clo9433[6] = f8869;
clo9433[7] = a8771;
clo9433[8] = a8770;
void* f8873 = encode_clo(clo9433);



//clo-app
arg_buffer[2]=apply_prim_car_1(x);
arg_buffer[1] = f8873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8873))[0]);
function_ptr();
}

void* lam9071 = encode_clo(alloc_clo(lam9071_fptr, 0));

void lam9073_fptr() // lam9073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9074 = arg_buffer[1];
//reading env and args
void* a8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9074);
void* f8869 = decode_clo_array[8];
void* z = decode_clo_array[7];
void* x = decode_clo_array[6];
void* car = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* stack = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo9434 = alloc_clo(lam9071_fptr, 9);

//setting env list
clo9434[1] = cdr;
clo9434[2] = list;
clo9434[3] = stack;
clo9434[4] = cons;
clo9434[5] = car;
clo9434[6] = x;
clo9434[7] = z;
clo9434[8] = f8869;
clo9434[9] = a8770;
void* f8874 = encode_clo(clo9434);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9073 = encode_clo(alloc_clo(lam9073_fptr, 0));

void lam9075_fptr() // lam9075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9076 = arg_buffer[1];
//reading env and args
void* a8769 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9076);
void* f8869 = decode_clo_array[10];
void* append = decode_clo_array[9];
void* z = decode_clo_array[8];
void* y = decode_clo_array[7];
void* x = decode_clo_array[6];
void* car = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* stack = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo9435 = alloc_clo(lam9073_fptr, 8);

//setting env list
clo9435[1] = cdr;
clo9435[2] = list;
clo9435[3] = stack;
clo9435[4] = cons;
clo9435[5] = car;
clo9435[6] = x;
clo9435[7] = z;
clo9435[8] = f8869;
void* f8875 = encode_clo(clo9435);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f8875;
arg_buffer[3] = a8769;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9075 = encode_clo(alloc_clo(lam9075_fptr, 0));

void lam9077_fptr() // lam9077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9078 = arg_buffer[1];
//reading env and args
void* xy8776 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9078);
void* f8869 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8869;
arg_buffer[2] = xy8776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8869))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9077 = encode_clo(alloc_clo(lam9077_fptr, 0));

void lam9079_fptr() // lam9079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9080 = arg_buffer[1];
//reading env and args
void* a8778 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9080);
void* count = decode_clo_array[3];
void* kont8863 = decode_clo_array[2];
void* q_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8863;
arg_buffer[3] = a8778;
arg_buffer[4] = count;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9079 = encode_clo(alloc_clo(lam9079_fptr, 0));

void lam9081_fptr() // lam9081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9082 = arg_buffer[1];
//reading env and args
void* a8777 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9082);
void* count = decode_clo_array[5];
void* a8765 = decode_clo_array[4];
void* q_u45helper = decode_clo_array[3];
void* kont8863 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo9436 = alloc_clo(lam9079_fptr, 3);

//setting env list
clo9436[1] = q_u45helper;
clo9436[2] = kont8863;
clo9436[3] = count;
void* f8868 = encode_clo(clo9436);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8765, a8777);
arg_buffer[1] = f8868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8868))[0]);
function_ptr();
}

void* lam9081 = encode_clo(alloc_clo(lam9081_fptr, 0));

void lam9083_fptr() // lam9083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9084 = arg_buffer[1];
//reading env and args
void* a8768 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9084);
void* count = decode_clo_array[13];
void* append = decode_clo_array[12];
void* z = decode_clo_array[11];
void* y = decode_clo_array[10];
void* x = decode_clo_array[9];
void* a8765 = decode_clo_array[8];
void* car = decode_clo_array[7];
void* q_u45helper = decode_clo_array[6];
void* stack = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* kont8863 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo9437 = alloc_clo(lam9081_fptr, 5);

//setting env list
clo9437[1] = cons;
clo9437[2] = kont8863;
clo9437[3] = q_u45helper;
clo9437[4] = a8765;
clo9437[5] = count;
void* f8869 = encode_clo(clo9437);



//if-clause
bool if_guard9438 = is_true(a8768);
if(if_guard9438)
{

//creating new closure instance
void** clo9439 = alloc_clo(lam9075_fptr, 10);

//setting env list
clo9439[1] = cdr;
clo9439[2] = list;
clo9439[3] = stack;
clo9439[4] = cons;
clo9439[5] = car;
clo9439[6] = x;
clo9439[7] = y;
clo9439[8] = z;
clo9439[9] = append;
clo9439[10] = f8869;
void* f8876 = encode_clo(clo9439);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(x);
arg_buffer[1] = f8876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8876))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo9440 = alloc_clo(lam9077_fptr, 1);

//setting env list
clo9440[1] = f8869;
void* f8877 = encode_clo(clo9440);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(stack);
arg_buffer[1] = f8877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8877))[0]);
function_ptr();
}

}

void* lam9083 = encode_clo(alloc_clo(lam9083_fptr, 0));

void lam9086_fptr() // lam9086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9087 = arg_buffer[1];
//reading env and args
void* a8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9087);
void* count = decode_clo_array[14];
void* append = decode_clo_array[13];
void* z = decode_clo_array[12];
void* y = decode_clo_array[11];
void* x = decode_clo_array[10];
void* a8765 = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];
void* a8767 = reinterpret_cast<void*>(encode_int(int9138));

//creating new closure instance
void** clo9441 = alloc_clo(lam9083_fptr, 13);

//setting env list
clo9441[1] = cons;
clo9441[2] = kont8863;
clo9441[3] = cdr;
clo9441[4] = list;
clo9441[5] = stack;
clo9441[6] = q_u45helper;
clo9441[7] = car;
clo9441[8] = a8765;
clo9441[9] = x;
clo9441[10] = y;
clo9441[11] = z;
clo9441[12] = append;
clo9441[13] = count;
void* f8878 = encode_clo(clo9441);



//clo-app
arg_buffer[1] = ok_u63;
arg_buffer[2] = f8878;
arg_buffer[3] = a8766;
arg_buffer[4] = a8767;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(ok_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9086 = encode_clo(alloc_clo(lam9086_fptr, 0));

void lam9088_fptr() // lam9088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9089 = arg_buffer[1];
//reading env and args
void* a8765 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9089);
void* count = decode_clo_array[13];
void* append = decode_clo_array[12];
void* z = decode_clo_array[11];
void* y = decode_clo_array[10];
void* x = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9442 = alloc_clo(lam9086_fptr, 14);

//setting env list
clo9442[1] = ok_u63;
clo9442[2] = q_u45helper;
clo9442[3] = cons;
clo9442[4] = kont8863;
clo9442[5] = cdr;
clo9442[6] = list;
clo9442[7] = stack;
clo9442[8] = car;
clo9442[9] = a8765;
clo9442[10] = x;
clo9442[11] = y;
clo9442[12] = z;
clo9442[13] = append;
clo9442[14] = count;
void* f8879 = encode_clo(clo9442);



//clo-app
arg_buffer[2]=apply_prim_car_1(x);
arg_buffer[1] = f8879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8879))[0]);
function_ptr();
}

void* lam9088 = encode_clo(alloc_clo(lam9088_fptr, 0));

void lam9090_fptr() // lam9090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9091 = arg_buffer[1];
//reading env and args
void* a8764 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9091);
void* count = decode_clo_array[14];
void* append = decode_clo_array[13];
void* y = decode_clo_array[12];
void* x = decode_clo_array[11];
void* car = decode_clo_array[10];
void* stack = decode_clo_array[9];
void* list = decode_clo_array[8];
void* cdr = decode_clo_array[7];
void* z = decode_clo_array[6];
void* a8762 = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9443 = alloc_clo(lam9088_fptr, 13);

//setting env list
clo9443[1] = ok_u63;
clo9443[2] = q_u45helper;
clo9443[3] = cons;
clo9443[4] = kont8863;
clo9443[5] = cdr;
clo9443[6] = list;
clo9443[7] = stack;
clo9443[8] = car;
clo9443[9] = x;
clo9443[10] = y;
clo9443[11] = z;
clo9443[12] = append;
clo9443[13] = count;
void* f8880 = encode_clo(clo9443);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8880;
arg_buffer[3] = a8762;
arg_buffer[4] = a8764;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9090 = encode_clo(alloc_clo(lam9090_fptr, 0));

void lam9092_fptr() // lam9092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9093 = arg_buffer[1];
//reading env and args
void* a8763 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9093);
void* count = decode_clo_array[14];
void* append = decode_clo_array[13];
void* y = decode_clo_array[12];
void* x = decode_clo_array[11];
void* car = decode_clo_array[10];
void* stack = decode_clo_array[9];
void* list = decode_clo_array[8];
void* cdr = decode_clo_array[7];
void* z = decode_clo_array[6];
void* a8762 = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9444 = alloc_clo(lam9090_fptr, 14);

//setting env list
clo9444[1] = ok_u63;
clo9444[2] = q_u45helper;
clo9444[3] = cons;
clo9444[4] = kont8863;
clo9444[5] = a8762;
clo9444[6] = z;
clo9444[7] = cdr;
clo9444[8] = list;
clo9444[9] = stack;
clo9444[10] = car;
clo9444[11] = x;
clo9444[12] = y;
clo9444[13] = append;
clo9444[14] = count;
void* f8881 = encode_clo(clo9444);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8763, y);
arg_buffer[1] = f8881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8881))[0]);
function_ptr();
}

void* lam9092 = encode_clo(alloc_clo(lam9092_fptr, 0));

void lam9094_fptr() // lam9094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9095 = arg_buffer[1];
//reading env and args
void* a8762 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9095);
void* count = decode_clo_array[13];
void* append = decode_clo_array[12];
void* z = decode_clo_array[11];
void* y = decode_clo_array[10];
void* x = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9445 = alloc_clo(lam9092_fptr, 14);

//setting env list
clo9445[1] = ok_u63;
clo9445[2] = q_u45helper;
clo9445[3] = cons;
clo9445[4] = kont8863;
clo9445[5] = a8762;
clo9445[6] = z;
clo9445[7] = cdr;
clo9445[8] = list;
clo9445[9] = stack;
clo9445[10] = car;
clo9445[11] = x;
clo9445[12] = y;
clo9445[13] = append;
clo9445[14] = count;
void* f8882 = encode_clo(clo9445);



//clo-app
arg_buffer[2]=apply_prim_car_1(x);
arg_buffer[1] = f8882;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8882))[0]);
function_ptr();
}

void* lam9094 = encode_clo(alloc_clo(lam9094_fptr, 0));

void lam9096_fptr() // lam9096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9097 = arg_buffer[1];
//reading env and args
void* a8756 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9097);
void* count = decode_clo_array[15];
void* null_u63 = decode_clo_array[14];
void* append = decode_clo_array[13];
void* y = decode_clo_array[12];
void* x = decode_clo_array[11];
void* car = decode_clo_array[10];
void* stack = decode_clo_array[9];
void* list = decode_clo_array[8];
void* cdr = decode_clo_array[7];
void* z = decode_clo_array[6];
void* _u43 = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//if-clause
bool if_guard9446 = is_true(a8756);
if(if_guard9446)
{

//creating new closure instance
void** clo9447 = alloc_clo(lam9061_fptr, 6);

//setting env list
clo9447[1] = cdr;
clo9447[2] = stack;
clo9447[3] = q_u45helper;
clo9447[4] = kont8863;
clo9447[5] = _u43;
clo9447[6] = count;
void* f8867 = encode_clo(clo9447);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(y);
arg_buffer[1] = f8867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8867))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo9448 = alloc_clo(lam9094_fptr, 13);

//setting env list
clo9448[1] = ok_u63;
clo9448[2] = q_u45helper;
clo9448[3] = cons;
clo9448[4] = kont8863;
clo9448[5] = cdr;
clo9448[6] = list;
clo9448[7] = stack;
clo9448[8] = car;
clo9448[9] = x;
clo9448[10] = y;
clo9448[11] = z;
clo9448[12] = append;
clo9448[13] = count;
void* f8883 = encode_clo(clo9448);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(x);
arg_buffer[1] = f8883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8883))[0]);
function_ptr();
}

}

void* lam9096 = encode_clo(alloc_clo(lam9096_fptr, 0));

void lam9098_fptr() // lam9098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9099 = arg_buffer[1];
//reading env and args
void* z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9099);
void* count = decode_clo_array[14];
void* null_u63 = decode_clo_array[13];
void* append = decode_clo_array[12];
void* _u43 = decode_clo_array[11];
void* y = decode_clo_array[10];
void* x = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9449 = alloc_clo(lam9096_fptr, 15);

//setting env list
clo9449[1] = ok_u63;
clo9449[2] = q_u45helper;
clo9449[3] = cons;
clo9449[4] = kont8863;
clo9449[5] = _u43;
clo9449[6] = z;
clo9449[7] = cdr;
clo9449[8] = list;
clo9449[9] = stack;
clo9449[10] = car;
clo9449[11] = x;
clo9449[12] = y;
clo9449[13] = append;
clo9449[14] = null_u63;
clo9449[15] = count;
void* f8884 = encode_clo(clo9449);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(x);
arg_buffer[1] = f8884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8884))[0]);
function_ptr();
}

void* lam9098 = encode_clo(alloc_clo(lam9098_fptr, 0));

void lam9100_fptr() // lam9100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9101 = arg_buffer[1];
//reading env and args
void* y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9101);
void* state = decode_clo_array[14];
void* count = decode_clo_array[13];
void* null_u63 = decode_clo_array[12];
void* append = decode_clo_array[11];
void* _u43 = decode_clo_array[10];
void* x = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9450 = alloc_clo(lam9098_fptr, 14);

//setting env list
clo9450[1] = ok_u63;
clo9450[2] = q_u45helper;
clo9450[3] = cons;
clo9450[4] = kont8863;
clo9450[5] = cdr;
clo9450[6] = list;
clo9450[7] = stack;
clo9450[8] = car;
clo9450[9] = x;
clo9450[10] = y;
clo9450[11] = _u43;
clo9450[12] = append;
clo9450[13] = null_u63;
clo9450[14] = count;
void* f8885 = encode_clo(clo9450);



//creating new closure instance
void** clo9451 = alloc_clo(lam9052_fptr, 3);

//setting env list
clo9451[1] = car;
clo9451[2] = f8885;
clo9451[3] = cdr;
void* f8887 = encode_clo(clo9451);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(state);
arg_buffer[1] = f8887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8887))[0]);
function_ptr();
}

void* lam9100 = encode_clo(alloc_clo(lam9100_fptr, 0));

void lam9102_fptr() // lam9102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9103 = arg_buffer[1];
//reading env and args
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9103);
void* state = decode_clo_array[13];
void* count = decode_clo_array[12];
void* null_u63 = decode_clo_array[11];
void* append = decode_clo_array[10];
void* _u43 = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9452 = alloc_clo(lam9100_fptr, 14);

//setting env list
clo9452[1] = ok_u63;
clo9452[2] = q_u45helper;
clo9452[3] = cons;
clo9452[4] = kont8863;
clo9452[5] = cdr;
clo9452[6] = list;
clo9452[7] = stack;
clo9452[8] = car;
clo9452[9] = x;
clo9452[10] = _u43;
clo9452[11] = append;
clo9452[12] = null_u63;
clo9452[13] = count;
clo9452[14] = state;
void* f8888 = encode_clo(clo9452);



//creating new closure instance
void** clo9453 = alloc_clo(lam9048_fptr, 2);

//setting env list
clo9453[1] = car;
clo9453[2] = f8888;
void* f8889 = encode_clo(clo9453);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(state);
arg_buffer[1] = f8889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8889))[0]);
function_ptr();
}

void* lam9102 = encode_clo(alloc_clo(lam9102_fptr, 0));

void lam9104_fptr() // lam9104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9105 = arg_buffer[1];
//reading env and args
void* state = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9105);
void* count = decode_clo_array[12];
void* null_u63 = decode_clo_array[11];
void* append = decode_clo_array[10];
void* _u43 = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//creating new closure instance
void** clo9454 = alloc_clo(lam9102_fptr, 13);

//setting env list
clo9454[1] = ok_u63;
clo9454[2] = q_u45helper;
clo9454[3] = cons;
clo9454[4] = kont8863;
clo9454[5] = cdr;
clo9454[6] = list;
clo9454[7] = stack;
clo9454[8] = car;
clo9454[9] = _u43;
clo9454[10] = append;
clo9454[11] = null_u63;
clo9454[12] = count;
clo9454[13] = state;
void* f8890 = encode_clo(clo9454);



//clo-app
arg_buffer[2]=apply_prim_car_1(state);
arg_buffer[1] = f8890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8890))[0]);
function_ptr();
}

void* lam9104 = encode_clo(alloc_clo(lam9104_fptr, 0));

void lam9106_fptr() // lam9106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9107 = arg_buffer[1];
//reading env and args
void* a8752 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9107);
void* count = decode_clo_array[12];
void* null_u63 = decode_clo_array[11];
void* append = decode_clo_array[10];
void* _u43 = decode_clo_array[9];
void* car = decode_clo_array[8];
void* stack = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* kont8863 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* q_u45helper = decode_clo_array[2];
void* ok_u63 = decode_clo_array[1];

//if-clause
bool if_guard9455 = is_true(a8752);
if(if_guard9455)
{

//clo-app
arg_buffer[1] = kont8863;
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9456 = alloc_clo(lam9104_fptr, 12);

//setting env list
clo9456[1] = ok_u63;
clo9456[2] = q_u45helper;
clo9456[3] = cons;
clo9456[4] = kont8863;
clo9456[5] = cdr;
clo9456[6] = list;
clo9456[7] = stack;
clo9456[8] = car;
clo9456[9] = _u43;
clo9456[10] = append;
clo9456[11] = null_u63;
clo9456[12] = count;
void* f8891 = encode_clo(clo9456);



//clo-app
arg_buffer[2]=apply_prim_car_1(stack);
arg_buffer[1] = f8891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8891))[0]);
function_ptr();
}

}

void* lam9106 = encode_clo(alloc_clo(lam9106_fptr, 0));

void q_u45helper_fptr() // q-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9108 = arg_buffer[1];
//reading env and args
void* kont8863 = arg_buffer[2];
void* stack = arg_buffer[3];
void* count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9457 = alloc_clo(lam9106_fptr, 12);

//setting env list
clo9457[1] = ok_u63;
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

clo9457[2] = q_u45helper;
clo9457[3] = cons;
clo9457[4] = kont8863;
clo9457[5] = cdr;
clo9457[6] = list;
clo9457[7] = stack;
clo9457[8] = car;
clo9457[9] = _u43;
clo9457[10] = append;
clo9457[11] = null_u63;
clo9457[12] = count;
void* f8892 = encode_clo(clo9457);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(stack);
arg_buffer[1] = f8892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);
function_ptr();
}

void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void lam9109_fptr() // lam9109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9110 = arg_buffer[1];
//reading env and args
void* a8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9110);
void* iota1 = decode_clo_array[3];
void* kont8893 = decode_clo_array[2];
void* a8782 = decode_clo_array[1];

//clo-app
arg_buffer[1] = iota1;
arg_buffer[2] = kont8893;
arg_buffer[3] = a8782;
arg_buffer[4] = a8783;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(iota1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9109 = encode_clo(alloc_clo(lam9109_fptr, 0));

void lam9111_fptr() // lam9111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9112 = arg_buffer[1];
//reading env and args
void* a8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9112);
void* iota1 = decode_clo_array[5];
void* kont8893 = decode_clo_array[4];
void* n = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* l = decode_clo_array[1];

//creating new closure instance
void** clo9458 = alloc_clo(lam9109_fptr, 3);

//setting env list
clo9458[1] = a8782;
clo9458[2] = kont8893;
clo9458[3] = iota1;
void* f8894 = encode_clo(clo9458);



//clo-app
arg_buffer[2]=apply_prim_cons_2(n, l);
arg_buffer[1] = f8894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8894))[0]);
function_ptr();
}

void* lam9111 = encode_clo(alloc_clo(lam9111_fptr, 0));

void lam9114_fptr() // lam9114 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9115 = arg_buffer[1];
//reading env and args
void* a8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9115);
void* iota1 = decode_clo_array[6];
void* kont8893 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* _u45 = decode_clo_array[2];
void* l = decode_clo_array[1];

//if-clause
bool if_guard9459 = is_true(a8780);
if(if_guard9459)
{

//clo-app
arg_buffer[1] = kont8893;
arg_buffer[2] = l;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* a8781 = reinterpret_cast<void*>(encode_int(int9138));

//creating new closure instance
void** clo9460 = alloc_clo(lam9111_fptr, 5);

//setting env list
clo9460[1] = l;
clo9460[2] = cons;
clo9460[3] = n;
clo9460[4] = kont8893;
clo9460[5] = iota1;
void* f8895 = encode_clo(clo9460);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8781);
arg_buffer[1] = f8895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);
function_ptr();
}

}

void* lam9114 = encode_clo(alloc_clo(lam9114_fptr, 0));

void iota1_fptr() // iota1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9117 = arg_buffer[1];
//reading env and args
void* kont8893 = arg_buffer[2];
void* n = arg_buffer[3];
void* l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* a8779 = reinterpret_cast<void*>(encode_int(int9139));

//creating new closure instance
void** clo9461 = alloc_clo(lam9114_fptr, 6);

//setting env list
clo9461[1] = l;
clo9461[2] = _u45;
clo9461[3] = cons;
clo9461[4] = n;
clo9461[5] = kont8893;
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

clo9461[6] = iota1;
void* f8896 = encode_clo(clo9461);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8779);
arg_buffer[1] = f8896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8896))[0]);
function_ptr();
}

void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam9119_fptr() // lam9119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9120 = arg_buffer[1];
//reading env and args
void* a8789 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9120);
void* kont8897 = decode_clo_array[2];
void* q_u45helper = decode_clo_array[1];
void* a8790 = reinterpret_cast<void*>(encode_int(int9139));

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8897;
arg_buffer[3] = a8789;
arg_buffer[4] = a8790;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9119 = encode_clo(alloc_clo(lam9119_fptr, 0));

void lam9121_fptr() // lam9121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9122 = arg_buffer[1];
//reading env and args
void* a8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9122);
void* q_u45helper = decode_clo_array[3];
void* kont8897 = decode_clo_array[2];
void* list = decode_clo_array[1];

//creating new closure instance
void** clo9462 = alloc_clo(lam9119_fptr, 2);

//setting env list
clo9462[1] = q_u45helper;
clo9462[2] = kont8897;
void* f8898 = encode_clo(clo9462);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8898;
arg_buffer[3] = a8788;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9121 = encode_clo(alloc_clo(lam9121_fptr, 0));

void lam9123_fptr() // lam9123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9124 = arg_buffer[1];
//reading env and args
void* a8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9124);
void* a8786 = decode_clo_array[5];
void* q_u45helper = decode_clo_array[4];
void* kont8897 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* a8785 = decode_clo_array[1];

//creating new closure instance
void** clo9463 = alloc_clo(lam9121_fptr, 3);

//setting env list
clo9463[1] = list;
clo9463[2] = kont8897;
clo9463[3] = q_u45helper;
void* f8899 = encode_clo(clo9463);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8899;
arg_buffer[3] = a8785;
arg_buffer[4] = a8786;
arg_buffer[5] = a8787;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9123 = encode_clo(alloc_clo(lam9123_fptr, 0));

void lam9125_fptr() // lam9125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9126 = arg_buffer[1];
//reading env and args
void* a8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9126);
void* q_u45helper = decode_clo_array[4];
void* kont8897 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* a8785 = decode_clo_array[1];

//creating new closure instance
void** clo9464 = alloc_clo(lam9123_fptr, 5);

//setting env list
clo9464[1] = a8785;
clo9464[2] = list;
clo9464[3] = kont8897;
clo9464[4] = q_u45helper;
clo9464[5] = a8786;
void* f8900 = encode_clo(clo9464);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8900;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9125 = encode_clo(alloc_clo(lam9125_fptr, 0));

void lam9127_fptr() // lam9127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9128 = arg_buffer[1];
//reading env and args
void* a8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9128);
void* q_u45helper = decode_clo_array[3];
void* kont8897 = decode_clo_array[2];
void* list = decode_clo_array[1];

//creating new closure instance
void** clo9465 = alloc_clo(lam9125_fptr, 4);

//setting env list
clo9465[1] = a8785;
clo9465[2] = list;
clo9465[3] = kont8897;
clo9465[4] = q_u45helper;
void* f8901 = encode_clo(clo9465);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9127 = encode_clo(alloc_clo(lam9127_fptr, 0));

void lam9129_fptr() // lam9129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9130 = arg_buffer[1];
//reading env and args
void* a8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9130);
void* n = decode_clo_array[5];
void* q_u45helper = decode_clo_array[4];
void* kont8897 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* iota1 = decode_clo_array[1];

//creating new closure instance
void** clo9466 = alloc_clo(lam9127_fptr, 3);

//setting env list
clo9466[1] = list;
clo9466[2] = kont8897;
clo9466[3] = q_u45helper;
void* f8902 = encode_clo(clo9466);



//clo-app
arg_buffer[1] = iota1;
arg_buffer[2] = f8902;
arg_buffer[3] = n;
arg_buffer[4] = a8784;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(iota1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam9129 = encode_clo(alloc_clo(lam9129_fptr, 0));

void nqueens_fptr() // nqueens 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9131 = arg_buffer[1];
//reading env and args
void* kont8897 = arg_buffer[2];
void* n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9467 = alloc_clo(lam9129_fptr, 5);

//setting env list
clo9467[1] = iota1;
clo9467[2] = list;
clo9467[3] = kont8897;
clo9467[4] = q_u45helper;
clo9467[5] = n;
void* f8903 = encode_clo(clo9467);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9133 = arg_buffer[1];
//reading env and args
void* kont8904 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
void* a8791 = reinterpret_cast<void*>(encode_int(int9140));

//clo-app
arg_buffer[1] = nqueens;
arg_buffer[2] = kont8904;
arg_buffer[3] = a8791;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(nqueens))[0]);
//call next proc using a function pointer
function_ptr();
}

void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9139 = 0;
int9138 = 1;
int9140 = 13;


//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;
function_ptr();
}

