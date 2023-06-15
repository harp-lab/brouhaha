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
void* _47931 = arg_buffer[1];
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

void* kont4765647761 = prim_car(lst);
void* lst47762 = prim_cdr(lst);
void* x4756447763 = apply_prim__u43(lst47762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4765647761);
arg_buffer[2] = x4756447763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4765647761))[0]);
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
void* _47932 = arg_buffer[1];
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

void* kont4765847764 = prim_car(lst);
void* lst47765 = prim_cdr(lst);
void* x4756547766 = apply_prim__u45(lst47765);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4765847764);
arg_buffer[2] = x4756547766;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4765847764))[0]);
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
void* _47933 = arg_buffer[1];
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

void* kont4766047767 = prim_car(lst);
void* lst47768 = prim_cdr(lst);
void* x4756647769 = apply_prim__u42(lst47768);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4766047767);
arg_buffer[2] = x4756647769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4766047767))[0]);
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
void* _47934 = arg_buffer[1];
//reading env and args
void* kont47662 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4756747770 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47662);
arg_buffer[2] = x4756747770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47662))[0]);
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
void* _47935 = arg_buffer[1];
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

void* kont4766347771 = prim_car(lst);
void* lst47772 = prim_cdr(lst);
void* x4756847773 = apply_prim__u47(lst47772);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4766347771);
arg_buffer[2] = x4756847773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4766347771))[0]);
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
void* _47936 = arg_buffer[1];
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

void* kont4766547774 = prim_car(lst);
void* lst47775 = prim_cdr(lst);
void* x4756947776 = apply_prim__u61(lst47775);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4766547774);
arg_buffer[2] = x4756947776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4766547774))[0]);
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
void* _47937 = arg_buffer[1];
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

void* kont4766747777 = prim_car(lst);
void* lst47778 = prim_cdr(lst);
void* x4757047779 = apply_prim__u62(lst47778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4766747777);
arg_buffer[2] = x4757047779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4766747777))[0]);
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
void* _47938 = arg_buffer[1];
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

void* kont4766947780 = prim_car(lst);
void* lst47781 = prim_cdr(lst);
void* x4757147782 = apply_prim__u60(lst47781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4766947780);
arg_buffer[2] = x4757147782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4766947780))[0]);
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
void* _47939 = arg_buffer[1];
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

void* kont4767147783 = prim_car(lst);
void* lst47784 = prim_cdr(lst);
void* x4757247785 = apply_prim__u60_u61(lst47784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4767147783);
arg_buffer[2] = x4757247785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4767147783))[0]);
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
void* _47940 = arg_buffer[1];
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

void* kont4767347786 = prim_car(lst);
void* lst47787 = prim_cdr(lst);
void* x4757347788 = apply_prim__u62_u61(lst47787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4767347786);
arg_buffer[2] = x4757347788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4767347786))[0]);
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
void* _47941 = arg_buffer[1];
//reading env and args
void* kont47675 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4757447789 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47675);
arg_buffer[2] = x4757447789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47675))[0]);
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
void* _47942 = arg_buffer[1];
//reading env and args
void* kont47676 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4757547790 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47676);
arg_buffer[2] = x4757547790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47676))[0]);
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
void* _47943 = arg_buffer[1];
//reading env and args
void* kont47677 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4757647791 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47677);
arg_buffer[2] = x4757647791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47677))[0]);
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
void* _47944 = arg_buffer[1];
//reading env and args
void* kont47678 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4757747792 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47678);
arg_buffer[2] = x4757747792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47678))[0]);
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
void* _47945 = arg_buffer[1];
//reading env and args
void* kont47679 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4757847793 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47679);
arg_buffer[2] = x4757847793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47679))[0]);
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
void* _47946 = arg_buffer[1];
//reading env and args
void* kont47680 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4757947794 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47680);
arg_buffer[2] = x4757947794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47680))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam47947_fptr() // lam47947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47948 = arg_buffer[1];
//reading env and args
void* a4758247798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env47948))[3];
//not do dummy comment
void* kont47681 = (decode_clo(env47948))[2];
//not do dummy comment
void* a4758047795 = (decode_clo(env47948))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont47681;
arg_buffer[3] = a4758047795;
arg_buffer[4] = a4758247798;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47947 = encode_clo(alloc_clo(lam47947_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47951 = arg_buffer[1];
//reading env and args
void* kont47681 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49172 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49172, "0", 10);
void* a4758047795 = encode_mpz(mpzvar49172);
mpz_t* mpzvar49173 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49173, "2", 10);
void* a4758147796 = encode_mpz(mpzvar49173);

//creating new closure instance
void** clo49175 = alloc_clo(lam47947_fptr, 3);

//setting env list
clo49175[1] = a4758047795;
clo49175[2] = kont47681;
clo49175[3] = equal_u63;
void* f4768247797 = encode_clo(clo49175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4768247797;
arg_buffer[3] = x;
arg_buffer[4] = a4758147796;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam47952_fptr() // lam47952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47953 = arg_buffer[1];
//reading env and args
void* a4758547802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4758347799 = (decode_clo(env47953))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env47953))[2];
//not do dummy comment
void* kont47683 = (decode_clo(env47953))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont47683;
arg_buffer[3] = a4758347799;
arg_buffer[4] = a4758547802;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47952 = encode_clo(alloc_clo(lam47952_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47956 = arg_buffer[1];
//reading env and args
void* kont47683 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49176 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49176, "1", 10);
void* a4758347799 = encode_mpz(mpzvar49176);
mpz_t* mpzvar49177 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49177, "2", 10);
void* a4758447800 = encode_mpz(mpzvar49177);

//creating new closure instance
void** clo49179 = alloc_clo(lam47952_fptr, 3);

//setting env list
clo49179[1] = kont47683;
clo49179[2] = equal_u63;
clo49179[3] = a4758347799;
void* f4768447801 = encode_clo(clo49179);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4768447801;
arg_buffer[3] = x;
arg_buffer[4] = a4758447800;
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
void* _47957 = arg_buffer[1];
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

void* kont4768547803 = prim_car(x);
void* x47804 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4768547803);
arg_buffer[2] = x47804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4768547803))[0]);
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
void* _47958 = arg_buffer[1];
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

void* kont4768747805 = prim_car(lst);
void* lst47806 = prim_cdr(lst);
void* x4758647807 = apply_prim_and(lst47806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4768747805);
arg_buffer[2] = x4758647807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4768747805))[0]);
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
void* _47959 = arg_buffer[1];
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

void* kont4768947808 = prim_car(lst);
void* lst47809 = prim_cdr(lst);
void* x4758747810 = apply_prim_or(lst47809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4768947808);
arg_buffer[2] = x4758747810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4768947808))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam47962_fptr() // lam47962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47963 = arg_buffer[1];
//reading env and args
void* a4759347820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47691 = (decode_clo(env47963))[3];
//not do dummy comment
void* x = (decode_clo(env47963))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47963))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont47691;
arg_buffer[3] = x;
arg_buffer[4] = a4759347820;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47962 = encode_clo(alloc_clo(lam47962_fptr, 0));

void* lam47964_fptr() // lam47964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47965 = arg_buffer[1];
//reading env and args
void* a4759147817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47965))[5];
//not do dummy comment
void* lst = (decode_clo(env47965))[4];
//not do dummy comment
void* kont47691 = (decode_clo(env47965))[3];
//not do dummy comment
void* x = (decode_clo(env47965))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47965))[1];

//if-clause
bool if_guard49180 = is_true(a4759147817);
if(if_guard49180)
{
void* x4759247818 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47691);
arg_buffer[2] = x4759247818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47691))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49182 = alloc_clo(lam47962_fptr, 3);

//setting env list
clo49182[1] = member_u63;
clo49182[2] = x;
clo49182[3] = kont47691;
void* f4769247819 = encode_clo(clo49182);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4769247819;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47964 = encode_clo(alloc_clo(lam47964_fptr, 0));

void* lam47966_fptr() // lam47966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47967 = arg_buffer[1];
//reading env and args
void* a4759047815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47967))[6];
//not do dummy comment
void* lst = (decode_clo(env47967))[5];
//not do dummy comment
void* kont47691 = (decode_clo(env47967))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env47967))[3];
//not do dummy comment
void* x = (decode_clo(env47967))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47967))[1];

//creating new closure instance
void** clo49184 = alloc_clo(lam47964_fptr, 5);

//setting env list
clo49184[1] = member_u63;
clo49184[2] = x;
clo49184[3] = kont47691;
clo49184[4] = lst;
clo49184[5] = cdr;
void* f4769347816 = encode_clo(clo49184);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4769347816;
arg_buffer[3] = a4759047815;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47966 = encode_clo(alloc_clo(lam47966_fptr, 0));

void* lam47968_fptr() // lam47968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47969 = arg_buffer[1];
//reading env and args
void* a4758847812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47969))[7];
//not do dummy comment
void* lst = (decode_clo(env47969))[6];
//not do dummy comment
void* kont47691 = (decode_clo(env47969))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env47969))[4];
//not do dummy comment
void* x = (decode_clo(env47969))[3];
//not do dummy comment
void* car = (decode_clo(env47969))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47969))[1];

//if-clause
bool if_guard49185 = is_true(a4758847812);
if(if_guard49185)
{
void* x4758947813 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47691);
arg_buffer[2] = x4758947813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47691))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49187 = alloc_clo(lam47966_fptr, 6);

//setting env list
clo49187[1] = member_u63;
clo49187[2] = x;
clo49187[3] = equal_u63;
clo49187[4] = kont47691;
clo49187[5] = lst;
clo49187[6] = cdr;
void* f4769447814 = encode_clo(clo49187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4769447814;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47968 = encode_clo(alloc_clo(lam47968_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47970 = arg_buffer[1];
//reading env and args
void* kont47691 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49189 = alloc_clo(lam47968_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo49189[1] = member_u63;
clo49189[2] = car;
clo49189[3] = x;
clo49189[4] = equal_u63;
clo49189[5] = kont47691;
clo49189[6] = lst;
clo49189[7] = cdr;
void* f4769547811 = encode_clo(clo49189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4769547811;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam47971_fptr() // lam47971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47972 = arg_buffer[1];
//reading env and args
void* a4759747828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4759647826 = (decode_clo(env47972))[4];
//not do dummy comment
void* foldl = (decode_clo(env47972))[3];
//not do dummy comment
void* kont47696 = (decode_clo(env47972))[2];
//not do dummy comment
void* fun = (decode_clo(env47972))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont47696;
arg_buffer[3] = fun;
arg_buffer[4] = a4759647826;
arg_buffer[5] = a4759747828;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47971 = encode_clo(alloc_clo(lam47971_fptr, 0));

void* lam47973_fptr() // lam47973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47974 = arg_buffer[1];
//reading env and args
void* a4759647826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47974))[5];
//not do dummy comment
void* lst = (decode_clo(env47974))[4];
//not do dummy comment
void* foldl = (decode_clo(env47974))[3];
//not do dummy comment
void* kont47696 = (decode_clo(env47974))[2];
//not do dummy comment
void* fun = (decode_clo(env47974))[1];

//creating new closure instance
void** clo49191 = alloc_clo(lam47971_fptr, 4);

//setting env list
clo49191[1] = fun;
clo49191[2] = kont47696;
clo49191[3] = foldl;
clo49191[4] = a4759647826;
void* f4769747827 = encode_clo(clo49191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4769747827;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47973 = encode_clo(alloc_clo(lam47973_fptr, 0));

void* lam47975_fptr() // lam47975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47976 = arg_buffer[1];
//reading env and args
void* a4759547824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47976))[6];
//not do dummy comment
void* lst = (decode_clo(env47976))[5];
//not do dummy comment
void* acc = (decode_clo(env47976))[4];
//not do dummy comment
void* foldl = (decode_clo(env47976))[3];
//not do dummy comment
void* kont47696 = (decode_clo(env47976))[2];
//not do dummy comment
void* fun = (decode_clo(env47976))[1];

//creating new closure instance
void** clo49193 = alloc_clo(lam47973_fptr, 5);

//setting env list
clo49193[1] = fun;
clo49193[2] = kont47696;
clo49193[3] = foldl;
clo49193[4] = lst;
clo49193[5] = cdr;
void* f4769847825 = encode_clo(clo49193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4769847825;
arg_buffer[3] = a4759547824;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47975 = encode_clo(alloc_clo(lam47975_fptr, 0));

void* lam47977_fptr() // lam47977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47978 = arg_buffer[1];
//reading env and args
void* a4759447822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47978))[7];
//not do dummy comment
void* lst = (decode_clo(env47978))[6];
//not do dummy comment
void* acc = (decode_clo(env47978))[5];
//not do dummy comment
void* car = (decode_clo(env47978))[4];
//not do dummy comment
void* foldl = (decode_clo(env47978))[3];
//not do dummy comment
void* kont47696 = (decode_clo(env47978))[2];
//not do dummy comment
void* fun = (decode_clo(env47978))[1];

//if-clause
bool if_guard49194 = is_true(a4759447822);
if(if_guard49194)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47696);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47696))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49196 = alloc_clo(lam47975_fptr, 6);

//setting env list
clo49196[1] = fun;
clo49196[2] = kont47696;
clo49196[3] = foldl;
clo49196[4] = acc;
clo49196[5] = lst;
clo49196[6] = cdr;
void* f4769947823 = encode_clo(clo49196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4769947823;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47977 = encode_clo(alloc_clo(lam47977_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47979 = arg_buffer[1];
//reading env and args
void* kont47696 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49198 = alloc_clo(lam47977_fptr, 7);

//setting env list
clo49198[1] = fun;
clo49198[2] = kont47696;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo49198[3] = foldl;
clo49198[4] = car;
clo49198[5] = acc;
clo49198[6] = lst;
clo49198[7] = cdr;
void* f4770047821 = encode_clo(clo49198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4770047821;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam47980_fptr() // lam47980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47981 = arg_buffer[1];
//reading env and args
void* a4760147836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4759947832 = (decode_clo(env47981))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47981))[2];
//not do dummy comment
void* kont47701 = (decode_clo(env47981))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont47701;
arg_buffer[3] = a4759947832;
arg_buffer[4] = a4760147836;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47980 = encode_clo(alloc_clo(lam47980_fptr, 0));

void* lam47982_fptr() // lam47982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47983 = arg_buffer[1];
//reading env and args
void* a4760047834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4759947832 = (decode_clo(env47983))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47983))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47983))[3];
//not do dummy comment
void* cons = (decode_clo(env47983))[2];
//not do dummy comment
void* kont47701 = (decode_clo(env47983))[1];

//creating new closure instance
void** clo49200 = alloc_clo(lam47980_fptr, 3);

//setting env list
clo49200[1] = kont47701;
clo49200[2] = reverse_u45helper;
clo49200[3] = a4759947832;
void* f4770247835 = encode_clo(clo49200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4770247835;
arg_buffer[3] = a4760047834;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47982 = encode_clo(alloc_clo(lam47982_fptr, 0));

void* lam47984_fptr() // lam47984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47985 = arg_buffer[1];
//reading env and args
void* a4759947832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47985))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47985))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47985))[4];
//not do dummy comment
void* car = (decode_clo(env47985))[3];
//not do dummy comment
void* cons = (decode_clo(env47985))[2];
//not do dummy comment
void* kont47701 = (decode_clo(env47985))[1];

//creating new closure instance
void** clo49202 = alloc_clo(lam47982_fptr, 5);

//setting env list
clo49202[1] = kont47701;
clo49202[2] = cons;
clo49202[3] = lst2;
clo49202[4] = reverse_u45helper;
clo49202[5] = a4759947832;
void* f4770347833 = encode_clo(clo49202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4770347833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47984 = encode_clo(alloc_clo(lam47984_fptr, 0));

void* lam47986_fptr() // lam47986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47987 = arg_buffer[1];
//reading env and args
void* a4759847830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47987))[7];
//not do dummy comment
void* lst = (decode_clo(env47987))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47987))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47987))[4];
//not do dummy comment
void* car = (decode_clo(env47987))[3];
//not do dummy comment
void* cons = (decode_clo(env47987))[2];
//not do dummy comment
void* kont47701 = (decode_clo(env47987))[1];

//if-clause
bool if_guard49203 = is_true(a4759847830);
if(if_guard49203)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47701);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47701))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49205 = alloc_clo(lam47984_fptr, 6);

//setting env list
clo49205[1] = kont47701;
clo49205[2] = cons;
clo49205[3] = car;
clo49205[4] = lst2;
clo49205[5] = reverse_u45helper;
clo49205[6] = lst;
void* f4770447831 = encode_clo(clo49205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4770447831;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47986 = encode_clo(alloc_clo(lam47986_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47988 = arg_buffer[1];
//reading env and args
void* kont47701 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49207 = alloc_clo(lam47986_fptr, 7);

//setting env list
clo49207[1] = kont47701;
clo49207[2] = cons;
clo49207[3] = car;
clo49207[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo49207[5] = reverse_u45helper;
clo49207[6] = lst;
clo49207[7] = cdr;
void* f4770547829 = encode_clo(clo49207);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4770547829;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam47989_fptr() // lam47989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47990 = arg_buffer[1];
//reading env and args
void* a4760247838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47990))[3];
//not do dummy comment
void* lst = (decode_clo(env47990))[2];
//not do dummy comment
void* kont47706 = (decode_clo(env47990))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont47706;
arg_buffer[3] = lst;
arg_buffer[4] = a4760247838;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47989 = encode_clo(alloc_clo(lam47989_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47991 = arg_buffer[1];
//reading env and args
void* kont47706 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49209 = alloc_clo(lam47989_fptr, 3);

//setting env list
clo49209[1] = kont47706;
clo49209[2] = lst;
clo49209[3] = reverse_u45helper;
void* f4770747837 = encode_clo(clo49209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4770747837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam47992_fptr() // lam47992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47993 = arg_buffer[1];
//reading env and args
void* x4760547843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47708 = (decode_clo(env47993))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47708);
arg_buffer[2] = x4760547843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47708))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47992 = encode_clo(alloc_clo(lam47992_fptr, 0));

void* lam47994_fptr() // lam47994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47995 = arg_buffer[1];
//reading env and args
void* a4761047852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4760847848 = (decode_clo(env47995))[4];
//not do dummy comment
void* kont47708 = (decode_clo(env47995))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47995))[2];
//not do dummy comment
void* a4760647845 = (decode_clo(env47995))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont47708;
arg_buffer[3] = a4760647845;
arg_buffer[4] = a4760847848;
arg_buffer[5] = a4761047852;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47994 = encode_clo(alloc_clo(lam47994_fptr, 0));

void* lam47996_fptr() // lam47996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47997 = arg_buffer[1];
//reading env and args
void* a4760947850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4760847848 = (decode_clo(env47997))[6];
//not do dummy comment
void* kont47708 = (decode_clo(env47997))[5];
//not do dummy comment
void* cons = (decode_clo(env47997))[4];
//not do dummy comment
void* a4760647845 = (decode_clo(env47997))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47997))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47997))[1];

//creating new closure instance
void** clo49211 = alloc_clo(lam47994_fptr, 4);

//setting env list
clo49211[1] = a4760647845;
clo49211[2] = take_u45helper;
clo49211[3] = kont47708;
clo49211[4] = a4760847848;
void* f4771047851 = encode_clo(clo49211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4771047851;
arg_buffer[3] = a4760947850;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47996 = encode_clo(alloc_clo(lam47996_fptr, 0));

void* lam47998_fptr() // lam47998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47999 = arg_buffer[1];
//reading env and args
void* a4760847848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47999))[7];
//not do dummy comment
void* kont47708 = (decode_clo(env47999))[6];
//not do dummy comment
void* car = (decode_clo(env47999))[5];
//not do dummy comment
void* cons = (decode_clo(env47999))[4];
//not do dummy comment
void* a4760647845 = (decode_clo(env47999))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47999))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47999))[1];

//creating new closure instance
void** clo49213 = alloc_clo(lam47996_fptr, 6);

//setting env list
clo49213[1] = lst2;
clo49213[2] = take_u45helper;
clo49213[3] = a4760647845;
clo49213[4] = cons;
clo49213[5] = kont47708;
clo49213[6] = a4760847848;
void* f4771147849 = encode_clo(clo49213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4771147849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47998 = encode_clo(alloc_clo(lam47998_fptr, 0));

void* lam48001_fptr() // lam48001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48002 = arg_buffer[1];
//reading env and args
void* a4760647845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48002))[8];
//not do dummy comment
void* kont47708 = (decode_clo(env48002))[7];
//not do dummy comment
void* cons = (decode_clo(env48002))[6];
//not do dummy comment
void* _u45 = (decode_clo(env48002))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48002))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48002))[3];
//not do dummy comment
void* n = (decode_clo(env48002))[2];
//not do dummy comment
void* car = (decode_clo(env48002))[1];
mpz_t* mpzvar49214 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49214, "1", 10);
void* a4760747846 = encode_mpz(mpzvar49214);

//creating new closure instance
void** clo49216 = alloc_clo(lam47998_fptr, 7);

//setting env list
clo49216[1] = lst2;
clo49216[2] = take_u45helper;
clo49216[3] = a4760647845;
clo49216[4] = cons;
clo49216[5] = car;
clo49216[6] = kont47708;
clo49216[7] = lst;
void* f4771247847 = encode_clo(clo49216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4771247847;
arg_buffer[3] = n;
arg_buffer[4] = a4760747846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48001 = encode_clo(alloc_clo(lam48001_fptr, 0));

void* lam48003_fptr() // lam48003 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48004 = arg_buffer[1];
//reading env and args
void* a4760447841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48004))[10];
//not do dummy comment
void* lst = (decode_clo(env48004))[9];
//not do dummy comment
void* kont47708 = (decode_clo(env48004))[8];
//not do dummy comment
void* reverse = (decode_clo(env48004))[7];
//not do dummy comment
void* cons = (decode_clo(env48004))[6];
//not do dummy comment
void* _u45 = (decode_clo(env48004))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48004))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48004))[3];
//not do dummy comment
void* n = (decode_clo(env48004))[2];
//not do dummy comment
void* car = (decode_clo(env48004))[1];

//if-clause
bool if_guard49217 = is_true(a4760447841);
if(if_guard49217)
{

//creating new closure instance
void** clo49219 = alloc_clo(lam47992_fptr, 1);

//setting env list
clo49219[1] = kont47708;
void* f4770947842 = encode_clo(clo49219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4770947842;
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
void** clo49221 = alloc_clo(lam48001_fptr, 8);

//setting env list
clo49221[1] = car;
clo49221[2] = n;
clo49221[3] = lst2;
clo49221[4] = take_u45helper;
clo49221[5] = _u45;
clo49221[6] = cons;
clo49221[7] = kont47708;
clo49221[8] = lst;
void* f4771347844 = encode_clo(clo49221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4771347844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48003 = encode_clo(alloc_clo(lam48003_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48006 = arg_buffer[1];
//reading env and args
void* kont47708 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar49222 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49222, "0", 10);
void* a4760347839 = encode_mpz(mpzvar49222);

//creating new closure instance
void** clo49224 = alloc_clo(lam48003_fptr, 10);

//setting env list
clo49224[1] = car;
clo49224[2] = n;
clo49224[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo49224[4] = take_u45helper;
clo49224[5] = _u45;
clo49224[6] = cons;
clo49224[7] = reverse;
clo49224[8] = kont47708;
clo49224[9] = lst;
clo49224[10] = cdr;
void* f4771447840 = encode_clo(clo49224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4771447840;
arg_buffer[3] = n;
arg_buffer[4] = a4760347839;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam48007_fptr() // lam48007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48008 = arg_buffer[1];
//reading env and args
void* a4761147854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48008))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env48008))[3];
//not do dummy comment
void* kont47715 = (decode_clo(env48008))[2];
//not do dummy comment
void* n = (decode_clo(env48008))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont47715;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4761147854;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48007 = encode_clo(alloc_clo(lam48007_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48009 = arg_buffer[1];
//reading env and args
void* kont47715 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49226 = alloc_clo(lam48007_fptr, 4);

//setting env list
clo49226[1] = n;
clo49226[2] = kont47715;
clo49226[3] = take_u45helper;
clo49226[4] = lst;
void* f4771647853 = encode_clo(clo49226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4771647853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam48011_fptr() // lam48011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48012 = arg_buffer[1];
//reading env and args
void* a4761647862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env48012))[3];
//not do dummy comment
void* a4761447858 = (decode_clo(env48012))[2];
//not do dummy comment
void* kont47717 = (decode_clo(env48012))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont47717;
arg_buffer[3] = a4761447858;
arg_buffer[4] = a4761647862;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48011 = encode_clo(alloc_clo(lam48011_fptr, 0));

void* lam48013_fptr() // lam48013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48014 = arg_buffer[1];
//reading env and args
void* a4761547860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env48014))[4];
//not do dummy comment
void* _u43 = (decode_clo(env48014))[3];
//not do dummy comment
void* a4761447858 = (decode_clo(env48014))[2];
//not do dummy comment
void* kont47717 = (decode_clo(env48014))[1];

//creating new closure instance
void** clo49228 = alloc_clo(lam48011_fptr, 3);

//setting env list
clo49228[1] = kont47717;
clo49228[2] = a4761447858;
clo49228[3] = _u43;
void* f4771847861 = encode_clo(clo49228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4771847861;
arg_buffer[3] = a4761547860;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48013 = encode_clo(alloc_clo(lam48013_fptr, 0));

void* lam48016_fptr() // lam48016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48017 = arg_buffer[1];
//reading env and args
void* a4761247856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48017))[5];
//not do dummy comment
void* lst = (decode_clo(env48017))[4];
//not do dummy comment
void* length = (decode_clo(env48017))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48017))[2];
//not do dummy comment
void* kont47717 = (decode_clo(env48017))[1];

//if-clause
bool if_guard49229 = is_true(a4761247856);
if(if_guard49229)
{
mpz_t* mpzvar49230 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49230, "0", 10);
void* x4761347857 = encode_mpz(mpzvar49230);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47717);
arg_buffer[2] = x4761347857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47717))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar49231 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49231, "1", 10);
void* a4761447858 = encode_mpz(mpzvar49231);

//creating new closure instance
void** clo49233 = alloc_clo(lam48013_fptr, 4);

//setting env list
clo49233[1] = kont47717;
clo49233[2] = a4761447858;
clo49233[3] = _u43;
clo49233[4] = length;
void* f4771947859 = encode_clo(clo49233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4771947859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48016 = encode_clo(alloc_clo(lam48016_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48018 = arg_buffer[1];
//reading env and args
void* kont47717 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49235 = alloc_clo(lam48016_fptr, 5);

//setting env list
clo49235[1] = kont47717;
clo49235[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo49235[3] = length;
clo49235[4] = lst;
clo49235[5] = cdr;
void* f4772047855 = encode_clo(clo49235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4772047855;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam48019_fptr() // lam48019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48020 = arg_buffer[1];
//reading env and args
void* x4761847866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47721 = (decode_clo(env48020))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47721);
arg_buffer[2] = x4761847866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47721))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48019 = encode_clo(alloc_clo(lam48019_fptr, 0));

void* lam48021_fptr() // lam48021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48022 = arg_buffer[1];
//reading env and args
void* a4762247874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47721 = (decode_clo(env48022))[3];
//not do dummy comment
void* a4762047870 = (decode_clo(env48022))[2];
//not do dummy comment
void* cons = (decode_clo(env48022))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47721;
arg_buffer[3] = a4762047870;
arg_buffer[4] = a4762247874;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48021 = encode_clo(alloc_clo(lam48021_fptr, 0));

void* lam48023_fptr() // lam48023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48024 = arg_buffer[1];
//reading env and args
void* a4762147872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47721 = (decode_clo(env48024))[5];
//not do dummy comment
void* map = (decode_clo(env48024))[4];
//not do dummy comment
void* a4762047870 = (decode_clo(env48024))[3];
//not do dummy comment
void* proc = (decode_clo(env48024))[2];
//not do dummy comment
void* cons = (decode_clo(env48024))[1];

//creating new closure instance
void** clo49237 = alloc_clo(lam48021_fptr, 3);

//setting env list
clo49237[1] = cons;
clo49237[2] = a4762047870;
clo49237[3] = kont47721;
void* f4772347873 = encode_clo(clo49237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4772347873;
arg_buffer[3] = proc;
arg_buffer[4] = a4762147872;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48023 = encode_clo(alloc_clo(lam48023_fptr, 0));

void* lam48025_fptr() // lam48025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48026 = arg_buffer[1];
//reading env and args
void* a4762047870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48026))[6];
//not do dummy comment
void* kont47721 = (decode_clo(env48026))[5];
//not do dummy comment
void* lst = (decode_clo(env48026))[4];
//not do dummy comment
void* map = (decode_clo(env48026))[3];
//not do dummy comment
void* proc = (decode_clo(env48026))[2];
//not do dummy comment
void* cons = (decode_clo(env48026))[1];

//creating new closure instance
void** clo49239 = alloc_clo(lam48023_fptr, 5);

//setting env list
clo49239[1] = cons;
clo49239[2] = proc;
clo49239[3] = a4762047870;
clo49239[4] = map;
clo49239[5] = kont47721;
void* f4772447871 = encode_clo(clo49239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4772447871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48025 = encode_clo(alloc_clo(lam48025_fptr, 0));

void* lam48027_fptr() // lam48027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48028 = arg_buffer[1];
//reading env and args
void* a4761947868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48028))[6];
//not do dummy comment
void* kont47721 = (decode_clo(env48028))[5];
//not do dummy comment
void* lst = (decode_clo(env48028))[4];
//not do dummy comment
void* map = (decode_clo(env48028))[3];
//not do dummy comment
void* proc = (decode_clo(env48028))[2];
//not do dummy comment
void* cons = (decode_clo(env48028))[1];

//creating new closure instance
void** clo49241 = alloc_clo(lam48025_fptr, 6);

//setting env list
clo49241[1] = cons;
clo49241[2] = proc;
clo49241[3] = map;
clo49241[4] = lst;
clo49241[5] = kont47721;
clo49241[6] = cdr;
void* f4772547869 = encode_clo(clo49241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4772547869;
arg_buffer[3] = a4761947868;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48027 = encode_clo(alloc_clo(lam48027_fptr, 0));

void* lam48029_fptr() // lam48029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48030 = arg_buffer[1];
//reading env and args
void* a4761747864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47721 = (decode_clo(env48030))[8];
//not do dummy comment
void* lst = (decode_clo(env48030))[7];
//not do dummy comment
void* map = (decode_clo(env48030))[6];
//not do dummy comment
void* proc = (decode_clo(env48030))[5];
//not do dummy comment
void* car = (decode_clo(env48030))[4];
//not do dummy comment
void* cons = (decode_clo(env48030))[3];
//not do dummy comment
void* list = (decode_clo(env48030))[2];
//not do dummy comment
void* cdr = (decode_clo(env48030))[1];

//if-clause
bool if_guard49242 = is_true(a4761747864);
if(if_guard49242)
{

//creating new closure instance
void** clo49244 = alloc_clo(lam48019_fptr, 1);

//setting env list
clo49244[1] = kont47721;
void* f4772247865 = encode_clo(clo49244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4772247865;
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
void** clo49246 = alloc_clo(lam48027_fptr, 6);

//setting env list
clo49246[1] = cons;
clo49246[2] = proc;
clo49246[3] = map;
clo49246[4] = lst;
clo49246[5] = kont47721;
clo49246[6] = cdr;
void* f4772647867 = encode_clo(clo49246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4772647867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48029 = encode_clo(alloc_clo(lam48029_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48031 = arg_buffer[1];
//reading env and args
void* kont47721 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49248 = alloc_clo(lam48029_fptr, 8);

//setting env list
clo49248[1] = cdr;
clo49248[2] = list;
clo49248[3] = cons;
clo49248[4] = car;
clo49248[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo49248[6] = map;
clo49248[7] = lst;
clo49248[8] = kont47721;
void* f4772747863 = encode_clo(clo49248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4772747863;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam48032_fptr() // lam48032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48033 = arg_buffer[1];
//reading env and args
void* x4762447878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47728 = (decode_clo(env48033))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47728);
arg_buffer[2] = x4762447878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47728))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48032 = encode_clo(alloc_clo(lam48032_fptr, 0));

void* lam48034_fptr() // lam48034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48035 = arg_buffer[1];
//reading env and args
void* a4762947888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4762747884 = (decode_clo(env48035))[3];
//not do dummy comment
void* kont47728 = (decode_clo(env48035))[2];
//not do dummy comment
void* cons = (decode_clo(env48035))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47728;
arg_buffer[3] = a4762747884;
arg_buffer[4] = a4762947888;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48034 = encode_clo(alloc_clo(lam48034_fptr, 0));

void* lam48036_fptr() // lam48036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48037 = arg_buffer[1];
//reading env and args
void* a4762847886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4762747884 = (decode_clo(env48037))[5];
//not do dummy comment
void* op = (decode_clo(env48037))[4];
//not do dummy comment
void* kont47728 = (decode_clo(env48037))[3];
//not do dummy comment
void* filter = (decode_clo(env48037))[2];
//not do dummy comment
void* cons = (decode_clo(env48037))[1];

//creating new closure instance
void** clo49250 = alloc_clo(lam48034_fptr, 3);

//setting env list
clo49250[1] = cons;
clo49250[2] = kont47728;
clo49250[3] = a4762747884;
void* f4773047887 = encode_clo(clo49250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4773047887;
arg_buffer[3] = op;
arg_buffer[4] = a4762847886;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48036 = encode_clo(alloc_clo(lam48036_fptr, 0));

void* lam48038_fptr() // lam48038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48039 = arg_buffer[1];
//reading env and args
void* a4762747884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48039))[6];
//not do dummy comment
void* lst = (decode_clo(env48039))[5];
//not do dummy comment
void* op = (decode_clo(env48039))[4];
//not do dummy comment
void* kont47728 = (decode_clo(env48039))[3];
//not do dummy comment
void* filter = (decode_clo(env48039))[2];
//not do dummy comment
void* cons = (decode_clo(env48039))[1];

//creating new closure instance
void** clo49252 = alloc_clo(lam48036_fptr, 5);

//setting env list
clo49252[1] = cons;
clo49252[2] = filter;
clo49252[3] = kont47728;
clo49252[4] = op;
clo49252[5] = a4762747884;
void* f4773147885 = encode_clo(clo49252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4773147885;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48038 = encode_clo(alloc_clo(lam48038_fptr, 0));

void* lam48040_fptr() // lam48040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48041 = arg_buffer[1];
//reading env and args
void* a4763047890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env48041))[3];
//not do dummy comment
void* kont47728 = (decode_clo(env48041))[2];
//not do dummy comment
void* filter = (decode_clo(env48041))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont47728;
arg_buffer[3] = op;
arg_buffer[4] = a4763047890;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48040 = encode_clo(alloc_clo(lam48040_fptr, 0));

void* lam48042_fptr() // lam48042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48043 = arg_buffer[1];
//reading env and args
void* a4762647882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48043))[7];
//not do dummy comment
void* lst = (decode_clo(env48043))[6];
//not do dummy comment
void* op = (decode_clo(env48043))[5];
//not do dummy comment
void* kont47728 = (decode_clo(env48043))[4];
//not do dummy comment
void* cons = (decode_clo(env48043))[3];
//not do dummy comment
void* filter = (decode_clo(env48043))[2];
//not do dummy comment
void* car = (decode_clo(env48043))[1];

//if-clause
bool if_guard49253 = is_true(a4762647882);
if(if_guard49253)
{

//creating new closure instance
void** clo49255 = alloc_clo(lam48038_fptr, 6);

//setting env list
clo49255[1] = cons;
clo49255[2] = filter;
clo49255[3] = kont47728;
clo49255[4] = op;
clo49255[5] = lst;
clo49255[6] = cdr;
void* f4773247883 = encode_clo(clo49255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4773247883;
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
void** clo49257 = alloc_clo(lam48040_fptr, 3);

//setting env list
clo49257[1] = filter;
clo49257[2] = kont47728;
clo49257[3] = op;
void* f4773347889 = encode_clo(clo49257);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4773347889;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48042 = encode_clo(alloc_clo(lam48042_fptr, 0));

void* lam48044_fptr() // lam48044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48045 = arg_buffer[1];
//reading env and args
void* a4762547880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48045))[7];
//not do dummy comment
void* lst = (decode_clo(env48045))[6];
//not do dummy comment
void* op = (decode_clo(env48045))[5];
//not do dummy comment
void* kont47728 = (decode_clo(env48045))[4];
//not do dummy comment
void* cons = (decode_clo(env48045))[3];
//not do dummy comment
void* filter = (decode_clo(env48045))[2];
//not do dummy comment
void* car = (decode_clo(env48045))[1];

//creating new closure instance
void** clo49259 = alloc_clo(lam48042_fptr, 7);

//setting env list
clo49259[1] = car;
clo49259[2] = filter;
clo49259[3] = cons;
clo49259[4] = kont47728;
clo49259[5] = op;
clo49259[6] = lst;
clo49259[7] = cdr;
void* f4773447881 = encode_clo(clo49259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4773447881;
arg_buffer[3] = a4762547880;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48044 = encode_clo(alloc_clo(lam48044_fptr, 0));

void* lam48046_fptr() // lam48046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48047 = arg_buffer[1];
//reading env and args
void* a4762347876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48047))[8];
//not do dummy comment
void* op = (decode_clo(env48047))[7];
//not do dummy comment
void* kont47728 = (decode_clo(env48047))[6];
//not do dummy comment
void* cons = (decode_clo(env48047))[5];
//not do dummy comment
void* list = (decode_clo(env48047))[4];
//not do dummy comment
void* cdr = (decode_clo(env48047))[3];
//not do dummy comment
void* filter = (decode_clo(env48047))[2];
//not do dummy comment
void* car = (decode_clo(env48047))[1];

//if-clause
bool if_guard49260 = is_true(a4762347876);
if(if_guard49260)
{

//creating new closure instance
void** clo49262 = alloc_clo(lam48032_fptr, 1);

//setting env list
clo49262[1] = kont47728;
void* f4772947877 = encode_clo(clo49262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4772947877;
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
void** clo49264 = alloc_clo(lam48044_fptr, 7);

//setting env list
clo49264[1] = car;
clo49264[2] = filter;
clo49264[3] = cons;
clo49264[4] = kont47728;
clo49264[5] = op;
clo49264[6] = lst;
clo49264[7] = cdr;
void* f4773547879 = encode_clo(clo49264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4773547879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48046 = encode_clo(alloc_clo(lam48046_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48048 = arg_buffer[1];
//reading env and args
void* kont47728 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49266 = alloc_clo(lam48046_fptr, 8);

//setting env list
clo49266[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo49266[2] = filter;
clo49266[3] = cdr;
clo49266[4] = list;
clo49266[5] = cons;
clo49266[6] = kont47728;
clo49266[7] = op;
clo49266[8] = lst;
void* f4773647875 = encode_clo(clo49266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4773647875;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam48049_fptr() // lam48049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48050 = arg_buffer[1];
//reading env and args
void* a4763547898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4763347895 = (decode_clo(env48050))[3];
//not do dummy comment
void* kont47737 = (decode_clo(env48050))[2];
//not do dummy comment
void* drop = (decode_clo(env48050))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont47737;
arg_buffer[3] = a4763347895;
arg_buffer[4] = a4763547898;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48049 = encode_clo(alloc_clo(lam48049_fptr, 0));

void* lam48052_fptr() // lam48052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48053 = arg_buffer[1];
//reading env and args
void* a4763347895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47737 = (decode_clo(env48053))[4];
//not do dummy comment
void* drop = (decode_clo(env48053))[3];
//not do dummy comment
void* n = (decode_clo(env48053))[2];
//not do dummy comment
void* _u45 = (decode_clo(env48053))[1];
mpz_t* mpzvar49267 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49267, "1", 10);
void* a4763447896 = encode_mpz(mpzvar49267);

//creating new closure instance
void** clo49269 = alloc_clo(lam48049_fptr, 3);

//setting env list
clo49269[1] = drop;
clo49269[2] = kont47737;
clo49269[3] = a4763347895;
void* f4773847897 = encode_clo(clo49269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4773847897;
arg_buffer[3] = n;
arg_buffer[4] = a4763447896;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48052 = encode_clo(alloc_clo(lam48052_fptr, 0));

void* lam48054_fptr() // lam48054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48055 = arg_buffer[1];
//reading env and args
void* a4763247893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48055))[6];
//not do dummy comment
void* kont47737 = (decode_clo(env48055))[5];
//not do dummy comment
void* n = (decode_clo(env48055))[4];
//not do dummy comment
void* _u45 = (decode_clo(env48055))[3];
//not do dummy comment
void* lst = (decode_clo(env48055))[2];
//not do dummy comment
void* drop = (decode_clo(env48055))[1];

//if-clause
bool if_guard49270 = is_true(a4763247893);
if(if_guard49270)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47737);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47737))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49272 = alloc_clo(lam48052_fptr, 4);

//setting env list
clo49272[1] = _u45;
clo49272[2] = n;
clo49272[3] = drop;
clo49272[4] = kont47737;
void* f4773947894 = encode_clo(clo49272);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4773947894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48054 = encode_clo(alloc_clo(lam48054_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48057 = arg_buffer[1];
//reading env and args
void* kont47737 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar49273 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49273, "0", 10);
void* a4763147891 = encode_mpz(mpzvar49273);

//creating new closure instance
void** clo49275 = alloc_clo(lam48054_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo49275[1] = drop;
clo49275[2] = lst;
clo49275[3] = _u45;
clo49275[4] = n;
clo49275[5] = kont47737;
clo49275[6] = cdr;
void* f4774047892 = encode_clo(clo49275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4774047892;
arg_buffer[3] = n;
arg_buffer[4] = a4763147891;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam48058_fptr() // lam48058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48059 = arg_buffer[1];
//reading env and args
void* a4763947906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47741 = (decode_clo(env48059))[3];
//not do dummy comment
void* a4763747902 = (decode_clo(env48059))[2];
//not do dummy comment
void* proc = (decode_clo(env48059))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont47741;
arg_buffer[3] = a4763747902;
arg_buffer[4] = a4763947906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48058 = encode_clo(alloc_clo(lam48058_fptr, 0));

void* lam48060_fptr() // lam48060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48061 = arg_buffer[1];
//reading env and args
void* a4763847904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env48061))[5];
//not do dummy comment
void* kont47741 = (decode_clo(env48061))[4];
//not do dummy comment
void* a4763747902 = (decode_clo(env48061))[3];
//not do dummy comment
void* proc = (decode_clo(env48061))[2];
//not do dummy comment
void* acc = (decode_clo(env48061))[1];

//creating new closure instance
void** clo49277 = alloc_clo(lam48058_fptr, 3);

//setting env list
clo49277[1] = proc;
clo49277[2] = a4763747902;
clo49277[3] = kont47741;
void* f4774247905 = encode_clo(clo49277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4774247905;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4763847904;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48060 = encode_clo(alloc_clo(lam48060_fptr, 0));

void* lam48062_fptr() // lam48062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48063 = arg_buffer[1];
//reading env and args
void* a4763747902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48063))[6];
//not do dummy comment
void* kont47741 = (decode_clo(env48063))[5];
//not do dummy comment
void* foldr = (decode_clo(env48063))[4];
//not do dummy comment
void* lst = (decode_clo(env48063))[3];
//not do dummy comment
void* proc = (decode_clo(env48063))[2];
//not do dummy comment
void* acc = (decode_clo(env48063))[1];

//creating new closure instance
void** clo49279 = alloc_clo(lam48060_fptr, 5);

//setting env list
clo49279[1] = acc;
clo49279[2] = proc;
clo49279[3] = a4763747902;
clo49279[4] = kont47741;
clo49279[5] = foldr;
void* f4774347903 = encode_clo(clo49279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4774347903;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48062 = encode_clo(alloc_clo(lam48062_fptr, 0));

void* lam48064_fptr() // lam48064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48065 = arg_buffer[1];
//reading env and args
void* a4763647900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48065))[7];
//not do dummy comment
void* kont47741 = (decode_clo(env48065))[6];
//not do dummy comment
void* car = (decode_clo(env48065))[5];
//not do dummy comment
void* foldr = (decode_clo(env48065))[4];
//not do dummy comment
void* lst = (decode_clo(env48065))[3];
//not do dummy comment
void* proc = (decode_clo(env48065))[2];
//not do dummy comment
void* acc = (decode_clo(env48065))[1];

//if-clause
bool if_guard49280 = is_true(a4763647900);
if(if_guard49280)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47741);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47741))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49282 = alloc_clo(lam48062_fptr, 6);

//setting env list
clo49282[1] = acc;
clo49282[2] = proc;
clo49282[3] = lst;
clo49282[4] = foldr;
clo49282[5] = kont47741;
clo49282[6] = cdr;
void* f4774447901 = encode_clo(clo49282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4774447901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48064 = encode_clo(alloc_clo(lam48064_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48066 = arg_buffer[1];
//reading env and args
void* kont47741 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49284 = alloc_clo(lam48064_fptr, 7);

//setting env list
clo49284[1] = acc;
clo49284[2] = proc;
clo49284[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo49284[4] = foldr;
clo49284[5] = car;
clo49284[6] = kont47741;
clo49284[7] = cdr;
void* f4774547899 = encode_clo(clo49284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4774547899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam48067_fptr() // lam48067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48068 = arg_buffer[1];
//reading env and args
void* a4764347914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4764147910 = (decode_clo(env48068))[3];
//not do dummy comment
void* kont47746 = (decode_clo(env48068))[2];
//not do dummy comment
void* cons = (decode_clo(env48068))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47746;
arg_buffer[3] = a4764147910;
arg_buffer[4] = a4764347914;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48067 = encode_clo(alloc_clo(lam48067_fptr, 0));

void* lam48069_fptr() // lam48069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48070 = arg_buffer[1];
//reading env and args
void* a4764247912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4764147910 = (decode_clo(env48070))[5];
//not do dummy comment
void* append = (decode_clo(env48070))[4];
//not do dummy comment
void* cons = (decode_clo(env48070))[3];
//not do dummy comment
void* lst2 = (decode_clo(env48070))[2];
//not do dummy comment
void* kont47746 = (decode_clo(env48070))[1];

//creating new closure instance
void** clo49286 = alloc_clo(lam48067_fptr, 3);

//setting env list
clo49286[1] = cons;
clo49286[2] = kont47746;
clo49286[3] = a4764147910;
void* f4774747913 = encode_clo(clo49286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4774747913;
arg_buffer[3] = a4764247912;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48069 = encode_clo(alloc_clo(lam48069_fptr, 0));

void* lam48071_fptr() // lam48071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48072 = arg_buffer[1];
//reading env and args
void* a4764147910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48072))[6];
//not do dummy comment
void* append = (decode_clo(env48072))[5];
//not do dummy comment
void* lst1 = (decode_clo(env48072))[4];
//not do dummy comment
void* cons = (decode_clo(env48072))[3];
//not do dummy comment
void* lst2 = (decode_clo(env48072))[2];
//not do dummy comment
void* kont47746 = (decode_clo(env48072))[1];

//creating new closure instance
void** clo49288 = alloc_clo(lam48069_fptr, 5);

//setting env list
clo49288[1] = kont47746;
clo49288[2] = lst2;
clo49288[3] = cons;
clo49288[4] = append;
clo49288[5] = a4764147910;
void* f4774847911 = encode_clo(clo49288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4774847911;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48071 = encode_clo(alloc_clo(lam48071_fptr, 0));

void* lam48073_fptr() // lam48073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48074 = arg_buffer[1];
//reading env and args
void* a4764047908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48074))[7];
//not do dummy comment
void* append = (decode_clo(env48074))[6];
//not do dummy comment
void* cons = (decode_clo(env48074))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48074))[4];
//not do dummy comment
void* kont47746 = (decode_clo(env48074))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48074))[2];
//not do dummy comment
void* car = (decode_clo(env48074))[1];

//if-clause
bool if_guard49289 = is_true(a4764047908);
if(if_guard49289)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47746);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49291 = alloc_clo(lam48071_fptr, 6);

//setting env list
clo49291[1] = kont47746;
clo49291[2] = lst2;
clo49291[3] = cons;
clo49291[4] = lst1;
clo49291[5] = append;
clo49291[6] = cdr;
void* f4774947909 = encode_clo(clo49291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4774947909;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48073 = encode_clo(alloc_clo(lam48073_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48075 = arg_buffer[1];
//reading env and args
void* kont47746 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49293 = alloc_clo(lam48073_fptr, 7);

//setting env list
clo49293[1] = car;
clo49293[2] = lst1;
clo49293[3] = kont47746;
clo49293[4] = lst2;
clo49293[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo49293[6] = append;
clo49293[7] = cdr;
void* f4775047907 = encode_clo(clo49293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4775047907;
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
void* _48076 = arg_buffer[1];
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

void* kont4775147915 = prim_car(lst);
void* lst47916 = prim_cdr(lst);
void* x4764447917 = apply_prim_hash(lst47916);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4775147915);
arg_buffer[2] = x4764447917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4775147915))[0]);
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
void* _48077 = arg_buffer[1];
//reading env and args
void* kont47753 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4764547918 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47753);
arg_buffer[2] = x4764547918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47753))[0]);
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
void* _48078 = arg_buffer[1];
//reading env and args
void* kont47754 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4764647919 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47754);
arg_buffer[2] = x4764647919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47754))[0]);
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
void* _48079 = arg_buffer[1];
//reading env and args
void* kont47755 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4764747920 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47755);
arg_buffer[2] = x4764747920;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47755))[0]);
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
void* _48080 = arg_buffer[1];
//reading env and args
void* kont47756 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4764847921 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47756);
arg_buffer[2] = x4764847921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47756))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam48081_fptr() // lam48081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48082 = arg_buffer[1];
//reading env and args
void* a4765447928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47757 = (decode_clo(env48082))[4];
//not do dummy comment
void* _u42 = (decode_clo(env48082))[3];
//not do dummy comment
void* a4764947922 = (decode_clo(env48082))[2];
//not do dummy comment
void* a4765047923 = (decode_clo(env48082))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont47757;
arg_buffer[3] = a4764947922;
arg_buffer[4] = a4765047923;
arg_buffer[5] = a4765447928;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48081 = encode_clo(alloc_clo(lam48081_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48088 = arg_buffer[1];
//reading env and args
void* kont47757 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar49294 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49294, "1", 10);
void* a4764947922 = encode_mpz(mpzvar49294);
mpz_t* mpzvar49295 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49295, "2", 10);
void* a4765047923 = encode_mpz(mpzvar49295);
mpz_t* mpzvar49296 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49296, "3", 10);
void* a4765147924 = encode_mpz(mpzvar49296);
mpz_t* mpzvar49297 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49297, "4", 10);
void* a4765247925 = encode_mpz(mpzvar49297);
mpz_t* mpzvar49298 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49298, "5", 10);
void* a4765347926 = encode_mpz(mpzvar49298);

//creating new closure instance
void** clo49300 = alloc_clo(lam48081_fptr, 4);

//setting env list
clo49300[1] = a4765047923;
clo49300[2] = a4764947922;
clo49300[3] = _u42;
clo49300[4] = kont47757;
void* f4775847927 = encode_clo(clo49300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f4775847927;
arg_buffer[3] = a4765147924;
arg_buffer[4] = a4765247925;
arg_buffer[5] = a4765347926;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam48089_fptr() // lam48089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48090 = arg_buffer[1];
//reading env and args
void* x4765547930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47759 = (decode_clo(env48090))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47759);
arg_buffer[2] = x4765547930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47759))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48089 = encode_clo(alloc_clo(lam48089_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48091 = arg_buffer[1];
//reading env and args
void* kont47759 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo49302 = alloc_clo(lam48089_fptr, 1);

//setting env list
clo49302[1] = kont47759;
void* f4776047929 = encode_clo(clo49302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4776047929;
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

