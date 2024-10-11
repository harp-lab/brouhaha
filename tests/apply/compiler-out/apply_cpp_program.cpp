#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8909;
void* float8915;
void* int8913;
void* int8912;
void* int8911;
void* int8914;



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

void lam8870_fptr(); // lam8870
void lam8870_spec(void* env8871, void* id_8785); // lam8870
void* lam8870 = encode_clo(alloc_clo(lam8870_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8872, void* kont8841, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8873_fptr(); // lam8873
void lam8873_spec(void* env8874, void* id_8789); // lam8873
void* lam8873 = encode_clo(alloc_clo(lam8873_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8875, void* kont8843, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8876, void* kont8845, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8877, void* kont8846, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8878_fptr(); // lam8878
void lam8878_spec(void* env8879, void* id_8798); // lam8878
void* lam8878 = encode_clo(alloc_clo(lam8878_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8880, void* kont8847, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8881_fptr(); // lam8881
void lam8881_spec(void* env8882, void* xy8800); // lam8881
void* lam8881 = encode_clo(alloc_clo(lam8881_fptr, 0));

void lam8883_fptr(); // lam8883
void lam8883_spec(void* env8884, void* id_8803); // lam8883
void* lam8883 = encode_clo(alloc_clo(lam8883_fptr, 0));

void lam8885_fptr(); // lam8885
void lam8885_spec(void* env8886, void* lsts); // lam8885
void* lam8885 = encode_clo(alloc_clo(lam8885_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8888_fptr(); // lam8888
void lam8888_spec(void* env8889, void* xy8806); // lam8888
void* lam8888 = encode_clo(alloc_clo(lam8888_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8890, void* kont8853, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8891, void* kont8855, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8892_fptr(); // lam8892
void lam8892_spec(void* env8893, void* res3); // lam8892
void* lam8892 = encode_clo(alloc_clo(lam8892_fptr, 0));

void lam8894_fptr(); // lam8894
void lam8894_spec(void* env8895, void* res2); // lam8894
void* lam8894 = encode_clo(alloc_clo(lam8894_fptr, 0));

void lam8896_fptr(); // lam8896
void lam8896_spec(void* env8897, void* res0); // lam8896
void* lam8896 = encode_clo(alloc_clo(lam8896_fptr, 0));

void lam8898_fptr(); // lam8898
void lam8898_spec(void* env8899, void* res1); // lam8898
void* lam8898 = encode_clo(alloc_clo(lam8898_fptr, 0));

void call_u452_fptr(); // call-2
void call_u452_spec(void* _8900, void* kont8856, void* f, void* f2); // call-2
void* call_u452 = encode_clo(alloc_clo(call_u452_fptr, 0));

void lam8901_fptr(); // lam8901
void lam8901_spec(void* env8902, void* xy8822); // lam8901
void* lam8901 = encode_clo(alloc_clo(lam8901_fptr, 0));

void call_fptr(); // call
void call_spec(void* _8903, void* kont8865, void* f3, void* f2); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8904_fptr(); // lam8904
void lam8904_spec(void* env8905, void* xy8823); // lam8904
void* lam8904 = encode_clo(alloc_clo(lam8904_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8906, void* kont8867); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8916 = prim_car(lst);
void* const lst8918 = prim_cdr(lst);
void* const x8917 = apply_prim__u43(lst8918);
arg_buffer[1] = kont8916;
arg_buffer[2] = x8917;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8916))[0])();
}
else
{
void* const kont8916 = arg_buffer[2];
void* const x8917 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8916))[0])(kont8916, x8917);
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
void* const kont8919 = prim_car(lst);
void* const lst8921 = prim_cdr(lst);
void* const x8920 = apply_prim__u45(lst8921);
arg_buffer[1] = kont8919;
arg_buffer[2] = x8920;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8919))[0])();
}
else
{
void* const kont8919 = arg_buffer[2];
void* const x8920 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8919))[0])(kont8919, x8920);
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
void* const kont8922 = prim_car(lst);
void* const lst8924 = prim_cdr(lst);
void* const x8923 = apply_prim__u42(lst8924);
arg_buffer[1] = kont8922;
arg_buffer[2] = x8923;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8922))[0])();
}
else
{
void* const kont8922 = arg_buffer[2];
void* const x8923 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8922))[0])(kont8922, x8923);
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
void* const kont8925 = prim_car(lst);
void* const lst8927 = prim_cdr(lst);
void* const x8926 = apply_prim__u47(lst8927);
arg_buffer[1] = kont8925;
arg_buffer[2] = x8926;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8925))[0])();
}
else
{
void* const kont8925 = arg_buffer[2];
void* const x8926 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8925))[0])(kont8925, x8926);
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
void* const kont8928 = prim_car(lst);
void* const lst8930 = prim_cdr(lst);
void* const x8929 = apply_prim__u61(lst8930);
arg_buffer[1] = kont8928;
arg_buffer[2] = x8929;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8928))[0])();
}
else
{
void* const kont8928 = arg_buffer[2];
void* const x8929 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8928))[0])(kont8928, x8929);
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
void* const kont8931 = prim_car(lst);
void* const lst8933 = prim_cdr(lst);
void* const x8932 = apply_prim__u62(lst8933);
arg_buffer[1] = kont8931;
arg_buffer[2] = x8932;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8931))[0])();
}
else
{
void* const kont8931 = arg_buffer[2];
void* const x8932 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8931))[0])(kont8931, x8932);
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
void* const kont8934 = prim_car(lst);
void* const lst8936 = prim_cdr(lst);
void* const x8935 = apply_prim__u60(lst8936);
arg_buffer[1] = kont8934;
arg_buffer[2] = x8935;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8934))[0])();
}
else
{
void* const kont8934 = arg_buffer[2];
void* const x8935 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8934))[0])(kont8934, x8935);
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
void* const kont8937 = prim_car(lst);
void* const lst8939 = prim_cdr(lst);
void* const x8938 = apply_prim__u60_u61(lst8939);
arg_buffer[1] = kont8937;
arg_buffer[2] = x8938;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8937))[0])();
}
else
{
void* const kont8937 = arg_buffer[2];
void* const x8938 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8937))[0])(kont8937, x8938);
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
void* const kont8940 = prim_car(lst);
void* const lst8942 = prim_cdr(lst);
void* const x8941 = apply_prim__u62_u61(lst8942);
arg_buffer[1] = kont8940;
arg_buffer[2] = x8941;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8940))[0])();
}
else
{
void* const kont8940 = arg_buffer[2];
void* const x8941 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8940))[0])(kont8940, x8941);
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
void* const kont8943 = prim_car(lst);
void* const lst8945 = prim_cdr(lst);
void* const x8944 = apply_prim_modulo(lst8945);
arg_buffer[1] = kont8943;
arg_buffer[2] = x8944;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8943))[0])();
}
else
{
void* const kont8943 = arg_buffer[2];
void* const x8944 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8943))[0])(kont8943, x8944);
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
void* const kont8946 = prim_car(lst);
void* const lst8948 = prim_cdr(lst);
void* const x8947 = apply_prim_null_u63(lst8948);
arg_buffer[1] = kont8946;
arg_buffer[2] = x8947;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8946))[0])();
}
else
{
void* const kont8946 = arg_buffer[2];
void* const x8947 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8946))[0])(kont8946, x8947);
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
void* const kont8949 = prim_car(lst);
void* const lst8951 = prim_cdr(lst);
void* const x8950 = apply_prim_equal_u63(lst8951);
arg_buffer[1] = kont8949;
arg_buffer[2] = x8950;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8949))[0])();
}
else
{
void* const kont8949 = arg_buffer[2];
void* const x8950 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8949))[0])(kont8949, x8950);
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
void* const kont8952 = prim_car(lst);
void* const lst8954 = prim_cdr(lst);
void* const x8953 = apply_prim_eq_u63(lst8954);
arg_buffer[1] = kont8952;
arg_buffer[2] = x8953;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8952))[0])();
}
else
{
void* const kont8952 = arg_buffer[2];
void* const x8953 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8952))[0])(kont8952, x8953);
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
void* const kont8955 = prim_car(lst);
void* const lst8957 = prim_cdr(lst);
void* const x8956 = apply_prim_cons(lst8957);
arg_buffer[1] = kont8955;
arg_buffer[2] = x8956;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8955))[0])();
}
else
{
void* const kont8955 = arg_buffer[2];
void* const x8956 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8955))[0])(kont8955, x8956);
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
void* const kont8958 = prim_car(lst);
void* const lst8960 = prim_cdr(lst);
void* const x8959 = apply_prim_car(lst8960);
arg_buffer[1] = kont8958;
arg_buffer[2] = x8959;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8958))[0])();
}
else
{
void* const kont8958 = arg_buffer[2];
void* const x8959 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8958))[0])(kont8958, x8959);
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
void* const kont8961 = prim_car(lst);
void* const lst8963 = prim_cdr(lst);
void* const x8962 = apply_prim_cdr(lst8963);
arg_buffer[1] = kont8961;
arg_buffer[2] = x8962;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8961))[0])();
}
else
{
void* const kont8961 = arg_buffer[2];
void* const x8962 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8961))[0])(kont8961, x8962);
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
void* const kont8964 = prim_car(lst);
void* const lst8966 = prim_cdr(lst);
void* const x8965 = apply_prim_float_u45_u62int(lst8966);
arg_buffer[1] = kont8964;
arg_buffer[2] = x8965;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8964))[0])();
}
else
{
void* const kont8964 = arg_buffer[2];
void* const x8965 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8964))[0])(kont8964, x8965);
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
void* const kont8967 = prim_car(lst);
void* const lst8969 = prim_cdr(lst);
void* const x8968 = apply_prim_int_u45_u62float(lst8969);
arg_buffer[1] = kont8967;
arg_buffer[2] = x8968;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8967))[0])();
}
else
{
void* const kont8967 = arg_buffer[2];
void* const x8968 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8967))[0])(kont8967, x8968);
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
void* const kont8970 = prim_car(lst);
void* const lst8972 = prim_cdr(lst);
void* const x8971 = apply_prim_hash(lst8972);
arg_buffer[1] = kont8970;
arg_buffer[2] = x8971;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8970))[0])();
}
else
{
void* const kont8970 = arg_buffer[2];
void* const x8971 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8970))[0])(kont8970, x8971);
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
void* const kont8973 = prim_car(lst);
void* const lst8975 = prim_cdr(lst);
void* const x8974 = apply_prim_hash_u45ref(lst8975);
arg_buffer[1] = kont8973;
arg_buffer[2] = x8974;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8973))[0])();
}
else
{
void* const kont8973 = arg_buffer[2];
void* const x8974 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8973))[0])(kont8973, x8974);
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
void* const kont8976 = prim_car(lst);
void* const lst8978 = prim_cdr(lst);
void* const x8977 = apply_prim_hash_u45set(lst8978);
arg_buffer[1] = kont8976;
arg_buffer[2] = x8977;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8976))[0])();
}
else
{
void* const kont8976 = arg_buffer[2];
void* const x8977 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8976))[0])(kont8976, x8977);
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
void* const kont8979 = prim_car(lst);
void* const lst8981 = prim_cdr(lst);
void* const x8980 = apply_prim_hash_u45keys(lst8981);
arg_buffer[1] = kont8979;
arg_buffer[2] = x8980;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8979))[0])();
}
else
{
void* const kont8979 = arg_buffer[2];
void* const x8980 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8979))[0])(kont8979, x8980);
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
void* const kont8982 = prim_car(lst);
void* const lst8984 = prim_cdr(lst);
void* const x8983 = apply_prim_hash_u45has_u45key_u63(lst8984);
arg_buffer[1] = kont8982;
arg_buffer[2] = x8983;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8982))[0])();
}
else
{
void* const kont8982 = arg_buffer[2];
void* const x8983 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8982))[0])(kont8982, x8983);
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
void* const kont8985 = prim_car(lst);
void* const lst8987 = prim_cdr(lst);
void* const x8986 = apply_prim_hash_u45count(lst8987);
arg_buffer[1] = kont8985;
arg_buffer[2] = x8986;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8985))[0])();
}
else
{
void* const kont8985 = arg_buffer[2];
void* const x8986 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8985))[0])(kont8985, x8986);
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
void* const kont8988 = prim_car(lst);
void* const lst8990 = prim_cdr(lst);
void* const x8989 = apply_prim_set(lst8990);
arg_buffer[1] = kont8988;
arg_buffer[2] = x8989;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8988))[0])();
}
else
{
void* const kont8988 = arg_buffer[2];
void* const x8989 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8988))[0])(kont8988, x8989);
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
void* const kont8991 = prim_car(lst);
void* const lst8993 = prim_cdr(lst);
void* const x8992 = apply_prim_set_u45_u62list(lst8993);
arg_buffer[1] = kont8991;
arg_buffer[2] = x8992;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8991))[0])();
}
else
{
void* const kont8991 = arg_buffer[2];
void* const x8992 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8991))[0])(kont8991, x8992);
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
void* const kont8994 = prim_car(lst);
void* const lst8996 = prim_cdr(lst);
void* const x8995 = apply_prim_list_u45_u62set(lst8996);
arg_buffer[1] = kont8994;
arg_buffer[2] = x8995;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8994))[0])();
}
else
{
void* const kont8994 = arg_buffer[2];
void* const x8995 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8994))[0])(kont8994, x8995);
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
void* const kont8997 = prim_car(lst);
void* const lst8999 = prim_cdr(lst);
void* const x8998 = apply_prim_set_u45add(lst8999);
arg_buffer[1] = kont8997;
arg_buffer[2] = x8998;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8997))[0])();
}
else
{
void* const kont8997 = arg_buffer[2];
void* const x8998 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8997))[0])(kont8997, x8998);
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
void* const kont9000 = prim_car(lst);
void* const lst9002 = prim_cdr(lst);
void* const x9001 = apply_prim_set_u45member_u63(lst9002);
arg_buffer[1] = kont9000;
arg_buffer[2] = x9001;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9000))[0])();
}
else
{
void* const kont9000 = arg_buffer[2];
void* const x9001 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9000))[0])(kont9000, x9001);
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
void* const kont9003 = prim_car(lst);
void* const lst9005 = prim_cdr(lst);
void* const x9004 = apply_prim_set_u45remove(lst9005);
arg_buffer[1] = kont9003;
arg_buffer[2] = x9004;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9003))[0])();
}
else
{
void* const kont9003 = arg_buffer[2];
void* const x9004 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9003))[0])(kont9003, x9004);
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
void* const kont9006 = prim_car(lst);
void* const lst9008 = prim_cdr(lst);
void* const x9007 = apply_prim_set_u45count(lst9008);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9006))[0])();
}
else
{
void* const kont9006 = arg_buffer[2];
void* const x9007 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9006))[0])(kont9006, x9007);
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
void* const kont9009 = prim_car(lst);
void* const lst9011 = prim_cdr(lst);
void* const x9010 = apply_prim_string_u63(lst9011);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
}
else
{
void* const kont9009 = arg_buffer[2];
void* const x9010 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9009))[0])(kont9009, x9010);
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
void* const kont9012 = prim_car(lst);
void* const lst9014 = prim_cdr(lst);
void* const x9013 = apply_prim_string_u45length(lst9014);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
}
else
{
void* const kont9012 = arg_buffer[2];
void* const x9013 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9012))[0])(kont9012, x9013);
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
void* const kont9015 = prim_car(lst);
void* const lst9017 = prim_cdr(lst);
void* const x9016 = apply_prim_string_u45ref(lst9017);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
}
else
{
void* const kont9015 = arg_buffer[2];
void* const x9016 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9015))[0])(kont9015, x9016);
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
void* const kont9018 = prim_car(lst);
void* const lst9020 = prim_cdr(lst);
void* const x9019 = apply_prim_substring(lst9020);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
}
else
{
void* const kont9018 = arg_buffer[2];
void* const x9019 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9018))[0])(kont9018, x9019);
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
void* const kont9021 = prim_car(lst);
void* const lst9023 = prim_cdr(lst);
void* const x9022 = apply_prim_string_u45append(lst9023);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
}
else
{
void* const kont9021 = arg_buffer[2];
void* const x9022 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9021))[0])(kont9021, x9022);
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
void* const kont9024 = prim_car(lst);
void* const lst9026 = prim_cdr(lst);
void* const x9025 = apply_prim_string_u45_u62list(lst9026);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
}
else
{
void* const kont9024 = arg_buffer[2];
void* const x9025 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9024))[0])(kont9024, x9025);
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
void* const kont9027 = prim_car(lst);
void* const lst9029 = prim_cdr(lst);
void* const x9028 = apply_prim_exact_u45floor(lst9029);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
}
else
{
void* const kont9027 = arg_buffer[2];
void* const x9028 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9027))[0])(kont9027, x9028);
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
void* const kont9030 = prim_car(lst);
void* const lst9032 = prim_cdr(lst);
void* const x9031 = apply_prim_exact_u45ceiling(lst9032);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
}
else
{
void* const kont9030 = arg_buffer[2];
void* const x9031 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9030))[0])(kont9030, x9031);
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
void* const kont9033 = prim_car(lst);
void* const lst9035 = prim_cdr(lst);
void* const x9034 = apply_prim_exact_u45round(lst9035);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
}
else
{
void* const kont9033 = arg_buffer[2];
void* const x9034 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9033))[0])(kont9033, x9034);
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
void* const kont9036 = prim_car(lst);
void* const lst9038 = prim_cdr(lst);
void* const x9037 = apply_prim_abs(lst9038);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
}
else
{
void* const kont9036 = arg_buffer[2];
void* const x9037 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9036))[0])(kont9036, x9037);
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
void* const kont9039 = prim_car(lst);
void* const lst9041 = prim_cdr(lst);
void* const x9040 = apply_prim_max(lst9041);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
}
else
{
void* const kont9039 = arg_buffer[2];
void* const x9040 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9039))[0])(kont9039, x9040);
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
void* const kont9042 = prim_car(lst);
void* const lst9044 = prim_cdr(lst);
void* const x9043 = apply_prim_min(lst9044);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
}
else
{
void* const kont9042 = arg_buffer[2];
void* const x9043 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9042))[0])(kont9042, x9043);
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
void* const kont9045 = prim_car(lst);
void* const lst9047 = prim_cdr(lst);
void* const x9046 = apply_prim_expt(lst9047);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
}
else
{
void* const kont9045 = arg_buffer[2];
void* const x9046 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9045))[0])(kont9045, x9046);
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
void* const kont9048 = prim_car(lst);
void* const lst9050 = prim_cdr(lst);
void* const x9049 = apply_prim_sqrt(lst9050);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
}
else
{
void* const kont9048 = arg_buffer[2];
void* const x9049 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9048))[0])(kont9048, x9049);
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
void* const kont9051 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9052 = apply_prim_remainder(lst9053);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
}
else
{
void* const kont9051 = arg_buffer[2];
void* const x9052 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9051))[0])(kont9051, x9052);
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
void* const kont9054 = prim_car(lst);
void* const lst9056 = prim_cdr(lst);
void* const x9055 = apply_prim_quotient(lst9056);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
}
else
{
void* const kont9054 = arg_buffer[2];
void* const x9055 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9054))[0])(kont9054, x9055);
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
void* const kont9057 = prim_car(lst);
void* const lst9059 = prim_cdr(lst);
void* const x9058 = apply_prim_random(lst9059);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
}
else
{
void* const kont9057 = arg_buffer[2];
void* const x9058 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9057))[0])(kont9057, x9058);
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
void* const kont9060 = prim_car(lst);
void* const lst9062 = prim_cdr(lst);
void* const x9061 = apply_prim_symbol_u63(lst9062);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
}
else
{
void* const kont9060 = arg_buffer[2];
void* const x9061 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9060))[0])(kont9060, x9061);
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
void* const kont9063 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9064 = apply_prim_pair_u63(lst9065);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
}
else
{
void* const kont9063 = arg_buffer[2];
void* const x9064 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9063))[0])(kont9063, x9064);
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
void* const kont9066 = prim_car(lst);
void* const lst9068 = prim_cdr(lst);
void* const x9067 = apply_prim_positive_u63(lst9068);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
}
else
{
void* const kont9066 = arg_buffer[2];
void* const x9067 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9066))[0])(kont9066, x9067);
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
void* const kont9069 = prim_car(lst);
void* const lst9071 = prim_cdr(lst);
void* const x9070 = apply_prim_negative_u63(lst9071);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
}
else
{
void* const kont9069 = arg_buffer[2];
void* const x9070 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9069))[0])(kont9069, x9070);
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
void* const kont9072 = prim_car(lst);
void* const lst9074 = prim_cdr(lst);
void* const x9073 = apply_prim_list(lst9074);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
}
else
{
void* const kont9072 = arg_buffer[2];
void* const x9073 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9072))[0])(kont9072, x9073);
}

}

inline void lam8870_fptr() // lam8870 -> generic version 
{
//reading env
void* const env8871 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8871);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8785));
}

inline void lam8870_spec(void* env8871, void* id_8785) // lam8870 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8871);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8785));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8841 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8841)[0])(kont8841, int8909);
}
else
{

//creating new make-kont closure
void** clo9075 = alloc_kont(lam8870_spec, 2);

//setting env list
clo9075[1] = kont8841;
clo9075[2] = int8913;
void* f_lam_8842 = encode_clo(clo9075);



//clo-app
length_spec(length, f_lam_8842, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8872, void* kont8841, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8841)[0])(kont8841, int8909);
}
else
{

//creating new make-kont closure
void** clo9076 = alloc_kont(lam8870_spec, 2);

//setting env list
clo9076[1] = kont8841;
clo9076[2] = int8913;
void* f_lam_8842 = encode_clo(clo9076);



//clo-app
length_spec(length, f_lam_8842, apply_prim_cdr_1(lst));
}

}

inline void lam8873_fptr() // lam8873 -> generic version 
{
//reading env
void* const env8874 = arg_buffer[1];
//reading env and args
void* const id_8789 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8874);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8789;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8873_spec(void* env8874, void* id_8789) // lam8873 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8874);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8789;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8843 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8843)[0])(kont8843, acc);
}
else
{

//creating new make-kont closure
void** clo9077 = alloc_kont(lam8873_spec, 3);

//setting env list
clo9077[1] = kont8843;
clo9077[2] = fun;
clo9077[3] = apply_prim_car_1(lst);
void* f_lam_8844 = encode_clo(clo9077);



//clo-app
foldr_spec(foldr, f_lam_8844, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8875, void* kont8843, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8843)[0])(kont8843, acc);
}
else
{

//creating new make-kont closure
void** clo9078 = alloc_kont(lam8873_spec, 3);

//setting env list
clo9078[1] = kont8843;
clo9078[2] = fun;
clo9078[3] = apply_prim_car_1(lst);
void* f_lam_8844 = encode_clo(clo9078);



//clo-app
foldr_spec(foldr, f_lam_8844, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8845 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8845)[0])(kont8845, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8845, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8876, void* kont8845, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8845)[0])(kont8845, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8845, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8846 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8846, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8877, void* kont8846, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8846, lst, apply_prim_list_0());
}

inline void lam8878_fptr() // lam8878 -> generic version 
{
//reading env
void* const env8879 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8879);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8798));
}

inline void lam8878_spec(void* env8879, void* id_8798) // lam8878 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8879);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8798));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8847 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8847)[0])(kont8847, rhs);
}
else
{

//creating new make-kont closure
void** clo9079 = alloc_kont(lam8878_spec, 2);

//setting env list
clo9079[1] = kont8847;
clo9079[2] = apply_prim_car_1(lhs);
void* f_lam_8848 = encode_clo(clo9079);



//clo-app
append1_spec(append1, f_lam_8848, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8880, void* kont8847, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8847)[0])(kont8847, rhs);
}
else
{

//creating new make-kont closure
void** clo9080 = alloc_kont(lam8878_spec, 2);

//setting env list
clo9080[1] = kont8847;
clo9080[2] = apply_prim_car_1(lhs);
void* f_lam_8848 = encode_clo(clo9080);



//clo-app
append1_spec(append1, f_lam_8848, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8881_fptr() // lam8881 -> generic version 
{
//reading env
void* const env8882 = arg_buffer[1];
//reading env and args
void* const xy8800 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8882);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8800);
}

inline void lam8881_spec(void* env8882, void* xy8800) // lam8881 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8882);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8800);
}

inline void lam8883_fptr() // lam8883 -> generic version 
{
//reading env
void* const env8884 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8884);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam8883_spec(void* env8884, void* id_8803) // lam8883 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8884);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam8885_fptr() // lam8885 -> generic version 
{
//reading env
void* const env8886 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8886);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9081 = alloc_kont(lam8881_spec, 1);

//setting env list
clo9081[1] = decode_clo_array[2];
void* f_lam_8850 = encode_clo(clo9081);



//clo-app
append1_spec(append1, f_lam_8850, decode_clo_array[1], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9082 = alloc_kont(lam8883_spec, 2);

//setting env list
clo9082[1] = decode_clo_array[2];
clo9082[2] = apply_prim_list_0();
void* f_lam_8851 = encode_clo(clo9082);



//clo-app
append1_spec(append1, f_lam_8851, apply_prim_list_2(decode_clo_array[1], decode_clo_array[3]), lsts);
}

}

inline void lam8885_spec(void* env8886, void* lsts) // lam8885 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8886);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9083 = alloc_kont(lam8881_spec, 1);

//setting env list
clo9083[1] = decode_clo_array[2];
void* f_lam_8850 = encode_clo(clo9083);



//clo-app
append1_spec(append1, f_lam_8850, decode_clo_array[1], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9084 = alloc_kont(lam8883_spec, 2);

//setting env list
clo9084[1] = decode_clo_array[2];
clo9084[2] = apply_prim_list_0();
void* f_lam_8851 = encode_clo(clo9084);



//clo-app
append1_spec(append1, f_lam_8851, apply_prim_list_2(decode_clo_array[1], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _8887 = arg_buffer[1];
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
void** clo9085 = alloc_kont(lam8885_spec, 3);

//setting env list
clo9085[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9085[2] = apply_prim_car_1(vargs);
clo9085[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_8852 = encode_clo(clo9085);


// kont-clo-app case
lam8885_spec(f_lam_8852, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam8888_fptr() // lam8888 -> generic version 
{
//reading env
void* const env8889 = arg_buffer[1];
//reading env and args
void* const xy8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8889);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void lam8888_spec(void* env8889, void* xy8806) // lam8888 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8889);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8853 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8909)))
{

//creating new make-kont closure
void** clo9086 = alloc_kont(lam8888_spec, 1);

//setting env list
clo9086[1] = kont8853;
void* f_lam_8854 = encode_clo(clo9086);



//clo-app
reverse_spec(reverse, f_lam_8854, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8853, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8913), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8890, void* kont8853, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8909)))
{

//creating new make-kont closure
void** clo9087 = alloc_kont(lam8888_spec, 1);

//setting env list
clo9087[1] = kont8853;
void* f_lam_8854 = encode_clo(clo9087);



//clo-app
reverse_spec(reverse, f_lam_8854, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8853, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8913), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8855 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8855, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8891, void* kont8855, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8855, lst, n, apply_prim_list_0());
}

inline void lam8892_fptr() // lam8892 -> generic version 
{
//reading env
void* const env8893 = arg_buffer[1];
//reading env and args
void* const res3 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8893);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_list_4(decode_clo_array[3], decode_clo_array[2], decode_clo_array[4], res3));
}

inline void lam8892_spec(void* env8893, void* res3) // lam8892 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8893);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_list_4(decode_clo_array[3], decode_clo_array[2], decode_clo_array[4], res3));
}

inline void lam8894_fptr() // lam8894 -> generic version 
{
//reading env
void* const env8895 = arg_buffer[1];
//reading env and args
void* const res2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8895);

//creating new make-kont closure
void** clo9088 = alloc_kont(lam8892_spec, 4);

//setting env list
clo9088[1] = decode_clo_array[1];
clo9088[2] = decode_clo_array[2];
clo9088[3] = decode_clo_array[3];
clo9088[4] = res2;
void* f_lam_8857 = encode_clo(clo9088);



//clo-apply
arg_buffer[1] = f;
arg_buffer[2] = cps_u45lst8858;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

inline void lam8894_spec(void* env8895, void* res2) // lam8894 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8895);

//creating new make-kont closure
void** clo9089 = alloc_kont(lam8892_spec, 4);

//setting env list
clo9089[1] = decode_clo_array[1];
clo9089[2] = decode_clo_array[2];
clo9089[3] = decode_clo_array[3];
clo9089[4] = res2;
void* f_lam_8857 = encode_clo(clo9089);



//clo-apply
arg_buffer[1] = f;
arg_buffer[2] = cps_u45lst8858;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

inline void lam8896_fptr() // lam8896 -> generic version 
{
//reading env
void* const env8897 = arg_buffer[1];
//reading env and args
void* const res0 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8897);

//creating new make-kont closure
void** clo9090 = alloc_kont(lam8894_spec, 4);

//setting env list
clo9090[1] = decode_clo_array[3];
clo9090[2] = res0;
clo9090[3] = decode_clo_array[1];
clo9090[4] = decode_clo_array[4];
void* f_lam_8859 = encode_clo(clo9090);



//clo-apply
arg_buffer[1] = f2;
arg_buffer[2] = cps_u45lst8860;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(f2))[0])();
}

inline void lam8896_spec(void* env8897, void* res0) // lam8896 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8897);

//creating new make-kont closure
void** clo9091 = alloc_kont(lam8894_spec, 4);

//setting env list
clo9091[1] = decode_clo_array[3];
clo9091[2] = res0;
clo9091[3] = decode_clo_array[1];
clo9091[4] = decode_clo_array[4];
void* f_lam_8859 = encode_clo(clo9091);



//clo-apply
arg_buffer[1] = f2;
arg_buffer[2] = cps_u45lst8860;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(f2))[0])();
}

inline void lam8898_fptr() // lam8898 -> generic version 
{
//reading env
void* const env8899 = arg_buffer[1];
//reading env and args
void* const res1 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8899);

//creating new make-kont closure
void** clo9092 = alloc_kont(lam8896_spec, 4);

//setting env list
clo9092[1] = res1;
clo9092[2] = decode_clo_array[2];
clo9092[3] = decode_clo_array[1];
clo9092[4] = decode_clo_array[3];
void* f_lam_8861 = encode_clo(clo9092);



//clo-apply
arg_buffer[1] = modulo;
arg_buffer[2] = cps_u45lst8862;
numArgs = 2;
modulo_fptr();
}

inline void lam8898_spec(void* env8899, void* res1) // lam8898 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8899);

//creating new make-kont closure
void** clo9093 = alloc_kont(lam8896_spec, 4);

//setting env list
clo9093[1] = res1;
clo9093[2] = decode_clo_array[2];
clo9093[3] = decode_clo_array[1];
clo9093[4] = decode_clo_array[3];
void* f_lam_8861 = encode_clo(clo9093);



//clo-apply
arg_buffer[1] = modulo;
arg_buffer[2] = cps_u45lst8862;
numArgs = 2;
modulo_fptr();
}

inline void call_u452_fptr() // call-2 -> generic version 
{
//reading env and args
void* const kont8856 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const f2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9094 = alloc_kont(lam8898_spec, 3);

//setting env list
clo9094[1] = kont8856;
clo9094[2] = f2;
clo9094[3] = f;
void* f_lam_8863 = encode_clo(clo9094);



//clo-apply
arg_buffer[1] = _u43;
arg_buffer[2] = cps_u45lst8864;
numArgs = 2;
_u43_fptr();
}

inline void call_u452_spec(void* _8900, void* kont8856, void* f, void* f2) // call-2 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9095 = alloc_kont(lam8898_spec, 3);

//setting env list
clo9095[1] = kont8856;
clo9095[2] = f2;
clo9095[3] = f;
void* f_lam_8863 = encode_clo(clo9095);



//clo-apply
arg_buffer[1] = _u43;
arg_buffer[2] = cps_u45lst8864;
numArgs = 2;
_u43_fptr();
}

inline void lam8901_fptr() // lam8901 -> generic version 
{
//reading env
void* const env8902 = arg_buffer[1];
//reading env and args
void* const xy8822 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8902);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8822);
}

inline void lam8901_spec(void* env8902, void* xy8822) // lam8901 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8902);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8822);
}

inline void call_fptr() // call -> generic version 
{
//reading env and args
void* const kont8865 = arg_buffer[2];
void* const f3 = arg_buffer[3];
void* const f2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9096 = alloc_kont(lam8901_spec, 1);

//setting env list
clo9096[1] = kont8865;
void* f_lam_8866 = encode_clo(clo9096);



//clo-app
call_u452_spec(call_u452, f_lam_8866, modulo, _u43);
}

inline void call_spec(void* _8903, void* kont8865, void* f3, void* f2) // call 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9097 = alloc_kont(lam8901_spec, 1);

//setting env list
clo9097[1] = kont8865;
void* f_lam_8866 = encode_clo(clo9097);



//clo-app
call_u452_spec(call_u452, f_lam_8866, modulo, _u43);
}

inline void lam8904_fptr() // lam8904 -> generic version 
{
//reading env
void* const env8905 = arg_buffer[1];
//reading env and args
void* const xy8823 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8905);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8823);
}

inline void lam8904_spec(void* env8905, void* xy8823) // lam8904 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8905);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8823);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8867 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9098 = alloc_kont(lam8904_spec, 1);

//setting env list
clo9098[1] = kont8867;
void* f_lam_8868 = encode_clo(clo9098);



//clo-app
call_spec(call, f_lam_8868, _u47, _u42);
}

inline void brouhaha_main_spec(void* _8906, void* kont8867) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9099 = alloc_kont(lam8904_spec, 1);

//setting env list
clo9099[1] = kont8867;
void* f_lam_8868 = encode_clo(clo9099);



//clo-app
call_spec(call, f_lam_8868, _u47, _u42);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8909 = reinterpret_cast<void *>(encode_int(0));
float8915 = reinterpret_cast<void *>(encode_float(24.0));
int8913 = reinterpret_cast<void *>(encode_int(1));
int8912 = reinterpret_cast<void *>(encode_int(3));
int8911 = reinterpret_cast<void *>(encode_int(4));
int8914 = reinterpret_cast<void *>(encode_int(28));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

