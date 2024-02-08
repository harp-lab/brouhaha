#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int9011;
void *bool_t9006;
void *int9010;
void *bool_f9004;
void *int8991;
void *int9012;

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

void lam8911_fptr(); // lam8911
void *lam8911 = encode_clo(alloc_clo(lam8911_fptr, 0));

void member_fptr(); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8915_fptr(); // lam8915
void *lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void length_fptr(); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8918_fptr(); // lam8918
void *lam8918 = encode_clo(alloc_clo(lam8918_fptr, 0));

void lam8920_fptr(); // lam8920
void *lam8920 = encode_clo(alloc_clo(lam8920_fptr, 0));

void lam8922_fptr(); // lam8922
void *lam8922 = encode_clo(alloc_clo(lam8922_fptr, 0));

void map_fptr(); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8925_fptr(); // lam8925
void *lam8925 = encode_clo(alloc_clo(lam8925_fptr, 0));

void lam8927_fptr(); // lam8927
void *lam8927 = encode_clo(alloc_clo(lam8927_fptr, 0));

void lam8929_fptr(); // lam8929
void *lam8929 = encode_clo(alloc_clo(lam8929_fptr, 0));

void filter_fptr(); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8933_fptr(); // lam8933
void *lam8933 = encode_clo(alloc_clo(lam8933_fptr, 0));

void foldl_fptr(); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8936_fptr(); // lam8936
void *lam8936 = encode_clo(alloc_clo(lam8936_fptr, 0));

void foldr_fptr(); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8940_fptr(); // lam8940
void *lam8940 = encode_clo(alloc_clo(lam8940_fptr, 0));

void reverse_fptr(); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8943_fptr(); // lam8943
void *lam8943 = encode_clo(alloc_clo(lam8943_fptr, 0));

void append1_fptr(); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8946_fptr(); // lam8946
void *lam8946 = encode_clo(alloc_clo(lam8946_fptr, 0));

void lam8948_fptr(); // lam8948
void *lam8948 = encode_clo(alloc_clo(lam8948_fptr, 0));

void lam8950_fptr(); // lam8950
void *lam8950 = encode_clo(alloc_clo(lam8950_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8953_fptr(); // lam8953
void *lam8953 = encode_clo(alloc_clo(lam8953_fptr, 0));

void take_u45helper_fptr(); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8956_fptr(); // lam8956
void *lam8956 = encode_clo(alloc_clo(lam8956_fptr, 0));

void take_fptr(); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam8959_fptr(); // lam8959
void *lam8959 = encode_clo(alloc_clo(lam8959_fptr, 0));

void lam8961_fptr(); // lam8961
void *lam8961 = encode_clo(alloc_clo(lam8961_fptr, 0));

void ok_u63_fptr(); // ok?
void *ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8964_fptr(); // lam8964
void *lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void lam8966_fptr(); // lam8966
void *lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void lam8968_fptr(); // lam8968
void *lam8968 = encode_clo(alloc_clo(lam8968_fptr, 0));

void lam8970_fptr(); // lam8970
void *lam8970 = encode_clo(alloc_clo(lam8970_fptr, 0));

void lam8972_fptr(); // lam8972
void *lam8972 = encode_clo(alloc_clo(lam8972_fptr, 0));

void lam8974_fptr(); // lam8974
void *lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void q_u45helper_fptr(); // q-helper
void *q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void *iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8978_fptr(); // lam8978
void *lam8978 = encode_clo(alloc_clo(lam8978_fptr, 0));

void lam8980_fptr(); // lam8980
void *lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void lam8982_fptr(); // lam8982
void *lam8982 = encode_clo(alloc_clo(lam8982_fptr, 0));

void lam8984_fptr(); // lam8984
void *lam8984 = encode_clo(alloc_clo(lam8984_fptr, 0));

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
  void *const _env9015 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9013 = prim_car(lst);
    void *const lst9016 = prim_cdr(lst);
    void *const x9014 = apply_prim__u43(lst9016);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9013))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9013 = arg_buffer[2];
    void *const x9014 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9013))[0]);

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
  void *const _env9019 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9017 = prim_car(lst);
    void *const lst9020 = prim_cdr(lst);
    void *const x9018 = apply_prim__u45(lst9020);
    arg_buffer[1] = kont9017;
    arg_buffer[2] = x9018;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9017))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9017 = arg_buffer[2];
    void *const x9018 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont9017;
    arg_buffer[2] = x9018;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9017))[0]);

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
  void *const _env9023 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9021 = prim_car(lst);
    void *const lst9024 = prim_cdr(lst);
    void *const x9022 = apply_prim__u42(lst9024);
    arg_buffer[1] = kont9021;
    arg_buffer[2] = x9022;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9021))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9021 = arg_buffer[2];
    void *const x9022 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont9021;
    arg_buffer[2] = x9022;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9021))[0]);

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
  void *const _env9027 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9025 = prim_car(lst);
    void *const lst9028 = prim_cdr(lst);
    void *const x9026 = apply_prim__u47(lst9028);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9025))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9025 = arg_buffer[2];
    void *const x9026 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9025))[0]);

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
  void *const _env9031 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9029 = prim_car(lst);
    void *const lst9032 = prim_cdr(lst);
    void *const x9030 = apply_prim__u61(lst9032);
    arg_buffer[1] = kont9029;
    arg_buffer[2] = x9030;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9029))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9029 = arg_buffer[2];
    void *const x9030 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont9029;
    arg_buffer[2] = x9030;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9029))[0]);

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
  void *const _env9035 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9033 = prim_car(lst);
    void *const lst9036 = prim_cdr(lst);
    void *const x9034 = apply_prim__u62(lst9036);
    arg_buffer[1] = kont9033;
    arg_buffer[2] = x9034;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9033))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9033 = arg_buffer[2];
    void *const x9034 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont9033;
    arg_buffer[2] = x9034;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9033))[0]);

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
  void *const _env9039 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9037 = prim_car(lst);
    void *const lst9040 = prim_cdr(lst);
    void *const x9038 = apply_prim__u60(lst9040);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9037))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9037 = arg_buffer[2];
    void *const x9038 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9037))[0]);

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
  void *const _env9043 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9041 = prim_car(lst);
    void *const lst9044 = prim_cdr(lst);
    void *const x9042 = apply_prim__u60_u61(lst9044);
    arg_buffer[1] = kont9041;
    arg_buffer[2] = x9042;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9041))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9041 = arg_buffer[2];
    void *const x9042 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont9041;
    arg_buffer[2] = x9042;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9041))[0]);

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
  void *const _env9047 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9045 = prim_car(lst);
    void *const lst9048 = prim_cdr(lst);
    void *const x9046 = apply_prim__u62_u61(lst9048);
    arg_buffer[1] = kont9045;
    arg_buffer[2] = x9046;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9045))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9045 = arg_buffer[2];
    void *const x9046 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont9045;
    arg_buffer[2] = x9046;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9045))[0]);

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
  void *const _env9051 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9049 = prim_car(lst);
    void *const lst9052 = prim_cdr(lst);
    void *const x9050 = apply_prim_modulo(lst9052);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9049))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9049 = arg_buffer[2];
    void *const x9050 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9049))[0]);

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
  void *const _env9055 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9053 = prim_car(lst);
    void *const lst9056 = prim_cdr(lst);
    void *const x9054 = apply_prim_null_u63(lst9056);
    arg_buffer[1] = kont9053;
    arg_buffer[2] = x9054;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9053))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9053 = arg_buffer[2];
    void *const x9054 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont9053;
    arg_buffer[2] = x9054;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9053))[0]);

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
  void *const _env9059 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9057 = prim_car(lst);
    void *const lst9060 = prim_cdr(lst);
    void *const x9058 = apply_prim_equal_u63(lst9060);
    arg_buffer[1] = kont9057;
    arg_buffer[2] = x9058;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9057))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9057 = arg_buffer[2];
    void *const x9058 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont9057;
    arg_buffer[2] = x9058;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9057))[0]);

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
  void *const _env9063 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9061 = prim_car(lst);
    void *const lst9064 = prim_cdr(lst);
    void *const x9062 = apply_prim_eq_u63(lst9064);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9061))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9061 = arg_buffer[2];
    void *const x9062 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9061))[0]);

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
  void *const _env9067 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9065 = prim_car(lst);
    void *const lst9068 = prim_cdr(lst);
    void *const x9066 = apply_prim_cons(lst9068);
    arg_buffer[1] = kont9065;
    arg_buffer[2] = x9066;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9065))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9065 = arg_buffer[2];
    void *const x9066 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont9065;
    arg_buffer[2] = x9066;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9065))[0]);

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
  void *const _env9071 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9069 = prim_car(lst);
    void *const lst9072 = prim_cdr(lst);
    void *const x9070 = apply_prim_car(lst9072);
    arg_buffer[1] = kont9069;
    arg_buffer[2] = x9070;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9069))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9069 = arg_buffer[2];
    void *const x9070 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont9069;
    arg_buffer[2] = x9070;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9069))[0]);

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
  void *const _env9075 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9073 = prim_car(lst);
    void *const lst9076 = prim_cdr(lst);
    void *const x9074 = apply_prim_cdr(lst9076);
    arg_buffer[1] = kont9073;
    arg_buffer[2] = x9074;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9073))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9073 = arg_buffer[2];
    void *const x9074 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont9073;
    arg_buffer[2] = x9074;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9073))[0]);

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
  void *const _env9079 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9077 = prim_car(lst);
    void *const lst9080 = prim_cdr(lst);
    void *const x9078 = apply_prim_float_u45_u62int(lst9080);
    arg_buffer[1] = kont9077;
    arg_buffer[2] = x9078;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9077))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9077 = arg_buffer[2];
    void *const x9078 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont9077;
    arg_buffer[2] = x9078;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9077))[0]);

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
  void *const _env9083 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9081 = prim_car(lst);
    void *const lst9084 = prim_cdr(lst);
    void *const x9082 = apply_prim_int_u45_u62float(lst9084);
    arg_buffer[1] = kont9081;
    arg_buffer[2] = x9082;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9081))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9081 = arg_buffer[2];
    void *const x9082 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont9081;
    arg_buffer[2] = x9082;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9081))[0]);

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
  void *const _env9087 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9085 = prim_car(lst);
    void *const lst9088 = prim_cdr(lst);
    void *const x9086 = apply_prim_hash(lst9088);
    arg_buffer[1] = kont9085;
    arg_buffer[2] = x9086;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9085))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9085 = arg_buffer[2];
    void *const x9086 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont9085;
    arg_buffer[2] = x9086;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9085))[0]);

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
  void *const _env9091 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9089 = prim_car(lst);
    void *const lst9092 = prim_cdr(lst);
    void *const x9090 = apply_prim_hash_u45ref(lst9092);
    arg_buffer[1] = kont9089;
    arg_buffer[2] = x9090;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9089))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9089 = arg_buffer[2];
    void *const x9090 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont9089;
    arg_buffer[2] = x9090;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9089))[0]);

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
  void *const _env9095 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9093 = prim_car(lst);
    void *const lst9096 = prim_cdr(lst);
    void *const x9094 = apply_prim_hash_u45set(lst9096);
    arg_buffer[1] = kont9093;
    arg_buffer[2] = x9094;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9093))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9093 = arg_buffer[2];
    void *const x9094 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont9093;
    arg_buffer[2] = x9094;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9093))[0]);

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
  void *const _env9099 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9097 = prim_car(lst);
    void *const lst9100 = prim_cdr(lst);
    void *const x9098 = apply_prim_hash_u45keys(lst9100);
    arg_buffer[1] = kont9097;
    arg_buffer[2] = x9098;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9097))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9097 = arg_buffer[2];
    void *const x9098 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont9097;
    arg_buffer[2] = x9098;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9097))[0]);

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
  void *const _env9103 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9101 = prim_car(lst);
    void *const lst9104 = prim_cdr(lst);
    void *const x9102 = apply_prim_hash_u45has_u45key_u63(lst9104);
    arg_buffer[1] = kont9101;
    arg_buffer[2] = x9102;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9101))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9101 = arg_buffer[2];
    void *const x9102 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont9101;
    arg_buffer[2] = x9102;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9101))[0]);

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
  void *const _env9107 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9105 = prim_car(lst);
    void *const lst9108 = prim_cdr(lst);
    void *const x9106 = apply_prim_hash_u45count(lst9108);
    arg_buffer[1] = kont9105;
    arg_buffer[2] = x9106;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9105))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9105 = arg_buffer[2];
    void *const x9106 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont9105;
    arg_buffer[2] = x9106;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9105))[0]);

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
  void *const _env9111 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9109 = prim_car(lst);
    void *const lst9112 = prim_cdr(lst);
    void *const x9110 = apply_prim_set(lst9112);
    arg_buffer[1] = kont9109;
    arg_buffer[2] = x9110;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9109))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9109 = arg_buffer[2];
    void *const x9110 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont9109;
    arg_buffer[2] = x9110;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9109))[0]);

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
  void *const _env9115 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9113 = prim_car(lst);
    void *const lst9116 = prim_cdr(lst);
    void *const x9114 = apply_prim_set_u45_u62list(lst9116);
    arg_buffer[1] = kont9113;
    arg_buffer[2] = x9114;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9113))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9113 = arg_buffer[2];
    void *const x9114 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9113;
    arg_buffer[2] = x9114;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9113))[0]);

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
  void *const _env9119 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9117 = prim_car(lst);
    void *const lst9120 = prim_cdr(lst);
    void *const x9118 = apply_prim_list_u45_u62set(lst9120);
    arg_buffer[1] = kont9117;
    arg_buffer[2] = x9118;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9117))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9117 = arg_buffer[2];
    void *const x9118 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont9117;
    arg_buffer[2] = x9118;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9117))[0]);

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
  void *const _env9123 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9121 = prim_car(lst);
    void *const lst9124 = prim_cdr(lst);
    void *const x9122 = apply_prim_set_u45add(lst9124);
    arg_buffer[1] = kont9121;
    arg_buffer[2] = x9122;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9121))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9121 = arg_buffer[2];
    void *const x9122 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont9121;
    arg_buffer[2] = x9122;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9121))[0]);

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
  void *const _env9127 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9125 = prim_car(lst);
    void *const lst9128 = prim_cdr(lst);
    void *const x9126 = apply_prim_set_u45member_u63(lst9128);
    arg_buffer[1] = kont9125;
    arg_buffer[2] = x9126;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9125))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9125 = arg_buffer[2];
    void *const x9126 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9125;
    arg_buffer[2] = x9126;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9125))[0]);

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
  void *const _env9131 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9129 = prim_car(lst);
    void *const lst9132 = prim_cdr(lst);
    void *const x9130 = apply_prim_set_u45remove(lst9132);
    arg_buffer[1] = kont9129;
    arg_buffer[2] = x9130;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9129))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9129 = arg_buffer[2];
    void *const x9130 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9129;
    arg_buffer[2] = x9130;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9129))[0]);

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
  void *const _env9135 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9133 = prim_car(lst);
    void *const lst9136 = prim_cdr(lst);
    void *const x9134 = apply_prim_set_u45count(lst9136);
    arg_buffer[1] = kont9133;
    arg_buffer[2] = x9134;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9133))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9133 = arg_buffer[2];
    void *const x9134 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9133;
    arg_buffer[2] = x9134;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9133))[0]);

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
  void *const _env9139 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9137 = prim_car(lst);
    void *const lst9140 = prim_cdr(lst);
    void *const x9138 = apply_prim_string_u63(lst9140);
    arg_buffer[1] = kont9137;
    arg_buffer[2] = x9138;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9137))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9137 = arg_buffer[2];
    void *const x9138 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9137;
    arg_buffer[2] = x9138;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9137))[0]);

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
  void *const _env9143 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9141 = prim_car(lst);
    void *const lst9144 = prim_cdr(lst);
    void *const x9142 = apply_prim_string_u45length(lst9144);
    arg_buffer[1] = kont9141;
    arg_buffer[2] = x9142;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9141))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9141 = arg_buffer[2];
    void *const x9142 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9141;
    arg_buffer[2] = x9142;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9141))[0]);

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
  void *const _env9147 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9145 = prim_car(lst);
    void *const lst9148 = prim_cdr(lst);
    void *const x9146 = apply_prim_string_u45ref(lst9148);
    arg_buffer[1] = kont9145;
    arg_buffer[2] = x9146;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9145))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9145 = arg_buffer[2];
    void *const x9146 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9145;
    arg_buffer[2] = x9146;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9145))[0]);

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
  void *const _env9151 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9149 = prim_car(lst);
    void *const lst9152 = prim_cdr(lst);
    void *const x9150 = apply_prim_substring(lst9152);
    arg_buffer[1] = kont9149;
    arg_buffer[2] = x9150;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9149))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9149 = arg_buffer[2];
    void *const x9150 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9149;
    arg_buffer[2] = x9150;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9149))[0]);

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
  void *const _env9155 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9153 = prim_car(lst);
    void *const lst9156 = prim_cdr(lst);
    void *const x9154 = apply_prim_string_u45append(lst9156);
    arg_buffer[1] = kont9153;
    arg_buffer[2] = x9154;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9153))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9153 = arg_buffer[2];
    void *const x9154 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9153;
    arg_buffer[2] = x9154;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9153))[0]);

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
  void *const _env9159 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9157 = prim_car(lst);
    void *const lst9160 = prim_cdr(lst);
    void *const x9158 = apply_prim_string_u45_u62list(lst9160);
    arg_buffer[1] = kont9157;
    arg_buffer[2] = x9158;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9157))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9157 = arg_buffer[2];
    void *const x9158 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9157;
    arg_buffer[2] = x9158;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9157))[0]);

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
  void *const _env9163 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9161 = prim_car(lst);
    void *const lst9164 = prim_cdr(lst);
    void *const x9162 = apply_prim_exact_u45floor(lst9164);
    arg_buffer[1] = kont9161;
    arg_buffer[2] = x9162;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9161))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9161 = arg_buffer[2];
    void *const x9162 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9161;
    arg_buffer[2] = x9162;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9161))[0]);

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
  void *const _env9167 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9165 = prim_car(lst);
    void *const lst9168 = prim_cdr(lst);
    void *const x9166 = apply_prim_exact_u45ceiling(lst9168);
    arg_buffer[1] = kont9165;
    arg_buffer[2] = x9166;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9165))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9165 = arg_buffer[2];
    void *const x9166 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9165;
    arg_buffer[2] = x9166;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9165))[0]);

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
  void *const _env9171 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9169 = prim_car(lst);
    void *const lst9172 = prim_cdr(lst);
    void *const x9170 = apply_prim_exact_u45round(lst9172);
    arg_buffer[1] = kont9169;
    arg_buffer[2] = x9170;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9169))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9169 = arg_buffer[2];
    void *const x9170 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9169;
    arg_buffer[2] = x9170;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9169))[0]);

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
  void *const _env9175 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9173 = prim_car(lst);
    void *const lst9176 = prim_cdr(lst);
    void *const x9174 = apply_prim_abs(lst9176);
    arg_buffer[1] = kont9173;
    arg_buffer[2] = x9174;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9173))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9173 = arg_buffer[2];
    void *const x9174 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9173;
    arg_buffer[2] = x9174;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9173))[0]);

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
  void *const _env9179 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9177 = prim_car(lst);
    void *const lst9180 = prim_cdr(lst);
    void *const x9178 = apply_prim_max(lst9180);
    arg_buffer[1] = kont9177;
    arg_buffer[2] = x9178;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9177))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9177 = arg_buffer[2];
    void *const x9178 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9177;
    arg_buffer[2] = x9178;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9177))[0]);

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
  void *const _env9183 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9181 = prim_car(lst);
    void *const lst9184 = prim_cdr(lst);
    void *const x9182 = apply_prim_min(lst9184);
    arg_buffer[1] = kont9181;
    arg_buffer[2] = x9182;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9181))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9181 = arg_buffer[2];
    void *const x9182 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9181;
    arg_buffer[2] = x9182;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9181))[0]);

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
  void *const _env9187 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9185 = prim_car(lst);
    void *const lst9188 = prim_cdr(lst);
    void *const x9186 = apply_prim_expt(lst9188);
    arg_buffer[1] = kont9185;
    arg_buffer[2] = x9186;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9185))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9185 = arg_buffer[2];
    void *const x9186 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9185;
    arg_buffer[2] = x9186;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9185))[0]);

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
  void *const _env9191 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9189 = prim_car(lst);
    void *const lst9192 = prim_cdr(lst);
    void *const x9190 = apply_prim_sqrt(lst9192);
    arg_buffer[1] = kont9189;
    arg_buffer[2] = x9190;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9189))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9189 = arg_buffer[2];
    void *const x9190 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9189;
    arg_buffer[2] = x9190;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9189))[0]);

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
  void *const _env9195 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9193 = prim_car(lst);
    void *const lst9196 = prim_cdr(lst);
    void *const x9194 = apply_prim_remainder(lst9196);
    arg_buffer[1] = kont9193;
    arg_buffer[2] = x9194;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9193))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9193 = arg_buffer[2];
    void *const x9194 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9193;
    arg_buffer[2] = x9194;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9193))[0]);

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
  void *const _env9199 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9197 = prim_car(lst);
    void *const lst9200 = prim_cdr(lst);
    void *const x9198 = apply_prim_quotient(lst9200);
    arg_buffer[1] = kont9197;
    arg_buffer[2] = x9198;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9197))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9197 = arg_buffer[2];
    void *const x9198 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9197;
    arg_buffer[2] = x9198;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9197))[0]);

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
  void *const _env9203 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9201 = prim_car(lst);
    void *const lst9204 = prim_cdr(lst);
    void *const x9202 = apply_prim_random(lst9204);
    arg_buffer[1] = kont9201;
    arg_buffer[2] = x9202;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9201))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9201 = arg_buffer[2];
    void *const x9202 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9201;
    arg_buffer[2] = x9202;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9201))[0]);

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
  void *const _env9207 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9205 = prim_car(lst);
    void *const lst9208 = prim_cdr(lst);
    void *const x9206 = apply_prim_symbol_u63(lst9208);
    arg_buffer[1] = kont9205;
    arg_buffer[2] = x9206;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9205))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9205 = arg_buffer[2];
    void *const x9206 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9205;
    arg_buffer[2] = x9206;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9205))[0]);

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
  void *const _env9211 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9209 = prim_car(lst);
    void *const lst9212 = prim_cdr(lst);
    void *const x9210 = apply_prim_pair_u63(lst9212);
    arg_buffer[1] = kont9209;
    arg_buffer[2] = x9210;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9209))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9209 = arg_buffer[2];
    void *const x9210 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9209;
    arg_buffer[2] = x9210;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9209))[0]);

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
  void *const _env9215 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9213 = prim_car(lst);
    void *const lst9216 = prim_cdr(lst);
    void *const x9214 = apply_prim_positive_u63(lst9216);
    arg_buffer[1] = kont9213;
    arg_buffer[2] = x9214;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9213))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9213 = arg_buffer[2];
    void *const x9214 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9213;
    arg_buffer[2] = x9214;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9213))[0]);

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
  void *const _env9219 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9217 = prim_car(lst);
    void *const lst9220 = prim_cdr(lst);
    void *const x9218 = apply_prim_negative_u63(lst9220);
    arg_buffer[1] = kont9217;
    arg_buffer[2] = x9218;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9217))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9217 = arg_buffer[2];
    void *const x9218 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9217;
    arg_buffer[2] = x9218;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9217))[0]);

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
  void *const _env9223 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9221 = prim_car(lst);
    void *const lst9224 = prim_cdr(lst);
    void *const x9222 = apply_prim_list(lst9224);
    arg_buffer[1] = kont9221;
    arg_buffer[2] = x9222;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9221))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9221 = arg_buffer[2];
    void *const x9222 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9221;
    arg_buffer[2] = x9222;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9221))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void even_u63_fptr() // even?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8908 = arg_buffer[1];
  // reading env and args
  void *const kont8856 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8718 = int9011;
  void *const id_8719 = int8991;
  void *const id_8720 = apply_prim_modulo_2(x, id_8719);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8718, id_8720);
  arg_buffer[1] = kont8856;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8856))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void odd_u63_fptr() // odd?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8909 = arg_buffer[1];
  // reading env and args
  void *const kont8857 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8721 = int9010;
  void *const id_8722 = int8991;
  void *const id_8723 = apply_prim_modulo_2(x, id_8722);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8721, id_8723);
  arg_buffer[1] = kont8857;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8857))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void list_u45ref_fptr() // list-ref
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8910 = arg_buffer[1];
  // reading env and args
  void *const kont8858 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8724 = int9011;
  void *const id_8725 = apply_prim__u61_2(id_8724, n);

  // if-clause
  bool if_guard9225 = is_true(id_8725);
  if (if_guard9225) {
    void *const xy8726 = apply_prim_car_1(lst);

    // clo-app
    arg_buffer[1] = kont8858;
    arg_buffer[2] = xy8726;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8727 = apply_prim_cdr_1(lst);
    void *const id_8728 = int9010;
    void *const id_8729 = apply_prim__u45_2(n, id_8728);

    // clo-app
    arg_buffer[1] = list_u45ref;
    arg_buffer[2] = kont8858;
    arg_buffer[3] = id_8727;
    arg_buffer[4] = id_8729;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_list_u45ref();
  }
}

void lam8911_fptr() // lam8911
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8912 = arg_buffer[1];
  // reading env and args
  void *const id_8733 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8912);
  void *const kont8859 = decode_clo_array[3];
  void *const lst = decode_clo_array[2];
  void *const item = decode_clo_array[1];

  // if-clause
  bool if_guard9226 = is_true(id_8733);
  if (if_guard9226) {
    void *const xy8734 = bool_f9004;

    // clo-app
    arg_buffer[1] = kont8859;
    arg_buffer[2] = xy8734;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8859))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8735 = apply_prim_car_1(lst);
    void *const id_8736 = apply_prim_equal_u63_2(item, id_8735);

    // if-clause
    bool if_guard9227 = is_true(id_8736);
    if (if_guard9227) {

      // clo-app
      arg_buffer[1] = kont8859;
      arg_buffer[2] = lst;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr =
          reinterpret_cast<void (*)()>((decode_clo(kont8859))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const id_8737 = apply_prim_cdr_1(lst);

      // clo-app
      arg_buffer[1] = member;
      arg_buffer[2] = kont8859;
      arg_buffer[3] = item;
      arg_buffer[4] = id_8737;
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
  void *const _8913 = arg_buffer[1];
  // reading env and args
  void *const kont8859 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8730 = apply_prim_null_u63_1(item);

  // creating new closure instance
  void **clo9228 = alloc_clo(lam8911_fptr, 3);

  // setting env list
  clo9228[1] = item;
  clo9228[2] = lst;
  clo9228[3] = kont8859;
  void *f8860 = encode_clo(clo9228);

  // if-clause
  bool if_guard9229 = is_true(id_8730);
  if (if_guard9229) {
    void *const xy8731 = apply_prim_null_u63_1(item);

    // clo-app
    arg_buffer[1] = f8860;
    arg_buffer[2] = xy8731;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8860))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const xy8732 = apply_prim_null_u63_1(lst);

    // clo-app
    arg_buffer[1] = f8860;
    arg_buffer[2] = xy8732;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8860))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void member_u63_fptr() // member?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8914 = arg_buffer[1];
  // reading env and args
  void *const kont8861 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8738 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9230 = is_true(id_8738);
  if (if_guard9230) {
    void *const xy8739 = bool_f9004;

    // clo-app
    arg_buffer[1] = kont8861;
    arg_buffer[2] = xy8739;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8740 = apply_prim_car_1(lst);
    void *const id_8741 = apply_prim_equal_u63_2(id_8740, x);

    // if-clause
    bool if_guard9231 = is_true(id_8741);
    if (if_guard9231) {
      void *const xy8742 = bool_t9006;

      // clo-app
      arg_buffer[1] = kont8861;
      arg_buffer[2] = xy8742;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr =
          reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const id_8743 = apply_prim_cdr_1(lst);

      // clo-app
      arg_buffer[1] = member_u63;
      arg_buffer[2] = kont8861;
      arg_buffer[3] = x;
      arg_buffer[4] = id_8743;
      arg_buffer[0] = reinterpret_cast<void *>(4);
      decoded_member_u63();
    }
  }
}

void lam8915_fptr() // lam8915
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8916 = arg_buffer[1];
  // reading env and args
  void *const id_8748 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8916);
  void *const id_8746 = decode_clo_array[2];
  void *const kont8862 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(id_8746, id_8748);
  arg_buffer[1] = kont8862;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void length_fptr() // length
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8917 = arg_buffer[1];
  // reading env and args
  void *const kont8862 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8744 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9232 = is_true(id_8744);
  if (if_guard9232) {
    void *const xy8745 = int9011;

    // clo-app
    arg_buffer[1] = kont8862;
    arg_buffer[2] = xy8745;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8746 = int9010;
    void *const id_8747 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9233 = alloc_clo(lam8915_fptr, 2);

    // setting env list
    clo9233[1] = kont8862;
    clo9233[2] = id_8746;
    void *f8863 = encode_clo(clo9233);

    // clo-app
    arg_buffer[1] = length;
    arg_buffer[2] = f8863;
    arg_buffer[3] = id_8747;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    decoded_length();
  }
}

void lam8918_fptr() // lam8918
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8919 = arg_buffer[1];
  // reading env and args
  void *const xy8750 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8919);
  void *const kont8864 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = kont8864;
  arg_buffer[2] = xy8750;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8920_fptr() // lam8920
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8921 = arg_buffer[1];
  // reading env and args
  void *const id_8754 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8921);
  void *const id_8752 = decode_clo_array[2];
  void *const kont8864 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8752, id_8754);
  arg_buffer[1] = kont8864;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);

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
  void *const id_8752 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8923);
  void *const lst = decode_clo_array[3];
  void *const kont8864 = decode_clo_array[2];
  void *const proc = decode_clo_array[1];
  void *const id_8753 = apply_prim_cdr_1(lst);

  // creating new closure instance
  void **clo9234 = alloc_clo(lam8920_fptr, 2);

  // setting env list
  clo9234[1] = kont8864;
  clo9234[2] = id_8752;
  void *f8866 = encode_clo(clo9234);

  // clo-app
  arg_buffer[1] = map;
  arg_buffer[2] = f8866;
  arg_buffer[3] = proc;
  arg_buffer[4] = id_8753;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_map();
}

void map_fptr() // map
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8924 = arg_buffer[1];
  // reading env and args
  void *const kont8864 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8749 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9235 = is_true(id_8749);
  if (if_guard9235) {

    // creating new closure instance
    void **clo9236 = alloc_clo(lam8918_fptr, 1);

    // setting env list
    clo9236[1] = kont8864;
    void *f8865 = encode_clo(clo9236);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8865;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    list_fptr();
  } else {
    void *const id_8751 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9237 = alloc_clo(lam8922_fptr, 3);

    // setting env list
    clo9237[1] = proc;
    clo9237[2] = kont8864;
    clo9237[3] = lst;
    void *f8867 = encode_clo(clo9237);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8867;
    arg_buffer[3] = id_8751;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8925_fptr() // lam8925
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8926 = arg_buffer[1];
  // reading env and args
  void *const xy8756 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8926);
  void *const kont8868 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = kont8868;
  arg_buffer[2] = xy8756;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8927_fptr() // lam8927
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8928 = arg_buffer[1];
  // reading env and args
  void *const id_8761 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8928);
  void *const kont8868 = decode_clo_array[2];
  void *const id_8759 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8759, id_8761);
  arg_buffer[1] = kont8868;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8929_fptr() // lam8929
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8930 = arg_buffer[1];
  // reading env and args
  void *const id_8758 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8930);
  void *const lst = decode_clo_array[3];
  void *const op = decode_clo_array[2];
  void *const kont8868 = decode_clo_array[1];

  // if-clause
  bool if_guard9238 = is_true(id_8758);
  if (if_guard9238) {
    void *const id_8759 = apply_prim_car_1(lst);
    void *const id_8760 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9239 = alloc_clo(lam8927_fptr, 2);

    // setting env list
    clo9239[1] = id_8759;
    clo9239[2] = kont8868;
    void *f8870 = encode_clo(clo9239);

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = f8870;
    arg_buffer[3] = op;
    arg_buffer[4] = id_8760;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_filter();
  } else {
    void *const id_8762 = apply_prim_cdr_1(lst);

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = kont8868;
    arg_buffer[3] = op;
    arg_buffer[4] = id_8762;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_filter();
  }
}

void filter_fptr() // filter
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8931 = arg_buffer[1];
  // reading env and args
  void *const kont8868 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8755 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9240 = is_true(id_8755);
  if (if_guard9240) {

    // creating new closure instance
    void **clo9241 = alloc_clo(lam8925_fptr, 1);

    // setting env list
    clo9241[1] = kont8868;
    void *f8869 = encode_clo(clo9241);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8869;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    list_fptr();
  } else {
    void *const id_8757 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9242 = alloc_clo(lam8929_fptr, 3);

    // setting env list
    clo9242[1] = kont8868;
    clo9242[2] = op;
    clo9242[3] = lst;
    void *f8871 = encode_clo(clo9242);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8871;
    arg_buffer[3] = id_8757;
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
  void *const _8932 = arg_buffer[1];
  // reading env and args
  void *const kont8872 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8763 = int9011;
  void *const id_8764 = apply_prim__u61_2(n, id_8763);

  // if-clause
  bool if_guard9243 = is_true(id_8764);
  if (if_guard9243) {

    // clo-app
    arg_buffer[1] = kont8872;
    arg_buffer[2] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8765 = apply_prim_cdr_1(lst);
    void *const id_8766 = int9010;
    void *const id_8767 = apply_prim__u45_2(n, id_8766);

    // clo-app
    arg_buffer[1] = drop;
    arg_buffer[2] = kont8872;
    arg_buffer[3] = id_8765;
    arg_buffer[4] = id_8767;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_drop();
  }
}

void lam8933_fptr() // lam8933
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8934 = arg_buffer[1];
  // reading env and args
  void *const id_8770 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8934);
  void *const kont8873 = decode_clo_array[3];
  void *const lst = decode_clo_array[2];
  void *const fun = decode_clo_array[1];
  void *const id_8771 = apply_prim_cdr_1(lst);

  // clo-app
  arg_buffer[1] = foldl;
  arg_buffer[2] = kont8873;
  arg_buffer[3] = fun;
  arg_buffer[4] = id_8770;
  arg_buffer[5] = id_8771;
  arg_buffer[0] = reinterpret_cast<void *>(5);
  decoded_foldl();
}

void foldl_fptr() // foldl
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8935 = arg_buffer[1];
  // reading env and args
  void *const kont8873 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8768 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9244 = is_true(id_8768);
  if (if_guard9244) {

    // clo-app
    arg_buffer[1] = kont8873;
    arg_buffer[2] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8873))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8769 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9245 = alloc_clo(lam8933_fptr, 3);

    // setting env list
    clo9245[1] = fun;
    clo9245[2] = lst;
    clo9245[3] = kont8873;
    void *f8874 = encode_clo(clo9245);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8874;
    arg_buffer[3] = id_8769;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8936_fptr() // lam8936
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8937 = arg_buffer[1];
  // reading env and args
  void *const id_8775 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8937);
  void *const kont8875 = decode_clo_array[3];
  void *const fun = decode_clo_array[2];
  void *const id_8773 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = fun;
  arg_buffer[2] = kont8875;
  arg_buffer[3] = id_8773;
  arg_buffer[4] = id_8775;
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
  void *const _8938 = arg_buffer[1];
  // reading env and args
  void *const kont8875 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8772 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9246 = is_true(id_8772);
  if (if_guard9246) {

    // clo-app
    arg_buffer[1] = kont8875;
    arg_buffer[2] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8875))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8773 = apply_prim_car_1(lst);
    void *const id_8774 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9247 = alloc_clo(lam8936_fptr, 3);

    // setting env list
    clo9247[1] = id_8773;
    clo9247[2] = fun;
    clo9247[3] = kont8875;
    void *f8876 = encode_clo(clo9247);

    // clo-app
    arg_buffer[1] = foldr;
    arg_buffer[2] = f8876;
    arg_buffer[3] = fun;
    arg_buffer[4] = acc;
    arg_buffer[5] = id_8774;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_foldr();
  }
}

void reverse_u45helper_fptr() // reverse-helper
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8939 = arg_buffer[1];
  // reading env and args
  void *const kont8877 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8776 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9248 = is_true(id_8776);
  if (if_guard9248) {

    // clo-app
    arg_buffer[1] = kont8877;
    arg_buffer[2] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8877))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8777 = apply_prim_cdr_1(lst);
    void *const id_8778 = apply_prim_car_1(lst);
    void *const id_8779 = apply_prim_cons_2(id_8778, lst2);

    // clo-app
    arg_buffer[1] = reverse_u45helper;
    arg_buffer[2] = kont8877;
    arg_buffer[3] = id_8777;
    arg_buffer[4] = id_8779;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_reverse_u45helper();
  }
}

void lam8940_fptr() // lam8940
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8941 = arg_buffer[1];
  // reading env and args
  void *const id_8780 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8941);
  void *const lst = decode_clo_array[2];
  void *const kont8878 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = reverse_u45helper;
  arg_buffer[2] = kont8878;
  arg_buffer[3] = lst;
  arg_buffer[4] = id_8780;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_reverse_u45helper();
}

void reverse_fptr() // reverse
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8942 = arg_buffer[1];
  // reading env and args
  void *const kont8878 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9249 = alloc_clo(lam8940_fptr, 2);

  // setting env list
  clo9249[1] = kont8878;
  clo9249[2] = lst;
  void *f8879 = encode_clo(clo9249);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f8879;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  list_fptr();
}

void lam8943_fptr() // lam8943
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8944 = arg_buffer[1];
  // reading env and args
  void *const id_8784 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8944);
  void *const id_8782 = decode_clo_array[2];
  void *const kont8880 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8782, id_8784);
  arg_buffer[1] = kont8880;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8880))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void append1_fptr() // append1
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8945 = arg_buffer[1];
  // reading env and args
  void *const kont8880 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8781 = apply_prim_null_u63_1(lhs);

  // if-clause
  bool if_guard9250 = is_true(id_8781);
  if (if_guard9250) {

    // clo-app
    arg_buffer[1] = kont8880;
    arg_buffer[2] = rhs;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8880))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8782 = apply_prim_car_1(lhs);
    void *const id_8783 = apply_prim_cdr_1(lhs);

    // creating new closure instance
    void **clo9251 = alloc_clo(lam8943_fptr, 2);

    // setting env list
    clo9251[1] = kont8880;
    clo9251[2] = id_8782;
    void *f8881 = encode_clo(clo9251);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = f8881;
    arg_buffer[3] = id_8783;
    arg_buffer[4] = rhs;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_append1();
  }
}

void lam8946_fptr() // lam8946
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8947 = arg_buffer[1];
  // reading env and args
  void *const id_8787 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8947);
  void *const id_8785 = decode_clo_array[2];
  void *const kont8882 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = foldr;
  arg_buffer[2] = kont8882;
  arg_buffer[3] = append1;
  arg_buffer[4] = id_8785;
  arg_buffer[5] = id_8787;
  arg_buffer[0] = reinterpret_cast<void *>(5);
  decoded_foldr();
}

void lam8948_fptr() // lam8948
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8949 = arg_buffer[1];
  // reading env and args
  void *const id_8785 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8949);
  void *const kont8882 = decode_clo_array[3];
  void *const x = decode_clo_array[2];
  void *const xs = decode_clo_array[1];
  void *const id_8786 = apply_prim_list_1(xs);

  // creating new closure instance
  void **clo9252 = alloc_clo(lam8946_fptr, 2);

  // setting env list
  clo9252[1] = kont8882;
  clo9252[2] = id_8785;
  void *f8883 = encode_clo(clo9252);

  // clo-app
  arg_buffer[1] = append1;
  arg_buffer[2] = f8883;
  arg_buffer[3] = id_8786;
  arg_buffer[4] = x;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_append1();
}

void lam8950_fptr() // lam8950
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8951 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8951);
  void *const kont8882 = decode_clo_array[2];
  void *const xs = decode_clo_array[1];

  // creating new closure instance
  void **clo9253 = alloc_clo(lam8948_fptr, 3);

  // setting env list
  clo9253[1] = xs;
  clo9253[2] = x;
  clo9253[3] = kont8882;
  void *f8884 = encode_clo(clo9253);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f8884;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  list_fptr();
}

void append_fptr() // append
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8952 = arg_buffer[1];
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

  void *const kont8882 = apply_prim_car_1(vargs);
  void *const vargs8907 = apply_prim_cdr_1(vargs);
  void *const xs = apply_prim_car_1(vargs8907);
  void *const vargs8717 = apply_prim_cdr_1(vargs8907);

  // creating new closure instance
  void **clo9254 = alloc_clo(lam8950_fptr, 2);

  // setting env list
  clo9254[1] = xs;
  clo9254[2] = kont8882;
  void *f8885 = encode_clo(clo9254);

  // clo-app
  arg_buffer[1] = f8885;
  arg_buffer[2] = vargs8717;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8885))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8953_fptr() // lam8953
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8954 = arg_buffer[1];
  // reading env and args
  void *const xy8790 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8954);
  void *const kont8886 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = kont8886;
  arg_buffer[2] = xy8790;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8886))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void take_u45helper_fptr() // take-helper
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8955 = arg_buffer[1];
  // reading env and args
  void *const kont8886 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8788 = int9011;
  void *const id_8789 = apply_prim__u61_2(n, id_8788);

  // if-clause
  bool if_guard9255 = is_true(id_8789);
  if (if_guard9255) {

    // creating new closure instance
    void **clo9256 = alloc_clo(lam8953_fptr, 1);

    // setting env list
    clo9256[1] = kont8886;
    void *f8887 = encode_clo(clo9256);

    // clo-app
    arg_buffer[1] = reverse;
    arg_buffer[2] = f8887;
    arg_buffer[3] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    decoded_reverse();
  } else {
    void *const id_8791 = apply_prim_cdr_1(lst);
    void *const id_8792 = int9010;
    void *const id_8793 = apply_prim__u45_2(n, id_8792);
    void *const id_8794 = apply_prim_car_1(lst);
    void *const id_8795 = apply_prim_cons_2(id_8794, lst2);

    // clo-app
    arg_buffer[1] = take_u45helper;
    arg_buffer[2] = kont8886;
    arg_buffer[3] = id_8791;
    arg_buffer[4] = id_8793;
    arg_buffer[5] = id_8795;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_take_u45helper();
  }
}

void lam8956_fptr() // lam8956
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8957 = arg_buffer[1];
  // reading env and args
  void *const id_8796 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8957);
  void *const lst = decode_clo_array[3];
  void *const n = decode_clo_array[2];
  void *const kont8888 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = take_u45helper;
  arg_buffer[2] = kont8888;
  arg_buffer[3] = lst;
  arg_buffer[4] = n;
  arg_buffer[5] = id_8796;
  arg_buffer[0] = reinterpret_cast<void *>(5);
  decoded_take_u45helper();
}

void take_fptr() // take
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8958 = arg_buffer[1];
  // reading env and args
  void *const kont8888 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9257 = alloc_clo(lam8956_fptr, 3);

  // setting env list
  clo9257[1] = kont8888;
  clo9257[2] = n;
  clo9257[3] = lst;
  void *f8889 = encode_clo(clo9257);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f8889;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  list_fptr();
}

void lam8959_fptr() // lam8959
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8960 = arg_buffer[1];
  // reading env and args
  void *const id_8810 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8960);
  void *const kont8890 = decode_clo_array[4];
  void *const dist = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9258 = is_true(id_8810);
  if (if_guard9258) {
    void *const id_8811 = int9010;
    void *const id_8812 = apply_prim__u43_2(dist, id_8811);
    void *const id_8813 = apply_prim_cdr_1(placed);

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = kont8890;
    arg_buffer[3] = row;
    arg_buffer[4] = id_8812;
    arg_buffer[5] = id_8813;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_ok_u63();
  } else {
    void *const xy8814 = bool_f9004;

    // clo-app
    arg_buffer[1] = kont8890;
    arg_buffer[2] = xy8814;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8961_fptr() // lam8961
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8962 = arg_buffer[1];
  // reading env and args
  void *const id_8804 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8962);
  void *const kont8890 = decode_clo_array[4];
  void *const dist = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9259 = is_true(id_8804);
  if (if_guard9259) {
    void *const id_8805 = apply_prim_car_1(placed);
    void *const id_8806 = apply_prim__u45_2(row, dist);
    void *const id_8807 = apply_prim__u61_2(id_8805, id_8806);

    // creating new closure instance
    void **clo9260 = alloc_clo(lam8959_fptr, 4);

    // setting env list
    clo9260[1] = placed;
    clo9260[2] = row;
    clo9260[3] = dist;
    clo9260[4] = kont8890;
    void *f8891 = encode_clo(clo9260);

    // if-clause
    bool if_guard9261 = is_true(id_8807);
    if (if_guard9261) {
      void *const xy8808 = bool_f9004;

      // clo-app
      arg_buffer[1] = f8891;
      arg_buffer[2] = xy8808;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8891))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8809 = bool_t9006;

      // clo-app
      arg_buffer[1] = f8891;
      arg_buffer[2] = xy8809;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8891))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }

  } else {
    void *const xy8815 = bool_f9004;

    // clo-app
    arg_buffer[1] = kont8890;
    arg_buffer[2] = xy8815;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void ok_u63_fptr() // ok?
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8963 = arg_buffer[1];
  // reading env and args
  void *const kont8890 = arg_buffer[2];
  void *const row = arg_buffer[3];
  void *const dist = arg_buffer[4];
  void *const placed = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8797 = apply_prim_null_u63_1(placed);

  // if-clause
  bool if_guard9262 = is_true(id_8797);
  if (if_guard9262) {
    void *const xy8798 = bool_t9006;

    // clo-app
    arg_buffer[1] = kont8890;
    arg_buffer[2] = xy8798;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8799 = apply_prim_car_1(placed);
    void *const id_8800 = apply_prim__u43_2(row, dist);
    void *const id_8801 = apply_prim__u61_2(id_8799, id_8800);

    // creating new closure instance
    void **clo9263 = alloc_clo(lam8961_fptr, 4);

    // setting env list
    clo9263[1] = placed;
    clo9263[2] = row;
    clo9263[3] = dist;
    clo9263[4] = kont8890;
    void *f8892 = encode_clo(clo9263);

    // if-clause
    bool if_guard9264 = is_true(id_8801);
    if (if_guard9264) {
      void *const xy8802 = bool_f9004;

      // clo-app
      arg_buffer[1] = f8892;
      arg_buffer[2] = xy8802;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8803 = bool_t9006;

      // clo-app
      arg_buffer[1] = f8892;
      arg_buffer[2] = xy8803;
      arg_buffer[0] = reinterpret_cast<void *>(2);
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }
  }
}

void lam8964_fptr() // lam8964
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8965 = arg_buffer[1];
  // reading env and args
  void *const id_8835 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8965);
  void *const stack = decode_clo_array[5];
  void *const f8894 = decode_clo_array[4];
  void *const x = decode_clo_array[3];
  void *const z = decode_clo_array[2];
  void *const id_8834 = decode_clo_array[1];
  void *const id_8836 = apply_prim_car_1(x);
  void *const id_8837 = apply_prim_cons_2(id_8836, z);
  void *const id_8838 = apply_prim_list_3(id_8834, id_8835, id_8837);
  void *const id_8839 = apply_prim_cdr_1(stack);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8838, id_8839);
  arg_buffer[1] = f8894;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8894))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8966_fptr() // lam8966
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8967 = arg_buffer[1];
  // reading env and args
  void *const id_8834 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8967);
  void *const stack = decode_clo_array[4];
  void *const f8894 = decode_clo_array[3];
  void *const z = decode_clo_array[2];
  void *const x = decode_clo_array[1];

  // creating new closure instance
  void **clo9265 = alloc_clo(lam8964_fptr, 5);

  // setting env list
  clo9265[1] = id_8834;
  clo9265[2] = z;
  clo9265[3] = x;
  clo9265[4] = f8894;
  clo9265[5] = stack;
  void *f8895 = encode_clo(clo9265);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f8895;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  list_fptr();
}

void lam8968_fptr() // lam8968
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8969 = arg_buffer[1];
  // reading env and args
  void *const id_8841 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8969);
  void *const count = decode_clo_array[3];
  void *const id_8829 = decode_clo_array[2];
  void *const kont8893 = decode_clo_array[1];
  void *const id_8842 = apply_prim_cons_2(id_8829, id_8841);

  // clo-app
  arg_buffer[1] = q_u45helper;
  arg_buffer[2] = kont8893;
  arg_buffer[3] = id_8842;
  arg_buffer[4] = count;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_q_u45helper();
}

void lam8970_fptr() // lam8970
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8971 = arg_buffer[1];
  // reading env and args
  void *const id_8832 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8971);
  void *const stack = decode_clo_array[7];
  void *const z = decode_clo_array[6];
  void *const y = decode_clo_array[5];
  void *const x = decode_clo_array[4];
  void *const count = decode_clo_array[3];
  void *const id_8829 = decode_clo_array[2];
  void *const kont8893 = decode_clo_array[1];

  // creating new closure instance
  void **clo9266 = alloc_clo(lam8968_fptr, 3);

  // setting env list
  clo9266[1] = kont8893;
  clo9266[2] = id_8829;
  clo9266[3] = count;
  void *f8894 = encode_clo(clo9266);

  // if-clause
  bool if_guard9267 = is_true(id_8832);
  if (if_guard9267) {
    void *const id_8833 = apply_prim_cdr_1(x);

    // creating new closure instance
    void **clo9268 = alloc_clo(lam8966_fptr, 4);

    // setting env list
    clo9268[1] = x;
    clo9268[2] = z;
    clo9268[3] = f8894;
    clo9268[4] = stack;
    void *f8896 = encode_clo(clo9268);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f8896;
    arg_buffer[3] = id_8833;
    arg_buffer[4] = y;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_append();
  } else {
    void *const xy8840 = apply_prim_cdr_1(stack);

    // clo-app
    arg_buffer[1] = f8894;
    arg_buffer[2] = xy8840;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8894))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8972_fptr() // lam8972
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8973 = arg_buffer[1];
  // reading env and args
  void *const z = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8973);
  void *const stack = decode_clo_array[5];
  void *const y = decode_clo_array[4];
  void *const x = decode_clo_array[3];
  void *const count = decode_clo_array[2];
  void *const kont8893 = decode_clo_array[1];
  void *const id_8820 = apply_prim_null_u63_1(x);

  // if-clause
  bool if_guard9269 = is_true(id_8820);
  if (if_guard9269) {
    void *const id_8821 = apply_prim_null_u63_1(y);

    // if-clause
    bool if_guard9270 = is_true(id_8821);
    if (if_guard9270) {
      void *const id_8822 = apply_prim_cdr_1(stack);
      void *const id_8823 = int9010;
      void *const id_8824 = apply_prim__u43_2(count, id_8823);

      // clo-app
      arg_buffer[1] = q_u45helper;
      arg_buffer[2] = kont8893;
      arg_buffer[3] = id_8822;
      arg_buffer[4] = id_8824;
      arg_buffer[0] = reinterpret_cast<void *>(4);
      decoded_q_u45helper();
    } else {
      void *const id_8825 = apply_prim_cdr_1(stack);

      // clo-app
      arg_buffer[1] = q_u45helper;
      arg_buffer[2] = kont8893;
      arg_buffer[3] = id_8825;
      arg_buffer[4] = count;
      arg_buffer[0] = reinterpret_cast<void *>(4);
      decoded_q_u45helper();
    }

  } else {
    void *const id_8826 = apply_prim_cdr_1(x);
    void *const id_8827 = apply_prim_car_1(x);
    void *const id_8828 = apply_prim_cons_2(id_8827, y);
    void *const id_8829 = apply_prim_list_3(id_8826, id_8828, z);
    void *const id_8830 = apply_prim_car_1(x);
    void *const id_8831 = int9010;

    // creating new closure instance
    void **clo9271 = alloc_clo(lam8970_fptr, 7);

    // setting env list
    clo9271[1] = kont8893;
    clo9271[2] = id_8829;
    clo9271[3] = count;
    clo9271[4] = x;
    clo9271[5] = y;
    clo9271[6] = z;
    clo9271[7] = stack;
    void *f8897 = encode_clo(clo9271);

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = f8897;
    arg_buffer[3] = id_8830;
    arg_buffer[4] = id_8831;
    arg_buffer[5] = z;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    decoded_ok_u63();
  }
}

void lam8974_fptr() // lam8974
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8975 = arg_buffer[1];
  // reading env and args
  void *const y = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8975);
  void *const stack = decode_clo_array[5];
  void *const state = decode_clo_array[4];
  void *const x = decode_clo_array[3];
  void *const count = decode_clo_array[2];
  void *const kont8893 = decode_clo_array[1];

  // creating new closure instance
  void **clo9272 = alloc_clo(lam8972_fptr, 5);

  // setting env list
  clo9272[1] = kont8893;
  clo9272[2] = count;
  clo9272[3] = x;
  clo9272[4] = y;
  clo9272[5] = stack;
  void *f8898 = encode_clo(clo9272);

  void *const id_8818 = apply_prim_cdr_1(state);
  void *const id_8819 = apply_prim_cdr_1(id_8818);

  // clo-app
  arg_buffer[2] = apply_prim_car_1(id_8819);
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
  void *const _8976 = arg_buffer[1];
  // reading env and args
  void *const kont8893 = arg_buffer[2];
  void *const stack = arg_buffer[3];
  void *const count = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8816 = apply_prim_null_u63_1(stack);

  // if-clause
  bool if_guard9273 = is_true(id_8816);
  if (if_guard9273) {

    // clo-app
    arg_buffer[1] = kont8893;
    arg_buffer[2] = count;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const state = apply_prim_car_1(stack);
    void *const x = apply_prim_car_1(state);

    // creating new closure instance
    void **clo9274 = alloc_clo(lam8974_fptr, 5);

    // setting env list
    clo9274[1] = kont8893;
    clo9274[2] = count;
    clo9274[3] = x;
    clo9274[4] = state;
    clo9274[5] = stack;
    void *f8899 = encode_clo(clo9274);

    void *const id_8817 = apply_prim_cdr_1(state);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(id_8817);
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
  void *const _8977 = arg_buffer[1];
  // reading env and args
  void *const kont8900 = arg_buffer[2];
  void *const n = arg_buffer[3];
  void *const l = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8843 = int9011;
  void *const id_8844 = apply_prim__u61_2(n, id_8843);

  // if-clause
  bool if_guard9275 = is_true(id_8844);
  if (if_guard9275) {

    // clo-app
    arg_buffer[1] = kont8900;
    arg_buffer[2] = l;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8900))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8845 = int9010;
    void *const id_8846 = apply_prim__u45_2(n, id_8845);
    void *const id_8847 = apply_prim_cons_2(n, l);

    // clo-app
    arg_buffer[1] = iota1;
    arg_buffer[2] = kont8900;
    arg_buffer[3] = id_8846;
    arg_buffer[4] = id_8847;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    decoded_iota1();
  }
}

void lam8978_fptr() // lam8978
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8979 = arg_buffer[1];
  // reading env and args
  void *const id_8851 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8979);
  void *const id_8849 = decode_clo_array[3];
  void *const id_8850 = decode_clo_array[2];
  void *const kont8901 = decode_clo_array[1];
  void *const id_8852 = apply_prim_list_3(id_8849, id_8850, id_8851);
  void *const id_8853 = apply_prim_list_1(id_8852);
  void *const id_8854 = int9011;

  // clo-app
  arg_buffer[1] = q_u45helper;
  arg_buffer[2] = kont8901;
  arg_buffer[3] = id_8853;
  arg_buffer[4] = id_8854;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_q_u45helper();
}

void lam8980_fptr() // lam8980
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8981 = arg_buffer[1];
  // reading env and args
  void *const id_8850 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8981);
  void *const id_8849 = decode_clo_array[2];
  void *const kont8901 = decode_clo_array[1];

  // creating new closure instance
  void **clo9276 = alloc_clo(lam8978_fptr, 3);

  // setting env list
  clo9276[1] = kont8901;
  clo9276[2] = id_8850;
  clo9276[3] = id_8849;
  void *f8902 = encode_clo(clo9276);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f8902;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  list_fptr();
}

void lam8982_fptr() // lam8982
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8983 = arg_buffer[1];
  // reading env and args
  void *const id_8849 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8983);
  void *const kont8901 = decode_clo_array[1];

  // creating new closure instance
  void **clo9277 = alloc_clo(lam8980_fptr, 2);

  // setting env list
  clo9277[1] = kont8901;
  clo9277[2] = id_8849;
  void *f8903 = encode_clo(clo9277);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f8903;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  list_fptr();
}

void lam8984_fptr() // lam8984
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8985 = arg_buffer[1];
  // reading env and args
  void *const id_8848 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8985);
  void *const kont8901 = decode_clo_array[2];
  void *const n = decode_clo_array[1];

  // creating new closure instance
  void **clo9278 = alloc_clo(lam8982_fptr, 1);

  // setting env list
  clo9278[1] = kont8901;
  void *f8904 = encode_clo(clo9278);

  // clo-app
  arg_buffer[1] = iota1;
  arg_buffer[2] = f8904;
  arg_buffer[3] = n;
  arg_buffer[4] = id_8848;
  arg_buffer[0] = reinterpret_cast<void *>(4);
  decoded_iota1();
}

void nqueens_fptr() // nqueens
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8986 = arg_buffer[1];
  // reading env and args
  void *const kont8901 = arg_buffer[2];
  void *const n = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9279 = alloc_clo(lam8984_fptr, 2);

  // setting env list
  clo9279[1] = n;
  clo9279[2] = kont8901;
  void *f8905 = encode_clo(clo9279);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f8905;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  list_fptr();
}

void brouhaha_main_fptr() // brouhaha_main
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8987 = arg_buffer[1];
  // reading env and args
  void *const kont8906 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8855 = int9012;

  // clo-app
  arg_buffer[1] = nqueens;
  arg_buffer[2] = kont8906;
  arg_buffer[3] = id_8855;
  arg_buffer[0] = reinterpret_cast<void *>(3);
  decoded_nqueens();
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int9011 = reinterpret_cast<void *>(encode_int(0));
  bool_t9006 = encode_bool(true);
  int9010 = reinterpret_cast<void *>(encode_int(1));
  bool_f9004 = encode_bool(false);
  int8991 = reinterpret_cast<void *>(encode_int(2));
  int9012 = reinterpret_cast<void *>(encode_int(14));

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
  arg_buffer[0] = 0;
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  decoded_brouhaha_main();
}
