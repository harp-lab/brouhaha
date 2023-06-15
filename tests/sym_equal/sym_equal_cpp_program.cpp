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
void* _117787 = arg_buffer[1];
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

void* kont117525117625 = prim_car(lst);
void* lst117626 = prim_cdr(lst);
void* x117436117627 = apply_prim__u43(lst117626);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117525117625);
arg_buffer[2] = x117436117627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117525117625))[0]);
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
void* _117788 = arg_buffer[1];
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

void* kont117527117628 = prim_car(lst);
void* lst117629 = prim_cdr(lst);
void* x117437117630 = apply_prim__u45(lst117629);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117527117628);
arg_buffer[2] = x117437117630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117527117628))[0]);
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
void* _117789 = arg_buffer[1];
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

void* kont117529117631 = prim_car(lst);
void* lst117632 = prim_cdr(lst);
void* x117438117633 = apply_prim__u42(lst117632);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117529117631);
arg_buffer[2] = x117438117633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117529117631))[0]);
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
void* _117790 = arg_buffer[1];
//reading env and args
void* kont117531 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x117439117634 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117531);
arg_buffer[2] = x117439117634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117531))[0]);
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
void* _117791 = arg_buffer[1];
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

void* kont117532117635 = prim_car(lst);
void* lst117636 = prim_cdr(lst);
void* x117440117637 = apply_prim__u47(lst117636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117532117635);
arg_buffer[2] = x117440117637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117532117635))[0]);
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
void* _117792 = arg_buffer[1];
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

void* kont117534117638 = prim_car(lst);
void* lst117639 = prim_cdr(lst);
void* x117441117640 = apply_prim__u61(lst117639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117534117638);
arg_buffer[2] = x117441117640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117534117638))[0]);
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
void* _117793 = arg_buffer[1];
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

void* kont117536117641 = prim_car(lst);
void* lst117642 = prim_cdr(lst);
void* x117442117643 = apply_prim__u62(lst117642);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117536117641);
arg_buffer[2] = x117442117643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117536117641))[0]);
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
void* _117794 = arg_buffer[1];
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

void* kont117538117644 = prim_car(lst);
void* lst117645 = prim_cdr(lst);
void* x117443117646 = apply_prim__u60(lst117645);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117538117644);
arg_buffer[2] = x117443117646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117538117644))[0]);
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
void* _117795 = arg_buffer[1];
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

void* kont117540117647 = prim_car(lst);
void* lst117648 = prim_cdr(lst);
void* x117444117649 = apply_prim__u60_u61(lst117648);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117540117647);
arg_buffer[2] = x117444117649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117540117647))[0]);
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
void* _117796 = arg_buffer[1];
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

void* kont117542117650 = prim_car(lst);
void* lst117651 = prim_cdr(lst);
void* x117445117652 = apply_prim__u62_u61(lst117651);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117542117650);
arg_buffer[2] = x117445117652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117542117650))[0]);
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
void* _117797 = arg_buffer[1];
//reading env and args
void* kont117544 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x117446117653 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117544);
arg_buffer[2] = x117446117653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117544))[0]);
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
void* _117798 = arg_buffer[1];
//reading env and args
void* kont117545 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x117447117654 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117545);
arg_buffer[2] = x117447117654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117545))[0]);
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
void* _117799 = arg_buffer[1];
//reading env and args
void* kont117546 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x117448117655 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117546);
arg_buffer[2] = x117448117655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117546))[0]);
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
void* _117800 = arg_buffer[1];
//reading env and args
void* kont117547 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x117449117656 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117547);
arg_buffer[2] = x117449117656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117547))[0]);
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
void* _117801 = arg_buffer[1];
//reading env and args
void* kont117548 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x117450117657 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117548);
arg_buffer[2] = x117450117657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117548))[0]);
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
void* _117802 = arg_buffer[1];
//reading env and args
void* kont117549 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x117451117658 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117549);
arg_buffer[2] = x117451117658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117549))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam117803_fptr() // lam117803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117804 = arg_buffer[1];
//reading env and args
void* a117454117662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117452117659 = (decode_clo(env117804))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env117804))[2];
//not do dummy comment
void* kont117550 = (decode_clo(env117804))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont117550;
arg_buffer[3] = a117452117659;
arg_buffer[4] = a117454117662;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117803 = encode_clo(alloc_clo(lam117803_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117807 = arg_buffer[1];
//reading env and args
void* kont117550 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar118484 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118484, "0", 10);
void* a117452117659 = encode_mpz(mpzvar118484);
mpz_t* mpzvar118485 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118485, "2", 10);
void* a117453117660 = encode_mpz(mpzvar118485);

//creating new closure instance
void** clo118487 = alloc_clo(lam117803_fptr, 3);

//setting env list
clo118487[1] = kont117550;
clo118487[2] = equal_u63;
clo118487[3] = a117452117659;
void* f117551117661 = encode_clo(clo118487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f117551117661;
arg_buffer[3] = x;
arg_buffer[4] = a117453117660;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam117808_fptr() // lam117808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117809 = arg_buffer[1];
//reading env and args
void* a117457117666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env117809))[3];
//not do dummy comment
void* a117455117663 = (decode_clo(env117809))[2];
//not do dummy comment
void* kont117552 = (decode_clo(env117809))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont117552;
arg_buffer[3] = a117455117663;
arg_buffer[4] = a117457117666;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117808 = encode_clo(alloc_clo(lam117808_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117812 = arg_buffer[1];
//reading env and args
void* kont117552 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar118488 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118488, "1", 10);
void* a117455117663 = encode_mpz(mpzvar118488);
mpz_t* mpzvar118489 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118489, "2", 10);
void* a117456117664 = encode_mpz(mpzvar118489);

//creating new closure instance
void** clo118491 = alloc_clo(lam117808_fptr, 3);

//setting env list
clo118491[1] = kont117552;
clo118491[2] = a117455117663;
clo118491[3] = equal_u63;
void* f117553117665 = encode_clo(clo118491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f117553117665;
arg_buffer[3] = x;
arg_buffer[4] = a117456117664;
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
void* _117813 = arg_buffer[1];
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

void* kont117554117667 = prim_car(x);
void* x117668 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117554117667);
arg_buffer[2] = x117668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117554117667))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam117816_fptr() // lam117816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117817 = arg_buffer[1];
//reading env and args
void* a117463117678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env117817))[3];
//not do dummy comment
void* kont117556 = (decode_clo(env117817))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117817))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont117556;
arg_buffer[3] = x;
arg_buffer[4] = a117463117678;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117816 = encode_clo(alloc_clo(lam117816_fptr, 0));

void* lam117818_fptr() // lam117818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117819 = arg_buffer[1];
//reading env and args
void* a117461117675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117819))[5];
//not do dummy comment
void* lst = (decode_clo(env117819))[4];
//not do dummy comment
void* x = (decode_clo(env117819))[3];
//not do dummy comment
void* kont117556 = (decode_clo(env117819))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117819))[1];

//if-clause
bool if_guard118492 = is_true(a117461117675);
if(if_guard118492)
{
void* x117462117676 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117556);
arg_buffer[2] = x117462117676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117556))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo118494 = alloc_clo(lam117816_fptr, 3);

//setting env list
clo118494[1] = member_u63;
clo118494[2] = kont117556;
clo118494[3] = x;
void* f117557117677 = encode_clo(clo118494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117557117677;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117818 = encode_clo(alloc_clo(lam117818_fptr, 0));

void* lam117820_fptr() // lam117820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117821 = arg_buffer[1];
//reading env and args
void* a117460117673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117821))[6];
//not do dummy comment
void* lst = (decode_clo(env117821))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env117821))[4];
//not do dummy comment
void* x = (decode_clo(env117821))[3];
//not do dummy comment
void* kont117556 = (decode_clo(env117821))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117821))[1];

//creating new closure instance
void** clo118496 = alloc_clo(lam117818_fptr, 5);

//setting env list
clo118496[1] = member_u63;
clo118496[2] = kont117556;
clo118496[3] = x;
clo118496[4] = lst;
clo118496[5] = cdr;
void* f117558117674 = encode_clo(clo118496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f117558117674;
arg_buffer[3] = a117460117673;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117820 = encode_clo(alloc_clo(lam117820_fptr, 0));

void* lam117822_fptr() // lam117822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117823 = arg_buffer[1];
//reading env and args
void* a117458117670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117823))[7];
//not do dummy comment
void* lst = (decode_clo(env117823))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env117823))[5];
//not do dummy comment
void* x = (decode_clo(env117823))[4];
//not do dummy comment
void* car = (decode_clo(env117823))[3];
//not do dummy comment
void* kont117556 = (decode_clo(env117823))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117823))[1];

//if-clause
bool if_guard118497 = is_true(a117458117670);
if(if_guard118497)
{
void* x117459117671 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117556);
arg_buffer[2] = x117459117671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117556))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo118499 = alloc_clo(lam117820_fptr, 6);

//setting env list
clo118499[1] = member_u63;
clo118499[2] = kont117556;
clo118499[3] = x;
clo118499[4] = equal_u63;
clo118499[5] = lst;
clo118499[6] = cdr;
void* f117559117672 = encode_clo(clo118499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117559117672;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117822 = encode_clo(alloc_clo(lam117822_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117824 = arg_buffer[1];
//reading env and args
void* kont117556 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo118501 = alloc_clo(lam117822_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo118501[1] = member_u63;
clo118501[2] = kont117556;
clo118501[3] = car;
clo118501[4] = x;
clo118501[5] = equal_u63;
clo118501[6] = lst;
clo118501[7] = cdr;
void* f117560117669 = encode_clo(clo118501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117560117669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam117825_fptr() // lam117825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117826 = arg_buffer[1];
//reading env and args
void* a117467117686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117561 = (decode_clo(env117826))[4];
//not do dummy comment
void* fun = (decode_clo(env117826))[3];
//not do dummy comment
void* foldl = (decode_clo(env117826))[2];
//not do dummy comment
void* a117466117684 = (decode_clo(env117826))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont117561;
arg_buffer[3] = fun;
arg_buffer[4] = a117466117684;
arg_buffer[5] = a117467117686;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117825 = encode_clo(alloc_clo(lam117825_fptr, 0));

void* lam117827_fptr() // lam117827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117828 = arg_buffer[1];
//reading env and args
void* a117466117684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117828))[5];
//not do dummy comment
void* fun = (decode_clo(env117828))[4];
//not do dummy comment
void* foldl = (decode_clo(env117828))[3];
//not do dummy comment
void* lst = (decode_clo(env117828))[2];
//not do dummy comment
void* kont117561 = (decode_clo(env117828))[1];

//creating new closure instance
void** clo118503 = alloc_clo(lam117825_fptr, 4);

//setting env list
clo118503[1] = a117466117684;
clo118503[2] = foldl;
clo118503[3] = fun;
clo118503[4] = kont117561;
void* f117562117685 = encode_clo(clo118503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117562117685;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117827 = encode_clo(alloc_clo(lam117827_fptr, 0));

void* lam117829_fptr() // lam117829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117830 = arg_buffer[1];
//reading env and args
void* a117465117682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117830))[6];
//not do dummy comment
void* fun = (decode_clo(env117830))[5];
//not do dummy comment
void* acc = (decode_clo(env117830))[4];
//not do dummy comment
void* foldl = (decode_clo(env117830))[3];
//not do dummy comment
void* lst = (decode_clo(env117830))[2];
//not do dummy comment
void* kont117561 = (decode_clo(env117830))[1];

//creating new closure instance
void** clo118505 = alloc_clo(lam117827_fptr, 5);

//setting env list
clo118505[1] = kont117561;
clo118505[2] = lst;
clo118505[3] = foldl;
clo118505[4] = fun;
clo118505[5] = cdr;
void* f117563117683 = encode_clo(clo118505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f117563117683;
arg_buffer[3] = a117465117682;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117829 = encode_clo(alloc_clo(lam117829_fptr, 0));

void* lam117831_fptr() // lam117831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117832 = arg_buffer[1];
//reading env and args
void* a117464117680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117832))[7];
//not do dummy comment
void* fun = (decode_clo(env117832))[6];
//not do dummy comment
void* acc = (decode_clo(env117832))[5];
//not do dummy comment
void* car = (decode_clo(env117832))[4];
//not do dummy comment
void* foldl = (decode_clo(env117832))[3];
//not do dummy comment
void* lst = (decode_clo(env117832))[2];
//not do dummy comment
void* kont117561 = (decode_clo(env117832))[1];

//if-clause
bool if_guard118506 = is_true(a117464117680);
if(if_guard118506)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117561);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117561))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo118508 = alloc_clo(lam117829_fptr, 6);

//setting env list
clo118508[1] = kont117561;
clo118508[2] = lst;
clo118508[3] = foldl;
clo118508[4] = acc;
clo118508[5] = fun;
clo118508[6] = cdr;
void* f117564117681 = encode_clo(clo118508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117564117681;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117831 = encode_clo(alloc_clo(lam117831_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117833 = arg_buffer[1];
//reading env and args
void* kont117561 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo118510 = alloc_clo(lam117831_fptr, 7);

//setting env list
clo118510[1] = kont117561;
clo118510[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo118510[3] = foldl;
clo118510[4] = car;
clo118510[5] = acc;
clo118510[6] = fun;
clo118510[7] = cdr;
void* f117565117679 = encode_clo(clo118510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117565117679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam117834_fptr() // lam117834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117835 = arg_buffer[1];
//reading env and args
void* a117471117694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117469117690 = (decode_clo(env117835))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117835))[2];
//not do dummy comment
void* kont117566 = (decode_clo(env117835))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont117566;
arg_buffer[3] = a117469117690;
arg_buffer[4] = a117471117694;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117834 = encode_clo(alloc_clo(lam117834_fptr, 0));

void* lam117836_fptr() // lam117836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117837 = arg_buffer[1];
//reading env and args
void* a117470117692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117469117690 = (decode_clo(env117837))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117837))[4];
//not do dummy comment
void* kont117566 = (decode_clo(env117837))[3];
//not do dummy comment
void* lst2 = (decode_clo(env117837))[2];
//not do dummy comment
void* cons = (decode_clo(env117837))[1];

//creating new closure instance
void** clo118512 = alloc_clo(lam117834_fptr, 3);

//setting env list
clo118512[1] = kont117566;
clo118512[2] = reverse_u45helper;
clo118512[3] = a117469117690;
void* f117567117693 = encode_clo(clo118512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f117567117693;
arg_buffer[3] = a117470117692;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117836 = encode_clo(alloc_clo(lam117836_fptr, 0));

void* lam117838_fptr() // lam117838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117839 = arg_buffer[1];
//reading env and args
void* a117469117690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117839))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117839))[5];
//not do dummy comment
void* kont117566 = (decode_clo(env117839))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117839))[3];
//not do dummy comment
void* car = (decode_clo(env117839))[2];
//not do dummy comment
void* cons = (decode_clo(env117839))[1];

//creating new closure instance
void** clo118514 = alloc_clo(lam117836_fptr, 5);

//setting env list
clo118514[1] = cons;
clo118514[2] = lst2;
clo118514[3] = kont117566;
clo118514[4] = reverse_u45helper;
clo118514[5] = a117469117690;
void* f117568117691 = encode_clo(clo118514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117568117691;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117838 = encode_clo(alloc_clo(lam117838_fptr, 0));

void* lam117840_fptr() // lam117840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117841 = arg_buffer[1];
//reading env and args
void* a117468117688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117841))[7];
//not do dummy comment
void* lst = (decode_clo(env117841))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117841))[5];
//not do dummy comment
void* kont117566 = (decode_clo(env117841))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117841))[3];
//not do dummy comment
void* car = (decode_clo(env117841))[2];
//not do dummy comment
void* cons = (decode_clo(env117841))[1];

//if-clause
bool if_guard118515 = is_true(a117468117688);
if(if_guard118515)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117566);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117566))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo118517 = alloc_clo(lam117838_fptr, 6);

//setting env list
clo118517[1] = cons;
clo118517[2] = car;
clo118517[3] = lst2;
clo118517[4] = kont117566;
clo118517[5] = reverse_u45helper;
clo118517[6] = lst;
void* f117569117689 = encode_clo(clo118517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117569117689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117840 = encode_clo(alloc_clo(lam117840_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117842 = arg_buffer[1];
//reading env and args
void* kont117566 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo118519 = alloc_clo(lam117840_fptr, 7);

//setting env list
clo118519[1] = cons;
clo118519[2] = car;
clo118519[3] = lst2;
clo118519[4] = kont117566;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo118519[5] = reverse_u45helper;
clo118519[6] = lst;
clo118519[7] = cdr;
void* f117570117687 = encode_clo(clo118519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117570117687;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam117843_fptr() // lam117843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117844 = arg_buffer[1];
//reading env and args
void* a117472117696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117844))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117844))[2];
//not do dummy comment
void* kont117571 = (decode_clo(env117844))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont117571;
arg_buffer[3] = lst;
arg_buffer[4] = a117472117696;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117843 = encode_clo(alloc_clo(lam117843_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117845 = arg_buffer[1];
//reading env and args
void* kont117571 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo118521 = alloc_clo(lam117843_fptr, 3);

//setting env list
clo118521[1] = kont117571;
clo118521[2] = reverse_u45helper;
clo118521[3] = lst;
void* f117572117695 = encode_clo(clo118521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117572117695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam117846_fptr() // lam117846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117847 = arg_buffer[1];
//reading env and args
void* x117475117701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117573 = (decode_clo(env117847))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117573);
arg_buffer[2] = x117475117701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117573))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117846 = encode_clo(alloc_clo(lam117846_fptr, 0));

void* lam117848_fptr() // lam117848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117849 = arg_buffer[1];
//reading env and args
void* a117480117710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117573 = (decode_clo(env117849))[4];
//not do dummy comment
void* a117476117703 = (decode_clo(env117849))[3];
//not do dummy comment
void* a117478117706 = (decode_clo(env117849))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env117849))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont117573;
arg_buffer[3] = a117476117703;
arg_buffer[4] = a117478117706;
arg_buffer[5] = a117480117710;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117848 = encode_clo(alloc_clo(lam117848_fptr, 0));

void* lam117850_fptr() // lam117850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117851 = arg_buffer[1];
//reading env and args
void* a117479117708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117573 = (decode_clo(env117851))[6];
//not do dummy comment
void* a117476117703 = (decode_clo(env117851))[5];
//not do dummy comment
void* a117478117706 = (decode_clo(env117851))[4];
//not do dummy comment
void* cons = (decode_clo(env117851))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env117851))[2];
//not do dummy comment
void* lst2 = (decode_clo(env117851))[1];

//creating new closure instance
void** clo118523 = alloc_clo(lam117848_fptr, 4);

//setting env list
clo118523[1] = take_u45helper;
clo118523[2] = a117478117706;
clo118523[3] = a117476117703;
clo118523[4] = kont117573;
void* f117575117709 = encode_clo(clo118523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f117575117709;
arg_buffer[3] = a117479117708;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117850 = encode_clo(alloc_clo(lam117850_fptr, 0));

void* lam117852_fptr() // lam117852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117853 = arg_buffer[1];
//reading env and args
void* a117478117706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117573 = (decode_clo(env117853))[7];
//not do dummy comment
void* a117476117703 = (decode_clo(env117853))[6];
//not do dummy comment
void* lst = (decode_clo(env117853))[5];
//not do dummy comment
void* car = (decode_clo(env117853))[4];
//not do dummy comment
void* cons = (decode_clo(env117853))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env117853))[2];
//not do dummy comment
void* lst2 = (decode_clo(env117853))[1];

//creating new closure instance
void** clo118525 = alloc_clo(lam117850_fptr, 6);

//setting env list
clo118525[1] = lst2;
clo118525[2] = take_u45helper;
clo118525[3] = cons;
clo118525[4] = a117478117706;
clo118525[5] = a117476117703;
clo118525[6] = kont117573;
void* f117576117707 = encode_clo(clo118525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117576117707;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117852 = encode_clo(alloc_clo(lam117852_fptr, 0));

void* lam117855_fptr() // lam117855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117856 = arg_buffer[1];
//reading env and args
void* a117476117703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117573 = (decode_clo(env117856))[8];
//not do dummy comment
void* lst = (decode_clo(env117856))[7];
//not do dummy comment
void* cons = (decode_clo(env117856))[6];
//not do dummy comment
void* _u45 = (decode_clo(env117856))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env117856))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117856))[3];
//not do dummy comment
void* n = (decode_clo(env117856))[2];
//not do dummy comment
void* car = (decode_clo(env117856))[1];
mpz_t* mpzvar118526 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118526, "1", 10);
void* a117477117704 = encode_mpz(mpzvar118526);

//creating new closure instance
void** clo118528 = alloc_clo(lam117852_fptr, 7);

//setting env list
clo118528[1] = lst2;
clo118528[2] = take_u45helper;
clo118528[3] = cons;
clo118528[4] = car;
clo118528[5] = lst;
clo118528[6] = a117476117703;
clo118528[7] = kont117573;
void* f117577117705 = encode_clo(clo118528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f117577117705;
arg_buffer[3] = n;
arg_buffer[4] = a117477117704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117855 = encode_clo(alloc_clo(lam117855_fptr, 0));

void* lam117857_fptr() // lam117857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117858 = arg_buffer[1];
//reading env and args
void* a117474117699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117858))[10];
//not do dummy comment
void* reverse = (decode_clo(env117858))[9];
//not do dummy comment
void* cons = (decode_clo(env117858))[8];
//not do dummy comment
void* _u45 = (decode_clo(env117858))[7];
//not do dummy comment
void* kont117573 = (decode_clo(env117858))[6];
//not do dummy comment
void* cdr = (decode_clo(env117858))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env117858))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117858))[3];
//not do dummy comment
void* n = (decode_clo(env117858))[2];
//not do dummy comment
void* car = (decode_clo(env117858))[1];

//if-clause
bool if_guard118529 = is_true(a117474117699);
if(if_guard118529)
{

//creating new closure instance
void** clo118531 = alloc_clo(lam117846_fptr, 1);

//setting env list
clo118531[1] = kont117573;
void* f117574117700 = encode_clo(clo118531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f117574117700;
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
void** clo118533 = alloc_clo(lam117855_fptr, 8);

//setting env list
clo118533[1] = car;
clo118533[2] = n;
clo118533[3] = lst2;
clo118533[4] = take_u45helper;
clo118533[5] = _u45;
clo118533[6] = cons;
clo118533[7] = lst;
clo118533[8] = kont117573;
void* f117578117702 = encode_clo(clo118533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117578117702;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117857 = encode_clo(alloc_clo(lam117857_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117860 = arg_buffer[1];
//reading env and args
void* kont117573 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar118534 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118534, "0", 10);
void* a117473117697 = encode_mpz(mpzvar118534);

//creating new closure instance
void** clo118536 = alloc_clo(lam117857_fptr, 10);

//setting env list
clo118536[1] = car;
clo118536[2] = n;
clo118536[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo118536[4] = take_u45helper;
clo118536[5] = cdr;
clo118536[6] = kont117573;
clo118536[7] = _u45;
clo118536[8] = cons;
clo118536[9] = reverse;
clo118536[10] = lst;
void* f117579117698 = encode_clo(clo118536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f117579117698;
arg_buffer[3] = n;
arg_buffer[4] = a117473117697;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam117861_fptr() // lam117861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117862 = arg_buffer[1];
//reading env and args
void* a117481117712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117862))[4];
//not do dummy comment
void* kont117580 = (decode_clo(env117862))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env117862))[2];
//not do dummy comment
void* n = (decode_clo(env117862))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont117580;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a117481117712;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117861 = encode_clo(alloc_clo(lam117861_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117863 = arg_buffer[1];
//reading env and args
void* kont117580 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo118538 = alloc_clo(lam117861_fptr, 4);

//setting env list
clo118538[1] = n;
clo118538[2] = take_u45helper;
clo118538[3] = kont117580;
clo118538[4] = lst;
void* f117581117711 = encode_clo(clo118538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117581117711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam117865_fptr() // lam117865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117866 = arg_buffer[1];
//reading env and args
void* a117486117720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117484117716 = (decode_clo(env117866))[3];
//not do dummy comment
void* _u43 = (decode_clo(env117866))[2];
//not do dummy comment
void* kont117582 = (decode_clo(env117866))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont117582;
arg_buffer[3] = a117484117716;
arg_buffer[4] = a117486117720;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117865 = encode_clo(alloc_clo(lam117865_fptr, 0));

void* lam117867_fptr() // lam117867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117868 = arg_buffer[1];
//reading env and args
void* a117485117718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env117868))[4];
//not do dummy comment
void* a117484117716 = (decode_clo(env117868))[3];
//not do dummy comment
void* _u43 = (decode_clo(env117868))[2];
//not do dummy comment
void* kont117582 = (decode_clo(env117868))[1];

//creating new closure instance
void** clo118540 = alloc_clo(lam117865_fptr, 3);

//setting env list
clo118540[1] = kont117582;
clo118540[2] = _u43;
clo118540[3] = a117484117716;
void* f117583117719 = encode_clo(clo118540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f117583117719;
arg_buffer[3] = a117485117718;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117867 = encode_clo(alloc_clo(lam117867_fptr, 0));

void* lam117870_fptr() // lam117870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117871 = arg_buffer[1];
//reading env and args
void* a117482117714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117871))[5];
//not do dummy comment
void* lst = (decode_clo(env117871))[4];
//not do dummy comment
void* length = (decode_clo(env117871))[3];
//not do dummy comment
void* _u43 = (decode_clo(env117871))[2];
//not do dummy comment
void* kont117582 = (decode_clo(env117871))[1];

//if-clause
bool if_guard118541 = is_true(a117482117714);
if(if_guard118541)
{
mpz_t* mpzvar118542 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118542, "0", 10);
void* x117483117715 = encode_mpz(mpzvar118542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117582);
arg_buffer[2] = x117483117715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117582))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar118543 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118543, "1", 10);
void* a117484117716 = encode_mpz(mpzvar118543);

//creating new closure instance
void** clo118545 = alloc_clo(lam117867_fptr, 4);

//setting env list
clo118545[1] = kont117582;
clo118545[2] = _u43;
clo118545[3] = a117484117716;
clo118545[4] = length;
void* f117584117717 = encode_clo(clo118545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117584117717;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117870 = encode_clo(alloc_clo(lam117870_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117872 = arg_buffer[1];
//reading env and args
void* kont117582 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo118547 = alloc_clo(lam117870_fptr, 5);

//setting env list
clo118547[1] = kont117582;
clo118547[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo118547[3] = length;
clo118547[4] = lst;
clo118547[5] = cdr;
void* f117585117713 = encode_clo(clo118547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117585117713;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam117873_fptr() // lam117873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117874 = arg_buffer[1];
//reading env and args
void* x117488117724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117586 = (decode_clo(env117874))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117586);
arg_buffer[2] = x117488117724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117586))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117873 = encode_clo(alloc_clo(lam117873_fptr, 0));

void* lam117875_fptr() // lam117875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117876 = arg_buffer[1];
//reading env and args
void* a117492117732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117490117728 = (decode_clo(env117876))[3];
//not do dummy comment
void* kont117586 = (decode_clo(env117876))[2];
//not do dummy comment
void* cons = (decode_clo(env117876))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont117586;
arg_buffer[3] = a117490117728;
arg_buffer[4] = a117492117732;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117875 = encode_clo(alloc_clo(lam117875_fptr, 0));

void* lam117877_fptr() // lam117877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117878 = arg_buffer[1];
//reading env and args
void* a117491117730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env117878))[5];
//not do dummy comment
void* kont117586 = (decode_clo(env117878))[4];
//not do dummy comment
void* cons = (decode_clo(env117878))[3];
//not do dummy comment
void* a117490117728 = (decode_clo(env117878))[2];
//not do dummy comment
void* proc = (decode_clo(env117878))[1];

//creating new closure instance
void** clo118549 = alloc_clo(lam117875_fptr, 3);

//setting env list
clo118549[1] = cons;
clo118549[2] = kont117586;
clo118549[3] = a117490117728;
void* f117588117731 = encode_clo(clo118549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f117588117731;
arg_buffer[3] = proc;
arg_buffer[4] = a117491117730;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117877 = encode_clo(alloc_clo(lam117877_fptr, 0));

void* lam117879_fptr() // lam117879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117880 = arg_buffer[1];
//reading env and args
void* a117490117728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117880))[6];
//not do dummy comment
void* lst = (decode_clo(env117880))[5];
//not do dummy comment
void* map = (decode_clo(env117880))[4];
//not do dummy comment
void* proc = (decode_clo(env117880))[3];
//not do dummy comment
void* kont117586 = (decode_clo(env117880))[2];
//not do dummy comment
void* cons = (decode_clo(env117880))[1];

//creating new closure instance
void** clo118551 = alloc_clo(lam117877_fptr, 5);

//setting env list
clo118551[1] = proc;
clo118551[2] = a117490117728;
clo118551[3] = cons;
clo118551[4] = kont117586;
clo118551[5] = map;
void* f117589117729 = encode_clo(clo118551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117589117729;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117879 = encode_clo(alloc_clo(lam117879_fptr, 0));

void* lam117881_fptr() // lam117881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117882 = arg_buffer[1];
//reading env and args
void* a117489117726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117882))[6];
//not do dummy comment
void* lst = (decode_clo(env117882))[5];
//not do dummy comment
void* map = (decode_clo(env117882))[4];
//not do dummy comment
void* proc = (decode_clo(env117882))[3];
//not do dummy comment
void* kont117586 = (decode_clo(env117882))[2];
//not do dummy comment
void* cons = (decode_clo(env117882))[1];

//creating new closure instance
void** clo118553 = alloc_clo(lam117879_fptr, 6);

//setting env list
clo118553[1] = cons;
clo118553[2] = kont117586;
clo118553[3] = proc;
clo118553[4] = map;
clo118553[5] = lst;
clo118553[6] = cdr;
void* f117590117727 = encode_clo(clo118553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f117590117727;
arg_buffer[3] = a117489117726;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117881 = encode_clo(alloc_clo(lam117881_fptr, 0));

void* lam117883_fptr() // lam117883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117884 = arg_buffer[1];
//reading env and args
void* a117487117722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117884))[8];
//not do dummy comment
void* map = (decode_clo(env117884))[7];
//not do dummy comment
void* proc = (decode_clo(env117884))[6];
//not do dummy comment
void* cons = (decode_clo(env117884))[5];
//not do dummy comment
void* list = (decode_clo(env117884))[4];
//not do dummy comment
void* cdr = (decode_clo(env117884))[3];
//not do dummy comment
void* kont117586 = (decode_clo(env117884))[2];
//not do dummy comment
void* car = (decode_clo(env117884))[1];

//if-clause
bool if_guard118554 = is_true(a117487117722);
if(if_guard118554)
{

//creating new closure instance
void** clo118556 = alloc_clo(lam117873_fptr, 1);

//setting env list
clo118556[1] = kont117586;
void* f117587117723 = encode_clo(clo118556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117587117723;
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
void** clo118558 = alloc_clo(lam117881_fptr, 6);

//setting env list
clo118558[1] = cons;
clo118558[2] = kont117586;
clo118558[3] = proc;
clo118558[4] = map;
clo118558[5] = lst;
clo118558[6] = cdr;
void* f117591117725 = encode_clo(clo118558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117591117725;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117883 = encode_clo(alloc_clo(lam117883_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117885 = arg_buffer[1];
//reading env and args
void* kont117586 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo118560 = alloc_clo(lam117883_fptr, 8);

//setting env list
clo118560[1] = car;
clo118560[2] = kont117586;
clo118560[3] = cdr;
clo118560[4] = list;
clo118560[5] = cons;
clo118560[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo118560[7] = map;
clo118560[8] = lst;
void* f117592117721 = encode_clo(clo118560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117592117721;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam117886_fptr() // lam117886 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117887 = arg_buffer[1];
//reading env and args
void* x117494117736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117593 = (decode_clo(env117887))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117593);
arg_buffer[2] = x117494117736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117593))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117886 = encode_clo(alloc_clo(lam117886_fptr, 0));

void* lam117888_fptr() // lam117888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117889 = arg_buffer[1];
//reading env and args
void* a117499117746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117593 = (decode_clo(env117889))[3];
//not do dummy comment
void* a117497117742 = (decode_clo(env117889))[2];
//not do dummy comment
void* cons = (decode_clo(env117889))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont117593;
arg_buffer[3] = a117497117742;
arg_buffer[4] = a117499117746;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117888 = encode_clo(alloc_clo(lam117888_fptr, 0));

void* lam117890_fptr() // lam117890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117891 = arg_buffer[1];
//reading env and args
void* a117498117744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117593 = (decode_clo(env117891))[5];
//not do dummy comment
void* op = (decode_clo(env117891))[4];
//not do dummy comment
void* a117497117742 = (decode_clo(env117891))[3];
//not do dummy comment
void* filter = (decode_clo(env117891))[2];
//not do dummy comment
void* cons = (decode_clo(env117891))[1];

//creating new closure instance
void** clo118562 = alloc_clo(lam117888_fptr, 3);

//setting env list
clo118562[1] = cons;
clo118562[2] = a117497117742;
clo118562[3] = kont117593;
void* f117595117745 = encode_clo(clo118562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f117595117745;
arg_buffer[3] = op;
arg_buffer[4] = a117498117744;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117890 = encode_clo(alloc_clo(lam117890_fptr, 0));

void* lam117892_fptr() // lam117892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117893 = arg_buffer[1];
//reading env and args
void* a117497117742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117893))[6];
//not do dummy comment
void* op = (decode_clo(env117893))[5];
//not do dummy comment
void* filter = (decode_clo(env117893))[4];
//not do dummy comment
void* cons = (decode_clo(env117893))[3];
//not do dummy comment
void* lst = (decode_clo(env117893))[2];
//not do dummy comment
void* kont117593 = (decode_clo(env117893))[1];

//creating new closure instance
void** clo118564 = alloc_clo(lam117890_fptr, 5);

//setting env list
clo118564[1] = cons;
clo118564[2] = filter;
clo118564[3] = a117497117742;
clo118564[4] = op;
clo118564[5] = kont117593;
void* f117596117743 = encode_clo(clo118564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117596117743;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117892 = encode_clo(alloc_clo(lam117892_fptr, 0));

void* lam117894_fptr() // lam117894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117895 = arg_buffer[1];
//reading env and args
void* a117500117748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117593 = (decode_clo(env117895))[3];
//not do dummy comment
void* op = (decode_clo(env117895))[2];
//not do dummy comment
void* filter = (decode_clo(env117895))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont117593;
arg_buffer[3] = op;
arg_buffer[4] = a117500117748;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117894 = encode_clo(alloc_clo(lam117894_fptr, 0));

void* lam117896_fptr() // lam117896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117897 = arg_buffer[1];
//reading env and args
void* a117496117740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117897))[7];
//not do dummy comment
void* op = (decode_clo(env117897))[6];
//not do dummy comment
void* cons = (decode_clo(env117897))[5];
//not do dummy comment
void* lst = (decode_clo(env117897))[4];
//not do dummy comment
void* kont117593 = (decode_clo(env117897))[3];
//not do dummy comment
void* filter = (decode_clo(env117897))[2];
//not do dummy comment
void* car = (decode_clo(env117897))[1];

//if-clause
bool if_guard118565 = is_true(a117496117740);
if(if_guard118565)
{

//creating new closure instance
void** clo118567 = alloc_clo(lam117892_fptr, 6);

//setting env list
clo118567[1] = kont117593;
clo118567[2] = lst;
clo118567[3] = cons;
clo118567[4] = filter;
clo118567[5] = op;
clo118567[6] = cdr;
void* f117597117741 = encode_clo(clo118567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117597117741;
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
void** clo118569 = alloc_clo(lam117894_fptr, 3);

//setting env list
clo118569[1] = filter;
clo118569[2] = op;
clo118569[3] = kont117593;
void* f117598117747 = encode_clo(clo118569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117598117747;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117896 = encode_clo(alloc_clo(lam117896_fptr, 0));

void* lam117898_fptr() // lam117898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117899 = arg_buffer[1];
//reading env and args
void* a117495117738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117899))[7];
//not do dummy comment
void* op = (decode_clo(env117899))[6];
//not do dummy comment
void* cons = (decode_clo(env117899))[5];
//not do dummy comment
void* lst = (decode_clo(env117899))[4];
//not do dummy comment
void* kont117593 = (decode_clo(env117899))[3];
//not do dummy comment
void* filter = (decode_clo(env117899))[2];
//not do dummy comment
void* car = (decode_clo(env117899))[1];

//creating new closure instance
void** clo118571 = alloc_clo(lam117896_fptr, 7);

//setting env list
clo118571[1] = car;
clo118571[2] = filter;
clo118571[3] = kont117593;
clo118571[4] = lst;
clo118571[5] = cons;
clo118571[6] = op;
clo118571[7] = cdr;
void* f117599117739 = encode_clo(clo118571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f117599117739;
arg_buffer[3] = a117495117738;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117898 = encode_clo(alloc_clo(lam117898_fptr, 0));

void* lam117900_fptr() // lam117900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117901 = arg_buffer[1];
//reading env and args
void* a117493117734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env117901))[8];
//not do dummy comment
void* cons = (decode_clo(env117901))[7];
//not do dummy comment
void* list = (decode_clo(env117901))[6];
//not do dummy comment
void* cdr = (decode_clo(env117901))[5];
//not do dummy comment
void* lst = (decode_clo(env117901))[4];
//not do dummy comment
void* kont117593 = (decode_clo(env117901))[3];
//not do dummy comment
void* filter = (decode_clo(env117901))[2];
//not do dummy comment
void* car = (decode_clo(env117901))[1];

//if-clause
bool if_guard118572 = is_true(a117493117734);
if(if_guard118572)
{

//creating new closure instance
void** clo118574 = alloc_clo(lam117886_fptr, 1);

//setting env list
clo118574[1] = kont117593;
void* f117594117735 = encode_clo(clo118574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f117594117735;
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
void** clo118576 = alloc_clo(lam117898_fptr, 7);

//setting env list
clo118576[1] = car;
clo118576[2] = filter;
clo118576[3] = kont117593;
clo118576[4] = lst;
clo118576[5] = cons;
clo118576[6] = op;
clo118576[7] = cdr;
void* f117600117737 = encode_clo(clo118576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117600117737;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117900 = encode_clo(alloc_clo(lam117900_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117902 = arg_buffer[1];
//reading env and args
void* kont117593 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo118578 = alloc_clo(lam117900_fptr, 8);

//setting env list
clo118578[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo118578[2] = filter;
clo118578[3] = kont117593;
clo118578[4] = lst;
clo118578[5] = cdr;
clo118578[6] = list;
clo118578[7] = cons;
clo118578[8] = op;
void* f117601117733 = encode_clo(clo118578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117601117733;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam117903_fptr() // lam117903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117904 = arg_buffer[1];
//reading env and args
void* a117505117756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117602 = (decode_clo(env117904))[3];
//not do dummy comment
void* a117503117753 = (decode_clo(env117904))[2];
//not do dummy comment
void* drop = (decode_clo(env117904))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont117602;
arg_buffer[3] = a117503117753;
arg_buffer[4] = a117505117756;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117903 = encode_clo(alloc_clo(lam117903_fptr, 0));

void* lam117906_fptr() // lam117906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117907 = arg_buffer[1];
//reading env and args
void* a117503117753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env117907))[4];
//not do dummy comment
void* _u45 = (decode_clo(env117907))[3];
//not do dummy comment
void* kont117602 = (decode_clo(env117907))[2];
//not do dummy comment
void* n = (decode_clo(env117907))[1];
mpz_t* mpzvar118579 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118579, "1", 10);
void* a117504117754 = encode_mpz(mpzvar118579);

//creating new closure instance
void** clo118581 = alloc_clo(lam117903_fptr, 3);

//setting env list
clo118581[1] = drop;
clo118581[2] = a117503117753;
clo118581[3] = kont117602;
void* f117603117755 = encode_clo(clo118581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f117603117755;
arg_buffer[3] = n;
arg_buffer[4] = a117504117754;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117906 = encode_clo(alloc_clo(lam117906_fptr, 0));

void* lam117908_fptr() // lam117908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117909 = arg_buffer[1];
//reading env and args
void* a117502117751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117909))[6];
//not do dummy comment
void* _u45 = (decode_clo(env117909))[5];
//not do dummy comment
void* lst = (decode_clo(env117909))[4];
//not do dummy comment
void* drop = (decode_clo(env117909))[3];
//not do dummy comment
void* kont117602 = (decode_clo(env117909))[2];
//not do dummy comment
void* n = (decode_clo(env117909))[1];

//if-clause
bool if_guard118582 = is_true(a117502117751);
if(if_guard118582)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117602);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117602))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo118584 = alloc_clo(lam117906_fptr, 4);

//setting env list
clo118584[1] = n;
clo118584[2] = kont117602;
clo118584[3] = _u45;
clo118584[4] = drop;
void* f117604117752 = encode_clo(clo118584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117604117752;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117908 = encode_clo(alloc_clo(lam117908_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117911 = arg_buffer[1];
//reading env and args
void* kont117602 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar118585 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118585, "0", 10);
void* a117501117749 = encode_mpz(mpzvar118585);

//creating new closure instance
void** clo118587 = alloc_clo(lam117908_fptr, 6);

//setting env list
clo118587[1] = n;
clo118587[2] = kont117602;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo118587[3] = drop;
clo118587[4] = lst;
clo118587[5] = _u45;
clo118587[6] = cdr;
void* f117605117750 = encode_clo(clo118587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f117605117750;
arg_buffer[3] = n;
arg_buffer[4] = a117501117749;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam117912_fptr() // lam117912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117913 = arg_buffer[1];
//reading env and args
void* a117509117764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117606 = (decode_clo(env117913))[3];
//not do dummy comment
void* proc = (decode_clo(env117913))[2];
//not do dummy comment
void* a117507117760 = (decode_clo(env117913))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont117606;
arg_buffer[3] = a117507117760;
arg_buffer[4] = a117509117764;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117912 = encode_clo(alloc_clo(lam117912_fptr, 0));

void* lam117914_fptr() // lam117914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117915 = arg_buffer[1];
//reading env and args
void* a117508117762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117606 = (decode_clo(env117915))[5];
//not do dummy comment
void* foldr = (decode_clo(env117915))[4];
//not do dummy comment
void* proc = (decode_clo(env117915))[3];
//not do dummy comment
void* a117507117760 = (decode_clo(env117915))[2];
//not do dummy comment
void* acc = (decode_clo(env117915))[1];

//creating new closure instance
void** clo118589 = alloc_clo(lam117912_fptr, 3);

//setting env list
clo118589[1] = a117507117760;
clo118589[2] = proc;
clo118589[3] = kont117606;
void* f117607117763 = encode_clo(clo118589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f117607117763;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a117508117762;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117914 = encode_clo(alloc_clo(lam117914_fptr, 0));

void* lam117916_fptr() // lam117916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117917 = arg_buffer[1];
//reading env and args
void* a117507117760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117917))[6];
//not do dummy comment
void* kont117606 = (decode_clo(env117917))[5];
//not do dummy comment
void* foldr = (decode_clo(env117917))[4];
//not do dummy comment
void* lst = (decode_clo(env117917))[3];
//not do dummy comment
void* proc = (decode_clo(env117917))[2];
//not do dummy comment
void* acc = (decode_clo(env117917))[1];

//creating new closure instance
void** clo118591 = alloc_clo(lam117914_fptr, 5);

//setting env list
clo118591[1] = acc;
clo118591[2] = a117507117760;
clo118591[3] = proc;
clo118591[4] = foldr;
clo118591[5] = kont117606;
void* f117608117761 = encode_clo(clo118591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117608117761;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117916 = encode_clo(alloc_clo(lam117916_fptr, 0));

void* lam117918_fptr() // lam117918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117919 = arg_buffer[1];
//reading env and args
void* a117506117758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117919))[7];
//not do dummy comment
void* kont117606 = (decode_clo(env117919))[6];
//not do dummy comment
void* car = (decode_clo(env117919))[5];
//not do dummy comment
void* foldr = (decode_clo(env117919))[4];
//not do dummy comment
void* lst = (decode_clo(env117919))[3];
//not do dummy comment
void* proc = (decode_clo(env117919))[2];
//not do dummy comment
void* acc = (decode_clo(env117919))[1];

//if-clause
bool if_guard118592 = is_true(a117506117758);
if(if_guard118592)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117606);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117606))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo118594 = alloc_clo(lam117916_fptr, 6);

//setting env list
clo118594[1] = acc;
clo118594[2] = proc;
clo118594[3] = lst;
clo118594[4] = foldr;
clo118594[5] = kont117606;
clo118594[6] = cdr;
void* f117609117759 = encode_clo(clo118594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117609117759;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117918 = encode_clo(alloc_clo(lam117918_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117920 = arg_buffer[1];
//reading env and args
void* kont117606 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo118596 = alloc_clo(lam117918_fptr, 7);

//setting env list
clo118596[1] = acc;
clo118596[2] = proc;
clo118596[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo118596[4] = foldr;
clo118596[5] = car;
clo118596[6] = kont117606;
clo118596[7] = cdr;
void* f117610117757 = encode_clo(clo118596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117610117757;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam117921_fptr() // lam117921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117922 = arg_buffer[1];
//reading env and args
void* a117513117772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117511117768 = (decode_clo(env117922))[3];
//not do dummy comment
void* kont117611 = (decode_clo(env117922))[2];
//not do dummy comment
void* cons = (decode_clo(env117922))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont117611;
arg_buffer[3] = a117511117768;
arg_buffer[4] = a117513117772;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117921 = encode_clo(alloc_clo(lam117921_fptr, 0));

void* lam117923_fptr() // lam117923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117924 = arg_buffer[1];
//reading env and args
void* a117512117770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a117511117768 = (decode_clo(env117924))[5];
//not do dummy comment
void* kont117611 = (decode_clo(env117924))[4];
//not do dummy comment
void* append = (decode_clo(env117924))[3];
//not do dummy comment
void* lst2 = (decode_clo(env117924))[2];
//not do dummy comment
void* cons = (decode_clo(env117924))[1];

//creating new closure instance
void** clo118598 = alloc_clo(lam117921_fptr, 3);

//setting env list
clo118598[1] = cons;
clo118598[2] = kont117611;
clo118598[3] = a117511117768;
void* f117612117771 = encode_clo(clo118598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f117612117771;
arg_buffer[3] = a117512117770;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117923 = encode_clo(alloc_clo(lam117923_fptr, 0));

void* lam117925_fptr() // lam117925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117926 = arg_buffer[1];
//reading env and args
void* a117511117768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117926))[6];
//not do dummy comment
void* kont117611 = (decode_clo(env117926))[5];
//not do dummy comment
void* append = (decode_clo(env117926))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117926))[3];
//not do dummy comment
void* lst1 = (decode_clo(env117926))[2];
//not do dummy comment
void* cons = (decode_clo(env117926))[1];

//creating new closure instance
void** clo118600 = alloc_clo(lam117923_fptr, 5);

//setting env list
clo118600[1] = cons;
clo118600[2] = lst2;
clo118600[3] = append;
clo118600[4] = kont117611;
clo118600[5] = a117511117768;
void* f117613117769 = encode_clo(clo118600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f117613117769;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117925 = encode_clo(alloc_clo(lam117925_fptr, 0));

void* lam117927_fptr() // lam117927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117928 = arg_buffer[1];
//reading env and args
void* a117510117766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117928))[7];
//not do dummy comment
void* kont117611 = (decode_clo(env117928))[6];
//not do dummy comment
void* append = (decode_clo(env117928))[5];
//not do dummy comment
void* lst2 = (decode_clo(env117928))[4];
//not do dummy comment
void* cons = (decode_clo(env117928))[3];
//not do dummy comment
void* lst1 = (decode_clo(env117928))[2];
//not do dummy comment
void* car = (decode_clo(env117928))[1];

//if-clause
bool if_guard118601 = is_true(a117510117766);
if(if_guard118601)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117611);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117611))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo118603 = alloc_clo(lam117925_fptr, 6);

//setting env list
clo118603[1] = cons;
clo118603[2] = lst1;
clo118603[3] = lst2;
clo118603[4] = append;
clo118603[5] = kont117611;
clo118603[6] = cdr;
void* f117614117767 = encode_clo(clo118603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f117614117767;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117927 = encode_clo(alloc_clo(lam117927_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117929 = arg_buffer[1];
//reading env and args
void* kont117611 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo118605 = alloc_clo(lam117927_fptr, 7);

//setting env list
clo118605[1] = car;
clo118605[2] = lst1;
clo118605[3] = cons;
clo118605[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo118605[5] = append;
clo118605[6] = kont117611;
clo118605[7] = cdr;
void* f117615117765 = encode_clo(clo118605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f117615117765;
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
void* _117930 = arg_buffer[1];
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

void* kont117616117773 = prim_car(lst);
void* lst117774 = prim_cdr(lst);
void* x117514117775 = apply_prim_hash(lst117774);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117616117773);
arg_buffer[2] = x117514117775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117616117773))[0]);
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
void* _117931 = arg_buffer[1];
//reading env and args
void* kont117618 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x117515117776 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117618);
arg_buffer[2] = x117515117776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117618))[0]);
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
void* _117932 = arg_buffer[1];
//reading env and args
void* kont117619 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x117516117777 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117619);
arg_buffer[2] = x117516117777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117619))[0]);
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
void* _117933 = arg_buffer[1];
//reading env and args
void* kont117620 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x117517117778 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117620);
arg_buffer[2] = x117517117778;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117620))[0]);
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
void* _117934 = arg_buffer[1];
//reading env and args
void* kont117621 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x117518117779 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117621);
arg_buffer[2] = x117518117779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117621))[0]);
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
void* _117940 = arg_buffer[1];
//reading env and args
void* kont117622 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar118606 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118606, "100", 10);
void* a117519117780 = encode_mpz(mpzvar118606);
mpz_t* mpzvar118607 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118607, "100", 10);
void* a117520117781 = encode_mpz(mpzvar118607);
mpz_t* mpzvar118608 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118608, "100", 10);
void* a117521117782 = encode_mpz(mpzvar118608);
mpz_t* mpzvar118609 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118609, "100", 10);
void* a117522117783 = encode_mpz(mpzvar118609);
mpz_t* mpzvar118610 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar118610, "100", 10);
void* a117523117784 = encode_mpz(mpzvar118610);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = kont117622;
arg_buffer[3] = a117519117780;
arg_buffer[4] = a117520117781;
arg_buffer[5] = a117521117782;
arg_buffer[6] = a117522117783;
arg_buffer[7] = a117523117784;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam117941_fptr() // lam117941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117942 = arg_buffer[1];
//reading env and args
void* x117524117786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont117623 = (decode_clo(env117942))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont117623);
arg_buffer[2] = x117524117786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont117623))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117941 = encode_clo(alloc_clo(lam117941_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117943 = arg_buffer[1];
//reading env and args
void* kont117623 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo118612 = alloc_clo(lam117941_fptr, 1);

//setting env list
clo118612[1] = kont117623;
void* f117624117785 = encode_clo(clo118612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f117624117785;
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

