#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9347;
void* bool_t9307;
void* int9356;
void* bool_f9317;
void* int9350;
void* int9352;
void* int9351;
void* int9353;
void* int9349;
void* int9355;



// declaring functions at the top
void _u43_fptr(); // +
void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr(); // -
void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr(); // *
void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr(); // /
void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr(); // =
void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr(); // >
void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr(); // <
void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr(); // <=
void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr(); // >=
void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr(); // modulo
void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr(); // null?
void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr(); // equal?
void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr(); // eq?
void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr(); // cons
void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr(); // car
void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr(); // cdr
void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr(); // float->int
void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr(); // int->float
void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr(); // hash
void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr(); // hash-ref
void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr(); // hash-set
void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr(); // hash-keys
void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr(); // hash-has-key?
void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr(); // hash-count
void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr(); // set
void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr(); // set->list
void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr(); // list->set
void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr(); // set-add
void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr(); // set-member?
void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr(); // set-remove
void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr(); // set-count
void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr(); // string?
void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr(); // string-length
void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr(); // string-ref
void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr(); // substring
void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr(); // string-append
void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr(); // string->list
void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr(); // exact-floor
void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr(); // exact-ceiling
void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr(); // exact-round
void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr(); // abs
void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr(); // max
void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr(); // min
void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr(); // expt
void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr(); // sqrt
void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr(); // remainder
void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr(); // quotient
void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr(); // random
void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr(); // symbol?
void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr(); // pair?
void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr(); // positive?
void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr(); // negative?
void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void even_u63_fptr(); // even?
void even_u63_spec(void* _9142, void* kont9046, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _9143, void* kont9047, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _9144, void* kont9048, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam9145_fptr(); // lam9145
void lam9145_spec(void* env9146, void* id_8745); // lam9145
void* lam9145 = encode_clo(alloc_clo(lam9145_fptr, 0));

void member_fptr(); // member
void member_spec(void* _9147, void* kont9049, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _9148, void* kont9051, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam9149_fptr(); // lam9149
void lam9149_spec(void* env9150, void* id_8760); // lam9149
void* lam9149 = encode_clo(alloc_clo(lam9149_fptr, 0));

void length_fptr(); // length
void length_spec(void* _9151, void* kont9052, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam9152_fptr(); // lam9152
void lam9152_spec(void* env9153, void* id_8766); // lam9152
void* lam9152 = encode_clo(alloc_clo(lam9152_fptr, 0));

void lam9154_fptr(); // lam9154
void lam9154_spec(void* env9155, void* id_8764); // lam9154
void* lam9154 = encode_clo(alloc_clo(lam9154_fptr, 0));

void map_fptr(); // map
void map_spec(void* _9156, void* kont9054, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam9157_fptr(); // lam9157
void lam9157_spec(void* env9158, void* id_8773); // lam9157
void* lam9157 = encode_clo(alloc_clo(lam9157_fptr, 0));

void lam9159_fptr(); // lam9159
void lam9159_spec(void* env9160, void* id_8770); // lam9159
void* lam9159 = encode_clo(alloc_clo(lam9159_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _9161, void* kont9057, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _9162, void* kont9060, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam9163_fptr(); // lam9163
void lam9163_spec(void* env9164, void* id_8782); // lam9163
void* lam9163 = encode_clo(alloc_clo(lam9163_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _9165, void* kont9061, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9166_fptr(); // lam9166
void lam9166_spec(void* env9167, void* id_8787); // lam9166
void* lam9166 = encode_clo(alloc_clo(lam9166_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _9168, void* kont9063, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _9169, void* kont9065, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _9170, void* kont9066, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam9171_fptr(); // lam9171
void lam9171_spec(void* env9172, void* id_8796); // lam9171
void* lam9171 = encode_clo(alloc_clo(lam9171_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _9173, void* kont9067, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9174_fptr(); // lam9174
void lam9174_spec(void* env9175, void* id_8803); // lam9174
void* lam9174 = encode_clo(alloc_clo(lam9174_fptr, 0));

void lam9176_fptr(); // lam9176
void lam9176_spec(void* env9177, void* id_8798); // lam9176
void* lam9176 = encode_clo(alloc_clo(lam9176_fptr, 0));

void lam9178_fptr(); // lam9178
void lam9178_spec(void* env9179, void* x); // lam9178
void* lam9178 = encode_clo(alloc_clo(lam9178_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9181_fptr(); // lam9181
void lam9181_spec(void* env9182, void* xy8806); // lam9181
void* lam9181 = encode_clo(alloc_clo(lam9181_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _9183, void* kont9073, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _9184, void* kont9075, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam9185_fptr(); // lam9185
void lam9185_spec(void* env9186, void* r); // lam9185
void* lam9185 = encode_clo(alloc_clo(lam9185_fptr, 0));

void lam9187_fptr(); // lam9187
void lam9187_spec(void* env9188, void* r); // lam9187
void* lam9187 = encode_clo(alloc_clo(lam9187_fptr, 0));

void lam9189_fptr(); // lam9189
void lam9189_spec(void* env9190, void* id_8818); // lam9189
void* lam9189 = encode_clo(alloc_clo(lam9189_fptr, 0));

void mydiv_fptr(); // mydiv
void mydiv_spec(void* _9191, void* kont9076, void* x, void* y); // mydiv
void* mydiv = encode_clo(alloc_clo(mydiv_fptr, 0));

void width_fptr(); // width
void width_spec(void* _9192, void* kont9080, void* x, void* i, void* n); // width
void* width = encode_clo(alloc_clo(width_fptr, 0));

void lam9193_fptr(); // lam9193
void lam9193_spec(void* env9194, void* xy8842); // lam9193
void* lam9193 = encode_clo(alloc_clo(lam9193_fptr, 0));

void lam9195_fptr(); // lam9195
void lam9195_spec(void* env9196, void* d); // lam9195
void* lam9195 = encode_clo(alloc_clo(lam9195_fptr, 0));

void lam9197_fptr(); // lam9197
void lam9197_spec(void* env9198, void* c); // lam9197
void* lam9197 = encode_clo(alloc_clo(lam9197_fptr, 0));

void lam9199_fptr(); // lam9199
void lam9199_spec(void* env9200, void* a); // lam9199
void* lam9199 = encode_clo(alloc_clo(lam9199_fptr, 0));

void root_u45helper_fptr(); // root-helper
void root_u45helper_spec(void* _9201, void* kont9081, void* g, void* x, void* y); // root-helper
void* root_u45helper = encode_clo(alloc_clo(root_u45helper_fptr, 0));

void lam9202_fptr(); // lam9202
void lam9202_spec(void* env9203, void* id_8850); // lam9202
void* lam9202 = encode_clo(alloc_clo(lam9202_fptr, 0));

void lam9204_fptr(); // lam9204
void lam9204_spec(void* env9205, void* id_8846); // lam9204
void* lam9204 = encode_clo(alloc_clo(lam9204_fptr, 0));

void root_fptr(); // root
void root_spec(void* _9206, void* kont9086, void* x, void* y); // root
void* root = encode_clo(alloc_clo(root_fptr, 0));

void square_u45root_fptr(); // square-root
void square_u45root_spec(void* _9207, void* kont9089, void* x); // square-root
void* square_u45root = encode_clo(alloc_clo(square_u45root_fptr, 0));

void quartic_u45root_fptr(); // quartic-root
void quartic_u45root_spec(void* _9208, void* kont9090, void* x); // quartic-root
void* quartic_u45root = encode_clo(alloc_clo(quartic_u45root_fptr, 0));

void square_fptr(); // square
void square_spec(void* _9209, void* kont9091, void* x); // square
void* square = encode_clo(alloc_clo(square_fptr, 0));

void lam9210_fptr(); // lam9210
void lam9210_spec(void* env9211, void* id_8857); // lam9210
void* lam9210 = encode_clo(alloc_clo(lam9210_fptr, 0));

void lam9212_fptr(); // lam9212
void lam9212_spec(void* env9213, void* id_8867); // lam9212
void* lam9212 = encode_clo(alloc_clo(lam9212_fptr, 0));

void lam9214_fptr(); // lam9214
void lam9214_spec(void* env9215, void* id_8865); // lam9214
void* lam9214 = encode_clo(alloc_clo(lam9214_fptr, 0));

void lam9216_fptr(); // lam9216
void lam9216_spec(void* env9217, void* id_8863); // lam9216
void* lam9216 = encode_clo(alloc_clo(lam9216_fptr, 0));

void lam9218_fptr(); // lam9218
void lam9218_spec(void* env9219, void* new_u45a); // lam9218
void* lam9218 = encode_clo(alloc_clo(lam9218_fptr, 0));

void pi_u45brent_u45salamin_u45helper_fptr(); // pi-brent-salamin-helper
void pi_u45brent_u45salamin_u45helper_spec(void* _9220, void* kont9092, void* one, void* a, void* b, void* t, void* x); // pi-brent-salamin-helper
void* pi_u45brent_u45salamin_u45helper = encode_clo(alloc_clo(pi_u45brent_u45salamin_u45helper_fptr, 0));

void lam9221_fptr(); // lam9221
void lam9221_spec(void* env9222, void* id_8877); // lam9221
void* lam9221 = encode_clo(alloc_clo(lam9221_fptr, 0));

void lam9223_fptr(); // lam9223
void lam9223_spec(void* env9224, void* id_8875); // lam9223
void* lam9223 = encode_clo(alloc_clo(lam9223_fptr, 0));

void lam9225_fptr(); // lam9225
void lam9225_spec(void* env9226, void* id_8874); // lam9225
void* lam9225 = encode_clo(alloc_clo(lam9225_fptr, 0));

void lam9227_fptr(); // lam9227
void lam9227_spec(void* env9228, void* id_8872); // lam9227
void* lam9227 = encode_clo(alloc_clo(lam9227_fptr, 0));

void lam9229_fptr(); // lam9229
void lam9229_spec(void* env9230, void* one); // lam9229
void* lam9229 = encode_clo(alloc_clo(lam9229_fptr, 0));

void pi_u45brent_u45salamin_fptr(); // pi-brent-salamin
void pi_u45brent_u45salamin_spec(void* _9231, void* kont9098, void* nb_u45digits); // pi-brent-salamin
void* pi_u45brent_u45salamin = encode_clo(alloc_clo(pi_u45brent_u45salamin_fptr, 0));

void lam9232_fptr(); // lam9232
void lam9232_spec(void* env9233, void* id_8894); // lam9232
void* lam9232 = encode_clo(alloc_clo(lam9232_fptr, 0));

void lam9234_fptr(); // lam9234
void lam9234_spec(void* env9235, void* id_8888); // lam9234
void* lam9234 = encode_clo(alloc_clo(lam9234_fptr, 0));

void lam9236_fptr(); // lam9236
void lam9236_spec(void* env9237, void* sqrt_u45x); // lam9236
void* lam9236 = encode_clo(alloc_clo(lam9236_fptr, 0));

void lam9238_fptr(); // lam9238
void lam9238_spec(void* env9239, void* new_u45p); // lam9238
void* lam9238 = encode_clo(alloc_clo(lam9238_fptr, 0));

void pi_u45borwein2_u45helper_fptr(); // pi-borwein2-helper
void pi_u45borwein2_u45helper_spec(void* _9240, void* kont9104, void* one, void* one_u942, void* one_u944, void* sqrt2, void* qurt2, void* x, void* y, void* p); // pi-borwein2-helper
void* pi_u45borwein2_u45helper = encode_clo(alloc_clo(pi_u45borwein2_u45helper_fptr, 0));

void lam9241_fptr(); // lam9241
void lam9241_spec(void* env9242, void* id_8904); // lam9241
void* lam9241 = encode_clo(alloc_clo(lam9241_fptr, 0));

void lam9243_fptr(); // lam9243
void lam9243_spec(void* env9244, void* qurt2); // lam9243
void* lam9243 = encode_clo(alloc_clo(lam9243_fptr, 0));

void lam9245_fptr(); // lam9245
void lam9245_spec(void* env9246, void* sqrt2); // lam9245
void* lam9245 = encode_clo(alloc_clo(lam9245_fptr, 0));

void lam9247_fptr(); // lam9247
void lam9247_spec(void* env9248, void* one_u944); // lam9247
void* lam9247 = encode_clo(alloc_clo(lam9247_fptr, 0));

void lam9249_fptr(); // lam9249
void lam9249_spec(void* env9250, void* one_u942); // lam9249
void* lam9249 = encode_clo(alloc_clo(lam9249_fptr, 0));

void lam9251_fptr(); // lam9251
void lam9251_spec(void* env9252, void* one); // lam9251
void* lam9251 = encode_clo(alloc_clo(lam9251_fptr, 0));

void pi_u45borwein2_fptr(); // pi-borwein2
void pi_u45borwein2_spec(void* _9253, void* kont9109, void* nb_u45digits); // pi-borwein2
void* pi_u45borwein2 = encode_clo(alloc_clo(pi_u45borwein2_fptr, 0));

void lam9254_fptr(); // lam9254
void lam9254_spec(void* env9255, void* xy8910); // lam9254
void* lam9254 = encode_clo(alloc_clo(lam9254_fptr, 0));

void lam9256_fptr(); // lam9256
void lam9256_spec(void* env9257, void* id_8912); // lam9256
void* lam9256 = encode_clo(alloc_clo(lam9256_fptr, 0));

void lam9258_fptr(); // lam9258
void lam9258_spec(void* env9259, void* id_8911); // lam9258
void* lam9258 = encode_clo(alloc_clo(lam9258_fptr, 0));

void lam9260_fptr(); // lam9260
void lam9260_spec(void* env9261, void* id_8920); // lam9260
void* lam9260 = encode_clo(alloc_clo(lam9260_fptr, 0));

void lam9262_fptr(); // lam9262
void lam9262_spec(void* env9263, void* id_8919); // lam9262
void* lam9262 = encode_clo(alloc_clo(lam9262_fptr, 0));

void lam9264_fptr(); // lam9264
void lam9264_spec(void* env9265, void* id_8918); // lam9264
void* lam9264 = encode_clo(alloc_clo(lam9264_fptr, 0));

void lam9266_fptr(); // lam9266
void lam9266_spec(void* env9267, void* id_8922); // lam9266
void* lam9266 = encode_clo(alloc_clo(lam9266_fptr, 0));

void lam9268_fptr(); // lam9268
void lam9268_spec(void* env9269, void* id_8921); // lam9268
void* lam9268 = encode_clo(alloc_clo(lam9268_fptr, 0));

void lam9270_fptr(); // lam9270
void lam9270_spec(void* env9271, void* id_8928); // lam9270
void* lam9270 = encode_clo(alloc_clo(lam9270_fptr, 0));

void lam9272_fptr(); // lam9272
void lam9272_spec(void* env9273, void* t4); // lam9272
void* lam9272 = encode_clo(alloc_clo(lam9272_fptr, 0));

void lam9274_fptr(); // lam9274
void lam9274_spec(void* env9275, void* t3); // lam9274
void* lam9274 = encode_clo(alloc_clo(lam9274_fptr, 0));

void lam9276_fptr(); // lam9276
void lam9276_spec(void* env9277, void* t2); // lam9276
void* lam9276 = encode_clo(alloc_clo(lam9276_fptr, 0));

void lam9278_fptr(); // lam9278
void lam9278_spec(void* env9279, void* t1); // lam9278
void* lam9278 = encode_clo(alloc_clo(lam9278_fptr, 0));

void pi_u45borwein4_u45helper_fptr(); // pi-borwein4-helper
void pi_u45borwein4_u45helper_spec(void* _9280, void* kont9116, void* one, void* one_u942, void* one_u944, void* sqrt2, void* y, void* a, void* x); // pi-borwein4-helper
void* pi_u45borwein4_u45helper = encode_clo(alloc_clo(pi_u45borwein4_u45helper_fptr, 0));

void lam9281_fptr(); // lam9281
void lam9281_spec(void* env9282, void* sqrt2); // lam9281
void* lam9281 = encode_clo(alloc_clo(lam9281_fptr, 0));

void lam9283_fptr(); // lam9283
void lam9283_spec(void* env9284, void* one_u944); // lam9283
void* lam9283 = encode_clo(alloc_clo(lam9283_fptr, 0));

void lam9285_fptr(); // lam9285
void lam9285_spec(void* env9286, void* one_u942); // lam9285
void* lam9285 = encode_clo(alloc_clo(lam9285_fptr, 0));

void lam9287_fptr(); // lam9287
void lam9287_spec(void* env9288, void* one); // lam9287
void* lam9287 = encode_clo(alloc_clo(lam9287_fptr, 0));

void pi_u45borwein4_fptr(); // pi-borwein4
void pi_u45borwein4_spec(void* _9289, void* kont9130, void* nb_u45digits); // pi-borwein4
void* pi_u45borwein4 = encode_clo(alloc_clo(pi_u45borwein4_fptr, 0));

void lam9290_fptr(); // lam9290
void lam9290_spec(void* env9291, void* id_8947); // lam9290
void* lam9290 = encode_clo(alloc_clo(lam9290_fptr, 0));

void lam9292_fptr(); // lam9292
void lam9292_spec(void* env9293, void* b4); // lam9292
void* lam9292 = encode_clo(alloc_clo(lam9292_fptr, 0));

void lam9294_fptr(); // lam9294
void lam9294_spec(void* env9295, void* b2); // lam9294
void* lam9294 = encode_clo(alloc_clo(lam9294_fptr, 0));

void lam9296_fptr(); // lam9296
void lam9296_spec(void* env9297, void* bs); // lam9296
void* lam9296 = encode_clo(alloc_clo(lam9296_fptr, 0));

void pies_fptr(); // pies
void pies_spec(void* _9298, void* kont9135, void* n, void* m, void* s); // pies
void* pies = encode_clo(alloc_clo(pies_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9299, void* kont9140); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9357 = prim_car(lst);
void* const lst9359 = prim_cdr(lst);
void* const x9358 = apply_prim__u43(lst9359);
arg_buffer[1] = kont9357;
arg_buffer[2] = x9358;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9357))[0])();
}
else
{
void* const kont9357 = arg_buffer[2];
void* const x9358 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont9357;
arg_buffer[2] = x9358;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9357))[0])();
}

}

inline void _u45_fptr() // - 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9360 = prim_car(lst);
void* const lst9362 = prim_cdr(lst);
void* const x9361 = apply_prim__u45(lst9362);
arg_buffer[1] = kont9360;
arg_buffer[2] = x9361;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9360))[0])();
}
else
{
void* const kont9360 = arg_buffer[2];
void* const x9361 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont9360;
arg_buffer[2] = x9361;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9360))[0])();
}

}

inline void _u42_fptr() // * 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9363 = prim_car(lst);
void* const lst9365 = prim_cdr(lst);
void* const x9364 = apply_prim__u42(lst9365);
arg_buffer[1] = kont9363;
arg_buffer[2] = x9364;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9363))[0])();
}
else
{
void* const kont9363 = arg_buffer[2];
void* const x9364 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont9363;
arg_buffer[2] = x9364;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9363))[0])();
}

}

inline void _u47_fptr() // / 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9366 = prim_car(lst);
void* const lst9368 = prim_cdr(lst);
void* const x9367 = apply_prim__u47(lst9368);
arg_buffer[1] = kont9366;
arg_buffer[2] = x9367;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9366))[0])();
}
else
{
void* const kont9366 = arg_buffer[2];
void* const x9367 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont9366;
arg_buffer[2] = x9367;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9366))[0])();
}

}

inline void _u61_fptr() // = 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9369 = prim_car(lst);
void* const lst9371 = prim_cdr(lst);
void* const x9370 = apply_prim__u61(lst9371);
arg_buffer[1] = kont9369;
arg_buffer[2] = x9370;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9369))[0])();
}
else
{
void* const kont9369 = arg_buffer[2];
void* const x9370 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont9369;
arg_buffer[2] = x9370;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9369))[0])();
}

}

inline void _u62_fptr() // > 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9372 = prim_car(lst);
void* const lst9374 = prim_cdr(lst);
void* const x9373 = apply_prim__u62(lst9374);
arg_buffer[1] = kont9372;
arg_buffer[2] = x9373;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9372))[0])();
}
else
{
void* const kont9372 = arg_buffer[2];
void* const x9373 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9372;
arg_buffer[2] = x9373;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9372))[0])();
}

}

inline void _u60_fptr() // < 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9375 = prim_car(lst);
void* const lst9377 = prim_cdr(lst);
void* const x9376 = apply_prim__u60(lst9377);
arg_buffer[1] = kont9375;
arg_buffer[2] = x9376;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9375))[0])();
}
else
{
void* const kont9375 = arg_buffer[2];
void* const x9376 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9375;
arg_buffer[2] = x9376;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9375))[0])();
}

}

inline void _u60_u61_fptr() // <= 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9378 = prim_car(lst);
void* const lst9380 = prim_cdr(lst);
void* const x9379 = apply_prim__u60_u61(lst9380);
arg_buffer[1] = kont9378;
arg_buffer[2] = x9379;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9378))[0])();
}
else
{
void* const kont9378 = arg_buffer[2];
void* const x9379 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9378;
arg_buffer[2] = x9379;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9378))[0])();
}

}

inline void _u62_u61_fptr() // >= 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9381 = prim_car(lst);
void* const lst9383 = prim_cdr(lst);
void* const x9382 = apply_prim__u62_u61(lst9383);
arg_buffer[1] = kont9381;
arg_buffer[2] = x9382;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9381))[0])();
}
else
{
void* const kont9381 = arg_buffer[2];
void* const x9382 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9381;
arg_buffer[2] = x9382;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9381))[0])();
}

}

inline void modulo_fptr() // modulo 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9384 = prim_car(lst);
void* const lst9386 = prim_cdr(lst);
void* const x9385 = apply_prim_modulo(lst9386);
arg_buffer[1] = kont9384;
arg_buffer[2] = x9385;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9384))[0])();
}
else
{
void* const kont9384 = arg_buffer[2];
void* const x9385 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9384;
arg_buffer[2] = x9385;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9384))[0])();
}

}

inline void null_u63_fptr() // null? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9387 = prim_car(lst);
void* const lst9389 = prim_cdr(lst);
void* const x9388 = apply_prim_null_u63(lst9389);
arg_buffer[1] = kont9387;
arg_buffer[2] = x9388;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9387))[0])();
}
else
{
void* const kont9387 = arg_buffer[2];
void* const x9388 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9387;
arg_buffer[2] = x9388;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9387))[0])();
}

}

inline void equal_u63_fptr() // equal? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9390 = prim_car(lst);
void* const lst9392 = prim_cdr(lst);
void* const x9391 = apply_prim_equal_u63(lst9392);
arg_buffer[1] = kont9390;
arg_buffer[2] = x9391;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9390))[0])();
}
else
{
void* const kont9390 = arg_buffer[2];
void* const x9391 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9390;
arg_buffer[2] = x9391;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9390))[0])();
}

}

inline void eq_u63_fptr() // eq? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9393 = prim_car(lst);
void* const lst9395 = prim_cdr(lst);
void* const x9394 = apply_prim_eq_u63(lst9395);
arg_buffer[1] = kont9393;
arg_buffer[2] = x9394;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9393))[0])();
}
else
{
void* const kont9393 = arg_buffer[2];
void* const x9394 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9393;
arg_buffer[2] = x9394;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9393))[0])();
}

}

inline void cons_fptr() // cons 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9396 = prim_car(lst);
void* const lst9398 = prim_cdr(lst);
void* const x9397 = apply_prim_cons(lst9398);
arg_buffer[1] = kont9396;
arg_buffer[2] = x9397;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9396))[0])();
}
else
{
void* const kont9396 = arg_buffer[2];
void* const x9397 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9396;
arg_buffer[2] = x9397;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9396))[0])();
}

}

inline void car_fptr() // car 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9399 = prim_car(lst);
void* const lst9401 = prim_cdr(lst);
void* const x9400 = apply_prim_car(lst9401);
arg_buffer[1] = kont9399;
arg_buffer[2] = x9400;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9399))[0])();
}
else
{
void* const kont9399 = arg_buffer[2];
void* const x9400 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9399;
arg_buffer[2] = x9400;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9399))[0])();
}

}

inline void cdr_fptr() // cdr 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9402 = prim_car(lst);
void* const lst9404 = prim_cdr(lst);
void* const x9403 = apply_prim_cdr(lst9404);
arg_buffer[1] = kont9402;
arg_buffer[2] = x9403;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9402))[0])();
}
else
{
void* const kont9402 = arg_buffer[2];
void* const x9403 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9402;
arg_buffer[2] = x9403;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9402))[0])();
}

}

inline void float_u45_u62int_fptr() // float->int 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9405 = prim_car(lst);
void* const lst9407 = prim_cdr(lst);
void* const x9406 = apply_prim_float_u45_u62int(lst9407);
arg_buffer[1] = kont9405;
arg_buffer[2] = x9406;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9405))[0])();
}
else
{
void* const kont9405 = arg_buffer[2];
void* const x9406 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9405;
arg_buffer[2] = x9406;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9405))[0])();
}

}

inline void int_u45_u62float_fptr() // int->float 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9408 = prim_car(lst);
void* const lst9410 = prim_cdr(lst);
void* const x9409 = apply_prim_int_u45_u62float(lst9410);
arg_buffer[1] = kont9408;
arg_buffer[2] = x9409;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9408))[0])();
}
else
{
void* const kont9408 = arg_buffer[2];
void* const x9409 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9408;
arg_buffer[2] = x9409;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9408))[0])();
}

}

inline void hash_fptr() // hash 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9411 = prim_car(lst);
void* const lst9413 = prim_cdr(lst);
void* const x9412 = apply_prim_hash(lst9413);
arg_buffer[1] = kont9411;
arg_buffer[2] = x9412;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9411))[0])();
}
else
{
void* const kont9411 = arg_buffer[2];
void* const x9412 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9411;
arg_buffer[2] = x9412;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9411))[0])();
}

}

inline void hash_u45ref_fptr() // hash-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9414 = prim_car(lst);
void* const lst9416 = prim_cdr(lst);
void* const x9415 = apply_prim_hash_u45ref(lst9416);
arg_buffer[1] = kont9414;
arg_buffer[2] = x9415;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9414))[0])();
}
else
{
void* const kont9414 = arg_buffer[2];
void* const x9415 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9414;
arg_buffer[2] = x9415;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9414))[0])();
}

}

inline void hash_u45set_fptr() // hash-set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9417 = prim_car(lst);
void* const lst9419 = prim_cdr(lst);
void* const x9418 = apply_prim_hash_u45set(lst9419);
arg_buffer[1] = kont9417;
arg_buffer[2] = x9418;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9417))[0])();
}
else
{
void* const kont9417 = arg_buffer[2];
void* const x9418 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9417;
arg_buffer[2] = x9418;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9417))[0])();
}

}

inline void hash_u45keys_fptr() // hash-keys 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9420 = prim_car(lst);
void* const lst9422 = prim_cdr(lst);
void* const x9421 = apply_prim_hash_u45keys(lst9422);
arg_buffer[1] = kont9420;
arg_buffer[2] = x9421;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9420))[0])();
}
else
{
void* const kont9420 = arg_buffer[2];
void* const x9421 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9420;
arg_buffer[2] = x9421;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9420))[0])();
}

}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9423 = prim_car(lst);
void* const lst9425 = prim_cdr(lst);
void* const x9424 = apply_prim_hash_u45has_u45key_u63(lst9425);
arg_buffer[1] = kont9423;
arg_buffer[2] = x9424;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9423))[0])();
}
else
{
void* const kont9423 = arg_buffer[2];
void* const x9424 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9423;
arg_buffer[2] = x9424;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9423))[0])();
}

}

inline void hash_u45count_fptr() // hash-count 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9426 = prim_car(lst);
void* const lst9428 = prim_cdr(lst);
void* const x9427 = apply_prim_hash_u45count(lst9428);
arg_buffer[1] = kont9426;
arg_buffer[2] = x9427;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9426))[0])();
}
else
{
void* const kont9426 = arg_buffer[2];
void* const x9427 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9426;
arg_buffer[2] = x9427;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9426))[0])();
}

}

inline void set_fptr() // set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9429 = prim_car(lst);
void* const lst9431 = prim_cdr(lst);
void* const x9430 = apply_prim_set(lst9431);
arg_buffer[1] = kont9429;
arg_buffer[2] = x9430;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9429))[0])();
}
else
{
void* const kont9429 = arg_buffer[2];
void* const x9430 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9429;
arg_buffer[2] = x9430;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9429))[0])();
}

}

inline void set_u45_u62list_fptr() // set->list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9432 = prim_car(lst);
void* const lst9434 = prim_cdr(lst);
void* const x9433 = apply_prim_set_u45_u62list(lst9434);
arg_buffer[1] = kont9432;
arg_buffer[2] = x9433;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9432))[0])();
}
else
{
void* const kont9432 = arg_buffer[2];
void* const x9433 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9432;
arg_buffer[2] = x9433;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9432))[0])();
}

}

inline void list_u45_u62set_fptr() // list->set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9435 = prim_car(lst);
void* const lst9437 = prim_cdr(lst);
void* const x9436 = apply_prim_list_u45_u62set(lst9437);
arg_buffer[1] = kont9435;
arg_buffer[2] = x9436;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9435))[0])();
}
else
{
void* const kont9435 = arg_buffer[2];
void* const x9436 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9435;
arg_buffer[2] = x9436;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9435))[0])();
}

}

inline void set_u45add_fptr() // set-add 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9438 = prim_car(lst);
void* const lst9440 = prim_cdr(lst);
void* const x9439 = apply_prim_set_u45add(lst9440);
arg_buffer[1] = kont9438;
arg_buffer[2] = x9439;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9438))[0])();
}
else
{
void* const kont9438 = arg_buffer[2];
void* const x9439 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9438;
arg_buffer[2] = x9439;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9438))[0])();
}

}

inline void set_u45member_u63_fptr() // set-member? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9441 = prim_car(lst);
void* const lst9443 = prim_cdr(lst);
void* const x9442 = apply_prim_set_u45member_u63(lst9443);
arg_buffer[1] = kont9441;
arg_buffer[2] = x9442;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9441))[0])();
}
else
{
void* const kont9441 = arg_buffer[2];
void* const x9442 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9441;
arg_buffer[2] = x9442;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9441))[0])();
}

}

inline void set_u45remove_fptr() // set-remove 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9444 = prim_car(lst);
void* const lst9446 = prim_cdr(lst);
void* const x9445 = apply_prim_set_u45remove(lst9446);
arg_buffer[1] = kont9444;
arg_buffer[2] = x9445;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9444))[0])();
}
else
{
void* const kont9444 = arg_buffer[2];
void* const x9445 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9444;
arg_buffer[2] = x9445;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9444))[0])();
}

}

inline void set_u45count_fptr() // set-count 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9447 = prim_car(lst);
void* const lst9449 = prim_cdr(lst);
void* const x9448 = apply_prim_set_u45count(lst9449);
arg_buffer[1] = kont9447;
arg_buffer[2] = x9448;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9447))[0])();
}
else
{
void* const kont9447 = arg_buffer[2];
void* const x9448 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9447;
arg_buffer[2] = x9448;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9447))[0])();
}

}

inline void string_u63_fptr() // string? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9450 = prim_car(lst);
void* const lst9452 = prim_cdr(lst);
void* const x9451 = apply_prim_string_u63(lst9452);
arg_buffer[1] = kont9450;
arg_buffer[2] = x9451;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9450))[0])();
}
else
{
void* const kont9450 = arg_buffer[2];
void* const x9451 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9450;
arg_buffer[2] = x9451;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9450))[0])();
}

}

inline void string_u45length_fptr() // string-length 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9453 = prim_car(lst);
void* const lst9455 = prim_cdr(lst);
void* const x9454 = apply_prim_string_u45length(lst9455);
arg_buffer[1] = kont9453;
arg_buffer[2] = x9454;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9453))[0])();
}
else
{
void* const kont9453 = arg_buffer[2];
void* const x9454 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9453;
arg_buffer[2] = x9454;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9453))[0])();
}

}

inline void string_u45ref_fptr() // string-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9456 = prim_car(lst);
void* const lst9458 = prim_cdr(lst);
void* const x9457 = apply_prim_string_u45ref(lst9458);
arg_buffer[1] = kont9456;
arg_buffer[2] = x9457;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9456))[0])();
}
else
{
void* const kont9456 = arg_buffer[2];
void* const x9457 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9456;
arg_buffer[2] = x9457;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9456))[0])();
}

}

inline void substring_fptr() // substring 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9459 = prim_car(lst);
void* const lst9461 = prim_cdr(lst);
void* const x9460 = apply_prim_substring(lst9461);
arg_buffer[1] = kont9459;
arg_buffer[2] = x9460;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9459))[0])();
}
else
{
void* const kont9459 = arg_buffer[2];
void* const x9460 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9459;
arg_buffer[2] = x9460;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9459))[0])();
}

}

inline void string_u45append_fptr() // string-append 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9462 = prim_car(lst);
void* const lst9464 = prim_cdr(lst);
void* const x9463 = apply_prim_string_u45append(lst9464);
arg_buffer[1] = kont9462;
arg_buffer[2] = x9463;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9462))[0])();
}
else
{
void* const kont9462 = arg_buffer[2];
void* const x9463 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9462;
arg_buffer[2] = x9463;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9462))[0])();
}

}

inline void string_u45_u62list_fptr() // string->list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9465 = prim_car(lst);
void* const lst9467 = prim_cdr(lst);
void* const x9466 = apply_prim_string_u45_u62list(lst9467);
arg_buffer[1] = kont9465;
arg_buffer[2] = x9466;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9465))[0])();
}
else
{
void* const kont9465 = arg_buffer[2];
void* const x9466 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9465;
arg_buffer[2] = x9466;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9465))[0])();
}

}

inline void exact_u45floor_fptr() // exact-floor 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9468 = prim_car(lst);
void* const lst9470 = prim_cdr(lst);
void* const x9469 = apply_prim_exact_u45floor(lst9470);
arg_buffer[1] = kont9468;
arg_buffer[2] = x9469;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9468))[0])();
}
else
{
void* const kont9468 = arg_buffer[2];
void* const x9469 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9468;
arg_buffer[2] = x9469;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9468))[0])();
}

}

inline void exact_u45ceiling_fptr() // exact-ceiling 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9471 = prim_car(lst);
void* const lst9473 = prim_cdr(lst);
void* const x9472 = apply_prim_exact_u45ceiling(lst9473);
arg_buffer[1] = kont9471;
arg_buffer[2] = x9472;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9471))[0])();
}
else
{
void* const kont9471 = arg_buffer[2];
void* const x9472 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9471;
arg_buffer[2] = x9472;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9471))[0])();
}

}

inline void exact_u45round_fptr() // exact-round 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9474 = prim_car(lst);
void* const lst9476 = prim_cdr(lst);
void* const x9475 = apply_prim_exact_u45round(lst9476);
arg_buffer[1] = kont9474;
arg_buffer[2] = x9475;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9474))[0])();
}
else
{
void* const kont9474 = arg_buffer[2];
void* const x9475 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9474;
arg_buffer[2] = x9475;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9474))[0])();
}

}

inline void abs_fptr() // abs 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9477 = prim_car(lst);
void* const lst9479 = prim_cdr(lst);
void* const x9478 = apply_prim_abs(lst9479);
arg_buffer[1] = kont9477;
arg_buffer[2] = x9478;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9477))[0])();
}
else
{
void* const kont9477 = arg_buffer[2];
void* const x9478 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9477;
arg_buffer[2] = x9478;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9477))[0])();
}

}

inline void max_fptr() // max 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9480 = prim_car(lst);
void* const lst9482 = prim_cdr(lst);
void* const x9481 = apply_prim_max(lst9482);
arg_buffer[1] = kont9480;
arg_buffer[2] = x9481;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9480))[0])();
}
else
{
void* const kont9480 = arg_buffer[2];
void* const x9481 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9480;
arg_buffer[2] = x9481;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9480))[0])();
}

}

inline void min_fptr() // min 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9483 = prim_car(lst);
void* const lst9485 = prim_cdr(lst);
void* const x9484 = apply_prim_min(lst9485);
arg_buffer[1] = kont9483;
arg_buffer[2] = x9484;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9483))[0])();
}
else
{
void* const kont9483 = arg_buffer[2];
void* const x9484 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9483;
arg_buffer[2] = x9484;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9483))[0])();
}

}

inline void expt_fptr() // expt 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9486 = prim_car(lst);
void* const lst9488 = prim_cdr(lst);
void* const x9487 = apply_prim_expt(lst9488);
arg_buffer[1] = kont9486;
arg_buffer[2] = x9487;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9486))[0])();
}
else
{
void* const kont9486 = arg_buffer[2];
void* const x9487 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9486;
arg_buffer[2] = x9487;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9486))[0])();
}

}

inline void sqrt_fptr() // sqrt 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9489 = prim_car(lst);
void* const lst9491 = prim_cdr(lst);
void* const x9490 = apply_prim_sqrt(lst9491);
arg_buffer[1] = kont9489;
arg_buffer[2] = x9490;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9489))[0])();
}
else
{
void* const kont9489 = arg_buffer[2];
void* const x9490 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9489;
arg_buffer[2] = x9490;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9489))[0])();
}

}

inline void remainder_fptr() // remainder 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9492 = prim_car(lst);
void* const lst9494 = prim_cdr(lst);
void* const x9493 = apply_prim_remainder(lst9494);
arg_buffer[1] = kont9492;
arg_buffer[2] = x9493;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9492))[0])();
}
else
{
void* const kont9492 = arg_buffer[2];
void* const x9493 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9492;
arg_buffer[2] = x9493;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9492))[0])();
}

}

inline void quotient_fptr() // quotient 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9495 = prim_car(lst);
void* const lst9497 = prim_cdr(lst);
void* const x9496 = apply_prim_quotient(lst9497);
arg_buffer[1] = kont9495;
arg_buffer[2] = x9496;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9495))[0])();
}
else
{
void* const kont9495 = arg_buffer[2];
void* const x9496 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9495;
arg_buffer[2] = x9496;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9495))[0])();
}

}

inline void random_fptr() // random 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9498 = prim_car(lst);
void* const lst9500 = prim_cdr(lst);
void* const x9499 = apply_prim_random(lst9500);
arg_buffer[1] = kont9498;
arg_buffer[2] = x9499;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9498))[0])();
}
else
{
void* const kont9498 = arg_buffer[2];
void* const x9499 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9498;
arg_buffer[2] = x9499;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9498))[0])();
}

}

inline void symbol_u63_fptr() // symbol? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9501 = prim_car(lst);
void* const lst9503 = prim_cdr(lst);
void* const x9502 = apply_prim_symbol_u63(lst9503);
arg_buffer[1] = kont9501;
arg_buffer[2] = x9502;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9501))[0])();
}
else
{
void* const kont9501 = arg_buffer[2];
void* const x9502 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9501;
arg_buffer[2] = x9502;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9501))[0])();
}

}

inline void pair_u63_fptr() // pair? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9504 = prim_car(lst);
void* const lst9506 = prim_cdr(lst);
void* const x9505 = apply_prim_pair_u63(lst9506);
arg_buffer[1] = kont9504;
arg_buffer[2] = x9505;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9504))[0])();
}
else
{
void* const kont9504 = arg_buffer[2];
void* const x9505 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9504;
arg_buffer[2] = x9505;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9504))[0])();
}

}

inline void positive_u63_fptr() // positive? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9507 = prim_car(lst);
void* const lst9509 = prim_cdr(lst);
void* const x9508 = apply_prim_positive_u63(lst9509);
arg_buffer[1] = kont9507;
arg_buffer[2] = x9508;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9507))[0])();
}
else
{
void* const kont9507 = arg_buffer[2];
void* const x9508 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9507;
arg_buffer[2] = x9508;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9507))[0])();
}

}

inline void negative_u63_fptr() // negative? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9510 = prim_car(lst);
void* const lst9512 = prim_cdr(lst);
void* const x9511 = apply_prim_negative_u63(lst9512);
arg_buffer[1] = kont9510;
arg_buffer[2] = x9511;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9510))[0])();
}
else
{
void* const kont9510 = arg_buffer[2];
void* const x9511 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9510;
arg_buffer[2] = x9511;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9510))[0])();
}

}

inline void list_fptr() // list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9513 = prim_car(lst);
void* const lst9515 = prim_cdr(lst);
void* const x9514 = apply_prim_list(lst9515);
arg_buffer[1] = kont9513;
arg_buffer[2] = x9514;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9513))[0])();
}
else
{
void* const kont9513 = arg_buffer[2];
void* const x9514 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9513;
arg_buffer[2] = x9514;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9513))[0])();
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont9046 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9046)[0])(kont9046, apply_prim_equal_u63_2(int9347, apply_prim_modulo_2(x, int9350)));
}

inline void even_u63_spec(void* _9142, void* kont9046, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9046)[0])(kont9046, apply_prim_equal_u63_2(int9347, apply_prim_modulo_2(x, int9350)));
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont9047 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9047)[0])(kont9047, apply_prim_equal_u63_2(int9356, apply_prim_modulo_2(x, int9350)));
}

inline void odd_u63_spec(void* _9143, void* kont9047, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9047)[0])(kont9047, apply_prim_equal_u63_2(int9356, apply_prim_modulo_2(x, int9350)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont9048 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9347, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9048)[0])(kont9048, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont9048, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9356));
}

}

inline void list_u45ref_spec(void* _9144, void* kont9048, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9347, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9048)[0])(kont9048, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont9048, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9356));
}

}

inline void lam9145_fptr() // lam9145 -> generic version 
{
//reading env
void* const env9146 = arg_buffer[1];
//reading env and args
void* const id_8745 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9146);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9317);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void lam9145_spec(void* env9146, void* id_8745) // lam9145 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9146);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9317);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont9049 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9516 = alloc_kont(lam9145_spec, 3);

//setting env list
clo9516[1] = kont9049;
clo9516[2] = item;
clo9516[3] = lst;
void* f_lam_9050 = encode_clo(clo9516);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam9145_spec(f_lam_9050, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam9145_spec(f_lam_9050, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _9147, void* kont9049, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9517 = alloc_kont(lam9145_spec, 3);

//setting env list
clo9517[1] = kont9049;
clo9517[2] = item;
clo9517[3] = lst;
void* f_lam_9050 = encode_clo(clo9517);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam9145_spec(f_lam_9050, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam9145_spec(f_lam_9050, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont9051 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9051)[0])(kont9051, bool_f9317);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9051)[0])(kont9051, bool_t9307);
}
else
{

//clo-app
member_u63_spec(member_u63, kont9051, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _9148, void* kont9051, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9051)[0])(kont9051, bool_f9317);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9051)[0])(kont9051, bool_t9307);
}
else
{

//clo-app
member_u63_spec(member_u63, kont9051, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam9149_fptr() // lam9149 -> generic version 
{
//reading env
void* const env9150 = arg_buffer[1];
//reading env and args
void* const id_8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9150);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void lam9149_spec(void* env9150, void* id_8760) // lam9149 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9150);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8760));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont9052 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9052)[0])(kont9052, int9347);
}
else
{

//creating new make-kont closure
void** clo9518 = alloc_kont(lam9149_spec, 2);

//setting env list
clo9518[1] = kont9052;
clo9518[2] = int9356;
void* f_lam_9053 = encode_clo(clo9518);



//clo-app
length_spec(length, f_lam_9053, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _9151, void* kont9052, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9052)[0])(kont9052, int9347);
}
else
{

//creating new make-kont closure
void** clo9519 = alloc_kont(lam9149_spec, 2);

//setting env list
clo9519[1] = kont9052;
clo9519[2] = int9356;
void* f_lam_9053 = encode_clo(clo9519);



//clo-app
length_spec(length, f_lam_9053, apply_prim_cdr_1(lst));
}

}

inline void lam9152_fptr() // lam9152 -> generic version 
{
//reading env
void* const env9153 = arg_buffer[1];
//reading env and args
void* const id_8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9153);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam9152_spec(void* env9153, void* id_8766) // lam9152 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9153);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8766));
}

inline void lam9154_fptr() // lam9154 -> generic version 
{
//reading env
void* const env9155 = arg_buffer[1];
//reading env and args
void* const id_8764 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9155);

//creating new make-kont closure
void** clo9520 = alloc_kont(lam9152_spec, 2);

//setting env list
clo9520[1] = decode_clo_array[1];
clo9520[2] = id_8764;
void* f_lam_9055 = encode_clo(clo9520);



//clo-app
map_spec(map, f_lam_9055, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam9154_spec(void* env9155, void* id_8764) // lam9154 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9155);

//creating new make-kont closure
void** clo9521 = alloc_kont(lam9152_spec, 2);

//setting env list
clo9521[1] = decode_clo_array[1];
clo9521[2] = id_8764;
void* f_lam_9055 = encode_clo(clo9521);



//clo-app
map_spec(map, f_lam_9055, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont9054 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9054)[0])(kont9054, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9522 = alloc_kont(lam9154_spec, 3);

//setting env list
clo9522[1] = kont9054;
clo9522[2] = proc;
clo9522[3] = lst;
void* f_lam_9056 = encode_clo(clo9522);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_9056;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _9156, void* kont9054, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9054)[0])(kont9054, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9523 = alloc_kont(lam9154_spec, 3);

//setting env list
clo9523[1] = kont9054;
clo9523[2] = proc;
clo9523[3] = lst;
void* f_lam_9056 = encode_clo(clo9523);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_9056;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam9157_fptr() // lam9157 -> generic version 
{
//reading env
void* const env9158 = arg_buffer[1];
//reading env and args
void* const id_8773 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9158);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8773));
}

inline void lam9157_spec(void* env9158, void* id_8773) // lam9157 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9158);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8773));
}

inline void lam9159_fptr() // lam9159 -> generic version 
{
//reading env
void* const env9160 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9160);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9524 = alloc_kont(lam9157_spec, 2);

//setting env list
clo9524[1] = apply_prim_car_1(decode_clo_array[2]);
clo9524[2] = decode_clo_array[3];
void* f_lam_9058 = encode_clo(clo9524);



//clo-app
filter_spec(filter, f_lam_9058, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam9159_spec(void* env9160, void* id_8770) // lam9159 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9160);

//if-clause
if(is_true(id_8770))
{

//creating new make-kont closure
void** clo9525 = alloc_kont(lam9157_spec, 2);

//setting env list
clo9525[1] = apply_prim_car_1(decode_clo_array[2]);
clo9525[2] = decode_clo_array[3];
void* f_lam_9058 = encode_clo(clo9525);



//clo-app
filter_spec(filter, f_lam_9058, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont9057 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9057)[0])(kont9057, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9526 = alloc_kont(lam9159_spec, 3);

//setting env list
clo9526[1] = op;
clo9526[2] = lst;
clo9526[3] = kont9057;
void* f_lam_9059 = encode_clo(clo9526);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_9059;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _9161, void* kont9057, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9057)[0])(kont9057, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9527 = alloc_kont(lam9159_spec, 3);

//setting env list
clo9527[1] = op;
clo9527[2] = lst;
clo9527[3] = kont9057;
void* f_lam_9059 = encode_clo(clo9527);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_9059;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont9060 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9347)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9060)[0])(kont9060, lst);
}
else
{

//clo-app
drop_spec(drop, kont9060, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9356));
}

}

inline void drop_spec(void* _9162, void* kont9060, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9347)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9060)[0])(kont9060, lst);
}
else
{

//clo-app
drop_spec(drop, kont9060, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9356));
}

}

inline void lam9163_fptr() // lam9163 -> generic version 
{
//reading env
void* const env9164 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9164);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8782, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam9163_spec(void* env9164, void* id_8782) // lam9163 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9164);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8782, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont9061 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9061)[0])(kont9061, acc);
}
else
{

//creating new make-kont closure
void** clo9528 = alloc_kont(lam9163_spec, 3);

//setting env list
clo9528[1] = kont9061;
clo9528[2] = lst;
clo9528[3] = fun;
void* f_lam_9062 = encode_clo(clo9528);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_9062;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _9165, void* kont9061, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9061)[0])(kont9061, acc);
}
else
{

//creating new make-kont closure
void** clo9529 = alloc_kont(lam9163_spec, 3);

//setting env list
clo9529[1] = kont9061;
clo9529[2] = lst;
clo9529[3] = fun;
void* f_lam_9062 = encode_clo(clo9529);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_9062;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam9166_fptr() // lam9166 -> generic version 
{
//reading env
void* const env9167 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9167);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8787;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9166_spec(void* env9167, void* id_8787) // lam9166 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9167);

//clo-app
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
//reading env and args
void* const kont9063 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9063)[0])(kont9063, acc);
}
else
{

//creating new make-kont closure
void** clo9530 = alloc_kont(lam9166_spec, 3);

//setting env list
clo9530[1] = fun;
clo9530[2] = kont9063;
clo9530[3] = apply_prim_car_1(lst);
void* f_lam_9064 = encode_clo(clo9530);



//clo-app
foldr_spec(foldr, f_lam_9064, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _9168, void* kont9063, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9063)[0])(kont9063, acc);
}
else
{

//creating new make-kont closure
void** clo9531 = alloc_kont(lam9166_spec, 3);

//setting env list
clo9531[1] = fun;
clo9531[2] = kont9063;
clo9531[3] = apply_prim_car_1(lst);
void* f_lam_9064 = encode_clo(clo9531);



//clo-app
foldr_spec(foldr, f_lam_9064, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont9065 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9065)[0])(kont9065, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9065, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _9169, void* kont9065, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9065)[0])(kont9065, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9065, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont9066 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9066, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _9170, void* kont9066, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9066, lst, apply_prim_list_0());
}

inline void lam9171_fptr() // lam9171 -> generic version 
{
//reading env
void* const env9172 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9172);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void lam9171_spec(void* env9172, void* id_8796) // lam9171 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9172);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8796));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont9067 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9067)[0])(kont9067, rhs);
}
else
{

//creating new make-kont closure
void** clo9532 = alloc_kont(lam9171_spec, 2);

//setting env list
clo9532[1] = kont9067;
clo9532[2] = apply_prim_car_1(lhs);
void* f_lam_9068 = encode_clo(clo9532);



//clo-app
append1_spec(append1, f_lam_9068, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _9173, void* kont9067, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9067)[0])(kont9067, rhs);
}
else
{

//creating new make-kont closure
void** clo9533 = alloc_kont(lam9171_spec, 2);

//setting env list
clo9533[1] = kont9067;
clo9533[2] = apply_prim_car_1(lhs);
void* f_lam_9068 = encode_clo(clo9533);



//clo-app
append1_spec(append1, f_lam_9068, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam9174_fptr() // lam9174 -> generic version 
{
//reading env
void* const env9175 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9175);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam9174_spec(void* env9175, void* id_8803) // lam9174 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9175);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8803);
}

inline void lam9176_fptr() // lam9176 -> generic version 
{
//reading env
void* const env9177 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9177);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[2], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[1], decode_clo_array[3], apply_prim_car_1(decode_clo_array[4]));
}
else
{

//creating new make-kont closure
void** clo9534 = alloc_kont(lam9174_spec, 2);

//setting env list
clo9534[1] = decode_clo_array[1];
clo9534[2] = apply_prim_list_0();
void* f_lam_9070 = encode_clo(clo9534);



//clo-app
append1_spec(append1, f_lam_9070, apply_prim_list_1(decode_clo_array[3]), decode_clo_array[4]);
}

}

inline void lam9176_spec(void* env9177, void* id_8798) // lam9176 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9177);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[2], id_8798)))
{

//clo-app
append1_spec(append1, decode_clo_array[1], decode_clo_array[3], apply_prim_car_1(decode_clo_array[4]));
}
else
{

//creating new make-kont closure
void** clo9535 = alloc_kont(lam9174_spec, 2);

//setting env list
clo9535[1] = decode_clo_array[1];
clo9535[2] = apply_prim_list_0();
void* f_lam_9070 = encode_clo(clo9535);



//clo-app
append1_spec(append1, f_lam_9070, apply_prim_list_1(decode_clo_array[3]), decode_clo_array[4]);
}

}

inline void lam9178_fptr() // lam9178 -> generic version 
{
//reading env
void* const env9179 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9179);

//creating new make-kont closure
void** clo9536 = alloc_kont(lam9176_spec, 4);

//setting env list
clo9536[1] = decode_clo_array[2];
clo9536[2] = int9356;
clo9536[3] = decode_clo_array[1];
clo9536[4] = x;
void* f_lam_9071 = encode_clo(clo9536);



//clo-app
length_spec(length, f_lam_9071, x);
}

inline void lam9178_spec(void* env9179, void* x) // lam9178 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9179);

//creating new make-kont closure
void** clo9537 = alloc_kont(lam9176_spec, 4);

//setting env list
clo9537[1] = decode_clo_array[2];
clo9537[2] = int9356;
clo9537[3] = decode_clo_array[1];
clo9537[4] = x;
void* f_lam_9071 = encode_clo(clo9537);



//clo-app
length_spec(length, f_lam_9071, x);
}

void append_fptr() // append 
{
//reading env
void* const _9180 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* vargs = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
vargs = arg_buffer[2];
}
else
{
//building cons cell
vargs = encode_null();
for(int i = numArgs; i >= 2; i--)
{
vargs = prim_cons(arg_buffer[i], vargs);

}

}


//creating new make-kont closure
void** clo9538 = alloc_kont(lam9178_spec, 2);

//setting env list
clo9538[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9538[2] = apply_prim_car_1(vargs);
void* f_lam_9072 = encode_clo(clo9538);


// kont-clo-app case
lam9178_spec(f_lam_9072, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam9181_fptr() // lam9181 -> generic version 
{
//reading env
void* const env9182 = arg_buffer[1];
//reading env and args
void* const xy8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9182);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void lam9181_spec(void* env9182, void* xy8806) // lam9181 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9182);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8806);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont9073 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9347)))
{

//creating new make-kont closure
void** clo9539 = alloc_kont(lam9181_spec, 1);

//setting env list
clo9539[1] = kont9073;
void* f_lam_9074 = encode_clo(clo9539);



//clo-app
reverse_spec(reverse, f_lam_9074, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont9073, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9356), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _9183, void* kont9073, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9347)))
{

//creating new make-kont closure
void** clo9540 = alloc_kont(lam9181_spec, 1);

//setting env list
clo9540[1] = kont9073;
void* f_lam_9074 = encode_clo(clo9540);



//clo-app
reverse_spec(reverse, f_lam_9074, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont9073, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9356), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont9075 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont9075, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _9184, void* kont9075, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont9075, lst, n, apply_prim_list_0());
}

inline void lam9185_fptr() // lam9185 -> generic version 
{
//reading env
void* const env9186 = arg_buffer[1];
//reading env and args
void* const r = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9186);

//if-clause
if(is_true(apply_prim__u61_2(r, int9347)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], int9356));
}

}

inline void lam9185_spec(void* env9186, void* r) // lam9185 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9186);

//if-clause
if(is_true(apply_prim__u61_2(r, int9347)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], int9356));
}

}

inline void lam9187_fptr() // lam9187 -> generic version 
{
//reading env
void* const env9188 = arg_buffer[1];
//reading env and args
void* const r = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9188);

//if-clause
if(is_true(apply_prim__u61_2(r, int9347)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u45_2(decode_clo_array[2], int9356));
}

}

inline void lam9187_spec(void* env9188, void* r) // lam9187 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9188);

//if-clause
if(is_true(apply_prim__u61_2(r, int9347)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u45_2(decode_clo_array[2], int9356));
}

}

inline void lam9189_fptr() // lam9189 -> generic version 
{
//reading env
void* const env9190 = arg_buffer[1];
//reading env and args
void* const id_8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9190);

//if-clause
if(is_true(id_8818))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]));
}
else
{

//if-clause
if(is_true(apply_prim__u60_2(decode_clo_array[2], int9347)))
{

//creating new make-kont closure
void** clo9541 = alloc_kont(lam9185_spec, 2);

//setting env list
clo9541[1] = decode_clo_array[3];
clo9541[2] = apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]);
void* f_lam_9077 = encode_clo(clo9541);


// kont-clo-app case
lam9185_spec(f_lam_9077, apply_prim__u45_2(decode_clo_array[1], apply_prim__u42_2(apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]), decode_clo_array[2])));
}
else
{

//creating new make-kont closure
void** clo9542 = alloc_kont(lam9187_spec, 2);

//setting env list
clo9542[1] = decode_clo_array[3];
clo9542[2] = apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]);
void* f_lam_9078 = encode_clo(clo9542);


// kont-clo-app case
lam9187_spec(f_lam_9078, apply_prim__u45_2(decode_clo_array[1], apply_prim__u42_2(apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]), decode_clo_array[2])));
}

}

}

inline void lam9189_spec(void* env9190, void* id_8818) // lam9189 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9190);

//if-clause
if(is_true(id_8818))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]));
}
else
{

//if-clause
if(is_true(apply_prim__u60_2(decode_clo_array[2], int9347)))
{

//creating new make-kont closure
void** clo9543 = alloc_kont(lam9185_spec, 2);

//setting env list
clo9543[1] = decode_clo_array[3];
clo9543[2] = apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]);
void* f_lam_9077 = encode_clo(clo9543);


// kont-clo-app case
lam9185_spec(f_lam_9077, apply_prim__u45_2(decode_clo_array[1], apply_prim__u42_2(apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]), decode_clo_array[2])));
}
else
{

//creating new make-kont closure
void** clo9544 = alloc_kont(lam9187_spec, 2);

//setting env list
clo9544[1] = decode_clo_array[3];
clo9544[2] = apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]);
void* f_lam_9078 = encode_clo(clo9544);


// kont-clo-app case
lam9187_spec(f_lam_9078, apply_prim__u45_2(decode_clo_array[1], apply_prim__u42_2(apply_prim_quotient_2(decode_clo_array[1], decode_clo_array[2]), decode_clo_array[2])));
}

}

}

inline void mydiv_fptr() // mydiv -> generic version 
{
//reading env and args
void* const kont9076 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const y = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9545 = alloc_kont(lam9189_spec, 3);

//setting env list
clo9545[1] = x;
clo9545[2] = y;
clo9545[3] = kont9076;
void* f_lam_9079 = encode_clo(clo9545);



//if-clause
if(is_true(apply_prim_positive_u63_1(x)))
{

//if-clause
if(is_true(apply_prim_positive_u63_1(y)))
{
// kont-clo-app case
lam9189_spec(f_lam_9079, apply_prim__u62_u61_2(x, int9347));
}
else
{
// kont-clo-app case
lam9189_spec(f_lam_9079, bool_f9317);
}

}
else
{
// kont-clo-app case
lam9189_spec(f_lam_9079, bool_f9317);
}

}

inline void mydiv_spec(void* _9191, void* kont9076, void* x, void* y) // mydiv 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9546 = alloc_kont(lam9189_spec, 3);

//setting env list
clo9546[1] = x;
clo9546[2] = y;
clo9546[3] = kont9076;
void* f_lam_9079 = encode_clo(clo9546);



//if-clause
if(is_true(apply_prim_positive_u63_1(x)))
{

//if-clause
if(is_true(apply_prim_positive_u63_1(y)))
{
// kont-clo-app case
lam9189_spec(f_lam_9079, apply_prim__u62_u61_2(x, int9347));
}
else
{
// kont-clo-app case
lam9189_spec(f_lam_9079, bool_f9317);
}

}
else
{
// kont-clo-app case
lam9189_spec(f_lam_9079, bool_f9317);
}

}

inline void width_fptr() // width -> generic version 
{
//reading env and args
void* const kont9080 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const i = arg_buffer[4];
void* const n = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(x, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9080)[0])(kont9080, i);
}
else
{

//clo-app
width_spec(width, kont9080, x, apply_prim__u43_2(i, int9356), apply_prim__u42_2(n, int9350));
}

}

inline void width_spec(void* _9192, void* kont9080, void* x, void* i, void* n) // width 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(x, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9080)[0])(kont9080, i);
}
else
{

//clo-app
width_spec(width, kont9080, x, apply_prim__u43_2(i, int9356), apply_prim__u42_2(n, int9350));
}

}

inline void lam9193_fptr() // lam9193 -> generic version 
{
//reading env
void* const env9194 = arg_buffer[1];
//reading env and args
void* const xy8842 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9194);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8842);
}

inline void lam9193_spec(void* env9194, void* xy8842) // lam9193 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9194);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8842);
}

inline void lam9195_fptr() // lam9195 -> generic version 
{
//reading env
void* const env9196 = arg_buffer[1];
//reading env and args
void* const d = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9196);

//if-clause
if(is_true(apply_prim__u60_2(d, decode_clo_array[4])))
{

//creating new make-kont closure
void** clo9547 = alloc_kont(lam9193_spec, 1);

//setting env list
clo9547[1] = decode_clo_array[3];
void* f_lam_9082 = encode_clo(clo9547);



//clo-app
root_u45helper_spec(root_u45helper, f_lam_9082, d, decode_clo_array[1], decode_clo_array[2]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[4]);
}

}

inline void lam9195_spec(void* env9196, void* d) // lam9195 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9196);

//if-clause
if(is_true(apply_prim__u60_2(d, decode_clo_array[4])))
{

//creating new make-kont closure
void** clo9548 = alloc_kont(lam9193_spec, 1);

//setting env list
clo9548[1] = decode_clo_array[3];
void* f_lam_9082 = encode_clo(clo9548);



//clo-app
root_u45helper_spec(root_u45helper, f_lam_9082, d, decode_clo_array[1], decode_clo_array[2]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[4]);
}

}

inline void lam9197_fptr() // lam9197 -> generic version 
{
//reading env
void* const env9198 = arg_buffer[1];
//reading env and args
void* const c = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9198);

//creating new make-kont closure
void** clo9549 = alloc_kont(lam9195_spec, 4);

//setting env list
clo9549[1] = decode_clo_array[1];
clo9549[2] = decode_clo_array[2];
clo9549[3] = decode_clo_array[3];
clo9549[4] = decode_clo_array[4];
void* f_lam_9083 = encode_clo(clo9549);



//clo-app
mydiv_spec(mydiv, f_lam_9083, apply_prim__u43_2(decode_clo_array[1], apply_prim__u42_2(decode_clo_array[4], c)), decode_clo_array[5]);
}

inline void lam9197_spec(void* env9198, void* c) // lam9197 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9198);

//creating new make-kont closure
void** clo9550 = alloc_kont(lam9195_spec, 4);

//setting env list
clo9550[1] = decode_clo_array[1];
clo9550[2] = decode_clo_array[2];
clo9550[3] = decode_clo_array[3];
clo9550[4] = decode_clo_array[4];
void* f_lam_9083 = encode_clo(clo9550);



//clo-app
mydiv_spec(mydiv, f_lam_9083, apply_prim__u43_2(decode_clo_array[1], apply_prim__u42_2(decode_clo_array[4], c)), decode_clo_array[5]);
}

inline void lam9199_fptr() // lam9199 -> generic version 
{
//reading env
void* const env9200 = arg_buffer[1];
//reading env and args
void* const a = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9200);

//creating new make-kont closure
void** clo9551 = alloc_kont(lam9197_spec, 5);

//setting env list
clo9551[1] = decode_clo_array[1];
clo9551[2] = decode_clo_array[2];
clo9551[3] = decode_clo_array[3];
clo9551[4] = decode_clo_array[4];
clo9551[5] = apply_prim__u42_2(a, decode_clo_array[2]);
void* f_lam_9084 = encode_clo(clo9551);


// kont-clo-app case
lam9197_spec(f_lam_9084, apply_prim__u42_2(a, apply_prim__u45_2(decode_clo_array[2], int9356)));
}

inline void lam9199_spec(void* env9200, void* a) // lam9199 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9200);

//creating new make-kont closure
void** clo9552 = alloc_kont(lam9197_spec, 5);

//setting env list
clo9552[1] = decode_clo_array[1];
clo9552[2] = decode_clo_array[2];
clo9552[3] = decode_clo_array[3];
clo9552[4] = decode_clo_array[4];
clo9552[5] = apply_prim__u42_2(a, decode_clo_array[2]);
void* f_lam_9084 = encode_clo(clo9552);


// kont-clo-app case
lam9197_spec(f_lam_9084, apply_prim__u42_2(a, apply_prim__u45_2(decode_clo_array[2], int9356)));
}

inline void root_u45helper_fptr() // root-helper -> generic version 
{
//reading env and args
void* const kont9081 = arg_buffer[2];
void* const g = arg_buffer[3];
void* const x = arg_buffer[4];
void* const y = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9553 = alloc_kont(lam9199_spec, 4);

//setting env list
clo9553[1] = x;
clo9553[2] = y;
clo9553[3] = kont9081;
clo9553[4] = g;
void* f_lam_9085 = encode_clo(clo9553);


// kont-clo-app case
lam9199_spec(f_lam_9085, apply_prim_expt_2(g, apply_prim__u45_2(y, int9356)));
}

inline void root_u45helper_spec(void* _9201, void* kont9081, void* g, void* x, void* y) // root-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9554 = alloc_kont(lam9199_spec, 4);

//setting env list
clo9554[1] = x;
clo9554[2] = y;
clo9554[3] = kont9081;
clo9554[4] = g;
void* f_lam_9085 = encode_clo(clo9554);


// kont-clo-app case
lam9199_spec(f_lam_9085, apply_prim_expt_2(g, apply_prim__u45_2(y, int9356)));
}

inline void lam9202_fptr() // lam9202 -> generic version 
{
//reading env
void* const env9203 = arg_buffer[1];
//reading env and args
void* const id_8850 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9203);

//clo-app
root_u45helper_spec(root_u45helper, decode_clo_array[3], apply_prim_expt_2(decode_clo_array[1], id_8850), decode_clo_array[4], decode_clo_array[2]);
}

inline void lam9202_spec(void* env9203, void* id_8850) // lam9202 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9203);

//clo-app
root_u45helper_spec(root_u45helper, decode_clo_array[3], apply_prim_expt_2(decode_clo_array[1], id_8850), decode_clo_array[4], decode_clo_array[2]);
}

inline void lam9204_fptr() // lam9204 -> generic version 
{
//reading env
void* const env9205 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9205);

//creating new make-kont closure
void** clo9555 = alloc_kont(lam9202_spec, 4);

//setting env list
clo9555[1] = decode_clo_array[1];
clo9555[2] = decode_clo_array[2];
clo9555[3] = decode_clo_array[3];
clo9555[4] = decode_clo_array[4];
void* f_lam_9087 = encode_clo(clo9555);



//clo-app
mydiv_spec(mydiv, f_lam_9087, apply_prim__u43_2(id_8846, apply_prim__u45_2(decode_clo_array[2], int9356)), decode_clo_array[2]);
}

inline void lam9204_spec(void* env9205, void* id_8846) // lam9204 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9205);

//creating new make-kont closure
void** clo9556 = alloc_kont(lam9202_spec, 4);

//setting env list
clo9556[1] = decode_clo_array[1];
clo9556[2] = decode_clo_array[2];
clo9556[3] = decode_clo_array[3];
clo9556[4] = decode_clo_array[4];
void* f_lam_9087 = encode_clo(clo9556);



//clo-app
mydiv_spec(mydiv, f_lam_9087, apply_prim__u43_2(id_8846, apply_prim__u45_2(decode_clo_array[2], int9356)), decode_clo_array[2]);
}

inline void root_fptr() // root -> generic version 
{
//reading env and args
void* const kont9086 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const y = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9557 = alloc_kont(lam9204_spec, 4);

//setting env list
clo9557[1] = int9350;
clo9557[2] = y;
clo9557[3] = kont9086;
clo9557[4] = x;
void* f_lam_9088 = encode_clo(clo9557);



//clo-app
width_spec(width, f_lam_9088, x, int9347, int9356);
}

inline void root_spec(void* _9206, void* kont9086, void* x, void* y) // root 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9558 = alloc_kont(lam9204_spec, 4);

//setting env list
clo9558[1] = int9350;
clo9558[2] = y;
clo9558[3] = kont9086;
clo9558[4] = x;
void* f_lam_9088 = encode_clo(clo9558);



//clo-app
width_spec(width, f_lam_9088, x, int9347, int9356);
}

inline void square_u45root_fptr() // square-root -> generic version 
{
//reading env and args
void* const kont9089 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
root_spec(root, kont9089, x, int9350);
}

inline void square_u45root_spec(void* _9207, void* kont9089, void* x) // square-root 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
root_spec(root, kont9089, x, int9350);
}

inline void quartic_u45root_fptr() // quartic-root -> generic version 
{
//reading env and args
void* const kont9090 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
root_spec(root, kont9090, x, int9352);
}

inline void quartic_u45root_spec(void* _9208, void* kont9090, void* x) // quartic-root 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
root_spec(root, kont9090, x, int9352);
}

inline void square_fptr() // square -> generic version 
{
//reading env and args
void* const kont9091 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9091)[0])(kont9091, apply_prim__u42_2(x, x));
}

inline void square_spec(void* _9209, void* kont9091, void* x) // square 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9091)[0])(kont9091, apply_prim__u42_2(x, x));
}

inline void lam9210_fptr() // lam9210 -> generic version 
{
//reading env
void* const env9211 = arg_buffer[1];
//reading env and args
void* const id_8857 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9211);

//clo-app
mydiv_spec(mydiv, decode_clo_array[2], id_8857, apply_prim__u42_2(int9352, decode_clo_array[1]));
}

inline void lam9210_spec(void* env9211, void* id_8857) // lam9210 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9211);

//clo-app
mydiv_spec(mydiv, decode_clo_array[2], id_8857, apply_prim__u42_2(int9352, decode_clo_array[1]));
}

inline void lam9212_fptr() // lam9212 -> generic version 
{
//reading env
void* const env9213 = arg_buffer[1];
//reading env and args
void* const id_8867 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9213);

//clo-app
pi_u45brent_u45salamin_u45helper_spec(pi_u45brent_u45salamin_u45helper, decode_clo_array[5], decode_clo_array[6], decode_clo_array[1], decode_clo_array[3], apply_prim__u45_2(decode_clo_array[4], id_8867), apply_prim__u42_2(int9350, decode_clo_array[2]));
}

inline void lam9212_spec(void* env9213, void* id_8867) // lam9212 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9213);

//clo-app
pi_u45brent_u45salamin_u45helper_spec(pi_u45brent_u45salamin_u45helper, decode_clo_array[5], decode_clo_array[6], decode_clo_array[1], decode_clo_array[3], apply_prim__u45_2(decode_clo_array[4], id_8867), apply_prim__u42_2(int9350, decode_clo_array[2]));
}

inline void lam9214_fptr() // lam9214 -> generic version 
{
//reading env
void* const env9215 = arg_buffer[1];
//reading env and args
void* const id_8865 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9215);

//creating new make-kont closure
void** clo9559 = alloc_kont(lam9212_spec, 6);

//setting env list
clo9559[1] = decode_clo_array[1];
clo9559[2] = decode_clo_array[2];
clo9559[3] = decode_clo_array[3];
clo9559[4] = decode_clo_array[4];
clo9559[5] = decode_clo_array[5];
clo9559[6] = decode_clo_array[6];
void* f_lam_9094 = encode_clo(clo9559);



//clo-app
mydiv_spec(mydiv, f_lam_9094, apply_prim__u42_2(decode_clo_array[2], id_8865), decode_clo_array[6]);
}

inline void lam9214_spec(void* env9215, void* id_8865) // lam9214 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9215);

//creating new make-kont closure
void** clo9560 = alloc_kont(lam9212_spec, 6);

//setting env list
clo9560[1] = decode_clo_array[1];
clo9560[2] = decode_clo_array[2];
clo9560[3] = decode_clo_array[3];
clo9560[4] = decode_clo_array[4];
clo9560[5] = decode_clo_array[5];
clo9560[6] = decode_clo_array[6];
void* f_lam_9094 = encode_clo(clo9560);



//clo-app
mydiv_spec(mydiv, f_lam_9094, apply_prim__u42_2(decode_clo_array[2], id_8865), decode_clo_array[6]);
}

inline void lam9216_fptr() // lam9216 -> generic version 
{
//reading env
void* const env9217 = arg_buffer[1];
//reading env and args
void* const id_8863 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9217);

//creating new make-kont closure
void** clo9561 = alloc_kont(lam9214_spec, 6);

//setting env list
clo9561[1] = decode_clo_array[1];
clo9561[2] = decode_clo_array[2];
clo9561[3] = id_8863;
clo9561[4] = decode_clo_array[3];
clo9561[5] = decode_clo_array[4];
clo9561[6] = decode_clo_array[6];
void* f_lam_9095 = encode_clo(clo9561);



//clo-app
square_spec(square, f_lam_9095, apply_prim__u45_2(decode_clo_array[1], decode_clo_array[5]));
}

inline void lam9216_spec(void* env9217, void* id_8863) // lam9216 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9217);

//creating new make-kont closure
void** clo9562 = alloc_kont(lam9214_spec, 6);

//setting env list
clo9562[1] = decode_clo_array[1];
clo9562[2] = decode_clo_array[2];
clo9562[3] = id_8863;
clo9562[4] = decode_clo_array[3];
clo9562[5] = decode_clo_array[4];
clo9562[6] = decode_clo_array[6];
void* f_lam_9095 = encode_clo(clo9562);



//clo-app
square_spec(square, f_lam_9095, apply_prim__u45_2(decode_clo_array[1], decode_clo_array[5]));
}

inline void lam9218_fptr() // lam9218 -> generic version 
{
//reading env
void* const env9219 = arg_buffer[1];
//reading env and args
void* const new_u45a = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9219);

//creating new make-kont closure
void** clo9563 = alloc_kont(lam9216_spec, 6);

//setting env list
clo9563[1] = new_u45a;
clo9563[2] = decode_clo_array[3];
clo9563[3] = decode_clo_array[4];
clo9563[4] = decode_clo_array[5];
clo9563[5] = decode_clo_array[6];
clo9563[6] = decode_clo_array[2];
void* f_lam_9096 = encode_clo(clo9563);



//clo-app
square_u45root_spec(square_u45root, f_lam_9096, apply_prim__u42_2(decode_clo_array[6], decode_clo_array[1]));
}

inline void lam9218_spec(void* env9219, void* new_u45a) // lam9218 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9219);

//creating new make-kont closure
void** clo9564 = alloc_kont(lam9216_spec, 6);

//setting env list
clo9564[1] = new_u45a;
clo9564[2] = decode_clo_array[3];
clo9564[3] = decode_clo_array[4];
clo9564[4] = decode_clo_array[5];
clo9564[5] = decode_clo_array[6];
clo9564[6] = decode_clo_array[2];
void* f_lam_9096 = encode_clo(clo9564);



//clo-app
square_u45root_spec(square_u45root, f_lam_9096, apply_prim__u42_2(decode_clo_array[6], decode_clo_array[1]));
}

inline void pi_u45brent_u45salamin_u45helper_fptr() // pi-brent-salamin-helper -> generic version 
{
//reading env and args
void* const kont9092 = arg_buffer[2];
void* const one = arg_buffer[3];
void* const a = arg_buffer[4];
void* const b = arg_buffer[5];
void* const t = arg_buffer[6];
void* const x = arg_buffer[7];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(a, b)))
{

//creating new make-kont closure
void** clo9565 = alloc_kont(lam9210_spec, 2);

//setting env list
clo9565[1] = t;
clo9565[2] = kont9092;
void* f_lam_9093 = encode_clo(clo9565);



//clo-app
square_spec(square, f_lam_9093, apply_prim__u43_2(a, b));
}
else
{

//creating new make-kont closure
void** clo9566 = alloc_kont(lam9218_spec, 6);

//setting env list
clo9566[1] = b;
clo9566[2] = one;
clo9566[3] = x;
clo9566[4] = t;
clo9566[5] = kont9092;
clo9566[6] = a;
void* f_lam_9097 = encode_clo(clo9566);



//clo-app
mydiv_spec(mydiv, f_lam_9097, apply_prim__u43_2(a, b), int9350);
}

}

inline void pi_u45brent_u45salamin_u45helper_spec(void* _9220, void* kont9092, void* one, void* a, void* b, void* t, void* x) // pi-brent-salamin-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(a, b)))
{

//creating new make-kont closure
void** clo9567 = alloc_kont(lam9210_spec, 2);

//setting env list
clo9567[1] = t;
clo9567[2] = kont9092;
void* f_lam_9093 = encode_clo(clo9567);



//clo-app
square_spec(square, f_lam_9093, apply_prim__u43_2(a, b));
}
else
{

//creating new make-kont closure
void** clo9568 = alloc_kont(lam9218_spec, 6);

//setting env list
clo9568[1] = b;
clo9568[2] = one;
clo9568[3] = x;
clo9568[4] = t;
clo9568[5] = kont9092;
clo9568[6] = a;
void* f_lam_9097 = encode_clo(clo9568);



//clo-app
mydiv_spec(mydiv, f_lam_9097, apply_prim__u43_2(a, b), int9350);
}

}

inline void lam9221_fptr() // lam9221 -> generic version 
{
//reading env
void* const env9222 = arg_buffer[1];
//reading env and args
void* const id_8877 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9222);

//clo-app
pi_u45brent_u45salamin_u45helper_spec(pi_u45brent_u45salamin_u45helper, decode_clo_array[2], decode_clo_array[3], decode_clo_array[3], decode_clo_array[1], id_8877, int9356);
}

inline void lam9221_spec(void* env9222, void* id_8877) // lam9221 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9222);

//clo-app
pi_u45brent_u45salamin_u45helper_spec(pi_u45brent_u45salamin_u45helper, decode_clo_array[2], decode_clo_array[3], decode_clo_array[3], decode_clo_array[1], id_8877, int9356);
}

inline void lam9223_fptr() // lam9223 -> generic version 
{
//reading env
void* const env9224 = arg_buffer[1];
//reading env and args
void* const id_8875 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9224);

//creating new make-kont closure
void** clo9569 = alloc_kont(lam9221_spec, 3);

//setting env list
clo9569[1] = id_8875;
clo9569[2] = decode_clo_array[1];
clo9569[3] = decode_clo_array[2];
void* f_lam_9099 = encode_clo(clo9569);



//clo-app
mydiv_spec(mydiv, f_lam_9099, decode_clo_array[2], int9352);
}

inline void lam9223_spec(void* env9224, void* id_8875) // lam9223 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9224);

//creating new make-kont closure
void** clo9570 = alloc_kont(lam9221_spec, 3);

//setting env list
clo9570[1] = id_8875;
clo9570[2] = decode_clo_array[1];
clo9570[3] = decode_clo_array[2];
void* f_lam_9099 = encode_clo(clo9570);



//clo-app
mydiv_spec(mydiv, f_lam_9099, decode_clo_array[2], int9352);
}

inline void lam9225_fptr() // lam9225 -> generic version 
{
//reading env
void* const env9226 = arg_buffer[1];
//reading env and args
void* const id_8874 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9226);

//creating new make-kont closure
void** clo9571 = alloc_kont(lam9223_spec, 2);

//setting env list
clo9571[1] = decode_clo_array[1];
clo9571[2] = decode_clo_array[2];
void* f_lam_9100 = encode_clo(clo9571);



//clo-app
square_u45root_spec(square_u45root, f_lam_9100, id_8874);
}

inline void lam9225_spec(void* env9226, void* id_8874) // lam9225 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9226);

//creating new make-kont closure
void** clo9572 = alloc_kont(lam9223_spec, 2);

//setting env list
clo9572[1] = decode_clo_array[1];
clo9572[2] = decode_clo_array[2];
void* f_lam_9100 = encode_clo(clo9572);



//clo-app
square_u45root_spec(square_u45root, f_lam_9100, id_8874);
}

inline void lam9227_fptr() // lam9227 -> generic version 
{
//reading env
void* const env9228 = arg_buffer[1];
//reading env and args
void* const id_8872 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9228);

//creating new make-kont closure
void** clo9573 = alloc_kont(lam9225_spec, 2);

//setting env list
clo9573[1] = decode_clo_array[1];
clo9573[2] = decode_clo_array[2];
void* f_lam_9101 = encode_clo(clo9573);



//clo-app
mydiv_spec(mydiv, f_lam_9101, id_8872, int9350);
}

inline void lam9227_spec(void* env9228, void* id_8872) // lam9227 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9228);

//creating new make-kont closure
void** clo9574 = alloc_kont(lam9225_spec, 2);

//setting env list
clo9574[1] = decode_clo_array[1];
clo9574[2] = decode_clo_array[2];
void* f_lam_9101 = encode_clo(clo9574);



//clo-app
mydiv_spec(mydiv, f_lam_9101, id_8872, int9350);
}

inline void lam9229_fptr() // lam9229 -> generic version 
{
//reading env
void* const env9230 = arg_buffer[1];
//reading env and args
void* const one = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9230);

//creating new make-kont closure
void** clo9575 = alloc_kont(lam9227_spec, 2);

//setting env list
clo9575[1] = decode_clo_array[1];
clo9575[2] = one;
void* f_lam_9102 = encode_clo(clo9575);



//clo-app
square_spec(square, f_lam_9102, one);
}

inline void lam9229_spec(void* env9230, void* one) // lam9229 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9230);

//creating new make-kont closure
void** clo9576 = alloc_kont(lam9227_spec, 2);

//setting env list
clo9576[1] = decode_clo_array[1];
clo9576[2] = one;
void* f_lam_9102 = encode_clo(clo9576);



//clo-app
square_spec(square, f_lam_9102, one);
}

inline void pi_u45brent_u45salamin_fptr() // pi-brent-salamin -> generic version 
{
//reading env and args
void* const kont9098 = arg_buffer[2];
void* const nb_u45digits = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9577 = alloc_kont(lam9229_spec, 1);

//setting env list
clo9577[1] = kont9098;
void* f_lam_9103 = encode_clo(clo9577);


// kont-clo-app case
lam9229_spec(f_lam_9103, apply_prim_expt_2(int9349, nb_u45digits));
}

inline void pi_u45brent_u45salamin_spec(void* _9231, void* kont9098, void* nb_u45digits) // pi-brent-salamin 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9578 = alloc_kont(lam9229_spec, 1);

//setting env list
clo9578[1] = kont9098;
void* f_lam_9103 = encode_clo(clo9578);


// kont-clo-app case
lam9229_spec(f_lam_9103, apply_prim_expt_2(int9349, nb_u45digits));
}

inline void lam9232_fptr() // lam9232 -> generic version 
{
//reading env
void* const env9233 = arg_buffer[1];
//reading env and args
void* const id_8894 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9233);

//clo-app
pi_u45borwein2_u45helper_spec(pi_u45borwein2_u45helper, decode_clo_array[3], decode_clo_array[8], decode_clo_array[6], decode_clo_array[7], decode_clo_array[5], decode_clo_array[2], decode_clo_array[1], id_8894, decode_clo_array[4]);
}

inline void lam9232_spec(void* env9233, void* id_8894) // lam9232 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9233);

//clo-app
pi_u45borwein2_u45helper_spec(pi_u45borwein2_u45helper, decode_clo_array[3], decode_clo_array[8], decode_clo_array[6], decode_clo_array[7], decode_clo_array[5], decode_clo_array[2], decode_clo_array[1], id_8894, decode_clo_array[4]);
}

inline void lam9234_fptr() // lam9234 -> generic version 
{
//reading env
void* const env9235 = arg_buffer[1];
//reading env and args
void* const id_8888 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9235);

//creating new make-kont closure
void** clo9579 = alloc_kont(lam9232_spec, 8);

//setting env list
clo9579[1] = id_8888;
clo9579[2] = decode_clo_array[7];
clo9579[3] = decode_clo_array[1];
clo9579[4] = decode_clo_array[3];
clo9579[5] = decode_clo_array[5];
clo9579[6] = decode_clo_array[8];
clo9579[7] = decode_clo_array[9];
clo9579[8] = decode_clo_array[10];
void* f_lam_9105 = encode_clo(clo9579);



//clo-app
mydiv_spec(mydiv, f_lam_9105, apply_prim__u42_2(decode_clo_array[10], apply_prim__u43_2(apply_prim__u42_2(decode_clo_array[4], decode_clo_array[6]), decode_clo_array[8])), apply_prim__u42_2(apply_prim__u43_2(decode_clo_array[6], decode_clo_array[10]), decode_clo_array[2]));
}

inline void lam9234_spec(void* env9235, void* id_8888) // lam9234 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9235);

//creating new make-kont closure
void** clo9580 = alloc_kont(lam9232_spec, 8);

//setting env list
clo9580[1] = id_8888;
clo9580[2] = decode_clo_array[7];
clo9580[3] = decode_clo_array[1];
clo9580[4] = decode_clo_array[3];
clo9580[5] = decode_clo_array[5];
clo9580[6] = decode_clo_array[8];
clo9580[7] = decode_clo_array[9];
clo9580[8] = decode_clo_array[10];
void* f_lam_9105 = encode_clo(clo9580);



//clo-app
mydiv_spec(mydiv, f_lam_9105, apply_prim__u42_2(decode_clo_array[10], apply_prim__u43_2(apply_prim__u42_2(decode_clo_array[4], decode_clo_array[6]), decode_clo_array[8])), apply_prim__u42_2(apply_prim__u43_2(decode_clo_array[6], decode_clo_array[10]), decode_clo_array[2]));
}

inline void lam9236_fptr() // lam9236 -> generic version 
{
//reading env
void* const env9237 = arg_buffer[1];
//reading env and args
void* const sqrt_u45x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9237);

//creating new make-kont closure
void** clo9581 = alloc_kont(lam9234_spec, 10);

//setting env list
clo9581[1] = decode_clo_array[5];
clo9581[2] = sqrt_u45x;
clo9581[3] = decode_clo_array[1];
clo9581[4] = decode_clo_array[2];
clo9581[5] = decode_clo_array[3];
clo9581[6] = decode_clo_array[4];
clo9581[7] = decode_clo_array[6];
clo9581[8] = decode_clo_array[7];
clo9581[9] = decode_clo_array[8];
clo9581[10] = decode_clo_array[9];
void* f_lam_9106 = encode_clo(clo9581);



//clo-app
mydiv_spec(mydiv, f_lam_9106, apply_prim__u42_2(decode_clo_array[9], apply_prim__u43_2(decode_clo_array[2], decode_clo_array[9])), apply_prim__u42_2(int9350, sqrt_u45x));
}

inline void lam9236_spec(void* env9237, void* sqrt_u45x) // lam9236 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9237);

//creating new make-kont closure
void** clo9582 = alloc_kont(lam9234_spec, 10);

//setting env list
clo9582[1] = decode_clo_array[5];
clo9582[2] = sqrt_u45x;
clo9582[3] = decode_clo_array[1];
clo9582[4] = decode_clo_array[2];
clo9582[5] = decode_clo_array[3];
clo9582[6] = decode_clo_array[4];
clo9582[7] = decode_clo_array[6];
clo9582[8] = decode_clo_array[7];
clo9582[9] = decode_clo_array[8];
clo9582[10] = decode_clo_array[9];
void* f_lam_9106 = encode_clo(clo9582);



//clo-app
mydiv_spec(mydiv, f_lam_9106, apply_prim__u42_2(decode_clo_array[9], apply_prim__u43_2(decode_clo_array[2], decode_clo_array[9])), apply_prim__u42_2(int9350, sqrt_u45x));
}

inline void lam9238_fptr() // lam9238 -> generic version 
{
//reading env
void* const env9239 = arg_buffer[1];
//reading env and args
void* const new_u45p = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9239);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], decode_clo_array[8])))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], new_u45p);
}
else
{

//creating new make-kont closure
void** clo9583 = alloc_kont(lam9236_spec, 9);

//setting env list
clo9583[1] = new_u45p;
clo9583[2] = decode_clo_array[4];
clo9583[3] = decode_clo_array[1];
clo9583[4] = decode_clo_array[2];
clo9583[5] = decode_clo_array[3];
clo9583[6] = decode_clo_array[5];
clo9583[7] = decode_clo_array[6];
clo9583[8] = decode_clo_array[7];
clo9583[9] = decode_clo_array[8];
void* f_lam_9107 = encode_clo(clo9583);



//clo-app
square_u45root_spec(square_u45root, f_lam_9107, apply_prim__u42_2(decode_clo_array[8], decode_clo_array[4]));
}

}

inline void lam9238_spec(void* env9239, void* new_u45p) // lam9238 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9239);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[4], decode_clo_array[8])))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], new_u45p);
}
else
{

//creating new make-kont closure
void** clo9584 = alloc_kont(lam9236_spec, 9);

//setting env list
clo9584[1] = new_u45p;
clo9584[2] = decode_clo_array[4];
clo9584[3] = decode_clo_array[1];
clo9584[4] = decode_clo_array[2];
clo9584[5] = decode_clo_array[3];
clo9584[6] = decode_clo_array[5];
clo9584[7] = decode_clo_array[6];
clo9584[8] = decode_clo_array[7];
clo9584[9] = decode_clo_array[8];
void* f_lam_9107 = encode_clo(clo9584);



//clo-app
square_u45root_spec(square_u45root, f_lam_9107, apply_prim__u42_2(decode_clo_array[8], decode_clo_array[4]));
}

}

inline void pi_u45borwein2_u45helper_fptr() // pi-borwein2-helper -> generic version 
{
//reading env and args
void* const kont9104 = arg_buffer[2];
void* const one = arg_buffer[3];
void* const one_u942 = arg_buffer[4];
void* const one_u944 = arg_buffer[5];
void* const sqrt2 = arg_buffer[6];
void* const qurt2 = arg_buffer[7];
void* const x = arg_buffer[8];
void* const y = arg_buffer[9];
void* const p = arg_buffer[10];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9585 = alloc_kont(lam9238_spec, 8);

//setting env list
clo9585[1] = sqrt2;
clo9585[2] = y;
clo9585[3] = kont9104;
clo9585[4] = x;
clo9585[5] = qurt2;
clo9585[6] = one_u942;
clo9585[7] = one_u944;
clo9585[8] = one;
void* f_lam_9108 = encode_clo(clo9585);



//clo-app
mydiv_spec(mydiv, f_lam_9108, apply_prim__u42_2(p, apply_prim__u43_2(x, one)), apply_prim__u43_2(y, one));
}

inline void pi_u45borwein2_u45helper_spec(void* _9240, void* kont9104, void* one, void* one_u942, void* one_u944, void* sqrt2, void* qurt2, void* x, void* y, void* p) // pi-borwein2-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9586 = alloc_kont(lam9238_spec, 8);

//setting env list
clo9586[1] = sqrt2;
clo9586[2] = y;
clo9586[3] = kont9104;
clo9586[4] = x;
clo9586[5] = qurt2;
clo9586[6] = one_u942;
clo9586[7] = one_u944;
clo9586[8] = one;
void* f_lam_9108 = encode_clo(clo9586);



//clo-app
mydiv_spec(mydiv, f_lam_9108, apply_prim__u42_2(p, apply_prim__u43_2(x, one)), apply_prim__u43_2(y, one));
}

inline void lam9241_fptr() // lam9241 -> generic version 
{
//reading env
void* const env9242 = arg_buffer[1];
//reading env and args
void* const id_8904 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9242);

//clo-app
pi_u45borwein2_u45helper_spec(pi_u45borwein2_u45helper, decode_clo_array[4], decode_clo_array[6], decode_clo_array[3], decode_clo_array[5], decode_clo_array[1], decode_clo_array[2], id_8904, decode_clo_array[2], apply_prim__u43_2(apply_prim__u42_2(int9350, decode_clo_array[6]), decode_clo_array[1]));
}

inline void lam9241_spec(void* env9242, void* id_8904) // lam9241 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9242);

//clo-app
pi_u45borwein2_u45helper_spec(pi_u45borwein2_u45helper, decode_clo_array[4], decode_clo_array[6], decode_clo_array[3], decode_clo_array[5], decode_clo_array[1], decode_clo_array[2], id_8904, decode_clo_array[2], apply_prim__u43_2(apply_prim__u42_2(int9350, decode_clo_array[6]), decode_clo_array[1]));
}

inline void lam9243_fptr() // lam9243 -> generic version 
{
//reading env
void* const env9244 = arg_buffer[1];
//reading env and args
void* const qurt2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9244);

//creating new make-kont closure
void** clo9587 = alloc_kont(lam9241_spec, 6);

//setting env list
clo9587[1] = decode_clo_array[1];
clo9587[2] = qurt2;
clo9587[3] = decode_clo_array[2];
clo9587[4] = decode_clo_array[3];
clo9587[5] = decode_clo_array[4];
clo9587[6] = decode_clo_array[5];
void* f_lam_9110 = encode_clo(clo9587);



//clo-app
mydiv_spec(mydiv, f_lam_9110, apply_prim__u42_2(decode_clo_array[5], apply_prim__u43_2(decode_clo_array[1], decode_clo_array[5])), apply_prim__u42_2(int9350, qurt2));
}

inline void lam9243_spec(void* env9244, void* qurt2) // lam9243 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9244);

//creating new make-kont closure
void** clo9588 = alloc_kont(lam9241_spec, 6);

//setting env list
clo9588[1] = decode_clo_array[1];
clo9588[2] = qurt2;
clo9588[3] = decode_clo_array[2];
clo9588[4] = decode_clo_array[3];
clo9588[5] = decode_clo_array[4];
clo9588[6] = decode_clo_array[5];
void* f_lam_9110 = encode_clo(clo9588);



//clo-app
mydiv_spec(mydiv, f_lam_9110, apply_prim__u42_2(decode_clo_array[5], apply_prim__u43_2(decode_clo_array[1], decode_clo_array[5])), apply_prim__u42_2(int9350, qurt2));
}

inline void lam9245_fptr() // lam9245 -> generic version 
{
//reading env
void* const env9246 = arg_buffer[1];
//reading env and args
void* const sqrt2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9246);

//creating new make-kont closure
void** clo9589 = alloc_kont(lam9243_spec, 5);

//setting env list
clo9589[1] = sqrt2;
clo9589[2] = decode_clo_array[1];
clo9589[3] = decode_clo_array[2];
clo9589[4] = decode_clo_array[3];
clo9589[5] = decode_clo_array[4];
void* f_lam_9111 = encode_clo(clo9589);



//clo-app
quartic_u45root_spec(quartic_u45root, f_lam_9111, apply_prim__u42_2(decode_clo_array[3], int9350));
}

inline void lam9245_spec(void* env9246, void* sqrt2) // lam9245 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9246);

//creating new make-kont closure
void** clo9590 = alloc_kont(lam9243_spec, 5);

//setting env list
clo9590[1] = sqrt2;
clo9590[2] = decode_clo_array[1];
clo9590[3] = decode_clo_array[2];
clo9590[4] = decode_clo_array[3];
clo9590[5] = decode_clo_array[4];
void* f_lam_9111 = encode_clo(clo9590);



//clo-app
quartic_u45root_spec(quartic_u45root, f_lam_9111, apply_prim__u42_2(decode_clo_array[3], int9350));
}

inline void lam9247_fptr() // lam9247 -> generic version 
{
//reading env
void* const env9248 = arg_buffer[1];
//reading env and args
void* const one_u944 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9248);

//creating new make-kont closure
void** clo9591 = alloc_kont(lam9245_spec, 4);

//setting env list
clo9591[1] = decode_clo_array[1];
clo9591[2] = decode_clo_array[2];
clo9591[3] = one_u944;
clo9591[4] = decode_clo_array[3];
void* f_lam_9112 = encode_clo(clo9591);



//clo-app
square_u45root_spec(square_u45root, f_lam_9112, apply_prim__u42_2(decode_clo_array[1], int9350));
}

inline void lam9247_spec(void* env9248, void* one_u944) // lam9247 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9248);

//creating new make-kont closure
void** clo9592 = alloc_kont(lam9245_spec, 4);

//setting env list
clo9592[1] = decode_clo_array[1];
clo9592[2] = decode_clo_array[2];
clo9592[3] = one_u944;
clo9592[4] = decode_clo_array[3];
void* f_lam_9112 = encode_clo(clo9592);



//clo-app
square_u45root_spec(square_u45root, f_lam_9112, apply_prim__u42_2(decode_clo_array[1], int9350));
}

inline void lam9249_fptr() // lam9249 -> generic version 
{
//reading env
void* const env9250 = arg_buffer[1];
//reading env and args
void* const one_u942 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9250);

//creating new make-kont closure
void** clo9593 = alloc_kont(lam9247_spec, 3);

//setting env list
clo9593[1] = one_u942;
clo9593[2] = decode_clo_array[1];
clo9593[3] = decode_clo_array[2];
void* f_lam_9113 = encode_clo(clo9593);



//clo-app
square_spec(square, f_lam_9113, one_u942);
}

inline void lam9249_spec(void* env9250, void* one_u942) // lam9249 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9250);

//creating new make-kont closure
void** clo9594 = alloc_kont(lam9247_spec, 3);

//setting env list
clo9594[1] = one_u942;
clo9594[2] = decode_clo_array[1];
clo9594[3] = decode_clo_array[2];
void* f_lam_9113 = encode_clo(clo9594);



//clo-app
square_spec(square, f_lam_9113, one_u942);
}

inline void lam9251_fptr() // lam9251 -> generic version 
{
//reading env
void* const env9252 = arg_buffer[1];
//reading env and args
void* const one = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9252);

//creating new make-kont closure
void** clo9595 = alloc_kont(lam9249_spec, 2);

//setting env list
clo9595[1] = decode_clo_array[1];
clo9595[2] = one;
void* f_lam_9114 = encode_clo(clo9595);



//clo-app
square_spec(square, f_lam_9114, one);
}

inline void lam9251_spec(void* env9252, void* one) // lam9251 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9252);

//creating new make-kont closure
void** clo9596 = alloc_kont(lam9249_spec, 2);

//setting env list
clo9596[1] = decode_clo_array[1];
clo9596[2] = one;
void* f_lam_9114 = encode_clo(clo9596);



//clo-app
square_spec(square, f_lam_9114, one);
}

inline void pi_u45borwein2_fptr() // pi-borwein2 -> generic version 
{
//reading env and args
void* const kont9109 = arg_buffer[2];
void* const nb_u45digits = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9597 = alloc_kont(lam9251_spec, 1);

//setting env list
clo9597[1] = kont9109;
void* f_lam_9115 = encode_clo(clo9597);


// kont-clo-app case
lam9251_spec(f_lam_9115, apply_prim_expt_2(int9349, nb_u45digits));
}

inline void pi_u45borwein2_spec(void* _9253, void* kont9109, void* nb_u45digits) // pi-borwein2 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9598 = alloc_kont(lam9251_spec, 1);

//setting env list
clo9598[1] = kont9109;
void* f_lam_9115 = encode_clo(clo9598);


// kont-clo-app case
lam9251_spec(f_lam_9115, apply_prim_expt_2(int9349, nb_u45digits));
}

inline void lam9254_fptr() // lam9254 -> generic version 
{
//reading env
void* const env9255 = arg_buffer[1];
//reading env and args
void* const xy8910 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9255);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8910);
}

inline void lam9254_spec(void* env9255, void* xy8910) // lam9254 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9255);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8910);
}

inline void lam9256_fptr() // lam9256 -> generic version 
{
//reading env
void* const env9257 = arg_buffer[1];
//reading env and args
void* const id_8912 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9257);

//clo-app
quartic_u45root_spec(quartic_u45root, decode_clo_array[1], apply_prim__u45_2(decode_clo_array[2], id_8912));
}

inline void lam9256_spec(void* env9257, void* id_8912) // lam9256 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9257);

//clo-app
quartic_u45root_spec(quartic_u45root, decode_clo_array[1], apply_prim__u45_2(decode_clo_array[2], id_8912));
}

inline void lam9258_fptr() // lam9258 -> generic version 
{
//reading env
void* const env9259 = arg_buffer[1];
//reading env and args
void* const id_8911 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9259);

//creating new make-kont closure
void** clo9599 = alloc_kont(lam9256_spec, 2);

//setting env list
clo9599[1] = decode_clo_array[1];
clo9599[2] = decode_clo_array[2];
void* f_lam_9128 = encode_clo(clo9599);



//clo-app
square_spec(square, f_lam_9128, id_8911);
}

inline void lam9258_spec(void* env9259, void* id_8911) // lam9258 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9259);

//creating new make-kont closure
void** clo9600 = alloc_kont(lam9256_spec, 2);

//setting env list
clo9600[1] = decode_clo_array[1];
clo9600[2] = decode_clo_array[2];
void* f_lam_9128 = encode_clo(clo9600);



//clo-app
square_spec(square, f_lam_9128, id_8911);
}

inline void lam9260_fptr() // lam9260 -> generic version 
{
//reading env
void* const env9261 = arg_buffer[1];
//reading env and args
void* const id_8920 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9261);

//clo-app
mydiv_spec(mydiv, decode_clo_array[1], id_8920, decode_clo_array[2]);
}

inline void lam9260_spec(void* env9261, void* id_8920) // lam9260 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9261);

//clo-app
mydiv_spec(mydiv, decode_clo_array[1], id_8920, decode_clo_array[2]);
}

inline void lam9262_fptr() // lam9262 -> generic version 
{
//reading env
void* const env9263 = arg_buffer[1];
//reading env and args
void* const id_8919 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9263);

//creating new make-kont closure
void** clo9601 = alloc_kont(lam9260_spec, 2);

//setting env list
clo9601[1] = decode_clo_array[1];
clo9601[2] = decode_clo_array[2];
void* f_lam_9123 = encode_clo(clo9601);



//clo-app
square_spec(square, f_lam_9123, id_8919);
}

inline void lam9262_spec(void* env9263, void* id_8919) // lam9262 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9263);

//creating new make-kont closure
void** clo9602 = alloc_kont(lam9260_spec, 2);

//setting env list
clo9602[1] = decode_clo_array[1];
clo9602[2] = decode_clo_array[2];
void* f_lam_9123 = encode_clo(clo9602);



//clo-app
square_spec(square, f_lam_9123, id_8919);
}

inline void lam9264_fptr() // lam9264 -> generic version 
{
//reading env
void* const env9265 = arg_buffer[1];
//reading env and args
void* const id_8918 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9265);

//creating new make-kont closure
void** clo9603 = alloc_kont(lam9262_spec, 2);

//setting env list
clo9603[1] = decode_clo_array[1];
clo9603[2] = decode_clo_array[2];
void* f_lam_9124 = encode_clo(clo9603);



//clo-app
mydiv_spec(mydiv, f_lam_9124, id_8918, decode_clo_array[2]);
}

inline void lam9264_spec(void* env9265, void* id_8918) // lam9264 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9265);

//creating new make-kont closure
void** clo9604 = alloc_kont(lam9262_spec, 2);

//setting env list
clo9604[1] = decode_clo_array[1];
clo9604[2] = decode_clo_array[2];
void* f_lam_9124 = encode_clo(clo9604);



//clo-app
mydiv_spec(mydiv, f_lam_9124, id_8918, decode_clo_array[2]);
}

inline void lam9266_fptr() // lam9266 -> generic version 
{
//reading env
void* const env9267 = arg_buffer[1];
//reading env and args
void* const id_8922 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9267);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8922)));
}

inline void lam9266_spec(void* env9267, void* id_8922) // lam9266 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9267);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[3], apply_prim__u43_2(decode_clo_array[2], id_8922)));
}

inline void lam9268_fptr() // lam9268 -> generic version 
{
//reading env
void* const env9269 = arg_buffer[1];
//reading env and args
void* const id_8921 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9269);

//creating new make-kont closure
void** clo9605 = alloc_kont(lam9266_spec, 3);

//setting env list
clo9605[1] = decode_clo_array[1];
clo9605[2] = decode_clo_array[2];
clo9605[3] = decode_clo_array[3];
void* f_lam_9120 = encode_clo(clo9605);



//clo-app
mydiv_spec(mydiv, f_lam_9120, id_8921, decode_clo_array[3]);
}

inline void lam9268_spec(void* env9269, void* id_8921) // lam9268 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9269);

//creating new make-kont closure
void** clo9606 = alloc_kont(lam9266_spec, 3);

//setting env list
clo9606[1] = decode_clo_array[1];
clo9606[2] = decode_clo_array[2];
clo9606[3] = decode_clo_array[3];
void* f_lam_9120 = encode_clo(clo9606);



//clo-app
mydiv_spec(mydiv, f_lam_9120, id_8921, decode_clo_array[3]);
}

inline void lam9270_fptr() // lam9270 -> generic version 
{
//reading env
void* const env9271 = arg_buffer[1];
//reading env and args
void* const id_8928 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9271);

//clo-app
pi_u45borwein4_u45helper_spec(pi_u45borwein4_u45helper, decode_clo_array[1], decode_clo_array[7], decode_clo_array[5], decode_clo_array[6], decode_clo_array[3], decode_clo_array[4], id_8928, apply_prim__u42_2(int9352, decode_clo_array[2]));
}

inline void lam9270_spec(void* env9271, void* id_8928) // lam9270 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9271);

//clo-app
pi_u45borwein4_u45helper_spec(pi_u45borwein4_u45helper, decode_clo_array[1], decode_clo_array[7], decode_clo_array[5], decode_clo_array[6], decode_clo_array[3], decode_clo_array[4], id_8928, apply_prim__u42_2(int9352, decode_clo_array[2]));
}

inline void lam9272_fptr() // lam9272 -> generic version 
{
//reading env
void* const env9273 = arg_buffer[1];
//reading env and args
void* const t4 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9273);

//creating new make-kont closure
void** clo9607 = alloc_kont(lam9270_spec, 7);

//setting env list
clo9607[1] = decode_clo_array[3];
clo9607[2] = decode_clo_array[2];
clo9607[3] = decode_clo_array[4];
clo9607[4] = decode_clo_array[5];
clo9607[5] = decode_clo_array[6];
clo9607[6] = decode_clo_array[7];
clo9607[7] = decode_clo_array[9];
void* f_lam_9118 = encode_clo(clo9607);



//clo-app
mydiv_spec(mydiv, f_lam_9118, apply_prim__u45_2(apply_prim__u42_2(decode_clo_array[1], decode_clo_array[8]), apply_prim__u42_2(decode_clo_array[2], apply_prim__u42_2(decode_clo_array[5], t4))), decode_clo_array[9]);
}

inline void lam9272_spec(void* env9273, void* t4) // lam9272 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9273);

//creating new make-kont closure
void** clo9608 = alloc_kont(lam9270_spec, 7);

//setting env list
clo9608[1] = decode_clo_array[3];
clo9608[2] = decode_clo_array[2];
clo9608[3] = decode_clo_array[4];
clo9608[4] = decode_clo_array[5];
clo9608[5] = decode_clo_array[6];
clo9608[6] = decode_clo_array[7];
clo9608[7] = decode_clo_array[9];
void* f_lam_9118 = encode_clo(clo9608);



//clo-app
mydiv_spec(mydiv, f_lam_9118, apply_prim__u45_2(apply_prim__u42_2(decode_clo_array[1], decode_clo_array[8]), apply_prim__u42_2(decode_clo_array[2], apply_prim__u42_2(decode_clo_array[5], t4))), decode_clo_array[9]);
}

inline void lam9274_fptr() // lam9274 -> generic version 
{
//reading env
void* const env9275 = arg_buffer[1];
//reading env and args
void* const t3 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9275);

//creating new make-kont closure
void** clo9609 = alloc_kont(lam9272_spec, 9);

//setting env list
clo9609[1] = t3;
clo9609[2] = decode_clo_array[2];
clo9609[3] = decode_clo_array[1];
clo9609[4] = decode_clo_array[3];
clo9609[5] = decode_clo_array[4];
clo9609[6] = decode_clo_array[5];
clo9609[7] = decode_clo_array[6];
clo9609[8] = decode_clo_array[7];
clo9609[9] = decode_clo_array[8];
void* f_lam_9119 = encode_clo(clo9609);



//creating new make-kont closure
void** clo9610 = alloc_kont(lam9268_spec, 3);

//setting env list
clo9610[1] = f_lam_9119;
clo9610[2] = decode_clo_array[4];
clo9610[3] = decode_clo_array[8];
void* f_lam_9121 = encode_clo(clo9610);



//clo-app
square_spec(square, f_lam_9121, decode_clo_array[4]);
}

inline void lam9274_spec(void* env9275, void* t3) // lam9274 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9275);

//creating new make-kont closure
void** clo9611 = alloc_kont(lam9272_spec, 9);

//setting env list
clo9611[1] = t3;
clo9611[2] = decode_clo_array[2];
clo9611[3] = decode_clo_array[1];
clo9611[4] = decode_clo_array[3];
clo9611[5] = decode_clo_array[4];
clo9611[6] = decode_clo_array[5];
clo9611[7] = decode_clo_array[6];
clo9611[8] = decode_clo_array[7];
clo9611[9] = decode_clo_array[8];
void* f_lam_9119 = encode_clo(clo9611);



//creating new make-kont closure
void** clo9612 = alloc_kont(lam9268_spec, 3);

//setting env list
clo9612[1] = f_lam_9119;
clo9612[2] = decode_clo_array[4];
clo9612[3] = decode_clo_array[8];
void* f_lam_9121 = encode_clo(clo9612);



//clo-app
square_spec(square, f_lam_9121, decode_clo_array[4]);
}

inline void lam9276_fptr() // lam9276 -> generic version 
{
//reading env
void* const env9277 = arg_buffer[1];
//reading env and args
void* const t2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9277);

//creating new make-kont closure
void** clo9613 = alloc_kont(lam9274_spec, 8);

//setting env list
clo9613[1] = decode_clo_array[1];
clo9613[2] = decode_clo_array[2];
clo9613[3] = decode_clo_array[3];
clo9613[4] = t2;
clo9613[5] = decode_clo_array[4];
clo9613[6] = decode_clo_array[5];
clo9613[7] = decode_clo_array[6];
clo9613[8] = decode_clo_array[7];
void* f_lam_9122 = encode_clo(clo9613);



//creating new make-kont closure
void** clo9614 = alloc_kont(lam9264_spec, 2);

//setting env list
clo9614[1] = f_lam_9122;
clo9614[2] = decode_clo_array[7];
void* f_lam_9125 = encode_clo(clo9614);



//clo-app
square_spec(square, f_lam_9125, apply_prim__u43_2(decode_clo_array[7], t2));
}

inline void lam9276_spec(void* env9277, void* t2) // lam9276 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9277);

//creating new make-kont closure
void** clo9615 = alloc_kont(lam9274_spec, 8);

//setting env list
clo9615[1] = decode_clo_array[1];
clo9615[2] = decode_clo_array[2];
clo9615[3] = decode_clo_array[3];
clo9615[4] = t2;
clo9615[5] = decode_clo_array[4];
clo9615[6] = decode_clo_array[5];
clo9615[7] = decode_clo_array[6];
clo9615[8] = decode_clo_array[7];
void* f_lam_9122 = encode_clo(clo9615);



//creating new make-kont closure
void** clo9616 = alloc_kont(lam9264_spec, 2);

//setting env list
clo9616[1] = f_lam_9122;
clo9616[2] = decode_clo_array[7];
void* f_lam_9125 = encode_clo(clo9616);



//clo-app
square_spec(square, f_lam_9125, apply_prim__u43_2(decode_clo_array[7], t2));
}

inline void lam9278_fptr() // lam9278 -> generic version 
{
//reading env
void* const env9279 = arg_buffer[1];
//reading env and args
void* const t1 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9279);

//creating new make-kont closure
void** clo9617 = alloc_kont(lam9276_spec, 7);

//setting env list
clo9617[1] = decode_clo_array[1];
clo9617[2] = decode_clo_array[2];
clo9617[3] = decode_clo_array[3];
clo9617[4] = decode_clo_array[4];
clo9617[5] = decode_clo_array[5];
clo9617[6] = decode_clo_array[6];
clo9617[7] = decode_clo_array[7];
void* f_lam_9126 = encode_clo(clo9617);



//clo-app
mydiv_spec(mydiv, f_lam_9126, apply_prim__u42_2(decode_clo_array[7], apply_prim__u45_2(decode_clo_array[7], t1)), apply_prim__u43_2(decode_clo_array[7], t1));
}

inline void lam9278_spec(void* env9279, void* t1) // lam9278 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9279);

//creating new make-kont closure
void** clo9618 = alloc_kont(lam9276_spec, 7);

//setting env list
clo9618[1] = decode_clo_array[1];
clo9618[2] = decode_clo_array[2];
clo9618[3] = decode_clo_array[3];
clo9618[4] = decode_clo_array[4];
clo9618[5] = decode_clo_array[5];
clo9618[6] = decode_clo_array[6];
clo9618[7] = decode_clo_array[7];
void* f_lam_9126 = encode_clo(clo9618);



//clo-app
mydiv_spec(mydiv, f_lam_9126, apply_prim__u42_2(decode_clo_array[7], apply_prim__u45_2(decode_clo_array[7], t1)), apply_prim__u43_2(decode_clo_array[7], t1));
}

inline void pi_u45borwein4_u45helper_fptr() // pi-borwein4-helper -> generic version 
{
//reading env and args
void* const kont9116 = arg_buffer[2];
void* const one = arg_buffer[3];
void* const one_u942 = arg_buffer[4];
void* const one_u944 = arg_buffer[5];
void* const sqrt2 = arg_buffer[6];
void* const y = arg_buffer[7];
void* const a = arg_buffer[8];
void* const x = arg_buffer[9];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(y, int9347)))
{

//creating new make-kont closure
void** clo9619 = alloc_kont(lam9254_spec, 1);

//setting env list
clo9619[1] = kont9116;
void* f_lam_9117 = encode_clo(clo9619);



//clo-app
mydiv_spec(mydiv, f_lam_9117, one_u942, a);
}
else
{

//creating new make-kont closure
void** clo9620 = alloc_kont(lam9278_spec, 7);

//setting env list
clo9620[1] = kont9116;
clo9620[2] = x;
clo9620[3] = sqrt2;
clo9620[4] = one_u942;
clo9620[5] = one_u944;
clo9620[6] = a;
clo9620[7] = one;
void* f_lam_9127 = encode_clo(clo9620);



//creating new make-kont closure
void** clo9621 = alloc_kont(lam9258_spec, 2);

//setting env list
clo9621[1] = f_lam_9127;
clo9621[2] = one_u944;
void* f_lam_9129 = encode_clo(clo9621);



//clo-app
square_spec(square, f_lam_9129, y);
}

}

inline void pi_u45borwein4_u45helper_spec(void* _9280, void* kont9116, void* one, void* one_u942, void* one_u944, void* sqrt2, void* y, void* a, void* x) // pi-borwein4-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(y, int9347)))
{

//creating new make-kont closure
void** clo9622 = alloc_kont(lam9254_spec, 1);

//setting env list
clo9622[1] = kont9116;
void* f_lam_9117 = encode_clo(clo9622);



//clo-app
mydiv_spec(mydiv, f_lam_9117, one_u942, a);
}
else
{

//creating new make-kont closure
void** clo9623 = alloc_kont(lam9278_spec, 7);

//setting env list
clo9623[1] = kont9116;
clo9623[2] = x;
clo9623[3] = sqrt2;
clo9623[4] = one_u942;
clo9623[5] = one_u944;
clo9623[6] = a;
clo9623[7] = one;
void* f_lam_9127 = encode_clo(clo9623);



//creating new make-kont closure
void** clo9624 = alloc_kont(lam9258_spec, 2);

//setting env list
clo9624[1] = f_lam_9127;
clo9624[2] = one_u944;
void* f_lam_9129 = encode_clo(clo9624);



//clo-app
square_spec(square, f_lam_9129, y);
}

}

inline void lam9281_fptr() // lam9281 -> generic version 
{
//reading env
void* const env9282 = arg_buffer[1];
//reading env and args
void* const sqrt2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9282);

//clo-app
pi_u45borwein4_u45helper_spec(pi_u45borwein4_u45helper, decode_clo_array[1], decode_clo_array[4], decode_clo_array[2], decode_clo_array[3], sqrt2, apply_prim__u45_2(sqrt2, decode_clo_array[4]), apply_prim__u45_2(apply_prim__u42_2(int9351, decode_clo_array[4]), apply_prim__u42_2(int9352, sqrt2)), int9353);
}

inline void lam9281_spec(void* env9282, void* sqrt2) // lam9281 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9282);

//clo-app
pi_u45borwein4_u45helper_spec(pi_u45borwein4_u45helper, decode_clo_array[1], decode_clo_array[4], decode_clo_array[2], decode_clo_array[3], sqrt2, apply_prim__u45_2(sqrt2, decode_clo_array[4]), apply_prim__u45_2(apply_prim__u42_2(int9351, decode_clo_array[4]), apply_prim__u42_2(int9352, sqrt2)), int9353);
}

inline void lam9283_fptr() // lam9283 -> generic version 
{
//reading env
void* const env9284 = arg_buffer[1];
//reading env and args
void* const one_u944 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9284);

//creating new make-kont closure
void** clo9625 = alloc_kont(lam9281_spec, 4);

//setting env list
clo9625[1] = decode_clo_array[1];
clo9625[2] = decode_clo_array[2];
clo9625[3] = one_u944;
clo9625[4] = decode_clo_array[3];
void* f_lam_9131 = encode_clo(clo9625);



//clo-app
square_u45root_spec(square_u45root, f_lam_9131, apply_prim__u42_2(decode_clo_array[2], int9350));
}

inline void lam9283_spec(void* env9284, void* one_u944) // lam9283 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9284);

//creating new make-kont closure
void** clo9626 = alloc_kont(lam9281_spec, 4);

//setting env list
clo9626[1] = decode_clo_array[1];
clo9626[2] = decode_clo_array[2];
clo9626[3] = one_u944;
clo9626[4] = decode_clo_array[3];
void* f_lam_9131 = encode_clo(clo9626);



//clo-app
square_u45root_spec(square_u45root, f_lam_9131, apply_prim__u42_2(decode_clo_array[2], int9350));
}

inline void lam9285_fptr() // lam9285 -> generic version 
{
//reading env
void* const env9286 = arg_buffer[1];
//reading env and args
void* const one_u942 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9286);

//creating new make-kont closure
void** clo9627 = alloc_kont(lam9283_spec, 3);

//setting env list
clo9627[1] = decode_clo_array[1];
clo9627[2] = one_u942;
clo9627[3] = decode_clo_array[2];
void* f_lam_9132 = encode_clo(clo9627);



//clo-app
square_spec(square, f_lam_9132, one_u942);
}

inline void lam9285_spec(void* env9286, void* one_u942) // lam9285 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9286);

//creating new make-kont closure
void** clo9628 = alloc_kont(lam9283_spec, 3);

//setting env list
clo9628[1] = decode_clo_array[1];
clo9628[2] = one_u942;
clo9628[3] = decode_clo_array[2];
void* f_lam_9132 = encode_clo(clo9628);



//clo-app
square_spec(square, f_lam_9132, one_u942);
}

inline void lam9287_fptr() // lam9287 -> generic version 
{
//reading env
void* const env9288 = arg_buffer[1];
//reading env and args
void* const one = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9288);

//creating new make-kont closure
void** clo9629 = alloc_kont(lam9285_spec, 2);

//setting env list
clo9629[1] = decode_clo_array[1];
clo9629[2] = one;
void* f_lam_9133 = encode_clo(clo9629);



//clo-app
square_spec(square, f_lam_9133, one);
}

inline void lam9287_spec(void* env9288, void* one) // lam9287 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9288);

//creating new make-kont closure
void** clo9630 = alloc_kont(lam9285_spec, 2);

//setting env list
clo9630[1] = decode_clo_array[1];
clo9630[2] = one;
void* f_lam_9133 = encode_clo(clo9630);



//clo-app
square_spec(square, f_lam_9133, one);
}

inline void pi_u45borwein4_fptr() // pi-borwein4 -> generic version 
{
//reading env and args
void* const kont9130 = arg_buffer[2];
void* const nb_u45digits = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9631 = alloc_kont(lam9287_spec, 1);

//setting env list
clo9631[1] = kont9130;
void* f_lam_9134 = encode_clo(clo9631);


// kont-clo-app case
lam9287_spec(f_lam_9134, apply_prim_expt_2(int9349, nb_u45digits));
}

inline void pi_u45borwein4_spec(void* _9289, void* kont9130, void* nb_u45digits) // pi-borwein4 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9632 = alloc_kont(lam9287_spec, 1);

//setting env list
clo9632[1] = kont9130;
void* f_lam_9134 = encode_clo(clo9632);


// kont-clo-app case
lam9287_spec(f_lam_9134, apply_prim_expt_2(int9349, nb_u45digits));
}

inline void lam9290_fptr() // lam9290 -> generic version 
{
//reading env
void* const env9291 = arg_buffer[1];
//reading env and args
void* const id_8947 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9291);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8947));
}

inline void lam9290_spec(void* env9291, void* id_8947) // lam9290 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9291);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8947));
}

inline void lam9292_fptr() // lam9292 -> generic version 
{
//reading env
void* const env9293 = arg_buffer[1];
//reading env and args
void* const b4 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9293);

//creating new make-kont closure
void** clo9633 = alloc_kont(lam9290_spec, 2);

//setting env list
clo9633[1] = decode_clo_array[2];
clo9633[2] = apply_prim_list_3(decode_clo_array[3], apply_prim__u45_2(decode_clo_array[5], decode_clo_array[3]), apply_prim__u45_2(b4, decode_clo_array[3]));
void* f_lam_9136 = encode_clo(clo9633);



//clo-app
pies_spec(pies, f_lam_9136, apply_prim__u43_2(decode_clo_array[4], decode_clo_array[6]), decode_clo_array[1], decode_clo_array[6]);
}

inline void lam9292_spec(void* env9293, void* b4) // lam9292 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9293);

//creating new make-kont closure
void** clo9634 = alloc_kont(lam9290_spec, 2);

//setting env list
clo9634[1] = decode_clo_array[2];
clo9634[2] = apply_prim_list_3(decode_clo_array[3], apply_prim__u45_2(decode_clo_array[5], decode_clo_array[3]), apply_prim__u45_2(b4, decode_clo_array[3]));
void* f_lam_9136 = encode_clo(clo9634);



//clo-app
pies_spec(pies, f_lam_9136, apply_prim__u43_2(decode_clo_array[4], decode_clo_array[6]), decode_clo_array[1], decode_clo_array[6]);
}

inline void lam9294_fptr() // lam9294 -> generic version 
{
//reading env
void* const env9295 = arg_buffer[1];
//reading env and args
void* const b2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9295);

//creating new make-kont closure
void** clo9635 = alloc_kont(lam9292_spec, 6);

//setting env list
clo9635[1] = decode_clo_array[1];
clo9635[2] = decode_clo_array[2];
clo9635[3] = b2;
clo9635[4] = decode_clo_array[3];
clo9635[5] = decode_clo_array[4];
clo9635[6] = decode_clo_array[5];
void* f_lam_9137 = encode_clo(clo9635);



//clo-app
pi_u45borwein4_spec(pi_u45borwein4, f_lam_9137, decode_clo_array[3]);
}

inline void lam9294_spec(void* env9295, void* b2) // lam9294 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9295);

//creating new make-kont closure
void** clo9636 = alloc_kont(lam9292_spec, 6);

//setting env list
clo9636[1] = decode_clo_array[1];
clo9636[2] = decode_clo_array[2];
clo9636[3] = b2;
clo9636[4] = decode_clo_array[3];
clo9636[5] = decode_clo_array[4];
clo9636[6] = decode_clo_array[5];
void* f_lam_9137 = encode_clo(clo9636);



//clo-app
pi_u45borwein4_spec(pi_u45borwein4, f_lam_9137, decode_clo_array[3]);
}

inline void lam9296_fptr() // lam9296 -> generic version 
{
//reading env
void* const env9297 = arg_buffer[1];
//reading env and args
void* const bs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9297);

//creating new make-kont closure
void** clo9637 = alloc_kont(lam9294_spec, 5);

//setting env list
clo9637[1] = decode_clo_array[1];
clo9637[2] = decode_clo_array[2];
clo9637[3] = decode_clo_array[3];
clo9637[4] = bs;
clo9637[5] = decode_clo_array[4];
void* f_lam_9138 = encode_clo(clo9637);



//clo-app
pi_u45borwein2_spec(pi_u45borwein2, f_lam_9138, decode_clo_array[3]);
}

inline void lam9296_spec(void* env9297, void* bs) // lam9296 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9297);

//creating new make-kont closure
void** clo9638 = alloc_kont(lam9294_spec, 5);

//setting env list
clo9638[1] = decode_clo_array[1];
clo9638[2] = decode_clo_array[2];
clo9638[3] = decode_clo_array[3];
clo9638[4] = bs;
clo9638[5] = decode_clo_array[4];
void* f_lam_9138 = encode_clo(clo9638);



//clo-app
pi_u45borwein2_spec(pi_u45borwein2, f_lam_9138, decode_clo_array[3]);
}

inline void pies_fptr() // pies -> generic version 
{
//reading env and args
void* const kont9135 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const m = arg_buffer[4];
void* const s = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(m, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9135)[0])(kont9135, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9639 = alloc_kont(lam9296_spec, 4);

//setting env list
clo9639[1] = m;
clo9639[2] = kont9135;
clo9639[3] = n;
clo9639[4] = s;
void* f_lam_9139 = encode_clo(clo9639);



//clo-app
pi_u45brent_u45salamin_spec(pi_u45brent_u45salamin, f_lam_9139, n);
}

}

inline void pies_spec(void* _9298, void* kont9135, void* n, void* m, void* s) // pies 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(m, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9135)[0])(kont9135, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9640 = alloc_kont(lam9296_spec, 4);

//setting env list
clo9640[1] = m;
clo9640[2] = kont9135;
clo9640[3] = n;
clo9640[4] = s;
void* f_lam_9139 = encode_clo(clo9640);



//clo-app
pi_u45brent_u45salamin_spec(pi_u45brent_u45salamin, f_lam_9139, n);
}

}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont9140 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
pies_spec(pies, kont9140, int9356, int9355, int9356);
}

inline void brouhaha_main_spec(void* _9299, void* kont9140) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
pies_spec(pies, kont9140, int9356, int9355, int9356);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9347 = reinterpret_cast<void *>(encode_int(0));
bool_t9307 = encode_bool(true);
int9356 = reinterpret_cast<void *>(encode_int(1));
bool_f9317 = encode_bool(false);
int9350 = reinterpret_cast<void *>(encode_int(2));
int9352 = reinterpret_cast<void *>(encode_int(4));
int9351 = reinterpret_cast<void *>(encode_int(6));
int9353 = reinterpret_cast<void *>(encode_int(8));
int9349 = reinterpret_cast<void *>(encode_int(10));
int9355 = reinterpret_cast<void *>(encode_int(15));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

