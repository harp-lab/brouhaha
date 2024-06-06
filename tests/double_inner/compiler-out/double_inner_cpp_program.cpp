#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8860;
void* int8863;
void* int8864;
void* int8865;
void* int8862;



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

void lam8836_fptr(); // lam8836
void lam8836_spec(void* env8837, void* id_8784); // lam8836
void* lam8836 = encode_clo(alloc_clo(lam8836_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8838, void* kont8820, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8839_fptr(); // lam8839
void lam8839_spec(void* env8840, void* id_8788); // lam8839
void* lam8839 = encode_clo(alloc_clo(lam8839_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8841, void* kont8822, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8842_fptr(); // lam8842
void lam8842_spec(void* env8843, void* id_8792); // lam8842
void* lam8842 = encode_clo(alloc_clo(lam8842_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8844, void* kont8824, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8845_fptr(); // lam8845
void lam8845_spec(void* env8846, void* xy8794); // lam8845
void* lam8845 = encode_clo(alloc_clo(lam8845_fptr, 0));

void lam8847_fptr(); // lam8847
void lam8847_spec(void* env8848, void* id_8797); // lam8847
void* lam8847 = encode_clo(alloc_clo(lam8847_fptr, 0));

void lam8849_fptr(); // lam8849
void lam8849_spec(void* env8850, void* lsts); // lam8849
void* lam8849 = encode_clo(alloc_clo(lam8849_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8852_fptr(); // lam8852
void lam8852_spec(void* env8853, void* id_8802); // lam8852
void* lam8852 = encode_clo(alloc_clo(lam8852_fptr, 0));

void call_u45f_fptr(); // call-f
void call_u45f_spec(void* _8854, void* kont8830, void* f, void* x, void* y, void* z); // call-f
void* call_u45f = encode_clo(alloc_clo(call_u45f_fptr, 0));

void lam8855_fptr(); // lam8855
void lam8855_spec(void* env8856, void* xy8803); // lam8855
void* lam8855 = encode_clo(alloc_clo(lam8855_fptr, 0));

void intermediate_fptr(); // intermediate
void intermediate_spec(void* _8857, void* kont8832, void* x, void* y, void* z); // intermediate
void* intermediate = encode_clo(alloc_clo(intermediate_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8858, void* kont8834); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8866 = prim_car(lst);
void* const lst8868 = prim_cdr(lst);
void* const x8867 = apply_prim__u43(lst8868);
arg_buffer[1] = kont8866;
arg_buffer[2] = x8867;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8866))[0])();
}
else
{
void* const kont8866 = arg_buffer[2];
void* const x8867 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8866))[0])(kont8866, x8867);
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
void* const kont8869 = prim_car(lst);
void* const lst8871 = prim_cdr(lst);
void* const x8870 = apply_prim__u45(lst8871);
arg_buffer[1] = kont8869;
arg_buffer[2] = x8870;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8869))[0])();
}
else
{
void* const kont8869 = arg_buffer[2];
void* const x8870 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8869))[0])(kont8869, x8870);
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
void* const kont8872 = prim_car(lst);
void* const lst8874 = prim_cdr(lst);
void* const x8873 = apply_prim__u42(lst8874);
arg_buffer[1] = kont8872;
arg_buffer[2] = x8873;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8872))[0])();
}
else
{
void* const kont8872 = arg_buffer[2];
void* const x8873 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8872))[0])(kont8872, x8873);
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
void* const kont8875 = prim_car(lst);
void* const lst8877 = prim_cdr(lst);
void* const x8876 = apply_prim__u47(lst8877);
arg_buffer[1] = kont8875;
arg_buffer[2] = x8876;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8875))[0])();
}
else
{
void* const kont8875 = arg_buffer[2];
void* const x8876 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8875))[0])(kont8875, x8876);
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
void* const kont8878 = prim_car(lst);
void* const lst8880 = prim_cdr(lst);
void* const x8879 = apply_prim__u61(lst8880);
arg_buffer[1] = kont8878;
arg_buffer[2] = x8879;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8878))[0])();
}
else
{
void* const kont8878 = arg_buffer[2];
void* const x8879 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8878))[0])(kont8878, x8879);
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
void* const kont8881 = prim_car(lst);
void* const lst8883 = prim_cdr(lst);
void* const x8882 = apply_prim__u62(lst8883);
arg_buffer[1] = kont8881;
arg_buffer[2] = x8882;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8881))[0])();
}
else
{
void* const kont8881 = arg_buffer[2];
void* const x8882 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8881))[0])(kont8881, x8882);
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
void* const kont8884 = prim_car(lst);
void* const lst8886 = prim_cdr(lst);
void* const x8885 = apply_prim__u60(lst8886);
arg_buffer[1] = kont8884;
arg_buffer[2] = x8885;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8884))[0])();
}
else
{
void* const kont8884 = arg_buffer[2];
void* const x8885 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8884))[0])(kont8884, x8885);
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
void* const kont8887 = prim_car(lst);
void* const lst8889 = prim_cdr(lst);
void* const x8888 = apply_prim__u60_u61(lst8889);
arg_buffer[1] = kont8887;
arg_buffer[2] = x8888;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8887))[0])();
}
else
{
void* const kont8887 = arg_buffer[2];
void* const x8888 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8887))[0])(kont8887, x8888);
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
void* const kont8890 = prim_car(lst);
void* const lst8892 = prim_cdr(lst);
void* const x8891 = apply_prim__u62_u61(lst8892);
arg_buffer[1] = kont8890;
arg_buffer[2] = x8891;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8890))[0])();
}
else
{
void* const kont8890 = arg_buffer[2];
void* const x8891 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8890))[0])(kont8890, x8891);
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
void* const kont8893 = prim_car(lst);
void* const lst8895 = prim_cdr(lst);
void* const x8894 = apply_prim_modulo(lst8895);
arg_buffer[1] = kont8893;
arg_buffer[2] = x8894;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8893))[0])();
}
else
{
void* const kont8893 = arg_buffer[2];
void* const x8894 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8893))[0])(kont8893, x8894);
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
void* const kont8896 = prim_car(lst);
void* const lst8898 = prim_cdr(lst);
void* const x8897 = apply_prim_null_u63(lst8898);
arg_buffer[1] = kont8896;
arg_buffer[2] = x8897;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8896))[0])();
}
else
{
void* const kont8896 = arg_buffer[2];
void* const x8897 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8896))[0])(kont8896, x8897);
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
void* const kont8899 = prim_car(lst);
void* const lst8901 = prim_cdr(lst);
void* const x8900 = apply_prim_equal_u63(lst8901);
arg_buffer[1] = kont8899;
arg_buffer[2] = x8900;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8899))[0])();
}
else
{
void* const kont8899 = arg_buffer[2];
void* const x8900 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8899))[0])(kont8899, x8900);
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
void* const kont8902 = prim_car(lst);
void* const lst8904 = prim_cdr(lst);
void* const x8903 = apply_prim_eq_u63(lst8904);
arg_buffer[1] = kont8902;
arg_buffer[2] = x8903;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8902))[0])();
}
else
{
void* const kont8902 = arg_buffer[2];
void* const x8903 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8902))[0])(kont8902, x8903);
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
void* const kont8905 = prim_car(lst);
void* const lst8907 = prim_cdr(lst);
void* const x8906 = apply_prim_cons(lst8907);
arg_buffer[1] = kont8905;
arg_buffer[2] = x8906;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8905))[0])();
}
else
{
void* const kont8905 = arg_buffer[2];
void* const x8906 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8905))[0])(kont8905, x8906);
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
void* const kont8908 = prim_car(lst);
void* const lst8910 = prim_cdr(lst);
void* const x8909 = apply_prim_car(lst8910);
arg_buffer[1] = kont8908;
arg_buffer[2] = x8909;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8908))[0])();
}
else
{
void* const kont8908 = arg_buffer[2];
void* const x8909 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8908))[0])(kont8908, x8909);
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
void* const kont8911 = prim_car(lst);
void* const lst8913 = prim_cdr(lst);
void* const x8912 = apply_prim_cdr(lst8913);
arg_buffer[1] = kont8911;
arg_buffer[2] = x8912;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8911))[0])();
}
else
{
void* const kont8911 = arg_buffer[2];
void* const x8912 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8911))[0])(kont8911, x8912);
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
void* const kont8914 = prim_car(lst);
void* const lst8916 = prim_cdr(lst);
void* const x8915 = apply_prim_float_u45_u62int(lst8916);
arg_buffer[1] = kont8914;
arg_buffer[2] = x8915;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8914))[0])();
}
else
{
void* const kont8914 = arg_buffer[2];
void* const x8915 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8914))[0])(kont8914, x8915);
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
void* const kont8917 = prim_car(lst);
void* const lst8919 = prim_cdr(lst);
void* const x8918 = apply_prim_int_u45_u62float(lst8919);
arg_buffer[1] = kont8917;
arg_buffer[2] = x8918;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8917))[0])();
}
else
{
void* const kont8917 = arg_buffer[2];
void* const x8918 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8917))[0])(kont8917, x8918);
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
void* const kont8920 = prim_car(lst);
void* const lst8922 = prim_cdr(lst);
void* const x8921 = apply_prim_hash(lst8922);
arg_buffer[1] = kont8920;
arg_buffer[2] = x8921;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8920))[0])();
}
else
{
void* const kont8920 = arg_buffer[2];
void* const x8921 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8920))[0])(kont8920, x8921);
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
void* const kont8923 = prim_car(lst);
void* const lst8925 = prim_cdr(lst);
void* const x8924 = apply_prim_hash_u45ref(lst8925);
arg_buffer[1] = kont8923;
arg_buffer[2] = x8924;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8923))[0])();
}
else
{
void* const kont8923 = arg_buffer[2];
void* const x8924 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8923))[0])(kont8923, x8924);
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
void* const kont8926 = prim_car(lst);
void* const lst8928 = prim_cdr(lst);
void* const x8927 = apply_prim_hash_u45set(lst8928);
arg_buffer[1] = kont8926;
arg_buffer[2] = x8927;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8926))[0])();
}
else
{
void* const kont8926 = arg_buffer[2];
void* const x8927 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8926))[0])(kont8926, x8927);
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
void* const kont8929 = prim_car(lst);
void* const lst8931 = prim_cdr(lst);
void* const x8930 = apply_prim_hash_u45keys(lst8931);
arg_buffer[1] = kont8929;
arg_buffer[2] = x8930;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8929))[0])();
}
else
{
void* const kont8929 = arg_buffer[2];
void* const x8930 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8929))[0])(kont8929, x8930);
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
void* const kont8932 = prim_car(lst);
void* const lst8934 = prim_cdr(lst);
void* const x8933 = apply_prim_hash_u45has_u45key_u63(lst8934);
arg_buffer[1] = kont8932;
arg_buffer[2] = x8933;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8932))[0])();
}
else
{
void* const kont8932 = arg_buffer[2];
void* const x8933 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8932))[0])(kont8932, x8933);
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
void* const kont8935 = prim_car(lst);
void* const lst8937 = prim_cdr(lst);
void* const x8936 = apply_prim_hash_u45count(lst8937);
arg_buffer[1] = kont8935;
arg_buffer[2] = x8936;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8935))[0])();
}
else
{
void* const kont8935 = arg_buffer[2];
void* const x8936 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8935))[0])(kont8935, x8936);
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
void* const kont8938 = prim_car(lst);
void* const lst8940 = prim_cdr(lst);
void* const x8939 = apply_prim_set(lst8940);
arg_buffer[1] = kont8938;
arg_buffer[2] = x8939;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8938))[0])();
}
else
{
void* const kont8938 = arg_buffer[2];
void* const x8939 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8938))[0])(kont8938, x8939);
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
void* const kont8941 = prim_car(lst);
void* const lst8943 = prim_cdr(lst);
void* const x8942 = apply_prim_set_u45_u62list(lst8943);
arg_buffer[1] = kont8941;
arg_buffer[2] = x8942;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8941))[0])();
}
else
{
void* const kont8941 = arg_buffer[2];
void* const x8942 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8941))[0])(kont8941, x8942);
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
void* const kont8944 = prim_car(lst);
void* const lst8946 = prim_cdr(lst);
void* const x8945 = apply_prim_list_u45_u62set(lst8946);
arg_buffer[1] = kont8944;
arg_buffer[2] = x8945;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8944))[0])();
}
else
{
void* const kont8944 = arg_buffer[2];
void* const x8945 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8944))[0])(kont8944, x8945);
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
void* const kont8947 = prim_car(lst);
void* const lst8949 = prim_cdr(lst);
void* const x8948 = apply_prim_set_u45add(lst8949);
arg_buffer[1] = kont8947;
arg_buffer[2] = x8948;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8947))[0])();
}
else
{
void* const kont8947 = arg_buffer[2];
void* const x8948 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8947))[0])(kont8947, x8948);
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
void* const kont8950 = prim_car(lst);
void* const lst8952 = prim_cdr(lst);
void* const x8951 = apply_prim_set_u45member_u63(lst8952);
arg_buffer[1] = kont8950;
arg_buffer[2] = x8951;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8950))[0])();
}
else
{
void* const kont8950 = arg_buffer[2];
void* const x8951 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8950))[0])(kont8950, x8951);
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
void* const kont8953 = prim_car(lst);
void* const lst8955 = prim_cdr(lst);
void* const x8954 = apply_prim_set_u45remove(lst8955);
arg_buffer[1] = kont8953;
arg_buffer[2] = x8954;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8953))[0])();
}
else
{
void* const kont8953 = arg_buffer[2];
void* const x8954 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8953))[0])(kont8953, x8954);
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
void* const kont8956 = prim_car(lst);
void* const lst8958 = prim_cdr(lst);
void* const x8957 = apply_prim_set_u45count(lst8958);
arg_buffer[1] = kont8956;
arg_buffer[2] = x8957;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8956))[0])();
}
else
{
void* const kont8956 = arg_buffer[2];
void* const x8957 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8956))[0])(kont8956, x8957);
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
void* const kont8959 = prim_car(lst);
void* const lst8961 = prim_cdr(lst);
void* const x8960 = apply_prim_string_u63(lst8961);
arg_buffer[1] = kont8959;
arg_buffer[2] = x8960;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8959))[0])();
}
else
{
void* const kont8959 = arg_buffer[2];
void* const x8960 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8959))[0])(kont8959, x8960);
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
void* const kont8962 = prim_car(lst);
void* const lst8964 = prim_cdr(lst);
void* const x8963 = apply_prim_string_u45length(lst8964);
arg_buffer[1] = kont8962;
arg_buffer[2] = x8963;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8962))[0])();
}
else
{
void* const kont8962 = arg_buffer[2];
void* const x8963 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8962))[0])(kont8962, x8963);
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
void* const kont8965 = prim_car(lst);
void* const lst8967 = prim_cdr(lst);
void* const x8966 = apply_prim_string_u45ref(lst8967);
arg_buffer[1] = kont8965;
arg_buffer[2] = x8966;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8965))[0])();
}
else
{
void* const kont8965 = arg_buffer[2];
void* const x8966 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8965))[0])(kont8965, x8966);
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
void* const kont8968 = prim_car(lst);
void* const lst8970 = prim_cdr(lst);
void* const x8969 = apply_prim_substring(lst8970);
arg_buffer[1] = kont8968;
arg_buffer[2] = x8969;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8968))[0])();
}
else
{
void* const kont8968 = arg_buffer[2];
void* const x8969 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8968))[0])(kont8968, x8969);
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
void* const kont8971 = prim_car(lst);
void* const lst8973 = prim_cdr(lst);
void* const x8972 = apply_prim_string_u45append(lst8973);
arg_buffer[1] = kont8971;
arg_buffer[2] = x8972;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8971))[0])();
}
else
{
void* const kont8971 = arg_buffer[2];
void* const x8972 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8971))[0])(kont8971, x8972);
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
void* const kont8974 = prim_car(lst);
void* const lst8976 = prim_cdr(lst);
void* const x8975 = apply_prim_string_u45_u62list(lst8976);
arg_buffer[1] = kont8974;
arg_buffer[2] = x8975;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8974))[0])();
}
else
{
void* const kont8974 = arg_buffer[2];
void* const x8975 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8974))[0])(kont8974, x8975);
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
void* const kont8977 = prim_car(lst);
void* const lst8979 = prim_cdr(lst);
void* const x8978 = apply_prim_exact_u45floor(lst8979);
arg_buffer[1] = kont8977;
arg_buffer[2] = x8978;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8977))[0])();
}
else
{
void* const kont8977 = arg_buffer[2];
void* const x8978 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8977))[0])(kont8977, x8978);
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
void* const kont8980 = prim_car(lst);
void* const lst8982 = prim_cdr(lst);
void* const x8981 = apply_prim_exact_u45ceiling(lst8982);
arg_buffer[1] = kont8980;
arg_buffer[2] = x8981;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8980))[0])();
}
else
{
void* const kont8980 = arg_buffer[2];
void* const x8981 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8980))[0])(kont8980, x8981);
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
void* const kont8983 = prim_car(lst);
void* const lst8985 = prim_cdr(lst);
void* const x8984 = apply_prim_exact_u45round(lst8985);
arg_buffer[1] = kont8983;
arg_buffer[2] = x8984;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8983))[0])();
}
else
{
void* const kont8983 = arg_buffer[2];
void* const x8984 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8983))[0])(kont8983, x8984);
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
void* const kont8986 = prim_car(lst);
void* const lst8988 = prim_cdr(lst);
void* const x8987 = apply_prim_abs(lst8988);
arg_buffer[1] = kont8986;
arg_buffer[2] = x8987;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8986))[0])();
}
else
{
void* const kont8986 = arg_buffer[2];
void* const x8987 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8986))[0])(kont8986, x8987);
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
void* const kont8989 = prim_car(lst);
void* const lst8991 = prim_cdr(lst);
void* const x8990 = apply_prim_max(lst8991);
arg_buffer[1] = kont8989;
arg_buffer[2] = x8990;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8989))[0])();
}
else
{
void* const kont8989 = arg_buffer[2];
void* const x8990 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8989))[0])(kont8989, x8990);
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
void* const kont8992 = prim_car(lst);
void* const lst8994 = prim_cdr(lst);
void* const x8993 = apply_prim_min(lst8994);
arg_buffer[1] = kont8992;
arg_buffer[2] = x8993;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8992))[0])();
}
else
{
void* const kont8992 = arg_buffer[2];
void* const x8993 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8992))[0])(kont8992, x8993);
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
void* const kont8995 = prim_car(lst);
void* const lst8997 = prim_cdr(lst);
void* const x8996 = apply_prim_expt(lst8997);
arg_buffer[1] = kont8995;
arg_buffer[2] = x8996;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
}
else
{
void* const kont8995 = arg_buffer[2];
void* const x8996 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8995))[0])(kont8995, x8996);
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
void* const kont8998 = prim_car(lst);
void* const lst9000 = prim_cdr(lst);
void* const x8999 = apply_prim_sqrt(lst9000);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
}
else
{
void* const kont8998 = arg_buffer[2];
void* const x8999 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8998))[0])(kont8998, x8999);
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
void* const kont9001 = prim_car(lst);
void* const lst9003 = prim_cdr(lst);
void* const x9002 = apply_prim_remainder(lst9003);
arg_buffer[1] = kont9001;
arg_buffer[2] = x9002;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
}
else
{
void* const kont9001 = arg_buffer[2];
void* const x9002 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9001))[0])(kont9001, x9002);
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
void* const kont9004 = prim_car(lst);
void* const lst9006 = prim_cdr(lst);
void* const x9005 = apply_prim_quotient(lst9006);
arg_buffer[1] = kont9004;
arg_buffer[2] = x9005;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
}
else
{
void* const kont9004 = arg_buffer[2];
void* const x9005 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9004))[0])(kont9004, x9005);
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
void* const kont9007 = prim_car(lst);
void* const lst9009 = prim_cdr(lst);
void* const x9008 = apply_prim_random(lst9009);
arg_buffer[1] = kont9007;
arg_buffer[2] = x9008;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
}
else
{
void* const kont9007 = arg_buffer[2];
void* const x9008 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9007))[0])(kont9007, x9008);
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
void* const kont9010 = prim_car(lst);
void* const lst9012 = prim_cdr(lst);
void* const x9011 = apply_prim_symbol_u63(lst9012);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
}
else
{
void* const kont9010 = arg_buffer[2];
void* const x9011 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9010))[0])(kont9010, x9011);
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
void* const kont9013 = prim_car(lst);
void* const lst9015 = prim_cdr(lst);
void* const x9014 = apply_prim_pair_u63(lst9015);
arg_buffer[1] = kont9013;
arg_buffer[2] = x9014;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
}
else
{
void* const kont9013 = arg_buffer[2];
void* const x9014 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9013))[0])(kont9013, x9014);
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
void* const kont9016 = prim_car(lst);
void* const lst9018 = prim_cdr(lst);
void* const x9017 = apply_prim_positive_u63(lst9018);
arg_buffer[1] = kont9016;
arg_buffer[2] = x9017;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
}
else
{
void* const kont9016 = arg_buffer[2];
void* const x9017 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9016))[0])(kont9016, x9017);
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
void* const kont9019 = prim_car(lst);
void* const lst9021 = prim_cdr(lst);
void* const x9020 = apply_prim_negative_u63(lst9021);
arg_buffer[1] = kont9019;
arg_buffer[2] = x9020;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
}
else
{
void* const kont9019 = arg_buffer[2];
void* const x9020 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9019))[0])(kont9019, x9020);
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
void* const kont9022 = prim_car(lst);
void* const lst9024 = prim_cdr(lst);
void* const x9023 = apply_prim_list(lst9024);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
}
else
{
void* const kont9022 = arg_buffer[2];
void* const x9023 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9022))[0])(kont9022, x9023);
}

}

inline void lam8836_fptr() // lam8836 -> generic version 
{
//reading env
void* const env8837 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8837);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8784));
}

inline void lam8836_spec(void* env8837, void* id_8784) // lam8836 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8837);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8784));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8820 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8820)[0])(kont8820, int8860);
}
else
{

//creating new make-kont closure
void** clo9025 = alloc_kont(lam8836_spec, 2);

//setting env list
clo9025[1] = int8863;
clo9025[2] = kont8820;
void* f_lam_8821 = encode_clo(clo9025);



//clo-app
length_spec(length, f_lam_8821, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8838, void* kont8820, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8820)[0])(kont8820, int8860);
}
else
{

//creating new make-kont closure
void** clo9026 = alloc_kont(lam8836_spec, 2);

//setting env list
clo9026[1] = int8863;
clo9026[2] = kont8820;
void* f_lam_8821 = encode_clo(clo9026);



//clo-app
length_spec(length, f_lam_8821, apply_prim_cdr_1(lst));
}

}

inline void lam8839_fptr() // lam8839 -> generic version 
{
//reading env
void* const env8840 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8840);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8788;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8839_spec(void* env8840, void* id_8788) // lam8839 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8840);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8788;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8822 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8822)[0])(kont8822, acc);
}
else
{

//creating new make-kont closure
void** clo9027 = alloc_kont(lam8839_spec, 3);

//setting env list
clo9027[1] = fun;
clo9027[2] = kont8822;
clo9027[3] = apply_prim_car_1(lst);
void* f_lam_8823 = encode_clo(clo9027);



//clo-app
foldr_spec(foldr, f_lam_8823, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8841, void* kont8822, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8822)[0])(kont8822, acc);
}
else
{

//creating new make-kont closure
void** clo9028 = alloc_kont(lam8839_spec, 3);

//setting env list
clo9028[1] = fun;
clo9028[2] = kont8822;
clo9028[3] = apply_prim_car_1(lst);
void* f_lam_8823 = encode_clo(clo9028);



//clo-app
foldr_spec(foldr, f_lam_8823, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void lam8842_fptr() // lam8842 -> generic version 
{
//reading env
void* const env8843 = arg_buffer[1];
//reading env and args
void* const id_8792 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8843);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8792));
}

inline void lam8842_spec(void* env8843, void* id_8792) // lam8842 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8843);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8792));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8824 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8824)[0])(kont8824, rhs);
}
else
{

//creating new make-kont closure
void** clo9029 = alloc_kont(lam8842_spec, 2);

//setting env list
clo9029[1] = kont8824;
clo9029[2] = apply_prim_car_1(lhs);
void* f_lam_8825 = encode_clo(clo9029);



//clo-app
append1_spec(append1, f_lam_8825, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8844, void* kont8824, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8824)[0])(kont8824, rhs);
}
else
{

//creating new make-kont closure
void** clo9030 = alloc_kont(lam8842_spec, 2);

//setting env list
clo9030[1] = kont8824;
clo9030[2] = apply_prim_car_1(lhs);
void* f_lam_8825 = encode_clo(clo9030);



//clo-app
append1_spec(append1, f_lam_8825, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8845_fptr() // lam8845 -> generic version 
{
//reading env
void* const env8846 = arg_buffer[1];
//reading env and args
void* const xy8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8846);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8845_spec(void* env8846, void* xy8794) // lam8845 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8846);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8847_fptr() // lam8847 -> generic version 
{
//reading env
void* const env8848 = arg_buffer[1];
//reading env and args
void* const id_8797 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8848);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8797);
}

inline void lam8847_spec(void* env8848, void* id_8797) // lam8847 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8848);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8797);
}

inline void lam8849_fptr() // lam8849 -> generic version 
{
//reading env
void* const env8850 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8850);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9031 = alloc_kont(lam8845_spec, 1);

//setting env list
clo9031[1] = decode_clo_array[1];
void* f_lam_8827 = encode_clo(clo9031);



//clo-app
append1_spec(append1, f_lam_8827, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9032 = alloc_kont(lam8847_spec, 2);

//setting env list
clo9032[1] = apply_prim_list_0();
clo9032[2] = decode_clo_array[1];
void* f_lam_8828 = encode_clo(clo9032);



//clo-app
append1_spec(append1, f_lam_8828, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

inline void lam8849_spec(void* env8850, void* lsts) // lam8849 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8850);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9033 = alloc_kont(lam8845_spec, 1);

//setting env list
clo9033[1] = decode_clo_array[1];
void* f_lam_8827 = encode_clo(clo9033);



//clo-app
append1_spec(append1, f_lam_8827, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9034 = alloc_kont(lam8847_spec, 2);

//setting env list
clo9034[1] = apply_prim_list_0();
clo9034[2] = decode_clo_array[1];
void* f_lam_8828 = encode_clo(clo9034);



//clo-app
append1_spec(append1, f_lam_8828, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _8851 = arg_buffer[1];
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
void** clo9035 = alloc_kont(lam8849_spec, 3);

//setting env list
clo9035[1] = apply_prim_car_1(vargs);
clo9035[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9035[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_8829 = encode_clo(clo9035);


// kont-clo-app case
lam8849_spec(f_lam_8829, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam8852_fptr() // lam8852 -> generic version 
{
//reading env
void* const env8853 = arg_buffer[1];
//reading env and args
void* const id_8802 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8853);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_3(decode_clo_array[3], decode_clo_array[2], id_8802));
}

inline void lam8852_spec(void* env8853, void* id_8802) // lam8852 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8853);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_3(decode_clo_array[3], decode_clo_array[2], id_8802));
}

inline void call_u45f_fptr() // call-f -> generic version 
{
//reading env and args
void* const kont8830 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const x = arg_buffer[4];
void* const y = arg_buffer[5];
void* const z = arg_buffer[6];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9036 = alloc_kont(lam8852_spec, 3);

//setting env list
clo9036[1] = kont8830;
clo9036[2] = apply_prim__u43_3(x, y, z);
clo9036[3] = apply_prim__u43_2(int8862, x);
void* f_lam_8831 = encode_clo(clo9036);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_8831;
arg_buffer[3] = int8862;
arg_buffer[4] = x;
arg_buffer[5] = y;
arg_buffer[6] = z;
numArgs = 6;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

inline void call_u45f_spec(void* _8854, void* kont8830, void* f, void* x, void* y, void* z) // call-f 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9037 = alloc_kont(lam8852_spec, 3);

//setting env list
clo9037[1] = kont8830;
clo9037[2] = apply_prim__u43_3(x, y, z);
clo9037[3] = apply_prim__u43_2(int8862, x);
void* f_lam_8831 = encode_clo(clo9037);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_8831;
arg_buffer[3] = int8862;
arg_buffer[4] = x;
arg_buffer[5] = y;
arg_buffer[6] = z;
numArgs = 6;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

inline void lam8855_fptr() // lam8855 -> generic version 
{
//reading env
void* const env8856 = arg_buffer[1];
//reading env and args
void* const xy8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8856);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8803);
}

inline void lam8855_spec(void* env8856, void* xy8803) // lam8855 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8856);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8803);
}

inline void intermediate_fptr() // intermediate -> generic version 
{
//reading env and args
void* const kont8832 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const y = arg_buffer[4];
void* const z = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9038 = alloc_kont(lam8855_spec, 1);

//setting env list
clo9038[1] = kont8832;
void* f_lam_8833 = encode_clo(clo9038);



//clo-app
call_u45f_spec(call_u45f, f_lam_8833, _u43, x, y, z);
}

inline void intermediate_spec(void* _8857, void* kont8832, void* x, void* y, void* z) // intermediate 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9039 = alloc_kont(lam8855_spec, 1);

//setting env list
clo9039[1] = kont8832;
void* f_lam_8833 = encode_clo(clo9039);



//clo-app
call_u45f_spec(call_u45f, f_lam_8833, _u43, x, y, z);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8834 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
intermediate_spec(intermediate, kont8834, int8863, int8864, int8865);
}

inline void brouhaha_main_spec(void* _8858, void* kont8834) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
intermediate_spec(intermediate, kont8834, int8863, int8864, int8865);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8860 = reinterpret_cast<void *>(encode_int(0));
int8863 = reinterpret_cast<void *>(encode_int(1));
int8864 = reinterpret_cast<void *>(encode_int(2));
int8865 = reinterpret_cast<void *>(encode_int(3));
int8862 = reinterpret_cast<void *>(encode_int(10));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

