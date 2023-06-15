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
void* _13905 = arg_buffer[1];
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

void* kont1363813740 = prim_car(lst);
void* lst13741 = prim_cdr(lst);
void* x1354813742 = apply_prim__u43(lst13741);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1363813740);
arg_buffer[2] = x1354813742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1363813740))[0]);
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
void* _13906 = arg_buffer[1];
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

void* kont1364013743 = prim_car(lst);
void* lst13744 = prim_cdr(lst);
void* x1354913745 = apply_prim__u45(lst13744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364013743);
arg_buffer[2] = x1354913745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364013743))[0]);
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
void* _13907 = arg_buffer[1];
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

void* kont1364213746 = prim_car(lst);
void* lst13747 = prim_cdr(lst);
void* x1355013748 = apply_prim__u42(lst13747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364213746);
arg_buffer[2] = x1355013748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364213746))[0]);
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
void* _13908 = arg_buffer[1];
//reading env and args
void* kont13644 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1355113749 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13644);
arg_buffer[2] = x1355113749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13644))[0]);
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
void* _13909 = arg_buffer[1];
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

void* kont1364513750 = prim_car(lst);
void* lst13751 = prim_cdr(lst);
void* x1355213752 = apply_prim__u47(lst13751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364513750);
arg_buffer[2] = x1355213752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364513750))[0]);
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
void* _13910 = arg_buffer[1];
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

void* kont1364713753 = prim_car(lst);
void* lst13754 = prim_cdr(lst);
void* x1355313755 = apply_prim__u61(lst13754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364713753);
arg_buffer[2] = x1355313755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364713753))[0]);
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
void* _13911 = arg_buffer[1];
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

void* kont1364913756 = prim_car(lst);
void* lst13757 = prim_cdr(lst);
void* x1355413758 = apply_prim__u62(lst13757);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364913756);
arg_buffer[2] = x1355413758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364913756))[0]);
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
void* _13912 = arg_buffer[1];
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

void* kont1365113759 = prim_car(lst);
void* lst13760 = prim_cdr(lst);
void* x1355513761 = apply_prim__u60(lst13760);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365113759);
arg_buffer[2] = x1355513761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365113759))[0]);
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
void* _13913 = arg_buffer[1];
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

void* kont1365313762 = prim_car(lst);
void* lst13763 = prim_cdr(lst);
void* x1355613764 = apply_prim__u60_u61(lst13763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365313762);
arg_buffer[2] = x1355613764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365313762))[0]);
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
void* _13914 = arg_buffer[1];
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

void* kont1365513765 = prim_car(lst);
void* lst13766 = prim_cdr(lst);
void* x1355713767 = apply_prim__u62_u61(lst13766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365513765);
arg_buffer[2] = x1355713767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365513765))[0]);
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
void* _13915 = arg_buffer[1];
//reading env and args
void* kont13657 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1355813768 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13657);
arg_buffer[2] = x1355813768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13657))[0]);
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
void* _13916 = arg_buffer[1];
//reading env and args
void* kont13658 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1355913769 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13658);
arg_buffer[2] = x1355913769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13658))[0]);
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
void* _13917 = arg_buffer[1];
//reading env and args
void* kont13659 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1356013770 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13659);
arg_buffer[2] = x1356013770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13659))[0]);
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
void* _13918 = arg_buffer[1];
//reading env and args
void* kont13660 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1356113771 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13660);
arg_buffer[2] = x1356113771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13660))[0]);
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
void* _13919 = arg_buffer[1];
//reading env and args
void* kont13661 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1356213772 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13661);
arg_buffer[2] = x1356213772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13661))[0]);
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
void* _13920 = arg_buffer[1];
//reading env and args
void* kont13662 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1356313773 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13662);
arg_buffer[2] = x1356313773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13662))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam13921_fptr() // lam13921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13922 = arg_buffer[1];
//reading env and args
void* a1356613777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13663 = (decode_clo(env13922))[3];
//not do dummy comment
void* a1356413774 = (decode_clo(env13922))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env13922))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13663;
arg_buffer[3] = a1356413774;
arg_buffer[4] = a1356613777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13921 = encode_clo(alloc_clo(lam13921_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13925 = arg_buffer[1];
//reading env and args
void* kont13663 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22705 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22705, "0", 10);
void* a1356413774 = encode_mpz(mpzvar22705);
mpz_t* mpzvar22706 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22706, "2", 10);
void* a1356513775 = encode_mpz(mpzvar22706);

//creating new closure instance
void** clo22708 = alloc_clo(lam13921_fptr, 3);

//setting env list
clo22708[1] = equal_u63;
clo22708[2] = a1356413774;
clo22708[3] = kont13663;
void* f1366413776 = encode_clo(clo22708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1366413776;
arg_buffer[3] = x;
arg_buffer[4] = a1356513775;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam13926_fptr() // lam13926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13927 = arg_buffer[1];
//reading env and args
void* a1356913781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env13927))[3];
//not do dummy comment
void* kont13665 = (decode_clo(env13927))[2];
//not do dummy comment
void* a1356713778 = (decode_clo(env13927))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13665;
arg_buffer[3] = a1356713778;
arg_buffer[4] = a1356913781;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13926 = encode_clo(alloc_clo(lam13926_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13930 = arg_buffer[1];
//reading env and args
void* kont13665 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22709 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22709, "1", 10);
void* a1356713778 = encode_mpz(mpzvar22709);
mpz_t* mpzvar22710 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22710, "2", 10);
void* a1356813779 = encode_mpz(mpzvar22710);

//creating new closure instance
void** clo22712 = alloc_clo(lam13926_fptr, 3);

//setting env list
clo22712[1] = a1356713778;
clo22712[2] = kont13665;
clo22712[3] = equal_u63;
void* f1366613780 = encode_clo(clo22712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1366613780;
arg_buffer[3] = x;
arg_buffer[4] = a1356813779;
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
void* _13931 = arg_buffer[1];
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

void* kont1366713782 = prim_car(x);
void* x13783 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1366713782);
arg_buffer[2] = x13783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1366713782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam13934_fptr() // lam13934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13935 = arg_buffer[1];
//reading env and args
void* a1357513793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env13935))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13935))[2];
//not do dummy comment
void* kont13669 = (decode_clo(env13935))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont13669;
arg_buffer[3] = x;
arg_buffer[4] = a1357513793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13934 = encode_clo(alloc_clo(lam13934_fptr, 0));

void* lam13936_fptr() // lam13936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13937 = arg_buffer[1];
//reading env and args
void* a1357313790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13937))[5];
//not do dummy comment
void* lst = (decode_clo(env13937))[4];
//not do dummy comment
void* x = (decode_clo(env13937))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13937))[2];
//not do dummy comment
void* kont13669 = (decode_clo(env13937))[1];

//if-clause
bool if_guard22713 = is_true(a1357313790);
if(if_guard22713)
{
void* x1357413791 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13669);
arg_buffer[2] = x1357413791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13669))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22715 = alloc_clo(lam13934_fptr, 3);

//setting env list
clo22715[1] = kont13669;
clo22715[2] = member_u63;
clo22715[3] = x;
void* f1367013792 = encode_clo(clo22715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1367013792;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13936 = encode_clo(alloc_clo(lam13936_fptr, 0));

void* lam13938_fptr() // lam13938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13939 = arg_buffer[1];
//reading env and args
void* a1357213788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13939))[6];
//not do dummy comment
void* lst = (decode_clo(env13939))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env13939))[4];
//not do dummy comment
void* x = (decode_clo(env13939))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13939))[2];
//not do dummy comment
void* kont13669 = (decode_clo(env13939))[1];

//creating new closure instance
void** clo22717 = alloc_clo(lam13936_fptr, 5);

//setting env list
clo22717[1] = kont13669;
clo22717[2] = member_u63;
clo22717[3] = x;
clo22717[4] = lst;
clo22717[5] = cdr;
void* f1367113789 = encode_clo(clo22717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1367113789;
arg_buffer[3] = a1357213788;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13938 = encode_clo(alloc_clo(lam13938_fptr, 0));

void* lam13940_fptr() // lam13940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13941 = arg_buffer[1];
//reading env and args
void* a1357013785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13941))[7];
//not do dummy comment
void* lst = (decode_clo(env13941))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env13941))[5];
//not do dummy comment
void* x = (decode_clo(env13941))[4];
//not do dummy comment
void* car = (decode_clo(env13941))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13941))[2];
//not do dummy comment
void* kont13669 = (decode_clo(env13941))[1];

//if-clause
bool if_guard22718 = is_true(a1357013785);
if(if_guard22718)
{
void* x1357113786 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13669);
arg_buffer[2] = x1357113786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13669))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22720 = alloc_clo(lam13938_fptr, 6);

//setting env list
clo22720[1] = kont13669;
clo22720[2] = member_u63;
clo22720[3] = x;
clo22720[4] = equal_u63;
clo22720[5] = lst;
clo22720[6] = cdr;
void* f1367213787 = encode_clo(clo22720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1367213787;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13940 = encode_clo(alloc_clo(lam13940_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13942 = arg_buffer[1];
//reading env and args
void* kont13669 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22722 = alloc_clo(lam13940_fptr, 7);

//setting env list
clo22722[1] = kont13669;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo22722[2] = member_u63;
clo22722[3] = car;
clo22722[4] = x;
clo22722[5] = equal_u63;
clo22722[6] = lst;
clo22722[7] = cdr;
void* f1367313784 = encode_clo(clo22722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1367313784;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam13943_fptr() // lam13943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13944 = arg_buffer[1];
//reading env and args
void* a1357913801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1357813799 = (decode_clo(env13944))[4];
//not do dummy comment
void* kont13674 = (decode_clo(env13944))[3];
//not do dummy comment
void* fun = (decode_clo(env13944))[2];
//not do dummy comment
void* foldl = (decode_clo(env13944))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont13674;
arg_buffer[3] = fun;
arg_buffer[4] = a1357813799;
arg_buffer[5] = a1357913801;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13943 = encode_clo(alloc_clo(lam13943_fptr, 0));

void* lam13945_fptr() // lam13945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13946 = arg_buffer[1];
//reading env and args
void* a1357813799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13946))[5];
//not do dummy comment
void* fun = (decode_clo(env13946))[4];
//not do dummy comment
void* foldl = (decode_clo(env13946))[3];
//not do dummy comment
void* lst = (decode_clo(env13946))[2];
//not do dummy comment
void* kont13674 = (decode_clo(env13946))[1];

//creating new closure instance
void** clo22724 = alloc_clo(lam13943_fptr, 4);

//setting env list
clo22724[1] = foldl;
clo22724[2] = fun;
clo22724[3] = kont13674;
clo22724[4] = a1357813799;
void* f1367513800 = encode_clo(clo22724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1367513800;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13945 = encode_clo(alloc_clo(lam13945_fptr, 0));

void* lam13947_fptr() // lam13947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13948 = arg_buffer[1];
//reading env and args
void* a1357713797 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13948))[6];
//not do dummy comment
void* fun = (decode_clo(env13948))[5];
//not do dummy comment
void* acc = (decode_clo(env13948))[4];
//not do dummy comment
void* foldl = (decode_clo(env13948))[3];
//not do dummy comment
void* lst = (decode_clo(env13948))[2];
//not do dummy comment
void* kont13674 = (decode_clo(env13948))[1];

//creating new closure instance
void** clo22726 = alloc_clo(lam13945_fptr, 5);

//setting env list
clo22726[1] = kont13674;
clo22726[2] = lst;
clo22726[3] = foldl;
clo22726[4] = fun;
clo22726[5] = cdr;
void* f1367613798 = encode_clo(clo22726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1367613798;
arg_buffer[3] = a1357713797;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13947 = encode_clo(alloc_clo(lam13947_fptr, 0));

void* lam13949_fptr() // lam13949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13950 = arg_buffer[1];
//reading env and args
void* a1357613795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13950))[7];
//not do dummy comment
void* fun = (decode_clo(env13950))[6];
//not do dummy comment
void* acc = (decode_clo(env13950))[5];
//not do dummy comment
void* car = (decode_clo(env13950))[4];
//not do dummy comment
void* foldl = (decode_clo(env13950))[3];
//not do dummy comment
void* lst = (decode_clo(env13950))[2];
//not do dummy comment
void* kont13674 = (decode_clo(env13950))[1];

//if-clause
bool if_guard22727 = is_true(a1357613795);
if(if_guard22727)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13674);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13674))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22729 = alloc_clo(lam13947_fptr, 6);

//setting env list
clo22729[1] = kont13674;
clo22729[2] = lst;
clo22729[3] = foldl;
clo22729[4] = acc;
clo22729[5] = fun;
clo22729[6] = cdr;
void* f1367713796 = encode_clo(clo22729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1367713796;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13949 = encode_clo(alloc_clo(lam13949_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13951 = arg_buffer[1];
//reading env and args
void* kont13674 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22731 = alloc_clo(lam13949_fptr, 7);

//setting env list
clo22731[1] = kont13674;
clo22731[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo22731[3] = foldl;
clo22731[4] = car;
clo22731[5] = acc;
clo22731[6] = fun;
clo22731[7] = cdr;
void* f1367813794 = encode_clo(clo22731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1367813794;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam13952_fptr() // lam13952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13953 = arg_buffer[1];
//reading env and args
void* a1358313809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13679 = (decode_clo(env13953))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13953))[2];
//not do dummy comment
void* a1358113805 = (decode_clo(env13953))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13679;
arg_buffer[3] = a1358113805;
arg_buffer[4] = a1358313809;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13952 = encode_clo(alloc_clo(lam13952_fptr, 0));

void* lam13954_fptr() // lam13954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13955 = arg_buffer[1];
//reading env and args
void* a1358213807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13679 = (decode_clo(env13955))[5];
//not do dummy comment
void* lst2 = (decode_clo(env13955))[4];
//not do dummy comment
void* cons = (decode_clo(env13955))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13955))[2];
//not do dummy comment
void* a1358113805 = (decode_clo(env13955))[1];

//creating new closure instance
void** clo22733 = alloc_clo(lam13952_fptr, 3);

//setting env list
clo22733[1] = a1358113805;
clo22733[2] = reverse_u45helper;
clo22733[3] = kont13679;
void* f1368013808 = encode_clo(clo22733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1368013808;
arg_buffer[3] = a1358213807;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13954 = encode_clo(alloc_clo(lam13954_fptr, 0));

void* lam13956_fptr() // lam13956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13957 = arg_buffer[1];
//reading env and args
void* a1358113805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13957))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13957))[5];
//not do dummy comment
void* kont13679 = (decode_clo(env13957))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13957))[3];
//not do dummy comment
void* car = (decode_clo(env13957))[2];
//not do dummy comment
void* cons = (decode_clo(env13957))[1];

//creating new closure instance
void** clo22735 = alloc_clo(lam13954_fptr, 5);

//setting env list
clo22735[1] = a1358113805;
clo22735[2] = reverse_u45helper;
clo22735[3] = cons;
clo22735[4] = lst2;
clo22735[5] = kont13679;
void* f1368113806 = encode_clo(clo22735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1368113806;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13956 = encode_clo(alloc_clo(lam13956_fptr, 0));

void* lam13958_fptr() // lam13958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13959 = arg_buffer[1];
//reading env and args
void* a1358013803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13959))[7];
//not do dummy comment
void* lst = (decode_clo(env13959))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13959))[5];
//not do dummy comment
void* kont13679 = (decode_clo(env13959))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13959))[3];
//not do dummy comment
void* car = (decode_clo(env13959))[2];
//not do dummy comment
void* cons = (decode_clo(env13959))[1];

//if-clause
bool if_guard22736 = is_true(a1358013803);
if(if_guard22736)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13679);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13679))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22738 = alloc_clo(lam13956_fptr, 6);

//setting env list
clo22738[1] = cons;
clo22738[2] = car;
clo22738[3] = lst2;
clo22738[4] = kont13679;
clo22738[5] = reverse_u45helper;
clo22738[6] = lst;
void* f1368213804 = encode_clo(clo22738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1368213804;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13958 = encode_clo(alloc_clo(lam13958_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13960 = arg_buffer[1];
//reading env and args
void* kont13679 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22740 = alloc_clo(lam13958_fptr, 7);

//setting env list
clo22740[1] = cons;
clo22740[2] = car;
clo22740[3] = lst2;
clo22740[4] = kont13679;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo22740[5] = reverse_u45helper;
clo22740[6] = lst;
clo22740[7] = cdr;
void* f1368313802 = encode_clo(clo22740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1368313802;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam13961_fptr() // lam13961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13962 = arg_buffer[1];
//reading env and args
void* a1358413811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13962))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13962))[2];
//not do dummy comment
void* kont13684 = (decode_clo(env13962))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13684;
arg_buffer[3] = lst;
arg_buffer[4] = a1358413811;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13961 = encode_clo(alloc_clo(lam13961_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13963 = arg_buffer[1];
//reading env and args
void* kont13684 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22742 = alloc_clo(lam13961_fptr, 3);

//setting env list
clo22742[1] = kont13684;
clo22742[2] = reverse_u45helper;
clo22742[3] = lst;
void* f1368513810 = encode_clo(clo22742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1368513810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam13964_fptr() // lam13964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13965 = arg_buffer[1];
//reading env and args
void* x1358713816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13686 = (decode_clo(env13965))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13686);
arg_buffer[2] = x1358713816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13686))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13964 = encode_clo(alloc_clo(lam13964_fptr, 0));

void* lam13966_fptr() // lam13966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13967 = arg_buffer[1];
//reading env and args
void* a1359213825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13686 = (decode_clo(env13967))[4];
//not do dummy comment
void* a1358813818 = (decode_clo(env13967))[3];
//not do dummy comment
void* a1359013821 = (decode_clo(env13967))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env13967))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13686;
arg_buffer[3] = a1358813818;
arg_buffer[4] = a1359013821;
arg_buffer[5] = a1359213825;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13966 = encode_clo(alloc_clo(lam13966_fptr, 0));

void* lam13968_fptr() // lam13968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13969 = arg_buffer[1];
//reading env and args
void* a1359113823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13686 = (decode_clo(env13969))[6];
//not do dummy comment
void* a1358813818 = (decode_clo(env13969))[5];
//not do dummy comment
void* a1359013821 = (decode_clo(env13969))[4];
//not do dummy comment
void* cons = (decode_clo(env13969))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13969))[2];
//not do dummy comment
void* lst2 = (decode_clo(env13969))[1];

//creating new closure instance
void** clo22744 = alloc_clo(lam13966_fptr, 4);

//setting env list
clo22744[1] = take_u45helper;
clo22744[2] = a1359013821;
clo22744[3] = a1358813818;
clo22744[4] = kont13686;
void* f1368813824 = encode_clo(clo22744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1368813824;
arg_buffer[3] = a1359113823;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13968 = encode_clo(alloc_clo(lam13968_fptr, 0));

void* lam13970_fptr() // lam13970 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13971 = arg_buffer[1];
//reading env and args
void* a1359013821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13686 = (decode_clo(env13971))[7];
//not do dummy comment
void* car = (decode_clo(env13971))[6];
//not do dummy comment
void* cons = (decode_clo(env13971))[5];
//not do dummy comment
void* a1358813818 = (decode_clo(env13971))[4];
//not do dummy comment
void* lst = (decode_clo(env13971))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13971))[2];
//not do dummy comment
void* lst2 = (decode_clo(env13971))[1];

//creating new closure instance
void** clo22746 = alloc_clo(lam13968_fptr, 6);

//setting env list
clo22746[1] = lst2;
clo22746[2] = take_u45helper;
clo22746[3] = cons;
clo22746[4] = a1359013821;
clo22746[5] = a1358813818;
clo22746[6] = kont13686;
void* f1368913822 = encode_clo(clo22746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1368913822;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13970 = encode_clo(alloc_clo(lam13970_fptr, 0));

void* lam13973_fptr() // lam13973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13974 = arg_buffer[1];
//reading env and args
void* a1358813818 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13686 = (decode_clo(env13974))[8];
//not do dummy comment
void* lst = (decode_clo(env13974))[7];
//not do dummy comment
void* cons = (decode_clo(env13974))[6];
//not do dummy comment
void* _u45 = (decode_clo(env13974))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13974))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13974))[3];
//not do dummy comment
void* n = (decode_clo(env13974))[2];
//not do dummy comment
void* car = (decode_clo(env13974))[1];
mpz_t* mpzvar22747 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22747, "1", 10);
void* a1358913819 = encode_mpz(mpzvar22747);

//creating new closure instance
void** clo22749 = alloc_clo(lam13970_fptr, 7);

//setting env list
clo22749[1] = lst2;
clo22749[2] = take_u45helper;
clo22749[3] = lst;
clo22749[4] = a1358813818;
clo22749[5] = cons;
clo22749[6] = car;
clo22749[7] = kont13686;
void* f1369013820 = encode_clo(clo22749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1369013820;
arg_buffer[3] = n;
arg_buffer[4] = a1358913819;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13973 = encode_clo(alloc_clo(lam13973_fptr, 0));

void* lam13975_fptr() // lam13975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13976 = arg_buffer[1];
//reading env and args
void* a1358613814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13976))[10];
//not do dummy comment
void* reverse = (decode_clo(env13976))[9];
//not do dummy comment
void* cons = (decode_clo(env13976))[8];
//not do dummy comment
void* _u45 = (decode_clo(env13976))[7];
//not do dummy comment
void* kont13686 = (decode_clo(env13976))[6];
//not do dummy comment
void* cdr = (decode_clo(env13976))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13976))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13976))[3];
//not do dummy comment
void* n = (decode_clo(env13976))[2];
//not do dummy comment
void* car = (decode_clo(env13976))[1];

//if-clause
bool if_guard22750 = is_true(a1358613814);
if(if_guard22750)
{

//creating new closure instance
void** clo22752 = alloc_clo(lam13964_fptr, 1);

//setting env list
clo22752[1] = kont13686;
void* f1368713815 = encode_clo(clo22752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1368713815;
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
void** clo22754 = alloc_clo(lam13973_fptr, 8);

//setting env list
clo22754[1] = car;
clo22754[2] = n;
clo22754[3] = lst2;
clo22754[4] = take_u45helper;
clo22754[5] = _u45;
clo22754[6] = cons;
clo22754[7] = lst;
clo22754[8] = kont13686;
void* f1369113817 = encode_clo(clo22754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1369113817;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13975 = encode_clo(alloc_clo(lam13975_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13978 = arg_buffer[1];
//reading env and args
void* kont13686 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar22755 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22755, "0", 10);
void* a1358513812 = encode_mpz(mpzvar22755);

//creating new closure instance
void** clo22757 = alloc_clo(lam13975_fptr, 10);

//setting env list
clo22757[1] = car;
clo22757[2] = n;
clo22757[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo22757[4] = take_u45helper;
clo22757[5] = cdr;
clo22757[6] = kont13686;
clo22757[7] = _u45;
clo22757[8] = cons;
clo22757[9] = reverse;
clo22757[10] = lst;
void* f1369213813 = encode_clo(clo22757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1369213813;
arg_buffer[3] = n;
arg_buffer[4] = a1358513812;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam13979_fptr() // lam13979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13980 = arg_buffer[1];
//reading env and args
void* a1359313827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13980))[4];
//not do dummy comment
void* kont13693 = (decode_clo(env13980))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13980))[2];
//not do dummy comment
void* n = (decode_clo(env13980))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13693;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1359313827;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13979 = encode_clo(alloc_clo(lam13979_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13981 = arg_buffer[1];
//reading env and args
void* kont13693 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22759 = alloc_clo(lam13979_fptr, 4);

//setting env list
clo22759[1] = n;
clo22759[2] = take_u45helper;
clo22759[3] = kont13693;
clo22759[4] = lst;
void* f1369413826 = encode_clo(clo22759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1369413826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam13983_fptr() // lam13983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13984 = arg_buffer[1];
//reading env and args
void* a1359813835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1359613831 = (decode_clo(env13984))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13984))[2];
//not do dummy comment
void* kont13695 = (decode_clo(env13984))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont13695;
arg_buffer[3] = a1359613831;
arg_buffer[4] = a1359813835;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13983 = encode_clo(alloc_clo(lam13983_fptr, 0));

void* lam13985_fptr() // lam13985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13986 = arg_buffer[1];
//reading env and args
void* a1359713833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1359613831 = (decode_clo(env13986))[4];
//not do dummy comment
void* length = (decode_clo(env13986))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13986))[2];
//not do dummy comment
void* kont13695 = (decode_clo(env13986))[1];

//creating new closure instance
void** clo22761 = alloc_clo(lam13983_fptr, 3);

//setting env list
clo22761[1] = kont13695;
clo22761[2] = _u43;
clo22761[3] = a1359613831;
void* f1369613834 = encode_clo(clo22761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1369613834;
arg_buffer[3] = a1359713833;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13985 = encode_clo(alloc_clo(lam13985_fptr, 0));

void* lam13988_fptr() // lam13988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13989 = arg_buffer[1];
//reading env and args
void* a1359413829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13989))[5];
//not do dummy comment
void* lst = (decode_clo(env13989))[4];
//not do dummy comment
void* length = (decode_clo(env13989))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13989))[2];
//not do dummy comment
void* kont13695 = (decode_clo(env13989))[1];

//if-clause
bool if_guard22762 = is_true(a1359413829);
if(if_guard22762)
{
mpz_t* mpzvar22763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22763, "0", 10);
void* x1359513830 = encode_mpz(mpzvar22763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13695);
arg_buffer[2] = x1359513830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13695))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar22764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22764, "1", 10);
void* a1359613831 = encode_mpz(mpzvar22764);

//creating new closure instance
void** clo22766 = alloc_clo(lam13985_fptr, 4);

//setting env list
clo22766[1] = kont13695;
clo22766[2] = _u43;
clo22766[3] = length;
clo22766[4] = a1359613831;
void* f1369713832 = encode_clo(clo22766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1369713832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13988 = encode_clo(alloc_clo(lam13988_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13990 = arg_buffer[1];
//reading env and args
void* kont13695 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22768 = alloc_clo(lam13988_fptr, 5);

//setting env list
clo22768[1] = kont13695;
clo22768[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo22768[3] = length;
clo22768[4] = lst;
clo22768[5] = cdr;
void* f1369813828 = encode_clo(clo22768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1369813828;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam13991_fptr() // lam13991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13992 = arg_buffer[1];
//reading env and args
void* x1360013839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13699 = (decode_clo(env13992))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13699);
arg_buffer[2] = x1360013839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13699))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13991 = encode_clo(alloc_clo(lam13991_fptr, 0));

void* lam13993_fptr() // lam13993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13994 = arg_buffer[1];
//reading env and args
void* a1360413847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env13994))[3];
//not do dummy comment
void* a1360213843 = (decode_clo(env13994))[2];
//not do dummy comment
void* kont13699 = (decode_clo(env13994))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13699;
arg_buffer[3] = a1360213843;
arg_buffer[4] = a1360413847;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13993 = encode_clo(alloc_clo(lam13993_fptr, 0));

void* lam13995_fptr() // lam13995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13996 = arg_buffer[1];
//reading env and args
void* a1360313845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env13996))[5];
//not do dummy comment
void* proc = (decode_clo(env13996))[4];
//not do dummy comment
void* cons = (decode_clo(env13996))[3];
//not do dummy comment
void* a1360213843 = (decode_clo(env13996))[2];
//not do dummy comment
void* kont13699 = (decode_clo(env13996))[1];

//creating new closure instance
void** clo22770 = alloc_clo(lam13993_fptr, 3);

//setting env list
clo22770[1] = kont13699;
clo22770[2] = a1360213843;
clo22770[3] = cons;
void* f1370113846 = encode_clo(clo22770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1370113846;
arg_buffer[3] = proc;
arg_buffer[4] = a1360313845;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13995 = encode_clo(alloc_clo(lam13995_fptr, 0));

void* lam13997_fptr() // lam13997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13998 = arg_buffer[1];
//reading env and args
void* a1360213843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13998))[6];
//not do dummy comment
void* lst = (decode_clo(env13998))[5];
//not do dummy comment
void* map = (decode_clo(env13998))[4];
//not do dummy comment
void* proc = (decode_clo(env13998))[3];
//not do dummy comment
void* kont13699 = (decode_clo(env13998))[2];
//not do dummy comment
void* cons = (decode_clo(env13998))[1];

//creating new closure instance
void** clo22772 = alloc_clo(lam13995_fptr, 5);

//setting env list
clo22772[1] = kont13699;
clo22772[2] = a1360213843;
clo22772[3] = cons;
clo22772[4] = proc;
clo22772[5] = map;
void* f1370213844 = encode_clo(clo22772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1370213844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13997 = encode_clo(alloc_clo(lam13997_fptr, 0));

void* lam13999_fptr() // lam13999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14000 = arg_buffer[1];
//reading env and args
void* a1360113841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14000))[6];
//not do dummy comment
void* lst = (decode_clo(env14000))[5];
//not do dummy comment
void* map = (decode_clo(env14000))[4];
//not do dummy comment
void* proc = (decode_clo(env14000))[3];
//not do dummy comment
void* kont13699 = (decode_clo(env14000))[2];
//not do dummy comment
void* cons = (decode_clo(env14000))[1];

//creating new closure instance
void** clo22774 = alloc_clo(lam13997_fptr, 6);

//setting env list
clo22774[1] = cons;
clo22774[2] = kont13699;
clo22774[3] = proc;
clo22774[4] = map;
clo22774[5] = lst;
clo22774[6] = cdr;
void* f1370313842 = encode_clo(clo22774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1370313842;
arg_buffer[3] = a1360113841;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13999 = encode_clo(alloc_clo(lam13999_fptr, 0));

void* lam14001_fptr() // lam14001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14002 = arg_buffer[1];
//reading env and args
void* a1359913837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env14002))[8];
//not do dummy comment
void* map = (decode_clo(env14002))[7];
//not do dummy comment
void* proc = (decode_clo(env14002))[6];
//not do dummy comment
void* cons = (decode_clo(env14002))[5];
//not do dummy comment
void* list = (decode_clo(env14002))[4];
//not do dummy comment
void* cdr = (decode_clo(env14002))[3];
//not do dummy comment
void* kont13699 = (decode_clo(env14002))[2];
//not do dummy comment
void* car = (decode_clo(env14002))[1];

//if-clause
bool if_guard22775 = is_true(a1359913837);
if(if_guard22775)
{

//creating new closure instance
void** clo22777 = alloc_clo(lam13991_fptr, 1);

//setting env list
clo22777[1] = kont13699;
void* f1370013838 = encode_clo(clo22777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1370013838;
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
void** clo22779 = alloc_clo(lam13999_fptr, 6);

//setting env list
clo22779[1] = cons;
clo22779[2] = kont13699;
clo22779[3] = proc;
clo22779[4] = map;
clo22779[5] = lst;
clo22779[6] = cdr;
void* f1370413840 = encode_clo(clo22779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1370413840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14001 = encode_clo(alloc_clo(lam14001_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14003 = arg_buffer[1];
//reading env and args
void* kont13699 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22781 = alloc_clo(lam14001_fptr, 8);

//setting env list
clo22781[1] = car;
clo22781[2] = kont13699;
clo22781[3] = cdr;
clo22781[4] = list;
clo22781[5] = cons;
clo22781[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo22781[7] = map;
clo22781[8] = lst;
void* f1370513836 = encode_clo(clo22781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1370513836;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam14004_fptr() // lam14004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14005 = arg_buffer[1];
//reading env and args
void* x1360613851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13706 = (decode_clo(env14005))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13706);
arg_buffer[2] = x1360613851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13706))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14004 = encode_clo(alloc_clo(lam14004_fptr, 0));

void* lam14006_fptr() // lam14006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14007 = arg_buffer[1];
//reading env and args
void* a1361113861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13706 = (decode_clo(env14007))[3];
//not do dummy comment
void* a1360913857 = (decode_clo(env14007))[2];
//not do dummy comment
void* cons = (decode_clo(env14007))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13706;
arg_buffer[3] = a1360913857;
arg_buffer[4] = a1361113861;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14006 = encode_clo(alloc_clo(lam14006_fptr, 0));

void* lam14008_fptr() // lam14008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14009 = arg_buffer[1];
//reading env and args
void* a1361013859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13706 = (decode_clo(env14009))[5];
//not do dummy comment
void* op = (decode_clo(env14009))[4];
//not do dummy comment
void* a1360913857 = (decode_clo(env14009))[3];
//not do dummy comment
void* filter = (decode_clo(env14009))[2];
//not do dummy comment
void* cons = (decode_clo(env14009))[1];

//creating new closure instance
void** clo22783 = alloc_clo(lam14006_fptr, 3);

//setting env list
clo22783[1] = cons;
clo22783[2] = a1360913857;
clo22783[3] = kont13706;
void* f1370813860 = encode_clo(clo22783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1370813860;
arg_buffer[3] = op;
arg_buffer[4] = a1361013859;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14008 = encode_clo(alloc_clo(lam14008_fptr, 0));

void* lam14010_fptr() // lam14010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14011 = arg_buffer[1];
//reading env and args
void* a1360913857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14011))[6];
//not do dummy comment
void* op = (decode_clo(env14011))[5];
//not do dummy comment
void* filter = (decode_clo(env14011))[4];
//not do dummy comment
void* cons = (decode_clo(env14011))[3];
//not do dummy comment
void* lst = (decode_clo(env14011))[2];
//not do dummy comment
void* kont13706 = (decode_clo(env14011))[1];

//creating new closure instance
void** clo22785 = alloc_clo(lam14008_fptr, 5);

//setting env list
clo22785[1] = cons;
clo22785[2] = filter;
clo22785[3] = a1360913857;
clo22785[4] = op;
clo22785[5] = kont13706;
void* f1370913858 = encode_clo(clo22785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1370913858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14010 = encode_clo(alloc_clo(lam14010_fptr, 0));

void* lam14012_fptr() // lam14012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14013 = arg_buffer[1];
//reading env and args
void* a1361213863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13706 = (decode_clo(env14013))[3];
//not do dummy comment
void* op = (decode_clo(env14013))[2];
//not do dummy comment
void* filter = (decode_clo(env14013))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont13706;
arg_buffer[3] = op;
arg_buffer[4] = a1361213863;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14012 = encode_clo(alloc_clo(lam14012_fptr, 0));

void* lam14014_fptr() // lam14014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14015 = arg_buffer[1];
//reading env and args
void* a1360813855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14015))[7];
//not do dummy comment
void* op = (decode_clo(env14015))[6];
//not do dummy comment
void* cons = (decode_clo(env14015))[5];
//not do dummy comment
void* lst = (decode_clo(env14015))[4];
//not do dummy comment
void* kont13706 = (decode_clo(env14015))[3];
//not do dummy comment
void* filter = (decode_clo(env14015))[2];
//not do dummy comment
void* car = (decode_clo(env14015))[1];

//if-clause
bool if_guard22786 = is_true(a1360813855);
if(if_guard22786)
{

//creating new closure instance
void** clo22788 = alloc_clo(lam14010_fptr, 6);

//setting env list
clo22788[1] = kont13706;
clo22788[2] = lst;
clo22788[3] = cons;
clo22788[4] = filter;
clo22788[5] = op;
clo22788[6] = cdr;
void* f1371013856 = encode_clo(clo22788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1371013856;
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
void** clo22790 = alloc_clo(lam14012_fptr, 3);

//setting env list
clo22790[1] = filter;
clo22790[2] = op;
clo22790[3] = kont13706;
void* f1371113862 = encode_clo(clo22790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1371113862;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14014 = encode_clo(alloc_clo(lam14014_fptr, 0));

void* lam14016_fptr() // lam14016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14017 = arg_buffer[1];
//reading env and args
void* a1360713853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14017))[7];
//not do dummy comment
void* op = (decode_clo(env14017))[6];
//not do dummy comment
void* cons = (decode_clo(env14017))[5];
//not do dummy comment
void* lst = (decode_clo(env14017))[4];
//not do dummy comment
void* kont13706 = (decode_clo(env14017))[3];
//not do dummy comment
void* filter = (decode_clo(env14017))[2];
//not do dummy comment
void* car = (decode_clo(env14017))[1];

//creating new closure instance
void** clo22792 = alloc_clo(lam14014_fptr, 7);

//setting env list
clo22792[1] = car;
clo22792[2] = filter;
clo22792[3] = kont13706;
clo22792[4] = lst;
clo22792[5] = cons;
clo22792[6] = op;
clo22792[7] = cdr;
void* f1371213854 = encode_clo(clo22792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1371213854;
arg_buffer[3] = a1360713853;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14016 = encode_clo(alloc_clo(lam14016_fptr, 0));

void* lam14018_fptr() // lam14018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14019 = arg_buffer[1];
//reading env and args
void* a1360513849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env14019))[8];
//not do dummy comment
void* cons = (decode_clo(env14019))[7];
//not do dummy comment
void* list = (decode_clo(env14019))[6];
//not do dummy comment
void* cdr = (decode_clo(env14019))[5];
//not do dummy comment
void* lst = (decode_clo(env14019))[4];
//not do dummy comment
void* kont13706 = (decode_clo(env14019))[3];
//not do dummy comment
void* filter = (decode_clo(env14019))[2];
//not do dummy comment
void* car = (decode_clo(env14019))[1];

//if-clause
bool if_guard22793 = is_true(a1360513849);
if(if_guard22793)
{

//creating new closure instance
void** clo22795 = alloc_clo(lam14004_fptr, 1);

//setting env list
clo22795[1] = kont13706;
void* f1370713850 = encode_clo(clo22795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1370713850;
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
void** clo22797 = alloc_clo(lam14016_fptr, 7);

//setting env list
clo22797[1] = car;
clo22797[2] = filter;
clo22797[3] = kont13706;
clo22797[4] = lst;
clo22797[5] = cons;
clo22797[6] = op;
clo22797[7] = cdr;
void* f1371313852 = encode_clo(clo22797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1371313852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14018 = encode_clo(alloc_clo(lam14018_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14020 = arg_buffer[1];
//reading env and args
void* kont13706 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22799 = alloc_clo(lam14018_fptr, 8);

//setting env list
clo22799[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo22799[2] = filter;
clo22799[3] = kont13706;
clo22799[4] = lst;
clo22799[5] = cdr;
clo22799[6] = list;
clo22799[7] = cons;
clo22799[8] = op;
void* f1371413848 = encode_clo(clo22799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1371413848;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam14021_fptr() // lam14021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14022 = arg_buffer[1];
//reading env and args
void* a1361713871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env14022))[3];
//not do dummy comment
void* a1361513868 = (decode_clo(env14022))[2];
//not do dummy comment
void* kont13715 = (decode_clo(env14022))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont13715;
arg_buffer[3] = a1361513868;
arg_buffer[4] = a1361713871;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14021 = encode_clo(alloc_clo(lam14021_fptr, 0));

void* lam14024_fptr() // lam14024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14025 = arg_buffer[1];
//reading env and args
void* a1361513868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env14025))[4];
//not do dummy comment
void* _u45 = (decode_clo(env14025))[3];
//not do dummy comment
void* kont13715 = (decode_clo(env14025))[2];
//not do dummy comment
void* n = (decode_clo(env14025))[1];
mpz_t* mpzvar22800 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22800, "1", 10);
void* a1361613869 = encode_mpz(mpzvar22800);

//creating new closure instance
void** clo22802 = alloc_clo(lam14021_fptr, 3);

//setting env list
clo22802[1] = kont13715;
clo22802[2] = a1361513868;
clo22802[3] = drop;
void* f1371613870 = encode_clo(clo22802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1371613870;
arg_buffer[3] = n;
arg_buffer[4] = a1361613869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14024 = encode_clo(alloc_clo(lam14024_fptr, 0));

void* lam14026_fptr() // lam14026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14027 = arg_buffer[1];
//reading env and args
void* a1361413866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14027))[6];
//not do dummy comment
void* _u45 = (decode_clo(env14027))[5];
//not do dummy comment
void* lst = (decode_clo(env14027))[4];
//not do dummy comment
void* drop = (decode_clo(env14027))[3];
//not do dummy comment
void* kont13715 = (decode_clo(env14027))[2];
//not do dummy comment
void* n = (decode_clo(env14027))[1];

//if-clause
bool if_guard22803 = is_true(a1361413866);
if(if_guard22803)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13715);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13715))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22805 = alloc_clo(lam14024_fptr, 4);

//setting env list
clo22805[1] = n;
clo22805[2] = kont13715;
clo22805[3] = _u45;
clo22805[4] = drop;
void* f1371713867 = encode_clo(clo22805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1371713867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14026 = encode_clo(alloc_clo(lam14026_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14029 = arg_buffer[1];
//reading env and args
void* kont13715 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar22806 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22806, "0", 10);
void* a1361313864 = encode_mpz(mpzvar22806);

//creating new closure instance
void** clo22808 = alloc_clo(lam14026_fptr, 6);

//setting env list
clo22808[1] = n;
clo22808[2] = kont13715;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo22808[3] = drop;
clo22808[4] = lst;
clo22808[5] = _u45;
clo22808[6] = cdr;
void* f1371813865 = encode_clo(clo22808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1371813865;
arg_buffer[3] = n;
arg_buffer[4] = a1361313864;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam14030_fptr() // lam14030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14031 = arg_buffer[1];
//reading env and args
void* a1362113879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13719 = (decode_clo(env14031))[3];
//not do dummy comment
void* proc = (decode_clo(env14031))[2];
//not do dummy comment
void* a1361913875 = (decode_clo(env14031))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont13719;
arg_buffer[3] = a1361913875;
arg_buffer[4] = a1362113879;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14030 = encode_clo(alloc_clo(lam14030_fptr, 0));

void* lam14032_fptr() // lam14032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14033 = arg_buffer[1];
//reading env and args
void* a1362013877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13719 = (decode_clo(env14033))[5];
//not do dummy comment
void* foldr = (decode_clo(env14033))[4];
//not do dummy comment
void* a1361913875 = (decode_clo(env14033))[3];
//not do dummy comment
void* proc = (decode_clo(env14033))[2];
//not do dummy comment
void* acc = (decode_clo(env14033))[1];

//creating new closure instance
void** clo22810 = alloc_clo(lam14030_fptr, 3);

//setting env list
clo22810[1] = a1361913875;
clo22810[2] = proc;
clo22810[3] = kont13719;
void* f1372013878 = encode_clo(clo22810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1372013878;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1362013877;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14032 = encode_clo(alloc_clo(lam14032_fptr, 0));

void* lam14034_fptr() // lam14034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14035 = arg_buffer[1];
//reading env and args
void* a1361913875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14035))[6];
//not do dummy comment
void* kont13719 = (decode_clo(env14035))[5];
//not do dummy comment
void* foldr = (decode_clo(env14035))[4];
//not do dummy comment
void* lst = (decode_clo(env14035))[3];
//not do dummy comment
void* proc = (decode_clo(env14035))[2];
//not do dummy comment
void* acc = (decode_clo(env14035))[1];

//creating new closure instance
void** clo22812 = alloc_clo(lam14032_fptr, 5);

//setting env list
clo22812[1] = acc;
clo22812[2] = proc;
clo22812[3] = a1361913875;
clo22812[4] = foldr;
clo22812[5] = kont13719;
void* f1372113876 = encode_clo(clo22812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1372113876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14034 = encode_clo(alloc_clo(lam14034_fptr, 0));

void* lam14036_fptr() // lam14036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14037 = arg_buffer[1];
//reading env and args
void* a1361813873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14037))[7];
//not do dummy comment
void* kont13719 = (decode_clo(env14037))[6];
//not do dummy comment
void* car = (decode_clo(env14037))[5];
//not do dummy comment
void* foldr = (decode_clo(env14037))[4];
//not do dummy comment
void* lst = (decode_clo(env14037))[3];
//not do dummy comment
void* proc = (decode_clo(env14037))[2];
//not do dummy comment
void* acc = (decode_clo(env14037))[1];

//if-clause
bool if_guard22813 = is_true(a1361813873);
if(if_guard22813)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13719);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13719))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22815 = alloc_clo(lam14034_fptr, 6);

//setting env list
clo22815[1] = acc;
clo22815[2] = proc;
clo22815[3] = lst;
clo22815[4] = foldr;
clo22815[5] = kont13719;
clo22815[6] = cdr;
void* f1372213874 = encode_clo(clo22815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1372213874;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14036 = encode_clo(alloc_clo(lam14036_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14038 = arg_buffer[1];
//reading env and args
void* kont13719 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22817 = alloc_clo(lam14036_fptr, 7);

//setting env list
clo22817[1] = acc;
clo22817[2] = proc;
clo22817[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo22817[4] = foldr;
clo22817[5] = car;
clo22817[6] = kont13719;
clo22817[7] = cdr;
void* f1372313872 = encode_clo(clo22817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1372313872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam14039_fptr() // lam14039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14040 = arg_buffer[1];
//reading env and args
void* a1362513887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1362313883 = (decode_clo(env14040))[3];
//not do dummy comment
void* kont13724 = (decode_clo(env14040))[2];
//not do dummy comment
void* cons = (decode_clo(env14040))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13724;
arg_buffer[3] = a1362313883;
arg_buffer[4] = a1362513887;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14039 = encode_clo(alloc_clo(lam14039_fptr, 0));

void* lam14041_fptr() // lam14041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14042 = arg_buffer[1];
//reading env and args
void* a1362413885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1362313883 = (decode_clo(env14042))[5];
//not do dummy comment
void* kont13724 = (decode_clo(env14042))[4];
//not do dummy comment
void* append = (decode_clo(env14042))[3];
//not do dummy comment
void* lst2 = (decode_clo(env14042))[2];
//not do dummy comment
void* cons = (decode_clo(env14042))[1];

//creating new closure instance
void** clo22819 = alloc_clo(lam14039_fptr, 3);

//setting env list
clo22819[1] = cons;
clo22819[2] = kont13724;
clo22819[3] = a1362313883;
void* f1372513886 = encode_clo(clo22819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1372513886;
arg_buffer[3] = a1362413885;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14041 = encode_clo(alloc_clo(lam14041_fptr, 0));

void* lam14043_fptr() // lam14043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14044 = arg_buffer[1];
//reading env and args
void* a1362313883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14044))[6];
//not do dummy comment
void* kont13724 = (decode_clo(env14044))[5];
//not do dummy comment
void* append = (decode_clo(env14044))[4];
//not do dummy comment
void* lst2 = (decode_clo(env14044))[3];
//not do dummy comment
void* lst1 = (decode_clo(env14044))[2];
//not do dummy comment
void* cons = (decode_clo(env14044))[1];

//creating new closure instance
void** clo22821 = alloc_clo(lam14041_fptr, 5);

//setting env list
clo22821[1] = cons;
clo22821[2] = lst2;
clo22821[3] = append;
clo22821[4] = kont13724;
clo22821[5] = a1362313883;
void* f1372613884 = encode_clo(clo22821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1372613884;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14043 = encode_clo(alloc_clo(lam14043_fptr, 0));

void* lam14045_fptr() // lam14045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14046 = arg_buffer[1];
//reading env and args
void* a1362213881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14046))[7];
//not do dummy comment
void* kont13724 = (decode_clo(env14046))[6];
//not do dummy comment
void* append = (decode_clo(env14046))[5];
//not do dummy comment
void* lst2 = (decode_clo(env14046))[4];
//not do dummy comment
void* cons = (decode_clo(env14046))[3];
//not do dummy comment
void* lst1 = (decode_clo(env14046))[2];
//not do dummy comment
void* car = (decode_clo(env14046))[1];

//if-clause
bool if_guard22822 = is_true(a1362213881);
if(if_guard22822)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13724);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22824 = alloc_clo(lam14043_fptr, 6);

//setting env list
clo22824[1] = cons;
clo22824[2] = lst1;
clo22824[3] = lst2;
clo22824[4] = append;
clo22824[5] = kont13724;
clo22824[6] = cdr;
void* f1372713882 = encode_clo(clo22824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1372713882;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14045 = encode_clo(alloc_clo(lam14045_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14047 = arg_buffer[1];
//reading env and args
void* kont13724 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22826 = alloc_clo(lam14045_fptr, 7);

//setting env list
clo22826[1] = car;
clo22826[2] = lst1;
clo22826[3] = cons;
clo22826[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo22826[5] = append;
clo22826[6] = kont13724;
clo22826[7] = cdr;
void* f1372813880 = encode_clo(clo22826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1372813880;
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
void* _14048 = arg_buffer[1];
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

void* kont1372913888 = prim_car(lst);
void* lst13889 = prim_cdr(lst);
void* x1362613890 = apply_prim_hash(lst13889);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1372913888);
arg_buffer[2] = x1362613890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1372913888))[0]);
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
void* _14049 = arg_buffer[1];
//reading env and args
void* kont13731 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1362713891 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13731);
arg_buffer[2] = x1362713891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13731))[0]);
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
void* _14050 = arg_buffer[1];
//reading env and args
void* kont13732 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1362813892 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13732);
arg_buffer[2] = x1362813892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13732))[0]);
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
void* _14051 = arg_buffer[1];
//reading env and args
void* kont13733 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1362913893 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13733);
arg_buffer[2] = x1362913893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13733))[0]);
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
void* _14052 = arg_buffer[1];
//reading env and args
void* kont13734 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1363013894 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13734);
arg_buffer[2] = x1363013894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13734))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam14054_fptr() // lam14054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14055 = arg_buffer[1];
//reading env and args
void* a1363613903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13735 = (decode_clo(env14055))[3];
//not do dummy comment
void* _u42 = (decode_clo(env14055))[2];
//not do dummy comment
void* n = (decode_clo(env14055))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont13735;
arg_buffer[3] = n;
arg_buffer[4] = a1363613903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14054 = encode_clo(alloc_clo(lam14054_fptr, 0));

void* lam14056_fptr() // lam14056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14057 = arg_buffer[1];
//reading env and args
void* a1363513901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13735 = (decode_clo(env14057))[4];
//not do dummy comment
void* _u42 = (decode_clo(env14057))[3];
//not do dummy comment
void* fact = (decode_clo(env14057))[2];
//not do dummy comment
void* n = (decode_clo(env14057))[1];

//creating new closure instance
void** clo22828 = alloc_clo(lam14054_fptr, 3);

//setting env list
clo22828[1] = n;
clo22828[2] = _u42;
clo22828[3] = kont13735;
void* f1373613902 = encode_clo(clo22828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = f1373613902;
arg_buffer[3] = a1363513901;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14056 = encode_clo(alloc_clo(lam14056_fptr, 0));

void* lam14059_fptr() // lam14059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14060 = arg_buffer[1];
//reading env and args
void* a1363213897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13735 = (decode_clo(env14060))[5];
//not do dummy comment
void* _u42 = (decode_clo(env14060))[4];
//not do dummy comment
void* fact = (decode_clo(env14060))[3];
//not do dummy comment
void* n = (decode_clo(env14060))[2];
//not do dummy comment
void* _u45 = (decode_clo(env14060))[1];

//if-clause
bool if_guard22829 = is_true(a1363213897);
if(if_guard22829)
{
mpz_t* mpzvar22830 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22830, "1", 10);
void* x1363313898 = encode_mpz(mpzvar22830);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13735);
arg_buffer[2] = x1363313898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13735))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar22831 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22831, "1", 10);
void* a1363413899 = encode_mpz(mpzvar22831);

//creating new closure instance
void** clo22833 = alloc_clo(lam14056_fptr, 4);

//setting env list
clo22833[1] = n;
clo22833[2] = fact;
clo22833[3] = _u42;
clo22833[4] = kont13735;
void* f1373713900 = encode_clo(clo22833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1373713900;
arg_buffer[3] = n;
arg_buffer[4] = a1363413899;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14059 = encode_clo(alloc_clo(lam14059_fptr, 0));

void* fact_fptr() // fact 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14062 = arg_buffer[1];
//reading env and args
void* kont13735 = arg_buffer[2];
void* n = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22834, "0", 10);
void* a1363113895 = encode_mpz(mpzvar22834);

//creating new closure instance
void** clo22836 = alloc_clo(lam14059_fptr, 5);

//setting env list
clo22836[1] = _u45;
clo22836[2] = n;
void* fact = encode_clo(alloc_clo(fact_fptr, 0));

clo22836[3] = fact;
clo22836[4] = _u42;
clo22836[5] = kont13735;
void* f1373813896 = encode_clo(clo22836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1373813896;
arg_buffer[3] = a1363113895;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* fact = encode_clo(alloc_clo(fact_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14064 = arg_buffer[1];
//reading env and args
void* kont13739 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar22837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22837, "5", 10);
void* a1363713904 = encode_mpz(mpzvar22837);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = kont13739;
arg_buffer[3] = a1363713904;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
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

