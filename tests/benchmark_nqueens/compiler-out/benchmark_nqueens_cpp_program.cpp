#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
int int8876;
int int8875;
int int8877;



// declaring functions at the top
void _u43_fptr(); // +
void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr(); // -
void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u61_fptr(); // =
void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void null_u63_fptr(); // null?
void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void cons_fptr(); // cons
void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr(); // car
void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr(); // cdr
void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8819_fptr(); // lam8819
void* lam8819 = encode_clo(alloc_clo(lam8819_fptr, 0));

void foldr_fptr(); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8822_fptr(); // lam8822
void* lam8822 = encode_clo(alloc_clo(lam8822_fptr, 0));

void append1_fptr(); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8825_fptr(); // lam8825
void* lam8825 = encode_clo(alloc_clo(lam8825_fptr, 0));

void lam8827_fptr(); // lam8827
void* lam8827 = encode_clo(alloc_clo(lam8827_fptr, 0));

void lam8829_fptr(); // lam8829
void* lam8829 = encode_clo(alloc_clo(lam8829_fptr, 0));

void lam8831_fptr(); // lam8831
void* lam8831 = encode_clo(alloc_clo(lam8831_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8834_fptr(); // lam8834
void* lam8834 = encode_clo(alloc_clo(lam8834_fptr, 0));

void lam8836_fptr(); // lam8836
void* lam8836 = encode_clo(alloc_clo(lam8836_fptr, 0));

void ok_u63_fptr(); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8839_fptr(); // lam8839
void* lam8839 = encode_clo(alloc_clo(lam8839_fptr, 0));

void lam8841_fptr(); // lam8841
void* lam8841 = encode_clo(alloc_clo(lam8841_fptr, 0));

void lam8843_fptr(); // lam8843
void* lam8843 = encode_clo(alloc_clo(lam8843_fptr, 0));

void lam8845_fptr(); // lam8845
void* lam8845 = encode_clo(alloc_clo(lam8845_fptr, 0));

void lam8847_fptr(); // lam8847
void* lam8847 = encode_clo(alloc_clo(lam8847_fptr, 0));

void lam8849_fptr(); // lam8849
void* lam8849 = encode_clo(alloc_clo(lam8849_fptr, 0));

void lam8851_fptr(); // lam8851
void* lam8851 = encode_clo(alloc_clo(lam8851_fptr, 0));

void lam8853_fptr(); // lam8853
void* lam8853 = encode_clo(alloc_clo(lam8853_fptr, 0));

void q_u45helper_fptr(); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8857_fptr(); // lam8857
void* lam8857 = encode_clo(alloc_clo(lam8857_fptr, 0));

void lam8859_fptr(); // lam8859
void* lam8859 = encode_clo(alloc_clo(lam8859_fptr, 0));

void lam8861_fptr(); // lam8861
void* lam8861 = encode_clo(alloc_clo(lam8861_fptr, 0));

void lam8863_fptr(); // lam8863
void* lam8863 = encode_clo(alloc_clo(lam8863_fptr, 0));

void lam8865_fptr(); // lam8865
void* lam8865 = encode_clo(alloc_clo(lam8865_fptr, 0));

void lam8867_fptr(); // lam8867
void* lam8867 = encode_clo(alloc_clo(lam8867_fptr, 0));

void nqueens_fptr(); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));




// pre-decoding global symbols
auto decoded_ok_u63 = reinterpret_cast<void (*)()>((decode_clo(ok_u63))[0]);
auto decoded__u45 = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
auto decoded__u61 = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
auto decoded_q_u45helper = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
auto decoded_brouhaha_main = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
auto decoded_append = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
auto decoded_iota1 = reinterpret_cast<void (*)()>((decode_clo(iota1))[0]);
auto decoded_cdr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
auto decoded_list = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
auto decoded_cons = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
auto decoded_car = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
auto decoded_append1 = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
auto decoded_nqueens = reinterpret_cast<void (*)()>((decode_clo(nqueens))[0]);
auto decoded__u43 = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
auto decoded_null_u63 = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
auto decoded_foldr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);


void _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8880 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8878 = prim_car(lst);
void* const lst8881 = prim_cdr(lst);
void* const x8879 = apply_prim__u43(lst8881);
arg_buffer[1] = kont8878;
arg_buffer[2] = x8879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8878 = arg_buffer[2];
void* const x8879 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8878;
arg_buffer[2] = x8879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8884 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8882 = prim_car(lst);
void* const lst8885 = prim_cdr(lst);
void* const x8883 = apply_prim__u45(lst8885);
arg_buffer[1] = kont8882;
arg_buffer[2] = x8883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8882))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8882 = arg_buffer[2];
void* const x8883 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8882;
arg_buffer[2] = x8883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8882))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8888 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8886 = prim_car(lst);
void* const lst8889 = prim_cdr(lst);
void* const x8887 = apply_prim__u61(lst8889);
arg_buffer[1] = kont8886;
arg_buffer[2] = x8887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8886))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8886 = arg_buffer[2];
void* const x8887 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8886;
arg_buffer[2] = x8887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8886))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8892 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8890 = prim_car(lst);
void* const lst8893 = prim_cdr(lst);
void* const x8891 = apply_prim_null_u63(lst8893);
arg_buffer[1] = kont8890;
arg_buffer[2] = x8891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8890 = arg_buffer[2];
void* const x8891 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8890;
arg_buffer[2] = x8891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8896 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8894 = prim_car(lst);
void* const lst8897 = prim_cdr(lst);
void* const x8895 = apply_prim_cons(lst8897);
arg_buffer[1] = kont8894;
arg_buffer[2] = x8895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8894))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8894 = arg_buffer[2];
void* const x8895 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8894;
arg_buffer[2] = x8895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8894))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8900 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8898 = prim_car(lst);
void* const lst8901 = prim_cdr(lst);
void* const x8899 = apply_prim_car(lst8901);
arg_buffer[1] = kont8898;
arg_buffer[2] = x8899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8898))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8898 = arg_buffer[2];
void* const x8899 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8898;
arg_buffer[2] = x8899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8898))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8904 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8902 = prim_car(lst);
void* const lst8905 = prim_cdr(lst);
void* const x8903 = apply_prim_cdr(lst8905);
arg_buffer[1] = kont8902;
arg_buffer[2] = x8903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8902))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8902 = arg_buffer[2];
void* const x8903 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8902;
arg_buffer[2] = x8903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8902))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void list_fptr() // list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8818 = arg_buffer[1];
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

void* kont8785 = apply_prim_car_1(x);
void* x8816 = apply_prim_cdr_1(x);

//clo-app
arg_buffer[1] = kont8785;
arg_buffer[2] = x8816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8785))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8819_fptr() // lam8819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8820 = arg_buffer[1];
//reading env and args
void* const id_8718 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8820);
void* const kont8786 = decode_clo_array[3];
void* const fun = decode_clo_array[2];
void* const id_8716 = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8786;
arg_buffer[3] = id_8716;
arg_buffer[4] = id_8718;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8821 = arg_buffer[1];
//reading env and args
void* const kont8786 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8715 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard8906 = is_true(id_8715);
if(if_guard8906)
{

//clo-app
arg_buffer[1] = kont8786;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8786))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8716 = apply_prim_car_1(lst);
void* id_8717 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo8907 = alloc_clo(lam8819_fptr, 3);

//setting env list
clo8907[1] = id_8716;
clo8907[2] = fun;
clo8907[3] = kont8786;
void* f8787 = encode_clo(clo8907);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8787;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = id_8717;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldr();
}

}

void lam8822_fptr() // lam8822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8823 = arg_buffer[1];
//reading env and args
void* const id_8722 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8823);
void* const id_8720 = decode_clo_array[2];
void* const kont8788 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8720, id_8722);
arg_buffer[1] = kont8788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8788))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8824 = arg_buffer[1];
//reading env and args
void* const kont8788 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8719 = apply_prim_null_u63_1(lhs);

//if-clause
bool if_guard8908 = is_true(id_8719);
if(if_guard8908)
{

//clo-app
arg_buffer[1] = kont8788;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8788))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8720 = apply_prim_car_1(lhs);
void* id_8721 = apply_prim_cdr_1(lhs);

//creating new closure instance
void** clo8909 = alloc_clo(lam8822_fptr, 2);

//setting env list
clo8909[1] = kont8788;
clo8909[2] = id_8720;
void* f8789 = encode_clo(clo8909);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8789;
arg_buffer[3] = id_8721;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

}

void lam8825_fptr() // lam8825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8826 = arg_buffer[1];
//reading env and args
void* const id_8725 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8826);
void* const id_8723 = decode_clo_array[2];
void* const kont8790 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8790;
arg_buffer[3] = append1;
arg_buffer[4] = id_8723;
arg_buffer[5] = id_8725;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldr();
}

void lam8827_fptr() // lam8827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8828 = arg_buffer[1];
//reading env and args
void* const id_8724 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8828);
void* const id_8723 = decode_clo_array[3];
void* const kont8790 = decode_clo_array[2];
void* const x = decode_clo_array[1];

//creating new closure instance
void** clo8910 = alloc_clo(lam8825_fptr, 2);

//setting env list
clo8910[1] = kont8790;
clo8910[2] = id_8723;
void* f8791 = encode_clo(clo8910);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8791;
arg_buffer[3] = id_8724;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

void lam8829_fptr() // lam8829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8830 = arg_buffer[1];
//reading env and args
void* const id_8723 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8830);
void* const kont8790 = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const xs = decode_clo_array[1];

//creating new closure instance
void** clo8911 = alloc_clo(lam8827_fptr, 3);

//setting env list
clo8911[1] = x;
clo8911[2] = kont8790;
clo8911[3] = id_8723;
void* f8792 = encode_clo(clo8911);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8792;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_list();
}

void lam8831_fptr() // lam8831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8832 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8832);
void* const kont8790 = decode_clo_array[2];
void* const xs = decode_clo_array[1];

//creating new closure instance
void** clo8912 = alloc_clo(lam8829_fptr, 3);

//setting env list
clo8912[1] = xs;
clo8912[2] = x;
clo8912[3] = kont8790;
void* f8793 = encode_clo(clo8912);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8793;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8833 = arg_buffer[1];
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

void* kont8790 = apply_prim_car_1(vargs);
void* vargs8817 = apply_prim_cdr_1(vargs);
void* xs = apply_prim_car_1(vargs8817);
void* vargs8714 = apply_prim_cdr_1(vargs8817);

//creating new closure instance
void** clo8913 = alloc_clo(lam8831_fptr, 2);

//setting env list
clo8913[1] = xs;
clo8913[2] = kont8790;
void* f8794 = encode_clo(clo8913);



//clo-app
arg_buffer[1] = f8794;
arg_buffer[2] = vargs8714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8794))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8834_fptr() // lam8834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8835 = arg_buffer[1];
//reading env and args
void* const id_8739 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8835);
void* const dist = decode_clo_array[4];
void* const placed = decode_clo_array[3];
void* const kont8795 = decode_clo_array[2];
void* const row = decode_clo_array[1];

//if-clause
bool if_guard8914 = is_true(id_8739);
if(if_guard8914)
{
void* const id_8740 = reinterpret_cast<void*>(encode_int(int8875));
void* id_8741 = apply_prim__u43_2(dist, id_8740);
void* id_8742 = apply_prim_cdr_1(placed);

//clo-app
arg_buffer[1] = ok_u63;
arg_buffer[2] = kont8795;
arg_buffer[3] = row;
arg_buffer[4] = id_8741;
arg_buffer[5] = id_8742;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_ok_u63();
}
else
{
void* xy8743 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8795;
arg_buffer[2] = xy8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8836_fptr() // lam8836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8837 = arg_buffer[1];
//reading env and args
void* const id_8733 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8837);
void* const dist = decode_clo_array[4];
void* const placed = decode_clo_array[3];
void* const kont8795 = decode_clo_array[2];
void* const row = decode_clo_array[1];

//if-clause
bool if_guard8915 = is_true(id_8733);
if(if_guard8915)
{
void* id_8734 = apply_prim_car_1(placed);
void* id_8735 = apply_prim__u45_2(row, dist);
void* id_8736 = apply_prim__u61_2(id_8734, id_8735);

//creating new closure instance
void** clo8916 = alloc_clo(lam8834_fptr, 4);

//setting env list
clo8916[1] = row;
clo8916[2] = kont8795;
clo8916[3] = placed;
clo8916[4] = dist;
void* f8796 = encode_clo(clo8916);



//if-clause
bool if_guard8917 = is_true(id_8736);
if(if_guard8917)
{
void* xy8737 = encode_bool(false);

//clo-app
arg_buffer[1] = f8796;
arg_buffer[2] = xy8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8796))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* xy8738 = encode_bool(true);

//clo-app
arg_buffer[1] = f8796;
arg_buffer[2] = xy8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8796))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}
else
{
void* xy8744 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8795;
arg_buffer[2] = xy8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void ok_u63_fptr() // ok? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8838 = arg_buffer[1];
//reading env and args
void* const kont8795 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8726 = apply_prim_null_u63_1(placed);

//if-clause
bool if_guard8918 = is_true(id_8726);
if(if_guard8918)
{
void* xy8727 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8795;
arg_buffer[2] = xy8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8728 = apply_prim_car_1(placed);
void* id_8729 = apply_prim__u43_2(row, dist);
void* id_8730 = apply_prim__u61_2(id_8728, id_8729);

//creating new closure instance
void** clo8919 = alloc_clo(lam8836_fptr, 4);

//setting env list
clo8919[1] = row;
clo8919[2] = kont8795;
clo8919[3] = placed;
clo8919[4] = dist;
void* f8797 = encode_clo(clo8919);



//if-clause
bool if_guard8920 = is_true(id_8730);
if(if_guard8920)
{
void* xy8731 = encode_bool(false);

//clo-app
arg_buffer[1] = f8797;
arg_buffer[2] = xy8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8797))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* xy8732 = encode_bool(true);

//clo-app
arg_buffer[1] = f8797;
arg_buffer[2] = xy8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8797))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

}

void lam8839_fptr() // lam8839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8840 = arg_buffer[1];
//reading env and args
void* const id_8767 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8840);
void* const stack = decode_clo_array[2];
void* const f8799 = decode_clo_array[1];
void* id_8768 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8767, id_8768);
arg_buffer[1] = f8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8799))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8841_fptr() // lam8841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8842 = arg_buffer[1];
//reading env and args
void* const id_8764 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8842);
void* const stack = decode_clo_array[5];
void* const z = decode_clo_array[4];
void* const f8799 = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const id_8763 = decode_clo_array[1];
void* id_8765 = apply_prim_car_1(x);
void* id_8766 = apply_prim_cons_2(id_8765, z);

//creating new closure instance
void** clo8921 = alloc_clo(lam8839_fptr, 2);

//setting env list
clo8921[1] = f8799;
clo8921[2] = stack;
void* f8800 = encode_clo(clo8921);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8800;
arg_buffer[3] = id_8763;
arg_buffer[4] = id_8764;
arg_buffer[5] = id_8766;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_list();
}

void lam8843_fptr() // lam8843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8844 = arg_buffer[1];
//reading env and args
void* const id_8763 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8844);
void* const stack = decode_clo_array[4];
void* const z = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const f8799 = decode_clo_array[1];

//creating new closure instance
void** clo8922 = alloc_clo(lam8841_fptr, 5);

//setting env list
clo8922[1] = id_8763;
clo8922[2] = x;
clo8922[3] = f8799;
clo8922[4] = z;
clo8922[5] = stack;
void* f8801 = encode_clo(clo8922);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam8845_fptr() // lam8845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8846 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8846);
void* const count = decode_clo_array[3];
void* const id_8758 = decode_clo_array[2];
void* const kont8798 = decode_clo_array[1];
void* id_8771 = apply_prim_cons_2(id_8758, id_8770);

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8798;
arg_buffer[3] = id_8771;
arg_buffer[4] = count;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}

void lam8847_fptr() // lam8847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8848 = arg_buffer[1];
//reading env and args
void* const id_8761 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8848);
void* const stack = decode_clo_array[7];
void* const count = decode_clo_array[6];
void* const id_8758 = decode_clo_array[5];
void* const z = decode_clo_array[4];
void* const y = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const kont8798 = decode_clo_array[1];

//creating new closure instance
void** clo8923 = alloc_clo(lam8845_fptr, 3);

//setting env list
clo8923[1] = kont8798;
clo8923[2] = id_8758;
clo8923[3] = count;
void* f8799 = encode_clo(clo8923);



//if-clause
bool if_guard8924 = is_true(id_8761);
if(if_guard8924)
{
void* id_8762 = apply_prim_cdr_1(x);

//creating new closure instance
void** clo8925 = alloc_clo(lam8843_fptr, 4);

//setting env list
clo8925[1] = f8799;
clo8925[2] = x;
clo8925[3] = z;
clo8925[4] = stack;
void* f8802 = encode_clo(clo8925);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f8802;
arg_buffer[3] = id_8762;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append();
}
else
{
void* xy8769 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[1] = f8799;
arg_buffer[2] = xy8769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8799))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8849_fptr() // lam8849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8850 = arg_buffer[1];
//reading env and args
void* const id_8758 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8850);
void* const stack = decode_clo_array[6];
void* const count = decode_clo_array[5];
void* const z = decode_clo_array[4];
void* const y = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const kont8798 = decode_clo_array[1];
void* id_8759 = apply_prim_car_1(x);
void* const id_8760 = reinterpret_cast<void*>(encode_int(int8875));

//creating new closure instance
void** clo8926 = alloc_clo(lam8847_fptr, 7);

//setting env list
clo8926[1] = kont8798;
clo8926[2] = x;
clo8926[3] = y;
clo8926[4] = z;
clo8926[5] = id_8758;
clo8926[6] = count;
clo8926[7] = stack;
void* f8803 = encode_clo(clo8926);



//clo-app
arg_buffer[1] = ok_u63;
arg_buffer[2] = f8803;
arg_buffer[3] = id_8759;
arg_buffer[4] = id_8760;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_ok_u63();
}

void lam8851_fptr() // lam8851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8852 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8852);
void* const stack = decode_clo_array[5];
void* const count = decode_clo_array[4];
void* const y = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const kont8798 = decode_clo_array[1];
void* id_8749 = apply_prim_null_u63_1(x);

//if-clause
bool if_guard8927 = is_true(id_8749);
if(if_guard8927)
{
void* id_8750 = apply_prim_null_u63_1(y);

//if-clause
bool if_guard8928 = is_true(id_8750);
if(if_guard8928)
{
void* id_8751 = apply_prim_cdr_1(stack);
void* const id_8752 = reinterpret_cast<void*>(encode_int(int8875));
void* id_8753 = apply_prim__u43_2(count, id_8752);

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8798;
arg_buffer[3] = id_8751;
arg_buffer[4] = id_8753;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}
else
{
void* id_8754 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8798;
arg_buffer[3] = id_8754;
arg_buffer[4] = count;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}

}
else
{
void* id_8755 = apply_prim_cdr_1(x);
void* id_8756 = apply_prim_car_1(x);
void* id_8757 = apply_prim_cons_2(id_8756, y);

//creating new closure instance
void** clo8929 = alloc_clo(lam8849_fptr, 6);

//setting env list
clo8929[1] = kont8798;
clo8929[2] = x;
clo8929[3] = y;
clo8929[4] = z;
clo8929[5] = count;
clo8929[6] = stack;
void* f8804 = encode_clo(clo8929);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8804;
arg_buffer[3] = id_8755;
arg_buffer[4] = id_8757;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_list();
}

}

void lam8853_fptr() // lam8853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8854 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8854);
void* const stack = decode_clo_array[5];
void* const state = decode_clo_array[4];
void* const count = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const kont8798 = decode_clo_array[1];

//creating new closure instance
void** clo8930 = alloc_clo(lam8851_fptr, 5);

//setting env list
clo8930[1] = kont8798;
clo8930[2] = x;
clo8930[3] = y;
clo8930[4] = count;
clo8930[5] = stack;
void* f8805 = encode_clo(clo8930);


void* id_8747 = apply_prim_cdr_1(state);
void* id_8748 = apply_prim_cdr_1(id_8747);

//clo-app
arg_buffer[2]=apply_prim_car_1(id_8748);
arg_buffer[1] = f8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8805))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void q_u45helper_fptr() // q-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8855 = arg_buffer[1];
//reading env and args
void* const kont8798 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8745 = apply_prim_null_u63_1(stack);

//if-clause
bool if_guard8931 = is_true(id_8745);
if(if_guard8931)
{

//clo-app
arg_buffer[1] = kont8798;
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8798))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* state = apply_prim_car_1(stack);
void* x = apply_prim_car_1(state);

//creating new closure instance
void** clo8932 = alloc_clo(lam8853_fptr, 5);

//setting env list
clo8932[1] = kont8798;
clo8932[2] = x;
clo8932[3] = count;
clo8932[4] = state;
clo8932[5] = stack;
void* f8806 = encode_clo(clo8932);


void* id_8746 = apply_prim_cdr_1(state);

//clo-app
arg_buffer[2]=apply_prim_car_1(id_8746);
arg_buffer[1] = f8806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8806))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void iota1_fptr() // iota1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8856 = arg_buffer[1];
//reading env and args
void* const kont8807 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8772 = reinterpret_cast<void*>(encode_int(int8876));
void* id_8773 = apply_prim__u61_2(n, id_8772);

//if-clause
bool if_guard8933 = is_true(id_8773);
if(if_guard8933)
{

//clo-app
arg_buffer[1] = kont8807;
arg_buffer[2] = l;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8774 = reinterpret_cast<void*>(encode_int(int8875));
void* id_8775 = apply_prim__u45_2(n, id_8774);
void* id_8776 = apply_prim_cons_2(n, l);

//clo-app
arg_buffer[1] = iota1;
arg_buffer[2] = kont8807;
arg_buffer[3] = id_8775;
arg_buffer[4] = id_8776;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_iota1();
}

}

void lam8857_fptr() // lam8857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8858 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8858);
void* const kont8808 = decode_clo_array[1];
void* const id_8783 = reinterpret_cast<void*>(encode_int(int8876));

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8808;
arg_buffer[3] = id_8782;
arg_buffer[4] = id_8783;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}

void lam8859_fptr() // lam8859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8860 = arg_buffer[1];
//reading env and args
void* const id_8781 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8860);
void* const kont8808 = decode_clo_array[1];

//creating new closure instance
void** clo8934 = alloc_clo(lam8857_fptr, 1);

//setting env list
clo8934[1] = kont8808;
void* f8809 = encode_clo(clo8934);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8809;
arg_buffer[3] = id_8781;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_list();
}

void lam8861_fptr() // lam8861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8862 = arg_buffer[1];
//reading env and args
void* const id_8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8862);
void* const kont8808 = decode_clo_array[3];
void* const id_8778 = decode_clo_array[2];
void* const id_8779 = decode_clo_array[1];

//creating new closure instance
void** clo8935 = alloc_clo(lam8859_fptr, 1);

//setting env list
clo8935[1] = kont8808;
void* f8810 = encode_clo(clo8935);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8810;
arg_buffer[3] = id_8778;
arg_buffer[4] = id_8779;
arg_buffer[5] = id_8780;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_list();
}

void lam8863_fptr() // lam8863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8864 = arg_buffer[1];
//reading env and args
void* const id_8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8864);
void* const kont8808 = decode_clo_array[2];
void* const id_8778 = decode_clo_array[1];

//creating new closure instance
void** clo8936 = alloc_clo(lam8861_fptr, 3);

//setting env list
clo8936[1] = id_8779;
clo8936[2] = id_8778;
clo8936[3] = kont8808;
void* f8811 = encode_clo(clo8936);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam8865_fptr() // lam8865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8866 = arg_buffer[1];
//reading env and args
void* const id_8778 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8866);
void* const kont8808 = decode_clo_array[1];

//creating new closure instance
void** clo8937 = alloc_clo(lam8863_fptr, 2);

//setting env list
clo8937[1] = id_8778;
clo8937[2] = kont8808;
void* f8812 = encode_clo(clo8937);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8812;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam8867_fptr() // lam8867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8868 = arg_buffer[1];
//reading env and args
void* const id_8777 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8868);
void* const kont8808 = decode_clo_array[2];
void* const n = decode_clo_array[1];

//creating new closure instance
void** clo8938 = alloc_clo(lam8865_fptr, 1);

//setting env list
clo8938[1] = kont8808;
void* f8813 = encode_clo(clo8938);



//clo-app
arg_buffer[1] = iota1;
arg_buffer[2] = f8813;
arg_buffer[3] = n;
arg_buffer[4] = id_8777;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_iota1();
}

void nqueens_fptr() // nqueens 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8869 = arg_buffer[1];
//reading env and args
void* const kont8808 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8939 = alloc_clo(lam8867_fptr, 2);

//setting env list
clo8939[1] = n;
clo8939[2] = kont8808;
void* f8814 = encode_clo(clo8939);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8814;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8870 = arg_buffer[1];
//reading env and args
void* const kont8815 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8784 = reinterpret_cast<void*>(encode_int(int8877));

//clo-app
arg_buffer[1] = nqueens;
arg_buffer[2] = kont8815;
arg_buffer[3] = id_8784;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_nqueens();
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8876 = 0;
int8875 = 1;
int8877 = 14;


//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
function_ptr();
}

