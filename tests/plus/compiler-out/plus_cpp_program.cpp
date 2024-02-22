#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>
#include <tuple>
#include <unordered_map>

// declaring global constants at the top
void *int8902;
void *bool_t8895;
void *int8905;
void *bool_f8896;
void *int8891;
void *int8904;

// declaring global integer variable
int int8906;
int int8907;
int int8908;
int int8909;
int int8910;

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
void even_u63_spec(void *_8840, void *kont8805, void *x); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr();                                     // odd?
void odd_u63_spec(void *_8841, void *kont8806, void *x); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void *_8842, void *kont8807, void *lst,
                      void *n); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8843_fptr();                             // lam8843
void lam8843_spec(void *env8844, void *id_8733); // lam8843
void *lam8843 = encode_clo(alloc_clo(lam8843_fptr, 0));

void member_fptr();                                                   // member
void member_spec(void *_8845, void *kont8808, void *item, void *lst); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void *_8846, void *kont8810, void *x,
                     void *lst); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8847_fptr();                             // lam8847
void lam8847_spec(void *env8848, void *id_8748); // lam8847
void *lam8847 = encode_clo(alloc_clo(lam8847_fptr, 0));

void length_fptr();                                       // length
void length_spec(void *_8849, void *kont8811, void *lst); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8850_fptr();                             // lam8850
void lam8850_spec(void *env8851, void *id_8754); // lam8850
void *lam8850 = encode_clo(alloc_clo(lam8850_fptr, 0));

void lam8852_fptr();                             // lam8852
void lam8852_spec(void *env8853, void *id_8752); // lam8852
void *lam8852 = encode_clo(alloc_clo(lam8852_fptr, 0));

void map_fptr();                                                   // map
void map_spec(void *_8854, void *kont8813, void *proc, void *lst); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8855_fptr();                             // lam8855
void lam8855_spec(void *env8856, void *id_8761); // lam8855
void *lam8855 = encode_clo(alloc_clo(lam8855_fptr, 0));

void lam8857_fptr();                             // lam8857
void lam8857_spec(void *env8858, void *id_8758); // lam8857
void *lam8857 = encode_clo(alloc_clo(lam8857_fptr, 0));

void filter_fptr();                                                 // filter
void filter_spec(void *_8859, void *kont8816, void *op, void *lst); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr();                                                // drop
void drop_spec(void *_8860, void *kont8819, void *lst, void *n); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8861_fptr();                             // lam8861
void lam8861_spec(void *env8862, void *id_8770); // lam8861
void *lam8861 = encode_clo(alloc_clo(lam8861_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void *_8863, void *kont8820, void *fun, void *acc,
                void *lst); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8864_fptr();                             // lam8864
void lam8864_spec(void *env8865, void *id_8775); // lam8864
void *lam8864 = encode_clo(alloc_clo(lam8864_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void *_8866, void *kont8822, void *fun, void *acc,
                void *lst); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void *_8867, void *kont8824, void *lst,
                            void *lst2); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr();                                       // reverse
void reverse_spec(void *_8868, void *kont8825, void *lst); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8869_fptr();                             // lam8869
void lam8869_spec(void *env8870, void *id_8784); // lam8869
void *lam8869 = encode_clo(alloc_clo(lam8869_fptr, 0));

void append1_fptr();                                                  // append1
void append1_spec(void *_8871, void *kont8826, void *lhs, void *rhs); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8872_fptr();                             // lam8872
void lam8872_spec(void *env8873, void *id_8791); // lam8872
void *lam8872 = encode_clo(alloc_clo(lam8872_fptr, 0));

void lam8874_fptr();                             // lam8874
void lam8874_spec(void *env8875, void *id_8786); // lam8874
void *lam8874 = encode_clo(alloc_clo(lam8874_fptr, 0));

void lam8876_fptr();                       // lam8876
void lam8876_spec(void *env8877, void *x); // lam8876
void *lam8876 = encode_clo(alloc_clo(lam8876_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8879_fptr();                            // lam8879
void lam8879_spec(void *env8880, void *xy8794); // lam8879
void *lam8879 = encode_clo(alloc_clo(lam8879_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void *_8881, void *kont8832, void *lst, void *n,
                         void *lst2); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr();                                                // take
void take_spec(void *_8882, void *kont8834, void *lst, void *n); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void addd_fptr();                                              // addd
void addd_spec(void *_8883, void *kont8835, void *y, void *z); // addd
void *addd = encode_clo(alloc_clo(addd_fptr, 0));

void lam8884_fptr();                             // lam8884
void lam8884_spec(void *env8885, void *id_8803); // lam8884
void *lam8884 = encode_clo(alloc_clo(lam8884_fptr, 0));

void call_fptr();                                     // call
void call_spec(void *_8886, void *kont8836, void *x); // call
void *call = encode_clo(alloc_clo(call_fptr, 0));

void brouhaha_main_fptr();                            // brouhaha_main
void brouhaha_main_spec(void *_8887, void *kont8838); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

std::unordered_map<void *, std::tuple<void *, std::string, int>> addressMap;
;
inline void _u43_fptr() // +
{
  std::cout << "In _u43_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8911 = prim_car(lst);
    void *const lst8913 = prim_cdr(lst);
    void *const x8912 = apply_prim__u43(lst8913);
    arg_buffer[1] = kont8911;
    arg_buffer[2] = x8912;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8911))[0])();
  } else {
    void *const kont8911 = arg_buffer[2];
    void *const x8912 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8911;
    arg_buffer[2] = x8912;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8911))[0])();
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
    void *const kont8914 = prim_car(lst);
    void *const lst8916 = prim_cdr(lst);
    void *const x8915 = apply_prim__u45(lst8916);
    arg_buffer[1] = kont8914;
    arg_buffer[2] = x8915;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8914))[0])();
  } else {
    void *const kont8914 = arg_buffer[2];
    void *const x8915 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont8914;
    arg_buffer[2] = x8915;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8914))[0])();
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
    void *const kont8917 = prim_car(lst);
    void *const lst8919 = prim_cdr(lst);
    void *const x8918 = apply_prim__u42(lst8919);
    arg_buffer[1] = kont8917;
    arg_buffer[2] = x8918;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8917))[0])();
  } else {
    void *const kont8917 = arg_buffer[2];
    void *const x8918 = apply_prim__u42(arg_buffer);
    arg_buffer[1] = kont8917;
    arg_buffer[2] = x8918;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8917))[0])();
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
    void *const kont8920 = prim_car(lst);
    void *const lst8922 = prim_cdr(lst);
    void *const x8921 = apply_prim__u47(lst8922);
    arg_buffer[1] = kont8920;
    arg_buffer[2] = x8921;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8920))[0])();
  } else {
    void *const kont8920 = arg_buffer[2];
    void *const x8921 = apply_prim__u47(arg_buffer);
    arg_buffer[1] = kont8920;
    arg_buffer[2] = x8921;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8920))[0])();
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
    void *const kont8923 = prim_car(lst);
    void *const lst8925 = prim_cdr(lst);
    void *const x8924 = apply_prim__u61(lst8925);
    arg_buffer[1] = kont8923;
    arg_buffer[2] = x8924;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8923))[0])();
  } else {
    void *const kont8923 = arg_buffer[2];
    void *const x8924 = apply_prim__u61(arg_buffer);
    arg_buffer[1] = kont8923;
    arg_buffer[2] = x8924;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8923))[0])();
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
    void *const kont8926 = prim_car(lst);
    void *const lst8928 = prim_cdr(lst);
    void *const x8927 = apply_prim__u62(lst8928);
    arg_buffer[1] = kont8926;
    arg_buffer[2] = x8927;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8926))[0])();
  } else {
    void *const kont8926 = arg_buffer[2];
    void *const x8927 = apply_prim__u62(arg_buffer);
    arg_buffer[1] = kont8926;
    arg_buffer[2] = x8927;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8926))[0])();
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
    void *const kont8929 = prim_car(lst);
    void *const lst8931 = prim_cdr(lst);
    void *const x8930 = apply_prim__u60(lst8931);
    arg_buffer[1] = kont8929;
    arg_buffer[2] = x8930;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8929))[0])();
  } else {
    void *const kont8929 = arg_buffer[2];
    void *const x8930 = apply_prim__u60(arg_buffer);
    arg_buffer[1] = kont8929;
    arg_buffer[2] = x8930;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8929))[0])();
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
    void *const kont8932 = prim_car(lst);
    void *const lst8934 = prim_cdr(lst);
    void *const x8933 = apply_prim__u60_u61(lst8934);
    arg_buffer[1] = kont8932;
    arg_buffer[2] = x8933;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8932))[0])();
  } else {
    void *const kont8932 = arg_buffer[2];
    void *const x8933 = apply_prim__u60_u61(arg_buffer);
    arg_buffer[1] = kont8932;
    arg_buffer[2] = x8933;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8932))[0])();
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
    void *const kont8935 = prim_car(lst);
    void *const lst8937 = prim_cdr(lst);
    void *const x8936 = apply_prim__u62_u61(lst8937);
    arg_buffer[1] = kont8935;
    arg_buffer[2] = x8936;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8935))[0])();
  } else {
    void *const kont8935 = arg_buffer[2];
    void *const x8936 = apply_prim__u62_u61(arg_buffer);
    arg_buffer[1] = kont8935;
    arg_buffer[2] = x8936;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8935))[0])();
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
    void *const kont8938 = prim_car(lst);
    void *const lst8940 = prim_cdr(lst);
    void *const x8939 = apply_prim_modulo(lst8940);
    arg_buffer[1] = kont8938;
    arg_buffer[2] = x8939;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8938))[0])();
  } else {
    void *const kont8938 = arg_buffer[2];
    void *const x8939 = apply_prim_modulo(arg_buffer);
    arg_buffer[1] = kont8938;
    arg_buffer[2] = x8939;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8938))[0])();
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
    void *const kont8941 = prim_car(lst);
    void *const lst8943 = prim_cdr(lst);
    void *const x8942 = apply_prim_null_u63(lst8943);
    arg_buffer[1] = kont8941;
    arg_buffer[2] = x8942;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8941))[0])();
  } else {
    void *const kont8941 = arg_buffer[2];
    void *const x8942 = apply_prim_null_u63(arg_buffer);
    arg_buffer[1] = kont8941;
    arg_buffer[2] = x8942;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8941))[0])();
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
    void *const kont8944 = prim_car(lst);
    void *const lst8946 = prim_cdr(lst);
    void *const x8945 = apply_prim_equal_u63(lst8946);
    arg_buffer[1] = kont8944;
    arg_buffer[2] = x8945;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8944))[0])();
  } else {
    void *const kont8944 = arg_buffer[2];
    void *const x8945 = apply_prim_equal_u63(arg_buffer);
    arg_buffer[1] = kont8944;
    arg_buffer[2] = x8945;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8944))[0])();
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
    void *const kont8947 = prim_car(lst);
    void *const lst8949 = prim_cdr(lst);
    void *const x8948 = apply_prim_eq_u63(lst8949);
    arg_buffer[1] = kont8947;
    arg_buffer[2] = x8948;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8947))[0])();
  } else {
    void *const kont8947 = arg_buffer[2];
    void *const x8948 = apply_prim_eq_u63(arg_buffer);
    arg_buffer[1] = kont8947;
    arg_buffer[2] = x8948;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8947))[0])();
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
    void *const kont8950 = prim_car(lst);
    void *const lst8952 = prim_cdr(lst);
    void *const x8951 = apply_prim_cons(lst8952);
    arg_buffer[1] = kont8950;
    arg_buffer[2] = x8951;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8950))[0])();
  } else {
    void *const kont8950 = arg_buffer[2];
    void *const x8951 = apply_prim_cons(arg_buffer);
    arg_buffer[1] = kont8950;
    arg_buffer[2] = x8951;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8950))[0])();
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
    void *const kont8953 = prim_car(lst);
    void *const lst8955 = prim_cdr(lst);
    void *const x8954 = apply_prim_car(lst8955);
    arg_buffer[1] = kont8953;
    arg_buffer[2] = x8954;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8953))[0])();
  } else {
    void *const kont8953 = arg_buffer[2];
    void *const x8954 = apply_prim_car(arg_buffer);
    arg_buffer[1] = kont8953;
    arg_buffer[2] = x8954;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8953))[0])();
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
    void *const kont8956 = prim_car(lst);
    void *const lst8958 = prim_cdr(lst);
    void *const x8957 = apply_prim_cdr(lst8958);
    arg_buffer[1] = kont8956;
    arg_buffer[2] = x8957;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8956))[0])();
  } else {
    void *const kont8956 = arg_buffer[2];
    void *const x8957 = apply_prim_cdr(arg_buffer);
    arg_buffer[1] = kont8956;
    arg_buffer[2] = x8957;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8956))[0])();
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
    void *const kont8959 = prim_car(lst);
    void *const lst8961 = prim_cdr(lst);
    void *const x8960 = apply_prim_float_u45_u62int(lst8961);
    arg_buffer[1] = kont8959;
    arg_buffer[2] = x8960;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8959))[0])();
  } else {
    void *const kont8959 = arg_buffer[2];
    void *const x8960 = apply_prim_float_u45_u62int(arg_buffer);
    arg_buffer[1] = kont8959;
    arg_buffer[2] = x8960;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8959))[0])();
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
    void *const kont8962 = prim_car(lst);
    void *const lst8964 = prim_cdr(lst);
    void *const x8963 = apply_prim_int_u45_u62float(lst8964);
    arg_buffer[1] = kont8962;
    arg_buffer[2] = x8963;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8962))[0])();
  } else {
    void *const kont8962 = arg_buffer[2];
    void *const x8963 = apply_prim_int_u45_u62float(arg_buffer);
    arg_buffer[1] = kont8962;
    arg_buffer[2] = x8963;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8962))[0])();
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
    void *const kont8965 = prim_car(lst);
    void *const lst8967 = prim_cdr(lst);
    void *const x8966 = apply_prim_hash(lst8967);
    arg_buffer[1] = kont8965;
    arg_buffer[2] = x8966;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8965))[0])();
  } else {
    void *const kont8965 = arg_buffer[2];
    void *const x8966 = apply_prim_hash(arg_buffer);
    arg_buffer[1] = kont8965;
    arg_buffer[2] = x8966;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8965))[0])();
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
    void *const kont8968 = prim_car(lst);
    void *const lst8970 = prim_cdr(lst);
    void *const x8969 = apply_prim_hash_u45ref(lst8970);
    arg_buffer[1] = kont8968;
    arg_buffer[2] = x8969;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8968))[0])();
  } else {
    void *const kont8968 = arg_buffer[2];
    void *const x8969 = apply_prim_hash_u45ref(arg_buffer);
    arg_buffer[1] = kont8968;
    arg_buffer[2] = x8969;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8968))[0])();
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
    void *const kont8971 = prim_car(lst);
    void *const lst8973 = prim_cdr(lst);
    void *const x8972 = apply_prim_hash_u45set(lst8973);
    arg_buffer[1] = kont8971;
    arg_buffer[2] = x8972;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8971))[0])();
  } else {
    void *const kont8971 = arg_buffer[2];
    void *const x8972 = apply_prim_hash_u45set(arg_buffer);
    arg_buffer[1] = kont8971;
    arg_buffer[2] = x8972;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8971))[0])();
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
    void *const kont8974 = prim_car(lst);
    void *const lst8976 = prim_cdr(lst);
    void *const x8975 = apply_prim_hash_u45keys(lst8976);
    arg_buffer[1] = kont8974;
    arg_buffer[2] = x8975;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8974))[0])();
  } else {
    void *const kont8974 = arg_buffer[2];
    void *const x8975 = apply_prim_hash_u45keys(arg_buffer);
    arg_buffer[1] = kont8974;
    arg_buffer[2] = x8975;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8974))[0])();
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
    void *const kont8977 = prim_car(lst);
    void *const lst8979 = prim_cdr(lst);
    void *const x8978 = apply_prim_hash_u45has_u45key_u63(lst8979);
    arg_buffer[1] = kont8977;
    arg_buffer[2] = x8978;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8977))[0])();
  } else {
    void *const kont8977 = arg_buffer[2];
    void *const x8978 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    arg_buffer[1] = kont8977;
    arg_buffer[2] = x8978;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8977))[0])();
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
    void *const kont8980 = prim_car(lst);
    void *const lst8982 = prim_cdr(lst);
    void *const x8981 = apply_prim_hash_u45count(lst8982);
    arg_buffer[1] = kont8980;
    arg_buffer[2] = x8981;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8980))[0])();
  } else {
    void *const kont8980 = arg_buffer[2];
    void *const x8981 = apply_prim_hash_u45count(arg_buffer);
    arg_buffer[1] = kont8980;
    arg_buffer[2] = x8981;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8980))[0])();
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
    void *const kont8983 = prim_car(lst);
    void *const lst8985 = prim_cdr(lst);
    void *const x8984 = apply_prim_set(lst8985);
    arg_buffer[1] = kont8983;
    arg_buffer[2] = x8984;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8983))[0])();
  } else {
    void *const kont8983 = arg_buffer[2];
    void *const x8984 = apply_prim_set(arg_buffer);
    arg_buffer[1] = kont8983;
    arg_buffer[2] = x8984;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8983))[0])();
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
    void *const kont8986 = prim_car(lst);
    void *const lst8988 = prim_cdr(lst);
    void *const x8987 = apply_prim_set_u45_u62list(lst8988);
    arg_buffer[1] = kont8986;
    arg_buffer[2] = x8987;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8986))[0])();
  } else {
    void *const kont8986 = arg_buffer[2];
    void *const x8987 = apply_prim_set_u45_u62list(arg_buffer);
    arg_buffer[1] = kont8986;
    arg_buffer[2] = x8987;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8986))[0])();
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
    void *const kont8989 = prim_car(lst);
    void *const lst8991 = prim_cdr(lst);
    void *const x8990 = apply_prim_list_u45_u62set(lst8991);
    arg_buffer[1] = kont8989;
    arg_buffer[2] = x8990;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8989))[0])();
  } else {
    void *const kont8989 = arg_buffer[2];
    void *const x8990 = apply_prim_list_u45_u62set(arg_buffer);
    arg_buffer[1] = kont8989;
    arg_buffer[2] = x8990;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8989))[0])();
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
    void *const kont8992 = prim_car(lst);
    void *const lst8994 = prim_cdr(lst);
    void *const x8993 = apply_prim_set_u45add(lst8994);
    arg_buffer[1] = kont8992;
    arg_buffer[2] = x8993;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8992))[0])();
  } else {
    void *const kont8992 = arg_buffer[2];
    void *const x8993 = apply_prim_set_u45add(arg_buffer);
    arg_buffer[1] = kont8992;
    arg_buffer[2] = x8993;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8992))[0])();
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
    void *const kont8995 = prim_car(lst);
    void *const lst8997 = prim_cdr(lst);
    void *const x8996 = apply_prim_set_u45member_u63(lst8997);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
  } else {
    void *const kont8995 = arg_buffer[2];
    void *const x8996 = apply_prim_set_u45member_u63(arg_buffer);
    arg_buffer[1] = kont8995;
    arg_buffer[2] = x8996;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
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
    void *const kont8998 = prim_car(lst);
    void *const lst9000 = prim_cdr(lst);
    void *const x8999 = apply_prim_set_u45remove(lst9000);
    arg_buffer[1] = kont8998;
    arg_buffer[2] = x8999;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
  } else {
    void *const kont8998 = arg_buffer[2];
    void *const x8999 = apply_prim_set_u45remove(arg_buffer);
    arg_buffer[1] = kont8998;
    arg_buffer[2] = x8999;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
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
    void *const kont9001 = prim_car(lst);
    void *const lst9003 = prim_cdr(lst);
    void *const x9002 = apply_prim_set_u45count(lst9003);
    arg_buffer[1] = kont9001;
    arg_buffer[2] = x9002;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
  } else {
    void *const kont9001 = arg_buffer[2];
    void *const x9002 = apply_prim_set_u45count(arg_buffer);
    arg_buffer[1] = kont9001;
    arg_buffer[2] = x9002;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
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
    void *const kont9004 = prim_car(lst);
    void *const lst9006 = prim_cdr(lst);
    void *const x9005 = apply_prim_string_u63(lst9006);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
  } else {
    void *const kont9004 = arg_buffer[2];
    void *const x9005 = apply_prim_string_u63(arg_buffer);
    arg_buffer[1] = kont9004;
    arg_buffer[2] = x9005;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
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
    void *const kont9007 = prim_car(lst);
    void *const lst9009 = prim_cdr(lst);
    void *const x9008 = apply_prim_string_u45length(lst9009);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
  } else {
    void *const kont9007 = arg_buffer[2];
    void *const x9008 = apply_prim_string_u45length(arg_buffer);
    arg_buffer[1] = kont9007;
    arg_buffer[2] = x9008;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
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
    void *const kont9010 = prim_car(lst);
    void *const lst9012 = prim_cdr(lst);
    void *const x9011 = apply_prim_string_u45ref(lst9012);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
  } else {
    void *const kont9010 = arg_buffer[2];
    void *const x9011 = apply_prim_string_u45ref(arg_buffer);
    arg_buffer[1] = kont9010;
    arg_buffer[2] = x9011;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
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
    void *const kont9013 = prim_car(lst);
    void *const lst9015 = prim_cdr(lst);
    void *const x9014 = apply_prim_substring(lst9015);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
  } else {
    void *const kont9013 = arg_buffer[2];
    void *const x9014 = apply_prim_substring(arg_buffer);
    arg_buffer[1] = kont9013;
    arg_buffer[2] = x9014;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
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
    void *const kont9016 = prim_car(lst);
    void *const lst9018 = prim_cdr(lst);
    void *const x9017 = apply_prim_string_u45append(lst9018);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
  } else {
    void *const kont9016 = arg_buffer[2];
    void *const x9017 = apply_prim_string_u45append(arg_buffer);
    arg_buffer[1] = kont9016;
    arg_buffer[2] = x9017;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
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
    void *const kont9019 = prim_car(lst);
    void *const lst9021 = prim_cdr(lst);
    void *const x9020 = apply_prim_string_u45_u62list(lst9021);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
  } else {
    void *const kont9019 = arg_buffer[2];
    void *const x9020 = apply_prim_string_u45_u62list(arg_buffer);
    arg_buffer[1] = kont9019;
    arg_buffer[2] = x9020;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
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
    void *const kont9022 = prim_car(lst);
    void *const lst9024 = prim_cdr(lst);
    void *const x9023 = apply_prim_exact_u45floor(lst9024);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
  } else {
    void *const kont9022 = arg_buffer[2];
    void *const x9023 = apply_prim_exact_u45floor(arg_buffer);
    arg_buffer[1] = kont9022;
    arg_buffer[2] = x9023;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
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
    void *const kont9025 = prim_car(lst);
    void *const lst9027 = prim_cdr(lst);
    void *const x9026 = apply_prim_exact_u45ceiling(lst9027);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
  } else {
    void *const kont9025 = arg_buffer[2];
    void *const x9026 = apply_prim_exact_u45ceiling(arg_buffer);
    arg_buffer[1] = kont9025;
    arg_buffer[2] = x9026;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
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
    void *const kont9028 = prim_car(lst);
    void *const lst9030 = prim_cdr(lst);
    void *const x9029 = apply_prim_exact_u45round(lst9030);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
  } else {
    void *const kont9028 = arg_buffer[2];
    void *const x9029 = apply_prim_exact_u45round(arg_buffer);
    arg_buffer[1] = kont9028;
    arg_buffer[2] = x9029;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
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
    void *const kont9031 = prim_car(lst);
    void *const lst9033 = prim_cdr(lst);
    void *const x9032 = apply_prim_abs(lst9033);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
  } else {
    void *const kont9031 = arg_buffer[2];
    void *const x9032 = apply_prim_abs(arg_buffer);
    arg_buffer[1] = kont9031;
    arg_buffer[2] = x9032;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
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
    void *const kont9034 = prim_car(lst);
    void *const lst9036 = prim_cdr(lst);
    void *const x9035 = apply_prim_max(lst9036);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
  } else {
    void *const kont9034 = arg_buffer[2];
    void *const x9035 = apply_prim_max(arg_buffer);
    arg_buffer[1] = kont9034;
    arg_buffer[2] = x9035;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
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
    void *const kont9037 = prim_car(lst);
    void *const lst9039 = prim_cdr(lst);
    void *const x9038 = apply_prim_min(lst9039);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
  } else {
    void *const kont9037 = arg_buffer[2];
    void *const x9038 = apply_prim_min(arg_buffer);
    arg_buffer[1] = kont9037;
    arg_buffer[2] = x9038;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
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
    void *const kont9040 = prim_car(lst);
    void *const lst9042 = prim_cdr(lst);
    void *const x9041 = apply_prim_expt(lst9042);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
  } else {
    void *const kont9040 = arg_buffer[2];
    void *const x9041 = apply_prim_expt(arg_buffer);
    arg_buffer[1] = kont9040;
    arg_buffer[2] = x9041;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
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
    void *const kont9043 = prim_car(lst);
    void *const lst9045 = prim_cdr(lst);
    void *const x9044 = apply_prim_sqrt(lst9045);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
  } else {
    void *const kont9043 = arg_buffer[2];
    void *const x9044 = apply_prim_sqrt(arg_buffer);
    arg_buffer[1] = kont9043;
    arg_buffer[2] = x9044;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
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
    void *const kont9046 = prim_car(lst);
    void *const lst9048 = prim_cdr(lst);
    void *const x9047 = apply_prim_remainder(lst9048);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
  } else {
    void *const kont9046 = arg_buffer[2];
    void *const x9047 = apply_prim_remainder(arg_buffer);
    arg_buffer[1] = kont9046;
    arg_buffer[2] = x9047;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
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
    void *const kont9049 = prim_car(lst);
    void *const lst9051 = prim_cdr(lst);
    void *const x9050 = apply_prim_quotient(lst9051);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
  } else {
    void *const kont9049 = arg_buffer[2];
    void *const x9050 = apply_prim_quotient(arg_buffer);
    arg_buffer[1] = kont9049;
    arg_buffer[2] = x9050;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
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
    void *const kont9052 = prim_car(lst);
    void *const lst9054 = prim_cdr(lst);
    void *const x9053 = apply_prim_random(lst9054);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
  } else {
    void *const kont9052 = arg_buffer[2];
    void *const x9053 = apply_prim_random(arg_buffer);
    arg_buffer[1] = kont9052;
    arg_buffer[2] = x9053;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
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
    void *const kont9055 = prim_car(lst);
    void *const lst9057 = prim_cdr(lst);
    void *const x9056 = apply_prim_symbol_u63(lst9057);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
  } else {
    void *const kont9055 = arg_buffer[2];
    void *const x9056 = apply_prim_symbol_u63(arg_buffer);
    arg_buffer[1] = kont9055;
    arg_buffer[2] = x9056;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
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
    void *const kont9058 = prim_car(lst);
    void *const lst9060 = prim_cdr(lst);
    void *const x9059 = apply_prim_pair_u63(lst9060);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
  } else {
    void *const kont9058 = arg_buffer[2];
    void *const x9059 = apply_prim_pair_u63(arg_buffer);
    arg_buffer[1] = kont9058;
    arg_buffer[2] = x9059;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
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
    void *const kont9061 = prim_car(lst);
    void *const lst9063 = prim_cdr(lst);
    void *const x9062 = apply_prim_positive_u63(lst9063);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
  } else {
    void *const kont9061 = arg_buffer[2];
    void *const x9062 = apply_prim_positive_u63(arg_buffer);
    arg_buffer[1] = kont9061;
    arg_buffer[2] = x9062;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
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
    void *const kont9064 = prim_car(lst);
    void *const lst9066 = prim_cdr(lst);
    void *const x9065 = apply_prim_negative_u63(lst9066);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
  } else {
    void *const kont9064 = arg_buffer[2];
    void *const x9065 = apply_prim_negative_u63(arg_buffer);
    arg_buffer[1] = kont9064;
    arg_buffer[2] = x9065;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
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
    void *const kont9067 = prim_car(lst);
    void *const lst9069 = prim_cdr(lst);
    void *const x9068 = apply_prim_list(lst9069);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
  } else {
    void *const kont9067 = arg_buffer[2];
    void *const x9068 = apply_prim_list(arg_buffer);
    arg_buffer[1] = kont9067;
    arg_buffer[2] = x9068;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
  }
}

inline void even_u63_fptr() // even? -> generic version
{
  std::cout << "In even_u63_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8805 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8902, apply_prim_modulo_2(x, int8891));
  arg_buffer[1] = kont8805;
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(kont8805))[0])();
}

inline void even_u63_spec(void *_8840, void *kont8805, void *x) // even?
{
  std::cout << "In even_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8902, apply_prim_modulo_2(x, int8891));
  arg_buffer[1] = kont8805;
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(kont8805))[0])();
}

inline void odd_u63_fptr() // odd? -> generic version
{
  std::cout << "In odd_u63_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8806 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8905, apply_prim_modulo_2(x, int8891));
  arg_buffer[1] = kont8806;
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(kont8806))[0])();
}

inline void odd_u63_spec(void *_8841, void *kont8806, void *x) // odd?
{
  std::cout << "In odd_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[2] =
      apply_prim_equal_u63_2(int8905, apply_prim_modulo_2(x, int8891));
  arg_buffer[1] = kont8806;
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(kont8806))[0])();
}

inline void list_u45ref_fptr() // list-ref -> generic version
{
  std::cout << "In list_u45ref_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8807 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int8902, n))) {

    // clo-app
    arg_buffer[1] = kont8807;
    arg_buffer[2] = apply_prim_car_1(lst);
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8807))[0])();
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8807, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8905));
  }
}

inline void list_u45ref_spec(void *_8842, void *kont8807, void *lst,
                             void *n) // list-ref
{
  std::cout << "In list_u45ref_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int8902, n))) {

    // clo-app
    arg_buffer[1] = kont8807;
    arg_buffer[2] = apply_prim_car_1(lst);
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8807))[0])();
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont8807, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int8905));
  }
}

inline void lam8843_fptr() // lam8843 -> generic version
{
  std::cout << "In lam8843_fptr: generic version" << std::endl;
  // reading env
  void *const env8844 = arg_buffer[1];
  // reading env and args
  void *const id_8733 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8844);

  // if-clause
  if (is_true(id_8733)) {

    // clo-app
    arg_buffer[1] = decode_clo_array[1];
    arg_buffer[2] = bool_f8896;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[2], apply_prim_car_1(decode_clo_array[3])))) {

      // clo-app
      arg_buffer[1] = decode_clo_array[1];
      arg_buffer[2] = decode_clo_array[3];
      numArgs = int8907;
      reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
    } else {

      // clo-app
      member_spec(member, decode_clo_array[1], decode_clo_array[2],
                  apply_prim_cdr_1(decode_clo_array[3]));
    }
  }
}

inline void lam8843_spec(void *env8844, void *id_8733) // lam8843
{
  std::cout << "In lam8843_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8844);

  // if-clause
  if (is_true(id_8733)) {

    // clo-app
    arg_buffer[1] = decode_clo_array[1];
    arg_buffer[2] = bool_f8896;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[2], apply_prim_car_1(decode_clo_array[3])))) {

      // clo-app
      arg_buffer[1] = decode_clo_array[1];
      arg_buffer[2] = decode_clo_array[3];
      numArgs = int8907;
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
  std::cout << "In member_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8808 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9070 = alloc_clo(lam8843_fptr, 3);

  // setting env list
  clo9070[1] = kont8808;
  clo9070[2] = item;
  clo9070[3] = lst;
  void *f8809 = encode_clo(clo9070);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {

    // clo-app
    arg_buffer[1] = f8809;
    arg_buffer[2] = apply_prim_null_u63_1(item);
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(f8809))[0])();
  } else {

    // clo-app
    arg_buffer[1] = f8809;
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(f8809))[0])();
  }
}

inline void member_spec(void *_8845, void *kont8808, void *item,
                        void *lst) // member
{
  std::cout << "In member_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9071 = alloc_clo(lam8843_fptr, 3);

  // setting env list
  clo9071[1] = kont8808;
  clo9071[2] = item;
  clo9071[3] = lst;
  void *f8809 = encode_clo(clo9071);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {

    // clo-app
    arg_buffer[1] = f8809;
    arg_buffer[2] = apply_prim_null_u63_1(item);
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(f8809))[0])();
  } else {

    // clo-app
    arg_buffer[1] = f8809;
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(f8809))[0])();
  }
}

inline void member_u63_fptr() // member? -> generic version
{
  std::cout << "In member_u63_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8810 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8810;
    arg_buffer[2] = bool_f8896;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8810))[0])();
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {

      // clo-app
      arg_buffer[1] = kont8810;
      arg_buffer[2] = bool_t8895;
      numArgs = int8907;
      reinterpret_cast<void (*)()>((decode_clo(kont8810))[0])();
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8810, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void member_u63_spec(void *_8846, void *kont8810, void *x,
                            void *lst) // member?
{
  std::cout << "In member_u63_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8810;
    arg_buffer[2] = bool_f8896;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8810))[0])();
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {

      // clo-app
      arg_buffer[1] = kont8810;
      arg_buffer[2] = bool_t8895;
      numArgs = int8907;
      reinterpret_cast<void (*)()>((decode_clo(kont8810))[0])();
    } else {

      // clo-app
      member_u63_spec(member_u63, kont8810, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void lam8847_fptr() // lam8847 -> generic version
{
  std::cout << "In lam8847_fptr: generic version" << std::endl;
  // reading env
  void *const env8848 = arg_buffer[1];
  // reading env and args
  void *const id_8748 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8848);

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(decode_clo_array[2], id_8748);
  arg_buffer[1] = decode_clo_array[1];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8847_spec(void *env8848, void *id_8748) // lam8847
{
  std::cout << "In lam8847_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8848);

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(decode_clo_array[2], id_8748);
  arg_buffer[1] = decode_clo_array[1];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void length_fptr() // length -> generic version
{
  std::cout << "In length_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8811 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8811;
    arg_buffer[2] = int8902;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8811))[0])();
  } else {

    // creating new closure instance
    void **clo9072 = alloc_clo(lam8847_fptr, 2);

    // setting env list
    clo9072[1] = kont8811;
    clo9072[2] = int8905;
    void *f8812 = encode_clo(clo9072);

    // clo-app
    length_spec(length, f8812, apply_prim_cdr_1(lst));
  }
}

inline void length_spec(void *_8849, void *kont8811, void *lst) // length
{
  std::cout << "In length_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8811;
    arg_buffer[2] = int8902;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8811))[0])();
  } else {

    // creating new closure instance
    void **clo9073 = alloc_clo(lam8847_fptr, 2);

    // setting env list
    clo9073[1] = kont8811;
    clo9073[2] = int8905;
    void *f8812 = encode_clo(clo9073);

    // clo-app
    length_spec(length, f8812, apply_prim_cdr_1(lst));
  }
}

inline void lam8850_fptr() // lam8850 -> generic version
{
  std::cout << "In lam8850_fptr: generic version" << std::endl;
  // reading env
  void *const env8851 = arg_buffer[1];
  // reading env and args
  void *const id_8754 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8851);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8754);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8850_spec(void *env8851, void *id_8754) // lam8850
{
  std::cout << "In lam8850_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8851);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8754);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8852_fptr() // lam8852 -> generic version
{
  std::cout << "In lam8852_fptr: generic version" << std::endl;
  // reading env
  void *const env8853 = arg_buffer[1];
  // reading env and args
  void *const id_8752 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8853);

  // creating new closure instance
  void **clo9074 = alloc_clo(lam8850_fptr, 2);

  // setting env list
  clo9074[1] = id_8752;
  clo9074[2] = decode_clo_array[3];
  void *f8814 = encode_clo(clo9074);

  // clo-app
  map_spec(map, f8814, decode_clo_array[1],
           apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8852_spec(void *env8853, void *id_8752) // lam8852
{
  std::cout << "In lam8852_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8853);

  // creating new closure instance
  void **clo9075 = alloc_clo(lam8850_fptr, 2);

  // setting env list
  clo9075[1] = id_8752;
  clo9075[2] = decode_clo_array[3];
  void *f8814 = encode_clo(clo9075);

  // clo-app
  map_spec(map, f8814, decode_clo_array[1],
           apply_prim_cdr_1(decode_clo_array[2]));
}

inline void map_fptr() // map -> generic version
{
  std::cout << "In map_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8813 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8813;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8813))[0])();
  } else {

    // creating new closure instance
    void **clo9076 = alloc_clo(lam8852_fptr, 3);

    // setting env list
    clo9076[1] = proc;
    clo9076[2] = lst;
    clo9076[3] = kont8813;
    void *f8815 = encode_clo(clo9076);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8815;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8908;
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void map_spec(void *_8854, void *kont8813, void *proc, void *lst) // map
{
  std::cout << "In map_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8813;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8813))[0])();
  } else {

    // creating new closure instance
    void **clo9077 = alloc_clo(lam8852_fptr, 3);

    // setting env list
    clo9077[1] = proc;
    clo9077[2] = lst;
    clo9077[3] = kont8813;
    void *f8815 = encode_clo(clo9077);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8815;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8908;
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void lam8855_fptr() // lam8855 -> generic version
{
  std::cout << "In lam8855_fptr: generic version" << std::endl;
  // reading env
  void *const env8856 = arg_buffer[1];
  // reading env and args
  void *const id_8761 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8856);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8761);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8855_spec(void *env8856, void *id_8761) // lam8855
{
  std::cout << "In lam8855_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8856);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8761);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8857_fptr() // lam8857 -> generic version
{
  std::cout << "In lam8857_fptr: generic version" << std::endl;
  // reading env
  void *const env8858 = arg_buffer[1];
  // reading env and args
  void *const id_8758 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8858);

  // if-clause
  if (is_true(id_8758)) {

    // creating new closure instance
    void **clo9078 = alloc_clo(lam8855_fptr, 2);

    // setting env list
    clo9078[1] = apply_prim_car_1(decode_clo_array[3]);
    clo9078[2] = decode_clo_array[2];
    void *f8817 = encode_clo(clo9078);

    // clo-app
    filter_spec(filter, f8817, decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[3]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[2], decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[3]));
  }
}

inline void lam8857_spec(void *env8858, void *id_8758) // lam8857
{
  std::cout << "In lam8857_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8858);

  // if-clause
  if (is_true(id_8758)) {

    // creating new closure instance
    void **clo9079 = alloc_clo(lam8855_fptr, 2);

    // setting env list
    clo9079[1] = apply_prim_car_1(decode_clo_array[3]);
    clo9079[2] = decode_clo_array[2];
    void *f8817 = encode_clo(clo9079);

    // clo-app
    filter_spec(filter, f8817, decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[3]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[2], decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[3]));
  }
}

inline void filter_fptr() // filter -> generic version
{
  std::cout << "In filter_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8816 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8816;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8816))[0])();
  } else {

    // creating new closure instance
    void **clo9080 = alloc_clo(lam8857_fptr, 3);

    // setting env list
    clo9080[1] = op;
    clo9080[2] = kont8816;
    clo9080[3] = lst;
    void *f8818 = encode_clo(clo9080);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8818;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8908;
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void filter_spec(void *_8859, void *kont8816, void *op,
                        void *lst) // filter
{
  std::cout << "In filter_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8816;
    arg_buffer[2] = apply_prim_list_0();
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8816))[0])();
  } else {

    // creating new closure instance
    void **clo9081 = alloc_clo(lam8857_fptr, 3);

    // setting env list
    clo9081[1] = op;
    clo9081[2] = kont8816;
    clo9081[3] = lst;
    void *f8818 = encode_clo(clo9081);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8818;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = int8908;
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void drop_fptr() // drop -> generic version
{
  std::cout << "In drop_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8819 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8902))) {

    // clo-app
    arg_buffer[1] = kont8819;
    arg_buffer[2] = lst;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8819))[0])();
  } else {

    // clo-app
    drop_spec(drop, kont8819, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8905));
  }
}

inline void drop_spec(void *_8860, void *kont8819, void *lst, void *n) // drop
{
  std::cout << "In drop_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8902))) {

    // clo-app
    arg_buffer[1] = kont8819;
    arg_buffer[2] = lst;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8819))[0])();
  } else {

    // clo-app
    drop_spec(drop, kont8819, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int8905));
  }
}

inline void lam8861_fptr() // lam8861 -> generic version
{
  std::cout << "In lam8861_fptr: generic version" << std::endl;
  // reading env
  void *const env8862 = arg_buffer[1];
  // reading env and args
  void *const id_8770 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8862);

  // clo-app
  foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8770,
             apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8861_spec(void *env8862, void *id_8770) // lam8861
{
  std::cout << "In lam8861_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8862);

  // clo-app
  foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8770,
             apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version
{
  std::cout << "In foldl_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8820 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8820;
    arg_buffer[2] = acc;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8820))[0])();
  } else {

    // creating new closure instance
    void **clo9082 = alloc_clo(lam8861_fptr, 3);

    // setting env list
    clo9082[1] = fun;
    clo9082[2] = kont8820;
    clo9082[3] = lst;
    void *f8821 = encode_clo(clo9082);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8821;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8909;
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void foldl_spec(void *_8863, void *kont8820, void *fun, void *acc,
                       void *lst) // foldl
{
  std::cout << "In foldl_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8820;
    arg_buffer[2] = acc;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8820))[0])();
  } else {

    // creating new closure instance
    void **clo9083 = alloc_clo(lam8861_fptr, 3);

    // setting env list
    clo9083[1] = fun;
    clo9083[2] = kont8820;
    clo9083[3] = lst;
    void *f8821 = encode_clo(clo9083);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8821;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = int8909;
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void lam8864_fptr() // lam8864 -> generic version
{
  std::cout << "In lam8864_fptr: generic version" << std::endl;
  // reading env
  void *const env8865 = arg_buffer[1];
  // reading env and args
  void *const id_8775 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8865);

  // clo-app
  arg_buffer[1] = decode_clo_array[3];
  arg_buffer[2] = decode_clo_array[1];
  arg_buffer[3] = decode_clo_array[2];
  arg_buffer[4] = id_8775;
  numArgs = int8909;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam8864_spec(void *env8865, void *id_8775) // lam8864
{
  std::cout << "In lam8864_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8865);

  // clo-app
  arg_buffer[1] = decode_clo_array[3];
  arg_buffer[2] = decode_clo_array[1];
  arg_buffer[3] = decode_clo_array[2];
  arg_buffer[4] = id_8775;
  numArgs = int8909;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void foldr_fptr() // foldr -> generic version
{
  std::cout << "In foldr_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8822 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8822;
    arg_buffer[2] = acc;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8822))[0])();
  } else {

    // creating new closure instance
    void **clo9084 = alloc_clo(lam8864_fptr, 3);

    // setting env list
    clo9084[1] = kont8822;
    clo9084[2] = apply_prim_car_1(lst);
    clo9084[3] = fun;
    void *f8823 = encode_clo(clo9084);

    // clo-app
    foldr_spec(foldr, f8823, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void foldr_spec(void *_8866, void *kont8822, void *fun, void *acc,
                       void *lst) // foldr
{
  std::cout << "In foldr_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8822;
    arg_buffer[2] = acc;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8822))[0])();
  } else {

    // creating new closure instance
    void **clo9085 = alloc_clo(lam8864_fptr, 3);

    // setting env list
    clo9085[1] = kont8822;
    clo9085[2] = apply_prim_car_1(lst);
    clo9085[3] = fun;
    void *f8823 = encode_clo(clo9085);

    // clo-app
    foldr_spec(foldr, f8823, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version
{
  std::cout << "In reverse_u45helper_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8824 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8824;
    arg_buffer[2] = lst2;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8824))[0])();
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8824, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_u45helper_spec(void *_8867, void *kont8824, void *lst,
                                   void *lst2) // reverse-helper
{
  std::cout << "In reverse_u45helper_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {

    // clo-app
    arg_buffer[1] = kont8824;
    arg_buffer[2] = lst2;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8824))[0])();
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont8824, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_fptr() // reverse -> generic version
{
  std::cout << "In reverse_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8825 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8825, lst, apply_prim_list_0());
}

inline void reverse_spec(void *_8868, void *kont8825, void *lst) // reverse
{
  std::cout << "In reverse_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont8825, lst, apply_prim_list_0());
}

inline void lam8869_fptr() // lam8869 -> generic version
{
  std::cout << "In lam8869_fptr: generic version" << std::endl;
  // reading env
  void *const env8870 = arg_buffer[1];
  // reading env and args
  void *const id_8784 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8870);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8784);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8869_spec(void *env8870, void *id_8784) // lam8869
{
  std::cout << "In lam8869_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8870);

  // clo-app
  arg_buffer[2] = apply_prim_cons_2(decode_clo_array[1], id_8784);
  arg_buffer[1] = decode_clo_array[2];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void append1_fptr() // append1 -> generic version
{
  std::cout << "In append1_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8826 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {

    // clo-app
    arg_buffer[1] = kont8826;
    arg_buffer[2] = rhs;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8826))[0])();
  } else {

    // creating new closure instance
    void **clo9086 = alloc_clo(lam8869_fptr, 2);

    // setting env list
    clo9086[1] = apply_prim_car_1(lhs);
    clo9086[2] = kont8826;
    void *f8827 = encode_clo(clo9086);

    // clo-app
    append1_spec(append1, f8827, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void append1_spec(void *_8871, void *kont8826, void *lhs,
                         void *rhs) // append1
{
  std::cout << "In append1_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {

    // clo-app
    arg_buffer[1] = kont8826;
    arg_buffer[2] = rhs;
    numArgs = int8907;
    reinterpret_cast<void (*)()>((decode_clo(kont8826))[0])();
  } else {

    // creating new closure instance
    void **clo9087 = alloc_clo(lam8869_fptr, 2);

    // setting env list
    clo9087[1] = apply_prim_car_1(lhs);
    clo9087[2] = kont8826;
    void *f8827 = encode_clo(clo9087);

    // clo-app
    append1_spec(append1, f8827, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void lam8872_fptr() // lam8872 -> generic version
{
  std::cout << "In lam8872_fptr: generic version" << std::endl;
  // reading env
  void *const env8873 = arg_buffer[1];
  // reading env and args
  void *const id_8791 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8873);

  // clo-app
  foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8791);
}

inline void lam8872_spec(void *env8873, void *id_8791) // lam8872
{
  std::cout << "In lam8872_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8873);

  // clo-app
  foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8791);
}

inline void lam8874_fptr() // lam8874 -> generic version
{
  std::cout << "In lam8874_fptr: generic version" << std::endl;
  // reading env
  void *const env8875 = arg_buffer[1];
  // reading env and args
  void *const id_8786 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8875);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[3], id_8786))) {

    // clo-app
    append1_spec(append1, decode_clo_array[4], decode_clo_array[1],
                 apply_prim_car_1(decode_clo_array[2]));
  } else {

    // creating new closure instance
    void **clo9088 = alloc_clo(lam8872_fptr, 2);

    // setting env list
    clo9088[1] = apply_prim_list_0();
    clo9088[2] = decode_clo_array[4];
    void *f8829 = encode_clo(clo9088);

    // clo-app
    append1_spec(append1, f8829, apply_prim_list_1(decode_clo_array[1]),
                 decode_clo_array[2]);
  }
}

inline void lam8874_spec(void *env8875, void *id_8786) // lam8874
{
  std::cout << "In lam8874_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8875);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[3], id_8786))) {

    // clo-app
    append1_spec(append1, decode_clo_array[4], decode_clo_array[1],
                 apply_prim_car_1(decode_clo_array[2]));
  } else {

    // creating new closure instance
    void **clo9089 = alloc_clo(lam8872_fptr, 2);

    // setting env list
    clo9089[1] = apply_prim_list_0();
    clo9089[2] = decode_clo_array[4];
    void *f8829 = encode_clo(clo9089);

    // clo-app
    append1_spec(append1, f8829, apply_prim_list_1(decode_clo_array[1]),
                 decode_clo_array[2]);
  }
}

inline void lam8876_fptr() // lam8876 -> generic version
{
  std::cout << "In lam8876_fptr: generic version" << std::endl;
  // reading env
  void *const env8877 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8877);

  // creating new closure instance
  void **clo9090 = alloc_clo(lam8874_fptr, 4);

  // setting env list
  clo9090[1] = decode_clo_array[1];
  clo9090[2] = x;
  clo9090[3] = int8905;
  clo9090[4] = decode_clo_array[2];
  void *f8830 = encode_clo(clo9090);

  // clo-app
  length_spec(length, f8830, x);
}

inline void lam8876_spec(void *env8877, void *x) // lam8876
{
  std::cout << "In lam8876_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8877);

  // creating new closure instance
  void **clo9091 = alloc_clo(lam8874_fptr, 4);

  // setting env list
  clo9091[1] = decode_clo_array[1];
  clo9091[2] = x;
  clo9091[3] = int8905;
  clo9091[4] = decode_clo_array[2];
  void *f8830 = encode_clo(clo9091);

  // clo-app
  length_spec(length, f8830, x);
}

void append_fptr() // append
{
  std::cout << "In append_fptr" << std::endl;
  // reading env
  void *const _8878 = arg_buffer[1];
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
  void **clo9092 = alloc_clo(lam8876_fptr, 2);

  // setting env list
  clo9092[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
  clo9092[2] = apply_prim_car_1(vargs);
  void *f8831 = encode_clo(clo9092);

  // clo-app
  arg_buffer[1] = f8831;
  arg_buffer[2] = apply_prim_cdr_1(apply_prim_cdr_1(vargs));
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(f8831))[0])();
}

inline void lam8879_fptr() // lam8879 -> generic version
{
  std::cout << "In lam8879_fptr: generic version" << std::endl;
  // reading env
  void *const env8880 = arg_buffer[1];
  // reading env and args
  void *const xy8794 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8880);

  // clo-app
  arg_buffer[1] = decode_clo_array[1];
  arg_buffer[2] = xy8794;
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8879_spec(void *env8880, void *xy8794) // lam8879
{
  std::cout << "In lam8879_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8880);

  // clo-app
  arg_buffer[1] = decode_clo_array[1];
  arg_buffer[2] = xy8794;
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void take_u45helper_fptr() // take-helper -> generic version
{
  std::cout << "In take_u45helper_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8832 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8902))) {

    // creating new closure instance
    void **clo9093 = alloc_clo(lam8879_fptr, 1);

    // setting env list
    clo9093[1] = kont8832;
    void *f8833 = encode_clo(clo9093);

    // clo-app
    reverse_spec(reverse, f8833, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8832, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8905),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_u45helper_spec(void *_8881, void *kont8832, void *lst, void *n,
                                void *lst2) // take-helper
{
  std::cout << "In take_u45helper_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int8902))) {

    // creating new closure instance
    void **clo9094 = alloc_clo(lam8879_fptr, 1);

    // setting env list
    clo9094[1] = kont8832;
    void *f8833 = encode_clo(clo9094);

    // clo-app
    reverse_spec(reverse, f8833, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont8832, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int8905),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_fptr() // take -> generic version
{
  std::cout << "In take_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8834 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8834, lst, n, apply_prim_list_0());
}

inline void take_spec(void *_8882, void *kont8834, void *lst, void *n) // take
{
  std::cout << "In take_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont8834, lst, n, apply_prim_list_0());
}

inline void addd_fptr() // addd -> generic version
{
  std::cout << "In addd_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8835 = arg_buffer[2];
  void *const y = arg_buffer[3];
  void *const z = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  arg_buffer[1] = kont8835;
  arg_buffer[2] = apply_prim__u43_2(y, z);
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(kont8835))[0])();
}

inline void addd_spec(void *_8883, void *kont8835, void *y, void *z) // addd
{
  std::cout << "In addd_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

      // Accessing and printing a value from the map
  PRINT(kont8835);
  PRINT((decode_clo(kont8835))[0]);
  void *addr = reinterpret_cast<void *>(0x7fb4c0b4fab5);
  auto &[ptr, name, number] =
      addressMap[lam8884]; // Structured binding to access tuple elements
  std::cout << "Pointer: " << ptr << ", Name: " << name
            << ", Number: " << number << std::endl;


  // clo-app
  arg_buffer[1] = kont8835;
  arg_buffer[2] = apply_prim__u43_2(y, z);
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(kont8835))[0])();
}

inline void lam8884_fptr() // lam8884 -> generic version
{
  std::cout << "In lam8884_fptr: generic version" << std::endl;
  // reading env
  void *const env8885 = arg_buffer[1];
  // reading env and args
  void *const id_8803 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8885);

  // clo-app
  arg_buffer[2] = apply_prim_list_1(id_8803);
  arg_buffer[1] = decode_clo_array[1];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8884_spec(void *env8885, void *id_8803) // lam8884
{
  std::cout << "In lam8884_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env8885);

  // clo-app
  arg_buffer[2] = apply_prim_list_1(id_8803);
  arg_buffer[1] = decode_clo_array[1];
  numArgs = int8907;
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void call_fptr() // call -> generic version
{
  std::cout << "In call_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8836 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9095 = alloc_clo(lam8884_fptr, 1);

  // setting env list
  clo9095[1] = kont8836;
  void *f8837 = encode_clo(clo9095);

  // clo-app
  addd_spec(addd, f8837, x, int8904);
}

inline void call_spec(void *_8886, void *kont8836, void *x) // call
{
  std::cout << "In call_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9096 = alloc_clo(lam8884_fptr, 1);

  // setting env list
  clo9096[1] = kont8836;
  void *f8837 = encode_clo(clo9096);

  // clo-app
  addd_spec(addd, f8837, x, int8904);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version
{
  std::cout << "In brouhaha_main_fptr: generic version" << std::endl;
  // reading env and args
  void *const kont8838 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  call_spec(call, kont8838, int8905);
}

inline void brouhaha_main_spec(void *_8887, void *kont8838) // brouhaha_main
{
  std::cout << "In brouhaha_main_fptr" << std::endl;
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  call_spec(call, kont8838, int8905);
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8902 = reinterpret_cast<void *>(encode_int(0));
  bool_t8895 = encode_bool(true);
  int8905 = reinterpret_cast<void *>(encode_int(1));
  bool_f8896 = encode_bool(false);
  int8891 = reinterpret_cast<void *>(encode_int(2));
  int8904 = reinterpret_cast<void *>(encode_int(19));

  // initializing global integer vars
  int8906 = 1;
  int8907 = 2;
  int8908 = 3;
  int8909 = 4;
  int8910 = 5;

  // initializing global address map
  addressMap[_u43] = std::make_tuple(_u43, "_u43", 0);
  addressMap[_u45] = std::make_tuple(_u45, "_u45", 0);
  addressMap[_u42] = std::make_tuple(_u42, "_u42", 0);
  addressMap[_u47] = std::make_tuple(_u47, "_u47", 0);
  addressMap[_u61] = std::make_tuple(_u61, "_u61", 0);
  addressMap[_u62] = std::make_tuple(_u62, "_u62", 0);
  addressMap[_u60] = std::make_tuple(_u60, "_u60", 0);
  addressMap[_u60_u61] = std::make_tuple(_u60_u61, "_u60_u61", 0);
  addressMap[_u62_u61] = std::make_tuple(_u62_u61, "_u62_u61", 0);
  addressMap[modulo] = std::make_tuple(modulo, "modulo", 0);
  addressMap[null_u63] = std::make_tuple(null_u63, "null_u63", 0);
  addressMap[equal_u63] = std::make_tuple(equal_u63, "equal_u63", 0);
  addressMap[eq_u63] = std::make_tuple(eq_u63, "eq_u63", 0);
  addressMap[cons] = std::make_tuple(cons, "cons", 0);
  addressMap[car] = std::make_tuple(car, "car", 0);
  addressMap[cdr] = std::make_tuple(cdr, "cdr", 0);
  addressMap[float_u45_u62int] =
      std::make_tuple(float_u45_u62int, "float_u45_u62int", 0);
  addressMap[int_u45_u62float] =
      std::make_tuple(int_u45_u62float, "int_u45_u62float", 0);
  addressMap[hash] = std::make_tuple(hash, "hash", 0);
  addressMap[hash_u45ref] = std::make_tuple(hash_u45ref, "hash_u45ref", 0);
  addressMap[hash_u45set] = std::make_tuple(hash_u45set, "hash_u45set", 0);
  addressMap[hash_u45keys] = std::make_tuple(hash_u45keys, "hash_u45keys", 0);
  addressMap[hash_u45has_u45key_u63] =
      std::make_tuple(hash_u45has_u45key_u63, "hash_u45has_u45key_u63", 0);
  addressMap[hash_u45count] =
      std::make_tuple(hash_u45count, "hash_u45count", 0);
  addressMap[set] = std::make_tuple(set, "set", 0);
  addressMap[set_u45_u62list] =
      std::make_tuple(set_u45_u62list, "set_u45_u62list", 0);
  addressMap[list_u45_u62set] =
      std::make_tuple(list_u45_u62set, "list_u45_u62set", 0);
  addressMap[set_u45add] = std::make_tuple(set_u45add, "set_u45add", 0);
  addressMap[set_u45member_u63] =
      std::make_tuple(set_u45member_u63, "set_u45member_u63", 0);
  addressMap[set_u45remove] =
      std::make_tuple(set_u45remove, "set_u45remove", 0);
  addressMap[set_u45count] = std::make_tuple(set_u45count, "set_u45count", 0);
  addressMap[string_u63] = std::make_tuple(string_u63, "string_u63", 0);
  addressMap[string_u45length] =
      std::make_tuple(string_u45length, "string_u45length", 0);
  addressMap[string_u45ref] =
      std::make_tuple(string_u45ref, "string_u45ref", 0);
  addressMap[substring] = std::make_tuple(substring, "substring", 0);
  addressMap[string_u45append] =
      std::make_tuple(string_u45append, "string_u45append", 0);
  addressMap[string_u45_u62list] =
      std::make_tuple(string_u45_u62list, "string_u45_u62list", 0);
  addressMap[exact_u45floor] =
      std::make_tuple(exact_u45floor, "exact_u45floor", 0);
  addressMap[exact_u45ceiling] =
      std::make_tuple(exact_u45ceiling, "exact_u45ceiling", 0);
  addressMap[exact_u45round] =
      std::make_tuple(exact_u45round, "exact_u45round", 0);
  addressMap[abs_brouhaha] = std::make_tuple(abs_brouhaha, "abs_brouhaha", 0);
  addressMap[max] = std::make_tuple(max, "max", 0);
  addressMap[min] = std::make_tuple(min, "min", 0);
  addressMap[expt] = std::make_tuple(expt, "expt", 0);
  addressMap[sqrt_brouhaha] =
      std::make_tuple(sqrt_brouhaha, "sqrt_brouhaha", 0);
  addressMap[remainder_brouhaha] =
      std::make_tuple(remainder_brouhaha, "remainder_brouhaha", 0);
  addressMap[quotient] = std::make_tuple(quotient, "quotient", 0);
  addressMap[random_brouhaha] =
      std::make_tuple(random_brouhaha, "random_brouhaha", 0);
  addressMap[symbol_u63] = std::make_tuple(symbol_u63, "symbol_u63", 0);
  addressMap[pair_u63] = std::make_tuple(pair_u63, "pair_u63", 0);
  addressMap[positive_u63] = std::make_tuple(positive_u63, "positive_u63", 0);
  addressMap[negative_u63] = std::make_tuple(negative_u63, "negative_u63", 0);
  addressMap[list] = std::make_tuple(list, "list", 0);
  addressMap[even_u63] = std::make_tuple(even_u63, "even_u63", 3);
  addressMap[odd_u63] = std::make_tuple(odd_u63, "odd_u63", 3);
  addressMap[list_u45ref] = std::make_tuple(list_u45ref, "list_u45ref", 4);
  addressMap[lam8843] = std::make_tuple(lam8843, "lam8843", 2);
  addressMap[member] = std::make_tuple(member, "member", 4);
  addressMap[member_u63] = std::make_tuple(member_u63, "member_u63", 4);
  addressMap[lam8847] = std::make_tuple(lam8847, "lam8847", 2);
  addressMap[length] = std::make_tuple(length, "length", 3);
  addressMap[lam8850] = std::make_tuple(lam8850, "lam8850", 2);
  addressMap[lam8852] = std::make_tuple(lam8852, "lam8852", 2);
  addressMap[map] = std::make_tuple(map, "map", 4);
  addressMap[lam8855] = std::make_tuple(lam8855, "lam8855", 2);
  addressMap[lam8857] = std::make_tuple(lam8857, "lam8857", 2);
  addressMap[filter] = std::make_tuple(filter, "filter", 4);
  addressMap[drop] = std::make_tuple(drop, "drop", 4);
  addressMap[lam8861] = std::make_tuple(lam8861, "lam8861", 2);
  addressMap[foldl] = std::make_tuple(foldl, "foldl", 5);
  addressMap[lam8864] = std::make_tuple(lam8864, "lam8864", 2);
  addressMap[foldr] = std::make_tuple(foldr, "foldr", 5);
  addressMap[reverse_u45helper] =
      std::make_tuple(reverse_u45helper, "reverse_u45helper", 4);
  addressMap[reverse] = std::make_tuple(reverse, "reverse", 3);
  addressMap[lam8869] = std::make_tuple(lam8869, "lam8869", 2);
  addressMap[append1] = std::make_tuple(append1, "append1", 4);
  addressMap[lam8872] = std::make_tuple(lam8872, "lam8872", 2);
  addressMap[lam8874] = std::make_tuple(lam8874, "lam8874", 2);
  addressMap[lam8876] = std::make_tuple(lam8876, "lam8876", 2);
  addressMap[append] = std::make_tuple(append, "append", 0);
  addressMap[lam8879] = std::make_tuple(lam8879, "lam8879", 2);
  addressMap[take_u45helper] =
      std::make_tuple(take_u45helper, "take_u45helper", 5);
  addressMap[take] = std::make_tuple(take, "take", 4);
  addressMap[addd] = std::make_tuple(addd, "addd", 4);
  addressMap[lam8884] = std::make_tuple(lam8884, "lam8884", 2);
  addressMap[call] = std::make_tuple(call, "call", 3);
  addressMap[brouhaha_main] =
      std::make_tuple(brouhaha_main, "brouhaha_main", 2);

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_spec(nullptr, fhalt_clo);
}
