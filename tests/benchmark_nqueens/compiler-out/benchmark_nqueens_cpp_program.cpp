#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
int int9021;
int int9020;
int int9007;
int int9022;



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
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8917_fptr(); // lam8917
void* lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void member_fptr(); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8921_fptr(); // lam8921
void* lam8921 = encode_clo(alloc_clo(lam8921_fptr, 0));

void length_fptr(); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8924_fptr(); // lam8924
void* lam8924 = encode_clo(alloc_clo(lam8924_fptr, 0));

void lam8926_fptr(); // lam8926
void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void lam8928_fptr(); // lam8928
void* lam8928 = encode_clo(alloc_clo(lam8928_fptr, 0));

void map_fptr(); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8931_fptr(); // lam8931
void* lam8931 = encode_clo(alloc_clo(lam8931_fptr, 0));

void lam8933_fptr(); // lam8933
void* lam8933 = encode_clo(alloc_clo(lam8933_fptr, 0));

void lam8935_fptr(); // lam8935
void* lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void filter_fptr(); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8939_fptr(); // lam8939
void* lam8939 = encode_clo(alloc_clo(lam8939_fptr, 0));

void foldl_fptr(); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8942_fptr(); // lam8942
void* lam8942 = encode_clo(alloc_clo(lam8942_fptr, 0));

void foldr_fptr(); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8946_fptr(); // lam8946
void* lam8946 = encode_clo(alloc_clo(lam8946_fptr, 0));

void reverse_fptr(); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8949_fptr(); // lam8949
void* lam8949 = encode_clo(alloc_clo(lam8949_fptr, 0));

void append1_fptr(); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8952_fptr(); // lam8952
void* lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void lam8954_fptr(); // lam8954
void* lam8954 = encode_clo(alloc_clo(lam8954_fptr, 0));

void lam8956_fptr(); // lam8956
void* lam8956 = encode_clo(alloc_clo(lam8956_fptr, 0));

void lam8958_fptr(); // lam8958
void* lam8958 = encode_clo(alloc_clo(lam8958_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8961_fptr(); // lam8961
void* lam8961 = encode_clo(alloc_clo(lam8961_fptr, 0));

void take_u45helper_fptr(); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8964_fptr(); // lam8964
void* lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void take_fptr(); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8967_fptr(); // lam8967
void* lam8967 = encode_clo(alloc_clo(lam8967_fptr, 0));

void lam8969_fptr(); // lam8969
void* lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void ok_u63_fptr(); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8972_fptr(); // lam8972
void* lam8972 = encode_clo(alloc_clo(lam8972_fptr, 0));

void lam8974_fptr(); // lam8974
void* lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void lam8976_fptr(); // lam8976
void* lam8976 = encode_clo(alloc_clo(lam8976_fptr, 0));

void lam8978_fptr(); // lam8978
void* lam8978 = encode_clo(alloc_clo(lam8978_fptr, 0));

void lam8980_fptr(); // lam8980
void* lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void lam8982_fptr(); // lam8982
void* lam8982 = encode_clo(alloc_clo(lam8982_fptr, 0));

void lam8984_fptr(); // lam8984
void* lam8984 = encode_clo(alloc_clo(lam8984_fptr, 0));

void lam8986_fptr(); // lam8986
void* lam8986 = encode_clo(alloc_clo(lam8986_fptr, 0));

void q_u45helper_fptr(); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8990_fptr(); // lam8990
void* lam8990 = encode_clo(alloc_clo(lam8990_fptr, 0));

void lam8992_fptr(); // lam8992
void* lam8992 = encode_clo(alloc_clo(lam8992_fptr, 0));

void lam8994_fptr(); // lam8994
void* lam8994 = encode_clo(alloc_clo(lam8994_fptr, 0));

void lam8996_fptr(); // lam8996
void* lam8996 = encode_clo(alloc_clo(lam8996_fptr, 0));

void lam8998_fptr(); // lam8998
void* lam8998 = encode_clo(alloc_clo(lam8998_fptr, 0));

void lam9000_fptr(); // lam9000
void* lam9000 = encode_clo(alloc_clo(lam9000_fptr, 0));

void nqueens_fptr(); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));




// pre-decoding global symbols
auto decoded_set_u45add = reinterpret_cast<void (*)()>((decode_clo(set_u45add))[0]);
auto decoded_random = reinterpret_cast<void (*)()>((decode_clo(random_brouhaha))[0]);
auto decoded_ok_u63 = reinterpret_cast<void (*)()>((decode_clo(ok_u63))[0]);
auto decoded__u45 = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
auto decoded__u61 = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
auto decoded_exact_u45round = reinterpret_cast<void (*)()>((decode_clo(exact_u45round))[0]);
auto decoded_list_u45_u62set = reinterpret_cast<void (*)()>((decode_clo(list_u45_u62set))[0]);
auto decoded_q_u45helper = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
auto decoded_member_u63 = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
auto decoded__u60 = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
auto decoded_set_u45_u62list = reinterpret_cast<void (*)()>((decode_clo(set_u45_u62list))[0]);
auto decoded_foldl = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
auto decoded_sqrt = reinterpret_cast<void (*)()>((decode_clo(sqrt_brouhaha))[0]);
auto decoded_cons = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
auto decoded_symbol_u63 = reinterpret_cast<void (*)()>((decode_clo(symbol_u63))[0]);
auto decoded_max = reinterpret_cast<void (*)()>((decode_clo(max))[0]);
auto decoded__u47 = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
auto decoded_car = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
auto decoded_int_u45_u62float = reinterpret_cast<void (*)()>((decode_clo(int_u45_u62float))[0]);
auto decoded_filter = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
auto decoded__u62_u61 = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
auto decoded__u62 = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
auto decoded_set_u45member_u63 = reinterpret_cast<void (*)()>((decode_clo(set_u45member_u63))[0]);
auto decoded_take_u45helper = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
auto decoded__u60_u61 = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
auto decoded_float_u45_u62int = reinterpret_cast<void (*)()>((decode_clo(float_u45_u62int))[0]);
auto decoded_append1 = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
auto decoded_list_u45ref = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
auto decoded_hash_u45count = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
auto decoded_hash_u45keys = reinterpret_cast<void (*)()>((decode_clo(hash_u45keys))[0]);
auto decoded__u43 = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
auto decoded_min = reinterpret_cast<void (*)()>((decode_clo(min))[0]);
auto decoded_brouhaha_main = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
auto decoded_equal_u63 = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
auto decoded_exact_u45floor = reinterpret_cast<void (*)()>((decode_clo(exact_u45floor))[0]);
auto decoded_positive_u63 = reinterpret_cast<void (*)()>((decode_clo(positive_u63))[0]);
auto decoded__u42 = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
auto decoded_append = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
auto decoded_reverse = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
auto decoded_hash_u45has_u45key_u63 = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
auto decoded_reverse_u45helper = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
auto decoded_string_u45ref = reinterpret_cast<void (*)()>((decode_clo(string_u45ref))[0]);
auto decoded_hash_u45set = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
auto decoded_length = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
auto decoded_eq_u63 = reinterpret_cast<void (*)()>((decode_clo(eq_u63))[0]);
auto decoded_null_u63 = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
auto decoded_set_u45remove = reinterpret_cast<void (*)()>((decode_clo(set_u45remove))[0]);
auto decoded_abs = reinterpret_cast<void (*)()>((decode_clo(abs_brouhaha))[0]);
auto decoded_set_u45count = reinterpret_cast<void (*)()>((decode_clo(set_u45count))[0]);
auto decoded_map = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
auto decoded_modulo = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
auto decoded_foldr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
auto decoded_drop = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
auto decoded_hash = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
auto decoded_string_u63 = reinterpret_cast<void (*)()>((decode_clo(string_u63))[0]);
auto decoded_take = reinterpret_cast<void (*)()>((decode_clo(take))[0]);
auto decoded_expt = reinterpret_cast<void (*)()>((decode_clo(expt))[0]);
auto decoded_quotient = reinterpret_cast<void (*)()>((decode_clo(quotient))[0]);
auto decoded_even_u63 = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
auto decoded_negative_u63 = reinterpret_cast<void (*)()>((decode_clo(negative_u63))[0]);
auto decoded_string_u45_u62list = reinterpret_cast<void (*)()>((decode_clo(string_u45_u62list))[0]);
auto decoded_string_u45append = reinterpret_cast<void (*)()>((decode_clo(string_u45append))[0]);
auto decoded_substring = reinterpret_cast<void (*)()>((decode_clo(substring))[0]);
auto decoded_exact_u45ceiling = reinterpret_cast<void (*)()>((decode_clo(exact_u45ceiling))[0]);
auto decoded_odd_u63 = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
auto decoded_member = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
auto decoded_remainder = reinterpret_cast<void (*)()>((decode_clo(remainder_brouhaha))[0]);
auto decoded_set = reinterpret_cast<void (*)()>((decode_clo(set))[0]);
auto decoded_string_u45length = reinterpret_cast<void (*)()>((decode_clo(string_u45length))[0]);
auto decoded_hash_u45ref = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
auto decoded_iota1 = reinterpret_cast<void (*)()>((decode_clo(iota1))[0]);
auto decoded_cdr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
auto decoded_list = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
auto decoded_pair_u63 = reinterpret_cast<void (*)()>((decode_clo(pair_u63))[0]);
auto decoded_nqueens = reinterpret_cast<void (*)()>((decode_clo(nqueens))[0]);


void _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9025 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9023 = prim_car(lst);
void* const lst9026 = prim_cdr(lst);
void* const x9024 = apply_prim__u43(lst9026);
arg_buffer[1] = kont9023;
arg_buffer[2] = x9024;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9023))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9023 = arg_buffer[2];
void* const x9024 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont9023;
arg_buffer[2] = x9024;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9023))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9029 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9027 = prim_car(lst);
void* const lst9030 = prim_cdr(lst);
void* const x9028 = apply_prim__u45(lst9030);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9027))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9027 = arg_buffer[2];
void* const x9028 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9027))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u42_fptr() // * 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9033 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9031 = prim_car(lst);
void* const lst9034 = prim_cdr(lst);
void* const x9032 = apply_prim__u42(lst9034);
arg_buffer[1] = kont9031;
arg_buffer[2] = x9032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9031))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9031 = arg_buffer[2];
void* const x9032 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9031;
arg_buffer[2] = x9032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9031))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9037 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9035 = prim_car(lst);
void* const lst9038 = prim_cdr(lst);
void* const x9036 = apply_prim__u47(lst9038);
arg_buffer[1] = kont9035;
arg_buffer[2] = x9036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9035))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9035 = arg_buffer[2];
void* const x9036 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9035;
arg_buffer[2] = x9036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9035))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9041 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9039 = prim_car(lst);
void* const lst9042 = prim_cdr(lst);
void* const x9040 = apply_prim__u61(lst9042);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9039))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9039 = arg_buffer[2];
void* const x9040 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9039))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u62_fptr() // > 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9045 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9043 = prim_car(lst);
void* const lst9046 = prim_cdr(lst);
void* const x9044 = apply_prim__u62(lst9046);
arg_buffer[1] = kont9043;
arg_buffer[2] = x9044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9043))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9043 = arg_buffer[2];
void* const x9044 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9043;
arg_buffer[2] = x9044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9043))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u60_fptr() // < 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9049 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9047 = prim_car(lst);
void* const lst9050 = prim_cdr(lst);
void* const x9048 = apply_prim__u60(lst9050);
arg_buffer[1] = kont9047;
arg_buffer[2] = x9048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9047))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9047 = arg_buffer[2];
void* const x9048 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9047;
arg_buffer[2] = x9048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9047))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u60_u61_fptr() // <= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9053 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9051 = prim_car(lst);
void* const lst9054 = prim_cdr(lst);
void* const x9052 = apply_prim__u60_u61(lst9054);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9051))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9051 = arg_buffer[2];
void* const x9052 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9051))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u62_u61_fptr() // >= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9057 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9055 = prim_car(lst);
void* const lst9058 = prim_cdr(lst);
void* const x9056 = apply_prim__u62_u61(lst9058);
arg_buffer[1] = kont9055;
arg_buffer[2] = x9056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9055))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9055 = arg_buffer[2];
void* const x9056 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9055;
arg_buffer[2] = x9056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9055))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void modulo_fptr() // modulo 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9061 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9059 = prim_car(lst);
void* const lst9062 = prim_cdr(lst);
void* const x9060 = apply_prim_modulo(lst9062);
arg_buffer[1] = kont9059;
arg_buffer[2] = x9060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9059))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9059 = arg_buffer[2];
void* const x9060 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9059;
arg_buffer[2] = x9060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9059))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9065 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9063 = prim_car(lst);
void* const lst9066 = prim_cdr(lst);
void* const x9064 = apply_prim_null_u63(lst9066);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9063))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9063 = arg_buffer[2];
void* const x9064 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9063))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void equal_u63_fptr() // equal? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9069 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9067 = prim_car(lst);
void* const lst9070 = prim_cdr(lst);
void* const x9068 = apply_prim_equal_u63(lst9070);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9067))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9067 = arg_buffer[2];
void* const x9068 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9067))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void eq_u63_fptr() // eq? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9073 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9071 = prim_car(lst);
void* const lst9074 = prim_cdr(lst);
void* const x9072 = apply_prim_eq_u63(lst9074);
arg_buffer[1] = kont9071;
arg_buffer[2] = x9072;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9071))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9071 = arg_buffer[2];
void* const x9072 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9071;
arg_buffer[2] = x9072;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9071))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9077 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9075 = prim_car(lst);
void* const lst9078 = prim_cdr(lst);
void* const x9076 = apply_prim_cons(lst9078);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9075))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9075 = arg_buffer[2];
void* const x9076 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9075))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9081 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9079 = prim_car(lst);
void* const lst9082 = prim_cdr(lst);
void* const x9080 = apply_prim_car(lst9082);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9079 = arg_buffer[2];
void* const x9080 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9085 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9083 = prim_car(lst);
void* const lst9086 = prim_cdr(lst);
void* const x9084 = apply_prim_cdr(lst9086);
arg_buffer[1] = kont9083;
arg_buffer[2] = x9084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9083))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9083 = arg_buffer[2];
void* const x9084 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9083;
arg_buffer[2] = x9084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9083))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void float_u45_u62int_fptr() // float->int 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9089 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9087 = prim_car(lst);
void* const lst9090 = prim_cdr(lst);
void* const x9088 = apply_prim_float_u45_u62int(lst9090);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9087))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9087 = arg_buffer[2];
void* const x9088 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9087))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9093 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9091 = prim_car(lst);
void* const lst9094 = prim_cdr(lst);
void* const x9092 = apply_prim_int_u45_u62float(lst9094);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9091))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9091 = arg_buffer[2];
void* const x9092 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9091))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9097 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9095 = prim_car(lst);
void* const lst9098 = prim_cdr(lst);
void* const x9096 = apply_prim_hash(lst9098);
arg_buffer[1] = kont9095;
arg_buffer[2] = x9096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9095))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9095 = arg_buffer[2];
void* const x9096 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9095;
arg_buffer[2] = x9096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9095))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45ref_fptr() // hash-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9101 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9099 = prim_car(lst);
void* const lst9102 = prim_cdr(lst);
void* const x9100 = apply_prim_hash_u45ref(lst9102);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9099))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9099 = arg_buffer[2];
void* const x9100 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9099))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45set_fptr() // hash-set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9105 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9103 = prim_car(lst);
void* const lst9106 = prim_cdr(lst);
void* const x9104 = apply_prim_hash_u45set(lst9106);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9103))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9103 = arg_buffer[2];
void* const x9104 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9103))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45keys_fptr() // hash-keys 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9109 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9107 = prim_car(lst);
void* const lst9110 = prim_cdr(lst);
void* const x9108 = apply_prim_hash_u45keys(lst9110);
arg_buffer[1] = kont9107;
arg_buffer[2] = x9108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9107))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9107 = arg_buffer[2];
void* const x9108 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9107;
arg_buffer[2] = x9108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9107))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9113 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9111 = prim_car(lst);
void* const lst9114 = prim_cdr(lst);
void* const x9112 = apply_prim_hash_u45has_u45key_u63(lst9114);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9111))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9111 = arg_buffer[2];
void* const x9112 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9111))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45count_fptr() // hash-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9117 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9115 = prim_car(lst);
void* const lst9118 = prim_cdr(lst);
void* const x9116 = apply_prim_hash_u45count(lst9118);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9115))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9115 = arg_buffer[2];
void* const x9116 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9115))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9121 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9119 = prim_car(lst);
void* const lst9122 = prim_cdr(lst);
void* const x9120 = apply_prim_set(lst9122);
arg_buffer[1] = kont9119;
arg_buffer[2] = x9120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9119))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9119 = arg_buffer[2];
void* const x9120 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9119;
arg_buffer[2] = x9120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9119))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45_u62list_fptr() // set->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9125 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9123 = prim_car(lst);
void* const lst9126 = prim_cdr(lst);
void* const x9124 = apply_prim_set_u45_u62list(lst9126);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9123 = arg_buffer[2];
void* const x9124 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void list_u45_u62set_fptr() // list->set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9129 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9127 = prim_car(lst);
void* const lst9130 = prim_cdr(lst);
void* const x9128 = apply_prim_list_u45_u62set(lst9130);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9127))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9127 = arg_buffer[2];
void* const x9128 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9127))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45add_fptr() // set-add 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9133 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9131 = prim_car(lst);
void* const lst9134 = prim_cdr(lst);
void* const x9132 = apply_prim_set_u45add(lst9134);
arg_buffer[1] = kont9131;
arg_buffer[2] = x9132;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9131))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9131 = arg_buffer[2];
void* const x9132 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9131;
arg_buffer[2] = x9132;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9131))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45member_u63_fptr() // set-member? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9137 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9135 = prim_car(lst);
void* const lst9138 = prim_cdr(lst);
void* const x9136 = apply_prim_set_u45member_u63(lst9138);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9135))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9135 = arg_buffer[2];
void* const x9136 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9135))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45remove_fptr() // set-remove 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9141 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9139 = prim_car(lst);
void* const lst9142 = prim_cdr(lst);
void* const x9140 = apply_prim_set_u45remove(lst9142);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9139))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9139 = arg_buffer[2];
void* const x9140 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9139))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45count_fptr() // set-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9145 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9143 = prim_car(lst);
void* const lst9146 = prim_cdr(lst);
void* const x9144 = apply_prim_set_u45count(lst9146);
arg_buffer[1] = kont9143;
arg_buffer[2] = x9144;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9143))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9143 = arg_buffer[2];
void* const x9144 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9143;
arg_buffer[2] = x9144;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9143))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9149 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9147 = prim_car(lst);
void* const lst9150 = prim_cdr(lst);
void* const x9148 = apply_prim_string_u63(lst9150);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9147))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9147 = arg_buffer[2];
void* const x9148 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9147))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45length_fptr() // string-length 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9153 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9151 = prim_car(lst);
void* const lst9154 = prim_cdr(lst);
void* const x9152 = apply_prim_string_u45length(lst9154);
arg_buffer[1] = kont9151;
arg_buffer[2] = x9152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9151))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9151 = arg_buffer[2];
void* const x9152 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9151;
arg_buffer[2] = x9152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9151))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45ref_fptr() // string-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9157 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9155 = prim_car(lst);
void* const lst9158 = prim_cdr(lst);
void* const x9156 = apply_prim_string_u45ref(lst9158);
arg_buffer[1] = kont9155;
arg_buffer[2] = x9156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9155))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9155 = arg_buffer[2];
void* const x9156 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9155;
arg_buffer[2] = x9156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9155))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void substring_fptr() // substring 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9161 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9159 = prim_car(lst);
void* const lst9162 = prim_cdr(lst);
void* const x9160 = apply_prim_substring(lst9162);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9159))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9159 = arg_buffer[2];
void* const x9160 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9159))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45append_fptr() // string-append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9165 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9163 = prim_car(lst);
void* const lst9166 = prim_cdr(lst);
void* const x9164 = apply_prim_string_u45append(lst9166);
arg_buffer[1] = kont9163;
arg_buffer[2] = x9164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9163))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9163 = arg_buffer[2];
void* const x9164 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9163;
arg_buffer[2] = x9164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9163))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45_u62list_fptr() // string->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9169 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9167 = prim_car(lst);
void* const lst9170 = prim_cdr(lst);
void* const x9168 = apply_prim_string_u45_u62list(lst9170);
arg_buffer[1] = kont9167;
arg_buffer[2] = x9168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9167))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9167 = arg_buffer[2];
void* const x9168 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9167;
arg_buffer[2] = x9168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9167))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9173 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9171 = prim_car(lst);
void* const lst9174 = prim_cdr(lst);
void* const x9172 = apply_prim_exact_u45floor(lst9174);
arg_buffer[1] = kont9171;
arg_buffer[2] = x9172;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9171))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9171 = arg_buffer[2];
void* const x9172 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9171;
arg_buffer[2] = x9172;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9171))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45ceiling_fptr() // exact-ceiling 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9177 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9175 = prim_car(lst);
void* const lst9178 = prim_cdr(lst);
void* const x9176 = apply_prim_exact_u45ceiling(lst9178);
arg_buffer[1] = kont9175;
arg_buffer[2] = x9176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9175))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9175 = arg_buffer[2];
void* const x9176 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9175;
arg_buffer[2] = x9176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9175))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45round_fptr() // exact-round 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9181 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9179 = prim_car(lst);
void* const lst9182 = prim_cdr(lst);
void* const x9180 = apply_prim_exact_u45round(lst9182);
arg_buffer[1] = kont9179;
arg_buffer[2] = x9180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9179))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9179 = arg_buffer[2];
void* const x9180 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9179;
arg_buffer[2] = x9180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9179))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void abs_fptr() // abs 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9185 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9183 = prim_car(lst);
void* const lst9186 = prim_cdr(lst);
void* const x9184 = apply_prim_abs(lst9186);
arg_buffer[1] = kont9183;
arg_buffer[2] = x9184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9183))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9183 = arg_buffer[2];
void* const x9184 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9183;
arg_buffer[2] = x9184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9183))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9189 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9187 = prim_car(lst);
void* const lst9190 = prim_cdr(lst);
void* const x9188 = apply_prim_max(lst9190);
arg_buffer[1] = kont9187;
arg_buffer[2] = x9188;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9187))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9187 = arg_buffer[2];
void* const x9188 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9187;
arg_buffer[2] = x9188;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9187))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void min_fptr() // min 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9193 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9191 = prim_car(lst);
void* const lst9194 = prim_cdr(lst);
void* const x9192 = apply_prim_min(lst9194);
arg_buffer[1] = kont9191;
arg_buffer[2] = x9192;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9191))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9191 = arg_buffer[2];
void* const x9192 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9191;
arg_buffer[2] = x9192;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9191))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void expt_fptr() // expt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9197 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9195 = prim_car(lst);
void* const lst9198 = prim_cdr(lst);
void* const x9196 = apply_prim_expt(lst9198);
arg_buffer[1] = kont9195;
arg_buffer[2] = x9196;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9195))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9195 = arg_buffer[2];
void* const x9196 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9195;
arg_buffer[2] = x9196;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9195))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void sqrt_fptr() // sqrt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9201 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9199 = prim_car(lst);
void* const lst9202 = prim_cdr(lst);
void* const x9200 = apply_prim_sqrt(lst9202);
arg_buffer[1] = kont9199;
arg_buffer[2] = x9200;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9199))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9199 = arg_buffer[2];
void* const x9200 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9199;
arg_buffer[2] = x9200;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9199))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void remainder_fptr() // remainder 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9205 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9203 = prim_car(lst);
void* const lst9206 = prim_cdr(lst);
void* const x9204 = apply_prim_remainder(lst9206);
arg_buffer[1] = kont9203;
arg_buffer[2] = x9204;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9203))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9203 = arg_buffer[2];
void* const x9204 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9203;
arg_buffer[2] = x9204;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9203))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9209 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9207 = prim_car(lst);
void* const lst9210 = prim_cdr(lst);
void* const x9208 = apply_prim_quotient(lst9210);
arg_buffer[1] = kont9207;
arg_buffer[2] = x9208;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9207))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9207 = arg_buffer[2];
void* const x9208 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9207;
arg_buffer[2] = x9208;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9207))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void random_fptr() // random 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9213 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9211 = prim_car(lst);
void* const lst9214 = prim_cdr(lst);
void* const x9212 = apply_prim_random(lst9214);
arg_buffer[1] = kont9211;
arg_buffer[2] = x9212;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9211))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9211 = arg_buffer[2];
void* const x9212 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9211;
arg_buffer[2] = x9212;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9211))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9217 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9215 = prim_car(lst);
void* const lst9218 = prim_cdr(lst);
void* const x9216 = apply_prim_symbol_u63(lst9218);
arg_buffer[1] = kont9215;
arg_buffer[2] = x9216;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9215))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9215 = arg_buffer[2];
void* const x9216 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9215;
arg_buffer[2] = x9216;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9215))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void pair_u63_fptr() // pair? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9221 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9219 = prim_car(lst);
void* const lst9222 = prim_cdr(lst);
void* const x9220 = apply_prim_pair_u63(lst9222);
arg_buffer[1] = kont9219;
arg_buffer[2] = x9220;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9219))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9219 = arg_buffer[2];
void* const x9220 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9219;
arg_buffer[2] = x9220;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9219))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void positive_u63_fptr() // positive? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9225 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9223 = prim_car(lst);
void* const lst9226 = prim_cdr(lst);
void* const x9224 = apply_prim_positive_u63(lst9226);
arg_buffer[1] = kont9223;
arg_buffer[2] = x9224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9223))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9223 = arg_buffer[2];
void* const x9224 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9223;
arg_buffer[2] = x9224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9223))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9229 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9227 = prim_car(lst);
void* const lst9230 = prim_cdr(lst);
void* const x9228 = apply_prim_negative_u63(lst9230);
arg_buffer[1] = kont9227;
arg_buffer[2] = x9228;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9227))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9227 = arg_buffer[2];
void* const x9228 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9227;
arg_buffer[2] = x9228;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9227))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void list_fptr() // list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8913 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* x = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
x = arg_buffer[2];
}
else
{
//building cons cell
x = encode_null();
for(int i = numArgs; i >= 2; i--)
{
x = prim_cons(arg_buffer[i], x);

}

}

void* kont8854 = apply_prim_car_1(x);
void* x8911 = apply_prim_cdr_1(x);

//clo-app
arg_buffer[1] = kont8854;
arg_buffer[2] = x8911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8854))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8914 = arg_buffer[1];
//reading env and args
void* const kont8855 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8716 = reinterpret_cast<void*>(encode_int(int9021));
void* const id_8717 = reinterpret_cast<void*>(encode_int(int9007));
void* id_8718 = apply_prim_modulo_2(x, id_8717);

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(id_8716, id_8718);
arg_buffer[1] = kont8855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8855))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8915 = arg_buffer[1];
//reading env and args
void* const kont8856 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8719 = reinterpret_cast<void*>(encode_int(int9020));
void* const id_8720 = reinterpret_cast<void*>(encode_int(int9007));
void* id_8721 = apply_prim_modulo_2(x, id_8720);

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(id_8719, id_8721);
arg_buffer[1] = kont8856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8856))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void list_u45ref_fptr() // list-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8916 = arg_buffer[1];
//reading env and args
void* const kont8857 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8722 = reinterpret_cast<void*>(encode_int(int9021));
void* id_8723 = apply_prim__u61_2(id_8722, n);

//if-clause
bool if_guard9231 = is_true(id_8723);
if(if_guard9231)
{
void* xy8724 = apply_prim_car_1(lst);

//clo-app
arg_buffer[1] = kont8857;
arg_buffer[2] = xy8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8857))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8725 = apply_prim_cdr_1(lst);
void* const id_8726 = reinterpret_cast<void*>(encode_int(int9020));
void* id_8727 = apply_prim__u45_2(n, id_8726);

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8857;
arg_buffer[3] = id_8725;
arg_buffer[4] = id_8727;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_list_u45ref();
}

}

void lam8917_fptr() // lam8917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8918 = arg_buffer[1];
//reading env and args
void* const id_8731 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8918);
void* const lst = decode_clo_array[3];
void* const item = decode_clo_array[2];
void* const kont8858 = decode_clo_array[1];

//if-clause
bool if_guard9232 = is_true(id_8731);
if(if_guard9232)
{
void* xy8732 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8858;
arg_buffer[2] = xy8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8733 = apply_prim_car_1(lst);
void* id_8734 = apply_prim_equal_u63_2(item, id_8733);

//if-clause
bool if_guard9233 = is_true(id_8734);
if(if_guard9233)
{

//clo-app
arg_buffer[1] = kont8858;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8735 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8858;
arg_buffer[3] = item;
arg_buffer[4] = id_8735;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_member();
}

}

}

void member_fptr() // member 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8919 = arg_buffer[1];
//reading env and args
void* const kont8858 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8728 = apply_prim_null_u63_1(item);

//creating new closure instance
void** clo9234 = alloc_clo(lam8917_fptr, 3);

//setting env list
clo9234[1] = kont8858;
clo9234[2] = item;
clo9234[3] = lst;
void* f8859 = encode_clo(clo9234);



//if-clause
bool if_guard9235 = is_true(id_8728);
if(if_guard9235)
{
void* xy8729 = apply_prim_null_u63_1(item);

//clo-app
arg_buffer[1] = f8859;
arg_buffer[2] = xy8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8859))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* xy8730 = apply_prim_null_u63_1(lst);

//clo-app
arg_buffer[1] = f8859;
arg_buffer[2] = xy8730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8859))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8920 = arg_buffer[1];
//reading env and args
void* const kont8860 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8736 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9236 = is_true(id_8736);
if(if_guard9236)
{
void* xy8737 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8860;
arg_buffer[2] = xy8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8738 = apply_prim_car_1(lst);
void* id_8739 = apply_prim_equal_u63_2(id_8738, x);

//if-clause
bool if_guard9237 = is_true(id_8739);
if(if_guard9237)
{
void* xy8740 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8860;
arg_buffer[2] = xy8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8741 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8860;
arg_buffer[3] = x;
arg_buffer[4] = id_8741;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_member_u63();
}

}

}

void lam8921_fptr() // lam8921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8922 = arg_buffer[1];
//reading env and args
void* const id_8746 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8922);
void* const kont8861 = decode_clo_array[2];
void* const id_8744 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(id_8744, id_8746);
arg_buffer[1] = kont8861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8923 = arg_buffer[1];
//reading env and args
void* const kont8861 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8742 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9238 = is_true(id_8742);
if(if_guard9238)
{
void* const xy8743 = reinterpret_cast<void*>(encode_int(int9021));

//clo-app
arg_buffer[1] = kont8861;
arg_buffer[2] = xy8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8744 = reinterpret_cast<void*>(encode_int(int9020));
void* id_8745 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9239 = alloc_clo(lam8921_fptr, 2);

//setting env list
clo9239[1] = id_8744;
clo9239[2] = kont8861;
void* f8862 = encode_clo(clo9239);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8862;
arg_buffer[3] = id_8745;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_length();
}

}

void lam8924_fptr() // lam8924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8925 = arg_buffer[1];
//reading env and args
void* const xy8748 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);
void* const kont8863 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8863;
arg_buffer[2] = xy8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8926_fptr() // lam8926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8927 = arg_buffer[1];
//reading env and args
void* const id_8752 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);
void* const id_8750 = decode_clo_array[2];
void* const kont8863 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8750, id_8752);
arg_buffer[1] = kont8863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8928_fptr() // lam8928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8929 = arg_buffer[1];
//reading env and args
void* const id_8750 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8929);
void* const proc = decode_clo_array[3];
void* const lst = decode_clo_array[2];
void* const kont8863 = decode_clo_array[1];
void* id_8751 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9240 = alloc_clo(lam8926_fptr, 2);

//setting env list
clo9240[1] = kont8863;
clo9240[2] = id_8750;
void* f8865 = encode_clo(clo9240);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8865;
arg_buffer[3] = proc;
arg_buffer[4] = id_8751;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_map();
}

void map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8930 = arg_buffer[1];
//reading env and args
void* const kont8863 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8747 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9241 = is_true(id_8747);
if(if_guard9241)
{

//creating new closure instance
void** clo9242 = alloc_clo(lam8924_fptr, 1);

//setting env list
clo9242[1] = kont8863;
void* f8864 = encode_clo(clo9242);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8864;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}
else
{
void* id_8749 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9243 = alloc_clo(lam8928_fptr, 3);

//setting env list
clo9243[1] = kont8863;
clo9243[2] = lst;
clo9243[3] = proc;
void* f8866 = encode_clo(clo9243);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8866;
arg_buffer[3] = id_8749;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8931_fptr() // lam8931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8932 = arg_buffer[1];
//reading env and args
void* const xy8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8932);
void* const kont8867 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8867;
arg_buffer[2] = xy8754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8933_fptr() // lam8933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8934 = arg_buffer[1];
//reading env and args
void* const id_8759 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8934);
void* const kont8867 = decode_clo_array[2];
void* const id_8757 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8757, id_8759);
arg_buffer[1] = kont8867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8935_fptr() // lam8935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8936 = arg_buffer[1];
//reading env and args
void* const id_8756 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);
void* const lst = decode_clo_array[3];
void* const op = decode_clo_array[2];
void* const kont8867 = decode_clo_array[1];

//if-clause
bool if_guard9244 = is_true(id_8756);
if(if_guard9244)
{
void* id_8757 = apply_prim_car_1(lst);
void* id_8758 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9245 = alloc_clo(lam8933_fptr, 2);

//setting env list
clo9245[1] = id_8757;
clo9245[2] = kont8867;
void* f8869 = encode_clo(clo9245);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8869;
arg_buffer[3] = op;
arg_buffer[4] = id_8758;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_filter();
}
else
{
void* id_8760 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8867;
arg_buffer[3] = op;
arg_buffer[4] = id_8760;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_filter();
}

}

void filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8937 = arg_buffer[1];
//reading env and args
void* const kont8867 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8753 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9246 = is_true(id_8753);
if(if_guard9246)
{

//creating new closure instance
void** clo9247 = alloc_clo(lam8931_fptr, 1);

//setting env list
clo9247[1] = kont8867;
void* f8868 = encode_clo(clo9247);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8868;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}
else
{
void* id_8755 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9248 = alloc_clo(lam8935_fptr, 3);

//setting env list
clo9248[1] = kont8867;
clo9248[2] = op;
clo9248[3] = lst;
void* f8870 = encode_clo(clo9248);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8870;
arg_buffer[3] = id_8755;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8938 = arg_buffer[1];
//reading env and args
void* const kont8871 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8761 = reinterpret_cast<void*>(encode_int(int9021));
void* id_8762 = apply_prim__u61_2(n, id_8761);

//if-clause
bool if_guard9249 = is_true(id_8762);
if(if_guard9249)
{

//clo-app
arg_buffer[1] = kont8871;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8871))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8763 = apply_prim_cdr_1(lst);
void* const id_8764 = reinterpret_cast<void*>(encode_int(int9020));
void* id_8765 = apply_prim__u45_2(n, id_8764);

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8871;
arg_buffer[3] = id_8763;
arg_buffer[4] = id_8765;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_drop();
}

}

void lam8939_fptr() // lam8939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8940 = arg_buffer[1];
//reading env and args
void* const id_8768 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8940);
void* const lst = decode_clo_array[3];
void* const fun = decode_clo_array[2];
void* const kont8872 = decode_clo_array[1];
void* id_8769 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8872;
arg_buffer[3] = fun;
arg_buffer[4] = id_8768;
arg_buffer[5] = id_8769;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldl();
}

void foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8941 = arg_buffer[1];
//reading env and args
void* const kont8872 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8766 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9250 = is_true(id_8766);
if(if_guard9250)
{

//clo-app
arg_buffer[1] = kont8872;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8767 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9251 = alloc_clo(lam8939_fptr, 3);

//setting env list
clo9251[1] = kont8872;
clo9251[2] = fun;
clo9251[3] = lst;
void* f8873 = encode_clo(clo9251);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8873;
arg_buffer[3] = id_8767;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8942_fptr() // lam8942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8943 = arg_buffer[1];
//reading env and args
void* const id_8773 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8943);
void* const id_8771 = decode_clo_array[3];
void* const fun = decode_clo_array[2];
void* const kont8874 = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8874;
arg_buffer[3] = id_8771;
arg_buffer[4] = id_8773;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8944 = arg_buffer[1];
//reading env and args
void* const kont8874 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8770 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9252 = is_true(id_8770);
if(if_guard9252)
{

//clo-app
arg_buffer[1] = kont8874;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8874))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8771 = apply_prim_car_1(lst);
void* id_8772 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9253 = alloc_clo(lam8942_fptr, 3);

//setting env list
clo9253[1] = kont8874;
clo9253[2] = fun;
clo9253[3] = id_8771;
void* f8875 = encode_clo(clo9253);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8875;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = id_8772;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldr();
}

}

void reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8945 = arg_buffer[1];
//reading env and args
void* const kont8876 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8774 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9254 = is_true(id_8774);
if(if_guard9254)
{

//clo-app
arg_buffer[1] = kont8876;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8876))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8775 = apply_prim_cdr_1(lst);
void* id_8776 = apply_prim_car_1(lst);
void* id_8777 = apply_prim_cons_2(id_8776, lst2);

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8876;
arg_buffer[3] = id_8775;
arg_buffer[4] = id_8777;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_reverse_u45helper();
}

}

void lam8946_fptr() // lam8946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8947 = arg_buffer[1];
//reading env and args
void* const id_8778 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8947);
void* const kont8877 = decode_clo_array[2];
void* const lst = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8877;
arg_buffer[3] = lst;
arg_buffer[4] = id_8778;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_reverse_u45helper();
}

void reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8948 = arg_buffer[1];
//reading env and args
void* const kont8877 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9255 = alloc_clo(lam8946_fptr, 2);

//setting env list
clo9255[1] = lst;
clo9255[2] = kont8877;
void* f8878 = encode_clo(clo9255);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8878;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam8949_fptr() // lam8949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8950 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);
void* const id_8780 = decode_clo_array[2];
void* const kont8879 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8780, id_8782);
arg_buffer[1] = kont8879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8879))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8951 = arg_buffer[1];
//reading env and args
void* const kont8879 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8779 = apply_prim_null_u63_1(lhs);

//if-clause
bool if_guard9256 = is_true(id_8779);
if(if_guard9256)
{

//clo-app
arg_buffer[1] = kont8879;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8879))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8780 = apply_prim_car_1(lhs);
void* id_8781 = apply_prim_cdr_1(lhs);

//creating new closure instance
void** clo9257 = alloc_clo(lam8949_fptr, 2);

//setting env list
clo9257[1] = kont8879;
clo9257[2] = id_8780;
void* f8880 = encode_clo(clo9257);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8880;
arg_buffer[3] = id_8781;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

}

void lam8952_fptr() // lam8952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8953 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);
void* const id_8783 = decode_clo_array[2];
void* const kont8881 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8881;
arg_buffer[3] = append1;
arg_buffer[4] = id_8783;
arg_buffer[5] = id_8785;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldr();
}

void lam8954_fptr() // lam8954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8955 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8955);
void* const id_8783 = decode_clo_array[3];
void* const kont8881 = decode_clo_array[2];
void* const x = decode_clo_array[1];

//creating new closure instance
void** clo9258 = alloc_clo(lam8952_fptr, 2);

//setting env list
clo9258[1] = kont8881;
clo9258[2] = id_8783;
void* f8882 = encode_clo(clo9258);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8882;
arg_buffer[3] = id_8784;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

void lam8956_fptr() // lam8956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8957 = arg_buffer[1];
//reading env and args
void* const id_8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8957);
void* const kont8881 = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const xs = decode_clo_array[1];

//creating new closure instance
void** clo9259 = alloc_clo(lam8954_fptr, 3);

//setting env list
clo9259[1] = x;
clo9259[2] = kont8881;
clo9259[3] = id_8783;
void* f8883 = encode_clo(clo9259);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8883;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_list();
}

void lam8958_fptr() // lam8958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8959 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8959);
void* const kont8881 = decode_clo_array[2];
void* const xs = decode_clo_array[1];

//creating new closure instance
void** clo9260 = alloc_clo(lam8956_fptr, 3);

//setting env list
clo9260[1] = xs;
clo9260[2] = x;
clo9260[3] = kont8881;
void* f8884 = encode_clo(clo9260);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8884;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8960 = arg_buffer[1];
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

void* kont8881 = apply_prim_car_1(vargs);
void* vargs8912 = apply_prim_cdr_1(vargs);
void* xs = apply_prim_car_1(vargs8912);
void* vargs8715 = apply_prim_cdr_1(vargs8912);

//creating new closure instance
void** clo9261 = alloc_clo(lam8958_fptr, 2);

//setting env list
clo9261[1] = xs;
clo9261[2] = kont8881;
void* f8885 = encode_clo(clo9261);



//clo-app
arg_buffer[1] = f8885;
arg_buffer[2] = vargs8715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8885))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8961_fptr() // lam8961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8962 = arg_buffer[1];
//reading env and args
void* const xy8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8962);
void* const kont8886 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8886;
arg_buffer[2] = xy8788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8886))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8963 = arg_buffer[1];
//reading env and args
void* const kont8886 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8786 = reinterpret_cast<void*>(encode_int(int9021));
void* id_8787 = apply_prim__u61_2(n, id_8786);

//if-clause
bool if_guard9262 = is_true(id_8787);
if(if_guard9262)
{

//creating new closure instance
void** clo9263 = alloc_clo(lam8961_fptr, 1);

//setting env list
clo9263[1] = kont8886;
void* f8887 = encode_clo(clo9263);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8887;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_reverse();
}
else
{
void* id_8789 = apply_prim_cdr_1(lst);
void* const id_8790 = reinterpret_cast<void*>(encode_int(int9020));
void* id_8791 = apply_prim__u45_2(n, id_8790);
void* id_8792 = apply_prim_car_1(lst);
void* id_8793 = apply_prim_cons_2(id_8792, lst2);

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8886;
arg_buffer[3] = id_8789;
arg_buffer[4] = id_8791;
arg_buffer[5] = id_8793;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_take_u45helper();
}

}

void lam8964_fptr() // lam8964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8965 = arg_buffer[1];
//reading env and args
void* const id_8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);
void* const lst = decode_clo_array[3];
void* const n = decode_clo_array[2];
void* const kont8888 = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8888;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = id_8794;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_take_u45helper();
}

void take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8966 = arg_buffer[1];
//reading env and args
void* const kont8888 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9264 = alloc_clo(lam8964_fptr, 3);

//setting env list
clo9264[1] = kont8888;
clo9264[2] = n;
clo9264[3] = lst;
void* f8889 = encode_clo(clo9264);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8889;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam8967_fptr() // lam8967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8968 = arg_buffer[1];
//reading env and args
void* const id_8808 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8968);
void* const dist = decode_clo_array[4];
void* const row = decode_clo_array[3];
void* const placed = decode_clo_array[2];
void* const kont8890 = decode_clo_array[1];

//if-clause
bool if_guard9265 = is_true(id_8808);
if(if_guard9265)
{
void* const id_8809 = reinterpret_cast<void*>(encode_int(int9020));
void* id_8810 = apply_prim__u43_2(dist, id_8809);
void* id_8811 = apply_prim_cdr_1(placed);

//clo-app
arg_buffer[1] = ok_u63;
arg_buffer[2] = kont8890;
arg_buffer[3] = row;
arg_buffer[4] = id_8810;
arg_buffer[5] = id_8811;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_ok_u63();
}
else
{
void* xy8812 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8890;
arg_buffer[2] = xy8812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8969_fptr() // lam8969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8970 = arg_buffer[1];
//reading env and args
void* const id_8802 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
void* const dist = decode_clo_array[4];
void* const row = decode_clo_array[3];
void* const placed = decode_clo_array[2];
void* const kont8890 = decode_clo_array[1];

//if-clause
bool if_guard9266 = is_true(id_8802);
if(if_guard9266)
{
void* id_8803 = apply_prim_car_1(placed);
void* id_8804 = apply_prim__u45_2(row, dist);
void* id_8805 = apply_prim__u61_2(id_8803, id_8804);

//creating new closure instance
void** clo9267 = alloc_clo(lam8967_fptr, 4);

//setting env list
clo9267[1] = kont8890;
clo9267[2] = placed;
clo9267[3] = row;
clo9267[4] = dist;
void* f8891 = encode_clo(clo9267);



//if-clause
bool if_guard9268 = is_true(id_8805);
if(if_guard9268)
{
void* xy8806 = encode_bool(false);

//clo-app
arg_buffer[1] = f8891;
arg_buffer[2] = xy8806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8891))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* xy8807 = encode_bool(true);

//clo-app
arg_buffer[1] = f8891;
arg_buffer[2] = xy8807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8891))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}
else
{
void* xy8813 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8890;
arg_buffer[2] = xy8813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void ok_u63_fptr() // ok? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8971 = arg_buffer[1];
//reading env and args
void* const kont8890 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8795 = apply_prim_null_u63_1(placed);

//if-clause
bool if_guard9269 = is_true(id_8795);
if(if_guard9269)
{
void* xy8796 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8890;
arg_buffer[2] = xy8796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* id_8797 = apply_prim_car_1(placed);
void* id_8798 = apply_prim__u43_2(row, dist);
void* id_8799 = apply_prim__u61_2(id_8797, id_8798);

//creating new closure instance
void** clo9270 = alloc_clo(lam8969_fptr, 4);

//setting env list
clo9270[1] = kont8890;
clo9270[2] = placed;
clo9270[3] = row;
clo9270[4] = dist;
void* f8892 = encode_clo(clo9270);



//if-clause
bool if_guard9271 = is_true(id_8799);
if(if_guard9271)
{
void* xy8800 = encode_bool(false);

//clo-app
arg_buffer[1] = f8892;
arg_buffer[2] = xy8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* xy8801 = encode_bool(true);

//clo-app
arg_buffer[1] = f8892;
arg_buffer[2] = xy8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

}

void lam8972_fptr() // lam8972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8973 = arg_buffer[1];
//reading env and args
void* const id_8836 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8973);
void* const stack = decode_clo_array[2];
void* const f8894 = decode_clo_array[1];
void* id_8837 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8836, id_8837);
arg_buffer[1] = f8894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8894))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8974_fptr() // lam8974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8975 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);
void* const stack = decode_clo_array[5];
void* const f8894 = decode_clo_array[4];
void* const id_8832 = decode_clo_array[3];
void* const z = decode_clo_array[2];
void* const x = decode_clo_array[1];
void* id_8834 = apply_prim_car_1(x);
void* id_8835 = apply_prim_cons_2(id_8834, z);

//creating new closure instance
void** clo9272 = alloc_clo(lam8972_fptr, 2);

//setting env list
clo9272[1] = f8894;
clo9272[2] = stack;
void* f8895 = encode_clo(clo9272);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8895;
arg_buffer[3] = id_8832;
arg_buffer[4] = id_8833;
arg_buffer[5] = id_8835;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_list();
}

void lam8976_fptr() // lam8976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8977 = arg_buffer[1];
//reading env and args
void* const id_8832 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);
void* const stack = decode_clo_array[4];
void* const f8894 = decode_clo_array[3];
void* const z = decode_clo_array[2];
void* const x = decode_clo_array[1];

//creating new closure instance
void** clo9273 = alloc_clo(lam8974_fptr, 5);

//setting env list
clo9273[1] = x;
clo9273[2] = z;
clo9273[3] = id_8832;
clo9273[4] = f8894;
clo9273[5] = stack;
void* f8896 = encode_clo(clo9273);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8896;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam8978_fptr() // lam8978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8979 = arg_buffer[1];
//reading env and args
void* const id_8839 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);
void* const id_8827 = decode_clo_array[3];
void* const kont8893 = decode_clo_array[2];
void* const count = decode_clo_array[1];
void* id_8840 = apply_prim_cons_2(id_8827, id_8839);

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8893;
arg_buffer[3] = id_8840;
arg_buffer[4] = count;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}

void lam8980_fptr() // lam8980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8981 = arg_buffer[1];
//reading env and args
void* const id_8830 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);
void* const kont8893 = decode_clo_array[7];
void* const count = decode_clo_array[6];
void* const z = decode_clo_array[5];
void* const y = decode_clo_array[4];
void* const x = decode_clo_array[3];
void* const stack = decode_clo_array[2];
void* const id_8827 = decode_clo_array[1];

//creating new closure instance
void** clo9274 = alloc_clo(lam8978_fptr, 3);

//setting env list
clo9274[1] = count;
clo9274[2] = kont8893;
clo9274[3] = id_8827;
void* f8894 = encode_clo(clo9274);



//if-clause
bool if_guard9275 = is_true(id_8830);
if(if_guard9275)
{
void* id_8831 = apply_prim_cdr_1(x);

//creating new closure instance
void** clo9276 = alloc_clo(lam8976_fptr, 4);

//setting env list
clo9276[1] = x;
clo9276[2] = z;
clo9276[3] = f8894;
clo9276[4] = stack;
void* f8897 = encode_clo(clo9276);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f8897;
arg_buffer[3] = id_8831;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append();
}
else
{
void* xy8838 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[1] = f8894;
arg_buffer[2] = xy8838;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8894))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8982_fptr() // lam8982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8983 = arg_buffer[1];
//reading env and args
void* const id_8827 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8983);
void* const stack = decode_clo_array[6];
void* const kont8893 = decode_clo_array[5];
void* const count = decode_clo_array[4];
void* const z = decode_clo_array[3];
void* const y = decode_clo_array[2];
void* const x = decode_clo_array[1];
void* id_8828 = apply_prim_car_1(x);
void* const id_8829 = reinterpret_cast<void*>(encode_int(int9020));

//creating new closure instance
void** clo9277 = alloc_clo(lam8980_fptr, 7);

//setting env list
clo9277[1] = id_8827;
clo9277[2] = stack;
clo9277[3] = x;
clo9277[4] = y;
clo9277[5] = z;
clo9277[6] = count;
clo9277[7] = kont8893;
void* f8898 = encode_clo(clo9277);



//clo-app
arg_buffer[1] = ok_u63;
arg_buffer[2] = f8898;
arg_buffer[3] = id_8828;
arg_buffer[4] = id_8829;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_ok_u63();
}

void lam8984_fptr() // lam8984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8985 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8985);
void* const stack = decode_clo_array[5];
void* const kont8893 = decode_clo_array[4];
void* const count = decode_clo_array[3];
void* const y = decode_clo_array[2];
void* const x = decode_clo_array[1];
void* id_8818 = apply_prim_null_u63_1(x);

//if-clause
bool if_guard9278 = is_true(id_8818);
if(if_guard9278)
{
void* id_8819 = apply_prim_null_u63_1(y);

//if-clause
bool if_guard9279 = is_true(id_8819);
if(if_guard9279)
{
void* id_8820 = apply_prim_cdr_1(stack);
void* const id_8821 = reinterpret_cast<void*>(encode_int(int9020));
void* id_8822 = apply_prim__u43_2(count, id_8821);

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8893;
arg_buffer[3] = id_8820;
arg_buffer[4] = id_8822;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}
else
{
void* id_8823 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8893;
arg_buffer[3] = id_8823;
arg_buffer[4] = count;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}

}
else
{
void* id_8824 = apply_prim_cdr_1(x);
void* id_8825 = apply_prim_car_1(x);
void* id_8826 = apply_prim_cons_2(id_8825, y);

//creating new closure instance
void** clo9280 = alloc_clo(lam8982_fptr, 6);

//setting env list
clo9280[1] = x;
clo9280[2] = y;
clo9280[3] = z;
clo9280[4] = count;
clo9280[5] = kont8893;
clo9280[6] = stack;
void* f8899 = encode_clo(clo9280);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8899;
arg_buffer[3] = id_8824;
arg_buffer[4] = id_8826;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_list();
}

}

void lam8986_fptr() // lam8986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8987 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8987);
void* const stack = decode_clo_array[5];
void* const state = decode_clo_array[4];
void* const kont8893 = decode_clo_array[3];
void* const count = decode_clo_array[2];
void* const x = decode_clo_array[1];

//creating new closure instance
void** clo9281 = alloc_clo(lam8984_fptr, 5);

//setting env list
clo9281[1] = x;
clo9281[2] = y;
clo9281[3] = count;
clo9281[4] = kont8893;
clo9281[5] = stack;
void* f8900 = encode_clo(clo9281);


void* id_8816 = apply_prim_cdr_1(state);
void* id_8817 = apply_prim_cdr_1(id_8816);

//clo-app
arg_buffer[2]=apply_prim_car_1(id_8817);
arg_buffer[1] = f8900;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8900))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void q_u45helper_fptr() // q-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8988 = arg_buffer[1];
//reading env and args
void* const kont8893 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* id_8814 = apply_prim_null_u63_1(stack);

//if-clause
bool if_guard9282 = is_true(id_8814);
if(if_guard9282)
{

//clo-app
arg_buffer[1] = kont8893;
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* state = apply_prim_car_1(stack);
void* x = apply_prim_car_1(state);

//creating new closure instance
void** clo9283 = alloc_clo(lam8986_fptr, 5);

//setting env list
clo9283[1] = x;
clo9283[2] = count;
clo9283[3] = kont8893;
clo9283[4] = state;
clo9283[5] = stack;
void* f8901 = encode_clo(clo9283);


void* id_8815 = apply_prim_cdr_1(state);

//clo-app
arg_buffer[2]=apply_prim_car_1(id_8815);
arg_buffer[1] = f8901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8901))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void iota1_fptr() // iota1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8989 = arg_buffer[1];
//reading env and args
void* const kont8902 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8841 = reinterpret_cast<void*>(encode_int(int9021));
void* id_8842 = apply_prim__u61_2(n, id_8841);

//if-clause
bool if_guard9284 = is_true(id_8842);
if(if_guard9284)
{

//clo-app
arg_buffer[1] = kont8902;
arg_buffer[2] = l;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8902))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8843 = reinterpret_cast<void*>(encode_int(int9020));
void* id_8844 = apply_prim__u45_2(n, id_8843);
void* id_8845 = apply_prim_cons_2(n, l);

//clo-app
arg_buffer[1] = iota1;
arg_buffer[2] = kont8902;
arg_buffer[3] = id_8844;
arg_buffer[4] = id_8845;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_iota1();
}

}

void lam8990_fptr() // lam8990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8991 = arg_buffer[1];
//reading env and args
void* const id_8851 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);
void* const kont8903 = decode_clo_array[1];
void* const id_8852 = reinterpret_cast<void*>(encode_int(int9021));

//clo-app
arg_buffer[1] = q_u45helper;
arg_buffer[2] = kont8903;
arg_buffer[3] = id_8851;
arg_buffer[4] = id_8852;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_q_u45helper();
}

void lam8992_fptr() // lam8992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8993 = arg_buffer[1];
//reading env and args
void* const id_8850 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8993);
void* const kont8903 = decode_clo_array[1];

//creating new closure instance
void** clo9285 = alloc_clo(lam8990_fptr, 1);

//setting env list
clo9285[1] = kont8903;
void* f8904 = encode_clo(clo9285);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8904;
arg_buffer[3] = id_8850;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_list();
}

void lam8994_fptr() // lam8994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8995 = arg_buffer[1];
//reading env and args
void* const id_8849 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8995);
void* const id_8847 = decode_clo_array[3];
void* const id_8848 = decode_clo_array[2];
void* const kont8903 = decode_clo_array[1];

//creating new closure instance
void** clo9286 = alloc_clo(lam8992_fptr, 1);

//setting env list
clo9286[1] = kont8903;
void* f8905 = encode_clo(clo9286);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8905;
arg_buffer[3] = id_8847;
arg_buffer[4] = id_8848;
arg_buffer[5] = id_8849;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_list();
}

void lam8996_fptr() // lam8996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8997 = arg_buffer[1];
//reading env and args
void* const id_8848 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8997);
void* const id_8847 = decode_clo_array[2];
void* const kont8903 = decode_clo_array[1];

//creating new closure instance
void** clo9287 = alloc_clo(lam8994_fptr, 3);

//setting env list
clo9287[1] = kont8903;
clo9287[2] = id_8848;
clo9287[3] = id_8847;
void* f8906 = encode_clo(clo9287);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8906;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam8998_fptr() // lam8998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8999 = arg_buffer[1];
//reading env and args
void* const id_8847 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8999);
void* const kont8903 = decode_clo_array[1];

//creating new closure instance
void** clo9288 = alloc_clo(lam8996_fptr, 2);

//setting env list
clo9288[1] = kont8903;
clo9288[2] = id_8847;
void* f8907 = encode_clo(clo9288);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8907;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void lam9000_fptr() // lam9000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env9001 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9001);
void* const kont8903 = decode_clo_array[2];
void* const n = decode_clo_array[1];

//creating new closure instance
void** clo9289 = alloc_clo(lam8998_fptr, 1);

//setting env list
clo9289[1] = kont8903;
void* f8908 = encode_clo(clo9289);



//clo-app
arg_buffer[1] = iota1;
arg_buffer[2] = f8908;
arg_buffer[3] = n;
arg_buffer[4] = id_8846;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_iota1();
}

void nqueens_fptr() // nqueens 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _9002 = arg_buffer[1];
//reading env and args
void* const kont8903 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9290 = alloc_clo(lam9000_fptr, 2);

//setting env list
clo9290[1] = n;
clo9290[2] = kont8903;
void* f8909 = encode_clo(clo9290);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8909;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_list();
}

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _9003 = arg_buffer[1];
//reading env and args
void* const kont8910 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8853 = reinterpret_cast<void*>(encode_int(int9022));

//clo-app
arg_buffer[1] = nqueens;
arg_buffer[2] = kont8910;
arg_buffer[3] = id_8853;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_nqueens();
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9021 = 0;
int9020 = 1;
int9007 = 2;
int9022 = 14;


//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
function_ptr();
}

