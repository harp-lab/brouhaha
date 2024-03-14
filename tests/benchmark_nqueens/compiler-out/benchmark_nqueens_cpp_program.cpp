#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9094;
void* bool_t9089;
void* int9093;
void* bool_f9087;
void* int9067;
void* int9095;



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
void even_u63_spec(void* _8992, void* kont8943, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8993, void* kont8944, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8994, void* kont8945, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8995_fptr(); // lam8995
void lam8995_spec(void* env8996, void* id_8751); // lam8995
void* lam8995 = encode_clo(alloc_clo(lam8995_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8997, void* kont8946, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8998, void* kont8948, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8999_fptr(); // lam8999
void lam8999_spec(void* env9000, void* id_8766); // lam8999
void* lam8999 = encode_clo(alloc_clo(lam8999_fptr, 0));

void length_fptr(); // length
void length_spec(void* _9001, void* kont8949, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam9002_fptr(); // lam9002
void lam9002_spec(void* env9003, void* id_8772); // lam9002
void* lam9002 = encode_clo(alloc_clo(lam9002_fptr, 0));

void lam9004_fptr(); // lam9004
void lam9004_spec(void* env9005, void* id_8770); // lam9004
void* lam9004 = encode_clo(alloc_clo(lam9004_fptr, 0));

void map_fptr(); // map
void map_spec(void* _9006, void* kont8951, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam9007_fptr(); // lam9007
void lam9007_spec(void* env9008, void* id_8779); // lam9007
void* lam9007 = encode_clo(alloc_clo(lam9007_fptr, 0));

void lam9009_fptr(); // lam9009
void lam9009_spec(void* env9010, void* id_8776); // lam9009
void* lam9009 = encode_clo(alloc_clo(lam9009_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _9011, void* kont8954, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _9012, void* kont8957, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam9013_fptr(); // lam9013
void lam9013_spec(void* env9014, void* id_8788); // lam9013
void* lam9013 = encode_clo(alloc_clo(lam9013_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _9015, void* kont8958, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9016_fptr(); // lam9016
void lam9016_spec(void* env9017, void* id_8793); // lam9016
void* lam9016 = encode_clo(alloc_clo(lam9016_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _9018, void* kont8960, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _9019, void* kont8962, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _9020, void* kont8963, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam9021_fptr(); // lam9021
void lam9021_spec(void* env9022, void* id_8802); // lam9021
void* lam9021 = encode_clo(alloc_clo(lam9021_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _9023, void* kont8964, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9024_fptr(); // lam9024
void lam9024_spec(void* env9025, void* id_8809); // lam9024
void* lam9024 = encode_clo(alloc_clo(lam9024_fptr, 0));

void lam9026_fptr(); // lam9026
void lam9026_spec(void* env9027, void* id_8804); // lam9026
void* lam9026 = encode_clo(alloc_clo(lam9026_fptr, 0));

void lam9028_fptr(); // lam9028
void lam9028_spec(void* env9029, void* x); // lam9028
void* lam9028 = encode_clo(alloc_clo(lam9028_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9031_fptr(); // lam9031
void lam9031_spec(void* env9032, void* xy8812); // lam9031
void* lam9031 = encode_clo(alloc_clo(lam9031_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _9033, void* kont8970, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _9034, void* kont8972, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam9035_fptr(); // lam9035
void lam9035_spec(void* env9036, void* id_8826); // lam9035
void* lam9035 = encode_clo(alloc_clo(lam9035_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _9037, void* kont8973, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam9038_fptr(); // lam9038
void lam9038_spec(void* env9039, void* id_8833); // lam9038
void* lam9038 = encode_clo(alloc_clo(lam9038_fptr, 0));

void lam9040_fptr(); // lam9040
void lam9040_spec(void* env9041, void* id_8831); // lam9040
void* lam9040 = encode_clo(alloc_clo(lam9040_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _9042, void* kont8975, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam9043_fptr(); // lam9043
void lam9043_spec(void* env9044, void* id_8848); // lam9043
void* lam9043 = encode_clo(alloc_clo(lam9043_fptr, 0));

void lam9045_fptr(); // lam9045
void lam9045_spec(void* env9046, void* id_8842); // lam9045
void* lam9045 = encode_clo(alloc_clo(lam9045_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void* _9047, void* kont8978, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam9048_fptr(); // lam9048
void lam9048_spec(void* env9049, void* id_8872); // lam9048
void* lam9048 = encode_clo(alloc_clo(lam9048_fptr, 0));

void lam9050_fptr(); // lam9050
void lam9050_spec(void* env9051, void* id_8879); // lam9050
void* lam9050 = encode_clo(alloc_clo(lam9050_fptr, 0));

void lam9052_fptr(); // lam9052
void lam9052_spec(void* env9053, void* id_8870); // lam9052
void* lam9052 = encode_clo(alloc_clo(lam9052_fptr, 0));

void lam9054_fptr(); // lam9054
void lam9054_spec(void* env9055, void* z); // lam9054
void* lam9054 = encode_clo(alloc_clo(lam9054_fptr, 0));

void lam9056_fptr(); // lam9056
void lam9056_spec(void* env9057, void* y); // lam9056
void* lam9056 = encode_clo(alloc_clo(lam9056_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void* _9058, void* kont8981, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void iota1_spec(void* _9059, void* kont8987, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam9060_fptr(); // lam9060
void lam9060_spec(void* env9061, void* id_8887); // lam9060
void* lam9060 = encode_clo(alloc_clo(lam9060_fptr, 0));

void nqueens_fptr(); // nqueens
void nqueens_spec(void* _9062, void* kont8988, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9063, void* kont8990); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9096 = prim_car(lst);
void* const lst9098 = prim_cdr(lst);
void* const x9097 = apply_prim__u43(lst9098);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
}
else
{
void* const kont9096 = arg_buffer[2];
void* const x9097 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9096))[0])(kont9096, x9097);
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
void* const kont9099 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9100 = apply_prim__u45(lst9101);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
}
else
{
void* const kont9099 = arg_buffer[2];
void* const x9100 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9099))[0])(kont9099, x9100);
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
void* const kont9102 = prim_car(lst);
void* const lst9104 = prim_cdr(lst);
void* const x9103 = apply_prim__u42(lst9104);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
}
else
{
void* const kont9102 = arg_buffer[2];
void* const x9103 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9102))[0])(kont9102, x9103);
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
void* const kont9105 = prim_car(lst);
void* const lst9107 = prim_cdr(lst);
void* const x9106 = apply_prim__u47(lst9107);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
}
else
{
void* const kont9105 = arg_buffer[2];
void* const x9106 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9105))[0])(kont9105, x9106);
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
void* const kont9108 = prim_car(lst);
void* const lst9110 = prim_cdr(lst);
void* const x9109 = apply_prim__u61(lst9110);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
}
else
{
void* const kont9108 = arg_buffer[2];
void* const x9109 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9108))[0])(kont9108, x9109);
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
void* const kont9111 = prim_car(lst);
void* const lst9113 = prim_cdr(lst);
void* const x9112 = apply_prim__u62(lst9113);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
}
else
{
void* const kont9111 = arg_buffer[2];
void* const x9112 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9111))[0])(kont9111, x9112);
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
void* const kont9114 = prim_car(lst);
void* const lst9116 = prim_cdr(lst);
void* const x9115 = apply_prim__u60(lst9116);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
}
else
{
void* const kont9114 = arg_buffer[2];
void* const x9115 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9114))[0])(kont9114, x9115);
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
void* const kont9117 = prim_car(lst);
void* const lst9119 = prim_cdr(lst);
void* const x9118 = apply_prim__u60_u61(lst9119);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
}
else
{
void* const kont9117 = arg_buffer[2];
void* const x9118 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9117))[0])(kont9117, x9118);
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
void* const kont9120 = prim_car(lst);
void* const lst9122 = prim_cdr(lst);
void* const x9121 = apply_prim__u62_u61(lst9122);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
}
else
{
void* const kont9120 = arg_buffer[2];
void* const x9121 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9120))[0])(kont9120, x9121);
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
void* const kont9123 = prim_car(lst);
void* const lst9125 = prim_cdr(lst);
void* const x9124 = apply_prim_modulo(lst9125);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
}
else
{
void* const kont9123 = arg_buffer[2];
void* const x9124 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9123))[0])(kont9123, x9124);
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
void* const kont9126 = prim_car(lst);
void* const lst9128 = prim_cdr(lst);
void* const x9127 = apply_prim_null_u63(lst9128);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
}
else
{
void* const kont9126 = arg_buffer[2];
void* const x9127 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9126))[0])(kont9126, x9127);
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
void* const kont9129 = prim_car(lst);
void* const lst9131 = prim_cdr(lst);
void* const x9130 = apply_prim_equal_u63(lst9131);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
}
else
{
void* const kont9129 = arg_buffer[2];
void* const x9130 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9129))[0])(kont9129, x9130);
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
void* const kont9132 = prim_car(lst);
void* const lst9134 = prim_cdr(lst);
void* const x9133 = apply_prim_eq_u63(lst9134);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
}
else
{
void* const kont9132 = arg_buffer[2];
void* const x9133 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9132))[0])(kont9132, x9133);
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
void* const kont9135 = prim_car(lst);
void* const lst9137 = prim_cdr(lst);
void* const x9136 = apply_prim_cons(lst9137);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
}
else
{
void* const kont9135 = arg_buffer[2];
void* const x9136 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9135))[0])(kont9135, x9136);
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
void* const kont9138 = prim_car(lst);
void* const lst9140 = prim_cdr(lst);
void* const x9139 = apply_prim_car(lst9140);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
}
else
{
void* const kont9138 = arg_buffer[2];
void* const x9139 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9138))[0])(kont9138, x9139);
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
void* const kont9141 = prim_car(lst);
void* const lst9143 = prim_cdr(lst);
void* const x9142 = apply_prim_cdr(lst9143);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
}
else
{
void* const kont9141 = arg_buffer[2];
void* const x9142 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9141))[0])(kont9141, x9142);
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
void* const kont9144 = prim_car(lst);
void* const lst9146 = prim_cdr(lst);
void* const x9145 = apply_prim_float_u45_u62int(lst9146);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
}
else
{
void* const kont9144 = arg_buffer[2];
void* const x9145 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9144))[0])(kont9144, x9145);
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
void* const kont9147 = prim_car(lst);
void* const lst9149 = prim_cdr(lst);
void* const x9148 = apply_prim_int_u45_u62float(lst9149);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
}
else
{
void* const kont9147 = arg_buffer[2];
void* const x9148 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9147))[0])(kont9147, x9148);
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
void* const kont9150 = prim_car(lst);
void* const lst9152 = prim_cdr(lst);
void* const x9151 = apply_prim_hash(lst9152);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
}
else
{
void* const kont9150 = arg_buffer[2];
void* const x9151 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9150))[0])(kont9150, x9151);
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
void* const kont9153 = prim_car(lst);
void* const lst9155 = prim_cdr(lst);
void* const x9154 = apply_prim_hash_u45ref(lst9155);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
}
else
{
void* const kont9153 = arg_buffer[2];
void* const x9154 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9153))[0])(kont9153, x9154);
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
void* const kont9156 = prim_car(lst);
void* const lst9158 = prim_cdr(lst);
void* const x9157 = apply_prim_hash_u45set(lst9158);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
}
else
{
void* const kont9156 = arg_buffer[2];
void* const x9157 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9156))[0])(kont9156, x9157);
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
void* const kont9159 = prim_car(lst);
void* const lst9161 = prim_cdr(lst);
void* const x9160 = apply_prim_hash_u45keys(lst9161);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9159))[0])();
}
else
{
void* const kont9159 = arg_buffer[2];
void* const x9160 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9159))[0])(kont9159, x9160);
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
void* const kont9162 = prim_car(lst);
void* const lst9164 = prim_cdr(lst);
void* const x9163 = apply_prim_hash_u45has_u45key_u63(lst9164);
arg_buffer[1] = kont9162;
arg_buffer[2] = x9163;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9162))[0])();
}
else
{
void* const kont9162 = arg_buffer[2];
void* const x9163 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9162))[0])(kont9162, x9163);
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
void* const kont9165 = prim_car(lst);
void* const lst9167 = prim_cdr(lst);
void* const x9166 = apply_prim_hash_u45count(lst9167);
arg_buffer[1] = kont9165;
arg_buffer[2] = x9166;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9165))[0])();
}
else
{
void* const kont9165 = arg_buffer[2];
void* const x9166 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9165))[0])(kont9165, x9166);
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
void* const kont9168 = prim_car(lst);
void* const lst9170 = prim_cdr(lst);
void* const x9169 = apply_prim_set(lst9170);
arg_buffer[1] = kont9168;
arg_buffer[2] = x9169;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9168))[0])();
}
else
{
void* const kont9168 = arg_buffer[2];
void* const x9169 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9168))[0])(kont9168, x9169);
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
void* const kont9171 = prim_car(lst);
void* const lst9173 = prim_cdr(lst);
void* const x9172 = apply_prim_set_u45_u62list(lst9173);
arg_buffer[1] = kont9171;
arg_buffer[2] = x9172;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9171))[0])();
}
else
{
void* const kont9171 = arg_buffer[2];
void* const x9172 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9171))[0])(kont9171, x9172);
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
void* const kont9174 = prim_car(lst);
void* const lst9176 = prim_cdr(lst);
void* const x9175 = apply_prim_list_u45_u62set(lst9176);
arg_buffer[1] = kont9174;
arg_buffer[2] = x9175;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9174))[0])();
}
else
{
void* const kont9174 = arg_buffer[2];
void* const x9175 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9174))[0])(kont9174, x9175);
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
void* const kont9177 = prim_car(lst);
void* const lst9179 = prim_cdr(lst);
void* const x9178 = apply_prim_set_u45add(lst9179);
arg_buffer[1] = kont9177;
arg_buffer[2] = x9178;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9177))[0])();
}
else
{
void* const kont9177 = arg_buffer[2];
void* const x9178 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9177))[0])(kont9177, x9178);
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
void* const kont9180 = prim_car(lst);
void* const lst9182 = prim_cdr(lst);
void* const x9181 = apply_prim_set_u45member_u63(lst9182);
arg_buffer[1] = kont9180;
arg_buffer[2] = x9181;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9180))[0])();
}
else
{
void* const kont9180 = arg_buffer[2];
void* const x9181 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9180))[0])(kont9180, x9181);
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
void* const kont9183 = prim_car(lst);
void* const lst9185 = prim_cdr(lst);
void* const x9184 = apply_prim_set_u45remove(lst9185);
arg_buffer[1] = kont9183;
arg_buffer[2] = x9184;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9183))[0])();
}
else
{
void* const kont9183 = arg_buffer[2];
void* const x9184 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9183))[0])(kont9183, x9184);
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
void* const kont9186 = prim_car(lst);
void* const lst9188 = prim_cdr(lst);
void* const x9187 = apply_prim_set_u45count(lst9188);
arg_buffer[1] = kont9186;
arg_buffer[2] = x9187;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9186))[0])();
}
else
{
void* const kont9186 = arg_buffer[2];
void* const x9187 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9186))[0])(kont9186, x9187);
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
void* const kont9189 = prim_car(lst);
void* const lst9191 = prim_cdr(lst);
void* const x9190 = apply_prim_string_u63(lst9191);
arg_buffer[1] = kont9189;
arg_buffer[2] = x9190;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9189))[0])();
}
else
{
void* const kont9189 = arg_buffer[2];
void* const x9190 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9189))[0])(kont9189, x9190);
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
void* const kont9192 = prim_car(lst);
void* const lst9194 = prim_cdr(lst);
void* const x9193 = apply_prim_string_u45length(lst9194);
arg_buffer[1] = kont9192;
arg_buffer[2] = x9193;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9192))[0])();
}
else
{
void* const kont9192 = arg_buffer[2];
void* const x9193 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9192))[0])(kont9192, x9193);
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
void* const kont9195 = prim_car(lst);
void* const lst9197 = prim_cdr(lst);
void* const x9196 = apply_prim_string_u45ref(lst9197);
arg_buffer[1] = kont9195;
arg_buffer[2] = x9196;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9195))[0])();
}
else
{
void* const kont9195 = arg_buffer[2];
void* const x9196 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9195))[0])(kont9195, x9196);
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
void* const kont9198 = prim_car(lst);
void* const lst9200 = prim_cdr(lst);
void* const x9199 = apply_prim_substring(lst9200);
arg_buffer[1] = kont9198;
arg_buffer[2] = x9199;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9198))[0])();
}
else
{
void* const kont9198 = arg_buffer[2];
void* const x9199 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9198))[0])(kont9198, x9199);
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
void* const kont9201 = prim_car(lst);
void* const lst9203 = prim_cdr(lst);
void* const x9202 = apply_prim_string_u45append(lst9203);
arg_buffer[1] = kont9201;
arg_buffer[2] = x9202;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9201))[0])();
}
else
{
void* const kont9201 = arg_buffer[2];
void* const x9202 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9201))[0])(kont9201, x9202);
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
void* const kont9204 = prim_car(lst);
void* const lst9206 = prim_cdr(lst);
void* const x9205 = apply_prim_string_u45_u62list(lst9206);
arg_buffer[1] = kont9204;
arg_buffer[2] = x9205;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9204))[0])();
}
else
{
void* const kont9204 = arg_buffer[2];
void* const x9205 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9204))[0])(kont9204, x9205);
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
void* const kont9207 = prim_car(lst);
void* const lst9209 = prim_cdr(lst);
void* const x9208 = apply_prim_exact_u45floor(lst9209);
arg_buffer[1] = kont9207;
arg_buffer[2] = x9208;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9207))[0])();
}
else
{
void* const kont9207 = arg_buffer[2];
void* const x9208 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9207))[0])(kont9207, x9208);
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
void* const kont9210 = prim_car(lst);
void* const lst9212 = prim_cdr(lst);
void* const x9211 = apply_prim_exact_u45ceiling(lst9212);
arg_buffer[1] = kont9210;
arg_buffer[2] = x9211;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9210))[0])();
}
else
{
void* const kont9210 = arg_buffer[2];
void* const x9211 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9210))[0])(kont9210, x9211);
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
void* const kont9213 = prim_car(lst);
void* const lst9215 = prim_cdr(lst);
void* const x9214 = apply_prim_exact_u45round(lst9215);
arg_buffer[1] = kont9213;
arg_buffer[2] = x9214;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9213))[0])();
}
else
{
void* const kont9213 = arg_buffer[2];
void* const x9214 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9213))[0])(kont9213, x9214);
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
void* const kont9216 = prim_car(lst);
void* const lst9218 = prim_cdr(lst);
void* const x9217 = apply_prim_abs(lst9218);
arg_buffer[1] = kont9216;
arg_buffer[2] = x9217;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9216))[0])();
}
else
{
void* const kont9216 = arg_buffer[2];
void* const x9217 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9216))[0])(kont9216, x9217);
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
void* const kont9219 = prim_car(lst);
void* const lst9221 = prim_cdr(lst);
void* const x9220 = apply_prim_max(lst9221);
arg_buffer[1] = kont9219;
arg_buffer[2] = x9220;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9219))[0])();
}
else
{
void* const kont9219 = arg_buffer[2];
void* const x9220 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9219))[0])(kont9219, x9220);
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
void* const kont9222 = prim_car(lst);
void* const lst9224 = prim_cdr(lst);
void* const x9223 = apply_prim_min(lst9224);
arg_buffer[1] = kont9222;
arg_buffer[2] = x9223;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9222))[0])();
}
else
{
void* const kont9222 = arg_buffer[2];
void* const x9223 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9222))[0])(kont9222, x9223);
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
void* const kont9225 = prim_car(lst);
void* const lst9227 = prim_cdr(lst);
void* const x9226 = apply_prim_expt(lst9227);
arg_buffer[1] = kont9225;
arg_buffer[2] = x9226;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9225))[0])();
}
else
{
void* const kont9225 = arg_buffer[2];
void* const x9226 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9225))[0])(kont9225, x9226);
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
void* const kont9228 = prim_car(lst);
void* const lst9230 = prim_cdr(lst);
void* const x9229 = apply_prim_sqrt(lst9230);
arg_buffer[1] = kont9228;
arg_buffer[2] = x9229;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9228))[0])();
}
else
{
void* const kont9228 = arg_buffer[2];
void* const x9229 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9228))[0])(kont9228, x9229);
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
void* const kont9231 = prim_car(lst);
void* const lst9233 = prim_cdr(lst);
void* const x9232 = apply_prim_remainder(lst9233);
arg_buffer[1] = kont9231;
arg_buffer[2] = x9232;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9231))[0])();
}
else
{
void* const kont9231 = arg_buffer[2];
void* const x9232 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9231))[0])(kont9231, x9232);
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
void* const kont9234 = prim_car(lst);
void* const lst9236 = prim_cdr(lst);
void* const x9235 = apply_prim_quotient(lst9236);
arg_buffer[1] = kont9234;
arg_buffer[2] = x9235;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9234))[0])();
}
else
{
void* const kont9234 = arg_buffer[2];
void* const x9235 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9234))[0])(kont9234, x9235);
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
void* const kont9237 = prim_car(lst);
void* const lst9239 = prim_cdr(lst);
void* const x9238 = apply_prim_random(lst9239);
arg_buffer[1] = kont9237;
arg_buffer[2] = x9238;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9237))[0])();
}
else
{
void* const kont9237 = arg_buffer[2];
void* const x9238 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9237))[0])(kont9237, x9238);
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
void* const kont9240 = prim_car(lst);
void* const lst9242 = prim_cdr(lst);
void* const x9241 = apply_prim_symbol_u63(lst9242);
arg_buffer[1] = kont9240;
arg_buffer[2] = x9241;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9240))[0])();
}
else
{
void* const kont9240 = arg_buffer[2];
void* const x9241 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9240))[0])(kont9240, x9241);
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
void* const kont9243 = prim_car(lst);
void* const lst9245 = prim_cdr(lst);
void* const x9244 = apply_prim_pair_u63(lst9245);
arg_buffer[1] = kont9243;
arg_buffer[2] = x9244;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9243))[0])();
}
else
{
void* const kont9243 = arg_buffer[2];
void* const x9244 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9243))[0])(kont9243, x9244);
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
void* const kont9246 = prim_car(lst);
void* const lst9248 = prim_cdr(lst);
void* const x9247 = apply_prim_positive_u63(lst9248);
arg_buffer[1] = kont9246;
arg_buffer[2] = x9247;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9246))[0])();
}
else
{
void* const kont9246 = arg_buffer[2];
void* const x9247 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9246))[0])(kont9246, x9247);
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
void* const kont9249 = prim_car(lst);
void* const lst9251 = prim_cdr(lst);
void* const x9250 = apply_prim_negative_u63(lst9251);
arg_buffer[1] = kont9249;
arg_buffer[2] = x9250;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9249))[0])();
}
else
{
void* const kont9249 = arg_buffer[2];
void* const x9250 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9249))[0])(kont9249, x9250);
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
void* const kont9252 = prim_car(lst);
void* const lst9254 = prim_cdr(lst);
void* const x9253 = apply_prim_list(lst9254);
arg_buffer[1] = kont9252;
arg_buffer[2] = x9253;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9252))[0])();
}
else
{
void* const kont9252 = arg_buffer[2];
void* const x9253 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9252))[0])(kont9252, x9253);
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8943 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8943)[0])(kont8943, apply_prim_equal_u63_2(int9094, apply_prim_modulo_2(x, int9067)));
}

inline void even_u63_spec(void* _8992, void* kont8943, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8943)[0])(kont8943, apply_prim_equal_u63_2(int9094, apply_prim_modulo_2(x, int9067)));
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8944 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8944)[0])(kont8944, apply_prim_equal_u63_2(int9093, apply_prim_modulo_2(x, int9067)));
}

inline void odd_u63_spec(void* _8993, void* kont8944, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8944)[0])(kont8944, apply_prim_equal_u63_2(int9093, apply_prim_modulo_2(x, int9067)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8945 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9094, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8945)[0])(kont8945, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8945, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9093));
}

}

inline void list_u45ref_spec(void* _8994, void* kont8945, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9094, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8945)[0])(kont8945, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8945, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9093));
}

}

inline void lam8995_fptr() // lam8995 -> generic version 
{
//reading env
void* const env8996 = arg_buffer[1];
//reading env and args
void* const id_8751 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);

//if-clause
if(is_true(id_8751))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9087);
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

inline void lam8995_spec(void* env8996, void* id_8751) // lam8995 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);

//if-clause
if(is_true(id_8751))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9087);
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
void* const kont8946 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9255 = alloc_kont(lam8995_spec, 3);

//setting env list
clo9255[1] = kont8946;
clo9255[2] = item;
clo9255[3] = lst;
void* f_lam_8947 = encode_clo(clo9255);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8995_spec(f_lam_8947, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8995_spec(f_lam_8947, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8997, void* kont8946, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9256 = alloc_kont(lam8995_spec, 3);

//setting env list
clo9256[1] = kont8946;
clo9256[2] = item;
clo9256[3] = lst;
void* f_lam_8947 = encode_clo(clo9256);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8995_spec(f_lam_8947, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8995_spec(f_lam_8947, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8948 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8948)[0])(kont8948, bool_f9087);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8948)[0])(kont8948, bool_t9089);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8948, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8998, void* kont8948, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8948)[0])(kont8948, bool_f9087);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8948)[0])(kont8948, bool_t9089);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8948, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8999_fptr() // lam8999 -> generic version 
{
//reading env
void* const env9000 = arg_buffer[1];
//reading env and args
void* const id_8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8766));
}

inline void lam8999_spec(void* env9000, void* id_8766) // lam8999 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8766));
}

inline void length_fptr() // length -> generic version 
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
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8949)[0])(kont8949, int9094);
}
else
{

//creating new make-kont closure
void** clo9257 = alloc_kont(lam8999_spec, 2);

//setting env list
clo9257[1] = int9093;
clo9257[2] = kont8949;
void* f_lam_8950 = encode_clo(clo9257);



//clo-app
length_spec(length, f_lam_8950, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _9001, void* kont8949, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8949)[0])(kont8949, int9094);
}
else
{

//creating new make-kont closure
void** clo9258 = alloc_kont(lam8999_spec, 2);

//setting env list
clo9258[1] = int9093;
clo9258[2] = kont8949;
void* f_lam_8950 = encode_clo(clo9258);



//clo-app
length_spec(length, f_lam_8950, apply_prim_cdr_1(lst));
}

}

inline void lam9002_fptr() // lam9002 -> generic version 
{
//reading env
void* const env9003 = arg_buffer[1];
//reading env and args
void* const id_8772 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8772));
}

inline void lam9002_spec(void* env9003, void* id_8772) // lam9002 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8772));
}

inline void lam9004_fptr() // lam9004 -> generic version 
{
//reading env
void* const env9005 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9005);

//creating new make-kont closure
void** clo9259 = alloc_kont(lam9002_spec, 2);

//setting env list
clo9259[1] = id_8770;
clo9259[2] = decode_clo_array[3];
void* f_lam_8952 = encode_clo(clo9259);



//clo-app
map_spec(map, f_lam_8952, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam9004_spec(void* env9005, void* id_8770) // lam9004 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9005);

//creating new make-kont closure
void** clo9260 = alloc_kont(lam9002_spec, 2);

//setting env list
clo9260[1] = id_8770;
clo9260[2] = decode_clo_array[3];
void* f_lam_8952 = encode_clo(clo9260);



//clo-app
map_spec(map, f_lam_8952, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8951 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8951)[0])(kont8951, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9261 = alloc_kont(lam9004_spec, 3);

//setting env list
clo9261[1] = proc;
clo9261[2] = lst;
clo9261[3] = kont8951;
void* f_lam_8953 = encode_clo(clo9261);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8953;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _9006, void* kont8951, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8951)[0])(kont8951, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9262 = alloc_kont(lam9004_spec, 3);

//setting env list
clo9262[1] = proc;
clo9262[2] = lst;
clo9262[3] = kont8951;
void* f_lam_8953 = encode_clo(clo9262);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8953;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam9007_fptr() // lam9007 -> generic version 
{
//reading env
void* const env9008 = arg_buffer[1];
//reading env and args
void* const id_8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9008);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8779));
}

inline void lam9007_spec(void* env9008, void* id_8779) // lam9007 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9008);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8779));
}

inline void lam9009_fptr() // lam9009 -> generic version 
{
//reading env
void* const env9010 = arg_buffer[1];
//reading env and args
void* const id_8776 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//if-clause
if(is_true(id_8776))
{

//creating new make-kont closure
void** clo9263 = alloc_kont(lam9007_spec, 2);

//setting env list
clo9263[1] = decode_clo_array[2];
clo9263[2] = apply_prim_car_1(decode_clo_array[3]);
void* f_lam_8955 = encode_clo(clo9263);



//clo-app
filter_spec(filter, f_lam_8955, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[2], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void lam9009_spec(void* env9010, void* id_8776) // lam9009 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//if-clause
if(is_true(id_8776))
{

//creating new make-kont closure
void** clo9264 = alloc_kont(lam9007_spec, 2);

//setting env list
clo9264[1] = decode_clo_array[2];
clo9264[2] = apply_prim_car_1(decode_clo_array[3]);
void* f_lam_8955 = encode_clo(clo9264);



//clo-app
filter_spec(filter, f_lam_8955, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
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
void* const kont8954 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8954)[0])(kont8954, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9265 = alloc_kont(lam9009_spec, 3);

//setting env list
clo9265[1] = op;
clo9265[2] = kont8954;
clo9265[3] = lst;
void* f_lam_8956 = encode_clo(clo9265);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8956;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _9011, void* kont8954, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8954)[0])(kont8954, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9266 = alloc_kont(lam9009_spec, 3);

//setting env list
clo9266[1] = op;
clo9266[2] = kont8954;
clo9266[3] = lst;
void* f_lam_8956 = encode_clo(clo9266);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8956;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8957 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9094)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8957)[0])(kont8957, lst);
}
else
{

//clo-app
drop_spec(drop, kont8957, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9093));
}

}

inline void drop_spec(void* _9012, void* kont8957, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9094)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8957)[0])(kont8957, lst);
}
else
{

//clo-app
drop_spec(drop, kont8957, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9093));
}

}

inline void lam9013_fptr() // lam9013 -> generic version 
{
//reading env
void* const env9014 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9014);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8788, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam9013_spec(void* env9014, void* id_8788) // lam9013 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9014);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8788, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8958 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8958)[0])(kont8958, acc);
}
else
{

//creating new make-kont closure
void** clo9267 = alloc_kont(lam9013_spec, 3);

//setting env list
clo9267[1] = fun;
clo9267[2] = kont8958;
clo9267[3] = lst;
void* f_lam_8959 = encode_clo(clo9267);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8959;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _9015, void* kont8958, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8958)[0])(kont8958, acc);
}
else
{

//creating new make-kont closure
void** clo9268 = alloc_kont(lam9013_spec, 3);

//setting env list
clo9268[1] = fun;
clo9268[2] = kont8958;
clo9268[3] = lst;
void* f_lam_8959 = encode_clo(clo9268);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8959;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam9016_fptr() // lam9016 -> generic version 
{
//reading env
void* const env9017 = arg_buffer[1];
//reading env and args
void* const id_8793 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9017);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8793;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9016_spec(void* env9017, void* id_8793) // lam9016 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9017);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8793;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8960 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8960)[0])(kont8960, acc);
}
else
{

//creating new make-kont closure
void** clo9269 = alloc_kont(lam9016_spec, 3);

//setting env list
clo9269[1] = kont8960;
clo9269[2] = fun;
clo9269[3] = apply_prim_car_1(lst);
void* f_lam_8961 = encode_clo(clo9269);



//clo-app
foldr_spec(foldr, f_lam_8961, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _9018, void* kont8960, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8960)[0])(kont8960, acc);
}
else
{

//creating new make-kont closure
void** clo9270 = alloc_kont(lam9016_spec, 3);

//setting env list
clo9270[1] = kont8960;
clo9270[2] = fun;
clo9270[3] = apply_prim_car_1(lst);
void* f_lam_8961 = encode_clo(clo9270);



//clo-app
foldr_spec(foldr, f_lam_8961, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8962 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8962)[0])(kont8962, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8962, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _9019, void* kont8962, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8962)[0])(kont8962, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8962, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8963 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8963, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _9020, void* kont8963, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8963, lst, apply_prim_list_0());
}

inline void lam9021_fptr() // lam9021 -> generic version 
{
//reading env
void* const env9022 = arg_buffer[1];
//reading env and args
void* const id_8802 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9022);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8802));
}

inline void lam9021_spec(void* env9022, void* id_8802) // lam9021 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9022);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8802));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8964 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8964)[0])(kont8964, rhs);
}
else
{

//creating new make-kont closure
void** clo9271 = alloc_kont(lam9021_spec, 2);

//setting env list
clo9271[1] = kont8964;
clo9271[2] = apply_prim_car_1(lhs);
void* f_lam_8965 = encode_clo(clo9271);



//clo-app
append1_spec(append1, f_lam_8965, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _9023, void* kont8964, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8964)[0])(kont8964, rhs);
}
else
{

//creating new make-kont closure
void** clo9272 = alloc_kont(lam9021_spec, 2);

//setting env list
clo9272[1] = kont8964;
clo9272[2] = apply_prim_car_1(lhs);
void* f_lam_8965 = encode_clo(clo9272);



//clo-app
append1_spec(append1, f_lam_8965, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam9024_fptr() // lam9024 -> generic version 
{
//reading env
void* const env9025 = arg_buffer[1];
//reading env and args
void* const id_8809 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9025);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8809);
}

inline void lam9024_spec(void* env9025, void* id_8809) // lam9024 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9025);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8809);
}

inline void lam9026_fptr() // lam9026 -> generic version 
{
//reading env
void* const env9027 = arg_buffer[1];
//reading env and args
void* const id_8804 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9027);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[2], id_8804)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[1], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9273 = alloc_kont(lam9024_spec, 2);

//setting env list
clo9273[1] = apply_prim_list_0();
clo9273[2] = decode_clo_array[4];
void* f_lam_8967 = encode_clo(clo9273);



//clo-app
append1_spec(append1, f_lam_8967, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[3]);
}

}

inline void lam9026_spec(void* env9027, void* id_8804) // lam9026 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9027);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[2], id_8804)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[1], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9274 = alloc_kont(lam9024_spec, 2);

//setting env list
clo9274[1] = apply_prim_list_0();
clo9274[2] = decode_clo_array[4];
void* f_lam_8967 = encode_clo(clo9274);



//clo-app
append1_spec(append1, f_lam_8967, apply_prim_list_1(decode_clo_array[1]), decode_clo_array[3]);
}

}

inline void lam9028_fptr() // lam9028 -> generic version 
{
//reading env
void* const env9029 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9029);

//creating new make-kont closure
void** clo9275 = alloc_kont(lam9026_spec, 4);

//setting env list
clo9275[1] = decode_clo_array[1];
clo9275[2] = int9093;
clo9275[3] = x;
clo9275[4] = decode_clo_array[2];
void* f_lam_8968 = encode_clo(clo9275);



//clo-app
length_spec(length, f_lam_8968, x);
}

inline void lam9028_spec(void* env9029, void* x) // lam9028 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9029);

//creating new make-kont closure
void** clo9276 = alloc_kont(lam9026_spec, 4);

//setting env list
clo9276[1] = decode_clo_array[1];
clo9276[2] = int9093;
clo9276[3] = x;
clo9276[4] = decode_clo_array[2];
void* f_lam_8968 = encode_clo(clo9276);



//clo-app
length_spec(length, f_lam_8968, x);
}

void append_fptr() // append 
{
//reading env
void* const _9030 = arg_buffer[1];
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
void** clo9277 = alloc_kont(lam9028_spec, 2);

//setting env list
clo9277[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9277[2] = apply_prim_car_1(vargs);
void* f_lam_8969 = encode_clo(clo9277);


// kont-clo-app case
lam9028_spec(f_lam_8969, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam9031_fptr() // lam9031 -> generic version 
{
//reading env
void* const env9032 = arg_buffer[1];
//reading env and args
void* const xy8812 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9032);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8812);
}

inline void lam9031_spec(void* env9032, void* xy8812) // lam9031 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9032);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8812);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8970 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9094)))
{

//creating new make-kont closure
void** clo9278 = alloc_kont(lam9031_spec, 1);

//setting env list
clo9278[1] = kont8970;
void* f_lam_8971 = encode_clo(clo9278);



//clo-app
reverse_spec(reverse, f_lam_8971, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8970, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9093), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _9033, void* kont8970, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9094)))
{

//creating new make-kont closure
void** clo9279 = alloc_kont(lam9031_spec, 1);

//setting env list
clo9279[1] = kont8970;
void* f_lam_8971 = encode_clo(clo9279);



//clo-app
reverse_spec(reverse, f_lam_8971, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8970, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9093), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8972 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8972, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _9034, void* kont8972, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8972, lst, n, apply_prim_list_0());
}

inline void lam9035_fptr() // lam9035 -> generic version 
{
//reading env
void* const env9036 = arg_buffer[1];
//reading env and args
void* const id_8826 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9036);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8826));
}

inline void lam9035_spec(void* env9036, void* id_8826) // lam9035 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9036);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8826));
}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8973 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9094)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8973)[0])(kont8973, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9280 = alloc_kont(lam9035_spec, 2);

//setting env list
clo9280[1] = kont8973;
clo9280[2] = apply_prim_car_1(lst);
void* f_lam_8974 = encode_clo(clo9280);



//clo-app
list_u45set_spec(list_u45set, f_lam_8974, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9093), value);
}

}

inline void list_u45set_spec(void* _9037, void* kont8973, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9094)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8973)[0])(kont8973, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9281 = alloc_kont(lam9035_spec, 2);

//setting env list
clo9281[1] = kont8973;
clo9281[2] = apply_prim_car_1(lst);
void* f_lam_8974 = encode_clo(clo9281);



//clo-app
list_u45set_spec(list_u45set, f_lam_8974, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9093), value);
}

}

inline void lam9038_fptr() // lam9038 -> generic version 
{
//reading env
void* const env9039 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9039);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8833;
numArgs = 4;
append_fptr();
}

inline void lam9038_spec(void* env9039, void* id_8833) // lam9038 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9039);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8833;
numArgs = 4;
append_fptr();
}

inline void lam9040_fptr() // lam9040 -> generic version 
{
//reading env
void* const env9041 = arg_buffer[1];
//reading env and args
void* const id_8831 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9041);

//creating new make-kont closure
void** clo9282 = alloc_kont(lam9038_spec, 2);

//setting env list
clo9282[1] = id_8831;
clo9282[2] = decode_clo_array[1];
void* f_lam_8976 = encode_clo(clo9282);



//clo-app
flatten_spec(flatten, f_lam_8976, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam9040_spec(void* env9041, void* id_8831) // lam9040 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9041);

//creating new make-kont closure
void** clo9283 = alloc_kont(lam9038_spec, 2);

//setting env list
clo9283[1] = id_8831;
clo9283[2] = decode_clo_array[1];
void* f_lam_8976 = encode_clo(clo9283);



//clo-app
flatten_spec(flatten, f_lam_8976, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8975 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8975)[0])(kont8975, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9284 = alloc_kont(lam9040_spec, 2);

//setting env list
clo9284[1] = kont8975;
clo9284[2] = lst;
void* f_lam_8977 = encode_clo(clo9284);



//clo-app
flatten_spec(flatten, f_lam_8977, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8975)[0])(kont8975, apply_prim_list_1(lst));
}

}

}

inline void flatten_spec(void* _9042, void* kont8975, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8975)[0])(kont8975, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9285 = alloc_kont(lam9040_spec, 2);

//setting env list
clo9285[1] = kont8975;
clo9285[2] = lst;
void* f_lam_8977 = encode_clo(clo9285);



//clo-app
flatten_spec(flatten, f_lam_8977, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8975)[0])(kont8975, apply_prim_list_1(lst));
}

}

}

inline void lam9043_fptr() // lam9043 -> generic version 
{
//reading env
void* const env9044 = arg_buffer[1];
//reading env and args
void* const id_8848 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9044);

//if-clause
if(is_true(id_8848))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[2], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9093), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9087);
}

}

inline void lam9043_spec(void* env9044, void* id_8848) // lam9043 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9044);

//if-clause
if(is_true(id_8848))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[2], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9093), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9087);
}

}

inline void lam9045_fptr() // lam9045 -> generic version 
{
//reading env
void* const env9046 = arg_buffer[1];
//reading env and args
void* const id_8842 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9046);

//if-clause
if(is_true(id_8842))
{

//creating new make-kont closure
void** clo9286 = alloc_kont(lam9043_spec, 4);

//setting env list
clo9286[1] = decode_clo_array[1];
clo9286[2] = decode_clo_array[2];
clo9286[3] = decode_clo_array[3];
clo9286[4] = decode_clo_array[4];
void* f_lam_8979 = encode_clo(clo9286);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[4]))))
{
// kont-clo-app case
lam9043_spec(f_lam_8979, bool_f9087);
}
else
{
// kont-clo-app case
lam9043_spec(f_lam_8979, bool_t9089);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9087);
}

}

inline void lam9045_spec(void* env9046, void* id_8842) // lam9045 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9046);

//if-clause
if(is_true(id_8842))
{

//creating new make-kont closure
void** clo9287 = alloc_kont(lam9043_spec, 4);

//setting env list
clo9287[1] = decode_clo_array[1];
clo9287[2] = decode_clo_array[2];
clo9287[3] = decode_clo_array[3];
clo9287[4] = decode_clo_array[4];
void* f_lam_8979 = encode_clo(clo9287);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[4]))))
{
// kont-clo-app case
lam9043_spec(f_lam_8979, bool_f9087);
}
else
{
// kont-clo-app case
lam9043_spec(f_lam_8979, bool_t9089);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9087);
}

}

inline void ok_u63_fptr() // ok? -> generic version 
{
//reading env and args
void* const kont8978 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8978)[0])(kont8978, bool_t9089);
}
else
{

//creating new make-kont closure
void** clo9288 = alloc_kont(lam9045_spec, 4);

//setting env list
clo9288[1] = placed;
clo9288[2] = kont8978;
clo9288[3] = row;
clo9288[4] = dist;
void* f_lam_8980 = encode_clo(clo9288);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
lam9045_spec(f_lam_8980, bool_f9087);
}
else
{
// kont-clo-app case
lam9045_spec(f_lam_8980, bool_t9089);
}

}

}

inline void ok_u63_spec(void* _9047, void* kont8978, void* row, void* dist, void* placed) // ok? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8978)[0])(kont8978, bool_t9089);
}
else
{

//creating new make-kont closure
void** clo9289 = alloc_kont(lam9045_spec, 4);

//setting env list
clo9289[1] = placed;
clo9289[2] = kont8978;
clo9289[3] = row;
clo9289[4] = dist;
void* f_lam_8980 = encode_clo(clo9289);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
lam9045_spec(f_lam_8980, bool_f9087);
}
else
{
// kont-clo-app case
lam9045_spec(f_lam_8980, bool_t9089);
}

}

}

inline void lam9048_fptr() // lam9048 -> generic version 
{
//reading env
void* const env9049 = arg_buffer[1];
//reading env and args
void* const id_8872 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9049);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_cons_2(apply_prim_list_3(id_8872, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[1]), decode_clo_array[2])), apply_prim_cdr_1(decode_clo_array[4])));
}

inline void lam9048_spec(void* env9049, void* id_8872) // lam9048 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9049);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_cons_2(apply_prim_list_3(id_8872, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[1]), decode_clo_array[2])), apply_prim_cdr_1(decode_clo_array[4])));
}

inline void lam9050_fptr() // lam9050 -> generic version 
{
//reading env
void* const env9051 = arg_buffer[1];
//reading env and args
void* const id_8879 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9051);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[3], apply_prim_cons_2(decode_clo_array[1], id_8879), decode_clo_array[2]);
}

inline void lam9050_spec(void* env9051, void* id_8879) // lam9050 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9051);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[3], apply_prim_cons_2(decode_clo_array[1], id_8879), decode_clo_array[2]);
}

inline void lam9052_fptr() // lam9052 -> generic version 
{
//reading env
void* const env9053 = arg_buffer[1];
//reading env and args
void* const id_8870 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9053);

//creating new make-kont closure
void** clo9290 = alloc_kont(lam9050_spec, 3);

//setting env list
clo9290[1] = decode_clo_array[3];
clo9290[2] = decode_clo_array[7];
clo9290[3] = decode_clo_array[1];
void* f_lam_8982 = encode_clo(clo9290);



//if-clause
if(is_true(id_8870))
{

//creating new make-kont closure
void** clo9291 = alloc_kont(lam9048_spec, 4);

//setting env list
clo9291[1] = decode_clo_array[4];
clo9291[2] = decode_clo_array[6];
clo9291[3] = f_lam_8982;
clo9291[4] = decode_clo_array[2];
void* f_lam_8983 = encode_clo(clo9291);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8983;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[4]);
arg_buffer[4] = decode_clo_array[5];
numArgs = 4;
append_fptr();
}
else
{
// kont-clo-app case
lam9050_spec(f_lam_8982, apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam9052_spec(void* env9053, void* id_8870) // lam9052 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9053);

//creating new make-kont closure
void** clo9292 = alloc_kont(lam9050_spec, 3);

//setting env list
clo9292[1] = decode_clo_array[3];
clo9292[2] = decode_clo_array[7];
clo9292[3] = decode_clo_array[1];
void* f_lam_8982 = encode_clo(clo9292);



//if-clause
if(is_true(id_8870))
{

//creating new make-kont closure
void** clo9293 = alloc_kont(lam9048_spec, 4);

//setting env list
clo9293[1] = decode_clo_array[4];
clo9293[2] = decode_clo_array[6];
clo9293[3] = f_lam_8982;
clo9293[4] = decode_clo_array[2];
void* f_lam_8983 = encode_clo(clo9293);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8983;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[4]);
arg_buffer[4] = decode_clo_array[5];
numArgs = 4;
append_fptr();
}
else
{
// kont-clo-app case
lam9050_spec(f_lam_8982, apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam9054_fptr() // lam9054 -> generic version 
{
//reading env
void* const env9055 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9055);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[4])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]), apply_prim__u43_2(decode_clo_array[5], int9093));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]), decode_clo_array[5]);
}

}
else
{

//creating new make-kont closure
void** clo9294 = alloc_kont(lam9052_spec, 7);

//setting env list
clo9294[1] = decode_clo_array[1];
clo9294[2] = decode_clo_array[2];
clo9294[3] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[3]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]), decode_clo_array[4]), z);
clo9294[4] = decode_clo_array[3];
clo9294[5] = decode_clo_array[4];
clo9294[6] = z;
clo9294[7] = decode_clo_array[5];
void* f_lam_8984 = encode_clo(clo9294);



//clo-app
ok_u63_spec(ok_u63, f_lam_8984, apply_prim_car_1(decode_clo_array[3]), int9093, z);
}

}

inline void lam9054_spec(void* env9055, void* z) // lam9054 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9055);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[4])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]), apply_prim__u43_2(decode_clo_array[5], int9093));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]), decode_clo_array[5]);
}

}
else
{

//creating new make-kont closure
void** clo9295 = alloc_kont(lam9052_spec, 7);

//setting env list
clo9295[1] = decode_clo_array[1];
clo9295[2] = decode_clo_array[2];
clo9295[3] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[3]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]), decode_clo_array[4]), z);
clo9295[4] = decode_clo_array[3];
clo9295[5] = decode_clo_array[4];
clo9295[6] = z;
clo9295[7] = decode_clo_array[5];
void* f_lam_8984 = encode_clo(clo9295);



//clo-app
ok_u63_spec(ok_u63, f_lam_8984, apply_prim_car_1(decode_clo_array[3]), int9093, z);
}

}

inline void lam9056_fptr() // lam9056 -> generic version 
{
//reading env
void* const env9057 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9057);

//creating new make-kont closure
void** clo9296 = alloc_kont(lam9054_spec, 5);

//setting env list
clo9296[1] = decode_clo_array[1];
clo9296[2] = decode_clo_array[2];
clo9296[3] = decode_clo_array[3];
clo9296[4] = y;
clo9296[5] = decode_clo_array[4];
void* f_lam_8985 = encode_clo(clo9296);


// kont-clo-app case
lam9054_spec(f_lam_8985, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void lam9056_spec(void* env9057, void* y) // lam9056 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9057);

//creating new make-kont closure
void** clo9297 = alloc_kont(lam9054_spec, 5);

//setting env list
clo9297[1] = decode_clo_array[1];
clo9297[2] = decode_clo_array[2];
clo9297[3] = decode_clo_array[3];
clo9297[4] = y;
clo9297[5] = decode_clo_array[4];
void* f_lam_8985 = encode_clo(clo9297);


// kont-clo-app case
lam9054_spec(f_lam_8985, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version 
{
//reading env and args
void* const kont8981 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8981)[0])(kont8981, count);
}
else
{

//creating new make-kont closure
void** clo9298 = alloc_kont(lam9056_spec, 5);

//setting env list
clo9298[1] = kont8981;
clo9298[2] = stack;
clo9298[3] = apply_prim_car_1(apply_prim_car_1(stack));
clo9298[4] = count;
clo9298[5] = apply_prim_car_1(stack);
void* f_lam_8986 = encode_clo(clo9298);


// kont-clo-app case
lam9056_spec(f_lam_8986, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void q_u45helper_spec(void* _9058, void* kont8981, void* stack, void* count) // q-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8981)[0])(kont8981, count);
}
else
{

//creating new make-kont closure
void** clo9299 = alloc_kont(lam9056_spec, 5);

//setting env list
clo9299[1] = kont8981;
clo9299[2] = stack;
clo9299[3] = apply_prim_car_1(apply_prim_car_1(stack));
clo9299[4] = count;
clo9299[5] = apply_prim_car_1(stack);
void* f_lam_8986 = encode_clo(clo9299);


// kont-clo-app case
lam9056_spec(f_lam_8986, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void iota1_fptr() // iota1 -> generic version 
{
//reading env and args
void* const kont8987 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9094)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8987)[0])(kont8987, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8987, apply_prim__u45_2(n, int9093), apply_prim_cons_2(n, l));
}

}

inline void iota1_spec(void* _9059, void* kont8987, void* n, void* l) // iota1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9094)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8987)[0])(kont8987, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8987, apply_prim__u45_2(n, int9093), apply_prim_cons_2(n, l));
}

}

inline void lam9060_fptr() // lam9060 -> generic version 
{
//reading env
void* const env9061 = arg_buffer[1];
//reading env and args
void* const id_8887 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9061);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8887, apply_prim_list_0(), apply_prim_list_0())), int9094);
}

inline void lam9060_spec(void* env9061, void* id_8887) // lam9060 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9061);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8887, apply_prim_list_0(), apply_prim_list_0())), int9094);
}

inline void nqueens_fptr() // nqueens -> generic version 
{
//reading env and args
void* const kont8988 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9300 = alloc_kont(lam9060_spec, 1);

//setting env list
clo9300[1] = kont8988;
void* f_lam_8989 = encode_clo(clo9300);



//clo-app
iota1_spec(iota1, f_lam_8989, n, apply_prim_list_0());
}

inline void nqueens_spec(void* _9062, void* kont8988, void* n) // nqueens 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9301 = alloc_kont(lam9060_spec, 1);

//setting env list
clo9301[1] = kont8988;
void* f_lam_8989 = encode_clo(clo9301);



//clo-app
iota1_spec(iota1, f_lam_8989, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8990 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8990, int9095);
}

inline void brouhaha_main_spec(void* _9063, void* kont8990) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8990, int9095);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9094 = reinterpret_cast<void *>(encode_int(0));
bool_t9089 = encode_bool(true);
int9093 = reinterpret_cast<void *>(encode_int(1));
bool_f9087 = encode_bool(false);
int9067 = reinterpret_cast<void *>(encode_int(2));
int9095 = reinterpret_cast<void *>(encode_int(13));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

