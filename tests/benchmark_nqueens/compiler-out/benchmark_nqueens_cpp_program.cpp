#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int8988;
void *bool_t8983;
void *int8987;
void *bool_f8981;
void *int8967;
void *int8989;

// declaring global integer variable
int int8990;
int int8991;
int int8992;
int int8993;
int int8994;

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

void even_u63_fptr();                                     // even?
void even_u63_spec(void *_8900, void *kont8856, void *x); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr();                                     // odd?
void odd_u63_spec(void *_8901, void *kont8857, void *x); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void *_8902, void *kont8858, void *lst,
                      void *n); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8903_fptr(); // lam8903
void *lam8903 = encode_clo(alloc_clo(lam8903_fptr, 0));

void member_fptr();                                                   // member
void member_spec(void *_8905, void *kont8859, void *item, void *lst); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void *_8906, void *kont8861, void *x,
                     void *lst); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8907_fptr(); // lam8907
void *lam8907 = encode_clo(alloc_clo(lam8907_fptr, 0));

void length_fptr();                                       // length
void length_spec(void *_8909, void *kont8862, void *lst); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8910_fptr(); // lam8910
void *lam8910 = encode_clo(alloc_clo(lam8910_fptr, 0));

void lam8912_fptr(); // lam8912
void *lam8912 = encode_clo(alloc_clo(lam8912_fptr, 0));

void map_fptr();                                                   // map
void map_spec(void *_8914, void *kont8864, void *proc, void *lst); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8915_fptr(); // lam8915
void *lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void lam8917_fptr(); // lam8917
void *lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void filter_fptr();                                                 // filter
void filter_spec(void *_8919, void *kont8867, void *op, void *lst); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr();                                                // drop
void drop_spec(void *_8920, void *kont8870, void *lst, void *n); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8921_fptr(); // lam8921
void *lam8921 = encode_clo(alloc_clo(lam8921_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void *_8923, void *kont8871, void *fun, void *acc,
                void *lst); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8924_fptr(); // lam8924
void *lam8924 = encode_clo(alloc_clo(lam8924_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void *_8926, void *kont8873, void *fun, void *acc,
                void *lst); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void *_8927, void *kont8875, void *lst,
                            void *lst2); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr();                                       // reverse
void reverse_spec(void *_8928, void *kont8876, void *lst); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8929_fptr(); // lam8929
void *lam8929 = encode_clo(alloc_clo(lam8929_fptr, 0));

void append1_fptr();                                                  // append1
void append1_spec(void *_8931, void *kont8877, void *lhs, void *rhs); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8932_fptr(); // lam8932
void *lam8932 = encode_clo(alloc_clo(lam8932_fptr, 0));

void lam8934_fptr(); // lam8934
void *lam8934 = encode_clo(alloc_clo(lam8934_fptr, 0));

void lam8936_fptr(); // lam8936
void *lam8936 = encode_clo(alloc_clo(lam8936_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8939_fptr(); // lam8939
void *lam8939 = encode_clo(alloc_clo(lam8939_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void *_8941, void *kont8883, void *lst, void *n,
                         void *lst2); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr();                                                // take
void take_spec(void *_8942, void *kont8885, void *lst, void *n); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam8943_fptr(); // lam8943
void *lam8943 = encode_clo(alloc_clo(lam8943_fptr, 0));

void lam8945_fptr(); // lam8945
void *lam8945 = encode_clo(alloc_clo(lam8945_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void *_8947, void *kont8886, void *row, void *dist,
                 void *placed); // ok?
void *ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8948_fptr(); // lam8948
void *lam8948 = encode_clo(alloc_clo(lam8948_fptr, 0));

void lam8950_fptr(); // lam8950
void *lam8950 = encode_clo(alloc_clo(lam8950_fptr, 0));

void lam8952_fptr(); // lam8952
void *lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void lam8954_fptr(); // lam8954
void *lam8954 = encode_clo(alloc_clo(lam8954_fptr, 0));

void lam8956_fptr(); // lam8956
void *lam8956 = encode_clo(alloc_clo(lam8956_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void *_8958, void *kont8889, void *stack,
                      void *count); // q-helper
void *q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr();                                              // iota1
void iota1_spec(void *_8959, void *kont8895, void *n, void *l); // iota1
void *iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8960_fptr(); // lam8960
void *lam8960 = encode_clo(alloc_clo(lam8960_fptr, 0));

void nqueens_fptr();                                     // nqueens
void nqueens_spec(void *_8962, void *kont8896, void *n); // nqueens
void *nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr();                            // brouhaha_main
void brouhaha_main_spec(void *_8963, void *kont8898); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

inline void _u43_fptr() // +
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8995 = prim_car(lst);
    void *const lst8997 = prim_cdr(lst);
    void *const x8996 = apply_prim__u43(lst8997);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
  } else {
    void *const kont8995 = arg_buffer[2];
    void *const x8996 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
  }
}

inline void _u45_fptr() // -
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8998 = prim_car(lst);
    void *const lst9000 = prim_cdr(lst);
    void *const x8999 = apply_prim__u45(lst9000);
    arg_buffer[1] = kont8998;
    arg_buffer[2] = x8999;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
  } else {
    void *const kont8998 = arg_buffer[2];
    void *const x8999 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont8998;
    arg_buffer[2] = x8999;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
  }
}

inline void _u42_fptr() // *
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9001 = prim_car(lst);
    void *const lst9003 = prim_cdr(lst);
    void *const x9002 = apply_prim__u42(lst9003);
    arg_buffer[1] = kont9001;
    arg_buffer[2] = x9002;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
  } else {
    void *const kont9001 = arg_buffer[2];
    void *const x9002 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont9001;
    arg_buffer[2] = x9002;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
  }
}

inline void _u47_fptr() // /
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9004 = prim_car(lst);
    void *const lst9006 = prim_cdr(lst);
    void *const x9005 = apply_prim__u47(lst9006);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
  } else {
    void *const kont9004 = arg_buffer[2];
    void *const x9005 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
  }
}

inline void _u61_fptr() // =
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9007 = prim_car(lst);
    void *const lst9009 = prim_cdr(lst);
    void *const x9008 = apply_prim__u61(lst9009);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
  } else {
    void *const kont9007 = arg_buffer[2];
    void *const x9008 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
  }
}

inline void _u62_fptr() // >
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9010 = prim_car(lst);
    void *const lst9012 = prim_cdr(lst);
    void *const x9011 = apply_prim__u62(lst9012);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
  } else {
    void *const kont9010 = arg_buffer[2];
    void *const x9011 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
  }
}

inline void _u60_fptr() // <
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9013 = prim_car(lst);
    void *const lst9015 = prim_cdr(lst);
    void *const x9014 = apply_prim__u60(lst9015);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
  } else {
    void *const kont9013 = arg_buffer[2];
    void *const x9014 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
  }
}

inline void _u60_u61_fptr() // <=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9016 = prim_car(lst);
    void *const lst9018 = prim_cdr(lst);
    void *const x9017 = apply_prim__u60_u61(lst9018);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
  } else {
    void *const kont9016 = arg_buffer[2];
    void *const x9017 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
  }
}

inline void _u62_u61_fptr() // >=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9019 = prim_car(lst);
    void *const lst9021 = prim_cdr(lst);
    void *const x9020 = apply_prim__u62_u61(lst9021);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
  } else {
    void *const kont9019 = arg_buffer[2];
    void *const x9020 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
  }
}

inline void modulo_fptr() // modulo
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9022 = prim_car(lst);
    void *const lst9024 = prim_cdr(lst);
    void *const x9023 = apply_prim_modulo(lst9024);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
  } else {
    void *const kont9022 = arg_buffer[2];
    void *const x9023 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
  }
}

inline void null_u63_fptr() // null?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9025 = prim_car(lst);
    void *const lst9027 = prim_cdr(lst);
    void *const x9026 = apply_prim_null_u63(lst9027);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
  } else {
    void *const kont9025 = arg_buffer[2];
    void *const x9026 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
  }
}

inline void equal_u63_fptr() // equal?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9028 = prim_car(lst);
    void *const lst9030 = prim_cdr(lst);
    void *const x9029 = apply_prim_equal_u63(lst9030);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
  } else {
    void *const kont9028 = arg_buffer[2];
    void *const x9029 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
  }
}

inline void eq_u63_fptr() // eq?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9031 = prim_car(lst);
    void *const lst9033 = prim_cdr(lst);
    void *const x9032 = apply_prim_eq_u63(lst9033);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
  } else {
    void *const kont9031 = arg_buffer[2];
    void *const x9032 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
  }
}

inline void cons_fptr() // cons
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9034 = prim_car(lst);
    void *const lst9036 = prim_cdr(lst);
    void *const x9035 = apply_prim_cons(lst9036);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
  } else {
    void *const kont9034 = arg_buffer[2];
    void *const x9035 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
  }
}

inline void car_fptr() // car
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9037 = prim_car(lst);
    void *const lst9039 = prim_cdr(lst);
    void *const x9038 = apply_prim_car(lst9039);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
  } else {
    void *const kont9037 = arg_buffer[2];
    void *const x9038 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
  }
}

inline void cdr_fptr() // cdr
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9040 = prim_car(lst);
    void *const lst9042 = prim_cdr(lst);
    void *const x9041 = apply_prim_cdr(lst9042);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
  } else {
    void *const kont9040 = arg_buffer[2];
    void *const x9041 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
  }
}

inline void float_u45_u62int_fptr() // float->int
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9043 = prim_car(lst);
    void *const lst9045 = prim_cdr(lst);
    void *const x9044 = apply_prim_float_u45_u62int(lst9045);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
  } else {
    void *const kont9043 = arg_buffer[2];
    void *const x9044 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
  }
}

inline void int_u45_u62float_fptr() // int->float
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9046 = prim_car(lst);
    void *const lst9048 = prim_cdr(lst);
    void *const x9047 = apply_prim_int_u45_u62float(lst9048);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
  } else {
    void *const kont9046 = arg_buffer[2];
    void *const x9047 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
  }
}

inline void hash_fptr() // hash
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9049 = prim_car(lst);
    void *const lst9051 = prim_cdr(lst);
    void *const x9050 = apply_prim_hash(lst9051);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
  } else {
    void *const kont9049 = arg_buffer[2];
    void *const x9050 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
  }
}

inline void hash_u45ref_fptr() // hash-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9052 = prim_car(lst);
    void *const lst9054 = prim_cdr(lst);
    void *const x9053 = apply_prim_hash_u45ref(lst9054);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
  } else {
    void *const kont9052 = arg_buffer[2];
    void *const x9053 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
  }
}

inline void hash_u45set_fptr() // hash-set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9055 = prim_car(lst);
    void *const lst9057 = prim_cdr(lst);
    void *const x9056 = apply_prim_hash_u45set(lst9057);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
  } else {
    void *const kont9055 = arg_buffer[2];
    void *const x9056 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
  }
}

inline void hash_u45keys_fptr() // hash-keys
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9058 = prim_car(lst);
    void *const lst9060 = prim_cdr(lst);
    void *const x9059 = apply_prim_hash_u45keys(lst9060);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
  } else {
    void *const kont9058 = arg_buffer[2];
    void *const x9059 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
  }
}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9061 = prim_car(lst);
    void *const lst9063 = prim_cdr(lst);
    void *const x9062 = apply_prim_hash_u45has_u45key_u63(lst9063);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
  } else {
    void *const kont9061 = arg_buffer[2];
    void *const x9062 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
  }
}

inline void hash_u45count_fptr() // hash-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9064 = prim_car(lst);
    void *const lst9066 = prim_cdr(lst);
    void *const x9065 = apply_prim_hash_u45count(lst9066);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
  } else {
    void *const kont9064 = arg_buffer[2];
    void *const x9065 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
  }
}

inline void set_fptr() // set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9067 = prim_car(lst);
    void *const lst9069 = prim_cdr(lst);
    void *const x9068 = apply_prim_set(lst9069);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
  } else {
    void *const kont9067 = arg_buffer[2];
    void *const x9068 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
  }
}

inline void set_u45_u62list_fptr() // set->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9070 = prim_car(lst);
    void *const lst9072 = prim_cdr(lst);
    void *const x9071 = apply_prim_set_u45_u62list(lst9072);
    arg_buffer[1] = kont9070;
    arg_buffer[2] = x9071;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
  } else {
    void *const kont9070 = arg_buffer[2];
    void *const x9071 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9070;
    arg_buffer[2] = x9071;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
  }
}

inline void list_u45_u62set_fptr() // list->set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9073 = prim_car(lst);
    void *const lst9075 = prim_cdr(lst);
    void *const x9074 = apply_prim_list_u45_u62set(lst9075);
    arg_buffer[1] = kont9073;
    arg_buffer[2] = x9074;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
  } else {
    void *const kont9073 = arg_buffer[2];
    void *const x9074 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont9073;
    arg_buffer[2] = x9074;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
  }
}

inline void set_u45add_fptr() // set-add
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9076 = prim_car(lst);
    void *const lst9078 = prim_cdr(lst);
    void *const x9077 = apply_prim_set_u45add(lst9078);
    arg_buffer[1] = kont9076;
    arg_buffer[2] = x9077;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
  } else {
    void *const kont9076 = arg_buffer[2];
    void *const x9077 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont9076;
    arg_buffer[2] = x9077;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
  }
}

inline void set_u45member_u63_fptr() // set-member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9079 = prim_car(lst);
    void *const lst9081 = prim_cdr(lst);
    void *const x9080 = apply_prim_set_u45member_u63(lst9081);
    arg_buffer[1] = kont9079;
    arg_buffer[2] = x9080;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
  } else {
    void *const kont9079 = arg_buffer[2];
    void *const x9080 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9079;
    arg_buffer[2] = x9080;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
  }
}

inline void set_u45remove_fptr() // set-remove
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9082 = prim_car(lst);
    void *const lst9084 = prim_cdr(lst);
    void *const x9083 = apply_prim_set_u45remove(lst9084);
    arg_buffer[1] = kont9082;
    arg_buffer[2] = x9083;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
  } else {
    void *const kont9082 = arg_buffer[2];
    void *const x9083 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9082;
    arg_buffer[2] = x9083;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
  }
}

inline void set_u45count_fptr() // set-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9085 = prim_car(lst);
    void *const lst9087 = prim_cdr(lst);
    void *const x9086 = apply_prim_set_u45count(lst9087);
    arg_buffer[1] = kont9085;
    arg_buffer[2] = x9086;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
  } else {
    void *const kont9085 = arg_buffer[2];
    void *const x9086 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9085;
    arg_buffer[2] = x9086;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
  }
}

inline void string_u63_fptr() // string?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9088 = prim_car(lst);
    void *const lst9090 = prim_cdr(lst);
    void *const x9089 = apply_prim_string_u63(lst9090);
    arg_buffer[1] = kont9088;
    arg_buffer[2] = x9089;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
  } else {
    void *const kont9088 = arg_buffer[2];
    void *const x9089 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9088;
    arg_buffer[2] = x9089;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
  }
}

inline void string_u45length_fptr() // string-length
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9091 = prim_car(lst);
    void *const lst9093 = prim_cdr(lst);
    void *const x9092 = apply_prim_string_u45length(lst9093);
    arg_buffer[1] = kont9091;
    arg_buffer[2] = x9092;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
  } else {
    void *const kont9091 = arg_buffer[2];
    void *const x9092 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9091;
    arg_buffer[2] = x9092;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
  }
}

inline void string_u45ref_fptr() // string-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9094 = prim_car(lst);
    void *const lst9096 = prim_cdr(lst);
    void *const x9095 = apply_prim_string_u45ref(lst9096);
    arg_buffer[1] = kont9094;
    arg_buffer[2] = x9095;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
  } else {
    void *const kont9094 = arg_buffer[2];
    void *const x9095 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9094;
    arg_buffer[2] = x9095;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
  }
}

inline void substring_fptr() // substring
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9097 = prim_car(lst);
    void *const lst9099 = prim_cdr(lst);
    void *const x9098 = apply_prim_substring(lst9099);
    arg_buffer[1] = kont9097;
    arg_buffer[2] = x9098;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
  } else {
    void *const kont9097 = arg_buffer[2];
    void *const x9098 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9097;
    arg_buffer[2] = x9098;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
  }
}

inline void string_u45append_fptr() // string-append
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9100 = prim_car(lst);
    void *const lst9102 = prim_cdr(lst);
    void *const x9101 = apply_prim_string_u45append(lst9102);
    arg_buffer[1] = kont9100;
    arg_buffer[2] = x9101;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
  } else {
    void *const kont9100 = arg_buffer[2];
    void *const x9101 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9100;
    arg_buffer[2] = x9101;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
  }
}

inline void string_u45_u62list_fptr() // string->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9103 = prim_car(lst);
    void *const lst9105 = prim_cdr(lst);
    void *const x9104 = apply_prim_string_u45_u62list(lst9105);
    arg_buffer[1] = kont9103;
    arg_buffer[2] = x9104;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
  } else {
    void *const kont9103 = arg_buffer[2];
    void *const x9104 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9103;
    arg_buffer[2] = x9104;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
  }
}

inline void exact_u45floor_fptr() // exact-floor
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9106 = prim_car(lst);
    void *const lst9108 = prim_cdr(lst);
    void *const x9107 = apply_prim_exact_u45floor(lst9108);
    arg_buffer[1] = kont9106;
    arg_buffer[2] = x9107;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
  } else {
    void *const kont9106 = arg_buffer[2];
    void *const x9107 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9106;
    arg_buffer[2] = x9107;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
  }
}

inline void exact_u45ceiling_fptr() // exact-ceiling
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9109 = prim_car(lst);
    void *const lst9111 = prim_cdr(lst);
    void *const x9110 = apply_prim_exact_u45ceiling(lst9111);
    arg_buffer[1] = kont9109;
    arg_buffer[2] = x9110;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
  } else {
    void *const kont9109 = arg_buffer[2];
    void *const x9110 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9109;
    arg_buffer[2] = x9110;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
  }
}

inline void exact_u45round_fptr() // exact-round
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9112 = prim_car(lst);
    void *const lst9114 = prim_cdr(lst);
    void *const x9113 = apply_prim_exact_u45round(lst9114);
    arg_buffer[1] = kont9112;
    arg_buffer[2] = x9113;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
  } else {
    void *const kont9112 = arg_buffer[2];
    void *const x9113 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9112;
    arg_buffer[2] = x9113;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
  }
}

inline void abs_fptr() // abs
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9115 = prim_car(lst);
    void *const lst9117 = prim_cdr(lst);
    void *const x9116 = apply_prim_abs(lst9117);
    arg_buffer[1] = kont9115;
    arg_buffer[2] = x9116;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
  } else {
    void *const kont9115 = arg_buffer[2];
    void *const x9116 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9115;
    arg_buffer[2] = x9116;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
  }
}

inline void max_fptr() // max
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9118 = prim_car(lst);
    void *const lst9120 = prim_cdr(lst);
    void *const x9119 = apply_prim_max(lst9120);
    arg_buffer[1] = kont9118;
    arg_buffer[2] = x9119;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
  } else {
    void *const kont9118 = arg_buffer[2];
    void *const x9119 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9118;
    arg_buffer[2] = x9119;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
  }
}

inline void min_fptr() // min
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9121 = prim_car(lst);
    void *const lst9123 = prim_cdr(lst);
    void *const x9122 = apply_prim_min(lst9123);
    arg_buffer[1] = kont9121;
    arg_buffer[2] = x9122;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
  } else {
    void *const kont9121 = arg_buffer[2];
    void *const x9122 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9121;
    arg_buffer[2] = x9122;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
  }
}

inline void expt_fptr() // expt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9124 = prim_car(lst);
    void *const lst9126 = prim_cdr(lst);
    void *const x9125 = apply_prim_expt(lst9126);
    arg_buffer[1] = kont9124;
    arg_buffer[2] = x9125;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
  } else {
    void *const kont9124 = arg_buffer[2];
    void *const x9125 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9124;
    arg_buffer[2] = x9125;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
  }
}

inline void sqrt_fptr() // sqrt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9127 = prim_car(lst);
    void *const lst9129 = prim_cdr(lst);
    void *const x9128 = apply_prim_sqrt(lst9129);
    arg_buffer[1] = kont9127;
    arg_buffer[2] = x9128;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
  } else {
    void *const kont9127 = arg_buffer[2];
    void *const x9128 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9127;
    arg_buffer[2] = x9128;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
  }
}

inline void remainder_fptr() // remainder
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9130 = prim_car(lst);
    void *const lst9132 = prim_cdr(lst);
    void *const x9131 = apply_prim_remainder(lst9132);
    arg_buffer[1] = kont9130;
    arg_buffer[2] = x9131;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
  } else {
    void *const kont9130 = arg_buffer[2];
    void *const x9131 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9130;
    arg_buffer[2] = x9131;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
  }
}

inline void quotient_fptr() // quotient
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9133 = prim_car(lst);
    void *const lst9135 = prim_cdr(lst);
    void *const x9134 = apply_prim_quotient(lst9135);
    arg_buffer[1] = kont9133;
    arg_buffer[2] = x9134;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
  } else {
    void *const kont9133 = arg_buffer[2];
    void *const x9134 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9133;
    arg_buffer[2] = x9134;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
  }
}

inline void random_fptr() // random
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9136 = prim_car(lst);
    void *const lst9138 = prim_cdr(lst);
    void *const x9137 = apply_prim_random(lst9138);
    arg_buffer[1] = kont9136;
    arg_buffer[2] = x9137;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
  } else {
    void *const kont9136 = arg_buffer[2];
    void *const x9137 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9136;
    arg_buffer[2] = x9137;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
  }
}

inline void symbol_u63_fptr() // symbol?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9139 = prim_car(lst);
    void *const lst9141 = prim_cdr(lst);
    void *const x9140 = apply_prim_symbol_u63(lst9141);
    arg_buffer[1] = kont9139;
    arg_buffer[2] = x9140;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
  } else {
    void *const kont9139 = arg_buffer[2];
    void *const x9140 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9139;
    arg_buffer[2] = x9140;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
  }
}

inline void pair_u63_fptr() // pair?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9142 = prim_car(lst);
    void *const lst9144 = prim_cdr(lst);
    void *const x9143 = apply_prim_pair_u63(lst9144);
    arg_buffer[1] = kont9142;
    arg_buffer[2] = x9143;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
  } else {
    void *const kont9142 = arg_buffer[2];
    void *const x9143 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9142;
    arg_buffer[2] = x9143;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
  }
}

inline void positive_u63_fptr() // positive?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9145 = prim_car(lst);
    void *const lst9147 = prim_cdr(lst);
    void *const x9146 = apply_prim_positive_u63(lst9147);
    arg_buffer[1] = kont9145;
    arg_buffer[2] = x9146;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
  } else {
    void *const kont9145 = arg_buffer[2];
    void *const x9146 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9145;
    arg_buffer[2] = x9146;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
  }
}

inline void negative_u63_fptr() // negative?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9148 = prim_car(lst);
    void *const lst9150 = prim_cdr(lst);
    void *const x9149 = apply_prim_negative_u63(lst9150);
    arg_buffer[1] = kont9148;
    arg_buffer[2] = x9149;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9148))[0])();
  } else {
    void *const kont9148 = arg_buffer[2];
    void *const x9149 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9148;
    arg_buffer[2] = x9149;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9148))[0])();
  }
}

inline void list_fptr() // list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9151 = prim_car(lst);
    void *const lst9153 = prim_cdr(lst);
    void *const x9152 = apply_prim_list(lst9153);
    arg_buffer[1] = kont9151;
    arg_buffer[2] = x9152;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9151))[0])();
  } else {
    void *const kont9151 = arg_buffer[2];
    void *const x9152 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9151;
    arg_buffer[2] = x9152;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont9151))[0])();
  }
}

inline void even_u63_fptr() // even? -> generic version
{
  // reading env and args
  void *const kont8856 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8988, apply_prim_modulo_2(x, int8967));
  arg_buffer[1] = kont8856;
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(kont8856))[0])();
}

inline void even_u63_spec(void *_8900, void *kont8856, void *x) // even?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8988, apply_prim_modulo_2(x, int8967));
  arg_buffer[1] = kont8856;
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(kont8856))[0])();
}

inline void odd_u63_fptr() // odd? -> generic version
{
  // reading env and args
  void *const kont8857 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8987, apply_prim_modulo_2(x, int8967));
  arg_buffer[1] = kont8857;
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(kont8857))[0])();
}

inline void odd_u63_spec(void *_8901, void *kont8857, void *x) // odd?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8987, apply_prim_modulo_2(x, int8967));
  arg_buffer[1] = kont8857;
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(kont8857))[0])();
}

inline void list_u45ref_fptr() // list-ref -> generic version
{
  // reading env and args
  void *const kont8858 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int8988, n))) {

    // clo-app
    arg_buffer[1] = kont8858;
    arg_buffer[2] = apply_prim_car_1(lst);
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8858))[0])();
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8858, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8987));
  }
}

inline void list_u45ref_spec(void *_8902, void *kont8858, void *lst,
                             void *n) // list-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int8988, n))) {

    // clo-app
    arg_buffer[1] = kont8858;
    arg_buffer[2] = apply_prim_car_1(lst);
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8858))[0])();
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8858, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8987));
  }
}

inline void lam8903_fptr() // lam8903 -> generic version
{
  // reading env
  void *const env8904 = arg_buffer[1];
  // reading env and args
  void *const id_8729 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8904);

  // if-clause
  if (is_true(id_8729)) {

    // clo-app
    arg_buffer[1] = decode_clo_array[1];
    arg_buffer[2] = bool_f8981;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[2], apply_prim_car_1(decode_clo_array[3])))) {

      // clo-app
      arg_buffer[1] = decode_clo_array[1];
      arg_buffer[2] = decode_clo_array[3];
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
    } else {

      // clo-app
      member_spec(member, decode_clo_array[1], decode_clo_array[2],
                  apply_prim_cdr_1(decode_clo_array[3]));
    }
  }
}

inline void member_fptr() // member -> generic version
{
  // reading env and args
  void *const kont8859 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9154 = alloc_clo(lam8903_fptr, 3);

  // setting env list
  clo9154[1] = kont8859;
  clo9154[2] = item;
  clo9154[3] = lst;
  void *f8860 = encode_clo(clo9154);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {

    // clo-app
    arg_buffer[1] = f8860;
    arg_buffer[2] = apply_prim_null_u63_1(item);
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(f8860))[0])();
  } else {

    // clo-app
    arg_buffer[1] = f8860;
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(f8860))[0])();
  }
}

inline void member_spec(void *_8905, void *kont8859, void *item,
                        void *lst) // member
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9155 = alloc_clo(lam8903_fptr, 3);

  // setting env list
  clo9155[1] = kont8859;
  clo9155[2] = item;
  clo9155[3] = lst;
  void *f8860 = encode_clo(clo9155);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {

    // clo-app
    arg_buffer[1] = f8860;
    arg_buffer[2] = apply_prim_null_u63_1(item);
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(f8860))[0])();
  } else {

    // clo-app
    arg_buffer[1] = f8860;
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(f8860))[0])();
  }
}

inline void member_u63_fptr() // member? -> generic version
{
  // reading env and args
  void *const kont8861 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8861;
    arg_buffer[2] = bool_f8981;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {

      // clo-app
      arg_buffer[1] = kont8861;
      arg_buffer[2] = bool_t8983;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8861, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void member_u63_spec(void *_8906, void *kont8861, void *x,
                            void *lst) // member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8861;
    arg_buffer[2] = bool_f8981;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {

      // clo-app
      arg_buffer[1] = kont8861;
      arg_buffer[2] = bool_t8983;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(kont8861))[0])();
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8861, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void lam8907_fptr() // lam8907 -> generic version
{
  // reading env
  void *const env8908 = arg_buffer[1];
  // reading env and args
  void *const id_8744 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8908);

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(decode_clo_array[1], id_8744);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void length_fptr() // length -> generic version
{
  // reading env and args
  void *const kont8862 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8862;
    arg_buffer[2] = int8988;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8862))[0])();
  } else {

    // creating new closure instance
    void **clo9156 = alloc_clo(lam8907_fptr, 2);

    // setting env list
    clo9156[1] = int8987;
    clo9156[2] = kont8862;
    void *f8863 = encode_clo(clo9156);

    // clo-app
    length_spec(length, f8863, apply_prim_cdr_1(lst));
  }
}

inline void length_spec(void *_8909, void *kont8862, void *lst) // length
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8862;
    arg_buffer[2] = int8988;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8862))[0])();
  } else {

    // creating new closure instance
    void **clo9157 = alloc_clo(lam8907_fptr, 2);

    // setting env list
    clo9157[1] = int8987;
    clo9157[2] = kont8862;
    void *f8863 = encode_clo(clo9157);

    // clo-app
    length_spec(length, f8863, apply_prim_cdr_1(lst));
  }
}

inline void lam8910_fptr() // lam8910 -> generic version
{
  // reading env
  void *const env8911 = arg_buffer[1];
  // reading env and args
  void *const id_8750 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8911);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8750);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8912_fptr() // lam8912 -> generic version
{
  // reading env
  void *const env8913 = arg_buffer[1];
  // reading env and args
  void *const id_8748 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8913);

  // creating new closure instance
  void **clo9158 = alloc_clo(lam8910_fptr, 2);

  // setting env list
  clo9158[1] = id_8748;
  clo9158[2] = decode_clo_array[3];
  void *f8865 = encode_clo(clo9158);

  // clo-app
  map_spec(map, f8865, decode_clo_array[1],
           apply_prim_cdr_1(decode_clo_array[2]));
}

inline void map_fptr() // map -> generic version
{
  // reading env and args
  void *const kont8864 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8864;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8864))[0])();
  } else {

    // creating new closure instance
    void **clo9159 = alloc_clo(lam8912_fptr, 3);

    // setting env list
    clo9159[1] = proc;
    clo9159[2] = lst;
    clo9159[3] = kont8864;
    void *f8866 = encode_clo(clo9159);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8866;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8992;
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void map_spec(void *_8914, void *kont8864, void *proc, void *lst) // map
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8864;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8864))[0])();
  } else {

    // creating new closure instance
    void **clo9160 = alloc_clo(lam8912_fptr, 3);

    // setting env list
    clo9160[1] = proc;
    clo9160[2] = lst;
    clo9160[3] = kont8864;
    void *f8866 = encode_clo(clo9160);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8866;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8992;
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void lam8915_fptr() // lam8915 -> generic version
{
  // reading env
  void *const env8916 = arg_buffer[1];
  // reading env and args
  void *const id_8757 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8916);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8757);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8917_fptr() // lam8917 -> generic version
{
  // reading env
  void *const env8918 = arg_buffer[1];
  // reading env and args
  void *const id_8754 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8918);

  // if-clause
  if (is_true(id_8754)) {

    // creating new closure instance
    void **clo9161 = alloc_clo(lam8915_fptr, 2);

    // setting env list
    clo9161[1] = apply_prim_car_1(decode_clo_array[3]);
    clo9161[2] = decode_clo_array[2];
    void *f8868 = encode_clo(clo9161);

    // clo-app
    filter_spec(filter, f8868, decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[3]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[2], decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[3]));
  }
}

inline void filter_fptr() // filter -> generic version
{
  // reading env and args
  void *const kont8867 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8867;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8867))[0])();
  } else {

    // creating new closure instance
    void **clo9162 = alloc_clo(lam8917_fptr, 3);

    // setting env list
    clo9162[1] = op;
    clo9162[2] = kont8867;
    clo9162[3] = lst;
    void *f8869 = encode_clo(clo9162);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8869;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8992;
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void filter_spec(void *_8919, void *kont8867, void *op,
                        void *lst) // filter
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8867;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8867))[0])();
  } else {

    // creating new closure instance
    void **clo9163 = alloc_clo(lam8917_fptr, 3);

    // setting env list
    clo9163[1] = op;
    clo9163[2] = kont8867;
    clo9163[3] = lst;
    void *f8869 = encode_clo(clo9163);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8869;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8992;
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void drop_fptr() // drop -> generic version
{
  // reading env and args
  void *const kont8870 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8988))) {

    // clo-app
    arg_buffer[1] = kont8870;
    arg_buffer[2] = lst;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8870))[0])();
  } else {

    // clo-app
    drop_spec(drop, kont8870, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8987));
  }
}

inline void drop_spec(void *_8920, void *kont8870, void *lst, void *n) // drop
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8988))) {

    // clo-app
    arg_buffer[1] = kont8870;
    arg_buffer[2] = lst;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8870))[0])();
  } else {

    // clo-app
    drop_spec(drop, kont8870, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8987));
  }
}

inline void lam8921_fptr() // lam8921 -> generic version
{
  // reading env
  void *const env8922 = arg_buffer[1];
  // reading env and args
  void *const id_8766 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8922);

  // clo-app
  foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8766,
             apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version
{
  // reading env and args
  void *const kont8871 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8871;
    arg_buffer[2] = acc;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8871))[0])();
  } else {

    // creating new closure instance
    void **clo9164 = alloc_clo(lam8921_fptr, 3);

    // setting env list
    clo9164[1] = fun;
    clo9164[2] = kont8871;
    clo9164[3] = lst;
    void *f8872 = encode_clo(clo9164);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8872;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8993;
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void foldl_spec(void *_8923, void *kont8871, void *fun, void *acc,
                       void *lst) // foldl
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8871;
    arg_buffer[2] = acc;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8871))[0])();
  } else {

    // creating new closure instance
    void **clo9165 = alloc_clo(lam8921_fptr, 3);

    // setting env list
    clo9165[1] = fun;
    clo9165[2] = kont8871;
    clo9165[3] = lst;
    void *f8872 = encode_clo(clo9165);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8872;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8993;
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void lam8924_fptr() // lam8924 -> generic version
{
  // reading env
  void *const env8925 = arg_buffer[1];
  // reading env and args
  void *const id_8771 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8925);

  // clo-app
  arg_buffer[1] = decode_clo_array[2];
  arg_buffer[2] = decode_clo_array[1];
  arg_buffer[3] = decode_clo_array[3];
  arg_buffer[4] = id_8771;
  numArgs = int8993;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version
{
  // reading env and args
  void *const kont8873 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8873;
    arg_buffer[2] = acc;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8873))[0])();
  } else {

    // creating new closure instance
    void **clo9166 = alloc_clo(lam8924_fptr, 3);

    // setting env list
    clo9166[1] = kont8873;
    clo9166[2] = fun;
    clo9166[3] = apply_prim_car_1(lst);
    void *f8874 = encode_clo(clo9166);

    // clo-app
    foldr_spec(foldr, f8874, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void foldr_spec(void *_8926, void *kont8873, void *fun, void *acc,
                       void *lst) // foldr
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8873;
    arg_buffer[2] = acc;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8873))[0])();
  } else {

    // creating new closure instance
    void **clo9167 = alloc_clo(lam8924_fptr, 3);

    // setting env list
    clo9167[1] = kont8873;
    clo9167[2] = fun;
    clo9167[3] = apply_prim_car_1(lst);
    void *f8874 = encode_clo(clo9167);

    // clo-app
    foldr_spec(foldr, f8874, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version
{
  // reading env and args
  void *const kont8875 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8875;
    arg_buffer[2] = lst2;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8875))[0])();
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8875, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_u45helper_spec(void *_8927, void *kont8875, void *lst,
                                   void *lst2) // reverse-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8875;
    arg_buffer[2] = lst2;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8875))[0])();
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8875, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_fptr() // reverse -> generic version
{
  // reading env and args
  void *const kont8876 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8876, lst, apply_prim_list_0());
}

inline void reverse_spec(void *_8928, void *kont8876, void *lst) // reverse
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8876, lst, apply_prim_list_0());
}

inline void lam8929_fptr() // lam8929 -> generic version
{
  // reading env
  void *const env8930 = arg_buffer[1];
  // reading env and args
  void *const id_8780 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8930);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8780);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void append1_fptr() // append1 -> generic version
{
  // reading env and args
  void *const kont8877 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {

    // clo-app
    arg_buffer[1] = kont8877;
    arg_buffer[2] = rhs;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8877))[0])();
  } else {

    // creating new closure instance
    void **clo9168 = alloc_clo(lam8929_fptr, 2);

    // setting env list
    clo9168[1] = apply_prim_car_1(lhs);
    clo9168[2] = kont8877;
    void *f8878 = encode_clo(clo9168);

    // clo-app
    append1_spec(append1, f8878, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void append1_spec(void *_8931, void *kont8877, void *lhs,
                         void *rhs) // append1
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {

    // clo-app
    arg_buffer[1] = kont8877;
    arg_buffer[2] = rhs;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8877))[0])();
  } else {

    // creating new closure instance
    void **clo9169 = alloc_clo(lam8929_fptr, 2);

    // setting env list
    clo9169[1] = apply_prim_car_1(lhs);
    clo9169[2] = kont8877;
    void *f8878 = encode_clo(clo9169);

    // clo-app
    append1_spec(append1, f8878, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void lam8932_fptr() // lam8932 -> generic version
{
  // reading env
  void *const env8933 = arg_buffer[1];
  // reading env and args
  void *const id_8787 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8933);

  // clo-app
  foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8787);
}

inline void lam8934_fptr() // lam8934 -> generic version
{
  // reading env
  void *const env8935 = arg_buffer[1];
  // reading env and args
  void *const id_8782 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8935);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[4], id_8782))) {

    // clo-app
    append1_spec(append1, decode_clo_array[3], decode_clo_array[1],
                 apply_prim_car_1(decode_clo_array[2]));
  } else {

    // creating new closure instance
    void **clo9170 = alloc_clo(lam8932_fptr, 2);

    // setting env list
    clo9170[1] = apply_prim_list_0();
    clo9170[2] = decode_clo_array[3];
    void *f8880 = encode_clo(clo9170);

    // clo-app
    append1_spec(append1, f8880, apply_prim_list_1(decode_clo_array[1]),
                 decode_clo_array[2]);
  }
}

inline void lam8936_fptr() // lam8936 -> generic version
{
  // reading env
  void *const env8937 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8937);

  // creating new closure instance
  void **clo9171 = alloc_clo(lam8934_fptr, 4);

  // setting env list
  clo9171[1] = decode_clo_array[1];
  clo9171[2] = x;
  clo9171[3] = decode_clo_array[2];
  clo9171[4] = int8987;
  void *f8881 = encode_clo(clo9171);

  // clo-app
  length_spec(length, f8881, x);
}

void append_fptr() // append
{
  // reading env
  void *const _8938 = arg_buffer[1];
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

  // creating new closure instance
  void **clo9172 = alloc_clo(lam8936_fptr, 2);

  // setting env list
  clo9172[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
  clo9172[2] = apply_prim_car_1(vargs);
  void *f8882 = encode_clo(clo9172);

  // clo-app
  arg_buffer[1] = f8882;
  arg_buffer[2] = apply_prim_cdr_1(apply_prim_cdr_1(vargs));
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(f8882))[0])();
}

inline void lam8939_fptr() // lam8939 -> generic version
{
  // reading env
  void *const env8940 = arg_buffer[1];
  // reading env and args
  void *const xy8790 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8940);

  // clo-app
  arg_buffer[1] = decode_clo_array[1];
  arg_buffer[2] = xy8790;
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void take_u45helper_fptr() // take-helper -> generic version
{
  // reading env and args
  void *const kont8883 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8988))) {

    // creating new closure instance
    void **clo9173 = alloc_clo(lam8939_fptr, 1);

    // setting env list
    clo9173[1] = kont8883;
    void *f8884 = encode_clo(clo9173);

    // clo-app
    reverse_spec(reverse, f8884, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8883, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8987),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_u45helper_spec(void *_8941, void *kont8883, void *lst, void *n,
                                void *lst2) // take-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8988))) {

    // creating new closure instance
    void **clo9174 = alloc_clo(lam8939_fptr, 1);

    // setting env list
    clo9174[1] = kont8883;
    void *f8884 = encode_clo(clo9174);

    // clo-app
    reverse_spec(reverse, f8884, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8883, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8987),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_fptr() // take -> generic version
{
  // reading env and args
  void *const kont8885 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8885, lst, n, apply_prim_list_0());
}

inline void take_spec(void *_8942, void *kont8885, void *lst, void *n) // take
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8885, lst, n, apply_prim_list_0());
}

inline void lam8943_fptr() // lam8943 -> generic version
{
  // reading env
  void *const env8944 = arg_buffer[1];
  // reading env and args
  void *const id_8810 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8944);

  // if-clause
  if (is_true(id_8810)) {

    // clo-app
    ok_u63_spec(ok_u63, decode_clo_array[3], decode_clo_array[2],
                apply_prim__u43_2(decode_clo_array[4], int8987),
                apply_prim_cdr_1(decode_clo_array[1]));
  } else {

    // clo-app
    arg_buffer[1] = decode_clo_array[3];
    arg_buffer[2] = bool_f8981;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
  }
}

inline void lam8945_fptr() // lam8945 -> generic version
{
  // reading env
  void *const env8946 = arg_buffer[1];
  // reading env and args
  void *const id_8804 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8946);

  // if-clause
  if (is_true(id_8804)) {

    // creating new closure instance
    void **clo9175 = alloc_clo(lam8943_fptr, 4);

    // setting env list
    clo9175[1] = decode_clo_array[1];
    clo9175[2] = decode_clo_array[2];
    clo9175[3] = decode_clo_array[3];
    clo9175[4] = decode_clo_array[4];
    void *f8887 = encode_clo(clo9175);

    // if-clause
    if (is_true(apply_prim__u61_2(
            apply_prim_car_1(decode_clo_array[1]),
            apply_prim__u45_2(decode_clo_array[2], decode_clo_array[4])))) {

      // clo-app
      arg_buffer[1] = f8887;
      arg_buffer[2] = bool_f8981;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(f8887))[0])();
    } else {

      // clo-app
      arg_buffer[1] = f8887;
      arg_buffer[2] = bool_t8983;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(f8887))[0])();
    }

  } else {

    // clo-app
    arg_buffer[1] = decode_clo_array[3];
    arg_buffer[2] = bool_f8981;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
  }
}

inline void ok_u63_fptr() // ok? -> generic version
{
  // reading env and args
  void *const kont8886 = arg_buffer[2];
  void *const row = arg_buffer[3];
  void *const dist = arg_buffer[4];
  void *const placed = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(placed))) {

    // clo-app
    arg_buffer[1] = kont8886;
    arg_buffer[2] = bool_t8983;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8886))[0])();
  } else {

    // creating new closure instance
    void **clo9176 = alloc_clo(lam8945_fptr, 4);

    // setting env list
    clo9176[1] = placed;
    clo9176[2] = row;
    clo9176[3] = kont8886;
    clo9176[4] = dist;
    void *f8888 = encode_clo(clo9176);

    // if-clause
    if (is_true(apply_prim__u61_2(apply_prim_car_1(placed),
                                  apply_prim__u43_2(row, dist)))) {

      // clo-app
      arg_buffer[1] = f8888;
      arg_buffer[2] = bool_f8981;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(f8888))[0])();
    } else {

      // clo-app
      arg_buffer[1] = f8888;
      arg_buffer[2] = bool_t8983;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(f8888))[0])();
    }
  }
}

inline void ok_u63_spec(void *_8947, void *kont8886, void *row, void *dist,
                        void *placed) // ok?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(placed))) {

    // clo-app
    arg_buffer[1] = kont8886;
    arg_buffer[2] = bool_t8983;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8886))[0])();
  } else {

    // creating new closure instance
    void **clo9177 = alloc_clo(lam8945_fptr, 4);

    // setting env list
    clo9177[1] = placed;
    clo9177[2] = row;
    clo9177[3] = kont8886;
    clo9177[4] = dist;
    void *f8888 = encode_clo(clo9177);

    // if-clause
    if (is_true(apply_prim__u61_2(apply_prim_car_1(placed),
                                  apply_prim__u43_2(row, dist)))) {

      // clo-app
      arg_buffer[1] = f8888;
      arg_buffer[2] = bool_f8981;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(f8888))[0])();
    } else {

      // clo-app
      arg_buffer[1] = f8888;
      arg_buffer[2] = bool_t8983;
      numArgs = int8991;
      reinterpret_cast<void (*)()>((decode_clo(f8888))[0])();
    }
  }
}

inline void lam8948_fptr() // lam8948 -> generic version
{
  // reading env
  void *const env8949 = arg_buffer[1];
  // reading env and args
  void *const id_8834 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8949);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(
      apply_prim_list_3(id_8834, apply_prim_list_0(),
                        apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]),
                                          decode_clo_array[3])),
      apply_prim_cdr_1(decode_clo_array[4]));
  arg_buffer[1] = decode_clo_array[1];
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8950_fptr() // lam8950 -> generic version
{
  // reading env
  void *const env8951 = arg_buffer[1];
  // reading env and args
  void *const id_8841 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8951);

  // clo-app
  q_u45helper_spec(q_u45helper, decode_clo_array[1],
                   apply_prim_cons_2(decode_clo_array[3], id_8841),
                   decode_clo_array[2]);
}

inline void lam8952_fptr() // lam8952 -> generic version
{
  // reading env
  void *const env8953 = arg_buffer[1];
  // reading env and args
  void *const id_8832 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8953);

  // creating new closure instance
  void **clo9178 = alloc_clo(lam8950_fptr, 3);

  // setting env list
  clo9178[1] = decode_clo_array[3];
  clo9178[2] = decode_clo_array[7];
  clo9178[3] = decode_clo_array[1];
  void *f8890 = encode_clo(clo9178);

  // if-clause
  if (is_true(id_8832)) {

    // creating new closure instance
    void **clo9179 = alloc_clo(lam8948_fptr, 4);

    // setting env list
    clo9179[1] = f8890;
    clo9179[2] = decode_clo_array[4];
    clo9179[3] = decode_clo_array[6];
    clo9179[4] = decode_clo_array[2];
    void *f8891 = encode_clo(clo9179);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f8891;
    arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[4]);
    arg_buffer[4] = decode_clo_array[5];
    numArgs = int8993;
    append_fptr();
  } else {

    // clo-app
    arg_buffer[1] = f8890;
    arg_buffer[2] = apply_prim_cdr_1(decode_clo_array[2]);
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(f8890))[0])();
  }
}

inline void lam8954_fptr() // lam8954 -> generic version
{
  // reading env
  void *const env8955 = arg_buffer[1];
  // reading env and args
  void *const z = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8955);

  // if-clause
  if (is_true(apply_prim_null_u63_1(decode_clo_array[2]))) {

    // if-clause
    if (is_true(apply_prim_null_u63_1(decode_clo_array[3]))) {

      // clo-app
      q_u45helper_spec(q_u45helper, decode_clo_array[1],
                       apply_prim_cdr_1(decode_clo_array[5]),
                       apply_prim__u43_2(decode_clo_array[4], int8987));
    } else {

      // clo-app
      q_u45helper_spec(q_u45helper, decode_clo_array[1],
                       apply_prim_cdr_1(decode_clo_array[5]),
                       decode_clo_array[4]);
    }

  } else {

    // creating new closure instance
    void **clo9180 = alloc_clo(lam8952_fptr, 7);

    // setting env list
    clo9180[1] = apply_prim_list_3(
        apply_prim_cdr_1(decode_clo_array[2]),
        apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]),
                          decode_clo_array[3]),
        z);
    clo9180[2] = decode_clo_array[5];
    clo9180[3] = decode_clo_array[1];
    clo9180[4] = decode_clo_array[2];
    clo9180[5] = decode_clo_array[3];
    clo9180[6] = z;
    clo9180[7] = decode_clo_array[4];
    void *f8892 = encode_clo(clo9180);

    // clo-app
    ok_u63_spec(ok_u63, f8892, apply_prim_car_1(decode_clo_array[2]), int8987,
                z);
  }
}

inline void lam8956_fptr() // lam8956 -> generic version
{
  // reading env
  void *const env8957 = arg_buffer[1];
  // reading env and args
  void *const y = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8957);

  // creating new closure instance
  void **clo9181 = alloc_clo(lam8954_fptr, 5);

  // setting env list
  clo9181[1] = decode_clo_array[1];
  clo9181[2] = decode_clo_array[2];
  clo9181[3] = y;
  clo9181[4] = decode_clo_array[3];
  clo9181[5] = decode_clo_array[5];
  void *f8893 = encode_clo(clo9181);

  // clo-app
  arg_buffer[2] =
      apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4])));
  arg_buffer[1] = f8893;
  numArgs = int8991;
  reinterpret_cast<void (*)()>((decode_clo(f8893))[0])();
}

inline void q_u45helper_fptr() // q-helper -> generic version
{
  // reading env and args
  void *const kont8889 = arg_buffer[2];
  void *const stack = arg_buffer[3];
  void *const count = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(stack))) {

    // clo-app
    arg_buffer[1] = kont8889;
    arg_buffer[2] = count;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8889))[0])();
  } else {

    // creating new closure instance
    void **clo9182 = alloc_clo(lam8956_fptr, 5);

    // setting env list
    clo9182[1] = kont8889;
    clo9182[2] = apply_prim_car_1(apply_prim_car_1(stack));
    clo9182[3] = count;
    clo9182[4] = apply_prim_car_1(stack);
    clo9182[5] = stack;
    void *f8894 = encode_clo(clo9182);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack)));
    arg_buffer[1] = f8894;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(f8894))[0])();
  }
}

inline void q_u45helper_spec(void *_8958, void *kont8889, void *stack,
                             void *count) // q-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(stack))) {

    // clo-app
    arg_buffer[1] = kont8889;
    arg_buffer[2] = count;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8889))[0])();
  } else {

    // creating new closure instance
    void **clo9183 = alloc_clo(lam8956_fptr, 5);

    // setting env list
    clo9183[1] = kont8889;
    clo9183[2] = apply_prim_car_1(apply_prim_car_1(stack));
    clo9183[3] = count;
    clo9183[4] = apply_prim_car_1(stack);
    clo9183[5] = stack;
    void *f8894 = encode_clo(clo9183);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack)));
    arg_buffer[1] = f8894;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(f8894))[0])();
  }
}

inline void iota1_fptr() // iota1 -> generic version
{
  // reading env and args
  void *const kont8895 = arg_buffer[2];
  void *const n = arg_buffer[3];
  void *const l = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8988))) {

    // clo-app
    arg_buffer[1] = kont8895;
    arg_buffer[2] = l;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8895))[0])();
  } else {

    // clo-app
    iota1_spec(iota1, kont8895, apply_prim__u45_2(n, int8987),
               apply_prim_cons_2(n, l));
  }
}

inline void iota1_spec(void *_8959, void *kont8895, void *n, void *l) // iota1
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8988))) {

    // clo-app
    arg_buffer[1] = kont8895;
    arg_buffer[2] = l;
    numArgs = int8991;
    reinterpret_cast<void (*)()>((decode_clo(kont8895))[0])();
  } else {

    // clo-app
    iota1_spec(iota1, kont8895, apply_prim__u45_2(n, int8987),
               apply_prim_cons_2(n, l));
  }
}

inline void lam8960_fptr() // lam8960 -> generic version
{
  // reading env
  void *const env8961 = arg_buffer[1];
  // reading env and args
  void *const id_8849 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8961);

  // clo-app
  q_u45helper_spec(q_u45helper, decode_clo_array[1],
                   apply_prim_list_1(apply_prim_list_3(
                       id_8849, apply_prim_list_0(), apply_prim_list_0())),
                   int8988);
}

inline void nqueens_fptr() // nqueens -> generic version
{
  // reading env and args
  void *const kont8896 = arg_buffer[2];
  void *const n = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9184 = alloc_clo(lam8960_fptr, 1);

  // setting env list
  clo9184[1] = kont8896;
  void *f8897 = encode_clo(clo9184);

  // clo-app
  iota1_spec(iota1, f8897, n, apply_prim_list_0());
}

inline void nqueens_spec(void *_8962, void *kont8896, void *n) // nqueens
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9185 = alloc_clo(lam8960_fptr, 1);

  // setting env list
  clo9185[1] = kont8896;
  void *f8897 = encode_clo(clo9185);

  // clo-app
  iota1_spec(iota1, f8897, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version
{
  // reading env and args
  void *const kont8898 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  nqueens_spec(nqueens, kont8898, int8989);
}

inline void brouhaha_main_spec(void *_8963, void *kont8898) // brouhaha_main
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  nqueens_spec(nqueens, kont8898, int8989);
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8988 = reinterpret_cast<void *>(encode_int(0));
  bool_t8983 = encode_bool(true);
  int8987 = reinterpret_cast<void *>(encode_int(1));
  bool_f8981 = encode_bool(false);
  int8967 = reinterpret_cast<void *>(encode_int(2));
  int8989 = reinterpret_cast<void *>(encode_int(14));

  // initializing global integer vars
  int8990 = 1;
  int8991 = 2;
  int8992 = 3;
  int8993 = 4;
  int8994 = 5;

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_spec(nullptr, fhalt_clo);
}
