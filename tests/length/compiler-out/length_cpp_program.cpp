#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8882;
void* int8884;
void* int8885;
void* int8886;
void* int8887;



// declaring functions at the top
void _u43_fptr(); // +
void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr(); // -
void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr(); // *
void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr(); // /
void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr(); // =
void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr(); // >
void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr(); // <
void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr(); // <=
void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr(); // >=
void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr(); // modulo
void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr(); // null?
void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr(); // equal?
void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr(); // eq?
void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr(); // cons
void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr(); // car
void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr(); // cdr
void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr(); // float->int
void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr(); // int->float
void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr(); // hash
void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr(); // hash-ref
void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr(); // hash-set
void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr(); // hash-keys
void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr(); // hash-has-key?
void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr(); // hash-count
void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr(); // set
void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr(); // set->list
void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr(); // list->set
void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr(); // set-add
void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr(); // set-member?
void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr(); // set-remove
void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr(); // set-count
void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr(); // string?
void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr(); // string-length
void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr(); // string-ref
void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr(); // substring
void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr(); // string-append
void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr(); // string->list
void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr(); // exact-floor
void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr(); // exact-ceiling
void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr(); // exact-round
void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr(); // abs
void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr(); // max
void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr(); // min
void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr(); // expt
void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr(); // sqrt
void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr(); // remainder
void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr(); // quotient
void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr(); // random
void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr(); // symbol?
void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr(); // pair?
void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr(); // positive?
void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr(); // negative?
void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8854_fptr(); // lam8854
void lam8854_spec(void* env8855, void* id_8785); // lam8854
void* lam8854 = encode_clo(alloc_clo(lam8854_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8856, void* kont8835, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8857_fptr(); // lam8857
void lam8857_spec(void* env8858, void* id_8789); // lam8857
void* lam8857 = encode_clo(alloc_clo(lam8857_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8859, void* kont8837, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8860, void* kont8839, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8861, void* kont8840, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8862_fptr(); // lam8862
void lam8862_spec(void* env8863, void* id_8798); // lam8862
void* lam8862 = encode_clo(alloc_clo(lam8862_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8864, void* kont8841, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8865_fptr(); // lam8865
void lam8865_spec(void* env8866, void* xy8800); // lam8865
void* lam8865 = encode_clo(alloc_clo(lam8865_fptr, 0));

void lam8867_fptr(); // lam8867
void lam8867_spec(void* env8868, void* id_8803); // lam8867
void* lam8867 = encode_clo(alloc_clo(lam8867_fptr, 0));

void lam8869_fptr(); // lam8869
void lam8869_spec(void* env8870, void* lsts); // lam8869
void* lam8869 = encode_clo(alloc_clo(lam8869_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8872_fptr(); // lam8872
void lam8872_spec(void* env8873, void* xy8806); // lam8872
void* lam8872 = encode_clo(alloc_clo(lam8872_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8874, void* kont8847, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8875, void* kont8849, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void call_fptr(); // call
void call_spec(void* _8876, void* kont8850); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8877_fptr(); // lam8877
void lam8877_spec(void* env8878, void* xy8818); // lam8877
void* lam8877 = encode_clo(alloc_clo(lam8877_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8879, void* kont8851); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8888 = prim_car(lst);
void* const lst8890 = prim_cdr(lst);
void* const x8889 = apply_prim__u43(lst8890);
arg_buffer[1] = kont8888;
arg_buffer[2] = x8889;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8888))[0])();
}
else
{
void* const kont8888 = arg_buffer[2];
void* const x8889 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8888))[0])(kont8888, x8889);
}

}

inline void _u45_fptr() // - 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8891 = prim_car(lst);
void* const lst8893 = prim_cdr(lst);
void* const x8892 = apply_prim__u45(lst8893);
arg_buffer[1] = kont8891;
arg_buffer[2] = x8892;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8891))[0])();
}
else
{
void* const kont8891 = arg_buffer[2];
void* const x8892 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8891))[0])(kont8891, x8892);
}

}

inline void _u42_fptr() // * 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8894 = prim_car(lst);
void* const lst8896 = prim_cdr(lst);
void* const x8895 = apply_prim__u42(lst8896);
arg_buffer[1] = kont8894;
arg_buffer[2] = x8895;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8894))[0])();
}
else
{
void* const kont8894 = arg_buffer[2];
void* const x8895 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8894))[0])(kont8894, x8895);
}

}

inline void _u47_fptr() // / 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8897 = prim_car(lst);
void* const lst8899 = prim_cdr(lst);
void* const x8898 = apply_prim__u47(lst8899);
arg_buffer[1] = kont8897;
arg_buffer[2] = x8898;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8897))[0])();
}
else
{
void* const kont8897 = arg_buffer[2];
void* const x8898 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8897))[0])(kont8897, x8898);
}

}

inline void _u61_fptr() // = 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8900 = prim_car(lst);
void* const lst8902 = prim_cdr(lst);
void* const x8901 = apply_prim__u61(lst8902);
arg_buffer[1] = kont8900;
arg_buffer[2] = x8901;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8900))[0])();
}
else
{
void* const kont8900 = arg_buffer[2];
void* const x8901 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8900))[0])(kont8900, x8901);
}

}

inline void _u62_fptr() // > 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8903 = prim_car(lst);
void* const lst8905 = prim_cdr(lst);
void* const x8904 = apply_prim__u62(lst8905);
arg_buffer[1] = kont8903;
arg_buffer[2] = x8904;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8903))[0])();
}
else
{
void* const kont8903 = arg_buffer[2];
void* const x8904 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8903))[0])(kont8903, x8904);
}

}

inline void _u60_fptr() // < 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8906 = prim_car(lst);
void* const lst8908 = prim_cdr(lst);
void* const x8907 = apply_prim__u60(lst8908);
arg_buffer[1] = kont8906;
arg_buffer[2] = x8907;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8906))[0])();
}
else
{
void* const kont8906 = arg_buffer[2];
void* const x8907 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8906))[0])(kont8906, x8907);
}

}

inline void _u60_u61_fptr() // <= 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8909 = prim_car(lst);
void* const lst8911 = prim_cdr(lst);
void* const x8910 = apply_prim__u60_u61(lst8911);
arg_buffer[1] = kont8909;
arg_buffer[2] = x8910;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8909))[0])();
}
else
{
void* const kont8909 = arg_buffer[2];
void* const x8910 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8909))[0])(kont8909, x8910);
}

}

inline void _u62_u61_fptr() // >= 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8912 = prim_car(lst);
void* const lst8914 = prim_cdr(lst);
void* const x8913 = apply_prim__u62_u61(lst8914);
arg_buffer[1] = kont8912;
arg_buffer[2] = x8913;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8912))[0])();
}
else
{
void* const kont8912 = arg_buffer[2];
void* const x8913 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8912))[0])(kont8912, x8913);
}

}

inline void modulo_fptr() // modulo 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8915 = prim_car(lst);
void* const lst8917 = prim_cdr(lst);
void* const x8916 = apply_prim_modulo(lst8917);
arg_buffer[1] = kont8915;
arg_buffer[2] = x8916;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8915))[0])();
}
else
{
void* const kont8915 = arg_buffer[2];
void* const x8916 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8915))[0])(kont8915, x8916);
}

}

inline void null_u63_fptr() // null? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8918 = prim_car(lst);
void* const lst8920 = prim_cdr(lst);
void* const x8919 = apply_prim_null_u63(lst8920);
arg_buffer[1] = kont8918;
arg_buffer[2] = x8919;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8918))[0])();
}
else
{
void* const kont8918 = arg_buffer[2];
void* const x8919 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8918))[0])(kont8918, x8919);
}

}

inline void equal_u63_fptr() // equal? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8921 = prim_car(lst);
void* const lst8923 = prim_cdr(lst);
void* const x8922 = apply_prim_equal_u63(lst8923);
arg_buffer[1] = kont8921;
arg_buffer[2] = x8922;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8921))[0])();
}
else
{
void* const kont8921 = arg_buffer[2];
void* const x8922 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8921))[0])(kont8921, x8922);
}

}

inline void eq_u63_fptr() // eq? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8924 = prim_car(lst);
void* const lst8926 = prim_cdr(lst);
void* const x8925 = apply_prim_eq_u63(lst8926);
arg_buffer[1] = kont8924;
arg_buffer[2] = x8925;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8924))[0])();
}
else
{
void* const kont8924 = arg_buffer[2];
void* const x8925 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8924))[0])(kont8924, x8925);
}

}

inline void cons_fptr() // cons 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8927 = prim_car(lst);
void* const lst8929 = prim_cdr(lst);
void* const x8928 = apply_prim_cons(lst8929);
arg_buffer[1] = kont8927;
arg_buffer[2] = x8928;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8927))[0])();
}
else
{
void* const kont8927 = arg_buffer[2];
void* const x8928 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8927))[0])(kont8927, x8928);
}

}

inline void car_fptr() // car 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8930 = prim_car(lst);
void* const lst8932 = prim_cdr(lst);
void* const x8931 = apply_prim_car(lst8932);
arg_buffer[1] = kont8930;
arg_buffer[2] = x8931;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8930))[0])();
}
else
{
void* const kont8930 = arg_buffer[2];
void* const x8931 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8930))[0])(kont8930, x8931);
}

}

inline void cdr_fptr() // cdr 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8933 = prim_car(lst);
void* const lst8935 = prim_cdr(lst);
void* const x8934 = apply_prim_cdr(lst8935);
arg_buffer[1] = kont8933;
arg_buffer[2] = x8934;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8933))[0])();
}
else
{
void* const kont8933 = arg_buffer[2];
void* const x8934 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8933))[0])(kont8933, x8934);
}

}

inline void float_u45_u62int_fptr() // float->int 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8936 = prim_car(lst);
void* const lst8938 = prim_cdr(lst);
void* const x8937 = apply_prim_float_u45_u62int(lst8938);
arg_buffer[1] = kont8936;
arg_buffer[2] = x8937;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8936))[0])();
}
else
{
void* const kont8936 = arg_buffer[2];
void* const x8937 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8936))[0])(kont8936, x8937);
}

}

inline void int_u45_u62float_fptr() // int->float 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8939 = prim_car(lst);
void* const lst8941 = prim_cdr(lst);
void* const x8940 = apply_prim_int_u45_u62float(lst8941);
arg_buffer[1] = kont8939;
arg_buffer[2] = x8940;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8939))[0])();
}
else
{
void* const kont8939 = arg_buffer[2];
void* const x8940 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8939))[0])(kont8939, x8940);
}

}

inline void hash_fptr() // hash 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8942 = prim_car(lst);
void* const lst8944 = prim_cdr(lst);
void* const x8943 = apply_prim_hash(lst8944);
arg_buffer[1] = kont8942;
arg_buffer[2] = x8943;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8942))[0])();
}
else
{
void* const kont8942 = arg_buffer[2];
void* const x8943 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8942))[0])(kont8942, x8943);
}

}

inline void hash_u45ref_fptr() // hash-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8945 = prim_car(lst);
void* const lst8947 = prim_cdr(lst);
void* const x8946 = apply_prim_hash_u45ref(lst8947);
arg_buffer[1] = kont8945;
arg_buffer[2] = x8946;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8945))[0])();
}
else
{
void* const kont8945 = arg_buffer[2];
void* const x8946 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8945))[0])(kont8945, x8946);
}

}

inline void hash_u45set_fptr() // hash-set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8948 = prim_car(lst);
void* const lst8950 = prim_cdr(lst);
void* const x8949 = apply_prim_hash_u45set(lst8950);
arg_buffer[1] = kont8948;
arg_buffer[2] = x8949;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8948))[0])();
}
else
{
void* const kont8948 = arg_buffer[2];
void* const x8949 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8948))[0])(kont8948, x8949);
}

}

inline void hash_u45keys_fptr() // hash-keys 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8951 = prim_car(lst);
void* const lst8953 = prim_cdr(lst);
void* const x8952 = apply_prim_hash_u45keys(lst8953);
arg_buffer[1] = kont8951;
arg_buffer[2] = x8952;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8951))[0])();
}
else
{
void* const kont8951 = arg_buffer[2];
void* const x8952 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8951))[0])(kont8951, x8952);
}

}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8954 = prim_car(lst);
void* const lst8956 = prim_cdr(lst);
void* const x8955 = apply_prim_hash_u45has_u45key_u63(lst8956);
arg_buffer[1] = kont8954;
arg_buffer[2] = x8955;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8954))[0])();
}
else
{
void* const kont8954 = arg_buffer[2];
void* const x8955 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8954))[0])(kont8954, x8955);
}

}

inline void hash_u45count_fptr() // hash-count 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8957 = prim_car(lst);
void* const lst8959 = prim_cdr(lst);
void* const x8958 = apply_prim_hash_u45count(lst8959);
arg_buffer[1] = kont8957;
arg_buffer[2] = x8958;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8957))[0])();
}
else
{
void* const kont8957 = arg_buffer[2];
void* const x8958 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8957))[0])(kont8957, x8958);
}

}

inline void set_fptr() // set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8960 = prim_car(lst);
void* const lst8962 = prim_cdr(lst);
void* const x8961 = apply_prim_set(lst8962);
arg_buffer[1] = kont8960;
arg_buffer[2] = x8961;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8960))[0])();
}
else
{
void* const kont8960 = arg_buffer[2];
void* const x8961 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8960))[0])(kont8960, x8961);
}

}

inline void set_u45_u62list_fptr() // set->list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8963 = prim_car(lst);
void* const lst8965 = prim_cdr(lst);
void* const x8964 = apply_prim_set_u45_u62list(lst8965);
arg_buffer[1] = kont8963;
arg_buffer[2] = x8964;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8963))[0])();
}
else
{
void* const kont8963 = arg_buffer[2];
void* const x8964 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8963))[0])(kont8963, x8964);
}

}

inline void list_u45_u62set_fptr() // list->set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8966 = prim_car(lst);
void* const lst8968 = prim_cdr(lst);
void* const x8967 = apply_prim_list_u45_u62set(lst8968);
arg_buffer[1] = kont8966;
arg_buffer[2] = x8967;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8966))[0])();
}
else
{
void* const kont8966 = arg_buffer[2];
void* const x8967 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8966))[0])(kont8966, x8967);
}

}

inline void set_u45add_fptr() // set-add 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8969 = prim_car(lst);
void* const lst8971 = prim_cdr(lst);
void* const x8970 = apply_prim_set_u45add(lst8971);
arg_buffer[1] = kont8969;
arg_buffer[2] = x8970;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8969))[0])();
}
else
{
void* const kont8969 = arg_buffer[2];
void* const x8970 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8969))[0])(kont8969, x8970);
}

}

inline void set_u45member_u63_fptr() // set-member? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8972 = prim_car(lst);
void* const lst8974 = prim_cdr(lst);
void* const x8973 = apply_prim_set_u45member_u63(lst8974);
arg_buffer[1] = kont8972;
arg_buffer[2] = x8973;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8972))[0])();
}
else
{
void* const kont8972 = arg_buffer[2];
void* const x8973 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8972))[0])(kont8972, x8973);
}

}

inline void set_u45remove_fptr() // set-remove 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8975 = prim_car(lst);
void* const lst8977 = prim_cdr(lst);
void* const x8976 = apply_prim_set_u45remove(lst8977);
arg_buffer[1] = kont8975;
arg_buffer[2] = x8976;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8975))[0])();
}
else
{
void* const kont8975 = arg_buffer[2];
void* const x8976 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8975))[0])(kont8975, x8976);
}

}

inline void set_u45count_fptr() // set-count 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8978 = prim_car(lst);
void* const lst8980 = prim_cdr(lst);
void* const x8979 = apply_prim_set_u45count(lst8980);
arg_buffer[1] = kont8978;
arg_buffer[2] = x8979;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8978))[0])();
}
else
{
void* const kont8978 = arg_buffer[2];
void* const x8979 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8978))[0])(kont8978, x8979);
}

}

inline void string_u63_fptr() // string? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8981 = prim_car(lst);
void* const lst8983 = prim_cdr(lst);
void* const x8982 = apply_prim_string_u63(lst8983);
arg_buffer[1] = kont8981;
arg_buffer[2] = x8982;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8981))[0])();
}
else
{
void* const kont8981 = arg_buffer[2];
void* const x8982 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8981))[0])(kont8981, x8982);
}

}

inline void string_u45length_fptr() // string-length 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8984 = prim_car(lst);
void* const lst8986 = prim_cdr(lst);
void* const x8985 = apply_prim_string_u45length(lst8986);
arg_buffer[1] = kont8984;
arg_buffer[2] = x8985;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8984))[0])();
}
else
{
void* const kont8984 = arg_buffer[2];
void* const x8985 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8984))[0])(kont8984, x8985);
}

}

inline void string_u45ref_fptr() // string-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8987 = prim_car(lst);
void* const lst8989 = prim_cdr(lst);
void* const x8988 = apply_prim_string_u45ref(lst8989);
arg_buffer[1] = kont8987;
arg_buffer[2] = x8988;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8987))[0])();
}
else
{
void* const kont8987 = arg_buffer[2];
void* const x8988 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8987))[0])(kont8987, x8988);
}

}

inline void substring_fptr() // substring 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8990 = prim_car(lst);
void* const lst8992 = prim_cdr(lst);
void* const x8991 = apply_prim_substring(lst8992);
arg_buffer[1] = kont8990;
arg_buffer[2] = x8991;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8990))[0])();
}
else
{
void* const kont8990 = arg_buffer[2];
void* const x8991 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8990))[0])(kont8990, x8991);
}

}

inline void string_u45append_fptr() // string-append 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8993 = prim_car(lst);
void* const lst8995 = prim_cdr(lst);
void* const x8994 = apply_prim_string_u45append(lst8995);
arg_buffer[1] = kont8993;
arg_buffer[2] = x8994;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8993))[0])();
}
else
{
void* const kont8993 = arg_buffer[2];
void* const x8994 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8993))[0])(kont8993, x8994);
}

}

inline void string_u45_u62list_fptr() // string->list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8996 = prim_car(lst);
void* const lst8998 = prim_cdr(lst);
void* const x8997 = apply_prim_string_u45_u62list(lst8998);
arg_buffer[1] = kont8996;
arg_buffer[2] = x8997;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8996))[0])();
}
else
{
void* const kont8996 = arg_buffer[2];
void* const x8997 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8996))[0])(kont8996, x8997);
}

}

inline void exact_u45floor_fptr() // exact-floor 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8999 = prim_car(lst);
void* const lst9001 = prim_cdr(lst);
void* const x9000 = apply_prim_exact_u45floor(lst9001);
arg_buffer[1] = kont8999;
arg_buffer[2] = x9000;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8999))[0])();
}
else
{
void* const kont8999 = arg_buffer[2];
void* const x9000 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8999))[0])(kont8999, x9000);
}

}

inline void exact_u45ceiling_fptr() // exact-ceiling 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9002 = prim_car(lst);
void* const lst9004 = prim_cdr(lst);
void* const x9003 = apply_prim_exact_u45ceiling(lst9004);
arg_buffer[1] = kont9002;
arg_buffer[2] = x9003;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9002))[0])();
}
else
{
void* const kont9002 = arg_buffer[2];
void* const x9003 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9002))[0])(kont9002, x9003);
}

}

inline void exact_u45round_fptr() // exact-round 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9005 = prim_car(lst);
void* const lst9007 = prim_cdr(lst);
void* const x9006 = apply_prim_exact_u45round(lst9007);
arg_buffer[1] = kont9005;
arg_buffer[2] = x9006;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9005))[0])();
}
else
{
void* const kont9005 = arg_buffer[2];
void* const x9006 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9005))[0])(kont9005, x9006);
}

}

inline void abs_fptr() // abs 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9008 = prim_car(lst);
void* const lst9010 = prim_cdr(lst);
void* const x9009 = apply_prim_abs(lst9010);
arg_buffer[1] = kont9008;
arg_buffer[2] = x9009;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9008))[0])();
}
else
{
void* const kont9008 = arg_buffer[2];
void* const x9009 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9008))[0])(kont9008, x9009);
}

}

inline void max_fptr() // max 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9011 = prim_car(lst);
void* const lst9013 = prim_cdr(lst);
void* const x9012 = apply_prim_max(lst9013);
arg_buffer[1] = kont9011;
arg_buffer[2] = x9012;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9011))[0])();
}
else
{
void* const kont9011 = arg_buffer[2];
void* const x9012 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9011))[0])(kont9011, x9012);
}

}

inline void min_fptr() // min 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9014 = prim_car(lst);
void* const lst9016 = prim_cdr(lst);
void* const x9015 = apply_prim_min(lst9016);
arg_buffer[1] = kont9014;
arg_buffer[2] = x9015;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9014))[0])();
}
else
{
void* const kont9014 = arg_buffer[2];
void* const x9015 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9014))[0])(kont9014, x9015);
}

}

inline void expt_fptr() // expt 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9017 = prim_car(lst);
void* const lst9019 = prim_cdr(lst);
void* const x9018 = apply_prim_expt(lst9019);
arg_buffer[1] = kont9017;
arg_buffer[2] = x9018;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9017))[0])();
}
else
{
void* const kont9017 = arg_buffer[2];
void* const x9018 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9017))[0])(kont9017, x9018);
}

}

inline void sqrt_fptr() // sqrt 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9020 = prim_car(lst);
void* const lst9022 = prim_cdr(lst);
void* const x9021 = apply_prim_sqrt(lst9022);
arg_buffer[1] = kont9020;
arg_buffer[2] = x9021;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9020))[0])();
}
else
{
void* const kont9020 = arg_buffer[2];
void* const x9021 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9020))[0])(kont9020, x9021);
}

}

inline void remainder_fptr() // remainder 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9023 = prim_car(lst);
void* const lst9025 = prim_cdr(lst);
void* const x9024 = apply_prim_remainder(lst9025);
arg_buffer[1] = kont9023;
arg_buffer[2] = x9024;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9023))[0])();
}
else
{
void* const kont9023 = arg_buffer[2];
void* const x9024 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9023))[0])(kont9023, x9024);
}

}

inline void quotient_fptr() // quotient 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9026 = prim_car(lst);
void* const lst9028 = prim_cdr(lst);
void* const x9027 = apply_prim_quotient(lst9028);
arg_buffer[1] = kont9026;
arg_buffer[2] = x9027;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9026))[0])();
}
else
{
void* const kont9026 = arg_buffer[2];
void* const x9027 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9026))[0])(kont9026, x9027);
}

}

inline void random_fptr() // random 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9029 = prim_car(lst);
void* const lst9031 = prim_cdr(lst);
void* const x9030 = apply_prim_random(lst9031);
arg_buffer[1] = kont9029;
arg_buffer[2] = x9030;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9029))[0])();
}
else
{
void* const kont9029 = arg_buffer[2];
void* const x9030 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9029))[0])(kont9029, x9030);
}

}

inline void symbol_u63_fptr() // symbol? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9032 = prim_car(lst);
void* const lst9034 = prim_cdr(lst);
void* const x9033 = apply_prim_symbol_u63(lst9034);
arg_buffer[1] = kont9032;
arg_buffer[2] = x9033;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9032))[0])();
}
else
{
void* const kont9032 = arg_buffer[2];
void* const x9033 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9032))[0])(kont9032, x9033);
}

}

inline void pair_u63_fptr() // pair? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9035 = prim_car(lst);
void* const lst9037 = prim_cdr(lst);
void* const x9036 = apply_prim_pair_u63(lst9037);
arg_buffer[1] = kont9035;
arg_buffer[2] = x9036;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9035))[0])();
}
else
{
void* const kont9035 = arg_buffer[2];
void* const x9036 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9035))[0])(kont9035, x9036);
}

}

inline void positive_u63_fptr() // positive? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9038 = prim_car(lst);
void* const lst9040 = prim_cdr(lst);
void* const x9039 = apply_prim_positive_u63(lst9040);
arg_buffer[1] = kont9038;
arg_buffer[2] = x9039;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9038))[0])();
}
else
{
void* const kont9038 = arg_buffer[2];
void* const x9039 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9038))[0])(kont9038, x9039);
}

}

inline void negative_u63_fptr() // negative? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9041 = prim_car(lst);
void* const lst9043 = prim_cdr(lst);
void* const x9042 = apply_prim_negative_u63(lst9043);
arg_buffer[1] = kont9041;
arg_buffer[2] = x9042;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9041))[0])();
}
else
{
void* const kont9041 = arg_buffer[2];
void* const x9042 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9041))[0])(kont9041, x9042);
}

}

inline void list_fptr() // list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9044 = prim_car(lst);
void* const lst9046 = prim_cdr(lst);
void* const x9045 = apply_prim_list(lst9046);
arg_buffer[1] = kont9044;
arg_buffer[2] = x9045;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9044))[0])();
}
else
{
void* const kont9044 = arg_buffer[2];
void* const x9045 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9044))[0])(kont9044, x9045);
}

}

inline void lam8854_fptr() // lam8854 -> generic version 
{
//reading env
void* const env8855 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8855);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8785));
}

inline void lam8854_spec(void* env8855, void* id_8785) // lam8854 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8855);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8785));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8835 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8835)[0])(kont8835, int8882);
}
else
{

//creating new make-kont closure
void** clo9047 = alloc_kont(lam8854_spec, 2);

//setting env list
clo9047[1] = kont8835;
clo9047[2] = int8884;
void* f_lam_8836 = encode_clo(clo9047);



//clo-app
length_spec(length, f_lam_8836, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8856, void* kont8835, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8835)[0])(kont8835, int8882);
}
else
{

//creating new make-kont closure
void** clo9048 = alloc_kont(lam8854_spec, 2);

//setting env list
clo9048[1] = kont8835;
clo9048[2] = int8884;
void* f_lam_8836 = encode_clo(clo9048);



//clo-app
length_spec(length, f_lam_8836, apply_prim_cdr_1(lst));
}

}

inline void lam8857_fptr() // lam8857 -> generic version 
{
//reading env
void* const env8858 = arg_buffer[1];
//reading env and args
void* const id_8789 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8858);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8789;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8857_spec(void* env8858, void* id_8789) // lam8857 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8858);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8789;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8837 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8837)[0])(kont8837, acc);
}
else
{

//creating new make-kont closure
void** clo9049 = alloc_kont(lam8857_spec, 3);

//setting env list
clo9049[1] = fun;
clo9049[2] = kont8837;
clo9049[3] = apply_prim_car_1(lst);
void* f_lam_8838 = encode_clo(clo9049);



//clo-app
foldr_spec(foldr, f_lam_8838, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8859, void* kont8837, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8837)[0])(kont8837, acc);
}
else
{

//creating new make-kont closure
void** clo9050 = alloc_kont(lam8857_spec, 3);

//setting env list
clo9050[1] = fun;
clo9050[2] = kont8837;
clo9050[3] = apply_prim_car_1(lst);
void* f_lam_8838 = encode_clo(clo9050);



//clo-app
foldr_spec(foldr, f_lam_8838, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8839 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8839)[0])(kont8839, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8839, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8860, void* kont8839, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8839)[0])(kont8839, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8839, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8840 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8840, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8861, void* kont8840, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8840, lst, apply_prim_list_0());
}

inline void lam8862_fptr() // lam8862 -> generic version 
{
//reading env
void* const env8863 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8863);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8798));
}

inline void lam8862_spec(void* env8863, void* id_8798) // lam8862 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8863);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8798));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8841 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8841)[0])(kont8841, rhs);
}
else
{

//creating new make-kont closure
void** clo9051 = alloc_kont(lam8862_spec, 2);

//setting env list
clo9051[1] = kont8841;
clo9051[2] = apply_prim_car_1(lhs);
void* f_lam_8842 = encode_clo(clo9051);



//clo-app
append1_spec(append1, f_lam_8842, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8864, void* kont8841, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8841)[0])(kont8841, rhs);
}
else
{

//creating new make-kont closure
void** clo9052 = alloc_kont(lam8862_spec, 2);

//setting env list
clo9052[1] = kont8841;
clo9052[2] = apply_prim_car_1(lhs);
void* f_lam_8842 = encode_clo(clo9052);



//clo-app
append1_spec(append1, f_lam_8842, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8865_fptr() // lam8865 -> generic version 
{
//reading env
void* const env8866 = arg_buffer[1];
//reading env and args
void* const xy8800 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8866);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8800);
}

inline void lam8865_spec(void* env8866, void* xy8800) // lam8865 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8866);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8800);
}

inline void lam8867_fptr() // lam8867 -> generic version 
{
//reading env
void* const env8868 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8868);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam8867_spec(void* env8868, void* id_8803) // lam8867 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8868);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam8869_fptr() // lam8869 -> generic version 
{
//reading env
void* const env8870 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8870);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9053 = alloc_kont(lam8865_spec, 1);

//setting env list
clo9053[1] = decode_clo_array[1];
void* f_lam_8844 = encode_clo(clo9053);



//clo-app
append1_spec(append1, f_lam_8844, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9054 = alloc_kont(lam8867_spec, 2);

//setting env list
clo9054[1] = decode_clo_array[1];
clo9054[2] = apply_prim_list_0();
void* f_lam_8845 = encode_clo(clo9054);



//clo-app
append1_spec(append1, f_lam_8845, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

inline void lam8869_spec(void* env8870, void* lsts) // lam8869 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8870);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9055 = alloc_kont(lam8865_spec, 1);

//setting env list
clo9055[1] = decode_clo_array[1];
void* f_lam_8844 = encode_clo(clo9055);



//clo-app
append1_spec(append1, f_lam_8844, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9056 = alloc_kont(lam8867_spec, 2);

//setting env list
clo9056[1] = decode_clo_array[1];
clo9056[2] = apply_prim_list_0();
void* f_lam_8845 = encode_clo(clo9056);



//clo-app
append1_spec(append1, f_lam_8845, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _8871 = arg_buffer[1];
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


//creating new make-kont closure
void** clo9057 = alloc_kont(lam8869_spec, 3);

//setting env list
clo9057[1] = apply_prim_car_1(vargs);
clo9057[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9057[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_8846 = encode_clo(clo9057);


// kont-clo-app case
lam8869_spec(f_lam_8846, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam8872_fptr() // lam8872 -> generic version 
{
//reading env
void* const env8873 = arg_buffer[1];
//reading env and args
void* const xy8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8873);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void lam8872_spec(void* env8873, void* xy8806) // lam8872 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8873);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8847 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8882)))
{

//creating new make-kont closure
void** clo9058 = alloc_kont(lam8872_spec, 1);

//setting env list
clo9058[1] = kont8847;
void* f_lam_8848 = encode_clo(clo9058);



//clo-app
reverse_spec(reverse, f_lam_8848, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8847, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8884), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8874, void* kont8847, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8882)))
{

//creating new make-kont closure
void** clo9059 = alloc_kont(lam8872_spec, 1);

//setting env list
clo9059[1] = kont8847;
void* f_lam_8848 = encode_clo(clo9059);



//clo-app
reverse_spec(reverse, f_lam_8848, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8847, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8884), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8849 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8849, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8875, void* kont8849, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8849, lst, n, apply_prim_list_0());
}

inline void call_fptr() // call -> generic version 
{
//reading env and args
void* const kont8850 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
length_spec(length, kont8850, apply_prim_list_4(int8884, int8885, int8886, int8887));
}

inline void call_spec(void* _8876, void* kont8850) // call 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
length_spec(length, kont8850, apply_prim_list_4(int8884, int8885, int8886, int8887));
}

inline void lam8877_fptr() // lam8877 -> generic version 
{
//reading env
void* const env8878 = arg_buffer[1];
//reading env and args
void* const xy8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8878);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8818);
}

inline void lam8877_spec(void* env8878, void* xy8818) // lam8877 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8878);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8818);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8851 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9060 = alloc_kont(lam8877_spec, 1);

//setting env list
clo9060[1] = kont8851;
void* f_lam_8852 = encode_clo(clo9060);



//clo-app
call_spec(call, f_lam_8852);
}

inline void brouhaha_main_spec(void* _8879, void* kont8851) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9061 = alloc_kont(lam8877_spec, 1);

//setting env list
clo9061[1] = kont8851;
void* f_lam_8852 = encode_clo(clo9061);



//clo-app
call_spec(call, f_lam_8852);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8882 = reinterpret_cast<void *>(encode_int(0));
int8884 = reinterpret_cast<void *>(encode_int(1));
int8885 = reinterpret_cast<void *>(encode_int(2));
int8886 = reinterpret_cast<void *>(encode_int(3));
int8887 = reinterpret_cast<void *>(encode_int(4));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

