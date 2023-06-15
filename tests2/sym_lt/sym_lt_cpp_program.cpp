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

void* kont5468854788 = prim_car(lst);
void* lst54789 = prim_cdr(lst);
void* x5459854790 = apply_prim__u43(lst54789);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5468854788);
arg_buffer[2] = x5459854790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5468854788))[0]);
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

void* kont5469054791 = prim_car(lst);
void* lst54792 = prim_cdr(lst);
void* x5459954793 = apply_prim__u45(lst54792);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469054791);
arg_buffer[2] = x5459954793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469054791))[0]);
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

void* kont5469254794 = prim_car(lst);
void* lst54795 = prim_cdr(lst);
void* x5460054796 = apply_prim__u42(lst54795);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469254794);
arg_buffer[2] = x5460054796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469254794))[0]);
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
void* _54954 = arg_buffer[1];
//reading env and args
void* kont54694 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5460154797 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54694);
arg_buffer[2] = x5460154797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54694))[0]);
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
void* _54955 = arg_buffer[1];
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

void* kont5469554798 = prim_car(lst);
void* lst54799 = prim_cdr(lst);
void* x5460254800 = apply_prim__u47(lst54799);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469554798);
arg_buffer[2] = x5460254800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469554798))[0]);
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
void* _54956 = arg_buffer[1];
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

void* kont5469754801 = prim_car(lst);
void* lst54802 = prim_cdr(lst);
void* x5460354803 = apply_prim__u61(lst54802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469754801);
arg_buffer[2] = x5460354803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469754801))[0]);
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
void* _54957 = arg_buffer[1];
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

void* kont5469954804 = prim_car(lst);
void* lst54805 = prim_cdr(lst);
void* x5460454806 = apply_prim__u62(lst54805);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5469954804);
arg_buffer[2] = x5460454806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5469954804))[0]);
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
void* _54958 = arg_buffer[1];
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

void* kont5470154807 = prim_car(lst);
void* lst54808 = prim_cdr(lst);
void* x5460554809 = apply_prim__u60(lst54808);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5470154807);
arg_buffer[2] = x5460554809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5470154807))[0]);
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
void* _54959 = arg_buffer[1];
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

void* kont5470354810 = prim_car(lst);
void* lst54811 = prim_cdr(lst);
void* x5460654812 = apply_prim__u60_u61(lst54811);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5470354810);
arg_buffer[2] = x5460654812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5470354810))[0]);
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
void* _54960 = arg_buffer[1];
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

void* kont5470554813 = prim_car(lst);
void* lst54814 = prim_cdr(lst);
void* x5460754815 = apply_prim__u62_u61(lst54814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5470554813);
arg_buffer[2] = x5460754815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5470554813))[0]);
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
void* _54961 = arg_buffer[1];
//reading env and args
void* kont54707 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5460854816 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54707);
arg_buffer[2] = x5460854816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54707))[0]);
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
void* _54962 = arg_buffer[1];
//reading env and args
void* kont54708 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5460954817 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54708);
arg_buffer[2] = x5460954817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54708))[0]);
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
void* _54963 = arg_buffer[1];
//reading env and args
void* kont54709 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5461054818 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54709);
arg_buffer[2] = x5461054818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54709))[0]);
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
void* _54964 = arg_buffer[1];
//reading env and args
void* kont54710 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5461154819 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54710);
arg_buffer[2] = x5461154819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54710))[0]);
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
void* _54965 = arg_buffer[1];
//reading env and args
void* kont54711 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5461254820 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54711);
arg_buffer[2] = x5461254820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54711))[0]);
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
void* _54966 = arg_buffer[1];
//reading env and args
void* kont54712 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5461354821 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54712);
arg_buffer[2] = x5461354821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54712))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam54967_fptr() // lam54967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54968 = arg_buffer[1];
//reading env and args
void* a5461654825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5461454822 = (decode_clo(env54968))[3];
//not do dummy comment
void* kont54713 = (decode_clo(env54968))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env54968))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54713;
arg_buffer[3] = a5461454822;
arg_buffer[4] = a5461654825;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54967 = encode_clo(alloc_clo(lam54967_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54971 = arg_buffer[1];
//reading env and args
void* kont54713 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55649 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55649, "0", 10);
void* a5461454822 = encode_mpz(mpzvar55649);
mpz_t* mpzvar55650 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55650, "2", 10);
void* a5461554823 = encode_mpz(mpzvar55650);

//creating new closure instance
void** clo55652 = alloc_clo(lam54967_fptr, 3);

//setting env list
clo55652[1] = equal_u63;
clo55652[2] = kont54713;
clo55652[3] = a5461454822;
void* f5471454824 = encode_clo(clo55652);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5471454824;
arg_buffer[3] = x;
arg_buffer[4] = a5461554823;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam54972_fptr() // lam54972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54973 = arg_buffer[1];
//reading env and args
void* a5461954829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5461754826 = (decode_clo(env54973))[3];
//not do dummy comment
void* kont54715 = (decode_clo(env54973))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env54973))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont54715;
arg_buffer[3] = a5461754826;
arg_buffer[4] = a5461954829;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54972 = encode_clo(alloc_clo(lam54972_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54976 = arg_buffer[1];
//reading env and args
void* kont54715 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55653 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55653, "1", 10);
void* a5461754826 = encode_mpz(mpzvar55653);
mpz_t* mpzvar55654 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55654, "2", 10);
void* a5461854827 = encode_mpz(mpzvar55654);

//creating new closure instance
void** clo55656 = alloc_clo(lam54972_fptr, 3);

//setting env list
clo55656[1] = equal_u63;
clo55656[2] = kont54715;
clo55656[3] = a5461754826;
void* f5471654828 = encode_clo(clo55656);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5471654828;
arg_buffer[3] = x;
arg_buffer[4] = a5461854827;
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
void* _54977 = arg_buffer[1];
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

void* kont5471754830 = prim_car(x);
void* x54831 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5471754830);
arg_buffer[2] = x54831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5471754830))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam54980_fptr() // lam54980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54981 = arg_buffer[1];
//reading env and args
void* a5462554841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54719 = (decode_clo(env54981))[3];
//not do dummy comment
void* x = (decode_clo(env54981))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54981))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont54719;
arg_buffer[3] = x;
arg_buffer[4] = a5462554841;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54980 = encode_clo(alloc_clo(lam54980_fptr, 0));

void* lam54982_fptr() // lam54982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54983 = arg_buffer[1];
//reading env and args
void* a5462354838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54983))[5];
//not do dummy comment
void* lst = (decode_clo(env54983))[4];
//not do dummy comment
void* kont54719 = (decode_clo(env54983))[3];
//not do dummy comment
void* x = (decode_clo(env54983))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54983))[1];

//if-clause
bool if_guard55657 = is_true(a5462354838);
if(if_guard55657)
{
void* x5462454839 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54719);
arg_buffer[2] = x5462454839;
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
void** clo55659 = alloc_clo(lam54980_fptr, 3);

//setting env list
clo55659[1] = member_u63;
clo55659[2] = x;
clo55659[3] = kont54719;
void* f5472054840 = encode_clo(clo55659);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5472054840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54982 = encode_clo(alloc_clo(lam54982_fptr, 0));

void* lam54984_fptr() // lam54984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54985 = arg_buffer[1];
//reading env and args
void* a5462254836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54985))[6];
//not do dummy comment
void* lst = (decode_clo(env54985))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env54985))[4];
//not do dummy comment
void* kont54719 = (decode_clo(env54985))[3];
//not do dummy comment
void* x = (decode_clo(env54985))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54985))[1];

//creating new closure instance
void** clo55661 = alloc_clo(lam54982_fptr, 5);

//setting env list
clo55661[1] = member_u63;
clo55661[2] = x;
clo55661[3] = kont54719;
clo55661[4] = lst;
clo55661[5] = cdr;
void* f5472154837 = encode_clo(clo55661);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5472154837;
arg_buffer[3] = a5462254836;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54984 = encode_clo(alloc_clo(lam54984_fptr, 0));

void* lam54986_fptr() // lam54986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54987 = arg_buffer[1];
//reading env and args
void* a5462054833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54987))[7];
//not do dummy comment
void* lst = (decode_clo(env54987))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env54987))[5];
//not do dummy comment
void* kont54719 = (decode_clo(env54987))[4];
//not do dummy comment
void* x = (decode_clo(env54987))[3];
//not do dummy comment
void* car = (decode_clo(env54987))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54987))[1];

//if-clause
bool if_guard55662 = is_true(a5462054833);
if(if_guard55662)
{
void* x5462154834 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54719);
arg_buffer[2] = x5462154834;
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
void** clo55664 = alloc_clo(lam54984_fptr, 6);

//setting env list
clo55664[1] = member_u63;
clo55664[2] = x;
clo55664[3] = kont54719;
clo55664[4] = equal_u63;
clo55664[5] = lst;
clo55664[6] = cdr;
void* f5472254835 = encode_clo(clo55664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5472254835;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54986 = encode_clo(alloc_clo(lam54986_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54988 = arg_buffer[1];
//reading env and args
void* kont54719 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55666 = alloc_clo(lam54986_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo55666[1] = member_u63;
clo55666[2] = car;
clo55666[3] = x;
clo55666[4] = kont54719;
clo55666[5] = equal_u63;
clo55666[6] = lst;
clo55666[7] = cdr;
void* f5472354832 = encode_clo(clo55666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5472354832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam54989_fptr() // lam54989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54990 = arg_buffer[1];
//reading env and args
void* a5462954849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env54990))[4];
//not do dummy comment
void* kont54724 = (decode_clo(env54990))[3];
//not do dummy comment
void* a5462854847 = (decode_clo(env54990))[2];
//not do dummy comment
void* fun = (decode_clo(env54990))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont54724;
arg_buffer[3] = fun;
arg_buffer[4] = a5462854847;
arg_buffer[5] = a5462954849;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54989 = encode_clo(alloc_clo(lam54989_fptr, 0));

void* lam54991_fptr() // lam54991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54992 = arg_buffer[1];
//reading env and args
void* a5462854847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54992))[5];
//not do dummy comment
void* lst = (decode_clo(env54992))[4];
//not do dummy comment
void* fun = (decode_clo(env54992))[3];
//not do dummy comment
void* foldl = (decode_clo(env54992))[2];
//not do dummy comment
void* kont54724 = (decode_clo(env54992))[1];

//creating new closure instance
void** clo55668 = alloc_clo(lam54989_fptr, 4);

//setting env list
clo55668[1] = fun;
clo55668[2] = a5462854847;
clo55668[3] = kont54724;
clo55668[4] = foldl;
void* f5472554848 = encode_clo(clo55668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5472554848;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54991 = encode_clo(alloc_clo(lam54991_fptr, 0));

void* lam54993_fptr() // lam54993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54994 = arg_buffer[1];
//reading env and args
void* a5462754845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54994))[6];
//not do dummy comment
void* lst = (decode_clo(env54994))[5];
//not do dummy comment
void* fun = (decode_clo(env54994))[4];
//not do dummy comment
void* acc = (decode_clo(env54994))[3];
//not do dummy comment
void* foldl = (decode_clo(env54994))[2];
//not do dummy comment
void* kont54724 = (decode_clo(env54994))[1];

//creating new closure instance
void** clo55670 = alloc_clo(lam54991_fptr, 5);

//setting env list
clo55670[1] = kont54724;
clo55670[2] = foldl;
clo55670[3] = fun;
clo55670[4] = lst;
clo55670[5] = cdr;
void* f5472654846 = encode_clo(clo55670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5472654846;
arg_buffer[3] = a5462754845;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54993 = encode_clo(alloc_clo(lam54993_fptr, 0));

void* lam54995_fptr() // lam54995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54996 = arg_buffer[1];
//reading env and args
void* a5462654843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54996))[7];
//not do dummy comment
void* lst = (decode_clo(env54996))[6];
//not do dummy comment
void* fun = (decode_clo(env54996))[5];
//not do dummy comment
void* acc = (decode_clo(env54996))[4];
//not do dummy comment
void* car = (decode_clo(env54996))[3];
//not do dummy comment
void* foldl = (decode_clo(env54996))[2];
//not do dummy comment
void* kont54724 = (decode_clo(env54996))[1];

//if-clause
bool if_guard55671 = is_true(a5462654843);
if(if_guard55671)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54724);
arg_buffer[2] = acc;
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
void** clo55673 = alloc_clo(lam54993_fptr, 6);

//setting env list
clo55673[1] = kont54724;
clo55673[2] = foldl;
clo55673[3] = acc;
clo55673[4] = fun;
clo55673[5] = lst;
clo55673[6] = cdr;
void* f5472754844 = encode_clo(clo55673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5472754844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54995 = encode_clo(alloc_clo(lam54995_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54997 = arg_buffer[1];
//reading env and args
void* kont54724 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo55675 = alloc_clo(lam54995_fptr, 7);

//setting env list
clo55675[1] = kont54724;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo55675[2] = foldl;
clo55675[3] = car;
clo55675[4] = acc;
clo55675[5] = fun;
clo55675[6] = lst;
clo55675[7] = cdr;
void* f5472854842 = encode_clo(clo55675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5472854842;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam54998_fptr() // lam54998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54999 = arg_buffer[1];
//reading env and args
void* a5463354857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5463154853 = (decode_clo(env54999))[3];
//not do dummy comment
void* kont54729 = (decode_clo(env54999))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54999))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54729;
arg_buffer[3] = a5463154853;
arg_buffer[4] = a5463354857;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54998 = encode_clo(alloc_clo(lam54998_fptr, 0));

void* lam55000_fptr() // lam55000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55001 = arg_buffer[1];
//reading env and args
void* a5463254855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5463154853 = (decode_clo(env55001))[5];
//not do dummy comment
void* kont54729 = (decode_clo(env55001))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55001))[3];
//not do dummy comment
void* lst2 = (decode_clo(env55001))[2];
//not do dummy comment
void* cons = (decode_clo(env55001))[1];

//creating new closure instance
void** clo55677 = alloc_clo(lam54998_fptr, 3);

//setting env list
clo55677[1] = reverse_u45helper;
clo55677[2] = kont54729;
clo55677[3] = a5463154853;
void* f5473054856 = encode_clo(clo55677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5473054856;
arg_buffer[3] = a5463254855;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55000 = encode_clo(alloc_clo(lam55000_fptr, 0));

void* lam55002_fptr() // lam55002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55003 = arg_buffer[1];
//reading env and args
void* a5463154853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55003))[6];
//not do dummy comment
void* lst2 = (decode_clo(env55003))[5];
//not do dummy comment
void* car = (decode_clo(env55003))[4];
//not do dummy comment
void* cons = (decode_clo(env55003))[3];
//not do dummy comment
void* lst = (decode_clo(env55003))[2];
//not do dummy comment
void* kont54729 = (decode_clo(env55003))[1];

//creating new closure instance
void** clo55679 = alloc_clo(lam55000_fptr, 5);

//setting env list
clo55679[1] = cons;
clo55679[2] = lst2;
clo55679[3] = reverse_u45helper;
clo55679[4] = kont54729;
clo55679[5] = a5463154853;
void* f5473154854 = encode_clo(clo55679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5473154854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55002 = encode_clo(alloc_clo(lam55002_fptr, 0));

void* lam55004_fptr() // lam55004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55005 = arg_buffer[1];
//reading env and args
void* a5463054851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55005))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55005))[6];
//not do dummy comment
void* lst2 = (decode_clo(env55005))[5];
//not do dummy comment
void* car = (decode_clo(env55005))[4];
//not do dummy comment
void* cons = (decode_clo(env55005))[3];
//not do dummy comment
void* lst = (decode_clo(env55005))[2];
//not do dummy comment
void* kont54729 = (decode_clo(env55005))[1];

//if-clause
bool if_guard55680 = is_true(a5463054851);
if(if_guard55680)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54729);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54729))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55682 = alloc_clo(lam55002_fptr, 6);

//setting env list
clo55682[1] = kont54729;
clo55682[2] = lst;
clo55682[3] = cons;
clo55682[4] = car;
clo55682[5] = lst2;
clo55682[6] = reverse_u45helper;
void* f5473254852 = encode_clo(clo55682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5473254852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55004 = encode_clo(alloc_clo(lam55004_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55006 = arg_buffer[1];
//reading env and args
void* kont54729 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55684 = alloc_clo(lam55004_fptr, 7);

//setting env list
clo55684[1] = kont54729;
clo55684[2] = lst;
clo55684[3] = cons;
clo55684[4] = car;
clo55684[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo55684[6] = reverse_u45helper;
clo55684[7] = cdr;
void* f5473354850 = encode_clo(clo55684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5473354850;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam55007_fptr() // lam55007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55008 = arg_buffer[1];
//reading env and args
void* a5463454859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55008))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55008))[2];
//not do dummy comment
void* kont54734 = (decode_clo(env55008))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont54734;
arg_buffer[3] = lst;
arg_buffer[4] = a5463454859;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55007 = encode_clo(alloc_clo(lam55007_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55009 = arg_buffer[1];
//reading env and args
void* kont54734 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo55686 = alloc_clo(lam55007_fptr, 3);

//setting env list
clo55686[1] = kont54734;
clo55686[2] = reverse_u45helper;
clo55686[3] = lst;
void* f5473554858 = encode_clo(clo55686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5473554858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam55010_fptr() // lam55010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55011 = arg_buffer[1];
//reading env and args
void* x5463754864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54736 = (decode_clo(env55011))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54736);
arg_buffer[2] = x5463754864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54736))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55010 = encode_clo(alloc_clo(lam55010_fptr, 0));

void* lam55012_fptr() // lam55012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55013 = arg_buffer[1];
//reading env and args
void* a5464254873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5464054869 = (decode_clo(env55013))[4];
//not do dummy comment
void* kont54736 = (decode_clo(env55013))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55013))[2];
//not do dummy comment
void* a5463854866 = (decode_clo(env55013))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54736;
arg_buffer[3] = a5463854866;
arg_buffer[4] = a5464054869;
arg_buffer[5] = a5464254873;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55012 = encode_clo(alloc_clo(lam55012_fptr, 0));

void* lam55014_fptr() // lam55014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55015 = arg_buffer[1];
//reading env and args
void* a5464154871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5464054869 = (decode_clo(env55015))[6];
//not do dummy comment
void* kont54736 = (decode_clo(env55015))[5];
//not do dummy comment
void* a5463854866 = (decode_clo(env55015))[4];
//not do dummy comment
void* cons = (decode_clo(env55015))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55015))[2];
//not do dummy comment
void* lst2 = (decode_clo(env55015))[1];

//creating new closure instance
void** clo55688 = alloc_clo(lam55012_fptr, 4);

//setting env list
clo55688[1] = a5463854866;
clo55688[2] = take_u45helper;
clo55688[3] = kont54736;
clo55688[4] = a5464054869;
void* f5473854872 = encode_clo(clo55688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5473854872;
arg_buffer[3] = a5464154871;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55014 = encode_clo(alloc_clo(lam55014_fptr, 0));

void* lam55016_fptr() // lam55016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55017 = arg_buffer[1];
//reading env and args
void* a5464054869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55017))[7];
//not do dummy comment
void* kont54736 = (decode_clo(env55017))[6];
//not do dummy comment
void* cons = (decode_clo(env55017))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env55017))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55017))[3];
//not do dummy comment
void* a5463854866 = (decode_clo(env55017))[2];
//not do dummy comment
void* car = (decode_clo(env55017))[1];

//creating new closure instance
void** clo55690 = alloc_clo(lam55014_fptr, 6);

//setting env list
clo55690[1] = lst2;
clo55690[2] = take_u45helper;
clo55690[3] = cons;
clo55690[4] = a5463854866;
clo55690[5] = kont54736;
clo55690[6] = a5464054869;
void* f5473954870 = encode_clo(clo55690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5473954870;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55016 = encode_clo(alloc_clo(lam55016_fptr, 0));

void* lam55019_fptr() // lam55019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55020 = arg_buffer[1];
//reading env and args
void* a5463854866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55020))[8];
//not do dummy comment
void* kont54736 = (decode_clo(env55020))[7];
//not do dummy comment
void* cons = (decode_clo(env55020))[6];
//not do dummy comment
void* _u45 = (decode_clo(env55020))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env55020))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55020))[3];
//not do dummy comment
void* n = (decode_clo(env55020))[2];
//not do dummy comment
void* car = (decode_clo(env55020))[1];
mpz_t* mpzvar55691 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55691, "1", 10);
void* a5463954867 = encode_mpz(mpzvar55691);

//creating new closure instance
void** clo55693 = alloc_clo(lam55016_fptr, 7);

//setting env list
clo55693[1] = car;
clo55693[2] = a5463854866;
clo55693[3] = lst2;
clo55693[4] = take_u45helper;
clo55693[5] = cons;
clo55693[6] = kont54736;
clo55693[7] = lst;
void* f5474054868 = encode_clo(clo55693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5474054868;
arg_buffer[3] = n;
arg_buffer[4] = a5463954867;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55019 = encode_clo(alloc_clo(lam55019_fptr, 0));

void* lam55021_fptr() // lam55021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55022 = arg_buffer[1];
//reading env and args
void* a5463654862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55022))[10];
//not do dummy comment
void* lst = (decode_clo(env55022))[9];
//not do dummy comment
void* reverse = (decode_clo(env55022))[8];
//not do dummy comment
void* kont54736 = (decode_clo(env55022))[7];
//not do dummy comment
void* cons = (decode_clo(env55022))[6];
//not do dummy comment
void* _u45 = (decode_clo(env55022))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env55022))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55022))[3];
//not do dummy comment
void* n = (decode_clo(env55022))[2];
//not do dummy comment
void* car = (decode_clo(env55022))[1];

//if-clause
bool if_guard55694 = is_true(a5463654862);
if(if_guard55694)
{

//creating new closure instance
void** clo55696 = alloc_clo(lam55010_fptr, 1);

//setting env list
clo55696[1] = kont54736;
void* f5473754863 = encode_clo(clo55696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5473754863;
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
void** clo55698 = alloc_clo(lam55019_fptr, 8);

//setting env list
clo55698[1] = car;
clo55698[2] = n;
clo55698[3] = lst2;
clo55698[4] = take_u45helper;
clo55698[5] = _u45;
clo55698[6] = cons;
clo55698[7] = kont54736;
clo55698[8] = lst;
void* f5474154865 = encode_clo(clo55698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5474154865;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55021 = encode_clo(alloc_clo(lam55021_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55024 = arg_buffer[1];
//reading env and args
void* kont54736 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar55699 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55699, "0", 10);
void* a5463554860 = encode_mpz(mpzvar55699);

//creating new closure instance
void** clo55701 = alloc_clo(lam55021_fptr, 10);

//setting env list
clo55701[1] = car;
clo55701[2] = n;
clo55701[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo55701[4] = take_u45helper;
clo55701[5] = _u45;
clo55701[6] = cons;
clo55701[7] = kont54736;
clo55701[8] = reverse;
clo55701[9] = lst;
clo55701[10] = cdr;
void* f5474254861 = encode_clo(clo55701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5474254861;
arg_buffer[3] = n;
arg_buffer[4] = a5463554860;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam55025_fptr() // lam55025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55026 = arg_buffer[1];
//reading env and args
void* a5464354875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54743 = (decode_clo(env55026))[4];
//not do dummy comment
void* lst = (decode_clo(env55026))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55026))[2];
//not do dummy comment
void* n = (decode_clo(env55026))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont54743;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5464354875;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55025 = encode_clo(alloc_clo(lam55025_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55027 = arg_buffer[1];
//reading env and args
void* kont54743 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55703 = alloc_clo(lam55025_fptr, 4);

//setting env list
clo55703[1] = n;
clo55703[2] = take_u45helper;
clo55703[3] = lst;
clo55703[4] = kont54743;
void* f5474454874 = encode_clo(clo55703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5474454874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam55029_fptr() // lam55029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55030 = arg_buffer[1];
//reading env and args
void* a5464854883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54745 = (decode_clo(env55030))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55030))[2];
//not do dummy comment
void* a5464654879 = (decode_clo(env55030))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont54745;
arg_buffer[3] = a5464654879;
arg_buffer[4] = a5464854883;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55029 = encode_clo(alloc_clo(lam55029_fptr, 0));

void* lam55031_fptr() // lam55031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55032 = arg_buffer[1];
//reading env and args
void* a5464754881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54745 = (decode_clo(env55032))[4];
//not do dummy comment
void* length = (decode_clo(env55032))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55032))[2];
//not do dummy comment
void* a5464654879 = (decode_clo(env55032))[1];

//creating new closure instance
void** clo55705 = alloc_clo(lam55029_fptr, 3);

//setting env list
clo55705[1] = a5464654879;
clo55705[2] = _u43;
clo55705[3] = kont54745;
void* f5474654882 = encode_clo(clo55705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5474654882;
arg_buffer[3] = a5464754881;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55031 = encode_clo(alloc_clo(lam55031_fptr, 0));

void* lam55034_fptr() // lam55034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55035 = arg_buffer[1];
//reading env and args
void* a5464454877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55035))[5];
//not do dummy comment
void* length = (decode_clo(env55035))[4];
//not do dummy comment
void* _u43 = (decode_clo(env55035))[3];
//not do dummy comment
void* lst = (decode_clo(env55035))[2];
//not do dummy comment
void* kont54745 = (decode_clo(env55035))[1];

//if-clause
bool if_guard55706 = is_true(a5464454877);
if(if_guard55706)
{
mpz_t* mpzvar55707 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55707, "0", 10);
void* x5464554878 = encode_mpz(mpzvar55707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54745);
arg_buffer[2] = x5464554878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54745))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar55708 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55708, "1", 10);
void* a5464654879 = encode_mpz(mpzvar55708);

//creating new closure instance
void** clo55710 = alloc_clo(lam55031_fptr, 4);

//setting env list
clo55710[1] = a5464654879;
clo55710[2] = _u43;
clo55710[3] = length;
clo55710[4] = kont54745;
void* f5474754880 = encode_clo(clo55710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5474754880;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55034 = encode_clo(alloc_clo(lam55034_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55036 = arg_buffer[1];
//reading env and args
void* kont54745 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo55712 = alloc_clo(lam55034_fptr, 5);

//setting env list
clo55712[1] = kont54745;
clo55712[2] = lst;
clo55712[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo55712[4] = length;
clo55712[5] = cdr;
void* f5474854876 = encode_clo(clo55712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5474854876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam55037_fptr() // lam55037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55038 = arg_buffer[1];
//reading env and args
void* x5465054887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54749 = (decode_clo(env55038))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54749);
arg_buffer[2] = x5465054887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54749))[0]);
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
void* a5465454895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5465254891 = (decode_clo(env55040))[3];
//not do dummy comment
void* kont54749 = (decode_clo(env55040))[2];
//not do dummy comment
void* cons = (decode_clo(env55040))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54749;
arg_buffer[3] = a5465254891;
arg_buffer[4] = a5465454895;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a5465354893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env55042))[5];
//not do dummy comment
void* a5465254891 = (decode_clo(env55042))[4];
//not do dummy comment
void* kont54749 = (decode_clo(env55042))[3];
//not do dummy comment
void* proc = (decode_clo(env55042))[2];
//not do dummy comment
void* cons = (decode_clo(env55042))[1];

//creating new closure instance
void** clo55714 = alloc_clo(lam55039_fptr, 3);

//setting env list
clo55714[1] = cons;
clo55714[2] = kont54749;
clo55714[3] = a5465254891;
void* f5475154894 = encode_clo(clo55714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5475154894;
arg_buffer[3] = proc;
arg_buffer[4] = a5465354893;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55041 = encode_clo(alloc_clo(lam55041_fptr, 0));

void* lam55043_fptr() // lam55043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55044 = arg_buffer[1];
//reading env and args
void* a5465254891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55044))[6];
//not do dummy comment
void* lst = (decode_clo(env55044))[5];
//not do dummy comment
void* map = (decode_clo(env55044))[4];
//not do dummy comment
void* kont54749 = (decode_clo(env55044))[3];
//not do dummy comment
void* proc = (decode_clo(env55044))[2];
//not do dummy comment
void* cons = (decode_clo(env55044))[1];

//creating new closure instance
void** clo55716 = alloc_clo(lam55041_fptr, 5);

//setting env list
clo55716[1] = cons;
clo55716[2] = proc;
clo55716[3] = kont54749;
clo55716[4] = a5465254891;
clo55716[5] = map;
void* f5475254892 = encode_clo(clo55716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5475254892;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55043 = encode_clo(alloc_clo(lam55043_fptr, 0));

void* lam55045_fptr() // lam55045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55046 = arg_buffer[1];
//reading env and args
void* a5465154889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55046))[6];
//not do dummy comment
void* lst = (decode_clo(env55046))[5];
//not do dummy comment
void* map = (decode_clo(env55046))[4];
//not do dummy comment
void* kont54749 = (decode_clo(env55046))[3];
//not do dummy comment
void* proc = (decode_clo(env55046))[2];
//not do dummy comment
void* cons = (decode_clo(env55046))[1];

//creating new closure instance
void** clo55718 = alloc_clo(lam55043_fptr, 6);

//setting env list
clo55718[1] = cons;
clo55718[2] = proc;
clo55718[3] = kont54749;
clo55718[4] = map;
clo55718[5] = lst;
clo55718[6] = cdr;
void* f5475354890 = encode_clo(clo55718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5475354890;
arg_buffer[3] = a5465154889;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55045 = encode_clo(alloc_clo(lam55045_fptr, 0));

void* lam55047_fptr() // lam55047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55048 = arg_buffer[1];
//reading env and args
void* a5464954885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55048))[8];
//not do dummy comment
void* map = (decode_clo(env55048))[7];
//not do dummy comment
void* kont54749 = (decode_clo(env55048))[6];
//not do dummy comment
void* proc = (decode_clo(env55048))[5];
//not do dummy comment
void* car = (decode_clo(env55048))[4];
//not do dummy comment
void* cons = (decode_clo(env55048))[3];
//not do dummy comment
void* list = (decode_clo(env55048))[2];
//not do dummy comment
void* cdr = (decode_clo(env55048))[1];

//if-clause
bool if_guard55719 = is_true(a5464954885);
if(if_guard55719)
{

//creating new closure instance
void** clo55721 = alloc_clo(lam55037_fptr, 1);

//setting env list
clo55721[1] = kont54749;
void* f5475054886 = encode_clo(clo55721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5475054886;
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
void** clo55723 = alloc_clo(lam55045_fptr, 6);

//setting env list
clo55723[1] = cons;
clo55723[2] = proc;
clo55723[3] = kont54749;
clo55723[4] = map;
clo55723[5] = lst;
clo55723[6] = cdr;
void* f5475454888 = encode_clo(clo55723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5475454888;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55047 = encode_clo(alloc_clo(lam55047_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55049 = arg_buffer[1];
//reading env and args
void* kont54749 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55725 = alloc_clo(lam55047_fptr, 8);

//setting env list
clo55725[1] = cdr;
clo55725[2] = list;
clo55725[3] = cons;
clo55725[4] = car;
clo55725[5] = proc;
clo55725[6] = kont54749;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo55725[7] = map;
clo55725[8] = lst;
void* f5475554884 = encode_clo(clo55725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5475554884;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam55050_fptr() // lam55050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55051 = arg_buffer[1];
//reading env and args
void* x5465654899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54756 = (decode_clo(env55051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54756);
arg_buffer[2] = x5465654899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54756))[0]);
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
void* a5466154909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5465954905 = (decode_clo(env55053))[3];
//not do dummy comment
void* cons = (decode_clo(env55053))[2];
//not do dummy comment
void* kont54756 = (decode_clo(env55053))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54756;
arg_buffer[3] = a5465954905;
arg_buffer[4] = a5466154909;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a5466054907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5465954905 = (decode_clo(env55055))[5];
//not do dummy comment
void* op = (decode_clo(env55055))[4];
//not do dummy comment
void* filter = (decode_clo(env55055))[3];
//not do dummy comment
void* cons = (decode_clo(env55055))[2];
//not do dummy comment
void* kont54756 = (decode_clo(env55055))[1];

//creating new closure instance
void** clo55727 = alloc_clo(lam55052_fptr, 3);

//setting env list
clo55727[1] = kont54756;
clo55727[2] = cons;
clo55727[3] = a5465954905;
void* f5475854908 = encode_clo(clo55727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5475854908;
arg_buffer[3] = op;
arg_buffer[4] = a5466054907;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55054 = encode_clo(alloc_clo(lam55054_fptr, 0));

void* lam55056_fptr() // lam55056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55057 = arg_buffer[1];
//reading env and args
void* a5465954905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55057))[6];
//not do dummy comment
void* lst = (decode_clo(env55057))[5];
//not do dummy comment
void* op = (decode_clo(env55057))[4];
//not do dummy comment
void* filter = (decode_clo(env55057))[3];
//not do dummy comment
void* cons = (decode_clo(env55057))[2];
//not do dummy comment
void* kont54756 = (decode_clo(env55057))[1];

//creating new closure instance
void** clo55729 = alloc_clo(lam55054_fptr, 5);

//setting env list
clo55729[1] = kont54756;
clo55729[2] = cons;
clo55729[3] = filter;
clo55729[4] = op;
clo55729[5] = a5465954905;
void* f5475954906 = encode_clo(clo55729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5475954906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a5466254911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env55059))[3];
//not do dummy comment
void* filter = (decode_clo(env55059))[2];
//not do dummy comment
void* kont54756 = (decode_clo(env55059))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont54756;
arg_buffer[3] = op;
arg_buffer[4] = a5466254911;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55058 = encode_clo(alloc_clo(lam55058_fptr, 0));

void* lam55060_fptr() // lam55060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55061 = arg_buffer[1];
//reading env and args
void* a5465854903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55061))[7];
//not do dummy comment
void* lst = (decode_clo(env55061))[6];
//not do dummy comment
void* op = (decode_clo(env55061))[5];
//not do dummy comment
void* cons = (decode_clo(env55061))[4];
//not do dummy comment
void* kont54756 = (decode_clo(env55061))[3];
//not do dummy comment
void* filter = (decode_clo(env55061))[2];
//not do dummy comment
void* car = (decode_clo(env55061))[1];

//if-clause
bool if_guard55730 = is_true(a5465854903);
if(if_guard55730)
{

//creating new closure instance
void** clo55732 = alloc_clo(lam55056_fptr, 6);

//setting env list
clo55732[1] = kont54756;
clo55732[2] = cons;
clo55732[3] = filter;
clo55732[4] = op;
clo55732[5] = lst;
clo55732[6] = cdr;
void* f5476054904 = encode_clo(clo55732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5476054904;
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
void** clo55734 = alloc_clo(lam55058_fptr, 3);

//setting env list
clo55734[1] = kont54756;
clo55734[2] = filter;
clo55734[3] = op;
void* f5476154910 = encode_clo(clo55734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5476154910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55060 = encode_clo(alloc_clo(lam55060_fptr, 0));

void* lam55062_fptr() // lam55062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55063 = arg_buffer[1];
//reading env and args
void* a5465754901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55063))[7];
//not do dummy comment
void* lst = (decode_clo(env55063))[6];
//not do dummy comment
void* op = (decode_clo(env55063))[5];
//not do dummy comment
void* cons = (decode_clo(env55063))[4];
//not do dummy comment
void* kont54756 = (decode_clo(env55063))[3];
//not do dummy comment
void* filter = (decode_clo(env55063))[2];
//not do dummy comment
void* car = (decode_clo(env55063))[1];

//creating new closure instance
void** clo55736 = alloc_clo(lam55060_fptr, 7);

//setting env list
clo55736[1] = car;
clo55736[2] = filter;
clo55736[3] = kont54756;
clo55736[4] = cons;
clo55736[5] = op;
clo55736[6] = lst;
clo55736[7] = cdr;
void* f5476254902 = encode_clo(clo55736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5476254902;
arg_buffer[3] = a5465754901;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55062 = encode_clo(alloc_clo(lam55062_fptr, 0));

void* lam55064_fptr() // lam55064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55065 = arg_buffer[1];
//reading env and args
void* a5465554897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55065))[8];
//not do dummy comment
void* op = (decode_clo(env55065))[7];
//not do dummy comment
void* cons = (decode_clo(env55065))[6];
//not do dummy comment
void* kont54756 = (decode_clo(env55065))[5];
//not do dummy comment
void* list = (decode_clo(env55065))[4];
//not do dummy comment
void* cdr = (decode_clo(env55065))[3];
//not do dummy comment
void* filter = (decode_clo(env55065))[2];
//not do dummy comment
void* car = (decode_clo(env55065))[1];

//if-clause
bool if_guard55737 = is_true(a5465554897);
if(if_guard55737)
{

//creating new closure instance
void** clo55739 = alloc_clo(lam55050_fptr, 1);

//setting env list
clo55739[1] = kont54756;
void* f5475754898 = encode_clo(clo55739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5475754898;
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
void** clo55741 = alloc_clo(lam55062_fptr, 7);

//setting env list
clo55741[1] = car;
clo55741[2] = filter;
clo55741[3] = kont54756;
clo55741[4] = cons;
clo55741[5] = op;
clo55741[6] = lst;
clo55741[7] = cdr;
void* f5476354900 = encode_clo(clo55741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5476354900;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55064 = encode_clo(alloc_clo(lam55064_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55066 = arg_buffer[1];
//reading env and args
void* kont54756 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55743 = alloc_clo(lam55064_fptr, 8);

//setting env list
clo55743[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo55743[2] = filter;
clo55743[3] = cdr;
clo55743[4] = list;
clo55743[5] = kont54756;
clo55743[6] = cons;
clo55743[7] = op;
clo55743[8] = lst;
void* f5476454896 = encode_clo(clo55743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5476454896;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam55067_fptr() // lam55067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55068 = arg_buffer[1];
//reading env and args
void* a5466754919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env55068))[3];
//not do dummy comment
void* kont54765 = (decode_clo(env55068))[2];
//not do dummy comment
void* a5466554916 = (decode_clo(env55068))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont54765;
arg_buffer[3] = a5466554916;
arg_buffer[4] = a5466754919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55067 = encode_clo(alloc_clo(lam55067_fptr, 0));

void* lam55070_fptr() // lam55070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55071 = arg_buffer[1];
//reading env and args
void* a5466554916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env55071))[4];
//not do dummy comment
void* kont54765 = (decode_clo(env55071))[3];
//not do dummy comment
void* n = (decode_clo(env55071))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55071))[1];
mpz_t* mpzvar55744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55744, "1", 10);
void* a5466654917 = encode_mpz(mpzvar55744);

//creating new closure instance
void** clo55746 = alloc_clo(lam55067_fptr, 3);

//setting env list
clo55746[1] = a5466554916;
clo55746[2] = kont54765;
clo55746[3] = drop;
void* f5476654918 = encode_clo(clo55746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5476654918;
arg_buffer[3] = n;
arg_buffer[4] = a5466654917;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a5466454914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55073))[6];
//not do dummy comment
void* kont54765 = (decode_clo(env55073))[5];
//not do dummy comment
void* n = (decode_clo(env55073))[4];
//not do dummy comment
void* _u45 = (decode_clo(env55073))[3];
//not do dummy comment
void* lst = (decode_clo(env55073))[2];
//not do dummy comment
void* drop = (decode_clo(env55073))[1];

//if-clause
bool if_guard55747 = is_true(a5466454914);
if(if_guard55747)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54765);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54765))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55749 = alloc_clo(lam55070_fptr, 4);

//setting env list
clo55749[1] = _u45;
clo55749[2] = n;
clo55749[3] = kont54765;
clo55749[4] = drop;
void* f5476754915 = encode_clo(clo55749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5476754915;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55072 = encode_clo(alloc_clo(lam55072_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55075 = arg_buffer[1];
//reading env and args
void* kont54765 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar55750 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55750, "0", 10);
void* a5466354912 = encode_mpz(mpzvar55750);

//creating new closure instance
void** clo55752 = alloc_clo(lam55072_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo55752[1] = drop;
clo55752[2] = lst;
clo55752[3] = _u45;
clo55752[4] = n;
clo55752[5] = kont54765;
clo55752[6] = cdr;
void* f5476854913 = encode_clo(clo55752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5476854913;
arg_buffer[3] = n;
arg_buffer[4] = a5466354912;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam55076_fptr() // lam55076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55077 = arg_buffer[1];
//reading env and args
void* a5467154927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5466954923 = (decode_clo(env55077))[3];
//not do dummy comment
void* proc = (decode_clo(env55077))[2];
//not do dummy comment
void* kont54769 = (decode_clo(env55077))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont54769;
arg_buffer[3] = a5466954923;
arg_buffer[4] = a5467154927;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55076 = encode_clo(alloc_clo(lam55076_fptr, 0));

void* lam55078_fptr() // lam55078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55079 = arg_buffer[1];
//reading env and args
void* a5467054925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env55079))[5];
//not do dummy comment
void* a5466954923 = (decode_clo(env55079))[4];
//not do dummy comment
void* kont54769 = (decode_clo(env55079))[3];
//not do dummy comment
void* proc = (decode_clo(env55079))[2];
//not do dummy comment
void* acc = (decode_clo(env55079))[1];

//creating new closure instance
void** clo55754 = alloc_clo(lam55076_fptr, 3);

//setting env list
clo55754[1] = kont54769;
clo55754[2] = proc;
clo55754[3] = a5466954923;
void* f5477054926 = encode_clo(clo55754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5477054926;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5467054925;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55078 = encode_clo(alloc_clo(lam55078_fptr, 0));

void* lam55080_fptr() // lam55080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55081 = arg_buffer[1];
//reading env and args
void* a5466954923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55081))[6];
//not do dummy comment
void* kont54769 = (decode_clo(env55081))[5];
//not do dummy comment
void* foldr = (decode_clo(env55081))[4];
//not do dummy comment
void* lst = (decode_clo(env55081))[3];
//not do dummy comment
void* proc = (decode_clo(env55081))[2];
//not do dummy comment
void* acc = (decode_clo(env55081))[1];

//creating new closure instance
void** clo55756 = alloc_clo(lam55078_fptr, 5);

//setting env list
clo55756[1] = acc;
clo55756[2] = proc;
clo55756[3] = kont54769;
clo55756[4] = a5466954923;
clo55756[5] = foldr;
void* f5477154924 = encode_clo(clo55756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5477154924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55080 = encode_clo(alloc_clo(lam55080_fptr, 0));

void* lam55082_fptr() // lam55082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55083 = arg_buffer[1];
//reading env and args
void* a5466854921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55083))[7];
//not do dummy comment
void* kont54769 = (decode_clo(env55083))[6];
//not do dummy comment
void* car = (decode_clo(env55083))[5];
//not do dummy comment
void* foldr = (decode_clo(env55083))[4];
//not do dummy comment
void* lst = (decode_clo(env55083))[3];
//not do dummy comment
void* proc = (decode_clo(env55083))[2];
//not do dummy comment
void* acc = (decode_clo(env55083))[1];

//if-clause
bool if_guard55757 = is_true(a5466854921);
if(if_guard55757)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54769);
arg_buffer[2] = acc;
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
void** clo55759 = alloc_clo(lam55080_fptr, 6);

//setting env list
clo55759[1] = acc;
clo55759[2] = proc;
clo55759[3] = lst;
clo55759[4] = foldr;
clo55759[5] = kont54769;
clo55759[6] = cdr;
void* f5477254922 = encode_clo(clo55759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5477254922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55082 = encode_clo(alloc_clo(lam55082_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55084 = arg_buffer[1];
//reading env and args
void* kont54769 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo55761 = alloc_clo(lam55082_fptr, 7);

//setting env list
clo55761[1] = acc;
clo55761[2] = proc;
clo55761[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo55761[4] = foldr;
clo55761[5] = car;
clo55761[6] = kont54769;
clo55761[7] = cdr;
void* f5477354920 = encode_clo(clo55761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5477354920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam55085_fptr() // lam55085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55086 = arg_buffer[1];
//reading env and args
void* a5467554935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54774 = (decode_clo(env55086))[3];
//not do dummy comment
void* cons = (decode_clo(env55086))[2];
//not do dummy comment
void* a5467354931 = (decode_clo(env55086))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54774;
arg_buffer[3] = a5467354931;
arg_buffer[4] = a5467554935;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55085 = encode_clo(alloc_clo(lam55085_fptr, 0));

void* lam55087_fptr() // lam55087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55088 = arg_buffer[1];
//reading env and args
void* a5467454933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54774 = (decode_clo(env55088))[5];
//not do dummy comment
void* append = (decode_clo(env55088))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55088))[3];
//not do dummy comment
void* cons = (decode_clo(env55088))[2];
//not do dummy comment
void* a5467354931 = (decode_clo(env55088))[1];

//creating new closure instance
void** clo55763 = alloc_clo(lam55085_fptr, 3);

//setting env list
clo55763[1] = a5467354931;
clo55763[2] = cons;
clo55763[3] = kont54774;
void* f5477554934 = encode_clo(clo55763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5477554934;
arg_buffer[3] = a5467454933;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55087 = encode_clo(alloc_clo(lam55087_fptr, 0));

void* lam55089_fptr() // lam55089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55090 = arg_buffer[1];
//reading env and args
void* a5467354931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55090))[6];
//not do dummy comment
void* kont54774 = (decode_clo(env55090))[5];
//not do dummy comment
void* append = (decode_clo(env55090))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55090))[3];
//not do dummy comment
void* lst1 = (decode_clo(env55090))[2];
//not do dummy comment
void* cons = (decode_clo(env55090))[1];

//creating new closure instance
void** clo55765 = alloc_clo(lam55087_fptr, 5);

//setting env list
clo55765[1] = a5467354931;
clo55765[2] = cons;
clo55765[3] = lst2;
clo55765[4] = append;
clo55765[5] = kont54774;
void* f5477654932 = encode_clo(clo55765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5477654932;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55089 = encode_clo(alloc_clo(lam55089_fptr, 0));

void* lam55091_fptr() // lam55091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55092 = arg_buffer[1];
//reading env and args
void* a5467254929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55092))[7];
//not do dummy comment
void* kont54774 = (decode_clo(env55092))[6];
//not do dummy comment
void* append = (decode_clo(env55092))[5];
//not do dummy comment
void* lst2 = (decode_clo(env55092))[4];
//not do dummy comment
void* cons = (decode_clo(env55092))[3];
//not do dummy comment
void* lst1 = (decode_clo(env55092))[2];
//not do dummy comment
void* car = (decode_clo(env55092))[1];

//if-clause
bool if_guard55766 = is_true(a5467254929);
if(if_guard55766)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54774);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55768 = alloc_clo(lam55089_fptr, 6);

//setting env list
clo55768[1] = cons;
clo55768[2] = lst1;
clo55768[3] = lst2;
clo55768[4] = append;
clo55768[5] = kont54774;
clo55768[6] = cdr;
void* f5477754930 = encode_clo(clo55768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5477754930;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55091 = encode_clo(alloc_clo(lam55091_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55093 = arg_buffer[1];
//reading env and args
void* kont54774 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55770 = alloc_clo(lam55091_fptr, 7);

//setting env list
clo55770[1] = car;
clo55770[2] = lst1;
clo55770[3] = cons;
clo55770[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo55770[5] = append;
clo55770[6] = kont54774;
clo55770[7] = cdr;
void* f5477854928 = encode_clo(clo55770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5477854928;
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
void* _55094 = arg_buffer[1];
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

void* kont5477954936 = prim_car(lst);
void* lst54937 = prim_cdr(lst);
void* x5467654938 = apply_prim_hash(lst54937);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5477954936);
arg_buffer[2] = x5467654938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5477954936))[0]);
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
void* _55095 = arg_buffer[1];
//reading env and args
void* kont54781 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5467754939 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54781);
arg_buffer[2] = x5467754939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54781))[0]);
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
void* _55096 = arg_buffer[1];
//reading env and args
void* kont54782 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5467854940 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54782);
arg_buffer[2] = x5467854940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54782))[0]);
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
void* _55097 = arg_buffer[1];
//reading env and args
void* kont54783 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5467954941 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54783);
arg_buffer[2] = x5467954941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54783))[0]);
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
void* _55098 = arg_buffer[1];
//reading env and args
void* kont54784 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5468054942 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54784);
arg_buffer[2] = x5468054942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54784))[0]);
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
void* _55105 = arg_buffer[1];
//reading env and args
void* kont54785 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar55771 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55771, "1", 10);
void* a5468154943 = encode_mpz(mpzvar55771);
mpz_t* mpzvar55772 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55772, "2", 10);
void* a5468254944 = encode_mpz(mpzvar55772);
mpz_t* mpzvar55773 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55773, "3", 10);
void* a5468354945 = encode_mpz(mpzvar55773);
mpz_t* mpzvar55774 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55774, "4", 10);
void* a5468454946 = encode_mpz(mpzvar55774);
mpz_t* mpzvar55775 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55775, "5", 10);
void* a5468554947 = encode_mpz(mpzvar55775);
mpz_t* mpzvar55776 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55776, "100", 10);
void* a5468654948 = encode_mpz(mpzvar55776);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60);
arg_buffer[2] = kont54785;
arg_buffer[3] = a5468154943;
arg_buffer[4] = a5468254944;
arg_buffer[5] = a5468354945;
arg_buffer[6] = a5468454946;
arg_buffer[7] = a5468554947;
arg_buffer[8] = a5468654948;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam55106_fptr() // lam55106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55107 = arg_buffer[1];
//reading env and args
void* x5468754950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54786 = (decode_clo(env55107))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54786);
arg_buffer[2] = x5468754950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54786))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55106 = encode_clo(alloc_clo(lam55106_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55108 = arg_buffer[1];
//reading env and args
void* kont54786 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo55778 = alloc_clo(lam55106_fptr, 1);

//setting env list
clo55778[1] = kont54786;
void* f5478754949 = encode_clo(clo55778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5478754949;
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

