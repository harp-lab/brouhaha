#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8993;
void* bool_t8988;
void* int8992;
void* bool_f8986;
void* int8972;
void* int8994;



// declaring global integer variable
int int8995;
int int8996;
int int8997;
int int8998;
int int8999;

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
void even_u63_spec(void* _8905, void* kont8861, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8906, void* kont8862, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8907, void* kont8863, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8908_fptr(); // lam8908
void lam8908_spec(void* env8909, void* id_8734); // lam8908
void* lam8908 = encode_clo(alloc_clo(lam8908_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8910, void* kont8864, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8911, void* kont8866, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8912_fptr(); // lam8912
void lam8912_spec(void* env8913, void* id_8749); // lam8912
void* lam8912 = encode_clo(alloc_clo(lam8912_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8914, void* kont8867, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8915_fptr(); // lam8915
void lam8915_spec(void* env8916, void* id_8755); // lam8915
void* lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void lam8917_fptr(); // lam8917
void lam8917_spec(void* env8918, void* id_8753); // lam8917
void* lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8919, void* kont8869, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8920_fptr(); // lam8920
void lam8920_spec(void* env8921, void* id_8762); // lam8920
void* lam8920 = encode_clo(alloc_clo(lam8920_fptr, 0));

void lam8922_fptr(); // lam8922
void lam8922_spec(void* env8923, void* id_8759); // lam8922
void* lam8922 = encode_clo(alloc_clo(lam8922_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8924, void* kont8872, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8925, void* kont8875, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8926_fptr(); // lam8926
void lam8926_spec(void* env8927, void* id_8771); // lam8926
void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8928, void* kont8876, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8929_fptr(); // lam8929
void lam8929_spec(void* env8930, void* id_8776); // lam8929
void* lam8929 = encode_clo(alloc_clo(lam8929_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8931, void* kont8878, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8932, void* kont8880, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8933, void* kont8881, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8934_fptr(); // lam8934
void lam8934_spec(void* env8935, void* id_8785); // lam8934
void* lam8934 = encode_clo(alloc_clo(lam8934_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8936, void* kont8882, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8937_fptr(); // lam8937
void lam8937_spec(void* env8938, void* id_8792); // lam8937
void* lam8937 = encode_clo(alloc_clo(lam8937_fptr, 0));

void lam8939_fptr(); // lam8939
void lam8939_spec(void* env8940, void* id_8787); // lam8939
void* lam8939 = encode_clo(alloc_clo(lam8939_fptr, 0));

void lam8941_fptr(); // lam8941
void lam8941_spec(void* env8942, void* x); // lam8941
void* lam8941 = encode_clo(alloc_clo(lam8941_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8944_fptr(); // lam8944
void lam8944_spec(void* env8945, void* xy8795); // lam8944
void* lam8944 = encode_clo(alloc_clo(lam8944_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8946, void* kont8888, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8947, void* kont8890, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8948_fptr(); // lam8948
void lam8948_spec(void* env8949, void* id_8815); // lam8948
void* lam8948 = encode_clo(alloc_clo(lam8948_fptr, 0));

void lam8950_fptr(); // lam8950
void lam8950_spec(void* env8951, void* id_8809); // lam8950
void* lam8950 = encode_clo(alloc_clo(lam8950_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void* _8952, void* kont8891, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8953_fptr(); // lam8953
void lam8953_spec(void* env8954, void* id_8839); // lam8953
void* lam8953 = encode_clo(alloc_clo(lam8953_fptr, 0));

void lam8955_fptr(); // lam8955
void lam8955_spec(void* env8956, void* id_8846); // lam8955
void* lam8955 = encode_clo(alloc_clo(lam8955_fptr, 0));

void lam8957_fptr(); // lam8957
void lam8957_spec(void* env8958, void* id_8837); // lam8957
void* lam8957 = encode_clo(alloc_clo(lam8957_fptr, 0));

void lam8959_fptr(); // lam8959
void lam8959_spec(void* env8960, void* z); // lam8959
void* lam8959 = encode_clo(alloc_clo(lam8959_fptr, 0));

void lam8961_fptr(); // lam8961
void lam8961_spec(void* env8962, void* y); // lam8961
void* lam8961 = encode_clo(alloc_clo(lam8961_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void* _8963, void* kont8894, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void iota1_spec(void* _8964, void* kont8900, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8965_fptr(); // lam8965
void lam8965_spec(void* env8966, void* id_8854); // lam8965
void* lam8965 = encode_clo(alloc_clo(lam8965_fptr, 0));

void nqueens_fptr(); // nqueens
void nqueens_spec(void* _8967, void* kont8901, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8968, void* kont8903); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9000 = prim_car(lst);
void* const lst9002 = prim_cdr(lst);
void* const x9001 = apply_prim__u43(lst9002);
arg_buffer[1] = kont9000;
arg_buffer[2] = x9001;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9000))[0])();
}
else
{
void* const kont9000 = arg_buffer[2];
void* const x9001 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont9000;
arg_buffer[2] = x9001;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9000))[0])();
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
void* const kont9003 = prim_car(lst);
void* const lst9005 = prim_cdr(lst);
void* const x9004 = apply_prim__u45(lst9005);
arg_buffer[1] = kont9003;
arg_buffer[2] = x9004;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9003))[0])();
}
else
{
void* const kont9003 = arg_buffer[2];
void* const x9004 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9003;
arg_buffer[2] = x9004;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9003))[0])();
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
void* const kont9006 = prim_car(lst);
void* const lst9008 = prim_cdr(lst);
void* const x9007 = apply_prim__u42(lst9008);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9006))[0])();
}
else
{
void* const kont9006 = arg_buffer[2];
void* const x9007 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9006))[0])();
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
void* const kont9009 = prim_car(lst);
void* const lst9011 = prim_cdr(lst);
void* const x9010 = apply_prim__u47(lst9011);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
}
else
{
void* const kont9009 = arg_buffer[2];
void* const x9010 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
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
void* const kont9012 = prim_car(lst);
void* const lst9014 = prim_cdr(lst);
void* const x9013 = apply_prim__u61(lst9014);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
}
else
{
void* const kont9012 = arg_buffer[2];
void* const x9013 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
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
void* const kont9015 = prim_car(lst);
void* const lst9017 = prim_cdr(lst);
void* const x9016 = apply_prim__u62(lst9017);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
}
else
{
void* const kont9015 = arg_buffer[2];
void* const x9016 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
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
void* const kont9018 = prim_car(lst);
void* const lst9020 = prim_cdr(lst);
void* const x9019 = apply_prim__u60(lst9020);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
}
else
{
void* const kont9018 = arg_buffer[2];
void* const x9019 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
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
void* const kont9021 = prim_car(lst);
void* const lst9023 = prim_cdr(lst);
void* const x9022 = apply_prim__u60_u61(lst9023);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
}
else
{
void* const kont9021 = arg_buffer[2];
void* const x9022 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
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
void* const kont9024 = prim_car(lst);
void* const lst9026 = prim_cdr(lst);
void* const x9025 = apply_prim__u62_u61(lst9026);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
}
else
{
void* const kont9024 = arg_buffer[2];
void* const x9025 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
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
void* const kont9027 = prim_car(lst);
void* const lst9029 = prim_cdr(lst);
void* const x9028 = apply_prim_modulo(lst9029);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
}
else
{
void* const kont9027 = arg_buffer[2];
void* const x9028 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
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
void* const kont9030 = prim_car(lst);
void* const lst9032 = prim_cdr(lst);
void* const x9031 = apply_prim_null_u63(lst9032);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
}
else
{
void* const kont9030 = arg_buffer[2];
void* const x9031 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
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
void* const kont9033 = prim_car(lst);
void* const lst9035 = prim_cdr(lst);
void* const x9034 = apply_prim_equal_u63(lst9035);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
}
else
{
void* const kont9033 = arg_buffer[2];
void* const x9034 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
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
void* const kont9036 = prim_car(lst);
void* const lst9038 = prim_cdr(lst);
void* const x9037 = apply_prim_eq_u63(lst9038);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
}
else
{
void* const kont9036 = arg_buffer[2];
void* const x9037 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
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
void* const kont9039 = prim_car(lst);
void* const lst9041 = prim_cdr(lst);
void* const x9040 = apply_prim_cons(lst9041);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
}
else
{
void* const kont9039 = arg_buffer[2];
void* const x9040 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
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
void* const kont9042 = prim_car(lst);
void* const lst9044 = prim_cdr(lst);
void* const x9043 = apply_prim_car(lst9044);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
}
else
{
void* const kont9042 = arg_buffer[2];
void* const x9043 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
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
void* const kont9045 = prim_car(lst);
void* const lst9047 = prim_cdr(lst);
void* const x9046 = apply_prim_cdr(lst9047);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
}
else
{
void* const kont9045 = arg_buffer[2];
void* const x9046 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
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
void* const kont9048 = prim_car(lst);
void* const lst9050 = prim_cdr(lst);
void* const x9049 = apply_prim_float_u45_u62int(lst9050);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
}
else
{
void* const kont9048 = arg_buffer[2];
void* const x9049 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
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
void* const kont9051 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9052 = apply_prim_int_u45_u62float(lst9053);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
}
else
{
void* const kont9051 = arg_buffer[2];
void* const x9052 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
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
void* const kont9054 = prim_car(lst);
void* const lst9056 = prim_cdr(lst);
void* const x9055 = apply_prim_hash(lst9056);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
}
else
{
void* const kont9054 = arg_buffer[2];
void* const x9055 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
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
void* const kont9057 = prim_car(lst);
void* const lst9059 = prim_cdr(lst);
void* const x9058 = apply_prim_hash_u45ref(lst9059);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
}
else
{
void* const kont9057 = arg_buffer[2];
void* const x9058 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
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
void* const kont9060 = prim_car(lst);
void* const lst9062 = prim_cdr(lst);
void* const x9061 = apply_prim_hash_u45set(lst9062);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
}
else
{
void* const kont9060 = arg_buffer[2];
void* const x9061 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
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
void* const kont9063 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9064 = apply_prim_hash_u45keys(lst9065);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
}
else
{
void* const kont9063 = arg_buffer[2];
void* const x9064 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
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
void* const kont9066 = prim_car(lst);
void* const lst9068 = prim_cdr(lst);
void* const x9067 = apply_prim_hash_u45has_u45key_u63(lst9068);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
}
else
{
void* const kont9066 = arg_buffer[2];
void* const x9067 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
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
void* const kont9069 = prim_car(lst);
void* const lst9071 = prim_cdr(lst);
void* const x9070 = apply_prim_hash_u45count(lst9071);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
}
else
{
void* const kont9069 = arg_buffer[2];
void* const x9070 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
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
void* const kont9072 = prim_car(lst);
void* const lst9074 = prim_cdr(lst);
void* const x9073 = apply_prim_set(lst9074);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
}
else
{
void* const kont9072 = arg_buffer[2];
void* const x9073 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
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
void* const kont9075 = prim_car(lst);
void* const lst9077 = prim_cdr(lst);
void* const x9076 = apply_prim_set_u45_u62list(lst9077);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
}
else
{
void* const kont9075 = arg_buffer[2];
void* const x9076 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
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
void* const kont9078 = prim_car(lst);
void* const lst9080 = prim_cdr(lst);
void* const x9079 = apply_prim_list_u45_u62set(lst9080);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
}
else
{
void* const kont9078 = arg_buffer[2];
void* const x9079 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
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
void* const kont9081 = prim_car(lst);
void* const lst9083 = prim_cdr(lst);
void* const x9082 = apply_prim_set_u45add(lst9083);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
}
else
{
void* const kont9081 = arg_buffer[2];
void* const x9082 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
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
void* const kont9084 = prim_car(lst);
void* const lst9086 = prim_cdr(lst);
void* const x9085 = apply_prim_set_u45member_u63(lst9086);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
}
else
{
void* const kont9084 = arg_buffer[2];
void* const x9085 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
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
void* const kont9087 = prim_car(lst);
void* const lst9089 = prim_cdr(lst);
void* const x9088 = apply_prim_set_u45remove(lst9089);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
}
else
{
void* const kont9087 = arg_buffer[2];
void* const x9088 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
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
void* const kont9090 = prim_car(lst);
void* const lst9092 = prim_cdr(lst);
void* const x9091 = apply_prim_set_u45count(lst9092);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
}
else
{
void* const kont9090 = arg_buffer[2];
void* const x9091 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
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
void* const kont9093 = prim_car(lst);
void* const lst9095 = prim_cdr(lst);
void* const x9094 = apply_prim_string_u63(lst9095);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
}
else
{
void* const kont9093 = arg_buffer[2];
void* const x9094 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
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
void* const kont9096 = prim_car(lst);
void* const lst9098 = prim_cdr(lst);
void* const x9097 = apply_prim_string_u45length(lst9098);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
}
else
{
void* const kont9096 = arg_buffer[2];
void* const x9097 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
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
void* const kont9099 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9100 = apply_prim_string_u45ref(lst9101);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
}
else
{
void* const kont9099 = arg_buffer[2];
void* const x9100 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
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
void* const kont9102 = prim_car(lst);
void* const lst9104 = prim_cdr(lst);
void* const x9103 = apply_prim_substring(lst9104);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
}
else
{
void* const kont9102 = arg_buffer[2];
void* const x9103 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
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
void* const kont9105 = prim_car(lst);
void* const lst9107 = prim_cdr(lst);
void* const x9106 = apply_prim_string_u45append(lst9107);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
}
else
{
void* const kont9105 = arg_buffer[2];
void* const x9106 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
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
void* const kont9108 = prim_car(lst);
void* const lst9110 = prim_cdr(lst);
void* const x9109 = apply_prim_string_u45_u62list(lst9110);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
}
else
{
void* const kont9108 = arg_buffer[2];
void* const x9109 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
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
void* const kont9111 = prim_car(lst);
void* const lst9113 = prim_cdr(lst);
void* const x9112 = apply_prim_exact_u45floor(lst9113);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
}
else
{
void* const kont9111 = arg_buffer[2];
void* const x9112 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
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
void* const kont9114 = prim_car(lst);
void* const lst9116 = prim_cdr(lst);
void* const x9115 = apply_prim_exact_u45ceiling(lst9116);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
}
else
{
void* const kont9114 = arg_buffer[2];
void* const x9115 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
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
void* const kont9117 = prim_car(lst);
void* const lst9119 = prim_cdr(lst);
void* const x9118 = apply_prim_exact_u45round(lst9119);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
}
else
{
void* const kont9117 = arg_buffer[2];
void* const x9118 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
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
void* const kont9120 = prim_car(lst);
void* const lst9122 = prim_cdr(lst);
void* const x9121 = apply_prim_abs(lst9122);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
}
else
{
void* const kont9120 = arg_buffer[2];
void* const x9121 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
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
void* const kont9123 = prim_car(lst);
void* const lst9125 = prim_cdr(lst);
void* const x9124 = apply_prim_max(lst9125);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
}
else
{
void* const kont9123 = arg_buffer[2];
void* const x9124 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
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
void* const kont9126 = prim_car(lst);
void* const lst9128 = prim_cdr(lst);
void* const x9127 = apply_prim_min(lst9128);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
}
else
{
void* const kont9126 = arg_buffer[2];
void* const x9127 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
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
void* const kont9129 = prim_car(lst);
void* const lst9131 = prim_cdr(lst);
void* const x9130 = apply_prim_expt(lst9131);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
}
else
{
void* const kont9129 = arg_buffer[2];
void* const x9130 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
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
void* const kont9132 = prim_car(lst);
void* const lst9134 = prim_cdr(lst);
void* const x9133 = apply_prim_sqrt(lst9134);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
}
else
{
void* const kont9132 = arg_buffer[2];
void* const x9133 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
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
void* const kont9135 = prim_car(lst);
void* const lst9137 = prim_cdr(lst);
void* const x9136 = apply_prim_remainder(lst9137);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
}
else
{
void* const kont9135 = arg_buffer[2];
void* const x9136 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
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
void* const kont9138 = prim_car(lst);
void* const lst9140 = prim_cdr(lst);
void* const x9139 = apply_prim_quotient(lst9140);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
}
else
{
void* const kont9138 = arg_buffer[2];
void* const x9139 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
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
void* const kont9141 = prim_car(lst);
void* const lst9143 = prim_cdr(lst);
void* const x9142 = apply_prim_random(lst9143);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
}
else
{
void* const kont9141 = arg_buffer[2];
void* const x9142 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
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
void* const kont9144 = prim_car(lst);
void* const lst9146 = prim_cdr(lst);
void* const x9145 = apply_prim_symbol_u63(lst9146);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
}
else
{
void* const kont9144 = arg_buffer[2];
void* const x9145 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
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
void* const kont9147 = prim_car(lst);
void* const lst9149 = prim_cdr(lst);
void* const x9148 = apply_prim_pair_u63(lst9149);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
}
else
{
void* const kont9147 = arg_buffer[2];
void* const x9148 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
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
void* const kont9150 = prim_car(lst);
void* const lst9152 = prim_cdr(lst);
void* const x9151 = apply_prim_positive_u63(lst9152);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
}
else
{
void* const kont9150 = arg_buffer[2];
void* const x9151 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
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
void* const kont9153 = prim_car(lst);
void* const lst9155 = prim_cdr(lst);
void* const x9154 = apply_prim_negative_u63(lst9155);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
}
else
{
void* const kont9153 = arg_buffer[2];
void* const x9154 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
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
void* const kont9156 = prim_car(lst);
void* const lst9158 = prim_cdr(lst);
void* const x9157 = apply_prim_list(lst9158);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
}
else
{
void* const kont9156 = arg_buffer[2];
void* const x9157 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8861 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int8993, apply_prim_modulo_2(x, int8972));
arg_buffer[1] = kont8861;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
}

inline void even_u63_spec(void* _8905, void* kont8861, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int8993, apply_prim_modulo_2(x, int8972));
arg_buffer[1] = kont8861;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8862 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int8992, apply_prim_modulo_2(x, int8972));
arg_buffer[1] = kont8862;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8862))[0])();
}

inline void odd_u63_spec(void* _8906, void* kont8862, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int8992, apply_prim_modulo_2(x, int8972));
arg_buffer[1] = kont8862;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8862))[0])();
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8863 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8993, n)))
{

//clo-app
arg_buffer[1] = kont8863;
arg_buffer[2] = apply_prim_car_1(lst);
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8863))[0])();
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8863, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8992));
}

}

inline void list_u45ref_spec(void* _8907, void* kont8863, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8993, n)))
{

//clo-app
arg_buffer[1] = kont8863;
arg_buffer[2] = apply_prim_car_1(lst);
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8863))[0])();
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8863, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8992));
}

}

inline void lam8908_fptr() // lam8908 -> generic version 
{
//reading env
void* const env8909 = arg_buffer[1];
//reading env and args
void* const id_8734 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8909);

//if-clause
if(is_true(id_8734))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void lam8908_spec(void* env8909, void* id_8734) // lam8908 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8909);

//if-clause
if(is_true(id_8734))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
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
void* const kont8864 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9159 = alloc_clo(lam8908_fptr, 3);

//setting env list
clo9159[1] = kont8864;
clo9159[2] = item;
clo9159[3] = lst;
void* f_lam_8865 = encode_clo(clo9159);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{

//clo-app
lam8908_spec(f_lam_8865, apply_prim_null_u63_1(item));
}
else
{

//clo-app
lam8908_spec(f_lam_8865, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8910, void* kont8864, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9160 = alloc_clo(lam8908_fptr, 3);

//setting env list
clo9160[1] = kont8864;
clo9160[2] = item;
clo9160[3] = lst;
void* f_lam_8865 = encode_clo(clo9160);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{

//clo-app
lam8908_spec(f_lam_8865, apply_prim_null_u63_1(item));
}
else
{

//clo-app
lam8908_spec(f_lam_8865, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8866 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8866;
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8866))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{

//clo-app
arg_buffer[1] = kont8866;
arg_buffer[2] = bool_t8988;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8866))[0])();
}
else
{

//clo-app
member_u63_spec(member_u63, kont8866, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8911, void* kont8866, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8866;
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8866))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{

//clo-app
arg_buffer[1] = kont8866;
arg_buffer[2] = bool_t8988;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8866))[0])();
}
else
{

//clo-app
member_u63_spec(member_u63, kont8866, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8912_fptr() // lam8912 -> generic version 
{
//reading env
void* const env8913 = arg_buffer[1];
//reading env and args
void* const id_8749 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8913);

//clo-app
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[1], id_8749);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8912_spec(void* env8913, void* id_8749) // lam8912 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8913);

//clo-app
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[1], id_8749);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8867 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8867;
arg_buffer[2] = int8993;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8867))[0])();
}
else
{

//creating new closure instance
void** clo9161 = alloc_clo(lam8912_fptr, 2);

//setting env list
clo9161[1] = int8992;
clo9161[2] = kont8867;
void* f_lam_8868 = encode_clo(clo9161);



//clo-app
length_spec(length, f_lam_8868, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8914, void* kont8867, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8867;
arg_buffer[2] = int8993;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8867))[0])();
}
else
{

//creating new closure instance
void** clo9162 = alloc_clo(lam8912_fptr, 2);

//setting env list
clo9162[1] = int8992;
clo9162[2] = kont8867;
void* f_lam_8868 = encode_clo(clo9162);



//clo-app
length_spec(length, f_lam_8868, apply_prim_cdr_1(lst));
}

}

inline void lam8915_fptr() // lam8915 -> generic version 
{
//reading env
void* const env8916 = arg_buffer[1];
//reading env and args
void* const id_8755 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8916);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8755);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8915_spec(void* env8916, void* id_8755) // lam8915 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8916);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8755);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8917_fptr() // lam8917 -> generic version 
{
//reading env
void* const env8918 = arg_buffer[1];
//reading env and args
void* const id_8753 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);

//creating new closure instance
void** clo9163 = alloc_clo(lam8915_fptr, 2);

//setting env list
clo9163[1] = id_8753;
clo9163[2] = decode_clo_array[3];
void* f_lam_8870 = encode_clo(clo9163);



//clo-app
map_spec(map, f_lam_8870, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8917_spec(void* env8918, void* id_8753) // lam8917 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);

//creating new closure instance
void** clo9164 = alloc_clo(lam8915_fptr, 2);

//setting env list
clo9164[1] = id_8753;
clo9164[2] = decode_clo_array[3];
void* f_lam_8870 = encode_clo(clo9164);



//clo-app
map_spec(map, f_lam_8870, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8869 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8869;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8869))[0])();
}
else
{

//creating new closure instance
void** clo9165 = alloc_clo(lam8917_fptr, 3);

//setting env list
clo9165[1] = proc;
clo9165[2] = lst;
clo9165[3] = kont8869;
void* f_lam_8871 = encode_clo(clo9165);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8871;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8997;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8919, void* kont8869, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8869;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8869))[0])();
}
else
{

//creating new closure instance
void** clo9166 = alloc_clo(lam8917_fptr, 3);

//setting env list
clo9166[1] = proc;
clo9166[2] = lst;
clo9166[3] = kont8869;
void* f_lam_8871 = encode_clo(clo9166);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8871;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8997;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8920_fptr() // lam8920 -> generic version 
{
//reading env
void* const env8921 = arg_buffer[1];
//reading env and args
void* const id_8762 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8921);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8762);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8920_spec(void* env8921, void* id_8762) // lam8920 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8921);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8762);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8922_fptr() // lam8922 -> generic version 
{
//reading env
void* const env8923 = arg_buffer[1];
//reading env and args
void* const id_8759 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8923);

//if-clause
if(is_true(id_8759))
{

//creating new closure instance
void** clo9167 = alloc_clo(lam8920_fptr, 2);

//setting env list
clo9167[1] = apply_prim_car_1(decode_clo_array[3]);
clo9167[2] = decode_clo_array[2];
void* f_lam_8873 = encode_clo(clo9167);



//clo-app
filter_spec(filter, f_lam_8873, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[2], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void lam8922_spec(void* env8923, void* id_8759) // lam8922 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8923);

//if-clause
if(is_true(id_8759))
{

//creating new closure instance
void** clo9168 = alloc_clo(lam8920_fptr, 2);

//setting env list
clo9168[1] = apply_prim_car_1(decode_clo_array[3]);
clo9168[2] = decode_clo_array[2];
void* f_lam_8873 = encode_clo(clo9168);



//clo-app
filter_spec(filter, f_lam_8873, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
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
void* const kont8872 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8872;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8872))[0])();
}
else
{

//creating new closure instance
void** clo9169 = alloc_clo(lam8922_fptr, 3);

//setting env list
clo9169[1] = op;
clo9169[2] = kont8872;
clo9169[3] = lst;
void* f_lam_8874 = encode_clo(clo9169);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8874;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8997;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8924, void* kont8872, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8872;
arg_buffer[2] = apply_prim_list_0();
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8872))[0])();
}
else
{

//creating new closure instance
void** clo9170 = alloc_clo(lam8922_fptr, 3);

//setting env list
clo9170[1] = op;
clo9170[2] = kont8872;
clo9170[3] = lst;
void* f_lam_8874 = encode_clo(clo9170);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8874;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int8997;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8875 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8993)))
{

//clo-app
arg_buffer[1] = kont8875;
arg_buffer[2] = lst;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8875))[0])();
}
else
{

//clo-app
drop_spec(drop, kont8875, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8992));
}

}

inline void drop_spec(void* _8925, void* kont8875, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8993)))
{

//clo-app
arg_buffer[1] = kont8875;
arg_buffer[2] = lst;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8875))[0])();
}
else
{

//clo-app
drop_spec(drop, kont8875, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8992));
}

}

inline void lam8926_fptr() // lam8926 -> generic version 
{
//reading env
void* const env8927 = arg_buffer[1];
//reading env and args
void* const id_8771 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8771, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8926_spec(void* env8927, void* id_8771) // lam8926 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8771, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8876 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8876;
arg_buffer[2] = acc;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8876))[0])();
}
else
{

//creating new closure instance
void** clo9171 = alloc_clo(lam8926_fptr, 3);

//setting env list
clo9171[1] = fun;
clo9171[2] = kont8876;
clo9171[3] = lst;
void* f_lam_8877 = encode_clo(clo9171);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8877;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int8998;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8928, void* kont8876, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8876;
arg_buffer[2] = acc;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8876))[0])();
}
else
{

//creating new closure instance
void** clo9172 = alloc_clo(lam8926_fptr, 3);

//setting env list
clo9172[1] = fun;
clo9172[2] = kont8876;
clo9172[3] = lst;
void* f_lam_8877 = encode_clo(clo9172);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8877;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int8998;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8929_fptr() // lam8929 -> generic version 
{
//reading env
void* const env8930 = arg_buffer[1];
//reading env and args
void* const id_8776 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8930);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8776;
numArgs = int8998;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8929_spec(void* env8930, void* id_8776) // lam8929 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8930);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8776;
numArgs = int8998;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8878 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8878;
arg_buffer[2] = acc;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8878))[0])();
}
else
{

//creating new closure instance
void** clo9173 = alloc_clo(lam8929_fptr, 3);

//setting env list
clo9173[1] = kont8878;
clo9173[2] = fun;
clo9173[3] = apply_prim_car_1(lst);
void* f_lam_8879 = encode_clo(clo9173);



//clo-app
foldr_spec(foldr, f_lam_8879, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8931, void* kont8878, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8878;
arg_buffer[2] = acc;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8878))[0])();
}
else
{

//creating new closure instance
void** clo9174 = alloc_clo(lam8929_fptr, 3);

//setting env list
clo9174[1] = kont8878;
clo9174[2] = fun;
clo9174[3] = apply_prim_car_1(lst);
void* f_lam_8879 = encode_clo(clo9174);



//clo-app
foldr_spec(foldr, f_lam_8879, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8880 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8880;
arg_buffer[2] = lst2;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8880))[0])();
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8880, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8932, void* kont8880, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8880;
arg_buffer[2] = lst2;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8880))[0])();
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8880, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8881 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8881, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8933, void* kont8881, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8881, lst, apply_prim_list_0());
}

inline void lam8934_fptr() // lam8934 -> generic version 
{
//reading env
void* const env8935 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8935);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8785);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8934_spec(void* env8935, void* id_8785) // lam8934 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8935);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8785);
arg_buffer[1] = decode_clo_array[2];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8882 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{

//clo-app
arg_buffer[1] = kont8882;
arg_buffer[2] = rhs;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8882))[0])();
}
else
{

//creating new closure instance
void** clo9175 = alloc_clo(lam8934_fptr, 2);

//setting env list
clo9175[1] = apply_prim_car_1(lhs);
clo9175[2] = kont8882;
void* f_lam_8883 = encode_clo(clo9175);



//clo-app
append1_spec(append1, f_lam_8883, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8936, void* kont8882, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{

//clo-app
arg_buffer[1] = kont8882;
arg_buffer[2] = rhs;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8882))[0])();
}
else
{

//creating new closure instance
void** clo9176 = alloc_clo(lam8934_fptr, 2);

//setting env list
clo9176[1] = apply_prim_car_1(lhs);
clo9176[2] = kont8882;
void* f_lam_8883 = encode_clo(clo9176);



//clo-app
append1_spec(append1, f_lam_8883, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8937_fptr() // lam8937 -> generic version 
{
//reading env
void* const env8938 = arg_buffer[1];
//reading env and args
void* const id_8792 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8938);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8792);
}

inline void lam8937_spec(void* env8938, void* id_8792) // lam8937 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8938);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8792);
}

inline void lam8939_fptr() // lam8939 -> generic version 
{
//reading env
void* const env8940 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8940);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], id_8787)))
{

//clo-app
append1_spec(append1, decode_clo_array[3], decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]));
}
else
{

//creating new closure instance
void** clo9177 = alloc_clo(lam8937_fptr, 2);

//setting env list
clo9177[1] = apply_prim_list_0();
clo9177[2] = decode_clo_array[3];
void* f_lam_8885 = encode_clo(clo9177);



//clo-app
append1_spec(append1, f_lam_8885, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[2]);
}

}

inline void lam8939_spec(void* env8940, void* id_8787) // lam8939 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8940);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], id_8787)))
{

//clo-app
append1_spec(append1, decode_clo_array[3], decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]));
}
else
{

//creating new closure instance
void** clo9178 = alloc_clo(lam8937_fptr, 2);

//setting env list
clo9178[1] = apply_prim_list_0();
clo9178[2] = decode_clo_array[3];
void* f_lam_8885 = encode_clo(clo9178);



//clo-app
append1_spec(append1, f_lam_8885, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[2]);
}

}

inline void lam8941_fptr() // lam8941 -> generic version 
{
//reading env
void* const env8942 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8942);

//creating new closure instance
void** clo9179 = alloc_clo(lam8939_fptr, 4);

//setting env list
clo9179[1] = decode_clo_array[1];
clo9179[2] = x;
clo9179[3] = decode_clo_array[2];
clo9179[4] = int8992;
void* f_lam_8886 = encode_clo(clo9179);



//clo-app
length_spec(length, f_lam_8886, x);
}

inline void lam8941_spec(void* env8942, void* x) // lam8941 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8942);

//creating new closure instance
void** clo9180 = alloc_clo(lam8939_fptr, 4);

//setting env list
clo9180[1] = decode_clo_array[1];
clo9180[2] = x;
clo9180[3] = decode_clo_array[2];
clo9180[4] = int8992;
void* f_lam_8886 = encode_clo(clo9180);



//clo-app
length_spec(length, f_lam_8886, x);
}

void append_fptr() // append 
{
//reading env
void* const _8943 = arg_buffer[1];
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
void** clo9181 = alloc_clo(lam8941_fptr, 2);

//setting env list
clo9181[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9181[2] = apply_prim_car_1(vargs);
void* f_lam_8887 = encode_clo(clo9181);



//clo-app
lam8941_spec(f_lam_8887, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8944_fptr() // lam8944 -> generic version 
{
//reading env
void* const env8945 = arg_buffer[1];
//reading env and args
void* const xy8795 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8945);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = xy8795;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8944_spec(void* env8945, void* xy8795) // lam8944 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8945);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = xy8795;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8888 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8993)))
{

//creating new closure instance
void** clo9182 = alloc_clo(lam8944_fptr, 1);

//setting env list
clo9182[1] = kont8888;
void* f_lam_8889 = encode_clo(clo9182);



//clo-app
reverse_spec(reverse, f_lam_8889, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8888, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8992), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8946, void* kont8888, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8993)))
{

//creating new closure instance
void** clo9183 = alloc_clo(lam8944_fptr, 1);

//setting env list
clo9183[1] = kont8888;
void* f_lam_8889 = encode_clo(clo9183);



//clo-app
reverse_spec(reverse, f_lam_8889, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8888, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8992), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8890 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8890, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8947, void* kont8890, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8890, lst, n, apply_prim_list_0());
}

inline void lam8948_fptr() // lam8948 -> generic version 
{
//reading env
void* const env8949 = arg_buffer[1];
//reading env and args
void* const id_8815 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8949);

//if-clause
if(is_true(id_8815))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[3], decode_clo_array[2], apply_prim__u43_2(decode_clo_array[4], int8992), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

}

inline void lam8948_spec(void* env8949, void* id_8815) // lam8948 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8949);

//if-clause
if(is_true(id_8815))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[3], decode_clo_array[2], apply_prim__u43_2(decode_clo_array[4], int8992), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

}

inline void lam8950_fptr() // lam8950 -> generic version 
{
//reading env
void* const env8951 = arg_buffer[1];
//reading env and args
void* const id_8809 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8951);

//if-clause
if(is_true(id_8809))
{

//creating new closure instance
void** clo9184 = alloc_clo(lam8948_fptr, 4);

//setting env list
clo9184[1] = decode_clo_array[1];
clo9184[2] = decode_clo_array[2];
clo9184[3] = decode_clo_array[3];
clo9184[4] = decode_clo_array[4];
void* f_lam_8892 = encode_clo(clo9184);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[2], decode_clo_array[4]))))
{

//clo-app
lam8948_spec(f_lam_8892, bool_f8986);
}
else
{

//clo-app
lam8948_spec(f_lam_8892, bool_t8988);
}

}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

}

inline void lam8950_spec(void* env8951, void* id_8809) // lam8950 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8951);

//if-clause
if(is_true(id_8809))
{

//creating new closure instance
void** clo9185 = alloc_clo(lam8948_fptr, 4);

//setting env list
clo9185[1] = decode_clo_array[1];
clo9185[2] = decode_clo_array[2];
clo9185[3] = decode_clo_array[3];
clo9185[4] = decode_clo_array[4];
void* f_lam_8892 = encode_clo(clo9185);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[2], decode_clo_array[4]))))
{

//clo-app
lam8948_spec(f_lam_8892, bool_f8986);
}
else
{

//clo-app
lam8948_spec(f_lam_8892, bool_t8988);
}

}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = bool_f8986;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

}

inline void ok_u63_fptr() // ok? -> generic version 
{
//reading env and args
void* const kont8891 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{

//clo-app
arg_buffer[1] = kont8891;
arg_buffer[2] = bool_t8988;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8891))[0])();
}
else
{

//creating new closure instance
void** clo9186 = alloc_clo(lam8950_fptr, 4);

//setting env list
clo9186[1] = placed;
clo9186[2] = row;
clo9186[3] = kont8891;
clo9186[4] = dist;
void* f_lam_8893 = encode_clo(clo9186);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{

//clo-app
lam8950_spec(f_lam_8893, bool_f8986);
}
else
{

//clo-app
lam8950_spec(f_lam_8893, bool_t8988);
}

}

}

inline void ok_u63_spec(void* _8952, void* kont8891, void* row, void* dist, void* placed) // ok? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{

//clo-app
arg_buffer[1] = kont8891;
arg_buffer[2] = bool_t8988;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8891))[0])();
}
else
{

//creating new closure instance
void** clo9187 = alloc_clo(lam8950_fptr, 4);

//setting env list
clo9187[1] = placed;
clo9187[2] = row;
clo9187[3] = kont8891;
clo9187[4] = dist;
void* f_lam_8893 = encode_clo(clo9187);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{

//clo-app
lam8950_spec(f_lam_8893, bool_f8986);
}
else
{

//clo-app
lam8950_spec(f_lam_8893, bool_t8988);
}

}

}

inline void lam8953_fptr() // lam8953 -> generic version 
{
//reading env
void* const env8954 = arg_buffer[1];
//reading env and args
void* const id_8839 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8954);

//clo-app
arg_buffer[2] = apply_prim_cons_2(apply_prim_list_3(id_8839, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[4]));
arg_buffer[1] = decode_clo_array[1];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8953_spec(void* env8954, void* id_8839) // lam8953 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8954);

//clo-app
arg_buffer[2] = apply_prim_cons_2(apply_prim_list_3(id_8839, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[4]));
arg_buffer[1] = decode_clo_array[1];
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8955_fptr() // lam8955 -> generic version 
{
//reading env
void* const env8956 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8956);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[3], id_8846), decode_clo_array[2]);
}

inline void lam8955_spec(void* env8956, void* id_8846) // lam8955 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8956);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[3], id_8846), decode_clo_array[2]);
}

inline void lam8957_fptr() // lam8957 -> generic version 
{
//reading env
void* const env8958 = arg_buffer[1];
//reading env and args
void* const id_8837 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8958);

//creating new closure instance
void** clo9188 = alloc_clo(lam8955_fptr, 3);

//setting env list
clo9188[1] = decode_clo_array[3];
clo9188[2] = decode_clo_array[7];
clo9188[3] = decode_clo_array[1];
void* f_lam_8895 = encode_clo(clo9188);



//if-clause
if(is_true(id_8837))
{

//creating new closure instance
void** clo9189 = alloc_clo(lam8953_fptr, 4);

//setting env list
clo9189[1] = f_lam_8895;
clo9189[2] = decode_clo_array[4];
clo9189[3] = decode_clo_array[6];
clo9189[4] = decode_clo_array[2];
void* f_lam_8896 = encode_clo(clo9189);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8896;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[4]);
arg_buffer[4] = decode_clo_array[5];
numArgs = int8998;
append_fptr();
}
else
{

//clo-app
lam8955_spec(f_lam_8895, apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam8957_spec(void* env8958, void* id_8837) // lam8957 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8958);

//creating new closure instance
void** clo9190 = alloc_clo(lam8955_fptr, 3);

//setting env list
clo9190[1] = decode_clo_array[3];
clo9190[2] = decode_clo_array[7];
clo9190[3] = decode_clo_array[1];
void* f_lam_8895 = encode_clo(clo9190);



//if-clause
if(is_true(id_8837))
{

//creating new closure instance
void** clo9191 = alloc_clo(lam8953_fptr, 4);

//setting env list
clo9191[1] = f_lam_8895;
clo9191[2] = decode_clo_array[4];
clo9191[3] = decode_clo_array[6];
clo9191[4] = decode_clo_array[2];
void* f_lam_8896 = encode_clo(clo9191);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8896;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[4]);
arg_buffer[4] = decode_clo_array[5];
numArgs = int8998;
append_fptr();
}
else
{

//clo-app
lam8955_spec(f_lam_8895, apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam8959_fptr() // lam8959 -> generic version 
{
//reading env
void* const env8960 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int8992));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), decode_clo_array[4]);
}

}
else
{

//creating new closure instance
void** clo9192 = alloc_clo(lam8957_fptr, 7);

//setting env list
clo9192[1] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9192[2] = decode_clo_array[5];
clo9192[3] = decode_clo_array[1];
clo9192[4] = decode_clo_array[2];
clo9192[5] = decode_clo_array[3];
clo9192[6] = z;
clo9192[7] = decode_clo_array[4];
void* f_lam_8897 = encode_clo(clo9192);



//clo-app
ok_u63_spec(ok_u63, f_lam_8897, apply_prim_car_1(decode_clo_array[2]), int8992, z);
}

}

inline void lam8959_spec(void* env8960, void* z) // lam8959 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int8992));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), decode_clo_array[4]);
}

}
else
{

//creating new closure instance
void** clo9193 = alloc_clo(lam8957_fptr, 7);

//setting env list
clo9193[1] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9193[2] = decode_clo_array[5];
clo9193[3] = decode_clo_array[1];
clo9193[4] = decode_clo_array[2];
clo9193[5] = decode_clo_array[3];
clo9193[6] = z;
clo9193[7] = decode_clo_array[4];
void* f_lam_8897 = encode_clo(clo9193);



//clo-app
ok_u63_spec(ok_u63, f_lam_8897, apply_prim_car_1(decode_clo_array[2]), int8992, z);
}

}

inline void lam8961_fptr() // lam8961 -> generic version 
{
//reading env
void* const env8962 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8962);

//creating new closure instance
void** clo9194 = alloc_clo(lam8959_fptr, 5);

//setting env list
clo9194[1] = decode_clo_array[1];
clo9194[2] = decode_clo_array[2];
clo9194[3] = y;
clo9194[4] = decode_clo_array[3];
clo9194[5] = decode_clo_array[5];
void* f_lam_8898 = encode_clo(clo9194);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4])));
arg_buffer[1] = f_lam_8898;
numArgs = int8996;
lam8959_spec(f_lam_8898, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void lam8961_spec(void* env8962, void* y) // lam8961 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8962);

//creating new closure instance
void** clo9195 = alloc_clo(lam8959_fptr, 5);

//setting env list
clo9195[1] = decode_clo_array[1];
clo9195[2] = decode_clo_array[2];
clo9195[3] = y;
clo9195[4] = decode_clo_array[3];
clo9195[5] = decode_clo_array[5];
void* f_lam_8898 = encode_clo(clo9195);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4])));
arg_buffer[1] = f_lam_8898;
numArgs = int8996;
lam8959_spec(f_lam_8898, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version 
{
//reading env and args
void* const kont8894 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{

//clo-app
arg_buffer[1] = kont8894;
arg_buffer[2] = count;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8894))[0])();
}
else
{

//creating new closure instance
void** clo9196 = alloc_clo(lam8961_fptr, 5);

//setting env list
clo9196[1] = kont8894;
clo9196[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9196[3] = count;
clo9196[4] = apply_prim_car_1(stack);
clo9196[5] = stack;
void* f_lam_8899 = encode_clo(clo9196);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack)));
arg_buffer[1] = f_lam_8899;
numArgs = int8996;
lam8961_spec(f_lam_8899, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void q_u45helper_spec(void* _8963, void* kont8894, void* stack, void* count) // q-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{

//clo-app
arg_buffer[1] = kont8894;
arg_buffer[2] = count;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8894))[0])();
}
else
{

//creating new closure instance
void** clo9197 = alloc_clo(lam8961_fptr, 5);

//setting env list
clo9197[1] = kont8894;
clo9197[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9197[3] = count;
clo9197[4] = apply_prim_car_1(stack);
clo9197[5] = stack;
void* f_lam_8899 = encode_clo(clo9197);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack)));
arg_buffer[1] = f_lam_8899;
numArgs = int8996;
lam8961_spec(f_lam_8899, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void iota1_fptr() // iota1 -> generic version 
{
//reading env and args
void* const kont8900 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8993)))
{

//clo-app
arg_buffer[1] = kont8900;
arg_buffer[2] = l;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8900))[0])();
}
else
{

//clo-app
iota1_spec(iota1, kont8900, apply_prim__u45_2(n, int8992), apply_prim_cons_2(n, l));
}

}

inline void iota1_spec(void* _8964, void* kont8900, void* n, void* l) // iota1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8993)))
{

//clo-app
arg_buffer[1] = kont8900;
arg_buffer[2] = l;
numArgs = int8996;
reinterpret_cast<void (*)()>((decode_clo(kont8900))[0])();
}
else
{

//clo-app
iota1_spec(iota1, kont8900, apply_prim__u45_2(n, int8992), apply_prim_cons_2(n, l));
}

}

inline void lam8965_fptr() // lam8965 -> generic version 
{
//reading env
void* const env8966 = arg_buffer[1];
//reading env and args
void* const id_8854 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8966);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8854, apply_prim_list_0(), apply_prim_list_0())), int8993);
}

inline void lam8965_spec(void* env8966, void* id_8854) // lam8965 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8966);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8854, apply_prim_list_0(), apply_prim_list_0())), int8993);
}

inline void nqueens_fptr() // nqueens -> generic version 
{
//reading env and args
void* const kont8901 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9198 = alloc_clo(lam8965_fptr, 1);

//setting env list
clo9198[1] = kont8901;
void* f_lam_8902 = encode_clo(clo9198);



//clo-app
iota1_spec(iota1, f_lam_8902, n, apply_prim_list_0());
}

inline void nqueens_spec(void* _8967, void* kont8901, void* n) // nqueens 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9199 = alloc_clo(lam8965_fptr, 1);

//setting env list
clo9199[1] = kont8901;
void* f_lam_8902 = encode_clo(clo9199);



//clo-app
iota1_spec(iota1, f_lam_8902, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8903 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8903, int8994);
}

inline void brouhaha_main_spec(void* _8968, void* kont8903) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8903, int8994);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8993 = reinterpret_cast<void *>(encode_int(0));
bool_t8988 = encode_bool(true);
int8992 = reinterpret_cast<void *>(encode_int(1));
bool_f8986 = encode_bool(false);
int8972 = reinterpret_cast<void *>(encode_int(2));
int8994 = reinterpret_cast<void *>(encode_int(14));



// initializing global integer vars
int8995 = 1;
int8996 = 2;
int8997 = 3;
int8998 = 4;
int8999 = 5;

//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

