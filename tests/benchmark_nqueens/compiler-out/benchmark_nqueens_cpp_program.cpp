#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
int int8993;
void *bool_t8988;
int int8992;
void *bool_f8986;
int int8972;
int int8994;

// declaring global integer variable
int int8995;
int int8996;
int int8997;
int int8998;
int int8999;
int int9000;
int int9001;

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

void _u43_fptr() // +
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9002 = prim_car(lst);
    void *const lst9005 = prim_cdr(lst);
    void *const x9003 = apply_prim__u43(lst9005);
    arg_buffer[1] = kont9002;
    arg_buffer[2] = x9003;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9002))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9002 = arg_buffer[2];
    void *const x9003 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont9002;
    arg_buffer[2] = x9003;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9002))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u45_fptr() // -
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9006 = prim_car(lst);
    void *const lst9009 = prim_cdr(lst);
    void *const x9007 = apply_prim__u45(lst9009);
    arg_buffer[1] = kont9006;
    arg_buffer[2] = x9007;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9006))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9006 = arg_buffer[2];
    void *const x9007 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont9006;
    arg_buffer[2] = x9007;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9006))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u42_fptr() // *
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9010 = prim_car(lst);
    void *const lst9013 = prim_cdr(lst);
    void *const x9011 = apply_prim__u42(lst9013);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9010))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9010 = arg_buffer[2];
    void *const x9011 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9010))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u47_fptr() // /
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9014 = prim_car(lst);
    void *const lst9017 = prim_cdr(lst);
    void *const x9015 = apply_prim__u47(lst9017);
    arg_buffer[1] = kont9014;
    arg_buffer[2] = x9015;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9014))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9014 = arg_buffer[2];
    void *const x9015 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont9014;
    arg_buffer[2] = x9015;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9014))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u61_fptr() // =
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9018 = prim_car(lst);
    void *const lst9021 = prim_cdr(lst);
    void *const x9019 = apply_prim__u61(lst9021);
    arg_buffer[1] = kont9018;
    arg_buffer[2] = x9019;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9018))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9018 = arg_buffer[2];
    void *const x9019 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont9018;
    arg_buffer[2] = x9019;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9018))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u62_fptr() // >
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9022 = prim_car(lst);
    void *const lst9025 = prim_cdr(lst);
    void *const x9023 = apply_prim__u62(lst9025);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9022))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9022 = arg_buffer[2];
    void *const x9023 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9022))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u60_fptr() // <
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9026 = prim_car(lst);
    void *const lst9029 = prim_cdr(lst);
    void *const x9027 = apply_prim__u60(lst9029);
    arg_buffer[1] = kont9026;
    arg_buffer[2] = x9027;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9026))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9026 = arg_buffer[2];
    void *const x9027 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont9026;
    arg_buffer[2] = x9027;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9026))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u60_u61_fptr() // <=
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9030 = prim_car(lst);
    void *const lst9033 = prim_cdr(lst);
    void *const x9031 = apply_prim__u60_u61(lst9033);
    arg_buffer[1] = kont9030;
    arg_buffer[2] = x9031;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9030))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9030 = arg_buffer[2];
    void *const x9031 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont9030;
    arg_buffer[2] = x9031;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9030))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void _u62_u61_fptr() // >=
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9034 = prim_car(lst);
    void *const lst9037 = prim_cdr(lst);
    void *const x9035 = apply_prim__u62_u61(lst9037);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9034))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9034 = arg_buffer[2];
    void *const x9035 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9034))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void modulo_fptr() // modulo
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9038 = prim_car(lst);
    void *const lst9041 = prim_cdr(lst);
    void *const x9039 = apply_prim_modulo(lst9041);
    arg_buffer[1] = kont9038;
    arg_buffer[2] = x9039;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9038))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9038 = arg_buffer[2];
    void *const x9039 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont9038;
    arg_buffer[2] = x9039;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9038))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void null_u63_fptr() // null?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9042 = prim_car(lst);
    void *const lst9045 = prim_cdr(lst);
    void *const x9043 = apply_prim_null_u63(lst9045);
    arg_buffer[1] = kont9042;
    arg_buffer[2] = x9043;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9042))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9042 = arg_buffer[2];
    void *const x9043 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont9042;
    arg_buffer[2] = x9043;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9042))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void equal_u63_fptr() // equal?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9046 = prim_car(lst);
    void *const lst9049 = prim_cdr(lst);
    void *const x9047 = apply_prim_equal_u63(lst9049);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9046))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9046 = arg_buffer[2];
    void *const x9047 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9046))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void eq_u63_fptr() // eq?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9050 = prim_car(lst);
    void *const lst9053 = prim_cdr(lst);
    void *const x9051 = apply_prim_eq_u63(lst9053);
    arg_buffer[1] = kont9050;
    arg_buffer[2] = x9051;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9050))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9050 = arg_buffer[2];
    void *const x9051 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont9050;
    arg_buffer[2] = x9051;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9050))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void cons_fptr() // cons
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9054 = prim_car(lst);
    void *const lst9057 = prim_cdr(lst);
    void *const x9055 = apply_prim_cons(lst9057);
    arg_buffer[1] = kont9054;
    arg_buffer[2] = x9055;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9054))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9054 = arg_buffer[2];
    void *const x9055 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont9054;
    arg_buffer[2] = x9055;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9054))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void car_fptr() // car
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9058 = prim_car(lst);
    void *const lst9061 = prim_cdr(lst);
    void *const x9059 = apply_prim_car(lst9061);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9058))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9058 = arg_buffer[2];
    void *const x9059 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9058))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void cdr_fptr() // cdr
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9062 = prim_car(lst);
    void *const lst9065 = prim_cdr(lst);
    void *const x9063 = apply_prim_cdr(lst9065);
    arg_buffer[1] = kont9062;
    arg_buffer[2] = x9063;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9062))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9062 = arg_buffer[2];
    void *const x9063 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont9062;
    arg_buffer[2] = x9063;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9062))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void float_u45_u62int_fptr() // float->int
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9066 = prim_car(lst);
    void *const lst9069 = prim_cdr(lst);
    void *const x9067 = apply_prim_float_u45_u62int(lst9069);
    arg_buffer[1] = kont9066;
    arg_buffer[2] = x9067;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9066))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9066 = arg_buffer[2];
    void *const x9067 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont9066;
    arg_buffer[2] = x9067;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9066))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void int_u45_u62float_fptr() // int->float
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9070 = prim_car(lst);
    void *const lst9073 = prim_cdr(lst);
    void *const x9071 = apply_prim_int_u45_u62float(lst9073);
    arg_buffer[1] = kont9070;
    arg_buffer[2] = x9071;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9070))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9070 = arg_buffer[2];
    void *const x9071 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont9070;
    arg_buffer[2] = x9071;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9070))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_fptr() // hash
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9074 = prim_car(lst);
    void *const lst9077 = prim_cdr(lst);
    void *const x9075 = apply_prim_hash(lst9077);
    arg_buffer[1] = kont9074;
    arg_buffer[2] = x9075;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9074))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9074 = arg_buffer[2];
    void *const x9075 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont9074;
    arg_buffer[2] = x9075;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9074))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45ref_fptr() // hash-ref
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9078 = prim_car(lst);
    void *const lst9081 = prim_cdr(lst);
    void *const x9079 = apply_prim_hash_u45ref(lst9081);
    arg_buffer[1] = kont9078;
    arg_buffer[2] = x9079;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9078 = arg_buffer[2];
    void *const x9079 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont9078;
    arg_buffer[2] = x9079;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45set_fptr() // hash-set
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9082 = prim_car(lst);
    void *const lst9085 = prim_cdr(lst);
    void *const x9083 = apply_prim_hash_u45set(lst9085);
    arg_buffer[1] = kont9082;
    arg_buffer[2] = x9083;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9082))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9082 = arg_buffer[2];
    void *const x9083 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont9082;
    arg_buffer[2] = x9083;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9082))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45keys_fptr() // hash-keys
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9086 = prim_car(lst);
    void *const lst9089 = prim_cdr(lst);
    void *const x9087 = apply_prim_hash_u45keys(lst9089);
    arg_buffer[1] = kont9086;
    arg_buffer[2] = x9087;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9086))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9086 = arg_buffer[2];
    void *const x9087 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont9086;
    arg_buffer[2] = x9087;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9086))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45has_u45key_u63_fptr() // hash-has-key?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9090 = prim_car(lst);
    void *const lst9093 = prim_cdr(lst);
    void *const x9091 = apply_prim_hash_u45has_u45key_u63(lst9093);
    arg_buffer[1] = kont9090;
    arg_buffer[2] = x9091;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9090))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9090 = arg_buffer[2];
    void *const x9091 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont9090;
    arg_buffer[2] = x9091;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9090))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void hash_u45count_fptr() // hash-count
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9094 = prim_car(lst);
    void *const lst9097 = prim_cdr(lst);
    void *const x9095 = apply_prim_hash_u45count(lst9097);
    arg_buffer[1] = kont9094;
    arg_buffer[2] = x9095;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9094))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9094 = arg_buffer[2];
    void *const x9095 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont9094;
    arg_buffer[2] = x9095;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9094))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_fptr() // set
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9098 = prim_car(lst);
    void *const lst9101 = prim_cdr(lst);
    void *const x9099 = apply_prim_set(lst9101);
    arg_buffer[1] = kont9098;
    arg_buffer[2] = x9099;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9098))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9098 = arg_buffer[2];
    void *const x9099 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont9098;
    arg_buffer[2] = x9099;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9098))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45_u62list_fptr() // set->list
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9102 = prim_car(lst);
    void *const lst9105 = prim_cdr(lst);
    void *const x9103 = apply_prim_set_u45_u62list(lst9105);
    arg_buffer[1] = kont9102;
    arg_buffer[2] = x9103;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9102))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9102 = arg_buffer[2];
    void *const x9103 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9102;
    arg_buffer[2] = x9103;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9102))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void list_u45_u62set_fptr() // list->set
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9106 = prim_car(lst);
    void *const lst9109 = prim_cdr(lst);
    void *const x9107 = apply_prim_list_u45_u62set(lst9109);
    arg_buffer[1] = kont9106;
    arg_buffer[2] = x9107;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9106))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9106 = arg_buffer[2];
    void *const x9107 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont9106;
    arg_buffer[2] = x9107;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9106))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45add_fptr() // set-add
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9110 = prim_car(lst);
    void *const lst9113 = prim_cdr(lst);
    void *const x9111 = apply_prim_set_u45add(lst9113);
    arg_buffer[1] = kont9110;
    arg_buffer[2] = x9111;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9110))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9110 = arg_buffer[2];
    void *const x9111 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont9110;
    arg_buffer[2] = x9111;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9110))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45member_u63_fptr() // set-member?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9114 = prim_car(lst);
    void *const lst9117 = prim_cdr(lst);
    void *const x9115 = apply_prim_set_u45member_u63(lst9117);
    arg_buffer[1] = kont9114;
    arg_buffer[2] = x9115;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9114))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9114 = arg_buffer[2];
    void *const x9115 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9114;
    arg_buffer[2] = x9115;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9114))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45remove_fptr() // set-remove
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9118 = prim_car(lst);
    void *const lst9121 = prim_cdr(lst);
    void *const x9119 = apply_prim_set_u45remove(lst9121);
    arg_buffer[1] = kont9118;
    arg_buffer[2] = x9119;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9118))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9118 = arg_buffer[2];
    void *const x9119 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9118;
    arg_buffer[2] = x9119;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9118))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void set_u45count_fptr() // set-count
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9122 = prim_car(lst);
    void *const lst9125 = prim_cdr(lst);
    void *const x9123 = apply_prim_set_u45count(lst9125);
    arg_buffer[1] = kont9122;
    arg_buffer[2] = x9123;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9122))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9122 = arg_buffer[2];
    void *const x9123 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9122;
    arg_buffer[2] = x9123;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9122))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u63_fptr() // string?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9126 = prim_car(lst);
    void *const lst9129 = prim_cdr(lst);
    void *const x9127 = apply_prim_string_u63(lst9129);
    arg_buffer[1] = kont9126;
    arg_buffer[2] = x9127;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9126))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9126 = arg_buffer[2];
    void *const x9127 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9126;
    arg_buffer[2] = x9127;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9126))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45length_fptr() // string-length
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9130 = prim_car(lst);
    void *const lst9133 = prim_cdr(lst);
    void *const x9131 = apply_prim_string_u45length(lst9133);
    arg_buffer[1] = kont9130;
    arg_buffer[2] = x9131;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9130))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9130 = arg_buffer[2];
    void *const x9131 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9130;
    arg_buffer[2] = x9131;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9130))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45ref_fptr() // string-ref
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9134 = prim_car(lst);
    void *const lst9137 = prim_cdr(lst);
    void *const x9135 = apply_prim_string_u45ref(lst9137);
    arg_buffer[1] = kont9134;
    arg_buffer[2] = x9135;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9134))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9134 = arg_buffer[2];
    void *const x9135 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9134;
    arg_buffer[2] = x9135;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9134))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void substring_fptr() // substring
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9138 = prim_car(lst);
    void *const lst9141 = prim_cdr(lst);
    void *const x9139 = apply_prim_substring(lst9141);
    arg_buffer[1] = kont9138;
    arg_buffer[2] = x9139;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9138))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9138 = arg_buffer[2];
    void *const x9139 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9138;
    arg_buffer[2] = x9139;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9138))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45append_fptr() // string-append
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9142 = prim_car(lst);
    void *const lst9145 = prim_cdr(lst);
    void *const x9143 = apply_prim_string_u45append(lst9145);
    arg_buffer[1] = kont9142;
    arg_buffer[2] = x9143;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9142))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9142 = arg_buffer[2];
    void *const x9143 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9142;
    arg_buffer[2] = x9143;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9142))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void string_u45_u62list_fptr() // string->list
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9146 = prim_car(lst);
    void *const lst9149 = prim_cdr(lst);
    void *const x9147 = apply_prim_string_u45_u62list(lst9149);
    arg_buffer[1] = kont9146;
    arg_buffer[2] = x9147;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9146))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9146 = arg_buffer[2];
    void *const x9147 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9146;
    arg_buffer[2] = x9147;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9146))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void exact_u45floor_fptr() // exact-floor
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9150 = prim_car(lst);
    void *const lst9153 = prim_cdr(lst);
    void *const x9151 = apply_prim_exact_u45floor(lst9153);
    arg_buffer[1] = kont9150;
    arg_buffer[2] = x9151;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9150))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9150 = arg_buffer[2];
    void *const x9151 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9150;
    arg_buffer[2] = x9151;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9150))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void exact_u45ceiling_fptr() // exact-ceiling
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9154 = prim_car(lst);
    void *const lst9157 = prim_cdr(lst);
    void *const x9155 = apply_prim_exact_u45ceiling(lst9157);
    arg_buffer[1] = kont9154;
    arg_buffer[2] = x9155;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9154))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9154 = arg_buffer[2];
    void *const x9155 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9154;
    arg_buffer[2] = x9155;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9154))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void exact_u45round_fptr() // exact-round
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9158 = prim_car(lst);
    void *const lst9161 = prim_cdr(lst);
    void *const x9159 = apply_prim_exact_u45round(lst9161);
    arg_buffer[1] = kont9158;
    arg_buffer[2] = x9159;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9158))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9158 = arg_buffer[2];
    void *const x9159 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9158;
    arg_buffer[2] = x9159;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9158))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void abs_fptr() // abs
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9162 = prim_car(lst);
    void *const lst9165 = prim_cdr(lst);
    void *const x9163 = apply_prim_abs(lst9165);
    arg_buffer[1] = kont9162;
    arg_buffer[2] = x9163;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9162))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9162 = arg_buffer[2];
    void *const x9163 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9162;
    arg_buffer[2] = x9163;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9162))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void max_fptr() // max
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9166 = prim_car(lst);
    void *const lst9169 = prim_cdr(lst);
    void *const x9167 = apply_prim_max(lst9169);
    arg_buffer[1] = kont9166;
    arg_buffer[2] = x9167;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9166))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9166 = arg_buffer[2];
    void *const x9167 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9166;
    arg_buffer[2] = x9167;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9166))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void min_fptr() // min
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9170 = prim_car(lst);
    void *const lst9173 = prim_cdr(lst);
    void *const x9171 = apply_prim_min(lst9173);
    arg_buffer[1] = kont9170;
    arg_buffer[2] = x9171;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9170))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9170 = arg_buffer[2];
    void *const x9171 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9170;
    arg_buffer[2] = x9171;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9170))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void expt_fptr() // expt
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9174 = prim_car(lst);
    void *const lst9177 = prim_cdr(lst);
    void *const x9175 = apply_prim_expt(lst9177);
    arg_buffer[1] = kont9174;
    arg_buffer[2] = x9175;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9174))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9174 = arg_buffer[2];
    void *const x9175 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9174;
    arg_buffer[2] = x9175;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9174))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void sqrt_fptr() // sqrt
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9178 = prim_car(lst);
    void *const lst9181 = prim_cdr(lst);
    void *const x9179 = apply_prim_sqrt(lst9181);
    arg_buffer[1] = kont9178;
    arg_buffer[2] = x9179;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9178))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9178 = arg_buffer[2];
    void *const x9179 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9178;
    arg_buffer[2] = x9179;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9178))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void remainder_fptr() // remainder
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9182 = prim_car(lst);
    void *const lst9185 = prim_cdr(lst);
    void *const x9183 = apply_prim_remainder(lst9185);
    arg_buffer[1] = kont9182;
    arg_buffer[2] = x9183;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9182))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9182 = arg_buffer[2];
    void *const x9183 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9182;
    arg_buffer[2] = x9183;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9182))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void quotient_fptr() // quotient
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9186 = prim_car(lst);
    void *const lst9189 = prim_cdr(lst);
    void *const x9187 = apply_prim_quotient(lst9189);
    arg_buffer[1] = kont9186;
    arg_buffer[2] = x9187;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9186 = arg_buffer[2];
    void *const x9187 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9186;
    arg_buffer[2] = x9187;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void random_fptr() // random
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9190 = prim_car(lst);
    void *const lst9193 = prim_cdr(lst);
    void *const x9191 = apply_prim_random(lst9193);
    arg_buffer[1] = kont9190;
    arg_buffer[2] = x9191;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9190))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9190 = arg_buffer[2];
    void *const x9191 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9190;
    arg_buffer[2] = x9191;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9190))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void symbol_u63_fptr() // symbol?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9194 = prim_car(lst);
    void *const lst9197 = prim_cdr(lst);
    void *const x9195 = apply_prim_symbol_u63(lst9197);
    arg_buffer[1] = kont9194;
    arg_buffer[2] = x9195;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9194))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9194 = arg_buffer[2];
    void *const x9195 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9194;
    arg_buffer[2] = x9195;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9194))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void pair_u63_fptr() // pair?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9198 = prim_car(lst);
    void *const lst9201 = prim_cdr(lst);
    void *const x9199 = apply_prim_pair_u63(lst9201);
    arg_buffer[1] = kont9198;
    arg_buffer[2] = x9199;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9198))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9198 = arg_buffer[2];
    void *const x9199 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9198;
    arg_buffer[2] = x9199;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9198))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void positive_u63_fptr() // positive?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9202 = prim_car(lst);
    void *const lst9205 = prim_cdr(lst);
    void *const x9203 = apply_prim_positive_u63(lst9205);
    arg_buffer[1] = kont9202;
    arg_buffer[2] = x9203;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9202))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9202 = arg_buffer[2];
    void *const x9203 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9202;
    arg_buffer[2] = x9203;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9202))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void negative_u63_fptr() // negative?
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9206 = prim_car(lst);
    void *const lst9209 = prim_cdr(lst);
    void *const x9207 = apply_prim_negative_u63(lst9209);
    arg_buffer[1] = kont9206;
    arg_buffer[2] = x9207;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9206))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9206 = arg_buffer[2];
    void *const x9207 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9206;
    arg_buffer[2] = x9207;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9206))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void list_fptr() // list
{

  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9210 = prim_car(lst);
    void *const lst9213 = prim_cdr(lst);
    void *const x9211 = apply_prim_list(lst9213);
    arg_buffer[1] = kont9210;
    arg_buffer[2] = x9211;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9210))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9210 = arg_buffer[2];
    void *const x9211 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9210;
    arg_buffer[2] = x9211;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9210))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void even_u63_fptr() // even?
{
  // reading env and args
  void *const kont8861 = arg_buffer[2];
  void *const x = arg_buffer[3];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8719 = reinterpret_cast<void *>(encode_int(int8993));
  void *const id_8720 = reinterpret_cast<void *>(encode_int(int8972));
  void *const id_8721 = apply_prim_modulo_2(x, id_8720);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8719, id_8721);
  arg_buffer[1] = kont8861;
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void odd_u63_fptr() // odd?
{
  // reading env and args
  void *const kont8862 = arg_buffer[2];
  void *const x = arg_buffer[3];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8722 = reinterpret_cast<void *>(encode_int(int8992));
  void *const id_8723 = reinterpret_cast<void *>(encode_int(int8972));
  void *const id_8724 = apply_prim_modulo_2(x, id_8723);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8722, id_8724);
  arg_buffer[1] = kont8862;
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void list_u45ref_fptr() // list-ref
{
  // reading env and args
  void *const kont8863 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8725 = reinterpret_cast<void *>(encode_int(int8993));
  void *const id_8726 = apply_prim__u61_2(id_8725, n);

  // if-clause
  bool if_guard9214 = is_true(id_8726);
  if (if_guard9214) {
    void *const xy8727 = apply_prim_car_1(lst);

    // clo-app
    arg_buffer[1] = kont8863;
    arg_buffer[2] = xy8727;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8728 = apply_prim_cdr_1(lst);
    void *const id_8729 = reinterpret_cast<void *>(encode_int(int8992));
    void *const id_8730 = apply_prim__u45_2(n, id_8729);

    // clo-app
    arg_buffer[1] = list_u45ref;
    arg_buffer[2] = kont8863;
    arg_buffer[3] = id_8728;
    arg_buffer[4] = id_8730;
    numArgs = int8996;

    list_u45ref_fptr();
  }
}

void lam8908_fptr() // lam8908
{
  // reading env
  void *const env8909 = arg_buffer[1];
  // reading env and args
  void *const id_8734 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8909);
  void *const lst = decode_clo_array[3];
  void *const kont8864 = decode_clo_array[2];
  void *const item = decode_clo_array[1];

  // if-clause
  bool if_guard9215 = is_true(id_8734);
  if (if_guard9215) {
    void *const xy8735 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8864;
    arg_buffer[2] = xy8735;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8736 = apply_prim_car_1(lst);
    void *const id_8737 = apply_prim_equal_u63_2(item, id_8736);

    // if-clause
    bool if_guard9216 = is_true(id_8737);
    if (if_guard9216) {

      // clo-app
      arg_buffer[1] = kont8864;
      arg_buffer[2] = lst;
      numArgs = int8972;

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
      numArgs = int8996;

      member_fptr();
    }
  }
}

void member_fptr() // member
{
  // reading env and args
  void *const kont8864 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8731 = apply_prim_null_u63_1(item);

  // creating new closure instance
  void **clo9217 = alloc_clo(lam8908_fptr, 3);

  // setting env list
  clo9217[1] = item;
  clo9217[2] = kont8864;
  clo9217[3] = lst;
  void *f8865 = encode_clo(clo9217);

  // if-clause
  bool if_guard9218 = is_true(id_8731);
  if (if_guard9218) {
    void *const xy8732 = apply_prim_null_u63_1(item);

    // clo-app
    arg_buffer[1] = f8865;
    arg_buffer[2] = xy8732;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8865))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const xy8733 = apply_prim_null_u63_1(lst);

    // clo-app
    arg_buffer[1] = f8865;
    arg_buffer[2] = xy8733;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8865))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void member_u63_fptr() // member?
{
  // reading env and args
  void *const kont8866 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8739 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9219 = is_true(id_8739);
  if (if_guard9219) {
    void *const xy8740 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8866;
    arg_buffer[2] = xy8740;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8741 = apply_prim_car_1(lst);
    void *const id_8742 = apply_prim_equal_u63_2(id_8741, x);

    // if-clause
    bool if_guard9220 = is_true(id_8742);
    if (if_guard9220) {
      void *const xy8743 = bool_t8988;

      // clo-app
      arg_buffer[1] = kont8866;
      arg_buffer[2] = xy8743;
      numArgs = int8972;

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
      numArgs = int8996;

      member_u63_fptr();
    }
  }
}

void lam8912_fptr() // lam8912
{
  // reading env
  void *const env8913 = arg_buffer[1];
  // reading env and args
  void *const id_8749 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8913);
  void *const id_8747 = decode_clo_array[2];
  void *const kont8867 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(id_8747, id_8749);
  arg_buffer[1] = kont8867;
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void length_fptr() // length
{
  // reading env and args
  void *const kont8867 = arg_buffer[2];
  void *const lst = arg_buffer[3];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8745 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9221 = is_true(id_8745);
  if (if_guard9221) {
    void *const xy8746 = reinterpret_cast<void *>(encode_int(int8993));

    // clo-app
    arg_buffer[1] = kont8867;
    arg_buffer[2] = xy8746;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8747 = reinterpret_cast<void *>(encode_int(int8992));
    void *const id_8748 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9222 = alloc_clo(lam8912_fptr, 2);

    // setting env list
    clo9222[1] = kont8867;
    clo9222[2] = id_8747;
    void *f8868 = encode_clo(clo9222);

    // clo-app
    arg_buffer[1] = length;
    arg_buffer[2] = f8868;
    arg_buffer[3] = id_8748;
    numArgs = int8995;

    length_fptr();
  }
}

void lam8915_fptr() // lam8915
{
  // reading env
  void *const env8916 = arg_buffer[1];
  // reading env and args
  void *const id_8755 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8916);
  void *const id_8753 = decode_clo_array[2];
  void *const kont8869 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8753, id_8755);
  arg_buffer[1] = kont8869;
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8869))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8917_fptr() // lam8917
{
  // reading env
  void *const env8918 = arg_buffer[1];
  // reading env and args
  void *const id_8753 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8918);
  void *const lst = decode_clo_array[3];
  void *const kont8869 = decode_clo_array[2];
  void *const proc = decode_clo_array[1];
  void *const id_8754 = apply_prim_cdr_1(lst);

  // creating new closure instance
  void **clo9223 = alloc_clo(lam8915_fptr, 2);

  // setting env list
  clo9223[1] = kont8869;
  clo9223[2] = id_8753;
  void *f8870 = encode_clo(clo9223);

  // clo-app
  arg_buffer[1] = map;
  arg_buffer[2] = f8870;
  arg_buffer[3] = proc;
  arg_buffer[4] = id_8754;
  numArgs = int8996;

  map_fptr();
}

void map_fptr() // map
{
  // reading env and args
  void *const kont8869 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8750 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9224 = is_true(id_8750);
  if (if_guard9224) {
    void *const xy8751 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8869;
    arg_buffer[2] = xy8751;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8869))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8752 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9225 = alloc_clo(lam8917_fptr, 3);

    // setting env list
    clo9225[1] = proc;
    clo9225[2] = kont8869;
    clo9225[3] = lst;
    void *f8871 = encode_clo(clo9225);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8871;
    arg_buffer[3] = id_8752;
    numArgs = int8995;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8920_fptr() // lam8920
{
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
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8922_fptr() // lam8922
{
  // reading env
  void *const env8923 = arg_buffer[1];
  // reading env and args
  void *const id_8759 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8923);
  void *const lst = decode_clo_array[3];
  void *const op = decode_clo_array[2];
  void *const kont8872 = decode_clo_array[1];

  // if-clause
  bool if_guard9226 = is_true(id_8759);
  if (if_guard9226) {
    void *const id_8760 = apply_prim_car_1(lst);
    void *const id_8761 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9227 = alloc_clo(lam8920_fptr, 2);

    // setting env list
    clo9227[1] = kont8872;
    clo9227[2] = id_8760;
    void *f8873 = encode_clo(clo9227);

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = f8873;
    arg_buffer[3] = op;
    arg_buffer[4] = id_8761;
    numArgs = int8996;

    filter_fptr();
  } else {
    void *const id_8763 = apply_prim_cdr_1(lst);

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = kont8872;
    arg_buffer[3] = op;
    arg_buffer[4] = id_8763;
    numArgs = int8996;

    filter_fptr();
  }
}

void filter_fptr() // filter
{
  // reading env and args
  void *const kont8872 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8756 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9228 = is_true(id_8756);
  if (if_guard9228) {
    void *const xy8757 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8872;
    arg_buffer[2] = xy8757;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8758 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9229 = alloc_clo(lam8922_fptr, 3);

    // setting env list
    clo9229[1] = kont8872;
    clo9229[2] = op;
    clo9229[3] = lst;
    void *f8874 = encode_clo(clo9229);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8874;
    arg_buffer[3] = id_8758;
    numArgs = int8995;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void drop_fptr() // drop
{
  // reading env and args
  void *const kont8875 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8764 = reinterpret_cast<void *>(encode_int(int8993));
  void *const id_8765 = apply_prim__u61_2(n, id_8764);

  // if-clause
  bool if_guard9230 = is_true(id_8765);
  if (if_guard9230) {

    // clo-app
    arg_buffer[1] = kont8875;
    arg_buffer[2] = lst;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8875))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8766 = apply_prim_cdr_1(lst);
    void *const id_8767 = reinterpret_cast<void *>(encode_int(int8992));
    void *const id_8768 = apply_prim__u45_2(n, id_8767);

    // clo-app
    arg_buffer[1] = drop;
    arg_buffer[2] = kont8875;
    arg_buffer[3] = id_8766;
    arg_buffer[4] = id_8768;
    numArgs = int8996;

    drop_fptr();
  }
}

void lam8926_fptr() // lam8926
{
  // reading env
  void *const env8927 = arg_buffer[1];
  // reading env and args
  void *const id_8771 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8927);
  void *const kont8876 = decode_clo_array[3];
  void *const lst = decode_clo_array[2];
  void *const fun = decode_clo_array[1];
  void *const id_8772 = apply_prim_cdr_1(lst);

  // clo-app
  arg_buffer[1] = foldl;
  arg_buffer[2] = kont8876;
  arg_buffer[3] = fun;
  arg_buffer[4] = id_8771;
  arg_buffer[5] = id_8772;
  numArgs = int8997;

  foldl_fptr();
}

void foldl_fptr() // foldl
{
  // reading env and args
  void *const kont8876 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8769 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9231 = is_true(id_8769);
  if (if_guard9231) {

    // clo-app
    arg_buffer[1] = kont8876;
    arg_buffer[2] = acc;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8876))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8770 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9232 = alloc_clo(lam8926_fptr, 3);

    // setting env list
    clo9232[1] = fun;
    clo9232[2] = lst;
    clo9232[3] = kont8876;
    void *f8877 = encode_clo(clo9232);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8877;
    arg_buffer[3] = id_8770;
    arg_buffer[4] = acc;
    numArgs = int8996;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8929_fptr() // lam8929
{
  // reading env
  void *const env8930 = arg_buffer[1];
  // reading env and args
  void *const id_8776 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8930);
  void *const kont8878 = decode_clo_array[3];
  void *const fun = decode_clo_array[2];
  void *const id_8774 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = fun;
  arg_buffer[2] = kont8878;
  arg_buffer[3] = id_8774;
  arg_buffer[4] = id_8776;
  numArgs = int8996;

  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void foldr_fptr() // foldr
{
  // reading env and args
  void *const kont8878 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8773 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9233 = is_true(id_8773);
  if (if_guard9233) {

    // clo-app
    arg_buffer[1] = kont8878;
    arg_buffer[2] = acc;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8774 = apply_prim_car_1(lst);
    void *const id_8775 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9234 = alloc_clo(lam8929_fptr, 3);

    // setting env list
    clo9234[1] = id_8774;
    clo9234[2] = fun;
    clo9234[3] = kont8878;
    void *f8879 = encode_clo(clo9234);

    // clo-app
    arg_buffer[1] = foldr;
    arg_buffer[2] = f8879;
    arg_buffer[3] = fun;
    arg_buffer[4] = acc;
    arg_buffer[5] = id_8775;
    numArgs = int8997;

    foldr_fptr();
  }
}

void reverse_u45helper_fptr() // reverse-helper
{
  // reading env and args
  void *const kont8880 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8777 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9235 = is_true(id_8777);
  if (if_guard9235) {

    // clo-app
    arg_buffer[1] = kont8880;
    arg_buffer[2] = lst2;
    numArgs = int8972;

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
    numArgs = int8996;

    reverse_u45helper_fptr();
  }
}

void reverse_fptr() // reverse
{
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
  numArgs = int8996;

  reverse_u45helper_fptr();
}

void lam8934_fptr() // lam8934
{
  // reading env
  void *const env8935 = arg_buffer[1];
  // reading env and args
  void *const id_8785 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8935);
  void *const id_8783 = decode_clo_array[2];
  void *const kont8882 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8783, id_8785);
  arg_buffer[1] = kont8882;
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8882))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void append1_fptr() // append1
{
  // reading env and args
  void *const kont8882 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8782 = apply_prim_null_u63_1(lhs);

  // if-clause
  bool if_guard9236 = is_true(id_8782);
  if (if_guard9236) {

    // clo-app
    arg_buffer[1] = kont8882;
    arg_buffer[2] = rhs;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8882))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8783 = apply_prim_car_1(lhs);
    void *const id_8784 = apply_prim_cdr_1(lhs);

    // creating new closure instance
    void **clo9237 = alloc_clo(lam8934_fptr, 2);

    // setting env list
    clo9237[1] = kont8882;
    clo9237[2] = id_8783;
    void *f8883 = encode_clo(clo9237);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = f8883;
    arg_buffer[3] = id_8784;
    arg_buffer[4] = rhs;
    numArgs = int8996;

    append1_fptr();
  }
}

void lam8937_fptr() // lam8937
{
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
  numArgs = int8997;

  foldr_fptr();
}

void lam8939_fptr() // lam8939
{
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
  bool if_guard9238 = is_true(id_8788);
  if (if_guard9238) {
    void *const id_8789 = apply_prim_car_1(x);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = kont8884;
    arg_buffer[3] = xs;
    arg_buffer[4] = id_8789;
    numArgs = int8996;

    append1_fptr();
  } else {
    void *const id_8790 = apply_prim_list_0();
    void *const id_8791 = apply_prim_list_1(xs);

    // creating new closure instance
    void **clo9239 = alloc_clo(lam8937_fptr, 2);

    // setting env list
    clo9239[1] = id_8790;
    clo9239[2] = kont8884;
    void *f8885 = encode_clo(clo9239);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = f8885;
    arg_buffer[3] = id_8791;
    arg_buffer[4] = x;
    numArgs = int8996;

    append1_fptr();
  }
}

void lam8941_fptr() // lam8941
{
  // reading env
  void *const env8942 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8942);
  void *const kont8884 = decode_clo_array[2];
  void *const xs = decode_clo_array[1];
  void *const id_8786 = reinterpret_cast<void *>(encode_int(int8992));

  // creating new closure instance
  void **clo9240 = alloc_clo(lam8939_fptr, 4);

  // setting env list
  clo9240[1] = xs;
  clo9240[2] = x;
  clo9240[3] = kont8884;
  clo9240[4] = id_8786;
  void *f8886 = encode_clo(clo9240);

  // clo-app
  arg_buffer[1] = length;
  arg_buffer[2] = f8886;
  arg_buffer[3] = x;
  numArgs = int8995;

  length_fptr();
}

void append_fptr() // append
{

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
  void **clo9241 = alloc_clo(lam8941_fptr, 2);

  // setting env list
  clo9241[1] = xs;
  clo9241[2] = kont8884;
  void *f8887 = encode_clo(clo9241);

  // clo-app
  arg_buffer[1] = f8887;
  arg_buffer[2] = vargs8718;
  numArgs = int8972;

  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8887))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8944_fptr() // lam8944
{
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
  numArgs = int8972;

  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8888))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void take_u45helper_fptr() // take-helper
{
  // reading env and args
  void *const kont8888 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8793 = reinterpret_cast<void *>(encode_int(int8993));
  void *const id_8794 = apply_prim__u61_2(n, id_8793);

  // if-clause
  bool if_guard9242 = is_true(id_8794);
  if (if_guard9242) {

    // creating new closure instance
    void **clo9243 = alloc_clo(lam8944_fptr, 1);

    // setting env list
    clo9243[1] = kont8888;
    void *f8889 = encode_clo(clo9243);

    // clo-app
    arg_buffer[1] = reverse;
    arg_buffer[2] = f8889;
    arg_buffer[3] = lst2;
    numArgs = int8995;

    reverse_fptr();
  } else {
    void *const id_8796 = apply_prim_cdr_1(lst);
    void *const id_8797 = reinterpret_cast<void *>(encode_int(int8992));
    void *const id_8798 = apply_prim__u45_2(n, id_8797);
    void *const id_8799 = apply_prim_car_1(lst);
    void *const id_8800 = apply_prim_cons_2(id_8799, lst2);

    // clo-app
    arg_buffer[1] = take_u45helper;
    arg_buffer[2] = kont8888;
    arg_buffer[3] = id_8796;
    arg_buffer[4] = id_8798;
    arg_buffer[5] = id_8800;
    numArgs = int8997;

    take_u45helper_fptr();
  }
}

void take_fptr() // take
{
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
  numArgs = int8997;

  take_u45helper_fptr();
}

void lam8948_fptr() // lam8948
{
  // reading env
  void *const env8949 = arg_buffer[1];
  // reading env and args
  void *const id_8815 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8949);
  void *const kont8891 = decode_clo_array[4];
  void *const dist = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9244 = is_true(id_8815);
  if (if_guard9244) {
    void *const id_8816 = reinterpret_cast<void *>(encode_int(int8992));
    void *const id_8817 = apply_prim__u43_2(dist, id_8816);
    void *const id_8818 = apply_prim_cdr_1(placed);

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = kont8891;
    arg_buffer[3] = row;
    arg_buffer[4] = id_8817;
    arg_buffer[5] = id_8818;
    numArgs = int8997;

    ok_u63_fptr();
  } else {
    void *const xy8819 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8891;
    arg_buffer[2] = xy8819;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8891))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8950_fptr() // lam8950
{
  // reading env
  void *const env8951 = arg_buffer[1];
  // reading env and args
  void *const id_8809 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8951);
  void *const kont8891 = decode_clo_array[4];
  void *const dist = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9245 = is_true(id_8809);
  if (if_guard9245) {
    void *const id_8810 = apply_prim_car_1(placed);
    void *const id_8811 = apply_prim__u45_2(row, dist);
    void *const id_8812 = apply_prim__u61_2(id_8810, id_8811);

    // creating new closure instance
    void **clo9246 = alloc_clo(lam8948_fptr, 4);

    // setting env list
    clo9246[1] = placed;
    clo9246[2] = row;
    clo9246[3] = dist;
    clo9246[4] = kont8891;
    void *f8892 = encode_clo(clo9246);

    // if-clause
    bool if_guard9247 = is_true(id_8812);
    if (if_guard9247) {
      void *const xy8813 = bool_f8986;

      // clo-app
      arg_buffer[1] = f8892;
      arg_buffer[2] = xy8813;
      numArgs = int8972;

      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8814 = bool_t8988;

      // clo-app
      arg_buffer[1] = f8892;
      arg_buffer[2] = xy8814;
      numArgs = int8972;

      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8892))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }

  } else {
    void *const xy8820 = bool_f8986;

    // clo-app
    arg_buffer[1] = kont8891;
    arg_buffer[2] = xy8820;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8891))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void ok_u63_fptr() // ok?
{
  // reading env and args
  void *const kont8891 = arg_buffer[2];
  void *const row = arg_buffer[3];
  void *const dist = arg_buffer[4];
  void *const placed = arg_buffer[5];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8802 = apply_prim_null_u63_1(placed);

  // if-clause
  bool if_guard9248 = is_true(id_8802);
  if (if_guard9248) {
    void *const xy8803 = bool_t8988;

    // clo-app
    arg_buffer[1] = kont8891;
    arg_buffer[2] = xy8803;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8891))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8804 = apply_prim_car_1(placed);
    void *const id_8805 = apply_prim__u43_2(row, dist);
    void *const id_8806 = apply_prim__u61_2(id_8804, id_8805);

    // creating new closure instance
    void **clo9249 = alloc_clo(lam8950_fptr, 4);

    // setting env list
    clo9249[1] = placed;
    clo9249[2] = row;
    clo9249[3] = dist;
    clo9249[4] = kont8891;
    void *f8893 = encode_clo(clo9249);

    // if-clause
    bool if_guard9250 = is_true(id_8806);
    if (if_guard9250) {
      void *const xy8807 = bool_f8986;

      // clo-app
      arg_buffer[1] = f8893;
      arg_buffer[2] = xy8807;
      numArgs = int8972;

      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8893))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8808 = bool_t8988;

      // clo-app
      arg_buffer[1] = f8893;
      arg_buffer[2] = xy8808;
      numArgs = int8972;

      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8893))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }
  }
}

void lam8953_fptr() // lam8953
{
  // reading env
  void *const env8954 = arg_buffer[1];
  // reading env and args
  void *const id_8839 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8954);
  void *const stack = decode_clo_array[4];
  void *const f8895 = decode_clo_array[3];
  void *const z = decode_clo_array[2];
  void *const x = decode_clo_array[1];
  void *const id_8840 = apply_prim_list_0();
  void *const id_8841 = apply_prim_car_1(x);
  void *const id_8842 = apply_prim_cons_2(id_8841, z);
  void *const id_8843 = apply_prim_list_3(id_8839, id_8840, id_8842);
  void *const id_8844 = apply_prim_cdr_1(stack);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8843, id_8844);
  arg_buffer[1] = f8895;
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8955_fptr() // lam8955
{
  // reading env
  void *const env8956 = arg_buffer[1];
  // reading env and args
  void *const id_8846 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8956);
  void *const kont8894 = decode_clo_array[3];
  void *const count = decode_clo_array[2];
  void *const id_8834 = decode_clo_array[1];
  void *const id_8847 = apply_prim_cons_2(id_8834, id_8846);

  // clo-app
  arg_buffer[1] = q_u45helper;
  arg_buffer[2] = kont8894;
  arg_buffer[3] = id_8847;
  arg_buffer[4] = count;
  numArgs = int8996;

  q_u45helper_fptr();
}

void lam8957_fptr() // lam8957
{
  // reading env
  void *const env8958 = arg_buffer[1];
  // reading env and args
  void *const id_8837 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8958);
  void *const stack = decode_clo_array[7];
  void *const kont8894 = decode_clo_array[6];
  void *const count = decode_clo_array[5];
  void *const id_8834 = decode_clo_array[4];
  void *const z = decode_clo_array[3];
  void *const y = decode_clo_array[2];
  void *const x = decode_clo_array[1];

  // creating new closure instance
  void **clo9251 = alloc_clo(lam8955_fptr, 3);

  // setting env list
  clo9251[1] = id_8834;
  clo9251[2] = count;
  clo9251[3] = kont8894;
  void *f8895 = encode_clo(clo9251);

  // if-clause
  bool if_guard9252 = is_true(id_8837);
  if (if_guard9252) {
    void *const id_8838 = apply_prim_cdr_1(x);

    // creating new closure instance
    void **clo9253 = alloc_clo(lam8953_fptr, 4);

    // setting env list
    clo9253[1] = x;
    clo9253[2] = z;
    clo9253[3] = f8895;
    clo9253[4] = stack;
    void *f8896 = encode_clo(clo9253);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f8896;
    arg_buffer[3] = id_8838;
    arg_buffer[4] = y;
    numArgs = int8996;

    append_fptr();
  } else {
    void *const xy8845 = apply_prim_cdr_1(stack);

    // clo-app
    arg_buffer[1] = f8895;
    arg_buffer[2] = xy8845;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8959_fptr() // lam8959
{
  // reading env
  void *const env8960 = arg_buffer[1];
  // reading env and args
  void *const z = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8960);
  void *const stack = decode_clo_array[5];
  void *const kont8894 = decode_clo_array[4];
  void *const count = decode_clo_array[3];
  void *const y = decode_clo_array[2];
  void *const x = decode_clo_array[1];
  void *const id_8825 = apply_prim_null_u63_1(x);

  // if-clause
  bool if_guard9254 = is_true(id_8825);
  if (if_guard9254) {
    void *const id_8826 = apply_prim_null_u63_1(y);

    // if-clause
    bool if_guard9255 = is_true(id_8826);
    if (if_guard9255) {
      void *const id_8827 = apply_prim_cdr_1(stack);
      void *const id_8828 = reinterpret_cast<void *>(encode_int(int8992));
      void *const id_8829 = apply_prim__u43_2(count, id_8828);

      // clo-app
      arg_buffer[1] = q_u45helper;
      arg_buffer[2] = kont8894;
      arg_buffer[3] = id_8827;
      arg_buffer[4] = id_8829;
      numArgs = int8996;

      q_u45helper_fptr();
    } else {
      void *const id_8830 = apply_prim_cdr_1(stack);

      // clo-app
      arg_buffer[1] = q_u45helper;
      arg_buffer[2] = kont8894;
      arg_buffer[3] = id_8830;
      arg_buffer[4] = count;
      numArgs = int8996;

      q_u45helper_fptr();
    }

  } else {
    void *const id_8831 = apply_prim_cdr_1(x);
    void *const id_8832 = apply_prim_car_1(x);
    void *const id_8833 = apply_prim_cons_2(id_8832, y);
    void *const id_8834 = apply_prim_list_3(id_8831, id_8833, z);
    void *const id_8835 = apply_prim_car_1(x);
    void *const id_8836 = reinterpret_cast<void *>(encode_int(int8992));

    // creating new closure instance
    void **clo9256 = alloc_clo(lam8957_fptr, 7);

    // setting env list
    clo9256[1] = x;
    clo9256[2] = y;
    clo9256[3] = z;
    clo9256[4] = id_8834;
    clo9256[5] = count;
    clo9256[6] = kont8894;
    clo9256[7] = stack;
    void *f8897 = encode_clo(clo9256);

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = f8897;
    arg_buffer[3] = id_8835;
    arg_buffer[4] = id_8836;
    arg_buffer[5] = z;
    numArgs = int8997;

    ok_u63_fptr();
  }
}

void lam8961_fptr() // lam8961
{
  // reading env
  void *const env8962 = arg_buffer[1];
  // reading env and args
  void *const y = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8962);
  void *const stack = decode_clo_array[5];
  void *const state = decode_clo_array[4];
  void *const kont8894 = decode_clo_array[3];
  void *const count = decode_clo_array[2];
  void *const x = decode_clo_array[1];

  // creating new closure instance
  void **clo9257 = alloc_clo(lam8959_fptr, 5);

  // setting env list
  clo9257[1] = x;
  clo9257[2] = y;
  clo9257[3] = count;
  clo9257[4] = kont8894;
  clo9257[5] = stack;
  void *f8898 = encode_clo(clo9257);

  void *const id_8823 = apply_prim_cdr_1(state);
  void *const id_8824 = apply_prim_cdr_1(id_8823);

  // clo-app
  arg_buffer[2] = apply_prim_car_1(id_8824);
  arg_buffer[1] = f8898;
  numArgs = int8972;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8898))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void q_u45helper_fptr() // q-helper
{
  // reading env and args
  void *const kont8894 = arg_buffer[2];
  void *const stack = arg_buffer[3];
  void *const count = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8821 = apply_prim_null_u63_1(stack);

  // if-clause
  bool if_guard9258 = is_true(id_8821);
  if (if_guard9258) {

    // clo-app
    arg_buffer[1] = kont8894;
    arg_buffer[2] = count;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8894))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const state = apply_prim_car_1(stack);
    void *const x = apply_prim_car_1(state);

    // creating new closure instance
    void **clo9259 = alloc_clo(lam8961_fptr, 5);

    // setting env list
    clo9259[1] = x;
    clo9259[2] = count;
    clo9259[3] = kont8894;
    clo9259[4] = state;
    clo9259[5] = stack;
    void *f8899 = encode_clo(clo9259);

    void *const id_8822 = apply_prim_cdr_1(state);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(id_8822);
    arg_buffer[1] = f8899;
    numArgs = int8972;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8899))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void iota1_fptr() // iota1
{
  // reading env and args
  void *const kont8900 = arg_buffer[2];
  void *const n = arg_buffer[3];
  void *const l = arg_buffer[4];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8848 = reinterpret_cast<void *>(encode_int(int8993));
  void *const id_8849 = apply_prim__u61_2(n, id_8848);

  // if-clause
  bool if_guard9260 = is_true(id_8849);
  if (if_guard9260) {

    // clo-app
    arg_buffer[1] = kont8900;
    arg_buffer[2] = l;
    numArgs = int8972;

    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8900))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8850 = reinterpret_cast<void *>(encode_int(int8992));
    void *const id_8851 = apply_prim__u45_2(n, id_8850);
    void *const id_8852 = apply_prim_cons_2(n, l);

    // clo-app
    arg_buffer[1] = iota1;
    arg_buffer[2] = kont8900;
    arg_buffer[3] = id_8851;
    arg_buffer[4] = id_8852;
    numArgs = int8996;

    iota1_fptr();
  }
}

void lam8965_fptr() // lam8965
{
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
  void *const id_8859 = reinterpret_cast<void *>(encode_int(int8993));

  // clo-app
  arg_buffer[1] = q_u45helper;
  arg_buffer[2] = kont8901;
  arg_buffer[3] = id_8858;
  arg_buffer[4] = id_8859;
  numArgs = int8996;

  q_u45helper_fptr();
}

void nqueens_fptr() // nqueens
{
  // reading env and args
  void *const kont8901 = arg_buffer[2];
  void *const n = arg_buffer[3];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8853 = apply_prim_list_0();

  // creating new closure instance
  void **clo9261 = alloc_clo(lam8965_fptr, 1);

  // setting env list
  clo9261[1] = kont8901;
  void *f8902 = encode_clo(clo9261);

  // clo-app
  arg_buffer[1] = iota1;
  arg_buffer[2] = f8902;
  arg_buffer[3] = n;
  arg_buffer[4] = id_8853;
  numArgs = int8996;

  iota1_fptr();
}

void brouhaha_main_fptr() // brouhaha_main
{
  // reading env and args
  void *const kont8903 = arg_buffer[2];

  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8860 = reinterpret_cast<void *>(encode_int(int8994));

  // clo-app
  arg_buffer[1] = nqueens;
  arg_buffer[2] = kont8903;
  arg_buffer[3] = id_8860;
  numArgs = int8995;

  nqueens_fptr();
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8993 = 0;
  bool_t8988 = encode_bool(true);
  int8992 = 1;
  bool_f8986 = encode_bool(false);
  int8972 = 2;
  int8994 = 14;

  // initializing global integer vars
  int8995 = 3;
  int8996 = 4;
  int8997 = 5;
  int8998 = 6;
  int8999 = 7;
  int9000 = 8;
  int9001 = 9;

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
  arg_buffer[0] = 0;
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_fptr();
}
