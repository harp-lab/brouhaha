#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int8993;
void *bool_t8988;
void *int8992;
void *bool_f8986;
void *int8972;
void *int8994;

// declaring functions at the top
void _u43_fptr(); // +
void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr(); // -
void *_u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr(); // *
void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr(); // /
void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr(); // =
void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr(); // >
void *_u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr(); // <
void *_u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr(); // <=
void *_u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr(); // >=
void *_u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr(); // modulo
void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr(); // null?
void *null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr(); // equal?
void *equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr(); // eq?
void *eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr(); // cons
void *cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr(); // car
void *car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr(); // cdr
void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr(); // float->int
void *float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr(); // int->float
void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr(); // hash
void *hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr(); // hash-ref
void *hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr(); // hash-set
void *hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr(); // hash-keys
void *hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr(); // hash-has-key?
void *hash_u45has_u45key_u63 =
    encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr(); // hash-count
void *hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr(); // set
void *set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr(); // set->list
void *set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr(); // list->set
void *list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr(); // set-add
void *set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr(); // set-member?
void *set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr(); // set-remove
void *set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr(); // set-count
void *set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr(); // string?
void *string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr(); // string-length
void *string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr(); // string-ref
void *string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr(); // substring
void *substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr(); // string-append
void *string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr(); // string->list
void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr(); // exact-floor
void *exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr(); // exact-ceiling
void *exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr(); // exact-round
void *exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr(); // abs
void *abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr(); // max
void *max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr(); // min
void *min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr(); // expt
void *expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr(); // sqrt
void *sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr(); // remainder
void *remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr(); // quotient
void *quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr(); // random
void *random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr(); // symbol?
void *symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr(); // pair?
void *pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr(); // positive?
void *positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr(); // negative?
void *negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr(); // list
void *list = encode_clo(alloc_clo(list_fptr, 0));

void even_u63_fptr(); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8908_fptr(); // lam8908
void *lam8908 = encode_clo(alloc_clo(lam8908_fptr, 0));

void member_fptr(); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8912_fptr(); // lam8912
void *lam8912 = encode_clo(alloc_clo(lam8912_fptr, 0));

void length_fptr(); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8915_fptr(); // lam8915
void *lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void lam8917_fptr(); // lam8917
void *lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void map_fptr(); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8920_fptr(); // lam8920
void *lam8920 = encode_clo(alloc_clo(lam8920_fptr, 0));

void lam8922_fptr(); // lam8922
void *lam8922 = encode_clo(alloc_clo(lam8922_fptr, 0));

void filter_fptr(); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8926_fptr(); // lam8926
void *lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void foldl_fptr(); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8929_fptr(); // lam8929
void *lam8929 = encode_clo(alloc_clo(lam8929_fptr, 0));

void foldr_fptr(); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8934_fptr(); // lam8934
void *lam8934 = encode_clo(alloc_clo(lam8934_fptr, 0));

void append1_fptr(); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8937_fptr(); // lam8937
void *lam8937 = encode_clo(alloc_clo(lam8937_fptr, 0));

void lam8939_fptr(); // lam8939
void *lam8939 = encode_clo(alloc_clo(lam8939_fptr, 0));

void lam8941_fptr(); // lam8941
void *lam8941 = encode_clo(alloc_clo(lam8941_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8944_fptr(); // lam8944
void *lam8944 = encode_clo(alloc_clo(lam8944_fptr, 0));

void take_u45helper_fptr(); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam8948_fptr(); // lam8948
void *lam8948 = encode_clo(alloc_clo(lam8948_fptr, 0));

void lam8950_fptr(); // lam8950
void *lam8950 = encode_clo(alloc_clo(lam8950_fptr, 0));

void ok_u63_fptr(); // ok?
void *ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8953_fptr(); // lam8953
void *lam8953 = encode_clo(alloc_clo(lam8953_fptr, 0));

void lam8955_fptr(); // lam8955
void *lam8955 = encode_clo(alloc_clo(lam8955_fptr, 0));

void lam8957_fptr(); // lam8957
void *lam8957 = encode_clo(alloc_clo(lam8957_fptr, 0));

void lam8959_fptr(); // lam8959
void *lam8959 = encode_clo(alloc_clo(lam8959_fptr, 0));

void lam8961_fptr(); // lam8961
void *lam8961 = encode_clo(alloc_clo(lam8961_fptr, 0));

void q_u45helper_fptr(); // q-helper
void *q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void *iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8965_fptr(); // lam8965
void *lam8965 = encode_clo(alloc_clo(lam8965_fptr, 0));

void nqueens_fptr(); // nqueens
void *nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

// pre-decoding global symbols
auto decoded_set_u45add =
    reinterpret_cast<void (*)()>((decode_clo(set_u45add))[0]);
auto decoded_random =
    reinterpret_cast<void (*)()>((decode_clo(random_brouhaha))[0]);
auto decoded_ok_u63 = reinterpret_cast<void (*)()>((decode_clo(ok_u63))[0]);
auto decoded__u45 = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
auto decoded__u61 = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
auto decoded_exact_u45round =
    reinterpret_cast<void (*)()>((decode_clo(exact_u45round))[0]);
auto decoded_list_u45_u62set =
    reinterpret_cast<void (*)()>((decode_clo(list_u45_u62set))[0]);
auto decoded_q_u45helper =
    reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
auto decoded_member_u63 =
    reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
auto decoded__u60 = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
auto decoded_set_u45_u62list =
    reinterpret_cast<void (*)()>((decode_clo(set_u45_u62list))[0]);
auto decoded_foldl = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
auto decoded_sqrt =
    reinterpret_cast<void (*)()>((decode_clo(sqrt_brouhaha))[0]);
auto decoded_cons = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
auto decoded_symbol_u63 =
    reinterpret_cast<void (*)()>((decode_clo(symbol_u63))[0]);
auto decoded_max = reinterpret_cast<void (*)()>((decode_clo(max))[0]);
auto decoded__u47 = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
auto decoded_car = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
auto decoded_int_u45_u62float =
    reinterpret_cast<void (*)()>((decode_clo(int_u45_u62float))[0]);
auto decoded_filter = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
auto decoded__u62_u61 = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
auto decoded__u62 = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
auto decoded_set_u45member_u63 =
    reinterpret_cast<void (*)()>((decode_clo(set_u45member_u63))[0]);
auto decoded_take_u45helper =
    reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
auto decoded__u60_u61 = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
auto decoded_float_u45_u62int =
    reinterpret_cast<void (*)()>((decode_clo(float_u45_u62int))[0]);
auto decoded_append1 = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
auto decoded_list_u45ref =
    reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
auto decoded_hash_u45count =
    reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
auto decoded_hash_u45keys =
    reinterpret_cast<void (*)()>((decode_clo(hash_u45keys))[0]);
auto decoded__u43 = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
auto decoded_min = reinterpret_cast<void (*)()>((decode_clo(min))[0]);
auto decoded_brouhaha_main =
    reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
auto decoded_equal_u63 =
    reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
auto decoded_exact_u45floor =
    reinterpret_cast<void (*)()>((decode_clo(exact_u45floor))[0]);
auto decoded_positive_u63 =
    reinterpret_cast<void (*)()>((decode_clo(positive_u63))[0]);
auto decoded__u42 = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
auto decoded_append = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
auto decoded_reverse = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
auto decoded_hash_u45has_u45key_u63 =
    reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
auto decoded_reverse_u45helper =
    reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
auto decoded_string_u45ref =
    reinterpret_cast<void (*)()>((decode_clo(string_u45ref))[0]);
auto decoded_hash_u45set =
    reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
auto decoded_length = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
auto decoded_eq_u63 = reinterpret_cast<void (*)()>((decode_clo(eq_u63))[0]);
auto decoded_null_u63 = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
auto decoded_set_u45remove =
    reinterpret_cast<void (*)()>((decode_clo(set_u45remove))[0]);
auto decoded_abs = reinterpret_cast<void (*)()>((decode_clo(abs_brouhaha))[0]);
auto decoded_set_u45count =
    reinterpret_cast<void (*)()>((decode_clo(set_u45count))[0]);
auto decoded_map = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
auto decoded_modulo = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
auto decoded_foldr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
auto decoded_drop = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
auto decoded_hash = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
auto decoded_string_u63 =
    reinterpret_cast<void (*)()>((decode_clo(string_u63))[0]);
auto decoded_take = reinterpret_cast<void (*)()>((decode_clo(take))[0]);
auto decoded_expt = reinterpret_cast<void (*)()>((decode_clo(expt))[0]);
auto decoded_quotient = reinterpret_cast<void (*)()>((decode_clo(quotient))[0]);
auto decoded_even_u63 = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
auto decoded_negative_u63 =
    reinterpret_cast<void (*)()>((decode_clo(negative_u63))[0]);
auto decoded_string_u45_u62list =
    reinterpret_cast<void (*)()>((decode_clo(string_u45_u62list))[0]);
auto decoded_string_u45append =
    reinterpret_cast<void (*)()>((decode_clo(string_u45append))[0]);
auto decoded_substring =
    reinterpret_cast<void (*)()>((decode_clo(substring))[0]);
auto decoded_exact_u45ceiling =
    reinterpret_cast<void (*)()>((decode_clo(exact_u45ceiling))[0]);
auto decoded_odd_u63 = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
auto decoded_member = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
auto decoded_remainder =
    reinterpret_cast<void (*)()>((decode_clo(remainder_brouhaha))[0]);
auto decoded_set = reinterpret_cast<void (*)()>((decode_clo(set))[0]);
auto decoded_string_u45length =
    reinterpret_cast<void (*)()>((decode_clo(string_u45length))[0]);
auto decoded_hash_u45ref =
    reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
auto decoded_iota1 = reinterpret_cast<void (*)()>((decode_clo(iota1))[0]);
auto decoded_cdr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
auto decoded_list = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
auto decoded_pair_u63 = reinterpret_cast<void (*)()>((decode_clo(pair_u63))[0]);
auto decoded_nqueens = reinterpret_cast<void (*)()>((decode_clo(nqueens))[0]);

void _u43_fptr() // +
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env8997 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8995 = prim_car(lst);
    void *const lst8998 = prim_cdr(lst);
    void *const x8996 = apply_prim__u43(lst8998);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8995))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont8995 = arg_buffer[2];
    void *const x8996 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8995))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u45_fptr() // -
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9001 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8999 = prim_car(lst);
    void *const lst9002 = prim_cdr(lst);
    void *const x9000 = apply_prim__u45(lst9002);
    arg_buffer[1] = kont8999;
    arg_buffer[2] = x9000;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8999))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont8999 = arg_buffer[2];
    void *const x9000 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont8999;
    arg_buffer[2] = x9000;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8999))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u42_fptr() // *
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9005 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9003 = prim_car(lst);
    void *const lst9006 = prim_cdr(lst);
    void *const x9004 = apply_prim__u42(lst9006);
    arg_buffer[1] = kont9003;
    arg_buffer[2] = x9004;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9003))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9003 = arg_buffer[2];
    void *const x9004 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont9003;
    arg_buffer[2] = x9004;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9003))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u47_fptr() // /
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9009 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9007 = prim_car(lst);
    void *const lst9010 = prim_cdr(lst);
    void *const x9008 = apply_prim__u47(lst9010);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9007))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9007 = arg_buffer[2];
    void *const x9008 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9007))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u61_fptr() // =
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9013 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9011 = prim_car(lst);
    void *const lst9014 = prim_cdr(lst);
    void *const x9012 = apply_prim__u61(lst9014);
    arg_buffer[1] = kont9011;
    arg_buffer[2] = x9012;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9011))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9011 = arg_buffer[2];
    void *const x9012 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont9011;
    arg_buffer[2] = x9012;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9011))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u62_fptr() // >
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9017 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9015 = prim_car(lst);
    void *const lst9018 = prim_cdr(lst);
    void *const x9016 = apply_prim__u62(lst9018);
    arg_buffer[1] = kont9015;
    arg_buffer[2] = x9016;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9015))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9015 = arg_buffer[2];
    void *const x9016 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont9015;
    arg_buffer[2] = x9016;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9015))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u60_fptr() // <
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9021 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9019 = prim_car(lst);
    void *const lst9022 = prim_cdr(lst);
    void *const x9020 = apply_prim__u60(lst9022);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9019))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9019 = arg_buffer[2];
    void *const x9020 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9019))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u60_u61_fptr() // <=
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9025 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9023 = prim_car(lst);
    void *const lst9026 = prim_cdr(lst);
    void *const x9024 = apply_prim__u60_u61(lst9026);
    arg_buffer[1] = kont9023;
    arg_buffer[2] = x9024;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9023))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9023 = arg_buffer[2];
    void *const x9024 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont9023;
    arg_buffer[2] = x9024;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9023))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u62_u61_fptr() // >=
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9029 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9027 = prim_car(lst);
    void *const lst9030 = prim_cdr(lst);
    void *const x9028 = apply_prim__u62_u61(lst9030);
    arg_buffer[1] = kont9027;
    arg_buffer[2] = x9028;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9027))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9027 = arg_buffer[2];
    void *const x9028 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont9027;
    arg_buffer[2] = x9028;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9027))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void modulo_fptr() // modulo
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9033 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9031 = prim_car(lst);
    void *const lst9034 = prim_cdr(lst);
    void *const x9032 = apply_prim_modulo(lst9034);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9031))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9031 = arg_buffer[2];
    void *const x9032 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9031))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void null_u63_fptr() // null?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9037 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9035 = prim_car(lst);
    void *const lst9038 = prim_cdr(lst);
    void *const x9036 = apply_prim_null_u63(lst9038);
    arg_buffer[1] = kont9035;
    arg_buffer[2] = x9036;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9035))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9035 = arg_buffer[2];
    void *const x9036 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont9035;
    arg_buffer[2] = x9036;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9035))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void equal_u63_fptr() // equal?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9041 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9039 = prim_car(lst);
    void *const lst9042 = prim_cdr(lst);
    void *const x9040 = apply_prim_equal_u63(lst9042);
    arg_buffer[1] = kont9039;
    arg_buffer[2] = x9040;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9039))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9039 = arg_buffer[2];
    void *const x9040 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont9039;
    arg_buffer[2] = x9040;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9039))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void eq_u63_fptr() // eq?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9045 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9043 = prim_car(lst);
    void *const lst9046 = prim_cdr(lst);
    void *const x9044 = apply_prim_eq_u63(lst9046);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9043))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9043 = arg_buffer[2];
    void *const x9044 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9043))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void cons_fptr() // cons
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9049 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9047 = prim_car(lst);
    void *const lst9050 = prim_cdr(lst);
    void *const x9048 = apply_prim_cons(lst9050);
    arg_buffer[1] = kont9047;
    arg_buffer[2] = x9048;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9047))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9047 = arg_buffer[2];
    void *const x9048 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont9047;
    arg_buffer[2] = x9048;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9047))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void car_fptr() // car
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9053 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9051 = prim_car(lst);
    void *const lst9054 = prim_cdr(lst);
    void *const x9052 = apply_prim_car(lst9054);
    arg_buffer[1] = kont9051;
    arg_buffer[2] = x9052;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9051))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9051 = arg_buffer[2];
    void *const x9052 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont9051;
    arg_buffer[2] = x9052;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9051))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void cdr_fptr() // cdr
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9057 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9055 = prim_car(lst);
    void *const lst9058 = prim_cdr(lst);
    void *const x9056 = apply_prim_cdr(lst9058);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9055))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9055 = arg_buffer[2];
    void *const x9056 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9055))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void float_u45_u62int_fptr() // float->int
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9061 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9059 = prim_car(lst);
    void *const lst9062 = prim_cdr(lst);
    void *const x9060 = apply_prim_float_u45_u62int(lst9062);
    arg_buffer[1] = kont9059;
    arg_buffer[2] = x9060;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9059))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9059 = arg_buffer[2];
    void *const x9060 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont9059;
    arg_buffer[2] = x9060;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9059))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void int_u45_u62float_fptr() // int->float
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9065 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9063 = prim_car(lst);
    void *const lst9066 = prim_cdr(lst);
    void *const x9064 = apply_prim_int_u45_u62float(lst9066);
    arg_buffer[1] = kont9063;
    arg_buffer[2] = x9064;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9063))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9063 = arg_buffer[2];
    void *const x9064 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont9063;
    arg_buffer[2] = x9064;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9063))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_fptr() // hash
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9069 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9067 = prim_car(lst);
    void *const lst9070 = prim_cdr(lst);
    void *const x9068 = apply_prim_hash(lst9070);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9067))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9067 = arg_buffer[2];
    void *const x9068 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9067))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45ref_fptr() // hash-ref
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9073 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9071 = prim_car(lst);
    void *const lst9074 = prim_cdr(lst);
    void *const x9072 = apply_prim_hash_u45ref(lst9074);
    arg_buffer[1] = kont9071;
    arg_buffer[2] = x9072;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9071))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9071 = arg_buffer[2];
    void *const x9072 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont9071;
    arg_buffer[2] = x9072;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9071))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45set_fptr() // hash-set
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9077 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9075 = prim_car(lst);
    void *const lst9078 = prim_cdr(lst);
    void *const x9076 = apply_prim_hash_u45set(lst9078);
    arg_buffer[1] = kont9075;
    arg_buffer[2] = x9076;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9075))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9075 = arg_buffer[2];
    void *const x9076 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont9075;
    arg_buffer[2] = x9076;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9075))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45keys_fptr() // hash-keys
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9081 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9079 = prim_car(lst);
    void *const lst9082 = prim_cdr(lst);
    void *const x9080 = apply_prim_hash_u45keys(lst9082);
    arg_buffer[1] = kont9079;
    arg_buffer[2] = x9080;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9079 = arg_buffer[2];
    void *const x9080 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont9079;
    arg_buffer[2] = x9080;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9085 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9083 = prim_car(lst);
    void *const lst9086 = prim_cdr(lst);
    void *const x9084 = apply_prim_hash_u45has_u45key_u63(lst9086);
    arg_buffer[1] = kont9083;
    arg_buffer[2] = x9084;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9083))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9083 = arg_buffer[2];
    void *const x9084 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont9083;
    arg_buffer[2] = x9084;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9083))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45count_fptr() // hash-count
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9089 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9087 = prim_car(lst);
    void *const lst9090 = prim_cdr(lst);
    void *const x9088 = apply_prim_hash_u45count(lst9090);
    arg_buffer[1] = kont9087;
    arg_buffer[2] = x9088;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9087))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9087 = arg_buffer[2];
    void *const x9088 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont9087;
    arg_buffer[2] = x9088;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9087))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_fptr() // set
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9093 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9091 = prim_car(lst);
    void *const lst9094 = prim_cdr(lst);
    void *const x9092 = apply_prim_set(lst9094);
    arg_buffer[1] = kont9091;
    arg_buffer[2] = x9092;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9091))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9091 = arg_buffer[2];
    void *const x9092 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont9091;
    arg_buffer[2] = x9092;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9091))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45_u62list_fptr() // set->list
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9097 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9095 = prim_car(lst);
    void *const lst9098 = prim_cdr(lst);
    void *const x9096 = apply_prim_set_u45_u62list(lst9098);
    arg_buffer[1] = kont9095;
    arg_buffer[2] = x9096;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9095))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9095 = arg_buffer[2];
    void *const x9096 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9095;
    arg_buffer[2] = x9096;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9095))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void list_u45_u62set_fptr() // list->set
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9101 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9099 = prim_car(lst);
    void *const lst9102 = prim_cdr(lst);
    void *const x9100 = apply_prim_list_u45_u62set(lst9102);
    arg_buffer[1] = kont9099;
    arg_buffer[2] = x9100;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9099))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9099 = arg_buffer[2];
    void *const x9100 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont9099;
    arg_buffer[2] = x9100;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9099))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45add_fptr() // set-add
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9105 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9103 = prim_car(lst);
    void *const lst9106 = prim_cdr(lst);
    void *const x9104 = apply_prim_set_u45add(lst9106);
    arg_buffer[1] = kont9103;
    arg_buffer[2] = x9104;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9103))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9103 = arg_buffer[2];
    void *const x9104 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont9103;
    arg_buffer[2] = x9104;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9103))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45member_u63_fptr() // set-member?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9109 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9107 = prim_car(lst);
    void *const lst9110 = prim_cdr(lst);
    void *const x9108 = apply_prim_set_u45member_u63(lst9110);
    arg_buffer[1] = kont9107;
    arg_buffer[2] = x9108;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9107))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9107 = arg_buffer[2];
    void *const x9108 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9107;
    arg_buffer[2] = x9108;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9107))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45remove_fptr() // set-remove
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9113 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9111 = prim_car(lst);
    void *const lst9114 = prim_cdr(lst);
    void *const x9112 = apply_prim_set_u45remove(lst9114);
    arg_buffer[1] = kont9111;
    arg_buffer[2] = x9112;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9111))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9111 = arg_buffer[2];
    void *const x9112 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9111;
    arg_buffer[2] = x9112;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9111))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45count_fptr() // set-count
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9117 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9115 = prim_car(lst);
    void *const lst9118 = prim_cdr(lst);
    void *const x9116 = apply_prim_set_u45count(lst9118);
    arg_buffer[1] = kont9115;
    arg_buffer[2] = x9116;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9115))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9115 = arg_buffer[2];
    void *const x9116 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9115;
    arg_buffer[2] = x9116;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9115))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u63_fptr() // string?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9121 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9119 = prim_car(lst);
    void *const lst9122 = prim_cdr(lst);
    void *const x9120 = apply_prim_string_u63(lst9122);
    arg_buffer[1] = kont9119;
    arg_buffer[2] = x9120;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9119))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9119 = arg_buffer[2];
    void *const x9120 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9119;
    arg_buffer[2] = x9120;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9119))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45length_fptr() // string-length
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9125 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9123 = prim_car(lst);
    void *const lst9126 = prim_cdr(lst);
    void *const x9124 = apply_prim_string_u45length(lst9126);
    arg_buffer[1] = kont9123;
    arg_buffer[2] = x9124;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9123 = arg_buffer[2];
    void *const x9124 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9123;
    arg_buffer[2] = x9124;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45ref_fptr() // string-ref
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9129 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9127 = prim_car(lst);
    void *const lst9130 = prim_cdr(lst);
    void *const x9128 = apply_prim_string_u45ref(lst9130);
    arg_buffer[1] = kont9127;
    arg_buffer[2] = x9128;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9127))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9127 = arg_buffer[2];
    void *const x9128 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9127;
    arg_buffer[2] = x9128;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9127))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void substring_fptr() // substring
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9133 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9131 = prim_car(lst);
    void *const lst9134 = prim_cdr(lst);
    void *const x9132 = apply_prim_substring(lst9134);
    arg_buffer[1] = kont9131;
    arg_buffer[2] = x9132;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9131))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9131 = arg_buffer[2];
    void *const x9132 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9131;
    arg_buffer[2] = x9132;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9131))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45append_fptr() // string-append
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9137 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9135 = prim_car(lst);
    void *const lst9138 = prim_cdr(lst);
    void *const x9136 = apply_prim_string_u45append(lst9138);
    arg_buffer[1] = kont9135;
    arg_buffer[2] = x9136;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9135))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9135 = arg_buffer[2];
    void *const x9136 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9135;
    arg_buffer[2] = x9136;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9135))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45_u62list_fptr() // string->list
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9141 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9139 = prim_car(lst);
    void *const lst9142 = prim_cdr(lst);
    void *const x9140 = apply_prim_string_u45_u62list(lst9142);
    arg_buffer[1] = kont9139;
    arg_buffer[2] = x9140;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9139))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9139 = arg_buffer[2];
    void *const x9140 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9139;
    arg_buffer[2] = x9140;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9139))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void exact_u45floor_fptr() // exact-floor
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9145 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9143 = prim_car(lst);
    void *const lst9146 = prim_cdr(lst);
    void *const x9144 = apply_prim_exact_u45floor(lst9146);
    arg_buffer[1] = kont9143;
    arg_buffer[2] = x9144;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9143))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9143 = arg_buffer[2];
    void *const x9144 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9143;
    arg_buffer[2] = x9144;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9143))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void exact_u45ceiling_fptr() // exact-ceiling
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9149 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9147 = prim_car(lst);
    void *const lst9150 = prim_cdr(lst);
    void *const x9148 = apply_prim_exact_u45ceiling(lst9150);
    arg_buffer[1] = kont9147;
    arg_buffer[2] = x9148;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9147))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9147 = arg_buffer[2];
    void *const x9148 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9147;
    arg_buffer[2] = x9148;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9147))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void exact_u45round_fptr() // exact-round
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9153 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9151 = prim_car(lst);
    void *const lst9154 = prim_cdr(lst);
    void *const x9152 = apply_prim_exact_u45round(lst9154);
    arg_buffer[1] = kont9151;
    arg_buffer[2] = x9152;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9151))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9151 = arg_buffer[2];
    void *const x9152 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9151;
    arg_buffer[2] = x9152;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9151))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void abs_fptr() // abs
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9157 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9155 = prim_car(lst);
    void *const lst9158 = prim_cdr(lst);
    void *const x9156 = apply_prim_abs(lst9158);
    arg_buffer[1] = kont9155;
    arg_buffer[2] = x9156;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9155))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9155 = arg_buffer[2];
    void *const x9156 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9155;
    arg_buffer[2] = x9156;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9155))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void max_fptr() // max
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9161 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9159 = prim_car(lst);
    void *const lst9162 = prim_cdr(lst);
    void *const x9160 = apply_prim_max(lst9162);
    arg_buffer[1] = kont9159;
    arg_buffer[2] = x9160;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9159))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9159 = arg_buffer[2];
    void *const x9160 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9159;
    arg_buffer[2] = x9160;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9159))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void min_fptr() // min
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9165 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9163 = prim_car(lst);
    void *const lst9166 = prim_cdr(lst);
    void *const x9164 = apply_prim_min(lst9166);
    arg_buffer[1] = kont9163;
    arg_buffer[2] = x9164;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9163))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9163 = arg_buffer[2];
    void *const x9164 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9163;
    arg_buffer[2] = x9164;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9163))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void expt_fptr() // expt
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9169 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9167 = prim_car(lst);
    void *const lst9170 = prim_cdr(lst);
    void *const x9168 = apply_prim_expt(lst9170);
    arg_buffer[1] = kont9167;
    arg_buffer[2] = x9168;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9167))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9167 = arg_buffer[2];
    void *const x9168 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9167;
    arg_buffer[2] = x9168;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9167))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void sqrt_fptr() // sqrt
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9173 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9171 = prim_car(lst);
    void *const lst9174 = prim_cdr(lst);
    void *const x9172 = apply_prim_sqrt(lst9174);
    arg_buffer[1] = kont9171;
    arg_buffer[2] = x9172;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9171))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9171 = arg_buffer[2];
    void *const x9172 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9171;
    arg_buffer[2] = x9172;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9171))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void remainder_fptr() // remainder
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9177 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9175 = prim_car(lst);
    void *const lst9178 = prim_cdr(lst);
    void *const x9176 = apply_prim_remainder(lst9178);
    arg_buffer[1] = kont9175;
    arg_buffer[2] = x9176;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9175))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9175 = arg_buffer[2];
    void *const x9176 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9175;
    arg_buffer[2] = x9176;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9175))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void quotient_fptr() // quotient
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9181 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9179 = prim_car(lst);
    void *const lst9182 = prim_cdr(lst);
    void *const x9180 = apply_prim_quotient(lst9182);
    arg_buffer[1] = kont9179;
    arg_buffer[2] = x9180;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9179))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9179 = arg_buffer[2];
    void *const x9180 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9179;
    arg_buffer[2] = x9180;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9179))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void random_fptr() // random
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9185 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9183 = prim_car(lst);
    void *const lst9186 = prim_cdr(lst);
    void *const x9184 = apply_prim_random(lst9186);
    arg_buffer[1] = kont9183;
    arg_buffer[2] = x9184;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9183))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9183 = arg_buffer[2];
    void *const x9184 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9183;
    arg_buffer[2] = x9184;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9183))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void symbol_u63_fptr() // symbol?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9189 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9187 = prim_car(lst);
    void *const lst9190 = prim_cdr(lst);
    void *const x9188 = apply_prim_symbol_u63(lst9190);
    arg_buffer[1] = kont9187;
    arg_buffer[2] = x9188;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9187))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9187 = arg_buffer[2];
    void *const x9188 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9187;
    arg_buffer[2] = x9188;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9187))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void pair_u63_fptr() // pair?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9193 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9191 = prim_car(lst);
    void *const lst9194 = prim_cdr(lst);
    void *const x9192 = apply_prim_pair_u63(lst9194);
    arg_buffer[1] = kont9191;
    arg_buffer[2] = x9192;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9191))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9191 = arg_buffer[2];
    void *const x9192 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9191;
    arg_buffer[2] = x9192;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9191))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void positive_u63_fptr() // positive?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9197 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9195 = prim_car(lst);
    void *const lst9198 = prim_cdr(lst);
    void *const x9196 = apply_prim_positive_u63(lst9198);
    arg_buffer[1] = kont9195;
    arg_buffer[2] = x9196;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9195))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9195 = arg_buffer[2];
    void *const x9196 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9195;
    arg_buffer[2] = x9196;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9195))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void negative_u63_fptr() // negative?
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9201 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9199 = prim_car(lst);
    void *const lst9202 = prim_cdr(lst);
    void *const x9200 = apply_prim_negative_u63(lst9202);
    arg_buffer[1] = kont9199;
    arg_buffer[2] = x9200;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9199))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9199 = arg_buffer[2];
    void *const x9200 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9199;
    arg_buffer[2] = x9200;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9199))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void list_fptr() // list
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9205 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9203 = prim_car(lst);
    void *const lst9206 = prim_cdr(lst);
    void *const x9204 = apply_prim_list(lst9206);
    arg_buffer[1] = kont9203;
    arg_buffer[2] = x9204;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9203))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9203 = arg_buffer[2];
    void *const x9204 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9203;
    arg_buffer[2] = x9204;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9203))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void even_u63_fptr() // even?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8905 = arg_buffer[1];
  // reading env and args
  void *const kont8861 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8719 = int8993;
  void *const id_8720 = int8972;
  void *const id_8721 = apply_prim_modulo_2(x, id_8720);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8719, id_8721);
  arg_buffer[1] = kont8861;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void odd_u63_fptr() // odd?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8906 = arg_buffer[1];
  // reading env and args
  void *const kont8862 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8722 = int8992;
  void *const id_8723 = int8972;
  void *const id_8724 = apply_prim_modulo_2(x, id_8723);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8722, id_8724);
  arg_buffer[1] = kont8862;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void list_u45ref_fptr() // list-ref
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8907 = arg_buffer[1];
  // reading env and args
  void *const kont8863 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8725 = int8993;
  void *const id_8726 = apply_prim__u61_2(id_8725, n);

  // if-clause
  bool if_guard9207 = is_true(id_8726);
  if (if_guard9207) {
    void *const xy8727 = apply_prim_car_1(lst);

    // clo-app
    arg_buffer[1] = kont8863;
    arg_buffer[2] = xy8727;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8728 = apply_prim_cdr_1(lst);
    void *const id_8729 = int8992;
    void *const id_8730 = apply_prim__u45_2(n, id_8729);

    // clo-app
    arg_buffer[1] = list_u45ref;
    arg_buffer[2] = kont8863;
    arg_buffer[3] = id_8728;
    arg_buffer[4] = id_8730;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_list_u45ref();
  }
}

void lam8908_fptr() // lam8908
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8909 = arg_buffer[1];
  // reading env and args
  void *const id_8734 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8909);
  void *const lst = decode_clo_array[3];
  void *const item = decode_clo_array[2];
  void *const kont8864 = decode_clo_array[1];

  // if-clause
  bool if_guard9208 = is_true(id_8734);
  if (if_guard9208) {
    void *const xy8735 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8864;
    arg_buffer[2] = xy8735;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8736 = apply_prim_car_1(lst);
    void *const id_8737 = apply_prim_equal_u63_2(item, id_8736);

    // if-clause
    bool if_guard9209 = is_true(id_8737);
    if (if_guard9209) {

      // clo-app
      arg_buffer[1] = kont8864;
      arg_buffer[2] = lst;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr =
          reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const id_8738 = apply_prim_cdr_1(lst);

      // clo-app
      arg_buffer[1] = member;
      arg_buffer[2] = kont8864;
      arg_buffer[3] = item;
      arg_buffer[4] = id_8738;
      arg_buffer[0] = reinterpret_cast<void *>(4);
      decoded_member();
    }
  }
}

void member_fptr() // member
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8910 = arg_buffer[1];
  // reading env and args
  void *const kont8864 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8731 = apply_prim_null_u63_1(item);

  // creating new closure instance
  void **clo9210 = alloc_clo(lam8908_fptr, 3);

  // setting env list
  clo9210[1] = kont8864;
  clo9210[2] = item;
  clo9210[3] = lst;
  void *f8865 = encode_clo(clo9210);

  // if-clause
  bool if_guard9211 = is_true(id_8731);
  if (if_guard9211) {
    void *const xy8732 = apply_prim_null_u63_1(item);

    // clo-app
    arg_buffer[1] = f8865;
    arg_buffer[2] = xy8732;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8865))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const xy8733 = apply_prim_null_u63_1(lst);

    // clo-app
    arg_buffer[1] = f8865;
    arg_buffer[2] = xy8733;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8865))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void member_u63_fptr() // member?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8911 = arg_buffer[1];
  // reading env and args
  void *const kont8866 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8739 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9212 = is_true(id_8739);
  if (if_guard9212) {
    void *const xy8740 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8866;
    arg_buffer[2] = xy8740;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8741 = apply_prim_car_1(lst);
    void *const id_8742 = apply_prim_equal_u63_2(id_8741, x);

    // if-clause
    bool if_guard9213 = is_true(id_8742);
    if (if_guard9213) {
      void *const xy8743 = bool_t8988;

      // clo-app
      arg_buffer[1] = kont8866;
      arg_buffer[2] = xy8743;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr =
          reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const id_8744 = apply_prim_cdr_1(lst);

      // clo-app
      arg_buffer[1] = member_u63;
      arg_buffer[2] = kont8866;
      arg_buffer[3] = x;
      arg_buffer[4] = id_8744;
      arg_buffer[0] = reinterpret_cast<void *>(4);
      decoded_member_u63();
    }
  }
}

void lam8912_fptr() // lam8912
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8913 = arg_buffer[1];
  // reading env and args
  void *const id_8749 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8913);
  void *const kont8867 = decode_clo_array[2];
  void *const id_8747 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(id_8747, id_8749);
  arg_buffer[1] = kont8867;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void length_fptr() // length
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8914 = arg_buffer[1];
  // reading env and args
  void *const kont8867 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8745 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9214 = is_true(id_8745);
  if (if_guard9214) {
    void *const xy8746 = int8993;

    // clo-app
    arg_buffer[1] = kont8867;
    arg_buffer[2] = xy8746;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8747 = int8992;
    void *const id_8748 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9215 = alloc_clo(lam8912_fptr, 2);

    // setting env list
    clo9215[1] = id_8747;
    clo9215[2] = kont8867;
    void *f8868 = encode_clo(clo9215);

    // clo-app
    arg_buffer[1] = length;
    arg_buffer[2] = f8868;
    arg_buffer[3] = id_8748;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    decoded_length();
  }
}

void lam8915_fptr() // lam8915
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8916 = arg_buffer[1];
  // reading env and args
  void *const id_8755 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8916);
  void *const kont8869 = decode_clo_array[2];
  void *const id_8753 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8753, id_8755);
  arg_buffer[1] = kont8869;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8869))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8917_fptr() // lam8917
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8918 = arg_buffer[1];
  // reading env and args
  void *const id_8753 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8918);
  void *const kont8869 = decode_clo_array[3];
  void *const lst = decode_clo_array[2];
  void *const proc = decode_clo_array[1];
  void *const id_8754 = apply_prim_cdr_1(lst);

  // creating new closure instance
  void **clo9216 = alloc_clo(lam8915_fptr, 2);

  // setting env list
  clo9216[1] = id_8753;
  clo9216[2] = kont8869;
  void *f8870 = encode_clo(clo9216);

  // clo-app
  arg_buffer[1] = map;
  arg_buffer[2] = f8870;
  arg_buffer[3] = proc;
  arg_buffer[4] = id_8754;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_map();
}

void map_fptr() // map
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8919 = arg_buffer[1];
  // reading env and args
  void *const kont8869 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8750 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9217 = is_true(id_8750);
  if (if_guard9217) {
    void *const xy8751 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8869;
    arg_buffer[2] = xy8751;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8869))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8752 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9218 = alloc_clo(lam8917_fptr, 3);

    // setting env list
    clo9218[1] = proc;
    clo9218[2] = lst;
    clo9218[3] = kont8869;
    void *f8871 = encode_clo(clo9218);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8871;
    arg_buffer[3] = id_8752;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8920_fptr() // lam8920
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8921 = arg_buffer[1];
  // reading env and args
  void *const id_8762 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8921);
  void *const id_8760 = decode_clo_array[2];
  void *const kont8872 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8760, id_8762);
  arg_buffer[1] = kont8872;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8922_fptr() // lam8922
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8923 = arg_buffer[1];
  // reading env and args
  void *const id_8759 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8923);
  void *const lst = decode_clo_array[3];
  void *const kont8872 = decode_clo_array[2];
  void *const op = decode_clo_array[1];

  // if-clause
  bool if_guard9219 = is_true(id_8759);
  if (if_guard9219) {
    void *const id_8760 = apply_prim_car_1(lst);
    void *const id_8761 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9220 = alloc_clo(lam8920_fptr, 2);

    // setting env list
    clo9220[1] = kont8872;
    clo9220[2] = id_8760;
    void *f8873 = encode_clo(clo9220);

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = f8873;
    arg_buffer[3] = op;
    arg_buffer[4] = id_8761;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_filter();
  } else {
    void *const id_8763 = apply_prim_cdr_1(lst);

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = kont8872;
    arg_buffer[3] = op;
    arg_buffer[4] = id_8763;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_filter();
  }
}

void filter_fptr() // filter
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8924 = arg_buffer[1];
  // reading env and args
  void *const kont8872 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8756 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9221 = is_true(id_8756);
  if (if_guard9221) {
    void *const xy8757 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8872;
    arg_buffer[2] = xy8757;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8758 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9222 = alloc_clo(lam8922_fptr, 3);

    // setting env list
    clo9222[1] = op;
    clo9222[2] = kont8872;
    clo9222[3] = lst;
    void *f8874 = encode_clo(clo9222);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8874;
    arg_buffer[3] = id_8758;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void drop_fptr() // drop
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8925 = arg_buffer[1];
  // reading env and args
  void *const kont8875 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8764 = int8993;
  void *const id_8765 = apply_prim__u61_2(n, id_8764);

  // if-clause
  bool if_guard9223 = is_true(id_8765);
  if (if_guard9223) {

    // clo-app
    arg_buffer[1] = kont8875;
    arg_buffer[2] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8875))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8766 = apply_prim_cdr_1(lst);
    void *const id_8767 = int8992;
    void *const id_8768 = apply_prim__u45_2(n, id_8767);

    // clo-app
    arg_buffer[1] = drop;
    arg_buffer[2] = kont8875;
    arg_buffer[3] = id_8766;
    arg_buffer[4] = id_8768;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_drop();
  }
}

void lam8926_fptr() // lam8926
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8927 = arg_buffer[1];
  // reading env and args
  void *const id_8771 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8927);
  void *const lst = decode_clo_array[3];
  void *const fun = decode_clo_array[2];
  void *const kont8876 = decode_clo_array[1];
  void *const id_8772 = apply_prim_cdr_1(lst);

  // clo-app
  arg_buffer[1] = foldl;
  arg_buffer[2] = kont8876;
  arg_buffer[3] = fun;
  arg_buffer[4] = id_8771;
  arg_buffer[5] = id_8772;
  arg_buffer[0] = reinterpret_cast<void *>(5);
  decoded_foldl();
}

void foldl_fptr() // foldl
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8928 = arg_buffer[1];
  // reading env and args
  void *const kont8876 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8769 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9224 = is_true(id_8769);
  if (if_guard9224) {

    // clo-app
    arg_buffer[1] = kont8876;
    arg_buffer[2] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8876))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8770 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9225 = alloc_clo(lam8926_fptr, 3);

    // setting env list
    clo9225[1] = kont8876;
    clo9225[2] = fun;
    clo9225[3] = lst;
    void *f8877 = encode_clo(clo9225);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8877;
    arg_buffer[3] = id_8770;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8929_fptr() // lam8929
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8930 = arg_buffer[1];
  // reading env and args
  void *const id_8776 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8930);
  void *const id_8774 = decode_clo_array[3];
  void *const fun = decode_clo_array[2];
  void *const kont8878 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = fun;
  arg_buffer[2] = kont8878;
  arg_buffer[3] = id_8774;
  arg_buffer[4] = id_8776;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void foldr_fptr() // foldr
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8931 = arg_buffer[1];
  // reading env and args
  void *const kont8878 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8773 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9226 = is_true(id_8773);
  if (if_guard9226) {

    // clo-app
    arg_buffer[1] = kont8878;
    arg_buffer[2] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8774 = apply_prim_car_1(lst);
    void *const id_8775 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9227 = alloc_clo(lam8929_fptr, 3);

    // setting env list
    clo9227[1] = kont8878;
    clo9227[2] = fun;
    clo9227[3] = id_8774;
    void *f8879 = encode_clo(clo9227);

    // clo-app
    arg_buffer[1] = foldr;
    arg_buffer[2] = f8879;
    arg_buffer[3] = fun;
    arg_buffer[4] = acc;
    arg_buffer[5] = id_8775;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_foldr();
  }
}

void reverse_u45helper_fptr() // reverse-helper
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8932 = arg_buffer[1];
  // reading env and args
  void *const kont8880 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8777 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9228 = is_true(id_8777);
  if (if_guard9228) {

    // clo-app
    arg_buffer[1] = kont8880;
    arg_buffer[2] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8880))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8778 = apply_prim_cdr_1(lst);
    void *const id_8779 = apply_prim_car_1(lst);
    void *const id_8780 = apply_prim_cons_2(id_8779, lst2);

    // clo-app
    arg_buffer[1] = reverse_u45helper;
    arg_buffer[2] = kont8880;
    arg_buffer[3] = id_8778;
    arg_buffer[4] = id_8780;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_reverse_u45helper();
  }
}

void reverse_fptr() // reverse
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8933 = arg_buffer[1];
  // reading env and args
  void *const kont8881 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8781 = apply_prim_list_0();

  // clo-app
  arg_buffer[1] = reverse_u45helper;
  arg_buffer[2] = kont8881;
  arg_buffer[3] = lst;
  arg_buffer[4] = id_8781;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_reverse_u45helper();
}

void lam8934_fptr() // lam8934
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8935 = arg_buffer[1];
  // reading env and args
  void *const id_8785 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8935);
  void *const kont8882 = decode_clo_array[2];
  void *const id_8783 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8783, id_8785);
  arg_buffer[1] = kont8882;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8882))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void append1_fptr() // append1
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8936 = arg_buffer[1];
  // reading env and args
  void *const kont8882 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8782 = apply_prim_null_u63_1(lhs);

  // if-clause
  bool if_guard9229 = is_true(id_8782);
  if (if_guard9229) {

    // clo-app
    arg_buffer[1] = kont8882;
    arg_buffer[2] = rhs;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8882))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8783 = apply_prim_car_1(lhs);
    void *const id_8784 = apply_prim_cdr_1(lhs);

    // creating new closure instance
    void **clo9230 = alloc_clo(lam8934_fptr, 2);

    // setting env list
    clo9230[1] = id_8783;
    clo9230[2] = kont8882;
    void *f8883 = encode_clo(clo9230);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = f8883;
    arg_buffer[3] = id_8784;
    arg_buffer[4] = rhs;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_append1();
  }
}

void lam8937_fptr() // lam8937
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8938 = arg_buffer[1];
  // reading env and args
  void *const id_8792 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8938);
  void *const kont8884 = decode_clo_array[2];
  void *const id_8790 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = foldr;
  arg_buffer[2] = kont8884;
  arg_buffer[3] = append1;
  arg_buffer[4] = id_8790;
  arg_buffer[5] = id_8792;
  arg_buffer[0] = reinterpret_cast<void *>(5);
  decoded_foldr();
}

void lam8939_fptr() // lam8939
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8940 = arg_buffer[1];
  // reading env and args
  void *const id_8787 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8940);
  void *const id_8786 = decode_clo_array[4];
  void *const kont8884 = decode_clo_array[3];
  void *const x = decode_clo_array[2];
  void *const xs = decode_clo_array[1];
  void *const id_8788 = apply_prim__u61_2(id_8786, id_8787);

  // if-clause
  bool if_guard9231 = is_true(id_8788);
  if (if_guard9231) {
    void *const id_8789 = apply_prim_car_1(x);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = kont8884;
    arg_buffer[3] = xs;
    arg_buffer[4] = id_8789;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_append1();
  } else {
    void *const id_8790 = apply_prim_list_0();
    void *const id_8791 = apply_prim_list_1(xs);

    // creating new closure instance
    void **clo9232 = alloc_clo(lam8937_fptr, 2);

    // setting env list
    clo9232[1] = id_8790;
    clo9232[2] = kont8884;
    void *f8885 = encode_clo(clo9232);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = f8885;
    arg_buffer[3] = id_8791;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_append1();
  }
}

void lam8941_fptr() // lam8941
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8942 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8942);
  void *const kont8884 = decode_clo_array[2];
  void *const xs = decode_clo_array[1];
  void *const id_8786 = int8992;

  // creating new closure instance
  void **clo9233 = alloc_clo(lam8939_fptr, 4);

  // setting env list
  clo9233[1] = xs;
  clo9233[2] = x;
  clo9233[3] = kont8884;
  clo9233[4] = id_8786;
  void *f8886 = encode_clo(clo9233);

  // clo-app
  arg_buffer[1] = length;
  arg_buffer[2] = f8886;
  arg_buffer[3] = x;
  arg_buffer[0] = reinterpret_cast<void *>(3);
  decoded_length();
}

void append_fptr() // append
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8943 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *vargs = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    vargs = arg_buffer[2];
  } else {
    // building cons cell
    vargs = encode_null();
    for (int i = numArgs; i >= 2; i--) {
      vargs = prim_cons(arg_buffer[i], vargs);
    }
  }

  void *const kont8884 = apply_prim_car_1(vargs);
  void *const vargs8904 = apply_prim_cdr_1(vargs);
  void *const xs = apply_prim_car_1(vargs8904);
  void *const vargs8718 = apply_prim_cdr_1(vargs8904);

  // creating new closure instance
  void **clo9234 = alloc_clo(lam8941_fptr, 2);

  // setting env list
  clo9234[1] = xs;
  clo9234[2] = kont8884;
  void *f8887 = encode_clo(clo9234);

  // clo-app
  arg_buffer[1] = f8887;
  arg_buffer[2] = vargs8718;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8887))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8944_fptr() // lam8944
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8945 = arg_buffer[1];
  // reading env and args
  void *const xy8795 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8945);
  void *const kont8888 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = kont8888;
  arg_buffer[2] = xy8795;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8888))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void take_u45helper_fptr() // take-helper
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8946 = arg_buffer[1];
  // reading env and args
  void *const kont8888 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8793 = int8993;
  void *const id_8794 = apply_prim__u61_2(n, id_8793);

  // if-clause
  bool if_guard9235 = is_true(id_8794);
  if (if_guard9235) {

    // creating new closure instance
    void **clo9236 = alloc_clo(lam8944_fptr, 1);

    // setting env list
    clo9236[1] = kont8888;
    void *f8889 = encode_clo(clo9236);

    // clo-app
    arg_buffer[1] = reverse;
    arg_buffer[2] = f8889;
    arg_buffer[3] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    decoded_reverse();
  } else {
    void *const id_8796 = apply_prim_cdr_1(lst);
    void *const id_8797 = int8992;
    void *const id_8798 = apply_prim__u45_2(n, id_8797);
    void *const id_8799 = apply_prim_car_1(lst);
    void *const id_8800 = apply_prim_cons_2(id_8799, lst2);

    // clo-app
    arg_buffer[1] = take_u45helper;
    arg_buffer[2] = kont8888;
    arg_buffer[3] = id_8796;
    arg_buffer[4] = id_8798;
    arg_buffer[5] = id_8800;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_take_u45helper();
  }
}

void take_fptr() // take
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8947 = arg_buffer[1];
  // reading env and args
  void *const kont8890 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8801 = apply_prim_list_0();

  // clo-app
  arg_buffer[1] = take_u45helper;
  arg_buffer[2] = kont8890;
  arg_buffer[3] = lst;
  arg_buffer[4] = n;
  arg_buffer[5] = id_8801;
  arg_buffer[0] = reinterpret_cast<void *>(5);
  decoded_take_u45helper();
}

void lam8948_fptr() // lam8948
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8949 = arg_buffer[1];
  // reading env and args
  void *const id_8815 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8949);
  void *const dist = decode_clo_array[4];
  void *const kont8891 = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9237 = is_true(id_8815);
  if (if_guard9237) {
    void *const id_8816 = int8992;
    void *const id_8817 = apply_prim__u43_2(dist, id_8816);
    void *const id_8818 = apply_prim_cdr_1(placed);

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = kont8891;
    arg_buffer[3] = row;
    arg_buffer[4] = id_8817;
    arg_buffer[5] = id_8818;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_ok_u63();
  } else {
    void *const xy8819 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8891;
    arg_buffer[2] = xy8819;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8891))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8950_fptr() // lam8950
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8951 = arg_buffer[1];
  // reading env and args
  void *const id_8809 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8951);
  void *const dist = decode_clo_array[4];
  void *const kont8891 = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9238 = is_true(id_8809);
  if (if_guard9238) {
    void *const id_8810 = apply_prim_car_1(placed);
    void *const id_8811 = apply_prim__u45_2(row, dist);
    void *const id_8812 = apply_prim__u61_2(id_8810, id_8811);

    // creating new closure instance
    void **clo9239 = alloc_clo(lam8948_fptr, 4);

    // setting env list
    clo9239[1] = placed;
    clo9239[2] = row;
    clo9239[3] = kont8891;
    clo9239[4] = dist;
    void *f8892 = encode_clo(clo9239);

    // if-clause
    bool if_guard9240 = is_true(id_8812);
    if (if_guard9240) {
      void *const xy8813 = bool_f8986;

      // clo-app
      arg_buffer[1] = f8892;
      arg_buffer[2] = xy8813;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8814 = bool_t8988;

      // clo-app
      arg_buffer[1] = f8892;
      arg_buffer[2] = xy8814;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }

  } else {
    void *const xy8820 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8891;
    arg_buffer[2] = xy8820;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8891))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void ok_u63_fptr() // ok?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8952 = arg_buffer[1];
  // reading env and args
  void *const kont8891 = arg_buffer[2];
  void *const row = arg_buffer[3];
  void *const dist = arg_buffer[4];
  void *const placed = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8802 = apply_prim_null_u63_1(placed);

  // if-clause
  bool if_guard9241 = is_true(id_8802);
  if (if_guard9241) {
    void *const xy8803 = bool_t8988;

    // clo-app
    arg_buffer[1] = kont8891;
    arg_buffer[2] = xy8803;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8891))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8804 = apply_prim_car_1(placed);
    void *const id_8805 = apply_prim__u43_2(row, dist);
    void *const id_8806 = apply_prim__u61_2(id_8804, id_8805);

    // creating new closure instance
    void **clo9242 = alloc_clo(lam8950_fptr, 4);

    // setting env list
    clo9242[1] = placed;
    clo9242[2] = row;
    clo9242[3] = kont8891;
    clo9242[4] = dist;
    void *f8893 = encode_clo(clo9242);

    // if-clause
    bool if_guard9243 = is_true(id_8806);
    if (if_guard9243) {
      void *const xy8807 = bool_f8986;

      // clo-app
      arg_buffer[1] = f8893;
      arg_buffer[2] = xy8807;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8893))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8808 = bool_t8988;

      // clo-app
      arg_buffer[1] = f8893;
      arg_buffer[2] = xy8808;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8893))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }
  }
}

void lam8953_fptr() // lam8953
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8954 = arg_buffer[1];
  // reading env and args
  void *const id_8839 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8954);
  void *const stack = decode_clo_array[4];
  void *const z = decode_clo_array[3];
  void *const x = decode_clo_array[2];
  void *const f8895 = decode_clo_array[1];
  void *const id_8840 = apply_prim_list_0();
  void *const id_8841 = apply_prim_car_1(x);
  void *const id_8842 = apply_prim_cons_2(id_8841, z);
  void *const id_8843 = apply_prim_list_3(id_8839, id_8840, id_8842);
  void *const id_8844 = apply_prim_cdr_1(stack);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8843, id_8844);
  arg_buffer[1] = f8895;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8955_fptr() // lam8955
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8956 = arg_buffer[1];
  // reading env and args
  void *const id_8846 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8956);
  void *const id_8834 = decode_clo_array[3];
  void *const count = decode_clo_array[2];
  void *const kont8894 = decode_clo_array[1];
  void *const id_8847 = apply_prim_cons_2(id_8834, id_8846);

  // clo-app
  arg_buffer[1] = q_u45helper;
  arg_buffer[2] = kont8894;
  arg_buffer[3] = id_8847;
  arg_buffer[4] = count;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_q_u45helper();
}

void lam8957_fptr() // lam8957
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8958 = arg_buffer[1];
  // reading env and args
  void *const id_8837 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8958);
  void *const count = decode_clo_array[7];
  void *const z = decode_clo_array[6];
  void *const y = decode_clo_array[5];
  void *const x = decode_clo_array[4];
  void *const kont8894 = decode_clo_array[3];
  void *const stack = decode_clo_array[2];
  void *const id_8834 = decode_clo_array[1];

  // creating new closure instance
  void **clo9244 = alloc_clo(lam8955_fptr, 3);

  // setting env list
  clo9244[1] = kont8894;
  clo9244[2] = count;
  clo9244[3] = id_8834;
  void *f8895 = encode_clo(clo9244);

  // if-clause
  bool if_guard9245 = is_true(id_8837);
  if (if_guard9245) {
    void *const id_8838 = apply_prim_cdr_1(x);

    // creating new closure instance
    void **clo9246 = alloc_clo(lam8953_fptr, 4);

    // setting env list
    clo9246[1] = f8895;
    clo9246[2] = x;
    clo9246[3] = z;
    clo9246[4] = stack;
    void *f8896 = encode_clo(clo9246);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f8896;
    arg_buffer[3] = id_8838;
    arg_buffer[4] = y;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_append();
  } else {
    void *const xy8845 = apply_prim_cdr_1(stack);

    // clo-app
    arg_buffer[1] = f8895;
    arg_buffer[2] = xy8845;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8959_fptr() // lam8959
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8960 = arg_buffer[1];
  // reading env and args
  void *const z = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8960);
  void *const stack = decode_clo_array[5];
  void *const count = decode_clo_array[4];
  void *const y = decode_clo_array[3];
  void *const x = decode_clo_array[2];
  void *const kont8894 = decode_clo_array[1];
  void *const id_8825 = apply_prim_null_u63_1(x);

  // if-clause
  bool if_guard9247 = is_true(id_8825);
  if (if_guard9247) {
    void *const id_8826 = apply_prim_null_u63_1(y);

    // if-clause
    bool if_guard9248 = is_true(id_8826);
    if (if_guard9248) {
      void *const id_8827 = apply_prim_cdr_1(stack);
      void *const id_8828 = int8992;
      void *const id_8829 = apply_prim__u43_2(count, id_8828);

      // clo-app
      arg_buffer[1] = q_u45helper;
      arg_buffer[2] = kont8894;
      arg_buffer[3] = id_8827;
      arg_buffer[4] = id_8829;
      arg_buffer[0] = reinterpret_cast<void *>(4);
      decoded_q_u45helper();
    } else {
      void *const id_8830 = apply_prim_cdr_1(stack);

      // clo-app
      arg_buffer[1] = q_u45helper;
      arg_buffer[2] = kont8894;
      arg_buffer[3] = id_8830;
      arg_buffer[4] = count;
      arg_buffer[0] = reinterpret_cast<void *>(4);
      decoded_q_u45helper();
    }

  } else {
    void *const id_8831 = apply_prim_cdr_1(x);
    void *const id_8832 = apply_prim_car_1(x);
    void *const id_8833 = apply_prim_cons_2(id_8832, y);
    void *const id_8834 = apply_prim_list_3(id_8831, id_8833, z);
    void *const id_8835 = apply_prim_car_1(x);
    void *const id_8836 = int8992;

    // creating new closure instance
    void **clo9249 = alloc_clo(lam8957_fptr, 7);

    // setting env list
    clo9249[1] = id_8834;
    clo9249[2] = stack;
    clo9249[3] = kont8894;
    clo9249[4] = x;
    clo9249[5] = y;
    clo9249[6] = z;
    clo9249[7] = count;
    void *f8897 = encode_clo(clo9249);

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = f8897;
    arg_buffer[3] = id_8835;
    arg_buffer[4] = id_8836;
    arg_buffer[5] = z;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_ok_u63();
  }
}

void lam8961_fptr() // lam8961
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8962 = arg_buffer[1];
  // reading env and args
  void *const y = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8962);
  void *const stack = decode_clo_array[5];
  void *const state = decode_clo_array[4];
  void *const count = decode_clo_array[3];
  void *const x = decode_clo_array[2];
  void *const kont8894 = decode_clo_array[1];

  // creating new closure instance
  void **clo9250 = alloc_clo(lam8959_fptr, 5);

  // setting env list
  clo9250[1] = kont8894;
  clo9250[2] = x;
  clo9250[3] = y;
  clo9250[4] = count;
  clo9250[5] = stack;
  void *f8898 = encode_clo(clo9250);

  void *const id_8823 = apply_prim_cdr_1(state);
  void *const id_8824 = apply_prim_cdr_1(id_8823);

  // clo-app
  arg_buffer[2] = apply_prim_car_1(id_8824);
  arg_buffer[1] = f8898;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8898))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void q_u45helper_fptr() // q-helper
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8963 = arg_buffer[1];
  // reading env and args
  void *const kont8894 = arg_buffer[2];
  void *const stack = arg_buffer[3];
  void *const count = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8821 = apply_prim_null_u63_1(stack);

  // if-clause
  bool if_guard9251 = is_true(id_8821);
  if (if_guard9251) {

    // clo-app
    arg_buffer[1] = kont8894;
    arg_buffer[2] = count;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8894))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const state = apply_prim_car_1(stack);
    void *const x = apply_prim_car_1(state);

    // creating new closure instance
    void **clo9252 = alloc_clo(lam8961_fptr, 5);

    // setting env list
    clo9252[1] = kont8894;
    clo9252[2] = x;
    clo9252[3] = count;
    clo9252[4] = state;
    clo9252[5] = stack;
    void *f8899 = encode_clo(clo9252);

    void *const id_8822 = apply_prim_cdr_1(state);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(id_8822);
    arg_buffer[1] = f8899;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8899))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void iota1_fptr() // iota1
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8964 = arg_buffer[1];
  // reading env and args
  void *const kont8900 = arg_buffer[2];
  void *const n = arg_buffer[3];
  void *const l = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8848 = int8993;
  void *const id_8849 = apply_prim__u61_2(n, id_8848);

  // if-clause
  bool if_guard9253 = is_true(id_8849);
  if (if_guard9253) {

    // clo-app
    arg_buffer[1] = kont8900;
    arg_buffer[2] = l;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8900))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8850 = int8992;
    void *const id_8851 = apply_prim__u45_2(n, id_8850);
    void *const id_8852 = apply_prim_cons_2(n, l);

    // clo-app
    arg_buffer[1] = iota1;
    arg_buffer[2] = kont8900;
    arg_buffer[3] = id_8851;
    arg_buffer[4] = id_8852;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_iota1();
  }
}

void lam8965_fptr() // lam8965
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8966 = arg_buffer[1];
  // reading env and args
  void *const id_8854 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8966);
  void *const kont8901 = decode_clo_array[1];
  void *const id_8855 = apply_prim_list_0();
  void *const id_8856 = apply_prim_list_0();
  void *const id_8857 = apply_prim_list_3(id_8854, id_8855, id_8856);
  void *const id_8858 = apply_prim_list_1(id_8857);
  void *const id_8859 = int8993;

  // clo-app
  arg_buffer[1] = q_u45helper;
  arg_buffer[2] = kont8901;
  arg_buffer[3] = id_8858;
  arg_buffer[4] = id_8859;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_q_u45helper();
}

void nqueens_fptr() // nqueens
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8967 = arg_buffer[1];
  // reading env and args
  void *const kont8901 = arg_buffer[2];
  void *const n = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8853 = apply_prim_list_0();

  // creating new closure instance
  void **clo9254 = alloc_clo(lam8965_fptr, 1);

  // setting env list
  clo9254[1] = kont8901;
  void *f8902 = encode_clo(clo9254);

  // clo-app
  arg_buffer[1] = iota1;
  arg_buffer[2] = f8902;
  arg_buffer[3] = n;
  arg_buffer[4] = id_8853;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_iota1();
}

void brouhaha_main_fptr() // brouhaha_main
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8968 = arg_buffer[1];
  // reading env and args
  void *const kont8903 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8860 = int8994;

  // clo-app
  arg_buffer[1] = nqueens;
  arg_buffer[2] = kont8903;
  arg_buffer[3] = id_8860;
  arg_buffer[0] = reinterpret_cast<void *>(3);
  decoded_nqueens();
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8993 = reinterpret_cast<void *>(encode_int(0));
  bool_t8988 = encode_bool(true);
  int8992 = reinterpret_cast<void *>(encode_int(1));
  bool_f8986 = encode_bool(false);
  int8972 = reinterpret_cast<void *>(encode_int(2));
  int8994 = reinterpret_cast<void *>(encode_int(14));

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
  arg_buffer[0] = 0;
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  decoded_brouhaha_main();
}
