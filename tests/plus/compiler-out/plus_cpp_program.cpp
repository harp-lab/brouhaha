#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int8909;
void *bool_t8902;
void *int8912;
void *bool_f8903;
void *int8898;
void *int8911;

// declaring global integer variable
int int8913;
int int8914;
int int8915;
int int8916;
int int8917;

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
void even_u63_spec(void *_8849, void *kont8815, void *x); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr();                                     // odd?
void odd_u63_spec(void *_8850, void *kont8816, void *x); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void *_8851, void *kont8817, void *lst,
                      void *n); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8852_fptr();                             // lam8852
void lam8852_spec(void *env8853, void *id_8743); // lam8852
void *lam8852 = encode_clo(alloc_clo(lam8852_fptr, 0));

void member_fptr();                                                   // member
void member_spec(void *_8854, void *kont8818, void *item, void *lst); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void *_8855, void *kont8820, void *x,
                     void *lst); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8856_fptr();                             // lam8856
void lam8856_spec(void *env8857, void *id_8758); // lam8856
void *lam8856 = encode_clo(alloc_clo(lam8856_fptr, 0));

void length_fptr();                                       // length
void length_spec(void *_8858, void *kont8821, void *lst); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8859_fptr();                             // lam8859
void lam8859_spec(void *env8860, void *id_8764); // lam8859
void *lam8859 = encode_clo(alloc_clo(lam8859_fptr, 0));

void lam8861_fptr();                             // lam8861
void lam8861_spec(void *env8862, void *id_8762); // lam8861
void *lam8861 = encode_clo(alloc_clo(lam8861_fptr, 0));

void map_fptr();                                                   // map
void map_spec(void *_8863, void *kont8823, void *proc, void *lst); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8864_fptr();                             // lam8864
void lam8864_spec(void *env8865, void *id_8771); // lam8864
void *lam8864 = encode_clo(alloc_clo(lam8864_fptr, 0));

void lam8866_fptr();                             // lam8866
void lam8866_spec(void *env8867, void *id_8768); // lam8866
void *lam8866 = encode_clo(alloc_clo(lam8866_fptr, 0));

void filter_fptr();                                                 // filter
void filter_spec(void *_8868, void *kont8826, void *op, void *lst); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr();                                                // drop
void drop_spec(void *_8869, void *kont8829, void *lst, void *n); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8870_fptr();                             // lam8870
void lam8870_spec(void *env8871, void *id_8780); // lam8870
void *lam8870 = encode_clo(alloc_clo(lam8870_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void *_8872, void *kont8830, void *fun, void *acc,
                void *lst); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8873_fptr();                             // lam8873
void lam8873_spec(void *env8874, void *id_8785); // lam8873
void *lam8873 = encode_clo(alloc_clo(lam8873_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void *_8875, void *kont8832, void *fun, void *acc,
                void *lst); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void *_8876, void *kont8834, void *lst,
                            void *lst2); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr();                                       // reverse
void reverse_spec(void *_8877, void *kont8835, void *lst); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8878_fptr();                             // lam8878
void lam8878_spec(void *env8879, void *id_8794); // lam8878
void *lam8878 = encode_clo(alloc_clo(lam8878_fptr, 0));

void append1_fptr();                                                  // append1
void append1_spec(void *_8880, void *kont8836, void *lhs, void *rhs); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8881_fptr();                             // lam8881
void lam8881_spec(void *env8882, void *id_8801); // lam8881
void *lam8881 = encode_clo(alloc_clo(lam8881_fptr, 0));

void lam8883_fptr();                             // lam8883
void lam8883_spec(void *env8884, void *id_8796); // lam8883
void *lam8883 = encode_clo(alloc_clo(lam8883_fptr, 0));

void lam8885_fptr();                       // lam8885
void lam8885_spec(void *env8886, void *x); // lam8885
void *lam8885 = encode_clo(alloc_clo(lam8885_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8888_fptr();                            // lam8888
void lam8888_spec(void *env8889, void *xy8804); // lam8888
void *lam8888 = encode_clo(alloc_clo(lam8888_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void *_8890, void *kont8842, void *lst, void *n,
                         void *lst2); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr();                                                // take
void take_spec(void *_8891, void *kont8844, void *lst, void *n); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void addd_fptr();                                              // addd
void addd_spec(void *_8892, void *kont8845, void *y, void *z); // addd
void *addd = encode_clo(alloc_clo(addd_fptr, 0));

void call_fptr();                                     // call
void call_spec(void *_8893, void *kont8846, void *x); // call
void *call = encode_clo(alloc_clo(call_fptr, 0));

void brouhaha_main_fptr();                            // brouhaha_main
void brouhaha_main_spec(void *_8894, void *kont8847); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

inline void _u43_fptr() // +
{
  std::cout << "In _u43_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8918 = prim_car(lst);
    void *const lst8920 = prim_cdr(lst);
    void *const x8919 = apply_prim__u43(lst8920);
    arg_buffer[1] = kont8918;
    arg_buffer[2] = x8919;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8918))[0])();
  } else {
    void *const kont8918 = arg_buffer[2];
    void *const x8919 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8918;
    arg_buffer[2] = x8919;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8918))[0])();
  }
}

inline void _u45_fptr() // -
{
  std::cout << "In _u45_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8921 = prim_car(lst);
    void *const lst8923 = prim_cdr(lst);
    void *const x8922 = apply_prim__u45(lst8923);
    arg_buffer[1] = kont8921;
    arg_buffer[2] = x8922;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8921))[0])();
  } else {
    void *const kont8921 = arg_buffer[2];
    void *const x8922 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont8921;
    arg_buffer[2] = x8922;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8921))[0])();
  }
}

inline void _u42_fptr() // *
{
  std::cout << "In _u42_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8924 = prim_car(lst);
    void *const lst8926 = prim_cdr(lst);
    void *const x8925 = apply_prim__u42(lst8926);
    arg_buffer[1] = kont8924;
    arg_buffer[2] = x8925;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8924))[0])();
  } else {
    void *const kont8924 = arg_buffer[2];
    void *const x8925 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont8924;
    arg_buffer[2] = x8925;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8924))[0])();
  }
}

inline void _u47_fptr() // /
{
  std::cout << "In _u47_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8927 = prim_car(lst);
    void *const lst8929 = prim_cdr(lst);
    void *const x8928 = apply_prim__u47(lst8929);
    arg_buffer[1] = kont8927;
    arg_buffer[2] = x8928;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8927))[0])();
  } else {
    void *const kont8927 = arg_buffer[2];
    void *const x8928 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont8927;
    arg_buffer[2] = x8928;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8927))[0])();
  }
}

inline void _u61_fptr() // =
{
  std::cout << "In _u61_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8930 = prim_car(lst);
    void *const lst8932 = prim_cdr(lst);
    void *const x8931 = apply_prim__u61(lst8932);
    arg_buffer[1] = kont8930;
    arg_buffer[2] = x8931;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8930))[0])();
  } else {
    void *const kont8930 = arg_buffer[2];
    void *const x8931 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont8930;
    arg_buffer[2] = x8931;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8930))[0])();
  }
}

inline void _u62_fptr() // >
{
  std::cout << "In _u62_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8933 = prim_car(lst);
    void *const lst8935 = prim_cdr(lst);
    void *const x8934 = apply_prim__u62(lst8935);
    arg_buffer[1] = kont8933;
    arg_buffer[2] = x8934;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8933))[0])();
  } else {
    void *const kont8933 = arg_buffer[2];
    void *const x8934 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont8933;
    arg_buffer[2] = x8934;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8933))[0])();
  }
}

inline void _u60_fptr() // <
{
  std::cout << "In _u60_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8936 = prim_car(lst);
    void *const lst8938 = prim_cdr(lst);
    void *const x8937 = apply_prim__u60(lst8938);
    arg_buffer[1] = kont8936;
    arg_buffer[2] = x8937;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8936))[0])();
  } else {
    void *const kont8936 = arg_buffer[2];
    void *const x8937 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont8936;
    arg_buffer[2] = x8937;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8936))[0])();
  }
}

inline void _u60_u61_fptr() // <=
{
  std::cout << "In _u60_u61_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8939 = prim_car(lst);
    void *const lst8941 = prim_cdr(lst);
    void *const x8940 = apply_prim__u60_u61(lst8941);
    arg_buffer[1] = kont8939;
    arg_buffer[2] = x8940;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8939))[0])();
  } else {
    void *const kont8939 = arg_buffer[2];
    void *const x8940 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont8939;
    arg_buffer[2] = x8940;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8939))[0])();
  }
}

inline void _u62_u61_fptr() // >=
{
  std::cout << "In _u62_u61_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8942 = prim_car(lst);
    void *const lst8944 = prim_cdr(lst);
    void *const x8943 = apply_prim__u62_u61(lst8944);
    arg_buffer[1] = kont8942;
    arg_buffer[2] = x8943;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8942))[0])();
  } else {
    void *const kont8942 = arg_buffer[2];
    void *const x8943 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont8942;
    arg_buffer[2] = x8943;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8942))[0])();
  }
}

inline void modulo_fptr() // modulo
{
  std::cout << "In modulo_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8945 = prim_car(lst);
    void *const lst8947 = prim_cdr(lst);
    void *const x8946 = apply_prim_modulo(lst8947);
    arg_buffer[1] = kont8945;
    arg_buffer[2] = x8946;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8945))[0])();
  } else {
    void *const kont8945 = arg_buffer[2];
    void *const x8946 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont8945;
    arg_buffer[2] = x8946;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8945))[0])();
  }
}

inline void null_u63_fptr() // null?
{
  std::cout << "In null_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8948 = prim_car(lst);
    void *const lst8950 = prim_cdr(lst);
    void *const x8949 = apply_prim_null_u63(lst8950);
    arg_buffer[1] = kont8948;
    arg_buffer[2] = x8949;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8948))[0])();
  } else {
    void *const kont8948 = arg_buffer[2];
    void *const x8949 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont8948;
    arg_buffer[2] = x8949;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8948))[0])();
  }
}

inline void equal_u63_fptr() // equal?
{
  std::cout << "In equal_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8951 = prim_car(lst);
    void *const lst8953 = prim_cdr(lst);
    void *const x8952 = apply_prim_equal_u63(lst8953);
    arg_buffer[1] = kont8951;
    arg_buffer[2] = x8952;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8951))[0])();
  } else {
    void *const kont8951 = arg_buffer[2];
    void *const x8952 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont8951;
    arg_buffer[2] = x8952;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8951))[0])();
  }
}

inline void eq_u63_fptr() // eq?
{
  std::cout << "In eq_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8954 = prim_car(lst);
    void *const lst8956 = prim_cdr(lst);
    void *const x8955 = apply_prim_eq_u63(lst8956);
    arg_buffer[1] = kont8954;
    arg_buffer[2] = x8955;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8954))[0])();
  } else {
    void *const kont8954 = arg_buffer[2];
    void *const x8955 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont8954;
    arg_buffer[2] = x8955;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8954))[0])();
  }
}

inline void cons_fptr() // cons
{
  std::cout << "In cons_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8957 = prim_car(lst);
    void *const lst8959 = prim_cdr(lst);
    void *const x8958 = apply_prim_cons(lst8959);
    arg_buffer[1] = kont8957;
    arg_buffer[2] = x8958;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8957))[0])();
  } else {
    void *const kont8957 = arg_buffer[2];
    void *const x8958 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont8957;
    arg_buffer[2] = x8958;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8957))[0])();
  }
}

inline void car_fptr() // car
{
  std::cout << "In car_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8960 = prim_car(lst);
    void *const lst8962 = prim_cdr(lst);
    void *const x8961 = apply_prim_car(lst8962);
    arg_buffer[1] = kont8960;
    arg_buffer[2] = x8961;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8960))[0])();
  } else {
    void *const kont8960 = arg_buffer[2];
    void *const x8961 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont8960;
    arg_buffer[2] = x8961;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8960))[0])();
  }
}

inline void cdr_fptr() // cdr
{
  std::cout << "In cdr_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8963 = prim_car(lst);
    void *const lst8965 = prim_cdr(lst);
    void *const x8964 = apply_prim_cdr(lst8965);
    arg_buffer[1] = kont8963;
    arg_buffer[2] = x8964;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8963))[0])();
  } else {
    void *const kont8963 = arg_buffer[2];
    void *const x8964 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont8963;
    arg_buffer[2] = x8964;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8963))[0])();
  }
}

inline void float_u45_u62int_fptr() // float->int
{
  std::cout << "In float_u45_u62int_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8966 = prim_car(lst);
    void *const lst8968 = prim_cdr(lst);
    void *const x8967 = apply_prim_float_u45_u62int(lst8968);
    arg_buffer[1] = kont8966;
    arg_buffer[2] = x8967;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8966))[0])();
  } else {
    void *const kont8966 = arg_buffer[2];
    void *const x8967 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont8966;
    arg_buffer[2] = x8967;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8966))[0])();
  }
}

inline void int_u45_u62float_fptr() // int->float
{
  std::cout << "In int_u45_u62float_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8969 = prim_car(lst);
    void *const lst8971 = prim_cdr(lst);
    void *const x8970 = apply_prim_int_u45_u62float(lst8971);
    arg_buffer[1] = kont8969;
    arg_buffer[2] = x8970;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8969))[0])();
  } else {
    void *const kont8969 = arg_buffer[2];
    void *const x8970 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont8969;
    arg_buffer[2] = x8970;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8969))[0])();
  }
}

inline void hash_fptr() // hash
{
  std::cout << "In hash_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8972 = prim_car(lst);
    void *const lst8974 = prim_cdr(lst);
    void *const x8973 = apply_prim_hash(lst8974);
    arg_buffer[1] = kont8972;
    arg_buffer[2] = x8973;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8972))[0])();
  } else {
    void *const kont8972 = arg_buffer[2];
    void *const x8973 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont8972;
    arg_buffer[2] = x8973;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8972))[0])();
  }
}

inline void hash_u45ref_fptr() // hash-ref
{
  std::cout << "In hash_u45ref_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8975 = prim_car(lst);
    void *const lst8977 = prim_cdr(lst);
    void *const x8976 = apply_prim_hash_u45ref(lst8977);
    arg_buffer[1] = kont8975;
    arg_buffer[2] = x8976;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8975))[0])();
  } else {
    void *const kont8975 = arg_buffer[2];
    void *const x8976 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont8975;
    arg_buffer[2] = x8976;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8975))[0])();
  }
}

inline void hash_u45set_fptr() // hash-set
{
  std::cout << "In hash_u45set_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8978 = prim_car(lst);
    void *const lst8980 = prim_cdr(lst);
    void *const x8979 = apply_prim_hash_u45set(lst8980);
    arg_buffer[1] = kont8978;
    arg_buffer[2] = x8979;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8978))[0])();
  } else {
    void *const kont8978 = arg_buffer[2];
    void *const x8979 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont8978;
    arg_buffer[2] = x8979;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8978))[0])();
  }
}

inline void hash_u45keys_fptr() // hash-keys
{
  std::cout << "In hash_u45keys_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8981 = prim_car(lst);
    void *const lst8983 = prim_cdr(lst);
    void *const x8982 = apply_prim_hash_u45keys(lst8983);
    arg_buffer[1] = kont8981;
    arg_buffer[2] = x8982;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8981))[0])();
  } else {
    void *const kont8981 = arg_buffer[2];
    void *const x8982 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont8981;
    arg_buffer[2] = x8982;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8981))[0])();
  }
}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
  std::cout << "In hash_u45has_u45key_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8984 = prim_car(lst);
    void *const lst8986 = prim_cdr(lst);
    void *const x8985 = apply_prim_hash_u45has_u45key_u63(lst8986);
    arg_buffer[1] = kont8984;
    arg_buffer[2] = x8985;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8984))[0])();
  } else {
    void *const kont8984 = arg_buffer[2];
    void *const x8985 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont8984;
    arg_buffer[2] = x8985;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8984))[0])();
  }
}

inline void hash_u45count_fptr() // hash-count
{
  std::cout << "In hash_u45count_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8987 = prim_car(lst);
    void *const lst8989 = prim_cdr(lst);
    void *const x8988 = apply_prim_hash_u45count(lst8989);
    arg_buffer[1] = kont8987;
    arg_buffer[2] = x8988;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8987))[0])();
  } else {
    void *const kont8987 = arg_buffer[2];
    void *const x8988 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont8987;
    arg_buffer[2] = x8988;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8987))[0])();
  }
}

inline void set_fptr() // set
{
  std::cout << "In set_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8990 = prim_car(lst);
    void *const lst8992 = prim_cdr(lst);
    void *const x8991 = apply_prim_set(lst8992);
    arg_buffer[1] = kont8990;
    arg_buffer[2] = x8991;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8990))[0])();
  } else {
    void *const kont8990 = arg_buffer[2];
    void *const x8991 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont8990;
    arg_buffer[2] = x8991;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8990))[0])();
  }
}

inline void set_u45_u62list_fptr() // set->list
{
  std::cout << "In set_u45_u62list_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8993 = prim_car(lst);
    void *const lst8995 = prim_cdr(lst);
    void *const x8994 = apply_prim_set_u45_u62list(lst8995);
    arg_buffer[1] = kont8993;
    arg_buffer[2] = x8994;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8993))[0])();
  } else {
    void *const kont8993 = arg_buffer[2];
    void *const x8994 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont8993;
    arg_buffer[2] = x8994;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8993))[0])();
  }
}

inline void list_u45_u62set_fptr() // list->set
{
  std::cout << "In list_u45_u62set_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8996 = prim_car(lst);
    void *const lst8998 = prim_cdr(lst);
    void *const x8997 = apply_prim_list_u45_u62set(lst8998);
    arg_buffer[1] = kont8996;
    arg_buffer[2] = x8997;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8996))[0])();
  } else {
    void *const kont8996 = arg_buffer[2];
    void *const x8997 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont8996;
    arg_buffer[2] = x8997;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8996))[0])();
  }
}

inline void set_u45add_fptr() // set-add
{
  std::cout << "In set_u45add_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8999 = prim_car(lst);
    void *const lst9001 = prim_cdr(lst);
    void *const x9000 = apply_prim_set_u45add(lst9001);
    arg_buffer[1] = kont8999;
    arg_buffer[2] = x9000;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8999))[0])();
  } else {
    void *const kont8999 = arg_buffer[2];
    void *const x9000 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont8999;
    arg_buffer[2] = x9000;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont8999))[0])();
  }
}

inline void set_u45member_u63_fptr() // set-member?
{
  std::cout << "In set_u45member_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9002 = prim_car(lst);
    void *const lst9004 = prim_cdr(lst);
    void *const x9003 = apply_prim_set_u45member_u63(lst9004);
    arg_buffer[1] = kont9002;
    arg_buffer[2] = x9003;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9002))[0])();
  } else {
    void *const kont9002 = arg_buffer[2];
    void *const x9003 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont9002;
    arg_buffer[2] = x9003;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9002))[0])();
  }
}

inline void set_u45remove_fptr() // set-remove
{
  std::cout << "In set_u45remove_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9005 = prim_car(lst);
    void *const lst9007 = prim_cdr(lst);
    void *const x9006 = apply_prim_set_u45remove(lst9007);
    arg_buffer[1] = kont9005;
    arg_buffer[2] = x9006;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9005))[0])();
  } else {
    void *const kont9005 = arg_buffer[2];
    void *const x9006 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont9005;
    arg_buffer[2] = x9006;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9005))[0])();
  }
}

inline void set_u45count_fptr() // set-count
{
  std::cout << "In set_u45count_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9008 = prim_car(lst);
    void *const lst9010 = prim_cdr(lst);
    void *const x9009 = apply_prim_set_u45count(lst9010);
    arg_buffer[1] = kont9008;
    arg_buffer[2] = x9009;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9008))[0])();
  } else {
    void *const kont9008 = arg_buffer[2];
    void *const x9009 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9008;
    arg_buffer[2] = x9009;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9008))[0])();
  }
}

inline void string_u63_fptr() // string?
{
  std::cout << "In string_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9011 = prim_car(lst);
    void *const lst9013 = prim_cdr(lst);
    void *const x9012 = apply_prim_string_u63(lst9013);
    arg_buffer[1] = kont9011;
    arg_buffer[2] = x9012;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9011))[0])();
  } else {
    void *const kont9011 = arg_buffer[2];
    void *const x9012 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9011;
    arg_buffer[2] = x9012;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9011))[0])();
  }
}

inline void string_u45length_fptr() // string-length
{
  std::cout << "In string_u45length_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9014 = prim_car(lst);
    void *const lst9016 = prim_cdr(lst);
    void *const x9015 = apply_prim_string_u45length(lst9016);
    arg_buffer[1] = kont9014;
    arg_buffer[2] = x9015;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9014))[0])();
  } else {
    void *const kont9014 = arg_buffer[2];
    void *const x9015 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9014;
    arg_buffer[2] = x9015;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9014))[0])();
  }
}

inline void string_u45ref_fptr() // string-ref
{
  std::cout << "In string_u45ref_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9017 = prim_car(lst);
    void *const lst9019 = prim_cdr(lst);
    void *const x9018 = apply_prim_string_u45ref(lst9019);
    arg_buffer[1] = kont9017;
    arg_buffer[2] = x9018;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9017))[0])();
  } else {
    void *const kont9017 = arg_buffer[2];
    void *const x9018 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9017;
    arg_buffer[2] = x9018;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9017))[0])();
  }
}

inline void substring_fptr() // substring
{
  std::cout << "In substring_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9020 = prim_car(lst);
    void *const lst9022 = prim_cdr(lst);
    void *const x9021 = apply_prim_substring(lst9022);
    arg_buffer[1] = kont9020;
    arg_buffer[2] = x9021;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9020))[0])();
  } else {
    void *const kont9020 = arg_buffer[2];
    void *const x9021 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9020;
    arg_buffer[2] = x9021;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9020))[0])();
  }
}

inline void string_u45append_fptr() // string-append
{
  std::cout << "In string_u45append_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9023 = prim_car(lst);
    void *const lst9025 = prim_cdr(lst);
    void *const x9024 = apply_prim_string_u45append(lst9025);
    arg_buffer[1] = kont9023;
    arg_buffer[2] = x9024;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9023))[0])();
  } else {
    void *const kont9023 = arg_buffer[2];
    void *const x9024 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9023;
    arg_buffer[2] = x9024;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9023))[0])();
  }
}

inline void string_u45_u62list_fptr() // string->list
{
  std::cout << "In string_u45_u62list_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9026 = prim_car(lst);
    void *const lst9028 = prim_cdr(lst);
    void *const x9027 = apply_prim_string_u45_u62list(lst9028);
    arg_buffer[1] = kont9026;
    arg_buffer[2] = x9027;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9026))[0])();
  } else {
    void *const kont9026 = arg_buffer[2];
    void *const x9027 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9026;
    arg_buffer[2] = x9027;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9026))[0])();
  }
}

inline void exact_u45floor_fptr() // exact-floor
{
  std::cout << "In exact_u45floor_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9029 = prim_car(lst);
    void *const lst9031 = prim_cdr(lst);
    void *const x9030 = apply_prim_exact_u45floor(lst9031);
    arg_buffer[1] = kont9029;
    arg_buffer[2] = x9030;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9029))[0])();
  } else {
    void *const kont9029 = arg_buffer[2];
    void *const x9030 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9029;
    arg_buffer[2] = x9030;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9029))[0])();
  }
}

inline void exact_u45ceiling_fptr() // exact-ceiling
{
  std::cout << "In exact_u45ceiling_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9032 = prim_car(lst);
    void *const lst9034 = prim_cdr(lst);
    void *const x9033 = apply_prim_exact_u45ceiling(lst9034);
    arg_buffer[1] = kont9032;
    arg_buffer[2] = x9033;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9032))[0])();
  } else {
    void *const kont9032 = arg_buffer[2];
    void *const x9033 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9032;
    arg_buffer[2] = x9033;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9032))[0])();
  }
}

inline void exact_u45round_fptr() // exact-round
{
  std::cout << "In exact_u45round_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9035 = prim_car(lst);
    void *const lst9037 = prim_cdr(lst);
    void *const x9036 = apply_prim_exact_u45round(lst9037);
    arg_buffer[1] = kont9035;
    arg_buffer[2] = x9036;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9035))[0])();
  } else {
    void *const kont9035 = arg_buffer[2];
    void *const x9036 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9035;
    arg_buffer[2] = x9036;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9035))[0])();
  }
}

inline void abs_fptr() // abs
{
  std::cout << "In abs_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9038 = prim_car(lst);
    void *const lst9040 = prim_cdr(lst);
    void *const x9039 = apply_prim_abs(lst9040);
    arg_buffer[1] = kont9038;
    arg_buffer[2] = x9039;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9038))[0])();
  } else {
    void *const kont9038 = arg_buffer[2];
    void *const x9039 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9038;
    arg_buffer[2] = x9039;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9038))[0])();
  }
}

inline void max_fptr() // max
{
  std::cout << "In max_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9041 = prim_car(lst);
    void *const lst9043 = prim_cdr(lst);
    void *const x9042 = apply_prim_max(lst9043);
    arg_buffer[1] = kont9041;
    arg_buffer[2] = x9042;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9041))[0])();
  } else {
    void *const kont9041 = arg_buffer[2];
    void *const x9042 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9041;
    arg_buffer[2] = x9042;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9041))[0])();
  }
}

inline void min_fptr() // min
{
  std::cout << "In min_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9044 = prim_car(lst);
    void *const lst9046 = prim_cdr(lst);
    void *const x9045 = apply_prim_min(lst9046);
    arg_buffer[1] = kont9044;
    arg_buffer[2] = x9045;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9044))[0])();
  } else {
    void *const kont9044 = arg_buffer[2];
    void *const x9045 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9044;
    arg_buffer[2] = x9045;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9044))[0])();
  }
}

inline void expt_fptr() // expt
{
  std::cout << "In expt_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9047 = prim_car(lst);
    void *const lst9049 = prim_cdr(lst);
    void *const x9048 = apply_prim_expt(lst9049);
    arg_buffer[1] = kont9047;
    arg_buffer[2] = x9048;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9047))[0])();
  } else {
    void *const kont9047 = arg_buffer[2];
    void *const x9048 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9047;
    arg_buffer[2] = x9048;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9047))[0])();
  }
}

inline void sqrt_fptr() // sqrt
{
  std::cout << "In sqrt_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9050 = prim_car(lst);
    void *const lst9052 = prim_cdr(lst);
    void *const x9051 = apply_prim_sqrt(lst9052);
    arg_buffer[1] = kont9050;
    arg_buffer[2] = x9051;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9050))[0])();
  } else {
    void *const kont9050 = arg_buffer[2];
    void *const x9051 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9050;
    arg_buffer[2] = x9051;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9050))[0])();
  }
}

inline void remainder_fptr() // remainder
{
  std::cout << "In remainder_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9053 = prim_car(lst);
    void *const lst9055 = prim_cdr(lst);
    void *const x9054 = apply_prim_remainder(lst9055);
    arg_buffer[1] = kont9053;
    arg_buffer[2] = x9054;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9053))[0])();
  } else {
    void *const kont9053 = arg_buffer[2];
    void *const x9054 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9053;
    arg_buffer[2] = x9054;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9053))[0])();
  }
}

inline void quotient_fptr() // quotient
{
  std::cout << "In quotient_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9056 = prim_car(lst);
    void *const lst9058 = prim_cdr(lst);
    void *const x9057 = apply_prim_quotient(lst9058);
    arg_buffer[1] = kont9056;
    arg_buffer[2] = x9057;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9056))[0])();
  } else {
    void *const kont9056 = arg_buffer[2];
    void *const x9057 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9056;
    arg_buffer[2] = x9057;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9056))[0])();
  }
}

inline void random_fptr() // random
{
  std::cout << "In random_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9059 = prim_car(lst);
    void *const lst9061 = prim_cdr(lst);
    void *const x9060 = apply_prim_random(lst9061);
    arg_buffer[1] = kont9059;
    arg_buffer[2] = x9060;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9059))[0])();
  } else {
    void *const kont9059 = arg_buffer[2];
    void *const x9060 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9059;
    arg_buffer[2] = x9060;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9059))[0])();
  }
}

inline void symbol_u63_fptr() // symbol?
{
  std::cout << "In symbol_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9062 = prim_car(lst);
    void *const lst9064 = prim_cdr(lst);
    void *const x9063 = apply_prim_symbol_u63(lst9064);
    arg_buffer[1] = kont9062;
    arg_buffer[2] = x9063;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9062))[0])();
  } else {
    void *const kont9062 = arg_buffer[2];
    void *const x9063 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9062;
    arg_buffer[2] = x9063;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9062))[0])();
  }
}

inline void pair_u63_fptr() // pair?
{
  std::cout << "In pair_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9065 = prim_car(lst);
    void *const lst9067 = prim_cdr(lst);
    void *const x9066 = apply_prim_pair_u63(lst9067);
    arg_buffer[1] = kont9065;
    arg_buffer[2] = x9066;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9065))[0])();
  } else {
    void *const kont9065 = arg_buffer[2];
    void *const x9066 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9065;
    arg_buffer[2] = x9066;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9065))[0])();
  }
}

inline void positive_u63_fptr() // positive?
{
  std::cout << "In positive_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9068 = prim_car(lst);
    void *const lst9070 = prim_cdr(lst);
    void *const x9069 = apply_prim_positive_u63(lst9070);
    arg_buffer[1] = kont9068;
    arg_buffer[2] = x9069;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9068))[0])();
  } else {
    void *const kont9068 = arg_buffer[2];
    void *const x9069 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9068;
    arg_buffer[2] = x9069;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9068))[0])();
  }
}

inline void negative_u63_fptr() // negative?
{
  std::cout << "In negative_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9071 = prim_car(lst);
    void *const lst9073 = prim_cdr(lst);
    void *const x9072 = apply_prim_negative_u63(lst9073);
    arg_buffer[1] = kont9071;
    arg_buffer[2] = x9072;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9071))[0])();
  } else {
    void *const kont9071 = arg_buffer[2];
    void *const x9072 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9071;
    arg_buffer[2] = x9072;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9071))[0])();
  }
}

inline void list_fptr() // list
{
  std::cout << "In list_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9074 = prim_car(lst);
    void *const lst9076 = prim_cdr(lst);
    void *const x9075 = apply_prim_list(lst9076);
    arg_buffer[1] = kont9074;
    arg_buffer[2] = x9075;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9074))[0])();
  } else {
    void *const kont9074 = arg_buffer[2];
    void *const x9075 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9074;
    arg_buffer[2] = x9075;
    numArgs = int8914;
    reinterpret_cast<void (*)()>((decode_clo(kont9074))[0])();
  }
}

inline void even_u63_fptr() // even? -> generic version
{
  std::cout << "In even_u63_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8815 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8909, apply_prim_modulo_2(x, int8898));
  arg_buffer[1] = kont8815;
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(kont8815))[0])();
}

inline void even_u63_spec(void *_8849, void *kont8815, void *x) // even?
{
  std::cout << "In even_u63_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8909, apply_prim_modulo_2(x, int8898));
  arg_buffer[1] = kont8815;
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(kont8815))[0])();
}

inline void odd_u63_fptr() // odd? -> generic version
{
  std::cout << "In odd_u63_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8816 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8912, apply_prim_modulo_2(x, int8898));
  arg_buffer[1] = kont8816;
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(kont8816))[0])();
}

inline void odd_u63_spec(void *_8850, void *kont8816, void *x) // odd?
{
  std::cout << "In odd_u63_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8912, apply_prim_modulo_2(x, int8898));
  arg_buffer[1] = kont8816;
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(kont8816))[0])();
}

inline void list_u45ref_fptr() // list-ref -> generic version
{
  std::cout << "In list_u45ref_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8817 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int8909, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8817)[1])(
        kont8817, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8817, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8912));
  }
}

inline void list_u45ref_spec(void *_8851, void *kont8817, void *lst,
                             void *n) // list-ref
{
  std::cout << "In list_u45ref_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int8909, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8817)[1])(
        kont8817, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8817, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8912));
  }
}

inline void lam8852_fptr() // lam8852 -> generic version
{
  std::cout << "In lam8852_fptr: generic version" << std::endl;
  // reading env
  void *const env8853 = arg_buffer[1];
  // reading env and args
  void *const id_8743 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8853);

  // if-clause
  if (is_true(id_8743)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f8903);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[2], apply_prim_car_1(decode_clo_array[3])))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(
          decode_clo_array[4])[1])(decode_clo_array[4], decode_clo_array[3]);
    } else {

      // clo-app
      member_spec(member, decode_clo_array[4], decode_clo_array[2],
                  apply_prim_cdr_1(decode_clo_array[3]));
    }
  }
}

inline void lam8852_spec(void *env8853, void *id_8743) // lam8852
{
  std::cout << "In lam8852_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8853);

  // if-clause
  if (is_true(id_8743)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[4])[1])(decode_clo_array[4], bool_f8903);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[2], apply_prim_car_1(decode_clo_array[3])))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(
          decode_clo_array[4])[1])(decode_clo_array[4], decode_clo_array[3]);
    } else {

      // clo-app
      member_spec(member, decode_clo_array[4], decode_clo_array[2],
                  apply_prim_cdr_1(decode_clo_array[3]));
    }
  }
}

inline void member_fptr() // member -> generic version
{
  std::cout << "In member_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8818 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9083 =
      alloc_kont(lam8852_fptr, reinterpret_cast<void *>(lam8852_spec), 3);

  // setting env list
  clo9083[2] = item;
  clo9083[3] = lst;
  clo9083[4] = kont8818;
  void *f_lam_8819 = encode_clo(clo9083);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(f_lam_8819)[1])(
        f_lam_8819, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(f_lam_8819)[1])(
        f_lam_8819, apply_prim_null_u63_1(lst));
  }
}

inline void member_spec(void *_8854, void *kont8818, void *item,
                        void *lst) // member
{
  std::cout << "In member_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9086 =
      alloc_kont(lam8852_fptr, reinterpret_cast<void *>(lam8852_spec), 3);

  // setting env list
  clo9086[2] = item;
  clo9086[3] = lst;
  clo9086[4] = kont8818;
  void *f_lam_8819 = encode_clo(clo9086);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(f_lam_8819)[1])(
        f_lam_8819, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(f_lam_8819)[1])(
        f_lam_8819, apply_prim_null_u63_1(lst));
  }
}

inline void member_u63_fptr() // member? -> generic version
{
  std::cout << "In member_u63_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8820 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8820)[1])(
        kont8820, bool_f8903);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8820)[1])(
          kont8820, bool_t8902);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8820, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void member_u63_spec(void *_8855, void *kont8820, void *x,
                            void *lst) // member?
{
  std::cout << "In member_u63_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8820)[1])(
        kont8820, bool_f8903);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8820)[1])(
          kont8820, bool_t8902);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8820, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void lam8856_fptr() // lam8856 -> generic version
{
  std::cout << "In lam8856_fptr: generic version" << std::endl;
  // reading env
  void *const env8857 = arg_buffer[1];
  // reading env and args
  void *const id_8758 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8857);

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(decode_clo_array[3], id_8758);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8856_spec(void *env8857, void *id_8758) // lam8856
{
  std::cout << "In lam8856_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8857);

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(decode_clo_array[3], id_8758);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void length_fptr() // length -> generic version
{
  std::cout << "In length_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8821 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8821)[1])(
        kont8821, int8909);
  } else {

    // creating new make-kont closure
    void **clo9094 =
        alloc_kont(lam8856_fptr, reinterpret_cast<void *>(lam8856_spec), 2);

    // setting env list
    clo9094[2] = kont8821;
    clo9094[3] = int8912;
    void *f_lam_8822 = encode_clo(clo9094);

    // clo-app
    length_spec(length, f_lam_8822, apply_prim_cdr_1(lst));
  }
}

inline void length_spec(void *_8858, void *kont8821, void *lst) // length
{
  std::cout << "In length_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8821)[1])(
        kont8821, int8909);
  } else {

    // creating new make-kont closure
    void **clo9096 =
        alloc_kont(lam8856_fptr, reinterpret_cast<void *>(lam8856_spec), 2);

    // setting env list
    clo9096[2] = kont8821;
    clo9096[3] = int8912;
    void *f_lam_8822 = encode_clo(clo9096);

    // clo-app
    length_spec(length, f_lam_8822, apply_prim_cdr_1(lst));
  }
}

inline void lam8859_fptr() // lam8859 -> generic version
{
  std::cout << "In lam8859_fptr: generic version" << std::endl;
  // reading env
  void *const env8860 = arg_buffer[1];
  // reading env and args
  void *const id_8764 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8860);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8764);
  arg_buffer[1] = decode_clo_array[3];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8859_spec(void *env8860, void *id_8764) // lam8859
{
  std::cout << "In lam8859_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8860);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8764);
  arg_buffer[1] = decode_clo_array[3];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8861_fptr() // lam8861 -> generic version
{
  std::cout << "In lam8861_fptr: generic version" << std::endl;
  // reading env
  void *const env8862 = arg_buffer[1];
  // reading env and args
  void *const id_8762 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8862);

  // creating new make-kont closure
  void **clo9097 =
      alloc_kont(lam8859_fptr, reinterpret_cast<void *>(lam8859_spec), 2);

  // setting env list
  clo9097[2] = id_8762;
  clo9097[3] = decode_clo_array[3];
  void *f_lam_8824 = encode_clo(clo9097);

  // clo-app
  map_spec(map, f_lam_8824, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8861_spec(void *env8862, void *id_8762) // lam8861
{
  std::cout << "In lam8861_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8862);

  // creating new make-kont closure
  void **clo9098 =
      alloc_kont(lam8859_fptr, reinterpret_cast<void *>(lam8859_spec), 2);

  // setting env list
  clo9098[2] = id_8762;
  clo9098[3] = decode_clo_array[3];
  void *f_lam_8824 = encode_clo(clo9098);

  // clo-app
  map_spec(map, f_lam_8824, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[4]));
}

inline void map_fptr() // map -> generic version
{
  std::cout << "In map_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8823 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8823)[1])(
        kont8823, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9100 =
        alloc_kont(lam8861_fptr, reinterpret_cast<void *>(lam8861_spec), 3);

    // setting env list
    clo9100[2] = proc;
    clo9100[3] = kont8823;
    clo9100[4] = lst;
    void *f_lam_8825 = encode_clo(clo9100);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_8825;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8915;
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void map_spec(void *_8863, void *kont8823, void *proc, void *lst) // map
{
  std::cout << "In map_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8823)[1])(
        kont8823, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9102 =
        alloc_kont(lam8861_fptr, reinterpret_cast<void *>(lam8861_spec), 3);

    // setting env list
    clo9102[2] = proc;
    clo9102[3] = kont8823;
    clo9102[4] = lst;
    void *f_lam_8825 = encode_clo(clo9102);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_8825;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8915;
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void lam8864_fptr() // lam8864 -> generic version
{
  std::cout << "In lam8864_fptr: generic version" << std::endl;
  // reading env
  void *const env8865 = arg_buffer[1];
  // reading env and args
  void *const id_8771 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8865);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8771);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8864_spec(void *env8865, void *id_8771) // lam8864
{
  std::cout << "In lam8864_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8865);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[3], id_8771);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8866_fptr() // lam8866 -> generic version
{
  std::cout << "In lam8866_fptr: generic version" << std::endl;
  // reading env
  void *const env8867 = arg_buffer[1];
  // reading env and args
  void *const id_8768 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8867);

  // if-clause
  if (is_true(id_8768)) {

    // creating new make-kont closure
    void **clo9103 =
        alloc_kont(lam8864_fptr, reinterpret_cast<void *>(lam8864_spec), 2);

    // setting env list
    clo9103[2] = decode_clo_array[2];
    clo9103[3] = apply_prim_car_1(decode_clo_array[4]);
    void *f_lam_8827 = encode_clo(clo9103);

    // clo-app
    filter_spec(filter, f_lam_8827, decode_clo_array[3],
                apply_prim_cdr_1(decode_clo_array[4]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[2], decode_clo_array[3],
                apply_prim_cdr_1(decode_clo_array[4]));
  }
}

inline void lam8866_spec(void *env8867, void *id_8768) // lam8866
{
  std::cout << "In lam8866_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8867);

  // if-clause
  if (is_true(id_8768)) {

    // creating new make-kont closure
    void **clo9104 =
        alloc_kont(lam8864_fptr, reinterpret_cast<void *>(lam8864_spec), 2);

    // setting env list
    clo9104[2] = decode_clo_array[2];
    clo9104[3] = apply_prim_car_1(decode_clo_array[4]);
    void *f_lam_8827 = encode_clo(clo9104);

    // clo-app
    filter_spec(filter, f_lam_8827, decode_clo_array[3],
                apply_prim_cdr_1(decode_clo_array[4]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[2], decode_clo_array[3],
                apply_prim_cdr_1(decode_clo_array[4]));
  }
}

inline void filter_fptr() // filter -> generic version
{
  std::cout << "In filter_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8826 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8826)[1])(
        kont8826, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9106 =
        alloc_kont(lam8866_fptr, reinterpret_cast<void *>(lam8866_spec), 3);

    // setting env list
    clo9106[2] = kont8826;
    clo9106[3] = op;
    clo9106[4] = lst;
    void *f_lam_8828 = encode_clo(clo9106);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_8828;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8915;
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void filter_spec(void *_8868, void *kont8826, void *op,
                        void *lst) // filter
{
  std::cout << "In filter_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8826)[1])(
        kont8826, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9108 =
        alloc_kont(lam8866_fptr, reinterpret_cast<void *>(lam8866_spec), 3);

    // setting env list
    clo9108[2] = kont8826;
    clo9108[3] = op;
    clo9108[4] = lst;
    void *f_lam_8828 = encode_clo(clo9108);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_8828;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8915;
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void drop_fptr() // drop -> generic version
{
  std::cout << "In drop_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8829 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8909))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8829)[1])(
        kont8829, lst);
  } else {

    // clo-app
    drop_spec(drop, kont8829, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8912));
  }
}

inline void drop_spec(void *_8869, void *kont8829, void *lst, void *n) // drop
{
  std::cout << "In drop_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8909))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8829)[1])(
        kont8829, lst);
  } else {

    // clo-app
    drop_spec(drop, kont8829, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8912));
  }
}

inline void lam8870_fptr() // lam8870 -> generic version
{
  std::cout << "In lam8870_fptr: generic version" << std::endl;
  // reading env
  void *const env8871 = arg_buffer[1];
  // reading env and args
  void *const id_8780 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8871);

  // clo-app
  foldl_spec(foldl, decode_clo_array[2], decode_clo_array[3], id_8780,
             apply_prim_cdr_1(decode_clo_array[4]));
}

inline void lam8870_spec(void *env8871, void *id_8780) // lam8870
{
  std::cout << "In lam8870_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8871);

  // clo-app
  foldl_spec(foldl, decode_clo_array[2], decode_clo_array[3], id_8780,
             apply_prim_cdr_1(decode_clo_array[4]));
}

inline void foldl_fptr() // foldl -> generic version
{
  std::cout << "In foldl_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8830 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8830)[1])(
        kont8830, acc);
  } else {

    // creating new make-kont closure
    void **clo9112 =
        alloc_kont(lam8870_fptr, reinterpret_cast<void *>(lam8870_spec), 3);

    // setting env list
    clo9112[2] = kont8830;
    clo9112[3] = fun;
    clo9112[4] = lst;
    void *f_lam_8831 = encode_clo(clo9112);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_8831;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8916;
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void foldl_spec(void *_8872, void *kont8830, void *fun, void *acc,
                       void *lst) // foldl
{
  std::cout << "In foldl_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8830)[1])(
        kont8830, acc);
  } else {

    // creating new make-kont closure
    void **clo9114 =
        alloc_kont(lam8870_fptr, reinterpret_cast<void *>(lam8870_spec), 3);

    // setting env list
    clo9114[2] = kont8830;
    clo9114[3] = fun;
    clo9114[4] = lst;
    void *f_lam_8831 = encode_clo(clo9114);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_8831;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8916;
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void lam8873_fptr() // lam8873 -> generic version
{
  std::cout << "In lam8873_fptr: generic version" << std::endl;
  // reading env
  void *const env8874 = arg_buffer[1];
  // reading env and args
  void *const id_8785 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8874);

  // clo-app
  arg_buffer[1] = decode_clo_array[2];
  arg_buffer[2] = decode_clo_array[3];
  arg_buffer[3] = decode_clo_array[4];
  arg_buffer[4] = id_8785;
  numArgs = int8916;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8873_spec(void *env8874, void *id_8785) // lam8873
{
  std::cout << "In lam8873_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8874);

  // clo-app
  arg_buffer[1] = decode_clo_array[2];
  arg_buffer[2] = decode_clo_array[3];
  arg_buffer[3] = decode_clo_array[4];
  arg_buffer[4] = id_8785;
  numArgs = int8916;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version
{
  std::cout << "In foldr_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8832 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8832)[1])(
        kont8832, acc);
  } else {

    // creating new make-kont closure
    void **clo9116 =
        alloc_kont(lam8873_fptr, reinterpret_cast<void *>(lam8873_spec), 3);

    // setting env list
    clo9116[2] = fun;
    clo9116[3] = kont8832;
    clo9116[4] = apply_prim_car_1(lst);
    void *f_lam_8833 = encode_clo(clo9116);

    // clo-app
    foldr_spec(foldr, f_lam_8833, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void foldr_spec(void *_8875, void *kont8832, void *fun, void *acc,
                       void *lst) // foldr
{
  std::cout << "In foldr_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8832)[1])(
        kont8832, acc);
  } else {

    // creating new make-kont closure
    void **clo9118 =
        alloc_kont(lam8873_fptr, reinterpret_cast<void *>(lam8873_spec), 3);

    // setting env list
    clo9118[2] = fun;
    clo9118[3] = kont8832;
    clo9118[4] = apply_prim_car_1(lst);
    void *f_lam_8833 = encode_clo(clo9118);

    // clo-app
    foldr_spec(foldr, f_lam_8833, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version
{
  std::cout << "In reverse_u45helper_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8834 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8834)[1])(
        kont8834, lst2);
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8834, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_u45helper_spec(void *_8876, void *kont8834, void *lst,
                                   void *lst2) // reverse-helper
{
  std::cout << "In reverse_u45helper_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8834)[1])(
        kont8834, lst2);
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8834, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_fptr() // reverse -> generic version
{
  std::cout << "In reverse_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8835 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8835, lst, apply_prim_list_0());
}

inline void reverse_spec(void *_8877, void *kont8835, void *lst) // reverse
{
  std::cout << "In reverse_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8835, lst, apply_prim_list_0());
}

inline void lam8878_fptr() // lam8878 -> generic version
{
  std::cout << "In lam8878_fptr: generic version" << std::endl;
  // reading env
  void *const env8879 = arg_buffer[1];
  // reading env and args
  void *const id_8794 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8879);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8794);
  arg_buffer[1] = decode_clo_array[3];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8878_spec(void *env8879, void *id_8794) // lam8878
{
  std::cout << "In lam8878_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8879);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[2], id_8794);
  arg_buffer[1] = decode_clo_array[3];
  numArgs = int8914;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void append1_fptr() // append1 -> generic version
{
  std::cout << "In append1_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8836 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8836)[1])(
        kont8836, rhs);
  } else {

    // creating new make-kont closure
    void **clo9122 =
        alloc_kont(lam8878_fptr, reinterpret_cast<void *>(lam8878_spec), 2);

    // setting env list
    clo9122[2] = apply_prim_car_1(lhs);
    clo9122[3] = kont8836;
    void *f_lam_8837 = encode_clo(clo9122);

    // clo-app
    append1_spec(append1, f_lam_8837, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void append1_spec(void *_8880, void *kont8836, void *lhs,
                         void *rhs) // append1
{
  std::cout << "In append1_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8836)[1])(
        kont8836, rhs);
  } else {

    // creating new make-kont closure
    void **clo9124 =
        alloc_kont(lam8878_fptr, reinterpret_cast<void *>(lam8878_spec), 2);

    // setting env list
    clo9124[2] = apply_prim_car_1(lhs);
    clo9124[3] = kont8836;
    void *f_lam_8837 = encode_clo(clo9124);

    // clo-app
    append1_spec(append1, f_lam_8837, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void lam8881_fptr() // lam8881 -> generic version
{
  std::cout << "In lam8881_fptr: generic version" << std::endl;
  // reading env
  void *const env8882 = arg_buffer[1];
  // reading env and args
  void *const id_8801 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8882);

  // clo-app
  foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[3], id_8801);
}

inline void lam8881_spec(void *env8882, void *id_8801) // lam8881
{
  std::cout << "In lam8881_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8882);

  // clo-app
  foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[3], id_8801);
}

inline void lam8883_fptr() // lam8883 -> generic version
{
  std::cout << "In lam8883_fptr: generic version" << std::endl;
  // reading env
  void *const env8884 = arg_buffer[1];
  // reading env and args
  void *const id_8796 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8884);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[3], id_8796))) {

    // clo-app
    append1_spec(append1, decode_clo_array[5], decode_clo_array[2],
                 apply_prim_car_1(decode_clo_array[4]));
  } else {

    // creating new make-kont closure
    void **clo9125 =
        alloc_kont(lam8881_fptr, reinterpret_cast<void *>(lam8881_spec), 2);

    // setting env list
    clo9125[2] = decode_clo_array[5];
    clo9125[3] = apply_prim_list_0();
    void *f_lam_8839 = encode_clo(clo9125);

    // clo-app
    append1_spec(append1, f_lam_8839, apply_prim_list_1(decode_clo_array[2]),
                 decode_clo_array[4]);
  }
}

inline void lam8883_spec(void *env8884, void *id_8796) // lam8883
{
  std::cout << "In lam8883_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8884);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[3], id_8796))) {

    // clo-app
    append1_spec(append1, decode_clo_array[5], decode_clo_array[2],
                 apply_prim_car_1(decode_clo_array[4]));
  } else {

    // creating new make-kont closure
    void **clo9126 =
        alloc_kont(lam8881_fptr, reinterpret_cast<void *>(lam8881_spec), 2);

    // setting env list
    clo9126[2] = decode_clo_array[5];
    clo9126[3] = apply_prim_list_0();
    void *f_lam_8839 = encode_clo(clo9126);

    // clo-app
    append1_spec(append1, f_lam_8839, apply_prim_list_1(decode_clo_array[2]),
                 decode_clo_array[4]);
  }
}

inline void lam8885_fptr() // lam8885 -> generic version
{
  std::cout << "In lam8885_fptr: generic version" << std::endl;
  // reading env
  void *const env8886 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8886);

  // creating new make-kont closure
  void **clo9127 =
      alloc_kont(lam8883_fptr, reinterpret_cast<void *>(lam8883_spec), 4);

  // setting env list
  clo9127[2] = decode_clo_array[2];
  clo9127[3] = int8912;
  clo9127[4] = x;
  clo9127[5] = decode_clo_array[3];
  void *f_lam_8840 = encode_clo(clo9127);

  // clo-app
  length_spec(length, f_lam_8840, x);
}

inline void lam8885_spec(void *env8886, void *x) // lam8885
{
  std::cout << "In lam8885_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8886);

  // creating new make-kont closure
  void **clo9128 =
      alloc_kont(lam8883_fptr, reinterpret_cast<void *>(lam8883_spec), 4);

  // setting env list
  clo9128[2] = decode_clo_array[2];
  clo9128[3] = int8912;
  clo9128[4] = x;
  clo9128[5] = decode_clo_array[3];
  void *f_lam_8840 = encode_clo(clo9128);

  // clo-app
  length_spec(length, f_lam_8840, x);
}

void append_fptr() // append
{
  std::cout << "In append_fptr" << std::endl;
  // reading env
  void *const _8887 = arg_buffer[1];
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
  void **clo9129 =
      alloc_kont(lam8885_fptr, reinterpret_cast<void *>(lam8885_spec), 2);

  // setting env list
  clo9129[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
  clo9129[3] = apply_prim_car_1(vargs);
  void *f_lam_8841 = encode_clo(clo9129);

  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(f_lam_8841)[1])(
      f_lam_8841, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8888_fptr() // lam8888 -> generic version
{
  std::cout << "In lam8888_fptr: generic version" << std::endl;
  // reading env
  void *const env8889 = arg_buffer[1];
  // reading env and args
  void *const xy8804 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8889);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8804);
}

inline void lam8888_spec(void *env8889, void *xy8804) // lam8888
{
  std::cout << "In lam8888_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8889);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[1])(decode_clo_array[2], xy8804);
}

inline void take_u45helper_fptr() // take-helper -> generic version
{
  std::cout << "In take_u45helper_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8842 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8909))) {

    // creating new make-kont closure
    void **clo9133 =
        alloc_kont(lam8888_fptr, reinterpret_cast<void *>(lam8888_spec), 1);

    // setting env list
    clo9133[2] = kont8842;
    void *f_lam_8843 = encode_clo(clo9133);

    // clo-app
    reverse_spec(reverse, f_lam_8843, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8842, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8912),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_u45helper_spec(void *_8890, void *kont8842, void *lst, void *n,
                                void *lst2) // take-helper
{
  std::cout << "In take_u45helper_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8909))) {

    // creating new make-kont closure
    void **clo9134 =
        alloc_kont(lam8888_fptr, reinterpret_cast<void *>(lam8888_spec), 1);

    // setting env list
    clo9134[2] = kont8842;
    void *f_lam_8843 = encode_clo(clo9134);

    // clo-app
    reverse_spec(reverse, f_lam_8843, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8842, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8912),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_fptr() // take -> generic version
{
  std::cout << "In take_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8844 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8844, lst, n, apply_prim_list_0());
}

inline void take_spec(void *_8891, void *kont8844, void *lst, void *n) // take
{
  std::cout << "In take_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8844, lst, n, apply_prim_list_0());
}

inline void addd_fptr() // addd -> generic version
{
  std::cout << "In addd_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8845 = arg_buffer[2];
  void *const y = arg_buffer[3];
  void *const z = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8845)[1])(
      kont8845, apply_prim__u43_2(y, z));
}

inline void addd_spec(void *_8892, void *kont8845, void *y, void *z) // addd
{
  std::cout << "In addd_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont8845)[1])(
      kont8845, apply_prim__u43_2(y, z));
}

inline void call_fptr() // call -> generic version
{
  std::cout << "In call_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8846 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  addd_spec(addd, kont8846, apply_prim__u43_2(x, x), int8911);
}

inline void call_spec(void *_8893, void *kont8846, void *x) // call
{
  std::cout << "In call_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  addd_spec(addd, kont8846, apply_prim__u43_2(x, x), int8911);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version
{
  std::cout << "In brouhaha_main_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8847 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  call_spec(call, kont8847, int8912);
}

inline void brouhaha_main_spec(void *_8894, void *kont8847) // brouhaha_main
{
  std::cout << "In brouhaha_main_fptr: spec" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  call_spec(call, kont8847, int8912);
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8909 = reinterpret_cast<void *>(encode_int(0));
  bool_t8902 = encode_bool(true);
  int8912 = reinterpret_cast<void *>(encode_int(1));
  bool_f8903 = encode_bool(false);
  int8898 = reinterpret_cast<void *>(encode_int(2));
  int8911 = reinterpret_cast<void *>(encode_int(19));

  // initializing global integer vars
  int8913 = 1;
  int8914 = 2;
  int8915 = 3;
  int8916 = 4;
  int8917 = 5;

  // making a call to the brouhaha main function to kick off our C++ emission.
  void **f_halt_clo =
      alloc_kont(fhalt, reinterpret_cast<void *>(fhalt_spec), 0);
  void *fhalt_clo = encode_clo(f_halt_clo);
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_spec(nullptr, fhalt_clo);
}
