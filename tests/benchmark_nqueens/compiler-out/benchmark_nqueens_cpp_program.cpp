#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9002;
void* bool_t8997;
void* int9001;
void* bool_f8995;
void* int8981;
void* int9003;



// declaring global integer variable
int int9004;
int int9005;
int int9006;
int int9007;
int int9008;

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
void even_u63_spec(void* _8914, void* kont8870, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8915, void* kont8871, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8916, void* kont8872, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8917_fptr(); // lam8917
void lam8917_spec(void* env8918, void* id_8743); // lam8917
void* lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8919, void* kont8873, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8920, void* kont8875, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8921_fptr(); // lam8921
void lam8921_spec(void* env8922, void* id_8758); // lam8921
void* lam8921 = encode_clo(alloc_clo(lam8921_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8923, void* kont8876, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8924_fptr(); // lam8924
void lam8924_spec(void* env8925, void* id_8764); // lam8924
void* lam8924 = encode_clo(alloc_clo(lam8924_fptr, 0));

void lam8926_fptr(); // lam8926
void lam8926_spec(void* env8927, void* id_8762); // lam8926
void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8928, void* kont8878, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8929_fptr(); // lam8929
void lam8929_spec(void* env8930, void* id_8771); // lam8929
void* lam8929 = encode_clo(alloc_clo(lam8929_fptr, 0));

void lam8931_fptr(); // lam8931
void lam8931_spec(void* env8932, void* id_8768); // lam8931
void* lam8931 = encode_clo(alloc_clo(lam8931_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8933, void* kont8881, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8934, void* kont8884, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8935_fptr(); // lam8935
void lam8935_spec(void* env8936, void* id_8780); // lam8935
void* lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8937, void* kont8885, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8938_fptr(); // lam8938
void lam8938_spec(void* env8939, void* id_8785); // lam8938
void* lam8938 = encode_clo(alloc_clo(lam8938_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8940, void* kont8887, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8941, void* kont8889, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8942, void* kont8890, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8943_fptr(); // lam8943
void lam8943_spec(void* env8944, void* id_8794); // lam8943
void* lam8943 = encode_clo(alloc_clo(lam8943_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8945, void* kont8891, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8946_fptr(); // lam8946
void lam8946_spec(void* env8947, void* id_8801); // lam8946
void* lam8946 = encode_clo(alloc_clo(lam8946_fptr, 0));

void lam8948_fptr(); // lam8948
void lam8948_spec(void* env8949, void* id_8796); // lam8948
void* lam8948 = encode_clo(alloc_clo(lam8948_fptr, 0));

void lam8950_fptr(); // lam8950
void lam8950_spec(void* env8951, void* x); // lam8950
void* lam8950 = encode_clo(alloc_clo(lam8950_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8953_fptr(); // lam8953
void lam8953_spec(void* env8954, void* xy8804); // lam8953
void* lam8953 = encode_clo(alloc_clo(lam8953_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8955, void* kont8897, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8956, void* kont8899, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8957_fptr(); // lam8957
void lam8957_spec(void* env8958, void* id_8824); // lam8957
void* lam8957 = encode_clo(alloc_clo(lam8957_fptr, 0));

void lam8959_fptr(); // lam8959
void lam8959_spec(void* env8960, void* id_8818); // lam8959
void* lam8959 = encode_clo(alloc_clo(lam8959_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void* _8961, void* kont8900, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8962_fptr(); // lam8962
void lam8962_spec(void* env8963, void* id_8848); // lam8962
void* lam8962 = encode_clo(alloc_clo(lam8962_fptr, 0));

void lam8964_fptr(); // lam8964
void lam8964_spec(void* env8965, void* id_8855); // lam8964
void* lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void lam8966_fptr(); // lam8966
void lam8966_spec(void* env8967, void* id_8846); // lam8966
void* lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void lam8968_fptr(); // lam8968
void lam8968_spec(void* env8969, void* z); // lam8968
void* lam8968 = encode_clo(alloc_clo(lam8968_fptr, 0));

void lam8970_fptr(); // lam8970
void lam8970_spec(void* env8971, void* y); // lam8970
void* lam8970 = encode_clo(alloc_clo(lam8970_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void* _8972, void* kont8903, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void iota1_spec(void* _8973, void* kont8909, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8974_fptr(); // lam8974
void lam8974_spec(void* env8975, void* id_8863); // lam8974
void* lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void nqueens_fptr(); // nqueens
void nqueens_spec(void* _8976, void* kont8910, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8977, void* kont8912); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9009 = prim_car(lst);
void* const lst9011 = prim_cdr(lst);
void* const x9010 = apply_prim__u43(lst9011);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
}
else
{
void* const kont9009 = arg_buffer[2];
void* const x9010 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
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
void* const kont9012 = prim_car(lst);
void* const lst9014 = prim_cdr(lst);
void* const x9013 = apply_prim__u45(lst9014);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
}
else
{
void* const kont9012 = arg_buffer[2];
void* const x9013 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
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
void* const kont9015 = prim_car(lst);
void* const lst9017 = prim_cdr(lst);
void* const x9016 = apply_prim__u42(lst9017);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
}
else
{
void* const kont9015 = arg_buffer[2];
void* const x9016 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
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
void* const kont9018 = prim_car(lst);
void* const lst9020 = prim_cdr(lst);
void* const x9019 = apply_prim__u47(lst9020);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
}
else
{
void* const kont9018 = arg_buffer[2];
void* const x9019 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
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
void* const kont9021 = prim_car(lst);
void* const lst9023 = prim_cdr(lst);
void* const x9022 = apply_prim__u61(lst9023);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
}
else
{
void* const kont9021 = arg_buffer[2];
void* const x9022 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
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
void* const kont9024 = prim_car(lst);
void* const lst9026 = prim_cdr(lst);
void* const x9025 = apply_prim__u62(lst9026);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
}
else
{
void* const kont9024 = arg_buffer[2];
void* const x9025 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
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
void* const kont9027 = prim_car(lst);
void* const lst9029 = prim_cdr(lst);
void* const x9028 = apply_prim__u60(lst9029);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
}
else
{
void* const kont9027 = arg_buffer[2];
void* const x9028 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
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
void* const kont9030 = prim_car(lst);
void* const lst9032 = prim_cdr(lst);
void* const x9031 = apply_prim__u60_u61(lst9032);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
}
else
{
void* const kont9030 = arg_buffer[2];
void* const x9031 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
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
void* const kont9033 = prim_car(lst);
void* const lst9035 = prim_cdr(lst);
void* const x9034 = apply_prim__u62_u61(lst9035);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
}
else
{
void* const kont9033 = arg_buffer[2];
void* const x9034 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
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
void* const kont9036 = prim_car(lst);
void* const lst9038 = prim_cdr(lst);
void* const x9037 = apply_prim_modulo(lst9038);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
}
else
{
void* const kont9036 = arg_buffer[2];
void* const x9037 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
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
void* const kont9039 = prim_car(lst);
void* const lst9041 = prim_cdr(lst);
void* const x9040 = apply_prim_null_u63(lst9041);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
}
else
{
void* const kont9039 = arg_buffer[2];
void* const x9040 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
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
void* const kont9042 = prim_car(lst);
void* const lst9044 = prim_cdr(lst);
void* const x9043 = apply_prim_equal_u63(lst9044);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
}
else
{
void* const kont9042 = arg_buffer[2];
void* const x9043 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
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
void* const kont9045 = prim_car(lst);
void* const lst9047 = prim_cdr(lst);
void* const x9046 = apply_prim_eq_u63(lst9047);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
}
else
{
void* const kont9045 = arg_buffer[2];
void* const x9046 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
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
void* const kont9048 = prim_car(lst);
void* const lst9050 = prim_cdr(lst);
void* const x9049 = apply_prim_cons(lst9050);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
}
else
{
void* const kont9048 = arg_buffer[2];
void* const x9049 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
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
void* const kont9051 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9052 = apply_prim_car(lst9053);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
}
else
{
void* const kont9051 = arg_buffer[2];
void* const x9052 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
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
void* const kont9054 = prim_car(lst);
void* const lst9056 = prim_cdr(lst);
void* const x9055 = apply_prim_cdr(lst9056);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
}
else
{
void* const kont9054 = arg_buffer[2];
void* const x9055 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
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
void* const kont9057 = prim_car(lst);
void* const lst9059 = prim_cdr(lst);
void* const x9058 = apply_prim_float_u45_u62int(lst9059);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
}
else
{
void* const kont9057 = arg_buffer[2];
void* const x9058 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
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
void* const kont9060 = prim_car(lst);
void* const lst9062 = prim_cdr(lst);
void* const x9061 = apply_prim_int_u45_u62float(lst9062);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
}
else
{
void* const kont9060 = arg_buffer[2];
void* const x9061 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
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
void* const kont9063 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9064 = apply_prim_hash(lst9065);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
}
else
{
void* const kont9063 = arg_buffer[2];
void* const x9064 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
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
void* const kont9066 = prim_car(lst);
void* const lst9068 = prim_cdr(lst);
void* const x9067 = apply_prim_hash_u45ref(lst9068);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
}
else
{
void* const kont9066 = arg_buffer[2];
void* const x9067 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
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
void* const kont9069 = prim_car(lst);
void* const lst9071 = prim_cdr(lst);
void* const x9070 = apply_prim_hash_u45set(lst9071);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
}
else
{
void* const kont9069 = arg_buffer[2];
void* const x9070 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
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
void* const kont9072 = prim_car(lst);
void* const lst9074 = prim_cdr(lst);
void* const x9073 = apply_prim_hash_u45keys(lst9074);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
}
else
{
void* const kont9072 = arg_buffer[2];
void* const x9073 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
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
void* const kont9075 = prim_car(lst);
void* const lst9077 = prim_cdr(lst);
void* const x9076 = apply_prim_hash_u45has_u45key_u63(lst9077);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
}
else
{
void* const kont9075 = arg_buffer[2];
void* const x9076 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
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
void* const kont9078 = prim_car(lst);
void* const lst9080 = prim_cdr(lst);
void* const x9079 = apply_prim_hash_u45count(lst9080);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
}
else
{
void* const kont9078 = arg_buffer[2];
void* const x9079 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
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
void* const kont9081 = prim_car(lst);
void* const lst9083 = prim_cdr(lst);
void* const x9082 = apply_prim_set(lst9083);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
}
else
{
void* const kont9081 = arg_buffer[2];
void* const x9082 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
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
void* const kont9084 = prim_car(lst);
void* const lst9086 = prim_cdr(lst);
void* const x9085 = apply_prim_set_u45_u62list(lst9086);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
}
else
{
void* const kont9084 = arg_buffer[2];
void* const x9085 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
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
void* const kont9087 = prim_car(lst);
void* const lst9089 = prim_cdr(lst);
void* const x9088 = apply_prim_list_u45_u62set(lst9089);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
}
else
{
void* const kont9087 = arg_buffer[2];
void* const x9088 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
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
void* const kont9090 = prim_car(lst);
void* const lst9092 = prim_cdr(lst);
void* const x9091 = apply_prim_set_u45add(lst9092);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
}
else
{
void* const kont9090 = arg_buffer[2];
void* const x9091 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
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
void* const kont9093 = prim_car(lst);
void* const lst9095 = prim_cdr(lst);
void* const x9094 = apply_prim_set_u45member_u63(lst9095);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
}
else
{
void* const kont9093 = arg_buffer[2];
void* const x9094 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
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
void* const kont9096 = prim_car(lst);
void* const lst9098 = prim_cdr(lst);
void* const x9097 = apply_prim_set_u45remove(lst9098);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
}
else
{
void* const kont9096 = arg_buffer[2];
void* const x9097 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
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
void* const kont9099 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9100 = apply_prim_set_u45count(lst9101);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
}
else
{
void* const kont9099 = arg_buffer[2];
void* const x9100 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
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
void* const kont9102 = prim_car(lst);
void* const lst9104 = prim_cdr(lst);
void* const x9103 = apply_prim_string_u63(lst9104);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
}
else
{
void* const kont9102 = arg_buffer[2];
void* const x9103 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
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
void* const kont9105 = prim_car(lst);
void* const lst9107 = prim_cdr(lst);
void* const x9106 = apply_prim_string_u45length(lst9107);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
}
else
{
void* const kont9105 = arg_buffer[2];
void* const x9106 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
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
void* const kont9108 = prim_car(lst);
void* const lst9110 = prim_cdr(lst);
void* const x9109 = apply_prim_string_u45ref(lst9110);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
}
else
{
void* const kont9108 = arg_buffer[2];
void* const x9109 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
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
void* const kont9111 = prim_car(lst);
void* const lst9113 = prim_cdr(lst);
void* const x9112 = apply_prim_substring(lst9113);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
}
else
{
void* const kont9111 = arg_buffer[2];
void* const x9112 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
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
void* const kont9114 = prim_car(lst);
void* const lst9116 = prim_cdr(lst);
void* const x9115 = apply_prim_string_u45append(lst9116);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
}
else
{
void* const kont9114 = arg_buffer[2];
void* const x9115 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
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
void* const kont9117 = prim_car(lst);
void* const lst9119 = prim_cdr(lst);
void* const x9118 = apply_prim_string_u45_u62list(lst9119);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
}
else
{
void* const kont9117 = arg_buffer[2];
void* const x9118 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
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
void* const kont9120 = prim_car(lst);
void* const lst9122 = prim_cdr(lst);
void* const x9121 = apply_prim_exact_u45floor(lst9122);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
}
else
{
void* const kont9120 = arg_buffer[2];
void* const x9121 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
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
void* const kont9123 = prim_car(lst);
void* const lst9125 = prim_cdr(lst);
void* const x9124 = apply_prim_exact_u45ceiling(lst9125);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
}
else
{
void* const kont9123 = arg_buffer[2];
void* const x9124 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
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
void* const kont9126 = prim_car(lst);
void* const lst9128 = prim_cdr(lst);
void* const x9127 = apply_prim_exact_u45round(lst9128);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
}
else
{
void* const kont9126 = arg_buffer[2];
void* const x9127 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
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
void* const kont9129 = prim_car(lst);
void* const lst9131 = prim_cdr(lst);
void* const x9130 = apply_prim_abs(lst9131);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
}
else
{
void* const kont9129 = arg_buffer[2];
void* const x9130 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
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
void* const kont9132 = prim_car(lst);
void* const lst9134 = prim_cdr(lst);
void* const x9133 = apply_prim_max(lst9134);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
}
else
{
void* const kont9132 = arg_buffer[2];
void* const x9133 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
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
void* const kont9135 = prim_car(lst);
void* const lst9137 = prim_cdr(lst);
void* const x9136 = apply_prim_min(lst9137);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
}
else
{
void* const kont9135 = arg_buffer[2];
void* const x9136 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
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
void* const kont9138 = prim_car(lst);
void* const lst9140 = prim_cdr(lst);
void* const x9139 = apply_prim_expt(lst9140);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
}
else
{
void* const kont9138 = arg_buffer[2];
void* const x9139 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
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
void* const kont9141 = prim_car(lst);
void* const lst9143 = prim_cdr(lst);
void* const x9142 = apply_prim_sqrt(lst9143);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
}
else
{
void* const kont9141 = arg_buffer[2];
void* const x9142 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
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
void* const kont9144 = prim_car(lst);
void* const lst9146 = prim_cdr(lst);
void* const x9145 = apply_prim_remainder(lst9146);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
}
else
{
void* const kont9144 = arg_buffer[2];
void* const x9145 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
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
void* const kont9147 = prim_car(lst);
void* const lst9149 = prim_cdr(lst);
void* const x9148 = apply_prim_quotient(lst9149);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
}
else
{
void* const kont9147 = arg_buffer[2];
void* const x9148 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
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
void* const kont9150 = prim_car(lst);
void* const lst9152 = prim_cdr(lst);
void* const x9151 = apply_prim_random(lst9152);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
}
else
{
void* const kont9150 = arg_buffer[2];
void* const x9151 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
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
void* const kont9153 = prim_car(lst);
void* const lst9155 = prim_cdr(lst);
void* const x9154 = apply_prim_symbol_u63(lst9155);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
}
else
{
void* const kont9153 = arg_buffer[2];
void* const x9154 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
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
void* const kont9156 = prim_car(lst);
void* const lst9158 = prim_cdr(lst);
void* const x9157 = apply_prim_pair_u63(lst9158);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
}
else
{
void* const kont9156 = arg_buffer[2];
void* const x9157 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
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
void* const kont9159 = prim_car(lst);
void* const lst9161 = prim_cdr(lst);
void* const x9160 = apply_prim_positive_u63(lst9161);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9159))[0])();
}
else
{
void* const kont9159 = arg_buffer[2];
void* const x9160 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9159))[0])();
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
void* const kont9162 = prim_car(lst);
void* const lst9164 = prim_cdr(lst);
void* const x9163 = apply_prim_negative_u63(lst9164);
arg_buffer[1] = kont9162;
arg_buffer[2] = x9163;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9162))[0])();
}
else
{
void* const kont9162 = arg_buffer[2];
void* const x9163 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9162;
arg_buffer[2] = x9163;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9162))[0])();
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
void* const kont9165 = prim_car(lst);
void* const lst9167 = prim_cdr(lst);
void* const x9166 = apply_prim_list(lst9167);
arg_buffer[1] = kont9165;
arg_buffer[2] = x9166;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9165))[0])();
}
else
{
void* const kont9165 = arg_buffer[2];
void* const x9166 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9165;
arg_buffer[2] = x9166;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont9165))[0])();
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8870 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int9002, apply_prim_modulo_2(x, int8981));
arg_buffer[1] = kont8870;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont8870))[0])();
}

inline void even_u63_spec(void* _8914, void* kont8870, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int9002, apply_prim_modulo_2(x, int8981));
arg_buffer[1] = kont8870;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont8870))[0])();
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8871 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int9001, apply_prim_modulo_2(x, int8981));
arg_buffer[1] = kont8871;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont8871))[0])();
}

inline void odd_u63_spec(void* _8915, void* kont8871, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(int9001, apply_prim_modulo_2(x, int8981));
arg_buffer[1] = kont8871;
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(kont8871))[0])();
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8872 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9002, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8872)[1])(kont8872, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8872, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9001));
}

}

inline void list_u45ref_spec(void* _8916, void* kont8872, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9002, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8872)[1])(kont8872, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8872, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9001));
}

}

inline void lam8917_fptr() // lam8917 -> generic version 
{
//reading env
void* const env8918 = arg_buffer[1];
//reading env and args
void* const id_8743 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);

//if-clause
if(is_true(id_8743))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], bool_f8995);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[4]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], decode_clo_array[4]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[3], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[4]));
}

}

}

inline void lam8917_spec(void* env8918, void* id_8743) // lam8917 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);

//if-clause
if(is_true(id_8743))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], bool_f8995);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[4]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[1])(decode_clo_array[3], decode_clo_array[4]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[3], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[4]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8873 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9168 = alloc_kont(lam8917_fptr, reinterpret_cast<void*>(lam8917_spec), 3);

//setting env list
clo9168[2] = item;
clo9168[3] = kont8873;
clo9168[4] = lst;
void* f_lam_8874 = encode_clo(clo9168);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8874)[1])(f_lam_8874, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8874)[1])(f_lam_8874, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8919, void* kont8873, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9169 = alloc_kont(lam8917_fptr, reinterpret_cast<void*>(lam8917_spec), 3);

//setting env list
clo9169[2] = item;
clo9169[3] = kont8873;
clo9169[4] = lst;
void* f_lam_8874 = encode_clo(clo9169);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8874)[1])(f_lam_8874, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8874)[1])(f_lam_8874, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8875 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8875)[1])(kont8875, bool_f8995);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8875)[1])(kont8875, bool_t8997);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8875, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8920, void* kont8875, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8875)[1])(kont8875, bool_f8995);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8875)[1])(kont8875, bool_t8997);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8875, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8921_fptr() // lam8921 -> generic version 
{
//reading env
void* const env8922 = arg_buffer[1];
//reading env and args
void* const id_8758 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8922);

//clo-app
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[3], id_8758);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8921_spec(void* env8922, void* id_8758) // lam8921 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8922);

//clo-app
arg_buffer[2] = apply_prim__u43_2(decode_clo_array[3], id_8758);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8876 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8876)[1])(kont8876, int9002);
}
else
{

//creating new make-kont closure
void** clo9170 = alloc_kont(lam8921_fptr, reinterpret_cast<void*>(lam8921_spec), 2);

//setting env list
clo9170[2] = kont8876;
clo9170[3] = int9001;
void* f_lam_8877 = encode_clo(clo9170);



//clo-app
length_spec(length, f_lam_8877, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8923, void* kont8876, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8876)[1])(kont8876, int9002);
}
else
{

//creating new make-kont closure
void** clo9171 = alloc_kont(lam8921_fptr, reinterpret_cast<void*>(lam8921_spec), 2);

//setting env list
clo9171[2] = kont8876;
clo9171[3] = int9001;
void* f_lam_8877 = encode_clo(clo9171);



//clo-app
length_spec(length, f_lam_8877, apply_prim_cdr_1(lst));
}

}

inline void lam8924_fptr() // lam8924 -> generic version 
{
//reading env
void* const env8925 = arg_buffer[1];
//reading env and args
void* const id_8764 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8764);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8924_spec(void* env8925, void* id_8764) // lam8924 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8764);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8926_fptr() // lam8926 -> generic version 
{
//reading env
void* const env8927 = arg_buffer[1];
//reading env and args
void* const id_8762 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//creating new make-kont closure
void** clo9172 = alloc_kont(lam8924_fptr, reinterpret_cast<void*>(lam8924_spec), 2);

//setting env list
clo9172[2] = decode_clo_array[3];
clo9172[3] = id_8762;
void* f_lam_8879 = encode_clo(clo9172);



//clo-app
map_spec(map, f_lam_8879, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8926_spec(void* env8927, void* id_8762) // lam8926 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//creating new make-kont closure
void** clo9173 = alloc_kont(lam8924_fptr, reinterpret_cast<void*>(lam8924_spec), 2);

//setting env list
clo9173[2] = decode_clo_array[3];
clo9173[3] = id_8762;
void* f_lam_8879 = encode_clo(clo9173);



//clo-app
map_spec(map, f_lam_8879, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[4]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8878 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8878)[1])(kont8878, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9174 = alloc_kont(lam8926_fptr, reinterpret_cast<void*>(lam8926_spec), 3);

//setting env list
clo9174[2] = proc;
clo9174[3] = kont8878;
clo9174[4] = lst;
void* f_lam_8880 = encode_clo(clo9174);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8880;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9006;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8928, void* kont8878, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8878)[1])(kont8878, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9175 = alloc_kont(lam8926_fptr, reinterpret_cast<void*>(lam8926_spec), 3);

//setting env list
clo9175[2] = proc;
clo9175[3] = kont8878;
clo9175[4] = lst;
void* f_lam_8880 = encode_clo(clo9175);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8880;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9006;
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8929_fptr() // lam8929 -> generic version 
{
//reading env
void* const env8930 = arg_buffer[1];
//reading env and args
void* const id_8771 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8930);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8771);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8929_spec(void* env8930, void* id_8771) // lam8929 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8930);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8771);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8931_fptr() // lam8931 -> generic version 
{
//reading env
void* const env8932 = arg_buffer[1];
//reading env and args
void* const id_8768 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8932);

//if-clause
if(is_true(id_8768))
{

//creating new make-kont closure
void** clo9176 = alloc_kont(lam8929_fptr, reinterpret_cast<void*>(lam8929_spec), 2);

//setting env list
clo9176[2] = decode_clo_array[2];
clo9176[3] = apply_prim_car_1(decode_clo_array[4]);
void* f_lam_8882 = encode_clo(clo9176);



//clo-app
filter_spec(filter, f_lam_8882, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[2], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
}

}

inline void lam8931_spec(void* env8932, void* id_8768) // lam8931 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8932);

//if-clause
if(is_true(id_8768))
{

//creating new make-kont closure
void** clo9177 = alloc_kont(lam8929_fptr, reinterpret_cast<void*>(lam8929_spec), 2);

//setting env list
clo9177[2] = decode_clo_array[2];
clo9177[3] = apply_prim_car_1(decode_clo_array[4]);
void* f_lam_8882 = encode_clo(clo9177);



//clo-app
filter_spec(filter, f_lam_8882, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[4]));
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
void* const kont8881 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8881)[1])(kont8881, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9178 = alloc_kont(lam8931_fptr, reinterpret_cast<void*>(lam8931_spec), 3);

//setting env list
clo9178[2] = kont8881;
clo9178[3] = op;
clo9178[4] = lst;
void* f_lam_8883 = encode_clo(clo9178);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8883;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9006;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8933, void* kont8881, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8881)[1])(kont8881, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9179 = alloc_kont(lam8931_fptr, reinterpret_cast<void*>(lam8931_spec), 3);

//setting env list
clo9179[2] = kont8881;
clo9179[3] = op;
clo9179[4] = lst;
void* f_lam_8883 = encode_clo(clo9179);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8883;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = int9006;
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8884 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9002)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[1])(kont8884, lst);
}
else
{

//clo-app
drop_spec(drop, kont8884, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9001));
}

}

inline void drop_spec(void* _8934, void* kont8884, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9002)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[1])(kont8884, lst);
}
else
{

//clo-app
drop_spec(drop, kont8884, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9001));
}

}

inline void lam8935_fptr() // lam8935 -> generic version 
{
//reading env
void* const env8936 = arg_buffer[1];
//reading env and args
void* const id_8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);

//clo-app
foldl_spec(foldl, decode_clo_array[4], decode_clo_array[2], id_8780, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8935_spec(void* env8936, void* id_8780) // lam8935 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);

//clo-app
foldl_spec(foldl, decode_clo_array[4], decode_clo_array[2], id_8780, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8885 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8885)[1])(kont8885, acc);
}
else
{

//creating new make-kont closure
void** clo9180 = alloc_kont(lam8935_fptr, reinterpret_cast<void*>(lam8935_spec), 3);

//setting env list
clo9180[2] = fun;
clo9180[3] = lst;
clo9180[4] = kont8885;
void* f_lam_8886 = encode_clo(clo9180);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8886;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int9007;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8937, void* kont8885, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8885)[1])(kont8885, acc);
}
else
{

//creating new make-kont closure
void** clo9181 = alloc_kont(lam8935_fptr, reinterpret_cast<void*>(lam8935_spec), 3);

//setting env list
clo9181[2] = fun;
clo9181[3] = lst;
clo9181[4] = kont8885;
void* f_lam_8886 = encode_clo(clo9181);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8886;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = int9007;
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8938_fptr() // lam8938 -> generic version 
{
//reading env
void* const env8939 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8939);

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[4];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8785;
numArgs = int9007;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8938_spec(void* env8939, void* id_8785) // lam8938 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8939);

//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = decode_clo_array[4];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8785;
numArgs = int9007;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8887 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8887)[1])(kont8887, acc);
}
else
{

//creating new make-kont closure
void** clo9182 = alloc_kont(lam8938_fptr, reinterpret_cast<void*>(lam8938_spec), 3);

//setting env list
clo9182[2] = apply_prim_car_1(lst);
clo9182[3] = fun;
clo9182[4] = kont8887;
void* f_lam_8888 = encode_clo(clo9182);



//clo-app
foldr_spec(foldr, f_lam_8888, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8940, void* kont8887, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8887)[1])(kont8887, acc);
}
else
{

//creating new make-kont closure
void** clo9183 = alloc_kont(lam8938_fptr, reinterpret_cast<void*>(lam8938_spec), 3);

//setting env list
clo9183[2] = apply_prim_car_1(lst);
clo9183[3] = fun;
clo9183[4] = kont8887;
void* f_lam_8888 = encode_clo(clo9183);



//clo-app
foldr_spec(foldr, f_lam_8888, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8889 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8889)[1])(kont8889, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8889, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8941, void* kont8889, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8889)[1])(kont8889, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8889, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8890 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8890, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8942, void* kont8890, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8890, lst, apply_prim_list_0());
}

inline void lam8943_fptr() // lam8943 -> generic version 
{
//reading env
void* const env8944 = arg_buffer[1];
//reading env and args
void* const id_8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8944);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8794);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8943_spec(void* env8944, void* id_8794) // lam8943 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8944);

//clo-app
arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8794);
arg_buffer[1] = decode_clo_array[2];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8891 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[1])(kont8891, rhs);
}
else
{

//creating new make-kont closure
void** clo9184 = alloc_kont(lam8943_fptr, reinterpret_cast<void*>(lam8943_spec), 2);

//setting env list
clo9184[2] = kont8891;
clo9184[3] = apply_prim_car_1(lhs);
void* f_lam_8892 = encode_clo(clo9184);



//clo-app
append1_spec(append1, f_lam_8892, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8945, void* kont8891, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[1])(kont8891, rhs);
}
else
{

//creating new make-kont closure
void** clo9185 = alloc_kont(lam8943_fptr, reinterpret_cast<void*>(lam8943_spec), 2);

//setting env list
clo9185[2] = kont8891;
clo9185[3] = apply_prim_car_1(lhs);
void* f_lam_8892 = encode_clo(clo9185);



//clo-app
append1_spec(append1, f_lam_8892, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8946_fptr() // lam8946 -> generic version 
{
//reading env
void* const env8947 = arg_buffer[1];
//reading env and args
void* const id_8801 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8947);

//clo-app
foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8801);
}

inline void lam8946_spec(void* env8947, void* id_8801) // lam8946 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8947);

//clo-app
foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8801);
}

inline void lam8948_fptr() // lam8948 -> generic version 
{
//reading env
void* const env8949 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8949);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[5], id_8796)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9186 = alloc_kont(lam8946_fptr, reinterpret_cast<void*>(lam8946_spec), 2);

//setting env list
clo9186[2] = apply_prim_list_0();
clo9186[3] = decode_clo_array[4];
void* f_lam_8894 = encode_clo(clo9186);



//clo-app
append1_spec(append1, f_lam_8894, apply_prim_list_1(decode_clo_array[2]), decode_clo_array[3]);
}

}

inline void lam8948_spec(void* env8949, void* id_8796) // lam8948 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8949);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[5], id_8796)))
{

//clo-app
append1_spec(append1, decode_clo_array[4], decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]));
}
else
{

//creating new make-kont closure
void** clo9187 = alloc_kont(lam8946_fptr, reinterpret_cast<void*>(lam8946_spec), 2);

//setting env list
clo9187[2] = apply_prim_list_0();
clo9187[3] = decode_clo_array[4];
void* f_lam_8894 = encode_clo(clo9187);



//clo-app
append1_spec(append1, f_lam_8894, apply_prim_list_1(decode_clo_array[2]), decode_clo_array[3]);
}

}

inline void lam8950_fptr() // lam8950 -> generic version 
{
//reading env
void* const env8951 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8951);

//creating new make-kont closure
void** clo9188 = alloc_kont(lam8948_fptr, reinterpret_cast<void*>(lam8948_spec), 4);

//setting env list
clo9188[2] = decode_clo_array[2];
clo9188[3] = x;
clo9188[4] = decode_clo_array[3];
clo9188[5] = int9001;
void* f_lam_8895 = encode_clo(clo9188);



//clo-app
length_spec(length, f_lam_8895, x);
}

inline void lam8950_spec(void* env8951, void* x) // lam8950 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8951);

//creating new make-kont closure
void** clo9189 = alloc_kont(lam8948_fptr, reinterpret_cast<void*>(lam8948_spec), 4);

//setting env list
clo9189[2] = decode_clo_array[2];
clo9189[3] = x;
clo9189[4] = decode_clo_array[3];
clo9189[5] = int9001;
void* f_lam_8895 = encode_clo(clo9189);



//clo-app
length_spec(length, f_lam_8895, x);
}

void append_fptr() // append 
{
//reading env
void* const _8952 = arg_buffer[1];
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
void** clo9190 = alloc_kont(lam8950_fptr, reinterpret_cast<void*>(lam8950_spec), 2);

//setting env list
clo9190[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9190[3] = apply_prim_car_1(vargs);
void* f_lam_8896 = encode_clo(clo9190);


// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8896)[1])(f_lam_8896, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8953_fptr() // lam8953 -> generic version 
{
//reading env
void* const env8954 = arg_buffer[1];
//reading env and args
void* const xy8804 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8954);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8804);
}

inline void lam8953_spec(void* env8954, void* xy8804) // lam8953 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8954);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8804);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8897 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9002)))
{

//creating new make-kont closure
void** clo9191 = alloc_kont(lam8953_fptr, reinterpret_cast<void*>(lam8953_spec), 1);

//setting env list
clo9191[2] = kont8897;
void* f_lam_8898 = encode_clo(clo9191);



//clo-app
reverse_spec(reverse, f_lam_8898, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8897, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9001), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8955, void* kont8897, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9002)))
{

//creating new make-kont closure
void** clo9192 = alloc_kont(lam8953_fptr, reinterpret_cast<void*>(lam8953_spec), 1);

//setting env list
clo9192[2] = kont8897;
void* f_lam_8898 = encode_clo(clo9192);



//clo-app
reverse_spec(reverse, f_lam_8898, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8897, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9001), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8899 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8899, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8956, void* kont8899, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8899, lst, n, apply_prim_list_0());
}

inline void lam8957_fptr() // lam8957 -> generic version 
{
//reading env
void* const env8958 = arg_buffer[1];
//reading env and args
void* const id_8824 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8958);

//if-clause
if(is_true(id_8824))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[5], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9001), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[5])[1])(decode_clo_array[5], bool_f8995);
}

}

inline void lam8957_spec(void* env8958, void* id_8824) // lam8957 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8958);

//if-clause
if(is_true(id_8824))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[5], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9001), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[5])[1])(decode_clo_array[5], bool_f8995);
}

}

inline void lam8959_fptr() // lam8959 -> generic version 
{
//reading env
void* const env8960 = arg_buffer[1];
//reading env and args
void* const id_8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);

//if-clause
if(is_true(id_8818))
{

//creating new make-kont closure
void** clo9193 = alloc_kont(lam8957_fptr, reinterpret_cast<void*>(lam8957_spec), 4);

//setting env list
clo9193[2] = decode_clo_array[2];
clo9193[3] = decode_clo_array[3];
clo9193[4] = decode_clo_array[4];
clo9193[5] = decode_clo_array[5];
void* f_lam_8901 = encode_clo(clo9193);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[2]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[4]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8901)[1])(f_lam_8901, bool_f8995);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8901)[1])(f_lam_8901, bool_t8997);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[5])[1])(decode_clo_array[5], bool_f8995);
}

}

inline void lam8959_spec(void* env8960, void* id_8818) // lam8959 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);

//if-clause
if(is_true(id_8818))
{

//creating new make-kont closure
void** clo9194 = alloc_kont(lam8957_fptr, reinterpret_cast<void*>(lam8957_spec), 4);

//setting env list
clo9194[2] = decode_clo_array[2];
clo9194[3] = decode_clo_array[3];
clo9194[4] = decode_clo_array[4];
clo9194[5] = decode_clo_array[5];
void* f_lam_8901 = encode_clo(clo9194);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[2]), apply_prim__u45_2(decode_clo_array[3], decode_clo_array[4]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8901)[1])(f_lam_8901, bool_f8995);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8901)[1])(f_lam_8901, bool_t8997);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[5])[1])(decode_clo_array[5], bool_f8995);
}

}

inline void ok_u63_fptr() // ok? -> generic version 
{
//reading env and args
void* const kont8900 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[1])(kont8900, bool_t8997);
}
else
{

//creating new make-kont closure
void** clo9195 = alloc_kont(lam8959_fptr, reinterpret_cast<void*>(lam8959_spec), 4);

//setting env list
clo9195[2] = placed;
clo9195[3] = row;
clo9195[4] = dist;
clo9195[5] = kont8900;
void* f_lam_8902 = encode_clo(clo9195);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8902)[1])(f_lam_8902, bool_f8995);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8902)[1])(f_lam_8902, bool_t8997);
}

}

}

inline void ok_u63_spec(void* _8961, void* kont8900, void* row, void* dist, void* placed) // ok? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[1])(kont8900, bool_t8997);
}
else
{

//creating new make-kont closure
void** clo9196 = alloc_kont(lam8959_fptr, reinterpret_cast<void*>(lam8959_spec), 4);

//setting env list
clo9196[2] = placed;
clo9196[3] = row;
clo9196[4] = dist;
clo9196[5] = kont8900;
void* f_lam_8902 = encode_clo(clo9196);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8902)[1])(f_lam_8902, bool_f8995);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8902)[1])(f_lam_8902, bool_t8997);
}

}

}

inline void lam8962_fptr() // lam8962 -> generic version 
{
//reading env
void* const env8963 = arg_buffer[1];
//reading env and args
void* const id_8848 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//clo-app
arg_buffer[2] = apply_prim_cons_2(apply_prim_list_3(id_8848, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[5]));
arg_buffer[1] = decode_clo_array[4];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[4]))[0])();
}

inline void lam8962_spec(void* env8963, void* id_8848) // lam8962 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//clo-app
arg_buffer[2] = apply_prim_cons_2(apply_prim_list_3(id_8848, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[5]));
arg_buffer[1] = decode_clo_array[4];
numArgs = int9005;
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[4]))[0])();
}

inline void lam8964_fptr() // lam8964 -> generic version 
{
//reading env
void* const env8965 = arg_buffer[1];
//reading env and args
void* const id_8855 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[4], apply_prim_cons_2(decode_clo_array[2], id_8855), decode_clo_array[3]);
}

inline void lam8964_spec(void* env8965, void* id_8855) // lam8964 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[4], apply_prim_cons_2(decode_clo_array[2], id_8855), decode_clo_array[3]);
}

inline void lam8966_fptr() // lam8966 -> generic version 
{
//reading env
void* const env8967 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);

//creating new make-kont closure
void** clo9197 = alloc_kont(lam8964_fptr, reinterpret_cast<void*>(lam8964_spec), 3);

//setting env list
clo9197[2] = decode_clo_array[5];
clo9197[3] = decode_clo_array[6];
clo9197[4] = decode_clo_array[7];
void* f_lam_8904 = encode_clo(clo9197);



//if-clause
if(is_true(id_8846))
{

//creating new make-kont closure
void** clo9198 = alloc_kont(lam8962_fptr, reinterpret_cast<void*>(lam8962_spec), 4);

//setting env list
clo9198[2] = decode_clo_array[2];
clo9198[3] = decode_clo_array[4];
clo9198[4] = f_lam_8904;
clo9198[5] = decode_clo_array[8];
void* f_lam_8905 = encode_clo(clo9198);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8905;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[2]);
arg_buffer[4] = decode_clo_array[3];
numArgs = int9007;
append_fptr();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8904)[1])(f_lam_8904, apply_prim_cdr_1(decode_clo_array[8]));
}

}

inline void lam8966_spec(void* env8967, void* id_8846) // lam8966 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);

//creating new make-kont closure
void** clo9199 = alloc_kont(lam8964_fptr, reinterpret_cast<void*>(lam8964_spec), 3);

//setting env list
clo9199[2] = decode_clo_array[5];
clo9199[3] = decode_clo_array[6];
clo9199[4] = decode_clo_array[7];
void* f_lam_8904 = encode_clo(clo9199);



//if-clause
if(is_true(id_8846))
{

//creating new make-kont closure
void** clo9200 = alloc_kont(lam8962_fptr, reinterpret_cast<void*>(lam8962_spec), 4);

//setting env list
clo9200[2] = decode_clo_array[2];
clo9200[3] = decode_clo_array[4];
clo9200[4] = f_lam_8904;
clo9200[5] = decode_clo_array[8];
void* f_lam_8905 = encode_clo(clo9200);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8905;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[2]);
arg_buffer[4] = decode_clo_array[3];
numArgs = int9007;
append_fptr();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(f_lam_8904)[1])(f_lam_8904, apply_prim_cdr_1(decode_clo_array[8]));
}

}

inline void lam8968_fptr() // lam8968 -> generic version 
{
//reading env
void* const env8969 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8969);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[5], apply_prim_cdr_1(decode_clo_array[6]), apply_prim__u43_2(decode_clo_array[4], int9001));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[5], apply_prim_cdr_1(decode_clo_array[6]), decode_clo_array[4]);
}

}
else
{

//creating new make-kont closure
void** clo9201 = alloc_kont(lam8966_fptr, reinterpret_cast<void*>(lam8966_spec), 7);

//setting env list
clo9201[2] = decode_clo_array[2];
clo9201[3] = decode_clo_array[3];
clo9201[4] = z;
clo9201[5] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9201[6] = decode_clo_array[4];
clo9201[7] = decode_clo_array[5];
clo9201[8] = decode_clo_array[6];
void* f_lam_8906 = encode_clo(clo9201);



//clo-app
ok_u63_spec(ok_u63, f_lam_8906, apply_prim_car_1(decode_clo_array[2]), int9001, z);
}

}

inline void lam8968_spec(void* env8969, void* z) // lam8968 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8969);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[5], apply_prim_cdr_1(decode_clo_array[6]), apply_prim__u43_2(decode_clo_array[4], int9001));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[5], apply_prim_cdr_1(decode_clo_array[6]), decode_clo_array[4]);
}

}
else
{

//creating new make-kont closure
void** clo9202 = alloc_kont(lam8966_fptr, reinterpret_cast<void*>(lam8966_spec), 7);

//setting env list
clo9202[2] = decode_clo_array[2];
clo9202[3] = decode_clo_array[3];
clo9202[4] = z;
clo9202[5] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9202[6] = decode_clo_array[4];
clo9202[7] = decode_clo_array[5];
clo9202[8] = decode_clo_array[6];
void* f_lam_8906 = encode_clo(clo9202);



//clo-app
ok_u63_spec(ok_u63, f_lam_8906, apply_prim_car_1(decode_clo_array[2]), int9001, z);
}

}

inline void lam8970_fptr() // lam8970 -> generic version 
{
//reading env
void* const env8971 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8971);

//creating new make-kont closure
void** clo9203 = alloc_kont(lam8968_fptr, reinterpret_cast<void*>(lam8968_spec), 5);

//setting env list
clo9203[2] = decode_clo_array[2];
clo9203[3] = y;
clo9203[4] = decode_clo_array[3];
clo9203[5] = decode_clo_array[4];
clo9203[6] = decode_clo_array[6];
void* f_lam_8907 = encode_clo(clo9203);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5])));
arg_buffer[1] = f_lam_8907;
numArgs = int9005;
lam8968_spec(f_lam_8907, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void lam8970_spec(void* env8971, void* y) // lam8970 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8971);

//creating new make-kont closure
void** clo9204 = alloc_kont(lam8968_fptr, reinterpret_cast<void*>(lam8968_spec), 5);

//setting env list
clo9204[2] = decode_clo_array[2];
clo9204[3] = y;
clo9204[4] = decode_clo_array[3];
clo9204[5] = decode_clo_array[4];
clo9204[6] = decode_clo_array[6];
void* f_lam_8907 = encode_clo(clo9204);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5])));
arg_buffer[1] = f_lam_8907;
numArgs = int9005;
lam8968_spec(f_lam_8907, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version 
{
//reading env and args
void* const kont8903 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8903)[1])(kont8903, count);
}
else
{

//creating new make-kont closure
void** clo9205 = alloc_kont(lam8970_fptr, reinterpret_cast<void*>(lam8970_spec), 5);

//setting env list
clo9205[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9205[3] = count;
clo9205[4] = kont8903;
clo9205[5] = apply_prim_car_1(stack);
clo9205[6] = stack;
void* f_lam_8908 = encode_clo(clo9205);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack)));
arg_buffer[1] = f_lam_8908;
numArgs = int9005;
lam8970_spec(f_lam_8908, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void q_u45helper_spec(void* _8972, void* kont8903, void* stack, void* count) // q-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8903)[1])(kont8903, count);
}
else
{

//creating new make-kont closure
void** clo9206 = alloc_kont(lam8970_fptr, reinterpret_cast<void*>(lam8970_spec), 5);

//setting env list
clo9206[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9206[3] = count;
clo9206[4] = kont8903;
clo9206[5] = apply_prim_car_1(stack);
clo9206[6] = stack;
void* f_lam_8908 = encode_clo(clo9206);



//clo-app
arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack)));
arg_buffer[1] = f_lam_8908;
numArgs = int9005;
lam8970_spec(f_lam_8908, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void iota1_fptr() // iota1 -> generic version 
{
//reading env and args
void* const kont8909 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9002)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[1])(kont8909, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8909, apply_prim__u45_2(n, int9001), apply_prim_cons_2(n, l));
}

}

inline void iota1_spec(void* _8973, void* kont8909, void* n, void* l) // iota1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9002)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[1])(kont8909, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8909, apply_prim__u45_2(n, int9001), apply_prim_cons_2(n, l));
}

}

inline void lam8974_fptr() // lam8974 -> generic version 
{
//reading env
void* const env8975 = arg_buffer[1];
//reading env and args
void* const id_8863 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[2], apply_prim_list_1(apply_prim_list_3(id_8863, apply_prim_list_0(), apply_prim_list_0())), int9002);
}

inline void lam8974_spec(void* env8975, void* id_8863) // lam8974 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[2], apply_prim_list_1(apply_prim_list_3(id_8863, apply_prim_list_0(), apply_prim_list_0())), int9002);
}

inline void nqueens_fptr() // nqueens -> generic version 
{
//reading env and args
void* const kont8910 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9207 = alloc_kont(lam8974_fptr, reinterpret_cast<void*>(lam8974_spec), 1);

//setting env list
clo9207[2] = kont8910;
void* f_lam_8911 = encode_clo(clo9207);



//clo-app
iota1_spec(iota1, f_lam_8911, n, apply_prim_list_0());
}

inline void nqueens_spec(void* _8976, void* kont8910, void* n) // nqueens 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9208 = alloc_kont(lam8974_fptr, reinterpret_cast<void*>(lam8974_spec), 1);

//setting env list
clo9208[2] = kont8910;
void* f_lam_8911 = encode_clo(clo9208);



//clo-app
iota1_spec(iota1, f_lam_8911, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8912 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8912, int9003);
}

inline void brouhaha_main_spec(void* _8977, void* kont8912) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8912, int9003);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9002 = reinterpret_cast<void *>(encode_int(0));
bool_t8997 = encode_bool(true);
int9001 = reinterpret_cast<void *>(encode_int(1));
bool_f8995 = encode_bool(false);
int8981 = reinterpret_cast<void *>(encode_int(2));
int9003 = reinterpret_cast<void *>(encode_int(8));



// initializing global integer vars
int9004 = 1;
int9005 = 2;
int9006 = 3;
int9007 = 4;
int9008 = 5;

//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt, reinterpret_cast<void*>(fhalt_spec), 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

