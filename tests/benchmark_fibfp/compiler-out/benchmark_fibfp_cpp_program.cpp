#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8954;
void* float8958;
void* float8957;
void* float8959;
void* bool_t8947;
void* int8955;
void* bool_f8948;
void* int8943;



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
void even_u63_spec(void* _8891, void* kont8856, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8892, void* kont8857, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8893, void* kont8858, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8894_fptr(); // lam8894
void lam8894_spec(void* env8895, void* id_8745); // lam8894
void* lam8894 = encode_clo(alloc_clo(lam8894_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8896, void* kont8859, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8897, void* kont8861, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8898_fptr(); // lam8898
void lam8898_spec(void* env8899, void* id_8760); // lam8898
void* lam8898 = encode_clo(alloc_clo(lam8898_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8900, void* kont8862, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8901_fptr(); // lam8901
void lam8901_spec(void* env8902, void* id_8766); // lam8901
void* lam8901 = encode_clo(alloc_clo(lam8901_fptr, 0));

void lam8903_fptr(); // lam8903
void lam8903_spec(void* env8904, void* id_8764); // lam8903
void* lam8903 = encode_clo(alloc_clo(lam8903_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8905, void* kont8864, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8906_fptr(); // lam8906
void lam8906_spec(void* env8907, void* id_8773); // lam8906
void* lam8906 = encode_clo(alloc_clo(lam8906_fptr, 0));

void lam8908_fptr(); // lam8908
void lam8908_spec(void* env8909, void* id_8770); // lam8908
void* lam8908 = encode_clo(alloc_clo(lam8908_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8910, void* kont8867, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8911, void* kont8870, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8912_fptr(); // lam8912
void lam8912_spec(void* env8913, void* id_8782); // lam8912
void* lam8912 = encode_clo(alloc_clo(lam8912_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8914, void* kont8871, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8915_fptr(); // lam8915
void lam8915_spec(void* env8916, void* id_8787); // lam8915
void* lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8917, void* kont8873, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8918, void* kont8875, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8919, void* kont8876, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8920_fptr(); // lam8920
void lam8920_spec(void* env8921, void* id_8796); // lam8920
void* lam8920 = encode_clo(alloc_clo(lam8920_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8922, void* kont8877, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8923_fptr(); // lam8923
void lam8923_spec(void* env8924, void* id_8803); // lam8923
void* lam8923 = encode_clo(alloc_clo(lam8923_fptr, 0));

void lam8925_fptr(); // lam8925
void lam8925_spec(void* env8926, void* id_8798); // lam8925
void* lam8925 = encode_clo(alloc_clo(lam8925_fptr, 0));

void lam8927_fptr(); // lam8927
void lam8927_spec(void* env8928, void* x); // lam8927
void* lam8927 = encode_clo(alloc_clo(lam8927_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8930_fptr(); // lam8930
void lam8930_spec(void* env8931, void* xy8806); // lam8930
void* lam8930 = encode_clo(alloc_clo(lam8930_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8932, void* kont8883, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8933, void* kont8885, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8934_fptr(); // lam8934
void lam8934_spec(void* env8935, void* id_8820); // lam8934
void* lam8934 = encode_clo(alloc_clo(lam8934_fptr, 0));

void lam8936_fptr(); // lam8936
void lam8936_spec(void* env8937, void* id_8817); // lam8936
void* lam8936 = encode_clo(alloc_clo(lam8936_fptr, 0));

void fibfp_fptr(); // fibfp
void fibfp_spec(void* _8938, void* kont8886, void* n); // fibfp
void* fibfp = encode_clo(alloc_clo(fibfp_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8939, void* kont8889); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8960 = prim_car(lst);
void* const lst8962 = prim_cdr(lst);
void* const x8961 = apply_prim__u43(lst8962);
arg_buffer[1] = kont8960;
arg_buffer[2] = x8961;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8960))[0])();
}
else
{
void* const kont8960 = arg_buffer[2];
void* const x8961 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8960;
arg_buffer[2] = x8961;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8960))[0])();
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
void* const kont8963 = prim_car(lst);
void* const lst8965 = prim_cdr(lst);
void* const x8964 = apply_prim__u45(lst8965);
arg_buffer[1] = kont8963;
arg_buffer[2] = x8964;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8963))[0])();
}
else
{
void* const kont8963 = arg_buffer[2];
void* const x8964 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8963;
arg_buffer[2] = x8964;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8963))[0])();
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
void* const kont8966 = prim_car(lst);
void* const lst8968 = prim_cdr(lst);
void* const x8967 = apply_prim__u42(lst8968);
arg_buffer[1] = kont8966;
arg_buffer[2] = x8967;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8966))[0])();
}
else
{
void* const kont8966 = arg_buffer[2];
void* const x8967 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8966;
arg_buffer[2] = x8967;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8966))[0])();
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
void* const kont8969 = prim_car(lst);
void* const lst8971 = prim_cdr(lst);
void* const x8970 = apply_prim__u47(lst8971);
arg_buffer[1] = kont8969;
arg_buffer[2] = x8970;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8969))[0])();
}
else
{
void* const kont8969 = arg_buffer[2];
void* const x8970 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8969;
arg_buffer[2] = x8970;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8969))[0])();
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
void* const kont8972 = prim_car(lst);
void* const lst8974 = prim_cdr(lst);
void* const x8973 = apply_prim__u61(lst8974);
arg_buffer[1] = kont8972;
arg_buffer[2] = x8973;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8972))[0])();
}
else
{
void* const kont8972 = arg_buffer[2];
void* const x8973 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8972;
arg_buffer[2] = x8973;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8972))[0])();
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
void* const kont8975 = prim_car(lst);
void* const lst8977 = prim_cdr(lst);
void* const x8976 = apply_prim__u62(lst8977);
arg_buffer[1] = kont8975;
arg_buffer[2] = x8976;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8975))[0])();
}
else
{
void* const kont8975 = arg_buffer[2];
void* const x8976 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8975;
arg_buffer[2] = x8976;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8975))[0])();
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
void* const kont8978 = prim_car(lst);
void* const lst8980 = prim_cdr(lst);
void* const x8979 = apply_prim__u60(lst8980);
arg_buffer[1] = kont8978;
arg_buffer[2] = x8979;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8978))[0])();
}
else
{
void* const kont8978 = arg_buffer[2];
void* const x8979 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8978;
arg_buffer[2] = x8979;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8978))[0])();
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
void* const kont8981 = prim_car(lst);
void* const lst8983 = prim_cdr(lst);
void* const x8982 = apply_prim__u60_u61(lst8983);
arg_buffer[1] = kont8981;
arg_buffer[2] = x8982;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8981))[0])();
}
else
{
void* const kont8981 = arg_buffer[2];
void* const x8982 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8981;
arg_buffer[2] = x8982;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8981))[0])();
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
void* const kont8984 = prim_car(lst);
void* const lst8986 = prim_cdr(lst);
void* const x8985 = apply_prim__u62_u61(lst8986);
arg_buffer[1] = kont8984;
arg_buffer[2] = x8985;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8984))[0])();
}
else
{
void* const kont8984 = arg_buffer[2];
void* const x8985 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8984;
arg_buffer[2] = x8985;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8984))[0])();
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
void* const kont8987 = prim_car(lst);
void* const lst8989 = prim_cdr(lst);
void* const x8988 = apply_prim_modulo(lst8989);
arg_buffer[1] = kont8987;
arg_buffer[2] = x8988;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8987))[0])();
}
else
{
void* const kont8987 = arg_buffer[2];
void* const x8988 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8987;
arg_buffer[2] = x8988;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8987))[0])();
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
void* const kont8990 = prim_car(lst);
void* const lst8992 = prim_cdr(lst);
void* const x8991 = apply_prim_null_u63(lst8992);
arg_buffer[1] = kont8990;
arg_buffer[2] = x8991;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8990))[0])();
}
else
{
void* const kont8990 = arg_buffer[2];
void* const x8991 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8990;
arg_buffer[2] = x8991;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8990))[0])();
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
void* const kont8993 = prim_car(lst);
void* const lst8995 = prim_cdr(lst);
void* const x8994 = apply_prim_equal_u63(lst8995);
arg_buffer[1] = kont8993;
arg_buffer[2] = x8994;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8993))[0])();
}
else
{
void* const kont8993 = arg_buffer[2];
void* const x8994 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8993;
arg_buffer[2] = x8994;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8993))[0])();
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
void* const kont8996 = prim_car(lst);
void* const lst8998 = prim_cdr(lst);
void* const x8997 = apply_prim_eq_u63(lst8998);
arg_buffer[1] = kont8996;
arg_buffer[2] = x8997;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8996))[0])();
}
else
{
void* const kont8996 = arg_buffer[2];
void* const x8997 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8996;
arg_buffer[2] = x8997;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8996))[0])();
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
void* const kont8999 = prim_car(lst);
void* const lst9001 = prim_cdr(lst);
void* const x9000 = apply_prim_cons(lst9001);
arg_buffer[1] = kont8999;
arg_buffer[2] = x9000;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8999))[0])();
}
else
{
void* const kont8999 = arg_buffer[2];
void* const x9000 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8999;
arg_buffer[2] = x9000;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8999))[0])();
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
void* const kont9002 = prim_car(lst);
void* const lst9004 = prim_cdr(lst);
void* const x9003 = apply_prim_car(lst9004);
arg_buffer[1] = kont9002;
arg_buffer[2] = x9003;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9002))[0])();
}
else
{
void* const kont9002 = arg_buffer[2];
void* const x9003 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9002;
arg_buffer[2] = x9003;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9002))[0])();
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
void* const kont9005 = prim_car(lst);
void* const lst9007 = prim_cdr(lst);
void* const x9006 = apply_prim_cdr(lst9007);
arg_buffer[1] = kont9005;
arg_buffer[2] = x9006;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9005))[0])();
}
else
{
void* const kont9005 = arg_buffer[2];
void* const x9006 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9005;
arg_buffer[2] = x9006;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9005))[0])();
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
void* const kont9008 = prim_car(lst);
void* const lst9010 = prim_cdr(lst);
void* const x9009 = apply_prim_float_u45_u62int(lst9010);
arg_buffer[1] = kont9008;
arg_buffer[2] = x9009;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9008))[0])();
}
else
{
void* const kont9008 = arg_buffer[2];
void* const x9009 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9008;
arg_buffer[2] = x9009;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9008))[0])();
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
void* const kont9011 = prim_car(lst);
void* const lst9013 = prim_cdr(lst);
void* const x9012 = apply_prim_int_u45_u62float(lst9013);
arg_buffer[1] = kont9011;
arg_buffer[2] = x9012;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9011))[0])();
}
else
{
void* const kont9011 = arg_buffer[2];
void* const x9012 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9011;
arg_buffer[2] = x9012;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9011))[0])();
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
void* const kont9014 = prim_car(lst);
void* const lst9016 = prim_cdr(lst);
void* const x9015 = apply_prim_hash(lst9016);
arg_buffer[1] = kont9014;
arg_buffer[2] = x9015;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9014))[0])();
}
else
{
void* const kont9014 = arg_buffer[2];
void* const x9015 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9014;
arg_buffer[2] = x9015;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9014))[0])();
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
void* const kont9017 = prim_car(lst);
void* const lst9019 = prim_cdr(lst);
void* const x9018 = apply_prim_hash_u45ref(lst9019);
arg_buffer[1] = kont9017;
arg_buffer[2] = x9018;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9017))[0])();
}
else
{
void* const kont9017 = arg_buffer[2];
void* const x9018 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9017;
arg_buffer[2] = x9018;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9017))[0])();
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
void* const kont9020 = prim_car(lst);
void* const lst9022 = prim_cdr(lst);
void* const x9021 = apply_prim_hash_u45set(lst9022);
arg_buffer[1] = kont9020;
arg_buffer[2] = x9021;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9020))[0])();
}
else
{
void* const kont9020 = arg_buffer[2];
void* const x9021 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9020;
arg_buffer[2] = x9021;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9020))[0])();
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
void* const kont9023 = prim_car(lst);
void* const lst9025 = prim_cdr(lst);
void* const x9024 = apply_prim_hash_u45keys(lst9025);
arg_buffer[1] = kont9023;
arg_buffer[2] = x9024;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9023))[0])();
}
else
{
void* const kont9023 = arg_buffer[2];
void* const x9024 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9023;
arg_buffer[2] = x9024;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9023))[0])();
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
void* const kont9026 = prim_car(lst);
void* const lst9028 = prim_cdr(lst);
void* const x9027 = apply_prim_hash_u45has_u45key_u63(lst9028);
arg_buffer[1] = kont9026;
arg_buffer[2] = x9027;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9026))[0])();
}
else
{
void* const kont9026 = arg_buffer[2];
void* const x9027 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9026;
arg_buffer[2] = x9027;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9026))[0])();
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
void* const kont9029 = prim_car(lst);
void* const lst9031 = prim_cdr(lst);
void* const x9030 = apply_prim_hash_u45count(lst9031);
arg_buffer[1] = kont9029;
arg_buffer[2] = x9030;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9029))[0])();
}
else
{
void* const kont9029 = arg_buffer[2];
void* const x9030 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9029;
arg_buffer[2] = x9030;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9029))[0])();
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
void* const kont9032 = prim_car(lst);
void* const lst9034 = prim_cdr(lst);
void* const x9033 = apply_prim_set(lst9034);
arg_buffer[1] = kont9032;
arg_buffer[2] = x9033;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9032))[0])();
}
else
{
void* const kont9032 = arg_buffer[2];
void* const x9033 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9032;
arg_buffer[2] = x9033;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9032))[0])();
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
void* const kont9035 = prim_car(lst);
void* const lst9037 = prim_cdr(lst);
void* const x9036 = apply_prim_set_u45_u62list(lst9037);
arg_buffer[1] = kont9035;
arg_buffer[2] = x9036;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9035))[0])();
}
else
{
void* const kont9035 = arg_buffer[2];
void* const x9036 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9035;
arg_buffer[2] = x9036;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9035))[0])();
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
void* const kont9038 = prim_car(lst);
void* const lst9040 = prim_cdr(lst);
void* const x9039 = apply_prim_list_u45_u62set(lst9040);
arg_buffer[1] = kont9038;
arg_buffer[2] = x9039;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9038))[0])();
}
else
{
void* const kont9038 = arg_buffer[2];
void* const x9039 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9038;
arg_buffer[2] = x9039;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9038))[0])();
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
void* const kont9041 = prim_car(lst);
void* const lst9043 = prim_cdr(lst);
void* const x9042 = apply_prim_set_u45add(lst9043);
arg_buffer[1] = kont9041;
arg_buffer[2] = x9042;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9041))[0])();
}
else
{
void* const kont9041 = arg_buffer[2];
void* const x9042 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9041;
arg_buffer[2] = x9042;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9041))[0])();
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
void* const kont9044 = prim_car(lst);
void* const lst9046 = prim_cdr(lst);
void* const x9045 = apply_prim_set_u45member_u63(lst9046);
arg_buffer[1] = kont9044;
arg_buffer[2] = x9045;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9044))[0])();
}
else
{
void* const kont9044 = arg_buffer[2];
void* const x9045 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9044;
arg_buffer[2] = x9045;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9044))[0])();
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
void* const kont9047 = prim_car(lst);
void* const lst9049 = prim_cdr(lst);
void* const x9048 = apply_prim_set_u45remove(lst9049);
arg_buffer[1] = kont9047;
arg_buffer[2] = x9048;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9047))[0])();
}
else
{
void* const kont9047 = arg_buffer[2];
void* const x9048 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9047;
arg_buffer[2] = x9048;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9047))[0])();
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
void* const kont9050 = prim_car(lst);
void* const lst9052 = prim_cdr(lst);
void* const x9051 = apply_prim_set_u45count(lst9052);
arg_buffer[1] = kont9050;
arg_buffer[2] = x9051;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9050))[0])();
}
else
{
void* const kont9050 = arg_buffer[2];
void* const x9051 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9050;
arg_buffer[2] = x9051;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9050))[0])();
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
void* const kont9053 = prim_car(lst);
void* const lst9055 = prim_cdr(lst);
void* const x9054 = apply_prim_string_u63(lst9055);
arg_buffer[1] = kont9053;
arg_buffer[2] = x9054;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9053))[0])();
}
else
{
void* const kont9053 = arg_buffer[2];
void* const x9054 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9053;
arg_buffer[2] = x9054;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9053))[0])();
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
void* const kont9056 = prim_car(lst);
void* const lst9058 = prim_cdr(lst);
void* const x9057 = apply_prim_string_u45length(lst9058);
arg_buffer[1] = kont9056;
arg_buffer[2] = x9057;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9056))[0])();
}
else
{
void* const kont9056 = arg_buffer[2];
void* const x9057 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9056;
arg_buffer[2] = x9057;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9056))[0])();
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
void* const kont9059 = prim_car(lst);
void* const lst9061 = prim_cdr(lst);
void* const x9060 = apply_prim_string_u45ref(lst9061);
arg_buffer[1] = kont9059;
arg_buffer[2] = x9060;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9059))[0])();
}
else
{
void* const kont9059 = arg_buffer[2];
void* const x9060 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9059;
arg_buffer[2] = x9060;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9059))[0])();
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
void* const kont9062 = prim_car(lst);
void* const lst9064 = prim_cdr(lst);
void* const x9063 = apply_prim_substring(lst9064);
arg_buffer[1] = kont9062;
arg_buffer[2] = x9063;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9062))[0])();
}
else
{
void* const kont9062 = arg_buffer[2];
void* const x9063 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9062;
arg_buffer[2] = x9063;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9062))[0])();
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
void* const kont9065 = prim_car(lst);
void* const lst9067 = prim_cdr(lst);
void* const x9066 = apply_prim_string_u45append(lst9067);
arg_buffer[1] = kont9065;
arg_buffer[2] = x9066;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9065))[0])();
}
else
{
void* const kont9065 = arg_buffer[2];
void* const x9066 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9065;
arg_buffer[2] = x9066;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9065))[0])();
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
void* const kont9068 = prim_car(lst);
void* const lst9070 = prim_cdr(lst);
void* const x9069 = apply_prim_string_u45_u62list(lst9070);
arg_buffer[1] = kont9068;
arg_buffer[2] = x9069;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9068))[0])();
}
else
{
void* const kont9068 = arg_buffer[2];
void* const x9069 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9068;
arg_buffer[2] = x9069;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9068))[0])();
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
void* const kont9071 = prim_car(lst);
void* const lst9073 = prim_cdr(lst);
void* const x9072 = apply_prim_exact_u45floor(lst9073);
arg_buffer[1] = kont9071;
arg_buffer[2] = x9072;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9071))[0])();
}
else
{
void* const kont9071 = arg_buffer[2];
void* const x9072 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9071;
arg_buffer[2] = x9072;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9071))[0])();
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
void* const kont9074 = prim_car(lst);
void* const lst9076 = prim_cdr(lst);
void* const x9075 = apply_prim_exact_u45ceiling(lst9076);
arg_buffer[1] = kont9074;
arg_buffer[2] = x9075;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9074))[0])();
}
else
{
void* const kont9074 = arg_buffer[2];
void* const x9075 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9074;
arg_buffer[2] = x9075;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9074))[0])();
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
void* const kont9077 = prim_car(lst);
void* const lst9079 = prim_cdr(lst);
void* const x9078 = apply_prim_exact_u45round(lst9079);
arg_buffer[1] = kont9077;
arg_buffer[2] = x9078;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9077))[0])();
}
else
{
void* const kont9077 = arg_buffer[2];
void* const x9078 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9077;
arg_buffer[2] = x9078;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9077))[0])();
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
void* const kont9080 = prim_car(lst);
void* const lst9082 = prim_cdr(lst);
void* const x9081 = apply_prim_abs(lst9082);
arg_buffer[1] = kont9080;
arg_buffer[2] = x9081;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9080))[0])();
}
else
{
void* const kont9080 = arg_buffer[2];
void* const x9081 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9080;
arg_buffer[2] = x9081;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9080))[0])();
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
void* const kont9083 = prim_car(lst);
void* const lst9085 = prim_cdr(lst);
void* const x9084 = apply_prim_max(lst9085);
arg_buffer[1] = kont9083;
arg_buffer[2] = x9084;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9083))[0])();
}
else
{
void* const kont9083 = arg_buffer[2];
void* const x9084 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9083;
arg_buffer[2] = x9084;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9083))[0])();
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
void* const kont9086 = prim_car(lst);
void* const lst9088 = prim_cdr(lst);
void* const x9087 = apply_prim_min(lst9088);
arg_buffer[1] = kont9086;
arg_buffer[2] = x9087;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9086))[0])();
}
else
{
void* const kont9086 = arg_buffer[2];
void* const x9087 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9086;
arg_buffer[2] = x9087;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9086))[0])();
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
void* const kont9089 = prim_car(lst);
void* const lst9091 = prim_cdr(lst);
void* const x9090 = apply_prim_expt(lst9091);
arg_buffer[1] = kont9089;
arg_buffer[2] = x9090;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9089))[0])();
}
else
{
void* const kont9089 = arg_buffer[2];
void* const x9090 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9089;
arg_buffer[2] = x9090;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9089))[0])();
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
void* const kont9092 = prim_car(lst);
void* const lst9094 = prim_cdr(lst);
void* const x9093 = apply_prim_sqrt(lst9094);
arg_buffer[1] = kont9092;
arg_buffer[2] = x9093;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9092))[0])();
}
else
{
void* const kont9092 = arg_buffer[2];
void* const x9093 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9092;
arg_buffer[2] = x9093;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9092))[0])();
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
void* const kont9095 = prim_car(lst);
void* const lst9097 = prim_cdr(lst);
void* const x9096 = apply_prim_remainder(lst9097);
arg_buffer[1] = kont9095;
arg_buffer[2] = x9096;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9095))[0])();
}
else
{
void* const kont9095 = arg_buffer[2];
void* const x9096 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9095;
arg_buffer[2] = x9096;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9095))[0])();
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
void* const kont9098 = prim_car(lst);
void* const lst9100 = prim_cdr(lst);
void* const x9099 = apply_prim_quotient(lst9100);
arg_buffer[1] = kont9098;
arg_buffer[2] = x9099;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9098))[0])();
}
else
{
void* const kont9098 = arg_buffer[2];
void* const x9099 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9098;
arg_buffer[2] = x9099;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9098))[0])();
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
void* const kont9101 = prim_car(lst);
void* const lst9103 = prim_cdr(lst);
void* const x9102 = apply_prim_random(lst9103);
arg_buffer[1] = kont9101;
arg_buffer[2] = x9102;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9101))[0])();
}
else
{
void* const kont9101 = arg_buffer[2];
void* const x9102 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9101;
arg_buffer[2] = x9102;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9101))[0])();
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
void* const kont9104 = prim_car(lst);
void* const lst9106 = prim_cdr(lst);
void* const x9105 = apply_prim_symbol_u63(lst9106);
arg_buffer[1] = kont9104;
arg_buffer[2] = x9105;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9104))[0])();
}
else
{
void* const kont9104 = arg_buffer[2];
void* const x9105 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9104;
arg_buffer[2] = x9105;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9104))[0])();
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
void* const kont9107 = prim_car(lst);
void* const lst9109 = prim_cdr(lst);
void* const x9108 = apply_prim_pair_u63(lst9109);
arg_buffer[1] = kont9107;
arg_buffer[2] = x9108;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9107))[0])();
}
else
{
void* const kont9107 = arg_buffer[2];
void* const x9108 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9107;
arg_buffer[2] = x9108;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9107))[0])();
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
void* const kont9110 = prim_car(lst);
void* const lst9112 = prim_cdr(lst);
void* const x9111 = apply_prim_positive_u63(lst9112);
arg_buffer[1] = kont9110;
arg_buffer[2] = x9111;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9110))[0])();
}
else
{
void* const kont9110 = arg_buffer[2];
void* const x9111 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9110;
arg_buffer[2] = x9111;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9110))[0])();
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
void* const kont9113 = prim_car(lst);
void* const lst9115 = prim_cdr(lst);
void* const x9114 = apply_prim_negative_u63(lst9115);
arg_buffer[1] = kont9113;
arg_buffer[2] = x9114;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9113))[0])();
}
else
{
void* const kont9113 = arg_buffer[2];
void* const x9114 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9113;
arg_buffer[2] = x9114;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9113))[0])();
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
void* const kont9116 = prim_car(lst);
void* const lst9118 = prim_cdr(lst);
void* const x9117 = apply_prim_list(lst9118);
arg_buffer[1] = kont9116;
arg_buffer[2] = x9117;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9116))[0])();
}
else
{
void* const kont9116 = arg_buffer[2];
void* const x9117 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9116;
arg_buffer[2] = x9117;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9116))[0])();
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8856 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8856)[1])(kont8856, apply_prim_equal_u63_2(int8954, apply_prim_modulo_2(x, int8943)));
}

inline void even_u63_spec(void* _8891, void* kont8856, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8856)[1])(kont8856, apply_prim_equal_u63_2(int8954, apply_prim_modulo_2(x, int8943)));
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8857 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8857)[1])(kont8857, apply_prim_equal_u63_2(int8955, apply_prim_modulo_2(x, int8943)));
}

inline void odd_u63_spec(void* _8892, void* kont8857, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8857)[1])(kont8857, apply_prim_equal_u63_2(int8955, apply_prim_modulo_2(x, int8943)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8858 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8954, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8858)[1])(kont8858, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8858, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8955));
}

}

inline void list_u45ref_spec(void* _8893, void* kont8858, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8954, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8858)[1])(kont8858, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8858, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8955));
}

}

inline void lam8894_fptr() // lam8894 -> generic version 
{
//reading env
void* const env8895 = arg_buffer[1];
//reading env and args
void* const id_8745 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8895);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f8948);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[4], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void lam8894_spec(void* env8895, void* id_8745) // lam8894 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8895);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f8948);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[4], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8859 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9119 = alloc_kont(lam8894_fptr, lam8894_spec, 3);

//setting env list
clo9119[2] = item;
clo9119[3] = lst;
clo9119[4] = kont8859;
void* f_lam_8860 = encode_clo(clo9119);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8894_spec(f_lam_8860, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8894_spec(f_lam_8860, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8896, void* kont8859, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9120 = alloc_kont(lam8894_fptr, lam8894_spec, 3);

//setting env list
clo9120[2] = item;
clo9120[3] = lst;
clo9120[4] = kont8859;
void* f_lam_8860 = encode_clo(clo9120);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8894_spec(f_lam_8860, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8894_spec(f_lam_8860, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8861 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8861)[1])(kont8861, bool_f8948);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8861)[1])(kont8861, bool_t8947);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8861, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8897, void* kont8861, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8861)[1])(kont8861, bool_f8948);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8861)[1])(kont8861, bool_t8947);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8861, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8898_fptr() // lam8898 -> generic version 
{
//reading env
void* const env8899 = arg_buffer[1];
//reading env and args
void* const id_8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8899);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void lam8898_spec(void* env8899, void* id_8760) // lam8898 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8899);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8862 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8862)[1])(kont8862, int8954);
}
else
{

//creating new make-kont closure
void** clo9121 = alloc_kont(lam8898_fptr, lam8898_spec, 2);

//setting env list
clo9121[2] = int8955;
clo9121[3] = kont8862;
void* f_lam_8863 = encode_clo(clo9121);



//clo-app
length_spec(length, f_lam_8863, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8900, void* kont8862, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8862)[1])(kont8862, int8954);
}
else
{

//creating new make-kont closure
void** clo9122 = alloc_kont(lam8898_fptr, lam8898_spec, 2);

//setting env list
clo9122[2] = int8955;
clo9122[3] = kont8862;
void* f_lam_8863 = encode_clo(clo9122);



//clo-app
length_spec(length, f_lam_8863, apply_prim_cdr_1(lst));
}

}

inline void lam8901_fptr() // lam8901 -> generic version 
{
//reading env
void* const env8902 = arg_buffer[1];
//reading env and args
void* const id_8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8902);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8766));
}

inline void lam8901_spec(void* env8902, void* id_8766) // lam8901 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8902);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8766));
}

inline void lam8903_fptr() // lam8903 -> generic version 
{
//reading env
void* const env8904 = arg_buffer[1];
//reading env and args
void* const id_8764 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8904);

//creating new make-kont closure
void** clo9123 = alloc_kont(lam8901_fptr, lam8901_spec, 2);

//setting env list
clo9123[2] = decode_clo_array[3];
clo9123[3] = id_8764;
void* f_lam_8865 = encode_clo(clo9123);



//clo-app
map_spec(map, f_lam_8865, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8903_spec(void* env8904, void* id_8764) // lam8903 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8904);

//creating new make-kont closure
void** clo9124 = alloc_kont(lam8901_fptr, lam8901_spec, 2);

//setting env list
clo9124[2] = decode_clo_array[3];
clo9124[3] = id_8764;
void* f_lam_8865 = encode_clo(clo9124);



//clo-app
map_spec(map, f_lam_8865, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[4]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8864 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8864)[1])(kont8864, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9125 = alloc_kont(lam8903_fptr, lam8903_spec, 3);

//setting env list
clo9125[2] = proc;
clo9125[3] = kont8864;
clo9125[4] = lst;
void* f_lam_8866 = encode_clo(clo9125);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8866;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8905, void* kont8864, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8864)[1])(kont8864, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9126 = alloc_kont(lam8903_fptr, lam8903_spec, 3);

//setting env list
clo9126[2] = proc;
clo9126[3] = kont8864;
clo9126[4] = lst;
void* f_lam_8866 = encode_clo(clo9126);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8866;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8906_fptr() // lam8906 -> generic version 
{
//reading env
void* const env8907 = arg_buffer[1];
//reading env and args
void* const id_8773 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8907);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8773));
}

inline void lam8906_spec(void* env8907, void* id_8773) // lam8906 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8907);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8773));
}

inline void lam8908_fptr() // lam8908 -> generic version 
{
//reading env
void* const env8909 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8909);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9127 = alloc_kont(lam8906_fptr, lam8906_spec, 2);

//setting env list
clo9127[2] = decode_clo_array[2];
clo9127[3] = apply_prim_car_1(decode_clo_array[4]);
void* f_lam_8868 = encode_clo(clo9127);



//clo-app
filter_spec(filter, f_lam_8868, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[2], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}

}

inline void lam8908_spec(void* env8909, void* id_8770) // lam8908 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8909);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9128 = alloc_kont(lam8906_fptr, lam8906_spec, 2);

//setting env list
clo9128[2] = decode_clo_array[2];
clo9128[3] = apply_prim_car_1(decode_clo_array[4]);
void* f_lam_8868 = encode_clo(clo9128);



//clo-app
filter_spec(filter, f_lam_8868, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[2], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8867 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8867)[1])(kont8867, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9129 = alloc_kont(lam8908_fptr, lam8908_spec, 3);

//setting env list
clo9129[2] = kont8867;
clo9129[3] = op;
clo9129[4] = lst;
void* f_lam_8869 = encode_clo(clo9129);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8869;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8910, void* kont8867, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8867)[1])(kont8867, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9130 = alloc_kont(lam8908_fptr, lam8908_spec, 3);

//setting env list
clo9130[2] = kont8867;
clo9130[3] = op;
clo9130[4] = lst;
void* f_lam_8869 = encode_clo(clo9130);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8869;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8870 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8954)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8870)[1])(kont8870, lst);
}
else
{

//clo-app
drop_spec(drop, kont8870, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8955));
}

}

inline void drop_spec(void* _8911, void* kont8870, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8954)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8870)[1])(kont8870, lst);
}
else
{

//clo-app
drop_spec(drop, kont8870, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8955));
}

}

inline void lam8912_fptr() // lam8912 -> generic version 
{
//reading env
void* const env8913 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8913);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[3], id_8782, apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8912_spec(void* env8913, void* id_8782) // lam8912 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8913);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[3], id_8782, apply_prim_cdr_1(decode_clo_array[4]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8871 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8871)[1])(kont8871, acc);
}
else
{

//creating new make-kont closure
void** clo9131 = alloc_kont(lam8912_fptr, lam8912_spec, 3);

//setting env list
clo9131[2] = kont8871;
clo9131[3] = fun;
clo9131[4] = lst;
void* f_lam_8872 = encode_clo(clo9131);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8872;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8914, void* kont8871, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8871)[1])(kont8871, acc);
}
else
{

//creating new make-kont closure
void** clo9132 = alloc_kont(lam8912_fptr, lam8912_spec, 3);

//setting env list
clo9132[2] = kont8871;
clo9132[3] = fun;
clo9132[4] = lst;
void* f_lam_8872 = encode_clo(clo9132);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8872;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8915_fptr() // lam8915 -> generic version 
{
//reading env
void* const env8916 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8916);

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8787;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8915_spec(void* env8916, void* id_8787) // lam8915 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8916);

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8787;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8873 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8873)[1])(kont8873, acc);
}
else
{

//creating new make-kont closure
void** clo9133 = alloc_kont(lam8915_fptr, lam8915_spec, 3);

//setting env list
clo9133[2] = kont8873;
clo9133[3] = fun;
clo9133[4] = apply_prim_car_1(lst);
void* f_lam_8874 = encode_clo(clo9133);



//clo-app
foldr_spec(foldr, f_lam_8874, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8917, void* kont8873, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8873)[1])(kont8873, acc);
}
else
{

//creating new make-kont closure
void** clo9134 = alloc_kont(lam8915_fptr, lam8915_spec, 3);

//setting env list
clo9134[2] = kont8873;
clo9134[3] = fun;
clo9134[4] = apply_prim_car_1(lst);
void* f_lam_8874 = encode_clo(clo9134);



//clo-app
foldr_spec(foldr, f_lam_8874, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8875 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8875)[1])(kont8875, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8875, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8918, void* kont8875, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8875)[1])(kont8875, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8875, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8876 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8876, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8919, void* kont8876, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8876, lst, apply_prim_list_0());
}

inline void lam8920_fptr() // lam8920 -> generic version 
{
//reading env
void* const env8921 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8921);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8796));
}

inline void lam8920_spec(void* env8921, void* id_8796) // lam8920 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8921);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8796));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8877 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8877)[1])(kont8877, rhs);
}
else
{

//creating new make-kont closure
void** clo9135 = alloc_kont(lam8920_fptr, lam8920_spec, 2);

//setting env list
clo9135[2] = kont8877;
clo9135[3] = apply_prim_car_1(lhs);
void* f_lam_8878 = encode_clo(clo9135);



//clo-app
append1_spec(append1, f_lam_8878, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8922, void* kont8877, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8877)[1])(kont8877, rhs);
}
else
{

//creating new make-kont closure
void** clo9136 = alloc_kont(lam8920_fptr, lam8920_spec, 2);

//setting env list
clo9136[2] = kont8877;
clo9136[3] = apply_prim_car_1(lhs);
void* f_lam_8878 = encode_clo(clo9136);



//clo-app
append1_spec(append1, f_lam_8878, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8923_fptr() // lam8923 -> generic version 
{
//reading env
void* const env8924 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8924);

//clo-app
foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8803);
}

inline void lam8923_spec(void* env8924, void* id_8803) // lam8923 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8924);

//clo-app
foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8803);
}

inline void lam8925_fptr() // lam8925 -> generic version 
{
//reading env
void* const env8926 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8926);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[5], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9137 = alloc_kont(lam8923_fptr, lam8923_spec, 2);

//setting env list
clo9137[2] = apply_prim_list_0();
clo9137[3] = decode_clo_array[4];
void* f_lam_8880 = encode_clo(clo9137);



//clo-app
append1_spec(append1, f_lam_8880, apply_prim_list_1(decode_clo_array[2]), decode_clo_array[3]);
}

}

inline void lam8925_spec(void* env8926, void* id_8798) // lam8925 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8926);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[5], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9138 = alloc_kont(lam8923_fptr, lam8923_spec, 2);

//setting env list
clo9138[2] = apply_prim_list_0();
clo9138[3] = decode_clo_array[4];
void* f_lam_8880 = encode_clo(clo9138);



//clo-app
append1_spec(append1, f_lam_8880, apply_prim_list_1(decode_clo_array[2]), decode_clo_array[3]);
}

}

inline void lam8927_fptr() // lam8927 -> generic version 
{
//reading env
void* const env8928 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8928);

//creating new make-kont closure
void** clo9139 = alloc_kont(lam8925_fptr, lam8925_spec, 4);

//setting env list
clo9139[2] = decode_clo_array[2];
clo9139[3] = x;
clo9139[4] = decode_clo_array[3];
clo9139[5] = int8955;
void* f_lam_8881 = encode_clo(clo9139);



//clo-app
length_spec(length, f_lam_8881, x);
}

inline void lam8927_spec(void* env8928, void* x) // lam8927 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8928);

//creating new make-kont closure
void** clo9140 = alloc_kont(lam8925_fptr, lam8925_spec, 4);

//setting env list
clo9140[2] = decode_clo_array[2];
clo9140[3] = x;
clo9140[4] = decode_clo_array[3];
clo9140[5] = int8955;
void* f_lam_8881 = encode_clo(clo9140);



//clo-app
length_spec(length, f_lam_8881, x);
}

void append_fptr() // append 
{
//reading env
void* const _8929 = arg_buffer[1];
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
void** clo9141 = alloc_kont(lam8927_fptr, lam8927_spec, 2);

//setting env list
clo9141[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9141[3] = apply_prim_car_1(vargs);
void* f_lam_8882 = encode_clo(clo9141);


// kont-clo-app case
lam8927_spec(f_lam_8882, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8930_fptr() // lam8930 -> generic version 
{
//reading env
void* const env8931 = arg_buffer[1];
//reading env and args
void* const xy8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8931);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
}

inline void lam8930_spec(void* env8931, void* xy8806) // lam8930 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8931);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8883 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8954)))
{

//creating new make-kont closure
void** clo9142 = alloc_kont(lam8930_fptr, lam8930_spec, 1);

//setting env list
clo9142[2] = kont8883;
void* f_lam_8884 = encode_clo(clo9142);



//clo-app
reverse_spec(reverse, f_lam_8884, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8883, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8955), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8932, void* kont8883, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8954)))
{

//creating new make-kont closure
void** clo9143 = alloc_kont(lam8930_fptr, lam8930_spec, 1);

//setting env list
clo9143[2] = kont8883;
void* f_lam_8884 = encode_clo(clo9143);



//clo-app
reverse_spec(reverse, f_lam_8884, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8883, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8955), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8885 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8885, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8933, void* kont8885, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8885, lst, n, apply_prim_list_0());
}

inline void lam8934_fptr() // lam8934 -> generic version 
{
//reading env
void* const env8935 = arg_buffer[1];
//reading env and args
void* const id_8820 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8935);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], id_8820));
}

inline void lam8934_spec(void* env8935, void* id_8820) // lam8934 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8935);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], id_8820));
}

inline void lam8936_fptr() // lam8936 -> generic version 
{
//reading env
void* const env8937 = arg_buffer[1];
//reading env and args
void* const id_8817 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8937);

//creating new make-kont closure
void** clo9144 = alloc_kont(lam8934_fptr, lam8934_spec, 2);

//setting env list
clo9144[2] = decode_clo_array[3];
clo9144[3] = id_8817;
void* f_lam_8887 = encode_clo(clo9144);



//clo-app
fibfp_spec(fibfp, f_lam_8887, apply_prim__u45_2(decode_clo_array[2], float8958));
}

inline void lam8936_spec(void* env8937, void* id_8817) // lam8936 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8937);

//creating new make-kont closure
void** clo9145 = alloc_kont(lam8934_fptr, lam8934_spec, 2);

//setting env list
clo9145[2] = decode_clo_array[3];
clo9145[3] = id_8817;
void* f_lam_8887 = encode_clo(clo9145);



//clo-app
fibfp_spec(fibfp, f_lam_8887, apply_prim__u45_2(decode_clo_array[2], float8958));
}

inline void fibfp_fptr() // fibfp -> generic version 
{
//reading env and args
void* const kont8886 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(n, float8958)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8886)[1])(kont8886, n);
}
else
{

//creating new make-kont closure
void** clo9146 = alloc_kont(lam8936_fptr, lam8936_spec, 2);

//setting env list
clo9146[2] = n;
clo9146[3] = kont8886;
void* f_lam_8888 = encode_clo(clo9146);



//clo-app
fibfp_spec(fibfp, f_lam_8888, apply_prim__u45_2(n, float8957));
}

}

inline void fibfp_spec(void* _8938, void* kont8886, void* n) // fibfp 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(n, float8958)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8886)[1])(kont8886, n);
}
else
{

//creating new make-kont closure
void** clo9147 = alloc_kont(lam8936_fptr, lam8936_spec, 2);

//setting env list
clo9147[2] = n;
clo9147[3] = kont8886;
void* f_lam_8888 = encode_clo(clo9147);



//clo-app
fibfp_spec(fibfp, f_lam_8888, apply_prim__u45_2(n, float8957));
}

}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8889 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8889, float8959);
}

inline void brouhaha_main_spec(void* _8939, void* kont8889) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8889, float8959);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8954 = reinterpret_cast<void *>(encode_int(0));
float8958 = reinterpret_cast<void *>(encode_float(2.0));
float8957 = reinterpret_cast<void *>(encode_float(1.0));
float8959 = reinterpret_cast<void *>(encode_float(40.0));
bool_t8947 = encode_bool(true);
int8955 = reinterpret_cast<void *>(encode_int(1));
bool_f8948 = encode_bool(false);
int8943 = reinterpret_cast<void *>(encode_int(2));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt, fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

