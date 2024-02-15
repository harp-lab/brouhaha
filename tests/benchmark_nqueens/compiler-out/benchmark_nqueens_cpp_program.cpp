#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int8989;
void *bool_t8984;
void *int8988;
void *bool_f8982;
void *int8968;
void *int8990;

// declaring global integer variable
void *int8991;
void *int8992;
void *int8993;
void *int8994;
void *int8995;

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
void even_u63_fptr(void *_8901, void *kont8857, void *x); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr();                                     // odd?
void odd_u63_fptr(void *_8902, void *kont8858, void *x); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_fptr(void *_8903, void *kont8859, void *lst,
                      void *n); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8904_fptr(); // lam8904
void *lam8904 = encode_clo(alloc_clo(lam8904_fptr, 0));

void member_fptr();                                                   // member
void member_fptr(void *_8906, void *kont8860, void *item, void *lst); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_fptr(void *_8907, void *kont8862, void *x,
                     void *lst); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8908_fptr(); // lam8908
void *lam8908 = encode_clo(alloc_clo(lam8908_fptr, 0));

void length_fptr();                                       // length
void length_fptr(void *_8910, void *kont8863, void *lst); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8911_fptr(); // lam8911
void *lam8911 = encode_clo(alloc_clo(lam8911_fptr, 0));

void lam8913_fptr(); // lam8913
void *lam8913 = encode_clo(alloc_clo(lam8913_fptr, 0));

void map_fptr();                                                   // map
void map_fptr(void *_8915, void *kont8865, void *proc, void *lst); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8916_fptr(); // lam8916
void *lam8916 = encode_clo(alloc_clo(lam8916_fptr, 0));

void lam8918_fptr(); // lam8918
void *lam8918 = encode_clo(alloc_clo(lam8918_fptr, 0));

void filter_fptr();                                                 // filter
void filter_fptr(void *_8920, void *kont8868, void *op, void *lst); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr();                                                // drop
void drop_fptr(void *_8921, void *kont8871, void *lst, void *n); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8922_fptr(); // lam8922
void *lam8922 = encode_clo(alloc_clo(lam8922_fptr, 0));

void foldl_fptr(); // foldl
void foldl_fptr(void *_8924, void *kont8872, void *fun, void *acc,
                void *lst); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8925_fptr(); // lam8925
void *lam8925 = encode_clo(alloc_clo(lam8925_fptr, 0));

void foldr_fptr(); // foldr
void foldr_fptr(void *_8927, void *kont8874, void *fun, void *acc,
                void *lst); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_fptr(void *_8928, void *kont8876, void *lst,
                            void *lst2); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr();                                       // reverse
void reverse_fptr(void *_8929, void *kont8877, void *lst); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8930_fptr(); // lam8930
void *lam8930 = encode_clo(alloc_clo(lam8930_fptr, 0));

void append1_fptr();                                                  // append1
void append1_fptr(void *_8932, void *kont8878, void *lhs, void *rhs); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8933_fptr(); // lam8933
void *lam8933 = encode_clo(alloc_clo(lam8933_fptr, 0));

void lam8935_fptr(); // lam8935
void *lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void lam8937_fptr(); // lam8937
void *lam8937 = encode_clo(alloc_clo(lam8937_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8940_fptr(); // lam8940
void *lam8940 = encode_clo(alloc_clo(lam8940_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_fptr(void *_8942, void *kont8884, void *lst, void *n,
                         void *lst2); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr();                                                // take
void take_fptr(void *_8943, void *kont8886, void *lst, void *n); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam8944_fptr(); // lam8944
void *lam8944 = encode_clo(alloc_clo(lam8944_fptr, 0));

void lam8946_fptr(); // lam8946
void *lam8946 = encode_clo(alloc_clo(lam8946_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_fptr(void *_8948, void *kont8887, void *row, void *dist,
                 void *placed); // ok?
void *ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8949_fptr(); // lam8949
void *lam8949 = encode_clo(alloc_clo(lam8949_fptr, 0));

void lam8951_fptr(); // lam8951
void *lam8951 = encode_clo(alloc_clo(lam8951_fptr, 0));

void lam8953_fptr(); // lam8953
void *lam8953 = encode_clo(alloc_clo(lam8953_fptr, 0));

void lam8955_fptr(); // lam8955
void *lam8955 = encode_clo(alloc_clo(lam8955_fptr, 0));

void lam8957_fptr(); // lam8957
void *lam8957 = encode_clo(alloc_clo(lam8957_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_fptr(void *_8959, void *kont8890, void *stack,
                      void *count); // q-helper
void *q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr();                                              // iota1
void iota1_fptr(void *_8960, void *kont8896, void *n, void *l); // iota1
void *iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8961_fptr(); // lam8961
void *lam8961 = encode_clo(alloc_clo(lam8961_fptr, 0));

void nqueens_fptr();                                     // nqueens
void nqueens_fptr(void *_8963, void *kont8897, void *n); // nqueens
void *nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr();                            // brouhaha_main
void brouhaha_main_fptr(void *_8964, void *kont8899); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

void _u43_fptr() // +
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env8998 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8996 = prim_car(lst);
    void *const lst8999 = prim_cdr(lst);
    void *const x8997 = apply_prim__u43(lst8999);
    arg_buffer[1] = kont8996;
    arg_buffer[2] = x8997;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8996))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont8996 = arg_buffer[2];
    void *const x8997 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8996;
    arg_buffer[2] = x8997;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8996))[0]);

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
  void *const _env9002 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9000 = prim_car(lst);
    void *const lst9003 = prim_cdr(lst);
    void *const x9001 = apply_prim__u45(lst9003);
    arg_buffer[1] = kont9000;
    arg_buffer[2] = x9001;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9000))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9000 = arg_buffer[2];
    void *const x9001 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont9000;
    arg_buffer[2] = x9001;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9000))[0]);

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
  void *const _env9006 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9004 = prim_car(lst);
    void *const lst9007 = prim_cdr(lst);
    void *const x9005 = apply_prim__u42(lst9007);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9004))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9004 = arg_buffer[2];
    void *const x9005 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9004))[0]);

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
  void *const _env9010 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9008 = prim_car(lst);
    void *const lst9011 = prim_cdr(lst);
    void *const x9009 = apply_prim__u47(lst9011);
    arg_buffer[1] = kont9008;
    arg_buffer[2] = x9009;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9008))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9008 = arg_buffer[2];
    void *const x9009 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont9008;
    arg_buffer[2] = x9009;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9008))[0]);

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
  void *const _env9014 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9012 = prim_car(lst);
    void *const lst9015 = prim_cdr(lst);
    void *const x9013 = apply_prim__u61(lst9015);
    arg_buffer[1] = kont9012;
    arg_buffer[2] = x9013;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9012))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9012 = arg_buffer[2];
    void *const x9013 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont9012;
    arg_buffer[2] = x9013;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9012))[0]);

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
  void *const _env9018 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9016 = prim_car(lst);
    void *const lst9019 = prim_cdr(lst);
    void *const x9017 = apply_prim__u62(lst9019);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9016))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9016 = arg_buffer[2];
    void *const x9017 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9016))[0]);

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
  void *const _env9022 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9020 = prim_car(lst);
    void *const lst9023 = prim_cdr(lst);
    void *const x9021 = apply_prim__u60(lst9023);
    arg_buffer[1] = kont9020;
    arg_buffer[2] = x9021;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9020))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9020 = arg_buffer[2];
    void *const x9021 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont9020;
    arg_buffer[2] = x9021;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9020))[0]);

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
  void *const _env9026 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9024 = prim_car(lst);
    void *const lst9027 = prim_cdr(lst);
    void *const x9025 = apply_prim__u60_u61(lst9027);
    arg_buffer[1] = kont9024;
    arg_buffer[2] = x9025;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9024))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9024 = arg_buffer[2];
    void *const x9025 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont9024;
    arg_buffer[2] = x9025;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9024))[0]);

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
  void *const _env9030 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9028 = prim_car(lst);
    void *const lst9031 = prim_cdr(lst);
    void *const x9029 = apply_prim__u62_u61(lst9031);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9028))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9028 = arg_buffer[2];
    void *const x9029 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9028))[0]);

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
  void *const _env9034 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9032 = prim_car(lst);
    void *const lst9035 = prim_cdr(lst);
    void *const x9033 = apply_prim_modulo(lst9035);
    arg_buffer[1] = kont9032;
    arg_buffer[2] = x9033;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9032))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9032 = arg_buffer[2];
    void *const x9033 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont9032;
    arg_buffer[2] = x9033;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9032))[0]);

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
  void *const _env9038 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9036 = prim_car(lst);
    void *const lst9039 = prim_cdr(lst);
    void *const x9037 = apply_prim_null_u63(lst9039);
    arg_buffer[1] = kont9036;
    arg_buffer[2] = x9037;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9036))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9036 = arg_buffer[2];
    void *const x9037 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont9036;
    arg_buffer[2] = x9037;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9036))[0]);

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
  void *const _env9042 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9040 = prim_car(lst);
    void *const lst9043 = prim_cdr(lst);
    void *const x9041 = apply_prim_equal_u63(lst9043);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9040))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9040 = arg_buffer[2];
    void *const x9041 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9040))[0]);

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
  void *const _env9046 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9044 = prim_car(lst);
    void *const lst9047 = prim_cdr(lst);
    void *const x9045 = apply_prim_eq_u63(lst9047);
    arg_buffer[1] = kont9044;
    arg_buffer[2] = x9045;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9044))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9044 = arg_buffer[2];
    void *const x9045 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont9044;
    arg_buffer[2] = x9045;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9044))[0]);

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
  void *const _env9050 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9048 = prim_car(lst);
    void *const lst9051 = prim_cdr(lst);
    void *const x9049 = apply_prim_cons(lst9051);
    arg_buffer[1] = kont9048;
    arg_buffer[2] = x9049;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9048))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9048 = arg_buffer[2];
    void *const x9049 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont9048;
    arg_buffer[2] = x9049;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9048))[0]);

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
  void *const _env9054 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9052 = prim_car(lst);
    void *const lst9055 = prim_cdr(lst);
    void *const x9053 = apply_prim_car(lst9055);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9052))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9052 = arg_buffer[2];
    void *const x9053 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9052))[0]);

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
  void *const _env9058 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9056 = prim_car(lst);
    void *const lst9059 = prim_cdr(lst);
    void *const x9057 = apply_prim_cdr(lst9059);
    arg_buffer[1] = kont9056;
    arg_buffer[2] = x9057;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9056))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9056 = arg_buffer[2];
    void *const x9057 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont9056;
    arg_buffer[2] = x9057;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9056))[0]);

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
  void *const _env9062 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9060 = prim_car(lst);
    void *const lst9063 = prim_cdr(lst);
    void *const x9061 = apply_prim_float_u45_u62int(lst9063);
    arg_buffer[1] = kont9060;
    arg_buffer[2] = x9061;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9060))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9060 = arg_buffer[2];
    void *const x9061 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont9060;
    arg_buffer[2] = x9061;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9060))[0]);

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
  void *const _env9066 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9064 = prim_car(lst);
    void *const lst9067 = prim_cdr(lst);
    void *const x9065 = apply_prim_int_u45_u62float(lst9067);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9064))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9064 = arg_buffer[2];
    void *const x9065 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9064))[0]);

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
  void *const _env9070 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9068 = prim_car(lst);
    void *const lst9071 = prim_cdr(lst);
    void *const x9069 = apply_prim_hash(lst9071);
    arg_buffer[1] = kont9068;
    arg_buffer[2] = x9069;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9068))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9068 = arg_buffer[2];
    void *const x9069 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont9068;
    arg_buffer[2] = x9069;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9068))[0]);

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
  void *const _env9074 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9072 = prim_car(lst);
    void *const lst9075 = prim_cdr(lst);
    void *const x9073 = apply_prim_hash_u45ref(lst9075);
    arg_buffer[1] = kont9072;
    arg_buffer[2] = x9073;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9072))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9072 = arg_buffer[2];
    void *const x9073 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont9072;
    arg_buffer[2] = x9073;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9072))[0]);

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
  void *const _env9078 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9076 = prim_car(lst);
    void *const lst9079 = prim_cdr(lst);
    void *const x9077 = apply_prim_hash_u45set(lst9079);
    arg_buffer[1] = kont9076;
    arg_buffer[2] = x9077;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9076))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9076 = arg_buffer[2];
    void *const x9077 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont9076;
    arg_buffer[2] = x9077;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9076))[0]);

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
  void *const _env9082 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9080 = prim_car(lst);
    void *const lst9083 = prim_cdr(lst);
    void *const x9081 = apply_prim_hash_u45keys(lst9083);
    arg_buffer[1] = kont9080;
    arg_buffer[2] = x9081;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9080))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9080 = arg_buffer[2];
    void *const x9081 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont9080;
    arg_buffer[2] = x9081;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9080))[0]);

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
  void *const _env9086 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9084 = prim_car(lst);
    void *const lst9087 = prim_cdr(lst);
    void *const x9085 = apply_prim_hash_u45has_u45key_u63(lst9087);
    arg_buffer[1] = kont9084;
    arg_buffer[2] = x9085;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9084))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9084 = arg_buffer[2];
    void *const x9085 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont9084;
    arg_buffer[2] = x9085;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9084))[0]);

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
  void *const _env9090 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9088 = prim_car(lst);
    void *const lst9091 = prim_cdr(lst);
    void *const x9089 = apply_prim_hash_u45count(lst9091);
    arg_buffer[1] = kont9088;
    arg_buffer[2] = x9089;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9088))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9088 = arg_buffer[2];
    void *const x9089 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont9088;
    arg_buffer[2] = x9089;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9088))[0]);

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
  void *const _env9094 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9092 = prim_car(lst);
    void *const lst9095 = prim_cdr(lst);
    void *const x9093 = apply_prim_set(lst9095);
    arg_buffer[1] = kont9092;
    arg_buffer[2] = x9093;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9092))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9092 = arg_buffer[2];
    void *const x9093 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont9092;
    arg_buffer[2] = x9093;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9092))[0]);

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
  void *const _env9098 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9096 = prim_car(lst);
    void *const lst9099 = prim_cdr(lst);
    void *const x9097 = apply_prim_set_u45_u62list(lst9099);
    arg_buffer[1] = kont9096;
    arg_buffer[2] = x9097;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9096))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9096 = arg_buffer[2];
    void *const x9097 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9096;
    arg_buffer[2] = x9097;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9096))[0]);

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
  void *const _env9102 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9100 = prim_car(lst);
    void *const lst9103 = prim_cdr(lst);
    void *const x9101 = apply_prim_list_u45_u62set(lst9103);
    arg_buffer[1] = kont9100;
    arg_buffer[2] = x9101;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9100))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9100 = arg_buffer[2];
    void *const x9101 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont9100;
    arg_buffer[2] = x9101;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9100))[0]);

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
  void *const _env9106 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9104 = prim_car(lst);
    void *const lst9107 = prim_cdr(lst);
    void *const x9105 = apply_prim_set_u45add(lst9107);
    arg_buffer[1] = kont9104;
    arg_buffer[2] = x9105;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9104))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9104 = arg_buffer[2];
    void *const x9105 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont9104;
    arg_buffer[2] = x9105;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9104))[0]);

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
  void *const _env9110 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9108 = prim_car(lst);
    void *const lst9111 = prim_cdr(lst);
    void *const x9109 = apply_prim_set_u45member_u63(lst9111);
    arg_buffer[1] = kont9108;
    arg_buffer[2] = x9109;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9108))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9108 = arg_buffer[2];
    void *const x9109 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9108;
    arg_buffer[2] = x9109;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9108))[0]);

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
  void *const _env9114 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9112 = prim_car(lst);
    void *const lst9115 = prim_cdr(lst);
    void *const x9113 = apply_prim_set_u45remove(lst9115);
    arg_buffer[1] = kont9112;
    arg_buffer[2] = x9113;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9112))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9112 = arg_buffer[2];
    void *const x9113 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9112;
    arg_buffer[2] = x9113;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9112))[0]);

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
  void *const _env9118 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9116 = prim_car(lst);
    void *const lst9119 = prim_cdr(lst);
    void *const x9117 = apply_prim_set_u45count(lst9119);
    arg_buffer[1] = kont9116;
    arg_buffer[2] = x9117;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9116))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9116 = arg_buffer[2];
    void *const x9117 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9116;
    arg_buffer[2] = x9117;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9116))[0]);

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
  void *const _env9122 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9120 = prim_car(lst);
    void *const lst9123 = prim_cdr(lst);
    void *const x9121 = apply_prim_string_u63(lst9123);
    arg_buffer[1] = kont9120;
    arg_buffer[2] = x9121;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9120))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9120 = arg_buffer[2];
    void *const x9121 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9120;
    arg_buffer[2] = x9121;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9120))[0]);

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
  void *const _env9126 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9124 = prim_car(lst);
    void *const lst9127 = prim_cdr(lst);
    void *const x9125 = apply_prim_string_u45length(lst9127);
    arg_buffer[1] = kont9124;
    arg_buffer[2] = x9125;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9124))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9124 = arg_buffer[2];
    void *const x9125 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9124;
    arg_buffer[2] = x9125;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9124))[0]);

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
  void *const _env9130 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9128 = prim_car(lst);
    void *const lst9131 = prim_cdr(lst);
    void *const x9129 = apply_prim_string_u45ref(lst9131);
    arg_buffer[1] = kont9128;
    arg_buffer[2] = x9129;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9128))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9128 = arg_buffer[2];
    void *const x9129 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9128;
    arg_buffer[2] = x9129;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9128))[0]);

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
  void *const _env9134 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9132 = prim_car(lst);
    void *const lst9135 = prim_cdr(lst);
    void *const x9133 = apply_prim_substring(lst9135);
    arg_buffer[1] = kont9132;
    arg_buffer[2] = x9133;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9132))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9132 = arg_buffer[2];
    void *const x9133 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9132;
    arg_buffer[2] = x9133;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9132))[0]);

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
  void *const _env9138 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9136 = prim_car(lst);
    void *const lst9139 = prim_cdr(lst);
    void *const x9137 = apply_prim_string_u45append(lst9139);
    arg_buffer[1] = kont9136;
    arg_buffer[2] = x9137;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9136))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9136 = arg_buffer[2];
    void *const x9137 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9136;
    arg_buffer[2] = x9137;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9136))[0]);

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
  void *const _env9142 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9140 = prim_car(lst);
    void *const lst9143 = prim_cdr(lst);
    void *const x9141 = apply_prim_string_u45_u62list(lst9143);
    arg_buffer[1] = kont9140;
    arg_buffer[2] = x9141;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9140))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9140 = arg_buffer[2];
    void *const x9141 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9140;
    arg_buffer[2] = x9141;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9140))[0]);

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
  void *const _env9146 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9144 = prim_car(lst);
    void *const lst9147 = prim_cdr(lst);
    void *const x9145 = apply_prim_exact_u45floor(lst9147);
    arg_buffer[1] = kont9144;
    arg_buffer[2] = x9145;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9144))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9144 = arg_buffer[2];
    void *const x9145 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9144;
    arg_buffer[2] = x9145;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9144))[0]);

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
  void *const _env9150 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9148 = prim_car(lst);
    void *const lst9151 = prim_cdr(lst);
    void *const x9149 = apply_prim_exact_u45ceiling(lst9151);
    arg_buffer[1] = kont9148;
    arg_buffer[2] = x9149;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9148))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9148 = arg_buffer[2];
    void *const x9149 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9148;
    arg_buffer[2] = x9149;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9148))[0]);

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
  void *const _env9154 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9152 = prim_car(lst);
    void *const lst9155 = prim_cdr(lst);
    void *const x9153 = apply_prim_exact_u45round(lst9155);
    arg_buffer[1] = kont9152;
    arg_buffer[2] = x9153;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9152))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9152 = arg_buffer[2];
    void *const x9153 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9152;
    arg_buffer[2] = x9153;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9152))[0]);

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
  void *const _env9158 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9156 = prim_car(lst);
    void *const lst9159 = prim_cdr(lst);
    void *const x9157 = apply_prim_abs(lst9159);
    arg_buffer[1] = kont9156;
    arg_buffer[2] = x9157;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9156))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9156 = arg_buffer[2];
    void *const x9157 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9156;
    arg_buffer[2] = x9157;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9156))[0]);

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
  void *const _env9162 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9160 = prim_car(lst);
    void *const lst9163 = prim_cdr(lst);
    void *const x9161 = apply_prim_max(lst9163);
    arg_buffer[1] = kont9160;
    arg_buffer[2] = x9161;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9160))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9160 = arg_buffer[2];
    void *const x9161 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9160;
    arg_buffer[2] = x9161;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9160))[0]);

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
  void *const _env9166 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9164 = prim_car(lst);
    void *const lst9167 = prim_cdr(lst);
    void *const x9165 = apply_prim_min(lst9167);
    arg_buffer[1] = kont9164;
    arg_buffer[2] = x9165;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9164))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9164 = arg_buffer[2];
    void *const x9165 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9164;
    arg_buffer[2] = x9165;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9164))[0]);

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
  void *const _env9170 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9168 = prim_car(lst);
    void *const lst9171 = prim_cdr(lst);
    void *const x9169 = apply_prim_expt(lst9171);
    arg_buffer[1] = kont9168;
    arg_buffer[2] = x9169;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9168))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9168 = arg_buffer[2];
    void *const x9169 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9168;
    arg_buffer[2] = x9169;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9168))[0]);

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
  void *const _env9174 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9172 = prim_car(lst);
    void *const lst9175 = prim_cdr(lst);
    void *const x9173 = apply_prim_sqrt(lst9175);
    arg_buffer[1] = kont9172;
    arg_buffer[2] = x9173;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9172))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9172 = arg_buffer[2];
    void *const x9173 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9172;
    arg_buffer[2] = x9173;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9172))[0]);

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
  void *const _env9178 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9176 = prim_car(lst);
    void *const lst9179 = prim_cdr(lst);
    void *const x9177 = apply_prim_remainder(lst9179);
    arg_buffer[1] = kont9176;
    arg_buffer[2] = x9177;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9176))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9176 = arg_buffer[2];
    void *const x9177 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9176;
    arg_buffer[2] = x9177;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9176))[0]);

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
  void *const _env9182 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9180 = prim_car(lst);
    void *const lst9183 = prim_cdr(lst);
    void *const x9181 = apply_prim_quotient(lst9183);
    arg_buffer[1] = kont9180;
    arg_buffer[2] = x9181;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9180))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9180 = arg_buffer[2];
    void *const x9181 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9180;
    arg_buffer[2] = x9181;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9180))[0]);

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
  void *const _env9186 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9184 = prim_car(lst);
    void *const lst9187 = prim_cdr(lst);
    void *const x9185 = apply_prim_random(lst9187);
    arg_buffer[1] = kont9184;
    arg_buffer[2] = x9185;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9184))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9184 = arg_buffer[2];
    void *const x9185 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9184;
    arg_buffer[2] = x9185;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9184))[0]);

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
  void *const _env9190 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9188 = prim_car(lst);
    void *const lst9191 = prim_cdr(lst);
    void *const x9189 = apply_prim_symbol_u63(lst9191);
    arg_buffer[1] = kont9188;
    arg_buffer[2] = x9189;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9188))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9188 = arg_buffer[2];
    void *const x9189 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9188;
    arg_buffer[2] = x9189;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9188))[0]);

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
  void *const _env9194 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9192 = prim_car(lst);
    void *const lst9195 = prim_cdr(lst);
    void *const x9193 = apply_prim_pair_u63(lst9195);
    arg_buffer[1] = kont9192;
    arg_buffer[2] = x9193;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9192))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9192 = arg_buffer[2];
    void *const x9193 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9192;
    arg_buffer[2] = x9193;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9192))[0]);

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
  void *const _env9198 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9196 = prim_car(lst);
    void *const lst9199 = prim_cdr(lst);
    void *const x9197 = apply_prim_positive_u63(lst9199);
    arg_buffer[1] = kont9196;
    arg_buffer[2] = x9197;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9196))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9196 = arg_buffer[2];
    void *const x9197 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9196;
    arg_buffer[2] = x9197;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9196))[0]);

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
  void *const _env9202 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9200 = prim_car(lst);
    void *const lst9203 = prim_cdr(lst);
    void *const x9201 = apply_prim_negative_u63(lst9203);
    arg_buffer[1] = kont9200;
    arg_buffer[2] = x9201;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9200))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9200 = arg_buffer[2];
    void *const x9201 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9200;
    arg_buffer[2] = x9201;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9200))[0]);

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
  void *const _env9206 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9204 = prim_car(lst);
    void *const lst9207 = prim_cdr(lst);
    void *const x9205 = apply_prim_list(lst9207);
    arg_buffer[1] = kont9204;
    arg_buffer[2] = x9205;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9204))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9204 = arg_buffer[2];
    void *const x9205 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9204;
    arg_buffer[2] = x9205;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9204))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void even_u63_fptr() // even? -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8901 = arg_buffer[1];
  // reading env and args
  void *const kont8857 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8715 = int8989;
  void *const id_8716 = int8968;
  void *const id_8717 = apply_prim_modulo_2(x, id_8716);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8715, id_8717);
  arg_buffer[1] = kont8857;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8857))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void even_u63_fptr(void *_8901, void *kont8857, void *x) // even?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8715 = int8989;
  void *const id_8716 = int8968;
  void *const id_8717 = apply_prim_modulo_2(x, id_8716);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8715, id_8717);
  arg_buffer[1] = kont8857;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8857))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void odd_u63_fptr() // odd? -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8902 = arg_buffer[1];
  // reading env and args
  void *const kont8858 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8718 = int8988;
  void *const id_8719 = int8968;
  void *const id_8720 = apply_prim_modulo_2(x, id_8719);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8718, id_8720);
  arg_buffer[1] = kont8858;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void odd_u63_fptr(void *_8902, void *kont8858, void *x) // odd?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8718 = int8988;
  void *const id_8719 = int8968;
  void *const id_8720 = apply_prim_modulo_2(x, id_8719);

  // clo-app
  arg_buffer[2] = apply_prim_equal_u63_2(id_8718, id_8720);
  arg_buffer[1] = kont8858;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void list_u45ref_fptr() // list-ref -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8903 = arg_buffer[1];
  // reading env and args
  void *const kont8859 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8721 = int8989;
  void *const id_8722 = apply_prim__u61_2(id_8721, n);

  // if-clause
  bool if_guard9208 = is_true(id_8722);
  if (if_guard9208) {
    void *const xy8723 = apply_prim_car_1(lst);

    // clo-app
    arg_buffer[1] = kont8859;
    arg_buffer[2] = xy8723;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8859))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8724 = apply_prim_cdr_1(lst);
    void *const id_8725 = int8988;
    void *const id_8726 = apply_prim__u45_2(n, id_8725);

    // clo-app
    list_u45ref_fptr(list_u45ref, kont8859, id_8724, id_8726);
  }
}

void list_u45ref_fptr(void *_8903, void *kont8859, void *lst,
                      void *n) // list-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8721 = int8989;
  void *const id_8722 = apply_prim__u61_2(id_8721, n);

  // if-clause
  bool if_guard9209 = is_true(id_8722);
  if (if_guard9209) {
    void *const xy8723 = apply_prim_car_1(lst);

    // clo-app
    arg_buffer[1] = kont8859;
    arg_buffer[2] = xy8723;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8859))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8724 = apply_prim_cdr_1(lst);
    void *const id_8725 = int8988;
    void *const id_8726 = apply_prim__u45_2(n, id_8725);

    // clo-app
    list_u45ref_fptr(list_u45ref, kont8859, id_8724, id_8726);
  }
}

void lam8904_fptr() // lam8904 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8905 = arg_buffer[1];
  // reading env and args
  void *const id_8730 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8905);
  void *const lst = decode_clo_array[3];
  void *const item = decode_clo_array[2];
  void *const kont8860 = decode_clo_array[1];

  // if-clause
  bool if_guard9210 = is_true(id_8730);
  if (if_guard9210) {
    void *const xy8731 = bool_f8982;

    // clo-app
    arg_buffer[1] = kont8860;
    arg_buffer[2] = xy8731;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8732 = apply_prim_car_1(lst);
    void *const id_8733 = apply_prim_equal_u63_2(item, id_8732);

    // if-clause
    bool if_guard9211 = is_true(id_8733);
    if (if_guard9211) {

      // clo-app
      arg_buffer[1] = kont8860;
      arg_buffer[2] = lst;
      arg_buffer[0] = int8992;
      auto function_ptr =
          reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const id_8734 = apply_prim_cdr_1(lst);

      // clo-app
      member_fptr(member, kont8860, item, id_8734);
    }
  }
}

void member_fptr() // member -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8906 = arg_buffer[1];
  // reading env and args
  void *const kont8860 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8727 = apply_prim_null_u63_1(item);

  // creating new closure instance
  void **clo9212 = alloc_clo(lam8904_fptr, 3);

  // setting env list
  clo9212[1] = kont8860;
  clo9212[2] = item;
  clo9212[3] = lst;
  void *f8861 = encode_clo(clo9212);

  // if-clause
  bool if_guard9213 = is_true(id_8727);
  if (if_guard9213) {
    void *const xy8728 = apply_prim_null_u63_1(item);

    // clo-app
    arg_buffer[1] = f8861;
    arg_buffer[2] = xy8728;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8861))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const xy8729 = apply_prim_null_u63_1(lst);

    // clo-app
    arg_buffer[1] = f8861;
    arg_buffer[2] = xy8729;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8861))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void member_fptr(void *_8906, void *kont8860, void *item, void *lst) // member
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8727 = apply_prim_null_u63_1(item);

  // creating new closure instance
  void **clo9214 = alloc_clo(lam8904_fptr, 3);

  // setting env list
  clo9214[1] = kont8860;
  clo9214[2] = item;
  clo9214[3] = lst;
  void *f8861 = encode_clo(clo9214);

  // if-clause
  bool if_guard9215 = is_true(id_8727);
  if (if_guard9215) {
    void *const xy8728 = apply_prim_null_u63_1(item);

    // clo-app
    arg_buffer[1] = f8861;
    arg_buffer[2] = xy8728;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8861))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const xy8729 = apply_prim_null_u63_1(lst);

    // clo-app
    arg_buffer[1] = f8861;
    arg_buffer[2] = xy8729;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8861))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void member_u63_fptr() // member? -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8907 = arg_buffer[1];
  // reading env and args
  void *const kont8862 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8735 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9216 = is_true(id_8735);
  if (if_guard9216) {
    void *const xy8736 = bool_f8982;

    // clo-app
    arg_buffer[1] = kont8862;
    arg_buffer[2] = xy8736;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8737 = apply_prim_car_1(lst);
    void *const id_8738 = apply_prim_equal_u63_2(id_8737, x);

    // if-clause
    bool if_guard9217 = is_true(id_8738);
    if (if_guard9217) {
      void *const xy8739 = bool_t8984;

      // clo-app
      arg_buffer[1] = kont8862;
      arg_buffer[2] = xy8739;
      arg_buffer[0] = int8992;
      auto function_ptr =
          reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const id_8740 = apply_prim_cdr_1(lst);

      // clo-app
      member_u63_fptr(member_u63, kont8862, x, id_8740);
    }
  }
}

void member_u63_fptr(void *_8907, void *kont8862, void *x, void *lst) // member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8735 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9218 = is_true(id_8735);
  if (if_guard9218) {
    void *const xy8736 = bool_f8982;

    // clo-app
    arg_buffer[1] = kont8862;
    arg_buffer[2] = xy8736;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8737 = apply_prim_car_1(lst);
    void *const id_8738 = apply_prim_equal_u63_2(id_8737, x);

    // if-clause
    bool if_guard9219 = is_true(id_8738);
    if (if_guard9219) {
      void *const xy8739 = bool_t8984;

      // clo-app
      arg_buffer[1] = kont8862;
      arg_buffer[2] = xy8739;
      arg_buffer[0] = int8992;
      auto function_ptr =
          reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const id_8740 = apply_prim_cdr_1(lst);

      // clo-app
      member_u63_fptr(member_u63, kont8862, x, id_8740);
    }
  }
}

void lam8908_fptr() // lam8908 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8909 = arg_buffer[1];
  // reading env and args
  void *const id_8745 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8909);
  void *const id_8743 = decode_clo_array[2];
  void *const kont8863 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(id_8743, id_8745);
  arg_buffer[1] = kont8863;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void length_fptr() // length -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8910 = arg_buffer[1];
  // reading env and args
  void *const kont8863 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8741 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9220 = is_true(id_8741);
  if (if_guard9220) {
    void *const xy8742 = int8989;

    // clo-app
    arg_buffer[1] = kont8863;
    arg_buffer[2] = xy8742;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8743 = int8988;
    void *const id_8744 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9221 = alloc_clo(lam8908_fptr, 2);

    // setting env list
    clo9221[1] = kont8863;
    clo9221[2] = id_8743;
    void *f8864 = encode_clo(clo9221);

    // clo-app
    length_fptr(length, f8864, id_8744);
  }
}

void length_fptr(void *_8910, void *kont8863, void *lst) // length
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8741 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9222 = is_true(id_8741);
  if (if_guard9222) {
    void *const xy8742 = int8989;

    // clo-app
    arg_buffer[1] = kont8863;
    arg_buffer[2] = xy8742;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8743 = int8988;
    void *const id_8744 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9223 = alloc_clo(lam8908_fptr, 2);

    // setting env list
    clo9223[1] = kont8863;
    clo9223[2] = id_8743;
    void *f8864 = encode_clo(clo9223);

    // clo-app
    length_fptr(length, f8864, id_8744);
  }
}

void lam8911_fptr() // lam8911 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8912 = arg_buffer[1];
  // reading env and args
  void *const id_8751 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8912);
  void *const id_8749 = decode_clo_array[2];
  void *const kont8865 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8749, id_8751);
  arg_buffer[1] = kont8865;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8865))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8913_fptr() // lam8913 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8914 = arg_buffer[1];
  // reading env and args
  void *const id_8749 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8914);
  void *const lst = decode_clo_array[3];
  void *const proc = decode_clo_array[2];
  void *const kont8865 = decode_clo_array[1];
  void *const id_8750 = apply_prim_cdr_1(lst);

  // creating new closure instance
  void **clo9224 = alloc_clo(lam8911_fptr, 2);

  // setting env list
  clo9224[1] = kont8865;
  clo9224[2] = id_8749;
  void *f8866 = encode_clo(clo9224);

  // clo-app
  map_fptr(map, f8866, proc, id_8750);
}

void map_fptr() // map -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8915 = arg_buffer[1];
  // reading env and args
  void *const kont8865 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8746 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9225 = is_true(id_8746);
  if (if_guard9225) {
    void *const xy8747 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8865;
    arg_buffer[2] = xy8747;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8865))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8748 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9226 = alloc_clo(lam8913_fptr, 3);

    // setting env list
    clo9226[1] = kont8865;
    clo9226[2] = proc;
    clo9226[3] = lst;
    void *f8867 = encode_clo(clo9226);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8867;
    arg_buffer[3] = id_8748;
    arg_buffer[0] = int8993;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void map_fptr(void *_8915, void *kont8865, void *proc, void *lst) // map
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8746 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9227 = is_true(id_8746);
  if (if_guard9227) {
    void *const xy8747 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8865;
    arg_buffer[2] = xy8747;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8865))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8748 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9228 = alloc_clo(lam8913_fptr, 3);

    // setting env list
    clo9228[1] = kont8865;
    clo9228[2] = proc;
    clo9228[3] = lst;
    void *f8867 = encode_clo(clo9228);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8867;
    arg_buffer[3] = id_8748;
    arg_buffer[0] = int8993;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8916_fptr() // lam8916 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8917 = arg_buffer[1];
  // reading env and args
  void *const id_8758 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8917);
  void *const kont8868 = decode_clo_array[2];
  void *const id_8756 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8756, id_8758);
  arg_buffer[1] = kont8868;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8918_fptr() // lam8918 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8919 = arg_buffer[1];
  // reading env and args
  void *const id_8755 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8919);
  void *const kont8868 = decode_clo_array[3];
  void *const lst = decode_clo_array[2];
  void *const op = decode_clo_array[1];

  // if-clause
  bool if_guard9229 = is_true(id_8755);
  if (if_guard9229) {
    void *const id_8756 = apply_prim_car_1(lst);
    void *const id_8757 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9230 = alloc_clo(lam8916_fptr, 2);

    // setting env list
    clo9230[1] = id_8756;
    clo9230[2] = kont8868;
    void *f8869 = encode_clo(clo9230);

    // clo-app
    filter_fptr(filter, f8869, op, id_8757);
  } else {
    void *const id_8759 = apply_prim_cdr_1(lst);

    // clo-app
    filter_fptr(filter, kont8868, op, id_8759);
  }
}

void filter_fptr() // filter -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8920 = arg_buffer[1];
  // reading env and args
  void *const kont8868 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8752 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9231 = is_true(id_8752);
  if (if_guard9231) {
    void *const xy8753 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8868;
    arg_buffer[2] = xy8753;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8754 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9232 = alloc_clo(lam8918_fptr, 3);

    // setting env list
    clo9232[1] = op;
    clo9232[2] = lst;
    clo9232[3] = kont8868;
    void *f8870 = encode_clo(clo9232);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8870;
    arg_buffer[3] = id_8754;
    arg_buffer[0] = int8993;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void filter_fptr(void *_8920, void *kont8868, void *op, void *lst) // filter
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8752 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9233 = is_true(id_8752);
  if (if_guard9233) {
    void *const xy8753 = apply_prim_list_0();

    // clo-app
    arg_buffer[1] = kont8868;
    arg_buffer[2] = xy8753;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8754 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9234 = alloc_clo(lam8918_fptr, 3);

    // setting env list
    clo9234[1] = op;
    clo9234[2] = lst;
    clo9234[3] = kont8868;
    void *f8870 = encode_clo(clo9234);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8870;
    arg_buffer[3] = id_8754;
    arg_buffer[0] = int8993;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void drop_fptr() // drop -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8921 = arg_buffer[1];
  // reading env and args
  void *const kont8871 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8760 = int8989;
  void *const id_8761 = apply_prim__u61_2(n, id_8760);

  // if-clause
  bool if_guard9235 = is_true(id_8761);
  if (if_guard9235) {

    // clo-app
    arg_buffer[1] = kont8871;
    arg_buffer[2] = lst;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8871))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8762 = apply_prim_cdr_1(lst);
    void *const id_8763 = int8988;
    void *const id_8764 = apply_prim__u45_2(n, id_8763);

    // clo-app
    drop_fptr(drop, kont8871, id_8762, id_8764);
  }
}

void drop_fptr(void *_8921, void *kont8871, void *lst, void *n) // drop
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8760 = int8989;
  void *const id_8761 = apply_prim__u61_2(n, id_8760);

  // if-clause
  bool if_guard9236 = is_true(id_8761);
  if (if_guard9236) {

    // clo-app
    arg_buffer[1] = kont8871;
    arg_buffer[2] = lst;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8871))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8762 = apply_prim_cdr_1(lst);
    void *const id_8763 = int8988;
    void *const id_8764 = apply_prim__u45_2(n, id_8763);

    // clo-app
    drop_fptr(drop, kont8871, id_8762, id_8764);
  }
}

void lam8922_fptr() // lam8922 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8923 = arg_buffer[1];
  // reading env and args
  void *const id_8767 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8923);
  void *const lst = decode_clo_array[3];
  void *const kont8872 = decode_clo_array[2];
  void *const fun = decode_clo_array[1];
  void *const id_8768 = apply_prim_cdr_1(lst);

  // clo-app
  foldl_fptr(foldl, kont8872, fun, id_8767, id_8768);
}

void foldl_fptr() // foldl -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8924 = arg_buffer[1];
  // reading env and args
  void *const kont8872 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8765 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9237 = is_true(id_8765);
  if (if_guard9237) {

    // clo-app
    arg_buffer[1] = kont8872;
    arg_buffer[2] = acc;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8766 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9238 = alloc_clo(lam8922_fptr, 3);

    // setting env list
    clo9238[1] = fun;
    clo9238[2] = kont8872;
    clo9238[3] = lst;
    void *f8873 = encode_clo(clo9238);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8873;
    arg_buffer[3] = id_8766;
    arg_buffer[4] = acc;
    arg_buffer[0] = int8994;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void foldl_fptr(void *_8924, void *kont8872, void *fun, void *acc,
                void *lst) // foldl
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8765 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9239 = is_true(id_8765);
  if (if_guard9239) {

    // clo-app
    arg_buffer[1] = kont8872;
    arg_buffer[2] = acc;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8766 = apply_prim_car_1(lst);

    // creating new closure instance
    void **clo9240 = alloc_clo(lam8922_fptr, 3);

    // setting env list
    clo9240[1] = fun;
    clo9240[2] = kont8872;
    clo9240[3] = lst;
    void *f8873 = encode_clo(clo9240);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8873;
    arg_buffer[3] = id_8766;
    arg_buffer[4] = acc;
    arg_buffer[0] = int8994;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8925_fptr() // lam8925 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8926 = arg_buffer[1];
  // reading env and args
  void *const id_8772 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8926);
  void *const kont8874 = decode_clo_array[3];
  void *const fun = decode_clo_array[2];
  void *const id_8770 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = fun;
  arg_buffer[2] = kont8874;
  arg_buffer[3] = id_8770;
  arg_buffer[4] = id_8772;
  arg_buffer[0] = int8994;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void foldr_fptr() // foldr -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8927 = arg_buffer[1];
  // reading env and args
  void *const kont8874 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8769 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9241 = is_true(id_8769);
  if (if_guard9241) {

    // clo-app
    arg_buffer[1] = kont8874;
    arg_buffer[2] = acc;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8874))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8770 = apply_prim_car_1(lst);
    void *const id_8771 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9242 = alloc_clo(lam8925_fptr, 3);

    // setting env list
    clo9242[1] = id_8770;
    clo9242[2] = fun;
    clo9242[3] = kont8874;
    void *f8875 = encode_clo(clo9242);

    // clo-app
    foldr_fptr(foldr, f8875, fun, acc, id_8771);
  }
}

void foldr_fptr(void *_8927, void *kont8874, void *fun, void *acc,
                void *lst) // foldr
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8769 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9243 = is_true(id_8769);
  if (if_guard9243) {

    // clo-app
    arg_buffer[1] = kont8874;
    arg_buffer[2] = acc;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8874))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8770 = apply_prim_car_1(lst);
    void *const id_8771 = apply_prim_cdr_1(lst);

    // creating new closure instance
    void **clo9244 = alloc_clo(lam8925_fptr, 3);

    // setting env list
    clo9244[1] = id_8770;
    clo9244[2] = fun;
    clo9244[3] = kont8874;
    void *f8875 = encode_clo(clo9244);

    // clo-app
    foldr_fptr(foldr, f8875, fun, acc, id_8771);
  }
}

void reverse_u45helper_fptr() // reverse-helper -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8928 = arg_buffer[1];
  // reading env and args
  void *const kont8876 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8773 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9245 = is_true(id_8773);
  if (if_guard9245) {

    // clo-app
    arg_buffer[1] = kont8876;
    arg_buffer[2] = lst2;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8876))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8774 = apply_prim_cdr_1(lst);
    void *const id_8775 = apply_prim_car_1(lst);
    void *const id_8776 = apply_prim_cons_2(id_8775, lst2);

    // clo-app
    reverse_u45helper_fptr(reverse_u45helper, kont8876, id_8774, id_8776);
  }
}

void reverse_u45helper_fptr(void *_8928, void *kont8876, void *lst,
                            void *lst2) // reverse-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8773 = apply_prim_null_u63_1(lst);

  // if-clause
  bool if_guard9246 = is_true(id_8773);
  if (if_guard9246) {

    // clo-app
    arg_buffer[1] = kont8876;
    arg_buffer[2] = lst2;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8876))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8774 = apply_prim_cdr_1(lst);
    void *const id_8775 = apply_prim_car_1(lst);
    void *const id_8776 = apply_prim_cons_2(id_8775, lst2);

    // clo-app
    reverse_u45helper_fptr(reverse_u45helper, kont8876, id_8774, id_8776);
  }
}

void reverse_fptr() // reverse -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8929 = arg_buffer[1];
  // reading env and args
  void *const kont8877 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8777 = apply_prim_list_0();

  // clo-app
  reverse_u45helper_fptr(reverse_u45helper, kont8877, lst, id_8777);
}

void reverse_fptr(void *_8929, void *kont8877, void *lst) // reverse
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8777 = apply_prim_list_0();

  // clo-app
  reverse_u45helper_fptr(reverse_u45helper, kont8877, lst, id_8777);
}

void lam8930_fptr() // lam8930 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8931 = arg_buffer[1];
  // reading env and args
  void *const id_8781 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8931);
  void *const id_8779 = decode_clo_array[2];
  void *const kont8878 = decode_clo_array[1];

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8779, id_8781);
  arg_buffer[1] = kont8878;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void append1_fptr() // append1 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8932 = arg_buffer[1];
  // reading env and args
  void *const kont8878 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8778 = apply_prim_null_u63_1(lhs);

  // if-clause
  bool if_guard9247 = is_true(id_8778);
  if (if_guard9247) {

    // clo-app
    arg_buffer[1] = kont8878;
    arg_buffer[2] = rhs;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8779 = apply_prim_car_1(lhs);
    void *const id_8780 = apply_prim_cdr_1(lhs);

    // creating new closure instance
    void **clo9248 = alloc_clo(lam8930_fptr, 2);

    // setting env list
    clo9248[1] = kont8878;
    clo9248[2] = id_8779;
    void *f8879 = encode_clo(clo9248);

    // clo-app
    append1_fptr(append1, f8879, id_8780, rhs);
  }
}

void append1_fptr(void *_8932, void *kont8878, void *lhs, void *rhs) // append1
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8778 = apply_prim_null_u63_1(lhs);

  // if-clause
  bool if_guard9249 = is_true(id_8778);
  if (if_guard9249) {

    // clo-app
    arg_buffer[1] = kont8878;
    arg_buffer[2] = rhs;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8779 = apply_prim_car_1(lhs);
    void *const id_8780 = apply_prim_cdr_1(lhs);

    // creating new closure instance
    void **clo9250 = alloc_clo(lam8930_fptr, 2);

    // setting env list
    clo9250[1] = kont8878;
    clo9250[2] = id_8779;
    void *f8879 = encode_clo(clo9250);

    // clo-app
    append1_fptr(append1, f8879, id_8780, rhs);
  }
}

void lam8933_fptr() // lam8933 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8934 = arg_buffer[1];
  // reading env and args
  void *const id_8788 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8934);
  void *const kont8880 = decode_clo_array[2];
  void *const id_8786 = decode_clo_array[1];

  // clo-app
  foldr_fptr(foldr, kont8880, append1, id_8786, id_8788);
}

void lam8935_fptr() // lam8935 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8936 = arg_buffer[1];
  // reading env and args
  void *const id_8783 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8936);
  void *const kont8880 = decode_clo_array[4];
  void *const xs = decode_clo_array[3];
  void *const x = decode_clo_array[2];
  void *const id_8782 = decode_clo_array[1];
  void *const id_8784 = apply_prim__u61_2(id_8782, id_8783);

  // if-clause
  bool if_guard9251 = is_true(id_8784);
  if (if_guard9251) {
    void *const id_8785 = apply_prim_car_1(x);

    // clo-app
    append1_fptr(append1, kont8880, xs, id_8785);
  } else {
    void *const id_8786 = apply_prim_list_0();
    void *const id_8787 = apply_prim_list_1(xs);

    // creating new closure instance
    void **clo9252 = alloc_clo(lam8933_fptr, 2);

    // setting env list
    clo9252[1] = id_8786;
    clo9252[2] = kont8880;
    void *f8881 = encode_clo(clo9252);

    // clo-app
    append1_fptr(append1, f8881, id_8787, x);
  }
}

void lam8937_fptr() // lam8937 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8938 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8938);
  void *const kont8880 = decode_clo_array[2];
  void *const xs = decode_clo_array[1];
  void *const id_8782 = int8988;

  // creating new closure instance
  void **clo9253 = alloc_clo(lam8935_fptr, 4);

  // setting env list
  clo9253[1] = id_8782;
  clo9253[2] = x;
  clo9253[3] = xs;
  clo9253[4] = kont8880;
  void *f8882 = encode_clo(clo9253);

  // clo-app
  length_fptr(length, f8882, x);
}

void append_fptr() // append
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8939 = arg_buffer[1];
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

  void *const kont8880 = apply_prim_car_1(vargs);
  void *const vargs8900 = apply_prim_cdr_1(vargs);
  void *const xs = apply_prim_car_1(vargs8900);
  void *const vargs8714 = apply_prim_cdr_1(vargs8900);

  // creating new closure instance
  void **clo9254 = alloc_clo(lam8937_fptr, 2);

  // setting env list
  clo9254[1] = xs;
  clo9254[2] = kont8880;
  void *f8883 = encode_clo(clo9254);

  // clo-app
  arg_buffer[1] = f8883;
  arg_buffer[2] = vargs8714;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8883))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8940_fptr() // lam8940 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8941 = arg_buffer[1];
  // reading env and args
  void *const xy8791 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8941);
  void *const kont8884 = decode_clo_array[1];

  // clo-app
  arg_buffer[1] = kont8884;
  arg_buffer[2] = xy8791;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8884))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void take_u45helper_fptr() // take-helper -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8942 = arg_buffer[1];
  // reading env and args
  void *const kont8884 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8789 = int8989;
  void *const id_8790 = apply_prim__u61_2(n, id_8789);

  // if-clause
  bool if_guard9255 = is_true(id_8790);
  if (if_guard9255) {

    // creating new closure instance
    void **clo9256 = alloc_clo(lam8940_fptr, 1);

    // setting env list
    clo9256[1] = kont8884;
    void *f8885 = encode_clo(clo9256);

    // clo-app
    reverse_fptr(reverse, f8885, lst2);
  } else {
    void *const id_8792 = apply_prim_cdr_1(lst);
    void *const id_8793 = int8988;
    void *const id_8794 = apply_prim__u45_2(n, id_8793);
    void *const id_8795 = apply_prim_car_1(lst);
    void *const id_8796 = apply_prim_cons_2(id_8795, lst2);

    // clo-app
    take_u45helper_fptr(take_u45helper, kont8884, id_8792, id_8794, id_8796);
  }
}

void take_u45helper_fptr(void *_8942, void *kont8884, void *lst, void *n,
                         void *lst2) // take-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8789 = int8989;
  void *const id_8790 = apply_prim__u61_2(n, id_8789);

  // if-clause
  bool if_guard9257 = is_true(id_8790);
  if (if_guard9257) {

    // creating new closure instance
    void **clo9258 = alloc_clo(lam8940_fptr, 1);

    // setting env list
    clo9258[1] = kont8884;
    void *f8885 = encode_clo(clo9258);

    // clo-app
    reverse_fptr(reverse, f8885, lst2);
  } else {
    void *const id_8792 = apply_prim_cdr_1(lst);
    void *const id_8793 = int8988;
    void *const id_8794 = apply_prim__u45_2(n, id_8793);
    void *const id_8795 = apply_prim_car_1(lst);
    void *const id_8796 = apply_prim_cons_2(id_8795, lst2);

    // clo-app
    take_u45helper_fptr(take_u45helper, kont8884, id_8792, id_8794, id_8796);
  }
}

void take_fptr() // take -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8943 = arg_buffer[1];
  // reading env and args
  void *const kont8886 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8797 = apply_prim_list_0();

  // clo-app
  take_u45helper_fptr(take_u45helper, kont8886, lst, n, id_8797);
}

void take_fptr(void *_8943, void *kont8886, void *lst, void *n) // take
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8797 = apply_prim_list_0();

  // clo-app
  take_u45helper_fptr(take_u45helper, kont8886, lst, n, id_8797);
}

void lam8944_fptr() // lam8944 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8945 = arg_buffer[1];
  // reading env and args
  void *const id_8811 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8945);
  void *const dist = decode_clo_array[4];
  void *const kont8887 = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9259 = is_true(id_8811);
  if (if_guard9259) {
    void *const id_8812 = int8988;
    void *const id_8813 = apply_prim__u43_2(dist, id_8812);
    void *const id_8814 = apply_prim_cdr_1(placed);

    // clo-app
    ok_u63_fptr(ok_u63, kont8887, row, id_8813, id_8814);
  } else {
    void *const xy8815 = bool_f8982;

    // clo-app
    arg_buffer[1] = kont8887;
    arg_buffer[2] = xy8815;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8887))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8946_fptr() // lam8946 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8947 = arg_buffer[1];
  // reading env and args
  void *const id_8805 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8947);
  void *const dist = decode_clo_array[4];
  void *const kont8887 = decode_clo_array[3];
  void *const row = decode_clo_array[2];
  void *const placed = decode_clo_array[1];

  // if-clause
  bool if_guard9260 = is_true(id_8805);
  if (if_guard9260) {
    void *const id_8806 = apply_prim_car_1(placed);
    void *const id_8807 = apply_prim__u45_2(row, dist);
    void *const id_8808 = apply_prim__u61_2(id_8806, id_8807);

    // creating new closure instance
    void **clo9261 = alloc_clo(lam8944_fptr, 4);

    // setting env list
    clo9261[1] = placed;
    clo9261[2] = row;
    clo9261[3] = kont8887;
    clo9261[4] = dist;
    void *f8888 = encode_clo(clo9261);

    // if-clause
    bool if_guard9262 = is_true(id_8808);
    if (if_guard9262) {
      void *const xy8809 = bool_f8982;

      // clo-app
      arg_buffer[1] = f8888;
      arg_buffer[2] = xy8809;
      arg_buffer[0] = int8992;
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8888))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8810 = bool_t8984;

      // clo-app
      arg_buffer[1] = f8888;
      arg_buffer[2] = xy8810;
      arg_buffer[0] = int8992;
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8888))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }

  } else {
    void *const xy8816 = bool_f8982;

    // clo-app
    arg_buffer[1] = kont8887;
    arg_buffer[2] = xy8816;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8887))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void ok_u63_fptr() // ok? -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8948 = arg_buffer[1];
  // reading env and args
  void *const kont8887 = arg_buffer[2];
  void *const row = arg_buffer[3];
  void *const dist = arg_buffer[4];
  void *const placed = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8798 = apply_prim_null_u63_1(placed);

  // if-clause
  bool if_guard9263 = is_true(id_8798);
  if (if_guard9263) {
    void *const xy8799 = bool_t8984;

    // clo-app
    arg_buffer[1] = kont8887;
    arg_buffer[2] = xy8799;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8887))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8800 = apply_prim_car_1(placed);
    void *const id_8801 = apply_prim__u43_2(row, dist);
    void *const id_8802 = apply_prim__u61_2(id_8800, id_8801);

    // creating new closure instance
    void **clo9264 = alloc_clo(lam8946_fptr, 4);

    // setting env list
    clo9264[1] = placed;
    clo9264[2] = row;
    clo9264[3] = kont8887;
    clo9264[4] = dist;
    void *f8889 = encode_clo(clo9264);

    // if-clause
    bool if_guard9265 = is_true(id_8802);
    if (if_guard9265) {
      void *const xy8803 = bool_f8982;

      // clo-app
      arg_buffer[1] = f8889;
      arg_buffer[2] = xy8803;
      arg_buffer[0] = int8992;
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8889))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8804 = bool_t8984;

      // clo-app
      arg_buffer[1] = f8889;
      arg_buffer[2] = xy8804;
      arg_buffer[0] = int8992;
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8889))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }
  }
}

void ok_u63_fptr(void *_8948, void *kont8887, void *row, void *dist,
                 void *placed) // ok?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8798 = apply_prim_null_u63_1(placed);

  // if-clause
  bool if_guard9266 = is_true(id_8798);
  if (if_guard9266) {
    void *const xy8799 = bool_t8984;

    // clo-app
    arg_buffer[1] = kont8887;
    arg_buffer[2] = xy8799;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8887))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8800 = apply_prim_car_1(placed);
    void *const id_8801 = apply_prim__u43_2(row, dist);
    void *const id_8802 = apply_prim__u61_2(id_8800, id_8801);

    // creating new closure instance
    void **clo9267 = alloc_clo(lam8946_fptr, 4);

    // setting env list
    clo9267[1] = placed;
    clo9267[2] = row;
    clo9267[3] = kont8887;
    clo9267[4] = dist;
    void *f8889 = encode_clo(clo9267);

    // if-clause
    bool if_guard9268 = is_true(id_8802);
    if (if_guard9268) {
      void *const xy8803 = bool_f8982;

      // clo-app
      arg_buffer[1] = f8889;
      arg_buffer[2] = xy8803;
      arg_buffer[0] = int8992;
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8889))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    } else {
      void *const xy8804 = bool_t8984;

      // clo-app
      arg_buffer[1] = f8889;
      arg_buffer[2] = xy8804;
      arg_buffer[0] = int8992;
      auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8889))[0]);

      // calling next procedure using a function pointer
      function_ptr();
    }
  }
}

void lam8949_fptr() // lam8949 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8950 = arg_buffer[1];
  // reading env and args
  void *const id_8835 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8950);
  void *const stack = decode_clo_array[4];
  void *const f8891 = decode_clo_array[3];
  void *const z = decode_clo_array[2];
  void *const x = decode_clo_array[1];
  void *const id_8836 = apply_prim_list_0();
  void *const id_8837 = apply_prim_car_1(x);
  void *const id_8838 = apply_prim_cons_2(id_8837, z);
  void *const id_8839 = apply_prim_list_3(id_8835, id_8836, id_8838);
  void *const id_8840 = apply_prim_cdr_1(stack);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(id_8839, id_8840);
  arg_buffer[1] = f8891;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8891))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void lam8951_fptr() // lam8951 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8952 = arg_buffer[1];
  // reading env and args
  void *const id_8842 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8952);
  void *const count = decode_clo_array[3];
  void *const kont8890 = decode_clo_array[2];
  void *const id_8830 = decode_clo_array[1];
  void *const id_8843 = apply_prim_cons_2(id_8830, id_8842);

  // clo-app
  q_u45helper_fptr(q_u45helper, kont8890, id_8843, count);
}

void lam8953_fptr() // lam8953 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8954 = arg_buffer[1];
  // reading env and args
  void *const id_8833 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8954);
  void *const stack = decode_clo_array[7];
  void *const count = decode_clo_array[6];
  void *const kont8890 = decode_clo_array[5];
  void *const z = decode_clo_array[4];
  void *const y = decode_clo_array[3];
  void *const x = decode_clo_array[2];
  void *const id_8830 = decode_clo_array[1];

  // creating new closure instance
  void **clo9269 = alloc_clo(lam8951_fptr, 3);

  // setting env list
  clo9269[1] = id_8830;
  clo9269[2] = kont8890;
  clo9269[3] = count;
  void *f8891 = encode_clo(clo9269);

  // if-clause
  bool if_guard9270 = is_true(id_8833);
  if (if_guard9270) {
    void *const id_8834 = apply_prim_cdr_1(x);

    // creating new closure instance
    void **clo9271 = alloc_clo(lam8949_fptr, 4);

    // setting env list
    clo9271[1] = x;
    clo9271[2] = z;
    clo9271[3] = f8891;
    clo9271[4] = stack;
    void *f8892 = encode_clo(clo9271);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f8892;
    arg_buffer[3] = id_8834;
    arg_buffer[4] = y;
    arg_buffer[0] = int8994;
    append_fptr();
  } else {
    void *const xy8841 = apply_prim_cdr_1(stack);

    // clo-app
    arg_buffer[1] = f8891;
    arg_buffer[2] = xy8841;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8891))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void lam8955_fptr() // lam8955 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8956 = arg_buffer[1];
  // reading env and args
  void *const z = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8956);
  void *const stack = decode_clo_array[5];
  void *const count = decode_clo_array[4];
  void *const kont8890 = decode_clo_array[3];
  void *const y = decode_clo_array[2];
  void *const x = decode_clo_array[1];
  void *const id_8821 = apply_prim_null_u63_1(x);

  // if-clause
  bool if_guard9272 = is_true(id_8821);
  if (if_guard9272) {
    void *const id_8822 = apply_prim_null_u63_1(y);

    // if-clause
    bool if_guard9273 = is_true(id_8822);
    if (if_guard9273) {
      void *const id_8823 = apply_prim_cdr_1(stack);
      void *const id_8824 = int8988;
      void *const id_8825 = apply_prim__u43_2(count, id_8824);

      // clo-app
      q_u45helper_fptr(q_u45helper, kont8890, id_8823, id_8825);
    } else {
      void *const id_8826 = apply_prim_cdr_1(stack);

      // clo-app
      q_u45helper_fptr(q_u45helper, kont8890, id_8826, count);
    }

  } else {
    void *const id_8827 = apply_prim_cdr_1(x);
    void *const id_8828 = apply_prim_car_1(x);
    void *const id_8829 = apply_prim_cons_2(id_8828, y);
    void *const id_8830 = apply_prim_list_3(id_8827, id_8829, z);
    void *const id_8831 = apply_prim_car_1(x);
    void *const id_8832 = int8988;

    // creating new closure instance
    void **clo9274 = alloc_clo(lam8953_fptr, 7);

    // setting env list
    clo9274[1] = id_8830;
    clo9274[2] = x;
    clo9274[3] = y;
    clo9274[4] = z;
    clo9274[5] = kont8890;
    clo9274[6] = count;
    clo9274[7] = stack;
    void *f8893 = encode_clo(clo9274);

    // clo-app
    ok_u63_fptr(ok_u63, f8893, id_8831, id_8832, z);
  }
}

void lam8957_fptr() // lam8957 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8958 = arg_buffer[1];
  // reading env and args
  void *const y = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8958);
  void *const stack = decode_clo_array[5];
  void *const state = decode_clo_array[4];
  void *const count = decode_clo_array[3];
  void *const kont8890 = decode_clo_array[2];
  void *const x = decode_clo_array[1];

  // creating new closure instance
  void **clo9275 = alloc_clo(lam8955_fptr, 5);

  // setting env list
  clo9275[1] = x;
  clo9275[2] = y;
  clo9275[3] = kont8890;
  clo9275[4] = count;
  clo9275[5] = stack;
  void *f8894 = encode_clo(clo9275);

  void *const id_8819 = apply_prim_cdr_1(state);
  void *const id_8820 = apply_prim_cdr_1(id_8819);

  // clo-app
  arg_buffer[2] = apply_prim_car_1(id_8820);
  arg_buffer[1] = f8894;
  arg_buffer[0] = int8992;
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8894))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void q_u45helper_fptr() // q-helper -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8959 = arg_buffer[1];
  // reading env and args
  void *const kont8890 = arg_buffer[2];
  void *const stack = arg_buffer[3];
  void *const count = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8817 = apply_prim_null_u63_1(stack);

  // if-clause
  bool if_guard9276 = is_true(id_8817);
  if (if_guard9276) {

    // clo-app
    arg_buffer[1] = kont8890;
    arg_buffer[2] = count;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const state = apply_prim_car_1(stack);
    void *const x = apply_prim_car_1(state);

    // creating new closure instance
    void **clo9277 = alloc_clo(lam8957_fptr, 5);

    // setting env list
    clo9277[1] = x;
    clo9277[2] = kont8890;
    clo9277[3] = count;
    clo9277[4] = state;
    clo9277[5] = stack;
    void *f8895 = encode_clo(clo9277);

    void *const id_8818 = apply_prim_cdr_1(state);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(id_8818);
    arg_buffer[1] = f8895;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void q_u45helper_fptr(void *_8959, void *kont8890, void *stack,
                      void *count) // q-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8817 = apply_prim_null_u63_1(stack);

  // if-clause
  bool if_guard9278 = is_true(id_8817);
  if (if_guard9278) {

    // clo-app
    arg_buffer[1] = kont8890;
    arg_buffer[2] = count;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const state = apply_prim_car_1(stack);
    void *const x = apply_prim_car_1(state);

    // creating new closure instance
    void **clo9279 = alloc_clo(lam8957_fptr, 5);

    // setting env list
    clo9279[1] = x;
    clo9279[2] = kont8890;
    clo9279[3] = count;
    clo9279[4] = state;
    clo9279[5] = stack;
    void *f8895 = encode_clo(clo9279);

    void *const id_8818 = apply_prim_cdr_1(state);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(id_8818);
    arg_buffer[1] = f8895;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void iota1_fptr() // iota1 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8960 = arg_buffer[1];
  // reading env and args
  void *const kont8896 = arg_buffer[2];
  void *const n = arg_buffer[3];
  void *const l = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8844 = int8989;
  void *const id_8845 = apply_prim__u61_2(n, id_8844);

  // if-clause
  bool if_guard9280 = is_true(id_8845);
  if (if_guard9280) {

    // clo-app
    arg_buffer[1] = kont8896;
    arg_buffer[2] = l;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8896))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8846 = int8988;
    void *const id_8847 = apply_prim__u45_2(n, id_8846);
    void *const id_8848 = apply_prim_cons_2(n, l);

    // clo-app
    iota1_fptr(iota1, kont8896, id_8847, id_8848);
  }
}

void iota1_fptr(void *_8960, void *kont8896, void *n, void *l) // iota1
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8844 = int8989;
  void *const id_8845 = apply_prim__u61_2(n, id_8844);

  // if-clause
  bool if_guard9281 = is_true(id_8845);
  if (if_guard9281) {

    // clo-app
    arg_buffer[1] = kont8896;
    arg_buffer[2] = l;
    arg_buffer[0] = int8992;
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8896))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const id_8846 = int8988;
    void *const id_8847 = apply_prim__u45_2(n, id_8846);
    void *const id_8848 = apply_prim_cons_2(n, l);

    // clo-app
    iota1_fptr(iota1, kont8896, id_8847, id_8848);
  }
}

void lam8961_fptr() // lam8961 -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const env8962 = arg_buffer[1];
  // reading env and args
  void *const id_8850 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8962);
  void *const kont8897 = decode_clo_array[1];
  void *const id_8851 = apply_prim_list_0();
  void *const id_8852 = apply_prim_list_0();
  void *const id_8853 = apply_prim_list_3(id_8850, id_8851, id_8852);
  void *const id_8854 = apply_prim_list_1(id_8853);
  void *const id_8855 = int8989;

  // clo-app
  q_u45helper_fptr(q_u45helper, kont8897, id_8854, id_8855);
}

void nqueens_fptr() // nqueens -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8963 = arg_buffer[1];
  // reading env and args
  void *const kont8897 = arg_buffer[2];
  void *const n = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8849 = apply_prim_list_0();

  // creating new closure instance
  void **clo9282 = alloc_clo(lam8961_fptr, 1);

  // setting env list
  clo9282[1] = kont8897;
  void *f8898 = encode_clo(clo9282);

  // clo-app
  iota1_fptr(iota1, f8898, n, id_8849);
}

void nqueens_fptr(void *_8963, void *kont8897, void *n) // nqueens
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8849 = apply_prim_list_0();

  // creating new closure instance
  void **clo9283 = alloc_clo(lam8961_fptr, 1);

  // setting env list
  clo9283[1] = kont8897;
  void *f8898 = encode_clo(clo9283);

  // clo-app
  iota1_fptr(iota1, f8898, n, id_8849);
}

void brouhaha_main_fptr() // brouhaha_main -> generic version
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8964 = arg_buffer[1];
  // reading env and args
  void *const kont8899 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8856 = int8990;

  // clo-app
  nqueens_fptr(nqueens, kont8899, id_8856);
}

void brouhaha_main_fptr(void *_8964, void *kont8899) // brouhaha_main
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const id_8856 = int8990;

  // clo-app
  nqueens_fptr(nqueens, kont8899, id_8856);
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8989 = reinterpret_cast<void *>(encode_int(0));
  bool_t8984 = encode_bool(true);
  int8988 = reinterpret_cast<void *>(encode_int(1));
  bool_f8982 = encode_bool(false);
  int8968 = reinterpret_cast<void *>(encode_int(2));
  int8990 = reinterpret_cast<void *>(encode_int(14));

  // initializing global integer vars
  int8991 = reinterpret_cast<void *>(1);
  int8992 = reinterpret_cast<void *>(2);
  int8993 = reinterpret_cast<void *>(3);
  int8994 = reinterpret_cast<void *>(4);
  int8995 = reinterpret_cast<void *>(5);

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_fptr(nullptr, fhalt_clo);
}
