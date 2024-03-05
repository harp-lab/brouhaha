#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8995;
void* int8997;
void* bool_t8985;
void* int8994;
void* bool_f8986;
void* int8996;



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
void even_u63_spec(void* _8920, void* kont8879, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8921, void* kont8880, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8922, void* kont8881, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8923_fptr(); // lam8923
void lam8923_spec(void* env8924, void* id_8745); // lam8923
void* lam8923 = encode_clo(alloc_clo(lam8923_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8925, void* kont8882, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8926, void* kont8884, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8927_fptr(); // lam8927
void lam8927_spec(void* env8928, void* id_8760); // lam8927
void* lam8927 = encode_clo(alloc_clo(lam8927_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8929, void* kont8885, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8930_fptr(); // lam8930
void lam8930_spec(void* env8931, void* id_8766); // lam8930
void* lam8930 = encode_clo(alloc_clo(lam8930_fptr, 0));

void lam8932_fptr(); // lam8932
void lam8932_spec(void* env8933, void* id_8764); // lam8932
void* lam8932 = encode_clo(alloc_clo(lam8932_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8934, void* kont8887, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8935_fptr(); // lam8935
void lam8935_spec(void* env8936, void* id_8773); // lam8935
void* lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void lam8937_fptr(); // lam8937
void lam8937_spec(void* env8938, void* id_8770); // lam8937
void* lam8937 = encode_clo(alloc_clo(lam8937_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8939, void* kont8890, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8940, void* kont8893, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8941_fptr(); // lam8941
void lam8941_spec(void* env8942, void* id_8782); // lam8941
void* lam8941 = encode_clo(alloc_clo(lam8941_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8943, void* kont8894, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8944_fptr(); // lam8944
void lam8944_spec(void* env8945, void* id_8787); // lam8944
void* lam8944 = encode_clo(alloc_clo(lam8944_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8946, void* kont8896, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8947, void* kont8898, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8948, void* kont8899, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8949_fptr(); // lam8949
void lam8949_spec(void* env8950, void* id_8796); // lam8949
void* lam8949 = encode_clo(alloc_clo(lam8949_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8951, void* kont8900, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8952_fptr(); // lam8952
void lam8952_spec(void* env8953, void* id_8803); // lam8952
void* lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void lam8954_fptr(); // lam8954
void lam8954_spec(void* env8955, void* id_8798); // lam8954
void* lam8954 = encode_clo(alloc_clo(lam8954_fptr, 0));

void lam8956_fptr(); // lam8956
void lam8956_spec(void* env8957, void* x); // lam8956
void* lam8956 = encode_clo(alloc_clo(lam8956_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8959_fptr(); // lam8959
void lam8959_spec(void* env8960, void* xy8806); // lam8959
void* lam8959 = encode_clo(alloc_clo(lam8959_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8961, void* kont8906, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8962, void* kont8908, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8963_fptr(); // lam8963
void lam8963_spec(void* env8964, void* id_8817); // lam8963
void* lam8963 = encode_clo(alloc_clo(lam8963_fptr, 0));

void interval_u45list_fptr(); // interval-list
void interval_u45list_spec(void* _8965, void* kont8909, void* m, void* n); // interval-list
void* interval_u45list = encode_clo(alloc_clo(interval_u45list_fptr, 0));

void lam8966_fptr(); // lam8966
void lam8966_spec(void* env8967, void* id_8827); // lam8966
void* lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void remove_u45multiples_fptr(); // remove-multiples
void remove_u45multiples_spec(void* _8968, void* kont8911, void* n, void* l); // remove-multiples
void* remove_u45multiples = encode_clo(alloc_clo(remove_u45multiples_fptr, 0));

void lam8969_fptr(); // lam8969
void lam8969_spec(void* env8970, void* id_8834); // lam8969
void* lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void lam8971_fptr(); // lam8971
void lam8971_spec(void* env8972, void* id_8833); // lam8971
void* lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void sieve_fptr(); // sieve
void sieve_spec(void* _8973, void* kont8913, void* l); // sieve
void* sieve = encode_clo(alloc_clo(sieve_fptr, 0));

void lam8974_fptr(); // lam8974
void lam8974_spec(void* env8975, void* id_8836); // lam8974
void* lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void primes_u60_u61_fptr(); // primes<=
void primes_u60_u61_spec(void* _8976, void* kont8916, void* n); // primes<=
void* primes_u60_u61 = encode_clo(alloc_clo(primes_u60_u61_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8977, void* kont8918); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8998 = prim_car(lst);
void* const lst9000 = prim_cdr(lst);
void* const x8999 = apply_prim__u43(lst9000);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
}
else
{
void* const kont8998 = arg_buffer[2];
void* const x8999 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
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
void* const kont9001 = prim_car(lst);
void* const lst9003 = prim_cdr(lst);
void* const x9002 = apply_prim__u45(lst9003);
arg_buffer[1] = kont9001;
arg_buffer[2] = x9002;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
}
else
{
void* const kont9001 = arg_buffer[2];
void* const x9002 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9001;
arg_buffer[2] = x9002;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
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
void* const kont9004 = prim_car(lst);
void* const lst9006 = prim_cdr(lst);
void* const x9005 = apply_prim__u42(lst9006);
arg_buffer[1] = kont9004;
arg_buffer[2] = x9005;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
}
else
{
void* const kont9004 = arg_buffer[2];
void* const x9005 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9004;
arg_buffer[2] = x9005;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
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
void* const kont9007 = prim_car(lst);
void* const lst9009 = prim_cdr(lst);
void* const x9008 = apply_prim__u47(lst9009);
arg_buffer[1] = kont9007;
arg_buffer[2] = x9008;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
}
else
{
void* const kont9007 = arg_buffer[2];
void* const x9008 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9007;
arg_buffer[2] = x9008;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
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
void* const kont9010 = prim_car(lst);
void* const lst9012 = prim_cdr(lst);
void* const x9011 = apply_prim__u61(lst9012);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
}
else
{
void* const kont9010 = arg_buffer[2];
void* const x9011 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
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
void* const kont9013 = prim_car(lst);
void* const lst9015 = prim_cdr(lst);
void* const x9014 = apply_prim__u62(lst9015);
arg_buffer[1] = kont9013;
arg_buffer[2] = x9014;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
}
else
{
void* const kont9013 = arg_buffer[2];
void* const x9014 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9013;
arg_buffer[2] = x9014;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
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
void* const kont9016 = prim_car(lst);
void* const lst9018 = prim_cdr(lst);
void* const x9017 = apply_prim__u60(lst9018);
arg_buffer[1] = kont9016;
arg_buffer[2] = x9017;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
}
else
{
void* const kont9016 = arg_buffer[2];
void* const x9017 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9016;
arg_buffer[2] = x9017;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
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
void* const kont9019 = prim_car(lst);
void* const lst9021 = prim_cdr(lst);
void* const x9020 = apply_prim__u60_u61(lst9021);
arg_buffer[1] = kont9019;
arg_buffer[2] = x9020;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
}
else
{
void* const kont9019 = arg_buffer[2];
void* const x9020 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9019;
arg_buffer[2] = x9020;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
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
void* const kont9022 = prim_car(lst);
void* const lst9024 = prim_cdr(lst);
void* const x9023 = apply_prim__u62_u61(lst9024);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
}
else
{
void* const kont9022 = arg_buffer[2];
void* const x9023 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
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
void* const kont9025 = prim_car(lst);
void* const lst9027 = prim_cdr(lst);
void* const x9026 = apply_prim_modulo(lst9027);
arg_buffer[1] = kont9025;
arg_buffer[2] = x9026;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
}
else
{
void* const kont9025 = arg_buffer[2];
void* const x9026 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9025;
arg_buffer[2] = x9026;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
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
void* const kont9028 = prim_car(lst);
void* const lst9030 = prim_cdr(lst);
void* const x9029 = apply_prim_null_u63(lst9030);
arg_buffer[1] = kont9028;
arg_buffer[2] = x9029;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
}
else
{
void* const kont9028 = arg_buffer[2];
void* const x9029 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9028;
arg_buffer[2] = x9029;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
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
void* const kont9031 = prim_car(lst);
void* const lst9033 = prim_cdr(lst);
void* const x9032 = apply_prim_equal_u63(lst9033);
arg_buffer[1] = kont9031;
arg_buffer[2] = x9032;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
}
else
{
void* const kont9031 = arg_buffer[2];
void* const x9032 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9031;
arg_buffer[2] = x9032;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
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
void* const kont9034 = prim_car(lst);
void* const lst9036 = prim_cdr(lst);
void* const x9035 = apply_prim_eq_u63(lst9036);
arg_buffer[1] = kont9034;
arg_buffer[2] = x9035;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
}
else
{
void* const kont9034 = arg_buffer[2];
void* const x9035 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9034;
arg_buffer[2] = x9035;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
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
void* const kont9037 = prim_car(lst);
void* const lst9039 = prim_cdr(lst);
void* const x9038 = apply_prim_cons(lst9039);
arg_buffer[1] = kont9037;
arg_buffer[2] = x9038;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
}
else
{
void* const kont9037 = arg_buffer[2];
void* const x9038 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9037;
arg_buffer[2] = x9038;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
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
void* const kont9040 = prim_car(lst);
void* const lst9042 = prim_cdr(lst);
void* const x9041 = apply_prim_car(lst9042);
arg_buffer[1] = kont9040;
arg_buffer[2] = x9041;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
}
else
{
void* const kont9040 = arg_buffer[2];
void* const x9041 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9040;
arg_buffer[2] = x9041;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
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
void* const kont9043 = prim_car(lst);
void* const lst9045 = prim_cdr(lst);
void* const x9044 = apply_prim_cdr(lst9045);
arg_buffer[1] = kont9043;
arg_buffer[2] = x9044;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
}
else
{
void* const kont9043 = arg_buffer[2];
void* const x9044 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9043;
arg_buffer[2] = x9044;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
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
void* const kont9046 = prim_car(lst);
void* const lst9048 = prim_cdr(lst);
void* const x9047 = apply_prim_float_u45_u62int(lst9048);
arg_buffer[1] = kont9046;
arg_buffer[2] = x9047;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
}
else
{
void* const kont9046 = arg_buffer[2];
void* const x9047 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9046;
arg_buffer[2] = x9047;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
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
void* const kont9049 = prim_car(lst);
void* const lst9051 = prim_cdr(lst);
void* const x9050 = apply_prim_int_u45_u62float(lst9051);
arg_buffer[1] = kont9049;
arg_buffer[2] = x9050;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
}
else
{
void* const kont9049 = arg_buffer[2];
void* const x9050 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9049;
arg_buffer[2] = x9050;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
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
void* const kont9052 = prim_car(lst);
void* const lst9054 = prim_cdr(lst);
void* const x9053 = apply_prim_hash(lst9054);
arg_buffer[1] = kont9052;
arg_buffer[2] = x9053;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
}
else
{
void* const kont9052 = arg_buffer[2];
void* const x9053 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9052;
arg_buffer[2] = x9053;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
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
void* const kont9055 = prim_car(lst);
void* const lst9057 = prim_cdr(lst);
void* const x9056 = apply_prim_hash_u45ref(lst9057);
arg_buffer[1] = kont9055;
arg_buffer[2] = x9056;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
}
else
{
void* const kont9055 = arg_buffer[2];
void* const x9056 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9055;
arg_buffer[2] = x9056;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
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
void* const kont9058 = prim_car(lst);
void* const lst9060 = prim_cdr(lst);
void* const x9059 = apply_prim_hash_u45set(lst9060);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
}
else
{
void* const kont9058 = arg_buffer[2];
void* const x9059 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
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
void* const kont9061 = prim_car(lst);
void* const lst9063 = prim_cdr(lst);
void* const x9062 = apply_prim_hash_u45keys(lst9063);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
}
else
{
void* const kont9061 = arg_buffer[2];
void* const x9062 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
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
void* const kont9064 = prim_car(lst);
void* const lst9066 = prim_cdr(lst);
void* const x9065 = apply_prim_hash_u45has_u45key_u63(lst9066);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
}
else
{
void* const kont9064 = arg_buffer[2];
void* const x9065 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
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
void* const kont9067 = prim_car(lst);
void* const lst9069 = prim_cdr(lst);
void* const x9068 = apply_prim_hash_u45count(lst9069);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
}
else
{
void* const kont9067 = arg_buffer[2];
void* const x9068 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
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
void* const kont9070 = prim_car(lst);
void* const lst9072 = prim_cdr(lst);
void* const x9071 = apply_prim_set(lst9072);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
}
else
{
void* const kont9070 = arg_buffer[2];
void* const x9071 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
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
void* const kont9073 = prim_car(lst);
void* const lst9075 = prim_cdr(lst);
void* const x9074 = apply_prim_set_u45_u62list(lst9075);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
}
else
{
void* const kont9073 = arg_buffer[2];
void* const x9074 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
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
void* const kont9076 = prim_car(lst);
void* const lst9078 = prim_cdr(lst);
void* const x9077 = apply_prim_list_u45_u62set(lst9078);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
}
else
{
void* const kont9076 = arg_buffer[2];
void* const x9077 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
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
void* const kont9079 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9080 = apply_prim_set_u45add(lst9081);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
}
else
{
void* const kont9079 = arg_buffer[2];
void* const x9080 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
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
void* const kont9082 = prim_car(lst);
void* const lst9084 = prim_cdr(lst);
void* const x9083 = apply_prim_set_u45member_u63(lst9084);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
}
else
{
void* const kont9082 = arg_buffer[2];
void* const x9083 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
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
void* const kont9085 = prim_car(lst);
void* const lst9087 = prim_cdr(lst);
void* const x9086 = apply_prim_set_u45remove(lst9087);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
}
else
{
void* const kont9085 = arg_buffer[2];
void* const x9086 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
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
void* const kont9088 = prim_car(lst);
void* const lst9090 = prim_cdr(lst);
void* const x9089 = apply_prim_set_u45count(lst9090);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
}
else
{
void* const kont9088 = arg_buffer[2];
void* const x9089 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
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
void* const kont9091 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9092 = apply_prim_string_u63(lst9093);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
}
else
{
void* const kont9091 = arg_buffer[2];
void* const x9092 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
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
void* const kont9094 = prim_car(lst);
void* const lst9096 = prim_cdr(lst);
void* const x9095 = apply_prim_string_u45length(lst9096);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
}
else
{
void* const kont9094 = arg_buffer[2];
void* const x9095 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
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
void* const kont9097 = prim_car(lst);
void* const lst9099 = prim_cdr(lst);
void* const x9098 = apply_prim_string_u45ref(lst9099);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
}
else
{
void* const kont9097 = arg_buffer[2];
void* const x9098 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
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
void* const kont9100 = prim_car(lst);
void* const lst9102 = prim_cdr(lst);
void* const x9101 = apply_prim_substring(lst9102);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
}
else
{
void* const kont9100 = arg_buffer[2];
void* const x9101 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
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
void* const kont9103 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9104 = apply_prim_string_u45append(lst9105);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
}
else
{
void* const kont9103 = arg_buffer[2];
void* const x9104 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
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
void* const kont9106 = prim_car(lst);
void* const lst9108 = prim_cdr(lst);
void* const x9107 = apply_prim_string_u45_u62list(lst9108);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
}
else
{
void* const kont9106 = arg_buffer[2];
void* const x9107 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
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
void* const kont9109 = prim_car(lst);
void* const lst9111 = prim_cdr(lst);
void* const x9110 = apply_prim_exact_u45floor(lst9111);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
}
else
{
void* const kont9109 = arg_buffer[2];
void* const x9110 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
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
void* const kont9112 = prim_car(lst);
void* const lst9114 = prim_cdr(lst);
void* const x9113 = apply_prim_exact_u45ceiling(lst9114);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
}
else
{
void* const kont9112 = arg_buffer[2];
void* const x9113 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
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
void* const kont9115 = prim_car(lst);
void* const lst9117 = prim_cdr(lst);
void* const x9116 = apply_prim_exact_u45round(lst9117);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
}
else
{
void* const kont9115 = arg_buffer[2];
void* const x9116 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
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
void* const kont9118 = prim_car(lst);
void* const lst9120 = prim_cdr(lst);
void* const x9119 = apply_prim_abs(lst9120);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
}
else
{
void* const kont9118 = arg_buffer[2];
void* const x9119 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
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
void* const kont9121 = prim_car(lst);
void* const lst9123 = prim_cdr(lst);
void* const x9122 = apply_prim_max(lst9123);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
}
else
{
void* const kont9121 = arg_buffer[2];
void* const x9122 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
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
void* const kont9124 = prim_car(lst);
void* const lst9126 = prim_cdr(lst);
void* const x9125 = apply_prim_min(lst9126);
arg_buffer[1] = kont9124;
arg_buffer[2] = x9125;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
}
else
{
void* const kont9124 = arg_buffer[2];
void* const x9125 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9124;
arg_buffer[2] = x9125;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
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
void* const kont9127 = prim_car(lst);
void* const lst9129 = prim_cdr(lst);
void* const x9128 = apply_prim_expt(lst9129);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
}
else
{
void* const kont9127 = arg_buffer[2];
void* const x9128 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
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
void* const kont9130 = prim_car(lst);
void* const lst9132 = prim_cdr(lst);
void* const x9131 = apply_prim_sqrt(lst9132);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
}
else
{
void* const kont9130 = arg_buffer[2];
void* const x9131 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
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
void* const kont9133 = prim_car(lst);
void* const lst9135 = prim_cdr(lst);
void* const x9134 = apply_prim_remainder(lst9135);
arg_buffer[1] = kont9133;
arg_buffer[2] = x9134;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
}
else
{
void* const kont9133 = arg_buffer[2];
void* const x9134 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9133;
arg_buffer[2] = x9134;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
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
void* const kont9136 = prim_car(lst);
void* const lst9138 = prim_cdr(lst);
void* const x9137 = apply_prim_quotient(lst9138);
arg_buffer[1] = kont9136;
arg_buffer[2] = x9137;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
}
else
{
void* const kont9136 = arg_buffer[2];
void* const x9137 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9136;
arg_buffer[2] = x9137;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
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
void* const kont9139 = prim_car(lst);
void* const lst9141 = prim_cdr(lst);
void* const x9140 = apply_prim_random(lst9141);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
}
else
{
void* const kont9139 = arg_buffer[2];
void* const x9140 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
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
void* const kont9142 = prim_car(lst);
void* const lst9144 = prim_cdr(lst);
void* const x9143 = apply_prim_symbol_u63(lst9144);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
}
else
{
void* const kont9142 = arg_buffer[2];
void* const x9143 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
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
void* const kont9145 = prim_car(lst);
void* const lst9147 = prim_cdr(lst);
void* const x9146 = apply_prim_pair_u63(lst9147);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
}
else
{
void* const kont9145 = arg_buffer[2];
void* const x9146 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
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
void* const kont9148 = prim_car(lst);
void* const lst9150 = prim_cdr(lst);
void* const x9149 = apply_prim_positive_u63(lst9150);
arg_buffer[1] = kont9148;
arg_buffer[2] = x9149;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9148))[0])();
}
else
{
void* const kont9148 = arg_buffer[2];
void* const x9149 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9148;
arg_buffer[2] = x9149;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9148))[0])();
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
void* const kont9151 = prim_car(lst);
void* const lst9153 = prim_cdr(lst);
void* const x9152 = apply_prim_negative_u63(lst9153);
arg_buffer[1] = kont9151;
arg_buffer[2] = x9152;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9151))[0])();
}
else
{
void* const kont9151 = arg_buffer[2];
void* const x9152 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9151;
arg_buffer[2] = x9152;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9151))[0])();
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
void* const kont9154 = prim_car(lst);
void* const lst9156 = prim_cdr(lst);
void* const x9155 = apply_prim_list(lst9156);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9154))[0])();
}
else
{
void* const kont9154 = arg_buffer[2];
void* const x9155 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9154))[0])();
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8879 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8879)[0])(kont8879, apply_prim_equal_u63_2(int8995, apply_prim_modulo_2(x, int8996)));
}

inline void even_u63_spec(void* _8920, void* kont8879, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8879)[0])(kont8879, apply_prim_equal_u63_2(int8995, apply_prim_modulo_2(x, int8996)));
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8880 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8880)[0])(kont8880, apply_prim_equal_u63_2(int8994, apply_prim_modulo_2(x, int8996)));
}

inline void odd_u63_spec(void* _8921, void* kont8880, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8880)[0])(kont8880, apply_prim_equal_u63_2(int8994, apply_prim_modulo_2(x, int8996)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8881 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8995, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8881)[0])(kont8881, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8881, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8994));
}

}

inline void list_u45ref_spec(void* _8922, void* kont8881, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8995, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8881)[0])(kont8881, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8881, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8994));
}

}

inline void lam8923_fptr() // lam8923 -> generic version 
{
//reading env
void* const env8924 = arg_buffer[1];
//reading env and args
void* const id_8745 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8924);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f8986);
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

inline void lam8923_spec(void* env8924, void* id_8745) // lam8923 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8924);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f8986);
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
void* const kont8882 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9157 = alloc_kont(lam8923_spec, 3);

//setting env list
clo9157[1] = kont8882;
clo9157[2] = item;
clo9157[3] = lst;
void* f_lam_8883 = encode_clo(clo9157);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8923_spec(f_lam_8883, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8923_spec(f_lam_8883, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8925, void* kont8882, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9158 = alloc_kont(lam8923_spec, 3);

//setting env list
clo9158[1] = kont8882;
clo9158[2] = item;
clo9158[3] = lst;
void* f_lam_8883 = encode_clo(clo9158);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8923_spec(f_lam_8883, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8923_spec(f_lam_8883, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8884 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[0])(kont8884, bool_f8986);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[0])(kont8884, bool_t8985);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8884, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8926, void* kont8884, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[0])(kont8884, bool_f8986);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[0])(kont8884, bool_t8985);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8884, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8927_fptr() // lam8927 -> generic version 
{
//reading env
void* const env8928 = arg_buffer[1];
//reading env and args
void* const id_8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8928);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8760));
}

inline void lam8927_spec(void* env8928, void* id_8760) // lam8927 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8928);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8760));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8885 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8885)[0])(kont8885, int8995);
}
else
{

//creating new make-kont closure
void** clo9159 = alloc_kont(lam8927_spec, 2);

//setting env list
clo9159[1] = int8994;
clo9159[2] = kont8885;
void* f_lam_8886 = encode_clo(clo9159);



//clo-app
length_spec(length, f_lam_8886, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8929, void* kont8885, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8885)[0])(kont8885, int8995);
}
else
{

//creating new make-kont closure
void** clo9160 = alloc_kont(lam8927_spec, 2);

//setting env list
clo9160[1] = int8994;
clo9160[2] = kont8885;
void* f_lam_8886 = encode_clo(clo9160);



//clo-app
length_spec(length, f_lam_8886, apply_prim_cdr_1(lst));
}

}

inline void lam8930_fptr() // lam8930 -> generic version 
{
//reading env
void* const env8931 = arg_buffer[1];
//reading env and args
void* const id_8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8931);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam8930_spec(void* env8931, void* id_8766) // lam8930 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8931);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam8932_fptr() // lam8932 -> generic version 
{
//reading env
void* const env8933 = arg_buffer[1];
//reading env and args
void* const id_8764 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8933);

//creating new make-kont closure
void** clo9161 = alloc_kont(lam8930_spec, 2);

//setting env list
clo9161[1] = decode_clo_array[1];
clo9161[2] = id_8764;
void* f_lam_8888 = encode_clo(clo9161);



//clo-app
map_spec(map, f_lam_8888, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8932_spec(void* env8933, void* id_8764) // lam8932 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8933);

//creating new make-kont closure
void** clo9162 = alloc_kont(lam8930_spec, 2);

//setting env list
clo9162[1] = decode_clo_array[1];
clo9162[2] = id_8764;
void* f_lam_8888 = encode_clo(clo9162);



//clo-app
map_spec(map, f_lam_8888, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8887 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8887)[0])(kont8887, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9163 = alloc_kont(lam8932_spec, 3);

//setting env list
clo9163[1] = kont8887;
clo9163[2] = proc;
clo9163[3] = lst;
void* f_lam_8889 = encode_clo(clo9163);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8889;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8934, void* kont8887, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8887)[0])(kont8887, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9164 = alloc_kont(lam8932_spec, 3);

//setting env list
clo9164[1] = kont8887;
clo9164[2] = proc;
clo9164[3] = lst;
void* f_lam_8889 = encode_clo(clo9164);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8889;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8935_fptr() // lam8935 -> generic version 
{
//reading env
void* const env8936 = arg_buffer[1];
//reading env and args
void* const id_8773 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8773));
}

inline void lam8935_spec(void* env8936, void* id_8773) // lam8935 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8773));
}

inline void lam8937_fptr() // lam8937 -> generic version 
{
//reading env
void* const env8938 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8938);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9165 = alloc_kont(lam8935_spec, 2);

//setting env list
clo9165[1] = apply_prim_car_1(decode_clo_array[2]);
clo9165[2] = decode_clo_array[3];
void* f_lam_8891 = encode_clo(clo9165);



//clo-app
filter_spec(filter, f_lam_8891, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam8937_spec(void* env8938, void* id_8770) // lam8937 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8938);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9166 = alloc_kont(lam8935_spec, 2);

//setting env list
clo9166[1] = apply_prim_car_1(decode_clo_array[2]);
clo9166[2] = decode_clo_array[3];
void* f_lam_8891 = encode_clo(clo9166);



//clo-app
filter_spec(filter, f_lam_8891, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
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
void* const kont8890 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8890)[0])(kont8890, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9167 = alloc_kont(lam8937_spec, 3);

//setting env list
clo9167[1] = op;
clo9167[2] = lst;
clo9167[3] = kont8890;
void* f_lam_8892 = encode_clo(clo9167);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8892;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8939, void* kont8890, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8890)[0])(kont8890, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9168 = alloc_kont(lam8937_spec, 3);

//setting env list
clo9168[1] = op;
clo9168[2] = lst;
clo9168[3] = kont8890;
void* f_lam_8892 = encode_clo(clo9168);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8892;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8893 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8995)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8893)[0])(kont8893, lst);
}
else
{

//clo-app
drop_spec(drop, kont8893, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8994));
}

}

inline void drop_spec(void* _8940, void* kont8893, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8995)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8893)[0])(kont8893, lst);
}
else
{

//clo-app
drop_spec(drop, kont8893, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8994));
}

}

inline void lam8941_fptr() // lam8941 -> generic version 
{
//reading env
void* const env8942 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8942);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8782, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8941_spec(void* env8942, void* id_8782) // lam8941 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8942);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8782, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8894 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8894)[0])(kont8894, acc);
}
else
{

//creating new make-kont closure
void** clo9169 = alloc_kont(lam8941_spec, 3);

//setting env list
clo9169[1] = kont8894;
clo9169[2] = lst;
clo9169[3] = fun;
void* f_lam_8895 = encode_clo(clo9169);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8895;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8943, void* kont8894, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8894)[0])(kont8894, acc);
}
else
{

//creating new make-kont closure
void** clo9170 = alloc_kont(lam8941_spec, 3);

//setting env list
clo9170[1] = kont8894;
clo9170[2] = lst;
clo9170[3] = fun;
void* f_lam_8895 = encode_clo(clo9170);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8895;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8944_fptr() // lam8944 -> generic version 
{
//reading env
void* const env8945 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8945);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8787;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8944_spec(void* env8945, void* id_8787) // lam8944 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8945);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8787;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8896 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8896)[0])(kont8896, acc);
}
else
{

//creating new make-kont closure
void** clo9171 = alloc_kont(lam8944_spec, 3);

//setting env list
clo9171[1] = fun;
clo9171[2] = apply_prim_car_1(lst);
clo9171[3] = kont8896;
void* f_lam_8897 = encode_clo(clo9171);



//clo-app
foldr_spec(foldr, f_lam_8897, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8946, void* kont8896, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8896)[0])(kont8896, acc);
}
else
{

//creating new make-kont closure
void** clo9172 = alloc_kont(lam8944_spec, 3);

//setting env list
clo9172[1] = fun;
clo9172[2] = apply_prim_car_1(lst);
clo9172[3] = kont8896;
void* f_lam_8897 = encode_clo(clo9172);



//clo-app
foldr_spec(foldr, f_lam_8897, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8898 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8898)[0])(kont8898, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8898, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8947, void* kont8898, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8898)[0])(kont8898, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8898, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8899 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8899, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8948, void* kont8899, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8899, lst, apply_prim_list_0());
}

inline void lam8949_fptr() // lam8949 -> generic version 
{
//reading env
void* const env8950 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void lam8949_spec(void* env8950, void* id_8796) // lam8949 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8900 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[0])(kont8900, rhs);
}
else
{

//creating new make-kont closure
void** clo9173 = alloc_kont(lam8949_spec, 2);

//setting env list
clo9173[1] = kont8900;
clo9173[2] = apply_prim_car_1(lhs);
void* f_lam_8901 = encode_clo(clo9173);



//clo-app
append1_spec(append1, f_lam_8901, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8951, void* kont8900, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[0])(kont8900, rhs);
}
else
{

//creating new make-kont closure
void** clo9174 = alloc_kont(lam8949_spec, 2);

//setting env list
clo9174[1] = kont8900;
clo9174[2] = apply_prim_car_1(lhs);
void* f_lam_8901 = encode_clo(clo9174);



//clo-app
append1_spec(append1, f_lam_8901, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8952_fptr() // lam8952 -> generic version 
{
//reading env
void* const env8953 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam8952_spec(void* env8953, void* id_8803) // lam8952 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam8954_fptr() // lam8954 -> generic version 
{
//reading env
void* const env8955 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8955);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[2], decode_clo_array[1], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9175 = alloc_kont(lam8952_spec, 2);

//setting env list
clo9175[1] = decode_clo_array[2];
clo9175[2] = apply_prim_list_0();
void* f_lam_8903 = encode_clo(clo9175);



//clo-app
append1_spec(append1, f_lam_8903, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[3]);
}

}

inline void lam8954_spec(void* env8955, void* id_8798) // lam8954 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8955);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[2], decode_clo_array[1], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9176 = alloc_kont(lam8952_spec, 2);

//setting env list
clo9176[1] = decode_clo_array[2];
clo9176[2] = apply_prim_list_0();
void* f_lam_8903 = encode_clo(clo9176);



//clo-app
append1_spec(append1, f_lam_8903, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[3]);
}

}

inline void lam8956_fptr() // lam8956 -> generic version 
{
//reading env
void* const env8957 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8957);

//creating new make-kont closure
void** clo9177 = alloc_kont(lam8954_spec, 4);

//setting env list
clo9177[1] = decode_clo_array[1];
clo9177[2] = decode_clo_array[2];
clo9177[3] = x;
clo9177[4] = int8994;
void* f_lam_8904 = encode_clo(clo9177);



//clo-app
length_spec(length, f_lam_8904, x);
}

inline void lam8956_spec(void* env8957, void* x) // lam8956 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8957);

//creating new make-kont closure
void** clo9178 = alloc_kont(lam8954_spec, 4);

//setting env list
clo9178[1] = decode_clo_array[1];
clo9178[2] = decode_clo_array[2];
clo9178[3] = x;
clo9178[4] = int8994;
void* f_lam_8904 = encode_clo(clo9178);



//clo-app
length_spec(length, f_lam_8904, x);
}

void append_fptr() // append 
{
//reading env
void* const _8958 = arg_buffer[1];
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
void** clo9179 = alloc_kont(lam8956_spec, 2);

//setting env list
clo9179[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9179[2] = apply_prim_car_1(vargs);
void* f_lam_8905 = encode_clo(clo9179);


// kont-clo-app case
lam8956_spec(f_lam_8905, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8959_fptr() // lam8959 -> generic version 
{
//reading env
void* const env8960 = arg_buffer[1];
//reading env and args
void* const xy8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void lam8959_spec(void* env8960, void* xy8806) // lam8959 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8906 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8995)))
{

//creating new make-kont closure
void** clo9180 = alloc_kont(lam8959_spec, 1);

//setting env list
clo9180[1] = kont8906;
void* f_lam_8907 = encode_clo(clo9180);



//clo-app
reverse_spec(reverse, f_lam_8907, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8906, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8994), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8961, void* kont8906, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8995)))
{

//creating new make-kont closure
void** clo9181 = alloc_kont(lam8959_spec, 1);

//setting env list
clo9181[1] = kont8906;
void* f_lam_8907 = encode_clo(clo9181);



//clo-app
reverse_spec(reverse, f_lam_8907, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8906, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8994), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8908 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8908, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8962, void* kont8908, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8908, lst, n, apply_prim_list_0());
}

inline void lam8963_fptr() // lam8963 -> generic version 
{
//reading env
void* const env8964 = arg_buffer[1];
//reading env and args
void* const id_8817 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8964);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8817));
}

inline void lam8963_spec(void* env8964, void* id_8817) // lam8963 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8964);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8817));
}

inline void interval_u45list_fptr() // interval-list -> generic version 
{
//reading env and args
void* const kont8909 = arg_buffer[2];
void* const m = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u62_2(m, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9182 = alloc_kont(lam8963_spec, 2);

//setting env list
clo9182[1] = m;
clo9182[2] = kont8909;
void* f_lam_8910 = encode_clo(clo9182);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8910, apply_prim__u43_2(int8994, m), n);
}

}

inline void interval_u45list_spec(void* _8965, void* kont8909, void* m, void* n) // interval-list 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u62_2(m, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9183 = alloc_kont(lam8963_spec, 2);

//setting env list
clo9183[1] = m;
clo9183[2] = kont8909;
void* f_lam_8910 = encode_clo(clo9183);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8910, apply_prim__u43_2(int8994, m), n);
}

}

inline void lam8966_fptr() // lam8966 -> generic version 
{
//reading env
void* const env8967 = arg_buffer[1];
//reading env and args
void* const id_8827 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8827));
}

inline void lam8966_spec(void* env8967, void* id_8827) // lam8966 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8827));
}

inline void remove_u45multiples_fptr() // remove-multiples -> generic version 
{
//reading env and args
void* const kont8911 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8911)[0])(kont8911, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim__u61_2(apply_prim_remainder_2(apply_prim_car_1(l), n), int8995)))
{

//clo-app
remove_u45multiples_spec(remove_u45multiples, kont8911, n, apply_prim_cdr_1(l));
}
else
{

//creating new make-kont closure
void** clo9184 = alloc_kont(lam8966_spec, 2);

//setting env list
clo9184[1] = apply_prim_car_1(l);
clo9184[2] = kont8911;
void* f_lam_8912 = encode_clo(clo9184);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8912, n, apply_prim_cdr_1(l));
}

}

}

inline void remove_u45multiples_spec(void* _8968, void* kont8911, void* n, void* l) // remove-multiples 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8911)[0])(kont8911, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim__u61_2(apply_prim_remainder_2(apply_prim_car_1(l), n), int8995)))
{

//clo-app
remove_u45multiples_spec(remove_u45multiples, kont8911, n, apply_prim_cdr_1(l));
}
else
{

//creating new make-kont closure
void** clo9185 = alloc_kont(lam8966_spec, 2);

//setting env list
clo9185[1] = apply_prim_car_1(l);
clo9185[2] = kont8911;
void* f_lam_8912 = encode_clo(clo9185);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8912, n, apply_prim_cdr_1(l));
}

}

}

inline void lam8969_fptr() // lam8969 -> generic version 
{
//reading env
void* const env8970 = arg_buffer[1];
//reading env and args
void* const id_8834 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8834));
}

inline void lam8969_spec(void* env8970, void* id_8834) // lam8969 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8834));
}

inline void lam8971_fptr() // lam8971 -> generic version 
{
//reading env
void* const env8972 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//creating new make-kont closure
void** clo9186 = alloc_kont(lam8969_spec, 2);

//setting env list
clo9186[1] = decode_clo_array[1];
clo9186[2] = decode_clo_array[2];
void* f_lam_8914 = encode_clo(clo9186);



//clo-app
sieve_spec(sieve, f_lam_8914, id_8833);
}

inline void lam8971_spec(void* env8972, void* id_8833) // lam8971 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//creating new make-kont closure
void** clo9187 = alloc_kont(lam8969_spec, 2);

//setting env list
clo9187[1] = decode_clo_array[1];
clo9187[2] = decode_clo_array[2];
void* f_lam_8914 = encode_clo(clo9187);



//clo-app
sieve_spec(sieve, f_lam_8914, id_8833);
}

inline void sieve_fptr() // sieve -> generic version 
{
//reading env and args
void* const kont8913 = arg_buffer[2];
void* const l = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8913)[0])(kont8913, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9188 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9188[1] = kont8913;
clo9188[2] = apply_prim_car_1(l);
void* f_lam_8915 = encode_clo(clo9188);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8915, apply_prim_car_1(l), apply_prim_cdr_1(l));
}

}

inline void sieve_spec(void* _8973, void* kont8913, void* l) // sieve 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8913)[0])(kont8913, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9189 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9189[1] = kont8913;
clo9189[2] = apply_prim_car_1(l);
void* f_lam_8915 = encode_clo(clo9189);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8915, apply_prim_car_1(l), apply_prim_cdr_1(l));
}

}

inline void lam8974_fptr() // lam8974 -> generic version 
{
//reading env
void* const env8975 = arg_buffer[1];
//reading env and args
void* const id_8836 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);

//clo-app
sieve_spec(sieve, decode_clo_array[1], id_8836);
}

inline void lam8974_spec(void* env8975, void* id_8836) // lam8974 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);

//clo-app
sieve_spec(sieve, decode_clo_array[1], id_8836);
}

inline void primes_u60_u61_fptr() // primes<= -> generic version 
{
//reading env and args
void* const kont8916 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9190 = alloc_kont(lam8974_spec, 1);

//setting env list
clo9190[1] = kont8916;
void* f_lam_8917 = encode_clo(clo9190);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8917, int8996, n);
}

inline void primes_u60_u61_spec(void* _8976, void* kont8916, void* n) // primes<= 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9191 = alloc_kont(lam8974_spec, 1);

//setting env list
clo9191[1] = kont8916;
void* f_lam_8917 = encode_clo(clo9191);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8917, int8996, n);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8918 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
primes_u60_u61_spec(primes_u60_u61, kont8918, int8997);
}

inline void brouhaha_main_spec(void* _8977, void* kont8918) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
primes_u60_u61_spec(primes_u60_u61, kont8918, int8997);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8995 = reinterpret_cast<void *>(encode_int(0));
int8997 = reinterpret_cast<void *>(encode_int(10000));
bool_t8985 = encode_bool(true);
int8994 = reinterpret_cast<void *>(encode_int(1));
bool_f8986 = encode_bool(false);
int8996 = reinterpret_cast<void *>(encode_int(2));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

