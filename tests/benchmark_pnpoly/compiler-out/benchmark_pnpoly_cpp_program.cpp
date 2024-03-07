#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
void *int9211;
void *float9264;
void *float9262;
void *float9269;
void *float9232;
void *float9275;
void *float9259;
void *float9274;
void *float9231;
void *float9219;
void *float9228;
void *float9223;
void *float9246;
void *float9233;
void *float9217;
void *float9270;
void *float9263;
void *float9218;
void *bool_t9203;
void *int9210;
void *bool_f9207;
void *float9221;
void *int9187;

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
void even_u63_spec(void *_9079, void *kont9015, void *x); // even?
void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr();                                     // odd?
void odd_u63_spec(void *_9080, void *kont9016, void *x); // odd?
void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void *_9081, void *kont9017, void *lst,
                      void *n); // list-ref
void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam9082_fptr();                             // lam9082
void lam9082_spec(void *env9083, void *id_8745); // lam9082
void *lam9082 = encode_clo(alloc_clo(lam9082_fptr, 0));

void member_fptr();                                                   // member
void member_spec(void *_9084, void *kont9018, void *item, void *lst); // member
void *member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void *_9085, void *kont9020, void *x,
                     void *lst); // member?
void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam9086_fptr();                             // lam9086
void lam9086_spec(void *env9087, void *id_8760); // lam9086
void *lam9086 = encode_clo(alloc_clo(lam9086_fptr, 0));

void length_fptr();                                       // length
void length_spec(void *_9088, void *kont9021, void *lst); // length
void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam9089_fptr();                             // lam9089
void lam9089_spec(void *env9090, void *id_8766); // lam9089
void *lam9089 = encode_clo(alloc_clo(lam9089_fptr, 0));

void lam9091_fptr();                             // lam9091
void lam9091_spec(void *env9092, void *id_8764); // lam9091
void *lam9091 = encode_clo(alloc_clo(lam9091_fptr, 0));

void map_fptr();                                                   // map
void map_spec(void *_9093, void *kont9023, void *proc, void *lst); // map
void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam9094_fptr();                             // lam9094
void lam9094_spec(void *env9095, void *id_8773); // lam9094
void *lam9094 = encode_clo(alloc_clo(lam9094_fptr, 0));

void lam9096_fptr();                             // lam9096
void lam9096_spec(void *env9097, void *id_8770); // lam9096
void *lam9096 = encode_clo(alloc_clo(lam9096_fptr, 0));

void filter_fptr();                                                 // filter
void filter_spec(void *_9098, void *kont9026, void *op, void *lst); // filter
void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr();                                                // drop
void drop_spec(void *_9099, void *kont9029, void *lst, void *n); // drop
void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam9100_fptr();                             // lam9100
void lam9100_spec(void *env9101, void *id_8782); // lam9100
void *lam9100 = encode_clo(alloc_clo(lam9100_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void *_9102, void *kont9030, void *fun, void *acc,
                void *lst); // foldl
void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9103_fptr();                             // lam9103
void lam9103_spec(void *env9104, void *id_8787); // lam9103
void *lam9103 = encode_clo(alloc_clo(lam9103_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void *_9105, void *kont9032, void *fun, void *acc,
                void *lst); // foldr
void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void *_9106, void *kont9034, void *lst,
                            void *lst2); // reverse-helper
void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr();                                       // reverse
void reverse_spec(void *_9107, void *kont9035, void *lst); // reverse
void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam9108_fptr();                             // lam9108
void lam9108_spec(void *env9109, void *id_8796); // lam9108
void *lam9108 = encode_clo(alloc_clo(lam9108_fptr, 0));

void append1_fptr();                                                  // append1
void append1_spec(void *_9110, void *kont9036, void *lhs, void *rhs); // append1
void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9111_fptr();                             // lam9111
void lam9111_spec(void *env9112, void *id_8803); // lam9111
void *lam9111 = encode_clo(alloc_clo(lam9111_fptr, 0));

void lam9113_fptr();                             // lam9113
void lam9113_spec(void *env9114, void *id_8798); // lam9113
void *lam9113 = encode_clo(alloc_clo(lam9113_fptr, 0));

void lam9115_fptr();                       // lam9115
void lam9115_spec(void *env9116, void *x); // lam9115
void *lam9115 = encode_clo(alloc_clo(lam9115_fptr, 0));

void append_fptr(); // append
void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam9118_fptr();                            // lam9118
void lam9118_spec(void *env9119, void *xy8806); // lam9118
void *lam9118 = encode_clo(alloc_clo(lam9118_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void *_9120, void *kont9042, void *lst, void *n,
                         void *lst2); // take-helper
void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr();                                                // take
void take_spec(void *_9121, void *kont9044, void *lst, void *n); // take
void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam9122_fptr();                             // lam9122
void lam9122_spec(void *env9123, void *id_8817); // lam9122
void *lam9122 = encode_clo(alloc_clo(lam9122_fptr, 0));

void lam9124_fptr();                             // lam9124
void lam9124_spec(void *env9125, void *id_8818); // lam9124
void *lam9124 = encode_clo(alloc_clo(lam9124_fptr, 0));

void lam9126_fptr();                             // lam9126
void lam9126_spec(void *env9127, void *id_8822); // lam9126
void *lam9126 = encode_clo(alloc_clo(lam9126_fptr, 0));

void lam9128_fptr();                             // lam9128
void lam9128_spec(void *env9129, void *id_8823); // lam9128
void *lam9128 = encode_clo(alloc_clo(lam9128_fptr, 0));

void lam9130_fptr();                             // lam9130
void lam9130_spec(void *env9131, void *id_8820); // lam9130
void *lam9130 = encode_clo(alloc_clo(lam9130_fptr, 0));

void lam9132_fptr();                             // lam9132
void lam9132_spec(void *env9133, void *id_8828); // lam9132
void *lam9132 = encode_clo(alloc_clo(lam9132_fptr, 0));

void lam9134_fptr();                             // lam9134
void lam9134_spec(void *env9135, void *id_8829); // lam9134
void *lam9134 = encode_clo(alloc_clo(lam9134_fptr, 0));

void lam9136_fptr();                             // lam9136
void lam9136_spec(void *env9137, void *id_8833); // lam9136
void *lam9136 = encode_clo(alloc_clo(lam9136_fptr, 0));

void lam9138_fptr();                             // lam9138
void lam9138_spec(void *env9139, void *id_8834); // lam9138
void *lam9138 = encode_clo(alloc_clo(lam9138_fptr, 0));

void lam9140_fptr();                             // lam9140
void lam9140_spec(void *env9141, void *id_8831); // lam9140
void *lam9140 = encode_clo(alloc_clo(lam9140_fptr, 0));

void lam9142_fptr();                             // lam9142
void lam9142_spec(void *env9143, void *id_8830); // lam9142
void *lam9142 = encode_clo(alloc_clo(lam9142_fptr, 0));

void lam9144_fptr();                             // lam9144
void lam9144_spec(void *env9145, void *id_8826); // lam9144
void *lam9144 = encode_clo(alloc_clo(lam9144_fptr, 0));

void lam9146_fptr();                             // lam9146
void lam9146_spec(void *env9147, void *id_8844); // lam9146
void *lam9146 = encode_clo(alloc_clo(lam9146_fptr, 0));

void lam9148_fptr();                             // lam9148
void lam9148_spec(void *env9149, void *id_8843); // lam9148
void *lam9148 = encode_clo(alloc_clo(lam9148_fptr, 0));

void lam9150_fptr();                             // lam9150
void lam9150_spec(void *env9151, void *id_8840); // lam9150
void *lam9150 = encode_clo(alloc_clo(lam9150_fptr, 0));

void lam9152_fptr();                             // lam9152
void lam9152_spec(void *env9153, void *id_8838); // lam9152
void *lam9152 = encode_clo(alloc_clo(lam9152_fptr, 0));

void lam9154_fptr();                             // lam9154
void lam9154_spec(void *env9155, void *id_8837); // lam9154
void *lam9154 = encode_clo(alloc_clo(lam9154_fptr, 0));

void lam9156_fptr();                             // lam9156
void lam9156_spec(void *env9157, void *id_8836); // lam9156
void *lam9156 = encode_clo(alloc_clo(lam9156_fptr, 0));

void lam9158_fptr();                             // lam9158
void lam9158_spec(void *env9159, void *id_8853); // lam9158
void *lam9158 = encode_clo(alloc_clo(lam9158_fptr, 0));

void lam9160_fptr();                             // lam9160
void lam9160_spec(void *env9161, void *id_8848); // lam9160
void *lam9160 = encode_clo(alloc_clo(lam9160_fptr, 0));

void lam9162_fptr();                             // lam9162
void lam9162_spec(void *env9163, void *id_8825); // lam9162
void *lam9162 = encode_clo(alloc_clo(lam9162_fptr, 0));

void lam9164_fptr();                             // lam9164
void lam9164_spec(void *env9165, void *id_8819); // lam9164
void *lam9164 = encode_clo(alloc_clo(lam9164_fptr, 0));

void lam9166_fptr();                             // lam9166
void lam9166_spec(void *env9167, void *id_8815); // lam9166
void *lam9166 = encode_clo(alloc_clo(lam9166_fptr, 0));

void pt_u45in_u45poly2_u45helper_fptr(); // pt-in-poly2-helper
void pt_u45in_u45poly2_u45helper_spec(void *_9168, void *kont9045, void *xp,
                                      void *yp, void *x, void *y, void *c,
                                      void *i, void *j); // pt-in-poly2-helper
void *pt_u45in_u45poly2_u45helper =
    encode_clo(alloc_clo(pt_u45in_u45poly2_u45helper_fptr, 0));

void lam9169_fptr();                             // lam9169
void lam9169_spec(void *env9170, void *id_8857); // lam9169
void *lam9169 = encode_clo(alloc_clo(lam9169_fptr, 0));

void pt_u45in_u45poly2_fptr(); // pt-in-poly2
void pt_u45in_u45poly2_spec(void *_9171, void *kont9069, void *xp, void *yp,
                            void *x, void *y); // pt-in-poly2
void *pt_u45in_u45poly2 = encode_clo(alloc_clo(pt_u45in_u45poly2_fptr, 0));

void lam9172_fptr();                             // lam9172
void lam9172_spec(void *env9173, void *id_8904); // lam9172
void *lam9172 = encode_clo(alloc_clo(lam9172_fptr, 0));

void lam9174_fptr();                             // lam9174
void lam9174_spec(void *env9175, void *id_8864); // lam9174
void *lam9174 = encode_clo(alloc_clo(lam9174_fptr, 0));

void lam9176_fptr(); // lam9176
void lam9176_spec(void *env9177, void *cont9072, void *lst,
                  void *count); // lam9176
void *lam9176 = encode_clo(alloc_clo(lam9176_fptr, 0));

void run_fptr();                                                        // run
void run_spec(void *_9178, void *kont9071, void *input1, void *input2); // run
void *run = encode_clo(alloc_clo(run_fptr, 0));

void lam9179_fptr();                             // lam9179
void lam9179_spec(void *env9180, void *id_8946); // lam9179
void *lam9179 = encode_clo(alloc_clo(lam9179_fptr, 0));

void lam9181_fptr();                             // lam9181
void lam9181_spec(void *env9182, void *id_8925); // lam9181
void *lam9181 = encode_clo(alloc_clo(lam9181_fptr, 0));

void brouhaha_main_fptr();                            // brouhaha_main
void brouhaha_main_spec(void *_9183, void *kont9075); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

inline void _u43_fptr() // +
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9276 = prim_car(lst);
    void *const lst9278 = prim_cdr(lst);
    void *const x9277 = apply_prim__u43(lst9278);
    arg_buffer[1] = kont9276;
    arg_buffer[2] = x9277;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9276))[0])();
  } else {
    void *const kont9276 = arg_buffer[2];
    void *const x9277 = apply_prim__u43(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9276))[0])(
        kont9276, x9277);
  }
}

inline void _u45_fptr() // -
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9279 = prim_car(lst);
    void *const lst9281 = prim_cdr(lst);
    void *const x9280 = apply_prim__u45(lst9281);
    arg_buffer[1] = kont9279;
    arg_buffer[2] = x9280;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9279))[0])();
  } else {
    void *const kont9279 = arg_buffer[2];
    void *const x9280 = apply_prim__u45(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9279))[0])(
        kont9279, x9280);
  }
}

inline void _u42_fptr() // *
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9282 = prim_car(lst);
    void *const lst9284 = prim_cdr(lst);
    void *const x9283 = apply_prim__u42(lst9284);
    arg_buffer[1] = kont9282;
    arg_buffer[2] = x9283;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9282))[0])();
  } else {
    void *const kont9282 = arg_buffer[2];
    void *const x9283 = apply_prim__u42(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9282))[0])(
        kont9282, x9283);
  }
}

inline void _u47_fptr() // /
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9285 = prim_car(lst);
    void *const lst9287 = prim_cdr(lst);
    void *const x9286 = apply_prim__u47(lst9287);
    arg_buffer[1] = kont9285;
    arg_buffer[2] = x9286;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9285))[0])();
  } else {
    void *const kont9285 = arg_buffer[2];
    void *const x9286 = apply_prim__u47(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9285))[0])(
        kont9285, x9286);
  }
}

inline void _u61_fptr() // =
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9288 = prim_car(lst);
    void *const lst9290 = prim_cdr(lst);
    void *const x9289 = apply_prim__u61(lst9290);
    arg_buffer[1] = kont9288;
    arg_buffer[2] = x9289;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9288))[0])();
  } else {
    void *const kont9288 = arg_buffer[2];
    void *const x9289 = apply_prim__u61(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9288))[0])(
        kont9288, x9289);
  }
}

inline void _u62_fptr() // >
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9291 = prim_car(lst);
    void *const lst9293 = prim_cdr(lst);
    void *const x9292 = apply_prim__u62(lst9293);
    arg_buffer[1] = kont9291;
    arg_buffer[2] = x9292;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9291))[0])();
  } else {
    void *const kont9291 = arg_buffer[2];
    void *const x9292 = apply_prim__u62(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9291))[0])(
        kont9291, x9292);
  }
}

inline void _u60_fptr() // <
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9294 = prim_car(lst);
    void *const lst9296 = prim_cdr(lst);
    void *const x9295 = apply_prim__u60(lst9296);
    arg_buffer[1] = kont9294;
    arg_buffer[2] = x9295;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9294))[0])();
  } else {
    void *const kont9294 = arg_buffer[2];
    void *const x9295 = apply_prim__u60(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9294))[0])(
        kont9294, x9295);
  }
}

inline void _u60_u61_fptr() // <=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9297 = prim_car(lst);
    void *const lst9299 = prim_cdr(lst);
    void *const x9298 = apply_prim__u60_u61(lst9299);
    arg_buffer[1] = kont9297;
    arg_buffer[2] = x9298;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9297))[0])();
  } else {
    void *const kont9297 = arg_buffer[2];
    void *const x9298 = apply_prim__u60_u61(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9297))[0])(
        kont9297, x9298);
  }
}

inline void _u62_u61_fptr() // >=
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9300 = prim_car(lst);
    void *const lst9302 = prim_cdr(lst);
    void *const x9301 = apply_prim__u62_u61(lst9302);
    arg_buffer[1] = kont9300;
    arg_buffer[2] = x9301;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9300))[0])();
  } else {
    void *const kont9300 = arg_buffer[2];
    void *const x9301 = apply_prim__u62_u61(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9300))[0])(
        kont9300, x9301);
  }
}

inline void modulo_fptr() // modulo
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9303 = prim_car(lst);
    void *const lst9305 = prim_cdr(lst);
    void *const x9304 = apply_prim_modulo(lst9305);
    arg_buffer[1] = kont9303;
    arg_buffer[2] = x9304;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9303))[0])();
  } else {
    void *const kont9303 = arg_buffer[2];
    void *const x9304 = apply_prim_modulo(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9303))[0])(
        kont9303, x9304);
  }
}

inline void null_u63_fptr() // null?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9306 = prim_car(lst);
    void *const lst9308 = prim_cdr(lst);
    void *const x9307 = apply_prim_null_u63(lst9308);
    arg_buffer[1] = kont9306;
    arg_buffer[2] = x9307;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9306))[0])();
  } else {
    void *const kont9306 = arg_buffer[2];
    void *const x9307 = apply_prim_null_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9306))[0])(
        kont9306, x9307);
  }
}

inline void equal_u63_fptr() // equal?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9309 = prim_car(lst);
    void *const lst9311 = prim_cdr(lst);
    void *const x9310 = apply_prim_equal_u63(lst9311);
    arg_buffer[1] = kont9309;
    arg_buffer[2] = x9310;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9309))[0])();
  } else {
    void *const kont9309 = arg_buffer[2];
    void *const x9310 = apply_prim_equal_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9309))[0])(
        kont9309, x9310);
  }
}

inline void eq_u63_fptr() // eq?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9312 = prim_car(lst);
    void *const lst9314 = prim_cdr(lst);
    void *const x9313 = apply_prim_eq_u63(lst9314);
    arg_buffer[1] = kont9312;
    arg_buffer[2] = x9313;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9312))[0])();
  } else {
    void *const kont9312 = arg_buffer[2];
    void *const x9313 = apply_prim_eq_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9312))[0])(
        kont9312, x9313);
  }
}

inline void cons_fptr() // cons
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9315 = prim_car(lst);
    void *const lst9317 = prim_cdr(lst);
    void *const x9316 = apply_prim_cons(lst9317);
    arg_buffer[1] = kont9315;
    arg_buffer[2] = x9316;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9315))[0])();
  } else {
    void *const kont9315 = arg_buffer[2];
    void *const x9316 = apply_prim_cons(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9315))[0])(
        kont9315, x9316);
  }
}

inline void car_fptr() // car
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9318 = prim_car(lst);
    void *const lst9320 = prim_cdr(lst);
    void *const x9319 = apply_prim_car(lst9320);
    arg_buffer[1] = kont9318;
    arg_buffer[2] = x9319;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9318))[0])();
  } else {
    void *const kont9318 = arg_buffer[2];
    void *const x9319 = apply_prim_car(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9318))[0])(
        kont9318, x9319);
  }
}

inline void cdr_fptr() // cdr
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9321 = prim_car(lst);
    void *const lst9323 = prim_cdr(lst);
    void *const x9322 = apply_prim_cdr(lst9323);
    arg_buffer[1] = kont9321;
    arg_buffer[2] = x9322;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9321))[0])();
  } else {
    void *const kont9321 = arg_buffer[2];
    void *const x9322 = apply_prim_cdr(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9321))[0])(
        kont9321, x9322);
  }
}

inline void float_u45_u62int_fptr() // float->int
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9324 = prim_car(lst);
    void *const lst9326 = prim_cdr(lst);
    void *const x9325 = apply_prim_float_u45_u62int(lst9326);
    arg_buffer[1] = kont9324;
    arg_buffer[2] = x9325;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9324))[0])();
  } else {
    void *const kont9324 = arg_buffer[2];
    void *const x9325 = apply_prim_float_u45_u62int(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9324))[0])(
        kont9324, x9325);
  }
}

inline void int_u45_u62float_fptr() // int->float
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9327 = prim_car(lst);
    void *const lst9329 = prim_cdr(lst);
    void *const x9328 = apply_prim_int_u45_u62float(lst9329);
    arg_buffer[1] = kont9327;
    arg_buffer[2] = x9328;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9327))[0])();
  } else {
    void *const kont9327 = arg_buffer[2];
    void *const x9328 = apply_prim_int_u45_u62float(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9327))[0])(
        kont9327, x9328);
  }
}

inline void hash_fptr() // hash
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9330 = prim_car(lst);
    void *const lst9332 = prim_cdr(lst);
    void *const x9331 = apply_prim_hash(lst9332);
    arg_buffer[1] = kont9330;
    arg_buffer[2] = x9331;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9330))[0])();
  } else {
    void *const kont9330 = arg_buffer[2];
    void *const x9331 = apply_prim_hash(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9330))[0])(
        kont9330, x9331);
  }
}

inline void hash_u45ref_fptr() // hash-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9333 = prim_car(lst);
    void *const lst9335 = prim_cdr(lst);
    void *const x9334 = apply_prim_hash_u45ref(lst9335);
    arg_buffer[1] = kont9333;
    arg_buffer[2] = x9334;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9333))[0])();
  } else {
    void *const kont9333 = arg_buffer[2];
    void *const x9334 = apply_prim_hash_u45ref(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9333))[0])(
        kont9333, x9334);
  }
}

inline void hash_u45set_fptr() // hash-set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9336 = prim_car(lst);
    void *const lst9338 = prim_cdr(lst);
    void *const x9337 = apply_prim_hash_u45set(lst9338);
    arg_buffer[1] = kont9336;
    arg_buffer[2] = x9337;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9336))[0])();
  } else {
    void *const kont9336 = arg_buffer[2];
    void *const x9337 = apply_prim_hash_u45set(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9336))[0])(
        kont9336, x9337);
  }
}

inline void hash_u45keys_fptr() // hash-keys
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9339 = prim_car(lst);
    void *const lst9341 = prim_cdr(lst);
    void *const x9340 = apply_prim_hash_u45keys(lst9341);
    arg_buffer[1] = kont9339;
    arg_buffer[2] = x9340;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9339))[0])();
  } else {
    void *const kont9339 = arg_buffer[2];
    void *const x9340 = apply_prim_hash_u45keys(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9339))[0])(
        kont9339, x9340);
  }
}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9342 = prim_car(lst);
    void *const lst9344 = prim_cdr(lst);
    void *const x9343 = apply_prim_hash_u45has_u45key_u63(lst9344);
    arg_buffer[1] = kont9342;
    arg_buffer[2] = x9343;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9342))[0])();
  } else {
    void *const kont9342 = arg_buffer[2];
    void *const x9343 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9342))[0])(
        kont9342, x9343);
  }
}

inline void hash_u45count_fptr() // hash-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9345 = prim_car(lst);
    void *const lst9347 = prim_cdr(lst);
    void *const x9346 = apply_prim_hash_u45count(lst9347);
    arg_buffer[1] = kont9345;
    arg_buffer[2] = x9346;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9345))[0])();
  } else {
    void *const kont9345 = arg_buffer[2];
    void *const x9346 = apply_prim_hash_u45count(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9345))[0])(
        kont9345, x9346);
  }
}

inline void set_fptr() // set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9348 = prim_car(lst);
    void *const lst9350 = prim_cdr(lst);
    void *const x9349 = apply_prim_set(lst9350);
    arg_buffer[1] = kont9348;
    arg_buffer[2] = x9349;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9348))[0])();
  } else {
    void *const kont9348 = arg_buffer[2];
    void *const x9349 = apply_prim_set(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9348))[0])(
        kont9348, x9349);
  }
}

inline void set_u45_u62list_fptr() // set->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9351 = prim_car(lst);
    void *const lst9353 = prim_cdr(lst);
    void *const x9352 = apply_prim_set_u45_u62list(lst9353);
    arg_buffer[1] = kont9351;
    arg_buffer[2] = x9352;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9351))[0])();
  } else {
    void *const kont9351 = arg_buffer[2];
    void *const x9352 = apply_prim_set_u45_u62list(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9351))[0])(
        kont9351, x9352);
  }
}

inline void list_u45_u62set_fptr() // list->set
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9354 = prim_car(lst);
    void *const lst9356 = prim_cdr(lst);
    void *const x9355 = apply_prim_list_u45_u62set(lst9356);
    arg_buffer[1] = kont9354;
    arg_buffer[2] = x9355;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9354))[0])();
  } else {
    void *const kont9354 = arg_buffer[2];
    void *const x9355 = apply_prim_list_u45_u62set(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9354))[0])(
        kont9354, x9355);
  }
}

inline void set_u45add_fptr() // set-add
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9357 = prim_car(lst);
    void *const lst9359 = prim_cdr(lst);
    void *const x9358 = apply_prim_set_u45add(lst9359);
    arg_buffer[1] = kont9357;
    arg_buffer[2] = x9358;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9357))[0])();
  } else {
    void *const kont9357 = arg_buffer[2];
    void *const x9358 = apply_prim_set_u45add(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9357))[0])(
        kont9357, x9358);
  }
}

inline void set_u45member_u63_fptr() // set-member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9360 = prim_car(lst);
    void *const lst9362 = prim_cdr(lst);
    void *const x9361 = apply_prim_set_u45member_u63(lst9362);
    arg_buffer[1] = kont9360;
    arg_buffer[2] = x9361;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9360))[0])();
  } else {
    void *const kont9360 = arg_buffer[2];
    void *const x9361 = apply_prim_set_u45member_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9360))[0])(
        kont9360, x9361);
  }
}

inline void set_u45remove_fptr() // set-remove
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9363 = prim_car(lst);
    void *const lst9365 = prim_cdr(lst);
    void *const x9364 = apply_prim_set_u45remove(lst9365);
    arg_buffer[1] = kont9363;
    arg_buffer[2] = x9364;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9363))[0])();
  } else {
    void *const kont9363 = arg_buffer[2];
    void *const x9364 = apply_prim_set_u45remove(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9363))[0])(
        kont9363, x9364);
  }
}

inline void set_u45count_fptr() // set-count
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9366 = prim_car(lst);
    void *const lst9368 = prim_cdr(lst);
    void *const x9367 = apply_prim_set_u45count(lst9368);
    arg_buffer[1] = kont9366;
    arg_buffer[2] = x9367;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9366))[0])();
  } else {
    void *const kont9366 = arg_buffer[2];
    void *const x9367 = apply_prim_set_u45count(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9366))[0])(
        kont9366, x9367);
  }
}

inline void string_u63_fptr() // string?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9369 = prim_car(lst);
    void *const lst9371 = prim_cdr(lst);
    void *const x9370 = apply_prim_string_u63(lst9371);
    arg_buffer[1] = kont9369;
    arg_buffer[2] = x9370;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9369))[0])();
  } else {
    void *const kont9369 = arg_buffer[2];
    void *const x9370 = apply_prim_string_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9369))[0])(
        kont9369, x9370);
  }
}

inline void string_u45length_fptr() // string-length
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9372 = prim_car(lst);
    void *const lst9374 = prim_cdr(lst);
    void *const x9373 = apply_prim_string_u45length(lst9374);
    arg_buffer[1] = kont9372;
    arg_buffer[2] = x9373;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9372))[0])();
  } else {
    void *const kont9372 = arg_buffer[2];
    void *const x9373 = apply_prim_string_u45length(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9372))[0])(
        kont9372, x9373);
  }
}

inline void string_u45ref_fptr() // string-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9375 = prim_car(lst);
    void *const lst9377 = prim_cdr(lst);
    void *const x9376 = apply_prim_string_u45ref(lst9377);
    arg_buffer[1] = kont9375;
    arg_buffer[2] = x9376;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9375))[0])();
  } else {
    void *const kont9375 = arg_buffer[2];
    void *const x9376 = apply_prim_string_u45ref(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9375))[0])(
        kont9375, x9376);
  }
}

inline void substring_fptr() // substring
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9378 = prim_car(lst);
    void *const lst9380 = prim_cdr(lst);
    void *const x9379 = apply_prim_substring(lst9380);
    arg_buffer[1] = kont9378;
    arg_buffer[2] = x9379;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9378))[0])();
  } else {
    void *const kont9378 = arg_buffer[2];
    void *const x9379 = apply_prim_substring(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9378))[0])(
        kont9378, x9379);
  }
}

inline void string_u45append_fptr() // string-append
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9381 = prim_car(lst);
    void *const lst9383 = prim_cdr(lst);
    void *const x9382 = apply_prim_string_u45append(lst9383);
    arg_buffer[1] = kont9381;
    arg_buffer[2] = x9382;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9381))[0])();
  } else {
    void *const kont9381 = arg_buffer[2];
    void *const x9382 = apply_prim_string_u45append(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9381))[0])(
        kont9381, x9382);
  }
}

inline void string_u45_u62list_fptr() // string->list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9384 = prim_car(lst);
    void *const lst9386 = prim_cdr(lst);
    void *const x9385 = apply_prim_string_u45_u62list(lst9386);
    arg_buffer[1] = kont9384;
    arg_buffer[2] = x9385;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9384))[0])();
  } else {
    void *const kont9384 = arg_buffer[2];
    void *const x9385 = apply_prim_string_u45_u62list(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9384))[0])(
        kont9384, x9385);
  }
}

inline void exact_u45floor_fptr() // exact-floor
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9387 = prim_car(lst);
    void *const lst9389 = prim_cdr(lst);
    void *const x9388 = apply_prim_exact_u45floor(lst9389);
    arg_buffer[1] = kont9387;
    arg_buffer[2] = x9388;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9387))[0])();
  } else {
    void *const kont9387 = arg_buffer[2];
    void *const x9388 = apply_prim_exact_u45floor(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9387))[0])(
        kont9387, x9388);
  }
}

inline void exact_u45ceiling_fptr() // exact-ceiling
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9390 = prim_car(lst);
    void *const lst9392 = prim_cdr(lst);
    void *const x9391 = apply_prim_exact_u45ceiling(lst9392);
    arg_buffer[1] = kont9390;
    arg_buffer[2] = x9391;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9390))[0])();
  } else {
    void *const kont9390 = arg_buffer[2];
    void *const x9391 = apply_prim_exact_u45ceiling(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9390))[0])(
        kont9390, x9391);
  }
}

inline void exact_u45round_fptr() // exact-round
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9393 = prim_car(lst);
    void *const lst9395 = prim_cdr(lst);
    void *const x9394 = apply_prim_exact_u45round(lst9395);
    arg_buffer[1] = kont9393;
    arg_buffer[2] = x9394;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9393))[0])();
  } else {
    void *const kont9393 = arg_buffer[2];
    void *const x9394 = apply_prim_exact_u45round(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9393))[0])(
        kont9393, x9394);
  }
}

inline void abs_fptr() // abs
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9396 = prim_car(lst);
    void *const lst9398 = prim_cdr(lst);
    void *const x9397 = apply_prim_abs(lst9398);
    arg_buffer[1] = kont9396;
    arg_buffer[2] = x9397;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9396))[0])();
  } else {
    void *const kont9396 = arg_buffer[2];
    void *const x9397 = apply_prim_abs(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9396))[0])(
        kont9396, x9397);
  }
}

inline void max_fptr() // max
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9399 = prim_car(lst);
    void *const lst9401 = prim_cdr(lst);
    void *const x9400 = apply_prim_max(lst9401);
    arg_buffer[1] = kont9399;
    arg_buffer[2] = x9400;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9399))[0])();
  } else {
    void *const kont9399 = arg_buffer[2];
    void *const x9400 = apply_prim_max(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9399))[0])(
        kont9399, x9400);
  }
}

inline void min_fptr() // min
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9402 = prim_car(lst);
    void *const lst9404 = prim_cdr(lst);
    void *const x9403 = apply_prim_min(lst9404);
    arg_buffer[1] = kont9402;
    arg_buffer[2] = x9403;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9402))[0])();
  } else {
    void *const kont9402 = arg_buffer[2];
    void *const x9403 = apply_prim_min(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9402))[0])(
        kont9402, x9403);
  }
}

inline void expt_fptr() // expt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9405 = prim_car(lst);
    void *const lst9407 = prim_cdr(lst);
    void *const x9406 = apply_prim_expt(lst9407);
    arg_buffer[1] = kont9405;
    arg_buffer[2] = x9406;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9405))[0])();
  } else {
    void *const kont9405 = arg_buffer[2];
    void *const x9406 = apply_prim_expt(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9405))[0])(
        kont9405, x9406);
  }
}

inline void sqrt_fptr() // sqrt
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9408 = prim_car(lst);
    void *const lst9410 = prim_cdr(lst);
    void *const x9409 = apply_prim_sqrt(lst9410);
    arg_buffer[1] = kont9408;
    arg_buffer[2] = x9409;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9408))[0])();
  } else {
    void *const kont9408 = arg_buffer[2];
    void *const x9409 = apply_prim_sqrt(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9408))[0])(
        kont9408, x9409);
  }
}

inline void remainder_fptr() // remainder
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9411 = prim_car(lst);
    void *const lst9413 = prim_cdr(lst);
    void *const x9412 = apply_prim_remainder(lst9413);
    arg_buffer[1] = kont9411;
    arg_buffer[2] = x9412;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9411))[0])();
  } else {
    void *const kont9411 = arg_buffer[2];
    void *const x9412 = apply_prim_remainder(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9411))[0])(
        kont9411, x9412);
  }
}

inline void quotient_fptr() // quotient
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9414 = prim_car(lst);
    void *const lst9416 = prim_cdr(lst);
    void *const x9415 = apply_prim_quotient(lst9416);
    arg_buffer[1] = kont9414;
    arg_buffer[2] = x9415;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9414))[0])();
  } else {
    void *const kont9414 = arg_buffer[2];
    void *const x9415 = apply_prim_quotient(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9414))[0])(
        kont9414, x9415);
  }
}

inline void random_fptr() // random
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9417 = prim_car(lst);
    void *const lst9419 = prim_cdr(lst);
    void *const x9418 = apply_prim_random(lst9419);
    arg_buffer[1] = kont9417;
    arg_buffer[2] = x9418;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9417))[0])();
  } else {
    void *const kont9417 = arg_buffer[2];
    void *const x9418 = apply_prim_random(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9417))[0])(
        kont9417, x9418);
  }
}

inline void symbol_u63_fptr() // symbol?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9420 = prim_car(lst);
    void *const lst9422 = prim_cdr(lst);
    void *const x9421 = apply_prim_symbol_u63(lst9422);
    arg_buffer[1] = kont9420;
    arg_buffer[2] = x9421;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9420))[0])();
  } else {
    void *const kont9420 = arg_buffer[2];
    void *const x9421 = apply_prim_symbol_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9420))[0])(
        kont9420, x9421);
  }
}

inline void pair_u63_fptr() // pair?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9423 = prim_car(lst);
    void *const lst9425 = prim_cdr(lst);
    void *const x9424 = apply_prim_pair_u63(lst9425);
    arg_buffer[1] = kont9423;
    arg_buffer[2] = x9424;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9423))[0])();
  } else {
    void *const kont9423 = arg_buffer[2];
    void *const x9424 = apply_prim_pair_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9423))[0])(
        kont9423, x9424);
  }
}

inline void positive_u63_fptr() // positive?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9426 = prim_car(lst);
    void *const lst9428 = prim_cdr(lst);
    void *const x9427 = apply_prim_positive_u63(lst9428);
    arg_buffer[1] = kont9426;
    arg_buffer[2] = x9427;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9426))[0])();
  } else {
    void *const kont9426 = arg_buffer[2];
    void *const x9427 = apply_prim_positive_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9426))[0])(
        kont9426, x9427);
  }
}

inline void negative_u63_fptr() // negative?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9429 = prim_car(lst);
    void *const lst9431 = prim_cdr(lst);
    void *const x9430 = apply_prim_negative_u63(lst9431);
    arg_buffer[1] = kont9429;
    arg_buffer[2] = x9430;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9429))[0])();
  } else {
    void *const kont9429 = arg_buffer[2];
    void *const x9430 = apply_prim_negative_u63(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9429))[0])(
        kont9429, x9430);
  }
}

inline void list_fptr() // list
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9432 = prim_car(lst);
    void *const lst9434 = prim_cdr(lst);
    void *const x9433 = apply_prim_list(lst9434);
    arg_buffer[1] = kont9432;
    arg_buffer[2] = x9433;
    numArgs = 2;
    reinterpret_cast<void (*)()>((decode_clo(kont9432))[0])();
  } else {
    void *const kont9432 = arg_buffer[2];
    void *const x9433 = apply_prim_list(arg_buffer);
    reinterpret_cast<void (*)(void *, void *)>((decode_clo(kont9432))[0])(
        kont9432, x9433);
  }
}

inline void even_u63_fptr() // even? -> generic version
{
  // reading env and args
  void *const kont9015 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9015)[0])(
      kont9015,
      apply_prim_equal_u63_2(int9211, apply_prim_modulo_2(x, int9187)));
}

inline void even_u63_spec(void *_9079, void *kont9015, void *x) // even?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9015)[0])(
      kont9015,
      apply_prim_equal_u63_2(int9211, apply_prim_modulo_2(x, int9187)));
}

inline void odd_u63_fptr() // odd? -> generic version
{
  // reading env and args
  void *const kont9016 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9016)[0])(
      kont9016,
      apply_prim_equal_u63_2(int9210, apply_prim_modulo_2(x, int9187)));
}

inline void odd_u63_spec(void *_9080, void *kont9016, void *x) // odd?
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9016)[0])(
      kont9016,
      apply_prim_equal_u63_2(int9210, apply_prim_modulo_2(x, int9187)));
}

inline void list_u45ref_fptr() // list-ref -> generic version
{
  // reading env and args
  void *const kont9017 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int9211, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9017)[0])(
        kont9017, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont9017, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int9210));
  }
}

inline void list_u45ref_spec(void *_9081, void *kont9017, void *lst,
                             void *n) // list-ref
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(int9211, n))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9017)[0])(
        kont9017, apply_prim_car_1(lst));
  } else {

    // clo-app
    list_u45ref_spec(list_u45ref, kont9017, apply_prim_cdr_1(lst),
                     apply_prim__u45_2(n, int9210));
  }
}

inline void lam9082_fptr() // lam9082 -> generic version
{
  // reading env
  void *const env9083 = arg_buffer[1];
  // reading env and args
  void *const id_8745 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9083);

  // if-clause
  if (is_true(id_8745)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9207);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[2], apply_prim_car_1(decode_clo_array[3])))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(
          decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
    } else {

      // clo-app
      member_spec(member, decode_clo_array[1], decode_clo_array[2],
                  apply_prim_cdr_1(decode_clo_array[3]));
    }
  }
}

inline void lam9082_spec(void *env9083, void *id_8745) // lam9082
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9083);

  // if-clause
  if (is_true(id_8745)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9207);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(
            decode_clo_array[2], apply_prim_car_1(decode_clo_array[3])))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(
          decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
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
  void *const kont9018 = arg_buffer[2];
  void *const item = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9435 = alloc_kont(lam9082_spec, 3);

  // setting env list
  clo9435[1] = kont9018;
  clo9435[2] = item;
  clo9435[3] = lst;
  void *f_lam_9019 = encode_clo(clo9435);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    lam9082_spec(f_lam_9019, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    lam9082_spec(f_lam_9019, apply_prim_null_u63_1(lst));
  }
}

inline void member_spec(void *_9084, void *kont9018, void *item,
                        void *lst) // member
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9436 = alloc_kont(lam9082_spec, 3);

  // setting env list
  clo9436[1] = kont9018;
  clo9436[2] = item;
  clo9436[3] = lst;
  void *f_lam_9019 = encode_clo(clo9436);

  // if-clause
  if (is_true(apply_prim_null_u63_1(item))) {
    // kont-clo-app case
    lam9082_spec(f_lam_9019, apply_prim_null_u63_1(item));
  } else {
    // kont-clo-app case
    lam9082_spec(f_lam_9019, apply_prim_null_u63_1(lst));
  }
}

inline void member_u63_fptr() // member? -> generic version
{
  // reading env and args
  void *const kont9020 = arg_buffer[2];
  void *const x = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9020)[0])(
        kont9020, bool_f9207);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9020)[0])(
          kont9020, bool_t9203);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont9020, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void member_u63_spec(void *_9085, void *kont9020, void *x,
                            void *lst) // member?
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9020)[0])(
        kont9020, bool_f9207);
  } else {

    // if-clause
    if (is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x))) {
      // kont-clo-app case
      reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9020)[0])(
          kont9020, bool_t9203);
    } else {

      // clo-app
      member_u63_spec(member_u63, kont9020, x, apply_prim_cdr_1(lst));
    }
  }
}

inline void lam9086_fptr() // lam9086 -> generic version
{
  // reading env
  void *const env9087 = arg_buffer[1];
  // reading env and args
  void *const id_8760 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9087);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void lam9086_spec(void *env9087, void *id_8760) // lam9086
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9087);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void length_fptr() // length -> generic version
{
  // reading env and args
  void *const kont9021 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9021)[0])(
        kont9021, int9211);
  } else {

    // creating new make-kont closure
    void **clo9437 = alloc_kont(lam9086_spec, 2);

    // setting env list
    clo9437[1] = kont9021;
    clo9437[2] = int9210;
    void *f_lam_9022 = encode_clo(clo9437);

    // clo-app
    length_spec(length, f_lam_9022, apply_prim_cdr_1(lst));
  }
}

inline void length_spec(void *_9088, void *kont9021, void *lst) // length
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9021)[0])(
        kont9021, int9211);
  } else {

    // creating new make-kont closure
    void **clo9438 = alloc_kont(lam9086_spec, 2);

    // setting env list
    clo9438[1] = kont9021;
    clo9438[2] = int9210;
    void *f_lam_9022 = encode_clo(clo9438);

    // clo-app
    length_spec(length, f_lam_9022, apply_prim_cdr_1(lst));
  }
}

inline void lam9089_fptr() // lam9089 -> generic version
{
  // reading env
  void *const env9090 = arg_buffer[1];
  // reading env and args
  void *const id_8766 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9090);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam9089_spec(void *env9090, void *id_8766) // lam9089
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9090);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam9091_fptr() // lam9091 -> generic version
{
  // reading env
  void *const env9092 = arg_buffer[1];
  // reading env and args
  void *const id_8764 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9092);

  // creating new make-kont closure
  void **clo9439 = alloc_kont(lam9089_spec, 2);

  // setting env list
  clo9439[1] = decode_clo_array[1];
  clo9439[2] = id_8764;
  void *f_lam_9024 = encode_clo(clo9439);

  // clo-app
  map_spec(map, f_lam_9024, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam9091_spec(void *env9092, void *id_8764) // lam9091
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9092);

  // creating new make-kont closure
  void **clo9440 = alloc_kont(lam9089_spec, 2);

  // setting env list
  clo9440[1] = decode_clo_array[1];
  clo9440[2] = id_8764;
  void *f_lam_9024 = encode_clo(clo9440);

  // clo-app
  map_spec(map, f_lam_9024, decode_clo_array[2],
           apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version
{
  // reading env and args
  void *const kont9023 = arg_buffer[2];
  void *const proc = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9023)[0])(
        kont9023, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9441 = alloc_kont(lam9091_spec, 3);

    // setting env list
    clo9441[1] = kont9023;
    clo9441[2] = proc;
    clo9441[3] = lst;
    void *f_lam_9025 = encode_clo(clo9441);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_9025;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void map_spec(void *_9093, void *kont9023, void *proc, void *lst) // map
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9023)[0])(
        kont9023, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9442 = alloc_kont(lam9091_spec, 3);

    // setting env list
    clo9442[1] = kont9023;
    clo9442[2] = proc;
    clo9442[3] = lst;
    void *f_lam_9025 = encode_clo(clo9442);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f_lam_9025;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
  }
}

inline void lam9094_fptr() // lam9094 -> generic version
{
  // reading env
  void *const env9095 = arg_buffer[1];
  // reading env and args
  void *const id_8773 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9095);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8773));
}

inline void lam9094_spec(void *env9095, void *id_8773) // lam9094
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9095);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8773));
}

inline void lam9096_fptr() // lam9096 -> generic version
{
  // reading env
  void *const env9097 = arg_buffer[1];
  // reading env and args
  void *const id_8770 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9097);

  // if-clause
  if (is_true(id_8770)) {

    // creating new make-kont closure
    void **clo9443 = alloc_kont(lam9094_spec, 2);

    // setting env list
    clo9443[1] = apply_prim_car_1(decode_clo_array[2]);
    clo9443[2] = decode_clo_array[3];
    void *f_lam_9027 = encode_clo(clo9443);

    // clo-app
    filter_spec(filter, f_lam_9027, decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[2]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[3], decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[2]));
  }
}

inline void lam9096_spec(void *env9097, void *id_8770) // lam9096
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9097);

  // if-clause
  if (is_true(id_8770)) {

    // creating new make-kont closure
    void **clo9444 = alloc_kont(lam9094_spec, 2);

    // setting env list
    clo9444[1] = apply_prim_car_1(decode_clo_array[2]);
    clo9444[2] = decode_clo_array[3];
    void *f_lam_9027 = encode_clo(clo9444);

    // clo-app
    filter_spec(filter, f_lam_9027, decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[2]));
  } else {

    // clo-app
    filter_spec(filter, decode_clo_array[3], decode_clo_array[1],
                apply_prim_cdr_1(decode_clo_array[2]));
  }
}

inline void filter_fptr() // filter -> generic version
{
  // reading env and args
  void *const kont9026 = arg_buffer[2];
  void *const op = arg_buffer[3];
  void *const lst = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9026)[0])(
        kont9026, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9445 = alloc_kont(lam9096_spec, 3);

    // setting env list
    clo9445[1] = op;
    clo9445[2] = lst;
    clo9445[3] = kont9026;
    void *f_lam_9028 = encode_clo(clo9445);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_9028;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void filter_spec(void *_9098, void *kont9026, void *op,
                        void *lst) // filter
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9026)[0])(
        kont9026, apply_prim_list_0());
  } else {

    // creating new make-kont closure
    void **clo9446 = alloc_kont(lam9096_spec, 3);

    // setting env list
    clo9446[1] = op;
    clo9446[2] = lst;
    clo9446[3] = kont9026;
    void *f_lam_9028 = encode_clo(clo9446);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f_lam_9028;
    arg_buffer[3] = apply_prim_car_1(lst);
    numArgs = 3;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(op))[0])();
  }
}

inline void drop_fptr() // drop -> generic version
{
  // reading env and args
  void *const kont9029 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9211))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9029)[0])(
        kont9029, lst);
  } else {

    // clo-app
    drop_spec(drop, kont9029, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int9210));
  }
}

inline void drop_spec(void *_9099, void *kont9029, void *lst, void *n) // drop
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9211))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9029)[0])(
        kont9029, lst);
  } else {

    // clo-app
    drop_spec(drop, kont9029, apply_prim_cdr_1(lst),
              apply_prim__u45_2(n, int9210));
  }
}

inline void lam9100_fptr() // lam9100 -> generic version
{
  // reading env
  void *const env9101 = arg_buffer[1];
  // reading env and args
  void *const id_8782 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9101);

  // clo-app
  foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8782,
             apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam9100_spec(void *env9101, void *id_8782) // lam9100
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9101);

  // clo-app
  foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8782,
             apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version
{
  // reading env and args
  void *const kont9030 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9030)[0])(
        kont9030, acc);
  } else {

    // creating new make-kont closure
    void **clo9447 = alloc_kont(lam9100_spec, 3);

    // setting env list
    clo9447[1] = fun;
    clo9447[2] = kont9030;
    clo9447[3] = lst;
    void *f_lam_9031 = encode_clo(clo9447);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_9031;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = 4;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void foldl_spec(void *_9102, void *kont9030, void *fun, void *acc,
                       void *lst) // foldl
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9030)[0])(
        kont9030, acc);
  } else {

    // creating new make-kont closure
    void **clo9448 = alloc_kont(lam9100_spec, 3);

    // setting env list
    clo9448[1] = fun;
    clo9448[2] = kont9030;
    clo9448[3] = lst;
    void *f_lam_9031 = encode_clo(clo9448);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f_lam_9031;
    arg_buffer[3] = apply_prim_car_1(lst);
    arg_buffer[4] = acc;
    numArgs = 4;
    // generic else-case
    reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
  }
}

inline void lam9103_fptr() // lam9103 -> generic version
{
  // reading env
  void *const env9104 = arg_buffer[1];
  // reading env and args
  void *const id_8787 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9104);

  // clo-app
  arg_buffer[1] = decode_clo_array[1];
  arg_buffer[2] = decode_clo_array[2];
  arg_buffer[3] = decode_clo_array[3];
  arg_buffer[4] = id_8787;
  numArgs = 4;
  // generic else-case
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9103_spec(void *env9104, void *id_8787) // lam9103
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9104);

  // clo-app
  arg_buffer[1] = decode_clo_array[1];
  arg_buffer[2] = decode_clo_array[2];
  arg_buffer[3] = decode_clo_array[3];
  arg_buffer[4] = id_8787;
  numArgs = 4;
  // generic else-case
  reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version
{
  // reading env and args
  void *const kont9032 = arg_buffer[2];
  void *const fun = arg_buffer[3];
  void *const acc = arg_buffer[4];
  void *const lst = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9032)[0])(
        kont9032, acc);
  } else {

    // creating new make-kont closure
    void **clo9449 = alloc_kont(lam9103_spec, 3);

    // setting env list
    clo9449[1] = fun;
    clo9449[2] = kont9032;
    clo9449[3] = apply_prim_car_1(lst);
    void *f_lam_9033 = encode_clo(clo9449);

    // clo-app
    foldr_spec(foldr, f_lam_9033, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void foldr_spec(void *_9105, void *kont9032, void *fun, void *acc,
                       void *lst) // foldr
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9032)[0])(
        kont9032, acc);
  } else {

    // creating new make-kont closure
    void **clo9450 = alloc_kont(lam9103_spec, 3);

    // setting env list
    clo9450[1] = fun;
    clo9450[2] = kont9032;
    clo9450[3] = apply_prim_car_1(lst);
    void *f_lam_9033 = encode_clo(clo9450);

    // clo-app
    foldr_spec(foldr, f_lam_9033, fun, acc, apply_prim_cdr_1(lst));
  }
}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version
{
  // reading env and args
  void *const kont9034 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const lst2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9034)[0])(
        kont9034, lst2);
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont9034, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_u45helper_spec(void *_9106, void *kont9034, void *lst,
                                   void *lst2) // reverse-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lst))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9034)[0])(
        kont9034, lst2);
  } else {

    // clo-app
    reverse_u45helper_spec(reverse_u45helper, kont9034, apply_prim_cdr_1(lst),
                           apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void reverse_fptr() // reverse -> generic version
{
  // reading env and args
  void *const kont9035 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont9035, lst, apply_prim_list_0());
}

inline void reverse_spec(void *_9107, void *kont9035, void *lst) // reverse
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  reverse_u45helper_spec(reverse_u45helper, kont9035, lst, apply_prim_list_0());
}

inline void lam9108_fptr() // lam9108 -> generic version
{
  // reading env
  void *const env9109 = arg_buffer[1];
  // reading env and args
  void *const id_8796 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9109);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void lam9108_spec(void *env9109, void *id_8796) // lam9108
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9109);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void append1_fptr() // append1 -> generic version
{
  // reading env and args
  void *const kont9036 = arg_buffer[2];
  void *const lhs = arg_buffer[3];
  void *const rhs = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9036)[0])(
        kont9036, rhs);
  } else {

    // creating new make-kont closure
    void **clo9451 = alloc_kont(lam9108_spec, 2);

    // setting env list
    clo9451[1] = kont9036;
    clo9451[2] = apply_prim_car_1(lhs);
    void *f_lam_9037 = encode_clo(clo9451);

    // clo-app
    append1_spec(append1, f_lam_9037, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void append1_spec(void *_9110, void *kont9036, void *lhs,
                         void *rhs) // append1
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim_null_u63_1(lhs))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9036)[0])(
        kont9036, rhs);
  } else {

    // creating new make-kont closure
    void **clo9452 = alloc_kont(lam9108_spec, 2);

    // setting env list
    clo9452[1] = kont9036;
    clo9452[2] = apply_prim_car_1(lhs);
    void *f_lam_9037 = encode_clo(clo9452);

    // clo-app
    append1_spec(append1, f_lam_9037, apply_prim_cdr_1(lhs), rhs);
  }
}

inline void lam9111_fptr() // lam9111 -> generic version
{
  // reading env
  void *const env9112 = arg_buffer[1];
  // reading env and args
  void *const id_8803 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9112);

  // clo-app
  foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam9111_spec(void *env9112, void *id_8803) // lam9111
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9112);

  // clo-app
  foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam9113_fptr() // lam9113 -> generic version
{
  // reading env
  void *const env9114 = arg_buffer[1];
  // reading env and args
  void *const id_8798 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9114);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[3], id_8798))) {

    // clo-app
    append1_spec(append1, decode_clo_array[2], decode_clo_array[1],
                 apply_prim_car_1(decode_clo_array[4]));
  } else {

    // creating new make-kont closure
    void **clo9453 = alloc_kont(lam9111_spec, 2);

    // setting env list
    clo9453[1] = decode_clo_array[2];
    clo9453[2] = apply_prim_list_0();
    void *f_lam_9039 = encode_clo(clo9453);

    // clo-app
    append1_spec(append1, f_lam_9039, apply_prim_list_1(decode_clo_array[1]),
                 decode_clo_array[4]);
  }
}

inline void lam9113_spec(void *env9114, void *id_8798) // lam9113
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9114);

  // if-clause
  if (is_true(apply_prim__u61_2(decode_clo_array[3], id_8798))) {

    // clo-app
    append1_spec(append1, decode_clo_array[2], decode_clo_array[1],
                 apply_prim_car_1(decode_clo_array[4]));
  } else {

    // creating new make-kont closure
    void **clo9454 = alloc_kont(lam9111_spec, 2);

    // setting env list
    clo9454[1] = decode_clo_array[2];
    clo9454[2] = apply_prim_list_0();
    void *f_lam_9039 = encode_clo(clo9454);

    // clo-app
    append1_spec(append1, f_lam_9039, apply_prim_list_1(decode_clo_array[1]),
                 decode_clo_array[4]);
  }
}

inline void lam9115_fptr() // lam9115 -> generic version
{
  // reading env
  void *const env9116 = arg_buffer[1];
  // reading env and args
  void *const x = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9116);

  // creating new make-kont closure
  void **clo9455 = alloc_kont(lam9113_spec, 4);

  // setting env list
  clo9455[1] = decode_clo_array[1];
  clo9455[2] = decode_clo_array[2];
  clo9455[3] = int9210;
  clo9455[4] = x;
  void *f_lam_9040 = encode_clo(clo9455);

  // clo-app
  length_spec(length, f_lam_9040, x);
}

inline void lam9115_spec(void *env9116, void *x) // lam9115
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9116);

  // creating new make-kont closure
  void **clo9456 = alloc_kont(lam9113_spec, 4);

  // setting env list
  clo9456[1] = decode_clo_array[1];
  clo9456[2] = decode_clo_array[2];
  clo9456[3] = int9210;
  clo9456[4] = x;
  void *f_lam_9040 = encode_clo(clo9456);

  // clo-app
  length_spec(length, f_lam_9040, x);
}

void append_fptr() // append
{
  // reading env
  void *const _9117 = arg_buffer[1];
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
  void **clo9457 = alloc_kont(lam9115_spec, 2);

  // setting env list
  clo9457[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
  clo9457[2] = apply_prim_car_1(vargs);
  void *f_lam_9041 = encode_clo(clo9457);

  // kont-clo-app case
  lam9115_spec(f_lam_9041, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam9118_fptr() // lam9118 -> generic version
{
  // reading env
  void *const env9119 = arg_buffer[1];
  // reading env and args
  void *const xy8806 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9119);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void lam9118_spec(void *env9119, void *xy8806) // lam9118
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9119);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version
{
  // reading env and args
  void *const kont9042 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  void *const lst2 = arg_buffer[5];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9211))) {

    // creating new make-kont closure
    void **clo9458 = alloc_kont(lam9118_spec, 1);

    // setting env list
    clo9458[1] = kont9042;
    void *f_lam_9043 = encode_clo(clo9458);

    // clo-app
    reverse_spec(reverse, f_lam_9043, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont9042, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int9210),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_u45helper_spec(void *_9120, void *kont9042, void *lst, void *n,
                                void *lst2) // take-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u61_2(n, int9211))) {

    // creating new make-kont closure
    void **clo9459 = alloc_kont(lam9118_spec, 1);

    // setting env list
    clo9459[1] = kont9042;
    void *f_lam_9043 = encode_clo(clo9459);

    // clo-app
    reverse_spec(reverse, f_lam_9043, lst2);
  } else {

    // clo-app
    take_u45helper_spec(take_u45helper, kont9042, apply_prim_cdr_1(lst),
                        apply_prim__u45_2(n, int9210),
                        apply_prim_cons_2(apply_prim_car_1(lst), lst2));
  }
}

inline void take_fptr() // take -> generic version
{
  // reading env and args
  void *const kont9044 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const n = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont9044, lst, n, apply_prim_list_0());
}

inline void take_spec(void *_9121, void *kont9044, void *lst, void *n) // take
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // clo-app
  take_u45helper_spec(take_u45helper, kont9044, lst, n, apply_prim_list_0());
}

inline void lam9122_fptr() // lam9122 -> generic version
{
  // reading env
  void *const env9123 = arg_buffer[1];
  // reading env and args
  void *const id_8817 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9123);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_2(id_8817, decode_clo_array[1]));
}

inline void lam9122_spec(void *env9123, void *id_8817) // lam9122
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9123);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_2(id_8817, decode_clo_array[1]));
}

inline void lam9124_fptr() // lam9124 -> generic version
{
  // reading env
  void *const env9125 = arg_buffer[1];
  // reading env and args
  void *const id_8818 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9125);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_u61_2(decode_clo_array[1], id_8818));
}

inline void lam9124_spec(void *env9125, void *id_8818) // lam9124
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9125);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_u61_2(decode_clo_array[1], id_8818));
}

inline void lam9126_fptr() // lam9126 -> generic version
{
  // reading env
  void *const env9127 = arg_buffer[1];
  // reading env and args
  void *const id_8822 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9127);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_2(id_8822, decode_clo_array[1]));
}

inline void lam9126_spec(void *env9127, void *id_8822) // lam9126
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9127);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_2(id_8822, decode_clo_array[1]));
}

inline void lam9128_fptr() // lam9128 -> generic version
{
  // reading env
  void *const env9129 = arg_buffer[1];
  // reading env and args
  void *const id_8823 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9129);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_u61_2(decode_clo_array[1], id_8823));
}

inline void lam9128_spec(void *env9129, void *id_8823) // lam9128
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9129);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_u61_2(decode_clo_array[1], id_8823));
}

inline void lam9130_fptr() // lam9130 -> generic version
{
  // reading env
  void *const env9131 = arg_buffer[1];
  // reading env and args
  void *const id_8820 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9131);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8820, decode_clo_array[2]))) {

    // creating new make-kont closure
    void **clo9460 = alloc_kont(lam9126_spec, 2);

    // setting env list
    clo9460[1] = decode_clo_array[2];
    clo9460[2] = decode_clo_array[5];
    void *f_lam_9062 = encode_clo(clo9460);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9062, decode_clo_array[3],
                     decode_clo_array[4]);
  } else {

    // creating new make-kont closure
    void **clo9461 = alloc_kont(lam9128_spec, 2);

    // setting env list
    clo9461[1] = decode_clo_array[2];
    clo9461[2] = decode_clo_array[5];
    void *f_lam_9063 = encode_clo(clo9461);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9063, decode_clo_array[3],
                     decode_clo_array[1]);
  }
}

inline void lam9130_spec(void *env9131, void *id_8820) // lam9130
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9131);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8820, decode_clo_array[2]))) {

    // creating new make-kont closure
    void **clo9462 = alloc_kont(lam9126_spec, 2);

    // setting env list
    clo9462[1] = decode_clo_array[2];
    clo9462[2] = decode_clo_array[5];
    void *f_lam_9062 = encode_clo(clo9462);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9062, decode_clo_array[3],
                     decode_clo_array[4]);
  } else {

    // creating new make-kont closure
    void **clo9463 = alloc_kont(lam9128_spec, 2);

    // setting env list
    clo9463[1] = decode_clo_array[2];
    clo9463[2] = decode_clo_array[5];
    void *f_lam_9063 = encode_clo(clo9463);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9063, decode_clo_array[3],
                     decode_clo_array[1]);
  }
}

inline void lam9132_fptr() // lam9132 -> generic version
{
  // reading env
  void *const env9133 = arg_buffer[1];
  // reading env and args
  void *const id_8828 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9133);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim__u62_2(id_8828, decode_clo_array[2]));
}

inline void lam9132_spec(void *env9133, void *id_8828) // lam9132
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9133);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim__u62_2(id_8828, decode_clo_array[2]));
}

inline void lam9134_fptr() // lam9134 -> generic version
{
  // reading env
  void *const env9135 = arg_buffer[1];
  // reading env and args
  void *const id_8829 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9135);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim__u62_u61_2(decode_clo_array[2], id_8829));
}

inline void lam9134_spec(void *env9135, void *id_8829) // lam9134
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9135);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[1])[0])(
      decode_clo_array[1], apply_prim__u62_u61_2(decode_clo_array[2], id_8829));
}

inline void lam9136_fptr() // lam9136 -> generic version
{
  // reading env
  void *const env9137 = arg_buffer[1];
  // reading env and args
  void *const id_8833 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9137);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_2(id_8833, decode_clo_array[1]));
}

inline void lam9136_spec(void *env9137, void *id_8833) // lam9136
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9137);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_2(id_8833, decode_clo_array[1]));
}

inline void lam9138_fptr() // lam9138 -> generic version
{
  // reading env
  void *const env9139 = arg_buffer[1];
  // reading env and args
  void *const id_8834 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9139);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_u61_2(decode_clo_array[1], id_8834));
}

inline void lam9138_spec(void *env9139, void *id_8834) // lam9138
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9139);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[2])[0])(
      decode_clo_array[2], apply_prim__u62_u61_2(decode_clo_array[1], id_8834));
}

inline void lam9140_fptr() // lam9140 -> generic version
{
  // reading env
  void *const env9141 = arg_buffer[1];
  // reading env and args
  void *const id_8831 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9141);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8831, decode_clo_array[2]))) {

    // creating new make-kont closure
    void **clo9464 = alloc_kont(lam9136_spec, 2);

    // setting env list
    clo9464[1] = decode_clo_array[2];
    clo9464[2] = decode_clo_array[5];
    void *f_lam_9048 = encode_clo(clo9464);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9048, decode_clo_array[3],
                     decode_clo_array[4]);
  } else {

    // creating new make-kont closure
    void **clo9465 = alloc_kont(lam9138_spec, 2);

    // setting env list
    clo9465[1] = decode_clo_array[2];
    clo9465[2] = decode_clo_array[5];
    void *f_lam_9049 = encode_clo(clo9465);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9049, decode_clo_array[3],
                     decode_clo_array[1]);
  }
}

inline void lam9140_spec(void *env9141, void *id_8831) // lam9140
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9141);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8831, decode_clo_array[2]))) {

    // creating new make-kont closure
    void **clo9466 = alloc_kont(lam9136_spec, 2);

    // setting env list
    clo9466[1] = decode_clo_array[2];
    clo9466[2] = decode_clo_array[5];
    void *f_lam_9048 = encode_clo(clo9466);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9048, decode_clo_array[3],
                     decode_clo_array[4]);
  } else {

    // creating new make-kont closure
    void **clo9467 = alloc_kont(lam9138_spec, 2);

    // setting env list
    clo9467[1] = decode_clo_array[2];
    clo9467[2] = decode_clo_array[5];
    void *f_lam_9049 = encode_clo(clo9467);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9049, decode_clo_array[3],
                     decode_clo_array[1]);
  }
}

inline void lam9142_fptr() // lam9142 -> generic version
{
  // reading env
  void *const env9143 = arg_buffer[1];
  // reading env and args
  void *const id_8830 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9143);

  // if-clause
  if (is_true(id_8830)) {

    // creating new make-kont closure
    void **clo9468 = alloc_kont(lam9140_spec, 5);

    // setting env list
    clo9468[1] = decode_clo_array[1];
    clo9468[2] = decode_clo_array[2];
    clo9468[3] = decode_clo_array[3];
    clo9468[4] = decode_clo_array[4];
    clo9468[5] = decode_clo_array[5];
    void *f_lam_9050 = encode_clo(clo9468);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9050, decode_clo_array[3],
                     decode_clo_array[4]);
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[5])[0])(decode_clo_array[5], bool_f9207);
  }
}

inline void lam9142_spec(void *env9143, void *id_8830) // lam9142
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9143);

  // if-clause
  if (is_true(id_8830)) {

    // creating new make-kont closure
    void **clo9469 = alloc_kont(lam9140_spec, 5);

    // setting env list
    clo9469[1] = decode_clo_array[1];
    clo9469[2] = decode_clo_array[2];
    clo9469[3] = decode_clo_array[3];
    clo9469[4] = decode_clo_array[4];
    clo9469[5] = decode_clo_array[5];
    void *f_lam_9050 = encode_clo(clo9469);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9050, decode_clo_array[3],
                     decode_clo_array[4]);
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[5])[0])(decode_clo_array[5], bool_f9207);
  }
}

inline void lam9144_fptr() // lam9144 -> generic version
{
  // reading env
  void *const env9145 = arg_buffer[1];
  // reading env and args
  void *const id_8826 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9145);

  // creating new make-kont closure
  void **clo9470 = alloc_kont(lam9142_spec, 5);

  // setting env list
  clo9470[1] = decode_clo_array[1];
  clo9470[2] = decode_clo_array[2];
  clo9470[3] = decode_clo_array[3];
  clo9470[4] = decode_clo_array[4];
  clo9470[5] = decode_clo_array[5];
  void *f_lam_9051 = encode_clo(clo9470);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8826, decode_clo_array[2]))) {

    // creating new make-kont closure
    void **clo9471 = alloc_kont(lam9132_spec, 2);

    // setting env list
    clo9471[1] = f_lam_9051;
    clo9471[2] = decode_clo_array[2];
    void *f_lam_9052 = encode_clo(clo9471);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9052, decode_clo_array[3],
                     decode_clo_array[1]);
  } else {

    // creating new make-kont closure
    void **clo9472 = alloc_kont(lam9134_spec, 2);

    // setting env list
    clo9472[1] = f_lam_9051;
    clo9472[2] = decode_clo_array[2];
    void *f_lam_9053 = encode_clo(clo9472);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9053, decode_clo_array[3],
                     decode_clo_array[4]);
  }
}

inline void lam9144_spec(void *env9145, void *id_8826) // lam9144
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9145);

  // creating new make-kont closure
  void **clo9473 = alloc_kont(lam9142_spec, 5);

  // setting env list
  clo9473[1] = decode_clo_array[1];
  clo9473[2] = decode_clo_array[2];
  clo9473[3] = decode_clo_array[3];
  clo9473[4] = decode_clo_array[4];
  clo9473[5] = decode_clo_array[5];
  void *f_lam_9051 = encode_clo(clo9473);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8826, decode_clo_array[2]))) {

    // creating new make-kont closure
    void **clo9474 = alloc_kont(lam9132_spec, 2);

    // setting env list
    clo9474[1] = f_lam_9051;
    clo9474[2] = decode_clo_array[2];
    void *f_lam_9052 = encode_clo(clo9474);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9052, decode_clo_array[3],
                     decode_clo_array[1]);
  } else {

    // creating new make-kont closure
    void **clo9475 = alloc_kont(lam9134_spec, 2);

    // setting env list
    clo9475[1] = f_lam_9051;
    clo9475[2] = decode_clo_array[2];
    void *f_lam_9053 = encode_clo(clo9475);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9053, decode_clo_array[3],
                     decode_clo_array[4]);
  }
}

inline void lam9146_fptr() // lam9146 -> generic version
{
  // reading env
  void *const env9147 = arg_buffer[1];
  // reading env and args
  void *const id_8844 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9147);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[4])[0])(
      decode_clo_array[4],
      apply_prim__u62_u61_2(
          decode_clo_array[1],
          apply_prim__u43_2(
              decode_clo_array[5],
              apply_prim__u47_2(
                  decode_clo_array[3],
                  apply_prim__u45_2(decode_clo_array[2], id_8844)))));
}

inline void lam9146_spec(void *env9147, void *id_8844) // lam9146
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9147);
  // kont-clo-app case
  reinterpret_cast<void (*)(void *, void *)>(
      decode_clo(decode_clo_array[4])[0])(
      decode_clo_array[4],
      apply_prim__u62_u61_2(
          decode_clo_array[1],
          apply_prim__u43_2(
              decode_clo_array[5],
              apply_prim__u47_2(
                  decode_clo_array[3],
                  apply_prim__u45_2(decode_clo_array[2], id_8844)))));
}

inline void lam9148_fptr() // lam9148 -> generic version
{
  // reading env
  void *const env9149 = arg_buffer[1];
  // reading env and args
  void *const id_8843 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9149);

  // creating new make-kont closure
  void **clo9476 = alloc_kont(lam9146_spec, 5);

  // setting env list
  clo9476[1] = decode_clo_array[2];
  clo9476[2] = id_8843;
  clo9476[3] = decode_clo_array[4];
  clo9476[4] = decode_clo_array[5];
  clo9476[5] = decode_clo_array[6];
  void *f_lam_9055 = encode_clo(clo9476);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9055, decode_clo_array[1],
                   decode_clo_array[3]);
}

inline void lam9148_spec(void *env9149, void *id_8843) // lam9148
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9149);

  // creating new make-kont closure
  void **clo9477 = alloc_kont(lam9146_spec, 5);

  // setting env list
  clo9477[1] = decode_clo_array[2];
  clo9477[2] = id_8843;
  clo9477[3] = decode_clo_array[4];
  clo9477[4] = decode_clo_array[5];
  clo9477[5] = decode_clo_array[6];
  void *f_lam_9055 = encode_clo(clo9477);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9055, decode_clo_array[1],
                   decode_clo_array[3]);
}

inline void lam9150_fptr() // lam9150 -> generic version
{
  // reading env
  void *const env9151 = arg_buffer[1];
  // reading env and args
  void *const id_8840 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9151);

  // creating new make-kont closure
  void **clo9478 = alloc_kont(lam9148_spec, 6);

  // setting env list
  clo9478[1] = decode_clo_array[1];
  clo9478[2] = decode_clo_array[2];
  clo9478[3] = decode_clo_array[3];
  clo9478[4] = apply_prim__u42_2(
      decode_clo_array[5], apply_prim__u45_2(decode_clo_array[4], id_8840));
  clo9478[5] = decode_clo_array[6];
  clo9478[6] = decode_clo_array[8];
  void *f_lam_9056 = encode_clo(clo9478);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9056, decode_clo_array[1],
                   decode_clo_array[7]);
}

inline void lam9150_spec(void *env9151, void *id_8840) // lam9150
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9151);

  // creating new make-kont closure
  void **clo9479 = alloc_kont(lam9148_spec, 6);

  // setting env list
  clo9479[1] = decode_clo_array[1];
  clo9479[2] = decode_clo_array[2];
  clo9479[3] = decode_clo_array[3];
  clo9479[4] = apply_prim__u42_2(
      decode_clo_array[5], apply_prim__u45_2(decode_clo_array[4], id_8840));
  clo9479[5] = decode_clo_array[6];
  clo9479[6] = decode_clo_array[8];
  void *f_lam_9056 = encode_clo(clo9479);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9056, decode_clo_array[1],
                   decode_clo_array[7]);
}

inline void lam9152_fptr() // lam9152 -> generic version
{
  // reading env
  void *const env9153 = arg_buffer[1];
  // reading env and args
  void *const id_8838 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9153);

  // creating new make-kont closure
  void **clo9480 = alloc_kont(lam9150_spec, 8);

  // setting env list
  clo9480[1] = decode_clo_array[1];
  clo9480[2] = decode_clo_array[2];
  clo9480[3] = decode_clo_array[3];
  clo9480[4] = decode_clo_array[4];
  clo9480[5] = apply_prim__u45_2(decode_clo_array[7], id_8838);
  clo9480[6] = decode_clo_array[6];
  clo9480[7] = decode_clo_array[5];
  clo9480[8] = decode_clo_array[8];
  void *f_lam_9057 = encode_clo(clo9480);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9057, decode_clo_array[1],
                   decode_clo_array[3]);
}

inline void lam9152_spec(void *env9153, void *id_8838) // lam9152
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9153);

  // creating new make-kont closure
  void **clo9481 = alloc_kont(lam9150_spec, 8);

  // setting env list
  clo9481[1] = decode_clo_array[1];
  clo9481[2] = decode_clo_array[2];
  clo9481[3] = decode_clo_array[3];
  clo9481[4] = decode_clo_array[4];
  clo9481[5] = apply_prim__u45_2(decode_clo_array[7], id_8838);
  clo9481[6] = decode_clo_array[6];
  clo9481[7] = decode_clo_array[5];
  clo9481[8] = decode_clo_array[8];
  void *f_lam_9057 = encode_clo(clo9481);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9057, decode_clo_array[1],
                   decode_clo_array[3]);
}

inline void lam9154_fptr() // lam9154 -> generic version
{
  // reading env
  void *const env9155 = arg_buffer[1];
  // reading env and args
  void *const id_8837 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9155);

  // creating new make-kont closure
  void **clo9482 = alloc_kont(lam9152_spec, 8);

  // setting env list
  clo9482[1] = decode_clo_array[1];
  clo9482[2] = decode_clo_array[2];
  clo9482[3] = decode_clo_array[3];
  clo9482[4] = decode_clo_array[4];
  clo9482[5] = decode_clo_array[5];
  clo9482[6] = decode_clo_array[7];
  clo9482[7] = id_8837;
  clo9482[8] = decode_clo_array[8];
  void *f_lam_9058 = encode_clo(clo9482);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9058, decode_clo_array[6],
                   decode_clo_array[3]);
}

inline void lam9154_spec(void *env9155, void *id_8837) // lam9154
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9155);

  // creating new make-kont closure
  void **clo9483 = alloc_kont(lam9152_spec, 8);

  // setting env list
  clo9483[1] = decode_clo_array[1];
  clo9483[2] = decode_clo_array[2];
  clo9483[3] = decode_clo_array[3];
  clo9483[4] = decode_clo_array[4];
  clo9483[5] = decode_clo_array[5];
  clo9483[6] = decode_clo_array[7];
  clo9483[7] = id_8837;
  clo9483[8] = decode_clo_array[8];
  void *f_lam_9058 = encode_clo(clo9483);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9058, decode_clo_array[6],
                   decode_clo_array[3]);
}

inline void lam9156_fptr() // lam9156 -> generic version
{
  // reading env
  void *const env9157 = arg_buffer[1];
  // reading env and args
  void *const id_8836 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9157);

  // creating new make-kont closure
  void **clo9484 = alloc_kont(lam9154_spec, 8);

  // setting env list
  clo9484[1] = decode_clo_array[1];
  clo9484[2] = decode_clo_array[2];
  clo9484[3] = decode_clo_array[3];
  clo9484[4] = decode_clo_array[4];
  clo9484[5] = decode_clo_array[5];
  clo9484[6] = decode_clo_array[6];
  clo9484[7] = decode_clo_array[7];
  clo9484[8] = id_8836;
  void *f_lam_9059 = encode_clo(clo9484);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9059, decode_clo_array[6],
                   decode_clo_array[5]);
}

inline void lam9156_spec(void *env9157, void *id_8836) // lam9156
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9157);

  // creating new make-kont closure
  void **clo9485 = alloc_kont(lam9154_spec, 8);

  // setting env list
  clo9485[1] = decode_clo_array[1];
  clo9485[2] = decode_clo_array[2];
  clo9485[3] = decode_clo_array[3];
  clo9485[4] = decode_clo_array[4];
  clo9485[5] = decode_clo_array[5];
  clo9485[6] = decode_clo_array[6];
  clo9485[7] = decode_clo_array[7];
  clo9485[8] = id_8836;
  void *f_lam_9059 = encode_clo(clo9485);

  // clo-app
  list_u45ref_spec(list_u45ref, f_lam_9059, decode_clo_array[6],
                   decode_clo_array[5]);
}

inline void lam9158_fptr() // lam9158 -> generic version
{
  // reading env
  void *const env9159 = arg_buffer[1];
  // reading env and args
  void *const id_8853 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9159);

  // clo-app
  pt_u45in_u45poly2_u45helper_spec(
      pt_u45in_u45poly2_u45helper, decode_clo_array[6], decode_clo_array[5],
      decode_clo_array[1], decode_clo_array[2], decode_clo_array[4], id_8853,
      apply_prim__u45_2(decode_clo_array[3], int9210), decode_clo_array[3]);
}

inline void lam9158_spec(void *env9159, void *id_8853) // lam9158
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9159);

  // clo-app
  pt_u45in_u45poly2_u45helper_spec(
      pt_u45in_u45poly2_u45helper, decode_clo_array[6], decode_clo_array[5],
      decode_clo_array[1], decode_clo_array[2], decode_clo_array[4], id_8853,
      apply_prim__u45_2(decode_clo_array[3], int9210), decode_clo_array[3]);
}

inline void lam9160_fptr() // lam9160 -> generic version
{
  // reading env
  void *const env9161 = arg_buffer[1];
  // reading env and args
  void *const id_8848 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9161);

  // if-clause
  if (is_true(id_8848)) {

    // clo-app
    pt_u45in_u45poly2_u45helper_spec(
        pt_u45in_u45poly2_u45helper, decode_clo_array[6], decode_clo_array[5],
        decode_clo_array[1], decode_clo_array[2], decode_clo_array[4],
        decode_clo_array[7], apply_prim__u45_2(decode_clo_array[3], int9210),
        decode_clo_array[3]);
  } else {

    // creating new make-kont closure
    void **clo9486 = alloc_kont(lam9158_spec, 6);

    // setting env list
    clo9486[1] = decode_clo_array[1];
    clo9486[2] = decode_clo_array[2];
    clo9486[3] = decode_clo_array[3];
    clo9486[4] = decode_clo_array[4];
    clo9486[5] = decode_clo_array[5];
    clo9486[6] = decode_clo_array[6];
    void *f_lam_9046 = encode_clo(clo9486);

    // if-clause
    if (is_true(decode_clo_array[7])) {
      // kont-clo-app case
      lam9158_spec(f_lam_9046, bool_f9207);
    } else {
      // kont-clo-app case
      lam9158_spec(f_lam_9046, bool_t9203);
    }
  }
}

inline void lam9160_spec(void *env9161, void *id_8848) // lam9160
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9161);

  // if-clause
  if (is_true(id_8848)) {

    // clo-app
    pt_u45in_u45poly2_u45helper_spec(
        pt_u45in_u45poly2_u45helper, decode_clo_array[6], decode_clo_array[5],
        decode_clo_array[1], decode_clo_array[2], decode_clo_array[4],
        decode_clo_array[7], apply_prim__u45_2(decode_clo_array[3], int9210),
        decode_clo_array[3]);
  } else {

    // creating new make-kont closure
    void **clo9487 = alloc_kont(lam9158_spec, 6);

    // setting env list
    clo9487[1] = decode_clo_array[1];
    clo9487[2] = decode_clo_array[2];
    clo9487[3] = decode_clo_array[3];
    clo9487[4] = decode_clo_array[4];
    clo9487[5] = decode_clo_array[5];
    clo9487[6] = decode_clo_array[6];
    void *f_lam_9046 = encode_clo(clo9487);

    // if-clause
    if (is_true(decode_clo_array[7])) {
      // kont-clo-app case
      lam9158_spec(f_lam_9046, bool_f9207);
    } else {
      // kont-clo-app case
      lam9158_spec(f_lam_9046, bool_t9203);
    }
  }
}

inline void lam9162_fptr() // lam9162 -> generic version
{
  // reading env
  void *const env9163 = arg_buffer[1];
  // reading env and args
  void *const id_8825 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9163);

  // creating new make-kont closure
  void **clo9488 = alloc_kont(lam9160_spec, 7);

  // setting env list
  clo9488[1] = decode_clo_array[1];
  clo9488[2] = decode_clo_array[2];
  clo9488[3] = decode_clo_array[3];
  clo9488[4] = decode_clo_array[4];
  clo9488[5] = decode_clo_array[6];
  clo9488[6] = decode_clo_array[7];
  clo9488[7] = decode_clo_array[8];
  void *f_lam_9047 = encode_clo(clo9488);

  // if-clause
  if (is_true(id_8825)) {

    // creating new make-kont closure
    void **clo9489 = alloc_kont(lam9144_spec, 5);

    // setting env list
    clo9489[1] = decode_clo_array[3];
    clo9489[2] = decode_clo_array[4];
    clo9489[3] = decode_clo_array[1];
    clo9489[4] = decode_clo_array[5];
    clo9489[5] = f_lam_9047;
    void *f_lam_9054 = encode_clo(clo9489);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9054, decode_clo_array[1],
                     decode_clo_array[3]);
  } else {

    // creating new make-kont closure
    void **clo9490 = alloc_kont(lam9156_spec, 7);

    // setting env list
    clo9490[1] = decode_clo_array[1];
    clo9490[2] = decode_clo_array[2];
    clo9490[3] = decode_clo_array[3];
    clo9490[4] = decode_clo_array[4];
    clo9490[5] = decode_clo_array[5];
    clo9490[6] = decode_clo_array[6];
    clo9490[7] = f_lam_9047;
    void *f_lam_9060 = encode_clo(clo9490);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9060, decode_clo_array[6],
                     decode_clo_array[3]);
  }
}

inline void lam9162_spec(void *env9163, void *id_8825) // lam9162
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9163);

  // creating new make-kont closure
  void **clo9491 = alloc_kont(lam9160_spec, 7);

  // setting env list
  clo9491[1] = decode_clo_array[1];
  clo9491[2] = decode_clo_array[2];
  clo9491[3] = decode_clo_array[3];
  clo9491[4] = decode_clo_array[4];
  clo9491[5] = decode_clo_array[6];
  clo9491[6] = decode_clo_array[7];
  clo9491[7] = decode_clo_array[8];
  void *f_lam_9047 = encode_clo(clo9491);

  // if-clause
  if (is_true(id_8825)) {

    // creating new make-kont closure
    void **clo9492 = alloc_kont(lam9144_spec, 5);

    // setting env list
    clo9492[1] = decode_clo_array[3];
    clo9492[2] = decode_clo_array[4];
    clo9492[3] = decode_clo_array[1];
    clo9492[4] = decode_clo_array[5];
    clo9492[5] = f_lam_9047;
    void *f_lam_9054 = encode_clo(clo9492);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9054, decode_clo_array[1],
                     decode_clo_array[3]);
  } else {

    // creating new make-kont closure
    void **clo9493 = alloc_kont(lam9156_spec, 7);

    // setting env list
    clo9493[1] = decode_clo_array[1];
    clo9493[2] = decode_clo_array[2];
    clo9493[3] = decode_clo_array[3];
    clo9493[4] = decode_clo_array[4];
    clo9493[5] = decode_clo_array[5];
    clo9493[6] = decode_clo_array[6];
    clo9493[7] = f_lam_9047;
    void *f_lam_9060 = encode_clo(clo9493);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9060, decode_clo_array[6],
                     decode_clo_array[3]);
  }
}

inline void lam9164_fptr() // lam9164 -> generic version
{
  // reading env
  void *const env9165 = arg_buffer[1];
  // reading env and args
  void *const id_8819 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9165);

  // creating new make-kont closure
  void **clo9494 = alloc_kont(lam9162_spec, 8);

  // setting env list
  clo9494[1] = decode_clo_array[1];
  clo9494[2] = decode_clo_array[2];
  clo9494[3] = decode_clo_array[3];
  clo9494[4] = decode_clo_array[4];
  clo9494[5] = decode_clo_array[5];
  clo9494[6] = decode_clo_array[6];
  clo9494[7] = decode_clo_array[7];
  clo9494[8] = decode_clo_array[8];
  void *f_lam_9061 = encode_clo(clo9494);

  // if-clause
  if (is_true(id_8819)) {

    // creating new make-kont closure
    void **clo9495 = alloc_kont(lam9130_spec, 5);

    // setting env list
    clo9495[1] = decode_clo_array[3];
    clo9495[2] = decode_clo_array[4];
    clo9495[3] = decode_clo_array[1];
    clo9495[4] = decode_clo_array[5];
    clo9495[5] = f_lam_9061;
    void *f_lam_9064 = encode_clo(clo9495);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9064, decode_clo_array[1],
                     decode_clo_array[5]);
  } else {
    // kont-clo-app case
    lam9162_spec(f_lam_9061, bool_f9207);
  }
}

inline void lam9164_spec(void *env9165, void *id_8819) // lam9164
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9165);

  // creating new make-kont closure
  void **clo9496 = alloc_kont(lam9162_spec, 8);

  // setting env list
  clo9496[1] = decode_clo_array[1];
  clo9496[2] = decode_clo_array[2];
  clo9496[3] = decode_clo_array[3];
  clo9496[4] = decode_clo_array[4];
  clo9496[5] = decode_clo_array[5];
  clo9496[6] = decode_clo_array[6];
  clo9496[7] = decode_clo_array[7];
  clo9496[8] = decode_clo_array[8];
  void *f_lam_9061 = encode_clo(clo9496);

  // if-clause
  if (is_true(id_8819)) {

    // creating new make-kont closure
    void **clo9497 = alloc_kont(lam9130_spec, 5);

    // setting env list
    clo9497[1] = decode_clo_array[3];
    clo9497[2] = decode_clo_array[4];
    clo9497[3] = decode_clo_array[1];
    clo9497[4] = decode_clo_array[5];
    clo9497[5] = f_lam_9061;
    void *f_lam_9064 = encode_clo(clo9497);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9064, decode_clo_array[1],
                     decode_clo_array[5]);
  } else {
    // kont-clo-app case
    lam9162_spec(f_lam_9061, bool_f9207);
  }
}

inline void lam9166_fptr() // lam9166 -> generic version
{
  // reading env
  void *const env9167 = arg_buffer[1];
  // reading env and args
  void *const id_8815 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9167);

  // creating new make-kont closure
  void **clo9498 = alloc_kont(lam9164_spec, 8);

  // setting env list
  clo9498[1] = decode_clo_array[1];
  clo9498[2] = decode_clo_array[2];
  clo9498[3] = decode_clo_array[3];
  clo9498[4] = decode_clo_array[4];
  clo9498[5] = decode_clo_array[5];
  clo9498[6] = decode_clo_array[6];
  clo9498[7] = decode_clo_array[7];
  clo9498[8] = decode_clo_array[8];
  void *f_lam_9065 = encode_clo(clo9498);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8815, decode_clo_array[4]))) {

    // creating new make-kont closure
    void **clo9499 = alloc_kont(lam9122_spec, 2);

    // setting env list
    clo9499[1] = decode_clo_array[4];
    clo9499[2] = f_lam_9065;
    void *f_lam_9066 = encode_clo(clo9499);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9066, decode_clo_array[1],
                     decode_clo_array[3]);
  } else {

    // creating new make-kont closure
    void **clo9500 = alloc_kont(lam9124_spec, 2);

    // setting env list
    clo9500[1] = decode_clo_array[4];
    clo9500[2] = f_lam_9065;
    void *f_lam_9067 = encode_clo(clo9500);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9067, decode_clo_array[1],
                     decode_clo_array[5]);
  }
}

inline void lam9166_spec(void *env9167, void *id_8815) // lam9166
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9167);

  // creating new make-kont closure
  void **clo9501 = alloc_kont(lam9164_spec, 8);

  // setting env list
  clo9501[1] = decode_clo_array[1];
  clo9501[2] = decode_clo_array[2];
  clo9501[3] = decode_clo_array[3];
  clo9501[4] = decode_clo_array[4];
  clo9501[5] = decode_clo_array[5];
  clo9501[6] = decode_clo_array[6];
  clo9501[7] = decode_clo_array[7];
  clo9501[8] = decode_clo_array[8];
  void *f_lam_9065 = encode_clo(clo9501);

  // if-clause
  if (is_true(apply_prim__u62_2(id_8815, decode_clo_array[4]))) {

    // creating new make-kont closure
    void **clo9502 = alloc_kont(lam9122_spec, 2);

    // setting env list
    clo9502[1] = decode_clo_array[4];
    clo9502[2] = f_lam_9065;
    void *f_lam_9066 = encode_clo(clo9502);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9066, decode_clo_array[1],
                     decode_clo_array[3]);
  } else {

    // creating new make-kont closure
    void **clo9503 = alloc_kont(lam9124_spec, 2);

    // setting env list
    clo9503[1] = decode_clo_array[4];
    clo9503[2] = f_lam_9065;
    void *f_lam_9067 = encode_clo(clo9503);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9067, decode_clo_array[1],
                     decode_clo_array[5]);
  }
}

inline void
pt_u45in_u45poly2_u45helper_fptr() // pt-in-poly2-helper -> generic version
{
  // reading env and args
  void *const kont9045 = arg_buffer[2];
  void *const xp = arg_buffer[3];
  void *const yp = arg_buffer[4];
  void *const x = arg_buffer[5];
  void *const y = arg_buffer[6];
  void *const c = arg_buffer[7];
  void *const i = arg_buffer[8];
  void *const j = arg_buffer[9];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u60_2(i, int9211))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9045)[0])(
        kont9045, c);
  } else {

    // creating new make-kont closure
    void **clo9504 = alloc_kont(lam9166_spec, 8);

    // setting env list
    clo9504[1] = yp;
    clo9504[2] = x;
    clo9504[3] = i;
    clo9504[4] = y;
    clo9504[5] = j;
    clo9504[6] = xp;
    clo9504[7] = kont9045;
    clo9504[8] = c;
    void *f_lam_9068 = encode_clo(clo9504);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9068, yp, i);
  }
}

inline void pt_u45in_u45poly2_u45helper_spec(void *_9168, void *kont9045,
                                             void *xp, void *yp, void *x,
                                             void *y, void *c, void *i,
                                             void *j) // pt-in-poly2-helper
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // if-clause
  if (is_true(apply_prim__u60_2(i, int9211))) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(kont9045)[0])(
        kont9045, c);
  } else {

    // creating new make-kont closure
    void **clo9505 = alloc_kont(lam9166_spec, 8);

    // setting env list
    clo9505[1] = yp;
    clo9505[2] = x;
    clo9505[3] = i;
    clo9505[4] = y;
    clo9505[5] = j;
    clo9505[6] = xp;
    clo9505[7] = kont9045;
    clo9505[8] = c;
    void *f_lam_9068 = encode_clo(clo9505);

    // clo-app
    list_u45ref_spec(list_u45ref, f_lam_9068, yp, i);
  }
}

inline void lam9169_fptr() // lam9169 -> generic version
{
  // reading env
  void *const env9170 = arg_buffer[1];
  // reading env and args
  void *const id_8857 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9170);

  // clo-app
  pt_u45in_u45poly2_u45helper_spec(
      pt_u45in_u45poly2_u45helper, decode_clo_array[3], decode_clo_array[5],
      decode_clo_array[1], decode_clo_array[2], decode_clo_array[4],
      decode_clo_array[6], apply_prim__u45_2(id_8857, int9210), int9211);
}

inline void lam9169_spec(void *env9170, void *id_8857) // lam9169
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9170);

  // clo-app
  pt_u45in_u45poly2_u45helper_spec(
      pt_u45in_u45poly2_u45helper, decode_clo_array[3], decode_clo_array[5],
      decode_clo_array[1], decode_clo_array[2], decode_clo_array[4],
      decode_clo_array[6], apply_prim__u45_2(id_8857, int9210), int9211);
}

inline void pt_u45in_u45poly2_fptr() // pt-in-poly2 -> generic version
{
  // reading env and args
  void *const kont9069 = arg_buffer[2];
  void *const xp = arg_buffer[3];
  void *const yp = arg_buffer[4];
  void *const x = arg_buffer[5];
  void *const y = arg_buffer[6];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9506 = alloc_kont(lam9169_spec, 6);

  // setting env list
  clo9506[1] = yp;
  clo9506[2] = x;
  clo9506[3] = kont9069;
  clo9506[4] = y;
  clo9506[5] = xp;
  clo9506[6] = bool_f9207;
  void *f_lam_9070 = encode_clo(clo9506);

  // clo-app
  length_spec(length, f_lam_9070, xp);
}

inline void pt_u45in_u45poly2_spec(void *_9171, void *kont9069, void *xp,
                                   void *yp, void *x, void *y) // pt-in-poly2
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9507 = alloc_kont(lam9169_spec, 6);

  // setting env list
  clo9507[1] = yp;
  clo9507[2] = x;
  clo9507[3] = kont9069;
  clo9507[4] = y;
  clo9507[5] = xp;
  clo9507[6] = bool_f9207;
  void *f_lam_9070 = encode_clo(clo9507);

  // clo-app
  length_spec(length, f_lam_9070, xp);
}

inline void lam9172_fptr() // lam9172 -> generic version
{
  // reading env
  void *const env9173 = arg_buffer[1];
  // reading env and args
  void *const id_8904 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9173);

  // clo-app
  foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3],
             decode_clo_array[2], id_8904);
}

inline void lam9172_spec(void *env9173, void *id_8904) // lam9172
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9173);

  // clo-app
  foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3],
             decode_clo_array[2], id_8904);
}

inline void lam9174_fptr() // lam9174 -> generic version
{
  // reading env
  void *const env9175 = arg_buffer[1];
  // reading env and args
  void *const id_8864 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9175);

  // if-clause
  if (is_true(id_8864)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[1])[0])(
        decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], int9210));
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(
        decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
  }
}

inline void lam9174_spec(void *env9175, void *id_8864) // lam9174
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9175);

  // if-clause
  if (is_true(id_8864)) {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(
        decode_clo(decode_clo_array[1])[0])(
        decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], int9210));
  } else {
    // kont-clo-app case
    reinterpret_cast<void (*)(void *, void *)>(decode_clo(
        decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
  }
}

inline void lam9176_fptr() // lam9176 -> generic version
{
  // reading env
  void *const env9177 = arg_buffer[1];
  // reading env and args
  void *const cont9072 = arg_buffer[2];
  void *const lst = arg_buffer[3];
  void *const count = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9177);

  // creating new make-kont closure
  void **clo9508 = alloc_kont(lam9174_spec, 2);

  // setting env list
  clo9508[1] = cont9072;
  clo9508[2] = count;
  void *f_lam_9073 = encode_clo(clo9508);

  // clo-app
  pt_u45in_u45poly2_spec(pt_u45in_u45poly2, f_lam_9073, decode_clo_array[2],
                         decode_clo_array[1], apply_prim_car_1(lst),
                         apply_prim_car_1(apply_prim_cdr_1(lst)));
}

inline void lam9176_spec(void *env9177, void *cont9072, void *lst,
                         void *count) // lam9176
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9177);

  // creating new make-kont closure
  void **clo9509 = alloc_kont(lam9174_spec, 2);

  // setting env list
  clo9509[1] = cont9072;
  clo9509[2] = count;
  void *f_lam_9073 = encode_clo(clo9509);

  // clo-app
  pt_u45in_u45poly2_spec(pt_u45in_u45poly2, f_lam_9073, decode_clo_array[2],
                         decode_clo_array[1], apply_prim_car_1(lst),
                         apply_prim_car_1(apply_prim_cdr_1(lst)));
}

inline void run_fptr() // run -> generic version
{
  // reading env and args
  void *const kont9071 = arg_buffer[2];
  void *const input1 = arg_buffer[3];
  void *const input2 = arg_buffer[4];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9510 = alloc_clo(lam9176_fptr, 2);

  // setting env list
  clo9510[1] = input2;
  clo9510[2] = input1;
  void *id_8866 = encode_clo(clo9510);

  // creating new make-kont closure
  void **clo9511 = alloc_kont(lam9172_spec, 3);

  // setting env list
  clo9511[1] = kont9071;
  clo9511[2] = int9211;
  clo9511[3] = id_8866;
  void *f_lam_9074 = encode_clo(clo9511);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f_lam_9074;
  arg_buffer[3] = apply_prim_list_2(float9232, float9232);
  arg_buffer[4] = apply_prim_list_2(float9232, float9217);
  arg_buffer[5] = apply_prim_list_2(float9275, float9217);
  arg_buffer[6] = apply_prim_list_2(float9218, float9219);
  arg_buffer[7] = apply_prim_list_2(float9264, float9221);
  arg_buffer[8] = apply_prim_list_2(float9275, float9223);
  arg_buffer[9] = apply_prim_list_2(float9274, float9275);
  arg_buffer[10] = apply_prim_list_2(float9270, float9232);
  arg_buffer[11] = apply_prim_list_2(float9228, float9274);
  arg_buffer[12] = apply_prim_list_2(float9232, float9231);
  arg_buffer[13] = apply_prim_list_2(float9232, float9233);
  arg_buffer[14] = apply_prim_list_2(float9275, float9246);
  numArgs = 14;

  list_fptr();
}

inline void run_spec(void *_9178, void *kont9071, void *input1,
                     void *input2) // run
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new closure instance
  void **clo9512 = alloc_clo(lam9176_fptr, 2);

  // setting env list
  clo9512[1] = input2;
  clo9512[2] = input1;
  void *id_8866 = encode_clo(clo9512);

  // creating new make-kont closure
  void **clo9513 = alloc_kont(lam9172_spec, 3);

  // setting env list
  clo9513[1] = kont9071;
  clo9513[2] = int9211;
  clo9513[3] = id_8866;
  void *f_lam_9074 = encode_clo(clo9513);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f_lam_9074;
  arg_buffer[3] = apply_prim_list_2(float9232, float9232);
  arg_buffer[4] = apply_prim_list_2(float9232, float9217);
  arg_buffer[5] = apply_prim_list_2(float9275, float9217);
  arg_buffer[6] = apply_prim_list_2(float9218, float9219);
  arg_buffer[7] = apply_prim_list_2(float9264, float9221);
  arg_buffer[8] = apply_prim_list_2(float9275, float9223);
  arg_buffer[9] = apply_prim_list_2(float9274, float9275);
  arg_buffer[10] = apply_prim_list_2(float9270, float9232);
  arg_buffer[11] = apply_prim_list_2(float9228, float9274);
  arg_buffer[12] = apply_prim_list_2(float9232, float9231);
  arg_buffer[13] = apply_prim_list_2(float9232, float9233);
  arg_buffer[14] = apply_prim_list_2(float9275, float9246);
  numArgs = 14;

  list_fptr();
}

inline void lam9179_fptr() // lam9179 -> generic version
{
  // reading env
  void *const env9180 = arg_buffer[1];
  // reading env and args
  void *const id_8946 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9180);

  // clo-app
  run_spec(run, decode_clo_array[2], decode_clo_array[1], id_8946);
}

inline void lam9179_spec(void *env9180, void *id_8946) // lam9179
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9180);

  // clo-app
  run_spec(run, decode_clo_array[2], decode_clo_array[1], id_8946);
}

inline void lam9181_fptr() // lam9181 -> generic version
{
  // reading env
  void *const env9182 = arg_buffer[1];
  // reading env and args
  void *const id_8925 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9182);

  // creating new make-kont closure
  void **clo9514 = alloc_kont(lam9179_spec, 2);

  // setting env list
  clo9514[1] = id_8925;
  clo9514[2] = decode_clo_array[1];
  void *f_lam_9076 = encode_clo(clo9514);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f_lam_9076;
  arg_buffer[3] = float9264;
  arg_buffer[4] = float9264;
  arg_buffer[5] = float9259;
  arg_buffer[6] = float9259;
  arg_buffer[7] = float9262;
  arg_buffer[8] = float9263;
  arg_buffer[9] = float9262;
  arg_buffer[10] = float9263;
  arg_buffer[11] = float9264;
  arg_buffer[12] = float9275;
  arg_buffer[13] = float9274;
  arg_buffer[14] = float9270;
  arg_buffer[15] = float9269;
  arg_buffer[16] = float9269;
  arg_buffer[17] = float9270;
  arg_buffer[18] = float9274;
  arg_buffer[19] = float9275;
  arg_buffer[20] = float9274;
  arg_buffer[21] = float9274;
  arg_buffer[22] = float9275;
  numArgs = 22;

  list_fptr();
}

inline void lam9181_spec(void *env9182, void *id_8925) // lam9181
{
  // decoding closure array
  void **decode_clo_array = nullptr;
  decode_clo_array = decode_clo(env9182);

  // creating new make-kont closure
  void **clo9515 = alloc_kont(lam9179_spec, 2);

  // setting env list
  clo9515[1] = id_8925;
  clo9515[2] = decode_clo_array[1];
  void *f_lam_9076 = encode_clo(clo9515);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f_lam_9076;
  arg_buffer[3] = float9264;
  arg_buffer[4] = float9264;
  arg_buffer[5] = float9259;
  arg_buffer[6] = float9259;
  arg_buffer[7] = float9262;
  arg_buffer[8] = float9263;
  arg_buffer[9] = float9262;
  arg_buffer[10] = float9263;
  arg_buffer[11] = float9264;
  arg_buffer[12] = float9275;
  arg_buffer[13] = float9274;
  arg_buffer[14] = float9270;
  arg_buffer[15] = float9269;
  arg_buffer[16] = float9269;
  arg_buffer[17] = float9270;
  arg_buffer[18] = float9274;
  arg_buffer[19] = float9275;
  arg_buffer[20] = float9274;
  arg_buffer[21] = float9274;
  arg_buffer[22] = float9275;
  numArgs = 22;

  list_fptr();
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version
{
  // reading env and args
  void *const kont9075 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9516 = alloc_kont(lam9181_spec, 1);

  // setting env list
  clo9516[1] = kont9075;
  void *f_lam_9077 = encode_clo(clo9516);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f_lam_9077;
  arg_buffer[3] = float9264;
  arg_buffer[4] = float9259;
  arg_buffer[5] = float9259;
  arg_buffer[6] = float9264;
  arg_buffer[7] = float9264;
  arg_buffer[8] = float9259;
  arg_buffer[9] = float9275;
  arg_buffer[10] = float9274;
  arg_buffer[11] = float9274;
  arg_buffer[12] = float9269;
  arg_buffer[13] = float9246;
  arg_buffer[14] = float9269;
  arg_buffer[15] = float9270;
  arg_buffer[16] = float9275;
  arg_buffer[17] = float9259;
  arg_buffer[18] = float9259;
  arg_buffer[19] = float9264;
  arg_buffer[20] = float9275;
  arg_buffer[21] = float9274;
  arg_buffer[22] = float9275;
  numArgs = 22;

  list_fptr();
}

inline void brouhaha_main_spec(void *_9183, void *kont9075) // brouhaha_main
{
  // decoding closure array
  void **decode_clo_array = nullptr;

  // creating new make-kont closure
  void **clo9517 = alloc_kont(lam9181_spec, 1);

  // setting env list
  clo9517[1] = kont9075;
  void *f_lam_9077 = encode_clo(clo9517);

  // clo-app
  arg_buffer[1] = list;
  arg_buffer[2] = f_lam_9077;
  arg_buffer[3] = float9264;
  arg_buffer[4] = float9259;
  arg_buffer[5] = float9259;
  arg_buffer[6] = float9264;
  arg_buffer[7] = float9264;
  arg_buffer[8] = float9259;
  arg_buffer[9] = float9275;
  arg_buffer[10] = float9274;
  arg_buffer[11] = float9274;
  arg_buffer[12] = float9269;
  arg_buffer[13] = float9246;
  arg_buffer[14] = float9269;
  arg_buffer[15] = float9270;
  arg_buffer[16] = float9275;
  arg_buffer[17] = float9259;
  arg_buffer[18] = float9259;
  arg_buffer[19] = float9264;
  arg_buffer[20] = float9275;
  arg_buffer[21] = float9274;
  arg_buffer[22] = float9275;
  numArgs = 22;

  list_fptr();
}

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int9211 = reinterpret_cast<void *>(encode_int(0));
  float9264 = reinterpret_cast<void *>(encode_float(0.0));
  float9262 = reinterpret_cast<void *>(encode_float(2.0));
  float9269 = reinterpret_cast<void *>(encode_float(-2.0));
  float9232 = reinterpret_cast<void *>(encode_float(0.5));
  float9275 = reinterpret_cast<void *>(encode_float(-0.5));
  float9259 = reinterpret_cast<void *>(encode_float(1.0));
  float9274 = reinterpret_cast<void *>(encode_float(-1.0));
  float9231 = reinterpret_cast<void *>(encode_float(-0.25));
  float9219 = reinterpret_cast<void *>(encode_float(2.25));
  float9228 = reinterpret_cast<void *>(encode_float(-2.25));
  float9223 = reinterpret_cast<void *>(encode_float(2.5));
  float9246 = reinterpret_cast<void *>(encode_float(-2.5));
  float9233 = reinterpret_cast<void *>(encode_float(-1.25));
  float9217 = reinterpret_cast<void *>(encode_float(1.5));
  float9270 = reinterpret_cast<void *>(encode_float(-1.5));
  float9263 = reinterpret_cast<void *>(encode_float(3.0));
  float9218 = reinterpret_cast<void *>(encode_float(0.75));
  bool_t9203 = encode_bool(true);
  int9210 = reinterpret_cast<void *>(encode_int(1));
  bool_f9207 = encode_bool(false);
  float9221 = reinterpret_cast<void *>(encode_float(2.01));
  int9187 = reinterpret_cast<void *>(encode_int(2));

  // making a call to the brouhaha main function to kick off our C++ emission.
  void **f_halt_clo = alloc_kont(fhalt_spec, 0);
  void *fhalt_clo = encode_clo(f_halt_clo);
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  brouhaha_main_spec(nullptr, fhalt_clo);
}
