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
void* _59016 = arg_buffer[1];
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

void* kont5875158852 = prim_car(lst);
void* lst58853 = prim_cdr(lst);
void* x5866158854 = apply_prim__u43(lst58853);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5875158852);
arg_buffer[2] = x5866158854;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5875158852))[0]);
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
void* _59017 = arg_buffer[1];
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

void* kont5875358855 = prim_car(lst);
void* lst58856 = prim_cdr(lst);
void* x5866258857 = apply_prim__u45(lst58856);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5875358855);
arg_buffer[2] = x5866258857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5875358855))[0]);
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
void* _59018 = arg_buffer[1];
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

void* kont5875558858 = prim_car(lst);
void* lst58859 = prim_cdr(lst);
void* x5866358860 = apply_prim__u42(lst58859);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5875558858);
arg_buffer[2] = x5866358860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5875558858))[0]);
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
void* _59019 = arg_buffer[1];
//reading env and args
void* kont58757 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5866458861 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58757);
arg_buffer[2] = x5866458861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58757))[0]);
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
void* _59020 = arg_buffer[1];
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

void* kont5875858862 = prim_car(lst);
void* lst58863 = prim_cdr(lst);
void* x5866558864 = apply_prim__u47(lst58863);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5875858862);
arg_buffer[2] = x5866558864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5875858862))[0]);
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
void* _59021 = arg_buffer[1];
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

void* kont5876058865 = prim_car(lst);
void* lst58866 = prim_cdr(lst);
void* x5866658867 = apply_prim__u61(lst58866);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5876058865);
arg_buffer[2] = x5866658867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5876058865))[0]);
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
void* _59022 = arg_buffer[1];
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

void* kont5876258868 = prim_car(lst);
void* lst58869 = prim_cdr(lst);
void* x5866758870 = apply_prim__u62(lst58869);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5876258868);
arg_buffer[2] = x5866758870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5876258868))[0]);
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
void* _59023 = arg_buffer[1];
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

void* kont5876458871 = prim_car(lst);
void* lst58872 = prim_cdr(lst);
void* x5866858873 = apply_prim__u60(lst58872);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5876458871);
arg_buffer[2] = x5866858873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5876458871))[0]);
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
void* _59024 = arg_buffer[1];
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

void* kont5876658874 = prim_car(lst);
void* lst58875 = prim_cdr(lst);
void* x5866958876 = apply_prim__u60_u61(lst58875);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5876658874);
arg_buffer[2] = x5866958876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5876658874))[0]);
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
void* _59025 = arg_buffer[1];
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

void* kont5876858877 = prim_car(lst);
void* lst58878 = prim_cdr(lst);
void* x5867058879 = apply_prim__u62_u61(lst58878);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5876858877);
arg_buffer[2] = x5867058879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5876858877))[0]);
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
void* _59026 = arg_buffer[1];
//reading env and args
void* kont58770 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5867158880 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58770);
arg_buffer[2] = x5867158880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58770))[0]);
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
void* _59027 = arg_buffer[1];
//reading env and args
void* kont58771 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5867258881 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58771);
arg_buffer[2] = x5867258881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58771))[0]);
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
void* _59028 = arg_buffer[1];
//reading env and args
void* kont58772 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5867358882 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58772);
arg_buffer[2] = x5867358882;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58772))[0]);
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
void* _59029 = arg_buffer[1];
//reading env and args
void* kont58773 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5867458883 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58773);
arg_buffer[2] = x5867458883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58773))[0]);
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
void* _59030 = arg_buffer[1];
//reading env and args
void* kont58774 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5867558884 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58774);
arg_buffer[2] = x5867558884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58774))[0]);
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
void* _59031 = arg_buffer[1];
//reading env and args
void* kont58775 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5867658885 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58775);
arg_buffer[2] = x5867658885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58775))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam59032_fptr() // lam59032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59033 = arg_buffer[1];
//reading env and args
void* a5867958889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58776 = (decode_clo(env59033))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env59033))[2];
//not do dummy comment
void* a5867758886 = (decode_clo(env59033))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58776;
arg_buffer[3] = a5867758886;
arg_buffer[4] = a5867958889;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59032 = encode_clo(alloc_clo(lam59032_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59036 = arg_buffer[1];
//reading env and args
void* kont58776 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar59959 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59959, "0", 10);
void* a5867758886 = encode_mpz(mpzvar59959);
mpz_t* mpzvar59960 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59960, "2", 10);
void* a5867858887 = encode_mpz(mpzvar59960);

//creating new closure instance
void** clo59962 = alloc_clo(lam59032_fptr, 3);

//setting env list
clo59962[1] = a5867758886;
clo59962[2] = equal_u63;
clo59962[3] = kont58776;
void* f5877758888 = encode_clo(clo59962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5877758888;
arg_buffer[3] = x;
arg_buffer[4] = a5867858887;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam59037_fptr() // lam59037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59038 = arg_buffer[1];
//reading env and args
void* a5868258893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env59038))[3];
//not do dummy comment
void* a5868058890 = (decode_clo(env59038))[2];
//not do dummy comment
void* kont58778 = (decode_clo(env59038))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58778;
arg_buffer[3] = a5868058890;
arg_buffer[4] = a5868258893;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59037 = encode_clo(alloc_clo(lam59037_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59041 = arg_buffer[1];
//reading env and args
void* kont58778 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar59963 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59963, "1", 10);
void* a5868058890 = encode_mpz(mpzvar59963);
mpz_t* mpzvar59964 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59964, "2", 10);
void* a5868158891 = encode_mpz(mpzvar59964);

//creating new closure instance
void** clo59966 = alloc_clo(lam59037_fptr, 3);

//setting env list
clo59966[1] = kont58778;
clo59966[2] = a5868058890;
clo59966[3] = equal_u63;
void* f5877958892 = encode_clo(clo59966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5877958892;
arg_buffer[3] = x;
arg_buffer[4] = a5868158891;
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
void* _59042 = arg_buffer[1];
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

void* kont5878058894 = prim_car(x);
void* x58895 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5878058894);
arg_buffer[2] = x58895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5878058894))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam59045_fptr() // lam59045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59046 = arg_buffer[1];
//reading env and args
void* a5868858905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58782 = (decode_clo(env59046))[3];
//not do dummy comment
void* x = (decode_clo(env59046))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59046))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont58782;
arg_buffer[3] = x;
arg_buffer[4] = a5868858905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59045 = encode_clo(alloc_clo(lam59045_fptr, 0));

void* lam59047_fptr() // lam59047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59048 = arg_buffer[1];
//reading env and args
void* a5868658902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59048))[5];
//not do dummy comment
void* lst = (decode_clo(env59048))[4];
//not do dummy comment
void* kont58782 = (decode_clo(env59048))[3];
//not do dummy comment
void* x = (decode_clo(env59048))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59048))[1];

//if-clause
bool if_guard59967 = is_true(a5868658902);
if(if_guard59967)
{
void* x5868758903 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58782);
arg_buffer[2] = x5868758903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59969 = alloc_clo(lam59045_fptr, 3);

//setting env list
clo59969[1] = member_u63;
clo59969[2] = x;
clo59969[3] = kont58782;
void* f5878358904 = encode_clo(clo59969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5878358904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59047 = encode_clo(alloc_clo(lam59047_fptr, 0));

void* lam59049_fptr() // lam59049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59050 = arg_buffer[1];
//reading env and args
void* a5868558900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59050))[6];
//not do dummy comment
void* lst = (decode_clo(env59050))[5];
//not do dummy comment
void* kont58782 = (decode_clo(env59050))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env59050))[3];
//not do dummy comment
void* x = (decode_clo(env59050))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59050))[1];

//creating new closure instance
void** clo59971 = alloc_clo(lam59047_fptr, 5);

//setting env list
clo59971[1] = member_u63;
clo59971[2] = x;
clo59971[3] = kont58782;
clo59971[4] = lst;
clo59971[5] = cdr;
void* f5878458901 = encode_clo(clo59971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5878458901;
arg_buffer[3] = a5868558900;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59049 = encode_clo(alloc_clo(lam59049_fptr, 0));

void* lam59051_fptr() // lam59051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59052 = arg_buffer[1];
//reading env and args
void* a5868358897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59052))[7];
//not do dummy comment
void* lst = (decode_clo(env59052))[6];
//not do dummy comment
void* kont58782 = (decode_clo(env59052))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env59052))[4];
//not do dummy comment
void* x = (decode_clo(env59052))[3];
//not do dummy comment
void* car = (decode_clo(env59052))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59052))[1];

//if-clause
bool if_guard59972 = is_true(a5868358897);
if(if_guard59972)
{
void* x5868458898 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58782);
arg_buffer[2] = x5868458898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59974 = alloc_clo(lam59049_fptr, 6);

//setting env list
clo59974[1] = member_u63;
clo59974[2] = x;
clo59974[3] = equal_u63;
clo59974[4] = kont58782;
clo59974[5] = lst;
clo59974[6] = cdr;
void* f5878558899 = encode_clo(clo59974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5878558899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59051 = encode_clo(alloc_clo(lam59051_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59053 = arg_buffer[1];
//reading env and args
void* kont58782 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59976 = alloc_clo(lam59051_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo59976[1] = member_u63;
clo59976[2] = car;
clo59976[3] = x;
clo59976[4] = equal_u63;
clo59976[5] = kont58782;
clo59976[6] = lst;
clo59976[7] = cdr;
void* f5878658896 = encode_clo(clo59976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5878658896;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam59054_fptr() // lam59054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59055 = arg_buffer[1];
//reading env and args
void* a5869258913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5869158911 = (decode_clo(env59055))[4];
//not do dummy comment
void* fun = (decode_clo(env59055))[3];
//not do dummy comment
void* kont58787 = (decode_clo(env59055))[2];
//not do dummy comment
void* foldl = (decode_clo(env59055))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont58787;
arg_buffer[3] = fun;
arg_buffer[4] = a5869158911;
arg_buffer[5] = a5869258913;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59054 = encode_clo(alloc_clo(lam59054_fptr, 0));

void* lam59056_fptr() // lam59056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59057 = arg_buffer[1];
//reading env and args
void* a5869158911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59057))[5];
//not do dummy comment
void* lst = (decode_clo(env59057))[4];
//not do dummy comment
void* fun = (decode_clo(env59057))[3];
//not do dummy comment
void* kont58787 = (decode_clo(env59057))[2];
//not do dummy comment
void* foldl = (decode_clo(env59057))[1];

//creating new closure instance
void** clo59978 = alloc_clo(lam59054_fptr, 4);

//setting env list
clo59978[1] = foldl;
clo59978[2] = kont58787;
clo59978[3] = fun;
clo59978[4] = a5869158911;
void* f5878858912 = encode_clo(clo59978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5878858912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59056 = encode_clo(alloc_clo(lam59056_fptr, 0));

void* lam59058_fptr() // lam59058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59059 = arg_buffer[1];
//reading env and args
void* a5869058909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59059))[6];
//not do dummy comment
void* lst = (decode_clo(env59059))[5];
//not do dummy comment
void* fun = (decode_clo(env59059))[4];
//not do dummy comment
void* foldl = (decode_clo(env59059))[3];
//not do dummy comment
void* acc = (decode_clo(env59059))[2];
//not do dummy comment
void* kont58787 = (decode_clo(env59059))[1];

//creating new closure instance
void** clo59980 = alloc_clo(lam59056_fptr, 5);

//setting env list
clo59980[1] = foldl;
clo59980[2] = kont58787;
clo59980[3] = fun;
clo59980[4] = lst;
clo59980[5] = cdr;
void* f5878958910 = encode_clo(clo59980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5878958910;
arg_buffer[3] = a5869058909;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59058 = encode_clo(alloc_clo(lam59058_fptr, 0));

void* lam59060_fptr() // lam59060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59061 = arg_buffer[1];
//reading env and args
void* a5868958907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59061))[7];
//not do dummy comment
void* lst = (decode_clo(env59061))[6];
//not do dummy comment
void* fun = (decode_clo(env59061))[5];
//not do dummy comment
void* car = (decode_clo(env59061))[4];
//not do dummy comment
void* foldl = (decode_clo(env59061))[3];
//not do dummy comment
void* acc = (decode_clo(env59061))[2];
//not do dummy comment
void* kont58787 = (decode_clo(env59061))[1];

//if-clause
bool if_guard59981 = is_true(a5868958907);
if(if_guard59981)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58787);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58787))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59983 = alloc_clo(lam59058_fptr, 6);

//setting env list
clo59983[1] = kont58787;
clo59983[2] = acc;
clo59983[3] = foldl;
clo59983[4] = fun;
clo59983[5] = lst;
clo59983[6] = cdr;
void* f5879058908 = encode_clo(clo59983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5879058908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59060 = encode_clo(alloc_clo(lam59060_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59062 = arg_buffer[1];
//reading env and args
void* kont58787 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo59985 = alloc_clo(lam59060_fptr, 7);

//setting env list
clo59985[1] = kont58787;
clo59985[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo59985[3] = foldl;
clo59985[4] = car;
clo59985[5] = fun;
clo59985[6] = lst;
clo59985[7] = cdr;
void* f5879158906 = encode_clo(clo59985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5879158906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam59063_fptr() // lam59063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59064 = arg_buffer[1];
//reading env and args
void* a5869658921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58792 = (decode_clo(env59064))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59064))[2];
//not do dummy comment
void* a5869458917 = (decode_clo(env59064))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58792;
arg_buffer[3] = a5869458917;
arg_buffer[4] = a5869658921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59063 = encode_clo(alloc_clo(lam59063_fptr, 0));

void* lam59065_fptr() // lam59065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59066 = arg_buffer[1];
//reading env and args
void* a5869558919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58792 = (decode_clo(env59066))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59066))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59066))[3];
//not do dummy comment
void* a5869458917 = (decode_clo(env59066))[2];
//not do dummy comment
void* cons = (decode_clo(env59066))[1];

//creating new closure instance
void** clo59987 = alloc_clo(lam59063_fptr, 3);

//setting env list
clo59987[1] = a5869458917;
clo59987[2] = reverse_u45helper;
clo59987[3] = kont58792;
void* f5879358920 = encode_clo(clo59987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5879358920;
arg_buffer[3] = a5869558919;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59065 = encode_clo(alloc_clo(lam59065_fptr, 0));

void* lam59067_fptr() // lam59067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59068 = arg_buffer[1];
//reading env and args
void* a5869458917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58792 = (decode_clo(env59068))[6];
//not do dummy comment
void* lst = (decode_clo(env59068))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59068))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59068))[3];
//not do dummy comment
void* car = (decode_clo(env59068))[2];
//not do dummy comment
void* cons = (decode_clo(env59068))[1];

//creating new closure instance
void** clo59989 = alloc_clo(lam59065_fptr, 5);

//setting env list
clo59989[1] = cons;
clo59989[2] = a5869458917;
clo59989[3] = lst2;
clo59989[4] = reverse_u45helper;
clo59989[5] = kont58792;
void* f5879458918 = encode_clo(clo59989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5879458918;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59067 = encode_clo(alloc_clo(lam59067_fptr, 0));

void* lam59069_fptr() // lam59069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59070 = arg_buffer[1];
//reading env and args
void* a5869358915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59070))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59070))[6];
//not do dummy comment
void* lst2 = (decode_clo(env59070))[5];
//not do dummy comment
void* car = (decode_clo(env59070))[4];
//not do dummy comment
void* cons = (decode_clo(env59070))[3];
//not do dummy comment
void* kont58792 = (decode_clo(env59070))[2];
//not do dummy comment
void* cdr = (decode_clo(env59070))[1];

//if-clause
bool if_guard59990 = is_true(a5869358915);
if(if_guard59990)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58792);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58792))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59992 = alloc_clo(lam59067_fptr, 6);

//setting env list
clo59992[1] = cons;
clo59992[2] = car;
clo59992[3] = lst2;
clo59992[4] = reverse_u45helper;
clo59992[5] = lst;
clo59992[6] = kont58792;
void* f5879558916 = encode_clo(clo59992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5879558916;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59069 = encode_clo(alloc_clo(lam59069_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59071 = arg_buffer[1];
//reading env and args
void* kont58792 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59994 = alloc_clo(lam59069_fptr, 7);

//setting env list
clo59994[1] = cdr;
clo59994[2] = kont58792;
clo59994[3] = cons;
clo59994[4] = car;
clo59994[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo59994[6] = reverse_u45helper;
clo59994[7] = lst;
void* f5879658914 = encode_clo(clo59994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5879658914;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam59072_fptr() // lam59072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59073 = arg_buffer[1];
//reading env and args
void* a5869758923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59073))[3];
//not do dummy comment
void* kont58797 = (decode_clo(env59073))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59073))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58797;
arg_buffer[3] = lst;
arg_buffer[4] = a5869758923;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59072 = encode_clo(alloc_clo(lam59072_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59074 = arg_buffer[1];
//reading env and args
void* kont58797 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo59996 = alloc_clo(lam59072_fptr, 3);

//setting env list
clo59996[1] = reverse_u45helper;
clo59996[2] = kont58797;
clo59996[3] = lst;
void* f5879858922 = encode_clo(clo59996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5879858922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam59075_fptr() // lam59075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59076 = arg_buffer[1];
//reading env and args
void* x5870058928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58799 = (decode_clo(env59076))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58799);
arg_buffer[2] = x5870058928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58799))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59075 = encode_clo(alloc_clo(lam59075_fptr, 0));

void* lam59077_fptr() // lam59077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59078 = arg_buffer[1];
//reading env and args
void* a5870558937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58799 = (decode_clo(env59078))[4];
//not do dummy comment
void* a5870158930 = (decode_clo(env59078))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env59078))[2];
//not do dummy comment
void* a5870358933 = (decode_clo(env59078))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58799;
arg_buffer[3] = a5870158930;
arg_buffer[4] = a5870358933;
arg_buffer[5] = a5870558937;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59077 = encode_clo(alloc_clo(lam59077_fptr, 0));

void* lam59079_fptr() // lam59079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59080 = arg_buffer[1];
//reading env and args
void* a5870458935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58799 = (decode_clo(env59080))[6];
//not do dummy comment
void* a5870158930 = (decode_clo(env59080))[5];
//not do dummy comment
void* a5870358933 = (decode_clo(env59080))[4];
//not do dummy comment
void* cons = (decode_clo(env59080))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env59080))[2];
//not do dummy comment
void* lst2 = (decode_clo(env59080))[1];

//creating new closure instance
void** clo59998 = alloc_clo(lam59077_fptr, 4);

//setting env list
clo59998[1] = a5870358933;
clo59998[2] = take_u45helper;
clo59998[3] = a5870158930;
clo59998[4] = kont58799;
void* f5880158936 = encode_clo(clo59998);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5880158936;
arg_buffer[3] = a5870458935;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59079 = encode_clo(alloc_clo(lam59079_fptr, 0));

void* lam59081_fptr() // lam59081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59082 = arg_buffer[1];
//reading env and args
void* a5870358933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59082))[7];
//not do dummy comment
void* kont58799 = (decode_clo(env59082))[6];
//not do dummy comment
void* a5870158930 = (decode_clo(env59082))[5];
//not do dummy comment
void* car = (decode_clo(env59082))[4];
//not do dummy comment
void* cons = (decode_clo(env59082))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env59082))[2];
//not do dummy comment
void* lst2 = (decode_clo(env59082))[1];

//creating new closure instance
void** clo60000 = alloc_clo(lam59079_fptr, 6);

//setting env list
clo60000[1] = lst2;
clo60000[2] = take_u45helper;
clo60000[3] = cons;
clo60000[4] = a5870358933;
clo60000[5] = a5870158930;
clo60000[6] = kont58799;
void* f5880258934 = encode_clo(clo60000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5880258934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59081 = encode_clo(alloc_clo(lam59081_fptr, 0));

void* lam59084_fptr() // lam59084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59085 = arg_buffer[1];
//reading env and args
void* a5870158930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59085))[8];
//not do dummy comment
void* kont58799 = (decode_clo(env59085))[7];
//not do dummy comment
void* cons = (decode_clo(env59085))[6];
//not do dummy comment
void* _u45 = (decode_clo(env59085))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env59085))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59085))[3];
//not do dummy comment
void* n = (decode_clo(env59085))[2];
//not do dummy comment
void* car = (decode_clo(env59085))[1];
mpz_t* mpzvar60001 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60001, "1", 10);
void* a5870258931 = encode_mpz(mpzvar60001);

//creating new closure instance
void** clo60003 = alloc_clo(lam59081_fptr, 7);

//setting env list
clo60003[1] = lst2;
clo60003[2] = take_u45helper;
clo60003[3] = cons;
clo60003[4] = car;
clo60003[5] = a5870158930;
clo60003[6] = kont58799;
clo60003[7] = lst;
void* f5880358932 = encode_clo(clo60003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5880358932;
arg_buffer[3] = n;
arg_buffer[4] = a5870258931;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59084 = encode_clo(alloc_clo(lam59084_fptr, 0));

void* lam59086_fptr() // lam59086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59087 = arg_buffer[1];
//reading env and args
void* a5869958926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59087))[10];
//not do dummy comment
void* lst = (decode_clo(env59087))[9];
//not do dummy comment
void* cons = (decode_clo(env59087))[8];
//not do dummy comment
void* _u45 = (decode_clo(env59087))[7];
//not do dummy comment
void* kont58799 = (decode_clo(env59087))[6];
//not do dummy comment
void* reverse = (decode_clo(env59087))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env59087))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59087))[3];
//not do dummy comment
void* n = (decode_clo(env59087))[2];
//not do dummy comment
void* car = (decode_clo(env59087))[1];

//if-clause
bool if_guard60004 = is_true(a5869958926);
if(if_guard60004)
{

//creating new closure instance
void** clo60006 = alloc_clo(lam59075_fptr, 1);

//setting env list
clo60006[1] = kont58799;
void* f5880058927 = encode_clo(clo60006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5880058927;
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
void** clo60008 = alloc_clo(lam59084_fptr, 8);

//setting env list
clo60008[1] = car;
clo60008[2] = n;
clo60008[3] = lst2;
clo60008[4] = take_u45helper;
clo60008[5] = _u45;
clo60008[6] = cons;
clo60008[7] = kont58799;
clo60008[8] = lst;
void* f5880458929 = encode_clo(clo60008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5880458929;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59086 = encode_clo(alloc_clo(lam59086_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59089 = arg_buffer[1];
//reading env and args
void* kont58799 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar60009 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60009, "0", 10);
void* a5869858924 = encode_mpz(mpzvar60009);

//creating new closure instance
void** clo60011 = alloc_clo(lam59086_fptr, 10);

//setting env list
clo60011[1] = car;
clo60011[2] = n;
clo60011[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo60011[4] = take_u45helper;
clo60011[5] = reverse;
clo60011[6] = kont58799;
clo60011[7] = _u45;
clo60011[8] = cons;
clo60011[9] = lst;
clo60011[10] = cdr;
void* f5880558925 = encode_clo(clo60011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5880558925;
arg_buffer[3] = n;
arg_buffer[4] = a5869858924;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam59090_fptr() // lam59090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59091 = arg_buffer[1];
//reading env and args
void* a5870658939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59091))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env59091))[3];
//not do dummy comment
void* n = (decode_clo(env59091))[2];
//not do dummy comment
void* kont58806 = (decode_clo(env59091))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58806;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5870658939;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59090 = encode_clo(alloc_clo(lam59090_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59092 = arg_buffer[1];
//reading env and args
void* kont58806 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60013 = alloc_clo(lam59090_fptr, 4);

//setting env list
clo60013[1] = kont58806;
clo60013[2] = n;
clo60013[3] = take_u45helper;
clo60013[4] = lst;
void* f5880758938 = encode_clo(clo60013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5880758938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam59094_fptr() // lam59094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59095 = arg_buffer[1];
//reading env and args
void* a5871158947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58808 = (decode_clo(env59095))[3];
//not do dummy comment
void* a5870958943 = (decode_clo(env59095))[2];
//not do dummy comment
void* _u43 = (decode_clo(env59095))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont58808;
arg_buffer[3] = a5870958943;
arg_buffer[4] = a5871158947;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59094 = encode_clo(alloc_clo(lam59094_fptr, 0));

void* lam59096_fptr() // lam59096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59097 = arg_buffer[1];
//reading env and args
void* a5871058945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58808 = (decode_clo(env59097))[4];
//not do dummy comment
void* length = (decode_clo(env59097))[3];
//not do dummy comment
void* a5870958943 = (decode_clo(env59097))[2];
//not do dummy comment
void* _u43 = (decode_clo(env59097))[1];

//creating new closure instance
void** clo60015 = alloc_clo(lam59094_fptr, 3);

//setting env list
clo60015[1] = _u43;
clo60015[2] = a5870958943;
clo60015[3] = kont58808;
void* f5880958946 = encode_clo(clo60015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5880958946;
arg_buffer[3] = a5871058945;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59096 = encode_clo(alloc_clo(lam59096_fptr, 0));

void* lam59099_fptr() // lam59099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59100 = arg_buffer[1];
//reading env and args
void* a5870758941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59100))[5];
//not do dummy comment
void* length = (decode_clo(env59100))[4];
//not do dummy comment
void* _u43 = (decode_clo(env59100))[3];
//not do dummy comment
void* kont58808 = (decode_clo(env59100))[2];
//not do dummy comment
void* cdr = (decode_clo(env59100))[1];

//if-clause
bool if_guard60016 = is_true(a5870758941);
if(if_guard60016)
{
mpz_t* mpzvar60017 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60017, "0", 10);
void* x5870858942 = encode_mpz(mpzvar60017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58808);
arg_buffer[2] = x5870858942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58808))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar60018 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60018, "1", 10);
void* a5870958943 = encode_mpz(mpzvar60018);

//creating new closure instance
void** clo60020 = alloc_clo(lam59096_fptr, 4);

//setting env list
clo60020[1] = _u43;
clo60020[2] = a5870958943;
clo60020[3] = length;
clo60020[4] = kont58808;
void* f5881058944 = encode_clo(clo60020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5881058944;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59099 = encode_clo(alloc_clo(lam59099_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59101 = arg_buffer[1];
//reading env and args
void* kont58808 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo60022 = alloc_clo(lam59099_fptr, 5);

//setting env list
clo60022[1] = cdr;
clo60022[2] = kont58808;
clo60022[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo60022[4] = length;
clo60022[5] = lst;
void* f5881158940 = encode_clo(clo60022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5881158940;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam59102_fptr() // lam59102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59103 = arg_buffer[1];
//reading env and args
void* x5871358951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58812 = (decode_clo(env59103))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58812);
arg_buffer[2] = x5871358951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58812))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59102 = encode_clo(alloc_clo(lam59102_fptr, 0));

void* lam59104_fptr() // lam59104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59105 = arg_buffer[1];
//reading env and args
void* a5871758959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5871558955 = (decode_clo(env59105))[3];
//not do dummy comment
void* kont58812 = (decode_clo(env59105))[2];
//not do dummy comment
void* cons = (decode_clo(env59105))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58812;
arg_buffer[3] = a5871558955;
arg_buffer[4] = a5871758959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59104 = encode_clo(alloc_clo(lam59104_fptr, 0));

void* lam59106_fptr() // lam59106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59107 = arg_buffer[1];
//reading env and args
void* a5871658957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5871558955 = (decode_clo(env59107))[5];
//not do dummy comment
void* kont58812 = (decode_clo(env59107))[4];
//not do dummy comment
void* map = (decode_clo(env59107))[3];
//not do dummy comment
void* proc = (decode_clo(env59107))[2];
//not do dummy comment
void* cons = (decode_clo(env59107))[1];

//creating new closure instance
void** clo60024 = alloc_clo(lam59104_fptr, 3);

//setting env list
clo60024[1] = cons;
clo60024[2] = kont58812;
clo60024[3] = a5871558955;
void* f5881458958 = encode_clo(clo60024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5881458958;
arg_buffer[3] = proc;
arg_buffer[4] = a5871658957;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59106 = encode_clo(alloc_clo(lam59106_fptr, 0));

void* lam59108_fptr() // lam59108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59109 = arg_buffer[1];
//reading env and args
void* a5871558955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59109))[6];
//not do dummy comment
void* map = (decode_clo(env59109))[5];
//not do dummy comment
void* proc = (decode_clo(env59109))[4];
//not do dummy comment
void* cons = (decode_clo(env59109))[3];
//not do dummy comment
void* lst = (decode_clo(env59109))[2];
//not do dummy comment
void* kont58812 = (decode_clo(env59109))[1];

//creating new closure instance
void** clo60026 = alloc_clo(lam59106_fptr, 5);

//setting env list
clo60026[1] = cons;
clo60026[2] = proc;
clo60026[3] = map;
clo60026[4] = kont58812;
clo60026[5] = a5871558955;
void* f5881558956 = encode_clo(clo60026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5881558956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59108 = encode_clo(alloc_clo(lam59108_fptr, 0));

void* lam59110_fptr() // lam59110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59111 = arg_buffer[1];
//reading env and args
void* a5871458953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59111))[6];
//not do dummy comment
void* map = (decode_clo(env59111))[5];
//not do dummy comment
void* proc = (decode_clo(env59111))[4];
//not do dummy comment
void* cons = (decode_clo(env59111))[3];
//not do dummy comment
void* lst = (decode_clo(env59111))[2];
//not do dummy comment
void* kont58812 = (decode_clo(env59111))[1];

//creating new closure instance
void** clo60028 = alloc_clo(lam59108_fptr, 6);

//setting env list
clo60028[1] = kont58812;
clo60028[2] = lst;
clo60028[3] = cons;
clo60028[4] = proc;
clo60028[5] = map;
clo60028[6] = cdr;
void* f5881658954 = encode_clo(clo60028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5881658954;
arg_buffer[3] = a5871458953;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59110 = encode_clo(alloc_clo(lam59110_fptr, 0));

void* lam59112_fptr() // lam59112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59113 = arg_buffer[1];
//reading env and args
void* a5871258949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env59113))[8];
//not do dummy comment
void* proc = (decode_clo(env59113))[7];
//not do dummy comment
void* car = (decode_clo(env59113))[6];
//not do dummy comment
void* cons = (decode_clo(env59113))[5];
//not do dummy comment
void* list = (decode_clo(env59113))[4];
//not do dummy comment
void* cdr = (decode_clo(env59113))[3];
//not do dummy comment
void* lst = (decode_clo(env59113))[2];
//not do dummy comment
void* kont58812 = (decode_clo(env59113))[1];

//if-clause
bool if_guard60029 = is_true(a5871258949);
if(if_guard60029)
{

//creating new closure instance
void** clo60031 = alloc_clo(lam59102_fptr, 1);

//setting env list
clo60031[1] = kont58812;
void* f5881358950 = encode_clo(clo60031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5881358950;
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
void** clo60033 = alloc_clo(lam59110_fptr, 6);

//setting env list
clo60033[1] = kont58812;
clo60033[2] = lst;
clo60033[3] = cons;
clo60033[4] = proc;
clo60033[5] = map;
clo60033[6] = cdr;
void* f5881758952 = encode_clo(clo60033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5881758952;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59112 = encode_clo(alloc_clo(lam59112_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59114 = arg_buffer[1];
//reading env and args
void* kont58812 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60035 = alloc_clo(lam59112_fptr, 8);

//setting env list
clo60035[1] = kont58812;
clo60035[2] = lst;
clo60035[3] = cdr;
clo60035[4] = list;
clo60035[5] = cons;
clo60035[6] = car;
clo60035[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo60035[8] = map;
void* f5881858948 = encode_clo(clo60035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5881858948;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam59115_fptr() // lam59115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59116 = arg_buffer[1];
//reading env and args
void* x5871958963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58819 = (decode_clo(env59116))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58819);
arg_buffer[2] = x5871958963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58819))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59115 = encode_clo(alloc_clo(lam59115_fptr, 0));

void* lam59117_fptr() // lam59117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59118 = arg_buffer[1];
//reading env and args
void* a5872458973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5872258969 = (decode_clo(env59118))[3];
//not do dummy comment
void* kont58819 = (decode_clo(env59118))[2];
//not do dummy comment
void* cons = (decode_clo(env59118))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58819;
arg_buffer[3] = a5872258969;
arg_buffer[4] = a5872458973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59117 = encode_clo(alloc_clo(lam59117_fptr, 0));

void* lam59119_fptr() // lam59119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59120 = arg_buffer[1];
//reading env and args
void* a5872358971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5872258969 = (decode_clo(env59120))[5];
//not do dummy comment
void* op = (decode_clo(env59120))[4];
//not do dummy comment
void* kont58819 = (decode_clo(env59120))[3];
//not do dummy comment
void* filter = (decode_clo(env59120))[2];
//not do dummy comment
void* cons = (decode_clo(env59120))[1];

//creating new closure instance
void** clo60037 = alloc_clo(lam59117_fptr, 3);

//setting env list
clo60037[1] = cons;
clo60037[2] = kont58819;
clo60037[3] = a5872258969;
void* f5882158972 = encode_clo(clo60037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5882158972;
arg_buffer[3] = op;
arg_buffer[4] = a5872358971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59119 = encode_clo(alloc_clo(lam59119_fptr, 0));

void* lam59121_fptr() // lam59121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59122 = arg_buffer[1];
//reading env and args
void* a5872258969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59122))[6];
//not do dummy comment
void* lst = (decode_clo(env59122))[5];
//not do dummy comment
void* op = (decode_clo(env59122))[4];
//not do dummy comment
void* kont58819 = (decode_clo(env59122))[3];
//not do dummy comment
void* filter = (decode_clo(env59122))[2];
//not do dummy comment
void* cons = (decode_clo(env59122))[1];

//creating new closure instance
void** clo60039 = alloc_clo(lam59119_fptr, 5);

//setting env list
clo60039[1] = cons;
clo60039[2] = filter;
clo60039[3] = kont58819;
clo60039[4] = op;
clo60039[5] = a5872258969;
void* f5882258970 = encode_clo(clo60039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5882258970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59121 = encode_clo(alloc_clo(lam59121_fptr, 0));

void* lam59123_fptr() // lam59123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59124 = arg_buffer[1];
//reading env and args
void* a5872558975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env59124))[3];
//not do dummy comment
void* kont58819 = (decode_clo(env59124))[2];
//not do dummy comment
void* filter = (decode_clo(env59124))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont58819;
arg_buffer[3] = op;
arg_buffer[4] = a5872558975;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59123 = encode_clo(alloc_clo(lam59123_fptr, 0));

void* lam59125_fptr() // lam59125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59126 = arg_buffer[1];
//reading env and args
void* a5872158967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59126))[7];
//not do dummy comment
void* lst = (decode_clo(env59126))[6];
//not do dummy comment
void* op = (decode_clo(env59126))[5];
//not do dummy comment
void* kont58819 = (decode_clo(env59126))[4];
//not do dummy comment
void* cons = (decode_clo(env59126))[3];
//not do dummy comment
void* filter = (decode_clo(env59126))[2];
//not do dummy comment
void* car = (decode_clo(env59126))[1];

//if-clause
bool if_guard60040 = is_true(a5872158967);
if(if_guard60040)
{

//creating new closure instance
void** clo60042 = alloc_clo(lam59121_fptr, 6);

//setting env list
clo60042[1] = cons;
clo60042[2] = filter;
clo60042[3] = kont58819;
clo60042[4] = op;
clo60042[5] = lst;
clo60042[6] = cdr;
void* f5882358968 = encode_clo(clo60042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5882358968;
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
void** clo60044 = alloc_clo(lam59123_fptr, 3);

//setting env list
clo60044[1] = filter;
clo60044[2] = kont58819;
clo60044[3] = op;
void* f5882458974 = encode_clo(clo60044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5882458974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59125 = encode_clo(alloc_clo(lam59125_fptr, 0));

void* lam59127_fptr() // lam59127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59128 = arg_buffer[1];
//reading env and args
void* a5872058965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59128))[7];
//not do dummy comment
void* lst = (decode_clo(env59128))[6];
//not do dummy comment
void* op = (decode_clo(env59128))[5];
//not do dummy comment
void* kont58819 = (decode_clo(env59128))[4];
//not do dummy comment
void* cons = (decode_clo(env59128))[3];
//not do dummy comment
void* filter = (decode_clo(env59128))[2];
//not do dummy comment
void* car = (decode_clo(env59128))[1];

//creating new closure instance
void** clo60046 = alloc_clo(lam59125_fptr, 7);

//setting env list
clo60046[1] = car;
clo60046[2] = filter;
clo60046[3] = cons;
clo60046[4] = kont58819;
clo60046[5] = op;
clo60046[6] = lst;
clo60046[7] = cdr;
void* f5882558966 = encode_clo(clo60046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5882558966;
arg_buffer[3] = a5872058965;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59127 = encode_clo(alloc_clo(lam59127_fptr, 0));

void* lam59129_fptr() // lam59129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59130 = arg_buffer[1];
//reading env and args
void* a5871858961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59130))[8];
//not do dummy comment
void* op = (decode_clo(env59130))[7];
//not do dummy comment
void* kont58819 = (decode_clo(env59130))[6];
//not do dummy comment
void* cons = (decode_clo(env59130))[5];
//not do dummy comment
void* list = (decode_clo(env59130))[4];
//not do dummy comment
void* cdr = (decode_clo(env59130))[3];
//not do dummy comment
void* filter = (decode_clo(env59130))[2];
//not do dummy comment
void* car = (decode_clo(env59130))[1];

//if-clause
bool if_guard60047 = is_true(a5871858961);
if(if_guard60047)
{

//creating new closure instance
void** clo60049 = alloc_clo(lam59115_fptr, 1);

//setting env list
clo60049[1] = kont58819;
void* f5882058962 = encode_clo(clo60049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5882058962;
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
void** clo60051 = alloc_clo(lam59127_fptr, 7);

//setting env list
clo60051[1] = car;
clo60051[2] = filter;
clo60051[3] = cons;
clo60051[4] = kont58819;
clo60051[5] = op;
clo60051[6] = lst;
clo60051[7] = cdr;
void* f5882658964 = encode_clo(clo60051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5882658964;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59129 = encode_clo(alloc_clo(lam59129_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59131 = arg_buffer[1];
//reading env and args
void* kont58819 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60053 = alloc_clo(lam59129_fptr, 8);

//setting env list
clo60053[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo60053[2] = filter;
clo60053[3] = cdr;
clo60053[4] = list;
clo60053[5] = cons;
clo60053[6] = kont58819;
clo60053[7] = op;
clo60053[8] = lst;
void* f5882758960 = encode_clo(clo60053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5882758960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam59132_fptr() // lam59132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59133 = arg_buffer[1];
//reading env and args
void* a5873058983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5872858980 = (decode_clo(env59133))[3];
//not do dummy comment
void* kont58828 = (decode_clo(env59133))[2];
//not do dummy comment
void* drop = (decode_clo(env59133))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont58828;
arg_buffer[3] = a5872858980;
arg_buffer[4] = a5873058983;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59132 = encode_clo(alloc_clo(lam59132_fptr, 0));

void* lam59135_fptr() // lam59135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59136 = arg_buffer[1];
//reading env and args
void* a5872858980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env59136))[4];
//not do dummy comment
void* _u45 = (decode_clo(env59136))[3];
//not do dummy comment
void* kont58828 = (decode_clo(env59136))[2];
//not do dummy comment
void* drop = (decode_clo(env59136))[1];
mpz_t* mpzvar60054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60054, "1", 10);
void* a5872958981 = encode_mpz(mpzvar60054);

//creating new closure instance
void** clo60056 = alloc_clo(lam59132_fptr, 3);

//setting env list
clo60056[1] = drop;
clo60056[2] = kont58828;
clo60056[3] = a5872858980;
void* f5882958982 = encode_clo(clo60056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5882958982;
arg_buffer[3] = n;
arg_buffer[4] = a5872958981;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59135 = encode_clo(alloc_clo(lam59135_fptr, 0));

void* lam59137_fptr() // lam59137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59138 = arg_buffer[1];
//reading env and args
void* a5872758978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59138))[6];
//not do dummy comment
void* n = (decode_clo(env59138))[5];
//not do dummy comment
void* _u45 = (decode_clo(env59138))[4];
//not do dummy comment
void* lst = (decode_clo(env59138))[3];
//not do dummy comment
void* kont58828 = (decode_clo(env59138))[2];
//not do dummy comment
void* drop = (decode_clo(env59138))[1];

//if-clause
bool if_guard60057 = is_true(a5872758978);
if(if_guard60057)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58828);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58828))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60059 = alloc_clo(lam59135_fptr, 4);

//setting env list
clo60059[1] = drop;
clo60059[2] = kont58828;
clo60059[3] = _u45;
clo60059[4] = n;
void* f5883058979 = encode_clo(clo60059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5883058979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59137 = encode_clo(alloc_clo(lam59137_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59140 = arg_buffer[1];
//reading env and args
void* kont58828 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar60060 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60060, "0", 10);
void* a5872658976 = encode_mpz(mpzvar60060);

//creating new closure instance
void** clo60062 = alloc_clo(lam59137_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo60062[1] = drop;
clo60062[2] = kont58828;
clo60062[3] = lst;
clo60062[4] = _u45;
clo60062[5] = n;
clo60062[6] = cdr;
void* f5883158977 = encode_clo(clo60062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5883158977;
arg_buffer[3] = n;
arg_buffer[4] = a5872658976;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam59141_fptr() // lam59141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59142 = arg_buffer[1];
//reading env and args
void* a5873458991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5873258987 = (decode_clo(env59142))[3];
//not do dummy comment
void* kont58832 = (decode_clo(env59142))[2];
//not do dummy comment
void* proc = (decode_clo(env59142))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont58832;
arg_buffer[3] = a5873258987;
arg_buffer[4] = a5873458991;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59141 = encode_clo(alloc_clo(lam59141_fptr, 0));

void* lam59143_fptr() // lam59143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59144 = arg_buffer[1];
//reading env and args
void* a5873358989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5873258987 = (decode_clo(env59144))[5];
//not do dummy comment
void* foldr = (decode_clo(env59144))[4];
//not do dummy comment
void* kont58832 = (decode_clo(env59144))[3];
//not do dummy comment
void* proc = (decode_clo(env59144))[2];
//not do dummy comment
void* acc = (decode_clo(env59144))[1];

//creating new closure instance
void** clo60064 = alloc_clo(lam59141_fptr, 3);

//setting env list
clo60064[1] = proc;
clo60064[2] = kont58832;
clo60064[3] = a5873258987;
void* f5883358990 = encode_clo(clo60064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5883358990;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5873358989;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59143 = encode_clo(alloc_clo(lam59143_fptr, 0));

void* lam59145_fptr() // lam59145 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59146 = arg_buffer[1];
//reading env and args
void* a5873258987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59146))[6];
//not do dummy comment
void* kont58832 = (decode_clo(env59146))[5];
//not do dummy comment
void* foldr = (decode_clo(env59146))[4];
//not do dummy comment
void* lst = (decode_clo(env59146))[3];
//not do dummy comment
void* proc = (decode_clo(env59146))[2];
//not do dummy comment
void* acc = (decode_clo(env59146))[1];

//creating new closure instance
void** clo60066 = alloc_clo(lam59143_fptr, 5);

//setting env list
clo60066[1] = acc;
clo60066[2] = proc;
clo60066[3] = kont58832;
clo60066[4] = foldr;
clo60066[5] = a5873258987;
void* f5883458988 = encode_clo(clo60066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5883458988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59145 = encode_clo(alloc_clo(lam59145_fptr, 0));

void* lam59147_fptr() // lam59147 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59148 = arg_buffer[1];
//reading env and args
void* a5873158985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59148))[7];
//not do dummy comment
void* kont58832 = (decode_clo(env59148))[6];
//not do dummy comment
void* car = (decode_clo(env59148))[5];
//not do dummy comment
void* foldr = (decode_clo(env59148))[4];
//not do dummy comment
void* lst = (decode_clo(env59148))[3];
//not do dummy comment
void* proc = (decode_clo(env59148))[2];
//not do dummy comment
void* acc = (decode_clo(env59148))[1];

//if-clause
bool if_guard60067 = is_true(a5873158985);
if(if_guard60067)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58832);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58832))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60069 = alloc_clo(lam59145_fptr, 6);

//setting env list
clo60069[1] = acc;
clo60069[2] = proc;
clo60069[3] = lst;
clo60069[4] = foldr;
clo60069[5] = kont58832;
clo60069[6] = cdr;
void* f5883558986 = encode_clo(clo60069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5883558986;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59147 = encode_clo(alloc_clo(lam59147_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59149 = arg_buffer[1];
//reading env and args
void* kont58832 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo60071 = alloc_clo(lam59147_fptr, 7);

//setting env list
clo60071[1] = acc;
clo60071[2] = proc;
clo60071[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo60071[4] = foldr;
clo60071[5] = car;
clo60071[6] = kont58832;
clo60071[7] = cdr;
void* f5883658984 = encode_clo(clo60071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5883658984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam59150_fptr() // lam59150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59151 = arg_buffer[1];
//reading env and args
void* a5873858999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5873658995 = (decode_clo(env59151))[3];
//not do dummy comment
void* kont58837 = (decode_clo(env59151))[2];
//not do dummy comment
void* cons = (decode_clo(env59151))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58837;
arg_buffer[3] = a5873658995;
arg_buffer[4] = a5873858999;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59150 = encode_clo(alloc_clo(lam59150_fptr, 0));

void* lam59152_fptr() // lam59152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59153 = arg_buffer[1];
//reading env and args
void* a5873758997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env59153))[5];
//not do dummy comment
void* a5873658995 = (decode_clo(env59153))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59153))[3];
//not do dummy comment
void* kont58837 = (decode_clo(env59153))[2];
//not do dummy comment
void* cons = (decode_clo(env59153))[1];

//creating new closure instance
void** clo60073 = alloc_clo(lam59150_fptr, 3);

//setting env list
clo60073[1] = cons;
clo60073[2] = kont58837;
clo60073[3] = a5873658995;
void* f5883858998 = encode_clo(clo60073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5883858998;
arg_buffer[3] = a5873758997;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59152 = encode_clo(alloc_clo(lam59152_fptr, 0));

void* lam59154_fptr() // lam59154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59155 = arg_buffer[1];
//reading env and args
void* a5873658995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59155))[6];
//not do dummy comment
void* append = (decode_clo(env59155))[5];
//not do dummy comment
void* lst2 = (decode_clo(env59155))[4];
//not do dummy comment
void* cons = (decode_clo(env59155))[3];
//not do dummy comment
void* lst1 = (decode_clo(env59155))[2];
//not do dummy comment
void* kont58837 = (decode_clo(env59155))[1];

//creating new closure instance
void** clo60075 = alloc_clo(lam59152_fptr, 5);

//setting env list
clo60075[1] = cons;
clo60075[2] = kont58837;
clo60075[3] = lst2;
clo60075[4] = a5873658995;
clo60075[5] = append;
void* f5883958996 = encode_clo(clo60075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5883958996;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59154 = encode_clo(alloc_clo(lam59154_fptr, 0));

void* lam59156_fptr() // lam59156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59157 = arg_buffer[1];
//reading env and args
void* a5873558993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59157))[7];
//not do dummy comment
void* append = (decode_clo(env59157))[6];
//not do dummy comment
void* lst2 = (decode_clo(env59157))[5];
//not do dummy comment
void* cons = (decode_clo(env59157))[4];
//not do dummy comment
void* lst1 = (decode_clo(env59157))[3];
//not do dummy comment
void* kont58837 = (decode_clo(env59157))[2];
//not do dummy comment
void* car = (decode_clo(env59157))[1];

//if-clause
bool if_guard60076 = is_true(a5873558993);
if(if_guard60076)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58837);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58837))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60078 = alloc_clo(lam59154_fptr, 6);

//setting env list
clo60078[1] = kont58837;
clo60078[2] = lst1;
clo60078[3] = cons;
clo60078[4] = lst2;
clo60078[5] = append;
clo60078[6] = cdr;
void* f5884058994 = encode_clo(clo60078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5884058994;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59156 = encode_clo(alloc_clo(lam59156_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59158 = arg_buffer[1];
//reading env and args
void* kont58837 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60080 = alloc_clo(lam59156_fptr, 7);

//setting env list
clo60080[1] = car;
clo60080[2] = kont58837;
clo60080[3] = lst1;
clo60080[4] = cons;
clo60080[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo60080[6] = append;
clo60080[7] = cdr;
void* f5884158992 = encode_clo(clo60080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5884158992;
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
void* _59159 = arg_buffer[1];
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

void* kont5884259000 = prim_car(lst);
void* lst59001 = prim_cdr(lst);
void* x5873959002 = apply_prim_hash(lst59001);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5884259000);
arg_buffer[2] = x5873959002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5884259000))[0]);
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
void* _59160 = arg_buffer[1];
//reading env and args
void* kont58844 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5874059003 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58844);
arg_buffer[2] = x5874059003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58844))[0]);
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
void* _59161 = arg_buffer[1];
//reading env and args
void* kont58845 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5874159004 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58845);
arg_buffer[2] = x5874159004;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58845))[0]);
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
void* _59162 = arg_buffer[1];
//reading env and args
void* kont58846 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5874259005 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58846);
arg_buffer[2] = x5874259005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58846))[0]);
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
void* _59163 = arg_buffer[1];
//reading env and args
void* kont58847 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5874359006 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58847);
arg_buffer[2] = x5874359006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam59165_fptr() // lam59165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59166 = arg_buffer[1];
//reading env and args
void* a5874859012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env59166))[2];
//not do dummy comment
void* kont58848 = (decode_clo(env59166))[1];
mpz_t* mpzvar60081 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60081, "10", 10);
void* a5874959013 = encode_mpz(mpzvar60081);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont58848;
arg_buffer[3] = a5874859012;
arg_buffer[4] = a5874959013;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59165 = encode_clo(alloc_clo(lam59165_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59171 = arg_buffer[1];
//reading env and args
void* kont58848 = arg_buffer[2];
//Dummy comment
void* a5874459007 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar60082 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60082, "80", 10);
void* a5874559008 = encode_mpz(mpzvar60082);
mpz_t* mpzvar60083 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60083, "10", 10);
void* a5874659009 = encode_mpz(mpzvar60083);
void* a5874759010 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo60085 = alloc_clo(lam59165_fptr, 2);

//setting env list
clo60085[1] = kont58848;
clo60085[2] = hash_u45ref;
void* f5884959011 = encode_clo(clo60085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f5884959011;
arg_buffer[3] = a5874459007;
arg_buffer[4] = a5874559008;
arg_buffer[5] = a5874659009;
arg_buffer[6] = a5874759010;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam59172_fptr() // lam59172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59173 = arg_buffer[1];
//reading env and args
void* x5875059015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58850 = (decode_clo(env59173))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58850);
arg_buffer[2] = x5875059015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58850))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59172 = encode_clo(alloc_clo(lam59172_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59174 = arg_buffer[1];
//reading env and args
void* kont58850 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo60087 = alloc_clo(lam59172_fptr, 1);

//setting env list
clo60087[1] = kont58850;
void* f5885159014 = encode_clo(clo60087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5885159014;
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

