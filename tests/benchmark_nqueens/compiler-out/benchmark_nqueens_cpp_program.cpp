#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9041;
void* bool_t9036;
void* int9040;
void* bool_f9034;
void* int9016;
void* int9042;



// declaring global integer variable
int int9043;
int int9044;
int int9045;
int int9046;
int int9047;

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
void even_u63_spec(void* _8949, void* kont8905, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8950, void* kont8906, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8951, void* kont8907, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8952_fptr(); // lam8952
void lam8952_spec(void* env8953, void* id_8735); // lam8952
void* lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8954, void* kont8908, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8955, void* kont8910, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8956_fptr(); // lam8956
void lam8956_spec(void* env8957, void* id_8750); // lam8956
void* lam8956 = encode_clo(alloc_clo(lam8956_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8958, void* kont8911, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8959_fptr(); // lam8959
void lam8959_spec(void* env8960, void* id_8756); // lam8959
void* lam8959 = encode_clo(alloc_clo(lam8959_fptr, 0));

void lam8961_fptr(); // lam8961
void lam8961_spec(void* env8962, void* id_8754); // lam8961
void* lam8961 = encode_clo(alloc_clo(lam8961_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8963, void* kont8913, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8964_fptr(); // lam8964
void lam8964_spec(void* env8965, void* id_8763); // lam8964
void* lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void lam8966_fptr(); // lam8966
void lam8966_spec(void* env8967, void* id_8760); // lam8966
void* lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8968, void* kont8916, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8969, void* kont8919, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8970_fptr(); // lam8970
void lam8970_spec(void* env8971, void* id_8772); // lam8970
void* lam8970 = encode_clo(alloc_clo(lam8970_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8972, void* kont8920, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8973_fptr(); // lam8973
void lam8973_spec(void* env8974, void* id_8777); // lam8973
void* lam8973 = encode_clo(alloc_clo(lam8973_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8975, void* kont8922, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8976, void* kont8924, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8977, void* kont8925, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8978_fptr(); // lam8978
void lam8978_spec(void* env8979, void* id_8786); // lam8978
void* lam8978 = encode_clo(alloc_clo(lam8978_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8980, void* kont8926, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8981_fptr(); // lam8981
void lam8981_spec(void* env8982, void* id_8793); // lam8981
void* lam8981 = encode_clo(alloc_clo(lam8981_fptr, 0));

void lam8983_fptr(); // lam8983
void lam8983_spec(void* env8984, void* id_8788); // lam8983
void* lam8983 = encode_clo(alloc_clo(lam8983_fptr, 0));

void lam8985_fptr(); // lam8985
void lam8985_spec(void* env8986, void* x); // lam8985
void* lam8985 = encode_clo(alloc_clo(lam8985_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8988_fptr(); // lam8988
void lam8988_spec(void* env8989, void* xy8796); // lam8988
void* lam8988 = encode_clo(alloc_clo(lam8988_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8990, void* kont8932, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8991, void* kont8934, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8992_fptr(); // lam8992
void lam8992_spec(void* env8993, void* id_8816); // lam8992
void* lam8992 = encode_clo(alloc_clo(lam8992_fptr, 0));

void lam8994_fptr(); // lam8994
void lam8994_spec(void* env8995, void* id_8810); // lam8994
void* lam8994 = encode_clo(alloc_clo(lam8994_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void* _8996, void* kont8935, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8997_fptr(); // lam8997
void lam8997_spec(void* env8998, void* id_8840); // lam8997
void* lam8997 = encode_clo(alloc_clo(lam8997_fptr, 0));

void lam8999_fptr(); // lam8999
void lam8999_spec(void* env9000, void* id_8847); // lam8999
void* lam8999 = encode_clo(alloc_clo(lam8999_fptr, 0));

void lam9001_fptr(); // lam9001
void lam9001_spec(void* env9002, void* id_8838); // lam9001
void* lam9001 = encode_clo(alloc_clo(lam9001_fptr, 0));

void lam9003_fptr(); // lam9003
void lam9003_spec(void* env9004, void* z); // lam9003
void* lam9003 = encode_clo(alloc_clo(lam9003_fptr, 0));

void lam9005_fptr(); // lam9005
void lam9005_spec(void* env9006, void* y); // lam9005
void* lam9005 = encode_clo(alloc_clo(lam9005_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void* _9007, void* kont8938, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void iota1_spec(void* _9008, void* kont8944, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam9009_fptr(); // lam9009
void lam9009_spec(void* env9010, void* id_8855); // lam9009
void* lam9009 = encode_clo(alloc_clo(lam9009_fptr, 0));

void nqueens_fptr(); // nqueens
void nqueens_spec(void* _9011, void* kont8945, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9012, void* kont8947); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9048 = prim_car(lst);
void* const lst9050 = prim_cdr(lst);
void* const x9049 = apply_prim__u43(lst9050);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
}
else
{
void* const kont9048 = arg_buffer[2];
void* const x9049 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
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
void* const kont9051 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9052 = apply_prim__u45(lst9053);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
}
else
{
void* const kont9051 = arg_buffer[2];
void* const x9052 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
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
void* const kont9054 = prim_car(lst);
void* const lst9056 = prim_cdr(lst);
void* const x9055 = apply_prim__u42(lst9056);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
}
else
{
void* const kont9054 = arg_buffer[2];
void* const x9055 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
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
void* const kont9057 = prim_car(lst);
void* const lst9059 = prim_cdr(lst);
void* const x9058 = apply_prim__u47(lst9059);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
}
else
{
void* const kont9057 = arg_buffer[2];
void* const x9058 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
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
void* const kont9060 = prim_car(lst);
void* const lst9062 = prim_cdr(lst);
void* const x9061 = apply_prim__u61(lst9062);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
}
else
{
void* const kont9060 = arg_buffer[2];
void* const x9061 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
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
void* const kont9063 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9064 = apply_prim__u62(lst9065);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
}
else
{
void* const kont9063 = arg_buffer[2];
void* const x9064 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
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
void* const kont9066 = prim_car(lst);
void* const lst9068 = prim_cdr(lst);
void* const x9067 = apply_prim__u60(lst9068);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
}
else
{
void* const kont9066 = arg_buffer[2];
void* const x9067 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
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
void* const kont9069 = prim_car(lst);
void* const lst9071 = prim_cdr(lst);
void* const x9070 = apply_prim__u60_u61(lst9071);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
}
else
{
void* const kont9069 = arg_buffer[2];
void* const x9070 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
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
void* const kont9072 = prim_car(lst);
void* const lst9074 = prim_cdr(lst);
void* const x9073 = apply_prim__u62_u61(lst9074);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
}
else
{
void* const kont9072 = arg_buffer[2];
void* const x9073 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
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
void* const kont9075 = prim_car(lst);
void* const lst9077 = prim_cdr(lst);
void* const x9076 = apply_prim_modulo(lst9077);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
}
else
{
void* const kont9075 = arg_buffer[2];
void* const x9076 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
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
void* const kont9078 = prim_car(lst);
void* const lst9080 = prim_cdr(lst);
void* const x9079 = apply_prim_null_u63(lst9080);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
}
else
{
void* const kont9078 = arg_buffer[2];
void* const x9079 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
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
void* const kont9081 = prim_car(lst);
void* const lst9083 = prim_cdr(lst);
void* const x9082 = apply_prim_equal_u63(lst9083);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
}
else
{
void* const kont9081 = arg_buffer[2];
void* const x9082 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
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
void* const kont9084 = prim_car(lst);
void* const lst9086 = prim_cdr(lst);
void* const x9085 = apply_prim_eq_u63(lst9086);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
}
else
{
void* const kont9084 = arg_buffer[2];
void* const x9085 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
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
void* const kont9087 = prim_car(lst);
void* const lst9089 = prim_cdr(lst);
void* const x9088 = apply_prim_cons(lst9089);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
}
else
{
void* const kont9087 = arg_buffer[2];
void* const x9088 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
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
void* const kont9090 = prim_car(lst);
void* const lst9092 = prim_cdr(lst);
void* const x9091 = apply_prim_car(lst9092);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
}
else
{
void* const kont9090 = arg_buffer[2];
void* const x9091 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
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
void* const kont9093 = prim_car(lst);
void* const lst9095 = prim_cdr(lst);
void* const x9094 = apply_prim_cdr(lst9095);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
}
else
{
void* const kont9093 = arg_buffer[2];
void* const x9094 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
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
void* const kont9096 = prim_car(lst);
void* const lst9098 = prim_cdr(lst);
void* const x9097 = apply_prim_float_u45_u62int(lst9098);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
}
else
{
void* const kont9096 = arg_buffer[2];
void* const x9097 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
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
void* const kont9099 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9100 = apply_prim_int_u45_u62float(lst9101);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
}
else
{
void* const kont9099 = arg_buffer[2];
void* const x9100 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
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
void* const kont9102 = prim_car(lst);
void* const lst9104 = prim_cdr(lst);
void* const x9103 = apply_prim_hash(lst9104);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
}
else
{
void* const kont9102 = arg_buffer[2];
void* const x9103 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
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
void* const kont9105 = prim_car(lst);
void* const lst9107 = prim_cdr(lst);
void* const x9106 = apply_prim_hash_u45ref(lst9107);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
}
else
{
void* const kont9105 = arg_buffer[2];
void* const x9106 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
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
void* const kont9108 = prim_car(lst);
void* const lst9110 = prim_cdr(lst);
void* const x9109 = apply_prim_hash_u45set(lst9110);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
}
else
{
void* const kont9108 = arg_buffer[2];
void* const x9109 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
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
void* const kont9111 = prim_car(lst);
void* const lst9113 = prim_cdr(lst);
void* const x9112 = apply_prim_hash_u45keys(lst9113);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
}
else
{
void* const kont9111 = arg_buffer[2];
void* const x9112 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
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
void* const kont9114 = prim_car(lst);
void* const lst9116 = prim_cdr(lst);
void* const x9115 = apply_prim_hash_u45has_u45key_u63(lst9116);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
}
else
{
void* const kont9114 = arg_buffer[2];
void* const x9115 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
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
void* const kont9117 = prim_car(lst);
void* const lst9119 = prim_cdr(lst);
void* const x9118 = apply_prim_hash_u45count(lst9119);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
}
else
{
void* const kont9117 = arg_buffer[2];
void* const x9118 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
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
void* const kont9120 = prim_car(lst);
void* const lst9122 = prim_cdr(lst);
void* const x9121 = apply_prim_set(lst9122);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
}
else
{
void* const kont9120 = arg_buffer[2];
void* const x9121 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
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
void* const kont9123 = prim_car(lst);
void* const lst9125 = prim_cdr(lst);
void* const x9124 = apply_prim_set_u45_u62list(lst9125);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
}
else
{
void* const kont9123 = arg_buffer[2];
void* const x9124 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
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
void* const kont9126 = prim_car(lst);
void* const lst9128 = prim_cdr(lst);
void* const x9127 = apply_prim_list_u45_u62set(lst9128);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
}
else
{
void* const kont9126 = arg_buffer[2];
void* const x9127 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
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
void* const kont9129 = prim_car(lst);
void* const lst9131 = prim_cdr(lst);
void* const x9130 = apply_prim_set_u45add(lst9131);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
}
else
{
void* const kont9129 = arg_buffer[2];
void* const x9130 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
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
void* const kont9132 = prim_car(lst);
void* const lst9134 = prim_cdr(lst);
void* const x9133 = apply_prim_set_u45member_u63(lst9134);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
}
else
{
void* const kont9132 = arg_buffer[2];
void* const x9133 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
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
void* const kont9135 = prim_car(lst);
void* const lst9137 = prim_cdr(lst);
void* const x9136 = apply_prim_set_u45remove(lst9137);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
}
else
{
void* const kont9135 = arg_buffer[2];
void* const x9136 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
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
void* const kont9138 = prim_car(lst);
void* const lst9140 = prim_cdr(lst);
void* const x9139 = apply_prim_set_u45count(lst9140);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
}
else
{
void* const kont9138 = arg_buffer[2];
void* const x9139 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
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
void* const kont9141 = prim_car(lst);
void* const lst9143 = prim_cdr(lst);
void* const x9142 = apply_prim_string_u63(lst9143);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
}
else
{
void* const kont9141 = arg_buffer[2];
void* const x9142 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
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
void* const kont9144 = prim_car(lst);
void* const lst9146 = prim_cdr(lst);
void* const x9145 = apply_prim_string_u45length(lst9146);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
}
else
{
void* const kont9144 = arg_buffer[2];
void* const x9145 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
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
void* const kont9147 = prim_car(lst);
void* const lst9149 = prim_cdr(lst);
void* const x9148 = apply_prim_string_u45ref(lst9149);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
}
else
{
void* const kont9147 = arg_buffer[2];
void* const x9148 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
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
void* const kont9150 = prim_car(lst);
void* const lst9152 = prim_cdr(lst);
void* const x9151 = apply_prim_substring(lst9152);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
}
else
{
void* const kont9150 = arg_buffer[2];
void* const x9151 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
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
void* const kont9153 = prim_car(lst);
void* const lst9155 = prim_cdr(lst);
void* const x9154 = apply_prim_string_u45append(lst9155);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
}
else
{
void* const kont9153 = arg_buffer[2];
void* const x9154 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
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
void* const kont9156 = prim_car(lst);
void* const lst9158 = prim_cdr(lst);
void* const x9157 = apply_prim_string_u45_u62list(lst9158);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
}
else
{
void* const kont9156 = arg_buffer[2];
void* const x9157 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
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
void* const kont9159 = prim_car(lst);
void* const lst9161 = prim_cdr(lst);
void* const x9160 = apply_prim_exact_u45floor(lst9161);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9159))[0])();
}
else
{
void* const kont9159 = arg_buffer[2];
void* const x9160 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9159))[0])();
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
void* const kont9162 = prim_car(lst);
void* const lst9164 = prim_cdr(lst);
void* const x9163 = apply_prim_exact_u45ceiling(lst9164);
arg_buffer[1] = kont9162;
arg_buffer[2] = x9163;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9162))[0])();
}
else
{
void* const kont9162 = arg_buffer[2];
void* const x9163 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9162;
arg_buffer[2] = x9163;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9162))[0])();
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
void* const kont9165 = prim_car(lst);
void* const lst9167 = prim_cdr(lst);
void* const x9166 = apply_prim_exact_u45round(lst9167);
arg_buffer[1] = kont9165;
arg_buffer[2] = x9166;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9165))[0])();
}
else
{
void* const kont9165 = arg_buffer[2];
void* const x9166 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9165;
arg_buffer[2] = x9166;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9165))[0])();
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
void* const kont9168 = prim_car(lst);
void* const lst9170 = prim_cdr(lst);
void* const x9169 = apply_prim_abs(lst9170);
arg_buffer[1] = kont9168;
arg_buffer[2] = x9169;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9168))[0])();
}
else
{
void* const kont9168 = arg_buffer[2];
void* const x9169 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9168;
arg_buffer[2] = x9169;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9168))[0])();
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
void* const kont9171 = prim_car(lst);
void* const lst9173 = prim_cdr(lst);
void* const x9172 = apply_prim_max(lst9173);
arg_buffer[1] = kont9171;
arg_buffer[2] = x9172;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9171))[0])();
}
else
{
void* const kont9171 = arg_buffer[2];
void* const x9172 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9171;
arg_buffer[2] = x9172;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9171))[0])();
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
void* const kont9174 = prim_car(lst);
void* const lst9176 = prim_cdr(lst);
void* const x9175 = apply_prim_min(lst9176);
arg_buffer[1] = kont9174;
arg_buffer[2] = x9175;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9174))[0])();
}
else
{
void* const kont9174 = arg_buffer[2];
void* const x9175 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9174;
arg_buffer[2] = x9175;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9174))[0])();
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
void* const kont9177 = prim_car(lst);
void* const lst9179 = prim_cdr(lst);
void* const x9178 = apply_prim_expt(lst9179);
arg_buffer[1] = kont9177;
arg_buffer[2] = x9178;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9177))[0])();
}
else
{
void* const kont9177 = arg_buffer[2];
void* const x9178 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9177;
arg_buffer[2] = x9178;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9177))[0])();
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
void* const kont9180 = prim_car(lst);
void* const lst9182 = prim_cdr(lst);
void* const x9181 = apply_prim_sqrt(lst9182);
arg_buffer[1] = kont9180;
arg_buffer[2] = x9181;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9180))[0])();
}
else
{
void* const kont9180 = arg_buffer[2];
void* const x9181 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9180;
arg_buffer[2] = x9181;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9180))[0])();
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
void* const kont9183 = prim_car(lst);
void* const lst9185 = prim_cdr(lst);
void* const x9184 = apply_prim_remainder(lst9185);
arg_buffer[1] = kont9183;
arg_buffer[2] = x9184;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9183))[0])();
}
else
{
void* const kont9183 = arg_buffer[2];
void* const x9184 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9183;
arg_buffer[2] = x9184;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9183))[0])();
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
void* const kont9186 = prim_car(lst);
void* const lst9188 = prim_cdr(lst);
void* const x9187 = apply_prim_quotient(lst9188);
arg_buffer[1] = kont9186;
arg_buffer[2] = x9187;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9186))[0])();
}
else
{
void* const kont9186 = arg_buffer[2];
void* const x9187 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9186;
arg_buffer[2] = x9187;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9186))[0])();
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
void* const kont9189 = prim_car(lst);
void* const lst9191 = prim_cdr(lst);
void* const x9190 = apply_prim_random(lst9191);
arg_buffer[1] = kont9189;
arg_buffer[2] = x9190;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9189))[0])();
}
else
{
void* const kont9189 = arg_buffer[2];
void* const x9190 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9189;
arg_buffer[2] = x9190;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9189))[0])();
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
void* const kont9192 = prim_car(lst);
void* const lst9194 = prim_cdr(lst);
void* const x9193 = apply_prim_symbol_u63(lst9194);
arg_buffer[1] = kont9192;
arg_buffer[2] = x9193;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9192))[0])();
}
else
{
void* const kont9192 = arg_buffer[2];
void* const x9193 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9192;
arg_buffer[2] = x9193;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9192))[0])();
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
void* const kont9195 = prim_car(lst);
void* const lst9197 = prim_cdr(lst);
void* const x9196 = apply_prim_pair_u63(lst9197);
arg_buffer[1] = kont9195;
arg_buffer[2] = x9196;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9195))[0])();
}
else
{
void* const kont9195 = arg_buffer[2];
void* const x9196 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9195;
arg_buffer[2] = x9196;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9195))[0])();
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
void* const kont9198 = prim_car(lst);
void* const lst9200 = prim_cdr(lst);
void* const x9199 = apply_prim_positive_u63(lst9200);
arg_buffer[1] = kont9198;
arg_buffer[2] = x9199;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9198))[0])();
}
else
{
void* const kont9198 = arg_buffer[2];
void* const x9199 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9198;
arg_buffer[2] = x9199;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9198))[0])();
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
void* const kont9201 = prim_car(lst);
void* const lst9203 = prim_cdr(lst);
void* const x9202 = apply_prim_negative_u63(lst9203);
arg_buffer[1] = kont9201;
arg_buffer[2] = x9202;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9201))[0])();
}
else
{
void* const kont9201 = arg_buffer[2];
void* const x9202 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9201;
arg_buffer[2] = x9202;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9201))[0])();
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
void* const kont9204 = prim_car(lst);
void* const lst9206 = prim_cdr(lst);
void* const x9205 = apply_prim_list(lst9206);
arg_buffer[1] = kont9204;
arg_buffer[2] = x9205;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9204))[0])();
}
else
{
void* const kont9204 = arg_buffer[2];
void* const x9205 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9204;
arg_buffer[2] = x9205;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont9204))[0])();
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8905 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8905;
arg_buffer[2] = apply_prim_equal_u63_2(int9041, apply_prim_modulo_2(x, int9016));
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8905))[0])();
}

inline void even_u63_spec(void* _8949, void* kont8905, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8905;
arg_buffer[2] = apply_prim_equal_u63_2(int9041, apply_prim_modulo_2(x, int9016));
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8905))[0])();
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8906 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8906;
arg_buffer[2] = apply_prim_equal_u63_2(int9040, apply_prim_modulo_2(x, int9016));
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8906))[0])();
}

inline void odd_u63_spec(void* _8950, void* kont8906, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[1] = kont8906;
arg_buffer[2] = apply_prim_equal_u63_2(int9040, apply_prim_modulo_2(x, int9016));
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8906))[0])();
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8907 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9041, n)))
{

//clo-app
arg_buffer[1] = kont8907;
arg_buffer[2] = apply_prim_car_1(lst);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8907))[0])();
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8907, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9040));
}

}

inline void list_u45ref_spec(void* _8951, void* kont8907, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9041, n)))
{

//clo-app
arg_buffer[1] = kont8907;
arg_buffer[2] = apply_prim_car_1(lst);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8907))[0])();
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8907, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9040));
}

}

inline void lam8952_fptr() // lam8952 -> generic version 
{
//reading env
void* const env8953 = arg_buffer[1];
//reading env and args
void* const id_8735 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//if-clause
if(is_true(id_8735))
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]))))
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[2];
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}
else
{

//clo-app
member_spec(member, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

}

inline void lam8952_spec(void* env8953, void* id_8735) // lam8952 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//if-clause
if(is_true(id_8735))
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]))))
{

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[2];
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}
else
{

//clo-app
member_spec(member, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8908 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9207 = alloc_clo(lam8952_fptr, 3);

//setting env list
clo9207[1] = item;
clo9207[2] = lst;
clo9207[3] = kont8908;
void* f_lam_8909 = encode_clo(clo9207);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{

//clo-app
lam8952_spec(f_lam_8909, apply_prim_null_u63_1(item));
}
else
{

//clo-app
lam8952_spec(f_lam_8909, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8954, void* kont8908, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9208 = alloc_clo(lam8952_fptr, 3);

//setting env list
clo9208[1] = item;
clo9208[2] = lst;
clo9208[3] = kont8908;
void* f_lam_8909 = encode_clo(clo9208);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{

//clo-app
lam8952_spec(f_lam_8909, apply_prim_null_u63_1(item));
}
else
{

//clo-app
lam8952_spec(f_lam_8909, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8910 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8910;
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8910))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{

//clo-app
arg_buffer[1] = kont8910;
arg_buffer[2] = bool_t9036;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8910))[0])();
}
else
{

//clo-app
member_u63_spec(member_u63, kont8910, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8955, void* kont8910, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8910;
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8910))[0])();
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{

//clo-app
arg_buffer[1] = kont8910;
arg_buffer[2] = bool_t9036;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8910))[0])();
}
else
{

//clo-app
member_u63_spec(member_u63, kont8910, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8956_fptr() // lam8956 -> generic version 
{
//reading env
void* const env8957 = arg_buffer[1];
//reading env and args
void* const id_8750 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8957);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[2], id_8750);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8956_spec(void* env8957, void* id_8750) // lam8956 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8957);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[2], id_8750);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8911 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8911;
arg_buffer[2] = int9041;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8911))[0])();
}
else
{

//creating new closure instance
void** clo9209 = alloc_clo(lam8956_fptr, 2);

//setting env list
clo9209[1] = kont8911;
clo9209[2] = int9040;
void* f_lam_8912 = encode_clo(clo9209);



//clo-app
length_spec(length, f_lam_8912, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8958, void* kont8911, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8911;
arg_buffer[2] = int9041;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8911))[0])();
}
else
{

//creating new closure instance
void** clo9210 = alloc_clo(lam8956_fptr, 2);

//setting env list
clo9210[1] = kont8911;
clo9210[2] = int9040;
void* f_lam_8912 = encode_clo(clo9210);



//clo-app
length_spec(length, f_lam_8912, apply_prim_cdr_1(lst));
}

}

inline void lam8959_fptr() // lam8959 -> generic version 
{
//reading env
void* const env8960 = arg_buffer[1];
//reading env and args
void* const id_8756 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8756);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8959_spec(void* env8960, void* id_8756) // lam8959 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8756);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8961_fptr() // lam8961 -> generic version 
{
//reading env
void* const env8962 = arg_buffer[1];
//reading env and args
void* const id_8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8962);

//creating new closure instance
void** clo9211 = alloc_clo(lam8959_fptr, 2);

//setting env list
clo9211[1] = id_8754;
clo9211[2] = decode_clo_array[2];
void* f_lam_8914 = encode_clo(clo9211);



//clo-app
map_spec(map, f_lam_8914, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8961_spec(void* env8962, void* id_8754) // lam8961 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8962);

//creating new closure instance
void** clo9212 = alloc_clo(lam8959_fptr, 2);

//setting env list
clo9212[1] = id_8754;
clo9212[2] = decode_clo_array[2];
void* f_lam_8914 = encode_clo(clo9212);



//clo-app
map_spec(map, f_lam_8914, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8913 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8913;
arg_buffer[2] = apply_prim_list_0();
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8913))[0])();
}
else
{

//creating new closure instance
void** clo9213 = alloc_clo(lam8961_fptr, 3);

//setting env list
clo9213[1] = proc;
clo9213[2] = kont8913;
clo9213[3] = lst;
void* f_lam_8915 = encode_clo(clo9213);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8915;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9045;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8963, void* kont8913, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8913;
arg_buffer[2] = apply_prim_list_0();
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8913))[0])();
}
else
{

//creating new closure instance
void** clo9214 = alloc_clo(lam8961_fptr, 3);

//setting env list
clo9214[1] = proc;
clo9214[2] = kont8913;
clo9214[3] = lst;
void* f_lam_8915 = encode_clo(clo9214);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8915;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9045;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8964_fptr() // lam8964 -> generic version 
{
//reading env
void* const env8965 = arg_buffer[1];
//reading env and args
void* const id_8763 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8763);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8964_spec(void* env8965, void* id_8763) // lam8964 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8763);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
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

//if-clause
if(is_true(id_8760))
{

//creating new closure instance
void** clo9215 = alloc_clo(lam8964_fptr, 2);

//setting env list
clo9215[1] = apply_prim_car_1(decode_clo_array[3]);
clo9215[2] = decode_clo_array[1];
void* f_lam_8917 = encode_clo(clo9215);



//clo-app
filter_spec(filter, f_lam_8917, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void lam8966_spec(void* env8967, void* id_8760) // lam8966 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);

//if-clause
if(is_true(id_8760))
{

//creating new closure instance
void** clo9216 = alloc_clo(lam8964_fptr, 2);

//setting env list
clo9216[1] = apply_prim_car_1(decode_clo_array[3]);
clo9216[2] = decode_clo_array[1];
void* f_lam_8917 = encode_clo(clo9216);



//clo-app
filter_spec(filter, f_lam_8917, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
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
void* const kont8916 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8916;
arg_buffer[2] = apply_prim_list_0();
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8916))[0])();
}
else
{

//creating new closure instance
void** clo9217 = alloc_clo(lam8966_fptr, 3);

//setting env list
clo9217[1] = kont8916;
clo9217[2] = op;
clo9217[3] = lst;
void* f_lam_8918 = encode_clo(clo9217);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8918;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9045;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8968, void* kont8916, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8916;
arg_buffer[2] = apply_prim_list_0();
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8916))[0])();
}
else
{

//creating new closure instance
void** clo9218 = alloc_clo(lam8966_fptr, 3);

//setting env list
clo9218[1] = kont8916;
clo9218[2] = op;
clo9218[3] = lst;
void* f_lam_8918 = encode_clo(clo9218);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8918;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9045;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8919 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9041)))
{

//clo-app
arg_buffer[1] = kont8919;
arg_buffer[2] = lst;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8919))[0])();
}
else
{

//clo-app
drop_spec(drop, kont8919, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9040));
}

}

inline void drop_spec(void* _8969, void* kont8919, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9041)))
{

//clo-app
arg_buffer[1] = kont8919;
arg_buffer[2] = lst;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8919))[0])();
}
else
{

//clo-app
drop_spec(drop, kont8919, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9040));
}

}

inline void lam8970_fptr() // lam8970 -> generic version 
{
//reading env
void* const env8971 = arg_buffer[1];
//reading env and args
void* const id_8772 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8971);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[2], id_8772, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8970_spec(void* env8971, void* id_8772) // lam8970 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8971);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[2], id_8772, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8920 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8920;
arg_buffer[2] = acc;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8920))[0])();
}
else
{

//creating new closure instance
void** clo9219 = alloc_clo(lam8970_fptr, 3);

//setting env list
clo9219[1] = kont8920;
clo9219[2] = fun;
clo9219[3] = lst;
void* f_lam_8921 = encode_clo(clo9219);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8921;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int9046;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8972, void* kont8920, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8920;
arg_buffer[2] = acc;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8920))[0])();
}
else
{

//creating new closure instance
void** clo9220 = alloc_clo(lam8970_fptr, 3);

//setting env list
clo9220[1] = kont8920;
clo9220[2] = fun;
clo9220[3] = lst;
void* f_lam_8921 = encode_clo(clo9220);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8921;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int9046;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8973_fptr() // lam8973 -> generic version 
{
//reading env
void* const env8974 = arg_buffer[1];
//reading env and args
void* const id_8777 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8777;
numArgs = int9046;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8973_spec(void* env8974, void* id_8777) // lam8973 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8777;
numArgs = int9046;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8922 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8922;
arg_buffer[2] = acc;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8922))[0])();
}
else
{

//creating new closure instance
void** clo9221 = alloc_clo(lam8973_fptr, 3);

//setting env list
clo9221[1] = kont8922;
clo9221[2] = apply_prim_car_1(lst);
clo9221[3] = fun;
void* f_lam_8923 = encode_clo(clo9221);



//clo-app
foldr_spec(foldr, f_lam_8923, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8975, void* kont8922, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8922;
arg_buffer[2] = acc;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8922))[0])();
}
else
{

//creating new closure instance
void** clo9222 = alloc_clo(lam8973_fptr, 3);

//setting env list
clo9222[1] = kont8922;
clo9222[2] = apply_prim_car_1(lst);
clo9222[3] = fun;
void* f_lam_8923 = encode_clo(clo9222);



//clo-app
foldr_spec(foldr, f_lam_8923, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8924 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8924;
arg_buffer[2] = lst2;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8924))[0])();
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8924, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8976, void* kont8924, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{

//clo-app
arg_buffer[1] = kont8924;
arg_buffer[2] = lst2;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8924))[0])();
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8924, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8925 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8925, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8977, void* kont8925, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8925, lst, apply_prim_list_0());
}

inline void lam8978_fptr() // lam8978 -> generic version 
{
//reading env
void* const env8979 = arg_buffer[1];
//reading env and args
void* const id_8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8786);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8978_spec(void* env8979, void* id_8786) // lam8978 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8786);
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8926 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{

//clo-app
arg_buffer[1] = kont8926;
arg_buffer[2] = rhs;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8926))[0])();
}
else
{

//creating new closure instance
void** clo9223 = alloc_clo(lam8978_fptr, 2);

//setting env list
clo9223[1] = apply_prim_car_1(lhs);
clo9223[2] = kont8926;
void* f_lam_8927 = encode_clo(clo9223);



//clo-app
append1_spec(append1, f_lam_8927, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8980, void* kont8926, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{

//clo-app
arg_buffer[1] = kont8926;
arg_buffer[2] = rhs;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8926))[0])();
}
else
{

//creating new closure instance
void** clo9224 = alloc_clo(lam8978_fptr, 2);

//setting env list
clo9224[1] = apply_prim_car_1(lhs);
clo9224[2] = kont8926;
void* f_lam_8927 = encode_clo(clo9224);



//clo-app
append1_spec(append1, f_lam_8927, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8981_fptr() // lam8981 -> generic version 
{
//reading env
void* const env8982 = arg_buffer[1];
//reading env and args
void* const id_8793 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8982);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8793);
}

inline void lam8981_spec(void* env8982, void* id_8793) // lam8981 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8982);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8793);
}

inline void lam8983_fptr() // lam8983 -> generic version 
{
//reading env
void* const env8984 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[3], id_8788)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]));
}
else
{

//creating new closure instance
void** clo9225 = alloc_clo(lam8981_fptr, 2);

//setting env list
clo9225[1] = apply_prim_list_0();
clo9225[2] = decode_clo_array[4];
void* f_lam_8929 = encode_clo(clo9225);



//clo-app
append1_spec(append1, f_lam_8929, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[2]);
}

}

inline void lam8983_spec(void* env8984, void* id_8788) // lam8983 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[3], id_8788)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]));
}
else
{

//creating new closure instance
void** clo9226 = alloc_clo(lam8981_fptr, 2);

//setting env list
clo9226[1] = apply_prim_list_0();
clo9226[2] = decode_clo_array[4];
void* f_lam_8929 = encode_clo(clo9226);



//clo-app
append1_spec(append1, f_lam_8929, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[2]);
}

}

inline void lam8985_fptr() // lam8985 -> generic version 
{
//reading env
void* const env8986 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8986);

//creating new closure instance
void** clo9227 = alloc_clo(lam8983_fptr, 4);

//setting env list
clo9227[1] = decode_clo_array[1];
clo9227[2] = x;
clo9227[3] = int9040;
clo9227[4] = decode_clo_array[2];
void* f_lam_8930 = encode_clo(clo9227);



//clo-app
length_spec(length, f_lam_8930, x);
}

inline void lam8985_spec(void* env8986, void* x) // lam8985 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8986);

//creating new closure instance
void** clo9228 = alloc_clo(lam8983_fptr, 4);

//setting env list
clo9228[1] = decode_clo_array[1];
clo9228[2] = x;
clo9228[3] = int9040;
clo9228[4] = decode_clo_array[2];
void* f_lam_8930 = encode_clo(clo9228);



//clo-app
length_spec(length, f_lam_8930, x);
}

void append_fptr() // append 
{
//reading env
void* const _8987 = arg_buffer[1];
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
void** clo9229 = alloc_clo(lam8985_fptr, 2);

//setting env list
clo9229[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9229[2] = apply_prim_car_1(vargs);
void* f_lam_8931 = encode_clo(clo9229);



//clo-app
lam8985_spec(f_lam_8931, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8988_fptr() // lam8988 -> generic version 
{
//reading env
void* const env8989 = arg_buffer[1];
//reading env and args
void* const xy8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = xy8796;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8988_spec(void* env8989, void* xy8796) // lam8988 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = xy8796;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8932 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9041)))
{

//creating new closure instance
void** clo9230 = alloc_clo(lam8988_fptr, 1);

//setting env list
clo9230[1] = kont8932;
void* f_lam_8933 = encode_clo(clo9230);



//clo-app
reverse_spec(reverse, f_lam_8933, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8932, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9040), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8990, void* kont8932, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9041)))
{

//creating new closure instance
void** clo9231 = alloc_clo(lam8988_fptr, 1);

//setting env list
clo9231[1] = kont8932;
void* f_lam_8933 = encode_clo(clo9231);



//clo-app
reverse_spec(reverse, f_lam_8933, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8932, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9040), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8934 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8934, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8991, void* kont8934, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8934, lst, n, apply_prim_list_0());
}

inline void lam8992_fptr() // lam8992 -> generic version 
{
//reading env
void* const env8993 = arg_buffer[1];
//reading env and args
void* const id_8816 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8993);

//if-clause
if(is_true(id_8816))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[2], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9040), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

}

inline void lam8992_spec(void* env8993, void* id_8816) // lam8992 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8993);

//if-clause
if(is_true(id_8816))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[2], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9040), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

}

inline void lam8994_fptr() // lam8994 -> generic version 
{
//reading env
void* const env8995 = arg_buffer[1];
//reading env and args
void* const id_8810 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8995);

//if-clause
if(is_true(id_8810))
{

//creating new closure instance
void** clo9232 = alloc_clo(lam8992_fptr, 4);

//setting env list
clo9232[1] = decode_clo_array[1];
clo9232[2] = decode_clo_array[2];
clo9232[3] = decode_clo_array[3];
clo9232[4] = decode_clo_array[4];
void* f_lam_8936 = encode_clo(clo9232);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[4]))))
{

//clo-app
lam8992_spec(f_lam_8936, bool_f9034);
}
else
{

//clo-app
lam8992_spec(f_lam_8936, bool_t9036);
}

}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

}

inline void lam8994_spec(void* env8995, void* id_8810) // lam8994 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8995);

//if-clause
if(is_true(id_8810))
{

//creating new closure instance
void** clo9233 = alloc_clo(lam8992_fptr, 4);

//setting env list
clo9233[1] = decode_clo_array[1];
clo9233[2] = decode_clo_array[2];
clo9233[3] = decode_clo_array[3];
clo9233[4] = decode_clo_array[4];
void* f_lam_8936 = encode_clo(clo9233);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[4]))))
{

//clo-app
lam8992_spec(f_lam_8936, bool_f9034);
}
else
{

//clo-app
lam8992_spec(f_lam_8936, bool_t9036);
}

}
else
{

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = bool_f9034;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

}

inline void ok_u63_fptr() // ok? -> generic version 
{
//reading env and args
void* const kont8935 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{

//clo-app
arg_buffer[1] = kont8935;
arg_buffer[2] = bool_t9036;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8935))[0])();
}
else
{

//creating new closure instance
void** clo9234 = alloc_clo(lam8994_fptr, 4);

//setting env list
clo9234[1] = placed;
clo9234[2] = kont8935;
clo9234[3] = row;
clo9234[4] = dist;
void* f_lam_8937 = encode_clo(clo9234);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{

//clo-app
lam8994_spec(f_lam_8937, bool_f9034);
}
else
{

//clo-app
lam8994_spec(f_lam_8937, bool_t9036);
}

}

}

inline void ok_u63_spec(void* _8996, void* kont8935, void* row, void* dist, void* placed) // ok? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{

//clo-app
arg_buffer[1] = kont8935;
arg_buffer[2] = bool_t9036;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8935))[0])();
}
else
{

//creating new closure instance
void** clo9235 = alloc_clo(lam8994_fptr, 4);

//setting env list
clo9235[1] = placed;
clo9235[2] = kont8935;
clo9235[3] = row;
clo9235[4] = dist;
void* f_lam_8937 = encode_clo(clo9235);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{

//clo-app
lam8994_spec(f_lam_8937, bool_f9034);
}
else
{

//clo-app
lam8994_spec(f_lam_8937, bool_t9036);
}

}

}

inline void lam8997_fptr() // lam8997 -> generic version 
{
//reading env
void* const env8998 = arg_buffer[1];
//reading env and args
void* const id_8840 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8998);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim_cons_2(apply_prim_list_3(id_8840, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]), decode_clo_array[4])), apply_prim_cdr_1(decode_clo_array[2]));
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8997_spec(void* env8998, void* id_8840) // lam8997 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8998);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = apply_prim_cons_2(apply_prim_list_3(id_8840, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]), decode_clo_array[4])), apply_prim_cdr_1(decode_clo_array[2]));
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8999_fptr() // lam8999 -> generic version 
{
//reading env
void* const env9000 = arg_buffer[1];
//reading env and args
void* const id_8847 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8847), decode_clo_array[3]);
}

inline void lam8999_spec(void* env9000, void* id_8847) // lam8999 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8847), decode_clo_array[3]);
}

inline void lam9001_fptr() // lam9001 -> generic version 
{
//reading env
void* const env9002 = arg_buffer[1];
//reading env and args
void* const id_8838 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9002);

//creating new closure instance
void** clo9236 = alloc_clo(lam8999_fptr, 3);

//setting env list
clo9236[1] = decode_clo_array[1];
clo9236[2] = decode_clo_array[5];
clo9236[3] = decode_clo_array[6];
void* f_lam_8939 = encode_clo(clo9236);



//if-clause
if(is_true(id_8838))
{

//creating new closure instance
void** clo9237 = alloc_clo(lam8997_fptr, 4);

//setting env list
clo9237[1] = f_lam_8939;
clo9237[2] = decode_clo_array[7];
clo9237[3] = decode_clo_array[2];
clo9237[4] = decode_clo_array[4];
void* f_lam_8940 = encode_clo(clo9237);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8940;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[2]);
arg_buffer[4] = decode_clo_array[3];
numArgs = int9046;
append_fptr();
}
else
{

//clo-app
lam8999_spec(f_lam_8939, apply_prim_cdr_1(decode_clo_array[7]));
}

}

inline void lam9001_spec(void* env9002, void* id_8838) // lam9001 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9002);

//creating new closure instance
void** clo9238 = alloc_clo(lam8999_fptr, 3);

//setting env list
clo9238[1] = decode_clo_array[1];
clo9238[2] = decode_clo_array[5];
clo9238[3] = decode_clo_array[6];
void* f_lam_8939 = encode_clo(clo9238);



//if-clause
if(is_true(id_8838))
{

//creating new closure instance
void** clo9239 = alloc_clo(lam8997_fptr, 4);

//setting env list
clo9239[1] = f_lam_8939;
clo9239[2] = decode_clo_array[7];
clo9239[3] = decode_clo_array[2];
clo9239[4] = decode_clo_array[4];
void* f_lam_8940 = encode_clo(clo9239);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8940;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[2]);
arg_buffer[4] = decode_clo_array[3];
numArgs = int9046;
append_fptr();
}
else
{

//clo-app
lam8999_spec(f_lam_8939, apply_prim_cdr_1(decode_clo_array[7]));
}

}

inline void lam9003_fptr() // lam9003 -> generic version 
{
//reading env
void* const env9004 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9004);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int9040));
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
void** clo9240 = alloc_clo(lam9001_fptr, 7);

//setting env list
clo9240[1] = decode_clo_array[1];
clo9240[2] = decode_clo_array[2];
clo9240[3] = decode_clo_array[3];
clo9240[4] = z;
clo9240[5] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9240[6] = decode_clo_array[4];
clo9240[7] = decode_clo_array[5];
void* f_lam_8941 = encode_clo(clo9240);



//clo-app
ok_u63_spec(ok_u63, f_lam_8941, apply_prim_car_1(decode_clo_array[2]), int9040, z);
}

}

inline void lam9003_spec(void* env9004, void* z) // lam9003 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9004);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int9040));
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
void** clo9241 = alloc_clo(lam9001_fptr, 7);

//setting env list
clo9241[1] = decode_clo_array[1];
clo9241[2] = decode_clo_array[2];
clo9241[3] = decode_clo_array[3];
clo9241[4] = z;
clo9241[5] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9241[6] = decode_clo_array[4];
clo9241[7] = decode_clo_array[5];
void* f_lam_8941 = encode_clo(clo9241);



//clo-app
ok_u63_spec(ok_u63, f_lam_8941, apply_prim_car_1(decode_clo_array[2]), int9040, z);
}

}

inline void lam9005_fptr() // lam9005 -> generic version 
{
//reading env
void* const env9006 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9006);

//creating new closure instance
void** clo9242 = alloc_clo(lam9003_fptr, 5);

//setting env list
clo9242[1] = decode_clo_array[1];
clo9242[2] = decode_clo_array[2];
clo9242[3] = y;
clo9242[4] = decode_clo_array[3];
clo9242[5] = decode_clo_array[5];
void* f_lam_8942 = encode_clo(clo9242);



//clo-app
lam9003_spec(f_lam_8942, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void lam9005_spec(void* env9006, void* y) // lam9005 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9006);

//creating new closure instance
void** clo9243 = alloc_clo(lam9003_fptr, 5);

//setting env list
clo9243[1] = decode_clo_array[1];
clo9243[2] = decode_clo_array[2];
clo9243[3] = y;
clo9243[4] = decode_clo_array[3];
clo9243[5] = decode_clo_array[5];
void* f_lam_8942 = encode_clo(clo9243);



//clo-app
lam9003_spec(f_lam_8942, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version 
{
//reading env and args
void* const kont8938 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{

//clo-app
arg_buffer[1] = kont8938;
arg_buffer[2] = count;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8938))[0])();
}
else
{

//creating new closure instance
void** clo9244 = alloc_clo(lam9005_fptr, 5);

//setting env list
clo9244[1] = kont8938;
clo9244[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9244[3] = count;
clo9244[4] = apply_prim_car_1(stack);
clo9244[5] = stack;
void* f_lam_8943 = encode_clo(clo9244);



//clo-app
lam9005_spec(f_lam_8943, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void q_u45helper_spec(void* _9007, void* kont8938, void* stack, void* count) // q-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{

//clo-app
arg_buffer[1] = kont8938;
arg_buffer[2] = count;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8938))[0])();
}
else
{

//creating new closure instance
void** clo9245 = alloc_clo(lam9005_fptr, 5);

//setting env list
clo9245[1] = kont8938;
clo9245[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9245[3] = count;
clo9245[4] = apply_prim_car_1(stack);
clo9245[5] = stack;
void* f_lam_8943 = encode_clo(clo9245);



//clo-app
lam9005_spec(f_lam_8943, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void iota1_fptr() // iota1 -> generic version 
{
//reading env and args
void* const kont8944 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9041)))
{

//clo-app
arg_buffer[1] = kont8944;
arg_buffer[2] = l;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8944))[0])();
}
else
{

//clo-app
iota1_spec(iota1, kont8944, apply_prim__u45_2(n, int9040), apply_prim_cons_2(n, l));
}

}

inline void iota1_spec(void* _9008, void* kont8944, void* n, void* l) // iota1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9041)))
{

//clo-app
arg_buffer[1] = kont8944;
arg_buffer[2] = l;
numArgs = int9044;
reinterpret_cast<void (*)()>((decode_clo(kont8944))[0])();
}
else
{

//clo-app
iota1_spec(iota1, kont8944, apply_prim__u45_2(n, int9040), apply_prim_cons_2(n, l));
}

}

inline void lam9009_fptr() // lam9009 -> generic version 
{
//reading env
void* const env9010 = arg_buffer[1];
//reading env and args
void* const id_8855 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8855, apply_prim_list_0(), apply_prim_list_0())), int9041);
}

inline void lam9009_spec(void* env9010, void* id_8855) // lam9009 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8855, apply_prim_list_0(), apply_prim_list_0())), int9041);
}

inline void nqueens_fptr() // nqueens -> generic version 
{
//reading env and args
void* const kont8945 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9246 = alloc_clo(lam9009_fptr, 1);

//setting env list
clo9246[1] = kont8945;
void* f_lam_8946 = encode_clo(clo9246);



//clo-app
iota1_spec(iota1, f_lam_8946, n, apply_prim_list_0());
}

inline void nqueens_spec(void* _9011, void* kont8945, void* n) // nqueens 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9247 = alloc_clo(lam9009_fptr, 1);

//setting env list
clo9247[1] = kont8945;
void* f_lam_8946 = encode_clo(clo9247);



//clo-app
iota1_spec(iota1, f_lam_8946, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8947 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8947, int9042);
}

inline void brouhaha_main_spec(void* _9012, void* kont8947) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8947, int9042);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9041 = reinterpret_cast<void *>(encode_int(0));
bool_t9036 = encode_bool(true);
int9040 = reinterpret_cast<void *>(encode_int(1));
bool_f9034 = encode_bool(false);
int9016 = reinterpret_cast<void *>(encode_int(2));
int9042 = reinterpret_cast<void *>(encode_int(14));



// initializing global integer vars
int9043 = 1;
int9044 = 2;
int9045 = 3;
int9046 = 4;
int9047 = 5;

//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

