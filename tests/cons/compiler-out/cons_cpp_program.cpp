#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8849;
void* int8850;
void* int8851;



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

void lam8828_fptr(); // lam8828
void lam8828_spec(void* env8829, void* id_8784); // lam8828
void* lam8828 = encode_clo(alloc_clo(lam8828_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8830, void* kont8814, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8831_fptr(); // lam8831
void lam8831_spec(void* env8832, void* id_8788); // lam8831
void* lam8831 = encode_clo(alloc_clo(lam8831_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8833, void* kont8816, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8834_fptr(); // lam8834
void lam8834_spec(void* env8835, void* id_8792); // lam8834
void* lam8834 = encode_clo(alloc_clo(lam8834_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8836, void* kont8818, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8837_fptr(); // lam8837
void lam8837_spec(void* env8838, void* xy8794); // lam8837
void* lam8837 = encode_clo(alloc_clo(lam8837_fptr, 0));

void lam8839_fptr(); // lam8839
void lam8839_spec(void* env8840, void* id_8797); // lam8839
void* lam8839 = encode_clo(alloc_clo(lam8839_fptr, 0));

void lam8841_fptr(); // lam8841
void lam8841_spec(void* env8842, void* lsts); // lam8841
void* lam8841 = encode_clo(alloc_clo(lam8841_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void call_fptr(); // call
void call_spec(void* _8844, void* kont8824); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8845_fptr(); // lam8845
void lam8845_spec(void* env8846, void* xy8802); // lam8845
void* lam8845 = encode_clo(alloc_clo(lam8845_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8847, void* kont8825); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8852 = prim_car(lst);
void* const lst8854 = prim_cdr(lst);
void* const x8853 = apply_prim__u43(lst8854);
arg_buffer[1] = kont8852;
arg_buffer[2] = x8853;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8852))[0])();
}
else
{
void* const kont8852 = arg_buffer[2];
void* const x8853 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8852))[0])(kont8852, x8853);
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
void* const kont8855 = prim_car(lst);
void* const lst8857 = prim_cdr(lst);
void* const x8856 = apply_prim__u45(lst8857);
arg_buffer[1] = kont8855;
arg_buffer[2] = x8856;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8855))[0])();
}
else
{
void* const kont8855 = arg_buffer[2];
void* const x8856 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8855))[0])(kont8855, x8856);
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
void* const kont8858 = prim_car(lst);
void* const lst8860 = prim_cdr(lst);
void* const x8859 = apply_prim__u42(lst8860);
arg_buffer[1] = kont8858;
arg_buffer[2] = x8859;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8858))[0])();
}
else
{
void* const kont8858 = arg_buffer[2];
void* const x8859 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8858))[0])(kont8858, x8859);
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
void* const kont8861 = prim_car(lst);
void* const lst8863 = prim_cdr(lst);
void* const x8862 = apply_prim__u47(lst8863);
arg_buffer[1] = kont8861;
arg_buffer[2] = x8862;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
}
else
{
void* const kont8861 = arg_buffer[2];
void* const x8862 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8861))[0])(kont8861, x8862);
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
void* const kont8864 = prim_car(lst);
void* const lst8866 = prim_cdr(lst);
void* const x8865 = apply_prim__u61(lst8866);
arg_buffer[1] = kont8864;
arg_buffer[2] = x8865;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8864))[0])();
}
else
{
void* const kont8864 = arg_buffer[2];
void* const x8865 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8864))[0])(kont8864, x8865);
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
void* const kont8867 = prim_car(lst);
void* const lst8869 = prim_cdr(lst);
void* const x8868 = apply_prim__u62(lst8869);
arg_buffer[1] = kont8867;
arg_buffer[2] = x8868;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8867))[0])();
}
else
{
void* const kont8867 = arg_buffer[2];
void* const x8868 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8867))[0])(kont8867, x8868);
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
void* const kont8870 = prim_car(lst);
void* const lst8872 = prim_cdr(lst);
void* const x8871 = apply_prim__u60(lst8872);
arg_buffer[1] = kont8870;
arg_buffer[2] = x8871;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8870))[0])();
}
else
{
void* const kont8870 = arg_buffer[2];
void* const x8871 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8870))[0])(kont8870, x8871);
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
void* const kont8873 = prim_car(lst);
void* const lst8875 = prim_cdr(lst);
void* const x8874 = apply_prim__u60_u61(lst8875);
arg_buffer[1] = kont8873;
arg_buffer[2] = x8874;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8873))[0])();
}
else
{
void* const kont8873 = arg_buffer[2];
void* const x8874 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8873))[0])(kont8873, x8874);
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
void* const kont8876 = prim_car(lst);
void* const lst8878 = prim_cdr(lst);
void* const x8877 = apply_prim__u62_u61(lst8878);
arg_buffer[1] = kont8876;
arg_buffer[2] = x8877;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8876))[0])();
}
else
{
void* const kont8876 = arg_buffer[2];
void* const x8877 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8876))[0])(kont8876, x8877);
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
void* const kont8879 = prim_car(lst);
void* const lst8881 = prim_cdr(lst);
void* const x8880 = apply_prim_modulo(lst8881);
arg_buffer[1] = kont8879;
arg_buffer[2] = x8880;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8879))[0])();
}
else
{
void* const kont8879 = arg_buffer[2];
void* const x8880 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8879))[0])(kont8879, x8880);
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
void* const kont8882 = prim_car(lst);
void* const lst8884 = prim_cdr(lst);
void* const x8883 = apply_prim_null_u63(lst8884);
arg_buffer[1] = kont8882;
arg_buffer[2] = x8883;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8882))[0])();
}
else
{
void* const kont8882 = arg_buffer[2];
void* const x8883 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8882))[0])(kont8882, x8883);
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
void* const kont8885 = prim_car(lst);
void* const lst8887 = prim_cdr(lst);
void* const x8886 = apply_prim_equal_u63(lst8887);
arg_buffer[1] = kont8885;
arg_buffer[2] = x8886;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8885))[0])();
}
else
{
void* const kont8885 = arg_buffer[2];
void* const x8886 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8885))[0])(kont8885, x8886);
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
void* const kont8888 = prim_car(lst);
void* const lst8890 = prim_cdr(lst);
void* const x8889 = apply_prim_eq_u63(lst8890);
arg_buffer[1] = kont8888;
arg_buffer[2] = x8889;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8888))[0])();
}
else
{
void* const kont8888 = arg_buffer[2];
void* const x8889 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8888))[0])(kont8888, x8889);
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
void* const kont8891 = prim_car(lst);
void* const lst8893 = prim_cdr(lst);
void* const x8892 = apply_prim_cons(lst8893);
arg_buffer[1] = kont8891;
arg_buffer[2] = x8892;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8891))[0])();
}
else
{
void* const kont8891 = arg_buffer[2];
void* const x8892 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8891))[0])(kont8891, x8892);
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
void* const kont8894 = prim_car(lst);
void* const lst8896 = prim_cdr(lst);
void* const x8895 = apply_prim_car(lst8896);
arg_buffer[1] = kont8894;
arg_buffer[2] = x8895;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8894))[0])();
}
else
{
void* const kont8894 = arg_buffer[2];
void* const x8895 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8894))[0])(kont8894, x8895);
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
void* const kont8897 = prim_car(lst);
void* const lst8899 = prim_cdr(lst);
void* const x8898 = apply_prim_cdr(lst8899);
arg_buffer[1] = kont8897;
arg_buffer[2] = x8898;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8897))[0])();
}
else
{
void* const kont8897 = arg_buffer[2];
void* const x8898 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8897))[0])(kont8897, x8898);
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
void* const kont8900 = prim_car(lst);
void* const lst8902 = prim_cdr(lst);
void* const x8901 = apply_prim_float_u45_u62int(lst8902);
arg_buffer[1] = kont8900;
arg_buffer[2] = x8901;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8900))[0])();
}
else
{
void* const kont8900 = arg_buffer[2];
void* const x8901 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8900))[0])(kont8900, x8901);
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
void* const kont8903 = prim_car(lst);
void* const lst8905 = prim_cdr(lst);
void* const x8904 = apply_prim_int_u45_u62float(lst8905);
arg_buffer[1] = kont8903;
arg_buffer[2] = x8904;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8903))[0])();
}
else
{
void* const kont8903 = arg_buffer[2];
void* const x8904 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8903))[0])(kont8903, x8904);
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
void* const kont8906 = prim_car(lst);
void* const lst8908 = prim_cdr(lst);
void* const x8907 = apply_prim_hash(lst8908);
arg_buffer[1] = kont8906;
arg_buffer[2] = x8907;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8906))[0])();
}
else
{
void* const kont8906 = arg_buffer[2];
void* const x8907 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8906))[0])(kont8906, x8907);
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
void* const kont8909 = prim_car(lst);
void* const lst8911 = prim_cdr(lst);
void* const x8910 = apply_prim_hash_u45ref(lst8911);
arg_buffer[1] = kont8909;
arg_buffer[2] = x8910;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8909))[0])();
}
else
{
void* const kont8909 = arg_buffer[2];
void* const x8910 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8909))[0])(kont8909, x8910);
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
void* const kont8912 = prim_car(lst);
void* const lst8914 = prim_cdr(lst);
void* const x8913 = apply_prim_hash_u45set(lst8914);
arg_buffer[1] = kont8912;
arg_buffer[2] = x8913;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8912))[0])();
}
else
{
void* const kont8912 = arg_buffer[2];
void* const x8913 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8912))[0])(kont8912, x8913);
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
void* const kont8915 = prim_car(lst);
void* const lst8917 = prim_cdr(lst);
void* const x8916 = apply_prim_hash_u45keys(lst8917);
arg_buffer[1] = kont8915;
arg_buffer[2] = x8916;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8915))[0])();
}
else
{
void* const kont8915 = arg_buffer[2];
void* const x8916 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8915))[0])(kont8915, x8916);
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
void* const kont8918 = prim_car(lst);
void* const lst8920 = prim_cdr(lst);
void* const x8919 = apply_prim_hash_u45has_u45key_u63(lst8920);
arg_buffer[1] = kont8918;
arg_buffer[2] = x8919;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8918))[0])();
}
else
{
void* const kont8918 = arg_buffer[2];
void* const x8919 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8918))[0])(kont8918, x8919);
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
void* const kont8921 = prim_car(lst);
void* const lst8923 = prim_cdr(lst);
void* const x8922 = apply_prim_hash_u45count(lst8923);
arg_buffer[1] = kont8921;
arg_buffer[2] = x8922;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8921))[0])();
}
else
{
void* const kont8921 = arg_buffer[2];
void* const x8922 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8921))[0])(kont8921, x8922);
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
void* const kont8924 = prim_car(lst);
void* const lst8926 = prim_cdr(lst);
void* const x8925 = apply_prim_set(lst8926);
arg_buffer[1] = kont8924;
arg_buffer[2] = x8925;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8924))[0])();
}
else
{
void* const kont8924 = arg_buffer[2];
void* const x8925 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8924))[0])(kont8924, x8925);
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
void* const kont8927 = prim_car(lst);
void* const lst8929 = prim_cdr(lst);
void* const x8928 = apply_prim_set_u45_u62list(lst8929);
arg_buffer[1] = kont8927;
arg_buffer[2] = x8928;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8927))[0])();
}
else
{
void* const kont8927 = arg_buffer[2];
void* const x8928 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8927))[0])(kont8927, x8928);
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
void* const kont8930 = prim_car(lst);
void* const lst8932 = prim_cdr(lst);
void* const x8931 = apply_prim_list_u45_u62set(lst8932);
arg_buffer[1] = kont8930;
arg_buffer[2] = x8931;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8930))[0])();
}
else
{
void* const kont8930 = arg_buffer[2];
void* const x8931 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8930))[0])(kont8930, x8931);
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
void* const kont8933 = prim_car(lst);
void* const lst8935 = prim_cdr(lst);
void* const x8934 = apply_prim_set_u45add(lst8935);
arg_buffer[1] = kont8933;
arg_buffer[2] = x8934;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8933))[0])();
}
else
{
void* const kont8933 = arg_buffer[2];
void* const x8934 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8933))[0])(kont8933, x8934);
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
void* const kont8936 = prim_car(lst);
void* const lst8938 = prim_cdr(lst);
void* const x8937 = apply_prim_set_u45member_u63(lst8938);
arg_buffer[1] = kont8936;
arg_buffer[2] = x8937;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8936))[0])();
}
else
{
void* const kont8936 = arg_buffer[2];
void* const x8937 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8936))[0])(kont8936, x8937);
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
void* const kont8939 = prim_car(lst);
void* const lst8941 = prim_cdr(lst);
void* const x8940 = apply_prim_set_u45remove(lst8941);
arg_buffer[1] = kont8939;
arg_buffer[2] = x8940;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8939))[0])();
}
else
{
void* const kont8939 = arg_buffer[2];
void* const x8940 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8939))[0])(kont8939, x8940);
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
void* const kont8942 = prim_car(lst);
void* const lst8944 = prim_cdr(lst);
void* const x8943 = apply_prim_set_u45count(lst8944);
arg_buffer[1] = kont8942;
arg_buffer[2] = x8943;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8942))[0])();
}
else
{
void* const kont8942 = arg_buffer[2];
void* const x8943 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8942))[0])(kont8942, x8943);
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
void* const kont8945 = prim_car(lst);
void* const lst8947 = prim_cdr(lst);
void* const x8946 = apply_prim_string_u63(lst8947);
arg_buffer[1] = kont8945;
arg_buffer[2] = x8946;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8945))[0])();
}
else
{
void* const kont8945 = arg_buffer[2];
void* const x8946 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8945))[0])(kont8945, x8946);
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
void* const kont8948 = prim_car(lst);
void* const lst8950 = prim_cdr(lst);
void* const x8949 = apply_prim_string_u45length(lst8950);
arg_buffer[1] = kont8948;
arg_buffer[2] = x8949;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8948))[0])();
}
else
{
void* const kont8948 = arg_buffer[2];
void* const x8949 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8948))[0])(kont8948, x8949);
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
void* const kont8951 = prim_car(lst);
void* const lst8953 = prim_cdr(lst);
void* const x8952 = apply_prim_string_u45ref(lst8953);
arg_buffer[1] = kont8951;
arg_buffer[2] = x8952;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8951))[0])();
}
else
{
void* const kont8951 = arg_buffer[2];
void* const x8952 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8951))[0])(kont8951, x8952);
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
void* const kont8954 = prim_car(lst);
void* const lst8956 = prim_cdr(lst);
void* const x8955 = apply_prim_substring(lst8956);
arg_buffer[1] = kont8954;
arg_buffer[2] = x8955;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8954))[0])();
}
else
{
void* const kont8954 = arg_buffer[2];
void* const x8955 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8954))[0])(kont8954, x8955);
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
void* const kont8957 = prim_car(lst);
void* const lst8959 = prim_cdr(lst);
void* const x8958 = apply_prim_string_u45append(lst8959);
arg_buffer[1] = kont8957;
arg_buffer[2] = x8958;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8957))[0])();
}
else
{
void* const kont8957 = arg_buffer[2];
void* const x8958 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8957))[0])(kont8957, x8958);
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
void* const kont8960 = prim_car(lst);
void* const lst8962 = prim_cdr(lst);
void* const x8961 = apply_prim_string_u45_u62list(lst8962);
arg_buffer[1] = kont8960;
arg_buffer[2] = x8961;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8960))[0])();
}
else
{
void* const kont8960 = arg_buffer[2];
void* const x8961 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8960))[0])(kont8960, x8961);
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
void* const kont8963 = prim_car(lst);
void* const lst8965 = prim_cdr(lst);
void* const x8964 = apply_prim_exact_u45floor(lst8965);
arg_buffer[1] = kont8963;
arg_buffer[2] = x8964;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8963))[0])();
}
else
{
void* const kont8963 = arg_buffer[2];
void* const x8964 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8963))[0])(kont8963, x8964);
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
void* const kont8966 = prim_car(lst);
void* const lst8968 = prim_cdr(lst);
void* const x8967 = apply_prim_exact_u45ceiling(lst8968);
arg_buffer[1] = kont8966;
arg_buffer[2] = x8967;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8966))[0])();
}
else
{
void* const kont8966 = arg_buffer[2];
void* const x8967 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8966))[0])(kont8966, x8967);
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
void* const kont8969 = prim_car(lst);
void* const lst8971 = prim_cdr(lst);
void* const x8970 = apply_prim_exact_u45round(lst8971);
arg_buffer[1] = kont8969;
arg_buffer[2] = x8970;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8969))[0])();
}
else
{
void* const kont8969 = arg_buffer[2];
void* const x8970 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8969))[0])(kont8969, x8970);
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
void* const kont8972 = prim_car(lst);
void* const lst8974 = prim_cdr(lst);
void* const x8973 = apply_prim_abs(lst8974);
arg_buffer[1] = kont8972;
arg_buffer[2] = x8973;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8972))[0])();
}
else
{
void* const kont8972 = arg_buffer[2];
void* const x8973 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8972))[0])(kont8972, x8973);
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
void* const kont8975 = prim_car(lst);
void* const lst8977 = prim_cdr(lst);
void* const x8976 = apply_prim_max(lst8977);
arg_buffer[1] = kont8975;
arg_buffer[2] = x8976;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8975))[0])();
}
else
{
void* const kont8975 = arg_buffer[2];
void* const x8976 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8975))[0])(kont8975, x8976);
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
void* const kont8978 = prim_car(lst);
void* const lst8980 = prim_cdr(lst);
void* const x8979 = apply_prim_min(lst8980);
arg_buffer[1] = kont8978;
arg_buffer[2] = x8979;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8978))[0])();
}
else
{
void* const kont8978 = arg_buffer[2];
void* const x8979 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8978))[0])(kont8978, x8979);
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
void* const kont8981 = prim_car(lst);
void* const lst8983 = prim_cdr(lst);
void* const x8982 = apply_prim_expt(lst8983);
arg_buffer[1] = kont8981;
arg_buffer[2] = x8982;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8981))[0])();
}
else
{
void* const kont8981 = arg_buffer[2];
void* const x8982 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8981))[0])(kont8981, x8982);
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
void* const kont8984 = prim_car(lst);
void* const lst8986 = prim_cdr(lst);
void* const x8985 = apply_prim_sqrt(lst8986);
arg_buffer[1] = kont8984;
arg_buffer[2] = x8985;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8984))[0])();
}
else
{
void* const kont8984 = arg_buffer[2];
void* const x8985 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8984))[0])(kont8984, x8985);
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
void* const kont8987 = prim_car(lst);
void* const lst8989 = prim_cdr(lst);
void* const x8988 = apply_prim_remainder(lst8989);
arg_buffer[1] = kont8987;
arg_buffer[2] = x8988;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8987))[0])();
}
else
{
void* const kont8987 = arg_buffer[2];
void* const x8988 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8987))[0])(kont8987, x8988);
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
void* const kont8990 = prim_car(lst);
void* const lst8992 = prim_cdr(lst);
void* const x8991 = apply_prim_quotient(lst8992);
arg_buffer[1] = kont8990;
arg_buffer[2] = x8991;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8990))[0])();
}
else
{
void* const kont8990 = arg_buffer[2];
void* const x8991 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8990))[0])(kont8990, x8991);
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
void* const kont8993 = prim_car(lst);
void* const lst8995 = prim_cdr(lst);
void* const x8994 = apply_prim_random(lst8995);
arg_buffer[1] = kont8993;
arg_buffer[2] = x8994;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8993))[0])();
}
else
{
void* const kont8993 = arg_buffer[2];
void* const x8994 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8993))[0])(kont8993, x8994);
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
void* const kont8996 = prim_car(lst);
void* const lst8998 = prim_cdr(lst);
void* const x8997 = apply_prim_symbol_u63(lst8998);
arg_buffer[1] = kont8996;
arg_buffer[2] = x8997;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8996))[0])();
}
else
{
void* const kont8996 = arg_buffer[2];
void* const x8997 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8996))[0])(kont8996, x8997);
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
void* const kont8999 = prim_car(lst);
void* const lst9001 = prim_cdr(lst);
void* const x9000 = apply_prim_pair_u63(lst9001);
arg_buffer[1] = kont8999;
arg_buffer[2] = x9000;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8999))[0])();
}
else
{
void* const kont8999 = arg_buffer[2];
void* const x9000 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8999))[0])(kont8999, x9000);
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
void* const kont9002 = prim_car(lst);
void* const lst9004 = prim_cdr(lst);
void* const x9003 = apply_prim_positive_u63(lst9004);
arg_buffer[1] = kont9002;
arg_buffer[2] = x9003;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9002))[0])();
}
else
{
void* const kont9002 = arg_buffer[2];
void* const x9003 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9002))[0])(kont9002, x9003);
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
void* const kont9005 = prim_car(lst);
void* const lst9007 = prim_cdr(lst);
void* const x9006 = apply_prim_negative_u63(lst9007);
arg_buffer[1] = kont9005;
arg_buffer[2] = x9006;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9005))[0])();
}
else
{
void* const kont9005 = arg_buffer[2];
void* const x9006 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9005))[0])(kont9005, x9006);
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
void* const kont9008 = prim_car(lst);
void* const lst9010 = prim_cdr(lst);
void* const x9009 = apply_prim_list(lst9010);
arg_buffer[1] = kont9008;
arg_buffer[2] = x9009;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9008))[0])();
}
else
{
void* const kont9008 = arg_buffer[2];
void* const x9009 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9008))[0])(kont9008, x9009);
}

}

inline void lam8828_fptr() // lam8828 -> generic version 
{
//reading env
void* const env8829 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8829);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8784));
}

inline void lam8828_spec(void* env8829, void* id_8784) // lam8828 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8829);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8784));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8814 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8814)[0])(kont8814, int8849);
}
else
{

//creating new make-kont closure
void** clo9011 = alloc_kont(lam8828_spec, 2);

//setting env list
clo9011[1] = kont8814;
clo9011[2] = int8850;
void* f_lam_8815 = encode_clo(clo9011);



//clo-app
length_spec(length, f_lam_8815, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8830, void* kont8814, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8814)[0])(kont8814, int8849);
}
else
{

//creating new make-kont closure
void** clo9012 = alloc_kont(lam8828_spec, 2);

//setting env list
clo9012[1] = kont8814;
clo9012[2] = int8850;
void* f_lam_8815 = encode_clo(clo9012);



//clo-app
length_spec(length, f_lam_8815, apply_prim_cdr_1(lst));
}

}

inline void lam8831_fptr() // lam8831 -> generic version 
{
//reading env
void* const env8832 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8832);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8788;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8831_spec(void* env8832, void* id_8788) // lam8831 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8832);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8788;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8816 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8816)[0])(kont8816, acc);
}
else
{

//creating new make-kont closure
void** clo9013 = alloc_kont(lam8831_spec, 3);

//setting env list
clo9013[1] = kont8816;
clo9013[2] = fun;
clo9013[3] = apply_prim_car_1(lst);
void* f_lam_8817 = encode_clo(clo9013);



//clo-app
foldr_spec(foldr, f_lam_8817, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8833, void* kont8816, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8816)[0])(kont8816, acc);
}
else
{

//creating new make-kont closure
void** clo9014 = alloc_kont(lam8831_spec, 3);

//setting env list
clo9014[1] = kont8816;
clo9014[2] = fun;
clo9014[3] = apply_prim_car_1(lst);
void* f_lam_8817 = encode_clo(clo9014);



//clo-app
foldr_spec(foldr, f_lam_8817, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void lam8834_fptr() // lam8834 -> generic version 
{
//reading env
void* const env8835 = arg_buffer[1];
//reading env and args
void* const id_8792 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8835);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8792));
}

inline void lam8834_spec(void* env8835, void* id_8792) // lam8834 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8835);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8792));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8818 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8818)[0])(kont8818, rhs);
}
else
{

//creating new make-kont closure
void** clo9015 = alloc_kont(lam8834_spec, 2);

//setting env list
clo9015[1] = apply_prim_car_1(lhs);
clo9015[2] = kont8818;
void* f_lam_8819 = encode_clo(clo9015);



//clo-app
append1_spec(append1, f_lam_8819, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8836, void* kont8818, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8818)[0])(kont8818, rhs);
}
else
{

//creating new make-kont closure
void** clo9016 = alloc_kont(lam8834_spec, 2);

//setting env list
clo9016[1] = apply_prim_car_1(lhs);
clo9016[2] = kont8818;
void* f_lam_8819 = encode_clo(clo9016);



//clo-app
append1_spec(append1, f_lam_8819, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8837_fptr() // lam8837 -> generic version 
{
//reading env
void* const env8838 = arg_buffer[1];
//reading env and args
void* const xy8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8838);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8837_spec(void* env8838, void* xy8794) // lam8837 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8838);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8839_fptr() // lam8839 -> generic version 
{
//reading env
void* const env8840 = arg_buffer[1];
//reading env and args
void* const id_8797 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8840);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8797);
}

inline void lam8839_spec(void* env8840, void* id_8797) // lam8839 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8840);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8797);
}

inline void lam8841_fptr() // lam8841 -> generic version 
{
//reading env
void* const env8842 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8842);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9017 = alloc_kont(lam8837_spec, 1);

//setting env list
clo9017[1] = decode_clo_array[3];
void* f_lam_8821 = encode_clo(clo9017);



//clo-app
append1_spec(append1, f_lam_8821, decode_clo_array[1], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9018 = alloc_kont(lam8839_spec, 2);

//setting env list
clo9018[1] = apply_prim_list_0();
clo9018[2] = decode_clo_array[3];
void* f_lam_8822 = encode_clo(clo9018);



//clo-app
append1_spec(append1, f_lam_8822, apply_prim_list_2(decode_clo_array[1], decode_clo_array[2]), lsts);
}

}

inline void lam8841_spec(void* env8842, void* lsts) // lam8841 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8842);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9019 = alloc_kont(lam8837_spec, 1);

//setting env list
clo9019[1] = decode_clo_array[3];
void* f_lam_8821 = encode_clo(clo9019);



//clo-app
append1_spec(append1, f_lam_8821, decode_clo_array[1], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9020 = alloc_kont(lam8839_spec, 2);

//setting env list
clo9020[1] = apply_prim_list_0();
clo9020[2] = decode_clo_array[3];
void* f_lam_8822 = encode_clo(clo9020);



//clo-app
append1_spec(append1, f_lam_8822, apply_prim_list_2(decode_clo_array[1], decode_clo_array[2]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _8843 = arg_buffer[1];
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
void** clo9021 = alloc_kont(lam8841_spec, 3);

//setting env list
clo9021[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9021[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
clo9021[3] = apply_prim_car_1(vargs);
void* f_lam_8823 = encode_clo(clo9021);


// kont-clo-app case
lam8841_spec(f_lam_8823, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void call_fptr() // call -> generic version 
{
//reading env and args
void* const kont8824 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8824)[0])(kont8824, apply_prim_cons_2(int8850, apply_prim_cons_2(int8851, apply_prim_list_0())));
}

inline void call_spec(void* _8844, void* kont8824) // call 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8824)[0])(kont8824, apply_prim_cons_2(int8850, apply_prim_cons_2(int8851, apply_prim_list_0())));
}

inline void lam8845_fptr() // lam8845 -> generic version 
{
//reading env
void* const env8846 = arg_buffer[1];
//reading env and args
void* const xy8802 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8846);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8802);
}

inline void lam8845_spec(void* env8846, void* xy8802) // lam8845 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8846);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8802);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8825 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9022 = alloc_kont(lam8845_spec, 1);

//setting env list
clo9022[1] = kont8825;
void* f_lam_8826 = encode_clo(clo9022);



//clo-app
call_spec(call, f_lam_8826);
}

inline void brouhaha_main_spec(void* _8847, void* kont8825) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9023 = alloc_kont(lam8845_spec, 1);

//setting env list
clo9023[1] = kont8825;
void* f_lam_8826 = encode_clo(clo9023);



//clo-app
call_spec(call, f_lam_8826);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8849 = reinterpret_cast<void *>(encode_int(0));
int8850 = reinterpret_cast<void *>(encode_int(1));
int8851 = reinterpret_cast<void *>(encode_int(20));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

