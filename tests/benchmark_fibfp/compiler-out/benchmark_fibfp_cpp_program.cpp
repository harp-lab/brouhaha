#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9011;
void* float9015;
void* float9014;
void* float9016;
void* bool_t9003;
void* int9012;
void* bool_f9004;
void* int8999;



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

void even_u63_fptr(); // even?
void even_u63_spec(void* _8934, void* kont8892, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8935_fptr(); // lam8935
void lam8935_spec(void* env8936, void* id_8745); // lam8935
void* lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void boolean_u63_fptr(); // boolean?
void boolean_u63_spec(void* _8937, void* kont8893, void* x); // boolean?
void* boolean_u63 = encode_clo(alloc_clo(boolean_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8938, void* kont8895, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8939, void* kont8896, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8940_fptr(); // lam8940
void lam8940_spec(void* env8941, void* id_8760); // lam8940
void* lam8940 = encode_clo(alloc_clo(lam8940_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8942, void* kont8897, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8943, void* kont8899, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8944_fptr(); // lam8944
void lam8944_spec(void* env8945, void* id_8775); // lam8944
void* lam8944 = encode_clo(alloc_clo(lam8944_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8946, void* kont8900, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8947_fptr(); // lam8947
void lam8947_spec(void* env8948, void* id_8781); // lam8947
void* lam8947 = encode_clo(alloc_clo(lam8947_fptr, 0));

void lam8949_fptr(); // lam8949
void lam8949_spec(void* env8950, void* id_8779); // lam8949
void* lam8949 = encode_clo(alloc_clo(lam8949_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8951, void* kont8902, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8952_fptr(); // lam8952
void lam8952_spec(void* env8953, void* id_8788); // lam8952
void* lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void lam8954_fptr(); // lam8954
void lam8954_spec(void* env8955, void* id_8785); // lam8954
void* lam8954 = encode_clo(alloc_clo(lam8954_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8956, void* kont8905, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8957, void* kont8908, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8958_fptr(); // lam8958
void lam8958_spec(void* env8959, void* id_8797); // lam8958
void* lam8958 = encode_clo(alloc_clo(lam8958_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8960, void* kont8909, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8961_fptr(); // lam8961
void lam8961_spec(void* env8962, void* id_8802); // lam8961
void* lam8961 = encode_clo(alloc_clo(lam8961_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8963, void* kont8911, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8964, void* kont8913, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8965, void* kont8914, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8966_fptr(); // lam8966
void lam8966_spec(void* env8967, void* id_8811); // lam8966
void* lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8968, void* kont8915, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8969_fptr(); // lam8969
void lam8969_spec(void* env8970, void* xy8813); // lam8969
void* lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void lam8971_fptr(); // lam8971
void lam8971_spec(void* env8972, void* id_8816); // lam8971
void* lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void lam8973_fptr(); // lam8973
void lam8973_spec(void* env8974, void* lsts); // lam8973
void* lam8973 = encode_clo(alloc_clo(lam8973_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8976_fptr(); // lam8976
void lam8976_spec(void* env8977, void* xy8819); // lam8976
void* lam8976 = encode_clo(alloc_clo(lam8976_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8978, void* kont8921, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8979, void* kont8923, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8980_fptr(); // lam8980
void lam8980_spec(void* env8981, void* id_8833); // lam8980
void* lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _8982, void* kont8924, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam8983_fptr(); // lam8983
void lam8983_spec(void* env8984, void* id_8840); // lam8983
void* lam8983 = encode_clo(alloc_clo(lam8983_fptr, 0));

void lam8985_fptr(); // lam8985
void lam8985_spec(void* env8986, void* id_8838); // lam8985
void* lam8985 = encode_clo(alloc_clo(lam8985_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _8987, void* kont8926, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam8988_fptr(); // lam8988
void lam8988_spec(void* env8989, void* id_8849); // lam8988
void* lam8988 = encode_clo(alloc_clo(lam8988_fptr, 0));

void lam8990_fptr(); // lam8990
void lam8990_spec(void* env8991, void* id_8846); // lam8990
void* lam8990 = encode_clo(alloc_clo(lam8990_fptr, 0));

void fibfp_fptr(); // fibfp
void fibfp_spec(void* _8992, void* kont8929, void* n); // fibfp
void* fibfp = encode_clo(alloc_clo(fibfp_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8993, void* kont8932); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9017 = prim_car(lst);
void* const lst9019 = prim_cdr(lst);
void* const x9018 = apply_prim__u43(lst9019);
arg_buffer[1] = kont9017;
arg_buffer[2] = x9018;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9017))[0])();
}
else
{
void* const kont9017 = arg_buffer[2];
void* const x9018 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9017))[0])(kont9017, x9018);
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
void* const kont9020 = prim_car(lst);
void* const lst9022 = prim_cdr(lst);
void* const x9021 = apply_prim__u45(lst9022);
arg_buffer[1] = kont9020;
arg_buffer[2] = x9021;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9020))[0])();
}
else
{
void* const kont9020 = arg_buffer[2];
void* const x9021 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9020))[0])(kont9020, x9021);
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
void* const kont9023 = prim_car(lst);
void* const lst9025 = prim_cdr(lst);
void* const x9024 = apply_prim__u42(lst9025);
arg_buffer[1] = kont9023;
arg_buffer[2] = x9024;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9023))[0])();
}
else
{
void* const kont9023 = arg_buffer[2];
void* const x9024 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9023))[0])(kont9023, x9024);
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
void* const kont9026 = prim_car(lst);
void* const lst9028 = prim_cdr(lst);
void* const x9027 = apply_prim__u47(lst9028);
arg_buffer[1] = kont9026;
arg_buffer[2] = x9027;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9026))[0])();
}
else
{
void* const kont9026 = arg_buffer[2];
void* const x9027 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9026))[0])(kont9026, x9027);
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
void* const kont9029 = prim_car(lst);
void* const lst9031 = prim_cdr(lst);
void* const x9030 = apply_prim__u61(lst9031);
arg_buffer[1] = kont9029;
arg_buffer[2] = x9030;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9029))[0])();
}
else
{
void* const kont9029 = arg_buffer[2];
void* const x9030 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9029))[0])(kont9029, x9030);
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
void* const kont9032 = prim_car(lst);
void* const lst9034 = prim_cdr(lst);
void* const x9033 = apply_prim__u62(lst9034);
arg_buffer[1] = kont9032;
arg_buffer[2] = x9033;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9032))[0])();
}
else
{
void* const kont9032 = arg_buffer[2];
void* const x9033 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9032))[0])(kont9032, x9033);
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
void* const kont9035 = prim_car(lst);
void* const lst9037 = prim_cdr(lst);
void* const x9036 = apply_prim__u60(lst9037);
arg_buffer[1] = kont9035;
arg_buffer[2] = x9036;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9035))[0])();
}
else
{
void* const kont9035 = arg_buffer[2];
void* const x9036 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9035))[0])(kont9035, x9036);
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
void* const kont9038 = prim_car(lst);
void* const lst9040 = prim_cdr(lst);
void* const x9039 = apply_prim__u60_u61(lst9040);
arg_buffer[1] = kont9038;
arg_buffer[2] = x9039;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9038))[0])();
}
else
{
void* const kont9038 = arg_buffer[2];
void* const x9039 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9038))[0])(kont9038, x9039);
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
void* const kont9041 = prim_car(lst);
void* const lst9043 = prim_cdr(lst);
void* const x9042 = apply_prim__u62_u61(lst9043);
arg_buffer[1] = kont9041;
arg_buffer[2] = x9042;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9041))[0])();
}
else
{
void* const kont9041 = arg_buffer[2];
void* const x9042 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9041))[0])(kont9041, x9042);
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
void* const kont9044 = prim_car(lst);
void* const lst9046 = prim_cdr(lst);
void* const x9045 = apply_prim_modulo(lst9046);
arg_buffer[1] = kont9044;
arg_buffer[2] = x9045;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9044))[0])();
}
else
{
void* const kont9044 = arg_buffer[2];
void* const x9045 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9044))[0])(kont9044, x9045);
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
void* const kont9047 = prim_car(lst);
void* const lst9049 = prim_cdr(lst);
void* const x9048 = apply_prim_null_u63(lst9049);
arg_buffer[1] = kont9047;
arg_buffer[2] = x9048;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9047))[0])();
}
else
{
void* const kont9047 = arg_buffer[2];
void* const x9048 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9047))[0])(kont9047, x9048);
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
void* const kont9050 = prim_car(lst);
void* const lst9052 = prim_cdr(lst);
void* const x9051 = apply_prim_equal_u63(lst9052);
arg_buffer[1] = kont9050;
arg_buffer[2] = x9051;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9050))[0])();
}
else
{
void* const kont9050 = arg_buffer[2];
void* const x9051 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9050))[0])(kont9050, x9051);
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
void* const kont9053 = prim_car(lst);
void* const lst9055 = prim_cdr(lst);
void* const x9054 = apply_prim_eq_u63(lst9055);
arg_buffer[1] = kont9053;
arg_buffer[2] = x9054;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9053))[0])();
}
else
{
void* const kont9053 = arg_buffer[2];
void* const x9054 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9053))[0])(kont9053, x9054);
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
void* const kont9056 = prim_car(lst);
void* const lst9058 = prim_cdr(lst);
void* const x9057 = apply_prim_cons(lst9058);
arg_buffer[1] = kont9056;
arg_buffer[2] = x9057;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9056))[0])();
}
else
{
void* const kont9056 = arg_buffer[2];
void* const x9057 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9056))[0])(kont9056, x9057);
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
void* const kont9059 = prim_car(lst);
void* const lst9061 = prim_cdr(lst);
void* const x9060 = apply_prim_car(lst9061);
arg_buffer[1] = kont9059;
arg_buffer[2] = x9060;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9059))[0])();
}
else
{
void* const kont9059 = arg_buffer[2];
void* const x9060 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9059))[0])(kont9059, x9060);
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
void* const kont9062 = prim_car(lst);
void* const lst9064 = prim_cdr(lst);
void* const x9063 = apply_prim_cdr(lst9064);
arg_buffer[1] = kont9062;
arg_buffer[2] = x9063;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9062))[0])();
}
else
{
void* const kont9062 = arg_buffer[2];
void* const x9063 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9062))[0])(kont9062, x9063);
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
void* const kont9065 = prim_car(lst);
void* const lst9067 = prim_cdr(lst);
void* const x9066 = apply_prim_float_u45_u62int(lst9067);
arg_buffer[1] = kont9065;
arg_buffer[2] = x9066;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9065))[0])();
}
else
{
void* const kont9065 = arg_buffer[2];
void* const x9066 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9065))[0])(kont9065, x9066);
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
void* const kont9068 = prim_car(lst);
void* const lst9070 = prim_cdr(lst);
void* const x9069 = apply_prim_int_u45_u62float(lst9070);
arg_buffer[1] = kont9068;
arg_buffer[2] = x9069;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9068))[0])();
}
else
{
void* const kont9068 = arg_buffer[2];
void* const x9069 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9068))[0])(kont9068, x9069);
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
void* const kont9071 = prim_car(lst);
void* const lst9073 = prim_cdr(lst);
void* const x9072 = apply_prim_hash(lst9073);
arg_buffer[1] = kont9071;
arg_buffer[2] = x9072;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9071))[0])();
}
else
{
void* const kont9071 = arg_buffer[2];
void* const x9072 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9071))[0])(kont9071, x9072);
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
void* const kont9074 = prim_car(lst);
void* const lst9076 = prim_cdr(lst);
void* const x9075 = apply_prim_hash_u45ref(lst9076);
arg_buffer[1] = kont9074;
arg_buffer[2] = x9075;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9074))[0])();
}
else
{
void* const kont9074 = arg_buffer[2];
void* const x9075 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9074))[0])(kont9074, x9075);
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
void* const kont9077 = prim_car(lst);
void* const lst9079 = prim_cdr(lst);
void* const x9078 = apply_prim_hash_u45set(lst9079);
arg_buffer[1] = kont9077;
arg_buffer[2] = x9078;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9077))[0])();
}
else
{
void* const kont9077 = arg_buffer[2];
void* const x9078 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9077))[0])(kont9077, x9078);
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
void* const kont9080 = prim_car(lst);
void* const lst9082 = prim_cdr(lst);
void* const x9081 = apply_prim_hash_u45keys(lst9082);
arg_buffer[1] = kont9080;
arg_buffer[2] = x9081;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9080))[0])();
}
else
{
void* const kont9080 = arg_buffer[2];
void* const x9081 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9080))[0])(kont9080, x9081);
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
void* const kont9083 = prim_car(lst);
void* const lst9085 = prim_cdr(lst);
void* const x9084 = apply_prim_hash_u45has_u45key_u63(lst9085);
arg_buffer[1] = kont9083;
arg_buffer[2] = x9084;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9083))[0])();
}
else
{
void* const kont9083 = arg_buffer[2];
void* const x9084 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9083))[0])(kont9083, x9084);
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
void* const kont9086 = prim_car(lst);
void* const lst9088 = prim_cdr(lst);
void* const x9087 = apply_prim_hash_u45count(lst9088);
arg_buffer[1] = kont9086;
arg_buffer[2] = x9087;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9086))[0])();
}
else
{
void* const kont9086 = arg_buffer[2];
void* const x9087 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9086))[0])(kont9086, x9087);
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
void* const kont9089 = prim_car(lst);
void* const lst9091 = prim_cdr(lst);
void* const x9090 = apply_prim_set(lst9091);
arg_buffer[1] = kont9089;
arg_buffer[2] = x9090;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9089))[0])();
}
else
{
void* const kont9089 = arg_buffer[2];
void* const x9090 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9089))[0])(kont9089, x9090);
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
void* const kont9092 = prim_car(lst);
void* const lst9094 = prim_cdr(lst);
void* const x9093 = apply_prim_set_u45_u62list(lst9094);
arg_buffer[1] = kont9092;
arg_buffer[2] = x9093;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9092))[0])();
}
else
{
void* const kont9092 = arg_buffer[2];
void* const x9093 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9092))[0])(kont9092, x9093);
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
void* const kont9095 = prim_car(lst);
void* const lst9097 = prim_cdr(lst);
void* const x9096 = apply_prim_list_u45_u62set(lst9097);
arg_buffer[1] = kont9095;
arg_buffer[2] = x9096;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9095))[0])();
}
else
{
void* const kont9095 = arg_buffer[2];
void* const x9096 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9095))[0])(kont9095, x9096);
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
void* const kont9098 = prim_car(lst);
void* const lst9100 = prim_cdr(lst);
void* const x9099 = apply_prim_set_u45add(lst9100);
arg_buffer[1] = kont9098;
arg_buffer[2] = x9099;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9098))[0])();
}
else
{
void* const kont9098 = arg_buffer[2];
void* const x9099 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9098))[0])(kont9098, x9099);
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
void* const kont9101 = prim_car(lst);
void* const lst9103 = prim_cdr(lst);
void* const x9102 = apply_prim_set_u45member_u63(lst9103);
arg_buffer[1] = kont9101;
arg_buffer[2] = x9102;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9101))[0])();
}
else
{
void* const kont9101 = arg_buffer[2];
void* const x9102 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9101))[0])(kont9101, x9102);
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
void* const kont9104 = prim_car(lst);
void* const lst9106 = prim_cdr(lst);
void* const x9105 = apply_prim_set_u45remove(lst9106);
arg_buffer[1] = kont9104;
arg_buffer[2] = x9105;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9104))[0])();
}
else
{
void* const kont9104 = arg_buffer[2];
void* const x9105 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9104))[0])(kont9104, x9105);
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
void* const kont9107 = prim_car(lst);
void* const lst9109 = prim_cdr(lst);
void* const x9108 = apply_prim_set_u45count(lst9109);
arg_buffer[1] = kont9107;
arg_buffer[2] = x9108;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9107))[0])();
}
else
{
void* const kont9107 = arg_buffer[2];
void* const x9108 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9107))[0])(kont9107, x9108);
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
void* const kont9110 = prim_car(lst);
void* const lst9112 = prim_cdr(lst);
void* const x9111 = apply_prim_string_u63(lst9112);
arg_buffer[1] = kont9110;
arg_buffer[2] = x9111;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9110))[0])();
}
else
{
void* const kont9110 = arg_buffer[2];
void* const x9111 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9110))[0])(kont9110, x9111);
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
void* const kont9113 = prim_car(lst);
void* const lst9115 = prim_cdr(lst);
void* const x9114 = apply_prim_string_u45length(lst9115);
arg_buffer[1] = kont9113;
arg_buffer[2] = x9114;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9113))[0])();
}
else
{
void* const kont9113 = arg_buffer[2];
void* const x9114 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9113))[0])(kont9113, x9114);
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
void* const kont9116 = prim_car(lst);
void* const lst9118 = prim_cdr(lst);
void* const x9117 = apply_prim_string_u45ref(lst9118);
arg_buffer[1] = kont9116;
arg_buffer[2] = x9117;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9116))[0])();
}
else
{
void* const kont9116 = arg_buffer[2];
void* const x9117 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9116))[0])(kont9116, x9117);
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
void* const kont9119 = prim_car(lst);
void* const lst9121 = prim_cdr(lst);
void* const x9120 = apply_prim_substring(lst9121);
arg_buffer[1] = kont9119;
arg_buffer[2] = x9120;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9119))[0])();
}
else
{
void* const kont9119 = arg_buffer[2];
void* const x9120 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9119))[0])(kont9119, x9120);
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
void* const kont9122 = prim_car(lst);
void* const lst9124 = prim_cdr(lst);
void* const x9123 = apply_prim_string_u45append(lst9124);
arg_buffer[1] = kont9122;
arg_buffer[2] = x9123;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9122))[0])();
}
else
{
void* const kont9122 = arg_buffer[2];
void* const x9123 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9122))[0])(kont9122, x9123);
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
void* const kont9125 = prim_car(lst);
void* const lst9127 = prim_cdr(lst);
void* const x9126 = apply_prim_string_u45_u62list(lst9127);
arg_buffer[1] = kont9125;
arg_buffer[2] = x9126;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9125))[0])();
}
else
{
void* const kont9125 = arg_buffer[2];
void* const x9126 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9125))[0])(kont9125, x9126);
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
void* const kont9128 = prim_car(lst);
void* const lst9130 = prim_cdr(lst);
void* const x9129 = apply_prim_exact_u45floor(lst9130);
arg_buffer[1] = kont9128;
arg_buffer[2] = x9129;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9128))[0])();
}
else
{
void* const kont9128 = arg_buffer[2];
void* const x9129 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9128))[0])(kont9128, x9129);
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
void* const kont9131 = prim_car(lst);
void* const lst9133 = prim_cdr(lst);
void* const x9132 = apply_prim_exact_u45ceiling(lst9133);
arg_buffer[1] = kont9131;
arg_buffer[2] = x9132;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9131))[0])();
}
else
{
void* const kont9131 = arg_buffer[2];
void* const x9132 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9131))[0])(kont9131, x9132);
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
void* const kont9134 = prim_car(lst);
void* const lst9136 = prim_cdr(lst);
void* const x9135 = apply_prim_exact_u45round(lst9136);
arg_buffer[1] = kont9134;
arg_buffer[2] = x9135;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9134))[0])();
}
else
{
void* const kont9134 = arg_buffer[2];
void* const x9135 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9134))[0])(kont9134, x9135);
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
void* const kont9137 = prim_car(lst);
void* const lst9139 = prim_cdr(lst);
void* const x9138 = apply_prim_abs(lst9139);
arg_buffer[1] = kont9137;
arg_buffer[2] = x9138;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9137))[0])();
}
else
{
void* const kont9137 = arg_buffer[2];
void* const x9138 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9137))[0])(kont9137, x9138);
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
void* const kont9140 = prim_car(lst);
void* const lst9142 = prim_cdr(lst);
void* const x9141 = apply_prim_max(lst9142);
arg_buffer[1] = kont9140;
arg_buffer[2] = x9141;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9140))[0])();
}
else
{
void* const kont9140 = arg_buffer[2];
void* const x9141 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9140))[0])(kont9140, x9141);
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
void* const kont9143 = prim_car(lst);
void* const lst9145 = prim_cdr(lst);
void* const x9144 = apply_prim_min(lst9145);
arg_buffer[1] = kont9143;
arg_buffer[2] = x9144;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9143))[0])();
}
else
{
void* const kont9143 = arg_buffer[2];
void* const x9144 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9143))[0])(kont9143, x9144);
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
void* const kont9146 = prim_car(lst);
void* const lst9148 = prim_cdr(lst);
void* const x9147 = apply_prim_expt(lst9148);
arg_buffer[1] = kont9146;
arg_buffer[2] = x9147;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9146))[0])();
}
else
{
void* const kont9146 = arg_buffer[2];
void* const x9147 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9146))[0])(kont9146, x9147);
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
void* const kont9149 = prim_car(lst);
void* const lst9151 = prim_cdr(lst);
void* const x9150 = apply_prim_sqrt(lst9151);
arg_buffer[1] = kont9149;
arg_buffer[2] = x9150;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9149))[0])();
}
else
{
void* const kont9149 = arg_buffer[2];
void* const x9150 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9149))[0])(kont9149, x9150);
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
void* const kont9152 = prim_car(lst);
void* const lst9154 = prim_cdr(lst);
void* const x9153 = apply_prim_remainder(lst9154);
arg_buffer[1] = kont9152;
arg_buffer[2] = x9153;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9152))[0])();
}
else
{
void* const kont9152 = arg_buffer[2];
void* const x9153 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9152))[0])(kont9152, x9153);
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
void* const kont9155 = prim_car(lst);
void* const lst9157 = prim_cdr(lst);
void* const x9156 = apply_prim_quotient(lst9157);
arg_buffer[1] = kont9155;
arg_buffer[2] = x9156;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9155))[0])();
}
else
{
void* const kont9155 = arg_buffer[2];
void* const x9156 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9155))[0])(kont9155, x9156);
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
void* const kont9158 = prim_car(lst);
void* const lst9160 = prim_cdr(lst);
void* const x9159 = apply_prim_random(lst9160);
arg_buffer[1] = kont9158;
arg_buffer[2] = x9159;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9158))[0])();
}
else
{
void* const kont9158 = arg_buffer[2];
void* const x9159 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9158))[0])(kont9158, x9159);
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
void* const kont9161 = prim_car(lst);
void* const lst9163 = prim_cdr(lst);
void* const x9162 = apply_prim_symbol_u63(lst9163);
arg_buffer[1] = kont9161;
arg_buffer[2] = x9162;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9161))[0])();
}
else
{
void* const kont9161 = arg_buffer[2];
void* const x9162 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9161))[0])(kont9161, x9162);
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
void* const kont9164 = prim_car(lst);
void* const lst9166 = prim_cdr(lst);
void* const x9165 = apply_prim_pair_u63(lst9166);
arg_buffer[1] = kont9164;
arg_buffer[2] = x9165;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9164))[0])();
}
else
{
void* const kont9164 = arg_buffer[2];
void* const x9165 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9164))[0])(kont9164, x9165);
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
void* const kont9167 = prim_car(lst);
void* const lst9169 = prim_cdr(lst);
void* const x9168 = apply_prim_positive_u63(lst9169);
arg_buffer[1] = kont9167;
arg_buffer[2] = x9168;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9167))[0])();
}
else
{
void* const kont9167 = arg_buffer[2];
void* const x9168 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9167))[0])(kont9167, x9168);
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
void* const kont9170 = prim_car(lst);
void* const lst9172 = prim_cdr(lst);
void* const x9171 = apply_prim_negative_u63(lst9172);
arg_buffer[1] = kont9170;
arg_buffer[2] = x9171;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9170))[0])();
}
else
{
void* const kont9170 = arg_buffer[2];
void* const x9171 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9170))[0])(kont9170, x9171);
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
void* const kont9173 = prim_car(lst);
void* const lst9175 = prim_cdr(lst);
void* const x9174 = apply_prim_list(lst9175);
arg_buffer[1] = kont9173;
arg_buffer[2] = x9174;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9173))[0])();
}
else
{
void* const kont9173 = arg_buffer[2];
void* const x9174 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9173))[0])(kont9173, x9174);
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8892 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, apply_prim_equal_u63_2(int9011, apply_prim_modulo_2(x, int8999)));
}

inline void even_u63_spec(void* _8934, void* kont8892, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, apply_prim_equal_u63_2(int9011, apply_prim_modulo_2(x, int8999)));
}

inline void lam8935_fptr() // lam8935 -> generic version 
{
//reading env
void* const env8936 = arg_buffer[1];
//reading env and args
void* const id_8745 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t9003);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9004);
}

}

inline void lam8935_spec(void* env8936, void* id_8745) // lam8935 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t9003);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9004);
}

}

inline void boolean_u63_fptr() // boolean? -> generic version 
{
//reading env and args
void* const kont8893 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9176 = alloc_kont(lam8935_spec, 1);

//setting env list
clo9176[1] = kont8893;
void* f_lam_8894 = encode_clo(clo9176);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam8935_spec(f_lam_8894, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam8935_spec(f_lam_8894, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void boolean_u63_spec(void* _8937, void* kont8893, void* x) // boolean? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9177 = alloc_kont(lam8935_spec, 1);

//setting env list
clo9177[1] = kont8893;
void* f_lam_8894 = encode_clo(clo9177);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam8935_spec(f_lam_8894, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam8935_spec(f_lam_8894, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8895 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8895)[0])(kont8895, apply_prim_equal_u63_2(int9012, apply_prim_modulo_2(x, int8999)));
}

inline void odd_u63_spec(void* _8938, void* kont8895, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8895)[0])(kont8895, apply_prim_equal_u63_2(int9012, apply_prim_modulo_2(x, int8999)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8896 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9011, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8896)[0])(kont8896, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8896, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9012));
}

}

inline void list_u45ref_spec(void* _8939, void* kont8896, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9011, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8896)[0])(kont8896, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8896, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9012));
}

}

inline void lam8940_fptr() // lam8940 -> generic version 
{
//reading env
void* const env8941 = arg_buffer[1];
//reading env and args
void* const id_8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8941);

//if-clause
if(is_true(id_8760))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9004);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void lam8940_spec(void* env8941, void* id_8760) // lam8940 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8941);

//if-clause
if(is_true(id_8760))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9004);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8897 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9178 = alloc_kont(lam8940_spec, 3);

//setting env list
clo9178[1] = kont8897;
clo9178[2] = item;
clo9178[3] = lst;
void* f_lam_8898 = encode_clo(clo9178);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8940_spec(f_lam_8898, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8940_spec(f_lam_8898, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8942, void* kont8897, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9179 = alloc_kont(lam8940_spec, 3);

//setting env list
clo9179[1] = kont8897;
clo9179[2] = item;
clo9179[3] = lst;
void* f_lam_8898 = encode_clo(clo9179);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8940_spec(f_lam_8898, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8940_spec(f_lam_8898, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8899 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8899)[0])(kont8899, bool_f9004);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8899)[0])(kont8899, bool_t9003);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8899, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8943, void* kont8899, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8899)[0])(kont8899, bool_f9004);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8899)[0])(kont8899, bool_t9003);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8899, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8944_fptr() // lam8944 -> generic version 
{
//reading env
void* const env8945 = arg_buffer[1];
//reading env and args
void* const id_8775 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8945);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8775));
}

inline void lam8944_spec(void* env8945, void* id_8775) // lam8944 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8945);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8775));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8900 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[0])(kont8900, int9011);
}
else
{

//creating new make-kont closure
void** clo9180 = alloc_kont(lam8944_spec, 2);

//setting env list
clo9180[1] = int9012;
clo9180[2] = kont8900;
void* f_lam_8901 = encode_clo(clo9180);



//clo-app
length_spec(length, f_lam_8901, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8946, void* kont8900, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[0])(kont8900, int9011);
}
else
{

//creating new make-kont closure
void** clo9181 = alloc_kont(lam8944_spec, 2);

//setting env list
clo9181[1] = int9012;
clo9181[2] = kont8900;
void* f_lam_8901 = encode_clo(clo9181);



//clo-app
length_spec(length, f_lam_8901, apply_prim_cdr_1(lst));
}

}

inline void lam8947_fptr() // lam8947 -> generic version 
{
//reading env
void* const env8948 = arg_buffer[1];
//reading env and args
void* const id_8781 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8948);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8781));
}

inline void lam8947_spec(void* env8948, void* id_8781) // lam8947 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8948);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8781));
}

inline void lam8949_fptr() // lam8949 -> generic version 
{
//reading env
void* const env8950 = arg_buffer[1];
//reading env and args
void* const id_8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);

//creating new make-kont closure
void** clo9182 = alloc_kont(lam8947_spec, 2);

//setting env list
clo9182[1] = decode_clo_array[1];
clo9182[2] = id_8779;
void* f_lam_8903 = encode_clo(clo9182);



//clo-app
map_spec(map, f_lam_8903, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8949_spec(void* env8950, void* id_8779) // lam8949 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);

//creating new make-kont closure
void** clo9183 = alloc_kont(lam8947_spec, 2);

//setting env list
clo9183[1] = decode_clo_array[1];
clo9183[2] = id_8779;
void* f_lam_8903 = encode_clo(clo9183);



//clo-app
map_spec(map, f_lam_8903, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8902 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8902)[0])(kont8902, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9184 = alloc_kont(lam8949_spec, 3);

//setting env list
clo9184[1] = kont8902;
clo9184[2] = proc;
clo9184[3] = lst;
void* f_lam_8904 = encode_clo(clo9184);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8904;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8951, void* kont8902, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8902)[0])(kont8902, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9185 = alloc_kont(lam8949_spec, 3);

//setting env list
clo9185[1] = kont8902;
clo9185[2] = proc;
clo9185[3] = lst;
void* f_lam_8904 = encode_clo(clo9185);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8904;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8952_fptr() // lam8952 -> generic version 
{
//reading env
void* const env8953 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8788));
}

inline void lam8952_spec(void* env8953, void* id_8788) // lam8952 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8788));
}

inline void lam8954_fptr() // lam8954 -> generic version 
{
//reading env
void* const env8955 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8955);

//if-clause
if(is_true(id_8785))
{

//creating new make-kont closure
void** clo9186 = alloc_kont(lam8952_spec, 2);

//setting env list
clo9186[1] = apply_prim_car_1(decode_clo_array[2]);
clo9186[2] = decode_clo_array[3];
void* f_lam_8906 = encode_clo(clo9186);



//clo-app
filter_spec(filter, f_lam_8906, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam8954_spec(void* env8955, void* id_8785) // lam8954 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8955);

//if-clause
if(is_true(id_8785))
{

//creating new make-kont closure
void** clo9187 = alloc_kont(lam8952_spec, 2);

//setting env list
clo9187[1] = apply_prim_car_1(decode_clo_array[2]);
clo9187[2] = decode_clo_array[3];
void* f_lam_8906 = encode_clo(clo9187);



//clo-app
filter_spec(filter, f_lam_8906, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8905 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8905)[0])(kont8905, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9188 = alloc_kont(lam8954_spec, 3);

//setting env list
clo9188[1] = op;
clo9188[2] = lst;
clo9188[3] = kont8905;
void* f_lam_8907 = encode_clo(clo9188);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8907;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8956, void* kont8905, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8905)[0])(kont8905, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9189 = alloc_kont(lam8954_spec, 3);

//setting env list
clo9189[1] = op;
clo9189[2] = lst;
clo9189[3] = kont8905;
void* f_lam_8907 = encode_clo(clo9189);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8907;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8908 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9011)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8908)[0])(kont8908, lst);
}
else
{

//clo-app
drop_spec(drop, kont8908, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9012));
}

}

inline void drop_spec(void* _8957, void* kont8908, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9011)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8908)[0])(kont8908, lst);
}
else
{

//clo-app
drop_spec(drop, kont8908, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9012));
}

}

inline void lam8958_fptr() // lam8958 -> generic version 
{
//reading env
void* const env8959 = arg_buffer[1];
//reading env and args
void* const id_8797 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8959);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8797, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8958_spec(void* env8959, void* id_8797) // lam8958 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8959);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8797, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8909 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, acc);
}
else
{

//creating new make-kont closure
void** clo9190 = alloc_kont(lam8958_spec, 3);

//setting env list
clo9190[1] = kont8909;
clo9190[2] = lst;
clo9190[3] = fun;
void* f_lam_8910 = encode_clo(clo9190);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8910;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8960, void* kont8909, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, acc);
}
else
{

//creating new make-kont closure
void** clo9191 = alloc_kont(lam8958_spec, 3);

//setting env list
clo9191[1] = kont8909;
clo9191[2] = lst;
clo9191[3] = fun;
void* f_lam_8910 = encode_clo(clo9191);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8910;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8961_fptr() // lam8961 -> generic version 
{
//reading env
void* const env8962 = arg_buffer[1];
//reading env and args
void* const id_8802 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8962);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8802;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8961_spec(void* env8962, void* id_8802) // lam8961 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8962);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8802;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8911 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8911)[0])(kont8911, acc);
}
else
{

//creating new make-kont closure
void** clo9192 = alloc_kont(lam8961_spec, 3);

//setting env list
clo9192[1] = fun;
clo9192[2] = apply_prim_car_1(lst);
clo9192[3] = kont8911;
void* f_lam_8912 = encode_clo(clo9192);



//clo-app
foldr_spec(foldr, f_lam_8912, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8963, void* kont8911, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8911)[0])(kont8911, acc);
}
else
{

//creating new make-kont closure
void** clo9193 = alloc_kont(lam8961_spec, 3);

//setting env list
clo9193[1] = fun;
clo9193[2] = apply_prim_car_1(lst);
clo9193[3] = kont8911;
void* f_lam_8912 = encode_clo(clo9193);



//clo-app
foldr_spec(foldr, f_lam_8912, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8913 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8913)[0])(kont8913, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8913, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8964, void* kont8913, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8913)[0])(kont8913, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8913, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8914 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8914, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8965, void* kont8914, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8914, lst, apply_prim_list_0());
}

inline void lam8966_fptr() // lam8966 -> generic version 
{
//reading env
void* const env8967 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8811));
}

inline void lam8966_spec(void* env8967, void* id_8811) // lam8966 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8811));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8915 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8915)[0])(kont8915, rhs);
}
else
{

//creating new make-kont closure
void** clo9194 = alloc_kont(lam8966_spec, 2);

//setting env list
clo9194[1] = kont8915;
clo9194[2] = apply_prim_car_1(lhs);
void* f_lam_8916 = encode_clo(clo9194);



//clo-app
append1_spec(append1, f_lam_8916, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8968, void* kont8915, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8915)[0])(kont8915, rhs);
}
else
{

//creating new make-kont closure
void** clo9195 = alloc_kont(lam8966_spec, 2);

//setting env list
clo9195[1] = kont8915;
clo9195[2] = apply_prim_car_1(lhs);
void* f_lam_8916 = encode_clo(clo9195);



//clo-app
append1_spec(append1, f_lam_8916, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8969_fptr() // lam8969 -> generic version 
{
//reading env
void* const env8970 = arg_buffer[1];
//reading env and args
void* const xy8813 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam8969_spec(void* env8970, void* xy8813) // lam8969 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam8971_fptr() // lam8971 -> generic version 
{
//reading env
void* const env8972 = arg_buffer[1];
//reading env and args
void* const id_8816 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8816);
}

inline void lam8971_spec(void* env8972, void* id_8816) // lam8971 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8816);
}

inline void lam8973_fptr() // lam8973 -> generic version 
{
//reading env
void* const env8974 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9196 = alloc_kont(lam8969_spec, 1);

//setting env list
clo9196[1] = decode_clo_array[1];
void* f_lam_8918 = encode_clo(clo9196);



//clo-app
append1_spec(append1, f_lam_8918, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9197 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9197[1] = decode_clo_array[1];
clo9197[2] = apply_prim_list_0();
void* f_lam_8919 = encode_clo(clo9197);



//clo-app
append1_spec(append1, f_lam_8919, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

inline void lam8973_spec(void* env8974, void* lsts) // lam8973 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9198 = alloc_kont(lam8969_spec, 1);

//setting env list
clo9198[1] = decode_clo_array[1];
void* f_lam_8918 = encode_clo(clo9198);



//clo-app
append1_spec(append1, f_lam_8918, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9199 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9199[1] = decode_clo_array[1];
clo9199[2] = apply_prim_list_0();
void* f_lam_8919 = encode_clo(clo9199);



//clo-app
append1_spec(append1, f_lam_8919, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _8975 = arg_buffer[1];
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
void** clo9200 = alloc_kont(lam8973_spec, 3);

//setting env list
clo9200[1] = apply_prim_car_1(vargs);
clo9200[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9200[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_8920 = encode_clo(clo9200);


// kont-clo-app case
lam8973_spec(f_lam_8920, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam8976_fptr() // lam8976 -> generic version 
{
//reading env
void* const env8977 = arg_buffer[1];
//reading env and args
void* const xy8819 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void lam8976_spec(void* env8977, void* xy8819) // lam8976 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8921 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9011)))
{

//creating new make-kont closure
void** clo9201 = alloc_kont(lam8976_spec, 1);

//setting env list
clo9201[1] = kont8921;
void* f_lam_8922 = encode_clo(clo9201);



//clo-app
reverse_spec(reverse, f_lam_8922, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8921, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9012), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8978, void* kont8921, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9011)))
{

//creating new make-kont closure
void** clo9202 = alloc_kont(lam8976_spec, 1);

//setting env list
clo9202[1] = kont8921;
void* f_lam_8922 = encode_clo(clo9202);



//clo-app
reverse_spec(reverse, f_lam_8922, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8921, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9012), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8923 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8923, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8979, void* kont8923, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8923, lst, n, apply_prim_list_0());
}

inline void lam8980_fptr() // lam8980 -> generic version 
{
//reading env
void* const env8981 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8833));
}

inline void lam8980_spec(void* env8981, void* id_8833) // lam8980 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8833));
}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8924 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9011)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8924)[0])(kont8924, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9203 = alloc_kont(lam8980_spec, 2);

//setting env list
clo9203[1] = apply_prim_car_1(lst);
clo9203[2] = kont8924;
void* f_lam_8925 = encode_clo(clo9203);



//clo-app
list_u45set_spec(list_u45set, f_lam_8925, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9012), value);
}

}

inline void list_u45set_spec(void* _8982, void* kont8924, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9011)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8924)[0])(kont8924, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9204 = alloc_kont(lam8980_spec, 2);

//setting env list
clo9204[1] = apply_prim_car_1(lst);
clo9204[2] = kont8924;
void* f_lam_8925 = encode_clo(clo9204);



//clo-app
list_u45set_spec(list_u45set, f_lam_8925, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9012), value);
}

}

inline void lam8983_fptr() // lam8983 -> generic version 
{
//reading env
void* const env8984 = arg_buffer[1];
//reading env and args
void* const id_8840 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
append_fptr();
}

inline void lam8983_spec(void* env8984, void* id_8840) // lam8983 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
append_fptr();
}

inline void lam8985_fptr() // lam8985 -> generic version 
{
//reading env
void* const env8986 = arg_buffer[1];
//reading env and args
void* const id_8838 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8986);

//creating new make-kont closure
void** clo9205 = alloc_kont(lam8983_spec, 2);

//setting env list
clo9205[1] = id_8838;
clo9205[2] = decode_clo_array[1];
void* f_lam_8927 = encode_clo(clo9205);



//clo-app
flatten_spec(flatten, f_lam_8927, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8985_spec(void* env8986, void* id_8838) // lam8985 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8986);

//creating new make-kont closure
void** clo9206 = alloc_kont(lam8983_spec, 2);

//setting env list
clo9206[1] = id_8838;
clo9206[2] = decode_clo_array[1];
void* f_lam_8927 = encode_clo(clo9206);



//clo-app
flatten_spec(flatten, f_lam_8927, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8926 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8926)[0])(kont8926, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9207 = alloc_kont(lam8985_spec, 2);

//setting env list
clo9207[1] = kont8926;
clo9207[2] = lst;
void* f_lam_8928 = encode_clo(clo9207);



//clo-app
flatten_spec(flatten, f_lam_8928, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8926)[0])(kont8926, apply_prim_list_1(lst));
}

}

}

inline void flatten_spec(void* _8987, void* kont8926, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8926)[0])(kont8926, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9208 = alloc_kont(lam8985_spec, 2);

//setting env list
clo9208[1] = kont8926;
clo9208[2] = lst;
void* f_lam_8928 = encode_clo(clo9208);



//clo-app
flatten_spec(flatten, f_lam_8928, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8926)[0])(kont8926, apply_prim_list_1(lst));
}

}

}

inline void lam8988_fptr() // lam8988 -> generic version 
{
//reading env
void* const env8989 = arg_buffer[1];
//reading env and args
void* const id_8849 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8849));
}

inline void lam8988_spec(void* env8989, void* id_8849) // lam8988 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8849));
}

inline void lam8990_fptr() // lam8990 -> generic version 
{
//reading env
void* const env8991 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//creating new make-kont closure
void** clo9209 = alloc_kont(lam8988_spec, 2);

//setting env list
clo9209[1] = decode_clo_array[2];
clo9209[2] = id_8846;
void* f_lam_8930 = encode_clo(clo9209);



//clo-app
fibfp_spec(fibfp, f_lam_8930, apply_prim__u45_2(decode_clo_array[1], float9015));
}

inline void lam8990_spec(void* env8991, void* id_8846) // lam8990 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//creating new make-kont closure
void** clo9210 = alloc_kont(lam8988_spec, 2);

//setting env list
clo9210[1] = decode_clo_array[2];
clo9210[2] = id_8846;
void* f_lam_8930 = encode_clo(clo9210);



//clo-app
fibfp_spec(fibfp, f_lam_8930, apply_prim__u45_2(decode_clo_array[1], float9015));
}

inline void fibfp_fptr() // fibfp -> generic version 
{
//reading env and args
void* const kont8929 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(n, float9015)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8929)[0])(kont8929, n);
}
else
{

//creating new make-kont closure
void** clo9211 = alloc_kont(lam8990_spec, 2);

//setting env list
clo9211[1] = n;
clo9211[2] = kont8929;
void* f_lam_8931 = encode_clo(clo9211);



//clo-app
fibfp_spec(fibfp, f_lam_8931, apply_prim__u45_2(n, float9014));
}

}

inline void fibfp_spec(void* _8992, void* kont8929, void* n) // fibfp 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(n, float9015)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8929)[0])(kont8929, n);
}
else
{

//creating new make-kont closure
void** clo9212 = alloc_kont(lam8990_spec, 2);

//setting env list
clo9212[1] = n;
clo9212[2] = kont8929;
void* f_lam_8931 = encode_clo(clo9212);



//clo-app
fibfp_spec(fibfp, f_lam_8931, apply_prim__u45_2(n, float9014));
}

}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8932 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8932, float9016);
}

inline void brouhaha_main_spec(void* _8993, void* kont8932) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8932, float9016);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9011 = reinterpret_cast<void *>(encode_int(0));
float9015 = reinterpret_cast<void *>(encode_float(2.0));
float9014 = reinterpret_cast<void *>(encode_float(1.0));
float9016 = reinterpret_cast<void *>(encode_float(40.0));
bool_t9003 = encode_bool(true);
int9012 = reinterpret_cast<void *>(encode_int(1));
bool_f9004 = encode_bool(false);
int8999 = reinterpret_cast<void *>(encode_int(2));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

