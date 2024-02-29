#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int8954;
void *float8958;
void *float8957;
void *float8959;
void *bool_t8947;
void *int8955;
void *bool_f8948;
void *int8943;

// declaring global integer variable
int int8960;
int int8961;
int int8962;
int int8963;
int int8964;

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
void even_u63_spec(void *_8891, void *kont8856, void *x); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr();                                     // odd?
void odd_u63_spec(void *_8892, void *kont8857, void *x); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void *_8893, void *kont8858, void *lst,
                      void *n); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8894_fptr();                             // lam8894
void lam8894_spec(void *env8895, void *id_8745); // lam8894
void *lam8894 = encode_clo(alloc_clo(lam8894_fptr, 0));

void member_fptr();                                                   // member
void member_spec(void *_8896, void *kont8859, void *item, void *lst); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void *_8897, void *kont8861, void *x,
                     void *lst); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8898_fptr();                             // lam8898
void lam8898_spec(void *env8899, void *id_8760); // lam8898
void *lam8898 = encode_clo(alloc_clo(lam8898_fptr, 0));

void length_fptr();                                       // length
void length_spec(void *_8900, void *kont8862, void *lst); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8901_fptr();                             // lam8901
void lam8901_spec(void *env8902, void *id_8766); // lam8901
void *lam8901 = encode_clo(alloc_clo(lam8901_fptr, 0));

void lam8903_fptr();                             // lam8903
void lam8903_spec(void *env8904, void *id_8764); // lam8903
void *lam8903 = encode_clo(alloc_clo(lam8903_fptr, 0));

void map_fptr();                                                   // map
void map_spec(void *_8905, void *kont8864, void *proc, void *lst); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8906_fptr();                             // lam8906
void lam8906_spec(void *env8907, void *id_8773); // lam8906
void *lam8906 = encode_clo(alloc_clo(lam8906_fptr, 0));

void lam8908_fptr();                             // lam8908
void lam8908_spec(void *env8909, void *id_8770); // lam8908
void *lam8908 = encode_clo(alloc_clo(lam8908_fptr, 0));

void filter_fptr();                                                 // filter
void filter_spec(void *_8910, void *kont8867, void *op, void *lst); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr();                                                // drop
void drop_spec(void *_8911, void *kont8870, void *lst, void *n); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8912_fptr();                             // lam8912
void lam8912_spec(void *env8913, void *id_8782); // lam8912
void *lam8912 = encode_clo(alloc_clo(lam8912_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void *_8914, void *kont8871, void *fun, void *acc,
                void *lst); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8915_fptr();                             // lam8915
void lam8915_spec(void *env8916, void *id_8787); // lam8915
void *lam8915 = encode_clo(alloc_clo(lam8915_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void *_8917, void *kont8873, void *fun, void *acc,
                void *lst); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void *_8918, void *kont8875, void *lst,
                            void *lst2); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr();                                       // reverse
void reverse_spec(void *_8919, void *kont8876, void *lst); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8920_fptr();                             // lam8920
void lam8920_spec(void *env8921, void *id_8796); // lam8920
void *lam8920 = encode_clo(alloc_clo(lam8920_fptr, 0));

void append1_fptr();                                                  // append1
void append1_spec(void *_8922, void *kont8877, void *lhs, void *rhs); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8923_fptr();                             // lam8923
void lam8923_spec(void *env8924, void *id_8803); // lam8923
void *lam8923 = encode_clo(alloc_clo(lam8923_fptr, 0));

void lam8925_fptr();                             // lam8925
void lam8925_spec(void *env8926, void *id_8798); // lam8925
void *lam8925 = encode_clo(alloc_clo(lam8925_fptr, 0));

void lam8927_fptr();                       // lam8927
void lam8927_spec(void *env8928, void *x); // lam8927
void *lam8927 = encode_clo(alloc_clo(lam8927_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8930_fptr();                            // lam8930
void lam8930_spec(void *env8931, void *xy8806); // lam8930
void *lam8930 = encode_clo(alloc_clo(lam8930_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void *_8932, void *kont8883, void *lst, void *n,
                         void *lst2); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr();                                                // take
void take_spec(void *_8933, void *kont8885, void *lst, void *n); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam8934_fptr();                             // lam8934
void lam8934_spec(void *env8935, void *id_8820); // lam8934
void *lam8934 = encode_clo(alloc_clo(lam8934_fptr, 0));

void lam8936_fptr();                             // lam8936
void lam8936_spec(void *env8937, void *id_8817); // lam8936
void *lam8936 = encode_clo(alloc_clo(lam8936_fptr, 0));

void fibfp_fptr();                                     // fibfp
void fibfp_spec(void *_8938, void *kont8886, void *n); // fibfp
void *fibfp = encode_clo(alloc_clo(fibfp_fptr, 0));

void brouhaha_main_fptr();                            // brouhaha_main
void brouhaha_main_spec(void *_8939, void *kont8889); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

inline void _u43_fptr() // +
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8965 = prim_car(lst);
    void *const lst8967 = prim_cdr(lst);
    void *const x8966 = apply_prim__u43(lst8967);
    arg_buffer[1] = kont8965;
    arg_buffer[2] = x8966;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8965))[0])();
  } else {
    void *const kont8965 = arg_buffer[2];
    void *const x8966 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8965;
    arg_buffer[2] = x8966;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8965))[0])();
  }
}

inline void _u45_fptr() // -
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8968 = prim_car(lst);
    void *const lst8970 = prim_cdr(lst);
    void *const x8969 = apply_prim__u45(lst8970);
    arg_buffer[1] = kont8968;
    arg_buffer[2] = x8969;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8968))[0])();
  } else {
    void *const kont8968 = arg_buffer[2];
    void *const x8969 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont8968;
    arg_buffer[2] = x8969;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8968))[0])();
  }
}

inline void _u42_fptr() // *
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8971 = prim_car(lst);
    void *const lst8973 = prim_cdr(lst);
    void *const x8972 = apply_prim__u42(lst8973);
    arg_buffer[1] = kont8971;
    arg_buffer[2] = x8972;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8971))[0])();
  } else {
    void *const kont8971 = arg_buffer[2];
    void *const x8972 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont8971;
    arg_buffer[2] = x8972;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8971))[0])();
  }
}

inline void _u47_fptr() // /
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8974 = prim_car(lst);
    void *const lst8976 = prim_cdr(lst);
    void *const x8975 = apply_prim__u47(lst8976);
    arg_buffer[1] = kont8974;
    arg_buffer[2] = x8975;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8974))[0])();
  } else {
    void *const kont8974 = arg_buffer[2];
    void *const x8975 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont8974;
    arg_buffer[2] = x8975;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8974))[0])();
  }
}

inline void _u61_fptr() // =
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8977 = prim_car(lst);
    void *const lst8979 = prim_cdr(lst);
    void *const x8978 = apply_prim__u61(lst8979);
    arg_buffer[1] = kont8977;
    arg_buffer[2] = x8978;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8977))[0])();
  } else {
    void *const kont8977 = arg_buffer[2];
    void *const x8978 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont8977;
    arg_buffer[2] = x8978;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8977))[0])();
  }
}

inline void _u62_fptr() // >
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8980 = prim_car(lst);
    void *const lst8982 = prim_cdr(lst);
    void *const x8981 = apply_prim__u62(lst8982);
    arg_buffer[1] = kont8980;
    arg_buffer[2] = x8981;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8980))[0])();
  } else {
    void *const kont8980 = arg_buffer[2];
    void *const x8981 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont8980;
    arg_buffer[2] = x8981;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8980))[0])();
  }
}

inline void _u60_fptr() // <
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8983 = prim_car(lst);
    void *const lst8985 = prim_cdr(lst);
    void *const x8984 = apply_prim__u60(lst8985);
    arg_buffer[1] = kont8983;
    arg_buffer[2] = x8984;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8983))[0])();
  } else {
    void *const kont8983 = arg_buffer[2];
    void *const x8984 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont8983;
    arg_buffer[2] = x8984;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8983))[0])();
  }
}

inline void _u60_u61_fptr() // <=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8986 = prim_car(lst);
    void *const lst8988 = prim_cdr(lst);
    void *const x8987 = apply_prim__u60_u61(lst8988);
    arg_buffer[1] = kont8986;
    arg_buffer[2] = x8987;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8986))[0])();
  } else {
    void *const kont8986 = arg_buffer[2];
    void *const x8987 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont8986;
    arg_buffer[2] = x8987;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8986))[0])();
  }
}

inline void _u62_u61_fptr() // >=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8989 = prim_car(lst);
    void *const lst8991 = prim_cdr(lst);
    void *const x8990 = apply_prim__u62_u61(lst8991);
    arg_buffer[1] = kont8989;
    arg_buffer[2] = x8990;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8989))[0])();
  } else {
    void *const kont8989 = arg_buffer[2];
    void *const x8990 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont8989;
    arg_buffer[2] = x8990;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8989))[0])();
  }
}

inline void modulo_fptr() // modulo
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8992 = prim_car(lst);
    void *const lst8994 = prim_cdr(lst);
    void *const x8993 = apply_prim_modulo(lst8994);
    arg_buffer[1] = kont8992;
    arg_buffer[2] = x8993;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8992))[0])();
  } else {
    void *const kont8992 = arg_buffer[2];
    void *const x8993 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont8992;
    arg_buffer[2] = x8993;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8992))[0])();
  }
}

inline void null_u63_fptr() // null?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8995 = prim_car(lst);
    void *const lst8997 = prim_cdr(lst);
    void *const x8996 = apply_prim_null_u63(lst8997);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
  } else {
    void *const kont8995 = arg_buffer[2];
    void *const x8996 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
  }
}

inline void equal_u63_fptr() // equal?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8998 = prim_car(lst);
    void *const lst9000 = prim_cdr(lst);
    void *const x8999 = apply_prim_equal_u63(lst9000);
    arg_buffer[1] = kont8998;
    arg_buffer[2] = x8999;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
  } else {
    void *const kont8998 = arg_buffer[2];
    void *const x8999 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont8998;
    arg_buffer[2] = x8999;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
  }
}

inline void eq_u63_fptr() // eq?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9001 = prim_car(lst);
    void *const lst9003 = prim_cdr(lst);
    void *const x9002 = apply_prim_eq_u63(lst9003);
    arg_buffer[1] = kont9001;
    arg_buffer[2] = x9002;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
  } else {
    void *const kont9001 = arg_buffer[2];
    void *const x9002 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont9001;
    arg_buffer[2] = x9002;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
  }
}

inline void cons_fptr() // cons
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9004 = prim_car(lst);
    void *const lst9006 = prim_cdr(lst);
    void *const x9005 = apply_prim_cons(lst9006);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
  } else {
    void *const kont9004 = arg_buffer[2];
    void *const x9005 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
  }
}

inline void car_fptr() // car
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9007 = prim_car(lst);
    void *const lst9009 = prim_cdr(lst);
    void *const x9008 = apply_prim_car(lst9009);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
  } else {
    void *const kont9007 = arg_buffer[2];
    void *const x9008 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
  }
}

inline void cdr_fptr() // cdr
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9010 = prim_car(lst);
    void *const lst9012 = prim_cdr(lst);
    void *const x9011 = apply_prim_cdr(lst9012);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
  } else {
    void *const kont9010 = arg_buffer[2];
    void *const x9011 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
  }
}

inline void float_u45_u62int_fptr() // float->int
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9013 = prim_car(lst);
    void *const lst9015 = prim_cdr(lst);
    void *const x9014 = apply_prim_float_u45_u62int(lst9015);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
  } else {
    void *const kont9013 = arg_buffer[2];
    void *const x9014 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
  }
}

inline void int_u45_u62float_fptr() // int->float
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9016 = prim_car(lst);
    void *const lst9018 = prim_cdr(lst);
    void *const x9017 = apply_prim_int_u45_u62float(lst9018);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
  } else {
    void *const kont9016 = arg_buffer[2];
    void *const x9017 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
  }
}

inline void hash_fptr() // hash
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9019 = prim_car(lst);
    void *const lst9021 = prim_cdr(lst);
    void *const x9020 = apply_prim_hash(lst9021);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
  } else {
    void *const kont9019 = arg_buffer[2];
    void *const x9020 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
  }
}

inline void hash_u45ref_fptr() // hash-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9022 = prim_car(lst);
    void *const lst9024 = prim_cdr(lst);
    void *const x9023 = apply_prim_hash_u45ref(lst9024);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
  } else {
    void *const kont9022 = arg_buffer[2];
    void *const x9023 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
  }
}

inline void hash_u45set_fptr() // hash-set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9025 = prim_car(lst);
    void *const lst9027 = prim_cdr(lst);
    void *const x9026 = apply_prim_hash_u45set(lst9027);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
  } else {
    void *const kont9025 = arg_buffer[2];
    void *const x9026 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
  }
}

inline void hash_u45keys_fptr() // hash-keys
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9028 = prim_car(lst);
    void *const lst9030 = prim_cdr(lst);
    void *const x9029 = apply_prim_hash_u45keys(lst9030);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
  } else {
    void *const kont9028 = arg_buffer[2];
    void *const x9029 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
  }
}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9031 = prim_car(lst);
    void *const lst9033 = prim_cdr(lst);
    void *const x9032 = apply_prim_hash_u45has_u45key_u63(lst9033);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
  } else {
    void *const kont9031 = arg_buffer[2];
    void *const x9032 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
  }
}

inline void hash_u45count_fptr() // hash-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9034 = prim_car(lst);
    void *const lst9036 = prim_cdr(lst);
    void *const x9035 = apply_prim_hash_u45count(lst9036);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
  } else {
    void *const kont9034 = arg_buffer[2];
    void *const x9035 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
  }
}

inline void set_fptr() // set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9037 = prim_car(lst);
    void *const lst9039 = prim_cdr(lst);
    void *const x9038 = apply_prim_set(lst9039);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
  } else {
    void *const kont9037 = arg_buffer[2];
    void *const x9038 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
  }
}

inline void set_u45_u62list_fptr() // set->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9040 = prim_car(lst);
    void *const lst9042 = prim_cdr(lst);
    void *const x9041 = apply_prim_set_u45_u62list(lst9042);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
  } else {
    void *const kont9040 = arg_buffer[2];
    void *const x9041 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
  }
}

inline void list_u45_u62set_fptr() // list->set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9043 = prim_car(lst);
    void *const lst9045 = prim_cdr(lst);
    void *const x9044 = apply_prim_list_u45_u62set(lst9045);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
  } else {
    void *const kont9043 = arg_buffer[2];
    void *const x9044 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
  }
}

inline void set_u45add_fptr() // set-add
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9046 = prim_car(lst);
    void *const lst9048 = prim_cdr(lst);
    void *const x9047 = apply_prim_set_u45add(lst9048);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
  } else {
    void *const kont9046 = arg_buffer[2];
    void *const x9047 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
  }
}

inline void set_u45member_u63_fptr() // set-member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9049 = prim_car(lst);
    void *const lst9051 = prim_cdr(lst);
    void *const x9050 = apply_prim_set_u45member_u63(lst9051);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
  } else {
    void *const kont9049 = arg_buffer[2];
    void *const x9050 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
  }
}

inline void set_u45remove_fptr() // set-remove
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9052 = prim_car(lst);
    void *const lst9054 = prim_cdr(lst);
    void *const x9053 = apply_prim_set_u45remove(lst9054);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
  } else {
    void *const kont9052 = arg_buffer[2];
    void *const x9053 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
  }
}

inline void set_u45count_fptr() // set-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9055 = prim_car(lst);
    void *const lst9057 = prim_cdr(lst);
    void *const x9056 = apply_prim_set_u45count(lst9057);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
  } else {
    void *const kont9055 = arg_buffer[2];
    void *const x9056 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
  }
}

inline void string_u63_fptr() // string?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9058 = prim_car(lst);
    void *const lst9060 = prim_cdr(lst);
    void *const x9059 = apply_prim_string_u63(lst9060);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
  } else {
    void *const kont9058 = arg_buffer[2];
    void *const x9059 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
  }
}

inline void string_u45length_fptr() // string-length
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9061 = prim_car(lst);
    void *const lst9063 = prim_cdr(lst);
    void *const x9062 = apply_prim_string_u45length(lst9063);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
  } else {
    void *const kont9061 = arg_buffer[2];
    void *const x9062 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
  }
}

inline void string_u45ref_fptr() // string-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9064 = prim_car(lst);
    void *const lst9066 = prim_cdr(lst);
    void *const x9065 = apply_prim_string_u45ref(lst9066);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
  } else {
    void *const kont9064 = arg_buffer[2];
    void *const x9065 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
  }
}

inline void substring_fptr() // substring
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9067 = prim_car(lst);
    void *const lst9069 = prim_cdr(lst);
    void *const x9068 = apply_prim_substring(lst9069);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
  } else {
    void *const kont9067 = arg_buffer[2];
    void *const x9068 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
  }
}

inline void string_u45append_fptr() // string-append
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9070 = prim_car(lst);
    void *const lst9072 = prim_cdr(lst);
    void *const x9071 = apply_prim_string_u45append(lst9072);
    arg_buffer[1] = kont9070;
    arg_buffer[2] = x9071;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
  } else {
    void *const kont9070 = arg_buffer[2];
    void *const x9071 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9070;
    arg_buffer[2] = x9071;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
  }
}

inline void string_u45_u62list_fptr() // string->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9073 = prim_car(lst);
    void *const lst9075 = prim_cdr(lst);
    void *const x9074 = apply_prim_string_u45_u62list(lst9075);
    arg_buffer[1] = kont9073;
    arg_buffer[2] = x9074;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
  } else {
    void *const kont9073 = arg_buffer[2];
    void *const x9074 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9073;
    arg_buffer[2] = x9074;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
  }
}

inline void exact_u45floor_fptr() // exact-floor
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9076 = prim_car(lst);
    void *const lst9078 = prim_cdr(lst);
    void *const x9077 = apply_prim_exact_u45floor(lst9078);
    arg_buffer[1] = kont9076;
    arg_buffer[2] = x9077;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
  } else {
    void *const kont9076 = arg_buffer[2];
    void *const x9077 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9076;
    arg_buffer[2] = x9077;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
  }
}

inline void exact_u45ceiling_fptr() // exact-ceiling
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9079 = prim_car(lst);
    void *const lst9081 = prim_cdr(lst);
    void *const x9080 = apply_prim_exact_u45ceiling(lst9081);
    arg_buffer[1] = kont9079;
    arg_buffer[2] = x9080;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
  } else {
    void *const kont9079 = arg_buffer[2];
    void *const x9080 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9079;
    arg_buffer[2] = x9080;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
  }
}

inline void exact_u45round_fptr() // exact-round
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9082 = prim_car(lst);
    void *const lst9084 = prim_cdr(lst);
    void *const x9083 = apply_prim_exact_u45round(lst9084);
    arg_buffer[1] = kont9082;
    arg_buffer[2] = x9083;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
  } else {
    void *const kont9082 = arg_buffer[2];
    void *const x9083 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9082;
    arg_buffer[2] = x9083;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
  }
}

inline void abs_fptr() // abs
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9085 = prim_car(lst);
    void *const lst9087 = prim_cdr(lst);
    void *const x9086 = apply_prim_abs(lst9087);
    arg_buffer[1] = kont9085;
    arg_buffer[2] = x9086;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
  } else {
    void *const kont9085 = arg_buffer[2];
    void *const x9086 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9085;
    arg_buffer[2] = x9086;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
  }
}

inline void max_fptr() // max
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9088 = prim_car(lst);
    void *const lst9090 = prim_cdr(lst);
    void *const x9089 = apply_prim_max(lst9090);
    arg_buffer[1] = kont9088;
    arg_buffer[2] = x9089;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
  } else {
    void *const kont9088 = arg_buffer[2];
    void *const x9089 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9088;
    arg_buffer[2] = x9089;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
  }
}

inline void min_fptr() // min
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9091 = prim_car(lst);
    void *const lst9093 = prim_cdr(lst);
    void *const x9092 = apply_prim_min(lst9093);
    arg_buffer[1] = kont9091;
    arg_buffer[2] = x9092;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
  } else {
    void *const kont9091 = arg_buffer[2];
    void *const x9092 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9091;
    arg_buffer[2] = x9092;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
  }
}

inline void expt_fptr() // expt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9094 = prim_car(lst);
    void *const lst9096 = prim_cdr(lst);
    void *const x9095 = apply_prim_expt(lst9096);
    arg_buffer[1] = kont9094;
    arg_buffer[2] = x9095;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
  } else {
    void *const kont9094 = arg_buffer[2];
    void *const x9095 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9094;
    arg_buffer[2] = x9095;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
  }
}

inline void sqrt_fptr() // sqrt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9097 = prim_car(lst);
    void *const lst9099 = prim_cdr(lst);
    void *const x9098 = apply_prim_sqrt(lst9099);
    arg_buffer[1] = kont9097;
    arg_buffer[2] = x9098;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
  } else {
    void *const kont9097 = arg_buffer[2];
    void *const x9098 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9097;
    arg_buffer[2] = x9098;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
  }
}

inline void remainder_fptr() // remainder
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9100 = prim_car(lst);
    void *const lst9102 = prim_cdr(lst);
    void *const x9101 = apply_prim_remainder(lst9102);
    arg_buffer[1] = kont9100;
    arg_buffer[2] = x9101;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
  } else {
    void *const kont9100 = arg_buffer[2];
    void *const x9101 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9100;
    arg_buffer[2] = x9101;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
  }
}

inline void quotient_fptr() // quotient
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9103 = prim_car(lst);
    void *const lst9105 = prim_cdr(lst);
    void *const x9104 = apply_prim_quotient(lst9105);
    arg_buffer[1] = kont9103;
    arg_buffer[2] = x9104;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
  } else {
    void *const kont9103 = arg_buffer[2];
    void *const x9104 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9103;
    arg_buffer[2] = x9104;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
  }
}

inline void random_fptr() // random
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9106 = prim_car(lst);
    void *const lst9108 = prim_cdr(lst);
    void *const x9107 = apply_prim_random(lst9108);
    arg_buffer[1] = kont9106;
    arg_buffer[2] = x9107;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
  } else {
    void *const kont9106 = arg_buffer[2];
    void *const x9107 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9106;
    arg_buffer[2] = x9107;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
  }
}

inline void symbol_u63_fptr() // symbol?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9109 = prim_car(lst);
    void *const lst9111 = prim_cdr(lst);
    void *const x9110 = apply_prim_symbol_u63(lst9111);
    arg_buffer[1] = kont9109;
    arg_buffer[2] = x9110;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
  } else {
    void *const kont9109 = arg_buffer[2];
    void *const x9110 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9109;
    arg_buffer[2] = x9110;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
  }
}

inline void pair_u63_fptr() // pair?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9112 = prim_car(lst);
    void *const lst9114 = prim_cdr(lst);
    void *const x9113 = apply_prim_pair_u63(lst9114);
    arg_buffer[1] = kont9112;
    arg_buffer[2] = x9113;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
  } else {
    void *const kont9112 = arg_buffer[2];
    void *const x9113 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9112;
    arg_buffer[2] = x9113;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
  }
}

inline void positive_u63_fptr() // positive?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9115 = prim_car(lst);
    void *const lst9117 = prim_cdr(lst);
    void *const x9116 = apply_prim_positive_u63(lst9117);
    arg_buffer[1] = kont9115;
    arg_buffer[2] = x9116;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
  } else {
    void *const kont9115 = arg_buffer[2];
    void *const x9116 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9115;
    arg_buffer[2] = x9116;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
  }
}

inline void negative_u63_fptr() // negative?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9118 = prim_car(lst);
    void *const lst9120 = prim_cdr(lst);
    void *const x9119 = apply_prim_negative_u63(lst9120);
    arg_buffer[1] = kont9118;
    arg_buffer[2] = x9119;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
  } else {
    void *const kont9118 = arg_buffer[2];
    void *const x9119 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9118;
    arg_buffer[2] = x9119;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
  }
}

inline void list_fptr() // list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9121 = prim_car(lst);
    void *const lst9123 = prim_cdr(lst);
    void *const x9122 = apply_prim_list(lst9123);
    arg_buffer[1] = kont9121;
    arg_buffer[2] = x9122;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
  } else {
    void *const kont9121 = arg_buffer[2];
    void *const x9122 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9121;
    arg_buffer[2] = x9122;
    numArgs = int8961;
    reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
  }
}

inline void even_u63_fptr() // even? -> generic version
{
  // reading env and args
  void *const kont8856 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8856)[1])(
      kont8856,
      apply_prim_equal_u63_2(int8954, apply_prim_modulo_2(x, int8943)));
}

inline void even_u63_spec(void *_8891, void *kont8856, void *x) // even?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8856)[1])(
      kont8856,
      apply_prim_equal_u63_2(int8954, apply_prim_modulo_2(x, int8943)));
}

inline void odd_u63_fptr() // odd? -> generic version
{
  // reading env and args
  void *const kont8857 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8857)[1])(
      kont8857,
      apply_prim_equal_u63_2(int8955, apply_prim_modulo_2(x, int8943)));
}

inline void odd_u63_spec(void *_8892, void *kont8857, void *x) // odd?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8857)[1])(
      kont8857,
      apply_prim_equal_u63_2(int8955, apply_prim_modulo_2(x, int8943)));
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
  if (is_true(apply_prim__u61_2(int8954, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8858)[1])(
        kont8858, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8858, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8955));
  }
}

inline void list_u45ref_spec(void *_8893, void *kont8858, void *lst,
                             void *n) // list-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int8954, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8858)[1])(
        kont8858, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8858, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8955));
  }
}

inline void lam8894_fptr() // lam8894 -> generic version
{
  // reading env
  void *const env8895 = arg_buffer[1];
  // reading env and args
  void *const id_8745 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8895);

  // if-clause
  if (is_true(id_8745)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], bool_f8948);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[3], apply_prim_car_1(decode_clo_array[4])))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(
          decode_clo_array[2])[1])(decode_clo_array[2], decode_clo_array[4]);
    } else {

      // clo-app
      member_spec(member, decode_clo_array[2], decode_clo_array[3],
                  apply_prim_cdr_1(decode_clo_array[4]));
    }
  }
}

inline void lam8894_spec(void *env8895, void *id_8745) // lam8894
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8895);

  // if-clause
  if (is_true(id_8745)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], bool_f8948);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[3], apply_prim_car_1(decode_clo_array[4])))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(
          decode_clo_array[2])[1])(decode_clo_array[2], decode_clo_array[4]);
    } else {

      // clo-app
      member_spec(member, decode_clo_array[2], decode_clo_array[3],
                  apply_prim_cdr_1(decode_clo_array[4]));
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

  // creating new make-kont closure
  void **clo9124 = alloc_kont(lam8894_fptr, lam8894_spec, 3);

  // setting env list
  clo9124[2] = kont8859;
  clo9124[3] = item;
  clo9124[4] = lst;
  void *f_lam_8860 = encode_clo(clo9124);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    lam8894_spec(f_lam_8860, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    lam8894_spec(f_lam_8860, apply_prim_null_u63_1(lst));
  }
}

inline void member_spec(void *_8896, void *kont8859, void *item,
                        void *lst) // member
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9125 = alloc_kont(lam8894_fptr, lam8894_spec, 3);

  // setting env list
  clo9125[2] = kont8859;
  clo9125[3] = item;
  clo9125[4] = lst;
  void *f_lam_8860 = encode_clo(clo9125);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    lam8894_spec(f_lam_8860, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    lam8894_spec(f_lam_8860, apply_prim_null_u63_1(lst));
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8861)[1])(
        kont8861, bool_f8948);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8861)[1])(
          kont8861, bool_t8947);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8861, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void member_u63_spec(void *_8897, void *kont8861, void *x,
                            void *lst) // member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8861)[1])(
        kont8861, bool_f8948);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8861)[1])(
          kont8861, bool_t8947);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8861, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void lam8898_fptr() // lam8898 -> generic version
{
  // reading env
  void *const env8899 = arg_buffer[1];
  // reading env and args
  void *const id_8760 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8899);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void lam8898_spec(void *env8899, void *id_8760) // lam8898
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8899);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8760));
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8862)[1])(
        kont8862, int8954);
  } else {

    // creating new make-kont closure
    void **clo9126 = alloc_kont(lam8898_fptr, lam8898_spec, 2);

    // setting env list
    clo9126[2] = int8955;
    clo9126[3] = kont8862;
    void *f_lam_8863 = encode_clo(clo9126);

    // clo-app
    length_spec(length, f_lam_8863, apply_prim_cdr_1(lst));
  }
}

inline void length_spec(void *_8900, void *kont8862, void *lst) // length
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8862)[1])(
        kont8862, int8954);
  } else {

    // creating new make-kont closure
    void **clo9127 = alloc_kont(lam8898_fptr, lam8898_spec, 2);

    // setting env list
    clo9127[2] = int8955;
    clo9127[3] = kont8862;
    void *f_lam_8863 = encode_clo(clo9127);

    // clo-app
    length_spec(length, f_lam_8863, apply_prim_cdr_1(lst));
  }
}

inline void lam8901_fptr() // lam8901 -> generic version
{
  // reading env
  void *const env8902 = arg_buffer[1];
  // reading env and args
  void *const id_8766 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8902);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam8901_spec(void *env8902, void *id_8766) // lam8901
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8902);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam8903_fptr() // lam8903 -> generic version
{
  // reading env
  void *const env8904 = arg_buffer[1];
  // reading env and args
  void *const id_8764 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8904);

  // creating new make-kont closure
  void **clo9128 = alloc_kont(lam8901_fptr, lam8901_spec, 2);

  // setting env list
  clo9128[2] = id_8764;
  clo9128[3] = decode_clo_array[4];
  void *f_lam_8865 = encode_clo(clo9128);

  // clo-app
  map_spec(map, f_lam_8865, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8903_spec(void *env8904, void *id_8764) // lam8903
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8904);

  // creating new make-kont closure
  void **clo9129 = alloc_kont(lam8901_fptr, lam8901_spec, 2);

  // setting env list
  clo9129[2] = id_8764;
  clo9129[3] = decode_clo_array[4];
  void *f_lam_8865 = encode_clo(clo9129);

  // clo-app
  map_spec(map, f_lam_8865, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[3]));
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8864)[1])(
        kont8864, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9130 = alloc_kont(lam8903_fptr, lam8903_spec, 3);

    // setting env list
    clo9130[2] = proc;
    clo9130[3] = lst;
    clo9130[4] = kont8864;
    void *f_lam_8866 = encode_clo(clo9130);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_8866;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8962;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void map_spec(void *_8905, void *kont8864, void *proc, void *lst) // map
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8864)[1])(
        kont8864, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9131 = alloc_kont(lam8903_fptr, lam8903_spec, 3);

    // setting env list
    clo9131[2] = proc;
    clo9131[3] = lst;
    clo9131[4] = kont8864;
    void *f_lam_8866 = encode_clo(clo9131);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_8866;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8962;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void lam8906_fptr() // lam8906 -> generic version
{
  // reading env
  void *const env8907 = arg_buffer[1];
  // reading env and args
  void *const id_8773 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8907);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8906_spec(void *env8907, void *id_8773) // lam8906
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8907);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8908_fptr() // lam8908 -> generic version
{
  // reading env
  void *const env8909 = arg_buffer[1];
  // reading env and args
  void *const id_8770 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8909);

  // if-clause
  if (is_true(id_8770)) {

    // creating new make-kont closure
    void **clo9132 = alloc_kont(lam8906_fptr, lam8906_spec, 2);

    // setting env list
    clo9132[2] = apply_prim_car_1(decode_clo_array[4]);
    clo9132[3] = decode_clo_array[3];
    void *f_lam_8868 = encode_clo(clo9132);

    // clo-app
    filter_spec(filter, f_lam_8868, decode_clo_array[2],
                apply_prim_cdr_1(decode_clo_array[4]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[3], decode_clo_array[2],
                apply_prim_cdr_1(decode_clo_array[4]));
  }
}

inline void lam8908_spec(void *env8909, void *id_8770) // lam8908
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8909);

  // if-clause
  if (is_true(id_8770)) {

    // creating new make-kont closure
    void **clo9133 = alloc_kont(lam8906_fptr, lam8906_spec, 2);

    // setting env list
    clo9133[2] = apply_prim_car_1(decode_clo_array[4]);
    clo9133[3] = decode_clo_array[3];
    void *f_lam_8868 = encode_clo(clo9133);

    // clo-app
    filter_spec(filter, f_lam_8868, decode_clo_array[2],
                apply_prim_cdr_1(decode_clo_array[4]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[3], decode_clo_array[2],
                apply_prim_cdr_1(decode_clo_array[4]));
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8867)[1])(
        kont8867, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9134 = alloc_kont(lam8908_fptr, lam8908_spec, 3);

    // setting env list
    clo9134[2] = op;
    clo9134[3] = kont8867;
    clo9134[4] = lst;
    void *f_lam_8869 = encode_clo(clo9134);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_8869;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8962;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void filter_spec(void *_8910, void *kont8867, void *op,
                        void *lst) // filter
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8867)[1])(
        kont8867, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9135 = alloc_kont(lam8908_fptr, lam8908_spec, 3);

    // setting env list
    clo9135[2] = op;
    clo9135[3] = kont8867;
    clo9135[4] = lst;
    void *f_lam_8869 = encode_clo(clo9135);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_8869;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8962;
    // generic else-case
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
  if (is_true(apply_prim__u61_2(n, int8954))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8870)[1])(
        kont8870, lst);
  } else {

    // clo-app
    drop_spec(drop, kont8870, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8955));
  }
}

inline void drop_spec(void *_8911, void *kont8870, void *lst, void *n) // drop
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8954))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8870)[1])(
        kont8870, lst);
  } else {

    // clo-app
    drop_spec(drop, kont8870, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8955));
  }
}

inline void lam8912_fptr() // lam8912 -> generic version
{
  // reading env
  void *const env8913 = arg_buffer[1];
  // reading env and args
  void *const id_8782 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8913);

  // clo-app
  foldl_spec(foldl, decode_clo_array[3], decode_clo_array[2], id_8782,
             apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8912_spec(void *env8913, void *id_8782) // lam8912
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8913);

  // clo-app
  foldl_spec(foldl, decode_clo_array[3], decode_clo_array[2], id_8782,
             apply_prim_cdr_1(decode_clo_array[4]));
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8871)[1])(
        kont8871, acc);
  } else {

    // creating new make-kont closure
    void **clo9136 = alloc_kont(lam8912_fptr, lam8912_spec, 3);

    // setting env list
    clo9136[2] = fun;
    clo9136[3] = kont8871;
    clo9136[4] = lst;
    void *f_lam_8872 = encode_clo(clo9136);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_8872;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8963;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void foldl_spec(void *_8914, void *kont8871, void *fun, void *acc,
                       void *lst) // foldl
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8871)[1])(
        kont8871, acc);
  } else {

    // creating new make-kont closure
    void **clo9137 = alloc_kont(lam8912_fptr, lam8912_spec, 3);

    // setting env list
    clo9137[2] = fun;
    clo9137[3] = kont8871;
    clo9137[4] = lst;
    void *f_lam_8872 = encode_clo(clo9137);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_8872;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8963;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void lam8915_fptr() // lam8915 -> generic version
{
  // reading env
  void *const env8916 = arg_buffer[1];
  // reading env and args
  void *const id_8787 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8916);

  // clo-app
  arg_buffer[1] = decode_clo_array[3];
  arg_buffer[2] = decode_clo_array[2];
  arg_buffer[3] = decode_clo_array[4];
  arg_buffer[4] = id_8787;
  numArgs = int8963;
  // generic else-case
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8915_spec(void *env8916, void *id_8787) // lam8915
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8916);

  // clo-app
  arg_buffer[1] = decode_clo_array[3];
  arg_buffer[2] = decode_clo_array[2];
  arg_buffer[3] = decode_clo_array[4];
  arg_buffer[4] = id_8787;
  numArgs = int8963;
  // generic else-case
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8873)[1])(
        kont8873, acc);
  } else {

    // creating new make-kont closure
    void **clo9138 = alloc_kont(lam8915_fptr, lam8915_spec, 3);

    // setting env list
    clo9138[2] = kont8873;
    clo9138[3] = fun;
    clo9138[4] = apply_prim_car_1(lst);
    void *f_lam_8874 = encode_clo(clo9138);

    // clo-app
    foldr_spec(foldr, f_lam_8874, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void foldr_spec(void *_8917, void *kont8873, void *fun, void *acc,
                       void *lst) // foldr
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8873)[1])(
        kont8873, acc);
  } else {

    // creating new make-kont closure
    void **clo9139 = alloc_kont(lam8915_fptr, lam8915_spec, 3);

    // setting env list
    clo9139[2] = kont8873;
    clo9139[3] = fun;
    clo9139[4] = apply_prim_car_1(lst);
    void *f_lam_8874 = encode_clo(clo9139);

    // clo-app
    foldr_spec(foldr, f_lam_8874, fun, acc, apply_prim_cdr_1(lst));
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8875)[1])(
        kont8875, lst2);
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8875, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_u45helper_spec(void *_8918, void *kont8875, void *lst,
                                   void *lst2) // reverse-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8875)[1])(
        kont8875, lst2);
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

inline void reverse_spec(void *_8919, void *kont8876, void *lst) // reverse
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8876, lst, apply_prim_list_0());
}

inline void lam8920_fptr() // lam8920 -> generic version
{
  // reading env
  void *const env8921 = arg_buffer[1];
  // reading env and args
  void *const id_8796 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8921);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void lam8920_spec(void *env8921, void *id_8796) // lam8920
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8921);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8796));
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
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8877)[1])(
        kont8877, rhs);
  } else {

    // creating new make-kont closure
    void **clo9140 = alloc_kont(lam8920_fptr, lam8920_spec, 2);

    // setting env list
    clo9140[2] = apply_prim_car_1(lhs);
    clo9140[3] = kont8877;
    void *f_lam_8878 = encode_clo(clo9140);

    // clo-app
    append1_spec(append1, f_lam_8878, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void append1_spec(void *_8922, void *kont8877, void *lhs,
                         void *rhs) // append1
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8877)[1])(
        kont8877, rhs);
  } else {

    // creating new make-kont closure
    void **clo9141 = alloc_kont(lam8920_fptr, lam8920_spec, 2);

    // setting env list
    clo9141[2] = apply_prim_car_1(lhs);
    clo9141[3] = kont8877;
    void *f_lam_8878 = encode_clo(clo9141);

    // clo-app
    append1_spec(append1, f_lam_8878, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void lam8923_fptr() // lam8923 -> generic version
{
  // reading env
  void *const env8924 = arg_buffer[1];
  // reading env and args
  void *const id_8803 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8924);

  // clo-app
  foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8803);
}

inline void lam8923_spec(void *env8924, void *id_8803) // lam8923
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8924);

  // clo-app
  foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8803);
}

inline void lam8925_fptr() // lam8925 -> generic version
{
  // reading env
  void *const env8926 = arg_buffer[1];
  // reading env and args
  void *const id_8798 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8926);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[5], id_8798))) {

    // clo-app
    append1_spec(append1, decode_clo_array[4], decode_clo_array[2],
                 apply_prim_car_1(decode_clo_array[3]));
  } else {

    // creating new make-kont closure
    void **clo9142 = alloc_kont(lam8923_fptr, lam8923_spec, 2);

    // setting env list
    clo9142[2] = apply_prim_list_0();
    clo9142[3] = decode_clo_array[4];
    void *f_lam_8880 = encode_clo(clo9142);

    // clo-app
    append1_spec(append1, f_lam_8880, apply_prim_list_1(decode_clo_array[2]),
                 decode_clo_array[3]);
  }
}

inline void lam8925_spec(void *env8926, void *id_8798) // lam8925
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8926);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[5], id_8798))) {

    // clo-app
    append1_spec(append1, decode_clo_array[4], decode_clo_array[2],
                 apply_prim_car_1(decode_clo_array[3]));
  } else {

    // creating new make-kont closure
    void **clo9143 = alloc_kont(lam8923_fptr, lam8923_spec, 2);

    // setting env list
    clo9143[2] = apply_prim_list_0();
    clo9143[3] = decode_clo_array[4];
    void *f_lam_8880 = encode_clo(clo9143);

    // clo-app
    append1_spec(append1, f_lam_8880, apply_prim_list_1(decode_clo_array[2]),
                 decode_clo_array[3]);
  }
}

inline void lam8927_fptr() // lam8927 -> generic version
{
  // reading env
  void *const env8928 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8928);

  // creating new make-kont closure
  void **clo9144 = alloc_kont(lam8925_fptr, lam8925_spec, 4);

  // setting env list
  clo9144[2] = decode_clo_array[2];
  clo9144[3] = x;
  clo9144[4] = decode_clo_array[3];
  clo9144[5] = int8955;
  void *f_lam_8881 = encode_clo(clo9144);

  // clo-app
  length_spec(length, f_lam_8881, x);
}

inline void lam8927_spec(void *env8928, void *x) // lam8927
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8928);

  // creating new make-kont closure
  void **clo9145 = alloc_kont(lam8925_fptr, lam8925_spec, 4);

  // setting env list
  clo9145[2] = decode_clo_array[2];
  clo9145[3] = x;
  clo9145[4] = decode_clo_array[3];
  clo9145[5] = int8955;
  void *f_lam_8881 = encode_clo(clo9145);

  // clo-app
  length_spec(length, f_lam_8881, x);
}

void append_fptr() // append
{
  // reading env
  void *const _8929 = arg_buffer[1];
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

  // creating new make-kont closure
  void **clo9146 = alloc_kont(lam8927_fptr, lam8927_spec, 2);

  // setting env list
  clo9146[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
  clo9146[3] = apply_prim_car_1(vargs);
  void *f_lam_8882 = encode_clo(clo9146);

  // kont-clo-app case
  lam8927_spec(f_lam_8882, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8930_fptr() // lam8930 -> generic version
{
  // reading env
  void *const env8931 = arg_buffer[1];
  // reading env and args
  void *const xy8806 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8931);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
}

inline void lam8930_spec(void *env8931, void *xy8806) // lam8930
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8931);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
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
  if (is_true(apply_prim__u61_2(n, int8954))) {

    // creating new make-kont closure
    void **clo9147 = alloc_kont(lam8930_fptr, lam8930_spec, 1);

    // setting env list
    clo9147[2] = kont8883;
    void *f_lam_8884 = encode_clo(clo9147);

    // clo-app
    reverse_spec(reverse, f_lam_8884, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8883, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8955),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_u45helper_spec(void *_8932, void *kont8883, void *lst, void *n,
                                void *lst2) // take-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8954))) {

    // creating new make-kont closure
    void **clo9148 = alloc_kont(lam8930_fptr, lam8930_spec, 1);

    // setting env list
    clo9148[2] = kont8883;
    void *f_lam_8884 = encode_clo(clo9148);

    // clo-app
    reverse_spec(reverse, f_lam_8884, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8883, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8955),
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

inline void take_spec(void *_8933, void *kont8885, void *lst, void *n) // take
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8885, lst, n, apply_prim_list_0());
}

inline void lam8934_fptr() // lam8934 -> generic version
{
  // reading env
  void *const env8935 = arg_buffer[1];
  // reading env and args
  void *const id_8820 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8935);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(
      decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], id_8820));
}

inline void lam8934_spec(void *env8935, void *id_8820) // lam8934
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8935);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(
      decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], id_8820));
}

inline void lam8936_fptr() // lam8936 -> generic version
{
  // reading env
  void *const env8937 = arg_buffer[1];
  // reading env and args
  void *const id_8817 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8937);

  // creating new make-kont closure
  void **clo9149 = alloc_kont(lam8934_fptr, lam8934_spec, 2);

  // setting env list
  clo9149[2] = decode_clo_array[3];
  clo9149[3] = id_8817;
  void *f_lam_8887 = encode_clo(clo9149);

  // clo-app
  fibfp_spec(fibfp, f_lam_8887,
             apply_prim__u45_2(decode_clo_array[2], float8958));
}

inline void lam8936_spec(void *env8937, void *id_8817) // lam8936
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8937);

  // creating new make-kont closure
  void **clo9150 = alloc_kont(lam8934_fptr, lam8934_spec, 2);

  // setting env list
  clo9150[2] = decode_clo_array[3];
  clo9150[3] = id_8817;
  void *f_lam_8887 = encode_clo(clo9150);

  // clo-app
  fibfp_spec(fibfp, f_lam_8887,
             apply_prim__u45_2(decode_clo_array[2], float8958));
}

inline void fibfp_fptr() // fibfp -> generic version
{
  // reading env and args
  void *const kont8886 = arg_buffer[2];
  void *const n = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u60_2(n, float8958))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8886)[1])(
        kont8886, n);
  } else {

    // creating new make-kont closure
    void **clo9151 = alloc_kont(lam8936_fptr, lam8936_spec, 2);

    // setting env list
    clo9151[2] = n;
    clo9151[3] = kont8886;
    void *f_lam_8888 = encode_clo(clo9151);

    // clo-app
    fibfp_spec(fibfp, f_lam_8888, apply_prim__u45_2(n, float8957));
  }
}

inline void fibfp_spec(void *_8938, void *kont8886, void *n) // fibfp
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u60_2(n, float8958))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8886)[1])(
        kont8886, n);
  } else {

    // creating new make-kont closure
    void **clo9152 = alloc_kont(lam8936_fptr, lam8936_spec, 2);

    // setting env list
    clo9152[2] = n;
    clo9152[3] = kont8886;
    void *f_lam_8888 = encode_clo(clo9152);

    // clo-app
    fibfp_spec(fibfp, f_lam_8888, apply_prim__u45_2(n, float8957));
  }
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version
{
  // reading env and args
  void *const kont8889 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  fibfp_spec(fibfp, kont8889, float8959);
}

inline void brouhaha_main_spec(void *_8939, void *kont8889) // brouhaha_main
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  fibfp_spec(fibfp, kont8889, float8959);
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8954 = reinterpret_cast<void *>(encode_int(0));
  float8958 = reinterpret_cast<void *>(encode_float(2.0));
  float8957 = reinterpret_cast<void *>(encode_float(1.0));
  float8959 = reinterpret_cast<void *>(encode_float(40.0));
  bool_t8947 = encode_bool(true);
  int8955 = reinterpret_cast<void *>(encode_int(1));
  bool_f8948 = encode_bool(false);
  int8943 = reinterpret_cast<void *>(encode_int(2));

  // initializing global integer vars
  int8960 = 1;
  int8961 = 2;
  int8962 = 3;
  int8963 = 4;
  int8964 = 5;

  // making a call to the brouhaha main function to kick off our C++ emission.
  void **f_halt_clo = alloc_kont(fhalt, fhalt_spec, 0);
  void *fhalt_clo = encode_clo(f_halt_clo);
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_spec(nullptr, fhalt_clo);
}
