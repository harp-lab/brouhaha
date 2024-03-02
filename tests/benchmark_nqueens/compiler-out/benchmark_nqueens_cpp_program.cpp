#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int9051;
void *bool_t9046;
void *int9050;
void *bool_f9044;
void *int9026;
void *int9052;

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
void even_u63_spec(void *_8959, void *kont8915, void *x); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr();                                     // odd?
void odd_u63_spec(void *_8960, void *kont8916, void *x); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void *_8961, void *kont8917, void *lst,
                      void *n); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8962_fptr();                             // lam8962
void lam8962_spec(void *env8963, void *id_8745); // lam8962
void *lam8962 = encode_clo(alloc_clo(lam8962_fptr, 0));

void member_fptr();                                                   // member
void member_spec(void *_8964, void *kont8918, void *item, void *lst); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void *_8965, void *kont8920, void *x,
                     void *lst); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8966_fptr();                             // lam8966
void lam8966_spec(void *env8967, void *id_8760); // lam8966
void *lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void length_fptr();                                       // length
void length_spec(void *_8968, void *kont8921, void *lst); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8969_fptr();                             // lam8969
void lam8969_spec(void *env8970, void *id_8766); // lam8969
void *lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void lam8971_fptr();                             // lam8971
void lam8971_spec(void *env8972, void *id_8764); // lam8971
void *lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void map_fptr();                                                   // map
void map_spec(void *_8973, void *kont8923, void *proc, void *lst); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8974_fptr();                             // lam8974
void lam8974_spec(void *env8975, void *id_8773); // lam8974
void *lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void lam8976_fptr();                             // lam8976
void lam8976_spec(void *env8977, void *id_8770); // lam8976
void *lam8976 = encode_clo(alloc_clo(lam8976_fptr, 0));

void filter_fptr();                                                 // filter
void filter_spec(void *_8978, void *kont8926, void *op, void *lst); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr();                                                // drop
void drop_spec(void *_8979, void *kont8929, void *lst, void *n); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8980_fptr();                             // lam8980
void lam8980_spec(void *env8981, void *id_8782); // lam8980
void *lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void *_8982, void *kont8930, void *fun, void *acc,
                void *lst); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8983_fptr();                             // lam8983
void lam8983_spec(void *env8984, void *id_8787); // lam8983
void *lam8983 = encode_clo(alloc_clo(lam8983_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void *_8985, void *kont8932, void *fun, void *acc,
                void *lst); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void *_8986, void *kont8934, void *lst,
                            void *lst2); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr();                                       // reverse
void reverse_spec(void *_8987, void *kont8935, void *lst); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8988_fptr();                             // lam8988
void lam8988_spec(void *env8989, void *id_8796); // lam8988
void *lam8988 = encode_clo(alloc_clo(lam8988_fptr, 0));

void append1_fptr();                                                  // append1
void append1_spec(void *_8990, void *kont8936, void *lhs, void *rhs); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8991_fptr();                             // lam8991
void lam8991_spec(void *env8992, void *id_8803); // lam8991
void *lam8991 = encode_clo(alloc_clo(lam8991_fptr, 0));

void lam8993_fptr();                             // lam8993
void lam8993_spec(void *env8994, void *id_8798); // lam8993
void *lam8993 = encode_clo(alloc_clo(lam8993_fptr, 0));

void lam8995_fptr();                       // lam8995
void lam8995_spec(void *env8996, void *x); // lam8995
void *lam8995 = encode_clo(alloc_clo(lam8995_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8998_fptr();                            // lam8998
void lam8998_spec(void *env8999, void *xy8806); // lam8998
void *lam8998 = encode_clo(alloc_clo(lam8998_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void *_9000, void *kont8942, void *lst, void *n,
                         void *lst2); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr();                                                // take
void take_spec(void *_9001, void *kont8944, void *lst, void *n); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam9002_fptr();                             // lam9002
void lam9002_spec(void *env9003, void *id_8826); // lam9002
void *lam9002 = encode_clo(alloc_clo(lam9002_fptr, 0));

void lam9004_fptr();                             // lam9004
void lam9004_spec(void *env9005, void *id_8820); // lam9004
void *lam9004 = encode_clo(alloc_clo(lam9004_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void *_9006, void *kont8945, void *row, void *dist,
                 void *placed); // ok?
void *ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam9007_fptr();                             // lam9007
void lam9007_spec(void *env9008, void *id_8850); // lam9007
void *lam9007 = encode_clo(alloc_clo(lam9007_fptr, 0));

void lam9009_fptr();                             // lam9009
void lam9009_spec(void *env9010, void *id_8857); // lam9009
void *lam9009 = encode_clo(alloc_clo(lam9009_fptr, 0));

void lam9011_fptr();                             // lam9011
void lam9011_spec(void *env9012, void *id_8848); // lam9011
void *lam9011 = encode_clo(alloc_clo(lam9011_fptr, 0));

void lam9013_fptr();                       // lam9013
void lam9013_spec(void *env9014, void *z); // lam9013
void *lam9013 = encode_clo(alloc_clo(lam9013_fptr, 0));

void lam9015_fptr();                       // lam9015
void lam9015_spec(void *env9016, void *y); // lam9015
void *lam9015 = encode_clo(alloc_clo(lam9015_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void *_9017, void *kont8948, void *stack,
                      void *count); // q-helper
void *q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr();                                              // iota1
void iota1_spec(void *_9018, void *kont8954, void *n, void *l); // iota1
void *iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam9019_fptr();                             // lam9019
void lam9019_spec(void *env9020, void *id_8865); // lam9019
void *lam9019 = encode_clo(alloc_clo(lam9019_fptr, 0));

void nqueens_fptr();                                     // nqueens
void nqueens_spec(void *_9021, void *kont8955, void *n); // nqueens
void *nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr();                            // brouhaha_main
void brouhaha_main_spec(void *_9022, void *kont8957); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

inline void _u43_fptr() // +
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9053 = prim_car(lst);
    void *const lst9055 = prim_cdr(lst);
    void *const x9054 = apply_prim__u43(lst9055);
    arg_buffer[1] = kont9053;
    arg_buffer[2] = x9054;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9053))[0])();
  } else {
    void *const kont9053 = arg_buffer[2];
    void *const x9054 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont9053;
    arg_buffer[2] = x9054;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9053))[0])();
  }
}

inline void _u45_fptr() // -
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9056 = prim_car(lst);
    void *const lst9058 = prim_cdr(lst);
    void *const x9057 = apply_prim__u45(lst9058);
    arg_buffer[1] = kont9056;
    arg_buffer[2] = x9057;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9056))[0])();
  } else {
    void *const kont9056 = arg_buffer[2];
    void *const x9057 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont9056;
    arg_buffer[2] = x9057;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9056))[0])();
  }
}

inline void _u42_fptr() // *
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9059 = prim_car(lst);
    void *const lst9061 = prim_cdr(lst);
    void *const x9060 = apply_prim__u42(lst9061);
    arg_buffer[1] = kont9059;
    arg_buffer[2] = x9060;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9059))[0])();
  } else {
    void *const kont9059 = arg_buffer[2];
    void *const x9060 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont9059;
    arg_buffer[2] = x9060;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9059))[0])();
  }
}

inline void _u47_fptr() // /
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9062 = prim_car(lst);
    void *const lst9064 = prim_cdr(lst);
    void *const x9063 = apply_prim__u47(lst9064);
    arg_buffer[1] = kont9062;
    arg_buffer[2] = x9063;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9062))[0])();
  } else {
    void *const kont9062 = arg_buffer[2];
    void *const x9063 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont9062;
    arg_buffer[2] = x9063;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9062))[0])();
  }
}

inline void _u61_fptr() // =
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9065 = prim_car(lst);
    void *const lst9067 = prim_cdr(lst);
    void *const x9066 = apply_prim__u61(lst9067);
    arg_buffer[1] = kont9065;
    arg_buffer[2] = x9066;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9065))[0])();
  } else {
    void *const kont9065 = arg_buffer[2];
    void *const x9066 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont9065;
    arg_buffer[2] = x9066;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9065))[0])();
  }
}

inline void _u62_fptr() // >
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9068 = prim_car(lst);
    void *const lst9070 = prim_cdr(lst);
    void *const x9069 = apply_prim__u62(lst9070);
    arg_buffer[1] = kont9068;
    arg_buffer[2] = x9069;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9068))[0])();
  } else {
    void *const kont9068 = arg_buffer[2];
    void *const x9069 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont9068;
    arg_buffer[2] = x9069;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9068))[0])();
  }
}

inline void _u60_fptr() // <
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9071 = prim_car(lst);
    void *const lst9073 = prim_cdr(lst);
    void *const x9072 = apply_prim__u60(lst9073);
    arg_buffer[1] = kont9071;
    arg_buffer[2] = x9072;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9071))[0])();
  } else {
    void *const kont9071 = arg_buffer[2];
    void *const x9072 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont9071;
    arg_buffer[2] = x9072;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9071))[0])();
  }
}

inline void _u60_u61_fptr() // <=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9074 = prim_car(lst);
    void *const lst9076 = prim_cdr(lst);
    void *const x9075 = apply_prim__u60_u61(lst9076);
    arg_buffer[1] = kont9074;
    arg_buffer[2] = x9075;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9074))[0])();
  } else {
    void *const kont9074 = arg_buffer[2];
    void *const x9075 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont9074;
    arg_buffer[2] = x9075;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9074))[0])();
  }
}

inline void _u62_u61_fptr() // >=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9077 = prim_car(lst);
    void *const lst9079 = prim_cdr(lst);
    void *const x9078 = apply_prim__u62_u61(lst9079);
    arg_buffer[1] = kont9077;
    arg_buffer[2] = x9078;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9077))[0])();
  } else {
    void *const kont9077 = arg_buffer[2];
    void *const x9078 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont9077;
    arg_buffer[2] = x9078;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9077))[0])();
  }
}

inline void modulo_fptr() // modulo
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9080 = prim_car(lst);
    void *const lst9082 = prim_cdr(lst);
    void *const x9081 = apply_prim_modulo(lst9082);
    arg_buffer[1] = kont9080;
    arg_buffer[2] = x9081;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9080))[0])();
  } else {
    void *const kont9080 = arg_buffer[2];
    void *const x9081 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont9080;
    arg_buffer[2] = x9081;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9080))[0])();
  }
}

inline void null_u63_fptr() // null?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9083 = prim_car(lst);
    void *const lst9085 = prim_cdr(lst);
    void *const x9084 = apply_prim_null_u63(lst9085);
    arg_buffer[1] = kont9083;
    arg_buffer[2] = x9084;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9083))[0])();
  } else {
    void *const kont9083 = arg_buffer[2];
    void *const x9084 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont9083;
    arg_buffer[2] = x9084;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9083))[0])();
  }
}

inline void equal_u63_fptr() // equal?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9086 = prim_car(lst);
    void *const lst9088 = prim_cdr(lst);
    void *const x9087 = apply_prim_equal_u63(lst9088);
    arg_buffer[1] = kont9086;
    arg_buffer[2] = x9087;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9086))[0])();
  } else {
    void *const kont9086 = arg_buffer[2];
    void *const x9087 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont9086;
    arg_buffer[2] = x9087;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9086))[0])();
  }
}

inline void eq_u63_fptr() // eq?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9089 = prim_car(lst);
    void *const lst9091 = prim_cdr(lst);
    void *const x9090 = apply_prim_eq_u63(lst9091);
    arg_buffer[1] = kont9089;
    arg_buffer[2] = x9090;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9089))[0])();
  } else {
    void *const kont9089 = arg_buffer[2];
    void *const x9090 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont9089;
    arg_buffer[2] = x9090;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9089))[0])();
  }
}

inline void cons_fptr() // cons
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9092 = prim_car(lst);
    void *const lst9094 = prim_cdr(lst);
    void *const x9093 = apply_prim_cons(lst9094);
    arg_buffer[1] = kont9092;
    arg_buffer[2] = x9093;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9092))[0])();
  } else {
    void *const kont9092 = arg_buffer[2];
    void *const x9093 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont9092;
    arg_buffer[2] = x9093;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9092))[0])();
  }
}

inline void car_fptr() // car
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9095 = prim_car(lst);
    void *const lst9097 = prim_cdr(lst);
    void *const x9096 = apply_prim_car(lst9097);
    arg_buffer[1] = kont9095;
    arg_buffer[2] = x9096;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9095))[0])();
  } else {
    void *const kont9095 = arg_buffer[2];
    void *const x9096 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont9095;
    arg_buffer[2] = x9096;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9095))[0])();
  }
}

inline void cdr_fptr() // cdr
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9098 = prim_car(lst);
    void *const lst9100 = prim_cdr(lst);
    void *const x9099 = apply_prim_cdr(lst9100);
    arg_buffer[1] = kont9098;
    arg_buffer[2] = x9099;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9098))[0])();
  } else {
    void *const kont9098 = arg_buffer[2];
    void *const x9099 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont9098;
    arg_buffer[2] = x9099;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9098))[0])();
  }
}

inline void float_u45_u62int_fptr() // float->int
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9101 = prim_car(lst);
    void *const lst9103 = prim_cdr(lst);
    void *const x9102 = apply_prim_float_u45_u62int(lst9103);
    arg_buffer[1] = kont9101;
    arg_buffer[2] = x9102;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9101))[0])();
  } else {
    void *const kont9101 = arg_buffer[2];
    void *const x9102 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont9101;
    arg_buffer[2] = x9102;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9101))[0])();
  }
}

inline void int_u45_u62float_fptr() // int->float
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9104 = prim_car(lst);
    void *const lst9106 = prim_cdr(lst);
    void *const x9105 = apply_prim_int_u45_u62float(lst9106);
    arg_buffer[1] = kont9104;
    arg_buffer[2] = x9105;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9104))[0])();
  } else {
    void *const kont9104 = arg_buffer[2];
    void *const x9105 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont9104;
    arg_buffer[2] = x9105;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9104))[0])();
  }
}

inline void hash_fptr() // hash
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9107 = prim_car(lst);
    void *const lst9109 = prim_cdr(lst);
    void *const x9108 = apply_prim_hash(lst9109);
    arg_buffer[1] = kont9107;
    arg_buffer[2] = x9108;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9107))[0])();
  } else {
    void *const kont9107 = arg_buffer[2];
    void *const x9108 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont9107;
    arg_buffer[2] = x9108;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9107))[0])();
  }
}

inline void hash_u45ref_fptr() // hash-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9110 = prim_car(lst);
    void *const lst9112 = prim_cdr(lst);
    void *const x9111 = apply_prim_hash_u45ref(lst9112);
    arg_buffer[1] = kont9110;
    arg_buffer[2] = x9111;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9110))[0])();
  } else {
    void *const kont9110 = arg_buffer[2];
    void *const x9111 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont9110;
    arg_buffer[2] = x9111;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9110))[0])();
  }
}

inline void hash_u45set_fptr() // hash-set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9113 = prim_car(lst);
    void *const lst9115 = prim_cdr(lst);
    void *const x9114 = apply_prim_hash_u45set(lst9115);
    arg_buffer[1] = kont9113;
    arg_buffer[2] = x9114;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9113))[0])();
  } else {
    void *const kont9113 = arg_buffer[2];
    void *const x9114 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont9113;
    arg_buffer[2] = x9114;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9113))[0])();
  }
}

inline void hash_u45keys_fptr() // hash-keys
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9116 = prim_car(lst);
    void *const lst9118 = prim_cdr(lst);
    void *const x9117 = apply_prim_hash_u45keys(lst9118);
    arg_buffer[1] = kont9116;
    arg_buffer[2] = x9117;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9116))[0])();
  } else {
    void *const kont9116 = arg_buffer[2];
    void *const x9117 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont9116;
    arg_buffer[2] = x9117;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9116))[0])();
  }
}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9119 = prim_car(lst);
    void *const lst9121 = prim_cdr(lst);
    void *const x9120 = apply_prim_hash_u45has_u45key_u63(lst9121);
    arg_buffer[1] = kont9119;
    arg_buffer[2] = x9120;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9119))[0])();
  } else {
    void *const kont9119 = arg_buffer[2];
    void *const x9120 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont9119;
    arg_buffer[2] = x9120;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9119))[0])();
  }
}

inline void hash_u45count_fptr() // hash-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9122 = prim_car(lst);
    void *const lst9124 = prim_cdr(lst);
    void *const x9123 = apply_prim_hash_u45count(lst9124);
    arg_buffer[1] = kont9122;
    arg_buffer[2] = x9123;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9122))[0])();
  } else {
    void *const kont9122 = arg_buffer[2];
    void *const x9123 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont9122;
    arg_buffer[2] = x9123;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9122))[0])();
  }
}

inline void set_fptr() // set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9125 = prim_car(lst);
    void *const lst9127 = prim_cdr(lst);
    void *const x9126 = apply_prim_set(lst9127);
    arg_buffer[1] = kont9125;
    arg_buffer[2] = x9126;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9125))[0])();
  } else {
    void *const kont9125 = arg_buffer[2];
    void *const x9126 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont9125;
    arg_buffer[2] = x9126;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9125))[0])();
  }
}

inline void set_u45_u62list_fptr() // set->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9128 = prim_car(lst);
    void *const lst9130 = prim_cdr(lst);
    void *const x9129 = apply_prim_set_u45_u62list(lst9130);
    arg_buffer[1] = kont9128;
    arg_buffer[2] = x9129;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9128))[0])();
  } else {
    void *const kont9128 = arg_buffer[2];
    void *const x9129 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9128;
    arg_buffer[2] = x9129;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9128))[0])();
  }
}

inline void list_u45_u62set_fptr() // list->set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9131 = prim_car(lst);
    void *const lst9133 = prim_cdr(lst);
    void *const x9132 = apply_prim_list_u45_u62set(lst9133);
    arg_buffer[1] = kont9131;
    arg_buffer[2] = x9132;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9131))[0])();
  } else {
    void *const kont9131 = arg_buffer[2];
    void *const x9132 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont9131;
    arg_buffer[2] = x9132;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9131))[0])();
  }
}

inline void set_u45add_fptr() // set-add
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9134 = prim_car(lst);
    void *const lst9136 = prim_cdr(lst);
    void *const x9135 = apply_prim_set_u45add(lst9136);
    arg_buffer[1] = kont9134;
    arg_buffer[2] = x9135;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9134))[0])();
  } else {
    void *const kont9134 = arg_buffer[2];
    void *const x9135 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont9134;
    arg_buffer[2] = x9135;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9134))[0])();
  }
}

inline void set_u45member_u63_fptr() // set-member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9137 = prim_car(lst);
    void *const lst9139 = prim_cdr(lst);
    void *const x9138 = apply_prim_set_u45member_u63(lst9139);
    arg_buffer[1] = kont9137;
    arg_buffer[2] = x9138;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9137))[0])();
  } else {
    void *const kont9137 = arg_buffer[2];
    void *const x9138 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9137;
    arg_buffer[2] = x9138;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9137))[0])();
  }
}

inline void set_u45remove_fptr() // set-remove
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9140 = prim_car(lst);
    void *const lst9142 = prim_cdr(lst);
    void *const x9141 = apply_prim_set_u45remove(lst9142);
    arg_buffer[1] = kont9140;
    arg_buffer[2] = x9141;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9140))[0])();
  } else {
    void *const kont9140 = arg_buffer[2];
    void *const x9141 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9140;
    arg_buffer[2] = x9141;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9140))[0])();
  }
}

inline void set_u45count_fptr() // set-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9143 = prim_car(lst);
    void *const lst9145 = prim_cdr(lst);
    void *const x9144 = apply_prim_set_u45count(lst9145);
    arg_buffer[1] = kont9143;
    arg_buffer[2] = x9144;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9143))[0])();
  } else {
    void *const kont9143 = arg_buffer[2];
    void *const x9144 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9143;
    arg_buffer[2] = x9144;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9143))[0])();
  }
}

inline void string_u63_fptr() // string?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9146 = prim_car(lst);
    void *const lst9148 = prim_cdr(lst);
    void *const x9147 = apply_prim_string_u63(lst9148);
    arg_buffer[1] = kont9146;
    arg_buffer[2] = x9147;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9146))[0])();
  } else {
    void *const kont9146 = arg_buffer[2];
    void *const x9147 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9146;
    arg_buffer[2] = x9147;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9146))[0])();
  }
}

inline void string_u45length_fptr() // string-length
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9149 = prim_car(lst);
    void *const lst9151 = prim_cdr(lst);
    void *const x9150 = apply_prim_string_u45length(lst9151);
    arg_buffer[1] = kont9149;
    arg_buffer[2] = x9150;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9149))[0])();
  } else {
    void *const kont9149 = arg_buffer[2];
    void *const x9150 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9149;
    arg_buffer[2] = x9150;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9149))[0])();
  }
}

inline void string_u45ref_fptr() // string-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9152 = prim_car(lst);
    void *const lst9154 = prim_cdr(lst);
    void *const x9153 = apply_prim_string_u45ref(lst9154);
    arg_buffer[1] = kont9152;
    arg_buffer[2] = x9153;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9152))[0])();
  } else {
    void *const kont9152 = arg_buffer[2];
    void *const x9153 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9152;
    arg_buffer[2] = x9153;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9152))[0])();
  }
}

inline void substring_fptr() // substring
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9155 = prim_car(lst);
    void *const lst9157 = prim_cdr(lst);
    void *const x9156 = apply_prim_substring(lst9157);
    arg_buffer[1] = kont9155;
    arg_buffer[2] = x9156;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9155))[0])();
  } else {
    void *const kont9155 = arg_buffer[2];
    void *const x9156 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9155;
    arg_buffer[2] = x9156;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9155))[0])();
  }
}

inline void string_u45append_fptr() // string-append
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9158 = prim_car(lst);
    void *const lst9160 = prim_cdr(lst);
    void *const x9159 = apply_prim_string_u45append(lst9160);
    arg_buffer[1] = kont9158;
    arg_buffer[2] = x9159;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9158))[0])();
  } else {
    void *const kont9158 = arg_buffer[2];
    void *const x9159 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9158;
    arg_buffer[2] = x9159;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9158))[0])();
  }
}

inline void string_u45_u62list_fptr() // string->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9161 = prim_car(lst);
    void *const lst9163 = prim_cdr(lst);
    void *const x9162 = apply_prim_string_u45_u62list(lst9163);
    arg_buffer[1] = kont9161;
    arg_buffer[2] = x9162;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9161))[0])();
  } else {
    void *const kont9161 = arg_buffer[2];
    void *const x9162 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9161;
    arg_buffer[2] = x9162;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9161))[0])();
  }
}

inline void exact_u45floor_fptr() // exact-floor
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9164 = prim_car(lst);
    void *const lst9166 = prim_cdr(lst);
    void *const x9165 = apply_prim_exact_u45floor(lst9166);
    arg_buffer[1] = kont9164;
    arg_buffer[2] = x9165;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9164))[0])();
  } else {
    void *const kont9164 = arg_buffer[2];
    void *const x9165 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9164;
    arg_buffer[2] = x9165;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9164))[0])();
  }
}

inline void exact_u45ceiling_fptr() // exact-ceiling
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9167 = prim_car(lst);
    void *const lst9169 = prim_cdr(lst);
    void *const x9168 = apply_prim_exact_u45ceiling(lst9169);
    arg_buffer[1] = kont9167;
    arg_buffer[2] = x9168;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9167))[0])();
  } else {
    void *const kont9167 = arg_buffer[2];
    void *const x9168 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9167;
    arg_buffer[2] = x9168;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9167))[0])();
  }
}

inline void exact_u45round_fptr() // exact-round
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9170 = prim_car(lst);
    void *const lst9172 = prim_cdr(lst);
    void *const x9171 = apply_prim_exact_u45round(lst9172);
    arg_buffer[1] = kont9170;
    arg_buffer[2] = x9171;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9170))[0])();
  } else {
    void *const kont9170 = arg_buffer[2];
    void *const x9171 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9170;
    arg_buffer[2] = x9171;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9170))[0])();
  }
}

inline void abs_fptr() // abs
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9173 = prim_car(lst);
    void *const lst9175 = prim_cdr(lst);
    void *const x9174 = apply_prim_abs(lst9175);
    arg_buffer[1] = kont9173;
    arg_buffer[2] = x9174;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9173))[0])();
  } else {
    void *const kont9173 = arg_buffer[2];
    void *const x9174 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9173;
    arg_buffer[2] = x9174;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9173))[0])();
  }
}

inline void max_fptr() // max
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9176 = prim_car(lst);
    void *const lst9178 = prim_cdr(lst);
    void *const x9177 = apply_prim_max(lst9178);
    arg_buffer[1] = kont9176;
    arg_buffer[2] = x9177;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9176))[0])();
  } else {
    void *const kont9176 = arg_buffer[2];
    void *const x9177 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9176;
    arg_buffer[2] = x9177;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9176))[0])();
  }
}

inline void min_fptr() // min
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9179 = prim_car(lst);
    void *const lst9181 = prim_cdr(lst);
    void *const x9180 = apply_prim_min(lst9181);
    arg_buffer[1] = kont9179;
    arg_buffer[2] = x9180;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9179))[0])();
  } else {
    void *const kont9179 = arg_buffer[2];
    void *const x9180 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9179;
    arg_buffer[2] = x9180;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9179))[0])();
  }
}

inline void expt_fptr() // expt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9182 = prim_car(lst);
    void *const lst9184 = prim_cdr(lst);
    void *const x9183 = apply_prim_expt(lst9184);
    arg_buffer[1] = kont9182;
    arg_buffer[2] = x9183;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9182))[0])();
  } else {
    void *const kont9182 = arg_buffer[2];
    void *const x9183 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9182;
    arg_buffer[2] = x9183;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9182))[0])();
  }
}

inline void sqrt_fptr() // sqrt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9185 = prim_car(lst);
    void *const lst9187 = prim_cdr(lst);
    void *const x9186 = apply_prim_sqrt(lst9187);
    arg_buffer[1] = kont9185;
    arg_buffer[2] = x9186;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9185))[0])();
  } else {
    void *const kont9185 = arg_buffer[2];
    void *const x9186 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9185;
    arg_buffer[2] = x9186;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9185))[0])();
  }
}

inline void remainder_fptr() // remainder
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9188 = prim_car(lst);
    void *const lst9190 = prim_cdr(lst);
    void *const x9189 = apply_prim_remainder(lst9190);
    arg_buffer[1] = kont9188;
    arg_buffer[2] = x9189;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9188))[0])();
  } else {
    void *const kont9188 = arg_buffer[2];
    void *const x9189 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9188;
    arg_buffer[2] = x9189;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9188))[0])();
  }
}

inline void quotient_fptr() // quotient
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9191 = prim_car(lst);
    void *const lst9193 = prim_cdr(lst);
    void *const x9192 = apply_prim_quotient(lst9193);
    arg_buffer[1] = kont9191;
    arg_buffer[2] = x9192;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9191))[0])();
  } else {
    void *const kont9191 = arg_buffer[2];
    void *const x9192 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9191;
    arg_buffer[2] = x9192;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9191))[0])();
  }
}

inline void random_fptr() // random
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9194 = prim_car(lst);
    void *const lst9196 = prim_cdr(lst);
    void *const x9195 = apply_prim_random(lst9196);
    arg_buffer[1] = kont9194;
    arg_buffer[2] = x9195;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9194))[0])();
  } else {
    void *const kont9194 = arg_buffer[2];
    void *const x9195 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9194;
    arg_buffer[2] = x9195;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9194))[0])();
  }
}

inline void symbol_u63_fptr() // symbol?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9197 = prim_car(lst);
    void *const lst9199 = prim_cdr(lst);
    void *const x9198 = apply_prim_symbol_u63(lst9199);
    arg_buffer[1] = kont9197;
    arg_buffer[2] = x9198;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9197))[0])();
  } else {
    void *const kont9197 = arg_buffer[2];
    void *const x9198 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9197;
    arg_buffer[2] = x9198;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9197))[0])();
  }
}

inline void pair_u63_fptr() // pair?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9200 = prim_car(lst);
    void *const lst9202 = prim_cdr(lst);
    void *const x9201 = apply_prim_pair_u63(lst9202);
    arg_buffer[1] = kont9200;
    arg_buffer[2] = x9201;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9200))[0])();
  } else {
    void *const kont9200 = arg_buffer[2];
    void *const x9201 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9200;
    arg_buffer[2] = x9201;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9200))[0])();
  }
}

inline void positive_u63_fptr() // positive?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9203 = prim_car(lst);
    void *const lst9205 = prim_cdr(lst);
    void *const x9204 = apply_prim_positive_u63(lst9205);
    arg_buffer[1] = kont9203;
    arg_buffer[2] = x9204;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9203))[0])();
  } else {
    void *const kont9203 = arg_buffer[2];
    void *const x9204 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9203;
    arg_buffer[2] = x9204;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9203))[0])();
  }
}

inline void negative_u63_fptr() // negative?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9206 = prim_car(lst);
    void *const lst9208 = prim_cdr(lst);
    void *const x9207 = apply_prim_negative_u63(lst9208);
    arg_buffer[1] = kont9206;
    arg_buffer[2] = x9207;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9206))[0])();
  } else {
    void *const kont9206 = arg_buffer[2];
    void *const x9207 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9206;
    arg_buffer[2] = x9207;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9206))[0])();
  }
}

inline void list_fptr() // list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9209 = prim_car(lst);
    void *const lst9211 = prim_cdr(lst);
    void *const x9210 = apply_prim_list(lst9211);
    arg_buffer[1] = kont9209;
    arg_buffer[2] = x9210;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9209))[0])();
  } else {
    void *const kont9209 = arg_buffer[2];
    void *const x9210 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9209;
    arg_buffer[2] = x9210;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9209))[0])();
  }
}

inline void even_u63_fptr() // even? -> generic version
{
  // reading env and args
  void *const kont8915 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8915)[1])(
      kont8915,
      apply_prim_equal_u63_2(int9051, apply_prim_modulo_2(x, int9026)));
}

inline void even_u63_spec(void *_8959, void *kont8915, void *x) // even?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8915)[1])(
      kont8915,
      apply_prim_equal_u63_2(int9051, apply_prim_modulo_2(x, int9026)));
}

inline void odd_u63_fptr() // odd? -> generic version
{
  // reading env and args
  void *const kont8916 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8916)[1])(
      kont8916,
      apply_prim_equal_u63_2(int9050, apply_prim_modulo_2(x, int9026)));
}

inline void odd_u63_spec(void *_8960, void *kont8916, void *x) // odd?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8916)[1])(
      kont8916,
      apply_prim_equal_u63_2(int9050, apply_prim_modulo_2(x, int9026)));
}

inline void list_u45ref_fptr() // list-ref -> generic version
{
  // reading env and args
  void *const kont8917 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int9051, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8917)[1])(
        kont8917, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8917, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int9050));
  }
}

inline void list_u45ref_spec(void *_8961, void *kont8917, void *lst,
                             void *n) // list-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int9051, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8917)[1])(
        kont8917, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8917, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int9050));
  }
}

inline void lam8962_fptr() // lam8962 -> generic version
{
  // reading env
  void *const env8963 = arg_buffer[1];
  // reading env and args
  void *const id_8745 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8963);

  // if-clause
  if (is_true(id_8745)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], bool_f9044);
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

inline void lam8962_spec(void *env8963, void *id_8745) // lam8962
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8963);

  // if-clause
  if (is_true(id_8745)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], bool_f9044);
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
  void *const kont8918 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9212 = alloc_kont(lam8962_fptr, lam8962_spec, 3);

  // setting env list
  clo9212[2] = kont8918;
  clo9212[3] = item;
  clo9212[4] = lst;
  void *f_lam_8919 = encode_clo(clo9212);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    lam8962_spec(f_lam_8919, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    lam8962_spec(f_lam_8919, apply_prim_null_u63_1(lst));
  }
}

inline void member_spec(void *_8964, void *kont8918, void *item,
                        void *lst) // member
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9213 = alloc_kont(lam8962_fptr, lam8962_spec, 3);

  // setting env list
  clo9213[2] = kont8918;
  clo9213[3] = item;
  clo9213[4] = lst;
  void *f_lam_8919 = encode_clo(clo9213);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    lam8962_spec(f_lam_8919, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    lam8962_spec(f_lam_8919, apply_prim_null_u63_1(lst));
  }
}

inline void member_u63_fptr() // member? -> generic version
{
  // reading env and args
  void *const kont8920 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8920)[1])(
        kont8920, bool_f9044);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8920)[1])(
          kont8920, bool_t9046);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8920, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void member_u63_spec(void *_8965, void *kont8920, void *x,
                            void *lst) // member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8920)[1])(
        kont8920, bool_f9044);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8920)[1])(
          kont8920, bool_t9046);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8920, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void lam8966_fptr() // lam8966 -> generic version
{
  // reading env
  void *const env8967 = arg_buffer[1];
  // reading env and args
  void *const id_8760 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8967);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void lam8966_spec(void *env8967, void *id_8760) // lam8966
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8967);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void length_fptr() // length -> generic version
{
  // reading env and args
  void *const kont8921 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8921)[1])(
        kont8921, int9051);
  } else {

    // creating new make-kont closure
    void **clo9214 = alloc_kont(lam8966_fptr, lam8966_spec, 2);

    // setting env list
    clo9214[2] = int9050;
    clo9214[3] = kont8921;
    void *f_lam_8922 = encode_clo(clo9214);

    // clo-app
    length_spec(length, f_lam_8922, apply_prim_cdr_1(lst));
  }
}

inline void length_spec(void *_8968, void *kont8921, void *lst) // length
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8921)[1])(
        kont8921, int9051);
  } else {

    // creating new make-kont closure
    void **clo9215 = alloc_kont(lam8966_fptr, lam8966_spec, 2);

    // setting env list
    clo9215[2] = int9050;
    clo9215[3] = kont8921;
    void *f_lam_8922 = encode_clo(clo9215);

    // clo-app
    length_spec(length, f_lam_8922, apply_prim_cdr_1(lst));
  }
}

inline void lam8969_fptr() // lam8969 -> generic version
{
  // reading env
  void *const env8970 = arg_buffer[1];
  // reading env and args
  void *const id_8766 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8970);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam8969_spec(void *env8970, void *id_8766) // lam8969
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8970);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam8971_fptr() // lam8971 -> generic version
{
  // reading env
  void *const env8972 = arg_buffer[1];
  // reading env and args
  void *const id_8764 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8972);

  // creating new make-kont closure
  void **clo9216 = alloc_kont(lam8969_fptr, lam8969_spec, 2);

  // setting env list
  clo9216[2] = id_8764;
  clo9216[3] = decode_clo_array[4];
  void *f_lam_8924 = encode_clo(clo9216);

  // clo-app
  map_spec(map, f_lam_8924, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8971_spec(void *env8972, void *id_8764) // lam8971
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8972);

  // creating new make-kont closure
  void **clo9217 = alloc_kont(lam8969_fptr, lam8969_spec, 2);

  // setting env list
  clo9217[2] = id_8764;
  clo9217[3] = decode_clo_array[4];
  void *f_lam_8924 = encode_clo(clo9217);

  // clo-app
  map_spec(map, f_lam_8924, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version
{
  // reading env and args
  void *const kont8923 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8923)[1])(
        kont8923, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9218 = alloc_kont(lam8971_fptr, lam8971_spec, 3);

    // setting env list
    clo9218[2] = proc;
    clo9218[3] = lst;
    clo9218[4] = kont8923;
    void *f_lam_8925 = encode_clo(clo9218);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_8925;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void map_spec(void *_8973, void *kont8923, void *proc, void *lst) // map
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8923)[1])(
        kont8923, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9219 = alloc_kont(lam8971_fptr, lam8971_spec, 3);

    // setting env list
    clo9219[2] = proc;
    clo9219[3] = lst;
    clo9219[4] = kont8923;
    void *f_lam_8925 = encode_clo(clo9219);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_8925;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void lam8974_fptr() // lam8974 -> generic version
{
  // reading env
  void *const env8975 = arg_buffer[1];
  // reading env and args
  void *const id_8773 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8975);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8974_spec(void *env8975, void *id_8773) // lam8974
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8975);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8976_fptr() // lam8976 -> generic version
{
  // reading env
  void *const env8977 = arg_buffer[1];
  // reading env and args
  void *const id_8770 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8977);

  // if-clause
  if (is_true(id_8770)) {

    // creating new make-kont closure
    void **clo9220 = alloc_kont(lam8974_fptr, lam8974_spec, 2);

    // setting env list
    clo9220[2] = apply_prim_car_1(decode_clo_array[4]);
    clo9220[3] = decode_clo_array[3];
    void *f_lam_8927 = encode_clo(clo9220);

    // clo-app
    filter_spec(filter, f_lam_8927, decode_clo_array[2],
                apply_prim_cdr_1(decode_clo_array[4]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[3], decode_clo_array[2],
                apply_prim_cdr_1(decode_clo_array[4]));
  }
}

inline void lam8976_spec(void *env8977, void *id_8770) // lam8976
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8977);

  // if-clause
  if (is_true(id_8770)) {

    // creating new make-kont closure
    void **clo9221 = alloc_kont(lam8974_fptr, lam8974_spec, 2);

    // setting env list
    clo9221[2] = apply_prim_car_1(decode_clo_array[4]);
    clo9221[3] = decode_clo_array[3];
    void *f_lam_8927 = encode_clo(clo9221);

    // clo-app
    filter_spec(filter, f_lam_8927, decode_clo_array[2],
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
  void *const kont8926 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8926)[1])(
        kont8926, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9222 = alloc_kont(lam8976_fptr, lam8976_spec, 3);

    // setting env list
    clo9222[2] = op;
    clo9222[3] = kont8926;
    clo9222[4] = lst;
    void *f_lam_8928 = encode_clo(clo9222);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_8928;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void filter_spec(void *_8978, void *kont8926, void *op,
                        void *lst) // filter
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8926)[1])(
        kont8926, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9223 = alloc_kont(lam8976_fptr, lam8976_spec, 3);

    // setting env list
    clo9223[2] = op;
    clo9223[3] = kont8926;
    clo9223[4] = lst;
    void *f_lam_8928 = encode_clo(clo9223);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_8928;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void drop_fptr() // drop -> generic version
{
  // reading env and args
  void *const kont8929 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9051))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8929)[1])(
        kont8929, lst);
  } else {

    // clo-app
    drop_spec(drop, kont8929, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int9050));
  }
}

inline void drop_spec(void *_8979, void *kont8929, void *lst, void *n) // drop
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9051))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8929)[1])(
        kont8929, lst);
  } else {

    // clo-app
    drop_spec(drop, kont8929, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int9050));
  }
}

inline void lam8980_fptr() // lam8980 -> generic version
{
  // reading env
  void *const env8981 = arg_buffer[1];
  // reading env and args
  void *const id_8782 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8981);

  // clo-app
  foldl_spec(foldl, decode_clo_array[3], decode_clo_array[2], id_8782,
             apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8980_spec(void *env8981, void *id_8782) // lam8980
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8981);

  // clo-app
  foldl_spec(foldl, decode_clo_array[3], decode_clo_array[2], id_8782,
             apply_prim_cdr_1(decode_clo_array[4]));
}

inline void foldl_fptr() // foldl -> generic version
{
  // reading env and args
  void *const kont8930 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8930)[1])(
        kont8930, acc);
  } else {

    // creating new make-kont closure
    void **clo9224 = alloc_kont(lam8980_fptr, lam8980_spec, 3);

    // setting env list
    clo9224[2] = fun;
    clo9224[3] = kont8930;
    clo9224[4] = lst;
    void *f_lam_8931 = encode_clo(clo9224);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_8931;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = 4;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void foldl_spec(void *_8982, void *kont8930, void *fun, void *acc,
                       void *lst) // foldl
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8930)[1])(
        kont8930, acc);
  } else {

    // creating new make-kont closure
    void **clo9225 = alloc_kont(lam8980_fptr, lam8980_spec, 3);

    // setting env list
    clo9225[2] = fun;
    clo9225[3] = kont8930;
    clo9225[4] = lst;
    void *f_lam_8931 = encode_clo(clo9225);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_8931;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = 4;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void lam8983_fptr() // lam8983 -> generic version
{
  // reading env
  void *const env8984 = arg_buffer[1];
  // reading env and args
  void *const id_8787 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8984);

  // clo-app
  arg_buffer[1] = decode_clo_array[3];
  arg_buffer[2] = decode_clo_array[2];
  arg_buffer[3] = decode_clo_array[4];
  arg_buffer[4] = id_8787;
  numArgs = 4;
  // generic else-case
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8983_spec(void *env8984, void *id_8787) // lam8983
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8984);

  // clo-app
  arg_buffer[1] = decode_clo_array[3];
  arg_buffer[2] = decode_clo_array[2];
  arg_buffer[3] = decode_clo_array[4];
  arg_buffer[4] = id_8787;
  numArgs = 4;
  // generic else-case
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void foldr_fptr() // foldr -> generic version
{
  // reading env and args
  void *const kont8932 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8932)[1])(
        kont8932, acc);
  } else {

    // creating new make-kont closure
    void **clo9226 = alloc_kont(lam8983_fptr, lam8983_spec, 3);

    // setting env list
    clo9226[2] = kont8932;
    clo9226[3] = fun;
    clo9226[4] = apply_prim_car_1(lst);
    void *f_lam_8933 = encode_clo(clo9226);

    // clo-app
    foldr_spec(foldr, f_lam_8933, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void foldr_spec(void *_8985, void *kont8932, void *fun, void *acc,
                       void *lst) // foldr
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8932)[1])(
        kont8932, acc);
  } else {

    // creating new make-kont closure
    void **clo9227 = alloc_kont(lam8983_fptr, lam8983_spec, 3);

    // setting env list
    clo9227[2] = kont8932;
    clo9227[3] = fun;
    clo9227[4] = apply_prim_car_1(lst);
    void *f_lam_8933 = encode_clo(clo9227);

    // clo-app
    foldr_spec(foldr, f_lam_8933, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version
{
  // reading env and args
  void *const kont8934 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8934)[1])(
        kont8934, lst2);
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8934, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_u45helper_spec(void *_8986, void *kont8934, void *lst,
                                   void *lst2) // reverse-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8934)[1])(
        kont8934, lst2);
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8934, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_fptr() // reverse -> generic version
{
  // reading env and args
  void *const kont8935 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8935, lst, apply_prim_list_0());
}

inline void reverse_spec(void *_8987, void *kont8935, void *lst) // reverse
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8935, lst, apply_prim_list_0());
}

inline void lam8988_fptr() // lam8988 -> generic version
{
  // reading env
  void *const env8989 = arg_buffer[1];
  // reading env and args
  void *const id_8796 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8989);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void lam8988_spec(void *env8989, void *id_8796) // lam8988
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8989);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[3])[1])(
      decode_clo_array[3], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void append1_fptr() // append1 -> generic version
{
  // reading env and args
  void *const kont8936 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8936)[1])(
        kont8936, rhs);
  } else {

    // creating new make-kont closure
    void **clo9228 = alloc_kont(lam8988_fptr, lam8988_spec, 2);

    // setting env list
    clo9228[2] = apply_prim_car_1(lhs);
    clo9228[3] = kont8936;
    void *f_lam_8937 = encode_clo(clo9228);

    // clo-app
    append1_spec(append1, f_lam_8937, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void append1_spec(void *_8990, void *kont8936, void *lhs,
                         void *rhs) // append1
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8936)[1])(
        kont8936, rhs);
  } else {

    // creating new make-kont closure
    void **clo9229 = alloc_kont(lam8988_fptr, lam8988_spec, 2);

    // setting env list
    clo9229[2] = apply_prim_car_1(lhs);
    clo9229[3] = kont8936;
    void *f_lam_8937 = encode_clo(clo9229);

    // clo-app
    append1_spec(append1, f_lam_8937, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void lam8991_fptr() // lam8991 -> generic version
{
  // reading env
  void *const env8992 = arg_buffer[1];
  // reading env and args
  void *const id_8803 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8992);

  // clo-app
  foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8803);
}

inline void lam8991_spec(void *env8992, void *id_8803) // lam8991
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8992);

  // clo-app
  foldr_spec(foldr, decode_clo_array[3], append1, decode_clo_array[2], id_8803);
}

inline void lam8993_fptr() // lam8993 -> generic version
{
  // reading env
  void *const env8994 = arg_buffer[1];
  // reading env and args
  void *const id_8798 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8994);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[4], id_8798))) {

    // clo-app
    append1_spec(append1, decode_clo_array[5], decode_clo_array[2],
                 apply_prim_car_1(decode_clo_array[3]));
  } else {

    // creating new make-kont closure
    void **clo9230 = alloc_kont(lam8991_fptr, lam8991_spec, 2);

    // setting env list
    clo9230[2] = apply_prim_list_0();
    clo9230[3] = decode_clo_array[5];
    void *f_lam_8939 = encode_clo(clo9230);

    // clo-app
    append1_spec(append1, f_lam_8939, apply_prim_list_1(decode_clo_array[2]),
                 decode_clo_array[3]);
  }
}

inline void lam8993_spec(void *env8994, void *id_8798) // lam8993
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8994);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[4], id_8798))) {

    // clo-app
    append1_spec(append1, decode_clo_array[5], decode_clo_array[2],
                 apply_prim_car_1(decode_clo_array[3]));
  } else {

    // creating new make-kont closure
    void **clo9231 = alloc_kont(lam8991_fptr, lam8991_spec, 2);

    // setting env list
    clo9231[2] = apply_prim_list_0();
    clo9231[3] = decode_clo_array[5];
    void *f_lam_8939 = encode_clo(clo9231);

    // clo-app
    append1_spec(append1, f_lam_8939, apply_prim_list_1(decode_clo_array[2]),
                 decode_clo_array[3]);
  }
}

inline void lam8995_fptr() // lam8995 -> generic version
{
  // reading env
  void *const env8996 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8996);

  // creating new make-kont closure
  void **clo9232 = alloc_kont(lam8993_fptr, lam8993_spec, 4);

  // setting env list
  clo9232[2] = decode_clo_array[2];
  clo9232[3] = x;
  clo9232[4] = int9050;
  clo9232[5] = decode_clo_array[3];
  void *f_lam_8940 = encode_clo(clo9232);

  // clo-app
  length_spec(length, f_lam_8940, x);
}

inline void lam8995_spec(void *env8996, void *x) // lam8995
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8996);

  // creating new make-kont closure
  void **clo9233 = alloc_kont(lam8993_fptr, lam8993_spec, 4);

  // setting env list
  clo9233[2] = decode_clo_array[2];
  clo9233[3] = x;
  clo9233[4] = int9050;
  clo9233[5] = decode_clo_array[3];
  void *f_lam_8940 = encode_clo(clo9233);

  // clo-app
  length_spec(length, f_lam_8940, x);
}

void append_fptr() // append
{
  // reading env
  void *const _8997 = arg_buffer[1];
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
  void **clo9234 = alloc_kont(lam8995_fptr, lam8995_spec, 2);

  // setting env list
  clo9234[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
  clo9234[3] = apply_prim_car_1(vargs);
  void *f_lam_8941 = encode_clo(clo9234);

  // kont-clo-app case
  lam8995_spec(f_lam_8941, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8998_fptr() // lam8998 -> generic version
{
  // reading env
  void *const env8999 = arg_buffer[1];
  // reading env and args
  void *const xy8806 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8999);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
}

inline void lam8998_spec(void *env8999, void *xy8806) // lam8998
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8999);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version
{
  // reading env and args
  void *const kont8942 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9051))) {

    // creating new make-kont closure
    void **clo9235 = alloc_kont(lam8998_fptr, lam8998_spec, 1);

    // setting env list
    clo9235[2] = kont8942;
    void *f_lam_8943 = encode_clo(clo9235);

    // clo-app
    reverse_spec(reverse, f_lam_8943, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8942, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int9050),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_u45helper_spec(void *_9000, void *kont8942, void *lst, void *n,
                                void *lst2) // take-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9051))) {

    // creating new make-kont closure
    void **clo9236 = alloc_kont(lam8998_fptr, lam8998_spec, 1);

    // setting env list
    clo9236[2] = kont8942;
    void *f_lam_8943 = encode_clo(clo9236);

    // clo-app
    reverse_spec(reverse, f_lam_8943, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8942, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int9050),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_fptr() // take -> generic version
{
  // reading env and args
  void *const kont8944 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8944, lst, n, apply_prim_list_0());
}

inline void take_spec(void *_9001, void *kont8944, void *lst, void *n) // take
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8944, lst, n, apply_prim_list_0());
}

inline void lam9002_fptr() // lam9002 -> generic version
{
  // reading env
  void *const env9003 = arg_buffer[1];
  // reading env and args
  void *const id_8826 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9003);

  // if-clause
  if (is_true(id_8826)) {

    // clo-app
    ok_u63_spec(ok_u63, decode_clo_array[4], decode_clo_array[3],
                apply_prim__u43_2(decode_clo_array[5], int9050),
                apply_prim_cdr_1(decode_clo_array[2]));
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
  }
}

inline void lam9002_spec(void *env9003, void *id_8826) // lam9002
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9003);

  // if-clause
  if (is_true(id_8826)) {

    // clo-app
    ok_u63_spec(ok_u63, decode_clo_array[4], decode_clo_array[3],
                apply_prim__u43_2(decode_clo_array[5], int9050),
                apply_prim_cdr_1(decode_clo_array[2]));
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
  }
}

inline void lam9004_fptr() // lam9004 -> generic version
{
  // reading env
  void *const env9005 = arg_buffer[1];
  // reading env and args
  void *const id_8820 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9005);

  // if-clause
  if (is_true(id_8820)) {

    // creating new make-kont closure
    void **clo9237 = alloc_kont(lam9002_fptr, lam9002_spec, 4);

    // setting env list
    clo9237[2] = decode_clo_array[2];
    clo9237[3] = decode_clo_array[3];
    clo9237[4] = decode_clo_array[4];
    clo9237[5] = decode_clo_array[5];
    void *f_lam_8946 = encode_clo(clo9237);

    // if-clause
    if (is_true(apply_prim__u61_2(
            apply_prim_car_1(decode_clo_array[2]),
            apply_prim__u45_2(decode_clo_array[3], decode_clo_array[5])))) {
      // kont-clo-app case
      lam9002_spec(f_lam_8946, bool_f9044);
    } else {
      // kont-clo-app case
      lam9002_spec(f_lam_8946, bool_t9046);
    }

  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
  }
}

inline void lam9004_spec(void *env9005, void *id_8820) // lam9004
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9005);

  // if-clause
  if (is_true(id_8820)) {

    // creating new make-kont closure
    void **clo9238 = alloc_kont(lam9002_fptr, lam9002_spec, 4);

    // setting env list
    clo9238[2] = decode_clo_array[2];
    clo9238[3] = decode_clo_array[3];
    clo9238[4] = decode_clo_array[4];
    clo9238[5] = decode_clo_array[5];
    void *f_lam_8946 = encode_clo(clo9238);

    // if-clause
    if (is_true(apply_prim__u61_2(
            apply_prim_car_1(decode_clo_array[2]),
            apply_prim__u45_2(decode_clo_array[3], decode_clo_array[5])))) {
      // kont-clo-app case
      lam9002_spec(f_lam_8946, bool_f9044);
    } else {
      // kont-clo-app case
      lam9002_spec(f_lam_8946, bool_t9046);
    }

  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f9044);
  }
}

inline void ok_u63_fptr() // ok? -> generic version
{
  // reading env and args
  void *const kont8945 = arg_buffer[2];
  void *const row = arg_buffer[3];
  void *const dist = arg_buffer[4];
  void *const placed = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(placed))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8945)[1])(
        kont8945, bool_t9046);
  } else {

    // creating new make-kont closure
    void **clo9239 = alloc_kont(lam9004_fptr, lam9004_spec, 4);

    // setting env list
    clo9239[2] = placed;
    clo9239[3] = row;
    clo9239[4] = kont8945;
    clo9239[5] = dist;
    void *f_lam_8947 = encode_clo(clo9239);

    // if-clause
    if (is_true(apply_prim__u61_2(apply_prim_car_1(placed),
                                  apply_prim__u43_2(row, dist)))) {
      // kont-clo-app case
      lam9004_spec(f_lam_8947, bool_f9044);
    } else {
      // kont-clo-app case
      lam9004_spec(f_lam_8947, bool_t9046);
    }
  }
}

inline void ok_u63_spec(void *_9006, void *kont8945, void *row, void *dist,
                        void *placed) // ok?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(placed))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8945)[1])(
        kont8945, bool_t9046);
  } else {

    // creating new make-kont closure
    void **clo9240 = alloc_kont(lam9004_fptr, lam9004_spec, 4);

    // setting env list
    clo9240[2] = placed;
    clo9240[3] = row;
    clo9240[4] = kont8945;
    clo9240[5] = dist;
    void *f_lam_8947 = encode_clo(clo9240);

    // if-clause
    if (is_true(apply_prim__u61_2(apply_prim_car_1(placed),
                                  apply_prim__u43_2(row, dist)))) {
      // kont-clo-app case
      lam9004_spec(f_lam_8947, bool_f9044);
    } else {
      // kont-clo-app case
      lam9004_spec(f_lam_8947, bool_t9046);
    }
  }
}

inline void lam9007_fptr() // lam9007 -> generic version
{
  // reading env
  void *const env9008 = arg_buffer[1];
  // reading env and args
  void *const id_8850 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9008);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(
      decode_clo_array[2],
      apply_prim_cons_2(
          apply_prim_list_3(
              id_8850, apply_prim_list_0(),
              apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]),
                                decode_clo_array[4])),
          apply_prim_cdr_1(decode_clo_array[5])));
}

inline void lam9007_spec(void *env9008, void *id_8850) // lam9007
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9008);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(
      decode_clo_array[2],
      apply_prim_cons_2(
          apply_prim_list_3(
              id_8850, apply_prim_list_0(),
              apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]),
                                decode_clo_array[4])),
          apply_prim_cdr_1(decode_clo_array[5])));
}

inline void lam9009_fptr() // lam9009 -> generic version
{
  // reading env
  void *const env9010 = arg_buffer[1];
  // reading env and args
  void *const id_8857 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9010);

  // clo-app
  q_u45helper_spec(q_u45helper, decode_clo_array[2],
                   apply_prim_cons_2(decode_clo_array[3], id_8857),
                   decode_clo_array[4]);
}

inline void lam9009_spec(void *env9010, void *id_8857) // lam9009
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9010);

  // clo-app
  q_u45helper_spec(q_u45helper, decode_clo_array[2],
                   apply_prim_cons_2(decode_clo_array[3], id_8857),
                   decode_clo_array[4]);
}

inline void lam9011_fptr() // lam9011 -> generic version
{
  // reading env
  void *const env9012 = arg_buffer[1];
  // reading env and args
  void *const id_8848 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9012);

  // creating new make-kont closure
  void **clo9241 = alloc_kont(lam9009_fptr, lam9009_spec, 3);

  // setting env list
  clo9241[2] = decode_clo_array[2];
  clo9241[3] = decode_clo_array[6];
  clo9241[4] = decode_clo_array[7];
  void *f_lam_8949 = encode_clo(clo9241);

  // if-clause
  if (is_true(id_8848)) {

    // creating new make-kont closure
    void **clo9242 = alloc_kont(lam9007_fptr, lam9007_spec, 4);

    // setting env list
    clo9242[2] = f_lam_8949;
    clo9242[3] = decode_clo_array[3];
    clo9242[4] = decode_clo_array[5];
    clo9242[5] = decode_clo_array[8];
    void *f_lam_8950 = encode_clo(clo9242);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f_lam_8950;
    arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[3]);
    arg_buffer[4] = decode_clo_array[4];
    numArgs = 4;
    append_fptr();
  } else {
    // kont-clo-app case
    lam9009_spec(f_lam_8949, apply_prim_cdr_1(decode_clo_array[8]));
  }
}

inline void lam9011_spec(void *env9012, void *id_8848) // lam9011
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9012);

  // creating new make-kont closure
  void **clo9243 = alloc_kont(lam9009_fptr, lam9009_spec, 3);

  // setting env list
  clo9243[2] = decode_clo_array[2];
  clo9243[3] = decode_clo_array[6];
  clo9243[4] = decode_clo_array[7];
  void *f_lam_8949 = encode_clo(clo9243);

  // if-clause
  if (is_true(id_8848)) {

    // creating new make-kont closure
    void **clo9244 = alloc_kont(lam9007_fptr, lam9007_spec, 4);

    // setting env list
    clo9244[2] = f_lam_8949;
    clo9244[3] = decode_clo_array[3];
    clo9244[4] = decode_clo_array[5];
    clo9244[5] = decode_clo_array[8];
    void *f_lam_8950 = encode_clo(clo9244);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f_lam_8950;
    arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[3]);
    arg_buffer[4] = decode_clo_array[4];
    numArgs = 4;
    append_fptr();
  } else {
    // kont-clo-app case
    lam9009_spec(f_lam_8949, apply_prim_cdr_1(decode_clo_array[8]));
  }
}

inline void lam9013_fptr() // lam9013 -> generic version
{
  // reading env
  void *const env9014 = arg_buffer[1];
  // reading env and args
  void *const z = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9014);

  // if-clause
  if (is_true(apply_prim_null_u63_1(decode_clo_array[3]))) {

    // if-clause
    if (is_true(apply_prim_null_u63_1(decode_clo_array[4]))) {

      // clo-app
      q_u45helper_spec(q_u45helper, decode_clo_array[2],
                       apply_prim_cdr_1(decode_clo_array[6]),
                       apply_prim__u43_2(decode_clo_array[5], int9050));
    } else {

      // clo-app
      q_u45helper_spec(q_u45helper, decode_clo_array[2],
                       apply_prim_cdr_1(decode_clo_array[6]),
                       decode_clo_array[5]);
    }

  } else {

    // creating new make-kont closure
    void **clo9245 = alloc_kont(lam9011_fptr, lam9011_spec, 7);

    // setting env list
    clo9245[2] = decode_clo_array[2];
    clo9245[3] = decode_clo_array[3];
    clo9245[4] = decode_clo_array[4];
    clo9245[5] = z;
    clo9245[6] = apply_prim_list_3(
        apply_prim_cdr_1(decode_clo_array[3]),
        apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]),
                          decode_clo_array[4]),
        z);
    clo9245[7] = decode_clo_array[5];
    clo9245[8] = decode_clo_array[6];
    void *f_lam_8951 = encode_clo(clo9245);

    // clo-app
    ok_u63_spec(ok_u63, f_lam_8951, apply_prim_car_1(decode_clo_array[3]),
                int9050, z);
  }
}

inline void lam9013_spec(void *env9014, void *z) // lam9013
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9014);

  // if-clause
  if (is_true(apply_prim_null_u63_1(decode_clo_array[3]))) {

    // if-clause
    if (is_true(apply_prim_null_u63_1(decode_clo_array[4]))) {

      // clo-app
      q_u45helper_spec(q_u45helper, decode_clo_array[2],
                       apply_prim_cdr_1(decode_clo_array[6]),
                       apply_prim__u43_2(decode_clo_array[5], int9050));
    } else {

      // clo-app
      q_u45helper_spec(q_u45helper, decode_clo_array[2],
                       apply_prim_cdr_1(decode_clo_array[6]),
                       decode_clo_array[5]);
    }

  } else {

    // creating new make-kont closure
    void **clo9246 = alloc_kont(lam9011_fptr, lam9011_spec, 7);

    // setting env list
    clo9246[2] = decode_clo_array[2];
    clo9246[3] = decode_clo_array[3];
    clo9246[4] = decode_clo_array[4];
    clo9246[5] = z;
    clo9246[6] = apply_prim_list_3(
        apply_prim_cdr_1(decode_clo_array[3]),
        apply_prim_cons_2(apply_prim_car_1(decode_clo_array[3]),
                          decode_clo_array[4]),
        z);
    clo9246[7] = decode_clo_array[5];
    clo9246[8] = decode_clo_array[6];
    void *f_lam_8951 = encode_clo(clo9246);

    // clo-app
    ok_u63_spec(ok_u63, f_lam_8951, apply_prim_car_1(decode_clo_array[3]),
                int9050, z);
  }
}

inline void lam9015_fptr() // lam9015 -> generic version
{
  // reading env
  void *const env9016 = arg_buffer[1];
  // reading env and args
  void *const y = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9016);

  // creating new make-kont closure
  void **clo9247 = alloc_kont(lam9013_fptr, lam9013_spec, 5);

  // setting env list
  clo9247[2] = decode_clo_array[2];
  clo9247[3] = decode_clo_array[3];
  clo9247[4] = y;
  clo9247[5] = decode_clo_array[4];
  clo9247[6] = decode_clo_array[6];
  void *f_lam_8952 = encode_clo(clo9247);

  // kont-clo-app case
  lam9013_spec(f_lam_8952, apply_prim_car_1(apply_prim_cdr_1(
                               apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void lam9015_spec(void *env9016, void *y) // lam9015
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9016);

  // creating new make-kont closure
  void **clo9248 = alloc_kont(lam9013_fptr, lam9013_spec, 5);

  // setting env list
  clo9248[2] = decode_clo_array[2];
  clo9248[3] = decode_clo_array[3];
  clo9248[4] = y;
  clo9248[5] = decode_clo_array[4];
  clo9248[6] = decode_clo_array[6];
  void *f_lam_8952 = encode_clo(clo9248);

  // kont-clo-app case
  lam9013_spec(f_lam_8952, apply_prim_car_1(apply_prim_cdr_1(
                               apply_prim_cdr_1(decode_clo_array[5]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version
{
  // reading env and args
  void *const kont8948 = arg_buffer[2];
  void *const stack = arg_buffer[3];
  void *const count = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(stack))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8948)[1])(
        kont8948, count);
  } else {

    // creating new make-kont closure
    void **clo9249 = alloc_kont(lam9015_fptr, lam9015_spec, 5);

    // setting env list
    clo9249[2] = kont8948;
    clo9249[3] = apply_prim_car_1(apply_prim_car_1(stack));
    clo9249[4] = count;
    clo9249[5] = apply_prim_car_1(stack);
    clo9249[6] = stack;
    void *f_lam_8953 = encode_clo(clo9249);

    // kont-clo-app case
    lam9015_spec(f_lam_8953,
                 apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
  }
}

inline void q_u45helper_spec(void *_9017, void *kont8948, void *stack,
                             void *count) // q-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(stack))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8948)[1])(
        kont8948, count);
  } else {

    // creating new make-kont closure
    void **clo9250 = alloc_kont(lam9015_fptr, lam9015_spec, 5);

    // setting env list
    clo9250[2] = kont8948;
    clo9250[3] = apply_prim_car_1(apply_prim_car_1(stack));
    clo9250[4] = count;
    clo9250[5] = apply_prim_car_1(stack);
    clo9250[6] = stack;
    void *f_lam_8953 = encode_clo(clo9250);

    // kont-clo-app case
    lam9015_spec(f_lam_8953,
                 apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
  }
}

inline void iota1_fptr() // iota1 -> generic version
{
  // reading env and args
  void *const kont8954 = arg_buffer[2];
  void *const n = arg_buffer[3];
  void *const l = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9051))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8954)[1])(
        kont8954, l);
  } else {

    // clo-app
    iota1_spec(iota1, kont8954, apply_prim__u45_2(n, int9050),
               apply_prim_cons_2(n, l));
  }
}

inline void iota1_spec(void *_9018, void *kont8954, void *n, void *l) // iota1
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9051))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8954)[1])(
        kont8954, l);
  } else {

    // clo-app
    iota1_spec(iota1, kont8954, apply_prim__u45_2(n, int9050),
               apply_prim_cons_2(n, l));
  }
}

inline void lam9019_fptr() // lam9019 -> generic version
{
  // reading env
  void *const env9020 = arg_buffer[1];
  // reading env and args
  void *const id_8865 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9020);

  // clo-app
  q_u45helper_spec(q_u45helper, decode_clo_array[2],
                   apply_prim_list_1(apply_prim_list_3(
                       id_8865, apply_prim_list_0(), apply_prim_list_0())),
                   int9051);
}

inline void lam9019_spec(void *env9020, void *id_8865) // lam9019
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9020);

  // clo-app
  q_u45helper_spec(q_u45helper, decode_clo_array[2],
                   apply_prim_list_1(apply_prim_list_3(
                       id_8865, apply_prim_list_0(), apply_prim_list_0())),
                   int9051);
}

inline void nqueens_fptr() // nqueens -> generic version
{
  // reading env and args
  void *const kont8955 = arg_buffer[2];
  void *const n = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9251 = alloc_kont(lam9019_fptr, lam9019_spec, 1);

  // setting env list
  clo9251[2] = kont8955;
  void *f_lam_8956 = encode_clo(clo9251);

  // clo-app
  iota1_spec(iota1, f_lam_8956, n, apply_prim_list_0());
}

inline void nqueens_spec(void *_9021, void *kont8955, void *n) // nqueens
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9252 = alloc_kont(lam9019_fptr, lam9019_spec, 1);

  // setting env list
  clo9252[2] = kont8955;
  void *f_lam_8956 = encode_clo(clo9252);

  // clo-app
  iota1_spec(iota1, f_lam_8956, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version
{
  // reading env and args
  void *const kont8957 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  nqueens_spec(nqueens, kont8957, int9052);
}

inline void brouhaha_main_spec(void *_9022, void *kont8957) // brouhaha_main
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  nqueens_spec(nqueens, kont8957, int9052);
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int9051 = reinterpret_cast<void *>(encode_int(0));
  bool_t9046 = encode_bool(true);
  int9050 = reinterpret_cast<void *>(encode_int(1));
  bool_f9044 = encode_bool(false);
  int9026 = reinterpret_cast<void *>(encode_int(2));
  int9052 = reinterpret_cast<void *>(encode_int(8));

  // making a call to the brouhaha main function to kick off our C++ emission.
  void **f_halt_clo = alloc_kont(fhalt, fhalt_spec, 0);
  void *fhalt_clo = encode_clo(f_halt_clo);
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_spec(nullptr, fhalt_clo);
}
