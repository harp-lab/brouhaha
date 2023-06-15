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
void* _54945 = arg_buffer[1];
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

void* kont5468354783 = prim_car(lst);
void* lst54784 = prim_cdr(lst);
void* x5459454785 = apply_prim__u43(lst54784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5468354783);
arg_buffer[2] = x5459454785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5468354783))[0]);
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
void* _54946 = arg_buffer[1];
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

void* kont5468554786 = prim_car(lst);
void* lst54787 = prim_cdr(lst);
void* x5459554788 = apply_prim__u45(lst54787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5468554786);
arg_buffer[2] = x5459554788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5468554786))[0]);
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
void* _54947 = arg_buffer[1];
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

void* kont5468754789 = prim_car(lst);
void* lst54790 = prim_cdr(lst);
void* x5459654791 = apply_prim__u42(lst54790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5468754789);
arg_buffer[2] = x5459654791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5468754789))[0]);
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
void* _54948 = arg_buffer[1];
//reading env and args
void* kont54689 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5459754792 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54689);
arg_buffer[2] = x5459754792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54689))[0]);
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
void* _54949 = arg_buffer[1];
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

void* kont5469054793 = prim_car(lst);
void* lst54794 = prim_cdr(lst);
void* x5459854795 = apply_prim__u47(lst54794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469054793);
arg_buffer[2] = x5459854795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469054793))[0]);
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
void* _54950 = arg_buffer[1];
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

void* kont5469254796 = prim_car(lst);
void* lst54797 = prim_cdr(lst);
void* x5459954798 = apply_prim__u61(lst54797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469254796);
arg_buffer[2] = x5459954798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469254796))[0]);
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
void* _54951 = arg_buffer[1];
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

void* kont5469454799 = prim_car(lst);
void* lst54800 = prim_cdr(lst);
void* x5460054801 = apply_prim__u62(lst54800);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469454799);
arg_buffer[2] = x5460054801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469454799))[0]);
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
void* _54952 = arg_buffer[1];
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

void* kont5469654802 = prim_car(lst);
void* lst54803 = prim_cdr(lst);
void* x5460154804 = apply_prim__u60(lst54803);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469654802);
arg_buffer[2] = x5460154804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469654802))[0]);
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
void* _54953 = arg_buffer[1];
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

void* kont5469854805 = prim_car(lst);
void* lst54806 = prim_cdr(lst);
void* x5460254807 = apply_prim__u60_u61(lst54806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469854805);
arg_buffer[2] = x5460254807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469854805))[0]);
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
void* _54954 = arg_buffer[1];
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

void* kont5470054808 = prim_car(lst);
void* lst54809 = prim_cdr(lst);
void* x5460354810 = apply_prim__u62_u61(lst54809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5470054808);
arg_buffer[2] = x5460354810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5470054808))[0]);
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
void* _54955 = arg_buffer[1];
//reading env and args
void* kont54702 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5460454811 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54702);
arg_buffer[2] = x5460454811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54702))[0]);
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
void* _54956 = arg_buffer[1];
//reading env and args
void* kont54703 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5460554812 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54703);
arg_buffer[2] = x5460554812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54703))[0]);
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
void* _54957 = arg_buffer[1];
//reading env and args
void* kont54704 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5460654813 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54704);
arg_buffer[2] = x5460654813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54704))[0]);
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
void* _54958 = arg_buffer[1];
//reading env and args
void* kont54705 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5460754814 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54705);
arg_buffer[2] = x5460754814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54705))[0]);
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
void* _54959 = arg_buffer[1];
//reading env and args
void* kont54706 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5460854815 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54706);
arg_buffer[2] = x5460854815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54706))[0]);
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
void* _54960 = arg_buffer[1];
//reading env and args
void* kont54707 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5460954816 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54707);
arg_buffer[2] = x5460954816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54707))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam54961_fptr() // lam54961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54962 = arg_buffer[1];
//reading env and args
void* a5461254820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54708 = (decode_clo(env54962))[3];
//not do dummy comment
void* a5461054817 = (decode_clo(env54962))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env54962))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54708;
arg_buffer[3] = a5461054817;
arg_buffer[4] = a5461254820;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54961 = encode_clo(alloc_clo(lam54961_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54965 = arg_buffer[1];
//reading env and args
void* kont54708 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55642 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55642, "0", 10);
void* a5461054817 = encode_mpz(mpzvar55642);
mpz_t* mpzvar55643 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55643, "2", 10);
void* a5461154818 = encode_mpz(mpzvar55643);

//creating new closure instance
void** clo55645 = alloc_clo(lam54961_fptr, 3);

//setting env list
clo55645[1] = equal_u63;
clo55645[2] = a5461054817;
clo55645[3] = kont54708;
void* f5470954819 = encode_clo(clo55645);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5470954819;
arg_buffer[3] = x;
arg_buffer[4] = a5461154818;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam54966_fptr() // lam54966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54967 = arg_buffer[1];
//reading env and args
void* a5461554824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env54967))[3];
//not do dummy comment
void* a5461354821 = (decode_clo(env54967))[2];
//not do dummy comment
void* kont54710 = (decode_clo(env54967))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54710;
arg_buffer[3] = a5461354821;
arg_buffer[4] = a5461554824;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54966 = encode_clo(alloc_clo(lam54966_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54970 = arg_buffer[1];
//reading env and args
void* kont54710 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55646 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55646, "1", 10);
void* a5461354821 = encode_mpz(mpzvar55646);
mpz_t* mpzvar55647 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55647, "2", 10);
void* a5461454822 = encode_mpz(mpzvar55647);

//creating new closure instance
void** clo55649 = alloc_clo(lam54966_fptr, 3);

//setting env list
clo55649[1] = kont54710;
clo55649[2] = a5461354821;
clo55649[3] = equal_u63;
void* f5471154823 = encode_clo(clo55649);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5471154823;
arg_buffer[3] = x;
arg_buffer[4] = a5461454822;
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
void* _54971 = arg_buffer[1];
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

void* kont5471254825 = prim_car(x);
void* x54826 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5471254825);
arg_buffer[2] = x54826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5471254825))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam54974_fptr() // lam54974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54975 = arg_buffer[1];
//reading env and args
void* a5462154836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54714 = (decode_clo(env54975))[3];
//not do dummy comment
void* x = (decode_clo(env54975))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54975))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont54714;
arg_buffer[3] = x;
arg_buffer[4] = a5462154836;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54974 = encode_clo(alloc_clo(lam54974_fptr, 0));

void* lam54976_fptr() // lam54976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54977 = arg_buffer[1];
//reading env and args
void* a5461954833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54977))[5];
//not do dummy comment
void* kont54714 = (decode_clo(env54977))[4];
//not do dummy comment
void* lst = (decode_clo(env54977))[3];
//not do dummy comment
void* x = (decode_clo(env54977))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54977))[1];

//if-clause
bool if_guard55650 = is_true(a5461954833);
if(if_guard55650)
{
void* x5462054834 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54714);
arg_buffer[2] = x5462054834;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54714))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55652 = alloc_clo(lam54974_fptr, 3);

//setting env list
clo55652[1] = member_u63;
clo55652[2] = x;
clo55652[3] = kont54714;
void* f5471554835 = encode_clo(clo55652);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5471554835;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54976 = encode_clo(alloc_clo(lam54976_fptr, 0));

void* lam54978_fptr() // lam54978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54979 = arg_buffer[1];
//reading env and args
void* a5461854831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54979))[6];
//not do dummy comment
void* kont54714 = (decode_clo(env54979))[5];
//not do dummy comment
void* lst = (decode_clo(env54979))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env54979))[3];
//not do dummy comment
void* x = (decode_clo(env54979))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54979))[1];

//creating new closure instance
void** clo55654 = alloc_clo(lam54976_fptr, 5);

//setting env list
clo55654[1] = member_u63;
clo55654[2] = x;
clo55654[3] = lst;
clo55654[4] = kont54714;
clo55654[5] = cdr;
void* f5471654832 = encode_clo(clo55654);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5471654832;
arg_buffer[3] = a5461854831;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54978 = encode_clo(alloc_clo(lam54978_fptr, 0));

void* lam54980_fptr() // lam54980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54981 = arg_buffer[1];
//reading env and args
void* a5461654828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54981))[7];
//not do dummy comment
void* kont54714 = (decode_clo(env54981))[6];
//not do dummy comment
void* lst = (decode_clo(env54981))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env54981))[4];
//not do dummy comment
void* x = (decode_clo(env54981))[3];
//not do dummy comment
void* car = (decode_clo(env54981))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54981))[1];

//if-clause
bool if_guard55655 = is_true(a5461654828);
if(if_guard55655)
{
void* x5461754829 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54714);
arg_buffer[2] = x5461754829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54714))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55657 = alloc_clo(lam54978_fptr, 6);

//setting env list
clo55657[1] = member_u63;
clo55657[2] = x;
clo55657[3] = equal_u63;
clo55657[4] = lst;
clo55657[5] = kont54714;
clo55657[6] = cdr;
void* f5471754830 = encode_clo(clo55657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5471754830;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54980 = encode_clo(alloc_clo(lam54980_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54982 = arg_buffer[1];
//reading env and args
void* kont54714 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55659 = alloc_clo(lam54980_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo55659[1] = member_u63;
clo55659[2] = car;
clo55659[3] = x;
clo55659[4] = equal_u63;
clo55659[5] = lst;
clo55659[6] = kont54714;
clo55659[7] = cdr;
void* f5471854827 = encode_clo(clo55659);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5471854827;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam54983_fptr() // lam54983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54984 = arg_buffer[1];
//reading env and args
void* a5462554844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5462454842 = (decode_clo(env54984))[4];
//not do dummy comment
void* kont54719 = (decode_clo(env54984))[3];
//not do dummy comment
void* fun = (decode_clo(env54984))[2];
//not do dummy comment
void* foldl = (decode_clo(env54984))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont54719;
arg_buffer[3] = fun;
arg_buffer[4] = a5462454842;
arg_buffer[5] = a5462554844;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54983 = encode_clo(alloc_clo(lam54983_fptr, 0));

void* lam54985_fptr() // lam54985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54986 = arg_buffer[1];
//reading env and args
void* a5462454842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54986))[5];
//not do dummy comment
void* lst = (decode_clo(env54986))[4];
//not do dummy comment
void* kont54719 = (decode_clo(env54986))[3];
//not do dummy comment
void* fun = (decode_clo(env54986))[2];
//not do dummy comment
void* foldl = (decode_clo(env54986))[1];

//creating new closure instance
void** clo55661 = alloc_clo(lam54983_fptr, 4);

//setting env list
clo55661[1] = foldl;
clo55661[2] = fun;
clo55661[3] = kont54719;
clo55661[4] = a5462454842;
void* f5472054843 = encode_clo(clo55661);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5472054843;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54985 = encode_clo(alloc_clo(lam54985_fptr, 0));

void* lam54987_fptr() // lam54987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54988 = arg_buffer[1];
//reading env and args
void* a5462354840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54988))[6];
//not do dummy comment
void* lst = (decode_clo(env54988))[5];
//not do dummy comment
void* kont54719 = (decode_clo(env54988))[4];
//not do dummy comment
void* fun = (decode_clo(env54988))[3];
//not do dummy comment
void* acc = (decode_clo(env54988))[2];
//not do dummy comment
void* foldl = (decode_clo(env54988))[1];

//creating new closure instance
void** clo55663 = alloc_clo(lam54985_fptr, 5);

//setting env list
clo55663[1] = foldl;
clo55663[2] = fun;
clo55663[3] = kont54719;
clo55663[4] = lst;
clo55663[5] = cdr;
void* f5472154841 = encode_clo(clo55663);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5472154841;
arg_buffer[3] = a5462354840;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54987 = encode_clo(alloc_clo(lam54987_fptr, 0));

void* lam54989_fptr() // lam54989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54990 = arg_buffer[1];
//reading env and args
void* a5462254838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54990))[7];
//not do dummy comment
void* lst = (decode_clo(env54990))[6];
//not do dummy comment
void* kont54719 = (decode_clo(env54990))[5];
//not do dummy comment
void* fun = (decode_clo(env54990))[4];
//not do dummy comment
void* acc = (decode_clo(env54990))[3];
//not do dummy comment
void* car = (decode_clo(env54990))[2];
//not do dummy comment
void* foldl = (decode_clo(env54990))[1];

//if-clause
bool if_guard55664 = is_true(a5462254838);
if(if_guard55664)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54719);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54719))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55666 = alloc_clo(lam54987_fptr, 6);

//setting env list
clo55666[1] = foldl;
clo55666[2] = acc;
clo55666[3] = fun;
clo55666[4] = kont54719;
clo55666[5] = lst;
clo55666[6] = cdr;
void* f5472254839 = encode_clo(clo55666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5472254839;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54989 = encode_clo(alloc_clo(lam54989_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54991 = arg_buffer[1];
//reading env and args
void* kont54719 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo55668 = alloc_clo(lam54989_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo55668[1] = foldl;
clo55668[2] = car;
clo55668[3] = acc;
clo55668[4] = fun;
clo55668[5] = kont54719;
clo55668[6] = lst;
clo55668[7] = cdr;
void* f5472354837 = encode_clo(clo55668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5472354837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam54992_fptr() // lam54992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54993 = arg_buffer[1];
//reading env and args
void* a5462954852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54724 = (decode_clo(env54993))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54993))[2];
//not do dummy comment
void* a5462754848 = (decode_clo(env54993))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54724;
arg_buffer[3] = a5462754848;
arg_buffer[4] = a5462954852;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54992 = encode_clo(alloc_clo(lam54992_fptr, 0));

void* lam54994_fptr() // lam54994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54995 = arg_buffer[1];
//reading env and args
void* a5462854850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54724 = (decode_clo(env54995))[5];
//not do dummy comment
void* lst2 = (decode_clo(env54995))[4];
//not do dummy comment
void* cons = (decode_clo(env54995))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54995))[2];
//not do dummy comment
void* a5462754848 = (decode_clo(env54995))[1];

//creating new closure instance
void** clo55670 = alloc_clo(lam54992_fptr, 3);

//setting env list
clo55670[1] = a5462754848;
clo55670[2] = reverse_u45helper;
clo55670[3] = kont54724;
void* f5472554851 = encode_clo(clo55670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5472554851;
arg_buffer[3] = a5462854850;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54994 = encode_clo(alloc_clo(lam54994_fptr, 0));

void* lam54996_fptr() // lam54996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54997 = arg_buffer[1];
//reading env and args
void* a5462754848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54997))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54997))[5];
//not do dummy comment
void* kont54724 = (decode_clo(env54997))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54997))[3];
//not do dummy comment
void* car = (decode_clo(env54997))[2];
//not do dummy comment
void* cons = (decode_clo(env54997))[1];

//creating new closure instance
void** clo55672 = alloc_clo(lam54994_fptr, 5);

//setting env list
clo55672[1] = a5462754848;
clo55672[2] = reverse_u45helper;
clo55672[3] = cons;
clo55672[4] = lst2;
clo55672[5] = kont54724;
void* f5472654849 = encode_clo(clo55672);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5472654849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54996 = encode_clo(alloc_clo(lam54996_fptr, 0));

void* lam54998_fptr() // lam54998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54999 = arg_buffer[1];
//reading env and args
void* a5462654846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54999))[7];
//not do dummy comment
void* lst = (decode_clo(env54999))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54999))[5];
//not do dummy comment
void* kont54724 = (decode_clo(env54999))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54999))[3];
//not do dummy comment
void* car = (decode_clo(env54999))[2];
//not do dummy comment
void* cons = (decode_clo(env54999))[1];

//if-clause
bool if_guard55673 = is_true(a5462654846);
if(if_guard55673)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54724);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55675 = alloc_clo(lam54996_fptr, 6);

//setting env list
clo55675[1] = cons;
clo55675[2] = car;
clo55675[3] = lst2;
clo55675[4] = kont54724;
clo55675[5] = reverse_u45helper;
clo55675[6] = lst;
void* f5472754847 = encode_clo(clo55675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5472754847;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54998 = encode_clo(alloc_clo(lam54998_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55000 = arg_buffer[1];
//reading env and args
void* kont54724 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55677 = alloc_clo(lam54998_fptr, 7);

//setting env list
clo55677[1] = cons;
clo55677[2] = car;
clo55677[3] = lst2;
clo55677[4] = kont54724;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo55677[5] = reverse_u45helper;
clo55677[6] = lst;
clo55677[7] = cdr;
void* f5472854845 = encode_clo(clo55677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5472854845;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam55001_fptr() // lam55001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55002 = arg_buffer[1];
//reading env and args
void* a5463054854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54729 = (decode_clo(env55002))[3];
//not do dummy comment
void* lst = (decode_clo(env55002))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55002))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54729;
arg_buffer[3] = lst;
arg_buffer[4] = a5463054854;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55001 = encode_clo(alloc_clo(lam55001_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55003 = arg_buffer[1];
//reading env and args
void* kont54729 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo55679 = alloc_clo(lam55001_fptr, 3);

//setting env list
clo55679[1] = reverse_u45helper;
clo55679[2] = lst;
clo55679[3] = kont54729;
void* f5473054853 = encode_clo(clo55679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5473054853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam55004_fptr() // lam55004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55005 = arg_buffer[1];
//reading env and args
void* x5463354859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54731 = (decode_clo(env55005))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54731);
arg_buffer[2] = x5463354859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54731))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55004 = encode_clo(alloc_clo(lam55004_fptr, 0));

void* lam55006_fptr() // lam55006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55007 = arg_buffer[1];
//reading env and args
void* a5463854868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54731 = (decode_clo(env55007))[4];
//not do dummy comment
void* a5463454861 = (decode_clo(env55007))[3];
//not do dummy comment
void* a5463654864 = (decode_clo(env55007))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env55007))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54731;
arg_buffer[3] = a5463454861;
arg_buffer[4] = a5463654864;
arg_buffer[5] = a5463854868;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55006 = encode_clo(alloc_clo(lam55006_fptr, 0));

void* lam55008_fptr() // lam55008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55009 = arg_buffer[1];
//reading env and args
void* a5463754866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54731 = (decode_clo(env55009))[6];
//not do dummy comment
void* a5463454861 = (decode_clo(env55009))[5];
//not do dummy comment
void* a5463654864 = (decode_clo(env55009))[4];
//not do dummy comment
void* cons = (decode_clo(env55009))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55009))[2];
//not do dummy comment
void* lst2 = (decode_clo(env55009))[1];

//creating new closure instance
void** clo55681 = alloc_clo(lam55006_fptr, 4);

//setting env list
clo55681[1] = take_u45helper;
clo55681[2] = a5463654864;
clo55681[3] = a5463454861;
clo55681[4] = kont54731;
void* f5473354867 = encode_clo(clo55681);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5473354867;
arg_buffer[3] = a5463754866;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55008 = encode_clo(alloc_clo(lam55008_fptr, 0));

void* lam55010_fptr() // lam55010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55011 = arg_buffer[1];
//reading env and args
void* a5463654864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54731 = (decode_clo(env55011))[7];
//not do dummy comment
void* car = (decode_clo(env55011))[6];
//not do dummy comment
void* cons = (decode_clo(env55011))[5];
//not do dummy comment
void* lst = (decode_clo(env55011))[4];
//not do dummy comment
void* a5463454861 = (decode_clo(env55011))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55011))[2];
//not do dummy comment
void* lst2 = (decode_clo(env55011))[1];

//creating new closure instance
void** clo55683 = alloc_clo(lam55008_fptr, 6);

//setting env list
clo55683[1] = lst2;
clo55683[2] = take_u45helper;
clo55683[3] = cons;
clo55683[4] = a5463654864;
clo55683[5] = a5463454861;
clo55683[6] = kont54731;
void* f5473454865 = encode_clo(clo55683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5473454865;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55010 = encode_clo(alloc_clo(lam55010_fptr, 0));

void* lam55013_fptr() // lam55013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55014 = arg_buffer[1];
//reading env and args
void* a5463454861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54731 = (decode_clo(env55014))[8];
//not do dummy comment
void* lst = (decode_clo(env55014))[7];
//not do dummy comment
void* cons = (decode_clo(env55014))[6];
//not do dummy comment
void* _u45 = (decode_clo(env55014))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env55014))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55014))[3];
//not do dummy comment
void* n = (decode_clo(env55014))[2];
//not do dummy comment
void* car = (decode_clo(env55014))[1];
mpz_t* mpzvar55684 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55684, "1", 10);
void* a5463554862 = encode_mpz(mpzvar55684);

//creating new closure instance
void** clo55686 = alloc_clo(lam55010_fptr, 7);

//setting env list
clo55686[1] = lst2;
clo55686[2] = take_u45helper;
clo55686[3] = a5463454861;
clo55686[4] = lst;
clo55686[5] = cons;
clo55686[6] = car;
clo55686[7] = kont54731;
void* f5473554863 = encode_clo(clo55686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5473554863;
arg_buffer[3] = n;
arg_buffer[4] = a5463554862;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55013 = encode_clo(alloc_clo(lam55013_fptr, 0));

void* lam55015_fptr() // lam55015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55016 = arg_buffer[1];
//reading env and args
void* a5463254857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55016))[10];
//not do dummy comment
void* kont54731 = (decode_clo(env55016))[9];
//not do dummy comment
void* lst = (decode_clo(env55016))[8];
//not do dummy comment
void* reverse = (decode_clo(env55016))[7];
//not do dummy comment
void* cons = (decode_clo(env55016))[6];
//not do dummy comment
void* _u45 = (decode_clo(env55016))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env55016))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55016))[3];
//not do dummy comment
void* n = (decode_clo(env55016))[2];
//not do dummy comment
void* car = (decode_clo(env55016))[1];

//if-clause
bool if_guard55687 = is_true(a5463254857);
if(if_guard55687)
{

//creating new closure instance
void** clo55689 = alloc_clo(lam55004_fptr, 1);

//setting env list
clo55689[1] = kont54731;
void* f5473254858 = encode_clo(clo55689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5473254858;
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
void** clo55691 = alloc_clo(lam55013_fptr, 8);

//setting env list
clo55691[1] = car;
clo55691[2] = n;
clo55691[3] = lst2;
clo55691[4] = take_u45helper;
clo55691[5] = _u45;
clo55691[6] = cons;
clo55691[7] = lst;
clo55691[8] = kont54731;
void* f5473654860 = encode_clo(clo55691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5473654860;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55015 = encode_clo(alloc_clo(lam55015_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55018 = arg_buffer[1];
//reading env and args
void* kont54731 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar55692 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55692, "0", 10);
void* a5463154855 = encode_mpz(mpzvar55692);

//creating new closure instance
void** clo55694 = alloc_clo(lam55015_fptr, 10);

//setting env list
clo55694[1] = car;
clo55694[2] = n;
clo55694[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo55694[4] = take_u45helper;
clo55694[5] = _u45;
clo55694[6] = cons;
clo55694[7] = reverse;
clo55694[8] = lst;
clo55694[9] = kont54731;
clo55694[10] = cdr;
void* f5473754856 = encode_clo(clo55694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5473754856;
arg_buffer[3] = n;
arg_buffer[4] = a5463154855;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam55019_fptr() // lam55019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55020 = arg_buffer[1];
//reading env and args
void* a5463954870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55020))[4];
//not do dummy comment
void* kont54738 = (decode_clo(env55020))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55020))[2];
//not do dummy comment
void* n = (decode_clo(env55020))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54738;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5463954870;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55019 = encode_clo(alloc_clo(lam55019_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55021 = arg_buffer[1];
//reading env and args
void* kont54738 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55696 = alloc_clo(lam55019_fptr, 4);

//setting env list
clo55696[1] = n;
clo55696[2] = take_u45helper;
clo55696[3] = kont54738;
clo55696[4] = lst;
void* f5473954869 = encode_clo(clo55696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5473954869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam55023_fptr() // lam55023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55024 = arg_buffer[1];
//reading env and args
void* a5464454878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5464254874 = (decode_clo(env55024))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55024))[2];
//not do dummy comment
void* kont54740 = (decode_clo(env55024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont54740;
arg_buffer[3] = a5464254874;
arg_buffer[4] = a5464454878;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55023 = encode_clo(alloc_clo(lam55023_fptr, 0));

void* lam55025_fptr() // lam55025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55026 = arg_buffer[1];
//reading env and args
void* a5464354876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5464254874 = (decode_clo(env55026))[4];
//not do dummy comment
void* length = (decode_clo(env55026))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55026))[2];
//not do dummy comment
void* kont54740 = (decode_clo(env55026))[1];

//creating new closure instance
void** clo55698 = alloc_clo(lam55023_fptr, 3);

//setting env list
clo55698[1] = kont54740;
clo55698[2] = _u43;
clo55698[3] = a5464254874;
void* f5474154877 = encode_clo(clo55698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5474154877;
arg_buffer[3] = a5464354876;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55025 = encode_clo(alloc_clo(lam55025_fptr, 0));

void* lam55028_fptr() // lam55028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55029 = arg_buffer[1];
//reading env and args
void* a5464054872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55029))[5];
//not do dummy comment
void* lst = (decode_clo(env55029))[4];
//not do dummy comment
void* length = (decode_clo(env55029))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55029))[2];
//not do dummy comment
void* kont54740 = (decode_clo(env55029))[1];

//if-clause
bool if_guard55699 = is_true(a5464054872);
if(if_guard55699)
{
mpz_t* mpzvar55700 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55700, "0", 10);
void* x5464154873 = encode_mpz(mpzvar55700);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54740);
arg_buffer[2] = x5464154873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54740))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar55701 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55701, "1", 10);
void* a5464254874 = encode_mpz(mpzvar55701);

//creating new closure instance
void** clo55703 = alloc_clo(lam55025_fptr, 4);

//setting env list
clo55703[1] = kont54740;
clo55703[2] = _u43;
clo55703[3] = length;
clo55703[4] = a5464254874;
void* f5474254875 = encode_clo(clo55703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5474254875;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55028 = encode_clo(alloc_clo(lam55028_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55030 = arg_buffer[1];
//reading env and args
void* kont54740 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo55705 = alloc_clo(lam55028_fptr, 5);

//setting env list
clo55705[1] = kont54740;
clo55705[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo55705[3] = length;
clo55705[4] = lst;
clo55705[5] = cdr;
void* f5474354871 = encode_clo(clo55705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5474354871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam55031_fptr() // lam55031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55032 = arg_buffer[1];
//reading env and args
void* x5464654882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54744 = (decode_clo(env55032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54744);
arg_buffer[2] = x5464654882;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54744))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55031 = encode_clo(alloc_clo(lam55031_fptr, 0));

void* lam55033_fptr() // lam55033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55034 = arg_buffer[1];
//reading env and args
void* a5465054890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5464854886 = (decode_clo(env55034))[3];
//not do dummy comment
void* cons = (decode_clo(env55034))[2];
//not do dummy comment
void* kont54744 = (decode_clo(env55034))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54744;
arg_buffer[3] = a5464854886;
arg_buffer[4] = a5465054890;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55033 = encode_clo(alloc_clo(lam55033_fptr, 0));

void* lam55035_fptr() // lam55035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55036 = arg_buffer[1];
//reading env and args
void* a5464954888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env55036))[5];
//not do dummy comment
void* proc = (decode_clo(env55036))[4];
//not do dummy comment
void* a5464854886 = (decode_clo(env55036))[3];
//not do dummy comment
void* cons = (decode_clo(env55036))[2];
//not do dummy comment
void* kont54744 = (decode_clo(env55036))[1];

//creating new closure instance
void** clo55707 = alloc_clo(lam55033_fptr, 3);

//setting env list
clo55707[1] = kont54744;
clo55707[2] = cons;
clo55707[3] = a5464854886;
void* f5474654889 = encode_clo(clo55707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5474654889;
arg_buffer[3] = proc;
arg_buffer[4] = a5464954888;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55035 = encode_clo(alloc_clo(lam55035_fptr, 0));

void* lam55037_fptr() // lam55037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55038 = arg_buffer[1];
//reading env and args
void* a5464854886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55038))[6];
//not do dummy comment
void* lst = (decode_clo(env55038))[5];
//not do dummy comment
void* map = (decode_clo(env55038))[4];
//not do dummy comment
void* proc = (decode_clo(env55038))[3];
//not do dummy comment
void* cons = (decode_clo(env55038))[2];
//not do dummy comment
void* kont54744 = (decode_clo(env55038))[1];

//creating new closure instance
void** clo55709 = alloc_clo(lam55035_fptr, 5);

//setting env list
clo55709[1] = kont54744;
clo55709[2] = cons;
clo55709[3] = a5464854886;
clo55709[4] = proc;
clo55709[5] = map;
void* f5474754887 = encode_clo(clo55709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5474754887;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55037 = encode_clo(alloc_clo(lam55037_fptr, 0));

void* lam55039_fptr() // lam55039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55040 = arg_buffer[1];
//reading env and args
void* a5464754884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55040))[6];
//not do dummy comment
void* lst = (decode_clo(env55040))[5];
//not do dummy comment
void* map = (decode_clo(env55040))[4];
//not do dummy comment
void* proc = (decode_clo(env55040))[3];
//not do dummy comment
void* cons = (decode_clo(env55040))[2];
//not do dummy comment
void* kont54744 = (decode_clo(env55040))[1];

//creating new closure instance
void** clo55711 = alloc_clo(lam55037_fptr, 6);

//setting env list
clo55711[1] = kont54744;
clo55711[2] = cons;
clo55711[3] = proc;
clo55711[4] = map;
clo55711[5] = lst;
clo55711[6] = cdr;
void* f5474854885 = encode_clo(clo55711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5474854885;
arg_buffer[3] = a5464754884;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55039 = encode_clo(alloc_clo(lam55039_fptr, 0));

void* lam55041_fptr() // lam55041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55042 = arg_buffer[1];
//reading env and args
void* a5464554880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55042))[8];
//not do dummy comment
void* map = (decode_clo(env55042))[7];
//not do dummy comment
void* proc = (decode_clo(env55042))[6];
//not do dummy comment
void* car = (decode_clo(env55042))[5];
//not do dummy comment
void* cons = (decode_clo(env55042))[4];
//not do dummy comment
void* kont54744 = (decode_clo(env55042))[3];
//not do dummy comment
void* list = (decode_clo(env55042))[2];
//not do dummy comment
void* cdr = (decode_clo(env55042))[1];

//if-clause
bool if_guard55712 = is_true(a5464554880);
if(if_guard55712)
{

//creating new closure instance
void** clo55714 = alloc_clo(lam55031_fptr, 1);

//setting env list
clo55714[1] = kont54744;
void* f5474554881 = encode_clo(clo55714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5474554881;
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
void** clo55716 = alloc_clo(lam55039_fptr, 6);

//setting env list
clo55716[1] = kont54744;
clo55716[2] = cons;
clo55716[3] = proc;
clo55716[4] = map;
clo55716[5] = lst;
clo55716[6] = cdr;
void* f5474954883 = encode_clo(clo55716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5474954883;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55041 = encode_clo(alloc_clo(lam55041_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55043 = arg_buffer[1];
//reading env and args
void* kont54744 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55718 = alloc_clo(lam55041_fptr, 8);

//setting env list
clo55718[1] = cdr;
clo55718[2] = list;
clo55718[3] = kont54744;
clo55718[4] = cons;
clo55718[5] = car;
clo55718[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo55718[7] = map;
clo55718[8] = lst;
void* f5475054879 = encode_clo(clo55718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5475054879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam55044_fptr() // lam55044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55045 = arg_buffer[1];
//reading env and args
void* x5465254894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54751 = (decode_clo(env55045))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54751);
arg_buffer[2] = x5465254894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54751))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55044 = encode_clo(alloc_clo(lam55044_fptr, 0));

void* lam55046_fptr() // lam55046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55047 = arg_buffer[1];
//reading env and args
void* a5465754904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54751 = (decode_clo(env55047))[3];
//not do dummy comment
void* a5465554900 = (decode_clo(env55047))[2];
//not do dummy comment
void* cons = (decode_clo(env55047))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54751;
arg_buffer[3] = a5465554900;
arg_buffer[4] = a5465754904;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55046 = encode_clo(alloc_clo(lam55046_fptr, 0));

void* lam55048_fptr() // lam55048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55049 = arg_buffer[1];
//reading env and args
void* a5465654902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54751 = (decode_clo(env55049))[5];
//not do dummy comment
void* op = (decode_clo(env55049))[4];
//not do dummy comment
void* a5465554900 = (decode_clo(env55049))[3];
//not do dummy comment
void* filter = (decode_clo(env55049))[2];
//not do dummy comment
void* cons = (decode_clo(env55049))[1];

//creating new closure instance
void** clo55720 = alloc_clo(lam55046_fptr, 3);

//setting env list
clo55720[1] = cons;
clo55720[2] = a5465554900;
clo55720[3] = kont54751;
void* f5475354903 = encode_clo(clo55720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5475354903;
arg_buffer[3] = op;
arg_buffer[4] = a5465654902;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55048 = encode_clo(alloc_clo(lam55048_fptr, 0));

void* lam55050_fptr() // lam55050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55051 = arg_buffer[1];
//reading env and args
void* a5465554900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55051))[6];
//not do dummy comment
void* lst = (decode_clo(env55051))[5];
//not do dummy comment
void* kont54751 = (decode_clo(env55051))[4];
//not do dummy comment
void* op = (decode_clo(env55051))[3];
//not do dummy comment
void* filter = (decode_clo(env55051))[2];
//not do dummy comment
void* cons = (decode_clo(env55051))[1];

//creating new closure instance
void** clo55722 = alloc_clo(lam55048_fptr, 5);

//setting env list
clo55722[1] = cons;
clo55722[2] = filter;
clo55722[3] = a5465554900;
clo55722[4] = op;
clo55722[5] = kont54751;
void* f5475454901 = encode_clo(clo55722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5475454901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55050 = encode_clo(alloc_clo(lam55050_fptr, 0));

void* lam55052_fptr() // lam55052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55053 = arg_buffer[1];
//reading env and args
void* a5465854906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54751 = (decode_clo(env55053))[3];
//not do dummy comment
void* op = (decode_clo(env55053))[2];
//not do dummy comment
void* filter = (decode_clo(env55053))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont54751;
arg_buffer[3] = op;
arg_buffer[4] = a5465854906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55052 = encode_clo(alloc_clo(lam55052_fptr, 0));

void* lam55054_fptr() // lam55054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55055 = arg_buffer[1];
//reading env and args
void* a5465454898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55055))[7];
//not do dummy comment
void* lst = (decode_clo(env55055))[6];
//not do dummy comment
void* kont54751 = (decode_clo(env55055))[5];
//not do dummy comment
void* op = (decode_clo(env55055))[4];
//not do dummy comment
void* cons = (decode_clo(env55055))[3];
//not do dummy comment
void* filter = (decode_clo(env55055))[2];
//not do dummy comment
void* car = (decode_clo(env55055))[1];

//if-clause
bool if_guard55723 = is_true(a5465454898);
if(if_guard55723)
{

//creating new closure instance
void** clo55725 = alloc_clo(lam55050_fptr, 6);

//setting env list
clo55725[1] = cons;
clo55725[2] = filter;
clo55725[3] = op;
clo55725[4] = kont54751;
clo55725[5] = lst;
clo55725[6] = cdr;
void* f5475554899 = encode_clo(clo55725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5475554899;
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
void** clo55727 = alloc_clo(lam55052_fptr, 3);

//setting env list
clo55727[1] = filter;
clo55727[2] = op;
clo55727[3] = kont54751;
void* f5475654905 = encode_clo(clo55727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5475654905;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55054 = encode_clo(alloc_clo(lam55054_fptr, 0));

void* lam55056_fptr() // lam55056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55057 = arg_buffer[1];
//reading env and args
void* a5465354896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55057))[7];
//not do dummy comment
void* lst = (decode_clo(env55057))[6];
//not do dummy comment
void* kont54751 = (decode_clo(env55057))[5];
//not do dummy comment
void* op = (decode_clo(env55057))[4];
//not do dummy comment
void* cons = (decode_clo(env55057))[3];
//not do dummy comment
void* filter = (decode_clo(env55057))[2];
//not do dummy comment
void* car = (decode_clo(env55057))[1];

//creating new closure instance
void** clo55729 = alloc_clo(lam55054_fptr, 7);

//setting env list
clo55729[1] = car;
clo55729[2] = filter;
clo55729[3] = cons;
clo55729[4] = op;
clo55729[5] = kont54751;
clo55729[6] = lst;
clo55729[7] = cdr;
void* f5475754897 = encode_clo(clo55729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5475754897;
arg_buffer[3] = a5465354896;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55056 = encode_clo(alloc_clo(lam55056_fptr, 0));

void* lam55058_fptr() // lam55058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55059 = arg_buffer[1];
//reading env and args
void* a5465154892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55059))[8];
//not do dummy comment
void* kont54751 = (decode_clo(env55059))[7];
//not do dummy comment
void* op = (decode_clo(env55059))[6];
//not do dummy comment
void* cons = (decode_clo(env55059))[5];
//not do dummy comment
void* list = (decode_clo(env55059))[4];
//not do dummy comment
void* cdr = (decode_clo(env55059))[3];
//not do dummy comment
void* filter = (decode_clo(env55059))[2];
//not do dummy comment
void* car = (decode_clo(env55059))[1];

//if-clause
bool if_guard55730 = is_true(a5465154892);
if(if_guard55730)
{

//creating new closure instance
void** clo55732 = alloc_clo(lam55044_fptr, 1);

//setting env list
clo55732[1] = kont54751;
void* f5475254893 = encode_clo(clo55732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5475254893;
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
void** clo55734 = alloc_clo(lam55056_fptr, 7);

//setting env list
clo55734[1] = car;
clo55734[2] = filter;
clo55734[3] = cons;
clo55734[4] = op;
clo55734[5] = kont54751;
clo55734[6] = lst;
clo55734[7] = cdr;
void* f5475854895 = encode_clo(clo55734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5475854895;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55058 = encode_clo(alloc_clo(lam55058_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55060 = arg_buffer[1];
//reading env and args
void* kont54751 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55736 = alloc_clo(lam55058_fptr, 8);

//setting env list
clo55736[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo55736[2] = filter;
clo55736[3] = cdr;
clo55736[4] = list;
clo55736[5] = cons;
clo55736[6] = op;
clo55736[7] = kont54751;
clo55736[8] = lst;
void* f5475954891 = encode_clo(clo55736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5475954891;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam55061_fptr() // lam55061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55062 = arg_buffer[1];
//reading env and args
void* a5466354914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env55062))[3];
//not do dummy comment
void* a5466154911 = (decode_clo(env55062))[2];
//not do dummy comment
void* kont54760 = (decode_clo(env55062))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont54760;
arg_buffer[3] = a5466154911;
arg_buffer[4] = a5466354914;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55061 = encode_clo(alloc_clo(lam55061_fptr, 0));

void* lam55064_fptr() // lam55064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55065 = arg_buffer[1];
//reading env and args
void* a5466154911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env55065))[4];
//not do dummy comment
void* n = (decode_clo(env55065))[3];
//not do dummy comment
void* kont54760 = (decode_clo(env55065))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55065))[1];
mpz_t* mpzvar55737 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55737, "1", 10);
void* a5466254912 = encode_mpz(mpzvar55737);

//creating new closure instance
void** clo55739 = alloc_clo(lam55061_fptr, 3);

//setting env list
clo55739[1] = kont54760;
clo55739[2] = a5466154911;
clo55739[3] = drop;
void* f5476154913 = encode_clo(clo55739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5476154913;
arg_buffer[3] = n;
arg_buffer[4] = a5466254912;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55064 = encode_clo(alloc_clo(lam55064_fptr, 0));

void* lam55066_fptr() // lam55066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55067 = arg_buffer[1];
//reading env and args
void* a5466054909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55067))[6];
//not do dummy comment
void* n = (decode_clo(env55067))[5];
//not do dummy comment
void* lst = (decode_clo(env55067))[4];
//not do dummy comment
void* drop = (decode_clo(env55067))[3];
//not do dummy comment
void* kont54760 = (decode_clo(env55067))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55067))[1];

//if-clause
bool if_guard55740 = is_true(a5466054909);
if(if_guard55740)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54760);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54760))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55742 = alloc_clo(lam55064_fptr, 4);

//setting env list
clo55742[1] = _u45;
clo55742[2] = kont54760;
clo55742[3] = n;
clo55742[4] = drop;
void* f5476254910 = encode_clo(clo55742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5476254910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55066 = encode_clo(alloc_clo(lam55066_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55069 = arg_buffer[1];
//reading env and args
void* kont54760 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar55743 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55743, "0", 10);
void* a5465954907 = encode_mpz(mpzvar55743);

//creating new closure instance
void** clo55745 = alloc_clo(lam55066_fptr, 6);

//setting env list
clo55745[1] = _u45;
clo55745[2] = kont54760;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo55745[3] = drop;
clo55745[4] = lst;
clo55745[5] = n;
clo55745[6] = cdr;
void* f5476354908 = encode_clo(clo55745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5476354908;
arg_buffer[3] = n;
arg_buffer[4] = a5465954907;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam55070_fptr() // lam55070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55071 = arg_buffer[1];
//reading env and args
void* a5466754922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54764 = (decode_clo(env55071))[3];
//not do dummy comment
void* proc = (decode_clo(env55071))[2];
//not do dummy comment
void* a5466554918 = (decode_clo(env55071))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont54764;
arg_buffer[3] = a5466554918;
arg_buffer[4] = a5466754922;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55070 = encode_clo(alloc_clo(lam55070_fptr, 0));

void* lam55072_fptr() // lam55072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55073 = arg_buffer[1];
//reading env and args
void* a5466654920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54764 = (decode_clo(env55073))[5];
//not do dummy comment
void* foldr = (decode_clo(env55073))[4];
//not do dummy comment
void* a5466554918 = (decode_clo(env55073))[3];
//not do dummy comment
void* proc = (decode_clo(env55073))[2];
//not do dummy comment
void* acc = (decode_clo(env55073))[1];

//creating new closure instance
void** clo55747 = alloc_clo(lam55070_fptr, 3);

//setting env list
clo55747[1] = a5466554918;
clo55747[2] = proc;
clo55747[3] = kont54764;
void* f5476554921 = encode_clo(clo55747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5476554921;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5466654920;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55072 = encode_clo(alloc_clo(lam55072_fptr, 0));

void* lam55074_fptr() // lam55074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55075 = arg_buffer[1];
//reading env and args
void* a5466554918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55075))[6];
//not do dummy comment
void* kont54764 = (decode_clo(env55075))[5];
//not do dummy comment
void* foldr = (decode_clo(env55075))[4];
//not do dummy comment
void* lst = (decode_clo(env55075))[3];
//not do dummy comment
void* proc = (decode_clo(env55075))[2];
//not do dummy comment
void* acc = (decode_clo(env55075))[1];

//creating new closure instance
void** clo55749 = alloc_clo(lam55072_fptr, 5);

//setting env list
clo55749[1] = acc;
clo55749[2] = proc;
clo55749[3] = a5466554918;
clo55749[4] = foldr;
clo55749[5] = kont54764;
void* f5476654919 = encode_clo(clo55749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5476654919;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55074 = encode_clo(alloc_clo(lam55074_fptr, 0));

void* lam55076_fptr() // lam55076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55077 = arg_buffer[1];
//reading env and args
void* a5466454916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55077))[7];
//not do dummy comment
void* kont54764 = (decode_clo(env55077))[6];
//not do dummy comment
void* car = (decode_clo(env55077))[5];
//not do dummy comment
void* foldr = (decode_clo(env55077))[4];
//not do dummy comment
void* lst = (decode_clo(env55077))[3];
//not do dummy comment
void* proc = (decode_clo(env55077))[2];
//not do dummy comment
void* acc = (decode_clo(env55077))[1];

//if-clause
bool if_guard55750 = is_true(a5466454916);
if(if_guard55750)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54764);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54764))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55752 = alloc_clo(lam55074_fptr, 6);

//setting env list
clo55752[1] = acc;
clo55752[2] = proc;
clo55752[3] = lst;
clo55752[4] = foldr;
clo55752[5] = kont54764;
clo55752[6] = cdr;
void* f5476754917 = encode_clo(clo55752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5476754917;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55076 = encode_clo(alloc_clo(lam55076_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55078 = arg_buffer[1];
//reading env and args
void* kont54764 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo55754 = alloc_clo(lam55076_fptr, 7);

//setting env list
clo55754[1] = acc;
clo55754[2] = proc;
clo55754[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo55754[4] = foldr;
clo55754[5] = car;
clo55754[6] = kont54764;
clo55754[7] = cdr;
void* f5476854915 = encode_clo(clo55754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5476854915;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam55079_fptr() // lam55079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55080 = arg_buffer[1];
//reading env and args
void* a5467154930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5466954926 = (decode_clo(env55080))[3];
//not do dummy comment
void* kont54769 = (decode_clo(env55080))[2];
//not do dummy comment
void* cons = (decode_clo(env55080))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54769;
arg_buffer[3] = a5466954926;
arg_buffer[4] = a5467154930;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55079 = encode_clo(alloc_clo(lam55079_fptr, 0));

void* lam55081_fptr() // lam55081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55082 = arg_buffer[1];
//reading env and args
void* a5467054928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5466954926 = (decode_clo(env55082))[5];
//not do dummy comment
void* lst2 = (decode_clo(env55082))[4];
//not do dummy comment
void* cons = (decode_clo(env55082))[3];
//not do dummy comment
void* append = (decode_clo(env55082))[2];
//not do dummy comment
void* kont54769 = (decode_clo(env55082))[1];

//creating new closure instance
void** clo55756 = alloc_clo(lam55079_fptr, 3);

//setting env list
clo55756[1] = cons;
clo55756[2] = kont54769;
clo55756[3] = a5466954926;
void* f5477054929 = encode_clo(clo55756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5477054929;
arg_buffer[3] = a5467054928;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55081 = encode_clo(alloc_clo(lam55081_fptr, 0));

void* lam55083_fptr() // lam55083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55084 = arg_buffer[1];
//reading env and args
void* a5466954926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55084))[6];
//not do dummy comment
void* lst2 = (decode_clo(env55084))[5];
//not do dummy comment
void* lst1 = (decode_clo(env55084))[4];
//not do dummy comment
void* cons = (decode_clo(env55084))[3];
//not do dummy comment
void* append = (decode_clo(env55084))[2];
//not do dummy comment
void* kont54769 = (decode_clo(env55084))[1];

//creating new closure instance
void** clo55758 = alloc_clo(lam55081_fptr, 5);

//setting env list
clo55758[1] = kont54769;
clo55758[2] = append;
clo55758[3] = cons;
clo55758[4] = lst2;
clo55758[5] = a5466954926;
void* f5477154927 = encode_clo(clo55758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5477154927;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55083 = encode_clo(alloc_clo(lam55083_fptr, 0));

void* lam55085_fptr() // lam55085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55086 = arg_buffer[1];
//reading env and args
void* a5466854924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55086))[7];
//not do dummy comment
void* lst2 = (decode_clo(env55086))[6];
//not do dummy comment
void* cons = (decode_clo(env55086))[5];
//not do dummy comment
void* append = (decode_clo(env55086))[4];
//not do dummy comment
void* kont54769 = (decode_clo(env55086))[3];
//not do dummy comment
void* lst1 = (decode_clo(env55086))[2];
//not do dummy comment
void* car = (decode_clo(env55086))[1];

//if-clause
bool if_guard55759 = is_true(a5466854924);
if(if_guard55759)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54769);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54769))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55761 = alloc_clo(lam55083_fptr, 6);

//setting env list
clo55761[1] = kont54769;
clo55761[2] = append;
clo55761[3] = cons;
clo55761[4] = lst1;
clo55761[5] = lst2;
clo55761[6] = cdr;
void* f5477254925 = encode_clo(clo55761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5477254925;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55085 = encode_clo(alloc_clo(lam55085_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55087 = arg_buffer[1];
//reading env and args
void* kont54769 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55763 = alloc_clo(lam55085_fptr, 7);

//setting env list
clo55763[1] = car;
clo55763[2] = lst1;
clo55763[3] = kont54769;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo55763[4] = append;
clo55763[5] = cons;
clo55763[6] = lst2;
clo55763[7] = cdr;
void* f5477354923 = encode_clo(clo55763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5477354923;
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
void* _55088 = arg_buffer[1];
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

void* kont5477454931 = prim_car(lst);
void* lst54932 = prim_cdr(lst);
void* x5467254933 = apply_prim_hash(lst54932);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5477454931);
arg_buffer[2] = x5467254933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5477454931))[0]);
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
void* _55089 = arg_buffer[1];
//reading env and args
void* kont54776 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5467354934 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54776);
arg_buffer[2] = x5467354934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54776))[0]);
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
void* _55090 = arg_buffer[1];
//reading env and args
void* kont54777 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5467454935 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54777);
arg_buffer[2] = x5467454935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54777))[0]);
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
void* _55091 = arg_buffer[1];
//reading env and args
void* kont54778 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5467554936 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54778);
arg_buffer[2] = x5467554936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54778))[0]);
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
void* _55092 = arg_buffer[1];
//reading env and args
void* kont54779 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5467654937 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54779);
arg_buffer[2] = x5467654937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54779))[0]);
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
void* _55098 = arg_buffer[1];
//reading env and args
void* kont54780 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar55764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55764, "100", 10);
void* a5467754938 = encode_mpz(mpzvar55764);
mpz_t* mpzvar55765 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55765, "100", 10);
void* a5467854939 = encode_mpz(mpzvar55765);
mpz_t* mpzvar55766 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55766, "100", 10);
void* a5467954940 = encode_mpz(mpzvar55766);
mpz_t* mpzvar55767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55767, "100", 10);
void* a5468054941 = encode_mpz(mpzvar55767);
mpz_t* mpzvar55768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55768, "100", 10);
void* a5468154942 = encode_mpz(mpzvar55768);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = kont54780;
arg_buffer[3] = a5467754938;
arg_buffer[4] = a5467854939;
arg_buffer[5] = a5467954940;
arg_buffer[6] = a5468054941;
arg_buffer[7] = a5468154942;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam55099_fptr() // lam55099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55100 = arg_buffer[1];
//reading env and args
void* x5468254944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54781 = (decode_clo(env55100))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54781);
arg_buffer[2] = x5468254944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54781))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55099 = encode_clo(alloc_clo(lam55099_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55101 = arg_buffer[1];
//reading env and args
void* kont54781 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo55770 = alloc_clo(lam55099_fptr, 1);

//setting env list
clo55770[1] = kont54781;
void* f5478254943 = encode_clo(clo55770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5478254943;
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

