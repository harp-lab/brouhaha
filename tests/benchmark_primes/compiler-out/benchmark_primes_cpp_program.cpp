#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9052;
void* bool_t9041;
void* int9054;
void* int9051;
void* bool_f9042;
void* int9053;



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
void even_u63_spec(void* _8963, void* kont8915, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8964_fptr(); // lam8964
void lam8964_spec(void* env8965, void* id_8745); // lam8964
void* lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void boolean_u63_fptr(); // boolean?
void boolean_u63_spec(void* _8966, void* kont8916, void* x); // boolean?
void* boolean_u63 = encode_clo(alloc_clo(boolean_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8967, void* kont8918, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8968, void* kont8919, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8969_fptr(); // lam8969
void lam8969_spec(void* env8970, void* id_8760); // lam8969
void* lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8971, void* kont8920, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8972, void* kont8922, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8973_fptr(); // lam8973
void lam8973_spec(void* env8974, void* id_8775); // lam8973
void* lam8973 = encode_clo(alloc_clo(lam8973_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8975, void* kont8923, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8976_fptr(); // lam8976
void lam8976_spec(void* env8977, void* id_8781); // lam8976
void* lam8976 = encode_clo(alloc_clo(lam8976_fptr, 0));

void lam8978_fptr(); // lam8978
void lam8978_spec(void* env8979, void* id_8779); // lam8978
void* lam8978 = encode_clo(alloc_clo(lam8978_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8980, void* kont8925, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8981_fptr(); // lam8981
void lam8981_spec(void* env8982, void* id_8788); // lam8981
void* lam8981 = encode_clo(alloc_clo(lam8981_fptr, 0));

void lam8983_fptr(); // lam8983
void lam8983_spec(void* env8984, void* id_8785); // lam8983
void* lam8983 = encode_clo(alloc_clo(lam8983_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8985, void* kont8928, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8986, void* kont8931, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8987_fptr(); // lam8987
void lam8987_spec(void* env8988, void* id_8797); // lam8987
void* lam8987 = encode_clo(alloc_clo(lam8987_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8989, void* kont8932, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8990_fptr(); // lam8990
void lam8990_spec(void* env8991, void* id_8802); // lam8990
void* lam8990 = encode_clo(alloc_clo(lam8990_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8992, void* kont8934, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8993, void* kont8936, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8994, void* kont8937, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8995_fptr(); // lam8995
void lam8995_spec(void* env8996, void* id_8811); // lam8995
void* lam8995 = encode_clo(alloc_clo(lam8995_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8997, void* kont8938, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8998_fptr(); // lam8998
void lam8998_spec(void* env8999, void* xy8813); // lam8998
void* lam8998 = encode_clo(alloc_clo(lam8998_fptr, 0));

void lam9000_fptr(); // lam9000
void lam9000_spec(void* env9001, void* id_8816); // lam9000
void* lam9000 = encode_clo(alloc_clo(lam9000_fptr, 0));

void lam9002_fptr(); // lam9002
void lam9002_spec(void* env9003, void* lsts); // lam9002
void* lam9002 = encode_clo(alloc_clo(lam9002_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9005_fptr(); // lam9005
void lam9005_spec(void* env9006, void* xy8819); // lam9005
void* lam9005 = encode_clo(alloc_clo(lam9005_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _9007, void* kont8944, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _9008, void* kont8946, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam9009_fptr(); // lam9009
void lam9009_spec(void* env9010, void* id_8833); // lam9009
void* lam9009 = encode_clo(alloc_clo(lam9009_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _9011, void* kont8947, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam9012_fptr(); // lam9012
void lam9012_spec(void* env9013, void* id_8840); // lam9012
void* lam9012 = encode_clo(alloc_clo(lam9012_fptr, 0));

void lam9014_fptr(); // lam9014
void lam9014_spec(void* env9015, void* id_8838); // lam9014
void* lam9014 = encode_clo(alloc_clo(lam9014_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _9016, void* kont8949, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam9017_fptr(); // lam9017
void lam9017_spec(void* env9018, void* id_8846); // lam9017
void* lam9017 = encode_clo(alloc_clo(lam9017_fptr, 0));

void interval_u45list_fptr(); // interval-list
void interval_u45list_spec(void* _9019, void* kont8952, void* m, void* n); // interval-list
void* interval_u45list = encode_clo(alloc_clo(interval_u45list_fptr, 0));

void lam9020_fptr(); // lam9020
void lam9020_spec(void* env9021, void* id_8856); // lam9020
void* lam9020 = encode_clo(alloc_clo(lam9020_fptr, 0));

void remove_u45multiples_fptr(); // remove-multiples
void remove_u45multiples_spec(void* _9022, void* kont8954, void* n, void* l); // remove-multiples
void* remove_u45multiples = encode_clo(alloc_clo(remove_u45multiples_fptr, 0));

void lam9023_fptr(); // lam9023
void lam9023_spec(void* env9024, void* id_8863); // lam9023
void* lam9023 = encode_clo(alloc_clo(lam9023_fptr, 0));

void lam9025_fptr(); // lam9025
void lam9025_spec(void* env9026, void* id_8862); // lam9025
void* lam9025 = encode_clo(alloc_clo(lam9025_fptr, 0));

void sieve_fptr(); // sieve
void sieve_spec(void* _9027, void* kont8956, void* l); // sieve
void* sieve = encode_clo(alloc_clo(sieve_fptr, 0));

void lam9028_fptr(); // lam9028
void lam9028_spec(void* env9029, void* id_8865); // lam9028
void* lam9028 = encode_clo(alloc_clo(lam9028_fptr, 0));

void primes_u60_u61_fptr(); // primes<=
void primes_u60_u61_spec(void* _9030, void* kont8959, void* n); // primes<=
void* primes_u60_u61 = encode_clo(alloc_clo(primes_u60_u61_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9031, void* kont8961); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9055 = prim_car(lst);
void* const lst9057 = prim_cdr(lst);
void* const x9056 = apply_prim__u43(lst9057);
arg_buffer[1] = kont9055;
arg_buffer[2] = x9056;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
}
else
{
void* const kont9055 = arg_buffer[2];
void* const x9056 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9055))[0])(kont9055, x9056);
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
void* const kont9058 = prim_car(lst);
void* const lst9060 = prim_cdr(lst);
void* const x9059 = apply_prim__u45(lst9060);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
}
else
{
void* const kont9058 = arg_buffer[2];
void* const x9059 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9058))[0])(kont9058, x9059);
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
void* const kont9061 = prim_car(lst);
void* const lst9063 = prim_cdr(lst);
void* const x9062 = apply_prim__u42(lst9063);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
}
else
{
void* const kont9061 = arg_buffer[2];
void* const x9062 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9061))[0])(kont9061, x9062);
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
void* const kont9064 = prim_car(lst);
void* const lst9066 = prim_cdr(lst);
void* const x9065 = apply_prim__u47(lst9066);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
}
else
{
void* const kont9064 = arg_buffer[2];
void* const x9065 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9064))[0])(kont9064, x9065);
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
void* const kont9067 = prim_car(lst);
void* const lst9069 = prim_cdr(lst);
void* const x9068 = apply_prim__u61(lst9069);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
}
else
{
void* const kont9067 = arg_buffer[2];
void* const x9068 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9067))[0])(kont9067, x9068);
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
void* const kont9070 = prim_car(lst);
void* const lst9072 = prim_cdr(lst);
void* const x9071 = apply_prim__u62(lst9072);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
}
else
{
void* const kont9070 = arg_buffer[2];
void* const x9071 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9070))[0])(kont9070, x9071);
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
void* const kont9073 = prim_car(lst);
void* const lst9075 = prim_cdr(lst);
void* const x9074 = apply_prim__u60(lst9075);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
}
else
{
void* const kont9073 = arg_buffer[2];
void* const x9074 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9073))[0])(kont9073, x9074);
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
void* const kont9076 = prim_car(lst);
void* const lst9078 = prim_cdr(lst);
void* const x9077 = apply_prim__u60_u61(lst9078);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
}
else
{
void* const kont9076 = arg_buffer[2];
void* const x9077 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9076))[0])(kont9076, x9077);
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
void* const kont9079 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9080 = apply_prim__u62_u61(lst9081);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
}
else
{
void* const kont9079 = arg_buffer[2];
void* const x9080 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9079))[0])(kont9079, x9080);
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
void* const kont9082 = prim_car(lst);
void* const lst9084 = prim_cdr(lst);
void* const x9083 = apply_prim_modulo(lst9084);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
}
else
{
void* const kont9082 = arg_buffer[2];
void* const x9083 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9082))[0])(kont9082, x9083);
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
void* const kont9085 = prim_car(lst);
void* const lst9087 = prim_cdr(lst);
void* const x9086 = apply_prim_null_u63(lst9087);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
}
else
{
void* const kont9085 = arg_buffer[2];
void* const x9086 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9085))[0])(kont9085, x9086);
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
void* const kont9088 = prim_car(lst);
void* const lst9090 = prim_cdr(lst);
void* const x9089 = apply_prim_equal_u63(lst9090);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
}
else
{
void* const kont9088 = arg_buffer[2];
void* const x9089 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9088))[0])(kont9088, x9089);
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
void* const kont9091 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9092 = apply_prim_eq_u63(lst9093);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
}
else
{
void* const kont9091 = arg_buffer[2];
void* const x9092 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9091))[0])(kont9091, x9092);
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
void* const kont9094 = prim_car(lst);
void* const lst9096 = prim_cdr(lst);
void* const x9095 = apply_prim_cons(lst9096);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
}
else
{
void* const kont9094 = arg_buffer[2];
void* const x9095 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9094))[0])(kont9094, x9095);
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
void* const kont9097 = prim_car(lst);
void* const lst9099 = prim_cdr(lst);
void* const x9098 = apply_prim_car(lst9099);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
}
else
{
void* const kont9097 = arg_buffer[2];
void* const x9098 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9097))[0])(kont9097, x9098);
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
void* const kont9100 = prim_car(lst);
void* const lst9102 = prim_cdr(lst);
void* const x9101 = apply_prim_cdr(lst9102);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
}
else
{
void* const kont9100 = arg_buffer[2];
void* const x9101 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9100))[0])(kont9100, x9101);
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
void* const kont9103 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9104 = apply_prim_float_u45_u62int(lst9105);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
}
else
{
void* const kont9103 = arg_buffer[2];
void* const x9104 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9103))[0])(kont9103, x9104);
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
void* const kont9106 = prim_car(lst);
void* const lst9108 = prim_cdr(lst);
void* const x9107 = apply_prim_int_u45_u62float(lst9108);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
}
else
{
void* const kont9106 = arg_buffer[2];
void* const x9107 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9106))[0])(kont9106, x9107);
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
void* const kont9109 = prim_car(lst);
void* const lst9111 = prim_cdr(lst);
void* const x9110 = apply_prim_hash(lst9111);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
}
else
{
void* const kont9109 = arg_buffer[2];
void* const x9110 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9109))[0])(kont9109, x9110);
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
void* const kont9112 = prim_car(lst);
void* const lst9114 = prim_cdr(lst);
void* const x9113 = apply_prim_hash_u45ref(lst9114);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
}
else
{
void* const kont9112 = arg_buffer[2];
void* const x9113 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9112))[0])(kont9112, x9113);
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
void* const kont9115 = prim_car(lst);
void* const lst9117 = prim_cdr(lst);
void* const x9116 = apply_prim_hash_u45set(lst9117);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
}
else
{
void* const kont9115 = arg_buffer[2];
void* const x9116 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9115))[0])(kont9115, x9116);
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
void* const kont9118 = prim_car(lst);
void* const lst9120 = prim_cdr(lst);
void* const x9119 = apply_prim_hash_u45keys(lst9120);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
}
else
{
void* const kont9118 = arg_buffer[2];
void* const x9119 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9118))[0])(kont9118, x9119);
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
void* const kont9121 = prim_car(lst);
void* const lst9123 = prim_cdr(lst);
void* const x9122 = apply_prim_hash_u45has_u45key_u63(lst9123);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
}
else
{
void* const kont9121 = arg_buffer[2];
void* const x9122 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9121))[0])(kont9121, x9122);
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
void* const kont9124 = prim_car(lst);
void* const lst9126 = prim_cdr(lst);
void* const x9125 = apply_prim_hash_u45count(lst9126);
arg_buffer[1] = kont9124;
arg_buffer[2] = x9125;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
}
else
{
void* const kont9124 = arg_buffer[2];
void* const x9125 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9124))[0])(kont9124, x9125);
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
void* const kont9127 = prim_car(lst);
void* const lst9129 = prim_cdr(lst);
void* const x9128 = apply_prim_set(lst9129);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
}
else
{
void* const kont9127 = arg_buffer[2];
void* const x9128 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9127))[0])(kont9127, x9128);
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
void* const kont9130 = prim_car(lst);
void* const lst9132 = prim_cdr(lst);
void* const x9131 = apply_prim_set_u45_u62list(lst9132);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
}
else
{
void* const kont9130 = arg_buffer[2];
void* const x9131 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9130))[0])(kont9130, x9131);
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
void* const kont9133 = prim_car(lst);
void* const lst9135 = prim_cdr(lst);
void* const x9134 = apply_prim_list_u45_u62set(lst9135);
arg_buffer[1] = kont9133;
arg_buffer[2] = x9134;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
}
else
{
void* const kont9133 = arg_buffer[2];
void* const x9134 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9133))[0])(kont9133, x9134);
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
void* const kont9136 = prim_car(lst);
void* const lst9138 = prim_cdr(lst);
void* const x9137 = apply_prim_set_u45add(lst9138);
arg_buffer[1] = kont9136;
arg_buffer[2] = x9137;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
}
else
{
void* const kont9136 = arg_buffer[2];
void* const x9137 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9136))[0])(kont9136, x9137);
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
void* const kont9139 = prim_car(lst);
void* const lst9141 = prim_cdr(lst);
void* const x9140 = apply_prim_set_u45member_u63(lst9141);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
}
else
{
void* const kont9139 = arg_buffer[2];
void* const x9140 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9139))[0])(kont9139, x9140);
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
void* const kont9142 = prim_car(lst);
void* const lst9144 = prim_cdr(lst);
void* const x9143 = apply_prim_set_u45remove(lst9144);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
}
else
{
void* const kont9142 = arg_buffer[2];
void* const x9143 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9142))[0])(kont9142, x9143);
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
void* const kont9145 = prim_car(lst);
void* const lst9147 = prim_cdr(lst);
void* const x9146 = apply_prim_set_u45count(lst9147);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
}
else
{
void* const kont9145 = arg_buffer[2];
void* const x9146 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9145))[0])(kont9145, x9146);
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
void* const kont9148 = prim_car(lst);
void* const lst9150 = prim_cdr(lst);
void* const x9149 = apply_prim_string_u63(lst9150);
arg_buffer[1] = kont9148;
arg_buffer[2] = x9149;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9148))[0])();
}
else
{
void* const kont9148 = arg_buffer[2];
void* const x9149 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9148))[0])(kont9148, x9149);
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
void* const kont9151 = prim_car(lst);
void* const lst9153 = prim_cdr(lst);
void* const x9152 = apply_prim_string_u45length(lst9153);
arg_buffer[1] = kont9151;
arg_buffer[2] = x9152;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9151))[0])();
}
else
{
void* const kont9151 = arg_buffer[2];
void* const x9152 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9151))[0])(kont9151, x9152);
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
void* const kont9154 = prim_car(lst);
void* const lst9156 = prim_cdr(lst);
void* const x9155 = apply_prim_string_u45ref(lst9156);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9154))[0])();
}
else
{
void* const kont9154 = arg_buffer[2];
void* const x9155 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9154))[0])(kont9154, x9155);
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
void* const kont9157 = prim_car(lst);
void* const lst9159 = prim_cdr(lst);
void* const x9158 = apply_prim_substring(lst9159);
arg_buffer[1] = kont9157;
arg_buffer[2] = x9158;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9157))[0])();
}
else
{
void* const kont9157 = arg_buffer[2];
void* const x9158 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9157))[0])(kont9157, x9158);
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
void* const kont9160 = prim_car(lst);
void* const lst9162 = prim_cdr(lst);
void* const x9161 = apply_prim_string_u45append(lst9162);
arg_buffer[1] = kont9160;
arg_buffer[2] = x9161;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9160))[0])();
}
else
{
void* const kont9160 = arg_buffer[2];
void* const x9161 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9160))[0])(kont9160, x9161);
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
void* const kont9163 = prim_car(lst);
void* const lst9165 = prim_cdr(lst);
void* const x9164 = apply_prim_string_u45_u62list(lst9165);
arg_buffer[1] = kont9163;
arg_buffer[2] = x9164;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9163))[0])();
}
else
{
void* const kont9163 = arg_buffer[2];
void* const x9164 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9163))[0])(kont9163, x9164);
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
void* const kont9166 = prim_car(lst);
void* const lst9168 = prim_cdr(lst);
void* const x9167 = apply_prim_exact_u45floor(lst9168);
arg_buffer[1] = kont9166;
arg_buffer[2] = x9167;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9166))[0])();
}
else
{
void* const kont9166 = arg_buffer[2];
void* const x9167 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9166))[0])(kont9166, x9167);
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
void* const kont9169 = prim_car(lst);
void* const lst9171 = prim_cdr(lst);
void* const x9170 = apply_prim_exact_u45ceiling(lst9171);
arg_buffer[1] = kont9169;
arg_buffer[2] = x9170;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9169))[0])();
}
else
{
void* const kont9169 = arg_buffer[2];
void* const x9170 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9169))[0])(kont9169, x9170);
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
void* const kont9172 = prim_car(lst);
void* const lst9174 = prim_cdr(lst);
void* const x9173 = apply_prim_exact_u45round(lst9174);
arg_buffer[1] = kont9172;
arg_buffer[2] = x9173;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9172))[0])();
}
else
{
void* const kont9172 = arg_buffer[2];
void* const x9173 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9172))[0])(kont9172, x9173);
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
void* const kont9175 = prim_car(lst);
void* const lst9177 = prim_cdr(lst);
void* const x9176 = apply_prim_abs(lst9177);
arg_buffer[1] = kont9175;
arg_buffer[2] = x9176;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9175))[0])();
}
else
{
void* const kont9175 = arg_buffer[2];
void* const x9176 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9175))[0])(kont9175, x9176);
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
void* const kont9178 = prim_car(lst);
void* const lst9180 = prim_cdr(lst);
void* const x9179 = apply_prim_max(lst9180);
arg_buffer[1] = kont9178;
arg_buffer[2] = x9179;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9178))[0])();
}
else
{
void* const kont9178 = arg_buffer[2];
void* const x9179 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9178))[0])(kont9178, x9179);
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
void* const kont9181 = prim_car(lst);
void* const lst9183 = prim_cdr(lst);
void* const x9182 = apply_prim_min(lst9183);
arg_buffer[1] = kont9181;
arg_buffer[2] = x9182;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9181))[0])();
}
else
{
void* const kont9181 = arg_buffer[2];
void* const x9182 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9181))[0])(kont9181, x9182);
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
void* const kont9184 = prim_car(lst);
void* const lst9186 = prim_cdr(lst);
void* const x9185 = apply_prim_expt(lst9186);
arg_buffer[1] = kont9184;
arg_buffer[2] = x9185;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9184))[0])();
}
else
{
void* const kont9184 = arg_buffer[2];
void* const x9185 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9184))[0])(kont9184, x9185);
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
void* const kont9187 = prim_car(lst);
void* const lst9189 = prim_cdr(lst);
void* const x9188 = apply_prim_sqrt(lst9189);
arg_buffer[1] = kont9187;
arg_buffer[2] = x9188;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9187))[0])();
}
else
{
void* const kont9187 = arg_buffer[2];
void* const x9188 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9187))[0])(kont9187, x9188);
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
void* const kont9190 = prim_car(lst);
void* const lst9192 = prim_cdr(lst);
void* const x9191 = apply_prim_remainder(lst9192);
arg_buffer[1] = kont9190;
arg_buffer[2] = x9191;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9190))[0])();
}
else
{
void* const kont9190 = arg_buffer[2];
void* const x9191 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9190))[0])(kont9190, x9191);
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
void* const kont9193 = prim_car(lst);
void* const lst9195 = prim_cdr(lst);
void* const x9194 = apply_prim_quotient(lst9195);
arg_buffer[1] = kont9193;
arg_buffer[2] = x9194;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9193))[0])();
}
else
{
void* const kont9193 = arg_buffer[2];
void* const x9194 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9193))[0])(kont9193, x9194);
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
void* const kont9196 = prim_car(lst);
void* const lst9198 = prim_cdr(lst);
void* const x9197 = apply_prim_random(lst9198);
arg_buffer[1] = kont9196;
arg_buffer[2] = x9197;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9196))[0])();
}
else
{
void* const kont9196 = arg_buffer[2];
void* const x9197 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9196))[0])(kont9196, x9197);
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
void* const kont9199 = prim_car(lst);
void* const lst9201 = prim_cdr(lst);
void* const x9200 = apply_prim_symbol_u63(lst9201);
arg_buffer[1] = kont9199;
arg_buffer[2] = x9200;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9199))[0])();
}
else
{
void* const kont9199 = arg_buffer[2];
void* const x9200 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9199))[0])(kont9199, x9200);
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
void* const kont9202 = prim_car(lst);
void* const lst9204 = prim_cdr(lst);
void* const x9203 = apply_prim_pair_u63(lst9204);
arg_buffer[1] = kont9202;
arg_buffer[2] = x9203;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9202))[0])();
}
else
{
void* const kont9202 = arg_buffer[2];
void* const x9203 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9202))[0])(kont9202, x9203);
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
void* const kont9205 = prim_car(lst);
void* const lst9207 = prim_cdr(lst);
void* const x9206 = apply_prim_positive_u63(lst9207);
arg_buffer[1] = kont9205;
arg_buffer[2] = x9206;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9205))[0])();
}
else
{
void* const kont9205 = arg_buffer[2];
void* const x9206 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9205))[0])(kont9205, x9206);
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
void* const kont9208 = prim_car(lst);
void* const lst9210 = prim_cdr(lst);
void* const x9209 = apply_prim_negative_u63(lst9210);
arg_buffer[1] = kont9208;
arg_buffer[2] = x9209;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9208))[0])();
}
else
{
void* const kont9208 = arg_buffer[2];
void* const x9209 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9208))[0])(kont9208, x9209);
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
void* const kont9211 = prim_car(lst);
void* const lst9213 = prim_cdr(lst);
void* const x9212 = apply_prim_list(lst9213);
arg_buffer[1] = kont9211;
arg_buffer[2] = x9212;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9211))[0])();
}
else
{
void* const kont9211 = arg_buffer[2];
void* const x9212 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9211))[0])(kont9211, x9212);
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8915 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8915)[0])(kont8915, apply_prim_equal_u63_2(int9052, apply_prim_modulo_2(x, int9053)));
}

inline void even_u63_spec(void* _8963, void* kont8915, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8915)[0])(kont8915, apply_prim_equal_u63_2(int9052, apply_prim_modulo_2(x, int9053)));
}

inline void lam8964_fptr() // lam8964 -> generic version 
{
//reading env
void* const env8965 = arg_buffer[1];
//reading env and args
void* const id_8745 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t9041);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9042);
}

}

inline void lam8964_spec(void* env8965, void* id_8745) // lam8964 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t9041);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9042);
}

}

inline void boolean_u63_fptr() // boolean? -> generic version 
{
//reading env and args
void* const kont8916 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9214 = alloc_kont(lam8964_spec, 1);

//setting env list
clo9214[1] = kont8916;
void* f_lam_8917 = encode_clo(clo9214);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam8964_spec(f_lam_8917, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam8964_spec(f_lam_8917, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void boolean_u63_spec(void* _8966, void* kont8916, void* x) // boolean? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9215 = alloc_kont(lam8964_spec, 1);

//setting env list
clo9215[1] = kont8916;
void* f_lam_8917 = encode_clo(clo9215);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam8964_spec(f_lam_8917, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam8964_spec(f_lam_8917, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8918 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8918)[0])(kont8918, apply_prim_equal_u63_2(int9051, apply_prim_modulo_2(x, int9053)));
}

inline void odd_u63_spec(void* _8967, void* kont8918, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8918)[0])(kont8918, apply_prim_equal_u63_2(int9051, apply_prim_modulo_2(x, int9053)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8919 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9052, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8919)[0])(kont8919, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8919, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9051));
}

}

inline void list_u45ref_spec(void* _8968, void* kont8919, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9052, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8919)[0])(kont8919, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8919, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9051));
}

}

inline void lam8969_fptr() // lam8969 -> generic version 
{
//reading env
void* const env8970 = arg_buffer[1];
//reading env and args
void* const id_8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);

//if-clause
if(is_true(id_8760))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9042);
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

inline void lam8969_spec(void* env8970, void* id_8760) // lam8969 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);

//if-clause
if(is_true(id_8760))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9042);
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
void* const kont8920 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9216 = alloc_kont(lam8969_spec, 3);

//setting env list
clo9216[1] = kont8920;
clo9216[2] = item;
clo9216[3] = lst;
void* f_lam_8921 = encode_clo(clo9216);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8969_spec(f_lam_8921, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8969_spec(f_lam_8921, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8971, void* kont8920, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9217 = alloc_kont(lam8969_spec, 3);

//setting env list
clo9217[1] = kont8920;
clo9217[2] = item;
clo9217[3] = lst;
void* f_lam_8921 = encode_clo(clo9217);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8969_spec(f_lam_8921, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8969_spec(f_lam_8921, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8922 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8922)[0])(kont8922, bool_f9042);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8922)[0])(kont8922, bool_t9041);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8922, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8972, void* kont8922, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8922)[0])(kont8922, bool_f9042);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8922)[0])(kont8922, bool_t9041);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8922, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8973_fptr() // lam8973 -> generic version 
{
//reading env
void* const env8974 = arg_buffer[1];
//reading env and args
void* const id_8775 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8775));
}

inline void lam8973_spec(void* env8974, void* id_8775) // lam8973 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8775));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8923 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8923)[0])(kont8923, int9052);
}
else
{

//creating new make-kont closure
void** clo9218 = alloc_kont(lam8973_spec, 2);

//setting env list
clo9218[1] = int9051;
clo9218[2] = kont8923;
void* f_lam_8924 = encode_clo(clo9218);



//clo-app
length_spec(length, f_lam_8924, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8975, void* kont8923, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8923)[0])(kont8923, int9052);
}
else
{

//creating new make-kont closure
void** clo9219 = alloc_kont(lam8973_spec, 2);

//setting env list
clo9219[1] = int9051;
clo9219[2] = kont8923;
void* f_lam_8924 = encode_clo(clo9219);



//clo-app
length_spec(length, f_lam_8924, apply_prim_cdr_1(lst));
}

}

inline void lam8976_fptr() // lam8976 -> generic version 
{
//reading env
void* const env8977 = arg_buffer[1];
//reading env and args
void* const id_8781 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8781));
}

inline void lam8976_spec(void* env8977, void* id_8781) // lam8976 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8781));
}

inline void lam8978_fptr() // lam8978 -> generic version 
{
//reading env
void* const env8979 = arg_buffer[1];
//reading env and args
void* const id_8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);

//creating new make-kont closure
void** clo9220 = alloc_kont(lam8976_spec, 2);

//setting env list
clo9220[1] = decode_clo_array[1];
clo9220[2] = id_8779;
void* f_lam_8926 = encode_clo(clo9220);



//clo-app
map_spec(map, f_lam_8926, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8978_spec(void* env8979, void* id_8779) // lam8978 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);

//creating new make-kont closure
void** clo9221 = alloc_kont(lam8976_spec, 2);

//setting env list
clo9221[1] = decode_clo_array[1];
clo9221[2] = id_8779;
void* f_lam_8926 = encode_clo(clo9221);



//clo-app
map_spec(map, f_lam_8926, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8925 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8925)[0])(kont8925, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9222 = alloc_kont(lam8978_spec, 3);

//setting env list
clo9222[1] = kont8925;
clo9222[2] = lst;
clo9222[3] = proc;
void* f_lam_8927 = encode_clo(clo9222);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8927;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8980, void* kont8925, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8925)[0])(kont8925, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9223 = alloc_kont(lam8978_spec, 3);

//setting env list
clo9223[1] = kont8925;
clo9223[2] = lst;
clo9223[3] = proc;
void* f_lam_8927 = encode_clo(clo9223);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8927;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8981_fptr() // lam8981 -> generic version 
{
//reading env
void* const env8982 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8982);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8788));
}

inline void lam8981_spec(void* env8982, void* id_8788) // lam8981 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8982);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8788));
}

inline void lam8983_fptr() // lam8983 -> generic version 
{
//reading env
void* const env8984 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//if-clause
if(is_true(id_8785))
{

//creating new make-kont closure
void** clo9224 = alloc_kont(lam8981_spec, 2);

//setting env list
clo9224[1] = apply_prim_car_1(decode_clo_array[3]);
clo9224[2] = decode_clo_array[2];
void* f_lam_8929 = encode_clo(clo9224);



//clo-app
filter_spec(filter, f_lam_8929, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[2], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void lam8983_spec(void* env8984, void* id_8785) // lam8983 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//if-clause
if(is_true(id_8785))
{

//creating new make-kont closure
void** clo9225 = alloc_kont(lam8981_spec, 2);

//setting env list
clo9225[1] = apply_prim_car_1(decode_clo_array[3]);
clo9225[2] = decode_clo_array[2];
void* f_lam_8929 = encode_clo(clo9225);



//clo-app
filter_spec(filter, f_lam_8929, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[2], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8928 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8928)[0])(kont8928, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9226 = alloc_kont(lam8983_spec, 3);

//setting env list
clo9226[1] = op;
clo9226[2] = kont8928;
clo9226[3] = lst;
void* f_lam_8930 = encode_clo(clo9226);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8930;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8985, void* kont8928, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8928)[0])(kont8928, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9227 = alloc_kont(lam8983_spec, 3);

//setting env list
clo9227[1] = op;
clo9227[2] = kont8928;
clo9227[3] = lst;
void* f_lam_8930 = encode_clo(clo9227);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8930;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8931 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9052)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8931)[0])(kont8931, lst);
}
else
{

//clo-app
drop_spec(drop, kont8931, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9051));
}

}

inline void drop_spec(void* _8986, void* kont8931, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9052)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8931)[0])(kont8931, lst);
}
else
{

//clo-app
drop_spec(drop, kont8931, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9051));
}

}

inline void lam8987_fptr() // lam8987 -> generic version 
{
//reading env
void* const env8988 = arg_buffer[1];
//reading env and args
void* const id_8797 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8988);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[2], id_8797, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8987_spec(void* env8988, void* id_8797) // lam8987 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8988);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[2], id_8797, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8932 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8932)[0])(kont8932, acc);
}
else
{

//creating new make-kont closure
void** clo9228 = alloc_kont(lam8987_spec, 3);

//setting env list
clo9228[1] = kont8932;
clo9228[2] = fun;
clo9228[3] = lst;
void* f_lam_8933 = encode_clo(clo9228);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8933;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8989, void* kont8932, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8932)[0])(kont8932, acc);
}
else
{

//creating new make-kont closure
void** clo9229 = alloc_kont(lam8987_spec, 3);

//setting env list
clo9229[1] = kont8932;
clo9229[2] = fun;
clo9229[3] = lst;
void* f_lam_8933 = encode_clo(clo9229);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8933;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8990_fptr() // lam8990 -> generic version 
{
//reading env
void* const env8991 = arg_buffer[1];
//reading env and args
void* const id_8802 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8802;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8990_spec(void* env8991, void* id_8802) // lam8990 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8802;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8934 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8934)[0])(kont8934, acc);
}
else
{

//creating new make-kont closure
void** clo9230 = alloc_kont(lam8990_spec, 3);

//setting env list
clo9230[1] = kont8934;
clo9230[2] = fun;
clo9230[3] = apply_prim_car_1(lst);
void* f_lam_8935 = encode_clo(clo9230);



//clo-app
foldr_spec(foldr, f_lam_8935, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8992, void* kont8934, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8934)[0])(kont8934, acc);
}
else
{

//creating new make-kont closure
void** clo9231 = alloc_kont(lam8990_spec, 3);

//setting env list
clo9231[1] = kont8934;
clo9231[2] = fun;
clo9231[3] = apply_prim_car_1(lst);
void* f_lam_8935 = encode_clo(clo9231);



//clo-app
foldr_spec(foldr, f_lam_8935, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8936 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8936)[0])(kont8936, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8936, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8993, void* kont8936, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8936)[0])(kont8936, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8936, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8937 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8937, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8994, void* kont8937, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8937, lst, apply_prim_list_0());
}

inline void lam8995_fptr() // lam8995 -> generic version 
{
//reading env
void* const env8996 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8811));
}

inline void lam8995_spec(void* env8996, void* id_8811) // lam8995 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8811));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8938 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8938)[0])(kont8938, rhs);
}
else
{

//creating new make-kont closure
void** clo9232 = alloc_kont(lam8995_spec, 2);

//setting env list
clo9232[1] = kont8938;
clo9232[2] = apply_prim_car_1(lhs);
void* f_lam_8939 = encode_clo(clo9232);



//clo-app
append1_spec(append1, f_lam_8939, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8997, void* kont8938, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8938)[0])(kont8938, rhs);
}
else
{

//creating new make-kont closure
void** clo9233 = alloc_kont(lam8995_spec, 2);

//setting env list
clo9233[1] = kont8938;
clo9233[2] = apply_prim_car_1(lhs);
void* f_lam_8939 = encode_clo(clo9233);



//clo-app
append1_spec(append1, f_lam_8939, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8998_fptr() // lam8998 -> generic version 
{
//reading env
void* const env8999 = arg_buffer[1];
//reading env and args
void* const xy8813 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8999);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam8998_spec(void* env8999, void* xy8813) // lam8998 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8999);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam9000_fptr() // lam9000 -> generic version 
{
//reading env
void* const env9001 = arg_buffer[1];
//reading env and args
void* const id_8816 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9001);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8816);
}

inline void lam9000_spec(void* env9001, void* id_8816) // lam9000 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9001);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8816);
}

inline void lam9002_fptr() // lam9002 -> generic version 
{
//reading env
void* const env9003 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9234 = alloc_kont(lam8998_spec, 1);

//setting env list
clo9234[1] = decode_clo_array[3];
void* f_lam_8941 = encode_clo(clo9234);



//clo-app
append1_spec(append1, f_lam_8941, decode_clo_array[1], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9235 = alloc_kont(lam9000_spec, 2);

//setting env list
clo9235[1] = apply_prim_list_0();
clo9235[2] = decode_clo_array[3];
void* f_lam_8942 = encode_clo(clo9235);



//clo-app
append1_spec(append1, f_lam_8942, apply_prim_list_2(decode_clo_array[1], decode_clo_array[2]), lsts);
}

}

inline void lam9002_spec(void* env9003, void* lsts) // lam9002 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9236 = alloc_kont(lam8998_spec, 1);

//setting env list
clo9236[1] = decode_clo_array[3];
void* f_lam_8941 = encode_clo(clo9236);



//clo-app
append1_spec(append1, f_lam_8941, decode_clo_array[1], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9237 = alloc_kont(lam9000_spec, 2);

//setting env list
clo9237[1] = apply_prim_list_0();
clo9237[2] = decode_clo_array[3];
void* f_lam_8942 = encode_clo(clo9237);



//clo-app
append1_spec(append1, f_lam_8942, apply_prim_list_2(decode_clo_array[1], decode_clo_array[2]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _9004 = arg_buffer[1];
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
void** clo9238 = alloc_kont(lam9002_spec, 3);

//setting env list
clo9238[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9238[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
clo9238[3] = apply_prim_car_1(vargs);
void* f_lam_8943 = encode_clo(clo9238);


// kont-clo-app case
lam9002_spec(f_lam_8943, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam9005_fptr() // lam9005 -> generic version 
{
//reading env
void* const env9006 = arg_buffer[1];
//reading env and args
void* const xy8819 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9006);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void lam9005_spec(void* env9006, void* xy8819) // lam9005 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9006);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8944 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9052)))
{

//creating new make-kont closure
void** clo9239 = alloc_kont(lam9005_spec, 1);

//setting env list
clo9239[1] = kont8944;
void* f_lam_8945 = encode_clo(clo9239);



//clo-app
reverse_spec(reverse, f_lam_8945, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8944, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9051), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _9007, void* kont8944, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9052)))
{

//creating new make-kont closure
void** clo9240 = alloc_kont(lam9005_spec, 1);

//setting env list
clo9240[1] = kont8944;
void* f_lam_8945 = encode_clo(clo9240);



//clo-app
reverse_spec(reverse, f_lam_8945, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8944, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9051), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8946 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8946, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _9008, void* kont8946, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8946, lst, n, apply_prim_list_0());
}

inline void lam9009_fptr() // lam9009 -> generic version 
{
//reading env
void* const env9010 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8833));
}

inline void lam9009_spec(void* env9010, void* id_8833) // lam9009 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8833));
}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8947 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9052)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8947)[0])(kont8947, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9241 = alloc_kont(lam9009_spec, 2);

//setting env list
clo9241[1] = kont8947;
clo9241[2] = apply_prim_car_1(lst);
void* f_lam_8948 = encode_clo(clo9241);



//clo-app
list_u45set_spec(list_u45set, f_lam_8948, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9051), value);
}

}

inline void list_u45set_spec(void* _9011, void* kont8947, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9052)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8947)[0])(kont8947, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9242 = alloc_kont(lam9009_spec, 2);

//setting env list
clo9242[1] = kont8947;
clo9242[2] = apply_prim_car_1(lst);
void* f_lam_8948 = encode_clo(clo9242);



//clo-app
list_u45set_spec(list_u45set, f_lam_8948, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9051), value);
}

}

inline void lam9012_fptr() // lam9012 -> generic version 
{
//reading env
void* const env9013 = arg_buffer[1];
//reading env and args
void* const id_8840 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9013);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
append_fptr();
}

inline void lam9012_spec(void* env9013, void* id_8840) // lam9012 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9013);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
append_fptr();
}

inline void lam9014_fptr() // lam9014 -> generic version 
{
//reading env
void* const env9015 = arg_buffer[1];
//reading env and args
void* const id_8838 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9015);

//creating new make-kont closure
void** clo9243 = alloc_kont(lam9012_spec, 2);

//setting env list
clo9243[1] = id_8838;
clo9243[2] = decode_clo_array[1];
void* f_lam_8950 = encode_clo(clo9243);



//clo-app
flatten_spec(flatten, f_lam_8950, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam9014_spec(void* env9015, void* id_8838) // lam9014 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9015);

//creating new make-kont closure
void** clo9244 = alloc_kont(lam9012_spec, 2);

//setting env list
clo9244[1] = id_8838;
clo9244[2] = decode_clo_array[1];
void* f_lam_8950 = encode_clo(clo9244);



//clo-app
flatten_spec(flatten, f_lam_8950, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8949 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8949)[0])(kont8949, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9245 = alloc_kont(lam9014_spec, 2);

//setting env list
clo9245[1] = kont8949;
clo9245[2] = lst;
void* f_lam_8951 = encode_clo(clo9245);



//clo-app
flatten_spec(flatten, f_lam_8951, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8949)[0])(kont8949, apply_prim_list_1(lst));
}

}

}

inline void flatten_spec(void* _9016, void* kont8949, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8949)[0])(kont8949, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9246 = alloc_kont(lam9014_spec, 2);

//setting env list
clo9246[1] = kont8949;
clo9246[2] = lst;
void* f_lam_8951 = encode_clo(clo9246);



//clo-app
flatten_spec(flatten, f_lam_8951, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8949)[0])(kont8949, apply_prim_list_1(lst));
}

}

}

inline void lam9017_fptr() // lam9017 -> generic version 
{
//reading env
void* const env9018 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9018);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8846));
}

inline void lam9017_spec(void* env9018, void* id_8846) // lam9017 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9018);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8846));
}

inline void interval_u45list_fptr() // interval-list -> generic version 
{
//reading env and args
void* const kont8952 = arg_buffer[2];
void* const m = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u62_2(m, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8952)[0])(kont8952, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9247 = alloc_kont(lam9017_spec, 2);

//setting env list
clo9247[1] = kont8952;
clo9247[2] = m;
void* f_lam_8953 = encode_clo(clo9247);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8953, apply_prim__u43_2(int9051, m), n);
}

}

inline void interval_u45list_spec(void* _9019, void* kont8952, void* m, void* n) // interval-list 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u62_2(m, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8952)[0])(kont8952, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9248 = alloc_kont(lam9017_spec, 2);

//setting env list
clo9248[1] = kont8952;
clo9248[2] = m;
void* f_lam_8953 = encode_clo(clo9248);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8953, apply_prim__u43_2(int9051, m), n);
}

}

inline void lam9020_fptr() // lam9020 -> generic version 
{
//reading env
void* const env9021 = arg_buffer[1];
//reading env and args
void* const id_8856 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9021);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8856));
}

inline void lam9020_spec(void* env9021, void* id_8856) // lam9020 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9021);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8856));
}

inline void remove_u45multiples_fptr() // remove-multiples -> generic version 
{
//reading env and args
void* const kont8954 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8954)[0])(kont8954, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim__u61_2(apply_prim_remainder_2(apply_prim_car_1(l), n), int9052)))
{

//clo-app
remove_u45multiples_spec(remove_u45multiples, kont8954, n, apply_prim_cdr_1(l));
}
else
{

//creating new make-kont closure
void** clo9249 = alloc_kont(lam9020_spec, 2);

//setting env list
clo9249[1] = apply_prim_car_1(l);
clo9249[2] = kont8954;
void* f_lam_8955 = encode_clo(clo9249);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8955, n, apply_prim_cdr_1(l));
}

}

}

inline void remove_u45multiples_spec(void* _9022, void* kont8954, void* n, void* l) // remove-multiples 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8954)[0])(kont8954, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim__u61_2(apply_prim_remainder_2(apply_prim_car_1(l), n), int9052)))
{

//clo-app
remove_u45multiples_spec(remove_u45multiples, kont8954, n, apply_prim_cdr_1(l));
}
else
{

//creating new make-kont closure
void** clo9250 = alloc_kont(lam9020_spec, 2);

//setting env list
clo9250[1] = apply_prim_car_1(l);
clo9250[2] = kont8954;
void* f_lam_8955 = encode_clo(clo9250);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8955, n, apply_prim_cdr_1(l));
}

}

}

inline void lam9023_fptr() // lam9023 -> generic version 
{
//reading env
void* const env9024 = arg_buffer[1];
//reading env and args
void* const id_8863 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9024);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8863));
}

inline void lam9023_spec(void* env9024, void* id_8863) // lam9023 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9024);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8863));
}

inline void lam9025_fptr() // lam9025 -> generic version 
{
//reading env
void* const env9026 = arg_buffer[1];
//reading env and args
void* const id_8862 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9026);

//creating new make-kont closure
void** clo9251 = alloc_kont(lam9023_spec, 2);

//setting env list
clo9251[1] = decode_clo_array[1];
clo9251[2] = decode_clo_array[2];
void* f_lam_8957 = encode_clo(clo9251);



//clo-app
sieve_spec(sieve, f_lam_8957, id_8862);
}

inline void lam9025_spec(void* env9026, void* id_8862) // lam9025 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9026);

//creating new make-kont closure
void** clo9252 = alloc_kont(lam9023_spec, 2);

//setting env list
clo9252[1] = decode_clo_array[1];
clo9252[2] = decode_clo_array[2];
void* f_lam_8957 = encode_clo(clo9252);



//clo-app
sieve_spec(sieve, f_lam_8957, id_8862);
}

inline void sieve_fptr() // sieve -> generic version 
{
//reading env and args
void* const kont8956 = arg_buffer[2];
void* const l = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8956)[0])(kont8956, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9253 = alloc_kont(lam9025_spec, 2);

//setting env list
clo9253[1] = kont8956;
clo9253[2] = apply_prim_car_1(l);
void* f_lam_8958 = encode_clo(clo9253);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8958, apply_prim_car_1(l), apply_prim_cdr_1(l));
}

}

inline void sieve_spec(void* _9027, void* kont8956, void* l) // sieve 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(l)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8956)[0])(kont8956, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9254 = alloc_kont(lam9025_spec, 2);

//setting env list
clo9254[1] = kont8956;
clo9254[2] = apply_prim_car_1(l);
void* f_lam_8958 = encode_clo(clo9254);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8958, apply_prim_car_1(l), apply_prim_cdr_1(l));
}

}

inline void lam9028_fptr() // lam9028 -> generic version 
{
//reading env
void* const env9029 = arg_buffer[1];
//reading env and args
void* const id_8865 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9029);

//clo-app
sieve_spec(sieve, decode_clo_array[1], id_8865);
}

inline void lam9028_spec(void* env9029, void* id_8865) // lam9028 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9029);

//clo-app
sieve_spec(sieve, decode_clo_array[1], id_8865);
}

inline void primes_u60_u61_fptr() // primes<= -> generic version 
{
//reading env and args
void* const kont8959 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9255 = alloc_kont(lam9028_spec, 1);

//setting env list
clo9255[1] = kont8959;
void* f_lam_8960 = encode_clo(clo9255);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8960, int9053, n);
}

inline void primes_u60_u61_spec(void* _9030, void* kont8959, void* n) // primes<= 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9256 = alloc_kont(lam9028_spec, 1);

//setting env list
clo9256[1] = kont8959;
void* f_lam_8960 = encode_clo(clo9256);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8960, int9053, n);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8961 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
primes_u60_u61_spec(primes_u60_u61, kont8961, int9054);
}

inline void brouhaha_main_spec(void* _9031, void* kont8961) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
primes_u60_u61_spec(primes_u60_u61, kont8961, int9054);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9052 = reinterpret_cast<void *>(encode_int(0));
bool_t9041 = encode_bool(true);
int9054 = reinterpret_cast<void *>(encode_int(150000));
int9051 = reinterpret_cast<void *>(encode_int(1));
bool_f9042 = encode_bool(false);
int9053 = reinterpret_cast<void *>(encode_int(2));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

