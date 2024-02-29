#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9051;
void* bool_t9046;
void* int9050;
void* bool_f9044;
void* int9026;
void* int9052;



// declaring global integer variable
int int9053;
int int9054;
int int9055;
int int9056;
int int9057;

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
void even_u63_spec(void* _8959, void* kont8915, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8960, void* kont8916, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8961, void* kont8917, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8962_fptr(); // lam8962
void lam8962_spec(void* env8963, void* id_8745); // lam8962
void* lam8962 = encode_clo(alloc_clo(lam8962_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8964, void* kont8918, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8965, void* kont8920, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8966_fptr(); // lam8966
void lam8966_spec(void* env8967, void* id_8760); // lam8966
void* lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8968, void* kont8921, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8969_fptr(); // lam8969
void lam8969_spec(void* env8970, void* id_8766); // lam8969
void* lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void lam8971_fptr(); // lam8971
void lam8971_spec(void* env8972, void* id_8764); // lam8971
void* lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8973, void* kont8923, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8974_fptr(); // lam8974
void lam8974_spec(void* env8975, void* id_8773); // lam8974
void* lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void lam8976_fptr(); // lam8976
void lam8976_spec(void* env8977, void* id_8770); // lam8976
void* lam8976 = encode_clo(alloc_clo(lam8976_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8978, void* kont8926, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8979, void* kont8929, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8980_fptr(); // lam8980
void lam8980_spec(void* env8981, void* id_8782); // lam8980
void* lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8982, void* kont8930, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8983_fptr(); // lam8983
void lam8983_spec(void* env8984, void* id_8787); // lam8983
void* lam8983 = encode_clo(alloc_clo(lam8983_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8985, void* kont8932, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8986, void* kont8934, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8987, void* kont8935, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8988_fptr(); // lam8988
void lam8988_spec(void* env8989, void* id_8796); // lam8988
void* lam8988 = encode_clo(alloc_clo(lam8988_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8990, void* kont8936, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8991_fptr(); // lam8991
void lam8991_spec(void* env8992, void* id_8803); // lam8991
void* lam8991 = encode_clo(alloc_clo(lam8991_fptr, 0));

void lam8993_fptr(); // lam8993
void lam8993_spec(void* env8994, void* id_8798); // lam8993
void* lam8993 = encode_clo(alloc_clo(lam8993_fptr, 0));

void lam8995_fptr(); // lam8995
void lam8995_spec(void* env8996, void* x); // lam8995
void* lam8995 = encode_clo(alloc_clo(lam8995_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8998_fptr(); // lam8998
void lam8998_spec(void* env8999, void* xy8806); // lam8998
void* lam8998 = encode_clo(alloc_clo(lam8998_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _9000, void* kont8942, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _9001, void* kont8944, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam9002_fptr(); // lam9002
void lam9002_spec(void* env9003, void* id_8826); // lam9002
void* lam9002 = encode_clo(alloc_clo(lam9002_fptr, 0));

void lam9004_fptr(); // lam9004
void lam9004_spec(void* env9005, void* id_8820); // lam9004
void* lam9004 = encode_clo(alloc_clo(lam9004_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void* _9006, void* kont8945, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam9007_fptr(); // lam9007
void lam9007_spec(void* env9008, void* id_8850); // lam9007
void* lam9007 = encode_clo(alloc_clo(lam9007_fptr, 0));

void lam9009_fptr(); // lam9009
void lam9009_spec(void* env9010, void* id_8857); // lam9009
void* lam9009 = encode_clo(alloc_clo(lam9009_fptr, 0));

void lam9011_fptr(); // lam9011
void lam9011_spec(void* env9012, void* id_8848); // lam9011
void* lam9011 = encode_clo(alloc_clo(lam9011_fptr, 0));

void lam9013_fptr(); // lam9013
void lam9013_spec(void* env9014, void* z); // lam9013
void* lam9013 = encode_clo(alloc_clo(lam9013_fptr, 0));

void lam9015_fptr(); // lam9015
void lam9015_spec(void* env9016, void* y); // lam9015
void* lam9015 = encode_clo(alloc_clo(lam9015_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void* _9017, void* kont8948, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void iota1_spec(void* _9018, void* kont8954, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam9019_fptr(); // lam9019
void lam9019_spec(void* env9020, void* id_8865); // lam9019
void* lam9019 = encode_clo(alloc_clo(lam9019_fptr, 0));

void nqueens_fptr(); // nqueens
void nqueens_spec(void* _9021, void* kont8955, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9022, void* kont8957); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9058 = prim_car(lst);
void* const lst9060 = prim_cdr(lst);
void* const x9059 = apply_prim__u43(lst9060);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
}
else
{
void* const kont9058 = arg_buffer[2];
void* const x9059 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
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
void* const kont9061 = prim_car(lst);
void* const lst9063 = prim_cdr(lst);
void* const x9062 = apply_prim__u45(lst9063);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
}
else
{
void* const kont9061 = arg_buffer[2];
void* const x9062 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
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
void* const kont9064 = prim_car(lst);
void* const lst9066 = prim_cdr(lst);
void* const x9065 = apply_prim__u42(lst9066);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
}
else
{
void* const kont9064 = arg_buffer[2];
void* const x9065 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
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
void* const kont9067 = prim_car(lst);
void* const lst9069 = prim_cdr(lst);
void* const x9068 = apply_prim__u47(lst9069);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
}
else
{
void* const kont9067 = arg_buffer[2];
void* const x9068 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
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
void* const kont9070 = prim_car(lst);
void* const lst9072 = prim_cdr(lst);
void* const x9071 = apply_prim__u61(lst9072);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
}
else
{
void* const kont9070 = arg_buffer[2];
void* const x9071 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
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
void* const kont9073 = prim_car(lst);
void* const lst9075 = prim_cdr(lst);
void* const x9074 = apply_prim__u62(lst9075);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
}
else
{
void* const kont9073 = arg_buffer[2];
void* const x9074 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
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
void* const kont9076 = prim_car(lst);
void* const lst9078 = prim_cdr(lst);
void* const x9077 = apply_prim__u60(lst9078);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
}
else
{
void* const kont9076 = arg_buffer[2];
void* const x9077 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
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
void* const kont9079 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9080 = apply_prim__u60_u61(lst9081);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
}
else
{
void* const kont9079 = arg_buffer[2];
void* const x9080 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
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
void* const kont9082 = prim_car(lst);
void* const lst9084 = prim_cdr(lst);
void* const x9083 = apply_prim__u62_u61(lst9084);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
}
else
{
void* const kont9082 = arg_buffer[2];
void* const x9083 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
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
void* const kont9085 = prim_car(lst);
void* const lst9087 = prim_cdr(lst);
void* const x9086 = apply_prim_modulo(lst9087);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
}
else
{
void* const kont9085 = arg_buffer[2];
void* const x9086 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
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
void* const kont9088 = prim_car(lst);
void* const lst9090 = prim_cdr(lst);
void* const x9089 = apply_prim_null_u63(lst9090);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
}
else
{
void* const kont9088 = arg_buffer[2];
void* const x9089 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
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
void* const kont9091 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9092 = apply_prim_equal_u63(lst9093);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
}
else
{
void* const kont9091 = arg_buffer[2];
void* const x9092 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
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
void* const kont9094 = prim_car(lst);
void* const lst9096 = prim_cdr(lst);
void* const x9095 = apply_prim_eq_u63(lst9096);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
}
else
{
void* const kont9094 = arg_buffer[2];
void* const x9095 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
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
void* const kont9097 = prim_car(lst);
void* const lst9099 = prim_cdr(lst);
void* const x9098 = apply_prim_cons(lst9099);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
}
else
{
void* const kont9097 = arg_buffer[2];
void* const x9098 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
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
void* const kont9100 = prim_car(lst);
void* const lst9102 = prim_cdr(lst);
void* const x9101 = apply_prim_car(lst9102);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
}
else
{
void* const kont9100 = arg_buffer[2];
void* const x9101 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
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
void* const kont9103 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9104 = apply_prim_cdr(lst9105);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
}
else
{
void* const kont9103 = arg_buffer[2];
void* const x9104 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
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
void* const kont9106 = prim_car(lst);
void* const lst9108 = prim_cdr(lst);
void* const x9107 = apply_prim_float_u45_u62int(lst9108);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
}
else
{
void* const kont9106 = arg_buffer[2];
void* const x9107 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
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
void* const kont9109 = prim_car(lst);
void* const lst9111 = prim_cdr(lst);
void* const x9110 = apply_prim_int_u45_u62float(lst9111);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
}
else
{
void* const kont9109 = arg_buffer[2];
void* const x9110 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
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
void* const kont9112 = prim_car(lst);
void* const lst9114 = prim_cdr(lst);
void* const x9113 = apply_prim_hash(lst9114);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
}
else
{
void* const kont9112 = arg_buffer[2];
void* const x9113 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
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
void* const kont9115 = prim_car(lst);
void* const lst9117 = prim_cdr(lst);
void* const x9116 = apply_prim_hash_u45ref(lst9117);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
}
else
{
void* const kont9115 = arg_buffer[2];
void* const x9116 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
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
void* const kont9118 = prim_car(lst);
void* const lst9120 = prim_cdr(lst);
void* const x9119 = apply_prim_hash_u45set(lst9120);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
}
else
{
void* const kont9118 = arg_buffer[2];
void* const x9119 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
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
void* const kont9121 = prim_car(lst);
void* const lst9123 = prim_cdr(lst);
void* const x9122 = apply_prim_hash_u45keys(lst9123);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
}
else
{
void* const kont9121 = arg_buffer[2];
void* const x9122 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
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
void* const kont9124 = prim_car(lst);
void* const lst9126 = prim_cdr(lst);
void* const x9125 = apply_prim_hash_u45has_u45key_u63(lst9126);
arg_buffer[1] = kont9124;
arg_buffer[2] = x9125;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
}
else
{
void* const kont9124 = arg_buffer[2];
void* const x9125 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9124;
arg_buffer[2] = x9125;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
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
void* const kont9127 = prim_car(lst);
void* const lst9129 = prim_cdr(lst);
void* const x9128 = apply_prim_hash_u45count(lst9129);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
}
else
{
void* const kont9127 = arg_buffer[2];
void* const x9128 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
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
void* const kont9130 = prim_car(lst);
void* const lst9132 = prim_cdr(lst);
void* const x9131 = apply_prim_set(lst9132);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
}
else
{
void* const kont9130 = arg_buffer[2];
void* const x9131 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
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
void* const kont9133 = prim_car(lst);
void* const lst9135 = prim_cdr(lst);
void* const x9134 = apply_prim_set_u45_u62list(lst9135);
arg_buffer[1] = kont9133;
arg_buffer[2] = x9134;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
}
else
{
void* const kont9133 = arg_buffer[2];
void* const x9134 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9133;
arg_buffer[2] = x9134;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
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
void* const kont9136 = prim_car(lst);
void* const lst9138 = prim_cdr(lst);
void* const x9137 = apply_prim_list_u45_u62set(lst9138);
arg_buffer[1] = kont9136;
arg_buffer[2] = x9137;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
}
else
{
void* const kont9136 = arg_buffer[2];
void* const x9137 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9136;
arg_buffer[2] = x9137;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
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
void* const kont9139 = prim_car(lst);
void* const lst9141 = prim_cdr(lst);
void* const x9140 = apply_prim_set_u45add(lst9141);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
}
else
{
void* const kont9139 = arg_buffer[2];
void* const x9140 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
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
void* const kont9142 = prim_car(lst);
void* const lst9144 = prim_cdr(lst);
void* const x9143 = apply_prim_set_u45member_u63(lst9144);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
}
else
{
void* const kont9142 = arg_buffer[2];
void* const x9143 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
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
void* const kont9145 = prim_car(lst);
void* const lst9147 = prim_cdr(lst);
void* const x9146 = apply_prim_set_u45remove(lst9147);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
}
else
{
void* const kont9145 = arg_buffer[2];
void* const x9146 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
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
void* const kont9148 = prim_car(lst);
void* const lst9150 = prim_cdr(lst);
void* const x9149 = apply_prim_set_u45count(lst9150);
arg_buffer[1] = kont9148;
arg_buffer[2] = x9149;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9148))[0])();
}
else
{
void* const kont9148 = arg_buffer[2];
void* const x9149 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9148;
arg_buffer[2] = x9149;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9148))[0])();
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
void* const kont9151 = prim_car(lst);
void* const lst9153 = prim_cdr(lst);
void* const x9152 = apply_prim_string_u63(lst9153);
arg_buffer[1] = kont9151;
arg_buffer[2] = x9152;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9151))[0])();
}
else
{
void* const kont9151 = arg_buffer[2];
void* const x9152 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9151;
arg_buffer[2] = x9152;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9151))[0])();
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
void* const kont9154 = prim_car(lst);
void* const lst9156 = prim_cdr(lst);
void* const x9155 = apply_prim_string_u45length(lst9156);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9154))[0])();
}
else
{
void* const kont9154 = arg_buffer[2];
void* const x9155 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9154))[0])();
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
void* const kont9157 = prim_car(lst);
void* const lst9159 = prim_cdr(lst);
void* const x9158 = apply_prim_string_u45ref(lst9159);
arg_buffer[1] = kont9157;
arg_buffer[2] = x9158;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9157))[0])();
}
else
{
void* const kont9157 = arg_buffer[2];
void* const x9158 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9157;
arg_buffer[2] = x9158;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9157))[0])();
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
void* const kont9160 = prim_car(lst);
void* const lst9162 = prim_cdr(lst);
void* const x9161 = apply_prim_substring(lst9162);
arg_buffer[1] = kont9160;
arg_buffer[2] = x9161;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9160))[0])();
}
else
{
void* const kont9160 = arg_buffer[2];
void* const x9161 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9160;
arg_buffer[2] = x9161;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9160))[0])();
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
void* const kont9163 = prim_car(lst);
void* const lst9165 = prim_cdr(lst);
void* const x9164 = apply_prim_string_u45append(lst9165);
arg_buffer[1] = kont9163;
arg_buffer[2] = x9164;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9163))[0])();
}
else
{
void* const kont9163 = arg_buffer[2];
void* const x9164 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9163;
arg_buffer[2] = x9164;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9163))[0])();
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
void* const kont9166 = prim_car(lst);
void* const lst9168 = prim_cdr(lst);
void* const x9167 = apply_prim_string_u45_u62list(lst9168);
arg_buffer[1] = kont9166;
arg_buffer[2] = x9167;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9166))[0])();
}
else
{
void* const kont9166 = arg_buffer[2];
void* const x9167 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9166;
arg_buffer[2] = x9167;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9166))[0])();
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
void* const kont9169 = prim_car(lst);
void* const lst9171 = prim_cdr(lst);
void* const x9170 = apply_prim_exact_u45floor(lst9171);
arg_buffer[1] = kont9169;
arg_buffer[2] = x9170;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9169))[0])();
}
else
{
void* const kont9169 = arg_buffer[2];
void* const x9170 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9169;
arg_buffer[2] = x9170;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9169))[0])();
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
void* const kont9172 = prim_car(lst);
void* const lst9174 = prim_cdr(lst);
void* const x9173 = apply_prim_exact_u45ceiling(lst9174);
arg_buffer[1] = kont9172;
arg_buffer[2] = x9173;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9172))[0])();
}
else
{
void* const kont9172 = arg_buffer[2];
void* const x9173 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9172;
arg_buffer[2] = x9173;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9172))[0])();
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
void* const kont9175 = prim_car(lst);
void* const lst9177 = prim_cdr(lst);
void* const x9176 = apply_prim_exact_u45round(lst9177);
arg_buffer[1] = kont9175;
arg_buffer[2] = x9176;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9175))[0])();
}
else
{
void* const kont9175 = arg_buffer[2];
void* const x9176 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9175;
arg_buffer[2] = x9176;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9175))[0])();
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
void* const kont9178 = prim_car(lst);
void* const lst9180 = prim_cdr(lst);
void* const x9179 = apply_prim_abs(lst9180);
arg_buffer[1] = kont9178;
arg_buffer[2] = x9179;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9178))[0])();
}
else
{
void* const kont9178 = arg_buffer[2];
void* const x9179 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9178;
arg_buffer[2] = x9179;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9178))[0])();
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
void* const kont9181 = prim_car(lst);
void* const lst9183 = prim_cdr(lst);
void* const x9182 = apply_prim_max(lst9183);
arg_buffer[1] = kont9181;
arg_buffer[2] = x9182;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9181))[0])();
}
else
{
void* const kont9181 = arg_buffer[2];
void* const x9182 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9181;
arg_buffer[2] = x9182;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9181))[0])();
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
void* const kont9184 = prim_car(lst);
void* const lst9186 = prim_cdr(lst);
void* const x9185 = apply_prim_min(lst9186);
arg_buffer[1] = kont9184;
arg_buffer[2] = x9185;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9184))[0])();
}
else
{
void* const kont9184 = arg_buffer[2];
void* const x9185 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9184;
arg_buffer[2] = x9185;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9184))[0])();
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
void* const kont9187 = prim_car(lst);
void* const lst9189 = prim_cdr(lst);
void* const x9188 = apply_prim_expt(lst9189);
arg_buffer[1] = kont9187;
arg_buffer[2] = x9188;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9187))[0])();
}
else
{
void* const kont9187 = arg_buffer[2];
void* const x9188 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9187;
arg_buffer[2] = x9188;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9187))[0])();
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
void* const kont9190 = prim_car(lst);
void* const lst9192 = prim_cdr(lst);
void* const x9191 = apply_prim_sqrt(lst9192);
arg_buffer[1] = kont9190;
arg_buffer[2] = x9191;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9190))[0])();
}
else
{
void* const kont9190 = arg_buffer[2];
void* const x9191 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9190;
arg_buffer[2] = x9191;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9190))[0])();
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
void* const kont9193 = prim_car(lst);
void* const lst9195 = prim_cdr(lst);
void* const x9194 = apply_prim_remainder(lst9195);
arg_buffer[1] = kont9193;
arg_buffer[2] = x9194;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9193))[0])();
}
else
{
void* const kont9193 = arg_buffer[2];
void* const x9194 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9193;
arg_buffer[2] = x9194;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9193))[0])();
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
void* const kont9196 = prim_car(lst);
void* const lst9198 = prim_cdr(lst);
void* const x9197 = apply_prim_quotient(lst9198);
arg_buffer[1] = kont9196;
arg_buffer[2] = x9197;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9196))[0])();
}
else
{
void* const kont9196 = arg_buffer[2];
void* const x9197 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9196;
arg_buffer[2] = x9197;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9196))[0])();
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
void* const kont9199 = prim_car(lst);
void* const lst9201 = prim_cdr(lst);
void* const x9200 = apply_prim_random(lst9201);
arg_buffer[1] = kont9199;
arg_buffer[2] = x9200;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9199))[0])();
}
else
{
void* const kont9199 = arg_buffer[2];
void* const x9200 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9199;
arg_buffer[2] = x9200;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9199))[0])();
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
void* const kont9202 = prim_car(lst);
void* const lst9204 = prim_cdr(lst);
void* const x9203 = apply_prim_symbol_u63(lst9204);
arg_buffer[1] = kont9202;
arg_buffer[2] = x9203;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9202))[0])();
}
else
{
void* const kont9202 = arg_buffer[2];
void* const x9203 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9202;
arg_buffer[2] = x9203;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9202))[0])();
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
void* const kont9205 = prim_car(lst);
void* const lst9207 = prim_cdr(lst);
void* const x9206 = apply_prim_pair_u63(lst9207);
arg_buffer[1] = kont9205;
arg_buffer[2] = x9206;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9205))[0])();
}
else
{
void* const kont9205 = arg_buffer[2];
void* const x9206 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9205;
arg_buffer[2] = x9206;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9205))[0])();
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
void* const kont9208 = prim_car(lst);
void* const lst9210 = prim_cdr(lst);
void* const x9209 = apply_prim_positive_u63(lst9210);
arg_buffer[1] = kont9208;
arg_buffer[2] = x9209;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9208))[0])();
}
else
{
void* const kont9208 = arg_buffer[2];
void* const x9209 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9208;
arg_buffer[2] = x9209;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9208))[0])();
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
void* const kont9211 = prim_car(lst);
void* const lst9213 = prim_cdr(lst);
void* const x9212 = apply_prim_negative_u63(lst9213);
arg_buffer[1] = kont9211;
arg_buffer[2] = x9212;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9211))[0])();
}
else
{
void* const kont9211 = arg_buffer[2];
void* const x9212 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9211;
arg_buffer[2] = x9212;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9211))[0])();
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
void* const kont9214 = prim_car(lst);
void* const lst9216 = prim_cdr(lst);
void* const x9215 = apply_prim_list(lst9216);
arg_buffer[1] = kont9214;
arg_buffer[2] = x9215;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9214))[0])();
}
else
{
void* const kont9214 = arg_buffer[2];
void* const x9215 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9214;
arg_buffer[2] = x9215;
numArgs = int9054;
reinterpret_cast<void (*)()>((decode_clo(kont9214))[0])();
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
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8915)[1])(kont8915, apply_prim_equal_u63_2(int9051, apply_prim_modulo_2(x, int9026)));
}

inline void even_u63_spec(void* _8959, void* kont8915, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8915)[1])(kont8915, apply_prim_equal_u63_2(int9051, apply_prim_modulo_2(x, int9026)));
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8916 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8916)[1])(kont8916, apply_prim_equal_u63_2(int9050, apply_prim_modulo_2(x, int9026)));
}

inline void odd_u63_spec(void* _8960, void* kont8916, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8916)[1])(kont8916, apply_prim_equal_u63_2(int9050, apply_prim_modulo_2(x, int9026)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8917 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9051, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8917)[1])(kont8917, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8917, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9050));
}

}

inline void list_u45ref_spec(void* _8961, void* kont8917, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9051, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8917)[1])(kont8917, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8917, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9050));
}

}

inline void lam8962_fptr() // lam8962 -> generic version 
{
//reading env
void* const env8963 = arg_buffer[1];
//reading env and args
void* const id_8745 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], bool_f9044);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[3], apply_prim_car_1(decode_clo_array[4]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], decode_clo_array[4]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}

}

}

inline void lam8962_spec(void* env8963, void* id_8745) // lam8962 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], bool_f9044);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[3], apply_prim_car_1(decode_clo_array[4]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], decode_clo_array[4]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8918 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9217 = alloc_kont(lam8962_fptr, reinterpret_cast<void*>(lam8962_spec), 3);

//setting env list
clo9217[2] = kont8918;
clo9217[3] = item;
clo9217[4] = lst;
void* f_lam_8919 = encode_clo(clo9217);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8919)[1])(f_lam_8919, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8919)[1])(f_lam_8919, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8964, void* kont8918, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9218 = alloc_kont(lam8962_fptr, reinterpret_cast<void*>(lam8962_spec), 3);

//setting env list
clo9218[2] = kont8918;
clo9218[3] = item;
clo9218[4] = lst;
void* f_lam_8919 = encode_clo(clo9218);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8919)[1])(f_lam_8919, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8919)[1])(f_lam_8919, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8920 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8920)[1])(kont8920, bool_f9044);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8920)[1])(kont8920, bool_t9046);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8920, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8965, void* kont8920, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8920)[1])(kont8920, bool_f9044);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8920)[1])(kont8920, bool_t9046);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8920, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8966_fptr() // lam8966 -> generic version 
{
//reading env
void* const env8967 = arg_buffer[1];
//reading env and args
void* const id_8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], id_8760));
}

inline void lam8966_spec(void* env8967, void* id_8760) // lam8966 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], id_8760));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8921 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8921)[1])(kont8921, int9051);
}
else
{

//creating new make-kont closure
void** clo9219 = alloc_kont(lam8966_fptr, reinterpret_cast<void*>(lam8966_spec), 2);

//setting env list
clo9219[2] = kont8921;
clo9219[3] = int9050;
void* f_lam_8922 = encode_clo(clo9219);



//clo-app
length_spec(length, f_lam_8922, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8968, void* kont8921, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8921)[1])(kont8921, int9051);
}
else
{

//creating new make-kont closure
void** clo9220 = alloc_kont(lam8966_fptr, reinterpret_cast<void*>(lam8966_spec), 2);

//setting env list
clo9220[2] = kont8921;
clo9220[3] = int9050;
void* f_lam_8922 = encode_clo(clo9220);



//clo-app
length_spec(length, f_lam_8922, apply_prim_cdr_1(lst));
}

}

inline void lam8969_fptr() // lam8969 -> generic version 
{
//reading env
void* const env8970 = arg_buffer[1];
//reading env and args
void* const id_8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8766));
}

inline void lam8969_spec(void* env8970, void* id_8766) // lam8969 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[3], id_8766));
}

inline void lam8971_fptr() // lam8971 -> generic version 
{
//reading env
void* const env8972 = arg_buffer[1];
//reading env and args
void* const id_8764 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//creating new make-kont closure
void** clo9221 = alloc_kont(lam8969_fptr, reinterpret_cast<void*>(lam8969_spec), 2);

//setting env list
clo9221[2] = decode_clo_array[2];
clo9221[3] = id_8764;
void* f_lam_8924 = encode_clo(clo9221);



//clo-app
map_spec(map, f_lam_8924, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8971_spec(void* env8972, void* id_8764) // lam8971 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//creating new make-kont closure
void** clo9222 = alloc_kont(lam8969_fptr, reinterpret_cast<void*>(lam8969_spec), 2);

//setting env list
clo9222[2] = decode_clo_array[2];
clo9222[3] = id_8764;
void* f_lam_8924 = encode_clo(clo9222);



//clo-app
map_spec(map, f_lam_8924, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8923 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8923)[1])(kont8923, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9223 = alloc_kont(lam8971_fptr, reinterpret_cast<void*>(lam8971_spec), 3);

//setting env list
clo9223[2] = kont8923;
clo9223[3] = proc;
clo9223[4] = lst;
void* f_lam_8925 = encode_clo(clo9223);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8925;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9055;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8973, void* kont8923, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8923)[1])(kont8923, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9224 = alloc_kont(lam8971_fptr, reinterpret_cast<void*>(lam8971_spec), 3);

//setting env list
clo9224[2] = kont8923;
clo9224[3] = proc;
clo9224[4] = lst;
void* f_lam_8925 = encode_clo(clo9224);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8925;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9055;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8974_fptr() // lam8974 -> generic version 
{
//reading env
void* const env8975 = arg_buffer[1];
//reading env and args
void* const id_8773 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8974_spec(void* env8975, void* id_8773) // lam8974 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8976_fptr() // lam8976 -> generic version 
{
//reading env
void* const env8977 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9225 = alloc_kont(lam8974_fptr, reinterpret_cast<void*>(lam8974_spec), 2);

//setting env list
clo9225[2] = apply_prim_car_1(decode_clo_array[3]);
clo9225[3] = decode_clo_array[4];
void* f_lam_8927 = encode_clo(clo9225);



//clo-app
filter_spec(filter, f_lam_8927, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[4], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void lam8976_spec(void* env8977, void* id_8770) // lam8976 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9226 = alloc_kont(lam8974_fptr, reinterpret_cast<void*>(lam8974_spec), 2);

//setting env list
clo9226[2] = apply_prim_car_1(decode_clo_array[3]);
clo9226[3] = decode_clo_array[4];
void* f_lam_8927 = encode_clo(clo9226);



//clo-app
filter_spec(filter, f_lam_8927, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[4], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8926 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8926)[1])(kont8926, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9227 = alloc_kont(lam8976_fptr, reinterpret_cast<void*>(lam8976_spec), 3);

//setting env list
clo9227[2] = op;
clo9227[3] = lst;
clo9227[4] = kont8926;
void* f_lam_8928 = encode_clo(clo9227);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8928;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9055;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8978, void* kont8926, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8926)[1])(kont8926, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9228 = alloc_kont(lam8976_fptr, reinterpret_cast<void*>(lam8976_spec), 3);

//setting env list
clo9228[2] = op;
clo9228[3] = lst;
clo9228[4] = kont8926;
void* f_lam_8928 = encode_clo(clo9228);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8928;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9055;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8929 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9051)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8929)[1])(kont8929, lst);
}
else
{

//clo-app
drop_spec(drop, kont8929, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9050));
}

}

inline void drop_spec(void* _8979, void* kont8929, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9051)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8929)[1])(kont8929, lst);
}
else
{

//clo-app
drop_spec(drop, kont8929, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9050));
}

}

inline void lam8980_fptr() // lam8980 -> generic version 
{
//reading env
void* const env8981 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);

//clo-app
foldl_spec(foldl, decode_clo_array[3], decode_clo_array[2], id_8782, apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8980_spec(void* env8981, void* id_8782) // lam8980 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);

//clo-app
foldl_spec(foldl, decode_clo_array[3], decode_clo_array[2], id_8782, apply_prim_cdr_1(decode_clo_array[4]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8930 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8930)[1])(kont8930, acc);
}
else
{

//creating new make-kont closure
void** clo9229 = alloc_kont(lam8980_fptr, reinterpret_cast<void*>(lam8980_spec), 3);

//setting env list
clo9229[2] = fun;
clo9229[3] = kont8930;
clo9229[4] = lst;
void* f_lam_8931 = encode_clo(clo9229);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8931;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int9056;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8982, void* kont8930, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8930)[1])(kont8930, acc);
}
else
{

//creating new make-kont closure
void** clo9230 = alloc_kont(lam8980_fptr, reinterpret_cast<void*>(lam8980_spec), 3);

//setting env list
clo9230[2] = fun;
clo9230[3] = kont8930;
clo9230[4] = lst;
void* f_lam_8931 = encode_clo(clo9230);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8931;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int9056;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8983_fptr() // lam8983 -> generic version 
{
//reading env
void* const env8984 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8787;
numArgs = int9056;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8983_spec(void* env8984, void* id_8787) // lam8983 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8787;
numArgs = int9056;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
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
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8932)[1])(kont8932, acc);
}
else
{

//creating new make-kont closure
void** clo9231 = alloc_kont(lam8983_fptr, reinterpret_cast<void*>(lam8983_spec), 3);

//setting env list
clo9231[2] = fun;
clo9231[3] = kont8932;
clo9231[4] = apply_prim_car_1(lst);
void* f_lam_8933 = encode_clo(clo9231);



//clo-app
foldr_spec(foldr, f_lam_8933, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8985, void* kont8932, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8932)[1])(kont8932, acc);
}
else
{

//creating new make-kont closure
void** clo9232 = alloc_kont(lam8983_fptr, reinterpret_cast<void*>(lam8983_spec), 3);

//setting env list
clo9232[2] = fun;
clo9232[3] = kont8932;
clo9232[4] = apply_prim_car_1(lst);
void* f_lam_8933 = encode_clo(clo9232);



//clo-app
foldr_spec(foldr, f_lam_8933, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8934 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8934)[1])(kont8934, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8934, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8986, void* kont8934, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8934)[1])(kont8934, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8934, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8935 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8935, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8987, void* kont8935, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8935, lst, apply_prim_list_0());
}

inline void lam8988_fptr() // lam8988 -> generic version 
{
//reading env
void* const env8989 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void lam8988_spec(void* env8989, void* id_8796) // lam8988 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8936 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8936)[1])(kont8936, rhs);
}
else
{

//creating new make-kont closure
void** clo9233 = alloc_kont(lam8988_fptr, reinterpret_cast<void*>(lam8988_spec), 2);

//setting env list
clo9233[2] = apply_prim_car_1(lhs);
clo9233[3] = kont8936;
void* f_lam_8937 = encode_clo(clo9233);



//clo-app
append1_spec(append1, f_lam_8937, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8990, void* kont8936, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8936)[1])(kont8936, rhs);
}
else
{

//creating new make-kont closure
void** clo9234 = alloc_kont(lam8988_fptr, reinterpret_cast<void*>(lam8988_spec), 2);

//setting env list
clo9234[2] = apply_prim_car_1(lhs);
clo9234[3] = kont8936;
void* f_lam_8937 = encode_clo(clo9234);



//clo-app
append1_spec(append1, f_lam_8937, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8991_fptr() // lam8991 -> generic version 
{
//reading env
void* const env8992 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8992);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[3], id_8803);
}

inline void lam8991_spec(void* env8992, void* id_8803) // lam8991 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8992);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[3], id_8803);
}

inline void lam8993_fptr() // lam8993 -> generic version 
{
//reading env
void* const env8994 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8994);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[5], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[3], decode_clo_array[2], apply_prim_car_1(decode_clo_array[4]));
}
else
{

//creating new make-kont closure
void** clo9235 = alloc_kont(lam8991_fptr, reinterpret_cast<void*>(lam8991_spec), 2);

//setting env list
clo9235[2] = decode_clo_array[3];
clo9235[3] = apply_prim_list_0();
void* f_lam_8939 = encode_clo(clo9235);



//clo-app
append1_spec(append1, f_lam_8939, apply_prim_list_1(decode_clo_array[2]), decode_clo_array[4]);
}

}

inline void lam8993_spec(void* env8994, void* id_8798) // lam8993 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8994);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[5], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[3], decode_clo_array[2], apply_prim_car_1(decode_clo_array[4]));
}
else
{

//creating new make-kont closure
void** clo9236 = alloc_kont(lam8991_fptr, reinterpret_cast<void*>(lam8991_spec), 2);

//setting env list
clo9236[2] = decode_clo_array[3];
clo9236[3] = apply_prim_list_0();
void* f_lam_8939 = encode_clo(clo9236);



//clo-app
append1_spec(append1, f_lam_8939, apply_prim_list_1(decode_clo_array[2]), decode_clo_array[4]);
}

}

inline void lam8995_fptr() // lam8995 -> generic version 
{
//reading env
void* const env8996 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);

//creating new make-kont closure
void** clo9237 = alloc_kont(lam8993_fptr, reinterpret_cast<void*>(lam8993_spec), 4);

//setting env list
clo9237[2] = decode_clo_array[2];
clo9237[3] = decode_clo_array[3];
clo9237[4] = x;
clo9237[5] = int9050;
void* f_lam_8940 = encode_clo(clo9237);



//clo-app
length_spec(length, f_lam_8940, x);
}

inline void lam8995_spec(void* env8996, void* x) // lam8995 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);

//creating new make-kont closure
void** clo9238 = alloc_kont(lam8993_fptr, reinterpret_cast<void*>(lam8993_spec), 4);

//setting env list
clo9238[2] = decode_clo_array[2];
clo9238[3] = decode_clo_array[3];
clo9238[4] = x;
clo9238[5] = int9050;
void* f_lam_8940 = encode_clo(clo9238);



//clo-app
length_spec(length, f_lam_8940, x);
}

void append_fptr() // append 
{
//reading env
void* const _8997 = arg_buffer[1];
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
void** clo9239 = alloc_kont(lam8995_fptr, reinterpret_cast<void*>(lam8995_spec), 2);

//setting env list
clo9239[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9239[3] = apply_prim_car_1(vargs);
void* f_lam_8941 = encode_clo(clo9239);


// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8941)[1])(f_lam_8941, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8998_fptr() // lam8998 -> generic version 
{
//reading env
void* const env8999 = arg_buffer[1];
//reading env and args
void* const xy8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8999);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
}

inline void lam8998_spec(void* env8999, void* xy8806) // lam8998 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8999);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8942 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9051)))
{

//creating new make-kont closure
void** clo9240 = alloc_kont(lam8998_fptr, reinterpret_cast<void*>(lam8998_spec), 1);

//setting env list
clo9240[2] = kont8942;
void* f_lam_8943 = encode_clo(clo9240);



//clo-app
reverse_spec(reverse, f_lam_8943, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8942, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9050), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _9000, void* kont8942, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9051)))
{

//creating new make-kont closure
void** clo9241 = alloc_kont(lam8998_fptr, reinterpret_cast<void*>(lam8998_spec), 1);

//setting env list
clo9241[2] = kont8942;
void* f_lam_8943 = encode_clo(clo9241);



//clo-app
reverse_spec(reverse, f_lam_8943, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8942, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9050), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8944 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8944, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _9001, void* kont8944, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8944, lst, n, apply_prim_list_0());
}

inline void lam9002_fptr() // lam9002 -> generic version 
{
//reading env
void* const env9003 = arg_buffer[1];
//reading env and args
void* const id_8826 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);

//if-clause
if(is_true(id_8826))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[4], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[5], int9050), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
}

}

inline void lam9002_spec(void* env9003, void* id_8826) // lam9002 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);

//if-clause
if(is_true(id_8826))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[4], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[5], int9050), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
}

}

inline void lam9004_fptr() // lam9004 -> generic version 
{
//reading env
void* const env9005 = arg_buffer[1];
//reading env and args
void* const id_8820 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9005);

//if-clause
if(is_true(id_8820))
{

//creating new make-kont closure
void** clo9242 = alloc_kont(lam9002_fptr, reinterpret_cast<void*>(lam9002_spec), 4);

//setting env list
clo9242[2] = decode_clo_array[2];
clo9242[3] = decode_clo_array[3];
clo9242[4] = decode_clo_array[4];
clo9242[5] = decode_clo_array[5];
void* f_lam_8946 = encode_clo(clo9242);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[2]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[5]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8946)[1])(f_lam_8946, bool_f9044);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8946)[1])(f_lam_8946, bool_t9046);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
}

}

inline void lam9004_spec(void* env9005, void* id_8820) // lam9004 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9005);

//if-clause
if(is_true(id_8820))
{

//creating new make-kont closure
void** clo9243 = alloc_kont(lam9002_fptr, reinterpret_cast<void*>(lam9002_spec), 4);

//setting env list
clo9243[2] = decode_clo_array[2];
clo9243[3] = decode_clo_array[3];
clo9243[4] = decode_clo_array[4];
clo9243[5] = decode_clo_array[5];
void* f_lam_8946 = encode_clo(clo9243);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[2]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[5]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8946)[1])(f_lam_8946, bool_f9044);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8946)[1])(f_lam_8946, bool_t9046);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
}

}

inline void ok_u63_fptr() // ok? -> generic version 
{
//reading env and args
void* const kont8945 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8945)[1])(kont8945, bool_t9046);
}
else
{

//creating new make-kont closure
void** clo9244 = alloc_kont(lam9004_fptr, reinterpret_cast<void*>(lam9004_spec), 4);

//setting env list
clo9244[2] = placed;
clo9244[3] = row;
clo9244[4] = kont8945;
clo9244[5] = dist;
void* f_lam_8947 = encode_clo(clo9244);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8947)[1])(f_lam_8947, bool_f9044);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8947)[1])(f_lam_8947, bool_t9046);
}

}

}

inline void ok_u63_spec(void* _9006, void* kont8945, void* row, void* dist, void* placed) // ok? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8945)[1])(kont8945, bool_t9046);
}
else
{

//creating new make-kont closure
void** clo9245 = alloc_kont(lam9004_fptr, reinterpret_cast<void*>(lam9004_spec), 4);

//setting env list
clo9245[2] = placed;
clo9245[3] = row;
clo9245[4] = kont8945;
clo9245[5] = dist;
void* f_lam_8947 = encode_clo(clo9245);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8947)[1])(f_lam_8947, bool_f9044);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8947)[1])(f_lam_8947, bool_t9046);
}

}

}

inline void lam9007_fptr() // lam9007 -> generic version 
{
//reading env
void* const env9008 = arg_buffer[1];
//reading env and args
void* const id_8850 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9008);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(apply_prim_list_3(id_8850, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[4]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[5])));
}

inline void lam9007_spec(void* env9008, void* id_8850) // lam9007 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9008);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], apply_prim_cons_2(apply_prim_list_3(id_8850, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[4]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[5])));
}

inline void lam9009_fptr() // lam9009 -> generic version 
{
//reading env
void* const env9010 = arg_buffer[1];
//reading env and args
void* const id_8857 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[2], apply_prim_cons_2(decode_clo_array[4], id_8857), decode_clo_array[3]);
}

inline void lam9009_spec(void* env9010, void* id_8857) // lam9009 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[2], apply_prim_cons_2(decode_clo_array[4], id_8857), decode_clo_array[3]);
}

inline void lam9011_fptr() // lam9011 -> generic version 
{
//reading env
void* const env9012 = arg_buffer[1];
//reading env and args
void* const id_8848 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9012);

//creating new make-kont closure
void** clo9246 = alloc_kont(lam9009_fptr, reinterpret_cast<void*>(lam9009_spec), 3);

//setting env list
clo9246[2] = decode_clo_array[5];
clo9246[3] = decode_clo_array[6];
clo9246[4] = decode_clo_array[7];
void* f_lam_8949 = encode_clo(clo9246);



//if-clause
if(is_true(id_8848))
{

//creating new make-kont closure
void** clo9247 = alloc_kont(lam9007_fptr, reinterpret_cast<void*>(lam9007_spec), 4);

//setting env list
clo9247[2] = f_lam_8949;
clo9247[3] = decode_clo_array[4];
clo9247[4] = decode_clo_array[2];
clo9247[5] = decode_clo_array[8];
void* f_lam_8950 = encode_clo(clo9247);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8950;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[2]);
arg_buffer[4] = decode_clo_array[3];
numArgs = int9056;
append_fptr();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8949)[1])(f_lam_8949, apply_prim_cdr_1(decode_clo_array[8]));
}

}

inline void lam9011_spec(void* env9012, void* id_8848) // lam9011 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9012);

//creating new make-kont closure
void** clo9248 = alloc_kont(lam9009_fptr, reinterpret_cast<void*>(lam9009_spec), 3);

//setting env list
clo9248[2] = decode_clo_array[5];
clo9248[3] = decode_clo_array[6];
clo9248[4] = decode_clo_array[7];
void* f_lam_8949 = encode_clo(clo9248);



//if-clause
if(is_true(id_8848))
{

//creating new make-kont closure
void** clo9249 = alloc_kont(lam9007_fptr, reinterpret_cast<void*>(lam9007_spec), 4);

//setting env list
clo9249[2] = f_lam_8949;
clo9249[3] = decode_clo_array[4];
clo9249[4] = decode_clo_array[2];
clo9249[5] = decode_clo_array[8];
void* f_lam_8950 = encode_clo(clo9249);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8950;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[2]);
arg_buffer[4] = decode_clo_array[3];
numArgs = int9056;
append_fptr();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8949)[1])(f_lam_8949, apply_prim_cdr_1(decode_clo_array[8]));
}

}

inline void lam9013_fptr() // lam9013 -> generic version 
{
//reading env
void* const env9014 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9014);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[4], apply_prim_cdr_1(decode_clo_array[6]), apply_prim__u43_2(decode_clo_array[5], int9050));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[4], apply_prim_cdr_1(decode_clo_array[6]), decode_clo_array[5]);
}

}
else
{

//creating new make-kont closure
void** clo9250 = alloc_kont(lam9011_fptr, reinterpret_cast<void*>(lam9011_spec), 7);

//setting env list
clo9250[2] = decode_clo_array[2];
clo9250[3] = decode_clo_array[3];
clo9250[4] = z;
clo9250[5] = decode_clo_array[4];
clo9250[6] = decode_clo_array[5];
clo9250[7] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9250[8] = decode_clo_array[6];
void* f_lam_8951 = encode_clo(clo9250);



//clo-app
ok_u63_spec(ok_u63, f_lam_8951, apply_prim_car_1(decode_clo_array[2]), int9050, z);
}

}

inline void lam9013_spec(void* env9014, void* z) // lam9013 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9014);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[4], apply_prim_cdr_1(decode_clo_array[6]), apply_prim__u43_2(decode_clo_array[5], int9050));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[4], apply_prim_cdr_1(decode_clo_array[6]), decode_clo_array[5]);
}

}
else
{

//creating new make-kont closure
void** clo9251 = alloc_kont(lam9011_fptr, reinterpret_cast<void*>(lam9011_spec), 7);

//setting env list
clo9251[2] = decode_clo_array[2];
clo9251[3] = decode_clo_array[3];
clo9251[4] = z;
clo9251[5] = decode_clo_array[4];
clo9251[6] = decode_clo_array[5];
clo9251[7] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9251[8] = decode_clo_array[6];
void* f_lam_8951 = encode_clo(clo9251);



//clo-app
ok_u63_spec(ok_u63, f_lam_8951, apply_prim_car_1(decode_clo_array[2]), int9050, z);
}

}

inline void lam9015_fptr() // lam9015 -> generic version 
{
//reading env
void* const env9016 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9016);

//creating new make-kont closure
void** clo9252 = alloc_kont(lam9013_fptr, reinterpret_cast<void*>(lam9013_spec), 5);

//setting env list
clo9252[2] = decode_clo_array[2];
clo9252[3] = y;
clo9252[4] = decode_clo_array[3];
clo9252[5] = decode_clo_array[4];
clo9252[6] = decode_clo_array[6];
void* f_lam_8952 = encode_clo(clo9252);


// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8952)[1])(f_lam_8952, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void lam9015_spec(void* env9016, void* y) // lam9015 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9016);

//creating new make-kont closure
void** clo9253 = alloc_kont(lam9013_fptr, reinterpret_cast<void*>(lam9013_spec), 5);

//setting env list
clo9253[2] = decode_clo_array[2];
clo9253[3] = y;
clo9253[4] = decode_clo_array[3];
clo9253[5] = decode_clo_array[4];
clo9253[6] = decode_clo_array[6];
void* f_lam_8952 = encode_clo(clo9253);


// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8952)[1])(f_lam_8952, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version 
{
//reading env and args
void* const kont8948 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8948)[1])(kont8948, count);
}
else
{

//creating new make-kont closure
void** clo9254 = alloc_kont(lam9015_fptr, reinterpret_cast<void*>(lam9015_spec), 5);

//setting env list
clo9254[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9254[3] = kont8948;
clo9254[4] = count;
clo9254[5] = apply_prim_car_1(stack);
clo9254[6] = stack;
void* f_lam_8953 = encode_clo(clo9254);


// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8953)[1])(f_lam_8953, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void q_u45helper_spec(void* _9017, void* kont8948, void* stack, void* count) // q-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8948)[1])(kont8948, count);
}
else
{

//creating new make-kont closure
void** clo9255 = alloc_kont(lam9015_fptr, reinterpret_cast<void*>(lam9015_spec), 5);

//setting env list
clo9255[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9255[3] = kont8948;
clo9255[4] = count;
clo9255[5] = apply_prim_car_1(stack);
clo9255[6] = stack;
void* f_lam_8953 = encode_clo(clo9255);


// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8953)[1])(f_lam_8953, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void iota1_fptr() // iota1 -> generic version 
{
//reading env and args
void* const kont8954 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9051)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8954)[1])(kont8954, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8954, apply_prim__u45_2(n, int9050), apply_prim_cons_2(n, l));
}

}

inline void iota1_spec(void* _9018, void* kont8954, void* n, void* l) // iota1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9051)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8954)[1])(kont8954, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8954, apply_prim__u45_2(n, int9050), apply_prim_cons_2(n, l));
}

}

inline void lam9019_fptr() // lam9019 -> generic version 
{
//reading env
void* const env9020 = arg_buffer[1];
//reading env and args
void* const id_8865 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9020);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[2], apply_prim_list_1(apply_prim_list_3(id_8865, apply_prim_list_0(), apply_prim_list_0())), int9051);
}

inline void lam9019_spec(void* env9020, void* id_8865) // lam9019 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9020);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[2], apply_prim_list_1(apply_prim_list_3(id_8865, apply_prim_list_0(), apply_prim_list_0())), int9051);
}

inline void nqueens_fptr() // nqueens -> generic version 
{
//reading env and args
void* const kont8955 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9256 = alloc_kont(lam9019_fptr, reinterpret_cast<void*>(lam9019_spec), 1);

//setting env list
clo9256[2] = kont8955;
void* f_lam_8956 = encode_clo(clo9256);



//clo-app
iota1_spec(iota1, f_lam_8956, n, apply_prim_list_0());
}

inline void nqueens_spec(void* _9021, void* kont8955, void* n) // nqueens 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9257 = alloc_kont(lam9019_fptr, reinterpret_cast<void*>(lam9019_spec), 1);

//setting env list
clo9257[2] = kont8955;
void* f_lam_8956 = encode_clo(clo9257);



//clo-app
iota1_spec(iota1, f_lam_8956, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8957 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8957, int9052);
}

inline void brouhaha_main_spec(void* _9022, void* kont8957) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8957, int9052);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9051 = reinterpret_cast<void *>(encode_int(0));
bool_t9046 = encode_bool(true);
int9050 = reinterpret_cast<void *>(encode_int(1));
bool_f9044 = encode_bool(false);
int9026 = reinterpret_cast<void *>(encode_int(2));
int9052 = reinterpret_cast<void *>(encode_int(14));



// initializing global integer vars
int9053 = 1;
int9054 = 2;
int9055 = 3;
int9056 = 4;
int9057 = 5;

//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt, reinterpret_cast<void*>(fhalt_spec), 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

