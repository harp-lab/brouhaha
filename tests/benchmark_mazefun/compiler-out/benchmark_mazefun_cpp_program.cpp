#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9532;
void* int9509;
void* bool_t9527;
void* int9525;
void* bool_f9530;
void* int9482;
void* int9534;
void* int9507;
void* int9508;



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
void even_u63_spec(void* _9264, void* kont9132, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam9265_fptr(); // lam9265
void lam9265_spec(void* env9266, void* id_8745); // lam9265
void* lam9265 = encode_clo(alloc_clo(lam9265_fptr, 0));

void boolean_u63_fptr(); // boolean?
void boolean_u63_spec(void* _9267, void* kont9133, void* x); // boolean?
void* boolean_u63 = encode_clo(alloc_clo(boolean_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _9268, void* kont9135, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _9269, void* kont9136, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam9270_fptr(); // lam9270
void lam9270_spec(void* env9271, void* id_8760); // lam9270
void* lam9270 = encode_clo(alloc_clo(lam9270_fptr, 0));

void member_fptr(); // member
void member_spec(void* _9272, void* kont9137, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _9273, void* kont9139, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam9274_fptr(); // lam9274
void lam9274_spec(void* env9275, void* id_8775); // lam9274
void* lam9274 = encode_clo(alloc_clo(lam9274_fptr, 0));

void length_fptr(); // length
void length_spec(void* _9276, void* kont9140, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam9277_fptr(); // lam9277
void lam9277_spec(void* env9278, void* id_8781); // lam9277
void* lam9277 = encode_clo(alloc_clo(lam9277_fptr, 0));

void lam9279_fptr(); // lam9279
void lam9279_spec(void* env9280, void* id_8779); // lam9279
void* lam9279 = encode_clo(alloc_clo(lam9279_fptr, 0));

void map_fptr(); // map
void map_spec(void* _9281, void* kont9142, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam9282_fptr(); // lam9282
void lam9282_spec(void* env9283, void* id_8788); // lam9282
void* lam9282 = encode_clo(alloc_clo(lam9282_fptr, 0));

void lam9284_fptr(); // lam9284
void lam9284_spec(void* env9285, void* id_8785); // lam9284
void* lam9284 = encode_clo(alloc_clo(lam9284_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _9286, void* kont9145, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _9287, void* kont9148, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam9288_fptr(); // lam9288
void lam9288_spec(void* env9289, void* id_8797); // lam9288
void* lam9288 = encode_clo(alloc_clo(lam9288_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _9290, void* kont9149, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9291_fptr(); // lam9291
void lam9291_spec(void* env9292, void* id_8802); // lam9291
void* lam9291 = encode_clo(alloc_clo(lam9291_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _9293, void* kont9151, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _9294, void* kont9153, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _9295, void* kont9154, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam9296_fptr(); // lam9296
void lam9296_spec(void* env9297, void* id_8811); // lam9296
void* lam9296 = encode_clo(alloc_clo(lam9296_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _9298, void* kont9155, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9299_fptr(); // lam9299
void lam9299_spec(void* env9300, void* xy8813); // lam9299
void* lam9299 = encode_clo(alloc_clo(lam9299_fptr, 0));

void lam9301_fptr(); // lam9301
void lam9301_spec(void* env9302, void* id_8816); // lam9301
void* lam9301 = encode_clo(alloc_clo(lam9301_fptr, 0));

void lam9303_fptr(); // lam9303
void lam9303_spec(void* env9304, void* lsts); // lam9303
void* lam9303 = encode_clo(alloc_clo(lam9303_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9306_fptr(); // lam9306
void lam9306_spec(void* env9307, void* xy8819); // lam9306
void* lam9306 = encode_clo(alloc_clo(lam9306_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _9308, void* kont9161, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _9309, void* kont9163, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam9310_fptr(); // lam9310
void lam9310_spec(void* env9311, void* id_8833); // lam9310
void* lam9310 = encode_clo(alloc_clo(lam9310_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _9312, void* kont9164, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam9313_fptr(); // lam9313
void lam9313_spec(void* env9314, void* id_8840); // lam9313
void* lam9313 = encode_clo(alloc_clo(lam9313_fptr, 0));

void lam9315_fptr(); // lam9315
void lam9315_spec(void* env9316, void* id_8838); // lam9315
void* lam9315 = encode_clo(alloc_clo(lam9315_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _9317, void* kont9166, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam9318_fptr(); // lam9318
void lam9318_spec(void* env9319, void* id_8845); // lam9318
void* lam9318 = encode_clo(alloc_clo(lam9318_fptr, 0));

void my_u45foldr_u45aux_fptr(); // my-foldr-aux
void my_u45foldr_u45aux_spec(void* _9320, void* kont9169, void* lst, void* f, void* base); // my-foldr-aux
void* my_u45foldr_u45aux = encode_clo(alloc_clo(my_u45foldr_u45aux_fptr, 0));

void lam9321_fptr(); // lam9321
void lam9321_spec(void* env9322, void* xy8846); // lam9321
void* lam9321 = encode_clo(alloc_clo(lam9321_fptr, 0));

void my_u45foldr_fptr(); // my-foldr
void my_u45foldr_spec(void* _9323, void* kont9171, void* f, void* base, void* lst); // my-foldr
void* my_u45foldr = encode_clo(alloc_clo(my_u45foldr_fptr, 0));

void lam9324_fptr(); // lam9324
void lam9324_spec(void* env9325, void* id_8849); // lam9324
void* lam9324 = encode_clo(alloc_clo(lam9324_fptr, 0));

void my_u45foldl_u45aux_fptr(); // my-foldl-aux
void my_u45foldl_u45aux_spec(void* _9326, void* kont9173, void* f, void* base, void* lst); // my-foldl-aux
void* my_u45foldl_u45aux = encode_clo(alloc_clo(my_u45foldl_u45aux_fptr, 0));

void lam9327_fptr(); // lam9327
void lam9327_spec(void* env9328, void* xy8851); // lam9327
void* lam9327 = encode_clo(alloc_clo(lam9327_fptr, 0));

void my_u45foldl_fptr(); // my-foldl
void my_u45foldl_spec(void* _9329, void* kont9175, void* f, void* base, void* lst); // my-foldl
void* my_u45foldl = encode_clo(alloc_clo(my_u45foldl_fptr, 0));

void lam9330_fptr(); // lam9330
void lam9330_spec(void* env9331, void* id_8856); // lam9330
void* lam9330 = encode_clo(alloc_clo(lam9330_fptr, 0));

void lam9332_fptr(); // lam9332
void lam9332_spec(void* env9333, void* id_8853); // lam9332
void* lam9332 = encode_clo(alloc_clo(lam9332_fptr, 0));

void my_u45for_u45aux_fptr(); // my-for-aux
void my_u45for_u45aux_spec(void* _9334, void* kont9177, void* lo, void* hi, void* f); // my-for-aux
void* my_u45for_u45aux = encode_clo(alloc_clo(my_u45for_u45aux_fptr, 0));

void lam9335_fptr(); // lam9335
void lam9335_spec(void* env9336, void* xy8858); // lam9335
void* lam9335 = encode_clo(alloc_clo(lam9335_fptr, 0));

void my_u45for_fptr(); // my-for
void my_u45for_spec(void* _9337, void* kont9180, void* lo, void* hi, void* f); // my-for
void* my_u45for = encode_clo(alloc_clo(my_u45for_fptr, 0));

void concat_fptr(); // concat
void concat_spec(void* _9338, void* kont9182, void* lists); // concat
void* concat = encode_clo(alloc_clo(concat_fptr, 0));

void list_u45read_fptr(); // list-read
void list_u45read_spec(void* _9339, void* kont9183, void* lst, void* i); // list-read
void* list_u45read = encode_clo(alloc_clo(list_u45read_fptr, 0));

void lam9340_fptr(); // lam9340
void lam9340_spec(void* env9341, void* id_8873); // lam9340
void* lam9340 = encode_clo(alloc_clo(lam9340_fptr, 0));

void list_u45write_fptr(); // list-write
void list_u45write_spec(void* _9342, void* kont9184, void* lst, void* i, void* val); // list-write
void* list_u45write = encode_clo(alloc_clo(list_u45write_fptr, 0));

void lam9343_fptr(); // lam9343
void lam9343_spec(void* env9344, void* id_8881); // lam9343
void* lam9343 = encode_clo(alloc_clo(lam9343_fptr, 0));

void list_u45remove_u45pos_fptr(); // list-remove-pos
void list_u45remove_u45pos_spec(void* _9345, void* kont9186, void* lst, void* i); // list-remove-pos
void* list_u45remove_u45pos = encode_clo(alloc_clo(list_u45remove_u45pos_fptr, 0));

void lam9346_fptr(); // lam9346
void lam9346_spec(void* env9347, void* id_8886); // lam9346
void* lam9346 = encode_clo(alloc_clo(lam9346_fptr, 0));

void duplicates_u63_fptr(); // duplicates?
void duplicates_u63_spec(void* _9348, void* kont9188, void* lst); // duplicates?
void* duplicates_u63 = encode_clo(alloc_clo(duplicates_u63_fptr, 0));

void lam9349_fptr(); // lam9349
void lam9349_spec(void* env9350, void* cont9192, void* j); // lam9349
void* lam9349 = encode_clo(alloc_clo(lam9349_fptr, 0));

void lam9351_fptr(); // lam9351
void lam9351_spec(void* env9352, void* cont9191, void* i); // lam9351
void* lam9351 = encode_clo(alloc_clo(lam9351_fptr, 0));

void make_u45matrix_fptr(); // make-matrix
void make_u45matrix_spec(void* _9353, void* kont9190, void* n, void* m, void* init); // make-matrix
void* make_u45matrix = encode_clo(alloc_clo(make_u45matrix_fptr, 0));

void lam9354_fptr(); // lam9354
void lam9354_spec(void* env9355, void* id_8894); // lam9354
void* lam9354 = encode_clo(alloc_clo(lam9354_fptr, 0));

void matrix_u45read_fptr(); // matrix-read
void matrix_u45read_spec(void* _9356, void* kont9193, void* mat, void* i, void* j); // matrix-read
void* matrix_u45read = encode_clo(alloc_clo(matrix_u45read_fptr, 0));

void lam9357_fptr(); // lam9357
void lam9357_spec(void* env9358, void* id_8896); // lam9357
void* lam9357 = encode_clo(alloc_clo(lam9357_fptr, 0));

void lam9359_fptr(); // lam9359
void lam9359_spec(void* env9360, void* id_8895); // lam9359
void* lam9359 = encode_clo(alloc_clo(lam9359_fptr, 0));

void matrix_u45write_fptr(); // matrix-write
void matrix_u45write_spec(void* _9361, void* kont9195, void* mat, void* i, void* j, void* val); // matrix-write
void* matrix_u45write = encode_clo(alloc_clo(matrix_u45write_fptr, 0));

void lam9362_fptr(); // lam9362
void lam9362_spec(void* env9363, void* id_8899); // lam9362
void* lam9362 = encode_clo(alloc_clo(lam9362_fptr, 0));

void lam9364_fptr(); // lam9364
void lam9364_spec(void* env9365, void* id_8897); // lam9364
void* lam9364 = encode_clo(alloc_clo(lam9364_fptr, 0));

void matrix_u45size_fptr(); // matrix-size
void matrix_u45size_spec(void* _9366, void* kont9198, void* mat); // matrix-size
void* matrix_u45size = encode_clo(alloc_clo(matrix_u45size_fptr, 0));

void lam9367_fptr(); // lam9367
void lam9367_spec(void* env9368, void* cont9202, void* lst); // lam9367
void* lam9367 = encode_clo(alloc_clo(lam9367_fptr, 0));

void matrix_u45map_fptr(); // matrix-map
void matrix_u45map_spec(void* _9369, void* kont9201, void* f, void* mat); // matrix-map
void* matrix_u45map = encode_clo(alloc_clo(matrix_u45map_fptr, 0));

void initial_u45random_fptr(); // initial-random
void initial_u45random_spec(void* _9370, void* kont9203); // initial-random
void* initial_u45random = encode_clo(alloc_clo(initial_u45random_fptr, 0));

void next_u45random_fptr(); // next-random
void next_u45random_spec(void* _9371, void* kont9204, void* current_u45random); // next-random
void* next_u45random = encode_clo(alloc_clo(next_u45random_fptr, 0));

void lam9372_fptr(); // lam9372
void lam9372_spec(void* env9373, void* id_8909); // lam9372
void* lam9372 = encode_clo(alloc_clo(lam9372_fptr, 0));

void lam9374_fptr(); // lam9374
void lam9374_spec(void* env9375, void* id_8912); // lam9374
void* lam9374 = encode_clo(alloc_clo(lam9374_fptr, 0));

void lam9376_fptr(); // lam9376
void lam9376_spec(void* env9377, void* id_8911); // lam9376
void* lam9376 = encode_clo(alloc_clo(lam9376_fptr, 0));

void lam9378_fptr(); // lam9378
void lam9378_spec(void* env9379, void* id_8910); // lam9378
void* lam9378 = encode_clo(alloc_clo(lam9378_fptr, 0));

void lam9380_fptr(); // lam9380
void lam9380_spec(void* env9381, void* i); // lam9380
void* lam9380 = encode_clo(alloc_clo(lam9380_fptr, 0));

void lam9382_fptr(); // lam9382
void lam9382_spec(void* env9383, void* new_u45random); // lam9382
void* lam9382 = encode_clo(alloc_clo(lam9382_fptr, 0));

void shuffle_u45aux_fptr(); // shuffle-aux
void shuffle_u45aux_spec(void* _9384, void* kont9205, void* lst, void* current_u45random); // shuffle-aux
void* shuffle_u45aux = encode_clo(alloc_clo(shuffle_u45aux_fptr, 0));

void lam9385_fptr(); // lam9385
void lam9385_spec(void* env9386, void* id_8913); // lam9385
void* lam9385 = encode_clo(alloc_clo(lam9385_fptr, 0));

void shuffle_fptr(); // shuffle
void shuffle_spec(void* _9387, void* kont9212, void* lst); // shuffle
void* shuffle = encode_clo(alloc_clo(shuffle_fptr, 0));

void lam9388_fptr(); // lam9388
void lam9388_spec(void* env9389, void* cont9215, void* x); // lam9388
void* lam9388 = encode_clo(alloc_clo(lam9388_fptr, 0));

void cave_u45to_u45maze_fptr(); // cave-to-maze
void cave_u45to_u45maze_spec(void* _9390, void* kont9214, void* cave); // cave-to-maze
void* cave_u45to_u45maze = encode_clo(alloc_clo(cave_u45to_u45maze_fptr, 0));

void lam9391_fptr(); // lam9391
void lam9391_spec(void* env9392, void* id_8962); // lam9391
void* lam9391 = encode_clo(alloc_clo(lam9391_fptr, 0));

void lam9393_fptr(); // lam9393
void lam9393_spec(void* env9394, void* id_8957); // lam9393
void* lam9393 = encode_clo(alloc_clo(lam9393_fptr, 0));

void lam9395_fptr(); // lam9395
void lam9395_spec(void* env9396, void* id_8950); // lam9395
void* lam9395 = encode_clo(alloc_clo(lam9395_fptr, 0));

void lam9397_fptr(); // lam9397
void lam9397_spec(void* env9398, void* id_8945); // lam9397
void* lam9397 = encode_clo(alloc_clo(lam9397_fptr, 0));

void lam9399_fptr(); // lam9399
void lam9399_spec(void* env9400, void* id_8939); // lam9399
void* lam9399 = encode_clo(alloc_clo(lam9399_fptr, 0));

void lam9401_fptr(); // lam9401
void lam9401_spec(void* env9402, void* id_8934); // lam9401
void* lam9401 = encode_clo(alloc_clo(lam9401_fptr, 0));

void lam9403_fptr(); // lam9403
void lam9403_spec(void* env9404, void* id_8927); // lam9403
void* lam9403 = encode_clo(alloc_clo(lam9403_fptr, 0));

void lam9405_fptr(); // lam9405
void lam9405_spec(void* env9406, void* id_8922); // lam9405
void* lam9405 = encode_clo(alloc_clo(lam9405_fptr, 0));

void lam9407_fptr(); // lam9407
void lam9407_spec(void* env9408, void* size); // lam9407
void* lam9407 = encode_clo(alloc_clo(lam9407_fptr, 0));

void neighboring_u45cavities_fptr(); // neighboring-cavities
void neighboring_u45cavities_spec(void* _9409, void* kont9216, void* pos, void* cave); // neighboring-cavities
void* neighboring_u45cavities = encode_clo(alloc_clo(neighboring_u45cavities_fptr, 0));

void lam9410_fptr(); // lam9410
void lam9410_spec(void* env9411, void* id_8966); // lam9410
void* lam9410 = encode_clo(alloc_clo(lam9410_fptr, 0));

void lam9412_fptr(); // lam9412
void lam9412_spec(void* env9413, void* id_8965); // lam9412
void* lam9412 = encode_clo(alloc_clo(lam9412_fptr, 0));

void lam9414_fptr(); // lam9414
void lam9414_spec(void* env9415, void* cont9227, void* c, void* nc); // lam9414
void* lam9414 = encode_clo(alloc_clo(lam9414_fptr, 0));

void lam9416_fptr(); // lam9416
void lam9416_spec(void* env9417, void* cavity_u45id); // lam9416
void* lam9416 = encode_clo(alloc_clo(lam9416_fptr, 0));

void change_u45cavity_u45aux_fptr(); // change-cavity-aux
void change_u45cavity_u45aux_spec(void* _9418, void* kont9226, void* cave, void* pos, void* new_u45cavity_u45id, void* old_u45cavity_u45id); // change-cavity-aux
void* change_u45cavity_u45aux = encode_clo(alloc_clo(change_u45cavity_u45aux_fptr, 0));

void lam9419_fptr(); // lam9419
void lam9419_spec(void* env9420, void* id_8967); // lam9419
void* lam9419 = encode_clo(alloc_clo(lam9419_fptr, 0));

void change_u45cavity_fptr(); // change-cavity
void change_u45cavity_spec(void* _9421, void* kont9231, void* cave, void* pos, void* new_u45cavity_u45id); // change-cavity
void* change_u45cavity = encode_clo(alloc_clo(change_u45cavity_fptr, 0));

void pierce_fptr(); // pierce
void pierce_spec(void* _9422, void* kont9233, void* pos, void* cave); // pierce
void* pierce = encode_clo(alloc_clo(pierce_fptr, 0));

void lam9423_fptr(); // lam9423
void lam9423_spec(void* env9424, void* id_8974); // lam9423
void* lam9423 = encode_clo(alloc_clo(lam9423_fptr, 0));

void lam9425_fptr(); // lam9425
void lam9425_spec(void* env9426, void* cont9236, void* c, void* nc); // lam9425
void* lam9425 = encode_clo(alloc_clo(lam9425_fptr, 0));

void lam9427_fptr(); // lam9427
void lam9427_spec(void* env9428, void* id_8972); // lam9427
void* lam9427 = encode_clo(alloc_clo(lam9427_fptr, 0));

void lam9429_fptr(); // lam9429
void lam9429_spec(void* env9430, void* id_8971); // lam9429
void* lam9429 = encode_clo(alloc_clo(lam9429_fptr, 0));

void lam9431_fptr(); // lam9431
void lam9431_spec(void* env9432, void* cont9235, void* nc); // lam9431
void* lam9431 = encode_clo(alloc_clo(lam9431_fptr, 0));

void lam9433_fptr(); // lam9433
void lam9433_spec(void* env9434, void* ncs); // lam9433
void* lam9433 = encode_clo(alloc_clo(lam9433_fptr, 0));

void try_u45to_u45pierce_fptr(); // try-to-pierce
void try_u45to_u45pierce_spec(void* _9435, void* kont9234, void* pos, void* cave); // try-to-pierce
void* try_u45to_u45pierce = encode_clo(alloc_clo(try_u45to_u45pierce_fptr, 0));

void lam9436_fptr(); // lam9436
void lam9436_spec(void* env9437, void* id_8977); // lam9436
void* lam9436 = encode_clo(alloc_clo(lam9436_fptr, 0));

void pierce_u45randomly_fptr(); // pierce-randomly
void pierce_u45randomly_spec(void* _9438, void* kont9241, void* possible_u45holes, void* cave); // pierce-randomly
void* pierce_u45randomly = encode_clo(alloc_clo(pierce_u45randomly_fptr, 0));

void lam9439_fptr(); // lam9439
void lam9439_spec(void* env9440, void* xy8979); // lam9439
void* lam9439 = encode_clo(alloc_clo(lam9439_fptr, 0));

void lam9441_fptr(); // lam9441
void lam9441_spec(void* env9442, void* xy8987); // lam9441
void* lam9441 = encode_clo(alloc_clo(lam9441_fptr, 0));

void lam9443_fptr(); // lam9443
void lam9443_spec(void* env9444, void* id_8989); // lam9443
void* lam9443 = encode_clo(alloc_clo(lam9443_fptr, 0));

void lam9445_fptr(); // lam9445
void lam9445_spec(void* env9446, void* id_8986); // lam9445
void* lam9445 = encode_clo(alloc_clo(lam9445_fptr, 0));

void lam9447_fptr(); // lam9447
void lam9447_spec(void* env9448, void* cont9254, void* i, void* j); // lam9447
void* lam9447 = encode_clo(alloc_clo(lam9447_fptr, 0));

void lam9449_fptr(); // lam9449
void lam9449_spec(void* env9450, void* id_9003); // lam9449
void* lam9449 = encode_clo(alloc_clo(lam9449_fptr, 0));

void lam9451_fptr(); // lam9451
void lam9451_spec(void* env9452, void* id_9001); // lam9451
void* lam9451 = encode_clo(alloc_clo(lam9451_fptr, 0));

void lam9453_fptr(); // lam9453
void lam9453_spec(void* env9454, void* id_8996); // lam9453
void* lam9453 = encode_clo(alloc_clo(lam9453_fptr, 0));

void lam9455_fptr(); // lam9455
void lam9455_spec(void* env9456, void* id_8995); // lam9455
void* lam9455 = encode_clo(alloc_clo(lam9455_fptr, 0));

void lam9457_fptr(); // lam9457
void lam9457_spec(void* env9458, void* cont9248, void* j); // lam9457
void* lam9457 = encode_clo(alloc_clo(lam9457_fptr, 0));

void lam9459_fptr(); // lam9459
void lam9459_spec(void* env9460, void* cont9247, void* i); // lam9459
void* lam9459 = encode_clo(alloc_clo(lam9459_fptr, 0));

void lam9461_fptr(); // lam9461
void lam9461_spec(void* env9462, void* id_9005); // lam9461
void* lam9461 = encode_clo(alloc_clo(lam9461_fptr, 0));

void lam9463_fptr(); // lam9463
void lam9463_spec(void* env9464, void* id_9004); // lam9463
void* lam9463 = encode_clo(alloc_clo(lam9463_fptr, 0));

void lam9465_fptr(); // lam9465
void lam9465_spec(void* env9466, void* possible_u45holes); // lam9465
void* lam9465 = encode_clo(alloc_clo(lam9465_fptr, 0));

void lam9467_fptr(); // lam9467
void lam9467_spec(void* env9468, void* cave); // lam9467
void* lam9467 = encode_clo(alloc_clo(lam9467_fptr, 0));

void lam9469_fptr(); // lam9469
void lam9469_spec(void* env9470, void* id_8984); // lam9469
void* lam9469 = encode_clo(alloc_clo(lam9469_fptr, 0));

void lam9471_fptr(); // lam9471
void lam9471_spec(void* env9472, void* id_8981); // lam9471
void* lam9471 = encode_clo(alloc_clo(lam9471_fptr, 0));

void lam9473_fptr(); // lam9473
void lam9473_spec(void* env9474, void* id_8978); // lam9473
void* lam9473 = encode_clo(alloc_clo(lam9473_fptr, 0));

void make_u45maze_fptr(); // make-maze
void make_u45maze_spec(void* _9475, void* kont9243, void* n, void* m); // make-maze
void* make_u45maze = encode_clo(alloc_clo(make_u45maze_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9476, void* kont9262); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9535 = prim_car(lst);
void* const lst9537 = prim_cdr(lst);
void* const x9536 = apply_prim__u43(lst9537);
arg_buffer[1] = kont9535;
arg_buffer[2] = x9536;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9535))[0])();
}
else
{
void* const kont9535 = arg_buffer[2];
void* const x9536 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9535))[0])(kont9535, x9536);
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
void* const kont9538 = prim_car(lst);
void* const lst9540 = prim_cdr(lst);
void* const x9539 = apply_prim__u45(lst9540);
arg_buffer[1] = kont9538;
arg_buffer[2] = x9539;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9538))[0])();
}
else
{
void* const kont9538 = arg_buffer[2];
void* const x9539 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9538))[0])(kont9538, x9539);
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
void* const kont9541 = prim_car(lst);
void* const lst9543 = prim_cdr(lst);
void* const x9542 = apply_prim__u42(lst9543);
arg_buffer[1] = kont9541;
arg_buffer[2] = x9542;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9541))[0])();
}
else
{
void* const kont9541 = arg_buffer[2];
void* const x9542 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9541))[0])(kont9541, x9542);
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
void* const kont9544 = prim_car(lst);
void* const lst9546 = prim_cdr(lst);
void* const x9545 = apply_prim__u47(lst9546);
arg_buffer[1] = kont9544;
arg_buffer[2] = x9545;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9544))[0])();
}
else
{
void* const kont9544 = arg_buffer[2];
void* const x9545 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9544))[0])(kont9544, x9545);
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
void* const kont9547 = prim_car(lst);
void* const lst9549 = prim_cdr(lst);
void* const x9548 = apply_prim__u61(lst9549);
arg_buffer[1] = kont9547;
arg_buffer[2] = x9548;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9547))[0])();
}
else
{
void* const kont9547 = arg_buffer[2];
void* const x9548 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9547))[0])(kont9547, x9548);
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
void* const kont9550 = prim_car(lst);
void* const lst9552 = prim_cdr(lst);
void* const x9551 = apply_prim__u62(lst9552);
arg_buffer[1] = kont9550;
arg_buffer[2] = x9551;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9550))[0])();
}
else
{
void* const kont9550 = arg_buffer[2];
void* const x9551 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9550))[0])(kont9550, x9551);
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
void* const kont9553 = prim_car(lst);
void* const lst9555 = prim_cdr(lst);
void* const x9554 = apply_prim__u60(lst9555);
arg_buffer[1] = kont9553;
arg_buffer[2] = x9554;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9553))[0])();
}
else
{
void* const kont9553 = arg_buffer[2];
void* const x9554 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9553))[0])(kont9553, x9554);
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
void* const kont9556 = prim_car(lst);
void* const lst9558 = prim_cdr(lst);
void* const x9557 = apply_prim__u60_u61(lst9558);
arg_buffer[1] = kont9556;
arg_buffer[2] = x9557;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9556))[0])();
}
else
{
void* const kont9556 = arg_buffer[2];
void* const x9557 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9556))[0])(kont9556, x9557);
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
void* const kont9559 = prim_car(lst);
void* const lst9561 = prim_cdr(lst);
void* const x9560 = apply_prim__u62_u61(lst9561);
arg_buffer[1] = kont9559;
arg_buffer[2] = x9560;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9559))[0])();
}
else
{
void* const kont9559 = arg_buffer[2];
void* const x9560 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9559))[0])(kont9559, x9560);
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
void* const kont9562 = prim_car(lst);
void* const lst9564 = prim_cdr(lst);
void* const x9563 = apply_prim_modulo(lst9564);
arg_buffer[1] = kont9562;
arg_buffer[2] = x9563;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9562))[0])();
}
else
{
void* const kont9562 = arg_buffer[2];
void* const x9563 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9562))[0])(kont9562, x9563);
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
void* const kont9565 = prim_car(lst);
void* const lst9567 = prim_cdr(lst);
void* const x9566 = apply_prim_null_u63(lst9567);
arg_buffer[1] = kont9565;
arg_buffer[2] = x9566;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9565))[0])();
}
else
{
void* const kont9565 = arg_buffer[2];
void* const x9566 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9565))[0])(kont9565, x9566);
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
void* const kont9568 = prim_car(lst);
void* const lst9570 = prim_cdr(lst);
void* const x9569 = apply_prim_equal_u63(lst9570);
arg_buffer[1] = kont9568;
arg_buffer[2] = x9569;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9568))[0])();
}
else
{
void* const kont9568 = arg_buffer[2];
void* const x9569 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9568))[0])(kont9568, x9569);
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
void* const kont9571 = prim_car(lst);
void* const lst9573 = prim_cdr(lst);
void* const x9572 = apply_prim_eq_u63(lst9573);
arg_buffer[1] = kont9571;
arg_buffer[2] = x9572;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9571))[0])();
}
else
{
void* const kont9571 = arg_buffer[2];
void* const x9572 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9571))[0])(kont9571, x9572);
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
void* const kont9574 = prim_car(lst);
void* const lst9576 = prim_cdr(lst);
void* const x9575 = apply_prim_cons(lst9576);
arg_buffer[1] = kont9574;
arg_buffer[2] = x9575;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9574))[0])();
}
else
{
void* const kont9574 = arg_buffer[2];
void* const x9575 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9574))[0])(kont9574, x9575);
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
void* const kont9577 = prim_car(lst);
void* const lst9579 = prim_cdr(lst);
void* const x9578 = apply_prim_car(lst9579);
arg_buffer[1] = kont9577;
arg_buffer[2] = x9578;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9577))[0])();
}
else
{
void* const kont9577 = arg_buffer[2];
void* const x9578 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9577))[0])(kont9577, x9578);
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
void* const kont9580 = prim_car(lst);
void* const lst9582 = prim_cdr(lst);
void* const x9581 = apply_prim_cdr(lst9582);
arg_buffer[1] = kont9580;
arg_buffer[2] = x9581;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9580))[0])();
}
else
{
void* const kont9580 = arg_buffer[2];
void* const x9581 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9580))[0])(kont9580, x9581);
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
void* const kont9583 = prim_car(lst);
void* const lst9585 = prim_cdr(lst);
void* const x9584 = apply_prim_float_u45_u62int(lst9585);
arg_buffer[1] = kont9583;
arg_buffer[2] = x9584;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9583))[0])();
}
else
{
void* const kont9583 = arg_buffer[2];
void* const x9584 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9583))[0])(kont9583, x9584);
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
void* const kont9586 = prim_car(lst);
void* const lst9588 = prim_cdr(lst);
void* const x9587 = apply_prim_int_u45_u62float(lst9588);
arg_buffer[1] = kont9586;
arg_buffer[2] = x9587;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9586))[0])();
}
else
{
void* const kont9586 = arg_buffer[2];
void* const x9587 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9586))[0])(kont9586, x9587);
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
void* const kont9589 = prim_car(lst);
void* const lst9591 = prim_cdr(lst);
void* const x9590 = apply_prim_hash(lst9591);
arg_buffer[1] = kont9589;
arg_buffer[2] = x9590;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9589))[0])();
}
else
{
void* const kont9589 = arg_buffer[2];
void* const x9590 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9589))[0])(kont9589, x9590);
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
void* const kont9592 = prim_car(lst);
void* const lst9594 = prim_cdr(lst);
void* const x9593 = apply_prim_hash_u45ref(lst9594);
arg_buffer[1] = kont9592;
arg_buffer[2] = x9593;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9592))[0])();
}
else
{
void* const kont9592 = arg_buffer[2];
void* const x9593 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9592))[0])(kont9592, x9593);
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
void* const kont9595 = prim_car(lst);
void* const lst9597 = prim_cdr(lst);
void* const x9596 = apply_prim_hash_u45set(lst9597);
arg_buffer[1] = kont9595;
arg_buffer[2] = x9596;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9595))[0])();
}
else
{
void* const kont9595 = arg_buffer[2];
void* const x9596 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9595))[0])(kont9595, x9596);
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
void* const kont9598 = prim_car(lst);
void* const lst9600 = prim_cdr(lst);
void* const x9599 = apply_prim_hash_u45keys(lst9600);
arg_buffer[1] = kont9598;
arg_buffer[2] = x9599;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9598))[0])();
}
else
{
void* const kont9598 = arg_buffer[2];
void* const x9599 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9598))[0])(kont9598, x9599);
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
void* const kont9601 = prim_car(lst);
void* const lst9603 = prim_cdr(lst);
void* const x9602 = apply_prim_hash_u45has_u45key_u63(lst9603);
arg_buffer[1] = kont9601;
arg_buffer[2] = x9602;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9601))[0])();
}
else
{
void* const kont9601 = arg_buffer[2];
void* const x9602 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9601))[0])(kont9601, x9602);
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
void* const kont9604 = prim_car(lst);
void* const lst9606 = prim_cdr(lst);
void* const x9605 = apply_prim_hash_u45count(lst9606);
arg_buffer[1] = kont9604;
arg_buffer[2] = x9605;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9604))[0])();
}
else
{
void* const kont9604 = arg_buffer[2];
void* const x9605 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9604))[0])(kont9604, x9605);
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
void* const kont9607 = prim_car(lst);
void* const lst9609 = prim_cdr(lst);
void* const x9608 = apply_prim_set(lst9609);
arg_buffer[1] = kont9607;
arg_buffer[2] = x9608;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9607))[0])();
}
else
{
void* const kont9607 = arg_buffer[2];
void* const x9608 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9607))[0])(kont9607, x9608);
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
void* const kont9610 = prim_car(lst);
void* const lst9612 = prim_cdr(lst);
void* const x9611 = apply_prim_set_u45_u62list(lst9612);
arg_buffer[1] = kont9610;
arg_buffer[2] = x9611;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9610))[0])();
}
else
{
void* const kont9610 = arg_buffer[2];
void* const x9611 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9610))[0])(kont9610, x9611);
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
void* const kont9613 = prim_car(lst);
void* const lst9615 = prim_cdr(lst);
void* const x9614 = apply_prim_list_u45_u62set(lst9615);
arg_buffer[1] = kont9613;
arg_buffer[2] = x9614;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9613))[0])();
}
else
{
void* const kont9613 = arg_buffer[2];
void* const x9614 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9613))[0])(kont9613, x9614);
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
void* const kont9616 = prim_car(lst);
void* const lst9618 = prim_cdr(lst);
void* const x9617 = apply_prim_set_u45add(lst9618);
arg_buffer[1] = kont9616;
arg_buffer[2] = x9617;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9616))[0])();
}
else
{
void* const kont9616 = arg_buffer[2];
void* const x9617 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9616))[0])(kont9616, x9617);
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
void* const kont9619 = prim_car(lst);
void* const lst9621 = prim_cdr(lst);
void* const x9620 = apply_prim_set_u45member_u63(lst9621);
arg_buffer[1] = kont9619;
arg_buffer[2] = x9620;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9619))[0])();
}
else
{
void* const kont9619 = arg_buffer[2];
void* const x9620 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9619))[0])(kont9619, x9620);
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
void* const kont9622 = prim_car(lst);
void* const lst9624 = prim_cdr(lst);
void* const x9623 = apply_prim_set_u45remove(lst9624);
arg_buffer[1] = kont9622;
arg_buffer[2] = x9623;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9622))[0])();
}
else
{
void* const kont9622 = arg_buffer[2];
void* const x9623 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9622))[0])(kont9622, x9623);
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
void* const kont9625 = prim_car(lst);
void* const lst9627 = prim_cdr(lst);
void* const x9626 = apply_prim_set_u45count(lst9627);
arg_buffer[1] = kont9625;
arg_buffer[2] = x9626;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9625))[0])();
}
else
{
void* const kont9625 = arg_buffer[2];
void* const x9626 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9625))[0])(kont9625, x9626);
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
void* const kont9628 = prim_car(lst);
void* const lst9630 = prim_cdr(lst);
void* const x9629 = apply_prim_string_u63(lst9630);
arg_buffer[1] = kont9628;
arg_buffer[2] = x9629;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9628))[0])();
}
else
{
void* const kont9628 = arg_buffer[2];
void* const x9629 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9628))[0])(kont9628, x9629);
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
void* const kont9631 = prim_car(lst);
void* const lst9633 = prim_cdr(lst);
void* const x9632 = apply_prim_string_u45length(lst9633);
arg_buffer[1] = kont9631;
arg_buffer[2] = x9632;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9631))[0])();
}
else
{
void* const kont9631 = arg_buffer[2];
void* const x9632 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9631))[0])(kont9631, x9632);
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
void* const kont9634 = prim_car(lst);
void* const lst9636 = prim_cdr(lst);
void* const x9635 = apply_prim_string_u45ref(lst9636);
arg_buffer[1] = kont9634;
arg_buffer[2] = x9635;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9634))[0])();
}
else
{
void* const kont9634 = arg_buffer[2];
void* const x9635 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9634))[0])(kont9634, x9635);
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
void* const kont9637 = prim_car(lst);
void* const lst9639 = prim_cdr(lst);
void* const x9638 = apply_prim_substring(lst9639);
arg_buffer[1] = kont9637;
arg_buffer[2] = x9638;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9637))[0])();
}
else
{
void* const kont9637 = arg_buffer[2];
void* const x9638 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9637))[0])(kont9637, x9638);
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
void* const kont9640 = prim_car(lst);
void* const lst9642 = prim_cdr(lst);
void* const x9641 = apply_prim_string_u45append(lst9642);
arg_buffer[1] = kont9640;
arg_buffer[2] = x9641;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9640))[0])();
}
else
{
void* const kont9640 = arg_buffer[2];
void* const x9641 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9640))[0])(kont9640, x9641);
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
void* const kont9643 = prim_car(lst);
void* const lst9645 = prim_cdr(lst);
void* const x9644 = apply_prim_string_u45_u62list(lst9645);
arg_buffer[1] = kont9643;
arg_buffer[2] = x9644;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9643))[0])();
}
else
{
void* const kont9643 = arg_buffer[2];
void* const x9644 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9643))[0])(kont9643, x9644);
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
void* const kont9646 = prim_car(lst);
void* const lst9648 = prim_cdr(lst);
void* const x9647 = apply_prim_exact_u45floor(lst9648);
arg_buffer[1] = kont9646;
arg_buffer[2] = x9647;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9646))[0])();
}
else
{
void* const kont9646 = arg_buffer[2];
void* const x9647 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9646))[0])(kont9646, x9647);
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
void* const kont9649 = prim_car(lst);
void* const lst9651 = prim_cdr(lst);
void* const x9650 = apply_prim_exact_u45ceiling(lst9651);
arg_buffer[1] = kont9649;
arg_buffer[2] = x9650;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9649))[0])();
}
else
{
void* const kont9649 = arg_buffer[2];
void* const x9650 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9649))[0])(kont9649, x9650);
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
void* const kont9652 = prim_car(lst);
void* const lst9654 = prim_cdr(lst);
void* const x9653 = apply_prim_exact_u45round(lst9654);
arg_buffer[1] = kont9652;
arg_buffer[2] = x9653;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9652))[0])();
}
else
{
void* const kont9652 = arg_buffer[2];
void* const x9653 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9652))[0])(kont9652, x9653);
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
void* const kont9655 = prim_car(lst);
void* const lst9657 = prim_cdr(lst);
void* const x9656 = apply_prim_abs(lst9657);
arg_buffer[1] = kont9655;
arg_buffer[2] = x9656;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9655))[0])();
}
else
{
void* const kont9655 = arg_buffer[2];
void* const x9656 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9655))[0])(kont9655, x9656);
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
void* const kont9658 = prim_car(lst);
void* const lst9660 = prim_cdr(lst);
void* const x9659 = apply_prim_max(lst9660);
arg_buffer[1] = kont9658;
arg_buffer[2] = x9659;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9658))[0])();
}
else
{
void* const kont9658 = arg_buffer[2];
void* const x9659 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9658))[0])(kont9658, x9659);
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
void* const kont9661 = prim_car(lst);
void* const lst9663 = prim_cdr(lst);
void* const x9662 = apply_prim_min(lst9663);
arg_buffer[1] = kont9661;
arg_buffer[2] = x9662;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9661))[0])();
}
else
{
void* const kont9661 = arg_buffer[2];
void* const x9662 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9661))[0])(kont9661, x9662);
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
void* const kont9664 = prim_car(lst);
void* const lst9666 = prim_cdr(lst);
void* const x9665 = apply_prim_expt(lst9666);
arg_buffer[1] = kont9664;
arg_buffer[2] = x9665;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9664))[0])();
}
else
{
void* const kont9664 = arg_buffer[2];
void* const x9665 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9664))[0])(kont9664, x9665);
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
void* const kont9667 = prim_car(lst);
void* const lst9669 = prim_cdr(lst);
void* const x9668 = apply_prim_sqrt(lst9669);
arg_buffer[1] = kont9667;
arg_buffer[2] = x9668;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9667))[0])();
}
else
{
void* const kont9667 = arg_buffer[2];
void* const x9668 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9667))[0])(kont9667, x9668);
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
void* const kont9670 = prim_car(lst);
void* const lst9672 = prim_cdr(lst);
void* const x9671 = apply_prim_remainder(lst9672);
arg_buffer[1] = kont9670;
arg_buffer[2] = x9671;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9670))[0])();
}
else
{
void* const kont9670 = arg_buffer[2];
void* const x9671 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9670))[0])(kont9670, x9671);
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
void* const kont9673 = prim_car(lst);
void* const lst9675 = prim_cdr(lst);
void* const x9674 = apply_prim_quotient(lst9675);
arg_buffer[1] = kont9673;
arg_buffer[2] = x9674;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9673))[0])();
}
else
{
void* const kont9673 = arg_buffer[2];
void* const x9674 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9673))[0])(kont9673, x9674);
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
void* const kont9676 = prim_car(lst);
void* const lst9678 = prim_cdr(lst);
void* const x9677 = apply_prim_random(lst9678);
arg_buffer[1] = kont9676;
arg_buffer[2] = x9677;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9676))[0])();
}
else
{
void* const kont9676 = arg_buffer[2];
void* const x9677 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9676))[0])(kont9676, x9677);
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
void* const kont9679 = prim_car(lst);
void* const lst9681 = prim_cdr(lst);
void* const x9680 = apply_prim_symbol_u63(lst9681);
arg_buffer[1] = kont9679;
arg_buffer[2] = x9680;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9679))[0])();
}
else
{
void* const kont9679 = arg_buffer[2];
void* const x9680 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9679))[0])(kont9679, x9680);
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
void* const kont9682 = prim_car(lst);
void* const lst9684 = prim_cdr(lst);
void* const x9683 = apply_prim_pair_u63(lst9684);
arg_buffer[1] = kont9682;
arg_buffer[2] = x9683;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9682))[0])();
}
else
{
void* const kont9682 = arg_buffer[2];
void* const x9683 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9682))[0])(kont9682, x9683);
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
void* const kont9685 = prim_car(lst);
void* const lst9687 = prim_cdr(lst);
void* const x9686 = apply_prim_positive_u63(lst9687);
arg_buffer[1] = kont9685;
arg_buffer[2] = x9686;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9685))[0])();
}
else
{
void* const kont9685 = arg_buffer[2];
void* const x9686 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9685))[0])(kont9685, x9686);
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
void* const kont9688 = prim_car(lst);
void* const lst9690 = prim_cdr(lst);
void* const x9689 = apply_prim_negative_u63(lst9690);
arg_buffer[1] = kont9688;
arg_buffer[2] = x9689;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9688))[0])();
}
else
{
void* const kont9688 = arg_buffer[2];
void* const x9689 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9688))[0])(kont9688, x9689);
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
void* const kont9691 = prim_car(lst);
void* const lst9693 = prim_cdr(lst);
void* const x9692 = apply_prim_list(lst9693);
arg_buffer[1] = kont9691;
arg_buffer[2] = x9692;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9691))[0])();
}
else
{
void* const kont9691 = arg_buffer[2];
void* const x9692 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9691))[0])(kont9691, x9692);
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont9132 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9132)[0])(kont9132, apply_prim_equal_u63_2(int9532, apply_prim_modulo_2(x, int9482)));
}

inline void even_u63_spec(void* _9264, void* kont9132, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9132)[0])(kont9132, apply_prim_equal_u63_2(int9532, apply_prim_modulo_2(x, int9482)));
}

inline void lam9265_fptr() // lam9265 -> generic version 
{
//reading env
void* const env9266 = arg_buffer[1];
//reading env and args
void* const id_8745 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9266);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t9527);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9530);
}

}

inline void lam9265_spec(void* env9266, void* id_8745) // lam9265 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9266);

//if-clause
if(is_true(id_8745))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t9527);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9530);
}

}

inline void boolean_u63_fptr() // boolean? -> generic version 
{
//reading env and args
void* const kont9133 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9694 = alloc_kont(lam9265_spec, 1);

//setting env list
clo9694[1] = kont9133;
void* f_lam_9134 = encode_clo(clo9694);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam9265_spec(f_lam_9134, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam9265_spec(f_lam_9134, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void boolean_u63_spec(void* _9267, void* kont9133, void* x) // boolean? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9695 = alloc_kont(lam9265_spec, 1);

//setting env list
clo9695[1] = kont9133;
void* f_lam_9134 = encode_clo(clo9695);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam9265_spec(f_lam_9134, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam9265_spec(f_lam_9134, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont9135 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9135)[0])(kont9135, apply_prim_equal_u63_2(int9525, apply_prim_modulo_2(x, int9482)));
}

inline void odd_u63_spec(void* _9268, void* kont9135, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9135)[0])(kont9135, apply_prim_equal_u63_2(int9525, apply_prim_modulo_2(x, int9482)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont9136 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9532, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9136)[0])(kont9136, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont9136, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9525));
}

}

inline void list_u45ref_spec(void* _9269, void* kont9136, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9532, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9136)[0])(kont9136, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont9136, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9525));
}

}

inline void lam9270_fptr() // lam9270 -> generic version 
{
//reading env
void* const env9271 = arg_buffer[1];
//reading env and args
void* const id_8760 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9271);

//if-clause
if(is_true(id_8760))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9530);
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

inline void lam9270_spec(void* env9271, void* id_8760) // lam9270 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9271);

//if-clause
if(is_true(id_8760))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9530);
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
void* const kont9137 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9696 = alloc_kont(lam9270_spec, 3);

//setting env list
clo9696[1] = kont9137;
clo9696[2] = item;
clo9696[3] = lst;
void* f_lam_9138 = encode_clo(clo9696);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam9270_spec(f_lam_9138, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam9270_spec(f_lam_9138, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _9272, void* kont9137, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9697 = alloc_kont(lam9270_spec, 3);

//setting env list
clo9697[1] = kont9137;
clo9697[2] = item;
clo9697[3] = lst;
void* f_lam_9138 = encode_clo(clo9697);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam9270_spec(f_lam_9138, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam9270_spec(f_lam_9138, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont9139 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9139)[0])(kont9139, bool_f9530);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9139)[0])(kont9139, bool_t9527);
}
else
{

//clo-app
member_u63_spec(member_u63, kont9139, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _9273, void* kont9139, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9139)[0])(kont9139, bool_f9530);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9139)[0])(kont9139, bool_t9527);
}
else
{

//clo-app
member_u63_spec(member_u63, kont9139, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam9274_fptr() // lam9274 -> generic version 
{
//reading env
void* const env9275 = arg_buffer[1];
//reading env and args
void* const id_8775 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9275);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8775));
}

inline void lam9274_spec(void* env9275, void* id_8775) // lam9274 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9275);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8775));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont9140 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9140)[0])(kont9140, int9532);
}
else
{

//creating new make-kont closure
void** clo9698 = alloc_kont(lam9274_spec, 2);

//setting env list
clo9698[1] = int9525;
clo9698[2] = kont9140;
void* f_lam_9141 = encode_clo(clo9698);



//clo-app
length_spec(length, f_lam_9141, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _9276, void* kont9140, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9140)[0])(kont9140, int9532);
}
else
{

//creating new make-kont closure
void** clo9699 = alloc_kont(lam9274_spec, 2);

//setting env list
clo9699[1] = int9525;
clo9699[2] = kont9140;
void* f_lam_9141 = encode_clo(clo9699);



//clo-app
length_spec(length, f_lam_9141, apply_prim_cdr_1(lst));
}

}

inline void lam9277_fptr() // lam9277 -> generic version 
{
//reading env
void* const env9278 = arg_buffer[1];
//reading env and args
void* const id_8781 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9278);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8781));
}

inline void lam9277_spec(void* env9278, void* id_8781) // lam9277 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9278);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8781));
}

inline void lam9279_fptr() // lam9279 -> generic version 
{
//reading env
void* const env9280 = arg_buffer[1];
//reading env and args
void* const id_8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9280);

//creating new make-kont closure
void** clo9700 = alloc_kont(lam9277_spec, 2);

//setting env list
clo9700[1] = decode_clo_array[1];
clo9700[2] = id_8779;
void* f_lam_9143 = encode_clo(clo9700);



//clo-app
map_spec(map, f_lam_9143, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam9279_spec(void* env9280, void* id_8779) // lam9279 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9280);

//creating new make-kont closure
void** clo9701 = alloc_kont(lam9277_spec, 2);

//setting env list
clo9701[1] = decode_clo_array[1];
clo9701[2] = id_8779;
void* f_lam_9143 = encode_clo(clo9701);



//clo-app
map_spec(map, f_lam_9143, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont9142 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9142)[0])(kont9142, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9702 = alloc_kont(lam9279_spec, 3);

//setting env list
clo9702[1] = kont9142;
clo9702[2] = proc;
clo9702[3] = lst;
void* f_lam_9144 = encode_clo(clo9702);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_9144;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _9281, void* kont9142, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9142)[0])(kont9142, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9703 = alloc_kont(lam9279_spec, 3);

//setting env list
clo9703[1] = kont9142;
clo9703[2] = proc;
clo9703[3] = lst;
void* f_lam_9144 = encode_clo(clo9703);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_9144;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam9282_fptr() // lam9282 -> generic version 
{
//reading env
void* const env9283 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9283);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8788));
}

inline void lam9282_spec(void* env9283, void* id_8788) // lam9282 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9283);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8788));
}

inline void lam9284_fptr() // lam9284 -> generic version 
{
//reading env
void* const env9285 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9285);

//if-clause
if(is_true(id_8785))
{

//creating new make-kont closure
void** clo9704 = alloc_kont(lam9282_spec, 2);

//setting env list
clo9704[1] = apply_prim_car_1(decode_clo_array[2]);
clo9704[2] = decode_clo_array[3];
void* f_lam_9146 = encode_clo(clo9704);



//clo-app
filter_spec(filter, f_lam_9146, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam9284_spec(void* env9285, void* id_8785) // lam9284 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9285);

//if-clause
if(is_true(id_8785))
{

//creating new make-kont closure
void** clo9705 = alloc_kont(lam9282_spec, 2);

//setting env list
clo9705[1] = apply_prim_car_1(decode_clo_array[2]);
clo9705[2] = decode_clo_array[3];
void* f_lam_9146 = encode_clo(clo9705);



//clo-app
filter_spec(filter, f_lam_9146, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
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
void* const kont9145 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9145)[0])(kont9145, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9706 = alloc_kont(lam9284_spec, 3);

//setting env list
clo9706[1] = op;
clo9706[2] = lst;
clo9706[3] = kont9145;
void* f_lam_9147 = encode_clo(clo9706);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_9147;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _9286, void* kont9145, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9145)[0])(kont9145, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9707 = alloc_kont(lam9284_spec, 3);

//setting env list
clo9707[1] = op;
clo9707[2] = lst;
clo9707[3] = kont9145;
void* f_lam_9147 = encode_clo(clo9707);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_9147;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont9148 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9148)[0])(kont9148, lst);
}
else
{

//clo-app
drop_spec(drop, kont9148, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9525));
}

}

inline void drop_spec(void* _9287, void* kont9148, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9148)[0])(kont9148, lst);
}
else
{

//clo-app
drop_spec(drop, kont9148, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9525));
}

}

inline void lam9288_fptr() // lam9288 -> generic version 
{
//reading env
void* const env9289 = arg_buffer[1];
//reading env and args
void* const id_8797 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9289);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8797, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam9288_spec(void* env9289, void* id_8797) // lam9288 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9289);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[3], id_8797, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont9149 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9149)[0])(kont9149, acc);
}
else
{

//creating new make-kont closure
void** clo9708 = alloc_kont(lam9288_spec, 3);

//setting env list
clo9708[1] = kont9149;
clo9708[2] = lst;
clo9708[3] = fun;
void* f_lam_9150 = encode_clo(clo9708);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_9150;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _9290, void* kont9149, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9149)[0])(kont9149, acc);
}
else
{

//creating new make-kont closure
void** clo9709 = alloc_kont(lam9288_spec, 3);

//setting env list
clo9709[1] = kont9149;
clo9709[2] = lst;
clo9709[3] = fun;
void* f_lam_9150 = encode_clo(clo9709);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_9150;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam9291_fptr() // lam9291 -> generic version 
{
//reading env
void* const env9292 = arg_buffer[1];
//reading env and args
void* const id_8802 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9292);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8802;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9291_spec(void* env9292, void* id_8802) // lam9291 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9292);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8802;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont9151 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9151)[0])(kont9151, acc);
}
else
{

//creating new make-kont closure
void** clo9710 = alloc_kont(lam9291_spec, 3);

//setting env list
clo9710[1] = fun;
clo9710[2] = apply_prim_car_1(lst);
clo9710[3] = kont9151;
void* f_lam_9152 = encode_clo(clo9710);



//clo-app
foldr_spec(foldr, f_lam_9152, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _9293, void* kont9151, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9151)[0])(kont9151, acc);
}
else
{

//creating new make-kont closure
void** clo9711 = alloc_kont(lam9291_spec, 3);

//setting env list
clo9711[1] = fun;
clo9711[2] = apply_prim_car_1(lst);
clo9711[3] = kont9151;
void* f_lam_9152 = encode_clo(clo9711);



//clo-app
foldr_spec(foldr, f_lam_9152, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont9153 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9153)[0])(kont9153, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9153, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _9294, void* kont9153, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9153)[0])(kont9153, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9153, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont9154 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9154, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _9295, void* kont9154, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont9154, lst, apply_prim_list_0());
}

inline void lam9296_fptr() // lam9296 -> generic version 
{
//reading env
void* const env9297 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9297);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8811));
}

inline void lam9296_spec(void* env9297, void* id_8811) // lam9296 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9297);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8811));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont9155 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9155)[0])(kont9155, rhs);
}
else
{

//creating new make-kont closure
void** clo9712 = alloc_kont(lam9296_spec, 2);

//setting env list
clo9712[1] = kont9155;
clo9712[2] = apply_prim_car_1(lhs);
void* f_lam_9156 = encode_clo(clo9712);



//clo-app
append1_spec(append1, f_lam_9156, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _9298, void* kont9155, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9155)[0])(kont9155, rhs);
}
else
{

//creating new make-kont closure
void** clo9713 = alloc_kont(lam9296_spec, 2);

//setting env list
clo9713[1] = kont9155;
clo9713[2] = apply_prim_car_1(lhs);
void* f_lam_9156 = encode_clo(clo9713);



//clo-app
append1_spec(append1, f_lam_9156, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam9299_fptr() // lam9299 -> generic version 
{
//reading env
void* const env9300 = arg_buffer[1];
//reading env and args
void* const xy8813 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9300);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam9299_spec(void* env9300, void* xy8813) // lam9299 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9300);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam9301_fptr() // lam9301 -> generic version 
{
//reading env
void* const env9302 = arg_buffer[1];
//reading env and args
void* const id_8816 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9302);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8816);
}

inline void lam9301_spec(void* env9302, void* id_8816) // lam9301 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9302);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8816);
}

inline void lam9303_fptr() // lam9303 -> generic version 
{
//reading env
void* const env9304 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9304);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9714 = alloc_kont(lam9299_spec, 1);

//setting env list
clo9714[1] = decode_clo_array[1];
void* f_lam_9158 = encode_clo(clo9714);



//clo-app
append1_spec(append1, f_lam_9158, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9715 = alloc_kont(lam9301_spec, 2);

//setting env list
clo9715[1] = decode_clo_array[1];
clo9715[2] = apply_prim_list_0();
void* f_lam_9159 = encode_clo(clo9715);



//clo-app
append1_spec(append1, f_lam_9159, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

inline void lam9303_spec(void* env9304, void* lsts) // lam9303 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9304);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9716 = alloc_kont(lam9299_spec, 1);

//setting env list
clo9716[1] = decode_clo_array[1];
void* f_lam_9158 = encode_clo(clo9716);



//clo-app
append1_spec(append1, f_lam_9158, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9717 = alloc_kont(lam9301_spec, 2);

//setting env list
clo9717[1] = decode_clo_array[1];
clo9717[2] = apply_prim_list_0();
void* f_lam_9159 = encode_clo(clo9717);



//clo-app
append1_spec(append1, f_lam_9159, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _9305 = arg_buffer[1];
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
void** clo9718 = alloc_kont(lam9303_spec, 3);

//setting env list
clo9718[1] = apply_prim_car_1(vargs);
clo9718[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9718[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_9160 = encode_clo(clo9718);


// kont-clo-app case
lam9303_spec(f_lam_9160, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam9306_fptr() // lam9306 -> generic version 
{
//reading env
void* const env9307 = arg_buffer[1];
//reading env and args
void* const xy8819 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9307);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void lam9306_spec(void* env9307, void* xy8819) // lam9306 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9307);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont9161 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9532)))
{

//creating new make-kont closure
void** clo9719 = alloc_kont(lam9306_spec, 1);

//setting env list
clo9719[1] = kont9161;
void* f_lam_9162 = encode_clo(clo9719);



//clo-app
reverse_spec(reverse, f_lam_9162, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont9161, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9525), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _9308, void* kont9161, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9532)))
{

//creating new make-kont closure
void** clo9720 = alloc_kont(lam9306_spec, 1);

//setting env list
clo9720[1] = kont9161;
void* f_lam_9162 = encode_clo(clo9720);



//clo-app
reverse_spec(reverse, f_lam_9162, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont9161, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9525), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont9163 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont9163, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _9309, void* kont9163, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont9163, lst, n, apply_prim_list_0());
}

inline void lam9310_fptr() // lam9310 -> generic version 
{
//reading env
void* const env9311 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9311);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8833));
}

inline void lam9310_spec(void* env9311, void* id_8833) // lam9310 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9311);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8833));
}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont9164 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9164)[0])(kont9164, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9721 = alloc_kont(lam9310_spec, 2);

//setting env list
clo9721[1] = apply_prim_car_1(lst);
clo9721[2] = kont9164;
void* f_lam_9165 = encode_clo(clo9721);



//clo-app
list_u45set_spec(list_u45set, f_lam_9165, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9525), value);
}

}

inline void list_u45set_spec(void* _9312, void* kont9164, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9164)[0])(kont9164, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9722 = alloc_kont(lam9310_spec, 2);

//setting env list
clo9722[1] = apply_prim_car_1(lst);
clo9722[2] = kont9164;
void* f_lam_9165 = encode_clo(clo9722);



//clo-app
list_u45set_spec(list_u45set, f_lam_9165, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9525), value);
}

}

inline void lam9313_fptr() // lam9313 -> generic version 
{
//reading env
void* const env9314 = arg_buffer[1];
//reading env and args
void* const id_8840 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9314);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
append_fptr();
}

inline void lam9313_spec(void* env9314, void* id_8840) // lam9313 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9314);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
append_fptr();
}

inline void lam9315_fptr() // lam9315 -> generic version 
{
//reading env
void* const env9316 = arg_buffer[1];
//reading env and args
void* const id_8838 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9316);

//creating new make-kont closure
void** clo9723 = alloc_kont(lam9313_spec, 2);

//setting env list
clo9723[1] = id_8838;
clo9723[2] = decode_clo_array[1];
void* f_lam_9167 = encode_clo(clo9723);



//clo-app
flatten_spec(flatten, f_lam_9167, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam9315_spec(void* env9316, void* id_8838) // lam9315 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9316);

//creating new make-kont closure
void** clo9724 = alloc_kont(lam9313_spec, 2);

//setting env list
clo9724[1] = id_8838;
clo9724[2] = decode_clo_array[1];
void* f_lam_9167 = encode_clo(clo9724);



//clo-app
flatten_spec(flatten, f_lam_9167, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont9166 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9166)[0])(kont9166, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9725 = alloc_kont(lam9315_spec, 2);

//setting env list
clo9725[1] = kont9166;
clo9725[2] = lst;
void* f_lam_9168 = encode_clo(clo9725);



//clo-app
flatten_spec(flatten, f_lam_9168, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9166)[0])(kont9166, apply_prim_list_1(lst));
}

}

}

inline void flatten_spec(void* _9317, void* kont9166, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9166)[0])(kont9166, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9726 = alloc_kont(lam9315_spec, 2);

//setting env list
clo9726[1] = kont9166;
clo9726[2] = lst;
void* f_lam_9168 = encode_clo(clo9726);



//clo-app
flatten_spec(flatten, f_lam_9168, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9166)[0])(kont9166, apply_prim_list_1(lst));
}

}

}

inline void lam9318_fptr() // lam9318 -> generic version 
{
//reading env
void* const env9319 = arg_buffer[1];
//reading env and args
void* const id_8845 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9319);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8845;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9318_spec(void* env9319, void* id_8845) // lam9318 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9319);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8845;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void my_u45foldr_u45aux_fptr() // my-foldr-aux -> generic version 
{
//reading env and args
void* const kont9169 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const f = arg_buffer[4];
void* const base = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9169)[0])(kont9169, base);
}
else
{

//creating new make-kont closure
void** clo9727 = alloc_kont(lam9318_spec, 3);

//setting env list
clo9727[1] = kont9169;
clo9727[2] = f;
clo9727[3] = apply_prim_car_1(lst);
void* f_lam_9170 = encode_clo(clo9727);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9170, apply_prim_cdr_1(lst), f, base);
}

}

inline void my_u45foldr_u45aux_spec(void* _9320, void* kont9169, void* lst, void* f, void* base) // my-foldr-aux 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9169)[0])(kont9169, base);
}
else
{

//creating new make-kont closure
void** clo9728 = alloc_kont(lam9318_spec, 3);

//setting env list
clo9728[1] = kont9169;
clo9728[2] = f;
clo9728[3] = apply_prim_car_1(lst);
void* f_lam_9170 = encode_clo(clo9728);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9170, apply_prim_cdr_1(lst), f, base);
}

}

inline void lam9321_fptr() // lam9321 -> generic version 
{
//reading env
void* const env9322 = arg_buffer[1];
//reading env and args
void* const xy8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9322);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8846);
}

inline void lam9321_spec(void* env9322, void* xy8846) // lam9321 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9322);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8846);
}

inline void my_u45foldr_fptr() // my-foldr -> generic version 
{
//reading env and args
void* const kont9171 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const base = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9729 = alloc_kont(lam9321_spec, 1);

//setting env list
clo9729[1] = kont9171;
void* f_lam_9172 = encode_clo(clo9729);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9172, lst, f, base);
}

inline void my_u45foldr_spec(void* _9323, void* kont9171, void* f, void* base, void* lst) // my-foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9730 = alloc_kont(lam9321_spec, 1);

//setting env list
clo9730[1] = kont9171;
void* f_lam_9172 = encode_clo(clo9730);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9172, lst, f, base);
}

inline void lam9324_fptr() // lam9324 -> generic version 
{
//reading env
void* const env9325 = arg_buffer[1];
//reading env and args
void* const id_8849 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9325);

//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, decode_clo_array[1], decode_clo_array[2], id_8849, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam9324_spec(void* env9325, void* id_8849) // lam9324 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9325);

//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, decode_clo_array[1], decode_clo_array[2], id_8849, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void my_u45foldl_u45aux_fptr() // my-foldl-aux -> generic version 
{
//reading env and args
void* const kont9173 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const base = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9173)[0])(kont9173, base);
}
else
{

//creating new make-kont closure
void** clo9731 = alloc_kont(lam9324_spec, 3);

//setting env list
clo9731[1] = kont9173;
clo9731[2] = f;
clo9731[3] = lst;
void* f_lam_9174 = encode_clo(clo9731);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_9174;
arg_buffer[3] = base;
arg_buffer[4] = apply_prim_car_1(lst);
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

}

inline void my_u45foldl_u45aux_spec(void* _9326, void* kont9173, void* f, void* base, void* lst) // my-foldl-aux 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9173)[0])(kont9173, base);
}
else
{

//creating new make-kont closure
void** clo9732 = alloc_kont(lam9324_spec, 3);

//setting env list
clo9732[1] = kont9173;
clo9732[2] = f;
clo9732[3] = lst;
void* f_lam_9174 = encode_clo(clo9732);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_9174;
arg_buffer[3] = base;
arg_buffer[4] = apply_prim_car_1(lst);
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

}

inline void lam9327_fptr() // lam9327 -> generic version 
{
//reading env
void* const env9328 = arg_buffer[1];
//reading env and args
void* const xy8851 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9328);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8851);
}

inline void lam9327_spec(void* env9328, void* xy8851) // lam9327 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9328);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8851);
}

inline void my_u45foldl_fptr() // my-foldl -> generic version 
{
//reading env and args
void* const kont9175 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const base = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9733 = alloc_kont(lam9327_spec, 1);

//setting env list
clo9733[1] = kont9175;
void* f_lam_9176 = encode_clo(clo9733);



//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, f_lam_9176, f, base, lst);
}

inline void my_u45foldl_spec(void* _9329, void* kont9175, void* f, void* base, void* lst) // my-foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9734 = alloc_kont(lam9327_spec, 1);

//setting env list
clo9734[1] = kont9175;
void* f_lam_9176 = encode_clo(clo9734);



//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, f_lam_9176, f, base, lst);
}

inline void lam9330_fptr() // lam9330 -> generic version 
{
//reading env
void* const env9331 = arg_buffer[1];
//reading env and args
void* const id_8856 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9331);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8856));
}

inline void lam9330_spec(void* env9331, void* id_8856) // lam9330 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9331);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8856));
}

inline void lam9332_fptr() // lam9332 -> generic version 
{
//reading env
void* const env9333 = arg_buffer[1];
//reading env and args
void* const id_8853 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9333);

//creating new make-kont closure
void** clo9735 = alloc_kont(lam9330_spec, 2);

//setting env list
clo9735[1] = id_8853;
clo9735[2] = decode_clo_array[4];
void* f_lam_9178 = encode_clo(clo9735);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9178, apply_prim__u43_2(decode_clo_array[2], int9525), decode_clo_array[1], decode_clo_array[3]);
}

inline void lam9332_spec(void* env9333, void* id_8853) // lam9332 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9333);

//creating new make-kont closure
void** clo9736 = alloc_kont(lam9330_spec, 2);

//setting env list
clo9736[1] = id_8853;
clo9736[2] = decode_clo_array[4];
void* f_lam_9178 = encode_clo(clo9736);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9178, apply_prim__u43_2(decode_clo_array[2], int9525), decode_clo_array[1], decode_clo_array[3]);
}

inline void my_u45for_u45aux_fptr() // my-for-aux -> generic version 
{
//reading env and args
void* const kont9177 = arg_buffer[2];
void* const lo = arg_buffer[3];
void* const hi = arg_buffer[4];
void* const f = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(lo, hi)))
{

//creating new make-kont closure
void** clo9737 = alloc_kont(lam9332_spec, 4);

//setting env list
clo9737[1] = hi;
clo9737[2] = lo;
clo9737[3] = f;
clo9737[4] = kont9177;
void* f_lam_9179 = encode_clo(clo9737);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_9179;
arg_buffer[3] = lo;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9177)[0])(kont9177, apply_prim_list_0());
}

}

inline void my_u45for_u45aux_spec(void* _9334, void* kont9177, void* lo, void* hi, void* f) // my-for-aux 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u60_2(lo, hi)))
{

//creating new make-kont closure
void** clo9738 = alloc_kont(lam9332_spec, 4);

//setting env list
clo9738[1] = hi;
clo9738[2] = lo;
clo9738[3] = f;
clo9738[4] = kont9177;
void* f_lam_9179 = encode_clo(clo9738);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_9179;
arg_buffer[3] = lo;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9177)[0])(kont9177, apply_prim_list_0());
}

}

inline void lam9335_fptr() // lam9335 -> generic version 
{
//reading env
void* const env9336 = arg_buffer[1];
//reading env and args
void* const xy8858 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9336);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8858);
}

inline void lam9335_spec(void* env9336, void* xy8858) // lam9335 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9336);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8858);
}

inline void my_u45for_fptr() // my-for -> generic version 
{
//reading env and args
void* const kont9180 = arg_buffer[2];
void* const lo = arg_buffer[3];
void* const hi = arg_buffer[4];
void* const f = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9739 = alloc_kont(lam9335_spec, 1);

//setting env list
clo9739[1] = kont9180;
void* f_lam_9181 = encode_clo(clo9739);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9181, lo, hi, f);
}

inline void my_u45for_spec(void* _9337, void* kont9180, void* lo, void* hi, void* f) // my-for 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9740 = alloc_kont(lam9335_spec, 1);

//setting env list
clo9740[1] = kont9180;
void* f_lam_9181 = encode_clo(clo9740);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9181, lo, hi, f);
}

inline void concat_fptr() // concat -> generic version 
{
//reading env and args
void* const kont9182 = arg_buffer[2];
void* const lists = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
my_u45foldr_spec(my_u45foldr, kont9182, append, apply_prim_list_0(), lists);
}

inline void concat_spec(void* _9338, void* kont9182, void* lists) // concat 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
my_u45foldr_spec(my_u45foldr, kont9182, append, apply_prim_list_0(), lists);
}

inline void list_u45read_fptr() // list-read -> generic version 
{
//reading env and args
void* const kont9183 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const i = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(i, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9183)[0])(kont9183, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45read_spec(list_u45read, kont9183, apply_prim_cdr_1(lst), apply_prim__u45_2(i, int9525));
}

}

inline void list_u45read_spec(void* _9339, void* kont9183, void* lst, void* i) // list-read 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(i, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9183)[0])(kont9183, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45read_spec(list_u45read, kont9183, apply_prim_cdr_1(lst), apply_prim__u45_2(i, int9525));
}

}

inline void lam9340_fptr() // lam9340 -> generic version 
{
//reading env
void* const env9341 = arg_buffer[1];
//reading env and args
void* const id_8873 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9341);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8873));
}

inline void lam9340_spec(void* env9341, void* id_8873) // lam9340 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9341);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8873));
}

inline void list_u45write_fptr() // list-write -> generic version 
{
//reading env and args
void* const kont9184 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const i = arg_buffer[4];
void* const val = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(i, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9184)[0])(kont9184, apply_prim_cons_2(val, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9741 = alloc_kont(lam9340_spec, 2);

//setting env list
clo9741[1] = apply_prim_car_1(lst);
clo9741[2] = kont9184;
void* f_lam_9185 = encode_clo(clo9741);



//clo-app
list_u45write_spec(list_u45write, f_lam_9185, apply_prim_cdr_1(lst), apply_prim__u45_2(i, int9525), val);
}

}

inline void list_u45write_spec(void* _9342, void* kont9184, void* lst, void* i, void* val) // list-write 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(i, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9184)[0])(kont9184, apply_prim_cons_2(val, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9742 = alloc_kont(lam9340_spec, 2);

//setting env list
clo9742[1] = apply_prim_car_1(lst);
clo9742[2] = kont9184;
void* f_lam_9185 = encode_clo(clo9742);



//clo-app
list_u45write_spec(list_u45write, f_lam_9185, apply_prim_cdr_1(lst), apply_prim__u45_2(i, int9525), val);
}

}

inline void lam9343_fptr() // lam9343 -> generic version 
{
//reading env
void* const env9344 = arg_buffer[1];
//reading env and args
void* const id_8881 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9344);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8881));
}

inline void lam9343_spec(void* env9344, void* id_8881) // lam9343 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9344);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8881));
}

inline void list_u45remove_u45pos_fptr() // list-remove-pos -> generic version 
{
//reading env and args
void* const kont9186 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const i = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(i, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9186)[0])(kont9186, apply_prim_cdr_1(lst));
}
else
{

//creating new make-kont closure
void** clo9743 = alloc_kont(lam9343_spec, 2);

//setting env list
clo9743[1] = kont9186;
clo9743[2] = apply_prim_car_1(lst);
void* f_lam_9187 = encode_clo(clo9743);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9187, apply_prim_cdr_1(lst), apply_prim__u45_2(i, int9525));
}

}

inline void list_u45remove_u45pos_spec(void* _9345, void* kont9186, void* lst, void* i) // list-remove-pos 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(i, int9532)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9186)[0])(kont9186, apply_prim_cdr_1(lst));
}
else
{

//creating new make-kont closure
void** clo9744 = alloc_kont(lam9343_spec, 2);

//setting env list
clo9744[1] = kont9186;
clo9744[2] = apply_prim_car_1(lst);
void* f_lam_9187 = encode_clo(clo9744);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9187, apply_prim_cdr_1(lst), apply_prim__u45_2(i, int9525));
}

}

inline void lam9346_fptr() // lam9346 -> generic version 
{
//reading env
void* const env9347 = arg_buffer[1];
//reading env and args
void* const id_8886 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9347);

//if-clause
if(is_true(id_8886))
{

//clo-app
member_spec(member, decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
duplicates_u63_spec(duplicates_u63, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam9346_spec(void* env9347, void* id_8886) // lam9346 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9347);

//if-clause
if(is_true(id_8886))
{

//clo-app
member_spec(member, decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
duplicates_u63_spec(duplicates_u63, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void duplicates_u63_fptr() // duplicates? -> generic version 
{
//reading env and args
void* const kont9188 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9188)[0])(kont9188, bool_f9530);
}
else
{

//creating new make-kont closure
void** clo9745 = alloc_kont(lam9346_spec, 2);

//setting env list
clo9745[1] = kont9188;
clo9745[2] = lst;
void* f_lam_9189 = encode_clo(clo9745);



//clo-app
member_spec(member, f_lam_9189, apply_prim_car_1(lst), apply_prim_cdr_1(lst));
}

}

inline void duplicates_u63_spec(void* _9348, void* kont9188, void* lst) // duplicates? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9188)[0])(kont9188, bool_f9530);
}
else
{

//creating new make-kont closure
void** clo9746 = alloc_kont(lam9346_spec, 2);

//setting env list
clo9746[1] = kont9188;
clo9746[2] = lst;
void* f_lam_9189 = encode_clo(clo9746);



//clo-app
member_spec(member, f_lam_9189, apply_prim_car_1(lst), apply_prim_cdr_1(lst));
}

}

inline void lam9349_fptr() // lam9349 -> generic version 
{
//reading env
void* const env9350 = arg_buffer[1];
//reading env and args
void* const cont9192 = arg_buffer[2];
void* const j = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9350);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = cont9192;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = j;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9349_spec(void* env9350, void* cont9192, void* j) // lam9349 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9350);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = cont9192;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = j;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9351_fptr() // lam9351 -> generic version 
{
//reading env
void* const env9352 = arg_buffer[1];
//reading env and args
void* const cont9191 = arg_buffer[2];
void* const i = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9352);

//creating new closure instance
void** clo9747 = alloc_clo(lam9349_fptr, 2);

//setting env list
clo9747[1] = i;
clo9747[2] = decode_clo_array[2];
void* id_8892 = encode_clo(clo9747);



//clo-app
my_u45for_spec(my_u45for, cont9191, int9532, decode_clo_array[1], id_8892);
}

inline void lam9351_spec(void* env9352, void* cont9191, void* i) // lam9351 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9352);

//creating new closure instance
void** clo9748 = alloc_clo(lam9349_fptr, 2);

//setting env list
clo9748[1] = i;
clo9748[2] = decode_clo_array[2];
void* id_8892 = encode_clo(clo9748);



//clo-app
my_u45for_spec(my_u45for, cont9191, int9532, decode_clo_array[1], id_8892);
}

inline void make_u45matrix_fptr() // make-matrix -> generic version 
{
//reading env and args
void* const kont9190 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const m = arg_buffer[4];
void* const init = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9749 = alloc_clo(lam9351_fptr, 2);

//setting env list
clo9749[1] = m;
clo9749[2] = init;
void* id_8893 = encode_clo(clo9749);



//clo-app
my_u45for_spec(my_u45for, kont9190, int9532, n, id_8893);
}

inline void make_u45matrix_spec(void* _9353, void* kont9190, void* n, void* m, void* init) // make-matrix 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9750 = alloc_clo(lam9351_fptr, 2);

//setting env list
clo9750[1] = m;
clo9750[2] = init;
void* id_8893 = encode_clo(clo9750);



//clo-app
my_u45for_spec(my_u45for, kont9190, int9532, n, id_8893);
}

inline void lam9354_fptr() // lam9354 -> generic version 
{
//reading env
void* const env9355 = arg_buffer[1];
//reading env and args
void* const id_8894 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9355);

//clo-app
list_u45read_spec(list_u45read, decode_clo_array[2], id_8894, decode_clo_array[1]);
}

inline void lam9354_spec(void* env9355, void* id_8894) // lam9354 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9355);

//clo-app
list_u45read_spec(list_u45read, decode_clo_array[2], id_8894, decode_clo_array[1]);
}

inline void matrix_u45read_fptr() // matrix-read -> generic version 
{
//reading env and args
void* const kont9193 = arg_buffer[2];
void* const mat = arg_buffer[3];
void* const i = arg_buffer[4];
void* const j = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9751 = alloc_kont(lam9354_spec, 2);

//setting env list
clo9751[1] = j;
clo9751[2] = kont9193;
void* f_lam_9194 = encode_clo(clo9751);



//clo-app
list_u45read_spec(list_u45read, f_lam_9194, mat, i);
}

inline void matrix_u45read_spec(void* _9356, void* kont9193, void* mat, void* i, void* j) // matrix-read 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9752 = alloc_kont(lam9354_spec, 2);

//setting env list
clo9752[1] = j;
clo9752[2] = kont9193;
void* f_lam_9194 = encode_clo(clo9752);



//clo-app
list_u45read_spec(list_u45read, f_lam_9194, mat, i);
}

inline void lam9357_fptr() // lam9357 -> generic version 
{
//reading env
void* const env9358 = arg_buffer[1];
//reading env and args
void* const id_8896 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9358);

//clo-app
list_u45write_spec(list_u45write, decode_clo_array[2], decode_clo_array[3], decode_clo_array[1], id_8896);
}

inline void lam9357_spec(void* env9358, void* id_8896) // lam9357 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9358);

//clo-app
list_u45write_spec(list_u45write, decode_clo_array[2], decode_clo_array[3], decode_clo_array[1], id_8896);
}

inline void lam9359_fptr() // lam9359 -> generic version 
{
//reading env
void* const env9360 = arg_buffer[1];
//reading env and args
void* const id_8895 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9360);

//creating new make-kont closure
void** clo9753 = alloc_kont(lam9357_spec, 3);

//setting env list
clo9753[1] = decode_clo_array[3];
clo9753[2] = decode_clo_array[2];
clo9753[3] = decode_clo_array[5];
void* f_lam_9196 = encode_clo(clo9753);



//clo-app
list_u45write_spec(list_u45write, f_lam_9196, id_8895, decode_clo_array[4], decode_clo_array[1]);
}

inline void lam9359_spec(void* env9360, void* id_8895) // lam9359 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9360);

//creating new make-kont closure
void** clo9754 = alloc_kont(lam9357_spec, 3);

//setting env list
clo9754[1] = decode_clo_array[3];
clo9754[2] = decode_clo_array[2];
clo9754[3] = decode_clo_array[5];
void* f_lam_9196 = encode_clo(clo9754);



//clo-app
list_u45write_spec(list_u45write, f_lam_9196, id_8895, decode_clo_array[4], decode_clo_array[1]);
}

inline void matrix_u45write_fptr() // matrix-write -> generic version 
{
//reading env and args
void* const kont9195 = arg_buffer[2];
void* const mat = arg_buffer[3];
void* const i = arg_buffer[4];
void* const j = arg_buffer[5];
void* const val = arg_buffer[6];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9755 = alloc_kont(lam9359_spec, 5);

//setting env list
clo9755[1] = val;
clo9755[2] = kont9195;
clo9755[3] = i;
clo9755[4] = j;
clo9755[5] = mat;
void* f_lam_9197 = encode_clo(clo9755);



//clo-app
list_u45read_spec(list_u45read, f_lam_9197, mat, i);
}

inline void matrix_u45write_spec(void* _9361, void* kont9195, void* mat, void* i, void* j, void* val) // matrix-write 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9756 = alloc_kont(lam9359_spec, 5);

//setting env list
clo9756[1] = val;
clo9756[2] = kont9195;
clo9756[3] = i;
clo9756[4] = j;
clo9756[5] = mat;
void* f_lam_9197 = encode_clo(clo9756);



//clo-app
list_u45read_spec(list_u45read, f_lam_9197, mat, i);
}

inline void lam9362_fptr() // lam9362 -> generic version 
{
//reading env
void* const env9363 = arg_buffer[1];
//reading env and args
void* const id_8899 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9363);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8899));
}

inline void lam9362_spec(void* env9363, void* id_8899) // lam9362 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9363);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8899));
}

inline void lam9364_fptr() // lam9364 -> generic version 
{
//reading env
void* const env9365 = arg_buffer[1];
//reading env and args
void* const id_8897 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9365);

//creating new make-kont closure
void** clo9757 = alloc_kont(lam9362_spec, 2);

//setting env list
clo9757[1] = id_8897;
clo9757[2] = decode_clo_array[1];
void* f_lam_9199 = encode_clo(clo9757);



//clo-app
length_spec(length, f_lam_9199, apply_prim_car_1(decode_clo_array[2]));
}

inline void lam9364_spec(void* env9365, void* id_8897) // lam9364 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9365);

//creating new make-kont closure
void** clo9758 = alloc_kont(lam9362_spec, 2);

//setting env list
clo9758[1] = id_8897;
clo9758[2] = decode_clo_array[1];
void* f_lam_9199 = encode_clo(clo9758);



//clo-app
length_spec(length, f_lam_9199, apply_prim_car_1(decode_clo_array[2]));
}

inline void matrix_u45size_fptr() // matrix-size -> generic version 
{
//reading env and args
void* const kont9198 = arg_buffer[2];
void* const mat = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9759 = alloc_kont(lam9364_spec, 2);

//setting env list
clo9759[1] = kont9198;
clo9759[2] = mat;
void* f_lam_9200 = encode_clo(clo9759);



//clo-app
length_spec(length, f_lam_9200, mat);
}

inline void matrix_u45size_spec(void* _9366, void* kont9198, void* mat) // matrix-size 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9760 = alloc_kont(lam9364_spec, 2);

//setting env list
clo9760[1] = kont9198;
clo9760[2] = mat;
void* f_lam_9200 = encode_clo(clo9760);



//clo-app
length_spec(length, f_lam_9200, mat);
}

inline void lam9367_fptr() // lam9367 -> generic version 
{
//reading env
void* const env9368 = arg_buffer[1];
//reading env and args
void* const cont9202 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9368);

//clo-app
map_spec(map, cont9202, decode_clo_array[1], lst);
}

inline void lam9367_spec(void* env9368, void* cont9202, void* lst) // lam9367 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9368);

//clo-app
map_spec(map, cont9202, decode_clo_array[1], lst);
}

inline void matrix_u45map_fptr() // matrix-map -> generic version 
{
//reading env and args
void* const kont9201 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const mat = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9761 = alloc_clo(lam9367_fptr, 1);

//setting env list
clo9761[1] = f;
void* id_8900 = encode_clo(clo9761);



//clo-app
map_spec(map, kont9201, id_8900, mat);
}

inline void matrix_u45map_spec(void* _9369, void* kont9201, void* f, void* mat) // matrix-map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9762 = alloc_clo(lam9367_fptr, 1);

//setting env list
clo9762[1] = f;
void* id_8900 = encode_clo(clo9762);



//clo-app
map_spec(map, kont9201, id_8900, mat);
}

inline void initial_u45random_fptr() // initial-random -> generic version 
{
//reading env and args
void* const kont9203 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9203)[0])(kont9203, int9532);
}

inline void initial_u45random_spec(void* _9370, void* kont9203) // initial-random 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9203)[0])(kont9203, int9532);
}

inline void next_u45random_fptr() // next-random -> generic version 
{
//reading env and args
void* const kont9204 = arg_buffer[2];
void* const current_u45random = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9204)[0])(kont9204, apply_prim_remainder_2(apply_prim__u43_2(apply_prim__u42_2(current_u45random, int9507), int9508), int9509));
}

inline void next_u45random_spec(void* _9371, void* kont9204, void* current_u45random) // next-random 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9204)[0])(kont9204, apply_prim_remainder_2(apply_prim__u43_2(apply_prim__u42_2(current_u45random, int9507), int9508), int9509));
}

inline void lam9372_fptr() // lam9372 -> generic version 
{
//reading env
void* const env9373 = arg_buffer[1];
//reading env and args
void* const id_8909 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9373);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_remainder_2(decode_clo_array[1], id_8909));
}

inline void lam9372_spec(void* env9373, void* id_8909) // lam9372 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9373);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_remainder_2(decode_clo_array[1], id_8909));
}

inline void lam9374_fptr() // lam9374 -> generic version 
{
//reading env
void* const env9375 = arg_buffer[1];
//reading env and args
void* const id_8912 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9375);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8912));
}

inline void lam9374_spec(void* env9375, void* id_8912) // lam9374 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9375);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8912));
}

inline void lam9376_fptr() // lam9376 -> generic version 
{
//reading env
void* const env9377 = arg_buffer[1];
//reading env and args
void* const id_8911 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9377);

//creating new make-kont closure
void** clo9763 = alloc_kont(lam9374_spec, 2);

//setting env list
clo9763[1] = decode_clo_array[1];
clo9763[2] = decode_clo_array[3];
void* f_lam_9206 = encode_clo(clo9763);



//clo-app
shuffle_u45aux_spec(shuffle_u45aux, f_lam_9206, id_8911, decode_clo_array[2]);
}

inline void lam9376_spec(void* env9377, void* id_8911) // lam9376 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9377);

//creating new make-kont closure
void** clo9764 = alloc_kont(lam9374_spec, 2);

//setting env list
clo9764[1] = decode_clo_array[1];
clo9764[2] = decode_clo_array[3];
void* f_lam_9206 = encode_clo(clo9764);



//clo-app
shuffle_u45aux_spec(shuffle_u45aux, f_lam_9206, id_8911, decode_clo_array[2]);
}

inline void lam9378_fptr() // lam9378 -> generic version 
{
//reading env
void* const env9379 = arg_buffer[1];
//reading env and args
void* const id_8910 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9379);

//creating new make-kont closure
void** clo9765 = alloc_kont(lam9376_spec, 3);

//setting env list
clo9765[1] = decode_clo_array[1];
clo9765[2] = decode_clo_array[2];
clo9765[3] = id_8910;
void* f_lam_9207 = encode_clo(clo9765);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9207, decode_clo_array[4], decode_clo_array[3]);
}

inline void lam9378_spec(void* env9379, void* id_8910) // lam9378 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9379);

//creating new make-kont closure
void** clo9766 = alloc_kont(lam9376_spec, 3);

//setting env list
clo9766[1] = decode_clo_array[1];
clo9766[2] = decode_clo_array[2];
clo9766[3] = id_8910;
void* f_lam_9207 = encode_clo(clo9766);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9207, decode_clo_array[4], decode_clo_array[3]);
}

inline void lam9380_fptr() // lam9380 -> generic version 
{
//reading env
void* const env9381 = arg_buffer[1];
//reading env and args
void* const i = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9381);

//creating new make-kont closure
void** clo9767 = alloc_kont(lam9378_spec, 4);

//setting env list
clo9767[1] = decode_clo_array[1];
clo9767[2] = decode_clo_array[2];
clo9767[3] = i;
clo9767[4] = decode_clo_array[3];
void* f_lam_9208 = encode_clo(clo9767);



//clo-app
list_u45read_spec(list_u45read, f_lam_9208, decode_clo_array[3], i);
}

inline void lam9380_spec(void* env9381, void* i) // lam9380 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9381);

//creating new make-kont closure
void** clo9768 = alloc_kont(lam9378_spec, 4);

//setting env list
clo9768[1] = decode_clo_array[1];
clo9768[2] = decode_clo_array[2];
clo9768[3] = i;
clo9768[4] = decode_clo_array[3];
void* f_lam_9208 = encode_clo(clo9768);



//clo-app
list_u45read_spec(list_u45read, f_lam_9208, decode_clo_array[3], i);
}

inline void lam9382_fptr() // lam9382 -> generic version 
{
//reading env
void* const env9383 = arg_buffer[1];
//reading env and args
void* const new_u45random = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9383);

//creating new make-kont closure
void** clo9769 = alloc_kont(lam9380_spec, 3);

//setting env list
clo9769[1] = decode_clo_array[1];
clo9769[2] = new_u45random;
clo9769[3] = decode_clo_array[2];
void* f_lam_9209 = encode_clo(clo9769);



//creating new make-kont closure
void** clo9770 = alloc_kont(lam9372_spec, 2);

//setting env list
clo9770[1] = new_u45random;
clo9770[2] = f_lam_9209;
void* f_lam_9210 = encode_clo(clo9770);



//clo-app
length_spec(length, f_lam_9210, decode_clo_array[2]);
}

inline void lam9382_spec(void* env9383, void* new_u45random) // lam9382 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9383);

//creating new make-kont closure
void** clo9771 = alloc_kont(lam9380_spec, 3);

//setting env list
clo9771[1] = decode_clo_array[1];
clo9771[2] = new_u45random;
clo9771[3] = decode_clo_array[2];
void* f_lam_9209 = encode_clo(clo9771);



//creating new make-kont closure
void** clo9772 = alloc_kont(lam9372_spec, 2);

//setting env list
clo9772[1] = new_u45random;
clo9772[2] = f_lam_9209;
void* f_lam_9210 = encode_clo(clo9772);



//clo-app
length_spec(length, f_lam_9210, decode_clo_array[2]);
}

inline void shuffle_u45aux_fptr() // shuffle-aux -> generic version 
{
//reading env and args
void* const kont9205 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const current_u45random = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9205)[0])(kont9205, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9773 = alloc_kont(lam9382_spec, 2);

//setting env list
clo9773[1] = kont9205;
clo9773[2] = lst;
void* f_lam_9211 = encode_clo(clo9773);



//clo-app
next_u45random_spec(next_u45random, f_lam_9211, current_u45random);
}

}

inline void shuffle_u45aux_spec(void* _9384, void* kont9205, void* lst, void* current_u45random) // shuffle-aux 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9205)[0])(kont9205, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9774 = alloc_kont(lam9382_spec, 2);

//setting env list
clo9774[1] = kont9205;
clo9774[2] = lst;
void* f_lam_9211 = encode_clo(clo9774);



//clo-app
next_u45random_spec(next_u45random, f_lam_9211, current_u45random);
}

}

inline void lam9385_fptr() // lam9385 -> generic version 
{
//reading env
void* const env9386 = arg_buffer[1];
//reading env and args
void* const id_8913 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9386);

//clo-app
shuffle_u45aux_spec(shuffle_u45aux, decode_clo_array[2], decode_clo_array[1], id_8913);
}

inline void lam9385_spec(void* env9386, void* id_8913) // lam9385 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9386);

//clo-app
shuffle_u45aux_spec(shuffle_u45aux, decode_clo_array[2], decode_clo_array[1], id_8913);
}

inline void shuffle_fptr() // shuffle -> generic version 
{
//reading env and args
void* const kont9212 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9775 = alloc_kont(lam9385_spec, 2);

//setting env list
clo9775[1] = lst;
clo9775[2] = kont9212;
void* f_lam_9213 = encode_clo(clo9775);



//clo-app
initial_u45random_spec(initial_u45random, f_lam_9213);
}

inline void shuffle_spec(void* _9387, void* kont9212, void* lst) // shuffle 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9776 = alloc_kont(lam9385_spec, 2);

//setting env list
clo9776[1] = lst;
clo9776[2] = kont9212;
void* f_lam_9213 = encode_clo(clo9776);



//clo-app
initial_u45random_spec(initial_u45random, f_lam_9213);
}

inline void lam9388_fptr() // lam9388 -> generic version 
{
//reading env
void* const env9389 = arg_buffer[1];
//reading env and args
void* const cont9215 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9389);

//if-clause
if(is_true(x))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9215)[0])(cont9215, encode_str(new(GC) std::string("_")));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9215)[0])(cont9215, encode_str(new(GC) std::string("*")));
}

}

inline void lam9388_spec(void* env9389, void* cont9215, void* x) // lam9388 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9389);

//if-clause
if(is_true(x))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9215)[0])(cont9215, encode_str(new(GC) std::string("_")));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9215)[0])(cont9215, encode_str(new(GC) std::string("*")));
}

}

inline void cave_u45to_u45maze_fptr() // cave-to-maze -> generic version 
{
//reading env and args
void* const kont9214 = arg_buffer[2];
void* const cave = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9777 = alloc_clo(lam9388_fptr, 0);
void* id_8916 = encode_clo(clo9777);



//clo-app
matrix_u45map_spec(matrix_u45map, kont9214, id_8916, cave);
}

inline void cave_u45to_u45maze_spec(void* _9390, void* kont9214, void* cave) // cave-to-maze 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9778 = alloc_clo(lam9388_fptr, 0);
void* id_8916 = encode_clo(clo9778);



//clo-app
matrix_u45map_spec(matrix_u45map, kont9214, id_8916, cave);
}

inline void lam9391_fptr() // lam9391 -> generic version 
{
//reading env
void* const env9392 = arg_buffer[1];
//reading env and args
void* const id_8962 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9392);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = decode_clo_array[4];
arg_buffer[5] = decode_clo_array[1];
arg_buffer[6] = id_8962;
numArgs = 6;
append_fptr();
}

inline void lam9391_spec(void* env9392, void* id_8962) // lam9391 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9392);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = decode_clo_array[4];
arg_buffer[5] = decode_clo_array[1];
arg_buffer[6] = id_8962;
numArgs = 6;
append_fptr();
}

inline void lam9393_fptr() // lam9393 -> generic version 
{
//reading env
void* const env9394 = arg_buffer[1];
//reading env and args
void* const id_8957 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9394);

//creating new make-kont closure
void** clo9779 = alloc_kont(lam9391_spec, 4);

//setting env list
clo9779[1] = decode_clo_array[1];
clo9779[2] = decode_clo_array[4];
clo9779[3] = decode_clo_array[5];
clo9779[4] = decode_clo_array[6];
void* f_lam_9217 = encode_clo(clo9779);



//if-clause
if(is_true(id_8957))
{
// kont-clo-app case
lam9391_spec(f_lam_9217, apply_prim_list_1(apply_prim_cons_2(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], int9525))));
}
else
{
// kont-clo-app case
lam9391_spec(f_lam_9217, apply_prim_list_0());
}

}

inline void lam9393_spec(void* env9394, void* id_8957) // lam9393 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9394);

//creating new make-kont closure
void** clo9780 = alloc_kont(lam9391_spec, 4);

//setting env list
clo9780[1] = decode_clo_array[1];
clo9780[2] = decode_clo_array[4];
clo9780[3] = decode_clo_array[5];
clo9780[4] = decode_clo_array[6];
void* f_lam_9217 = encode_clo(clo9780);



//if-clause
if(is_true(id_8957))
{
// kont-clo-app case
lam9391_spec(f_lam_9217, apply_prim_list_1(apply_prim_cons_2(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[3], int9525))));
}
else
{
// kont-clo-app case
lam9391_spec(f_lam_9217, apply_prim_list_0());
}

}

inline void lam9395_fptr() // lam9395 -> generic version 
{
//reading env
void* const env9396 = arg_buffer[1];
//reading env and args
void* const id_8950 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9396);

//creating new make-kont closure
void** clo9781 = alloc_kont(lam9393_spec, 6);

//setting env list
clo9781[1] = id_8950;
clo9781[2] = decode_clo_array[3];
clo9781[3] = decode_clo_array[4];
clo9781[4] = decode_clo_array[5];
clo9781[5] = decode_clo_array[6];
clo9781[6] = decode_clo_array[7];
void* f_lam_9218 = encode_clo(clo9781);



//if-clause
if(is_true(apply_prim__u60_2(decode_clo_array[4], apply_prim__u45_2(decode_clo_array[1], int9525))))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9218, decode_clo_array[2], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9525));
}
else
{
// kont-clo-app case
lam9393_spec(f_lam_9218, bool_f9530);
}

}

inline void lam9395_spec(void* env9396, void* id_8950) // lam9395 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9396);

//creating new make-kont closure
void** clo9782 = alloc_kont(lam9393_spec, 6);

//setting env list
clo9782[1] = id_8950;
clo9782[2] = decode_clo_array[3];
clo9782[3] = decode_clo_array[4];
clo9782[4] = decode_clo_array[5];
clo9782[5] = decode_clo_array[6];
clo9782[6] = decode_clo_array[7];
void* f_lam_9218 = encode_clo(clo9782);



//if-clause
if(is_true(apply_prim__u60_2(decode_clo_array[4], apply_prim__u45_2(decode_clo_array[1], int9525))))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9218, decode_clo_array[2], decode_clo_array[3], apply_prim__u43_2(decode_clo_array[4], int9525));
}
else
{
// kont-clo-app case
lam9393_spec(f_lam_9218, bool_f9530);
}

}

inline void lam9397_fptr() // lam9397 -> generic version 
{
//reading env
void* const env9398 = arg_buffer[1];
//reading env and args
void* const id_8945 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9398);

//creating new make-kont closure
void** clo9783 = alloc_kont(lam9395_spec, 7);

//setting env list
clo9783[1] = decode_clo_array[1];
clo9783[2] = decode_clo_array[2];
clo9783[3] = decode_clo_array[3];
clo9783[4] = decode_clo_array[4];
clo9783[5] = decode_clo_array[5];
clo9783[6] = decode_clo_array[6];
clo9783[7] = decode_clo_array[7];
void* f_lam_9219 = encode_clo(clo9783);



//if-clause
if(is_true(id_8945))
{
// kont-clo-app case
lam9395_spec(f_lam_9219, apply_prim_list_1(apply_prim_cons_2(decode_clo_array[3], apply_prim__u45_2(decode_clo_array[4], int9525))));
}
else
{
// kont-clo-app case
lam9395_spec(f_lam_9219, apply_prim_list_0());
}

}

inline void lam9397_spec(void* env9398, void* id_8945) // lam9397 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9398);

//creating new make-kont closure
void** clo9784 = alloc_kont(lam9395_spec, 7);

//setting env list
clo9784[1] = decode_clo_array[1];
clo9784[2] = decode_clo_array[2];
clo9784[3] = decode_clo_array[3];
clo9784[4] = decode_clo_array[4];
clo9784[5] = decode_clo_array[5];
clo9784[6] = decode_clo_array[6];
clo9784[7] = decode_clo_array[7];
void* f_lam_9219 = encode_clo(clo9784);



//if-clause
if(is_true(id_8945))
{
// kont-clo-app case
lam9395_spec(f_lam_9219, apply_prim_list_1(apply_prim_cons_2(decode_clo_array[3], apply_prim__u45_2(decode_clo_array[4], int9525))));
}
else
{
// kont-clo-app case
lam9395_spec(f_lam_9219, apply_prim_list_0());
}

}

inline void lam9399_fptr() // lam9399 -> generic version 
{
//reading env
void* const env9400 = arg_buffer[1];
//reading env and args
void* const id_8939 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9400);

//creating new make-kont closure
void** clo9785 = alloc_kont(lam9397_spec, 7);

//setting env list
clo9785[1] = decode_clo_array[1];
clo9785[2] = decode_clo_array[2];
clo9785[3] = decode_clo_array[3];
clo9785[4] = decode_clo_array[4];
clo9785[5] = decode_clo_array[5];
clo9785[6] = decode_clo_array[6];
clo9785[7] = id_8939;
void* f_lam_9220 = encode_clo(clo9785);



//if-clause
if(is_true(apply_prim__u62_2(decode_clo_array[4], int9532)))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9220, decode_clo_array[2], decode_clo_array[3], apply_prim__u45_2(decode_clo_array[4], int9525));
}
else
{
// kont-clo-app case
lam9397_spec(f_lam_9220, bool_f9530);
}

}

inline void lam9399_spec(void* env9400, void* id_8939) // lam9399 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9400);

//creating new make-kont closure
void** clo9786 = alloc_kont(lam9397_spec, 7);

//setting env list
clo9786[1] = decode_clo_array[1];
clo9786[2] = decode_clo_array[2];
clo9786[3] = decode_clo_array[3];
clo9786[4] = decode_clo_array[4];
clo9786[5] = decode_clo_array[5];
clo9786[6] = decode_clo_array[6];
clo9786[7] = id_8939;
void* f_lam_9220 = encode_clo(clo9786);



//if-clause
if(is_true(apply_prim__u62_2(decode_clo_array[4], int9532)))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9220, decode_clo_array[2], decode_clo_array[3], apply_prim__u45_2(decode_clo_array[4], int9525));
}
else
{
// kont-clo-app case
lam9397_spec(f_lam_9220, bool_f9530);
}

}

inline void lam9401_fptr() // lam9401 -> generic version 
{
//reading env
void* const env9402 = arg_buffer[1];
//reading env and args
void* const id_8934 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9402);

//creating new make-kont closure
void** clo9787 = alloc_kont(lam9399_spec, 6);

//setting env list
clo9787[1] = decode_clo_array[1];
clo9787[2] = decode_clo_array[2];
clo9787[3] = decode_clo_array[3];
clo9787[4] = decode_clo_array[4];
clo9787[5] = decode_clo_array[5];
clo9787[6] = decode_clo_array[6];
void* f_lam_9221 = encode_clo(clo9787);



//if-clause
if(is_true(id_8934))
{
// kont-clo-app case
lam9399_spec(f_lam_9221, apply_prim_list_1(apply_prim_cons_2(apply_prim__u43_2(decode_clo_array[3], int9525), decode_clo_array[4])));
}
else
{
// kont-clo-app case
lam9399_spec(f_lam_9221, apply_prim_list_0());
}

}

inline void lam9401_spec(void* env9402, void* id_8934) // lam9401 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9402);

//creating new make-kont closure
void** clo9788 = alloc_kont(lam9399_spec, 6);

//setting env list
clo9788[1] = decode_clo_array[1];
clo9788[2] = decode_clo_array[2];
clo9788[3] = decode_clo_array[3];
clo9788[4] = decode_clo_array[4];
clo9788[5] = decode_clo_array[5];
clo9788[6] = decode_clo_array[6];
void* f_lam_9221 = encode_clo(clo9788);



//if-clause
if(is_true(id_8934))
{
// kont-clo-app case
lam9399_spec(f_lam_9221, apply_prim_list_1(apply_prim_cons_2(apply_prim__u43_2(decode_clo_array[3], int9525), decode_clo_array[4])));
}
else
{
// kont-clo-app case
lam9399_spec(f_lam_9221, apply_prim_list_0());
}

}

inline void lam9403_fptr() // lam9403 -> generic version 
{
//reading env
void* const env9404 = arg_buffer[1];
//reading env and args
void* const id_8927 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9404);

//creating new make-kont closure
void** clo9789 = alloc_kont(lam9401_spec, 6);

//setting env list
clo9789[1] = decode_clo_array[1];
clo9789[2] = decode_clo_array[2];
clo9789[3] = decode_clo_array[4];
clo9789[4] = decode_clo_array[5];
clo9789[5] = decode_clo_array[6];
clo9789[6] = id_8927;
void* f_lam_9222 = encode_clo(clo9789);



//if-clause
if(is_true(apply_prim__u60_2(decode_clo_array[4], apply_prim__u45_2(decode_clo_array[3], int9525))))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9222, decode_clo_array[2], apply_prim__u43_2(decode_clo_array[4], int9525), decode_clo_array[5]);
}
else
{
// kont-clo-app case
lam9401_spec(f_lam_9222, bool_f9530);
}

}

inline void lam9403_spec(void* env9404, void* id_8927) // lam9403 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9404);

//creating new make-kont closure
void** clo9790 = alloc_kont(lam9401_spec, 6);

//setting env list
clo9790[1] = decode_clo_array[1];
clo9790[2] = decode_clo_array[2];
clo9790[3] = decode_clo_array[4];
clo9790[4] = decode_clo_array[5];
clo9790[5] = decode_clo_array[6];
clo9790[6] = id_8927;
void* f_lam_9222 = encode_clo(clo9790);



//if-clause
if(is_true(apply_prim__u60_2(decode_clo_array[4], apply_prim__u45_2(decode_clo_array[3], int9525))))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9222, decode_clo_array[2], apply_prim__u43_2(decode_clo_array[4], int9525), decode_clo_array[5]);
}
else
{
// kont-clo-app case
lam9401_spec(f_lam_9222, bool_f9530);
}

}

inline void lam9405_fptr() // lam9405 -> generic version 
{
//reading env
void* const env9406 = arg_buffer[1];
//reading env and args
void* const id_8922 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9406);

//creating new make-kont closure
void** clo9791 = alloc_kont(lam9403_spec, 6);

//setting env list
clo9791[1] = decode_clo_array[1];
clo9791[2] = decode_clo_array[2];
clo9791[3] = decode_clo_array[3];
clo9791[4] = decode_clo_array[4];
clo9791[5] = decode_clo_array[5];
clo9791[6] = decode_clo_array[6];
void* f_lam_9223 = encode_clo(clo9791);



//if-clause
if(is_true(id_8922))
{
// kont-clo-app case
lam9403_spec(f_lam_9223, apply_prim_list_1(apply_prim_cons_2(apply_prim__u45_2(decode_clo_array[4], int9525), decode_clo_array[5])));
}
else
{
// kont-clo-app case
lam9403_spec(f_lam_9223, apply_prim_list_0());
}

}

inline void lam9405_spec(void* env9406, void* id_8922) // lam9405 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9406);

//creating new make-kont closure
void** clo9792 = alloc_kont(lam9403_spec, 6);

//setting env list
clo9792[1] = decode_clo_array[1];
clo9792[2] = decode_clo_array[2];
clo9792[3] = decode_clo_array[3];
clo9792[4] = decode_clo_array[4];
clo9792[5] = decode_clo_array[5];
clo9792[6] = decode_clo_array[6];
void* f_lam_9223 = encode_clo(clo9792);



//if-clause
if(is_true(id_8922))
{
// kont-clo-app case
lam9403_spec(f_lam_9223, apply_prim_list_1(apply_prim_cons_2(apply_prim__u45_2(decode_clo_array[4], int9525), decode_clo_array[5])));
}
else
{
// kont-clo-app case
lam9403_spec(f_lam_9223, apply_prim_list_0());
}

}

inline void lam9407_fptr() // lam9407 -> generic version 
{
//reading env
void* const env9408 = arg_buffer[1];
//reading env and args
void* const size = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9408);

//creating new make-kont closure
void** clo9793 = alloc_kont(lam9405_spec, 6);

//setting env list
clo9793[1] = apply_prim_cdr_1(size);
clo9793[2] = decode_clo_array[1];
clo9793[3] = apply_prim_car_1(size);
clo9793[4] = apply_prim_car_1(decode_clo_array[2]);
clo9793[5] = apply_prim_cdr_1(decode_clo_array[2]);
clo9793[6] = decode_clo_array[3];
void* f_lam_9224 = encode_clo(clo9793);



//if-clause
if(is_true(apply_prim__u62_2(apply_prim_car_1(decode_clo_array[2]), int9532)))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9224, decode_clo_array[1], apply_prim__u45_2(apply_prim_car_1(decode_clo_array[2]), int9525), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{
// kont-clo-app case
lam9405_spec(f_lam_9224, bool_f9530);
}

}

inline void lam9407_spec(void* env9408, void* size) // lam9407 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9408);

//creating new make-kont closure
void** clo9794 = alloc_kont(lam9405_spec, 6);

//setting env list
clo9794[1] = apply_prim_cdr_1(size);
clo9794[2] = decode_clo_array[1];
clo9794[3] = apply_prim_car_1(size);
clo9794[4] = apply_prim_car_1(decode_clo_array[2]);
clo9794[5] = apply_prim_cdr_1(decode_clo_array[2]);
clo9794[6] = decode_clo_array[3];
void* f_lam_9224 = encode_clo(clo9794);



//if-clause
if(is_true(apply_prim__u62_2(apply_prim_car_1(decode_clo_array[2]), int9532)))
{

//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9224, decode_clo_array[1], apply_prim__u45_2(apply_prim_car_1(decode_clo_array[2]), int9525), apply_prim_cdr_1(decode_clo_array[2]));
}
else
{
// kont-clo-app case
lam9405_spec(f_lam_9224, bool_f9530);
}

}

inline void neighboring_u45cavities_fptr() // neighboring-cavities -> generic version 
{
//reading env and args
void* const kont9216 = arg_buffer[2];
void* const pos = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9795 = alloc_kont(lam9407_spec, 3);

//setting env list
clo9795[1] = cave;
clo9795[2] = pos;
clo9795[3] = kont9216;
void* f_lam_9225 = encode_clo(clo9795);



//clo-app
matrix_u45size_spec(matrix_u45size, f_lam_9225, cave);
}

inline void neighboring_u45cavities_spec(void* _9409, void* kont9216, void* pos, void* cave) // neighboring-cavities 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9796 = alloc_kont(lam9407_spec, 3);

//setting env list
clo9796[1] = cave;
clo9796[2] = pos;
clo9796[3] = kont9216;
void* f_lam_9225 = encode_clo(clo9796);



//clo-app
matrix_u45size_spec(matrix_u45size, f_lam_9225, cave);
}

inline void lam9410_fptr() // lam9410 -> generic version 
{
//reading env
void* const env9411 = arg_buffer[1];
//reading env and args
void* const id_8966 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9411);

//clo-app
my_u45foldl_spec(my_u45foldl, decode_clo_array[3], decode_clo_array[2], decode_clo_array[1], id_8966);
}

inline void lam9410_spec(void* env9411, void* id_8966) // lam9410 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9411);

//clo-app
my_u45foldl_spec(my_u45foldl, decode_clo_array[3], decode_clo_array[2], decode_clo_array[1], id_8966);
}

inline void lam9412_fptr() // lam9412 -> generic version 
{
//reading env
void* const env9413 = arg_buffer[1];
//reading env and args
void* const id_8965 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9413);

//creating new make-kont closure
void** clo9797 = alloc_kont(lam9410_spec, 3);

//setting env list
clo9797[1] = id_8965;
clo9797[2] = decode_clo_array[2];
clo9797[3] = decode_clo_array[4];
void* f_lam_9228 = encode_clo(clo9797);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9228, decode_clo_array[3], decode_clo_array[1]);
}

inline void lam9412_spec(void* env9413, void* id_8965) // lam9412 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9413);

//creating new make-kont closure
void** clo9798 = alloc_kont(lam9410_spec, 3);

//setting env list
clo9798[1] = id_8965;
clo9798[2] = decode_clo_array[2];
clo9798[3] = decode_clo_array[4];
void* f_lam_9228 = encode_clo(clo9798);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9228, decode_clo_array[3], decode_clo_array[1]);
}

inline void lam9414_fptr() // lam9414 -> generic version 
{
//reading env
void* const env9415 = arg_buffer[1];
//reading env and args
void* const cont9227 = arg_buffer[2];
void* const c = arg_buffer[3];
void* const nc = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9415);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, cont9227, c, nc, decode_clo_array[2], decode_clo_array[1]);
}

inline void lam9414_spec(void* env9415, void* cont9227, void* c, void* nc) // lam9414 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9415);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, cont9227, c, nc, decode_clo_array[2], decode_clo_array[1]);
}

inline void lam9416_fptr() // lam9416 -> generic version 
{
//reading env
void* const env9417 = arg_buffer[1];
//reading env and args
void* const cavity_u45id = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9417);

//if-clause
if(is_true(apply_prim_equal_u63_2(cavity_u45id, decode_clo_array[7])))
{

//creating new closure instance
void** clo9799 = alloc_clo(lam9414_fptr, 2);

//setting env list
clo9799[1] = decode_clo_array[7];
clo9799[2] = decode_clo_array[4];
void* id_8964 = encode_clo(clo9799);



//creating new make-kont closure
void** clo9800 = alloc_kont(lam9412_spec, 4);

//setting env list
clo9800[1] = decode_clo_array[5];
clo9800[2] = id_8964;
clo9800[3] = decode_clo_array[2];
clo9800[4] = decode_clo_array[3];
void* f_lam_9229 = encode_clo(clo9800);



//clo-app
matrix_u45write_spec(matrix_u45write, f_lam_9229, decode_clo_array[5], decode_clo_array[1], decode_clo_array[6], decode_clo_array[4]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[5]);
}

}

inline void lam9416_spec(void* env9417, void* cavity_u45id) // lam9416 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9417);

//if-clause
if(is_true(apply_prim_equal_u63_2(cavity_u45id, decode_clo_array[7])))
{

//creating new closure instance
void** clo9801 = alloc_clo(lam9414_fptr, 2);

//setting env list
clo9801[1] = decode_clo_array[7];
clo9801[2] = decode_clo_array[4];
void* id_8964 = encode_clo(clo9801);



//creating new make-kont closure
void** clo9802 = alloc_kont(lam9412_spec, 4);

//setting env list
clo9802[1] = decode_clo_array[5];
clo9802[2] = id_8964;
clo9802[3] = decode_clo_array[2];
clo9802[4] = decode_clo_array[3];
void* f_lam_9229 = encode_clo(clo9802);



//clo-app
matrix_u45write_spec(matrix_u45write, f_lam_9229, decode_clo_array[5], decode_clo_array[1], decode_clo_array[6], decode_clo_array[4]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[5]);
}

}

inline void change_u45cavity_u45aux_fptr() // change-cavity-aux -> generic version 
{
//reading env and args
void* const kont9226 = arg_buffer[2];
void* const cave = arg_buffer[3];
void* const pos = arg_buffer[4];
void* const new_u45cavity_u45id = arg_buffer[5];
void* const old_u45cavity_u45id = arg_buffer[6];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9803 = alloc_kont(lam9416_spec, 7);

//setting env list
clo9803[1] = apply_prim_car_1(pos);
clo9803[2] = pos;
clo9803[3] = kont9226;
clo9803[4] = new_u45cavity_u45id;
clo9803[5] = cave;
clo9803[6] = apply_prim_cdr_1(pos);
clo9803[7] = old_u45cavity_u45id;
void* f_lam_9230 = encode_clo(clo9803);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9230, cave, apply_prim_car_1(pos), apply_prim_cdr_1(pos));
}

inline void change_u45cavity_u45aux_spec(void* _9418, void* kont9226, void* cave, void* pos, void* new_u45cavity_u45id, void* old_u45cavity_u45id) // change-cavity-aux 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9804 = alloc_kont(lam9416_spec, 7);

//setting env list
clo9804[1] = apply_prim_car_1(pos);
clo9804[2] = pos;
clo9804[3] = kont9226;
clo9804[4] = new_u45cavity_u45id;
clo9804[5] = cave;
clo9804[6] = apply_prim_cdr_1(pos);
clo9804[7] = old_u45cavity_u45id;
void* f_lam_9230 = encode_clo(clo9804);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9230, cave, apply_prim_car_1(pos), apply_prim_cdr_1(pos));
}

inline void lam9419_fptr() // lam9419 -> generic version 
{
//reading env
void* const env9420 = arg_buffer[1];
//reading env and args
void* const id_8967 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9420);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, decode_clo_array[3], decode_clo_array[1], decode_clo_array[2], decode_clo_array[4], id_8967);
}

inline void lam9419_spec(void* env9420, void* id_8967) // lam9419 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9420);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, decode_clo_array[3], decode_clo_array[1], decode_clo_array[2], decode_clo_array[4], id_8967);
}

inline void change_u45cavity_fptr() // change-cavity -> generic version 
{
//reading env and args
void* const kont9231 = arg_buffer[2];
void* const cave = arg_buffer[3];
void* const pos = arg_buffer[4];
void* const new_u45cavity_u45id = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9805 = alloc_kont(lam9419_spec, 4);

//setting env list
clo9805[1] = cave;
clo9805[2] = pos;
clo9805[3] = kont9231;
clo9805[4] = new_u45cavity_u45id;
void* f_lam_9232 = encode_clo(clo9805);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9232, cave, apply_prim_car_1(pos), apply_prim_cdr_1(pos));
}

inline void change_u45cavity_spec(void* _9421, void* kont9231, void* cave, void* pos, void* new_u45cavity_u45id) // change-cavity 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9806 = alloc_kont(lam9419_spec, 4);

//setting env list
clo9806[1] = cave;
clo9806[2] = pos;
clo9806[3] = kont9231;
clo9806[4] = new_u45cavity_u45id;
void* f_lam_9232 = encode_clo(clo9806);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9232, cave, apply_prim_car_1(pos), apply_prim_cdr_1(pos));
}

inline void pierce_fptr() // pierce -> generic version 
{
//reading env and args
void* const kont9233 = arg_buffer[2];
void* const pos = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
matrix_u45write_spec(matrix_u45write, kont9233, cave, apply_prim_car_1(pos), apply_prim_cdr_1(pos), pos);
}

inline void pierce_spec(void* _9422, void* kont9233, void* pos, void* cave) // pierce 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
matrix_u45write_spec(matrix_u45write, kont9233, cave, apply_prim_car_1(pos), apply_prim_cdr_1(pos), pos);
}

inline void lam9423_fptr() // lam9423 -> generic version 
{
//reading env
void* const env9424 = arg_buffer[1];
//reading env and args
void* const id_8974 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9424);

//clo-app
pierce_spec(pierce, decode_clo_array[2], decode_clo_array[1], id_8974);
}

inline void lam9423_spec(void* env9424, void* id_8974) // lam9423 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9424);

//clo-app
pierce_spec(pierce, decode_clo_array[2], decode_clo_array[1], id_8974);
}

inline void lam9425_fptr() // lam9425 -> generic version 
{
//reading env
void* const env9426 = arg_buffer[1];
//reading env and args
void* const cont9236 = arg_buffer[2];
void* const c = arg_buffer[3];
void* const nc = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9426);

//clo-app
change_u45cavity_spec(change_u45cavity, cont9236, c, nc, decode_clo_array[1]);
}

inline void lam9425_spec(void* env9426, void* cont9236, void* c, void* nc) // lam9425 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9426);

//clo-app
change_u45cavity_spec(change_u45cavity, cont9236, c, nc, decode_clo_array[1]);
}

inline void lam9427_fptr() // lam9427 -> generic version 
{
//reading env
void* const env9428 = arg_buffer[1];
//reading env and args
void* const id_8972 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9428);

//if-clause
if(is_true(id_8972))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[1]);
}
else
{

//creating new closure instance
void** clo9807 = alloc_clo(lam9425_fptr, 1);

//setting env list
clo9807[1] = decode_clo_array[2];
void* id_8973 = encode_clo(clo9807);



//creating new make-kont closure
void** clo9808 = alloc_kont(lam9423_spec, 2);

//setting env list
clo9808[1] = decode_clo_array[2];
clo9808[2] = decode_clo_array[3];
void* f_lam_9237 = encode_clo(clo9808);



//clo-app
my_u45foldl_spec(my_u45foldl, f_lam_9237, id_8973, decode_clo_array[1], decode_clo_array[4]);
}

}

inline void lam9427_spec(void* env9428, void* id_8972) // lam9427 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9428);

//if-clause
if(is_true(id_8972))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[1]);
}
else
{

//creating new closure instance
void** clo9809 = alloc_clo(lam9425_fptr, 1);

//setting env list
clo9809[1] = decode_clo_array[2];
void* id_8973 = encode_clo(clo9809);



//creating new make-kont closure
void** clo9810 = alloc_kont(lam9423_spec, 2);

//setting env list
clo9810[1] = decode_clo_array[2];
clo9810[2] = decode_clo_array[3];
void* f_lam_9237 = encode_clo(clo9810);



//clo-app
my_u45foldl_spec(my_u45foldl, f_lam_9237, id_8973, decode_clo_array[1], decode_clo_array[4]);
}

}

inline void lam9429_fptr() // lam9429 -> generic version 
{
//reading env
void* const env9430 = arg_buffer[1];
//reading env and args
void* const id_8971 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9430);

//creating new make-kont closure
void** clo9811 = alloc_kont(lam9427_spec, 4);

//setting env list
clo9811[1] = decode_clo_array[1];
clo9811[2] = decode_clo_array[2];
clo9811[3] = decode_clo_array[3];
clo9811[4] = decode_clo_array[4];
void* f_lam_9238 = encode_clo(clo9811);



//clo-app
duplicates_u63_spec(duplicates_u63, f_lam_9238, id_8971);
}

inline void lam9429_spec(void* env9430, void* id_8971) // lam9429 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9430);

//creating new make-kont closure
void** clo9812 = alloc_kont(lam9427_spec, 4);

//setting env list
clo9812[1] = decode_clo_array[1];
clo9812[2] = decode_clo_array[2];
clo9812[3] = decode_clo_array[3];
clo9812[4] = decode_clo_array[4];
void* f_lam_9238 = encode_clo(clo9812);



//clo-app
duplicates_u63_spec(duplicates_u63, f_lam_9238, id_8971);
}

inline void lam9431_fptr() // lam9431 -> generic version 
{
//reading env
void* const env9432 = arg_buffer[1];
//reading env and args
void* const cont9235 = arg_buffer[2];
void* const nc = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9432);

//clo-app
matrix_u45read_spec(matrix_u45read, cont9235, decode_clo_array[1], apply_prim_car_1(nc), apply_prim_cdr_1(nc));
}

inline void lam9431_spec(void* env9432, void* cont9235, void* nc) // lam9431 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9432);

//clo-app
matrix_u45read_spec(matrix_u45read, cont9235, decode_clo_array[1], apply_prim_car_1(nc), apply_prim_cdr_1(nc));
}

inline void lam9433_fptr() // lam9433 -> generic version 
{
//reading env
void* const env9434 = arg_buffer[1];
//reading env and args
void* const ncs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9434);

//creating new closure instance
void** clo9813 = alloc_clo(lam9431_fptr, 1);

//setting env list
clo9813[1] = decode_clo_array[1];
void* id_8970 = encode_clo(clo9813);



//creating new make-kont closure
void** clo9814 = alloc_kont(lam9429_spec, 4);

//setting env list
clo9814[1] = decode_clo_array[1];
clo9814[2] = decode_clo_array[2];
clo9814[3] = decode_clo_array[3];
clo9814[4] = ncs;
void* f_lam_9239 = encode_clo(clo9814);



//clo-app
map_spec(map, f_lam_9239, id_8970, ncs);
}

inline void lam9433_spec(void* env9434, void* ncs) // lam9433 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9434);

//creating new closure instance
void** clo9815 = alloc_clo(lam9431_fptr, 1);

//setting env list
clo9815[1] = decode_clo_array[1];
void* id_8970 = encode_clo(clo9815);



//creating new make-kont closure
void** clo9816 = alloc_kont(lam9429_spec, 4);

//setting env list
clo9816[1] = decode_clo_array[1];
clo9816[2] = decode_clo_array[2];
clo9816[3] = decode_clo_array[3];
clo9816[4] = ncs;
void* f_lam_9239 = encode_clo(clo9816);



//clo-app
map_spec(map, f_lam_9239, id_8970, ncs);
}

inline void try_u45to_u45pierce_fptr() // try-to-pierce -> generic version 
{
//reading env and args
void* const kont9234 = arg_buffer[2];
void* const pos = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9817 = alloc_kont(lam9433_spec, 3);

//setting env list
clo9817[1] = cave;
clo9817[2] = pos;
clo9817[3] = kont9234;
void* f_lam_9240 = encode_clo(clo9817);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9240, pos, cave);
}

inline void try_u45to_u45pierce_spec(void* _9435, void* kont9234, void* pos, void* cave) // try-to-pierce 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9818 = alloc_kont(lam9433_spec, 3);

//setting env list
clo9818[1] = cave;
clo9818[2] = pos;
clo9818[3] = kont9234;
void* f_lam_9240 = encode_clo(clo9818);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9240, pos, cave);
}

inline void lam9436_fptr() // lam9436 -> generic version 
{
//reading env
void* const env9437 = arg_buffer[1];
//reading env and args
void* const id_8977 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9437);

//clo-app
pierce_u45randomly_spec(pierce_u45randomly, decode_clo_array[2], decode_clo_array[1], id_8977);
}

inline void lam9436_spec(void* env9437, void* id_8977) // lam9436 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9437);

//clo-app
pierce_u45randomly_spec(pierce_u45randomly, decode_clo_array[2], decode_clo_array[1], id_8977);
}

inline void pierce_u45randomly_fptr() // pierce-randomly -> generic version 
{
//reading env and args
void* const kont9241 = arg_buffer[2];
void* const possible_u45holes = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(possible_u45holes)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9241)[0])(kont9241, cave);
}
else
{

//creating new make-kont closure
void** clo9819 = alloc_kont(lam9436_spec, 2);

//setting env list
clo9819[1] = apply_prim_cdr_1(possible_u45holes);
clo9819[2] = kont9241;
void* f_lam_9242 = encode_clo(clo9819);



//clo-app
try_u45to_u45pierce_spec(try_u45to_u45pierce, f_lam_9242, apply_prim_car_1(possible_u45holes), cave);
}

}

inline void pierce_u45randomly_spec(void* _9438, void* kont9241, void* possible_u45holes, void* cave) // pierce-randomly 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(possible_u45holes)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9241)[0])(kont9241, cave);
}
else
{

//creating new make-kont closure
void** clo9820 = alloc_kont(lam9436_spec, 2);

//setting env list
clo9820[1] = apply_prim_cdr_1(possible_u45holes);
clo9820[2] = kont9241;
void* f_lam_9242 = encode_clo(clo9820);



//clo-app
try_u45to_u45pierce_spec(try_u45to_u45pierce, f_lam_9242, apply_prim_car_1(possible_u45holes), cave);
}

}

inline void lam9439_fptr() // lam9439 -> generic version 
{
//reading env
void* const env9440 = arg_buffer[1];
//reading env and args
void* const xy8979 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9440);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8979);
}

inline void lam9439_spec(void* env9440, void* xy8979) // lam9439 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9440);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8979);
}

inline void lam9441_fptr() // lam9441 -> generic version 
{
//reading env
void* const env9442 = arg_buffer[1];
//reading env and args
void* const xy8987 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9442);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8987);
}

inline void lam9441_spec(void* env9442, void* xy8987) // lam9441 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9442);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8987);
}

inline void lam9443_fptr() // lam9443 -> generic version 
{
//reading env
void* const env9444 = arg_buffer[1];
//reading env and args
void* const id_8989 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9444);

//if-clause
if(is_true(id_8989))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], decode_clo_array[3]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9530);
}

}

inline void lam9443_spec(void* env9444, void* id_8989) // lam9443 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9444);

//if-clause
if(is_true(id_8989))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], decode_clo_array[3]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9530);
}

}

inline void lam9445_fptr() // lam9445 -> generic version 
{
//reading env
void* const env9446 = arg_buffer[1];
//reading env and args
void* const id_8986 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9446);

//creating new make-kont closure
void** clo9821 = alloc_kont(lam9443_spec, 3);

//setting env list
clo9821[1] = decode_clo_array[1];
clo9821[2] = decode_clo_array[2];
clo9821[3] = decode_clo_array[3];
void* f_lam_9255 = encode_clo(clo9821);



//if-clause
if(is_true(id_8986))
{

//creating new make-kont closure
void** clo9822 = alloc_kont(lam9441_spec, 1);

//setting env list
clo9822[1] = f_lam_9255;
void* f_lam_9256 = encode_clo(clo9822);



//clo-app
even_u63_spec(even_u63, f_lam_9256, decode_clo_array[3]);
}
else
{
// kont-clo-app case
lam9443_spec(f_lam_9255, bool_f9530);
}

}

inline void lam9445_spec(void* env9446, void* id_8986) // lam9445 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9446);

//creating new make-kont closure
void** clo9823 = alloc_kont(lam9443_spec, 3);

//setting env list
clo9823[1] = decode_clo_array[1];
clo9823[2] = decode_clo_array[2];
clo9823[3] = decode_clo_array[3];
void* f_lam_9255 = encode_clo(clo9823);



//if-clause
if(is_true(id_8986))
{

//creating new make-kont closure
void** clo9824 = alloc_kont(lam9441_spec, 1);

//setting env list
clo9824[1] = f_lam_9255;
void* f_lam_9256 = encode_clo(clo9824);



//clo-app
even_u63_spec(even_u63, f_lam_9256, decode_clo_array[3]);
}
else
{
// kont-clo-app case
lam9443_spec(f_lam_9255, bool_f9530);
}

}

inline void lam9447_fptr() // lam9447 -> generic version 
{
//reading env
void* const env9448 = arg_buffer[1];
//reading env and args
void* const cont9254 = arg_buffer[2];
void* const i = arg_buffer[3];
void* const j = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9448);

//creating new make-kont closure
void** clo9825 = alloc_kont(lam9445_spec, 3);

//setting env list
clo9825[1] = cont9254;
clo9825[2] = i;
clo9825[3] = j;
void* f_lam_9257 = encode_clo(clo9825);



//clo-app
even_u63_spec(even_u63, f_lam_9257, i);
}

inline void lam9447_spec(void* env9448, void* cont9254, void* i, void* j) // lam9447 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9448);

//creating new make-kont closure
void** clo9826 = alloc_kont(lam9445_spec, 3);

//setting env list
clo9826[1] = cont9254;
clo9826[2] = i;
clo9826[3] = j;
void* f_lam_9257 = encode_clo(clo9826);



//clo-app
even_u63_spec(even_u63, f_lam_9257, i);
}

inline void lam9449_fptr() // lam9449 -> generic version 
{
//reading env
void* const env9450 = arg_buffer[1];
//reading env and args
void* const id_9003 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9450);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9003);
}

inline void lam9449_spec(void* env9450, void* id_9003) // lam9449 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9450);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9003);
}

inline void lam9451_fptr() // lam9451 -> generic version 
{
//reading env
void* const env9452 = arg_buffer[1];
//reading env and args
void* const id_9001 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9452);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9001);
}

inline void lam9451_spec(void* env9452, void* id_9001) // lam9451 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9452);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9001);
}

inline void lam9453_fptr() // lam9453 -> generic version 
{
//reading env
void* const env9454 = arg_buffer[1];
//reading env and args
void* const id_8996 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9454);

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[1], id_8996)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], apply_prim_list_0());
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], apply_prim_list_1(apply_prim_cons_2(decode_clo_array[2], decode_clo_array[3])));
}

}

inline void lam9453_spec(void* env9454, void* id_8996) // lam9453 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9454);

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[1], id_8996)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], apply_prim_list_0());
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], apply_prim_list_1(apply_prim_cons_2(decode_clo_array[2], decode_clo_array[3])));
}

}

inline void lam9455_fptr() // lam9455 -> generic version 
{
//reading env
void* const env9456 = arg_buffer[1];
//reading env and args
void* const id_8995 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9456);

//creating new make-kont closure
void** clo9827 = alloc_kont(lam9453_spec, 4);

//setting env list
clo9827[1] = id_8995;
clo9827[2] = decode_clo_array[1];
clo9827[3] = decode_clo_array[2];
clo9827[4] = decode_clo_array[3];
void* f_lam_9249 = encode_clo(clo9827);



//clo-app
even_u63_spec(even_u63, f_lam_9249, decode_clo_array[2]);
}

inline void lam9455_spec(void* env9456, void* id_8995) // lam9455 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9456);

//creating new make-kont closure
void** clo9828 = alloc_kont(lam9453_spec, 4);

//setting env list
clo9828[1] = id_8995;
clo9828[2] = decode_clo_array[1];
clo9828[3] = decode_clo_array[2];
clo9828[4] = decode_clo_array[3];
void* f_lam_9249 = encode_clo(clo9828);



//clo-app
even_u63_spec(even_u63, f_lam_9249, decode_clo_array[2]);
}

inline void lam9457_fptr() // lam9457 -> generic version 
{
//reading env
void* const env9458 = arg_buffer[1];
//reading env and args
void* const cont9248 = arg_buffer[2];
void* const j = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9458);

//creating new make-kont closure
void** clo9829 = alloc_kont(lam9455_spec, 3);

//setting env list
clo9829[1] = decode_clo_array[1];
clo9829[2] = j;
clo9829[3] = cont9248;
void* f_lam_9250 = encode_clo(clo9829);



//clo-app
even_u63_spec(even_u63, f_lam_9250, decode_clo_array[1]);
}

inline void lam9457_spec(void* env9458, void* cont9248, void* j) // lam9457 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9458);

//creating new make-kont closure
void** clo9830 = alloc_kont(lam9455_spec, 3);

//setting env list
clo9830[1] = decode_clo_array[1];
clo9830[2] = j;
clo9830[3] = cont9248;
void* f_lam_9250 = encode_clo(clo9830);



//clo-app
even_u63_spec(even_u63, f_lam_9250, decode_clo_array[1]);
}

inline void lam9459_fptr() // lam9459 -> generic version 
{
//reading env
void* const env9460 = arg_buffer[1];
//reading env and args
void* const cont9247 = arg_buffer[2];
void* const i = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9460);

//creating new closure instance
void** clo9831 = alloc_clo(lam9457_fptr, 1);

//setting env list
clo9831[1] = i;
void* id_9000 = encode_clo(clo9831);



//creating new make-kont closure
void** clo9832 = alloc_kont(lam9451_spec, 1);

//setting env list
clo9832[1] = cont9247;
void* f_lam_9251 = encode_clo(clo9832);



//clo-app
my_u45for_spec(my_u45for, f_lam_9251, int9532, decode_clo_array[1], id_9000);
}

inline void lam9459_spec(void* env9460, void* cont9247, void* i) // lam9459 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9460);

//creating new closure instance
void** clo9833 = alloc_clo(lam9457_fptr, 1);

//setting env list
clo9833[1] = i;
void* id_9000 = encode_clo(clo9833);



//creating new make-kont closure
void** clo9834 = alloc_kont(lam9451_spec, 1);

//setting env list
clo9834[1] = cont9247;
void* f_lam_9251 = encode_clo(clo9834);



//clo-app
my_u45for_spec(my_u45for, f_lam_9251, int9532, decode_clo_array[1], id_9000);
}

inline void lam9461_fptr() // lam9461 -> generic version 
{
//reading env
void* const env9462 = arg_buffer[1];
//reading env and args
void* const id_9005 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9462);

//clo-app
cave_u45to_u45maze_spec(cave_u45to_u45maze, decode_clo_array[1], id_9005);
}

inline void lam9461_spec(void* env9462, void* id_9005) // lam9461 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9462);

//clo-app
cave_u45to_u45maze_spec(cave_u45to_u45maze, decode_clo_array[1], id_9005);
}

inline void lam9463_fptr() // lam9463 -> generic version 
{
//reading env
void* const env9464 = arg_buffer[1];
//reading env and args
void* const id_9004 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9464);

//creating new make-kont closure
void** clo9835 = alloc_kont(lam9461_spec, 1);

//setting env list
clo9835[1] = decode_clo_array[2];
void* f_lam_9244 = encode_clo(clo9835);



//clo-app
pierce_u45randomly_spec(pierce_u45randomly, f_lam_9244, id_9004, decode_clo_array[1]);
}

inline void lam9463_spec(void* env9464, void* id_9004) // lam9463 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9464);

//creating new make-kont closure
void** clo9836 = alloc_kont(lam9461_spec, 1);

//setting env list
clo9836[1] = decode_clo_array[2];
void* f_lam_9244 = encode_clo(clo9836);



//clo-app
pierce_u45randomly_spec(pierce_u45randomly, f_lam_9244, id_9004, decode_clo_array[1]);
}

inline void lam9465_fptr() // lam9465 -> generic version 
{
//reading env
void* const env9466 = arg_buffer[1];
//reading env and args
void* const possible_u45holes = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9466);

//creating new make-kont closure
void** clo9837 = alloc_kont(lam9463_spec, 2);

//setting env list
clo9837[1] = decode_clo_array[1];
clo9837[2] = decode_clo_array[2];
void* f_lam_9245 = encode_clo(clo9837);



//clo-app
shuffle_spec(shuffle, f_lam_9245, possible_u45holes);
}

inline void lam9465_spec(void* env9466, void* possible_u45holes) // lam9465 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9466);

//creating new make-kont closure
void** clo9838 = alloc_kont(lam9463_spec, 2);

//setting env list
clo9838[1] = decode_clo_array[1];
clo9838[2] = decode_clo_array[2];
void* f_lam_9245 = encode_clo(clo9838);



//clo-app
shuffle_spec(shuffle, f_lam_9245, possible_u45holes);
}

inline void lam9467_fptr() // lam9467 -> generic version 
{
//reading env
void* const env9468 = arg_buffer[1];
//reading env and args
void* const cave = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9468);

//creating new make-kont closure
void** clo9839 = alloc_kont(lam9465_spec, 2);

//setting env list
clo9839[1] = cave;
clo9839[2] = decode_clo_array[3];
void* f_lam_9246 = encode_clo(clo9839);



//creating new closure instance
void** clo9840 = alloc_clo(lam9459_fptr, 1);

//setting env list
clo9840[1] = decode_clo_array[1];
void* id_9002 = encode_clo(clo9840);



//creating new make-kont closure
void** clo9841 = alloc_kont(lam9449_spec, 1);

//setting env list
clo9841[1] = f_lam_9246;
void* f_lam_9252 = encode_clo(clo9841);



//clo-app
my_u45for_spec(my_u45for, f_lam_9252, int9532, decode_clo_array[2], id_9002);
}

inline void lam9467_spec(void* env9468, void* cave) // lam9467 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9468);

//creating new make-kont closure
void** clo9842 = alloc_kont(lam9465_spec, 2);

//setting env list
clo9842[1] = cave;
clo9842[2] = decode_clo_array[3];
void* f_lam_9246 = encode_clo(clo9842);



//creating new closure instance
void** clo9843 = alloc_clo(lam9459_fptr, 1);

//setting env list
clo9843[1] = decode_clo_array[1];
void* id_9002 = encode_clo(clo9843);



//creating new make-kont closure
void** clo9844 = alloc_kont(lam9449_spec, 1);

//setting env list
clo9844[1] = f_lam_9246;
void* f_lam_9252 = encode_clo(clo9844);



//clo-app
my_u45for_spec(my_u45for, f_lam_9252, int9532, decode_clo_array[2], id_9002);
}

inline void lam9469_fptr() // lam9469 -> generic version 
{
//reading env
void* const env9470 = arg_buffer[1];
//reading env and args
void* const id_8984 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9470);

//if-clause
if(is_true(id_8984))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], encode_str(new(GC) std::string("error")));
}
else
{

//creating new make-kont closure
void** clo9845 = alloc_kont(lam9467_spec, 3);

//setting env list
clo9845[1] = decode_clo_array[1];
clo9845[2] = decode_clo_array[2];
clo9845[3] = decode_clo_array[3];
void* f_lam_9253 = encode_clo(clo9845);



//creating new closure instance
void** clo9846 = alloc_clo(lam9447_fptr, 0);
void* id_8992 = encode_clo(clo9846);



//clo-app
make_u45matrix_spec(make_u45matrix, f_lam_9253, decode_clo_array[2], decode_clo_array[1], id_8992);
}

}

inline void lam9469_spec(void* env9470, void* id_8984) // lam9469 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9470);

//if-clause
if(is_true(id_8984))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], encode_str(new(GC) std::string("error")));
}
else
{

//creating new make-kont closure
void** clo9847 = alloc_kont(lam9467_spec, 3);

//setting env list
clo9847[1] = decode_clo_array[1];
clo9847[2] = decode_clo_array[2];
clo9847[3] = decode_clo_array[3];
void* f_lam_9253 = encode_clo(clo9847);



//creating new closure instance
void** clo9848 = alloc_clo(lam9447_fptr, 0);
void* id_8992 = encode_clo(clo9848);



//clo-app
make_u45matrix_spec(make_u45matrix, f_lam_9253, decode_clo_array[2], decode_clo_array[1], id_8992);
}

}

inline void lam9471_fptr() // lam9471 -> generic version 
{
//reading env
void* const env9472 = arg_buffer[1];
//reading env and args
void* const id_8981 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9472);

//creating new make-kont closure
void** clo9849 = alloc_kont(lam9469_spec, 3);

//setting env list
clo9849[1] = decode_clo_array[1];
clo9849[2] = decode_clo_array[2];
clo9849[3] = decode_clo_array[3];
void* f_lam_9258 = encode_clo(clo9849);



//if-clause
if(is_true(id_8981))
{
// kont-clo-app case
lam9469_spec(f_lam_9258, bool_f9530);
}
else
{
// kont-clo-app case
lam9469_spec(f_lam_9258, bool_t9527);
}

}

inline void lam9471_spec(void* env9472, void* id_8981) // lam9471 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9472);

//creating new make-kont closure
void** clo9850 = alloc_kont(lam9469_spec, 3);

//setting env list
clo9850[1] = decode_clo_array[1];
clo9850[2] = decode_clo_array[2];
clo9850[3] = decode_clo_array[3];
void* f_lam_9258 = encode_clo(clo9850);



//if-clause
if(is_true(id_8981))
{
// kont-clo-app case
lam9469_spec(f_lam_9258, bool_f9530);
}
else
{
// kont-clo-app case
lam9469_spec(f_lam_9258, bool_t9527);
}

}

inline void lam9473_fptr() // lam9473 -> generic version 
{
//reading env
void* const env9474 = arg_buffer[1];
//reading env and args
void* const id_8978 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9474);

//creating new make-kont closure
void** clo9851 = alloc_kont(lam9471_spec, 3);

//setting env list
clo9851[1] = decode_clo_array[1];
clo9851[2] = decode_clo_array[2];
clo9851[3] = decode_clo_array[3];
void* f_lam_9259 = encode_clo(clo9851);



//if-clause
if(is_true(id_8978))
{

//creating new make-kont closure
void** clo9852 = alloc_kont(lam9439_spec, 1);

//setting env list
clo9852[1] = f_lam_9259;
void* f_lam_9260 = encode_clo(clo9852);



//clo-app
odd_u63_spec(odd_u63, f_lam_9260, decode_clo_array[1]);
}
else
{
// kont-clo-app case
lam9471_spec(f_lam_9259, bool_f9530);
}

}

inline void lam9473_spec(void* env9474, void* id_8978) // lam9473 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9474);

//creating new make-kont closure
void** clo9853 = alloc_kont(lam9471_spec, 3);

//setting env list
clo9853[1] = decode_clo_array[1];
clo9853[2] = decode_clo_array[2];
clo9853[3] = decode_clo_array[3];
void* f_lam_9259 = encode_clo(clo9853);



//if-clause
if(is_true(id_8978))
{

//creating new make-kont closure
void** clo9854 = alloc_kont(lam9439_spec, 1);

//setting env list
clo9854[1] = f_lam_9259;
void* f_lam_9260 = encode_clo(clo9854);



//clo-app
odd_u63_spec(odd_u63, f_lam_9260, decode_clo_array[1]);
}
else
{
// kont-clo-app case
lam9471_spec(f_lam_9259, bool_f9530);
}

}

inline void make_u45maze_fptr() // make-maze -> generic version 
{
//reading env and args
void* const kont9243 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const m = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9855 = alloc_kont(lam9473_spec, 3);

//setting env list
clo9855[1] = m;
clo9855[2] = n;
clo9855[3] = kont9243;
void* f_lam_9261 = encode_clo(clo9855);



//clo-app
odd_u63_spec(odd_u63, f_lam_9261, n);
}

inline void make_u45maze_spec(void* _9475, void* kont9243, void* n, void* m) // make-maze 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9856 = alloc_kont(lam9473_spec, 3);

//setting env list
clo9856[1] = m;
clo9856[2] = n;
clo9856[3] = kont9243;
void* f_lam_9261 = encode_clo(clo9856);



//clo-app
odd_u63_spec(odd_u63, f_lam_9261, n);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont9262 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
make_u45maze_spec(make_u45maze, kont9262, int9534, int9534);
}

inline void brouhaha_main_spec(void* _9476, void* kont9262) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
make_u45maze_spec(make_u45maze, kont9262, int9534, int9534);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9532 = reinterpret_cast<void *>(encode_int(0));
int9509 = reinterpret_cast<void *>(encode_int(131072));
bool_t9527 = encode_bool(true);
int9525 = reinterpret_cast<void *>(encode_int(1));
bool_f9530 = encode_bool(false);
int9482 = reinterpret_cast<void *>(encode_int(2));
int9534 = reinterpret_cast<void *>(encode_int(149));
int9507 = reinterpret_cast<void *>(encode_int(3581));
int9508 = reinterpret_cast<void *>(encode_int(12751));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

