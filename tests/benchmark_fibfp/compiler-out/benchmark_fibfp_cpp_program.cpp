#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8944;
void* float8948;
void* float8947;
void* float8949;
void* bool_t8937;
void* int8945;
void* bool_f8938;
void* int8933;



// declaring global integer variable
int int8950;
int int8951;
int int8952;
int int8953;
int int8954;

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
void even_u63_spec(void* _8881, void* kont8846, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8882, void* kont8847, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8883, void* kont8848, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8884_fptr(); // lam8884
void lam8884_spec(void* env8885, void* id_8735); // lam8884
void* lam8884 = encode_clo(alloc_clo(lam8884_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8886, void* kont8849, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8887, void* kont8851, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8888_fptr(); // lam8888
void lam8888_spec(void* env8889, void* id_8750); // lam8888
void* lam8888 = encode_clo(alloc_clo(lam8888_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8890, void* kont8852, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8891_fptr(); // lam8891
void lam8891_spec(void* env8892, void* id_8756); // lam8891
void* lam8891 = encode_clo(alloc_clo(lam8891_fptr, 0));

void lam8893_fptr(); // lam8893
void lam8893_spec(void* env8894, void* id_8754); // lam8893
void* lam8893 = encode_clo(alloc_clo(lam8893_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8895, void* kont8854, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8896_fptr(); // lam8896
void lam8896_spec(void* env8897, void* id_8763); // lam8896
void* lam8896 = encode_clo(alloc_clo(lam8896_fptr, 0));

void lam8898_fptr(); // lam8898
void lam8898_spec(void* env8899, void* id_8760); // lam8898
void* lam8898 = encode_clo(alloc_clo(lam8898_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8900, void* kont8857, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8901, void* kont8860, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8902_fptr(); // lam8902
void lam8902_spec(void* env8903, void* id_8772); // lam8902
void* lam8902 = encode_clo(alloc_clo(lam8902_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8904, void* kont8861, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8905_fptr(); // lam8905
void lam8905_spec(void* env8906, void* id_8777); // lam8905
void* lam8905 = encode_clo(alloc_clo(lam8905_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8907, void* kont8863, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8908, void* kont8865, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8909, void* kont8866, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8910_fptr(); // lam8910
void lam8910_spec(void* env8911, void* id_8786); // lam8910
void* lam8910 = encode_clo(alloc_clo(lam8910_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8912, void* kont8867, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8913_fptr(); // lam8913
void lam8913_spec(void* env8914, void* id_8793); // lam8913
void* lam8913 = encode_clo(alloc_clo(lam8913_fptr, 0));

void lam8915_fptr(); // lam8915
void lam8915_spec(void* env8916, void* id_8788); // lam8915
void* lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void lam8917_fptr(); // lam8917
void lam8917_spec(void* env8918, void* x); // lam8917
void* lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8920_fptr(); // lam8920
void lam8920_spec(void* env8921, void* xy8796); // lam8920
void* lam8920 = encode_clo(alloc_clo(lam8920_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8922, void* kont8873, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8923, void* kont8875, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8924_fptr(); // lam8924
void lam8924_spec(void* env8925, void* id_8810); // lam8924
void* lam8924 = encode_clo(alloc_clo(lam8924_fptr, 0));

void lam8926_fptr(); // lam8926
void lam8926_spec(void* env8927, void* id_8807); // lam8926
void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void fibfp_fptr(); // fibfp
void fibfp_spec(void* _8928, void* kont8876, void* n); // fibfp
void* fibfp = encode_clo(alloc_clo(fibfp_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8929, void* kont8879); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8955 = prim_car(lst);
void* const lst8957 = prim_cdr(lst);
void* const x8956 = apply_prim__u43(lst8957);
arg_buffer[1] = kont8955;
arg_buffer[2] = x8956;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8955))[0])();
}
else
{
void* const kont8955 = arg_buffer[2];
void* const x8956 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8955;
arg_buffer[2] = x8956;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8955))[0])();
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
void* const kont8958 = prim_car(lst);
void* const lst8960 = prim_cdr(lst);
void* const x8959 = apply_prim__u45(lst8960);
arg_buffer[1] = kont8958;
arg_buffer[2] = x8959;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8958))[0])();
}
else
{
void* const kont8958 = arg_buffer[2];
void* const x8959 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8958;
arg_buffer[2] = x8959;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8958))[0])();
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
void* const kont8961 = prim_car(lst);
void* const lst8963 = prim_cdr(lst);
void* const x8962 = apply_prim__u42(lst8963);
arg_buffer[1] = kont8961;
arg_buffer[2] = x8962;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8961))[0])();
}
else
{
void* const kont8961 = arg_buffer[2];
void* const x8962 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8961;
arg_buffer[2] = x8962;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8961))[0])();
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
void* const kont8964 = prim_car(lst);
void* const lst8966 = prim_cdr(lst);
void* const x8965 = apply_prim__u47(lst8966);
arg_buffer[1] = kont8964;
arg_buffer[2] = x8965;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8964))[0])();
}
else
{
void* const kont8964 = arg_buffer[2];
void* const x8965 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8964;
arg_buffer[2] = x8965;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8964))[0])();
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
void* const kont8967 = prim_car(lst);
void* const lst8969 = prim_cdr(lst);
void* const x8968 = apply_prim__u61(lst8969);
arg_buffer[1] = kont8967;
arg_buffer[2] = x8968;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8967))[0])();
}
else
{
void* const kont8967 = arg_buffer[2];
void* const x8968 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8967;
arg_buffer[2] = x8968;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8967))[0])();
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
void* const kont8970 = prim_car(lst);
void* const lst8972 = prim_cdr(lst);
void* const x8971 = apply_prim__u62(lst8972);
arg_buffer[1] = kont8970;
arg_buffer[2] = x8971;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8970))[0])();
}
else
{
void* const kont8970 = arg_buffer[2];
void* const x8971 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8970;
arg_buffer[2] = x8971;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8970))[0])();
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
void* const kont8973 = prim_car(lst);
void* const lst8975 = prim_cdr(lst);
void* const x8974 = apply_prim__u60(lst8975);
arg_buffer[1] = kont8973;
arg_buffer[2] = x8974;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8973))[0])();
}
else
{
void* const kont8973 = arg_buffer[2];
void* const x8974 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8973;
arg_buffer[2] = x8974;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8973))[0])();
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
void* const kont8976 = prim_car(lst);
void* const lst8978 = prim_cdr(lst);
void* const x8977 = apply_prim__u60_u61(lst8978);
arg_buffer[1] = kont8976;
arg_buffer[2] = x8977;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8976))[0])();
}
else
{
void* const kont8976 = arg_buffer[2];
void* const x8977 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8976;
arg_buffer[2] = x8977;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8976))[0])();
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
void* const kont8979 = prim_car(lst);
void* const lst8981 = prim_cdr(lst);
void* const x8980 = apply_prim__u62_u61(lst8981);
arg_buffer[1] = kont8979;
arg_buffer[2] = x8980;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8979))[0])();
}
else
{
void* const kont8979 = arg_buffer[2];
void* const x8980 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8979;
arg_buffer[2] = x8980;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8979))[0])();
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
void* const kont8982 = prim_car(lst);
void* const lst8984 = prim_cdr(lst);
void* const x8983 = apply_prim_modulo(lst8984);
arg_buffer[1] = kont8982;
arg_buffer[2] = x8983;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8982))[0])();
}
else
{
void* const kont8982 = arg_buffer[2];
void* const x8983 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8982;
arg_buffer[2] = x8983;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8982))[0])();
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
void* const kont8985 = prim_car(lst);
void* const lst8987 = prim_cdr(lst);
void* const x8986 = apply_prim_null_u63(lst8987);
arg_buffer[1] = kont8985;
arg_buffer[2] = x8986;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8985))[0])();
}
else
{
void* const kont8985 = arg_buffer[2];
void* const x8986 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8985;
arg_buffer[2] = x8986;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8985))[0])();
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
void* const kont8988 = prim_car(lst);
void* const lst8990 = prim_cdr(lst);
void* const x8989 = apply_prim_equal_u63(lst8990);
arg_buffer[1] = kont8988;
arg_buffer[2] = x8989;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8988))[0])();
}
else
{
void* const kont8988 = arg_buffer[2];
void* const x8989 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8988;
arg_buffer[2] = x8989;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8988))[0])();
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
void* const kont8991 = prim_car(lst);
void* const lst8993 = prim_cdr(lst);
void* const x8992 = apply_prim_eq_u63(lst8993);
arg_buffer[1] = kont8991;
arg_buffer[2] = x8992;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8991))[0])();
}
else
{
void* const kont8991 = arg_buffer[2];
void* const x8992 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8991;
arg_buffer[2] = x8992;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8991))[0])();
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
void* const kont8994 = prim_car(lst);
void* const lst8996 = prim_cdr(lst);
void* const x8995 = apply_prim_cons(lst8996);
arg_buffer[1] = kont8994;
arg_buffer[2] = x8995;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8994))[0])();
}
else
{
void* const kont8994 = arg_buffer[2];
void* const x8995 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8994;
arg_buffer[2] = x8995;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8994))[0])();
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
void* const kont8997 = prim_car(lst);
void* const lst8999 = prim_cdr(lst);
void* const x8998 = apply_prim_car(lst8999);
arg_buffer[1] = kont8997;
arg_buffer[2] = x8998;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8997))[0])();
}
else
{
void* const kont8997 = arg_buffer[2];
void* const x8998 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8997;
arg_buffer[2] = x8998;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8997))[0])();
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
void* const kont9000 = prim_car(lst);
void* const lst9002 = prim_cdr(lst);
void* const x9001 = apply_prim_cdr(lst9002);
arg_buffer[1] = kont9000;
arg_buffer[2] = x9001;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9000))[0])();
}
else
{
void* const kont9000 = arg_buffer[2];
void* const x9001 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9000;
arg_buffer[2] = x9001;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9000))[0])();
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
void* const kont9003 = prim_car(lst);
void* const lst9005 = prim_cdr(lst);
void* const x9004 = apply_prim_float_u45_u62int(lst9005);
arg_buffer[1] = kont9003;
arg_buffer[2] = x9004;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9003))[0])();
}
else
{
void* const kont9003 = arg_buffer[2];
void* const x9004 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9003;
arg_buffer[2] = x9004;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9003))[0])();
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
void* const kont9006 = prim_car(lst);
void* const lst9008 = prim_cdr(lst);
void* const x9007 = apply_prim_int_u45_u62float(lst9008);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9006))[0])();
}
else
{
void* const kont9006 = arg_buffer[2];
void* const x9007 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9006))[0])();
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
void* const kont9009 = prim_car(lst);
void* const lst9011 = prim_cdr(lst);
void* const x9010 = apply_prim_hash(lst9011);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
}
else
{
void* const kont9009 = arg_buffer[2];
void* const x9010 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
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
void* const kont9012 = prim_car(lst);
void* const lst9014 = prim_cdr(lst);
void* const x9013 = apply_prim_hash_u45ref(lst9014);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
}
else
{
void* const kont9012 = arg_buffer[2];
void* const x9013 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
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
void* const kont9015 = prim_car(lst);
void* const lst9017 = prim_cdr(lst);
void* const x9016 = apply_prim_hash_u45set(lst9017);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
}
else
{
void* const kont9015 = arg_buffer[2];
void* const x9016 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
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
void* const kont9018 = prim_car(lst);
void* const lst9020 = prim_cdr(lst);
void* const x9019 = apply_prim_hash_u45keys(lst9020);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
}
else
{
void* const kont9018 = arg_buffer[2];
void* const x9019 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
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
void* const kont9021 = prim_car(lst);
void* const lst9023 = prim_cdr(lst);
void* const x9022 = apply_prim_hash_u45has_u45key_u63(lst9023);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
}
else
{
void* const kont9021 = arg_buffer[2];
void* const x9022 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
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
void* const kont9024 = prim_car(lst);
void* const lst9026 = prim_cdr(lst);
void* const x9025 = apply_prim_hash_u45count(lst9026);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
}
else
{
void* const kont9024 = arg_buffer[2];
void* const x9025 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
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
void* const kont9027 = prim_car(lst);
void* const lst9029 = prim_cdr(lst);
void* const x9028 = apply_prim_set(lst9029);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
}
else
{
void* const kont9027 = arg_buffer[2];
void* const x9028 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
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
void* const kont9030 = prim_car(lst);
void* const lst9032 = prim_cdr(lst);
void* const x9031 = apply_prim_set_u45_u62list(lst9032);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
}
else
{
void* const kont9030 = arg_buffer[2];
void* const x9031 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
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
void* const kont9033 = prim_car(lst);
void* const lst9035 = prim_cdr(lst);
void* const x9034 = apply_prim_list_u45_u62set(lst9035);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
}
else
{
void* const kont9033 = arg_buffer[2];
void* const x9034 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
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
void* const kont9036 = prim_car(lst);
void* const lst9038 = prim_cdr(lst);
void* const x9037 = apply_prim_set_u45add(lst9038);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
}
else
{
void* const kont9036 = arg_buffer[2];
void* const x9037 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
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
void* const kont9039 = prim_car(lst);
void* const lst9041 = prim_cdr(lst);
void* const x9040 = apply_prim_set_u45member_u63(lst9041);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
}
else
{
void* const kont9039 = arg_buffer[2];
void* const x9040 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
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
void* const kont9042 = prim_car(lst);
void* const lst9044 = prim_cdr(lst);
void* const x9043 = apply_prim_set_u45remove(lst9044);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
}
else
{
void* const kont9042 = arg_buffer[2];
void* const x9043 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
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
void* const kont9045 = prim_car(lst);
void* const lst9047 = prim_cdr(lst);
void* const x9046 = apply_prim_set_u45count(lst9047);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
}
else
{
void* const kont9045 = arg_buffer[2];
void* const x9046 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
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
void* const kont9048 = prim_car(lst);
void* const lst9050 = prim_cdr(lst);
void* const x9049 = apply_prim_string_u63(lst9050);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
}
else
{
void* const kont9048 = arg_buffer[2];
void* const x9049 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
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
void* const kont9051 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9052 = apply_prim_string_u45length(lst9053);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
}
else
{
void* const kont9051 = arg_buffer[2];
void* const x9052 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
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
void* const kont9054 = prim_car(lst);
void* const lst9056 = prim_cdr(lst);
void* const x9055 = apply_prim_string_u45ref(lst9056);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
}
else
{
void* const kont9054 = arg_buffer[2];
void* const x9055 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
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
void* const kont9057 = prim_car(lst);
void* const lst9059 = prim_cdr(lst);
void* const x9058 = apply_prim_substring(lst9059);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
}
else
{
void* const kont9057 = arg_buffer[2];
void* const x9058 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
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
void* const kont9060 = prim_car(lst);
void* const lst9062 = prim_cdr(lst);
void* const x9061 = apply_prim_string_u45append(lst9062);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
}
else
{
void* const kont9060 = arg_buffer[2];
void* const x9061 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
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
void* const kont9063 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9064 = apply_prim_string_u45_u62list(lst9065);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
}
else
{
void* const kont9063 = arg_buffer[2];
void* const x9064 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
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
void* const kont9066 = prim_car(lst);
void* const lst9068 = prim_cdr(lst);
void* const x9067 = apply_prim_exact_u45floor(lst9068);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
}
else
{
void* const kont9066 = arg_buffer[2];
void* const x9067 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
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
void* const kont9069 = prim_car(lst);
void* const lst9071 = prim_cdr(lst);
void* const x9070 = apply_prim_exact_u45ceiling(lst9071);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
}
else
{
void* const kont9069 = arg_buffer[2];
void* const x9070 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
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
void* const kont9072 = prim_car(lst);
void* const lst9074 = prim_cdr(lst);
void* const x9073 = apply_prim_exact_u45round(lst9074);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
}
else
{
void* const kont9072 = arg_buffer[2];
void* const x9073 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
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
void* const kont9075 = prim_car(lst);
void* const lst9077 = prim_cdr(lst);
void* const x9076 = apply_prim_abs(lst9077);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
}
else
{
void* const kont9075 = arg_buffer[2];
void* const x9076 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
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
void* const kont9078 = prim_car(lst);
void* const lst9080 = prim_cdr(lst);
void* const x9079 = apply_prim_max(lst9080);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
}
else
{
void* const kont9078 = arg_buffer[2];
void* const x9079 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
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
void* const kont9081 = prim_car(lst);
void* const lst9083 = prim_cdr(lst);
void* const x9082 = apply_prim_min(lst9083);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
}
else
{
void* const kont9081 = arg_buffer[2];
void* const x9082 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
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
void* const kont9084 = prim_car(lst);
void* const lst9086 = prim_cdr(lst);
void* const x9085 = apply_prim_expt(lst9086);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
}
else
{
void* const kont9084 = arg_buffer[2];
void* const x9085 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
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
void* const kont9087 = prim_car(lst);
void* const lst9089 = prim_cdr(lst);
void* const x9088 = apply_prim_sqrt(lst9089);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
}
else
{
void* const kont9087 = arg_buffer[2];
void* const x9088 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
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
void* const kont9090 = prim_car(lst);
void* const lst9092 = prim_cdr(lst);
void* const x9091 = apply_prim_remainder(lst9092);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
}
else
{
void* const kont9090 = arg_buffer[2];
void* const x9091 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
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
void* const kont9093 = prim_car(lst);
void* const lst9095 = prim_cdr(lst);
void* const x9094 = apply_prim_quotient(lst9095);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
}
else
{
void* const kont9093 = arg_buffer[2];
void* const x9094 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
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
void* const kont9096 = prim_car(lst);
void* const lst9098 = prim_cdr(lst);
void* const x9097 = apply_prim_random(lst9098);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
}
else
{
void* const kont9096 = arg_buffer[2];
void* const x9097 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
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
void* const kont9099 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9100 = apply_prim_symbol_u63(lst9101);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
}
else
{
void* const kont9099 = arg_buffer[2];
void* const x9100 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
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
void* const kont9102 = prim_car(lst);
void* const lst9104 = prim_cdr(lst);
void* const x9103 = apply_prim_pair_u63(lst9104);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
}
else
{
void* const kont9102 = arg_buffer[2];
void* const x9103 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
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
void* const kont9105 = prim_car(lst);
void* const lst9107 = prim_cdr(lst);
void* const x9106 = apply_prim_positive_u63(lst9107);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
}
else
{
void* const kont9105 = arg_buffer[2];
void* const x9106 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
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
void* const kont9108 = prim_car(lst);
void* const lst9110 = prim_cdr(lst);
void* const x9109 = apply_prim_negative_u63(lst9110);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
}
else
{
void* const kont9108 = arg_buffer[2];
void* const x9109 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
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
void* const kont9111 = prim_car(lst);
void* const lst9113 = prim_cdr(lst);
void* const x9112 = apply_prim_list(lst9113);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
}
else
{
void* const kont9111 = arg_buffer[2];
void* const x9112 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8846 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8846;
arg_buffer[2] = apply_prim_equal_u63_2(int8944, apply_prim_modulo_2(x, int8933));
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8846))[0])();
}

inline void even_u63_spec(void* _8881, void* kont8846, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8846;
arg_buffer[2] = apply_prim_equal_u63_2(int8944, apply_prim_modulo_2(x, int8933));
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8846))[0])();
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8847 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8847;
arg_buffer[2] = apply_prim_equal_u63_2(int8945, apply_prim_modulo_2(x, int8933));
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8847))[0])();
}

inline void odd_u63_spec(void* _8882, void* kont8847, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8847;
arg_buffer[2] = apply_prim_equal_u63_2(int8945, apply_prim_modulo_2(x, int8933));
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8847))[0])();
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8848 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8944, n)))
{

//clo-app
arg_buffer[1] = kont8848;
arg_buffer[2] = apply_prim_car_1(lst);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8848))[0])();
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8848, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8945));
}

}

inline void list_u45ref_spec(void* _8883, void* kont8848, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8944, n)))
{

//clo-app
arg_buffer[1] = kont8848;
arg_buffer[2] = apply_prim_car_1(lst);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8848))[0])();
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8848, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8945));
}

}

inline void lam8884_fptr() // lam8884 -> generic version 
{
//reading env
void* const env8885 = arg_buffer[1];
//reading env and args
void* const id_8735 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8885);

//if-clause
if(is_true(id_8735))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = bool_f8938;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[3], apply_prim_car_1(decode_clo_array[2]))))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}

}

}

inline void lam8884_spec(void* env8885, void* id_8735) // lam8884 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8885);

//if-clause
if(is_true(id_8735))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = bool_f8938;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[3], apply_prim_car_1(decode_clo_array[2]))))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8849 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9114 = alloc_clo(lam8884_fptr, 3);

//setting env list
clo9114[1] = kont8849;
clo9114[2] = lst;
clo9114[3] = item;
void* f_lam_8850 = encode_clo(clo9114);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{

//clo-app
lam8884_spec(f_lam_8850, apply_prim_null_u63_1(item));
}
else
{

//clo-app
lam8884_spec(f_lam_8850, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8886, void* kont8849, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9115 = alloc_clo(lam8884_fptr, 3);

//setting env list
clo9115[1] = kont8849;
clo9115[2] = lst;
clo9115[3] = item;
void* f_lam_8850 = encode_clo(clo9115);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{

//clo-app
lam8884_spec(f_lam_8850, apply_prim_null_u63_1(item));
}
else
{

//clo-app
lam8884_spec(f_lam_8850, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8851 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8851;
arg_buffer[2] = bool_f8938;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8851))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{

//clo-app
arg_buffer[1] = kont8851;
arg_buffer[2] = bool_t8937;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8851))[0])();
}
else
{

//clo-app
member_u63_spec(member_u63, kont8851, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8887, void* kont8851, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8851;
arg_buffer[2] = bool_f8938;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8851))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{

//clo-app
arg_buffer[1] = kont8851;
arg_buffer[2] = bool_t8937;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8851))[0])();
}
else
{

//clo-app
member_u63_spec(member_u63, kont8851, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8888_fptr() // lam8888 -> generic version 
{
//reading env
void* const env8889 = arg_buffer[1];
//reading env and args
void* const id_8750 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8889);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[1], id_8750);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8888_spec(void* env8889, void* id_8750) // lam8888 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8889);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[1], id_8750);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8852 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8852;
arg_buffer[2] = int8944;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8852))[0])();
}
else
{

//creating new closure instance
void** clo9116 = alloc_clo(lam8888_fptr, 2);

//setting env list
clo9116[1] = int8945;
clo9116[2] = kont8852;
void* f_lam_8853 = encode_clo(clo9116);



//clo-app
length_spec(length, f_lam_8853, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8890, void* kont8852, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8852;
arg_buffer[2] = int8944;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8852))[0])();
}
else
{

//creating new closure instance
void** clo9117 = alloc_clo(lam8888_fptr, 2);

//setting env list
clo9117[1] = int8945;
clo9117[2] = kont8852;
void* f_lam_8853 = encode_clo(clo9117);



//clo-app
length_spec(length, f_lam_8853, apply_prim_cdr_1(lst));
}

}

inline void lam8891_fptr() // lam8891 -> generic version 
{
//reading env
void* const env8892 = arg_buffer[1];
//reading env and args
void* const id_8756 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8892);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8756);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8891_spec(void* env8892, void* id_8756) // lam8891 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8892);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8756);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8893_fptr() // lam8893 -> generic version 
{
//reading env
void* const env8894 = arg_buffer[1];
//reading env and args
void* const id_8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8894);

//creating new closure instance
void** clo9118 = alloc_clo(lam8891_fptr, 2);

//setting env list
clo9118[1] = decode_clo_array[2];
clo9118[2] = id_8754;
void* f_lam_8855 = encode_clo(clo9118);



//clo-app
map_spec(map, f_lam_8855, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8893_spec(void* env8894, void* id_8754) // lam8893 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8894);

//creating new closure instance
void** clo9119 = alloc_clo(lam8891_fptr, 2);

//setting env list
clo9119[1] = decode_clo_array[2];
clo9119[2] = id_8754;
void* f_lam_8855 = encode_clo(clo9119);



//clo-app
map_spec(map, f_lam_8855, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8854 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8854;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8854))[0])();
}
else
{

//creating new closure instance
void** clo9120 = alloc_clo(lam8893_fptr, 3);

//setting env list
clo9120[1] = proc;
clo9120[2] = kont8854;
clo9120[3] = lst;
void* f_lam_8856 = encode_clo(clo9120);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8856;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8952;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8895, void* kont8854, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8854;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8854))[0])();
}
else
{

//creating new closure instance
void** clo9121 = alloc_clo(lam8893_fptr, 3);

//setting env list
clo9121[1] = proc;
clo9121[2] = kont8854;
clo9121[3] = lst;
void* f_lam_8856 = encode_clo(clo9121);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8856;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8952;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8896_fptr() // lam8896 -> generic version 
{
//reading env
void* const env8897 = arg_buffer[1];
//reading env and args
void* const id_8763 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8897);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8763);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8896_spec(void* env8897, void* id_8763) // lam8896 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8897);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8763);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
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

//if-clause
if(is_true(id_8760))
{

//creating new closure instance
void** clo9122 = alloc_clo(lam8896_fptr, 2);

//setting env list
clo9122[1] = apply_prim_car_1(decode_clo_array[3]);
clo9122[2] = decode_clo_array[1];
void* f_lam_8858 = encode_clo(clo9122);



//clo-app
filter_spec(filter, f_lam_8858, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void lam8898_spec(void* env8899, void* id_8760) // lam8898 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8899);

//if-clause
if(is_true(id_8760))
{

//creating new closure instance
void** clo9123 = alloc_clo(lam8896_fptr, 2);

//setting env list
clo9123[1] = apply_prim_car_1(decode_clo_array[3]);
clo9123[2] = decode_clo_array[1];
void* f_lam_8858 = encode_clo(clo9123);



//clo-app
filter_spec(filter, f_lam_8858, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8857 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8857;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8857))[0])();
}
else
{

//creating new closure instance
void** clo9124 = alloc_clo(lam8898_fptr, 3);

//setting env list
clo9124[1] = kont8857;
clo9124[2] = op;
clo9124[3] = lst;
void* f_lam_8859 = encode_clo(clo9124);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8859;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8952;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8900, void* kont8857, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8857;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8857))[0])();
}
else
{

//creating new closure instance
void** clo9125 = alloc_clo(lam8898_fptr, 3);

//setting env list
clo9125[1] = kont8857;
clo9125[2] = op;
clo9125[3] = lst;
void* f_lam_8859 = encode_clo(clo9125);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8859;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8952;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8860 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8944)))
{

//clo-app
arg_buffer[1] = kont8860;
arg_buffer[2] = lst;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8860))[0])();
}
else
{

//clo-app
drop_spec(drop, kont8860, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8945));
}

}

inline void drop_spec(void* _8901, void* kont8860, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8944)))
{

//clo-app
arg_buffer[1] = kont8860;
arg_buffer[2] = lst;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8860))[0])();
}
else
{

//clo-app
drop_spec(drop, kont8860, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8945));
}

}

inline void lam8902_fptr() // lam8902 -> generic version 
{
//reading env
void* const env8903 = arg_buffer[1];
//reading env and args
void* const id_8772 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8903);

//clo-app
foldl_spec(foldl, decode_clo_array[3], decode_clo_array[1], id_8772, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8902_spec(void* env8903, void* id_8772) // lam8902 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8903);

//clo-app
foldl_spec(foldl, decode_clo_array[3], decode_clo_array[1], id_8772, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8861 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8861;
arg_buffer[2] = acc;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
}
else
{

//creating new closure instance
void** clo9126 = alloc_clo(lam8902_fptr, 3);

//setting env list
clo9126[1] = fun;
clo9126[2] = lst;
clo9126[3] = kont8861;
void* f_lam_8862 = encode_clo(clo9126);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8862;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int8953;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8904, void* kont8861, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8861;
arg_buffer[2] = acc;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
}
else
{

//creating new closure instance
void** clo9127 = alloc_clo(lam8902_fptr, 3);

//setting env list
clo9127[1] = fun;
clo9127[2] = lst;
clo9127[3] = kont8861;
void* f_lam_8862 = encode_clo(clo9127);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8862;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int8953;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8905_fptr() // lam8905 -> generic version 
{
//reading env
void* const env8906 = arg_buffer[1];
//reading env and args
void* const id_8777 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8906);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8777;
numArgs = int8953;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8905_spec(void* env8906, void* id_8777) // lam8905 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8906);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8777;
numArgs = int8953;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8863 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8863;
arg_buffer[2] = acc;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8863))[0])();
}
else
{

//creating new closure instance
void** clo9128 = alloc_clo(lam8905_fptr, 3);

//setting env list
clo9128[1] = apply_prim_car_1(lst);
clo9128[2] = fun;
clo9128[3] = kont8863;
void* f_lam_8864 = encode_clo(clo9128);



//clo-app
foldr_spec(foldr, f_lam_8864, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8907, void* kont8863, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8863;
arg_buffer[2] = acc;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8863))[0])();
}
else
{

//creating new closure instance
void** clo9129 = alloc_clo(lam8905_fptr, 3);

//setting env list
clo9129[1] = apply_prim_car_1(lst);
clo9129[2] = fun;
clo9129[3] = kont8863;
void* f_lam_8864 = encode_clo(clo9129);



//clo-app
foldr_spec(foldr, f_lam_8864, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8865 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8865;
arg_buffer[2] = lst2;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8865))[0])();
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8865, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8908, void* kont8865, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8865;
arg_buffer[2] = lst2;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8865))[0])();
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8865, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8866 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8866, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8909, void* kont8866, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8866, lst, apply_prim_list_0());
}

inline void lam8910_fptr() // lam8910 -> generic version 
{
//reading env
void* const env8911 = arg_buffer[1];
//reading env and args
void* const id_8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8911);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8786);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8910_spec(void* env8911, void* id_8786) // lam8910 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8911);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8786);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8867 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{

//clo-app
arg_buffer[1] = kont8867;
arg_buffer[2] = rhs;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8867))[0])();
}
else
{

//creating new closure instance
void** clo9130 = alloc_clo(lam8910_fptr, 2);

//setting env list
clo9130[1] = kont8867;
clo9130[2] = apply_prim_car_1(lhs);
void* f_lam_8868 = encode_clo(clo9130);



//clo-app
append1_spec(append1, f_lam_8868, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8912, void* kont8867, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{

//clo-app
arg_buffer[1] = kont8867;
arg_buffer[2] = rhs;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8867))[0])();
}
else
{

//creating new closure instance
void** clo9131 = alloc_clo(lam8910_fptr, 2);

//setting env list
clo9131[1] = kont8867;
clo9131[2] = apply_prim_car_1(lhs);
void* f_lam_8868 = encode_clo(clo9131);



//clo-app
append1_spec(append1, f_lam_8868, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8913_fptr() // lam8913 -> generic version 
{
//reading env
void* const env8914 = arg_buffer[1];
//reading env and args
void* const id_8793 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8914);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8793);
}

inline void lam8913_spec(void* env8914, void* id_8793) // lam8913 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8914);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8793);
}

inline void lam8915_fptr() // lam8915 -> generic version 
{
//reading env
void* const env8916 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8916);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], id_8788)))
{

//clo-app
append1_spec(append1, decode_clo_array[3], decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]));
}
else
{

//creating new closure instance
void** clo9132 = alloc_clo(lam8913_fptr, 2);

//setting env list
clo9132[1] = apply_prim_list_0();
clo9132[2] = decode_clo_array[3];
void* f_lam_8870 = encode_clo(clo9132);



//clo-app
append1_spec(append1, f_lam_8870, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[2]);
}

}

inline void lam8915_spec(void* env8916, void* id_8788) // lam8915 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8916);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], id_8788)))
{

//clo-app
append1_spec(append1, decode_clo_array[3], decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]));
}
else
{

//creating new closure instance
void** clo9133 = alloc_clo(lam8913_fptr, 2);

//setting env list
clo9133[1] = apply_prim_list_0();
clo9133[2] = decode_clo_array[3];
void* f_lam_8870 = encode_clo(clo9133);



//clo-app
append1_spec(append1, f_lam_8870, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[2]);
}

}

inline void lam8917_fptr() // lam8917 -> generic version 
{
//reading env
void* const env8918 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);

//creating new closure instance
void** clo9134 = alloc_clo(lam8915_fptr, 4);

//setting env list
clo9134[1] = decode_clo_array[1];
clo9134[2] = x;
clo9134[3] = decode_clo_array[2];
clo9134[4] = int8945;
void* f_lam_8871 = encode_clo(clo9134);



//clo-app
length_spec(length, f_lam_8871, x);
}

inline void lam8917_spec(void* env8918, void* x) // lam8917 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);

//creating new closure instance
void** clo9135 = alloc_clo(lam8915_fptr, 4);

//setting env list
clo9135[1] = decode_clo_array[1];
clo9135[2] = x;
clo9135[3] = decode_clo_array[2];
clo9135[4] = int8945;
void* f_lam_8871 = encode_clo(clo9135);



//clo-app
length_spec(length, f_lam_8871, x);
}

void append_fptr() // append 
{
//reading env
void* const _8919 = arg_buffer[1];
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


//creating new closure instance
void** clo9136 = alloc_clo(lam8917_fptr, 2);

//setting env list
clo9136[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9136[2] = apply_prim_car_1(vargs);
void* f_lam_8872 = encode_clo(clo9136);



//clo-app
lam8917_spec(f_lam_8872, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8920_fptr() // lam8920 -> generic version 
{
//reading env
void* const env8921 = arg_buffer[1];
//reading env and args
void* const xy8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8921);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = xy8796;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8920_spec(void* env8921, void* xy8796) // lam8920 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8921);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = xy8796;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8873 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8944)))
{

//creating new closure instance
void** clo9137 = alloc_clo(lam8920_fptr, 1);

//setting env list
clo9137[1] = kont8873;
void* f_lam_8874 = encode_clo(clo9137);



//clo-app
reverse_spec(reverse, f_lam_8874, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8873, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8945), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8922, void* kont8873, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8944)))
{

//creating new closure instance
void** clo9138 = alloc_clo(lam8920_fptr, 1);

//setting env list
clo9138[1] = kont8873;
void* f_lam_8874 = encode_clo(clo9138);



//clo-app
reverse_spec(reverse, f_lam_8874, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8873, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8945), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8875 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8875, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8923, void* kont8875, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8875, lst, n, apply_prim_list_0());
}

inline void lam8924_fptr() // lam8924 -> generic version 
{
//reading env
void* const env8925 = arg_buffer[1];
//reading env and args
void* const id_8810 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[2], id_8810);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8924_spec(void* env8925, void* id_8810) // lam8924 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[2], id_8810);
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8926_fptr() // lam8926 -> generic version 
{
//reading env
void* const env8927 = arg_buffer[1];
//reading env and args
void* const id_8807 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//creating new closure instance
void** clo9139 = alloc_clo(lam8924_fptr, 2);

//setting env list
clo9139[1] = decode_clo_array[1];
clo9139[2] = id_8807;
void* f_lam_8877 = encode_clo(clo9139);



//clo-app
fibfp_spec(fibfp, f_lam_8877, apply_prim__u45_2(decode_clo_array[2], float8948));
}

inline void lam8926_spec(void* env8927, void* id_8807) // lam8926 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//creating new closure instance
void** clo9140 = alloc_clo(lam8924_fptr, 2);

//setting env list
clo9140[1] = decode_clo_array[1];
clo9140[2] = id_8807;
void* f_lam_8877 = encode_clo(clo9140);



//clo-app
fibfp_spec(fibfp, f_lam_8877, apply_prim__u45_2(decode_clo_array[2], float8948));
}

inline void fibfp_fptr() // fibfp -> generic version 
{
//reading env and args
void* const kont8876 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(n, float8948)))
{

//clo-app
arg_buffer[1] = kont8876;
arg_buffer[2] = n;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8876))[0])();
}
else
{

//creating new closure instance
void** clo9141 = alloc_clo(lam8926_fptr, 2);

//setting env list
clo9141[1] = kont8876;
clo9141[2] = n;
void* f_lam_8878 = encode_clo(clo9141);



//clo-app
fibfp_spec(fibfp, f_lam_8878, apply_prim__u45_2(n, float8947));
}

}

inline void fibfp_spec(void* _8928, void* kont8876, void* n) // fibfp 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(n, float8948)))
{

//clo-app
arg_buffer[1] = kont8876;
arg_buffer[2] = n;
numArgs = int8951;
reinterpret_cast<void (*)()>((decode_clo(kont8876))[0])();
}
else
{

//creating new closure instance
void** clo9142 = alloc_clo(lam8926_fptr, 2);

//setting env list
clo9142[1] = kont8876;
clo9142[2] = n;
void* f_lam_8878 = encode_clo(clo9142);



//clo-app
fibfp_spec(fibfp, f_lam_8878, apply_prim__u45_2(n, float8947));
}

}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8879 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8879, float8949);
}

inline void brouhaha_main_spec(void* _8929, void* kont8879) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8879, float8949);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8944 = reinterpret_cast<void *>(encode_int(0));
float8948 = reinterpret_cast<void *>(encode_float(2.0));
float8947 = reinterpret_cast<void *>(encode_float(1.0));
float8949 = reinterpret_cast<void *>(encode_float(35.0));
bool_t8937 = encode_bool(true);
int8945 = reinterpret_cast<void *>(encode_int(1));
bool_f8938 = encode_bool(false);
int8933 = reinterpret_cast<void *>(encode_int(2));



// initializing global integer vars
int8950 = 1;
int8951 = 2;
int8952 = 3;
int8953 = 4;
int8954 = 5;

//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

