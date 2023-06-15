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
void* _43976 = arg_buffer[1];
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

void* kont4371543815 = prim_car(lst);
void* lst43816 = prim_cdr(lst);
void* x4362743817 = apply_prim__u43(lst43816);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4371543815);
arg_buffer[2] = x4362743817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4371543815))[0]);
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
void* _43977 = arg_buffer[1];
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

void* kont4371743818 = prim_car(lst);
void* lst43819 = prim_cdr(lst);
void* x4362843820 = apply_prim__u45(lst43819);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4371743818);
arg_buffer[2] = x4362843820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4371743818))[0]);
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
void* _43978 = arg_buffer[1];
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

void* kont4371943821 = prim_car(lst);
void* lst43822 = prim_cdr(lst);
void* x4362943823 = apply_prim__u42(lst43822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4371943821);
arg_buffer[2] = x4362943823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4371943821))[0]);
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
void* _43979 = arg_buffer[1];
//reading env and args
void* kont43721 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4363043824 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43721);
arg_buffer[2] = x4363043824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43721))[0]);
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
void* _43980 = arg_buffer[1];
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

void* kont4372243825 = prim_car(lst);
void* lst43826 = prim_cdr(lst);
void* x4363143827 = apply_prim__u47(lst43826);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4372243825);
arg_buffer[2] = x4363143827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4372243825))[0]);
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
void* _43981 = arg_buffer[1];
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

void* kont4372443828 = prim_car(lst);
void* lst43829 = prim_cdr(lst);
void* x4363243830 = apply_prim__u61(lst43829);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4372443828);
arg_buffer[2] = x4363243830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4372443828))[0]);
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
void* _43982 = arg_buffer[1];
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

void* kont4372643831 = prim_car(lst);
void* lst43832 = prim_cdr(lst);
void* x4363343833 = apply_prim__u62(lst43832);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4372643831);
arg_buffer[2] = x4363343833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4372643831))[0]);
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
void* _43983 = arg_buffer[1];
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

void* kont4372843834 = prim_car(lst);
void* lst43835 = prim_cdr(lst);
void* x4363443836 = apply_prim__u60(lst43835);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4372843834);
arg_buffer[2] = x4363443836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4372843834))[0]);
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
void* _43984 = arg_buffer[1];
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

void* kont4373043837 = prim_car(lst);
void* lst43838 = prim_cdr(lst);
void* x4363543839 = apply_prim__u60_u61(lst43838);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4373043837);
arg_buffer[2] = x4363543839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4373043837))[0]);
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
void* _43985 = arg_buffer[1];
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

void* kont4373243840 = prim_car(lst);
void* lst43841 = prim_cdr(lst);
void* x4363643842 = apply_prim__u62_u61(lst43841);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4373243840);
arg_buffer[2] = x4363643842;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4373243840))[0]);
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
void* _43986 = arg_buffer[1];
//reading env and args
void* kont43734 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4363743843 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43734);
arg_buffer[2] = x4363743843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43734))[0]);
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
void* _43987 = arg_buffer[1];
//reading env and args
void* kont43735 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4363843844 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43735);
arg_buffer[2] = x4363843844;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43735))[0]);
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
void* _43988 = arg_buffer[1];
//reading env and args
void* kont43736 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4363943845 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43736);
arg_buffer[2] = x4363943845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43736))[0]);
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
void* _43989 = arg_buffer[1];
//reading env and args
void* kont43737 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4364043846 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43737);
arg_buffer[2] = x4364043846;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43737))[0]);
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
void* _43990 = arg_buffer[1];
//reading env and args
void* kont43738 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4364143847 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43738);
arg_buffer[2] = x4364143847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43738))[0]);
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
void* _43991 = arg_buffer[1];
//reading env and args
void* kont43739 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4364243848 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43739);
arg_buffer[2] = x4364243848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43739))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam43992_fptr() // lam43992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43993 = arg_buffer[1];
//reading env and args
void* a4364543852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4364343849 = (decode_clo(env43993))[3];
//not do dummy comment
void* kont43740 = (decode_clo(env43993))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env43993))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont43740;
arg_buffer[3] = a4364343849;
arg_buffer[4] = a4364543852;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43992 = encode_clo(alloc_clo(lam43992_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _43996 = arg_buffer[1];
//reading env and args
void* kont43740 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44636 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44636, "0", 10);
void* a4364343849 = encode_mpz(mpzvar44636);
mpz_t* mpzvar44637 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44637, "2", 10);
void* a4364443850 = encode_mpz(mpzvar44637);

//creating new closure instance
void** clo44639 = alloc_clo(lam43992_fptr, 3);

//setting env list
clo44639[1] = equal_u63;
clo44639[2] = kont43740;
clo44639[3] = a4364343849;
void* f4374143851 = encode_clo(clo44639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4374143851;
arg_buffer[3] = x;
arg_buffer[4] = a4364443850;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam43997_fptr() // lam43997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env43998 = arg_buffer[1];
//reading env and args
void* a4364843856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4364643853 = (decode_clo(env43998))[3];
//not do dummy comment
void* kont43742 = (decode_clo(env43998))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env43998))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont43742;
arg_buffer[3] = a4364643853;
arg_buffer[4] = a4364843856;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam43997 = encode_clo(alloc_clo(lam43997_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44001 = arg_buffer[1];
//reading env and args
void* kont43742 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44640 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44640, "1", 10);
void* a4364643853 = encode_mpz(mpzvar44640);
mpz_t* mpzvar44641 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44641, "2", 10);
void* a4364743854 = encode_mpz(mpzvar44641);

//creating new closure instance
void** clo44643 = alloc_clo(lam43997_fptr, 3);

//setting env list
clo44643[1] = equal_u63;
clo44643[2] = kont43742;
clo44643[3] = a4364643853;
void* f4374343855 = encode_clo(clo44643);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4374343855;
arg_buffer[3] = x;
arg_buffer[4] = a4364743854;
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
void* _44002 = arg_buffer[1];
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

void* kont4374443857 = prim_car(x);
void* x43858 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4374443857);
arg_buffer[2] = x43858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4374443857))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam44005_fptr() // lam44005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44006 = arg_buffer[1];
//reading env and args
void* a4365443868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43746 = (decode_clo(env44006))[3];
//not do dummy comment
void* x = (decode_clo(env44006))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44006))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont43746;
arg_buffer[3] = x;
arg_buffer[4] = a4365443868;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44005 = encode_clo(alloc_clo(lam44005_fptr, 0));

void* lam44007_fptr() // lam44007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44008 = arg_buffer[1];
//reading env and args
void* a4365243865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44008))[5];
//not do dummy comment
void* lst = (decode_clo(env44008))[4];
//not do dummy comment
void* kont43746 = (decode_clo(env44008))[3];
//not do dummy comment
void* x = (decode_clo(env44008))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44008))[1];

//if-clause
bool if_guard44644 = is_true(a4365243865);
if(if_guard44644)
{
void* x4365343866 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43746);
arg_buffer[2] = x4365343866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44646 = alloc_clo(lam44005_fptr, 3);

//setting env list
clo44646[1] = member_u63;
clo44646[2] = x;
clo44646[3] = kont43746;
void* f4374743867 = encode_clo(clo44646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4374743867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44007 = encode_clo(alloc_clo(lam44007_fptr, 0));

void* lam44009_fptr() // lam44009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44010 = arg_buffer[1];
//reading env and args
void* a4365143863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44010))[6];
//not do dummy comment
void* lst = (decode_clo(env44010))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env44010))[4];
//not do dummy comment
void* kont43746 = (decode_clo(env44010))[3];
//not do dummy comment
void* x = (decode_clo(env44010))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44010))[1];

//creating new closure instance
void** clo44648 = alloc_clo(lam44007_fptr, 5);

//setting env list
clo44648[1] = member_u63;
clo44648[2] = x;
clo44648[3] = kont43746;
clo44648[4] = lst;
clo44648[5] = cdr;
void* f4374843864 = encode_clo(clo44648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4374843864;
arg_buffer[3] = a4365143863;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44009 = encode_clo(alloc_clo(lam44009_fptr, 0));

void* lam44011_fptr() // lam44011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44012 = arg_buffer[1];
//reading env and args
void* a4364943860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44012))[7];
//not do dummy comment
void* lst = (decode_clo(env44012))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env44012))[5];
//not do dummy comment
void* kont43746 = (decode_clo(env44012))[4];
//not do dummy comment
void* x = (decode_clo(env44012))[3];
//not do dummy comment
void* car = (decode_clo(env44012))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44012))[1];

//if-clause
bool if_guard44649 = is_true(a4364943860);
if(if_guard44649)
{
void* x4365043861 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43746);
arg_buffer[2] = x4365043861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44651 = alloc_clo(lam44009_fptr, 6);

//setting env list
clo44651[1] = member_u63;
clo44651[2] = x;
clo44651[3] = kont43746;
clo44651[4] = equal_u63;
clo44651[5] = lst;
clo44651[6] = cdr;
void* f4374943862 = encode_clo(clo44651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4374943862;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44011 = encode_clo(alloc_clo(lam44011_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44013 = arg_buffer[1];
//reading env and args
void* kont43746 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44653 = alloc_clo(lam44011_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo44653[1] = member_u63;
clo44653[2] = car;
clo44653[3] = x;
clo44653[4] = kont43746;
clo44653[5] = equal_u63;
clo44653[6] = lst;
clo44653[7] = cdr;
void* f4375043859 = encode_clo(clo44653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4375043859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam44014_fptr() // lam44014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44015 = arg_buffer[1];
//reading env and args
void* a4365843876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env44015))[4];
//not do dummy comment
void* kont43751 = (decode_clo(env44015))[3];
//not do dummy comment
void* a4365743874 = (decode_clo(env44015))[2];
//not do dummy comment
void* fun = (decode_clo(env44015))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont43751;
arg_buffer[3] = fun;
arg_buffer[4] = a4365743874;
arg_buffer[5] = a4365843876;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44014 = encode_clo(alloc_clo(lam44014_fptr, 0));

void* lam44016_fptr() // lam44016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44017 = arg_buffer[1];
//reading env and args
void* a4365743874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44017))[5];
//not do dummy comment
void* lst = (decode_clo(env44017))[4];
//not do dummy comment
void* fun = (decode_clo(env44017))[3];
//not do dummy comment
void* foldl = (decode_clo(env44017))[2];
//not do dummy comment
void* kont43751 = (decode_clo(env44017))[1];

//creating new closure instance
void** clo44655 = alloc_clo(lam44014_fptr, 4);

//setting env list
clo44655[1] = fun;
clo44655[2] = a4365743874;
clo44655[3] = kont43751;
clo44655[4] = foldl;
void* f4375243875 = encode_clo(clo44655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4375243875;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44016 = encode_clo(alloc_clo(lam44016_fptr, 0));

void* lam44018_fptr() // lam44018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44019 = arg_buffer[1];
//reading env and args
void* a4365643872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44019))[6];
//not do dummy comment
void* lst = (decode_clo(env44019))[5];
//not do dummy comment
void* fun = (decode_clo(env44019))[4];
//not do dummy comment
void* acc = (decode_clo(env44019))[3];
//not do dummy comment
void* foldl = (decode_clo(env44019))[2];
//not do dummy comment
void* kont43751 = (decode_clo(env44019))[1];

//creating new closure instance
void** clo44657 = alloc_clo(lam44016_fptr, 5);

//setting env list
clo44657[1] = kont43751;
clo44657[2] = foldl;
clo44657[3] = fun;
clo44657[4] = lst;
clo44657[5] = cdr;
void* f4375343873 = encode_clo(clo44657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4375343873;
arg_buffer[3] = a4365643872;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44018 = encode_clo(alloc_clo(lam44018_fptr, 0));

void* lam44020_fptr() // lam44020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44021 = arg_buffer[1];
//reading env and args
void* a4365543870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44021))[7];
//not do dummy comment
void* lst = (decode_clo(env44021))[6];
//not do dummy comment
void* fun = (decode_clo(env44021))[5];
//not do dummy comment
void* acc = (decode_clo(env44021))[4];
//not do dummy comment
void* car = (decode_clo(env44021))[3];
//not do dummy comment
void* foldl = (decode_clo(env44021))[2];
//not do dummy comment
void* kont43751 = (decode_clo(env44021))[1];

//if-clause
bool if_guard44658 = is_true(a4365543870);
if(if_guard44658)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43751);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43751))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44660 = alloc_clo(lam44018_fptr, 6);

//setting env list
clo44660[1] = kont43751;
clo44660[2] = foldl;
clo44660[3] = acc;
clo44660[4] = fun;
clo44660[5] = lst;
clo44660[6] = cdr;
void* f4375443871 = encode_clo(clo44660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4375443871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44020 = encode_clo(alloc_clo(lam44020_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44022 = arg_buffer[1];
//reading env and args
void* kont43751 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo44662 = alloc_clo(lam44020_fptr, 7);

//setting env list
clo44662[1] = kont43751;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo44662[2] = foldl;
clo44662[3] = car;
clo44662[4] = acc;
clo44662[5] = fun;
clo44662[6] = lst;
clo44662[7] = cdr;
void* f4375543869 = encode_clo(clo44662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4375543869;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam44023_fptr() // lam44023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44024 = arg_buffer[1];
//reading env and args
void* a4366243884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4366043880 = (decode_clo(env44024))[3];
//not do dummy comment
void* kont43756 = (decode_clo(env44024))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont43756;
arg_buffer[3] = a4366043880;
arg_buffer[4] = a4366243884;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44023 = encode_clo(alloc_clo(lam44023_fptr, 0));

void* lam44025_fptr() // lam44025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44026 = arg_buffer[1];
//reading env and args
void* a4366143882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4366043880 = (decode_clo(env44026))[5];
//not do dummy comment
void* kont43756 = (decode_clo(env44026))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44026))[3];
//not do dummy comment
void* lst2 = (decode_clo(env44026))[2];
//not do dummy comment
void* cons = (decode_clo(env44026))[1];

//creating new closure instance
void** clo44664 = alloc_clo(lam44023_fptr, 3);

//setting env list
clo44664[1] = reverse_u45helper;
clo44664[2] = kont43756;
clo44664[3] = a4366043880;
void* f4375743883 = encode_clo(clo44664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4375743883;
arg_buffer[3] = a4366143882;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44025 = encode_clo(alloc_clo(lam44025_fptr, 0));

void* lam44027_fptr() // lam44027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44028 = arg_buffer[1];
//reading env and args
void* a4366043880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44028))[6];
//not do dummy comment
void* lst2 = (decode_clo(env44028))[5];
//not do dummy comment
void* car = (decode_clo(env44028))[4];
//not do dummy comment
void* cons = (decode_clo(env44028))[3];
//not do dummy comment
void* lst = (decode_clo(env44028))[2];
//not do dummy comment
void* kont43756 = (decode_clo(env44028))[1];

//creating new closure instance
void** clo44666 = alloc_clo(lam44025_fptr, 5);

//setting env list
clo44666[1] = cons;
clo44666[2] = lst2;
clo44666[3] = reverse_u45helper;
clo44666[4] = kont43756;
clo44666[5] = a4366043880;
void* f4375843881 = encode_clo(clo44666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4375843881;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44027 = encode_clo(alloc_clo(lam44027_fptr, 0));

void* lam44029_fptr() // lam44029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44030 = arg_buffer[1];
//reading env and args
void* a4365943878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44030))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44030))[6];
//not do dummy comment
void* lst2 = (decode_clo(env44030))[5];
//not do dummy comment
void* car = (decode_clo(env44030))[4];
//not do dummy comment
void* cons = (decode_clo(env44030))[3];
//not do dummy comment
void* lst = (decode_clo(env44030))[2];
//not do dummy comment
void* kont43756 = (decode_clo(env44030))[1];

//if-clause
bool if_guard44667 = is_true(a4365943878);
if(if_guard44667)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43756);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43756))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44669 = alloc_clo(lam44027_fptr, 6);

//setting env list
clo44669[1] = kont43756;
clo44669[2] = lst;
clo44669[3] = cons;
clo44669[4] = car;
clo44669[5] = lst2;
clo44669[6] = reverse_u45helper;
void* f4375943879 = encode_clo(clo44669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4375943879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44029 = encode_clo(alloc_clo(lam44029_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44031 = arg_buffer[1];
//reading env and args
void* kont43756 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44671 = alloc_clo(lam44029_fptr, 7);

//setting env list
clo44671[1] = kont43756;
clo44671[2] = lst;
clo44671[3] = cons;
clo44671[4] = car;
clo44671[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo44671[6] = reverse_u45helper;
clo44671[7] = cdr;
void* f4376043877 = encode_clo(clo44671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4376043877;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam44032_fptr() // lam44032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44033 = arg_buffer[1];
//reading env and args
void* a4366343886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44033))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44033))[2];
//not do dummy comment
void* kont43761 = (decode_clo(env44033))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont43761;
arg_buffer[3] = lst;
arg_buffer[4] = a4366343886;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44032 = encode_clo(alloc_clo(lam44032_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44034 = arg_buffer[1];
//reading env and args
void* kont43761 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo44673 = alloc_clo(lam44032_fptr, 3);

//setting env list
clo44673[1] = kont43761;
clo44673[2] = reverse_u45helper;
clo44673[3] = lst;
void* f4376243885 = encode_clo(clo44673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4376243885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam44035_fptr() // lam44035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44036 = arg_buffer[1];
//reading env and args
void* x4366643891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43763 = (decode_clo(env44036))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43763);
arg_buffer[2] = x4366643891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43763))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44035 = encode_clo(alloc_clo(lam44035_fptr, 0));

void* lam44037_fptr() // lam44037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44038 = arg_buffer[1];
//reading env and args
void* a4367143900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4366943896 = (decode_clo(env44038))[4];
//not do dummy comment
void* kont43763 = (decode_clo(env44038))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44038))[2];
//not do dummy comment
void* a4366743893 = (decode_clo(env44038))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont43763;
arg_buffer[3] = a4366743893;
arg_buffer[4] = a4366943896;
arg_buffer[5] = a4367143900;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44037 = encode_clo(alloc_clo(lam44037_fptr, 0));

void* lam44039_fptr() // lam44039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44040 = arg_buffer[1];
//reading env and args
void* a4367043898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4366943896 = (decode_clo(env44040))[6];
//not do dummy comment
void* kont43763 = (decode_clo(env44040))[5];
//not do dummy comment
void* a4366743893 = (decode_clo(env44040))[4];
//not do dummy comment
void* cons = (decode_clo(env44040))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44040))[2];
//not do dummy comment
void* lst2 = (decode_clo(env44040))[1];

//creating new closure instance
void** clo44675 = alloc_clo(lam44037_fptr, 4);

//setting env list
clo44675[1] = a4366743893;
clo44675[2] = take_u45helper;
clo44675[3] = kont43763;
clo44675[4] = a4366943896;
void* f4376543899 = encode_clo(clo44675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4376543899;
arg_buffer[3] = a4367043898;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44039 = encode_clo(alloc_clo(lam44039_fptr, 0));

void* lam44041_fptr() // lam44041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44042 = arg_buffer[1];
//reading env and args
void* a4366943896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44042))[7];
//not do dummy comment
void* kont43763 = (decode_clo(env44042))[6];
//not do dummy comment
void* cons = (decode_clo(env44042))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44042))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44042))[3];
//not do dummy comment
void* a4366743893 = (decode_clo(env44042))[2];
//not do dummy comment
void* car = (decode_clo(env44042))[1];

//creating new closure instance
void** clo44677 = alloc_clo(lam44039_fptr, 6);

//setting env list
clo44677[1] = lst2;
clo44677[2] = take_u45helper;
clo44677[3] = cons;
clo44677[4] = a4366743893;
clo44677[5] = kont43763;
clo44677[6] = a4366943896;
void* f4376643897 = encode_clo(clo44677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4376643897;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44041 = encode_clo(alloc_clo(lam44041_fptr, 0));

void* lam44044_fptr() // lam44044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44045 = arg_buffer[1];
//reading env and args
void* a4366743893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44045))[8];
//not do dummy comment
void* kont43763 = (decode_clo(env44045))[7];
//not do dummy comment
void* cons = (decode_clo(env44045))[6];
//not do dummy comment
void* _u45 = (decode_clo(env44045))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44045))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44045))[3];
//not do dummy comment
void* n = (decode_clo(env44045))[2];
//not do dummy comment
void* car = (decode_clo(env44045))[1];
mpz_t* mpzvar44678 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44678, "1", 10);
void* a4366843894 = encode_mpz(mpzvar44678);

//creating new closure instance
void** clo44680 = alloc_clo(lam44041_fptr, 7);

//setting env list
clo44680[1] = car;
clo44680[2] = a4366743893;
clo44680[3] = lst2;
clo44680[4] = take_u45helper;
clo44680[5] = cons;
clo44680[6] = kont43763;
clo44680[7] = lst;
void* f4376743895 = encode_clo(clo44680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4376743895;
arg_buffer[3] = n;
arg_buffer[4] = a4366843894;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44044 = encode_clo(alloc_clo(lam44044_fptr, 0));

void* lam44046_fptr() // lam44046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44047 = arg_buffer[1];
//reading env and args
void* a4366543889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44047))[10];
//not do dummy comment
void* lst = (decode_clo(env44047))[9];
//not do dummy comment
void* reverse = (decode_clo(env44047))[8];
//not do dummy comment
void* kont43763 = (decode_clo(env44047))[7];
//not do dummy comment
void* cons = (decode_clo(env44047))[6];
//not do dummy comment
void* _u45 = (decode_clo(env44047))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44047))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44047))[3];
//not do dummy comment
void* n = (decode_clo(env44047))[2];
//not do dummy comment
void* car = (decode_clo(env44047))[1];

//if-clause
bool if_guard44681 = is_true(a4366543889);
if(if_guard44681)
{

//creating new closure instance
void** clo44683 = alloc_clo(lam44035_fptr, 1);

//setting env list
clo44683[1] = kont43763;
void* f4376443890 = encode_clo(clo44683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4376443890;
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
void** clo44685 = alloc_clo(lam44044_fptr, 8);

//setting env list
clo44685[1] = car;
clo44685[2] = n;
clo44685[3] = lst2;
clo44685[4] = take_u45helper;
clo44685[5] = _u45;
clo44685[6] = cons;
clo44685[7] = kont43763;
clo44685[8] = lst;
void* f4376843892 = encode_clo(clo44685);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4376843892;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44046 = encode_clo(alloc_clo(lam44046_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44049 = arg_buffer[1];
//reading env and args
void* kont43763 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar44686 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44686, "0", 10);
void* a4366443887 = encode_mpz(mpzvar44686);

//creating new closure instance
void** clo44688 = alloc_clo(lam44046_fptr, 10);

//setting env list
clo44688[1] = car;
clo44688[2] = n;
clo44688[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo44688[4] = take_u45helper;
clo44688[5] = _u45;
clo44688[6] = cons;
clo44688[7] = kont43763;
clo44688[8] = reverse;
clo44688[9] = lst;
clo44688[10] = cdr;
void* f4376943888 = encode_clo(clo44688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4376943888;
arg_buffer[3] = n;
arg_buffer[4] = a4366443887;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam44050_fptr() // lam44050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44051 = arg_buffer[1];
//reading env and args
void* a4367243902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43770 = (decode_clo(env44051))[4];
//not do dummy comment
void* lst = (decode_clo(env44051))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44051))[2];
//not do dummy comment
void* n = (decode_clo(env44051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont43770;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4367243902;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44050 = encode_clo(alloc_clo(lam44050_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44052 = arg_buffer[1];
//reading env and args
void* kont43770 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44690 = alloc_clo(lam44050_fptr, 4);

//setting env list
clo44690[1] = n;
clo44690[2] = take_u45helper;
clo44690[3] = lst;
clo44690[4] = kont43770;
void* f4377143901 = encode_clo(clo44690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4377143901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam44054_fptr() // lam44054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44055 = arg_buffer[1];
//reading env and args
void* a4367743910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43772 = (decode_clo(env44055))[3];
//not do dummy comment
void* _u43 = (decode_clo(env44055))[2];
//not do dummy comment
void* a4367543906 = (decode_clo(env44055))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont43772;
arg_buffer[3] = a4367543906;
arg_buffer[4] = a4367743910;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44054 = encode_clo(alloc_clo(lam44054_fptr, 0));

void* lam44056_fptr() // lam44056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44057 = arg_buffer[1];
//reading env and args
void* a4367643908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43772 = (decode_clo(env44057))[4];
//not do dummy comment
void* length = (decode_clo(env44057))[3];
//not do dummy comment
void* _u43 = (decode_clo(env44057))[2];
//not do dummy comment
void* a4367543906 = (decode_clo(env44057))[1];

//creating new closure instance
void** clo44692 = alloc_clo(lam44054_fptr, 3);

//setting env list
clo44692[1] = a4367543906;
clo44692[2] = _u43;
clo44692[3] = kont43772;
void* f4377343909 = encode_clo(clo44692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4377343909;
arg_buffer[3] = a4367643908;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44056 = encode_clo(alloc_clo(lam44056_fptr, 0));

void* lam44059_fptr() // lam44059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44060 = arg_buffer[1];
//reading env and args
void* a4367343904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44060))[5];
//not do dummy comment
void* length = (decode_clo(env44060))[4];
//not do dummy comment
void* _u43 = (decode_clo(env44060))[3];
//not do dummy comment
void* lst = (decode_clo(env44060))[2];
//not do dummy comment
void* kont43772 = (decode_clo(env44060))[1];

//if-clause
bool if_guard44693 = is_true(a4367343904);
if(if_guard44693)
{
mpz_t* mpzvar44694 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44694, "0", 10);
void* x4367443905 = encode_mpz(mpzvar44694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43772);
arg_buffer[2] = x4367443905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar44695 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44695, "1", 10);
void* a4367543906 = encode_mpz(mpzvar44695);

//creating new closure instance
void** clo44697 = alloc_clo(lam44056_fptr, 4);

//setting env list
clo44697[1] = a4367543906;
clo44697[2] = _u43;
clo44697[3] = length;
clo44697[4] = kont43772;
void* f4377443907 = encode_clo(clo44697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4377443907;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44059 = encode_clo(alloc_clo(lam44059_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44061 = arg_buffer[1];
//reading env and args
void* kont43772 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo44699 = alloc_clo(lam44059_fptr, 5);

//setting env list
clo44699[1] = kont43772;
clo44699[2] = lst;
clo44699[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo44699[4] = length;
clo44699[5] = cdr;
void* f4377543903 = encode_clo(clo44699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4377543903;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam44062_fptr() // lam44062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44063 = arg_buffer[1];
//reading env and args
void* x4367943914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43776 = (decode_clo(env44063))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43776);
arg_buffer[2] = x4367943914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43776))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44062 = encode_clo(alloc_clo(lam44062_fptr, 0));

void* lam44064_fptr() // lam44064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44065 = arg_buffer[1];
//reading env and args
void* a4368343922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4368143918 = (decode_clo(env44065))[3];
//not do dummy comment
void* kont43776 = (decode_clo(env44065))[2];
//not do dummy comment
void* cons = (decode_clo(env44065))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont43776;
arg_buffer[3] = a4368143918;
arg_buffer[4] = a4368343922;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44064 = encode_clo(alloc_clo(lam44064_fptr, 0));

void* lam44066_fptr() // lam44066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44067 = arg_buffer[1];
//reading env and args
void* a4368243920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env44067))[5];
//not do dummy comment
void* a4368143918 = (decode_clo(env44067))[4];
//not do dummy comment
void* kont43776 = (decode_clo(env44067))[3];
//not do dummy comment
void* proc = (decode_clo(env44067))[2];
//not do dummy comment
void* cons = (decode_clo(env44067))[1];

//creating new closure instance
void** clo44701 = alloc_clo(lam44064_fptr, 3);

//setting env list
clo44701[1] = cons;
clo44701[2] = kont43776;
clo44701[3] = a4368143918;
void* f4377843921 = encode_clo(clo44701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4377843921;
arg_buffer[3] = proc;
arg_buffer[4] = a4368243920;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44066 = encode_clo(alloc_clo(lam44066_fptr, 0));

void* lam44068_fptr() // lam44068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44069 = arg_buffer[1];
//reading env and args
void* a4368143918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44069))[6];
//not do dummy comment
void* lst = (decode_clo(env44069))[5];
//not do dummy comment
void* map = (decode_clo(env44069))[4];
//not do dummy comment
void* kont43776 = (decode_clo(env44069))[3];
//not do dummy comment
void* proc = (decode_clo(env44069))[2];
//not do dummy comment
void* cons = (decode_clo(env44069))[1];

//creating new closure instance
void** clo44703 = alloc_clo(lam44066_fptr, 5);

//setting env list
clo44703[1] = cons;
clo44703[2] = proc;
clo44703[3] = kont43776;
clo44703[4] = a4368143918;
clo44703[5] = map;
void* f4377943919 = encode_clo(clo44703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4377943919;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44068 = encode_clo(alloc_clo(lam44068_fptr, 0));

void* lam44070_fptr() // lam44070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44071 = arg_buffer[1];
//reading env and args
void* a4368043916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44071))[6];
//not do dummy comment
void* lst = (decode_clo(env44071))[5];
//not do dummy comment
void* map = (decode_clo(env44071))[4];
//not do dummy comment
void* kont43776 = (decode_clo(env44071))[3];
//not do dummy comment
void* proc = (decode_clo(env44071))[2];
//not do dummy comment
void* cons = (decode_clo(env44071))[1];

//creating new closure instance
void** clo44705 = alloc_clo(lam44068_fptr, 6);

//setting env list
clo44705[1] = cons;
clo44705[2] = proc;
clo44705[3] = kont43776;
clo44705[4] = map;
clo44705[5] = lst;
clo44705[6] = cdr;
void* f4378043917 = encode_clo(clo44705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4378043917;
arg_buffer[3] = a4368043916;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44070 = encode_clo(alloc_clo(lam44070_fptr, 0));

void* lam44072_fptr() // lam44072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44073 = arg_buffer[1];
//reading env and args
void* a4367843912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44073))[8];
//not do dummy comment
void* map = (decode_clo(env44073))[7];
//not do dummy comment
void* kont43776 = (decode_clo(env44073))[6];
//not do dummy comment
void* proc = (decode_clo(env44073))[5];
//not do dummy comment
void* car = (decode_clo(env44073))[4];
//not do dummy comment
void* cons = (decode_clo(env44073))[3];
//not do dummy comment
void* list = (decode_clo(env44073))[2];
//not do dummy comment
void* cdr = (decode_clo(env44073))[1];

//if-clause
bool if_guard44706 = is_true(a4367843912);
if(if_guard44706)
{

//creating new closure instance
void** clo44708 = alloc_clo(lam44062_fptr, 1);

//setting env list
clo44708[1] = kont43776;
void* f4377743913 = encode_clo(clo44708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4377743913;
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
void** clo44710 = alloc_clo(lam44070_fptr, 6);

//setting env list
clo44710[1] = cons;
clo44710[2] = proc;
clo44710[3] = kont43776;
clo44710[4] = map;
clo44710[5] = lst;
clo44710[6] = cdr;
void* f4378143915 = encode_clo(clo44710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4378143915;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44072 = encode_clo(alloc_clo(lam44072_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44074 = arg_buffer[1];
//reading env and args
void* kont43776 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44712 = alloc_clo(lam44072_fptr, 8);

//setting env list
clo44712[1] = cdr;
clo44712[2] = list;
clo44712[3] = cons;
clo44712[4] = car;
clo44712[5] = proc;
clo44712[6] = kont43776;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo44712[7] = map;
clo44712[8] = lst;
void* f4378243911 = encode_clo(clo44712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4378243911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam44075_fptr() // lam44075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44076 = arg_buffer[1];
//reading env and args
void* x4368543926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43783 = (decode_clo(env44076))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43783);
arg_buffer[2] = x4368543926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43783))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44075 = encode_clo(alloc_clo(lam44075_fptr, 0));

void* lam44077_fptr() // lam44077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44078 = arg_buffer[1];
//reading env and args
void* a4369043936 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4368843932 = (decode_clo(env44078))[3];
//not do dummy comment
void* cons = (decode_clo(env44078))[2];
//not do dummy comment
void* kont43783 = (decode_clo(env44078))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont43783;
arg_buffer[3] = a4368843932;
arg_buffer[4] = a4369043936;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44077 = encode_clo(alloc_clo(lam44077_fptr, 0));

void* lam44079_fptr() // lam44079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44080 = arg_buffer[1];
//reading env and args
void* a4368943934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4368843932 = (decode_clo(env44080))[5];
//not do dummy comment
void* op = (decode_clo(env44080))[4];
//not do dummy comment
void* filter = (decode_clo(env44080))[3];
//not do dummy comment
void* cons = (decode_clo(env44080))[2];
//not do dummy comment
void* kont43783 = (decode_clo(env44080))[1];

//creating new closure instance
void** clo44714 = alloc_clo(lam44077_fptr, 3);

//setting env list
clo44714[1] = kont43783;
clo44714[2] = cons;
clo44714[3] = a4368843932;
void* f4378543935 = encode_clo(clo44714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4378543935;
arg_buffer[3] = op;
arg_buffer[4] = a4368943934;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44079 = encode_clo(alloc_clo(lam44079_fptr, 0));

void* lam44081_fptr() // lam44081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44082 = arg_buffer[1];
//reading env and args
void* a4368843932 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44082))[6];
//not do dummy comment
void* lst = (decode_clo(env44082))[5];
//not do dummy comment
void* op = (decode_clo(env44082))[4];
//not do dummy comment
void* filter = (decode_clo(env44082))[3];
//not do dummy comment
void* cons = (decode_clo(env44082))[2];
//not do dummy comment
void* kont43783 = (decode_clo(env44082))[1];

//creating new closure instance
void** clo44716 = alloc_clo(lam44079_fptr, 5);

//setting env list
clo44716[1] = kont43783;
clo44716[2] = cons;
clo44716[3] = filter;
clo44716[4] = op;
clo44716[5] = a4368843932;
void* f4378643933 = encode_clo(clo44716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4378643933;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44081 = encode_clo(alloc_clo(lam44081_fptr, 0));

void* lam44083_fptr() // lam44083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44084 = arg_buffer[1];
//reading env and args
void* a4369143938 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env44084))[3];
//not do dummy comment
void* filter = (decode_clo(env44084))[2];
//not do dummy comment
void* kont43783 = (decode_clo(env44084))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont43783;
arg_buffer[3] = op;
arg_buffer[4] = a4369143938;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44083 = encode_clo(alloc_clo(lam44083_fptr, 0));

void* lam44085_fptr() // lam44085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44086 = arg_buffer[1];
//reading env and args
void* a4368743930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44086))[7];
//not do dummy comment
void* lst = (decode_clo(env44086))[6];
//not do dummy comment
void* op = (decode_clo(env44086))[5];
//not do dummy comment
void* cons = (decode_clo(env44086))[4];
//not do dummy comment
void* kont43783 = (decode_clo(env44086))[3];
//not do dummy comment
void* filter = (decode_clo(env44086))[2];
//not do dummy comment
void* car = (decode_clo(env44086))[1];

//if-clause
bool if_guard44717 = is_true(a4368743930);
if(if_guard44717)
{

//creating new closure instance
void** clo44719 = alloc_clo(lam44081_fptr, 6);

//setting env list
clo44719[1] = kont43783;
clo44719[2] = cons;
clo44719[3] = filter;
clo44719[4] = op;
clo44719[5] = lst;
clo44719[6] = cdr;
void* f4378743931 = encode_clo(clo44719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4378743931;
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
void** clo44721 = alloc_clo(lam44083_fptr, 3);

//setting env list
clo44721[1] = kont43783;
clo44721[2] = filter;
clo44721[3] = op;
void* f4378843937 = encode_clo(clo44721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4378843937;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44085 = encode_clo(alloc_clo(lam44085_fptr, 0));

void* lam44087_fptr() // lam44087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44088 = arg_buffer[1];
//reading env and args
void* a4368643928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44088))[7];
//not do dummy comment
void* lst = (decode_clo(env44088))[6];
//not do dummy comment
void* op = (decode_clo(env44088))[5];
//not do dummy comment
void* cons = (decode_clo(env44088))[4];
//not do dummy comment
void* kont43783 = (decode_clo(env44088))[3];
//not do dummy comment
void* filter = (decode_clo(env44088))[2];
//not do dummy comment
void* car = (decode_clo(env44088))[1];

//creating new closure instance
void** clo44723 = alloc_clo(lam44085_fptr, 7);

//setting env list
clo44723[1] = car;
clo44723[2] = filter;
clo44723[3] = kont43783;
clo44723[4] = cons;
clo44723[5] = op;
clo44723[6] = lst;
clo44723[7] = cdr;
void* f4378943929 = encode_clo(clo44723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4378943929;
arg_buffer[3] = a4368643928;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44087 = encode_clo(alloc_clo(lam44087_fptr, 0));

void* lam44089_fptr() // lam44089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44090 = arg_buffer[1];
//reading env and args
void* a4368443924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44090))[8];
//not do dummy comment
void* op = (decode_clo(env44090))[7];
//not do dummy comment
void* cons = (decode_clo(env44090))[6];
//not do dummy comment
void* kont43783 = (decode_clo(env44090))[5];
//not do dummy comment
void* list = (decode_clo(env44090))[4];
//not do dummy comment
void* cdr = (decode_clo(env44090))[3];
//not do dummy comment
void* filter = (decode_clo(env44090))[2];
//not do dummy comment
void* car = (decode_clo(env44090))[1];

//if-clause
bool if_guard44724 = is_true(a4368443924);
if(if_guard44724)
{

//creating new closure instance
void** clo44726 = alloc_clo(lam44075_fptr, 1);

//setting env list
clo44726[1] = kont43783;
void* f4378443925 = encode_clo(clo44726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4378443925;
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
void** clo44728 = alloc_clo(lam44087_fptr, 7);

//setting env list
clo44728[1] = car;
clo44728[2] = filter;
clo44728[3] = kont43783;
clo44728[4] = cons;
clo44728[5] = op;
clo44728[6] = lst;
clo44728[7] = cdr;
void* f4379043927 = encode_clo(clo44728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4379043927;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44089 = encode_clo(alloc_clo(lam44089_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44091 = arg_buffer[1];
//reading env and args
void* kont43783 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44730 = alloc_clo(lam44089_fptr, 8);

//setting env list
clo44730[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo44730[2] = filter;
clo44730[3] = cdr;
clo44730[4] = list;
clo44730[5] = kont43783;
clo44730[6] = cons;
clo44730[7] = op;
clo44730[8] = lst;
void* f4379143923 = encode_clo(clo44730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4379143923;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam44092_fptr() // lam44092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44093 = arg_buffer[1];
//reading env and args
void* a4369643946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env44093))[3];
//not do dummy comment
void* kont43792 = (decode_clo(env44093))[2];
//not do dummy comment
void* a4369443943 = (decode_clo(env44093))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont43792;
arg_buffer[3] = a4369443943;
arg_buffer[4] = a4369643946;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44092 = encode_clo(alloc_clo(lam44092_fptr, 0));

void* lam44095_fptr() // lam44095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44096 = arg_buffer[1];
//reading env and args
void* a4369443943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env44096))[4];
//not do dummy comment
void* kont43792 = (decode_clo(env44096))[3];
//not do dummy comment
void* n = (decode_clo(env44096))[2];
//not do dummy comment
void* _u45 = (decode_clo(env44096))[1];
mpz_t* mpzvar44731 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44731, "1", 10);
void* a4369543944 = encode_mpz(mpzvar44731);

//creating new closure instance
void** clo44733 = alloc_clo(lam44092_fptr, 3);

//setting env list
clo44733[1] = a4369443943;
clo44733[2] = kont43792;
clo44733[3] = drop;
void* f4379343945 = encode_clo(clo44733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4379343945;
arg_buffer[3] = n;
arg_buffer[4] = a4369543944;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44095 = encode_clo(alloc_clo(lam44095_fptr, 0));

void* lam44097_fptr() // lam44097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44098 = arg_buffer[1];
//reading env and args
void* a4369343941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44098))[6];
//not do dummy comment
void* kont43792 = (decode_clo(env44098))[5];
//not do dummy comment
void* n = (decode_clo(env44098))[4];
//not do dummy comment
void* _u45 = (decode_clo(env44098))[3];
//not do dummy comment
void* lst = (decode_clo(env44098))[2];
//not do dummy comment
void* drop = (decode_clo(env44098))[1];

//if-clause
bool if_guard44734 = is_true(a4369343941);
if(if_guard44734)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43792);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43792))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44736 = alloc_clo(lam44095_fptr, 4);

//setting env list
clo44736[1] = _u45;
clo44736[2] = n;
clo44736[3] = kont43792;
clo44736[4] = drop;
void* f4379443942 = encode_clo(clo44736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4379443942;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44097 = encode_clo(alloc_clo(lam44097_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44100 = arg_buffer[1];
//reading env and args
void* kont43792 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar44737 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44737, "0", 10);
void* a4369243939 = encode_mpz(mpzvar44737);

//creating new closure instance
void** clo44739 = alloc_clo(lam44097_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo44739[1] = drop;
clo44739[2] = lst;
clo44739[3] = _u45;
clo44739[4] = n;
clo44739[5] = kont43792;
clo44739[6] = cdr;
void* f4379543940 = encode_clo(clo44739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4379543940;
arg_buffer[3] = n;
arg_buffer[4] = a4369243939;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam44101_fptr() // lam44101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44102 = arg_buffer[1];
//reading env and args
void* a4370043954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4369843950 = (decode_clo(env44102))[3];
//not do dummy comment
void* proc = (decode_clo(env44102))[2];
//not do dummy comment
void* kont43796 = (decode_clo(env44102))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont43796;
arg_buffer[3] = a4369843950;
arg_buffer[4] = a4370043954;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44101 = encode_clo(alloc_clo(lam44101_fptr, 0));

void* lam44103_fptr() // lam44103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44104 = arg_buffer[1];
//reading env and args
void* a4369943952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env44104))[5];
//not do dummy comment
void* a4369843950 = (decode_clo(env44104))[4];
//not do dummy comment
void* kont43796 = (decode_clo(env44104))[3];
//not do dummy comment
void* proc = (decode_clo(env44104))[2];
//not do dummy comment
void* acc = (decode_clo(env44104))[1];

//creating new closure instance
void** clo44741 = alloc_clo(lam44101_fptr, 3);

//setting env list
clo44741[1] = kont43796;
clo44741[2] = proc;
clo44741[3] = a4369843950;
void* f4379743953 = encode_clo(clo44741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4379743953;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4369943952;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44103 = encode_clo(alloc_clo(lam44103_fptr, 0));

void* lam44105_fptr() // lam44105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44106 = arg_buffer[1];
//reading env and args
void* a4369843950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44106))[6];
//not do dummy comment
void* kont43796 = (decode_clo(env44106))[5];
//not do dummy comment
void* foldr = (decode_clo(env44106))[4];
//not do dummy comment
void* lst = (decode_clo(env44106))[3];
//not do dummy comment
void* proc = (decode_clo(env44106))[2];
//not do dummy comment
void* acc = (decode_clo(env44106))[1];

//creating new closure instance
void** clo44743 = alloc_clo(lam44103_fptr, 5);

//setting env list
clo44743[1] = acc;
clo44743[2] = proc;
clo44743[3] = kont43796;
clo44743[4] = a4369843950;
clo44743[5] = foldr;
void* f4379843951 = encode_clo(clo44743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4379843951;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44105 = encode_clo(alloc_clo(lam44105_fptr, 0));

void* lam44107_fptr() // lam44107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44108 = arg_buffer[1];
//reading env and args
void* a4369743948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44108))[7];
//not do dummy comment
void* kont43796 = (decode_clo(env44108))[6];
//not do dummy comment
void* car = (decode_clo(env44108))[5];
//not do dummy comment
void* foldr = (decode_clo(env44108))[4];
//not do dummy comment
void* lst = (decode_clo(env44108))[3];
//not do dummy comment
void* proc = (decode_clo(env44108))[2];
//not do dummy comment
void* acc = (decode_clo(env44108))[1];

//if-clause
bool if_guard44744 = is_true(a4369743948);
if(if_guard44744)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43796);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43796))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44746 = alloc_clo(lam44105_fptr, 6);

//setting env list
clo44746[1] = acc;
clo44746[2] = proc;
clo44746[3] = lst;
clo44746[4] = foldr;
clo44746[5] = kont43796;
clo44746[6] = cdr;
void* f4379943949 = encode_clo(clo44746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4379943949;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44107 = encode_clo(alloc_clo(lam44107_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44109 = arg_buffer[1];
//reading env and args
void* kont43796 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo44748 = alloc_clo(lam44107_fptr, 7);

//setting env list
clo44748[1] = acc;
clo44748[2] = proc;
clo44748[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo44748[4] = foldr;
clo44748[5] = car;
clo44748[6] = kont43796;
clo44748[7] = cdr;
void* f4380043947 = encode_clo(clo44748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4380043947;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam44110_fptr() // lam44110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44111 = arg_buffer[1];
//reading env and args
void* a4370443962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43801 = (decode_clo(env44111))[3];
//not do dummy comment
void* cons = (decode_clo(env44111))[2];
//not do dummy comment
void* a4370243958 = (decode_clo(env44111))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont43801;
arg_buffer[3] = a4370243958;
arg_buffer[4] = a4370443962;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44110 = encode_clo(alloc_clo(lam44110_fptr, 0));

void* lam44112_fptr() // lam44112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44113 = arg_buffer[1];
//reading env and args
void* a4370343960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43801 = (decode_clo(env44113))[5];
//not do dummy comment
void* append = (decode_clo(env44113))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44113))[3];
//not do dummy comment
void* cons = (decode_clo(env44113))[2];
//not do dummy comment
void* a4370243958 = (decode_clo(env44113))[1];

//creating new closure instance
void** clo44750 = alloc_clo(lam44110_fptr, 3);

//setting env list
clo44750[1] = a4370243958;
clo44750[2] = cons;
clo44750[3] = kont43801;
void* f4380243961 = encode_clo(clo44750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4380243961;
arg_buffer[3] = a4370343960;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44112 = encode_clo(alloc_clo(lam44112_fptr, 0));

void* lam44114_fptr() // lam44114 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44115 = arg_buffer[1];
//reading env and args
void* a4370243958 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44115))[6];
//not do dummy comment
void* kont43801 = (decode_clo(env44115))[5];
//not do dummy comment
void* append = (decode_clo(env44115))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44115))[3];
//not do dummy comment
void* lst1 = (decode_clo(env44115))[2];
//not do dummy comment
void* cons = (decode_clo(env44115))[1];

//creating new closure instance
void** clo44752 = alloc_clo(lam44112_fptr, 5);

//setting env list
clo44752[1] = a4370243958;
clo44752[2] = cons;
clo44752[3] = lst2;
clo44752[4] = append;
clo44752[5] = kont43801;
void* f4380343959 = encode_clo(clo44752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4380343959;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44114 = encode_clo(alloc_clo(lam44114_fptr, 0));

void* lam44116_fptr() // lam44116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44117 = arg_buffer[1];
//reading env and args
void* a4370143956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44117))[7];
//not do dummy comment
void* kont43801 = (decode_clo(env44117))[6];
//not do dummy comment
void* append = (decode_clo(env44117))[5];
//not do dummy comment
void* lst2 = (decode_clo(env44117))[4];
//not do dummy comment
void* cons = (decode_clo(env44117))[3];
//not do dummy comment
void* lst1 = (decode_clo(env44117))[2];
//not do dummy comment
void* car = (decode_clo(env44117))[1];

//if-clause
bool if_guard44753 = is_true(a4370143956);
if(if_guard44753)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43801);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43801))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44755 = alloc_clo(lam44114_fptr, 6);

//setting env list
clo44755[1] = cons;
clo44755[2] = lst1;
clo44755[3] = lst2;
clo44755[4] = append;
clo44755[5] = kont43801;
clo44755[6] = cdr;
void* f4380443957 = encode_clo(clo44755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4380443957;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44116 = encode_clo(alloc_clo(lam44116_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44118 = arg_buffer[1];
//reading env and args
void* kont43801 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44757 = alloc_clo(lam44116_fptr, 7);

//setting env list
clo44757[1] = car;
clo44757[2] = lst1;
clo44757[3] = cons;
clo44757[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo44757[5] = append;
clo44757[6] = kont43801;
clo44757[7] = cdr;
void* f4380543955 = encode_clo(clo44757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4380543955;
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
void* _44119 = arg_buffer[1];
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

void* kont4380643963 = prim_car(lst);
void* lst43964 = prim_cdr(lst);
void* x4370543965 = apply_prim_hash(lst43964);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4380643963);
arg_buffer[2] = x4370543965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4380643963))[0]);
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
void* _44120 = arg_buffer[1];
//reading env and args
void* kont43808 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4370643966 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43808);
arg_buffer[2] = x4370643966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43808))[0]);
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
void* _44121 = arg_buffer[1];
//reading env and args
void* kont43809 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4370743967 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43809);
arg_buffer[2] = x4370743967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43809))[0]);
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
void* _44122 = arg_buffer[1];
//reading env and args
void* kont43810 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4370843968 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43810);
arg_buffer[2] = x4370843968;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43810))[0]);
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
void* _44123 = arg_buffer[1];
//reading env and args
void* kont43811 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4370943969 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43811);
arg_buffer[2] = x4370943969;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43811))[0]);
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
void* _44128 = arg_buffer[1];
//reading env and args
void* kont43812 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar44758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44758, "100", 10);
void* a4371043970 = encode_mpz(mpzvar44758);
mpz_t* mpzvar44759 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44759, "80", 10);
void* a4371143971 = encode_mpz(mpzvar44759);
mpz_t* mpzvar44760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44760, "10", 10);
void* a4371243972 = encode_mpz(mpzvar44760);
mpz_t* mpzvar44761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44761, "2", 10);
void* a4371343973 = encode_mpz(mpzvar44761);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont43812;
arg_buffer[3] = a4371043970;
arg_buffer[4] = a4371143971;
arg_buffer[5] = a4371243972;
arg_buffer[6] = a4371343973;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam44129_fptr() // lam44129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44130 = arg_buffer[1];
//reading env and args
void* x4371443975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont43813 = (decode_clo(env44130))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont43813);
arg_buffer[2] = x4371443975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont43813))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44129 = encode_clo(alloc_clo(lam44129_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44131 = arg_buffer[1];
//reading env and args
void* kont43813 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo44763 = alloc_clo(lam44129_fptr, 1);

//setting env list
clo44763[1] = kont43813;
void* f4381443974 = encode_clo(clo44763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4381443974;
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

