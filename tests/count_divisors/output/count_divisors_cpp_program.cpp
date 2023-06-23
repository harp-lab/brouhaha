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
void* _6969 = arg_buffer[1];
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

void* kont66936798 = prim_car(lst);
void* lst6799 = prim_cdr(lst);
void* x65996800 = apply_prim__u43(lst6799);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66936798);
arg_buffer[2] = x65996800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66936798))[0]);
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
void* _6970 = arg_buffer[1];
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

void* kont66956801 = prim_car(lst);
void* lst6802 = prim_cdr(lst);
void* x66006803 = apply_prim__u45(lst6802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66956801);
arg_buffer[2] = x66006803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66956801))[0]);
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
void* _6971 = arg_buffer[1];
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

void* kont66976804 = prim_car(lst);
void* lst6805 = prim_cdr(lst);
void* x66016806 = apply_prim__u42(lst6805);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66976804);
arg_buffer[2] = x66016806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66976804))[0]);
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
void* _6972 = arg_buffer[1];
//reading env and args
void* kont6699 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x66026807 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6699);
arg_buffer[2] = x66026807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6699))[0]);
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
void* _6973 = arg_buffer[1];
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

void* kont67006808 = prim_car(lst);
void* lst6809 = prim_cdr(lst);
void* x66036810 = apply_prim__u47(lst6809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67006808);
arg_buffer[2] = x66036810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67006808))[0]);
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
void* _6974 = arg_buffer[1];
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

void* kont67026811 = prim_car(lst);
void* lst6812 = prim_cdr(lst);
void* x66046813 = apply_prim__u61(lst6812);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67026811);
arg_buffer[2] = x66046813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67026811))[0]);
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
void* _6975 = arg_buffer[1];
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

void* kont67046814 = prim_car(lst);
void* lst6815 = prim_cdr(lst);
void* x66056816 = apply_prim__u62(lst6815);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67046814);
arg_buffer[2] = x66056816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67046814))[0]);
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
void* _6976 = arg_buffer[1];
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

void* kont67066817 = prim_car(lst);
void* lst6818 = prim_cdr(lst);
void* x66066819 = apply_prim__u60(lst6818);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67066817);
arg_buffer[2] = x66066819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67066817))[0]);
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
void* _6977 = arg_buffer[1];
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

void* kont67086820 = prim_car(lst);
void* lst6821 = prim_cdr(lst);
void* x66076822 = apply_prim__u60_u61(lst6821);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67086820);
arg_buffer[2] = x66076822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67086820))[0]);
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
void* _6978 = arg_buffer[1];
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

void* kont67106823 = prim_car(lst);
void* lst6824 = prim_cdr(lst);
void* x66086825 = apply_prim__u62_u61(lst6824);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67106823);
arg_buffer[2] = x66086825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67106823))[0]);
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
void* _6979 = arg_buffer[1];
//reading env and args
void* kont6712 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x66096826 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6712);
arg_buffer[2] = x66096826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6712))[0]);
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
void* _6980 = arg_buffer[1];
//reading env and args
void* kont6713 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x66106827 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6713);
arg_buffer[2] = x66106827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6713))[0]);
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
void* _6981 = arg_buffer[1];
//reading env and args
void* kont6714 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x66116828 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6714);
arg_buffer[2] = x66116828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6714))[0]);
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
void* _6982 = arg_buffer[1];
//reading env and args
void* kont6715 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x66126829 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6715);
arg_buffer[2] = x66126829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6715))[0]);
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
void* _6983 = arg_buffer[1];
//reading env and args
void* kont6716 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x66136830 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6716);
arg_buffer[2] = x66136830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6716))[0]);
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
void* _6984 = arg_buffer[1];
//reading env and args
void* kont6717 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x66146831 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6717);
arg_buffer[2] = x66146831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6717))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6985_fptr() // lam6985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6986 = arg_buffer[1];
//reading env and args
void* a66176835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6718 = (decode_clo(env6986))[3];
//not do dummy comment
void* a66156832 = (decode_clo(env6986))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6986))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont6718;
arg_buffer[3] = a66156832;
arg_buffer[4] = a66176835;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6985 = encode_clo(alloc_clo(lam6985_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6989 = arg_buffer[1];
//reading env and args
void* kont6718 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar27576 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27576, "0", 10);
void* a66156832 = encode_mpz(mpzvar27576);
mpz_t* mpzvar27577 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27577, "2", 10);
void* a66166833 = encode_mpz(mpzvar27577);

//creating new closure instance
void** clo27579 = alloc_clo(lam6985_fptr, 3);

//setting env list
clo27579[1] = equal_u63;
clo27579[2] = a66156832;
clo27579[3] = kont6718;
void* f67196834 = encode_clo(clo27579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f67196834;
arg_buffer[3] = x;
arg_buffer[4] = a66166833;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6990_fptr() // lam6990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6991 = arg_buffer[1];
//reading env and args
void* a66206839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6720 = (decode_clo(env6991))[3];
//not do dummy comment
void* a66186836 = (decode_clo(env6991))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6991))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont6720;
arg_buffer[3] = a66186836;
arg_buffer[4] = a66206839;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6990 = encode_clo(alloc_clo(lam6990_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6994 = arg_buffer[1];
//reading env and args
void* kont6720 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar27580 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27580, "1", 10);
void* a66186836 = encode_mpz(mpzvar27580);
mpz_t* mpzvar27581 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27581, "2", 10);
void* a66196837 = encode_mpz(mpzvar27581);

//creating new closure instance
void** clo27583 = alloc_clo(lam6990_fptr, 3);

//setting env list
clo27583[1] = equal_u63;
clo27583[2] = a66186836;
clo27583[3] = kont6720;
void* f67216838 = encode_clo(clo27583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f67216838;
arg_buffer[3] = x;
arg_buffer[4] = a66196837;
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
void* _6995 = arg_buffer[1];
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

void* kont67226840 = prim_car(x);
void* x6841 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67226840);
arg_buffer[2] = x6841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67226840))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam6998_fptr() // lam6998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6999 = arg_buffer[1];
//reading env and args
void* a66266851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6724 = (decode_clo(env6999))[3];
//not do dummy comment
void* x = (decode_clo(env6999))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6999))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont6724;
arg_buffer[3] = x;
arg_buffer[4] = a66266851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6998 = encode_clo(alloc_clo(lam6998_fptr, 0));

void* lam7000_fptr() // lam7000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7001 = arg_buffer[1];
//reading env and args
void* a66246848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7001))[5];
//not do dummy comment
void* lst = (decode_clo(env7001))[4];
//not do dummy comment
void* kont6724 = (decode_clo(env7001))[3];
//not do dummy comment
void* x = (decode_clo(env7001))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env7001))[1];

//if-clause
bool if_guard27584 = is_true(a66246848);
if(if_guard27584)
{
void* x66256849 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6724);
arg_buffer[2] = x66256849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27586 = alloc_clo(lam6998_fptr, 3);

//setting env list
clo27586[1] = member_u63;
clo27586[2] = x;
clo27586[3] = kont6724;
void* f67256850 = encode_clo(clo27586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67256850;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7000 = encode_clo(alloc_clo(lam7000_fptr, 0));

void* lam7002_fptr() // lam7002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7003 = arg_buffer[1];
//reading env and args
void* a66236846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7003))[6];
//not do dummy comment
void* lst = (decode_clo(env7003))[5];
//not do dummy comment
void* kont6724 = (decode_clo(env7003))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env7003))[3];
//not do dummy comment
void* x = (decode_clo(env7003))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env7003))[1];

//creating new closure instance
void** clo27588 = alloc_clo(lam7000_fptr, 5);

//setting env list
clo27588[1] = member_u63;
clo27588[2] = x;
clo27588[3] = kont6724;
clo27588[4] = lst;
clo27588[5] = cdr;
void* f67266847 = encode_clo(clo27588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f67266847;
arg_buffer[3] = a66236846;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7002 = encode_clo(alloc_clo(lam7002_fptr, 0));

void* lam7004_fptr() // lam7004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7005 = arg_buffer[1];
//reading env and args
void* a66216843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7005))[7];
//not do dummy comment
void* lst = (decode_clo(env7005))[6];
//not do dummy comment
void* kont6724 = (decode_clo(env7005))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env7005))[4];
//not do dummy comment
void* x = (decode_clo(env7005))[3];
//not do dummy comment
void* car = (decode_clo(env7005))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env7005))[1];

//if-clause
bool if_guard27589 = is_true(a66216843);
if(if_guard27589)
{
void* x66226844 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6724);
arg_buffer[2] = x66226844;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27591 = alloc_clo(lam7002_fptr, 6);

//setting env list
clo27591[1] = member_u63;
clo27591[2] = x;
clo27591[3] = equal_u63;
clo27591[4] = kont6724;
clo27591[5] = lst;
clo27591[6] = cdr;
void* f67276845 = encode_clo(clo27591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67276845;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7004 = encode_clo(alloc_clo(lam7004_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7006 = arg_buffer[1];
//reading env and args
void* kont6724 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27593 = alloc_clo(lam7004_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo27593[1] = member_u63;
clo27593[2] = car;
clo27593[3] = x;
clo27593[4] = equal_u63;
clo27593[5] = kont6724;
clo27593[6] = lst;
clo27593[7] = cdr;
void* f67286842 = encode_clo(clo27593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67286842;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam7007_fptr() // lam7007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7008 = arg_buffer[1];
//reading env and args
void* a66306859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env7008))[4];
//not do dummy comment
void* foldl = (decode_clo(env7008))[3];
//not do dummy comment
void* kont6729 = (decode_clo(env7008))[2];
//not do dummy comment
void* a66296857 = (decode_clo(env7008))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont6729;
arg_buffer[3] = fun;
arg_buffer[4] = a66296857;
arg_buffer[5] = a66306859;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7007 = encode_clo(alloc_clo(lam7007_fptr, 0));

void* lam7009_fptr() // lam7009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7010 = arg_buffer[1];
//reading env and args
void* a66296857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7010))[5];
//not do dummy comment
void* lst = (decode_clo(env7010))[4];
//not do dummy comment
void* fun = (decode_clo(env7010))[3];
//not do dummy comment
void* kont6729 = (decode_clo(env7010))[2];
//not do dummy comment
void* foldl = (decode_clo(env7010))[1];

//creating new closure instance
void** clo27595 = alloc_clo(lam7007_fptr, 4);

//setting env list
clo27595[1] = a66296857;
clo27595[2] = kont6729;
clo27595[3] = foldl;
clo27595[4] = fun;
void* f67306858 = encode_clo(clo27595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67306858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7009 = encode_clo(alloc_clo(lam7009_fptr, 0));

void* lam7011_fptr() // lam7011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7012 = arg_buffer[1];
//reading env and args
void* a66286855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7012))[6];
//not do dummy comment
void* lst = (decode_clo(env7012))[5];
//not do dummy comment
void* fun = (decode_clo(env7012))[4];
//not do dummy comment
void* acc = (decode_clo(env7012))[3];
//not do dummy comment
void* kont6729 = (decode_clo(env7012))[2];
//not do dummy comment
void* foldl = (decode_clo(env7012))[1];

//creating new closure instance
void** clo27597 = alloc_clo(lam7009_fptr, 5);

//setting env list
clo27597[1] = foldl;
clo27597[2] = kont6729;
clo27597[3] = fun;
clo27597[4] = lst;
clo27597[5] = cdr;
void* f67316856 = encode_clo(clo27597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f67316856;
arg_buffer[3] = a66286855;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7011 = encode_clo(alloc_clo(lam7011_fptr, 0));

void* lam7013_fptr() // lam7013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7014 = arg_buffer[1];
//reading env and args
void* a66276853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7014))[7];
//not do dummy comment
void* lst = (decode_clo(env7014))[6];
//not do dummy comment
void* fun = (decode_clo(env7014))[5];
//not do dummy comment
void* acc = (decode_clo(env7014))[4];
//not do dummy comment
void* kont6729 = (decode_clo(env7014))[3];
//not do dummy comment
void* car = (decode_clo(env7014))[2];
//not do dummy comment
void* foldl = (decode_clo(env7014))[1];

//if-clause
bool if_guard27598 = is_true(a66276853);
if(if_guard27598)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6729);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6729))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27600 = alloc_clo(lam7011_fptr, 6);

//setting env list
clo27600[1] = foldl;
clo27600[2] = kont6729;
clo27600[3] = acc;
clo27600[4] = fun;
clo27600[5] = lst;
clo27600[6] = cdr;
void* f67326854 = encode_clo(clo27600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67326854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7013 = encode_clo(alloc_clo(lam7013_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7015 = arg_buffer[1];
//reading env and args
void* kont6729 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo27602 = alloc_clo(lam7013_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo27602[1] = foldl;
clo27602[2] = car;
clo27602[3] = kont6729;
clo27602[4] = acc;
clo27602[5] = fun;
clo27602[6] = lst;
clo27602[7] = cdr;
void* f67336852 = encode_clo(clo27602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67336852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam7016_fptr() // lam7016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7017 = arg_buffer[1];
//reading env and args
void* a66346867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6734 = (decode_clo(env7017))[3];
//not do dummy comment
void* a66326863 = (decode_clo(env7017))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env7017))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont6734;
arg_buffer[3] = a66326863;
arg_buffer[4] = a66346867;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7016 = encode_clo(alloc_clo(lam7016_fptr, 0));

void* lam7018_fptr() // lam7018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7019 = arg_buffer[1];
//reading env and args
void* a66336865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6734 = (decode_clo(env7019))[5];
//not do dummy comment
void* a66326863 = (decode_clo(env7019))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env7019))[3];
//not do dummy comment
void* lst2 = (decode_clo(env7019))[2];
//not do dummy comment
void* cons = (decode_clo(env7019))[1];

//creating new closure instance
void** clo27604 = alloc_clo(lam7016_fptr, 3);

//setting env list
clo27604[1] = reverse_u45helper;
clo27604[2] = a66326863;
clo27604[3] = kont6734;
void* f67356866 = encode_clo(clo27604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f67356866;
arg_buffer[3] = a66336865;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7018 = encode_clo(alloc_clo(lam7018_fptr, 0));

void* lam7020_fptr() // lam7020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7021 = arg_buffer[1];
//reading env and args
void* a66326863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6734 = (decode_clo(env7021))[6];
//not do dummy comment
void* lst = (decode_clo(env7021))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env7021))[4];
//not do dummy comment
void* lst2 = (decode_clo(env7021))[3];
//not do dummy comment
void* car = (decode_clo(env7021))[2];
//not do dummy comment
void* cons = (decode_clo(env7021))[1];

//creating new closure instance
void** clo27606 = alloc_clo(lam7018_fptr, 5);

//setting env list
clo27606[1] = cons;
clo27606[2] = lst2;
clo27606[3] = reverse_u45helper;
clo27606[4] = a66326863;
clo27606[5] = kont6734;
void* f67366864 = encode_clo(clo27606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67366864;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7020 = encode_clo(alloc_clo(lam7020_fptr, 0));

void* lam7022_fptr() // lam7022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7023 = arg_buffer[1];
//reading env and args
void* a66316861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7023))[7];
//not do dummy comment
void* kont6734 = (decode_clo(env7023))[6];
//not do dummy comment
void* lst = (decode_clo(env7023))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env7023))[4];
//not do dummy comment
void* lst2 = (decode_clo(env7023))[3];
//not do dummy comment
void* car = (decode_clo(env7023))[2];
//not do dummy comment
void* cons = (decode_clo(env7023))[1];

//if-clause
bool if_guard27607 = is_true(a66316861);
if(if_guard27607)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6734);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6734))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27609 = alloc_clo(lam7020_fptr, 6);

//setting env list
clo27609[1] = cons;
clo27609[2] = car;
clo27609[3] = lst2;
clo27609[4] = reverse_u45helper;
clo27609[5] = lst;
clo27609[6] = kont6734;
void* f67376862 = encode_clo(clo27609);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67376862;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7022 = encode_clo(alloc_clo(lam7022_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7024 = arg_buffer[1];
//reading env and args
void* kont6734 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27611 = alloc_clo(lam7022_fptr, 7);

//setting env list
clo27611[1] = cons;
clo27611[2] = car;
clo27611[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo27611[4] = reverse_u45helper;
clo27611[5] = lst;
clo27611[6] = kont6734;
clo27611[7] = cdr;
void* f67386860 = encode_clo(clo27611);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67386860;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam7025_fptr() // lam7025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7026 = arg_buffer[1];
//reading env and args
void* a66356869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env7026))[3];
//not do dummy comment
void* kont6739 = (decode_clo(env7026))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env7026))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont6739;
arg_buffer[3] = lst;
arg_buffer[4] = a66356869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7025 = encode_clo(alloc_clo(lam7025_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7027 = arg_buffer[1];
//reading env and args
void* kont6739 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo27613 = alloc_clo(lam7025_fptr, 3);

//setting env list
clo27613[1] = reverse_u45helper;
clo27613[2] = kont6739;
clo27613[3] = lst;
void* f67406868 = encode_clo(clo27613);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f67406868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam7028_fptr() // lam7028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7029 = arg_buffer[1];
//reading env and args
void* x66386874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6741 = (decode_clo(env7029))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6741);
arg_buffer[2] = x66386874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6741))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7028 = encode_clo(alloc_clo(lam7028_fptr, 0));

void* lam7030_fptr() // lam7030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7031 = arg_buffer[1];
//reading env and args
void* a66436883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66416879 = (decode_clo(env7031))[4];
//not do dummy comment
void* kont6741 = (decode_clo(env7031))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env7031))[2];
//not do dummy comment
void* a66396876 = (decode_clo(env7031))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont6741;
arg_buffer[3] = a66396876;
arg_buffer[4] = a66416879;
arg_buffer[5] = a66436883;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7030 = encode_clo(alloc_clo(lam7030_fptr, 0));

void* lam7032_fptr() // lam7032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7033 = arg_buffer[1];
//reading env and args
void* a66426881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66416879 = (decode_clo(env7033))[6];
//not do dummy comment
void* kont6741 = (decode_clo(env7033))[5];
//not do dummy comment
void* cons = (decode_clo(env7033))[4];
//not do dummy comment
void* a66396876 = (decode_clo(env7033))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env7033))[2];
//not do dummy comment
void* lst2 = (decode_clo(env7033))[1];

//creating new closure instance
void** clo27615 = alloc_clo(lam7030_fptr, 4);

//setting env list
clo27615[1] = a66396876;
clo27615[2] = take_u45helper;
clo27615[3] = kont6741;
clo27615[4] = a66416879;
void* f67436882 = encode_clo(clo27615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f67436882;
arg_buffer[3] = a66426881;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7032 = encode_clo(alloc_clo(lam7032_fptr, 0));

void* lam7034_fptr() // lam7034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7035 = arg_buffer[1];
//reading env and args
void* a66416879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env7035))[7];
//not do dummy comment
void* kont6741 = (decode_clo(env7035))[6];
//not do dummy comment
void* car = (decode_clo(env7035))[5];
//not do dummy comment
void* cons = (decode_clo(env7035))[4];
//not do dummy comment
void* a66396876 = (decode_clo(env7035))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env7035))[2];
//not do dummy comment
void* lst2 = (decode_clo(env7035))[1];

//creating new closure instance
void** clo27617 = alloc_clo(lam7032_fptr, 6);

//setting env list
clo27617[1] = lst2;
clo27617[2] = take_u45helper;
clo27617[3] = a66396876;
clo27617[4] = cons;
clo27617[5] = kont6741;
clo27617[6] = a66416879;
void* f67446880 = encode_clo(clo27617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67446880;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7034 = encode_clo(alloc_clo(lam7034_fptr, 0));

void* lam7037_fptr() // lam7037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7038 = arg_buffer[1];
//reading env and args
void* a66396876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env7038))[8];
//not do dummy comment
void* kont6741 = (decode_clo(env7038))[7];
//not do dummy comment
void* cons = (decode_clo(env7038))[6];
//not do dummy comment
void* _u45 = (decode_clo(env7038))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env7038))[4];
//not do dummy comment
void* lst2 = (decode_clo(env7038))[3];
//not do dummy comment
void* n = (decode_clo(env7038))[2];
//not do dummy comment
void* car = (decode_clo(env7038))[1];
mpz_t* mpzvar27618 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27618, "1", 10);
void* a66406877 = encode_mpz(mpzvar27618);

//creating new closure instance
void** clo27620 = alloc_clo(lam7034_fptr, 7);

//setting env list
clo27620[1] = lst2;
clo27620[2] = take_u45helper;
clo27620[3] = a66396876;
clo27620[4] = cons;
clo27620[5] = car;
clo27620[6] = kont6741;
clo27620[7] = lst;
void* f67456878 = encode_clo(clo27620);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f67456878;
arg_buffer[3] = n;
arg_buffer[4] = a66406877;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7037 = encode_clo(alloc_clo(lam7037_fptr, 0));

void* lam7039_fptr() // lam7039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7040 = arg_buffer[1];
//reading env and args
void* a66376872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7040))[10];
//not do dummy comment
void* lst = (decode_clo(env7040))[9];
//not do dummy comment
void* reverse = (decode_clo(env7040))[8];
//not do dummy comment
void* kont6741 = (decode_clo(env7040))[7];
//not do dummy comment
void* cons = (decode_clo(env7040))[6];
//not do dummy comment
void* _u45 = (decode_clo(env7040))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env7040))[4];
//not do dummy comment
void* lst2 = (decode_clo(env7040))[3];
//not do dummy comment
void* n = (decode_clo(env7040))[2];
//not do dummy comment
void* car = (decode_clo(env7040))[1];

//if-clause
bool if_guard27621 = is_true(a66376872);
if(if_guard27621)
{

//creating new closure instance
void** clo27623 = alloc_clo(lam7028_fptr, 1);

//setting env list
clo27623[1] = kont6741;
void* f67426873 = encode_clo(clo27623);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f67426873;
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
void** clo27625 = alloc_clo(lam7037_fptr, 8);

//setting env list
clo27625[1] = car;
clo27625[2] = n;
clo27625[3] = lst2;
clo27625[4] = take_u45helper;
clo27625[5] = _u45;
clo27625[6] = cons;
clo27625[7] = kont6741;
clo27625[8] = lst;
void* f67466875 = encode_clo(clo27625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67466875;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7039 = encode_clo(alloc_clo(lam7039_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7042 = arg_buffer[1];
//reading env and args
void* kont6741 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar27626 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27626, "0", 10);
void* a66366870 = encode_mpz(mpzvar27626);

//creating new closure instance
void** clo27628 = alloc_clo(lam7039_fptr, 10);

//setting env list
clo27628[1] = car;
clo27628[2] = n;
clo27628[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo27628[4] = take_u45helper;
clo27628[5] = _u45;
clo27628[6] = cons;
clo27628[7] = kont6741;
clo27628[8] = reverse;
clo27628[9] = lst;
clo27628[10] = cdr;
void* f67476871 = encode_clo(clo27628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f67476871;
arg_buffer[3] = n;
arg_buffer[4] = a66366870;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam7043_fptr() // lam7043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7044 = arg_buffer[1];
//reading env and args
void* a66446885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env7044))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env7044))[3];
//not do dummy comment
void* n = (decode_clo(env7044))[2];
//not do dummy comment
void* kont6748 = (decode_clo(env7044))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont6748;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a66446885;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7043 = encode_clo(alloc_clo(lam7043_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7045 = arg_buffer[1];
//reading env and args
void* kont6748 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27630 = alloc_clo(lam7043_fptr, 4);

//setting env list
clo27630[1] = kont6748;
clo27630[2] = n;
clo27630[3] = take_u45helper;
clo27630[4] = lst;
void* f67496884 = encode_clo(clo27630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f67496884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam7047_fptr() // lam7047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7048 = arg_buffer[1];
//reading env and args
void* a66496893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6750 = (decode_clo(env7048))[3];
//not do dummy comment
void* _u43 = (decode_clo(env7048))[2];
//not do dummy comment
void* a66476889 = (decode_clo(env7048))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont6750;
arg_buffer[3] = a66476889;
arg_buffer[4] = a66496893;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7047 = encode_clo(alloc_clo(lam7047_fptr, 0));

void* lam7049_fptr() // lam7049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7050 = arg_buffer[1];
//reading env and args
void* a66486891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6750 = (decode_clo(env7050))[4];
//not do dummy comment
void* length = (decode_clo(env7050))[3];
//not do dummy comment
void* _u43 = (decode_clo(env7050))[2];
//not do dummy comment
void* a66476889 = (decode_clo(env7050))[1];

//creating new closure instance
void** clo27632 = alloc_clo(lam7047_fptr, 3);

//setting env list
clo27632[1] = a66476889;
clo27632[2] = _u43;
clo27632[3] = kont6750;
void* f67516892 = encode_clo(clo27632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f67516892;
arg_buffer[3] = a66486891;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7049 = encode_clo(alloc_clo(lam7049_fptr, 0));

void* lam7052_fptr() // lam7052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7053 = arg_buffer[1];
//reading env and args
void* a66456887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7053))[5];
//not do dummy comment
void* kont6750 = (decode_clo(env7053))[4];
//not do dummy comment
void* lst = (decode_clo(env7053))[3];
//not do dummy comment
void* length = (decode_clo(env7053))[2];
//not do dummy comment
void* _u43 = (decode_clo(env7053))[1];

//if-clause
bool if_guard27633 = is_true(a66456887);
if(if_guard27633)
{
mpz_t* mpzvar27634 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27634, "0", 10);
void* x66466888 = encode_mpz(mpzvar27634);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6750);
arg_buffer[2] = x66466888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6750))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar27635 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27635, "1", 10);
void* a66476889 = encode_mpz(mpzvar27635);

//creating new closure instance
void** clo27637 = alloc_clo(lam7049_fptr, 4);

//setting env list
clo27637[1] = a66476889;
clo27637[2] = _u43;
clo27637[3] = length;
clo27637[4] = kont6750;
void* f67526890 = encode_clo(clo27637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67526890;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7052 = encode_clo(alloc_clo(lam7052_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7054 = arg_buffer[1];
//reading env and args
void* kont6750 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo27639 = alloc_clo(lam7052_fptr, 5);

//setting env list
clo27639[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo27639[2] = length;
clo27639[3] = lst;
clo27639[4] = kont6750;
clo27639[5] = cdr;
void* f67536886 = encode_clo(clo27639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67536886;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam7055_fptr() // lam7055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7056 = arg_buffer[1];
//reading env and args
void* x66516897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6754 = (decode_clo(env7056))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6754);
arg_buffer[2] = x66516897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6754))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7055 = encode_clo(alloc_clo(lam7055_fptr, 0));

void* lam7057_fptr() // lam7057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7058 = arg_buffer[1];
//reading env and args
void* a66556905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6754 = (decode_clo(env7058))[3];
//not do dummy comment
void* a66536901 = (decode_clo(env7058))[2];
//not do dummy comment
void* cons = (decode_clo(env7058))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont6754;
arg_buffer[3] = a66536901;
arg_buffer[4] = a66556905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7057 = encode_clo(alloc_clo(lam7057_fptr, 0));

void* lam7059_fptr() // lam7059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7060 = arg_buffer[1];
//reading env and args
void* a66546903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66536901 = (decode_clo(env7060))[5];
//not do dummy comment
void* proc = (decode_clo(env7060))[4];
//not do dummy comment
void* cons = (decode_clo(env7060))[3];
//not do dummy comment
void* map = (decode_clo(env7060))[2];
//not do dummy comment
void* kont6754 = (decode_clo(env7060))[1];

//creating new closure instance
void** clo27641 = alloc_clo(lam7057_fptr, 3);

//setting env list
clo27641[1] = cons;
clo27641[2] = a66536901;
clo27641[3] = kont6754;
void* f67566904 = encode_clo(clo27641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f67566904;
arg_buffer[3] = proc;
arg_buffer[4] = a66546903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7059 = encode_clo(alloc_clo(lam7059_fptr, 0));

void* lam7061_fptr() // lam7061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7062 = arg_buffer[1];
//reading env and args
void* a66536901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7062))[6];
//not do dummy comment
void* lst = (decode_clo(env7062))[5];
//not do dummy comment
void* proc = (decode_clo(env7062))[4];
//not do dummy comment
void* cons = (decode_clo(env7062))[3];
//not do dummy comment
void* map = (decode_clo(env7062))[2];
//not do dummy comment
void* kont6754 = (decode_clo(env7062))[1];

//creating new closure instance
void** clo27643 = alloc_clo(lam7059_fptr, 5);

//setting env list
clo27643[1] = kont6754;
clo27643[2] = map;
clo27643[3] = cons;
clo27643[4] = proc;
clo27643[5] = a66536901;
void* f67576902 = encode_clo(clo27643);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67576902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7061 = encode_clo(alloc_clo(lam7061_fptr, 0));

void* lam7063_fptr() // lam7063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7064 = arg_buffer[1];
//reading env and args
void* a66526899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7064))[6];
//not do dummy comment
void* lst = (decode_clo(env7064))[5];
//not do dummy comment
void* proc = (decode_clo(env7064))[4];
//not do dummy comment
void* cons = (decode_clo(env7064))[3];
//not do dummy comment
void* map = (decode_clo(env7064))[2];
//not do dummy comment
void* kont6754 = (decode_clo(env7064))[1];

//creating new closure instance
void** clo27645 = alloc_clo(lam7061_fptr, 6);

//setting env list
clo27645[1] = kont6754;
clo27645[2] = map;
clo27645[3] = cons;
clo27645[4] = proc;
clo27645[5] = lst;
clo27645[6] = cdr;
void* f67586900 = encode_clo(clo27645);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f67586900;
arg_buffer[3] = a66526899;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7063 = encode_clo(alloc_clo(lam7063_fptr, 0));

void* lam7065_fptr() // lam7065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7066 = arg_buffer[1];
//reading env and args
void* a66506895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env7066))[8];
//not do dummy comment
void* proc = (decode_clo(env7066))[7];
//not do dummy comment
void* car = (decode_clo(env7066))[6];
//not do dummy comment
void* cons = (decode_clo(env7066))[5];
//not do dummy comment
void* list = (decode_clo(env7066))[4];
//not do dummy comment
void* cdr = (decode_clo(env7066))[3];
//not do dummy comment
void* map = (decode_clo(env7066))[2];
//not do dummy comment
void* kont6754 = (decode_clo(env7066))[1];

//if-clause
bool if_guard27646 = is_true(a66506895);
if(if_guard27646)
{

//creating new closure instance
void** clo27648 = alloc_clo(lam7055_fptr, 1);

//setting env list
clo27648[1] = kont6754;
void* f67556896 = encode_clo(clo27648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f67556896;
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
void** clo27650 = alloc_clo(lam7063_fptr, 6);

//setting env list
clo27650[1] = kont6754;
clo27650[2] = map;
clo27650[3] = cons;
clo27650[4] = proc;
clo27650[5] = lst;
clo27650[6] = cdr;
void* f67596898 = encode_clo(clo27650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67596898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7065 = encode_clo(alloc_clo(lam7065_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7067 = arg_buffer[1];
//reading env and args
void* kont6754 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27652 = alloc_clo(lam7065_fptr, 8);

//setting env list
clo27652[1] = kont6754;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo27652[2] = map;
clo27652[3] = cdr;
clo27652[4] = list;
clo27652[5] = cons;
clo27652[6] = car;
clo27652[7] = proc;
clo27652[8] = lst;
void* f67606894 = encode_clo(clo27652);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67606894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam7068_fptr() // lam7068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7069 = arg_buffer[1];
//reading env and args
void* x66576909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6761 = (decode_clo(env7069))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6761);
arg_buffer[2] = x66576909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6761))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7068 = encode_clo(alloc_clo(lam7068_fptr, 0));

void* lam7070_fptr() // lam7070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7071 = arg_buffer[1];
//reading env and args
void* a66626919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66606915 = (decode_clo(env7071))[3];
//not do dummy comment
void* kont6761 = (decode_clo(env7071))[2];
//not do dummy comment
void* cons = (decode_clo(env7071))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont6761;
arg_buffer[3] = a66606915;
arg_buffer[4] = a66626919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7070 = encode_clo(alloc_clo(lam7070_fptr, 0));

void* lam7072_fptr() // lam7072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7073 = arg_buffer[1];
//reading env and args
void* a66616917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66606915 = (decode_clo(env7073))[5];
//not do dummy comment
void* op = (decode_clo(env7073))[4];
//not do dummy comment
void* kont6761 = (decode_clo(env7073))[3];
//not do dummy comment
void* filter = (decode_clo(env7073))[2];
//not do dummy comment
void* cons = (decode_clo(env7073))[1];

//creating new closure instance
void** clo27654 = alloc_clo(lam7070_fptr, 3);

//setting env list
clo27654[1] = cons;
clo27654[2] = kont6761;
clo27654[3] = a66606915;
void* f67636918 = encode_clo(clo27654);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f67636918;
arg_buffer[3] = op;
arg_buffer[4] = a66616917;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7072 = encode_clo(alloc_clo(lam7072_fptr, 0));

void* lam7074_fptr() // lam7074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7075 = arg_buffer[1];
//reading env and args
void* a66606915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7075))[6];
//not do dummy comment
void* lst = (decode_clo(env7075))[5];
//not do dummy comment
void* op = (decode_clo(env7075))[4];
//not do dummy comment
void* kont6761 = (decode_clo(env7075))[3];
//not do dummy comment
void* filter = (decode_clo(env7075))[2];
//not do dummy comment
void* cons = (decode_clo(env7075))[1];

//creating new closure instance
void** clo27656 = alloc_clo(lam7072_fptr, 5);

//setting env list
clo27656[1] = cons;
clo27656[2] = filter;
clo27656[3] = kont6761;
clo27656[4] = op;
clo27656[5] = a66606915;
void* f67646916 = encode_clo(clo27656);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67646916;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7074 = encode_clo(alloc_clo(lam7074_fptr, 0));

void* lam7076_fptr() // lam7076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7077 = arg_buffer[1];
//reading env and args
void* a66636921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env7077))[3];
//not do dummy comment
void* kont6761 = (decode_clo(env7077))[2];
//not do dummy comment
void* filter = (decode_clo(env7077))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont6761;
arg_buffer[3] = op;
arg_buffer[4] = a66636921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7076 = encode_clo(alloc_clo(lam7076_fptr, 0));

void* lam7078_fptr() // lam7078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7079 = arg_buffer[1];
//reading env and args
void* a66596913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7079))[7];
//not do dummy comment
void* lst = (decode_clo(env7079))[6];
//not do dummy comment
void* op = (decode_clo(env7079))[5];
//not do dummy comment
void* kont6761 = (decode_clo(env7079))[4];
//not do dummy comment
void* cons = (decode_clo(env7079))[3];
//not do dummy comment
void* filter = (decode_clo(env7079))[2];
//not do dummy comment
void* car = (decode_clo(env7079))[1];

//if-clause
bool if_guard27657 = is_true(a66596913);
if(if_guard27657)
{

//creating new closure instance
void** clo27659 = alloc_clo(lam7074_fptr, 6);

//setting env list
clo27659[1] = cons;
clo27659[2] = filter;
clo27659[3] = kont6761;
clo27659[4] = op;
clo27659[5] = lst;
clo27659[6] = cdr;
void* f67656914 = encode_clo(clo27659);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67656914;
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
void** clo27661 = alloc_clo(lam7076_fptr, 3);

//setting env list
clo27661[1] = filter;
clo27661[2] = kont6761;
clo27661[3] = op;
void* f67666920 = encode_clo(clo27661);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67666920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7078 = encode_clo(alloc_clo(lam7078_fptr, 0));

void* lam7080_fptr() // lam7080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7081 = arg_buffer[1];
//reading env and args
void* a66586911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7081))[7];
//not do dummy comment
void* lst = (decode_clo(env7081))[6];
//not do dummy comment
void* op = (decode_clo(env7081))[5];
//not do dummy comment
void* kont6761 = (decode_clo(env7081))[4];
//not do dummy comment
void* cons = (decode_clo(env7081))[3];
//not do dummy comment
void* filter = (decode_clo(env7081))[2];
//not do dummy comment
void* car = (decode_clo(env7081))[1];

//creating new closure instance
void** clo27663 = alloc_clo(lam7078_fptr, 7);

//setting env list
clo27663[1] = car;
clo27663[2] = filter;
clo27663[3] = cons;
clo27663[4] = kont6761;
clo27663[5] = op;
clo27663[6] = lst;
clo27663[7] = cdr;
void* f67676912 = encode_clo(clo27663);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f67676912;
arg_buffer[3] = a66586911;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7080 = encode_clo(alloc_clo(lam7080_fptr, 0));

void* lam7082_fptr() // lam7082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7083 = arg_buffer[1];
//reading env and args
void* a66566907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env7083))[8];
//not do dummy comment
void* op = (decode_clo(env7083))[7];
//not do dummy comment
void* kont6761 = (decode_clo(env7083))[6];
//not do dummy comment
void* cons = (decode_clo(env7083))[5];
//not do dummy comment
void* list = (decode_clo(env7083))[4];
//not do dummy comment
void* cdr = (decode_clo(env7083))[3];
//not do dummy comment
void* filter = (decode_clo(env7083))[2];
//not do dummy comment
void* car = (decode_clo(env7083))[1];

//if-clause
bool if_guard27664 = is_true(a66566907);
if(if_guard27664)
{

//creating new closure instance
void** clo27666 = alloc_clo(lam7068_fptr, 1);

//setting env list
clo27666[1] = kont6761;
void* f67626908 = encode_clo(clo27666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f67626908;
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
void** clo27668 = alloc_clo(lam7080_fptr, 7);

//setting env list
clo27668[1] = car;
clo27668[2] = filter;
clo27668[3] = cons;
clo27668[4] = kont6761;
clo27668[5] = op;
clo27668[6] = lst;
clo27668[7] = cdr;
void* f67686910 = encode_clo(clo27668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67686910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7082 = encode_clo(alloc_clo(lam7082_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7084 = arg_buffer[1];
//reading env and args
void* kont6761 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27670 = alloc_clo(lam7082_fptr, 8);

//setting env list
clo27670[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo27670[2] = filter;
clo27670[3] = cdr;
clo27670[4] = list;
clo27670[5] = cons;
clo27670[6] = kont6761;
clo27670[7] = op;
clo27670[8] = lst;
void* f67696906 = encode_clo(clo27670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67696906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam7085_fptr() // lam7085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7086 = arg_buffer[1];
//reading env and args
void* a66686929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66666926 = (decode_clo(env7086))[3];
//not do dummy comment
void* drop = (decode_clo(env7086))[2];
//not do dummy comment
void* kont6770 = (decode_clo(env7086))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont6770;
arg_buffer[3] = a66666926;
arg_buffer[4] = a66686929;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7085 = encode_clo(alloc_clo(lam7085_fptr, 0));

void* lam7088_fptr() // lam7088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7089 = arg_buffer[1];
//reading env and args
void* a66666926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env7089))[4];
//not do dummy comment
void* kont6770 = (decode_clo(env7089))[3];
//not do dummy comment
void* n = (decode_clo(env7089))[2];
//not do dummy comment
void* _u45 = (decode_clo(env7089))[1];
mpz_t* mpzvar27671 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27671, "1", 10);
void* a66676927 = encode_mpz(mpzvar27671);

//creating new closure instance
void** clo27673 = alloc_clo(lam7085_fptr, 3);

//setting env list
clo27673[1] = kont6770;
clo27673[2] = drop;
clo27673[3] = a66666926;
void* f67716928 = encode_clo(clo27673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f67716928;
arg_buffer[3] = n;
arg_buffer[4] = a66676927;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7088 = encode_clo(alloc_clo(lam7088_fptr, 0));

void* lam7090_fptr() // lam7090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7091 = arg_buffer[1];
//reading env and args
void* a66656924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7091))[6];
//not do dummy comment
void* kont6770 = (decode_clo(env7091))[5];
//not do dummy comment
void* n = (decode_clo(env7091))[4];
//not do dummy comment
void* _u45 = (decode_clo(env7091))[3];
//not do dummy comment
void* lst = (decode_clo(env7091))[2];
//not do dummy comment
void* drop = (decode_clo(env7091))[1];

//if-clause
bool if_guard27674 = is_true(a66656924);
if(if_guard27674)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6770);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6770))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27676 = alloc_clo(lam7088_fptr, 4);

//setting env list
clo27676[1] = _u45;
clo27676[2] = n;
clo27676[3] = kont6770;
clo27676[4] = drop;
void* f67726925 = encode_clo(clo27676);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67726925;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7090 = encode_clo(alloc_clo(lam7090_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7093 = arg_buffer[1];
//reading env and args
void* kont6770 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar27677 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27677, "0", 10);
void* a66646922 = encode_mpz(mpzvar27677);

//creating new closure instance
void** clo27679 = alloc_clo(lam7090_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo27679[1] = drop;
clo27679[2] = lst;
clo27679[3] = _u45;
clo27679[4] = n;
clo27679[5] = kont6770;
clo27679[6] = cdr;
void* f67736923 = encode_clo(clo27679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f67736923;
arg_buffer[3] = n;
arg_buffer[4] = a66646922;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam7094_fptr() // lam7094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7095 = arg_buffer[1];
//reading env and args
void* a66726937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66706933 = (decode_clo(env7095))[3];
//not do dummy comment
void* kont6774 = (decode_clo(env7095))[2];
//not do dummy comment
void* proc = (decode_clo(env7095))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont6774;
arg_buffer[3] = a66706933;
arg_buffer[4] = a66726937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7094 = encode_clo(alloc_clo(lam7094_fptr, 0));

void* lam7096_fptr() // lam7096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7097 = arg_buffer[1];
//reading env and args
void* a66716935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env7097))[5];
//not do dummy comment
void* a66706933 = (decode_clo(env7097))[4];
//not do dummy comment
void* kont6774 = (decode_clo(env7097))[3];
//not do dummy comment
void* proc = (decode_clo(env7097))[2];
//not do dummy comment
void* acc = (decode_clo(env7097))[1];

//creating new closure instance
void** clo27681 = alloc_clo(lam7094_fptr, 3);

//setting env list
clo27681[1] = proc;
clo27681[2] = kont6774;
clo27681[3] = a66706933;
void* f67756936 = encode_clo(clo27681);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f67756936;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a66716935;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7096 = encode_clo(alloc_clo(lam7096_fptr, 0));

void* lam7098_fptr() // lam7098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7099 = arg_buffer[1];
//reading env and args
void* a66706933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7099))[6];
//not do dummy comment
void* kont6774 = (decode_clo(env7099))[5];
//not do dummy comment
void* foldr = (decode_clo(env7099))[4];
//not do dummy comment
void* lst = (decode_clo(env7099))[3];
//not do dummy comment
void* proc = (decode_clo(env7099))[2];
//not do dummy comment
void* acc = (decode_clo(env7099))[1];

//creating new closure instance
void** clo27683 = alloc_clo(lam7096_fptr, 5);

//setting env list
clo27683[1] = acc;
clo27683[2] = proc;
clo27683[3] = kont6774;
clo27683[4] = a66706933;
clo27683[5] = foldr;
void* f67766934 = encode_clo(clo27683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67766934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7098 = encode_clo(alloc_clo(lam7098_fptr, 0));

void* lam7100_fptr() // lam7100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7101 = arg_buffer[1];
//reading env and args
void* a66696931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7101))[7];
//not do dummy comment
void* kont6774 = (decode_clo(env7101))[6];
//not do dummy comment
void* car = (decode_clo(env7101))[5];
//not do dummy comment
void* foldr = (decode_clo(env7101))[4];
//not do dummy comment
void* lst = (decode_clo(env7101))[3];
//not do dummy comment
void* proc = (decode_clo(env7101))[2];
//not do dummy comment
void* acc = (decode_clo(env7101))[1];

//if-clause
bool if_guard27684 = is_true(a66696931);
if(if_guard27684)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6774);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27686 = alloc_clo(lam7098_fptr, 6);

//setting env list
clo27686[1] = acc;
clo27686[2] = proc;
clo27686[3] = lst;
clo27686[4] = foldr;
clo27686[5] = kont6774;
clo27686[6] = cdr;
void* f67776932 = encode_clo(clo27686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67776932;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7100 = encode_clo(alloc_clo(lam7100_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7102 = arg_buffer[1];
//reading env and args
void* kont6774 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo27688 = alloc_clo(lam7100_fptr, 7);

//setting env list
clo27688[1] = acc;
clo27688[2] = proc;
clo27688[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo27688[4] = foldr;
clo27688[5] = car;
clo27688[6] = kont6774;
clo27688[7] = cdr;
void* f67786930 = encode_clo(clo27688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67786930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam7103_fptr() // lam7103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7104 = arg_buffer[1];
//reading env and args
void* a66766945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66746941 = (decode_clo(env7104))[3];
//not do dummy comment
void* cons = (decode_clo(env7104))[2];
//not do dummy comment
void* kont6779 = (decode_clo(env7104))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont6779;
arg_buffer[3] = a66746941;
arg_buffer[4] = a66766945;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7103 = encode_clo(alloc_clo(lam7103_fptr, 0));

void* lam7105_fptr() // lam7105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7106 = arg_buffer[1];
//reading env and args
void* a66756943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66746941 = (decode_clo(env7106))[5];
//not do dummy comment
void* append = (decode_clo(env7106))[4];
//not do dummy comment
void* lst2 = (decode_clo(env7106))[3];
//not do dummy comment
void* cons = (decode_clo(env7106))[2];
//not do dummy comment
void* kont6779 = (decode_clo(env7106))[1];

//creating new closure instance
void** clo27690 = alloc_clo(lam7103_fptr, 3);

//setting env list
clo27690[1] = kont6779;
clo27690[2] = cons;
clo27690[3] = a66746941;
void* f67806944 = encode_clo(clo27690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f67806944;
arg_buffer[3] = a66756943;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7105 = encode_clo(alloc_clo(lam7105_fptr, 0));

void* lam7107_fptr() // lam7107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7108 = arg_buffer[1];
//reading env and args
void* a66746941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7108))[6];
//not do dummy comment
void* append = (decode_clo(env7108))[5];
//not do dummy comment
void* lst2 = (decode_clo(env7108))[4];
//not do dummy comment
void* lst1 = (decode_clo(env7108))[3];
//not do dummy comment
void* cons = (decode_clo(env7108))[2];
//not do dummy comment
void* kont6779 = (decode_clo(env7108))[1];

//creating new closure instance
void** clo27692 = alloc_clo(lam7105_fptr, 5);

//setting env list
clo27692[1] = kont6779;
clo27692[2] = cons;
clo27692[3] = lst2;
clo27692[4] = append;
clo27692[5] = a66746941;
void* f67816942 = encode_clo(clo27692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f67816942;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7107 = encode_clo(alloc_clo(lam7107_fptr, 0));

void* lam7109_fptr() // lam7109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7110 = arg_buffer[1];
//reading env and args
void* a66736939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7110))[7];
//not do dummy comment
void* append = (decode_clo(env7110))[6];
//not do dummy comment
void* lst2 = (decode_clo(env7110))[5];
//not do dummy comment
void* lst1 = (decode_clo(env7110))[4];
//not do dummy comment
void* car = (decode_clo(env7110))[3];
//not do dummy comment
void* cons = (decode_clo(env7110))[2];
//not do dummy comment
void* kont6779 = (decode_clo(env7110))[1];

//if-clause
bool if_guard27693 = is_true(a66736939);
if(if_guard27693)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6779);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6779))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27695 = alloc_clo(lam7107_fptr, 6);

//setting env list
clo27695[1] = kont6779;
clo27695[2] = cons;
clo27695[3] = lst1;
clo27695[4] = lst2;
clo27695[5] = append;
clo27695[6] = cdr;
void* f67826940 = encode_clo(clo27695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f67826940;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7109 = encode_clo(alloc_clo(lam7109_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7111 = arg_buffer[1];
//reading env and args
void* kont6779 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27697 = alloc_clo(lam7109_fptr, 7);

//setting env list
clo27697[1] = kont6779;
clo27697[2] = cons;
clo27697[3] = car;
clo27697[4] = lst1;
clo27697[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo27697[6] = append;
clo27697[7] = cdr;
void* f67836938 = encode_clo(clo27697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f67836938;
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
void* _7112 = arg_buffer[1];
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

void* kont67846946 = prim_car(lst);
void* lst6947 = prim_cdr(lst);
void* x66776948 = apply_prim_hash(lst6947);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67846946);
arg_buffer[2] = x66776948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67846946))[0]);
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
void* _7113 = arg_buffer[1];
//reading env and args
void* kont6786 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x66786949 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6786);
arg_buffer[2] = x66786949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6786))[0]);
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
void* _7114 = arg_buffer[1];
//reading env and args
void* kont6787 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x66796950 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6787);
arg_buffer[2] = x66796950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6787))[0]);
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
void* _7115 = arg_buffer[1];
//reading env and args
void* kont6788 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x66806951 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6788);
arg_buffer[2] = x66806951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6788))[0]);
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
void* _7116 = arg_buffer[1];
//reading env and args
void* kont6789 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x66816952 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6789);
arg_buffer[2] = x66816952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6789))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam7118_fptr() // lam7118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7119 = arg_buffer[1];
//reading env and args
void* a66896964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66846957 = (decode_clo(env7119))[4];
//not do dummy comment
void* helper = (decode_clo(env7119))[3];
//not do dummy comment
void* num = (decode_clo(env7119))[2];
//not do dummy comment
void* kont6790 = (decode_clo(env7119))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(helper);
arg_buffer[2] = kont6790;
arg_buffer[3] = a66846957;
arg_buffer[4] = a66896964;
arg_buffer[5] = num;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7118 = encode_clo(alloc_clo(lam7118_fptr, 0));

void* lam7120_fptr() // lam7120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7121 = arg_buffer[1];
//reading env and args
void* a66876962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66846957 = (decode_clo(env7121))[6];
//not do dummy comment
void* num = (decode_clo(env7121))[5];
//not do dummy comment
void* count = (decode_clo(env7121))[4];
//not do dummy comment
void* helper = (decode_clo(env7121))[3];
//not do dummy comment
void* _u43 = (decode_clo(env7121))[2];
//not do dummy comment
void* kont6790 = (decode_clo(env7121))[1];

//creating new closure instance
void** clo27699 = alloc_clo(lam7118_fptr, 4);

//setting env list
clo27699[1] = kont6790;
clo27699[2] = num;
clo27699[3] = helper;
clo27699[4] = a66846957;
void* f67916963 = encode_clo(clo27699);



//if-clause
bool if_guard27700 = is_true(a66876962);
if(if_guard27700)
{
mpz_t* mpzvar27701 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27701, "1", 10);
void* a66886965 = encode_mpz(mpzvar27701);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f67916963;
arg_buffer[3] = count;
arg_buffer[4] = a66886965;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f67916963);
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f67916963))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7120 = encode_clo(alloc_clo(lam7120_fptr, 0));

void* lam7123_fptr() // lam7123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7124 = arg_buffer[1];
//reading env and args
void* a66856959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a66846957 = (decode_clo(env7124))[7];
//not do dummy comment
void* num = (decode_clo(env7124))[6];
//not do dummy comment
void* _u61 = (decode_clo(env7124))[5];
//not do dummy comment
void* count = (decode_clo(env7124))[4];
//not do dummy comment
void* helper = (decode_clo(env7124))[3];
//not do dummy comment
void* _u43 = (decode_clo(env7124))[2];
//not do dummy comment
void* kont6790 = (decode_clo(env7124))[1];
mpz_t* mpzvar27702 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27702, "0", 10);
void* a66866960 = encode_mpz(mpzvar27702);

//creating new closure instance
void** clo27704 = alloc_clo(lam7120_fptr, 6);

//setting env list
clo27704[1] = kont6790;
clo27704[2] = _u43;
clo27704[3] = helper;
clo27704[4] = count;
clo27704[5] = num;
clo27704[6] = a66846957;
void* f67926961 = encode_clo(clo27704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f67926961;
arg_buffer[3] = a66856959;
arg_buffer[4] = a66866960;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7123 = encode_clo(alloc_clo(lam7123_fptr, 0));

void* lam7125_fptr() // lam7125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7126 = arg_buffer[1];
//reading env and args
void* a66846957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env7126))[8];
//not do dummy comment
void* i = (decode_clo(env7126))[7];
//not do dummy comment
void* _u61 = (decode_clo(env7126))[6];
//not do dummy comment
void* modulo = (decode_clo(env7126))[5];
//not do dummy comment
void* count = (decode_clo(env7126))[4];
//not do dummy comment
void* helper = (decode_clo(env7126))[3];
//not do dummy comment
void* _u43 = (decode_clo(env7126))[2];
//not do dummy comment
void* kont6790 = (decode_clo(env7126))[1];

//creating new closure instance
void** clo27706 = alloc_clo(lam7123_fptr, 7);

//setting env list
clo27706[1] = kont6790;
clo27706[2] = _u43;
clo27706[3] = helper;
clo27706[4] = count;
clo27706[5] = _u61;
clo27706[6] = num;
clo27706[7] = a66846957;
void* f67936958 = encode_clo(clo27706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f67936958;
arg_buffer[3] = num;
arg_buffer[4] = i;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7125 = encode_clo(alloc_clo(lam7125_fptr, 0));

void* lam7128_fptr() // lam7128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7129 = arg_buffer[1];
//reading env and args
void* a66826954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env7129))[8];
//not do dummy comment
void* i = (decode_clo(env7129))[7];
//not do dummy comment
void* _u61 = (decode_clo(env7129))[6];
//not do dummy comment
void* modulo = (decode_clo(env7129))[5];
//not do dummy comment
void* count = (decode_clo(env7129))[4];
//not do dummy comment
void* helper = (decode_clo(env7129))[3];
//not do dummy comment
void* _u43 = (decode_clo(env7129))[2];
//not do dummy comment
void* kont6790 = (decode_clo(env7129))[1];

//if-clause
bool if_guard27707 = is_true(a66826954);
if(if_guard27707)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6790);
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6790))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar27708 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27708, "1", 10);
void* a66836955 = encode_mpz(mpzvar27708);

//creating new closure instance
void** clo27710 = alloc_clo(lam7125_fptr, 8);

//setting env list
clo27710[1] = kont6790;
clo27710[2] = _u43;
clo27710[3] = helper;
clo27710[4] = count;
clo27710[5] = modulo;
clo27710[6] = _u61;
clo27710[7] = i;
clo27710[8] = num;
void* f67946956 = encode_clo(clo27710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f67946956;
arg_buffer[3] = i;
arg_buffer[4] = a66836955;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7128 = encode_clo(alloc_clo(lam7128_fptr, 0));

void* helper_fptr() // helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7130 = arg_buffer[1];
//reading env and args
void* kont6790 = arg_buffer[2];
void* i = arg_buffer[3];
void* count = arg_buffer[4];
void* num = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo27712 = alloc_clo(lam7128_fptr, 8);

//setting env list
clo27712[1] = kont6790;
clo27712[2] = _u43;
void* helper = encode_clo(alloc_clo(helper_fptr, 0));

clo27712[3] = helper;
clo27712[4] = count;
clo27712[5] = modulo;
clo27712[6] = _u61;
clo27712[7] = i;
clo27712[8] = num;
void* f67956953 = encode_clo(clo27712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = f67956953;
arg_buffer[3] = i;
arg_buffer[4] = num;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* helper = encode_clo(alloc_clo(helper_fptr, 0));

void* count_u45divisors_fptr() // count-divisors 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7133 = arg_buffer[1];
//reading env and args
void* kont6796 = arg_buffer[2];
void* num = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar27713 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27713, "1", 10);
void* a66906966 = encode_mpz(mpzvar27713);
mpz_t* mpzvar27714 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27714, "0", 10);
void* a66916967 = encode_mpz(mpzvar27714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(helper);
arg_buffer[2] = kont6796;
arg_buffer[3] = a66906966;
arg_buffer[4] = a66916967;
arg_buffer[5] = num;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* count_u45divisors = encode_clo(alloc_clo(count_u45divisors_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7135 = arg_buffer[1];
//reading env and args
void* kont6797 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar27715 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27715, "10", 10);
void* a66926968 = encode_mpz(mpzvar27715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(count_u45divisors);
arg_buffer[2] = kont6797;
arg_buffer[3] = a66926968;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(count_u45divisors))[0]);
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

