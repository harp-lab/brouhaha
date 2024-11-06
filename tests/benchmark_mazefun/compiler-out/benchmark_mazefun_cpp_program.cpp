#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9803;
void* int9780;
void* bool_t9798;
void* int9796;
void* bool_f9801;
void* int9757;
void* int9805;
void* int9778;
void* int9779;



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

void remainder_fptr(); // remainder
void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void pair_u63_fptr(); // pair?
void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam9283_fptr(); // lam9283
void lam9283_spec(void* env9284, void* id_8783); // lam9283
void* lam9283 = encode_clo(alloc_clo(lam9283_fptr, 0));

void even_u63_fptr(); // even?
void even_u63_spec(void* _9285, void* kont9025, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam9286_fptr(); // lam9286
void lam9286_spec(void* env9287, void* id_8786); // lam9286
void* lam9286 = encode_clo(alloc_clo(lam9286_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _9288, void* kont9027, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam9289_fptr(); // lam9289
void lam9289_spec(void* env9290, void* xy8789); // lam9289
void* lam9289 = encode_clo(alloc_clo(lam9289_fptr, 0));

void lam9291_fptr(); // lam9291
void lam9291_spec(void* env9292, void* id_8792); // lam9291
void* lam9291 = encode_clo(alloc_clo(lam9291_fptr, 0));

void lam9293_fptr(); // lam9293
void lam9293_spec(void* env9294, void* id_8790); // lam9293
void* lam9293 = encode_clo(alloc_clo(lam9293_fptr, 0));

void lam9295_fptr(); // lam9295
void lam9295_spec(void* env9296, void* id_8788); // lam9295
void* lam9295 = encode_clo(alloc_clo(lam9295_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _9297, void* kont9029, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam9298_fptr(); // lam9298
void lam9298_spec(void* env9299, void* xy8794); // lam9298
void* lam9298 = encode_clo(alloc_clo(lam9298_fptr, 0));

void lam9300_fptr(); // lam9300
void lam9300_spec(void* env9301, void* xy8795); // lam9300
void* lam9300 = encode_clo(alloc_clo(lam9300_fptr, 0));

void lam9302_fptr(); // lam9302
void lam9302_spec(void* env9303, void* id_8800); // lam9302
void* lam9302 = encode_clo(alloc_clo(lam9302_fptr, 0));

void lam9304_fptr(); // lam9304
void lam9304_spec(void* env9305, void* id_8799); // lam9304
void* lam9304 = encode_clo(alloc_clo(lam9304_fptr, 0));

void lam9306_fptr(); // lam9306
void lam9306_spec(void* env9307, void* id_8798); // lam9306
void* lam9306 = encode_clo(alloc_clo(lam9306_fptr, 0));

void lam9308_fptr(); // lam9308
void lam9308_spec(void* env9309, void* id_8796); // lam9308
void* lam9308 = encode_clo(alloc_clo(lam9308_fptr, 0));

void lam9310_fptr(); // lam9310
void lam9310_spec(void* env9311, void* id_8793); // lam9310
void* lam9310 = encode_clo(alloc_clo(lam9310_fptr, 0));

void member_fptr(); // member
void member_spec(void* _9312, void* kont9034, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam9313_fptr(); // lam9313
void lam9313_spec(void* env9314, void* id_8806); // lam9313
void* lam9313 = encode_clo(alloc_clo(lam9313_fptr, 0));

void lam9315_fptr(); // lam9315
void lam9315_spec(void* env9316, void* id_8804); // lam9315
void* lam9315 = encode_clo(alloc_clo(lam9315_fptr, 0));

void lam9317_fptr(); // lam9317
void lam9317_spec(void* env9318, void* id_8803); // lam9317
void* lam9317 = encode_clo(alloc_clo(lam9317_fptr, 0));

void lam9319_fptr(); // lam9319
void lam9319_spec(void* env9320, void* id_8801); // lam9319
void* lam9319 = encode_clo(alloc_clo(lam9319_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _9321, void* kont9042, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam9322_fptr(); // lam9322
void lam9322_spec(void* env9323, void* id_8811); // lam9322
void* lam9322 = encode_clo(alloc_clo(lam9322_fptr, 0));

void lam9324_fptr(); // lam9324
void lam9324_spec(void* env9325, void* id_8810); // lam9324
void* lam9324 = encode_clo(alloc_clo(lam9324_fptr, 0));

void lam9326_fptr(); // lam9326
void lam9326_spec(void* env9327, void* id_8807); // lam9326
void* lam9326 = encode_clo(alloc_clo(lam9326_fptr, 0));

void length_fptr(); // length
void length_spec(void* _9328, void* kont9047, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam9329_fptr(); // lam9329
void lam9329_spec(void* env9330, void* xy8813); // lam9329
void* lam9329 = encode_clo(alloc_clo(lam9329_fptr, 0));

void lam9331_fptr(); // lam9331
void lam9331_spec(void* env9332, void* id_8817); // lam9331
void* lam9331 = encode_clo(alloc_clo(lam9331_fptr, 0));

void lam9333_fptr(); // lam9333
void lam9333_spec(void* env9334, void* id_8816); // lam9333
void* lam9333 = encode_clo(alloc_clo(lam9333_fptr, 0));

void lam9335_fptr(); // lam9335
void lam9335_spec(void* env9336, void* id_8815); // lam9335
void* lam9335 = encode_clo(alloc_clo(lam9335_fptr, 0));

void lam9337_fptr(); // lam9337
void lam9337_spec(void* env9338, void* id_8814); // lam9337
void* lam9337 = encode_clo(alloc_clo(lam9337_fptr, 0));

void lam9339_fptr(); // lam9339
void lam9339_spec(void* env9340, void* id_8812); // lam9339
void* lam9339 = encode_clo(alloc_clo(lam9339_fptr, 0));

void map_fptr(); // map
void map_spec(void* _9341, void* kont9051, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam9342_fptr(); // lam9342
void lam9342_spec(void* env9343, void* xy8819); // lam9342
void* lam9342 = encode_clo(alloc_clo(lam9342_fptr, 0));

void lam9344_fptr(); // lam9344
void lam9344_spec(void* env9345, void* id_8824); // lam9344
void* lam9344 = encode_clo(alloc_clo(lam9344_fptr, 0));

void lam9346_fptr(); // lam9346
void lam9346_spec(void* env9347, void* id_8823); // lam9346
void* lam9346 = encode_clo(alloc_clo(lam9346_fptr, 0));

void lam9348_fptr(); // lam9348
void lam9348_spec(void* env9349, void* id_8822); // lam9348
void* lam9348 = encode_clo(alloc_clo(lam9348_fptr, 0));

void lam9350_fptr(); // lam9350
void lam9350_spec(void* env9351, void* id_8825); // lam9350
void* lam9350 = encode_clo(alloc_clo(lam9350_fptr, 0));

void lam9352_fptr(); // lam9352
void lam9352_spec(void* env9353, void* id_8821); // lam9352
void* lam9352 = encode_clo(alloc_clo(lam9352_fptr, 0));

void lam9354_fptr(); // lam9354
void lam9354_spec(void* env9355, void* id_8820); // lam9354
void* lam9354 = encode_clo(alloc_clo(lam9354_fptr, 0));

void lam9356_fptr(); // lam9356
void lam9356_spec(void* env9357, void* id_8818); // lam9356
void* lam9356 = encode_clo(alloc_clo(lam9356_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _9358, void* kont9058, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam9359_fptr(); // lam9359
void lam9359_spec(void* env9360, void* id_8829); // lam9359
void* lam9359 = encode_clo(alloc_clo(lam9359_fptr, 0));

void lam9361_fptr(); // lam9361
void lam9361_spec(void* env9362, void* id_8828); // lam9361
void* lam9361 = encode_clo(alloc_clo(lam9361_fptr, 0));

void lam9363_fptr(); // lam9363
void lam9363_spec(void* env9364, void* id_8827); // lam9363
void* lam9363 = encode_clo(alloc_clo(lam9363_fptr, 0));

void lam9365_fptr(); // lam9365
void lam9365_spec(void* env9366, void* id_8826); // lam9365
void* lam9365 = encode_clo(alloc_clo(lam9365_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _9367, void* kont9067, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9368_fptr(); // lam9368
void lam9368_spec(void* env9369, void* id_8833); // lam9368
void* lam9368 = encode_clo(alloc_clo(lam9368_fptr, 0));

void lam9370_fptr(); // lam9370
void lam9370_spec(void* env9371, void* id_8832); // lam9370
void* lam9370 = encode_clo(alloc_clo(lam9370_fptr, 0));

void lam9372_fptr(); // lam9372
void lam9372_spec(void* env9373, void* id_8831); // lam9372
void* lam9372 = encode_clo(alloc_clo(lam9372_fptr, 0));

void lam9374_fptr(); // lam9374
void lam9374_spec(void* env9375, void* id_8830); // lam9374
void* lam9374 = encode_clo(alloc_clo(lam9374_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _9376, void* kont9072, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam9377_fptr(); // lam9377
void lam9377_spec(void* env9378, void* id_8837); // lam9377
void* lam9377 = encode_clo(alloc_clo(lam9377_fptr, 0));

void lam9379_fptr(); // lam9379
void lam9379_spec(void* env9380, void* id_8836); // lam9379
void* lam9379 = encode_clo(alloc_clo(lam9379_fptr, 0));

void lam9381_fptr(); // lam9381
void lam9381_spec(void* env9382, void* id_8835); // lam9381
void* lam9381 = encode_clo(alloc_clo(lam9381_fptr, 0));

void lam9383_fptr(); // lam9383
void lam9383_spec(void* env9384, void* id_8834); // lam9383
void* lam9383 = encode_clo(alloc_clo(lam9383_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _9385, void* kont9077, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9386_fptr(); // lam9386
void lam9386_spec(void* env9387, void* xy8839); // lam9386
void* lam9386 = encode_clo(alloc_clo(lam9386_fptr, 0));

void lam9388_fptr(); // lam9388
void lam9388_spec(void* env9389, void* id_8842); // lam9388
void* lam9388 = encode_clo(alloc_clo(lam9388_fptr, 0));

void lam9390_fptr(); // lam9390
void lam9390_spec(void* env9391, void* id_8841); // lam9390
void* lam9390 = encode_clo(alloc_clo(lam9390_fptr, 0));

void lam9392_fptr(); // lam9392
void lam9392_spec(void* env9393, void* id_8840); // lam9392
void* lam9392 = encode_clo(alloc_clo(lam9392_fptr, 0));

void lam9394_fptr(); // lam9394
void lam9394_spec(void* env9395, void* id_8838); // lam9394
void* lam9394 = encode_clo(alloc_clo(lam9394_fptr, 0));

void lam9396_fptr(); // lam9396
void lam9396_spec(void* env9397, void* lsts); // lam9396
void* lam9396 = encode_clo(alloc_clo(lam9396_fptr, 0));

void lam9398_fptr(); // lam9398
void lam9398_spec(void* env9399, void* vargs8780); // lam9398
void* lam9398 = encode_clo(alloc_clo(lam9398_fptr, 0));

void lam9400_fptr(); // lam9400
void lam9400_spec(void* env9401, void* l2); // lam9400
void* lam9400 = encode_clo(alloc_clo(lam9400_fptr, 0));

void lam9402_fptr(); // lam9402
void lam9402_spec(void* env9403, void* vargs8779); // lam9402
void* lam9402 = encode_clo(alloc_clo(lam9402_fptr, 0));

void lam9404_fptr(); // lam9404
void lam9404_spec(void* env9405, void* l1); // lam9404
void* lam9404 = encode_clo(alloc_clo(lam9404_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9407_fptr(); // lam9407
void lam9407_spec(void* env9408, void* id_8845); // lam9407
void* lam9407 = encode_clo(alloc_clo(lam9407_fptr, 0));

void lam9409_fptr(); // lam9409
void lam9409_spec(void* env9410, void* id_8850); // lam9409
void* lam9409 = encode_clo(alloc_clo(lam9409_fptr, 0));

void lam9411_fptr(); // lam9411
void lam9411_spec(void* env9412, void* id_8849); // lam9411
void* lam9411 = encode_clo(alloc_clo(lam9411_fptr, 0));

void lam9413_fptr(); // lam9413
void lam9413_spec(void* env9414, void* id_8847); // lam9413
void* lam9413 = encode_clo(alloc_clo(lam9413_fptr, 0));

void lam9415_fptr(); // lam9415
void lam9415_spec(void* env9416, void* id_8846); // lam9415
void* lam9415 = encode_clo(alloc_clo(lam9415_fptr, 0));

void lam9417_fptr(); // lam9417
void lam9417_spec(void* env9418, void* id_8844); // lam9417
void* lam9417 = encode_clo(alloc_clo(lam9417_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _9419, void* kont9093, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam9420_fptr(); // lam9420
void lam9420_spec(void* env9421, void* xy8852); // lam9420
void* lam9420 = encode_clo(alloc_clo(lam9420_fptr, 0));

void lam9422_fptr(); // lam9422
void lam9422_spec(void* env9423, void* id_8857); // lam9422
void* lam9422 = encode_clo(alloc_clo(lam9422_fptr, 0));

void lam9424_fptr(); // lam9424
void lam9424_spec(void* env9425, void* id_8856); // lam9424
void* lam9424 = encode_clo(alloc_clo(lam9424_fptr, 0));

void lam9426_fptr(); // lam9426
void lam9426_spec(void* env9427, void* id_8855); // lam9426
void* lam9426 = encode_clo(alloc_clo(lam9426_fptr, 0));

void lam9428_fptr(); // lam9428
void lam9428_spec(void* env9429, void* id_8854); // lam9428
void* lam9428 = encode_clo(alloc_clo(lam9428_fptr, 0));

void lam9430_fptr(); // lam9430
void lam9430_spec(void* env9431, void* xy8858); // lam9430
void* lam9430 = encode_clo(alloc_clo(lam9430_fptr, 0));

void lam9432_fptr(); // lam9432
void lam9432_spec(void* env9433, void* id_8853); // lam9432
void* lam9432 = encode_clo(alloc_clo(lam9432_fptr, 0));

void lam9434_fptr(); // lam9434
void lam9434_spec(void* env9435, void* id_8851); // lam9434
void* lam9434 = encode_clo(alloc_clo(lam9434_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _9436, void* kont9100, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam9437_fptr(); // lam9437
void lam9437_spec(void* env9438, void* id_8862); // lam9437
void* lam9437 = encode_clo(alloc_clo(lam9437_fptr, 0));

void lam9439_fptr(); // lam9439
void lam9439_spec(void* env9440, void* id_8861); // lam9439
void* lam9439 = encode_clo(alloc_clo(lam9439_fptr, 0));

void lam9441_fptr(); // lam9441
void lam9441_spec(void* env9442, void* id_8860); // lam9441
void* lam9441 = encode_clo(alloc_clo(lam9441_fptr, 0));

void lam9443_fptr(); // lam9443
void lam9443_spec(void* env9444, void* id_8859); // lam9443
void* lam9443 = encode_clo(alloc_clo(lam9443_fptr, 0));

void my_u45foldr_u45aux_fptr(); // my-foldr-aux
void my_u45foldr_u45aux_spec(void* _9445, void* kont9109, void* lst, void* f, void* base); // my-foldr-aux
void* my_u45foldr_u45aux = encode_clo(alloc_clo(my_u45foldr_u45aux_fptr, 0));

void lam9446_fptr(); // lam9446
void lam9446_spec(void* env9447, void* xy8863); // lam9446
void* lam9446 = encode_clo(alloc_clo(lam9446_fptr, 0));

void my_u45foldr_fptr(); // my-foldr
void my_u45foldr_spec(void* _9448, void* kont9114, void* f, void* base, void* lst); // my-foldr
void* my_u45foldr = encode_clo(alloc_clo(my_u45foldr_fptr, 0));

void lam9449_fptr(); // lam9449
void lam9449_spec(void* env9450, void* id_8867); // lam9449
void* lam9449 = encode_clo(alloc_clo(lam9449_fptr, 0));

void lam9451_fptr(); // lam9451
void lam9451_spec(void* env9452, void* id_8866); // lam9451
void* lam9451 = encode_clo(alloc_clo(lam9451_fptr, 0));

void lam9453_fptr(); // lam9453
void lam9453_spec(void* env9454, void* id_8865); // lam9453
void* lam9453 = encode_clo(alloc_clo(lam9453_fptr, 0));

void lam9455_fptr(); // lam9455
void lam9455_spec(void* env9456, void* id_8864); // lam9455
void* lam9455 = encode_clo(alloc_clo(lam9455_fptr, 0));

void my_u45foldl_u45aux_fptr(); // my-foldl-aux
void my_u45foldl_u45aux_spec(void* _9457, void* kont9116, void* f, void* base, void* lst); // my-foldl-aux
void* my_u45foldl_u45aux = encode_clo(alloc_clo(my_u45foldl_u45aux_fptr, 0));

void lam9458_fptr(); // lam9458
void lam9458_spec(void* env9459, void* xy8868); // lam9458
void* lam9458 = encode_clo(alloc_clo(lam9458_fptr, 0));

void my_u45foldl_fptr(); // my-foldl
void my_u45foldl_spec(void* _9460, void* kont9121, void* f, void* base, void* lst); // my-foldl
void* my_u45foldl = encode_clo(alloc_clo(my_u45foldl_fptr, 0));

void lam9461_fptr(); // lam9461
void lam9461_spec(void* env9462, void* id_8873); // lam9461
void* lam9461 = encode_clo(alloc_clo(lam9461_fptr, 0));

void lam9463_fptr(); // lam9463
void lam9463_spec(void* env9464, void* id_8872); // lam9463
void* lam9463 = encode_clo(alloc_clo(lam9463_fptr, 0));

void lam9465_fptr(); // lam9465
void lam9465_spec(void* env9466, void* id_8870); // lam9465
void* lam9465 = encode_clo(alloc_clo(lam9465_fptr, 0));

void lam9467_fptr(); // lam9467
void lam9467_spec(void* env9468, void* xy8874); // lam9467
void* lam9467 = encode_clo(alloc_clo(lam9467_fptr, 0));

void lam9469_fptr(); // lam9469
void lam9469_spec(void* env9470, void* id_8869); // lam9469
void* lam9469 = encode_clo(alloc_clo(lam9469_fptr, 0));

void my_u45for_u45aux_fptr(); // my-for-aux
void my_u45for_u45aux_spec(void* _9471, void* kont9123, void* lo, void* hi, void* f); // my-for-aux
void* my_u45for_u45aux = encode_clo(alloc_clo(my_u45for_u45aux_fptr, 0));

void lam9472_fptr(); // lam9472
void lam9472_spec(void* env9473, void* xy8875); // lam9472
void* lam9472 = encode_clo(alloc_clo(lam9472_fptr, 0));

void my_u45for_fptr(); // my-for
void my_u45for_spec(void* _9474, void* kont9129, void* lo, void* hi, void* f); // my-for
void* my_u45for = encode_clo(alloc_clo(my_u45for_fptr, 0));

void lam9475_fptr(); // lam9475
void lam9475_spec(void* env9476, void* id_8876); // lam9475
void* lam9475 = encode_clo(alloc_clo(lam9475_fptr, 0));

void concat_fptr(); // concat
void concat_spec(void* _9477, void* kont9131, void* lists); // concat
void* concat = encode_clo(alloc_clo(concat_fptr, 0));

void lam9478_fptr(); // lam9478
void lam9478_spec(void* env9479, void* xy8879); // lam9478
void* lam9478 = encode_clo(alloc_clo(lam9478_fptr, 0));

void lam9480_fptr(); // lam9480
void lam9480_spec(void* env9481, void* id_8882); // lam9480
void* lam9480 = encode_clo(alloc_clo(lam9480_fptr, 0));

void lam9482_fptr(); // lam9482
void lam9482_spec(void* env9483, void* id_8880); // lam9482
void* lam9482 = encode_clo(alloc_clo(lam9482_fptr, 0));

void lam9484_fptr(); // lam9484
void lam9484_spec(void* env9485, void* id_8878); // lam9484
void* lam9484 = encode_clo(alloc_clo(lam9484_fptr, 0));

void list_u45read_fptr(); // list-read
void list_u45read_spec(void* _9486, void* kont9133, void* lst, void* i); // list-read
void* list_u45read = encode_clo(alloc_clo(list_u45read_fptr, 0));

void lam9487_fptr(); // lam9487
void lam9487_spec(void* env9488, void* id_8885); // lam9487
void* lam9487 = encode_clo(alloc_clo(lam9487_fptr, 0));

void lam9489_fptr(); // lam9489
void lam9489_spec(void* env9490, void* id_8890); // lam9489
void* lam9489 = encode_clo(alloc_clo(lam9489_fptr, 0));

void lam9491_fptr(); // lam9491
void lam9491_spec(void* env9492, void* id_8889); // lam9491
void* lam9491 = encode_clo(alloc_clo(lam9491_fptr, 0));

void lam9493_fptr(); // lam9493
void lam9493_spec(void* env9494, void* id_8887); // lam9493
void* lam9493 = encode_clo(alloc_clo(lam9493_fptr, 0));

void lam9495_fptr(); // lam9495
void lam9495_spec(void* env9496, void* id_8886); // lam9495
void* lam9495 = encode_clo(alloc_clo(lam9495_fptr, 0));

void lam9497_fptr(); // lam9497
void lam9497_spec(void* env9498, void* id_8884); // lam9497
void* lam9497 = encode_clo(alloc_clo(lam9497_fptr, 0));

void list_u45write_fptr(); // list-write
void list_u45write_spec(void* _9499, void* kont9138, void* lst, void* i, void* val); // list-write
void* list_u45write = encode_clo(alloc_clo(list_u45write_fptr, 0));

void lam9500_fptr(); // lam9500
void lam9500_spec(void* env9501, void* xy8893); // lam9500
void* lam9500 = encode_clo(alloc_clo(lam9500_fptr, 0));

void lam9502_fptr(); // lam9502
void lam9502_spec(void* env9503, void* id_8898); // lam9502
void* lam9502 = encode_clo(alloc_clo(lam9502_fptr, 0));

void lam9504_fptr(); // lam9504
void lam9504_spec(void* env9505, void* id_8897); // lam9504
void* lam9504 = encode_clo(alloc_clo(lam9504_fptr, 0));

void lam9506_fptr(); // lam9506
void lam9506_spec(void* env9507, void* id_8895); // lam9506
void* lam9506 = encode_clo(alloc_clo(lam9506_fptr, 0));

void lam9508_fptr(); // lam9508
void lam9508_spec(void* env9509, void* id_8894); // lam9508
void* lam9508 = encode_clo(alloc_clo(lam9508_fptr, 0));

void lam9510_fptr(); // lam9510
void lam9510_spec(void* env9511, void* id_8892); // lam9510
void* lam9510 = encode_clo(alloc_clo(lam9510_fptr, 0));

void list_u45remove_u45pos_fptr(); // list-remove-pos
void list_u45remove_u45pos_spec(void* _9512, void* kont9145, void* lst, void* i); // list-remove-pos
void* list_u45remove_u45pos = encode_clo(alloc_clo(list_u45remove_u45pos_fptr, 0));

void lam9513_fptr(); // lam9513
void lam9513_spec(void* env9514, void* id_8905); // lam9513
void* lam9513 = encode_clo(alloc_clo(lam9513_fptr, 0));

void lam9515_fptr(); // lam9515
void lam9515_spec(void* env9516, void* id_8904); // lam9515
void* lam9515 = encode_clo(alloc_clo(lam9515_fptr, 0));

void lam9517_fptr(); // lam9517
void lam9517_spec(void* env9518, void* id_8906); // lam9517
void* lam9517 = encode_clo(alloc_clo(lam9517_fptr, 0));

void lam9519_fptr(); // lam9519
void lam9519_spec(void* env9520, void* id_8903); // lam9519
void* lam9519 = encode_clo(alloc_clo(lam9519_fptr, 0));

void lam9521_fptr(); // lam9521
void lam9521_spec(void* env9522, void* id_8902); // lam9521
void* lam9521 = encode_clo(alloc_clo(lam9521_fptr, 0));

void lam9523_fptr(); // lam9523
void lam9523_spec(void* env9524, void* id_8901); // lam9523
void* lam9523 = encode_clo(alloc_clo(lam9523_fptr, 0));

void lam9525_fptr(); // lam9525
void lam9525_spec(void* env9526, void* id_8899); // lam9525
void* lam9525 = encode_clo(alloc_clo(lam9525_fptr, 0));

void duplicates_u63_fptr(); // duplicates?
void duplicates_u63_spec(void* _9527, void* kont9152, void* lst); // duplicates?
void* duplicates_u63 = encode_clo(alloc_clo(duplicates_u63_fptr, 0));

void lam9528_fptr(); // lam9528
void lam9528_spec(void* env9529, void* cont9162, void* j); // lam9528
void* lam9528 = encode_clo(alloc_clo(lam9528_fptr, 0));

void lam9530_fptr(); // lam9530
void lam9530_spec(void* env9531, void* cont9161, void* i); // lam9530
void* lam9530 = encode_clo(alloc_clo(lam9530_fptr, 0));

void make_u45matrix_fptr(); // make-matrix
void make_u45matrix_spec(void* _9532, void* kont9160, void* n, void* m, void* init); // make-matrix
void* make_u45matrix = encode_clo(alloc_clo(make_u45matrix_fptr, 0));

void lam9533_fptr(); // lam9533
void lam9533_spec(void* env9534, void* id_8911); // lam9533
void* lam9533 = encode_clo(alloc_clo(lam9533_fptr, 0));

void matrix_u45read_fptr(); // matrix-read
void matrix_u45read_spec(void* _9535, void* kont9163, void* mat, void* i, void* j); // matrix-read
void* matrix_u45read = encode_clo(alloc_clo(matrix_u45read_fptr, 0));

void lam9536_fptr(); // lam9536
void lam9536_spec(void* env9537, void* id_8913); // lam9536
void* lam9536 = encode_clo(alloc_clo(lam9536_fptr, 0));

void lam9538_fptr(); // lam9538
void lam9538_spec(void* env9539, void* id_8912); // lam9538
void* lam9538 = encode_clo(alloc_clo(lam9538_fptr, 0));

void matrix_u45write_fptr(); // matrix-write
void matrix_u45write_spec(void* _9540, void* kont9165, void* mat, void* i, void* j, void* val); // matrix-write
void* matrix_u45write = encode_clo(alloc_clo(matrix_u45write_fptr, 0));

void lam9541_fptr(); // lam9541
void lam9541_spec(void* env9542, void* id_8916); // lam9541
void* lam9541 = encode_clo(alloc_clo(lam9541_fptr, 0));

void lam9543_fptr(); // lam9543
void lam9543_spec(void* env9544, void* id_8915); // lam9543
void* lam9543 = encode_clo(alloc_clo(lam9543_fptr, 0));

void lam9545_fptr(); // lam9545
void lam9545_spec(void* env9546, void* id_8914); // lam9545
void* lam9545 = encode_clo(alloc_clo(lam9545_fptr, 0));

void matrix_u45size_fptr(); // matrix-size
void matrix_u45size_spec(void* _9547, void* kont9168, void* mat); // matrix-size
void* matrix_u45size = encode_clo(alloc_clo(matrix_u45size_fptr, 0));

void lam9548_fptr(); // lam9548
void lam9548_spec(void* env9549, void* cont9173, void* lst); // lam9548
void* lam9548 = encode_clo(alloc_clo(lam9548_fptr, 0));

void matrix_u45map_fptr(); // matrix-map
void matrix_u45map_spec(void* _9550, void* kont9172, void* f, void* mat); // matrix-map
void* matrix_u45map = encode_clo(alloc_clo(matrix_u45map_fptr, 0));

void initial_u45random_fptr(); // initial-random
void initial_u45random_spec(void* _9551, void* kont9174); // initial-random
void* initial_u45random = encode_clo(alloc_clo(initial_u45random_fptr, 0));

void lam9552_fptr(); // lam9552
void lam9552_spec(void* env9553, void* id_8922); // lam9552
void* lam9552 = encode_clo(alloc_clo(lam9552_fptr, 0));

void lam9554_fptr(); // lam9554
void lam9554_spec(void* env9555, void* id_8920); // lam9554
void* lam9554 = encode_clo(alloc_clo(lam9554_fptr, 0));

void next_u45random_fptr(); // next-random
void next_u45random_spec(void* _9556, void* kont9175, void* current_u45random); // next-random
void* next_u45random = encode_clo(alloc_clo(next_u45random_fptr, 0));

void lam9557_fptr(); // lam9557
void lam9557_spec(void* env9558, void* xy8925); // lam9557
void* lam9557 = encode_clo(alloc_clo(lam9557_fptr, 0));

void lam9559_fptr(); // lam9559
void lam9559_spec(void* env9560, void* id_8926); // lam9559
void* lam9559 = encode_clo(alloc_clo(lam9559_fptr, 0));

void lam9561_fptr(); // lam9561
void lam9561_spec(void* env9562, void* id_8929); // lam9561
void* lam9561 = encode_clo(alloc_clo(lam9561_fptr, 0));

void lam9563_fptr(); // lam9563
void lam9563_spec(void* env9564, void* id_8928); // lam9563
void* lam9563 = encode_clo(alloc_clo(lam9563_fptr, 0));

void lam9565_fptr(); // lam9565
void lam9565_spec(void* env9566, void* id_8927); // lam9565
void* lam9565 = encode_clo(alloc_clo(lam9565_fptr, 0));

void lam9567_fptr(); // lam9567
void lam9567_spec(void* env9568, void* i); // lam9567
void* lam9567 = encode_clo(alloc_clo(lam9567_fptr, 0));

void lam9569_fptr(); // lam9569
void lam9569_spec(void* env9570, void* new_u45random); // lam9569
void* lam9569 = encode_clo(alloc_clo(lam9569_fptr, 0));

void lam9571_fptr(); // lam9571
void lam9571_spec(void* env9572, void* id_8924); // lam9571
void* lam9571 = encode_clo(alloc_clo(lam9571_fptr, 0));

void shuffle_u45aux_fptr(); // shuffle-aux
void shuffle_u45aux_spec(void* _9573, void* kont9178, void* lst, void* current_u45random); // shuffle-aux
void* shuffle_u45aux = encode_clo(alloc_clo(shuffle_u45aux_fptr, 0));

void lam9574_fptr(); // lam9574
void lam9574_spec(void* env9575, void* id_8930); // lam9574
void* lam9574 = encode_clo(alloc_clo(lam9574_fptr, 0));

void shuffle_fptr(); // shuffle
void shuffle_spec(void* _9576, void* kont9187, void* lst); // shuffle
void* shuffle = encode_clo(alloc_clo(shuffle_fptr, 0));

void lam9577_fptr(); // lam9577
void lam9577_spec(void* env9578, void* cont9190, void* x); // lam9577
void* lam9577 = encode_clo(alloc_clo(lam9577_fptr, 0));

void cave_u45to_u45maze_fptr(); // cave-to-maze
void cave_u45to_u45maze_spec(void* _9579, void* kont9189, void* cave); // cave-to-maze
void* cave_u45to_u45maze = encode_clo(alloc_clo(cave_u45to_u45maze_fptr, 0));

void lam9580_fptr(); // lam9580
void lam9580_spec(void* env9581, void* id_8937); // lam9580
void* lam9580 = encode_clo(alloc_clo(lam9580_fptr, 0));

void lam9582_fptr(); // lam9582
void lam9582_spec(void* env9583, void* id_8942); // lam9582
void* lam9582 = encode_clo(alloc_clo(lam9582_fptr, 0));

void lam9584_fptr(); // lam9584
void lam9584_spec(void* env9585, void* id_8941); // lam9584
void* lam9584 = encode_clo(alloc_clo(lam9584_fptr, 0));

void lam9586_fptr(); // lam9586
void lam9586_spec(void* env9587, void* xy8943); // lam9586
void* lam9586 = encode_clo(alloc_clo(lam9586_fptr, 0));

void lam9588_fptr(); // lam9588
void lam9588_spec(void* env9589, void* id_8949); // lam9588
void* lam9588 = encode_clo(alloc_clo(lam9588_fptr, 0));

void lam9590_fptr(); // lam9590
void lam9590_spec(void* env9591, void* id_8954); // lam9590
void* lam9590 = encode_clo(alloc_clo(lam9590_fptr, 0));

void lam9592_fptr(); // lam9592
void lam9592_spec(void* env9593, void* id_8953); // lam9592
void* lam9592 = encode_clo(alloc_clo(lam9592_fptr, 0));

void lam9594_fptr(); // lam9594
void lam9594_spec(void* env9595, void* xy8955); // lam9594
void* lam9594 = encode_clo(alloc_clo(lam9594_fptr, 0));

void lam9596_fptr(); // lam9596
void lam9596_spec(void* env9597, void* id_8960); // lam9596
void* lam9596 = encode_clo(alloc_clo(lam9596_fptr, 0));

void lam9598_fptr(); // lam9598
void lam9598_spec(void* env9599, void* id_8965); // lam9598
void* lam9598 = encode_clo(alloc_clo(lam9598_fptr, 0));

void lam9600_fptr(); // lam9600
void lam9600_spec(void* env9601, void* id_8964); // lam9600
void* lam9600 = encode_clo(alloc_clo(lam9600_fptr, 0));

void lam9602_fptr(); // lam9602
void lam9602_spec(void* env9603, void* xy8966); // lam9602
void* lam9602 = encode_clo(alloc_clo(lam9602_fptr, 0));

void lam9604_fptr(); // lam9604
void lam9604_spec(void* env9605, void* id_8972); // lam9604
void* lam9604 = encode_clo(alloc_clo(lam9604_fptr, 0));

void lam9606_fptr(); // lam9606
void lam9606_spec(void* env9607, void* id_8977); // lam9606
void* lam9606 = encode_clo(alloc_clo(lam9606_fptr, 0));

void lam9608_fptr(); // lam9608
void lam9608_spec(void* env9609, void* id_8976); // lam9608
void* lam9608 = encode_clo(alloc_clo(lam9608_fptr, 0));

void lam9610_fptr(); // lam9610
void lam9610_spec(void* env9611, void* xy8978); // lam9610
void* lam9610 = encode_clo(alloc_clo(lam9610_fptr, 0));

void lam9612_fptr(); // lam9612
void lam9612_spec(void* env9613, void* id_8979); // lam9612
void* lam9612 = encode_clo(alloc_clo(lam9612_fptr, 0));

void lam9614_fptr(); // lam9614
void lam9614_spec(void* env9615, void* id_8974); // lam9614
void* lam9614 = encode_clo(alloc_clo(lam9614_fptr, 0));

void lam9616_fptr(); // lam9616
void lam9616_spec(void* env9617, void* id_8970); // lam9616
void* lam9616 = encode_clo(alloc_clo(lam9616_fptr, 0));

void lam9618_fptr(); // lam9618
void lam9618_spec(void* env9619, void* id_8969); // lam9618
void* lam9618 = encode_clo(alloc_clo(lam9618_fptr, 0));

void lam9620_fptr(); // lam9620
void lam9620_spec(void* env9621, void* id_8967); // lam9620
void* lam9620 = encode_clo(alloc_clo(lam9620_fptr, 0));

void lam9622_fptr(); // lam9622
void lam9622_spec(void* env9623, void* id_8962); // lam9622
void* lam9622 = encode_clo(alloc_clo(lam9622_fptr, 0));

void lam9624_fptr(); // lam9624
void lam9624_spec(void* env9625, void* id_8958); // lam9624
void* lam9624 = encode_clo(alloc_clo(lam9624_fptr, 0));

void lam9626_fptr(); // lam9626
void lam9626_spec(void* env9627, void* id_8956); // lam9626
void* lam9626 = encode_clo(alloc_clo(lam9626_fptr, 0));

void lam9628_fptr(); // lam9628
void lam9628_spec(void* env9629, void* id_8951); // lam9628
void* lam9628 = encode_clo(alloc_clo(lam9628_fptr, 0));

void lam9630_fptr(); // lam9630
void lam9630_spec(void* env9631, void* id_8947); // lam9630
void* lam9630 = encode_clo(alloc_clo(lam9630_fptr, 0));

void lam9632_fptr(); // lam9632
void lam9632_spec(void* env9633, void* id_8946); // lam9632
void* lam9632 = encode_clo(alloc_clo(lam9632_fptr, 0));

void lam9634_fptr(); // lam9634
void lam9634_spec(void* env9635, void* id_8944); // lam9634
void* lam9634 = encode_clo(alloc_clo(lam9634_fptr, 0));

void lam9636_fptr(); // lam9636
void lam9636_spec(void* env9637, void* id_8939); // lam9636
void* lam9636 = encode_clo(alloc_clo(lam9636_fptr, 0));

void lam9638_fptr(); // lam9638
void lam9638_spec(void* env9639, void* id_8935); // lam9638
void* lam9638 = encode_clo(alloc_clo(lam9638_fptr, 0));

void lam9640_fptr(); // lam9640
void lam9640_spec(void* env9641, void* j); // lam9640
void* lam9640 = encode_clo(alloc_clo(lam9640_fptr, 0));

void lam9642_fptr(); // lam9642
void lam9642_spec(void* env9643, void* i); // lam9642
void* lam9642 = encode_clo(alloc_clo(lam9642_fptr, 0));

void lam9644_fptr(); // lam9644
void lam9644_spec(void* env9645, void* m); // lam9644
void* lam9644 = encode_clo(alloc_clo(lam9644_fptr, 0));

void lam9646_fptr(); // lam9646
void lam9646_spec(void* env9647, void* n); // lam9646
void* lam9646 = encode_clo(alloc_clo(lam9646_fptr, 0));

void lam9648_fptr(); // lam9648
void lam9648_spec(void* env9649, void* size); // lam9648
void* lam9648 = encode_clo(alloc_clo(lam9648_fptr, 0));

void neighboring_u45cavities_fptr(); // neighboring-cavities
void neighboring_u45cavities_spec(void* _9650, void* kont9191, void* pos, void* cave); // neighboring-cavities
void* neighboring_u45cavities = encode_clo(alloc_clo(neighboring_u45cavities_fptr, 0));

void lam9651_fptr(); // lam9651
void lam9651_spec(void* env9652, void* id_8983); // lam9651
void* lam9651 = encode_clo(alloc_clo(lam9651_fptr, 0));

void lam9653_fptr(); // lam9653
void lam9653_spec(void* env9654, void* id_8982); // lam9653
void* lam9653 = encode_clo(alloc_clo(lam9653_fptr, 0));

void lam9655_fptr(); // lam9655
void lam9655_spec(void* env9656, void* cont9228, void* c, void* nc); // lam9655
void* lam9655 = encode_clo(alloc_clo(lam9655_fptr, 0));

void lam9657_fptr(); // lam9657
void lam9657_spec(void* env9658, void* id_8980); // lam9657
void* lam9657 = encode_clo(alloc_clo(lam9657_fptr, 0));

void lam9659_fptr(); // lam9659
void lam9659_spec(void* env9660, void* cavity_u45id); // lam9659
void* lam9659 = encode_clo(alloc_clo(lam9659_fptr, 0));

void lam9661_fptr(); // lam9661
void lam9661_spec(void* env9662, void* j); // lam9661
void* lam9661 = encode_clo(alloc_clo(lam9661_fptr, 0));

void lam9663_fptr(); // lam9663
void lam9663_spec(void* env9664, void* i); // lam9663
void* lam9663 = encode_clo(alloc_clo(lam9663_fptr, 0));

void change_u45cavity_u45aux_fptr(); // change-cavity-aux
void change_u45cavity_u45aux_spec(void* _9665, void* kont9227, void* cave, void* pos, void* new_u45cavity_u45id, void* old_u45cavity_u45id); // change-cavity-aux
void* change_u45cavity_u45aux = encode_clo(alloc_clo(change_u45cavity_u45aux_fptr, 0));

void lam9666_fptr(); // lam9666
void lam9666_spec(void* env9667, void* id_8984); // lam9666
void* lam9666 = encode_clo(alloc_clo(lam9666_fptr, 0));

void lam9668_fptr(); // lam9668
void lam9668_spec(void* env9669, void* j); // lam9668
void* lam9668 = encode_clo(alloc_clo(lam9668_fptr, 0));

void lam9670_fptr(); // lam9670
void lam9670_spec(void* env9671, void* i); // lam9670
void* lam9670 = encode_clo(alloc_clo(lam9670_fptr, 0));

void change_u45cavity_fptr(); // change-cavity
void change_u45cavity_spec(void* _9672, void* kont9235, void* cave, void* pos, void* new_u45cavity_u45id); // change-cavity
void* change_u45cavity = encode_clo(alloc_clo(change_u45cavity_fptr, 0));

void lam9673_fptr(); // lam9673
void lam9673_spec(void* env9674, void* j); // lam9673
void* lam9673 = encode_clo(alloc_clo(lam9673_fptr, 0));

void lam9675_fptr(); // lam9675
void lam9675_spec(void* env9676, void* i); // lam9675
void* lam9675 = encode_clo(alloc_clo(lam9675_fptr, 0));

void pierce_fptr(); // pierce
void pierce_spec(void* _9677, void* kont9239, void* pos, void* cave); // pierce
void* pierce = encode_clo(alloc_clo(pierce_fptr, 0));

void lam9678_fptr(); // lam9678
void lam9678_spec(void* env9679, void* id_8991); // lam9678
void* lam9678 = encode_clo(alloc_clo(lam9678_fptr, 0));

void lam9680_fptr(); // lam9680
void lam9680_spec(void* env9681, void* cont9246, void* c, void* nc); // lam9680
void* lam9680 = encode_clo(alloc_clo(lam9680_fptr, 0));

void lam9682_fptr(); // lam9682
void lam9682_spec(void* env9683, void* id_8989); // lam9682
void* lam9682 = encode_clo(alloc_clo(lam9682_fptr, 0));

void lam9684_fptr(); // lam9684
void lam9684_spec(void* env9685, void* id_8988); // lam9684
void* lam9684 = encode_clo(alloc_clo(lam9684_fptr, 0));

void lam9686_fptr(); // lam9686
void lam9686_spec(void* env9687, void* id_8986); // lam9686
void* lam9686 = encode_clo(alloc_clo(lam9686_fptr, 0));

void lam9688_fptr(); // lam9688
void lam9688_spec(void* env9689, void* id_8985); // lam9688
void* lam9688 = encode_clo(alloc_clo(lam9688_fptr, 0));

void lam9690_fptr(); // lam9690
void lam9690_spec(void* env9691, void* cont9243, void* nc); // lam9690
void* lam9690 = encode_clo(alloc_clo(lam9690_fptr, 0));

void lam9692_fptr(); // lam9692
void lam9692_spec(void* env9693, void* ncs); // lam9692
void* lam9692 = encode_clo(alloc_clo(lam9692_fptr, 0));

void lam9694_fptr(); // lam9694
void lam9694_spec(void* env9695, void* j); // lam9694
void* lam9694 = encode_clo(alloc_clo(lam9694_fptr, 0));

void lam9696_fptr(); // lam9696
void lam9696_spec(void* env9697, void* i); // lam9696
void* lam9696 = encode_clo(alloc_clo(lam9696_fptr, 0));

void try_u45to_u45pierce_fptr(); // try-to-pierce
void try_u45to_u45pierce_spec(void* _9698, void* kont9242, void* pos, void* cave); // try-to-pierce
void* try_u45to_u45pierce = encode_clo(alloc_clo(try_u45to_u45pierce_fptr, 0));

void lam9699_fptr(); // lam9699
void lam9699_spec(void* env9700, void* id_8994); // lam9699
void* lam9699 = encode_clo(alloc_clo(lam9699_fptr, 0));

void lam9701_fptr(); // lam9701
void lam9701_spec(void* env9702, void* id_8993); // lam9701
void* lam9701 = encode_clo(alloc_clo(lam9701_fptr, 0));

void lam9703_fptr(); // lam9703
void lam9703_spec(void* env9704, void* hole); // lam9703
void* lam9703 = encode_clo(alloc_clo(lam9703_fptr, 0));

void lam9705_fptr(); // lam9705
void lam9705_spec(void* env9706, void* id_8992); // lam9705
void* lam9705 = encode_clo(alloc_clo(lam9705_fptr, 0));

void pierce_u45randomly_fptr(); // pierce-randomly
void pierce_u45randomly_spec(void* _9707, void* kont9253, void* possible_u45holes, void* cave); // pierce-randomly
void* pierce_u45randomly = encode_clo(alloc_clo(pierce_u45randomly_fptr, 0));

void lam9708_fptr(); // lam9708
void lam9708_spec(void* env9709, void* xy8996); // lam9708
void* lam9708 = encode_clo(alloc_clo(lam9708_fptr, 0));

void lam9710_fptr(); // lam9710
void lam9710_spec(void* env9711, void* xy9004); // lam9710
void* lam9710 = encode_clo(alloc_clo(lam9710_fptr, 0));

void lam9712_fptr(); // lam9712
void lam9712_spec(void* env9713, void* xy9007); // lam9712
void* lam9712 = encode_clo(alloc_clo(lam9712_fptr, 0));

void lam9714_fptr(); // lam9714
void lam9714_spec(void* env9715, void* id_9006); // lam9714
void* lam9714 = encode_clo(alloc_clo(lam9714_fptr, 0));

void lam9716_fptr(); // lam9716
void lam9716_spec(void* env9717, void* id_9003); // lam9716
void* lam9716 = encode_clo(alloc_clo(lam9716_fptr, 0));

void lam9718_fptr(); // lam9718
void lam9718_spec(void* env9719, void* cont9272, void* i, void* j); // lam9718
void* lam9718 = encode_clo(alloc_clo(lam9718_fptr, 0));

void lam9720_fptr(); // lam9720
void lam9720_spec(void* env9721, void* id_9020); // lam9720
void* lam9720 = encode_clo(alloc_clo(lam9720_fptr, 0));

void lam9722_fptr(); // lam9722
void lam9722_spec(void* env9723, void* id_9018); // lam9722
void* lam9722 = encode_clo(alloc_clo(lam9722_fptr, 0));

void lam9724_fptr(); // lam9724
void lam9724_spec(void* env9725, void* xy9015); // lam9724
void* lam9724 = encode_clo(alloc_clo(lam9724_fptr, 0));

void lam9726_fptr(); // lam9726
void lam9726_spec(void* env9727, void* id_9016); // lam9726
void* lam9726 = encode_clo(alloc_clo(lam9726_fptr, 0));

void lam9728_fptr(); // lam9728
void lam9728_spec(void* env9729, void* id_9014); // lam9728
void* lam9728 = encode_clo(alloc_clo(lam9728_fptr, 0));

void lam9730_fptr(); // lam9730
void lam9730_spec(void* env9731, void* id_9013); // lam9730
void* lam9730 = encode_clo(alloc_clo(lam9730_fptr, 0));

void lam9732_fptr(); // lam9732
void lam9732_spec(void* env9733, void* id_9012); // lam9732
void* lam9732 = encode_clo(alloc_clo(lam9732_fptr, 0));

void lam9734_fptr(); // lam9734
void lam9734_spec(void* env9735, void* cont9263, void* j); // lam9734
void* lam9734 = encode_clo(alloc_clo(lam9734_fptr, 0));

void lam9736_fptr(); // lam9736
void lam9736_spec(void* env9737, void* cont9262, void* i); // lam9736
void* lam9736 = encode_clo(alloc_clo(lam9736_fptr, 0));

void lam9738_fptr(); // lam9738
void lam9738_spec(void* env9739, void* id_9022); // lam9738
void* lam9738 = encode_clo(alloc_clo(lam9738_fptr, 0));

void lam9740_fptr(); // lam9740
void lam9740_spec(void* env9741, void* id_9021); // lam9740
void* lam9740 = encode_clo(alloc_clo(lam9740_fptr, 0));

void lam9742_fptr(); // lam9742
void lam9742_spec(void* env9743, void* possible_u45holes); // lam9742
void* lam9742 = encode_clo(alloc_clo(lam9742_fptr, 0));

void lam9744_fptr(); // lam9744
void lam9744_spec(void* env9745, void* cave); // lam9744
void* lam9744 = encode_clo(alloc_clo(lam9744_fptr, 0));

void lam9746_fptr(); // lam9746
void lam9746_spec(void* env9747, void* id_9001); // lam9746
void* lam9746 = encode_clo(alloc_clo(lam9746_fptr, 0));

void lam9748_fptr(); // lam9748
void lam9748_spec(void* env9749, void* id_8998); // lam9748
void* lam9748 = encode_clo(alloc_clo(lam9748_fptr, 0));

void lam9750_fptr(); // lam9750
void lam9750_spec(void* env9751, void* id_8995); // lam9750
void* lam9750 = encode_clo(alloc_clo(lam9750_fptr, 0));

void make_u45maze_fptr(); // make-maze
void make_u45maze_spec(void* _9752, void* kont9258, void* n, void* m); // make-maze
void* make_u45maze = encode_clo(alloc_clo(make_u45maze_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9753, void* kont9281); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
std::cout<<"In _u43_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9806 = prim_car(lst);
void* const lst9808 = prim_cdr(lst);
void* const x9807 = apply_prim__u43(lst9808);
arg_buffer[1] = kont9806;
arg_buffer[2] = x9807;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9806))[0])();
}
else
{
void* const kont9806 = arg_buffer[2];
void* const x9807 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9806))[0])(kont9806, x9807);
}

}

inline void _u45_fptr() // - 
{
std::cout<<"In _u45_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9809 = prim_car(lst);
void* const lst9811 = prim_cdr(lst);
void* const x9810 = apply_prim__u45(lst9811);
arg_buffer[1] = kont9809;
arg_buffer[2] = x9810;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9809))[0])();
}
else
{
void* const kont9809 = arg_buffer[2];
void* const x9810 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9809))[0])(kont9809, x9810);
}

}

inline void _u42_fptr() // * 
{
std::cout<<"In _u42_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9812 = prim_car(lst);
void* const lst9814 = prim_cdr(lst);
void* const x9813 = apply_prim__u42(lst9814);
arg_buffer[1] = kont9812;
arg_buffer[2] = x9813;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9812))[0])();
}
else
{
void* const kont9812 = arg_buffer[2];
void* const x9813 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9812))[0])(kont9812, x9813);
}

}

inline void _u47_fptr() // / 
{
std::cout<<"In _u47_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9815 = prim_car(lst);
void* const lst9817 = prim_cdr(lst);
void* const x9816 = apply_prim__u47(lst9817);
arg_buffer[1] = kont9815;
arg_buffer[2] = x9816;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9815))[0])();
}
else
{
void* const kont9815 = arg_buffer[2];
void* const x9816 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9815))[0])(kont9815, x9816);
}

}

inline void _u61_fptr() // = 
{
std::cout<<"In _u61_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9818 = prim_car(lst);
void* const lst9820 = prim_cdr(lst);
void* const x9819 = apply_prim__u61(lst9820);
arg_buffer[1] = kont9818;
arg_buffer[2] = x9819;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9818))[0])();
}
else
{
void* const kont9818 = arg_buffer[2];
void* const x9819 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9818))[0])(kont9818, x9819);
}

}

inline void _u62_fptr() // > 
{
std::cout<<"In _u62_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9821 = prim_car(lst);
void* const lst9823 = prim_cdr(lst);
void* const x9822 = apply_prim__u62(lst9823);
arg_buffer[1] = kont9821;
arg_buffer[2] = x9822;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9821))[0])();
}
else
{
void* const kont9821 = arg_buffer[2];
void* const x9822 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9821))[0])(kont9821, x9822);
}

}

inline void _u60_fptr() // < 
{
std::cout<<"In _u60_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9824 = prim_car(lst);
void* const lst9826 = prim_cdr(lst);
void* const x9825 = apply_prim__u60(lst9826);
arg_buffer[1] = kont9824;
arg_buffer[2] = x9825;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9824))[0])();
}
else
{
void* const kont9824 = arg_buffer[2];
void* const x9825 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9824))[0])(kont9824, x9825);
}

}

inline void _u60_u61_fptr() // <= 
{
std::cout<<"In _u60_u61_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9827 = prim_car(lst);
void* const lst9829 = prim_cdr(lst);
void* const x9828 = apply_prim__u60_u61(lst9829);
arg_buffer[1] = kont9827;
arg_buffer[2] = x9828;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9827))[0])();
}
else
{
void* const kont9827 = arg_buffer[2];
void* const x9828 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9827))[0])(kont9827, x9828);
}

}

inline void _u62_u61_fptr() // >= 
{
std::cout<<"In _u62_u61_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9830 = prim_car(lst);
void* const lst9832 = prim_cdr(lst);
void* const x9831 = apply_prim__u62_u61(lst9832);
arg_buffer[1] = kont9830;
arg_buffer[2] = x9831;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9830))[0])();
}
else
{
void* const kont9830 = arg_buffer[2];
void* const x9831 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9830))[0])(kont9830, x9831);
}

}

inline void modulo_fptr() // modulo 
{
std::cout<<"In modulo_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9833 = prim_car(lst);
void* const lst9835 = prim_cdr(lst);
void* const x9834 = apply_prim_modulo(lst9835);
arg_buffer[1] = kont9833;
arg_buffer[2] = x9834;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9833))[0])();
}
else
{
void* const kont9833 = arg_buffer[2];
void* const x9834 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9833))[0])(kont9833, x9834);
}

}

inline void null_u63_fptr() // null? 
{
std::cout<<"In null_u63_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9836 = prim_car(lst);
void* const lst9838 = prim_cdr(lst);
void* const x9837 = apply_prim_null_u63(lst9838);
arg_buffer[1] = kont9836;
arg_buffer[2] = x9837;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9836))[0])();
}
else
{
void* const kont9836 = arg_buffer[2];
void* const x9837 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9836))[0])(kont9836, x9837);
}

}

inline void equal_u63_fptr() // equal? 
{
std::cout<<"In equal_u63_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9839 = prim_car(lst);
void* const lst9841 = prim_cdr(lst);
void* const x9840 = apply_prim_equal_u63(lst9841);
arg_buffer[1] = kont9839;
arg_buffer[2] = x9840;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9839))[0])();
}
else
{
void* const kont9839 = arg_buffer[2];
void* const x9840 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9839))[0])(kont9839, x9840);
}

}

inline void eq_u63_fptr() // eq? 
{
std::cout<<"In eq_u63_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9842 = prim_car(lst);
void* const lst9844 = prim_cdr(lst);
void* const x9843 = apply_prim_eq_u63(lst9844);
arg_buffer[1] = kont9842;
arg_buffer[2] = x9843;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9842))[0])();
}
else
{
void* const kont9842 = arg_buffer[2];
void* const x9843 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9842))[0])(kont9842, x9843);
}

}

inline void cons_fptr() // cons 
{
std::cout<<"In cons_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9845 = prim_car(lst);
void* const lst9847 = prim_cdr(lst);
void* const x9846 = apply_prim_cons(lst9847);
arg_buffer[1] = kont9845;
arg_buffer[2] = x9846;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9845))[0])();
}
else
{
void* const kont9845 = arg_buffer[2];
void* const x9846 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9845))[0])(kont9845, x9846);
}

}

inline void car_fptr() // car 
{
std::cout<<"In car_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9848 = prim_car(lst);
void* const lst9850 = prim_cdr(lst);
void* const x9849 = apply_prim_car(lst9850);
arg_buffer[1] = kont9848;
arg_buffer[2] = x9849;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9848))[0])();
}
else
{
void* const kont9848 = arg_buffer[2];
void* const x9849 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9848))[0])(kont9848, x9849);
}

}

inline void cdr_fptr() // cdr 
{
std::cout<<"In cdr_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9851 = prim_car(lst);
void* const lst9853 = prim_cdr(lst);
void* const x9852 = apply_prim_cdr(lst9853);
arg_buffer[1] = kont9851;
arg_buffer[2] = x9852;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9851))[0])();
}
else
{
void* const kont9851 = arg_buffer[2];
void* const x9852 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9851))[0])(kont9851, x9852);
}

}

inline void remainder_fptr() // remainder 
{
std::cout<<"In remainder_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9854 = prim_car(lst);
void* const lst9856 = prim_cdr(lst);
void* const x9855 = apply_prim_remainder(lst9856);
arg_buffer[1] = kont9854;
arg_buffer[2] = x9855;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9854))[0])();
}
else
{
void* const kont9854 = arg_buffer[2];
void* const x9855 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9854))[0])(kont9854, x9855);
}

}

inline void pair_u63_fptr() // pair? 
{
std::cout<<"In pair_u63_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9857 = prim_car(lst);
void* const lst9859 = prim_cdr(lst);
void* const x9858 = apply_prim_pair_u63(lst9859);
arg_buffer[1] = kont9857;
arg_buffer[2] = x9858;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9857))[0])();
}
else
{
void* const kont9857 = arg_buffer[2];
void* const x9858 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9857))[0])(kont9857, x9858);
}

}

inline void list_fptr() // list 
{
std::cout<<"In list_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9860 = prim_car(lst);
void* const lst9862 = prim_cdr(lst);
void* const x9861 = apply_prim_list(lst9862);
arg_buffer[1] = kont9860;
arg_buffer[2] = x9861;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9860))[0])();
}
else
{
void* const kont9860 = arg_buffer[2];
void* const x9861 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9860))[0])(kont9860, x9861);
}

}

inline void lam9283_fptr() // lam9283 -> generic version 
{
std::cout<<"In lam9283_fptr: generic version"<<std::endl;
//reading env
void* const env9284 = arg_buffer[1];
//reading env and args
void* const id_8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9284);

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8783;
numArgs = 4;
equal_u63_fptr();
}

inline void lam9283_spec(void* env9284, void* id_8783) // lam9283 
{
std::cout<<"In lam9283_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9284);

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8783;
numArgs = 4;
equal_u63_fptr();
}

inline void even_u63_fptr() // even? -> generic version 
{
std::cout<<"In even_u63_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9025 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9863 = alloc_kont(lam9283_spec, 2);

//setting env list
clo9863[1] = kont9025;
clo9863[2] = int9803;
void* f_lam_9026 = encode_clo(clo9863);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_9026;
arg_buffer[3] = x;
arg_buffer[4] = int9757;
numArgs = 4;
modulo_fptr();
}

inline void even_u63_spec(void* _9285, void* kont9025, void* x) // even? 
{
std::cout<<"In even_u63_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9864 = alloc_kont(lam9283_spec, 2);

//setting env list
clo9864[1] = kont9025;
clo9864[2] = int9803;
void* f_lam_9026 = encode_clo(clo9864);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_9026;
arg_buffer[3] = x;
arg_buffer[4] = int9757;
numArgs = 4;
modulo_fptr();
}

inline void lam9286_fptr() // lam9286 -> generic version 
{
std::cout<<"In lam9286_fptr: generic version"<<std::endl;
//reading env
void* const env9287 = arg_buffer[1];
//reading env and args
void* const id_8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9287);

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8786;
numArgs = 4;
equal_u63_fptr();
}

inline void lam9286_spec(void* env9287, void* id_8786) // lam9286 
{
std::cout<<"In lam9286_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9287);

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8786;
numArgs = 4;
equal_u63_fptr();
}

inline void odd_u63_fptr() // odd? -> generic version 
{
std::cout<<"In odd_u63_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9027 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9865 = alloc_kont(lam9286_spec, 2);

//setting env list
clo9865[1] = kont9027;
clo9865[2] = int9796;
void* f_lam_9028 = encode_clo(clo9865);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_9028;
arg_buffer[3] = x;
arg_buffer[4] = int9757;
numArgs = 4;
modulo_fptr();
}

inline void odd_u63_spec(void* _9288, void* kont9027, void* x) // odd? 
{
std::cout<<"In odd_u63_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9866 = alloc_kont(lam9286_spec, 2);

//setting env list
clo9866[1] = kont9027;
clo9866[2] = int9796;
void* f_lam_9028 = encode_clo(clo9866);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_9028;
arg_buffer[3] = x;
arg_buffer[4] = int9757;
numArgs = 4;
modulo_fptr();
}

inline void lam9289_fptr() // lam9289 -> generic version 
{
std::cout<<"In lam9289_fptr: generic version"<<std::endl;
//reading env
void* const env9290 = arg_buffer[1];
//reading env and args
void* const xy8789 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9290);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8789);
}

inline void lam9289_spec(void* env9290, void* xy8789) // lam9289 
{
std::cout<<"In lam9289_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9290);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8789);
}

inline void lam9291_fptr() // lam9291 -> generic version 
{
std::cout<<"In lam9291_fptr: generic version"<<std::endl;
//reading env
void* const env9292 = arg_buffer[1];
//reading env and args
void* const id_8792 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9292);

//clo-app
list_u45ref_spec(list_u45ref, decode_clo_array[2], decode_clo_array[1], id_8792);
}

inline void lam9291_spec(void* env9292, void* id_8792) // lam9291 
{
std::cout<<"In lam9291_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9292);

//clo-app
list_u45ref_spec(list_u45ref, decode_clo_array[2], decode_clo_array[1], id_8792);
}

inline void lam9293_fptr() // lam9293 -> generic version 
{
std::cout<<"In lam9293_fptr: generic version"<<std::endl;
//reading env
void* const env9294 = arg_buffer[1];
//reading env and args
void* const id_8790 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9294);

//creating new make-kont closure
void** clo9867 = alloc_kont(lam9291_spec, 2);

//setting env list
clo9867[1] = id_8790;
clo9867[2] = decode_clo_array[1];
void* f_lam_9031 = encode_clo(clo9867);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9031;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9293_spec(void* env9294, void* id_8790) // lam9293 
{
std::cout<<"In lam9293_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9294);

//creating new make-kont closure
void** clo9868 = alloc_kont(lam9291_spec, 2);

//setting env list
clo9868[1] = id_8790;
clo9868[2] = decode_clo_array[1];
void* f_lam_9031 = encode_clo(clo9868);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9031;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9295_fptr() // lam9295 -> generic version 
{
std::cout<<"In lam9295_fptr: generic version"<<std::endl;
//reading env
void* const env9296 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9296);

//if-clause
if(is_true(id_8788))
{

//creating new make-kont closure
void** clo9869 = alloc_kont(lam9289_spec, 1);

//setting env list
clo9869[1] = decode_clo_array[1];
void* f_lam_9030 = encode_clo(clo9869);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9030;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9870 = alloc_kont(lam9293_spec, 2);

//setting env list
clo9870[1] = decode_clo_array[1];
clo9870[2] = decode_clo_array[2];
void* f_lam_9032 = encode_clo(clo9870);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9032;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9295_spec(void* env9296, void* id_8788) // lam9295 
{
std::cout<<"In lam9295_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9296);

//if-clause
if(is_true(id_8788))
{

//creating new make-kont closure
void** clo9871 = alloc_kont(lam9289_spec, 1);

//setting env list
clo9871[1] = decode_clo_array[1];
void* f_lam_9030 = encode_clo(clo9871);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9030;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9872 = alloc_kont(lam9293_spec, 2);

//setting env list
clo9872[1] = decode_clo_array[1];
clo9872[2] = decode_clo_array[2];
void* f_lam_9032 = encode_clo(clo9872);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9032;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
std::cout<<"In list_u45ref_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9029 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9873 = alloc_kont(lam9295_spec, 3);

//setting env list
clo9873[1] = kont9029;
clo9873[2] = n;
clo9873[3] = lst;
void* f_lam_9033 = encode_clo(clo9873);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9033;
arg_buffer[3] = int9803;
arg_buffer[4] = n;
numArgs = 4;
_u61_fptr();
}

inline void list_u45ref_spec(void* _9297, void* kont9029, void* lst, void* n) // list-ref 
{
std::cout<<"In list_u45ref_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9874 = alloc_kont(lam9295_spec, 3);

//setting env list
clo9874[1] = kont9029;
clo9874[2] = n;
clo9874[3] = lst;
void* f_lam_9033 = encode_clo(clo9874);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9033;
arg_buffer[3] = int9803;
arg_buffer[4] = n;
numArgs = 4;
_u61_fptr();
}

inline void lam9298_fptr() // lam9298 -> generic version 
{
std::cout<<"In lam9298_fptr: generic version"<<std::endl;
//reading env
void* const env9299 = arg_buffer[1];
//reading env and args
void* const xy8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9299);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam9298_spec(void* env9299, void* xy8794) // lam9298 
{
std::cout<<"In lam9298_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9299);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam9300_fptr() // lam9300 -> generic version 
{
std::cout<<"In lam9300_fptr: generic version"<<std::endl;
//reading env
void* const env9301 = arg_buffer[1];
//reading env and args
void* const xy8795 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9301);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8795);
}

inline void lam9300_spec(void* env9301, void* xy8795) // lam9300 
{
std::cout<<"In lam9300_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9301);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8795);
}

inline void lam9302_fptr() // lam9302 -> generic version 
{
std::cout<<"In lam9302_fptr: generic version"<<std::endl;
//reading env
void* const env9303 = arg_buffer[1];
//reading env and args
void* const id_8800 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9303);

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[1], id_8800);
}

inline void lam9302_spec(void* env9303, void* id_8800) // lam9302 
{
std::cout<<"In lam9302_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9303);

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[1], id_8800);
}

inline void lam9304_fptr() // lam9304 -> generic version 
{
std::cout<<"In lam9304_fptr: generic version"<<std::endl;
//reading env
void* const env9305 = arg_buffer[1];
//reading env and args
void* const id_8799 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9305);

//if-clause
if(is_true(id_8799))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9875 = alloc_kont(lam9302_spec, 2);

//setting env list
clo9875[1] = decode_clo_array[1];
clo9875[2] = decode_clo_array[3];
void* f_lam_9035 = encode_clo(clo9875);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9035;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9304_spec(void* env9305, void* id_8799) // lam9304 
{
std::cout<<"In lam9304_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9305);

//if-clause
if(is_true(id_8799))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9876 = alloc_kont(lam9302_spec, 2);

//setting env list
clo9876[1] = decode_clo_array[1];
clo9876[2] = decode_clo_array[3];
void* f_lam_9035 = encode_clo(clo9876);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9035;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9306_fptr() // lam9306 -> generic version 
{
std::cout<<"In lam9306_fptr: generic version"<<std::endl;
//reading env
void* const env9307 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9307);

//creating new make-kont closure
void** clo9877 = alloc_kont(lam9304_spec, 3);

//setting env list
clo9877[1] = decode_clo_array[1];
clo9877[2] = decode_clo_array[2];
clo9877[3] = decode_clo_array[3];
void* f_lam_9036 = encode_clo(clo9877);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9036;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8798;
numArgs = 4;
equal_u63_fptr();
}

inline void lam9306_spec(void* env9307, void* id_8798) // lam9306 
{
std::cout<<"In lam9306_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9307);

//creating new make-kont closure
void** clo9878 = alloc_kont(lam9304_spec, 3);

//setting env list
clo9878[1] = decode_clo_array[1];
clo9878[2] = decode_clo_array[2];
clo9878[3] = decode_clo_array[3];
void* f_lam_9036 = encode_clo(clo9878);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9036;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8798;
numArgs = 4;
equal_u63_fptr();
}

inline void lam9308_fptr() // lam9308 -> generic version 
{
std::cout<<"In lam9308_fptr: generic version"<<std::endl;
//reading env
void* const env9309 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9309);

//if-clause
if(is_true(id_8796))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9801);
}
else
{

//creating new make-kont closure
void** clo9879 = alloc_kont(lam9306_spec, 3);

//setting env list
clo9879[1] = decode_clo_array[1];
clo9879[2] = decode_clo_array[2];
clo9879[3] = decode_clo_array[3];
void* f_lam_9037 = encode_clo(clo9879);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9037;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9308_spec(void* env9309, void* id_8796) // lam9308 
{
std::cout<<"In lam9308_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9309);

//if-clause
if(is_true(id_8796))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9801);
}
else
{

//creating new make-kont closure
void** clo9880 = alloc_kont(lam9306_spec, 3);

//setting env list
clo9880[1] = decode_clo_array[1];
clo9880[2] = decode_clo_array[2];
clo9880[3] = decode_clo_array[3];
void* f_lam_9037 = encode_clo(clo9880);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9037;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9310_fptr() // lam9310 -> generic version 
{
std::cout<<"In lam9310_fptr: generic version"<<std::endl;
//reading env
void* const env9311 = arg_buffer[1];
//reading env and args
void* const id_8793 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9311);

//creating new make-kont closure
void** clo9881 = alloc_kont(lam9308_spec, 3);

//setting env list
clo9881[1] = decode_clo_array[1];
clo9881[2] = decode_clo_array[2];
clo9881[3] = decode_clo_array[3];
void* f_lam_9038 = encode_clo(clo9881);



//if-clause
if(is_true(id_8793))
{

//creating new make-kont closure
void** clo9882 = alloc_kont(lam9298_spec, 1);

//setting env list
clo9882[1] = f_lam_9038;
void* f_lam_9039 = encode_clo(clo9882);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9039;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
null_u63_fptr();
}
else
{

//creating new make-kont closure
void** clo9883 = alloc_kont(lam9300_spec, 1);

//setting env list
clo9883[1] = f_lam_9038;
void* f_lam_9040 = encode_clo(clo9883);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9040;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
null_u63_fptr();
}

}

inline void lam9310_spec(void* env9311, void* id_8793) // lam9310 
{
std::cout<<"In lam9310_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9311);

//creating new make-kont closure
void** clo9884 = alloc_kont(lam9308_spec, 3);

//setting env list
clo9884[1] = decode_clo_array[1];
clo9884[2] = decode_clo_array[2];
clo9884[3] = decode_clo_array[3];
void* f_lam_9038 = encode_clo(clo9884);



//if-clause
if(is_true(id_8793))
{

//creating new make-kont closure
void** clo9885 = alloc_kont(lam9298_spec, 1);

//setting env list
clo9885[1] = f_lam_9038;
void* f_lam_9039 = encode_clo(clo9885);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9039;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
null_u63_fptr();
}
else
{

//creating new make-kont closure
void** clo9886 = alloc_kont(lam9300_spec, 1);

//setting env list
clo9886[1] = f_lam_9038;
void* f_lam_9040 = encode_clo(clo9886);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9040;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
null_u63_fptr();
}

}

inline void member_fptr() // member -> generic version 
{
std::cout<<"In member_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9034 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9887 = alloc_kont(lam9310_spec, 3);

//setting env list
clo9887[1] = item;
clo9887[2] = lst;
clo9887[3] = kont9034;
void* f_lam_9041 = encode_clo(clo9887);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9041;
arg_buffer[3] = item;
numArgs = 3;
null_u63_fptr();
}

inline void member_spec(void* _9312, void* kont9034, void* item, void* lst) // member 
{
std::cout<<"In member_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9888 = alloc_kont(lam9310_spec, 3);

//setting env list
clo9888[1] = item;
clo9888[2] = lst;
clo9888[3] = kont9034;
void* f_lam_9041 = encode_clo(clo9888);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9041;
arg_buffer[3] = item;
numArgs = 3;
null_u63_fptr();
}

inline void lam9313_fptr() // lam9313 -> generic version 
{
std::cout<<"In lam9313_fptr: generic version"<<std::endl;
//reading env
void* const env9314 = arg_buffer[1];
//reading env and args
void* const id_8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9314);

//clo-app
member_u63_spec(member_u63, decode_clo_array[2], decode_clo_array[1], id_8806);
}

inline void lam9313_spec(void* env9314, void* id_8806) // lam9313 
{
std::cout<<"In lam9313_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9314);

//clo-app
member_u63_spec(member_u63, decode_clo_array[2], decode_clo_array[1], id_8806);
}

inline void lam9315_fptr() // lam9315 -> generic version 
{
std::cout<<"In lam9315_fptr: generic version"<<std::endl;
//reading env
void* const env9316 = arg_buffer[1];
//reading env and args
void* const id_8804 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9316);

//if-clause
if(is_true(id_8804))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_t9798);
}
else
{

//creating new make-kont closure
void** clo9889 = alloc_kont(lam9313_spec, 2);

//setting env list
clo9889[1] = decode_clo_array[1];
clo9889[2] = decode_clo_array[2];
void* f_lam_9043 = encode_clo(clo9889);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9043;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9315_spec(void* env9316, void* id_8804) // lam9315 
{
std::cout<<"In lam9315_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9316);

//if-clause
if(is_true(id_8804))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_t9798);
}
else
{

//creating new make-kont closure
void** clo9890 = alloc_kont(lam9313_spec, 2);

//setting env list
clo9890[1] = decode_clo_array[1];
clo9890[2] = decode_clo_array[2];
void* f_lam_9043 = encode_clo(clo9890);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9043;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9317_fptr() // lam9317 -> generic version 
{
std::cout<<"In lam9317_fptr: generic version"<<std::endl;
//reading env
void* const env9318 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9318);

//creating new make-kont closure
void** clo9891 = alloc_kont(lam9315_spec, 3);

//setting env list
clo9891[1] = decode_clo_array[1];
clo9891[2] = decode_clo_array[2];
clo9891[3] = decode_clo_array[3];
void* f_lam_9044 = encode_clo(clo9891);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9044;
arg_buffer[3] = id_8803;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
equal_u63_fptr();
}

inline void lam9317_spec(void* env9318, void* id_8803) // lam9317 
{
std::cout<<"In lam9317_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9318);

//creating new make-kont closure
void** clo9892 = alloc_kont(lam9315_spec, 3);

//setting env list
clo9892[1] = decode_clo_array[1];
clo9892[2] = decode_clo_array[2];
clo9892[3] = decode_clo_array[3];
void* f_lam_9044 = encode_clo(clo9892);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9044;
arg_buffer[3] = id_8803;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
equal_u63_fptr();
}

inline void lam9319_fptr() // lam9319 -> generic version 
{
std::cout<<"In lam9319_fptr: generic version"<<std::endl;
//reading env
void* const env9320 = arg_buffer[1];
//reading env and args
void* const id_8801 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9320);

//if-clause
if(is_true(id_8801))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9801);
}
else
{

//creating new make-kont closure
void** clo9893 = alloc_kont(lam9317_spec, 3);

//setting env list
clo9893[1] = decode_clo_array[1];
clo9893[2] = decode_clo_array[2];
clo9893[3] = decode_clo_array[3];
void* f_lam_9045 = encode_clo(clo9893);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9045;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9319_spec(void* env9320, void* id_8801) // lam9319 
{
std::cout<<"In lam9319_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9320);

//if-clause
if(is_true(id_8801))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9801);
}
else
{

//creating new make-kont closure
void** clo9894 = alloc_kont(lam9317_spec, 3);

//setting env list
clo9894[1] = decode_clo_array[1];
clo9894[2] = decode_clo_array[2];
clo9894[3] = decode_clo_array[3];
void* f_lam_9045 = encode_clo(clo9894);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9045;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void member_u63_fptr() // member? -> generic version 
{
std::cout<<"In member_u63_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9042 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9895 = alloc_kont(lam9319_spec, 3);

//setting env list
clo9895[1] = x;
clo9895[2] = kont9042;
clo9895[3] = lst;
void* f_lam_9046 = encode_clo(clo9895);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9046;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void member_u63_spec(void* _9321, void* kont9042, void* x, void* lst) // member? 
{
std::cout<<"In member_u63_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9896 = alloc_kont(lam9319_spec, 3);

//setting env list
clo9896[1] = x;
clo9896[2] = kont9042;
clo9896[3] = lst;
void* f_lam_9046 = encode_clo(clo9896);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9046;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9322_fptr() // lam9322 -> generic version 
{
std::cout<<"In lam9322_fptr: generic version"<<std::endl;
//reading env
void* const env9323 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9323);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8811;
numArgs = 4;
_u43_fptr();
}

inline void lam9322_spec(void* env9323, void* id_8811) // lam9322 
{
std::cout<<"In lam9322_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9323);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8811;
numArgs = 4;
_u43_fptr();
}

inline void lam9324_fptr() // lam9324 -> generic version 
{
std::cout<<"In lam9324_fptr: generic version"<<std::endl;
//reading env
void* const env9325 = arg_buffer[1];
//reading env and args
void* const id_8810 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9325);

//creating new make-kont closure
void** clo9897 = alloc_kont(lam9322_spec, 2);

//setting env list
clo9897[1] = decode_clo_array[1];
clo9897[2] = decode_clo_array[2];
void* f_lam_9048 = encode_clo(clo9897);



//clo-app
length_spec(length, f_lam_9048, id_8810);
}

inline void lam9324_spec(void* env9325, void* id_8810) // lam9324 
{
std::cout<<"In lam9324_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9325);

//creating new make-kont closure
void** clo9898 = alloc_kont(lam9322_spec, 2);

//setting env list
clo9898[1] = decode_clo_array[1];
clo9898[2] = decode_clo_array[2];
void* f_lam_9048 = encode_clo(clo9898);



//clo-app
length_spec(length, f_lam_9048, id_8810);
}

inline void lam9326_fptr() // lam9326 -> generic version 
{
std::cout<<"In lam9326_fptr: generic version"<<std::endl;
//reading env
void* const env9327 = arg_buffer[1];
//reading env and args
void* const id_8807 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9327);

//if-clause
if(is_true(id_8807))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], int9803);
}
else
{

//creating new make-kont closure
void** clo9899 = alloc_kont(lam9324_spec, 2);

//setting env list
clo9899[1] = decode_clo_array[1];
clo9899[2] = int9796;
void* f_lam_9049 = encode_clo(clo9899);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9049;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9326_spec(void* env9327, void* id_8807) // lam9326 
{
std::cout<<"In lam9326_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9327);

//if-clause
if(is_true(id_8807))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], int9803);
}
else
{

//creating new make-kont closure
void** clo9900 = alloc_kont(lam9324_spec, 2);

//setting env list
clo9900[1] = decode_clo_array[1];
clo9900[2] = int9796;
void* f_lam_9049 = encode_clo(clo9900);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9049;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void length_fptr() // length -> generic version 
{
std::cout<<"In length_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9047 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9901 = alloc_kont(lam9326_spec, 2);

//setting env list
clo9901[1] = kont9047;
clo9901[2] = lst;
void* f_lam_9050 = encode_clo(clo9901);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9050;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void length_spec(void* _9328, void* kont9047, void* lst) // length 
{
std::cout<<"In length_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9902 = alloc_kont(lam9326_spec, 2);

//setting env list
clo9902[1] = kont9047;
clo9902[2] = lst;
void* f_lam_9050 = encode_clo(clo9902);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9050;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9329_fptr() // lam9329 -> generic version 
{
std::cout<<"In lam9329_fptr: generic version"<<std::endl;
//reading env
void* const env9330 = arg_buffer[1];
//reading env and args
void* const xy8813 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9330);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam9329_spec(void* env9330, void* xy8813) // lam9329 
{
std::cout<<"In lam9329_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9330);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam9331_fptr() // lam9331 -> generic version 
{
std::cout<<"In lam9331_fptr: generic version"<<std::endl;
//reading env
void* const env9332 = arg_buffer[1];
//reading env and args
void* const id_8817 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9332);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8817;
numArgs = 4;
cons_fptr();
}

inline void lam9331_spec(void* env9332, void* id_8817) // lam9331 
{
std::cout<<"In lam9331_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9332);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8817;
numArgs = 4;
cons_fptr();
}

inline void lam9333_fptr() // lam9333 -> generic version 
{
std::cout<<"In lam9333_fptr: generic version"<<std::endl;
//reading env
void* const env9334 = arg_buffer[1];
//reading env and args
void* const id_8816 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9334);

//creating new make-kont closure
void** clo9903 = alloc_kont(lam9331_spec, 2);

//setting env list
clo9903[1] = decode_clo_array[2];
clo9903[2] = decode_clo_array[3];
void* f_lam_9053 = encode_clo(clo9903);



//clo-app
map_spec(map, f_lam_9053, decode_clo_array[1], id_8816);
}

inline void lam9333_spec(void* env9334, void* id_8816) // lam9333 
{
std::cout<<"In lam9333_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9334);

//creating new make-kont closure
void** clo9904 = alloc_kont(lam9331_spec, 2);

//setting env list
clo9904[1] = decode_clo_array[2];
clo9904[2] = decode_clo_array[3];
void* f_lam_9053 = encode_clo(clo9904);



//clo-app
map_spec(map, f_lam_9053, decode_clo_array[1], id_8816);
}

inline void lam9335_fptr() // lam9335 -> generic version 
{
std::cout<<"In lam9335_fptr: generic version"<<std::endl;
//reading env
void* const env9336 = arg_buffer[1];
//reading env and args
void* const id_8815 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9336);

//creating new make-kont closure
void** clo9905 = alloc_kont(lam9333_spec, 3);

//setting env list
clo9905[1] = decode_clo_array[1];
clo9905[2] = id_8815;
clo9905[3] = decode_clo_array[3];
void* f_lam_9054 = encode_clo(clo9905);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9054;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9335_spec(void* env9336, void* id_8815) // lam9335 
{
std::cout<<"In lam9335_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9336);

//creating new make-kont closure
void** clo9906 = alloc_kont(lam9333_spec, 3);

//setting env list
clo9906[1] = decode_clo_array[1];
clo9906[2] = id_8815;
clo9906[3] = decode_clo_array[3];
void* f_lam_9054 = encode_clo(clo9906);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9054;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9337_fptr() // lam9337 -> generic version 
{
std::cout<<"In lam9337_fptr: generic version"<<std::endl;
//reading env
void* const env9338 = arg_buffer[1];
//reading env and args
void* const id_8814 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9338);

//creating new make-kont closure
void** clo9907 = alloc_kont(lam9335_spec, 3);

//setting env list
clo9907[1] = decode_clo_array[1];
clo9907[2] = decode_clo_array[2];
clo9907[3] = decode_clo_array[3];
void* f_lam_9055 = encode_clo(clo9907);



//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = f_lam_9055;
arg_buffer[3] = id_8814;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9337_spec(void* env9338, void* id_8814) // lam9337 
{
std::cout<<"In lam9337_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9338);

//creating new make-kont closure
void** clo9908 = alloc_kont(lam9335_spec, 3);

//setting env list
clo9908[1] = decode_clo_array[1];
clo9908[2] = decode_clo_array[2];
clo9908[3] = decode_clo_array[3];
void* f_lam_9055 = encode_clo(clo9908);



//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = f_lam_9055;
arg_buffer[3] = id_8814;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9339_fptr() // lam9339 -> generic version 
{
std::cout<<"In lam9339_fptr: generic version"<<std::endl;
//reading env
void* const env9340 = arg_buffer[1];
//reading env and args
void* const id_8812 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9340);

//if-clause
if(is_true(id_8812))
{

//creating new make-kont closure
void** clo9909 = alloc_kont(lam9329_spec, 1);

//setting env list
clo9909[1] = decode_clo_array[3];
void* f_lam_9052 = encode_clo(clo9909);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9052;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9910 = alloc_kont(lam9337_spec, 3);

//setting env list
clo9910[1] = decode_clo_array[1];
clo9910[2] = decode_clo_array[2];
clo9910[3] = decode_clo_array[3];
void* f_lam_9056 = encode_clo(clo9910);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9056;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9339_spec(void* env9340, void* id_8812) // lam9339 
{
std::cout<<"In lam9339_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9340);

//if-clause
if(is_true(id_8812))
{

//creating new make-kont closure
void** clo9911 = alloc_kont(lam9329_spec, 1);

//setting env list
clo9911[1] = decode_clo_array[3];
void* f_lam_9052 = encode_clo(clo9911);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9052;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9912 = alloc_kont(lam9337_spec, 3);

//setting env list
clo9912[1] = decode_clo_array[1];
clo9912[2] = decode_clo_array[2];
clo9912[3] = decode_clo_array[3];
void* f_lam_9056 = encode_clo(clo9912);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9056;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void map_fptr() // map -> generic version 
{
std::cout<<"In map_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9051 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9913 = alloc_kont(lam9339_spec, 3);

//setting env list
clo9913[1] = proc;
clo9913[2] = lst;
clo9913[3] = kont9051;
void* f_lam_9057 = encode_clo(clo9913);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9057;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void map_spec(void* _9341, void* kont9051, void* proc, void* lst) // map 
{
std::cout<<"In map_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9914 = alloc_kont(lam9339_spec, 3);

//setting env list
clo9914[1] = proc;
clo9914[2] = lst;
clo9914[3] = kont9051;
void* f_lam_9057 = encode_clo(clo9914);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9057;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9342_fptr() // lam9342 -> generic version 
{
std::cout<<"In lam9342_fptr: generic version"<<std::endl;
//reading env
void* const env9343 = arg_buffer[1];
//reading env and args
void* const xy8819 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9343);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void lam9342_spec(void* env9343, void* xy8819) // lam9342 
{
std::cout<<"In lam9342_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9343);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void lam9344_fptr() // lam9344 -> generic version 
{
std::cout<<"In lam9344_fptr: generic version"<<std::endl;
//reading env
void* const env9345 = arg_buffer[1];
//reading env and args
void* const id_8824 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9345);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8824;
numArgs = 4;
cons_fptr();
}

inline void lam9344_spec(void* env9345, void* id_8824) // lam9344 
{
std::cout<<"In lam9344_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9345);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8824;
numArgs = 4;
cons_fptr();
}

inline void lam9346_fptr() // lam9346 -> generic version 
{
std::cout<<"In lam9346_fptr: generic version"<<std::endl;
//reading env
void* const env9347 = arg_buffer[1];
//reading env and args
void* const id_8823 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9347);

//creating new make-kont closure
void** clo9915 = alloc_kont(lam9344_spec, 2);

//setting env list
clo9915[1] = decode_clo_array[1];
clo9915[2] = decode_clo_array[2];
void* f_lam_9060 = encode_clo(clo9915);



//clo-app
filter_spec(filter, f_lam_9060, decode_clo_array[3], id_8823);
}

inline void lam9346_spec(void* env9347, void* id_8823) // lam9346 
{
std::cout<<"In lam9346_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9347);

//creating new make-kont closure
void** clo9916 = alloc_kont(lam9344_spec, 2);

//setting env list
clo9916[1] = decode_clo_array[1];
clo9916[2] = decode_clo_array[2];
void* f_lam_9060 = encode_clo(clo9916);



//clo-app
filter_spec(filter, f_lam_9060, decode_clo_array[3], id_8823);
}

inline void lam9348_fptr() // lam9348 -> generic version 
{
std::cout<<"In lam9348_fptr: generic version"<<std::endl;
//reading env
void* const env9349 = arg_buffer[1];
//reading env and args
void* const id_8822 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9349);

//creating new make-kont closure
void** clo9917 = alloc_kont(lam9346_spec, 3);

//setting env list
clo9917[1] = id_8822;
clo9917[2] = decode_clo_array[1];
clo9917[3] = decode_clo_array[2];
void* f_lam_9061 = encode_clo(clo9917);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9061;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9348_spec(void* env9349, void* id_8822) // lam9348 
{
std::cout<<"In lam9348_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9349);

//creating new make-kont closure
void** clo9918 = alloc_kont(lam9346_spec, 3);

//setting env list
clo9918[1] = id_8822;
clo9918[2] = decode_clo_array[1];
clo9918[3] = decode_clo_array[2];
void* f_lam_9061 = encode_clo(clo9918);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9061;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9350_fptr() // lam9350 -> generic version 
{
std::cout<<"In lam9350_fptr: generic version"<<std::endl;
//reading env
void* const env9351 = arg_buffer[1];
//reading env and args
void* const id_8825 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9351);

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], id_8825);
}

inline void lam9350_spec(void* env9351, void* id_8825) // lam9350 
{
std::cout<<"In lam9350_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9351);

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], id_8825);
}

inline void lam9352_fptr() // lam9352 -> generic version 
{
std::cout<<"In lam9352_fptr: generic version"<<std::endl;
//reading env
void* const env9353 = arg_buffer[1];
//reading env and args
void* const id_8821 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9353);

//if-clause
if(is_true(id_8821))
{

//creating new make-kont closure
void** clo9919 = alloc_kont(lam9348_spec, 3);

//setting env list
clo9919[1] = decode_clo_array[1];
clo9919[2] = decode_clo_array[2];
clo9919[3] = decode_clo_array[3];
void* f_lam_9062 = encode_clo(clo9919);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9062;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9920 = alloc_kont(lam9350_spec, 2);

//setting env list
clo9920[1] = decode_clo_array[1];
clo9920[2] = decode_clo_array[2];
void* f_lam_9063 = encode_clo(clo9920);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9063;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9352_spec(void* env9353, void* id_8821) // lam9352 
{
std::cout<<"In lam9352_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9353);

//if-clause
if(is_true(id_8821))
{

//creating new make-kont closure
void** clo9921 = alloc_kont(lam9348_spec, 3);

//setting env list
clo9921[1] = decode_clo_array[1];
clo9921[2] = decode_clo_array[2];
clo9921[3] = decode_clo_array[3];
void* f_lam_9062 = encode_clo(clo9921);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9062;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9922 = alloc_kont(lam9350_spec, 2);

//setting env list
clo9922[1] = decode_clo_array[1];
clo9922[2] = decode_clo_array[2];
void* f_lam_9063 = encode_clo(clo9922);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9063;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9354_fptr() // lam9354 -> generic version 
{
std::cout<<"In lam9354_fptr: generic version"<<std::endl;
//reading env
void* const env9355 = arg_buffer[1];
//reading env and args
void* const id_8820 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9355);

//creating new make-kont closure
void** clo9923 = alloc_kont(lam9352_spec, 3);

//setting env list
clo9923[1] = decode_clo_array[1];
clo9923[2] = decode_clo_array[2];
clo9923[3] = decode_clo_array[3];
void* f_lam_9064 = encode_clo(clo9923);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_9064;
arg_buffer[3] = id_8820;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9354_spec(void* env9355, void* id_8820) // lam9354 
{
std::cout<<"In lam9354_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9355);

//creating new make-kont closure
void** clo9924 = alloc_kont(lam9352_spec, 3);

//setting env list
clo9924[1] = decode_clo_array[1];
clo9924[2] = decode_clo_array[2];
clo9924[3] = decode_clo_array[3];
void* f_lam_9064 = encode_clo(clo9924);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_9064;
arg_buffer[3] = id_8820;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9356_fptr() // lam9356 -> generic version 
{
std::cout<<"In lam9356_fptr: generic version"<<std::endl;
//reading env
void* const env9357 = arg_buffer[1];
//reading env and args
void* const id_8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9357);

//if-clause
if(is_true(id_8818))
{

//creating new make-kont closure
void** clo9925 = alloc_kont(lam9342_spec, 1);

//setting env list
clo9925[1] = decode_clo_array[1];
void* f_lam_9059 = encode_clo(clo9925);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9059;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9926 = alloc_kont(lam9354_spec, 3);

//setting env list
clo9926[1] = decode_clo_array[1];
clo9926[2] = decode_clo_array[2];
clo9926[3] = decode_clo_array[3];
void* f_lam_9065 = encode_clo(clo9926);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9065;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9356_spec(void* env9357, void* id_8818) // lam9356 
{
std::cout<<"In lam9356_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9357);

//if-clause
if(is_true(id_8818))
{

//creating new make-kont closure
void** clo9927 = alloc_kont(lam9342_spec, 1);

//setting env list
clo9927[1] = decode_clo_array[1];
void* f_lam_9059 = encode_clo(clo9927);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9059;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9928 = alloc_kont(lam9354_spec, 3);

//setting env list
clo9928[1] = decode_clo_array[1];
clo9928[2] = decode_clo_array[2];
clo9928[3] = decode_clo_array[3];
void* f_lam_9065 = encode_clo(clo9928);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9065;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void filter_fptr() // filter -> generic version 
{
std::cout<<"In filter_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9058 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9929 = alloc_kont(lam9356_spec, 3);

//setting env list
clo9929[1] = kont9058;
clo9929[2] = op;
clo9929[3] = lst;
void* f_lam_9066 = encode_clo(clo9929);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9066;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void filter_spec(void* _9358, void* kont9058, void* op, void* lst) // filter 
{
std::cout<<"In filter_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9930 = alloc_kont(lam9356_spec, 3);

//setting env list
clo9930[1] = kont9058;
clo9930[2] = op;
clo9930[3] = lst;
void* f_lam_9066 = encode_clo(clo9930);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9066;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9359_fptr() // lam9359 -> generic version 
{
std::cout<<"In lam9359_fptr: generic version"<<std::endl;
//reading env
void* const env9360 = arg_buffer[1];
//reading env and args
void* const id_8829 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9360);

//clo-app
foldl_spec(foldl, decode_clo_array[3], decode_clo_array[1], decode_clo_array[2], id_8829);
}

inline void lam9359_spec(void* env9360, void* id_8829) // lam9359 
{
std::cout<<"In lam9359_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9360);

//clo-app
foldl_spec(foldl, decode_clo_array[3], decode_clo_array[1], decode_clo_array[2], id_8829);
}

inline void lam9361_fptr() // lam9361 -> generic version 
{
std::cout<<"In lam9361_fptr: generic version"<<std::endl;
//reading env
void* const env9362 = arg_buffer[1];
//reading env and args
void* const id_8828 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9362);

//creating new make-kont closure
void** clo9931 = alloc_kont(lam9359_spec, 3);

//setting env list
clo9931[1] = decode_clo_array[1];
clo9931[2] = id_8828;
clo9931[3] = decode_clo_array[3];
void* f_lam_9068 = encode_clo(clo9931);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9068;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9361_spec(void* env9362, void* id_8828) // lam9361 
{
std::cout<<"In lam9361_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9362);

//creating new make-kont closure
void** clo9932 = alloc_kont(lam9359_spec, 3);

//setting env list
clo9932[1] = decode_clo_array[1];
clo9932[2] = id_8828;
clo9932[3] = decode_clo_array[3];
void* f_lam_9068 = encode_clo(clo9932);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9068;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9363_fptr() // lam9363 -> generic version 
{
std::cout<<"In lam9363_fptr: generic version"<<std::endl;
//reading env
void* const env9364 = arg_buffer[1];
//reading env and args
void* const id_8827 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9364);

//creating new make-kont closure
void** clo9933 = alloc_kont(lam9361_spec, 3);

//setting env list
clo9933[1] = decode_clo_array[2];
clo9933[2] = decode_clo_array[3];
clo9933[3] = decode_clo_array[4];
void* f_lam_9069 = encode_clo(clo9933);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_9069;
arg_buffer[3] = id_8827;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9363_spec(void* env9364, void* id_8827) // lam9363 
{
std::cout<<"In lam9363_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9364);

//creating new make-kont closure
void** clo9934 = alloc_kont(lam9361_spec, 3);

//setting env list
clo9934[1] = decode_clo_array[2];
clo9934[2] = decode_clo_array[3];
clo9934[3] = decode_clo_array[4];
void* f_lam_9069 = encode_clo(clo9934);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_9069;
arg_buffer[3] = id_8827;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9365_fptr() // lam9365 -> generic version 
{
std::cout<<"In lam9365_fptr: generic version"<<std::endl;
//reading env
void* const env9366 = arg_buffer[1];
//reading env and args
void* const id_8826 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9366);

//if-clause
if(is_true(id_8826))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9935 = alloc_kont(lam9363_spec, 4);

//setting env list
clo9935[1] = decode_clo_array[1];
clo9935[2] = decode_clo_array[2];
clo9935[3] = decode_clo_array[3];
clo9935[4] = decode_clo_array[4];
void* f_lam_9070 = encode_clo(clo9935);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9070;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9365_spec(void* env9366, void* id_8826) // lam9365 
{
std::cout<<"In lam9365_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9366);

//if-clause
if(is_true(id_8826))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9936 = alloc_kont(lam9363_spec, 4);

//setting env list
clo9936[1] = decode_clo_array[1];
clo9936[2] = decode_clo_array[2];
clo9936[3] = decode_clo_array[3];
clo9936[4] = decode_clo_array[4];
void* f_lam_9070 = encode_clo(clo9936);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9070;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void foldl_fptr() // foldl -> generic version 
{
std::cout<<"In foldl_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9067 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9937 = alloc_kont(lam9365_spec, 4);

//setting env list
clo9937[1] = acc;
clo9937[2] = fun;
clo9937[3] = lst;
clo9937[4] = kont9067;
void* f_lam_9071 = encode_clo(clo9937);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9071;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void foldl_spec(void* _9367, void* kont9067, void* fun, void* acc, void* lst) // foldl 
{
std::cout<<"In foldl_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9938 = alloc_kont(lam9365_spec, 4);

//setting env list
clo9938[1] = acc;
clo9938[2] = fun;
clo9938[3] = lst;
clo9938[4] = kont9067;
void* f_lam_9071 = encode_clo(clo9938);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9071;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9368_fptr() // lam9368 -> generic version 
{
std::cout<<"In lam9368_fptr: generic version"<<std::endl;
//reading env
void* const env9369 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9369);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8833;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9368_spec(void* env9369, void* id_8833) // lam9368 
{
std::cout<<"In lam9368_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9369);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8833;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9370_fptr() // lam9370 -> generic version 
{
std::cout<<"In lam9370_fptr: generic version"<<std::endl;
//reading env
void* const env9371 = arg_buffer[1];
//reading env and args
void* const id_8832 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9371);

//creating new make-kont closure
void** clo9939 = alloc_kont(lam9368_spec, 3);

//setting env list
clo9939[1] = decode_clo_array[2];
clo9939[2] = decode_clo_array[3];
clo9939[3] = decode_clo_array[4];
void* f_lam_9073 = encode_clo(clo9939);



//clo-app
foldr_spec(foldr, f_lam_9073, decode_clo_array[2], decode_clo_array[1], id_8832);
}

inline void lam9370_spec(void* env9371, void* id_8832) // lam9370 
{
std::cout<<"In lam9370_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9371);

//creating new make-kont closure
void** clo9940 = alloc_kont(lam9368_spec, 3);

//setting env list
clo9940[1] = decode_clo_array[2];
clo9940[2] = decode_clo_array[3];
clo9940[3] = decode_clo_array[4];
void* f_lam_9073 = encode_clo(clo9940);



//clo-app
foldr_spec(foldr, f_lam_9073, decode_clo_array[2], decode_clo_array[1], id_8832);
}

inline void lam9372_fptr() // lam9372 -> generic version 
{
std::cout<<"In lam9372_fptr: generic version"<<std::endl;
//reading env
void* const env9373 = arg_buffer[1];
//reading env and args
void* const id_8831 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9373);

//creating new make-kont closure
void** clo9941 = alloc_kont(lam9370_spec, 4);

//setting env list
clo9941[1] = decode_clo_array[1];
clo9941[2] = decode_clo_array[2];
clo9941[3] = decode_clo_array[3];
clo9941[4] = id_8831;
void* f_lam_9074 = encode_clo(clo9941);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9074;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
cdr_fptr();
}

inline void lam9372_spec(void* env9373, void* id_8831) // lam9372 
{
std::cout<<"In lam9372_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9373);

//creating new make-kont closure
void** clo9942 = alloc_kont(lam9370_spec, 4);

//setting env list
clo9942[1] = decode_clo_array[1];
clo9942[2] = decode_clo_array[2];
clo9942[3] = decode_clo_array[3];
clo9942[4] = id_8831;
void* f_lam_9074 = encode_clo(clo9942);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9074;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
cdr_fptr();
}

inline void lam9374_fptr() // lam9374 -> generic version 
{
std::cout<<"In lam9374_fptr: generic version"<<std::endl;
//reading env
void* const env9375 = arg_buffer[1];
//reading env and args
void* const id_8830 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9375);

//if-clause
if(is_true(id_8830))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9943 = alloc_kont(lam9372_spec, 4);

//setting env list
clo9943[1] = decode_clo_array[1];
clo9943[2] = decode_clo_array[2];
clo9943[3] = decode_clo_array[3];
clo9943[4] = decode_clo_array[4];
void* f_lam_9075 = encode_clo(clo9943);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9075;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
car_fptr();
}

}

inline void lam9374_spec(void* env9375, void* id_8830) // lam9374 
{
std::cout<<"In lam9374_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9375);

//if-clause
if(is_true(id_8830))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9944 = alloc_kont(lam9372_spec, 4);

//setting env list
clo9944[1] = decode_clo_array[1];
clo9944[2] = decode_clo_array[2];
clo9944[3] = decode_clo_array[3];
clo9944[4] = decode_clo_array[4];
void* f_lam_9075 = encode_clo(clo9944);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9075;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
car_fptr();
}

}

inline void foldr_fptr() // foldr -> generic version 
{
std::cout<<"In foldr_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9072 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9945 = alloc_kont(lam9374_spec, 4);

//setting env list
clo9945[1] = acc;
clo9945[2] = fun;
clo9945[3] = kont9072;
clo9945[4] = lst;
void* f_lam_9076 = encode_clo(clo9945);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9076;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void foldr_spec(void* _9376, void* kont9072, void* fun, void* acc, void* lst) // foldr 
{
std::cout<<"In foldr_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9946 = alloc_kont(lam9374_spec, 4);

//setting env list
clo9946[1] = acc;
clo9946[2] = fun;
clo9946[3] = kont9072;
clo9946[4] = lst;
void* f_lam_9076 = encode_clo(clo9946);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9076;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9377_fptr() // lam9377 -> generic version 
{
std::cout<<"In lam9377_fptr: generic version"<<std::endl;
//reading env
void* const env9378 = arg_buffer[1];
//reading env and args
void* const id_8837 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9378);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8837;
numArgs = 4;
cons_fptr();
}

inline void lam9377_spec(void* env9378, void* id_8837) // lam9377 
{
std::cout<<"In lam9377_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9378);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8837;
numArgs = 4;
cons_fptr();
}

inline void lam9379_fptr() // lam9379 -> generic version 
{
std::cout<<"In lam9379_fptr: generic version"<<std::endl;
//reading env
void* const env9380 = arg_buffer[1];
//reading env and args
void* const id_8836 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9380);

//creating new make-kont closure
void** clo9947 = alloc_kont(lam9377_spec, 2);

//setting env list
clo9947[1] = decode_clo_array[1];
clo9947[2] = decode_clo_array[3];
void* f_lam_9078 = encode_clo(clo9947);



//clo-app
append1_spec(append1, f_lam_9078, id_8836, decode_clo_array[2]);
}

inline void lam9379_spec(void* env9380, void* id_8836) // lam9379 
{
std::cout<<"In lam9379_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9380);

//creating new make-kont closure
void** clo9948 = alloc_kont(lam9377_spec, 2);

//setting env list
clo9948[1] = decode_clo_array[1];
clo9948[2] = decode_clo_array[3];
void* f_lam_9078 = encode_clo(clo9948);



//clo-app
append1_spec(append1, f_lam_9078, id_8836, decode_clo_array[2]);
}

inline void lam9381_fptr() // lam9381 -> generic version 
{
std::cout<<"In lam9381_fptr: generic version"<<std::endl;
//reading env
void* const env9382 = arg_buffer[1];
//reading env and args
void* const id_8835 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9382);

//creating new make-kont closure
void** clo9949 = alloc_kont(lam9379_spec, 3);

//setting env list
clo9949[1] = decode_clo_array[1];
clo9949[2] = decode_clo_array[2];
clo9949[3] = id_8835;
void* f_lam_9079 = encode_clo(clo9949);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9079;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9381_spec(void* env9382, void* id_8835) // lam9381 
{
std::cout<<"In lam9381_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9382);

//creating new make-kont closure
void** clo9950 = alloc_kont(lam9379_spec, 3);

//setting env list
clo9950[1] = decode_clo_array[1];
clo9950[2] = decode_clo_array[2];
clo9950[3] = id_8835;
void* f_lam_9079 = encode_clo(clo9950);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9079;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9383_fptr() // lam9383 -> generic version 
{
std::cout<<"In lam9383_fptr: generic version"<<std::endl;
//reading env
void* const env9384 = arg_buffer[1];
//reading env and args
void* const id_8834 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9384);

//if-clause
if(is_true(id_8834))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9951 = alloc_kont(lam9381_spec, 3);

//setting env list
clo9951[1] = decode_clo_array[1];
clo9951[2] = decode_clo_array[2];
clo9951[3] = decode_clo_array[3];
void* f_lam_9080 = encode_clo(clo9951);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9080;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9383_spec(void* env9384, void* id_8834) // lam9383 
{
std::cout<<"In lam9383_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9384);

//if-clause
if(is_true(id_8834))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9952 = alloc_kont(lam9381_spec, 3);

//setting env list
clo9952[1] = decode_clo_array[1];
clo9952[2] = decode_clo_array[2];
clo9952[3] = decode_clo_array[3];
void* f_lam_9080 = encode_clo(clo9952);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9080;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void append1_fptr() // append1 -> generic version 
{
std::cout<<"In append1_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9077 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9953 = alloc_kont(lam9383_spec, 3);

//setting env list
clo9953[1] = kont9077;
clo9953[2] = rhs;
clo9953[3] = lhs;
void* f_lam_9081 = encode_clo(clo9953);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9081;
arg_buffer[3] = lhs;
numArgs = 3;
null_u63_fptr();
}

inline void append1_spec(void* _9385, void* kont9077, void* lhs, void* rhs) // append1 
{
std::cout<<"In append1_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9954 = alloc_kont(lam9383_spec, 3);

//setting env list
clo9954[1] = kont9077;
clo9954[2] = rhs;
clo9954[3] = lhs;
void* f_lam_9081 = encode_clo(clo9954);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9081;
arg_buffer[3] = lhs;
numArgs = 3;
null_u63_fptr();
}

inline void lam9386_fptr() // lam9386 -> generic version 
{
std::cout<<"In lam9386_fptr: generic version"<<std::endl;
//reading env
void* const env9387 = arg_buffer[1];
//reading env and args
void* const xy8839 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9387);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8839);
}

inline void lam9386_spec(void* env9387, void* xy8839) // lam9386 
{
std::cout<<"In lam9386_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9387);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8839);
}

inline void lam9388_fptr() // lam9388 -> generic version 
{
std::cout<<"In lam9388_fptr: generic version"<<std::endl;
//reading env
void* const env9389 = arg_buffer[1];
//reading env and args
void* const id_8842 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9389);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8842);
}

inline void lam9388_spec(void* env9389, void* id_8842) // lam9388 
{
std::cout<<"In lam9388_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9389);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8842);
}

inline void lam9390_fptr() // lam9390 -> generic version 
{
std::cout<<"In lam9390_fptr: generic version"<<std::endl;
//reading env
void* const env9391 = arg_buffer[1];
//reading env and args
void* const id_8841 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9391);

//creating new make-kont closure
void** clo9955 = alloc_kont(lam9388_spec, 2);

//setting env list
clo9955[1] = decode_clo_array[2];
clo9955[2] = decode_clo_array[3];
void* f_lam_9084 = encode_clo(clo9955);



//clo-app
append1_spec(append1, f_lam_9084, id_8841, decode_clo_array[1]);
}

inline void lam9390_spec(void* env9391, void* id_8841) // lam9390 
{
std::cout<<"In lam9390_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9391);

//creating new make-kont closure
void** clo9956 = alloc_kont(lam9388_spec, 2);

//setting env list
clo9956[1] = decode_clo_array[2];
clo9956[2] = decode_clo_array[3];
void* f_lam_9084 = encode_clo(clo9956);



//clo-app
append1_spec(append1, f_lam_9084, id_8841, decode_clo_array[1]);
}

inline void lam9392_fptr() // lam9392 -> generic version 
{
std::cout<<"In lam9392_fptr: generic version"<<std::endl;
//reading env
void* const env9393 = arg_buffer[1];
//reading env and args
void* const id_8840 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9393);

//creating new make-kont closure
void** clo9957 = alloc_kont(lam9390_spec, 3);

//setting env list
clo9957[1] = decode_clo_array[1];
clo9957[2] = decode_clo_array[4];
clo9957[3] = id_8840;
void* f_lam_9085 = encode_clo(clo9957);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9085;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = decode_clo_array[3];
numArgs = 4;
list_fptr();
}

inline void lam9392_spec(void* env9393, void* id_8840) // lam9392 
{
std::cout<<"In lam9392_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9393);

//creating new make-kont closure
void** clo9958 = alloc_kont(lam9390_spec, 3);

//setting env list
clo9958[1] = decode_clo_array[1];
clo9958[2] = decode_clo_array[4];
clo9958[3] = id_8840;
void* f_lam_9085 = encode_clo(clo9958);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9085;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = decode_clo_array[3];
numArgs = 4;
list_fptr();
}

inline void lam9394_fptr() // lam9394 -> generic version 
{
std::cout<<"In lam9394_fptr: generic version"<<std::endl;
//reading env
void* const env9395 = arg_buffer[1];
//reading env and args
void* const id_8838 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9395);

//if-clause
if(is_true(id_8838))
{

//creating new make-kont closure
void** clo9959 = alloc_kont(lam9386_spec, 1);

//setting env list
clo9959[1] = decode_clo_array[4];
void* f_lam_9083 = encode_clo(clo9959);



//clo-app
append1_spec(append1, f_lam_9083, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9960 = alloc_kont(lam9392_spec, 4);

//setting env list
clo9960[1] = decode_clo_array[1];
clo9960[2] = decode_clo_array[2];
clo9960[3] = decode_clo_array[3];
clo9960[4] = decode_clo_array[4];
void* f_lam_9086 = encode_clo(clo9960);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9086;
numArgs = 2;
list_fptr();
}

}

inline void lam9394_spec(void* env9395, void* id_8838) // lam9394 
{
std::cout<<"In lam9394_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9395);

//if-clause
if(is_true(id_8838))
{

//creating new make-kont closure
void** clo9961 = alloc_kont(lam9386_spec, 1);

//setting env list
clo9961[1] = decode_clo_array[4];
void* f_lam_9083 = encode_clo(clo9961);



//clo-app
append1_spec(append1, f_lam_9083, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9962 = alloc_kont(lam9392_spec, 4);

//setting env list
clo9962[1] = decode_clo_array[1];
clo9962[2] = decode_clo_array[2];
clo9962[3] = decode_clo_array[3];
clo9962[4] = decode_clo_array[4];
void* f_lam_9086 = encode_clo(clo9962);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9086;
numArgs = 2;
list_fptr();
}

}

inline void lam9396_fptr() // lam9396 -> generic version 
{
std::cout<<"In lam9396_fptr: generic version"<<std::endl;
//reading env
void* const env9397 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9397);

//creating new make-kont closure
void** clo9963 = alloc_kont(lam9394_spec, 4);

//setting env list
clo9963[1] = lsts;
clo9963[2] = decode_clo_array[1];
clo9963[3] = decode_clo_array[2];
clo9963[4] = decode_clo_array[3];
void* f_lam_9087 = encode_clo(clo9963);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9087;
arg_buffer[3] = lsts;
numArgs = 3;
null_u63_fptr();
}

inline void lam9396_spec(void* env9397, void* lsts) // lam9396 
{
std::cout<<"In lam9396_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9397);

//creating new make-kont closure
void** clo9964 = alloc_kont(lam9394_spec, 4);

//setting env list
clo9964[1] = lsts;
clo9964[2] = decode_clo_array[1];
clo9964[3] = decode_clo_array[2];
clo9964[4] = decode_clo_array[3];
void* f_lam_9087 = encode_clo(clo9964);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9087;
arg_buffer[3] = lsts;
numArgs = 3;
null_u63_fptr();
}

inline void lam9398_fptr() // lam9398 -> generic version 
{
std::cout<<"In lam9398_fptr: generic version"<<std::endl;
//reading env
void* const env9399 = arg_buffer[1];
//reading env and args
void* const vargs8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9399);

//creating new make-kont closure
void** clo9965 = alloc_kont(lam9396_spec, 3);

//setting env list
clo9965[1] = decode_clo_array[1];
clo9965[2] = decode_clo_array[2];
clo9965[3] = decode_clo_array[3];
void* f_lam_9088 = encode_clo(clo9965);


// kont-clo-app case
lam9396_spec(f_lam_9088, vargs8780);
}

inline void lam9398_spec(void* env9399, void* vargs8780) // lam9398 
{
std::cout<<"In lam9398_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9399);

//creating new make-kont closure
void** clo9966 = alloc_kont(lam9396_spec, 3);

//setting env list
clo9966[1] = decode_clo_array[1];
clo9966[2] = decode_clo_array[2];
clo9966[3] = decode_clo_array[3];
void* f_lam_9088 = encode_clo(clo9966);


// kont-clo-app case
lam9396_spec(f_lam_9088, vargs8780);
}

inline void lam9400_fptr() // lam9400 -> generic version 
{
std::cout<<"In lam9400_fptr: generic version"<<std::endl;
//reading env
void* const env9401 = arg_buffer[1];
//reading env and args
void* const l2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9401);

//creating new make-kont closure
void** clo9967 = alloc_kont(lam9398_spec, 3);

//setting env list
clo9967[1] = decode_clo_array[1];
clo9967[2] = l2;
clo9967[3] = decode_clo_array[3];
void* f_lam_9089 = encode_clo(clo9967);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9089;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9400_spec(void* env9401, void* l2) // lam9400 
{
std::cout<<"In lam9400_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9401);

//creating new make-kont closure
void** clo9968 = alloc_kont(lam9398_spec, 3);

//setting env list
clo9968[1] = decode_clo_array[1];
clo9968[2] = l2;
clo9968[3] = decode_clo_array[3];
void* f_lam_9089 = encode_clo(clo9968);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9089;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9402_fptr() // lam9402 -> generic version 
{
std::cout<<"In lam9402_fptr: generic version"<<std::endl;
//reading env
void* const env9403 = arg_buffer[1];
//reading env and args
void* const vargs8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9403);

//creating new make-kont closure
void** clo9969 = alloc_kont(lam9400_spec, 3);

//setting env list
clo9969[1] = decode_clo_array[1];
clo9969[2] = vargs8779;
clo9969[3] = decode_clo_array[2];
void* f_lam_9090 = encode_clo(clo9969);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9090;
arg_buffer[3] = vargs8779;
numArgs = 3;
car_fptr();
}

inline void lam9402_spec(void* env9403, void* vargs8779) // lam9402 
{
std::cout<<"In lam9402_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9403);

//creating new make-kont closure
void** clo9970 = alloc_kont(lam9400_spec, 3);

//setting env list
clo9970[1] = decode_clo_array[1];
clo9970[2] = vargs8779;
clo9970[3] = decode_clo_array[2];
void* f_lam_9090 = encode_clo(clo9970);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9090;
arg_buffer[3] = vargs8779;
numArgs = 3;
car_fptr();
}

inline void lam9404_fptr() // lam9404 -> generic version 
{
std::cout<<"In lam9404_fptr: generic version"<<std::endl;
//reading env
void* const env9405 = arg_buffer[1];
//reading env and args
void* const l1 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9405);

//creating new make-kont closure
void** clo9971 = alloc_kont(lam9402_spec, 2);

//setting env list
clo9971[1] = l1;
clo9971[2] = decode_clo_array[2];
void* f_lam_9091 = encode_clo(clo9971);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9091;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9404_spec(void* env9405, void* l1) // lam9404 
{
std::cout<<"In lam9404_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9405);

//creating new make-kont closure
void** clo9972 = alloc_kont(lam9402_spec, 2);

//setting env list
clo9972[1] = l1;
clo9972[2] = decode_clo_array[2];
void* f_lam_9091 = encode_clo(clo9972);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9091;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

void append_fptr() // append 
{
std::cout<<"In append_fptr"<<std::endl;
//reading env
void* const _9406 = arg_buffer[1];
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
void** clo9973 = alloc_kont(lam9404_spec, 2);

//setting env list
clo9973[1] = apply_prim_cdr_1(vargs);
clo9973[2] = apply_prim_car_1(vargs);
void* f_lam_9092 = encode_clo(clo9973);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9092;
arg_buffer[3] = apply_prim_cdr_1(vargs);
numArgs = 3;
car_fptr();
}

inline void lam9407_fptr() // lam9407 -> generic version 
{
std::cout<<"In lam9407_fptr: generic version"<<std::endl;
//reading env
void* const env9408 = arg_buffer[1];
//reading env and args
void* const id_8845 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9408);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8845;
numArgs = 4;
cons_fptr();
}

inline void lam9407_spec(void* env9408, void* id_8845) // lam9407 
{
std::cout<<"In lam9407_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9408);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8845;
numArgs = 4;
cons_fptr();
}

inline void lam9409_fptr() // lam9409 -> generic version 
{
std::cout<<"In lam9409_fptr: generic version"<<std::endl;
//reading env
void* const env9410 = arg_buffer[1];
//reading env and args
void* const id_8850 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9410);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8850;
numArgs = 4;
cons_fptr();
}

inline void lam9409_spec(void* env9410, void* id_8850) // lam9409 
{
std::cout<<"In lam9409_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9410);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8850;
numArgs = 4;
cons_fptr();
}

inline void lam9411_fptr() // lam9411 -> generic version 
{
std::cout<<"In lam9411_fptr: generic version"<<std::endl;
//reading env
void* const env9412 = arg_buffer[1];
//reading env and args
void* const id_8849 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9412);

//creating new make-kont closure
void** clo9974 = alloc_kont(lam9409_spec, 2);

//setting env list
clo9974[1] = decode_clo_array[1];
clo9974[2] = decode_clo_array[3];
void* f_lam_9095 = encode_clo(clo9974);



//clo-app
list_u45set_spec(list_u45set, f_lam_9095, decode_clo_array[2], id_8849, decode_clo_array[4]);
}

inline void lam9411_spec(void* env9412, void* id_8849) // lam9411 
{
std::cout<<"In lam9411_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9412);

//creating new make-kont closure
void** clo9975 = alloc_kont(lam9409_spec, 2);

//setting env list
clo9975[1] = decode_clo_array[1];
clo9975[2] = decode_clo_array[3];
void* f_lam_9095 = encode_clo(clo9975);



//clo-app
list_u45set_spec(list_u45set, f_lam_9095, decode_clo_array[2], id_8849, decode_clo_array[4]);
}

inline void lam9413_fptr() // lam9413 -> generic version 
{
std::cout<<"In lam9413_fptr: generic version"<<std::endl;
//reading env
void* const env9414 = arg_buffer[1];
//reading env and args
void* const id_8847 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9414);

//creating new make-kont closure
void** clo9976 = alloc_kont(lam9411_spec, 4);

//setting env list
clo9976[1] = decode_clo_array[1];
clo9976[2] = id_8847;
clo9976[3] = decode_clo_array[3];
clo9976[4] = decode_clo_array[4];
void* f_lam_9096 = encode_clo(clo9976);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9096;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9413_spec(void* env9414, void* id_8847) // lam9413 
{
std::cout<<"In lam9413_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9414);

//creating new make-kont closure
void** clo9977 = alloc_kont(lam9411_spec, 4);

//setting env list
clo9977[1] = decode_clo_array[1];
clo9977[2] = id_8847;
clo9977[3] = decode_clo_array[3];
clo9977[4] = decode_clo_array[4];
void* f_lam_9096 = encode_clo(clo9977);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9096;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9415_fptr() // lam9415 -> generic version 
{
std::cout<<"In lam9415_fptr: generic version"<<std::endl;
//reading env
void* const env9416 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9416);

//creating new make-kont closure
void** clo9978 = alloc_kont(lam9413_spec, 4);

//setting env list
clo9978[1] = decode_clo_array[1];
clo9978[2] = decode_clo_array[2];
clo9978[3] = id_8846;
clo9978[4] = decode_clo_array[4];
void* f_lam_9097 = encode_clo(clo9978);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9097;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9415_spec(void* env9416, void* id_8846) // lam9415 
{
std::cout<<"In lam9415_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9416);

//creating new make-kont closure
void** clo9979 = alloc_kont(lam9413_spec, 4);

//setting env list
clo9979[1] = decode_clo_array[1];
clo9979[2] = decode_clo_array[2];
clo9979[3] = id_8846;
clo9979[4] = decode_clo_array[4];
void* f_lam_9097 = encode_clo(clo9979);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9097;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9417_fptr() // lam9417 -> generic version 
{
std::cout<<"In lam9417_fptr: generic version"<<std::endl;
//reading env
void* const env9418 = arg_buffer[1];
//reading env and args
void* const id_8844 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9418);

//if-clause
if(is_true(id_8844))
{

//creating new make-kont closure
void** clo9980 = alloc_kont(lam9407_spec, 2);

//setting env list
clo9980[1] = decode_clo_array[1];
clo9980[2] = decode_clo_array[4];
void* f_lam_9094 = encode_clo(clo9980);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9094;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9981 = alloc_kont(lam9415_spec, 4);

//setting env list
clo9981[1] = decode_clo_array[1];
clo9981[2] = decode_clo_array[2];
clo9981[3] = decode_clo_array[3];
clo9981[4] = decode_clo_array[4];
void* f_lam_9098 = encode_clo(clo9981);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9098;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9417_spec(void* env9418, void* id_8844) // lam9417 
{
std::cout<<"In lam9417_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9418);

//if-clause
if(is_true(id_8844))
{

//creating new make-kont closure
void** clo9982 = alloc_kont(lam9407_spec, 2);

//setting env list
clo9982[1] = decode_clo_array[1];
clo9982[2] = decode_clo_array[4];
void* f_lam_9094 = encode_clo(clo9982);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9094;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9983 = alloc_kont(lam9415_spec, 4);

//setting env list
clo9983[1] = decode_clo_array[1];
clo9983[2] = decode_clo_array[2];
clo9983[3] = decode_clo_array[3];
clo9983[4] = decode_clo_array[4];
void* f_lam_9098 = encode_clo(clo9983);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9098;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void list_u45set_fptr() // list-set -> generic version 
{
std::cout<<"In list_u45set_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9093 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9984 = alloc_kont(lam9417_spec, 4);

//setting env list
clo9984[1] = kont9093;
clo9984[2] = index;
clo9984[3] = lst;
clo9984[4] = value;
void* f_lam_9099 = encode_clo(clo9984);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9099;
arg_buffer[3] = index;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void list_u45set_spec(void* _9419, void* kont9093, void* lst, void* index, void* value) // list-set 
{
std::cout<<"In list_u45set_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9985 = alloc_kont(lam9417_spec, 4);

//setting env list
clo9985[1] = kont9093;
clo9985[2] = index;
clo9985[3] = lst;
clo9985[4] = value;
void* f_lam_9099 = encode_clo(clo9985);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9099;
arg_buffer[3] = index;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void lam9420_fptr() // lam9420 -> generic version 
{
std::cout<<"In lam9420_fptr: generic version"<<std::endl;
//reading env
void* const env9421 = arg_buffer[1];
//reading env and args
void* const xy8852 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9421);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8852);
}

inline void lam9420_spec(void* env9421, void* xy8852) // lam9420 
{
std::cout<<"In lam9420_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9421);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8852);
}

inline void lam9422_fptr() // lam9422 -> generic version 
{
std::cout<<"In lam9422_fptr: generic version"<<std::endl;
//reading env
void* const env9423 = arg_buffer[1];
//reading env and args
void* const id_8857 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9423);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8857;
numArgs = 4;
append_fptr();
}

inline void lam9422_spec(void* env9423, void* id_8857) // lam9422 
{
std::cout<<"In lam9422_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9423);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8857;
numArgs = 4;
append_fptr();
}

inline void lam9424_fptr() // lam9424 -> generic version 
{
std::cout<<"In lam9424_fptr: generic version"<<std::endl;
//reading env
void* const env9425 = arg_buffer[1];
//reading env and args
void* const id_8856 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9425);

//creating new make-kont closure
void** clo9986 = alloc_kont(lam9422_spec, 2);

//setting env list
clo9986[1] = decode_clo_array[1];
clo9986[2] = decode_clo_array[2];
void* f_lam_9102 = encode_clo(clo9986);



//clo-app
flatten_spec(flatten, f_lam_9102, id_8856);
}

inline void lam9424_spec(void* env9425, void* id_8856) // lam9424 
{
std::cout<<"In lam9424_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9425);

//creating new make-kont closure
void** clo9987 = alloc_kont(lam9422_spec, 2);

//setting env list
clo9987[1] = decode_clo_array[1];
clo9987[2] = decode_clo_array[2];
void* f_lam_9102 = encode_clo(clo9987);



//clo-app
flatten_spec(flatten, f_lam_9102, id_8856);
}

inline void lam9426_fptr() // lam9426 -> generic version 
{
std::cout<<"In lam9426_fptr: generic version"<<std::endl;
//reading env
void* const env9427 = arg_buffer[1];
//reading env and args
void* const id_8855 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9427);

//creating new make-kont closure
void** clo9988 = alloc_kont(lam9424_spec, 2);

//setting env list
clo9988[1] = id_8855;
clo9988[2] = decode_clo_array[2];
void* f_lam_9103 = encode_clo(clo9988);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9103;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9426_spec(void* env9427, void* id_8855) // lam9426 
{
std::cout<<"In lam9426_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9427);

//creating new make-kont closure
void** clo9989 = alloc_kont(lam9424_spec, 2);

//setting env list
clo9989[1] = id_8855;
clo9989[2] = decode_clo_array[2];
void* f_lam_9103 = encode_clo(clo9989);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9103;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9428_fptr() // lam9428 -> generic version 
{
std::cout<<"In lam9428_fptr: generic version"<<std::endl;
//reading env
void* const env9429 = arg_buffer[1];
//reading env and args
void* const id_8854 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9429);

//creating new make-kont closure
void** clo9990 = alloc_kont(lam9426_spec, 2);

//setting env list
clo9990[1] = decode_clo_array[1];
clo9990[2] = decode_clo_array[2];
void* f_lam_9104 = encode_clo(clo9990);



//clo-app
flatten_spec(flatten, f_lam_9104, id_8854);
}

inline void lam9428_spec(void* env9429, void* id_8854) // lam9428 
{
std::cout<<"In lam9428_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9429);

//creating new make-kont closure
void** clo9991 = alloc_kont(lam9426_spec, 2);

//setting env list
clo9991[1] = decode_clo_array[1];
clo9991[2] = decode_clo_array[2];
void* f_lam_9104 = encode_clo(clo9991);



//clo-app
flatten_spec(flatten, f_lam_9104, id_8854);
}

inline void lam9430_fptr() // lam9430 -> generic version 
{
std::cout<<"In lam9430_fptr: generic version"<<std::endl;
//reading env
void* const env9431 = arg_buffer[1];
//reading env and args
void* const xy8858 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9431);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8858);
}

inline void lam9430_spec(void* env9431, void* xy8858) // lam9430 
{
std::cout<<"In lam9430_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9431);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8858);
}

inline void lam9432_fptr() // lam9432 -> generic version 
{
std::cout<<"In lam9432_fptr: generic version"<<std::endl;
//reading env
void* const env9433 = arg_buffer[1];
//reading env and args
void* const id_8853 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9433);

//if-clause
if(is_true(id_8853))
{

//creating new make-kont closure
void** clo9992 = alloc_kont(lam9428_spec, 2);

//setting env list
clo9992[1] = decode_clo_array[1];
clo9992[2] = decode_clo_array[2];
void* f_lam_9105 = encode_clo(clo9992);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9105;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9993 = alloc_kont(lam9430_spec, 1);

//setting env list
clo9993[1] = decode_clo_array[2];
void* f_lam_9106 = encode_clo(clo9993);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9106;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
list_fptr();
}

}

inline void lam9432_spec(void* env9433, void* id_8853) // lam9432 
{
std::cout<<"In lam9432_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9433);

//if-clause
if(is_true(id_8853))
{

//creating new make-kont closure
void** clo9994 = alloc_kont(lam9428_spec, 2);

//setting env list
clo9994[1] = decode_clo_array[1];
clo9994[2] = decode_clo_array[2];
void* f_lam_9105 = encode_clo(clo9994);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9105;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9995 = alloc_kont(lam9430_spec, 1);

//setting env list
clo9995[1] = decode_clo_array[2];
void* f_lam_9106 = encode_clo(clo9995);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9106;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
list_fptr();
}

}

inline void lam9434_fptr() // lam9434 -> generic version 
{
std::cout<<"In lam9434_fptr: generic version"<<std::endl;
//reading env
void* const env9435 = arg_buffer[1];
//reading env and args
void* const id_8851 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9435);

//if-clause
if(is_true(id_8851))
{

//creating new make-kont closure
void** clo9996 = alloc_kont(lam9420_spec, 1);

//setting env list
clo9996[1] = decode_clo_array[2];
void* f_lam_9101 = encode_clo(clo9996);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9101;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9997 = alloc_kont(lam9432_spec, 2);

//setting env list
clo9997[1] = decode_clo_array[1];
clo9997[2] = decode_clo_array[2];
void* f_lam_9107 = encode_clo(clo9997);



//clo-app
arg_buffer[1] = pair_u63;
arg_buffer[2] = f_lam_9107;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
pair_u63_fptr();
}

}

inline void lam9434_spec(void* env9435, void* id_8851) // lam9434 
{
std::cout<<"In lam9434_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9435);

//if-clause
if(is_true(id_8851))
{

//creating new make-kont closure
void** clo9998 = alloc_kont(lam9420_spec, 1);

//setting env list
clo9998[1] = decode_clo_array[2];
void* f_lam_9101 = encode_clo(clo9998);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9101;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9999 = alloc_kont(lam9432_spec, 2);

//setting env list
clo9999[1] = decode_clo_array[1];
clo9999[2] = decode_clo_array[2];
void* f_lam_9107 = encode_clo(clo9999);



//clo-app
arg_buffer[1] = pair_u63;
arg_buffer[2] = f_lam_9107;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
pair_u63_fptr();
}

}

inline void flatten_fptr() // flatten -> generic version 
{
std::cout<<"In flatten_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9100 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10000 = alloc_kont(lam9434_spec, 2);

//setting env list
clo10000[1] = lst;
clo10000[2] = kont9100;
void* f_lam_9108 = encode_clo(clo10000);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9108;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void flatten_spec(void* _9436, void* kont9100, void* lst) // flatten 
{
std::cout<<"In flatten_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10001 = alloc_kont(lam9434_spec, 2);

//setting env list
clo10001[1] = lst;
clo10001[2] = kont9100;
void* f_lam_9108 = encode_clo(clo10001);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9108;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9437_fptr() // lam9437 -> generic version 
{
std::cout<<"In lam9437_fptr: generic version"<<std::endl;
//reading env
void* const env9438 = arg_buffer[1];
//reading env and args
void* const id_8862 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9438);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8862;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9437_spec(void* env9438, void* id_8862) // lam9437 
{
std::cout<<"In lam9437_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9438);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8862;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9439_fptr() // lam9439 -> generic version 
{
std::cout<<"In lam9439_fptr: generic version"<<std::endl;
//reading env
void* const env9440 = arg_buffer[1];
//reading env and args
void* const id_8861 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9440);

//creating new make-kont closure
void** clo10002 = alloc_kont(lam9437_spec, 3);

//setting env list
clo10002[1] = decode_clo_array[1];
clo10002[2] = decode_clo_array[2];
clo10002[3] = decode_clo_array[3];
void* f_lam_9110 = encode_clo(clo10002);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9110, id_8861, decode_clo_array[2], decode_clo_array[4]);
}

inline void lam9439_spec(void* env9440, void* id_8861) // lam9439 
{
std::cout<<"In lam9439_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9440);

//creating new make-kont closure
void** clo10003 = alloc_kont(lam9437_spec, 3);

//setting env list
clo10003[1] = decode_clo_array[1];
clo10003[2] = decode_clo_array[2];
clo10003[3] = decode_clo_array[3];
void* f_lam_9110 = encode_clo(clo10003);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9110, id_8861, decode_clo_array[2], decode_clo_array[4]);
}

inline void lam9441_fptr() // lam9441 -> generic version 
{
std::cout<<"In lam9441_fptr: generic version"<<std::endl;
//reading env
void* const env9442 = arg_buffer[1];
//reading env and args
void* const id_8860 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9442);

//creating new make-kont closure
void** clo10004 = alloc_kont(lam9439_spec, 4);

//setting env list
clo10004[1] = decode_clo_array[1];
clo10004[2] = decode_clo_array[2];
clo10004[3] = id_8860;
clo10004[4] = decode_clo_array[4];
void* f_lam_9111 = encode_clo(clo10004);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9111;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9441_spec(void* env9442, void* id_8860) // lam9441 
{
std::cout<<"In lam9441_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9442);

//creating new make-kont closure
void** clo10005 = alloc_kont(lam9439_spec, 4);

//setting env list
clo10005[1] = decode_clo_array[1];
clo10005[2] = decode_clo_array[2];
clo10005[3] = id_8860;
clo10005[4] = decode_clo_array[4];
void* f_lam_9111 = encode_clo(clo10005);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9111;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9443_fptr() // lam9443 -> generic version 
{
std::cout<<"In lam9443_fptr: generic version"<<std::endl;
//reading env
void* const env9444 = arg_buffer[1];
//reading env and args
void* const id_8859 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9444);

//if-clause
if(is_true(id_8859))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[4]);
}
else
{

//creating new make-kont closure
void** clo10006 = alloc_kont(lam9441_spec, 4);

//setting env list
clo10006[1] = decode_clo_array[1];
clo10006[2] = decode_clo_array[2];
clo10006[3] = decode_clo_array[3];
clo10006[4] = decode_clo_array[4];
void* f_lam_9112 = encode_clo(clo10006);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9112;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9443_spec(void* env9444, void* id_8859) // lam9443 
{
std::cout<<"In lam9443_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9444);

//if-clause
if(is_true(id_8859))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[4]);
}
else
{

//creating new make-kont closure
void** clo10007 = alloc_kont(lam9441_spec, 4);

//setting env list
clo10007[1] = decode_clo_array[1];
clo10007[2] = decode_clo_array[2];
clo10007[3] = decode_clo_array[3];
clo10007[4] = decode_clo_array[4];
void* f_lam_9112 = encode_clo(clo10007);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9112;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void my_u45foldr_u45aux_fptr() // my-foldr-aux -> generic version 
{
std::cout<<"In my_u45foldr_u45aux_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9109 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const f = arg_buffer[4];
void* const base = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10008 = alloc_kont(lam9443_spec, 4);

//setting env list
clo10008[1] = kont9109;
clo10008[2] = f;
clo10008[3] = lst;
clo10008[4] = base;
void* f_lam_9113 = encode_clo(clo10008);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9113;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void my_u45foldr_u45aux_spec(void* _9445, void* kont9109, void* lst, void* f, void* base) // my-foldr-aux 
{
std::cout<<"In my_u45foldr_u45aux_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10009 = alloc_kont(lam9443_spec, 4);

//setting env list
clo10009[1] = kont9109;
clo10009[2] = f;
clo10009[3] = lst;
clo10009[4] = base;
void* f_lam_9113 = encode_clo(clo10009);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9113;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9446_fptr() // lam9446 -> generic version 
{
std::cout<<"In lam9446_fptr: generic version"<<std::endl;
//reading env
void* const env9447 = arg_buffer[1];
//reading env and args
void* const xy8863 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9447);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8863);
}

inline void lam9446_spec(void* env9447, void* xy8863) // lam9446 
{
std::cout<<"In lam9446_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9447);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8863);
}

inline void my_u45foldr_fptr() // my-foldr -> generic version 
{
std::cout<<"In my_u45foldr_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9114 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const base = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10010 = alloc_kont(lam9446_spec, 1);

//setting env list
clo10010[1] = kont9114;
void* f_lam_9115 = encode_clo(clo10010);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9115, lst, f, base);
}

inline void my_u45foldr_spec(void* _9448, void* kont9114, void* f, void* base, void* lst) // my-foldr 
{
std::cout<<"In my_u45foldr_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10011 = alloc_kont(lam9446_spec, 1);

//setting env list
clo10011[1] = kont9114;
void* f_lam_9115 = encode_clo(clo10011);



//clo-app
my_u45foldr_u45aux_spec(my_u45foldr_u45aux, f_lam_9115, lst, f, base);
}

inline void lam9449_fptr() // lam9449 -> generic version 
{
std::cout<<"In lam9449_fptr: generic version"<<std::endl;
//reading env
void* const env9450 = arg_buffer[1];
//reading env and args
void* const id_8867 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9450);

//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, decode_clo_array[3], decode_clo_array[2], decode_clo_array[1], id_8867);
}

inline void lam9449_spec(void* env9450, void* id_8867) // lam9449 
{
std::cout<<"In lam9449_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9450);

//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, decode_clo_array[3], decode_clo_array[2], decode_clo_array[1], id_8867);
}

inline void lam9451_fptr() // lam9451 -> generic version 
{
std::cout<<"In lam9451_fptr: generic version"<<std::endl;
//reading env
void* const env9452 = arg_buffer[1];
//reading env and args
void* const id_8866 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9452);

//creating new make-kont closure
void** clo10012 = alloc_kont(lam9449_spec, 3);

//setting env list
clo10012[1] = id_8866;
clo10012[2] = decode_clo_array[3];
clo10012[3] = decode_clo_array[1];
void* f_lam_9117 = encode_clo(clo10012);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9117;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9451_spec(void* env9452, void* id_8866) // lam9451 
{
std::cout<<"In lam9451_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9452);

//creating new make-kont closure
void** clo10013 = alloc_kont(lam9449_spec, 3);

//setting env list
clo10013[1] = id_8866;
clo10013[2] = decode_clo_array[3];
clo10013[3] = decode_clo_array[1];
void* f_lam_9117 = encode_clo(clo10013);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9117;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9453_fptr() // lam9453 -> generic version 
{
std::cout<<"In lam9453_fptr: generic version"<<std::endl;
//reading env
void* const env9454 = arg_buffer[1];
//reading env and args
void* const id_8865 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9454);

//creating new make-kont closure
void** clo10014 = alloc_kont(lam9451_spec, 3);

//setting env list
clo10014[1] = decode_clo_array[1];
clo10014[2] = decode_clo_array[2];
clo10014[3] = decode_clo_array[3];
void* f_lam_9118 = encode_clo(clo10014);



//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = f_lam_9118;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8865;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam9453_spec(void* env9454, void* id_8865) // lam9453 
{
std::cout<<"In lam9453_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9454);

//creating new make-kont closure
void** clo10015 = alloc_kont(lam9451_spec, 3);

//setting env list
clo10015[1] = decode_clo_array[1];
clo10015[2] = decode_clo_array[2];
clo10015[3] = decode_clo_array[3];
void* f_lam_9118 = encode_clo(clo10015);



//clo-app
arg_buffer[1] = decode_clo_array[3];
arg_buffer[2] = f_lam_9118;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8865;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[3]))[0])();
}

inline void lam9455_fptr() // lam9455 -> generic version 
{
std::cout<<"In lam9455_fptr: generic version"<<std::endl;
//reading env
void* const env9456 = arg_buffer[1];
//reading env and args
void* const id_8864 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9456);

//if-clause
if(is_true(id_8864))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[4]);
}
else
{

//creating new make-kont closure
void** clo10016 = alloc_kont(lam9453_spec, 4);

//setting env list
clo10016[1] = decode_clo_array[1];
clo10016[2] = decode_clo_array[2];
clo10016[3] = decode_clo_array[3];
clo10016[4] = decode_clo_array[4];
void* f_lam_9119 = encode_clo(clo10016);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9119;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9455_spec(void* env9456, void* id_8864) // lam9455 
{
std::cout<<"In lam9455_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9456);

//if-clause
if(is_true(id_8864))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[4]);
}
else
{

//creating new make-kont closure
void** clo10017 = alloc_kont(lam9453_spec, 4);

//setting env list
clo10017[1] = decode_clo_array[1];
clo10017[2] = decode_clo_array[2];
clo10017[3] = decode_clo_array[3];
clo10017[4] = decode_clo_array[4];
void* f_lam_9119 = encode_clo(clo10017);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9119;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void my_u45foldl_u45aux_fptr() // my-foldl-aux -> generic version 
{
std::cout<<"In my_u45foldl_u45aux_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9116 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const base = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10018 = alloc_kont(lam9455_spec, 4);

//setting env list
clo10018[1] = kont9116;
clo10018[2] = lst;
clo10018[3] = f;
clo10018[4] = base;
void* f_lam_9120 = encode_clo(clo10018);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9120;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void my_u45foldl_u45aux_spec(void* _9457, void* kont9116, void* f, void* base, void* lst) // my-foldl-aux 
{
std::cout<<"In my_u45foldl_u45aux_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10019 = alloc_kont(lam9455_spec, 4);

//setting env list
clo10019[1] = kont9116;
clo10019[2] = lst;
clo10019[3] = f;
clo10019[4] = base;
void* f_lam_9120 = encode_clo(clo10019);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9120;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9458_fptr() // lam9458 -> generic version 
{
std::cout<<"In lam9458_fptr: generic version"<<std::endl;
//reading env
void* const env9459 = arg_buffer[1];
//reading env and args
void* const xy8868 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9459);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8868);
}

inline void lam9458_spec(void* env9459, void* xy8868) // lam9458 
{
std::cout<<"In lam9458_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9459);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8868);
}

inline void my_u45foldl_fptr() // my-foldl -> generic version 
{
std::cout<<"In my_u45foldl_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9121 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const base = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10020 = alloc_kont(lam9458_spec, 1);

//setting env list
clo10020[1] = kont9121;
void* f_lam_9122 = encode_clo(clo10020);



//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, f_lam_9122, f, base, lst);
}

inline void my_u45foldl_spec(void* _9460, void* kont9121, void* f, void* base, void* lst) // my-foldl 
{
std::cout<<"In my_u45foldl_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10021 = alloc_kont(lam9458_spec, 1);

//setting env list
clo10021[1] = kont9121;
void* f_lam_9122 = encode_clo(clo10021);



//clo-app
my_u45foldl_u45aux_spec(my_u45foldl_u45aux, f_lam_9122, f, base, lst);
}

inline void lam9461_fptr() // lam9461 -> generic version 
{
std::cout<<"In lam9461_fptr: generic version"<<std::endl;
//reading env
void* const env9462 = arg_buffer[1];
//reading env and args
void* const id_8873 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9462);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8873;
numArgs = 4;
cons_fptr();
}

inline void lam9461_spec(void* env9462, void* id_8873) // lam9461 
{
std::cout<<"In lam9461_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9462);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8873;
numArgs = 4;
cons_fptr();
}

inline void lam9463_fptr() // lam9463 -> generic version 
{
std::cout<<"In lam9463_fptr: generic version"<<std::endl;
//reading env
void* const env9464 = arg_buffer[1];
//reading env and args
void* const id_8872 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9464);

//creating new make-kont closure
void** clo10022 = alloc_kont(lam9461_spec, 2);

//setting env list
clo10022[1] = decode_clo_array[1];
clo10022[2] = decode_clo_array[3];
void* f_lam_9124 = encode_clo(clo10022);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9124, id_8872, decode_clo_array[2], decode_clo_array[4]);
}

inline void lam9463_spec(void* env9464, void* id_8872) // lam9463 
{
std::cout<<"In lam9463_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9464);

//creating new make-kont closure
void** clo10023 = alloc_kont(lam9461_spec, 2);

//setting env list
clo10023[1] = decode_clo_array[1];
clo10023[2] = decode_clo_array[3];
void* f_lam_9124 = encode_clo(clo10023);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9124, id_8872, decode_clo_array[2], decode_clo_array[4]);
}

inline void lam9465_fptr() // lam9465 -> generic version 
{
std::cout<<"In lam9465_fptr: generic version"<<std::endl;
//reading env
void* const env9466 = arg_buffer[1];
//reading env and args
void* const id_8870 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9466);

//creating new make-kont closure
void** clo10024 = alloc_kont(lam9463_spec, 4);

//setting env list
clo10024[1] = id_8870;
clo10024[2] = decode_clo_array[1];
clo10024[3] = decode_clo_array[2];
clo10024[4] = decode_clo_array[4];
void* f_lam_9125 = encode_clo(clo10024);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9125;
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}

inline void lam9465_spec(void* env9466, void* id_8870) // lam9465 
{
std::cout<<"In lam9465_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9466);

//creating new make-kont closure
void** clo10025 = alloc_kont(lam9463_spec, 4);

//setting env list
clo10025[1] = id_8870;
clo10025[2] = decode_clo_array[1];
clo10025[3] = decode_clo_array[2];
clo10025[4] = decode_clo_array[4];
void* f_lam_9125 = encode_clo(clo10025);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9125;
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}

inline void lam9467_fptr() // lam9467 -> generic version 
{
std::cout<<"In lam9467_fptr: generic version"<<std::endl;
//reading env
void* const env9468 = arg_buffer[1];
//reading env and args
void* const xy8874 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9468);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8874);
}

inline void lam9467_spec(void* env9468, void* xy8874) // lam9467 
{
std::cout<<"In lam9467_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9468);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8874);
}

inline void lam9469_fptr() // lam9469 -> generic version 
{
std::cout<<"In lam9469_fptr: generic version"<<std::endl;
//reading env
void* const env9470 = arg_buffer[1];
//reading env and args
void* const id_8869 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9470);

//if-clause
if(is_true(id_8869))
{

//creating new make-kont closure
void** clo10026 = alloc_kont(lam9465_spec, 4);

//setting env list
clo10026[1] = decode_clo_array[1];
clo10026[2] = decode_clo_array[2];
clo10026[3] = decode_clo_array[3];
clo10026[4] = decode_clo_array[4];
void* f_lam_9126 = encode_clo(clo10026);



//clo-app
arg_buffer[1] = decode_clo_array[4];
arg_buffer[2] = f_lam_9126;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[4]))[0])();
}
else
{

//creating new make-kont closure
void** clo10027 = alloc_kont(lam9467_spec, 1);

//setting env list
clo10027[1] = decode_clo_array[2];
void* f_lam_9127 = encode_clo(clo10027);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9127;
numArgs = 2;
list_fptr();
}

}

inline void lam9469_spec(void* env9470, void* id_8869) // lam9469 
{
std::cout<<"In lam9469_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9470);

//if-clause
if(is_true(id_8869))
{

//creating new make-kont closure
void** clo10028 = alloc_kont(lam9465_spec, 4);

//setting env list
clo10028[1] = decode_clo_array[1];
clo10028[2] = decode_clo_array[2];
clo10028[3] = decode_clo_array[3];
clo10028[4] = decode_clo_array[4];
void* f_lam_9126 = encode_clo(clo10028);



//clo-app
arg_buffer[1] = decode_clo_array[4];
arg_buffer[2] = f_lam_9126;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[4]))[0])();
}
else
{

//creating new make-kont closure
void** clo10029 = alloc_kont(lam9467_spec, 1);

//setting env list
clo10029[1] = decode_clo_array[2];
void* f_lam_9127 = encode_clo(clo10029);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9127;
numArgs = 2;
list_fptr();
}

}

inline void my_u45for_u45aux_fptr() // my-for-aux -> generic version 
{
std::cout<<"In my_u45for_u45aux_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9123 = arg_buffer[2];
void* const lo = arg_buffer[3];
void* const hi = arg_buffer[4];
void* const f = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10030 = alloc_kont(lam9469_spec, 4);

//setting env list
clo10030[1] = hi;
clo10030[2] = kont9123;
clo10030[3] = lo;
clo10030[4] = f;
void* f_lam_9128 = encode_clo(clo10030);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_9128;
arg_buffer[3] = lo;
arg_buffer[4] = hi;
numArgs = 4;
_u60_fptr();
}

inline void my_u45for_u45aux_spec(void* _9471, void* kont9123, void* lo, void* hi, void* f) // my-for-aux 
{
std::cout<<"In my_u45for_u45aux_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10031 = alloc_kont(lam9469_spec, 4);

//setting env list
clo10031[1] = hi;
clo10031[2] = kont9123;
clo10031[3] = lo;
clo10031[4] = f;
void* f_lam_9128 = encode_clo(clo10031);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_9128;
arg_buffer[3] = lo;
arg_buffer[4] = hi;
numArgs = 4;
_u60_fptr();
}

inline void lam9472_fptr() // lam9472 -> generic version 
{
std::cout<<"In lam9472_fptr: generic version"<<std::endl;
//reading env
void* const env9473 = arg_buffer[1];
//reading env and args
void* const xy8875 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9473);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8875);
}

inline void lam9472_spec(void* env9473, void* xy8875) // lam9472 
{
std::cout<<"In lam9472_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9473);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8875);
}

inline void my_u45for_fptr() // my-for -> generic version 
{
std::cout<<"In my_u45for_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9129 = arg_buffer[2];
void* const lo = arg_buffer[3];
void* const hi = arg_buffer[4];
void* const f = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10032 = alloc_kont(lam9472_spec, 1);

//setting env list
clo10032[1] = kont9129;
void* f_lam_9130 = encode_clo(clo10032);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9130, lo, hi, f);
}

inline void my_u45for_spec(void* _9474, void* kont9129, void* lo, void* hi, void* f) // my-for 
{
std::cout<<"In my_u45for_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10033 = alloc_kont(lam9472_spec, 1);

//setting env list
clo10033[1] = kont9129;
void* f_lam_9130 = encode_clo(clo10033);



//clo-app
my_u45for_u45aux_spec(my_u45for_u45aux, f_lam_9130, lo, hi, f);
}

inline void lam9475_fptr() // lam9475 -> generic version 
{
std::cout<<"In lam9475_fptr: generic version"<<std::endl;
//reading env
void* const env9476 = arg_buffer[1];
//reading env and args
void* const id_8876 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9476);

//clo-app
my_u45foldr_spec(my_u45foldr, decode_clo_array[2], append, id_8876, decode_clo_array[1]);
}

inline void lam9475_spec(void* env9476, void* id_8876) // lam9475 
{
std::cout<<"In lam9475_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9476);

//clo-app
my_u45foldr_spec(my_u45foldr, decode_clo_array[2], append, id_8876, decode_clo_array[1]);
}

inline void concat_fptr() // concat -> generic version 
{
std::cout<<"In concat_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9131 = arg_buffer[2];
void* const lists = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10034 = alloc_kont(lam9475_spec, 2);

//setting env list
clo10034[1] = lists;
clo10034[2] = kont9131;
void* f_lam_9132 = encode_clo(clo10034);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9132;
numArgs = 2;
list_fptr();
}

inline void concat_spec(void* _9477, void* kont9131, void* lists) // concat 
{
std::cout<<"In concat_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10035 = alloc_kont(lam9475_spec, 2);

//setting env list
clo10035[1] = lists;
clo10035[2] = kont9131;
void* f_lam_9132 = encode_clo(clo10035);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9132;
numArgs = 2;
list_fptr();
}

inline void lam9478_fptr() // lam9478 -> generic version 
{
std::cout<<"In lam9478_fptr: generic version"<<std::endl;
//reading env
void* const env9479 = arg_buffer[1];
//reading env and args
void* const xy8879 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9479);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8879);
}

inline void lam9478_spec(void* env9479, void* xy8879) // lam9478 
{
std::cout<<"In lam9478_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9479);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8879);
}

inline void lam9480_fptr() // lam9480 -> generic version 
{
std::cout<<"In lam9480_fptr: generic version"<<std::endl;
//reading env
void* const env9481 = arg_buffer[1];
//reading env and args
void* const id_8882 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9481);

//clo-app
list_u45read_spec(list_u45read, decode_clo_array[2], decode_clo_array[1], id_8882);
}

inline void lam9480_spec(void* env9481, void* id_8882) // lam9480 
{
std::cout<<"In lam9480_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9481);

//clo-app
list_u45read_spec(list_u45read, decode_clo_array[2], decode_clo_array[1], id_8882);
}

inline void lam9482_fptr() // lam9482 -> generic version 
{
std::cout<<"In lam9482_fptr: generic version"<<std::endl;
//reading env
void* const env9483 = arg_buffer[1];
//reading env and args
void* const id_8880 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9483);

//creating new make-kont closure
void** clo10036 = alloc_kont(lam9480_spec, 2);

//setting env list
clo10036[1] = id_8880;
clo10036[2] = decode_clo_array[2];
void* f_lam_9135 = encode_clo(clo10036);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9135;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9482_spec(void* env9483, void* id_8880) // lam9482 
{
std::cout<<"In lam9482_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9483);

//creating new make-kont closure
void** clo10037 = alloc_kont(lam9480_spec, 2);

//setting env list
clo10037[1] = id_8880;
clo10037[2] = decode_clo_array[2];
void* f_lam_9135 = encode_clo(clo10037);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9135;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9484_fptr() // lam9484 -> generic version 
{
std::cout<<"In lam9484_fptr: generic version"<<std::endl;
//reading env
void* const env9485 = arg_buffer[1];
//reading env and args
void* const id_8878 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9485);

//if-clause
if(is_true(id_8878))
{

//creating new make-kont closure
void** clo10038 = alloc_kont(lam9478_spec, 1);

//setting env list
clo10038[1] = decode_clo_array[2];
void* f_lam_9134 = encode_clo(clo10038);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9134;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo10039 = alloc_kont(lam9482_spec, 2);

//setting env list
clo10039[1] = decode_clo_array[1];
clo10039[2] = decode_clo_array[2];
void* f_lam_9136 = encode_clo(clo10039);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9136;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9484_spec(void* env9485, void* id_8878) // lam9484 
{
std::cout<<"In lam9484_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9485);

//if-clause
if(is_true(id_8878))
{

//creating new make-kont closure
void** clo10040 = alloc_kont(lam9478_spec, 1);

//setting env list
clo10040[1] = decode_clo_array[2];
void* f_lam_9134 = encode_clo(clo10040);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9134;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo10041 = alloc_kont(lam9482_spec, 2);

//setting env list
clo10041[1] = decode_clo_array[1];
clo10041[2] = decode_clo_array[2];
void* f_lam_9136 = encode_clo(clo10041);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9136;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void list_u45read_fptr() // list-read -> generic version 
{
std::cout<<"In list_u45read_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9133 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const i = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10042 = alloc_kont(lam9484_spec, 3);

//setting env list
clo10042[1] = i;
clo10042[2] = kont9133;
clo10042[3] = lst;
void* f_lam_9137 = encode_clo(clo10042);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9137;
arg_buffer[3] = i;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void list_u45read_spec(void* _9486, void* kont9133, void* lst, void* i) // list-read 
{
std::cout<<"In list_u45read_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10043 = alloc_kont(lam9484_spec, 3);

//setting env list
clo10043[1] = i;
clo10043[2] = kont9133;
clo10043[3] = lst;
void* f_lam_9137 = encode_clo(clo10043);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9137;
arg_buffer[3] = i;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void lam9487_fptr() // lam9487 -> generic version 
{
std::cout<<"In lam9487_fptr: generic version"<<std::endl;
//reading env
void* const env9488 = arg_buffer[1];
//reading env and args
void* const id_8885 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9488);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8885;
numArgs = 4;
cons_fptr();
}

inline void lam9487_spec(void* env9488, void* id_8885) // lam9487 
{
std::cout<<"In lam9487_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9488);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8885;
numArgs = 4;
cons_fptr();
}

inline void lam9489_fptr() // lam9489 -> generic version 
{
std::cout<<"In lam9489_fptr: generic version"<<std::endl;
//reading env
void* const env9490 = arg_buffer[1];
//reading env and args
void* const id_8890 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9490);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8890;
numArgs = 4;
cons_fptr();
}

inline void lam9489_spec(void* env9490, void* id_8890) // lam9489 
{
std::cout<<"In lam9489_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9490);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8890;
numArgs = 4;
cons_fptr();
}

inline void lam9491_fptr() // lam9491 -> generic version 
{
std::cout<<"In lam9491_fptr: generic version"<<std::endl;
//reading env
void* const env9492 = arg_buffer[1];
//reading env and args
void* const id_8889 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9492);

//creating new make-kont closure
void** clo10044 = alloc_kont(lam9489_spec, 2);

//setting env list
clo10044[1] = decode_clo_array[2];
clo10044[2] = decode_clo_array[3];
void* f_lam_9140 = encode_clo(clo10044);



//clo-app
list_u45write_spec(list_u45write, f_lam_9140, decode_clo_array[1], id_8889, decode_clo_array[4]);
}

inline void lam9491_spec(void* env9492, void* id_8889) // lam9491 
{
std::cout<<"In lam9491_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9492);

//creating new make-kont closure
void** clo10045 = alloc_kont(lam9489_spec, 2);

//setting env list
clo10045[1] = decode_clo_array[2];
clo10045[2] = decode_clo_array[3];
void* f_lam_9140 = encode_clo(clo10045);



//clo-app
list_u45write_spec(list_u45write, f_lam_9140, decode_clo_array[1], id_8889, decode_clo_array[4]);
}

inline void lam9493_fptr() // lam9493 -> generic version 
{
std::cout<<"In lam9493_fptr: generic version"<<std::endl;
//reading env
void* const env9494 = arg_buffer[1];
//reading env and args
void* const id_8887 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9494);

//creating new make-kont closure
void** clo10046 = alloc_kont(lam9491_spec, 4);

//setting env list
clo10046[1] = id_8887;
clo10046[2] = decode_clo_array[3];
clo10046[3] = decode_clo_array[2];
clo10046[4] = decode_clo_array[4];
void* f_lam_9141 = encode_clo(clo10046);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9141;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9493_spec(void* env9494, void* id_8887) // lam9493 
{
std::cout<<"In lam9493_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9494);

//creating new make-kont closure
void** clo10047 = alloc_kont(lam9491_spec, 4);

//setting env list
clo10047[1] = id_8887;
clo10047[2] = decode_clo_array[3];
clo10047[3] = decode_clo_array[2];
clo10047[4] = decode_clo_array[4];
void* f_lam_9141 = encode_clo(clo10047);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9141;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9495_fptr() // lam9495 -> generic version 
{
std::cout<<"In lam9495_fptr: generic version"<<std::endl;
//reading env
void* const env9496 = arg_buffer[1];
//reading env and args
void* const id_8886 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9496);

//creating new make-kont closure
void** clo10048 = alloc_kont(lam9493_spec, 4);

//setting env list
clo10048[1] = decode_clo_array[1];
clo10048[2] = decode_clo_array[2];
clo10048[3] = id_8886;
clo10048[4] = decode_clo_array[4];
void* f_lam_9142 = encode_clo(clo10048);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9142;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9495_spec(void* env9496, void* id_8886) // lam9495 
{
std::cout<<"In lam9495_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9496);

//creating new make-kont closure
void** clo10049 = alloc_kont(lam9493_spec, 4);

//setting env list
clo10049[1] = decode_clo_array[1];
clo10049[2] = decode_clo_array[2];
clo10049[3] = id_8886;
clo10049[4] = decode_clo_array[4];
void* f_lam_9142 = encode_clo(clo10049);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9142;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9497_fptr() // lam9497 -> generic version 
{
std::cout<<"In lam9497_fptr: generic version"<<std::endl;
//reading env
void* const env9498 = arg_buffer[1];
//reading env and args
void* const id_8884 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9498);

//if-clause
if(is_true(id_8884))
{

//creating new make-kont closure
void** clo10050 = alloc_kont(lam9487_spec, 2);

//setting env list
clo10050[1] = decode_clo_array[2];
clo10050[2] = decode_clo_array[4];
void* f_lam_9139 = encode_clo(clo10050);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9139;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo10051 = alloc_kont(lam9495_spec, 4);

//setting env list
clo10051[1] = decode_clo_array[1];
clo10051[2] = decode_clo_array[2];
clo10051[3] = decode_clo_array[3];
clo10051[4] = decode_clo_array[4];
void* f_lam_9143 = encode_clo(clo10051);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9143;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9497_spec(void* env9498, void* id_8884) // lam9497 
{
std::cout<<"In lam9497_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9498);

//if-clause
if(is_true(id_8884))
{

//creating new make-kont closure
void** clo10052 = alloc_kont(lam9487_spec, 2);

//setting env list
clo10052[1] = decode_clo_array[2];
clo10052[2] = decode_clo_array[4];
void* f_lam_9139 = encode_clo(clo10052);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9139;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo10053 = alloc_kont(lam9495_spec, 4);

//setting env list
clo10053[1] = decode_clo_array[1];
clo10053[2] = decode_clo_array[2];
clo10053[3] = decode_clo_array[3];
clo10053[4] = decode_clo_array[4];
void* f_lam_9143 = encode_clo(clo10053);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9143;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void list_u45write_fptr() // list-write -> generic version 
{
std::cout<<"In list_u45write_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9138 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const i = arg_buffer[4];
void* const val = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10054 = alloc_kont(lam9497_spec, 4);

//setting env list
clo10054[1] = i;
clo10054[2] = kont9138;
clo10054[3] = lst;
clo10054[4] = val;
void* f_lam_9144 = encode_clo(clo10054);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9144;
arg_buffer[3] = i;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void list_u45write_spec(void* _9499, void* kont9138, void* lst, void* i, void* val) // list-write 
{
std::cout<<"In list_u45write_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10055 = alloc_kont(lam9497_spec, 4);

//setting env list
clo10055[1] = i;
clo10055[2] = kont9138;
clo10055[3] = lst;
clo10055[4] = val;
void* f_lam_9144 = encode_clo(clo10055);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9144;
arg_buffer[3] = i;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void lam9500_fptr() // lam9500 -> generic version 
{
std::cout<<"In lam9500_fptr: generic version"<<std::endl;
//reading env
void* const env9501 = arg_buffer[1];
//reading env and args
void* const xy8893 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9501);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8893);
}

inline void lam9500_spec(void* env9501, void* xy8893) // lam9500 
{
std::cout<<"In lam9500_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9501);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8893);
}

inline void lam9502_fptr() // lam9502 -> generic version 
{
std::cout<<"In lam9502_fptr: generic version"<<std::endl;
//reading env
void* const env9503 = arg_buffer[1];
//reading env and args
void* const id_8898 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9503);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8898;
numArgs = 4;
cons_fptr();
}

inline void lam9502_spec(void* env9503, void* id_8898) // lam9502 
{
std::cout<<"In lam9502_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9503);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8898;
numArgs = 4;
cons_fptr();
}

inline void lam9504_fptr() // lam9504 -> generic version 
{
std::cout<<"In lam9504_fptr: generic version"<<std::endl;
//reading env
void* const env9505 = arg_buffer[1];
//reading env and args
void* const id_8897 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9505);

//creating new make-kont closure
void** clo10056 = alloc_kont(lam9502_spec, 2);

//setting env list
clo10056[1] = decode_clo_array[2];
clo10056[2] = decode_clo_array[3];
void* f_lam_9147 = encode_clo(clo10056);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9147, decode_clo_array[1], id_8897);
}

inline void lam9504_spec(void* env9505, void* id_8897) // lam9504 
{
std::cout<<"In lam9504_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9505);

//creating new make-kont closure
void** clo10057 = alloc_kont(lam9502_spec, 2);

//setting env list
clo10057[1] = decode_clo_array[2];
clo10057[2] = decode_clo_array[3];
void* f_lam_9147 = encode_clo(clo10057);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9147, decode_clo_array[1], id_8897);
}

inline void lam9506_fptr() // lam9506 -> generic version 
{
std::cout<<"In lam9506_fptr: generic version"<<std::endl;
//reading env
void* const env9507 = arg_buffer[1];
//reading env and args
void* const id_8895 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9507);

//creating new make-kont closure
void** clo10058 = alloc_kont(lam9504_spec, 3);

//setting env list
clo10058[1] = id_8895;
clo10058[2] = decode_clo_array[2];
clo10058[3] = decode_clo_array[3];
void* f_lam_9148 = encode_clo(clo10058);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9148;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9506_spec(void* env9507, void* id_8895) // lam9506 
{
std::cout<<"In lam9506_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9507);

//creating new make-kont closure
void** clo10059 = alloc_kont(lam9504_spec, 3);

//setting env list
clo10059[1] = id_8895;
clo10059[2] = decode_clo_array[2];
clo10059[3] = decode_clo_array[3];
void* f_lam_9148 = encode_clo(clo10059);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9148;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9508_fptr() // lam9508 -> generic version 
{
std::cout<<"In lam9508_fptr: generic version"<<std::endl;
//reading env
void* const env9509 = arg_buffer[1];
//reading env and args
void* const id_8894 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9509);

//creating new make-kont closure
void** clo10060 = alloc_kont(lam9506_spec, 3);

//setting env list
clo10060[1] = decode_clo_array[1];
clo10060[2] = id_8894;
clo10060[3] = decode_clo_array[3];
void* f_lam_9149 = encode_clo(clo10060);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9149;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9508_spec(void* env9509, void* id_8894) // lam9508 
{
std::cout<<"In lam9508_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9509);

//creating new make-kont closure
void** clo10061 = alloc_kont(lam9506_spec, 3);

//setting env list
clo10061[1] = decode_clo_array[1];
clo10061[2] = id_8894;
clo10061[3] = decode_clo_array[3];
void* f_lam_9149 = encode_clo(clo10061);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9149;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9510_fptr() // lam9510 -> generic version 
{
std::cout<<"In lam9510_fptr: generic version"<<std::endl;
//reading env
void* const env9511 = arg_buffer[1];
//reading env and args
void* const id_8892 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9511);

//if-clause
if(is_true(id_8892))
{

//creating new make-kont closure
void** clo10062 = alloc_kont(lam9500_spec, 1);

//setting env list
clo10062[1] = decode_clo_array[3];
void* f_lam_9146 = encode_clo(clo10062);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9146;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo10063 = alloc_kont(lam9508_spec, 3);

//setting env list
clo10063[1] = decode_clo_array[1];
clo10063[2] = decode_clo_array[2];
clo10063[3] = decode_clo_array[3];
void* f_lam_9150 = encode_clo(clo10063);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9150;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9510_spec(void* env9511, void* id_8892) // lam9510 
{
std::cout<<"In lam9510_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9511);

//if-clause
if(is_true(id_8892))
{

//creating new make-kont closure
void** clo10064 = alloc_kont(lam9500_spec, 1);

//setting env list
clo10064[1] = decode_clo_array[3];
void* f_lam_9146 = encode_clo(clo10064);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9146;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo10065 = alloc_kont(lam9508_spec, 3);

//setting env list
clo10065[1] = decode_clo_array[1];
clo10065[2] = decode_clo_array[2];
clo10065[3] = decode_clo_array[3];
void* f_lam_9150 = encode_clo(clo10065);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9150;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void list_u45remove_u45pos_fptr() // list-remove-pos -> generic version 
{
std::cout<<"In list_u45remove_u45pos_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9145 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const i = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10066 = alloc_kont(lam9510_spec, 3);

//setting env list
clo10066[1] = i;
clo10066[2] = lst;
clo10066[3] = kont9145;
void* f_lam_9151 = encode_clo(clo10066);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9151;
arg_buffer[3] = i;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void list_u45remove_u45pos_spec(void* _9512, void* kont9145, void* lst, void* i) // list-remove-pos 
{
std::cout<<"In list_u45remove_u45pos_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10067 = alloc_kont(lam9510_spec, 3);

//setting env list
clo10067[1] = i;
clo10067[2] = lst;
clo10067[3] = kont9145;
void* f_lam_9151 = encode_clo(clo10067);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_9151;
arg_buffer[3] = i;
arg_buffer[4] = int9803;
numArgs = 4;
_u61_fptr();
}

inline void lam9513_fptr() // lam9513 -> generic version 
{
std::cout<<"In lam9513_fptr: generic version"<<std::endl;
//reading env
void* const env9514 = arg_buffer[1];
//reading env and args
void* const id_8905 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9514);

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], id_8905);
}

inline void lam9513_spec(void* env9514, void* id_8905) // lam9513 
{
std::cout<<"In lam9513_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9514);

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], id_8905);
}

inline void lam9515_fptr() // lam9515 -> generic version 
{
std::cout<<"In lam9515_fptr: generic version"<<std::endl;
//reading env
void* const env9516 = arg_buffer[1];
//reading env and args
void* const id_8904 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9516);

//creating new make-kont closure
void** clo10068 = alloc_kont(lam9513_spec, 2);

//setting env list
clo10068[1] = decode_clo_array[1];
clo10068[2] = id_8904;
void* f_lam_9153 = encode_clo(clo10068);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9153;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9515_spec(void* env9516, void* id_8904) // lam9515 
{
std::cout<<"In lam9515_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9516);

//creating new make-kont closure
void** clo10069 = alloc_kont(lam9513_spec, 2);

//setting env list
clo10069[1] = decode_clo_array[1];
clo10069[2] = id_8904;
void* f_lam_9153 = encode_clo(clo10069);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9153;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9517_fptr() // lam9517 -> generic version 
{
std::cout<<"In lam9517_fptr: generic version"<<std::endl;
//reading env
void* const env9518 = arg_buffer[1];
//reading env and args
void* const id_8906 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9518);

//clo-app
duplicates_u63_spec(duplicates_u63, decode_clo_array[1], id_8906);
}

inline void lam9517_spec(void* env9518, void* id_8906) // lam9517 
{
std::cout<<"In lam9517_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9518);

//clo-app
duplicates_u63_spec(duplicates_u63, decode_clo_array[1], id_8906);
}

inline void lam9519_fptr() // lam9519 -> generic version 
{
std::cout<<"In lam9519_fptr: generic version"<<std::endl;
//reading env
void* const env9520 = arg_buffer[1];
//reading env and args
void* const id_8903 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9520);

//if-clause
if(is_true(id_8903))
{

//creating new make-kont closure
void** clo10070 = alloc_kont(lam9515_spec, 2);

//setting env list
clo10070[1] = decode_clo_array[1];
clo10070[2] = decode_clo_array[2];
void* f_lam_9154 = encode_clo(clo10070);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9154;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo10071 = alloc_kont(lam9517_spec, 1);

//setting env list
clo10071[1] = decode_clo_array[1];
void* f_lam_9155 = encode_clo(clo10071);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9155;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9519_spec(void* env9520, void* id_8903) // lam9519 
{
std::cout<<"In lam9519_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9520);

//if-clause
if(is_true(id_8903))
{

//creating new make-kont closure
void** clo10072 = alloc_kont(lam9515_spec, 2);

//setting env list
clo10072[1] = decode_clo_array[1];
clo10072[2] = decode_clo_array[2];
void* f_lam_9154 = encode_clo(clo10072);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9154;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo10073 = alloc_kont(lam9517_spec, 1);

//setting env list
clo10073[1] = decode_clo_array[1];
void* f_lam_9155 = encode_clo(clo10073);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9155;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9521_fptr() // lam9521 -> generic version 
{
std::cout<<"In lam9521_fptr: generic version"<<std::endl;
//reading env
void* const env9522 = arg_buffer[1];
//reading env and args
void* const id_8902 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9522);

//creating new make-kont closure
void** clo10074 = alloc_kont(lam9519_spec, 2);

//setting env list
clo10074[1] = decode_clo_array[2];
clo10074[2] = decode_clo_array[3];
void* f_lam_9156 = encode_clo(clo10074);



//clo-app
member_spec(member, f_lam_9156, decode_clo_array[1], id_8902);
}

inline void lam9521_spec(void* env9522, void* id_8902) // lam9521 
{
std::cout<<"In lam9521_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9522);

//creating new make-kont closure
void** clo10075 = alloc_kont(lam9519_spec, 2);

//setting env list
clo10075[1] = decode_clo_array[2];
clo10075[2] = decode_clo_array[3];
void* f_lam_9156 = encode_clo(clo10075);



//clo-app
member_spec(member, f_lam_9156, decode_clo_array[1], id_8902);
}

inline void lam9523_fptr() // lam9523 -> generic version 
{
std::cout<<"In lam9523_fptr: generic version"<<std::endl;
//reading env
void* const env9524 = arg_buffer[1];
//reading env and args
void* const id_8901 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9524);

//creating new make-kont closure
void** clo10076 = alloc_kont(lam9521_spec, 3);

//setting env list
clo10076[1] = id_8901;
clo10076[2] = decode_clo_array[1];
clo10076[3] = decode_clo_array[2];
void* f_lam_9157 = encode_clo(clo10076);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9157;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9523_spec(void* env9524, void* id_8901) // lam9523 
{
std::cout<<"In lam9523_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9524);

//creating new make-kont closure
void** clo10077 = alloc_kont(lam9521_spec, 3);

//setting env list
clo10077[1] = id_8901;
clo10077[2] = decode_clo_array[1];
clo10077[3] = decode_clo_array[2];
void* f_lam_9157 = encode_clo(clo10077);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9157;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9525_fptr() // lam9525 -> generic version 
{
std::cout<<"In lam9525_fptr: generic version"<<std::endl;
//reading env
void* const env9526 = arg_buffer[1];
//reading env and args
void* const id_8899 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9526);

//if-clause
if(is_true(id_8899))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9801);
}
else
{

//creating new make-kont closure
void** clo10078 = alloc_kont(lam9523_spec, 2);

//setting env list
clo10078[1] = decode_clo_array[1];
clo10078[2] = decode_clo_array[2];
void* f_lam_9158 = encode_clo(clo10078);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9158;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9525_spec(void* env9526, void* id_8899) // lam9525 
{
std::cout<<"In lam9525_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9526);

//if-clause
if(is_true(id_8899))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9801);
}
else
{

//creating new make-kont closure
void** clo10079 = alloc_kont(lam9523_spec, 2);

//setting env list
clo10079[1] = decode_clo_array[1];
clo10079[2] = decode_clo_array[2];
void* f_lam_9158 = encode_clo(clo10079);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9158;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void duplicates_u63_fptr() // duplicates? -> generic version 
{
std::cout<<"In duplicates_u63_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9152 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10080 = alloc_kont(lam9525_spec, 2);

//setting env list
clo10080[1] = kont9152;
clo10080[2] = lst;
void* f_lam_9159 = encode_clo(clo10080);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9159;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void duplicates_u63_spec(void* _9527, void* kont9152, void* lst) // duplicates? 
{
std::cout<<"In duplicates_u63_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10081 = alloc_kont(lam9525_spec, 2);

//setting env list
clo10081[1] = kont9152;
clo10081[2] = lst;
void* f_lam_9159 = encode_clo(clo10081);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9159;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9528_fptr() // lam9528 -> generic version 
{
std::cout<<"In lam9528_fptr: generic version"<<std::endl;
//reading env
void* const env9529 = arg_buffer[1];
//reading env and args
void* const cont9162 = arg_buffer[2];
void* const j = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9529);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = cont9162;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = j;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9528_spec(void* env9529, void* cont9162, void* j) // lam9528 
{
std::cout<<"In lam9528_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9529);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = cont9162;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = j;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9530_fptr() // lam9530 -> generic version 
{
std::cout<<"In lam9530_fptr: generic version"<<std::endl;
//reading env
void* const env9531 = arg_buffer[1];
//reading env and args
void* const cont9161 = arg_buffer[2];
void* const i = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9531);

//creating new closure instance
void** clo10082 = alloc_clo(lam9528_fptr, 2);

//setting env list
clo10082[1] = i;
clo10082[2] = decode_clo_array[2];
void* id_8909 = encode_clo(clo10082);



//clo-app
my_u45for_spec(my_u45for, cont9161, int9803, decode_clo_array[1], id_8909);
}

inline void lam9530_spec(void* env9531, void* cont9161, void* i) // lam9530 
{
std::cout<<"In lam9530_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9531);

//creating new closure instance
void** clo10083 = alloc_clo(lam9528_fptr, 2);

//setting env list
clo10083[1] = i;
clo10083[2] = decode_clo_array[2];
void* id_8909 = encode_clo(clo10083);



//clo-app
my_u45for_spec(my_u45for, cont9161, int9803, decode_clo_array[1], id_8909);
}

inline void make_u45matrix_fptr() // make-matrix -> generic version 
{
std::cout<<"In make_u45matrix_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9160 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const m = arg_buffer[4];
void* const init = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo10084 = alloc_clo(lam9530_fptr, 2);

//setting env list
clo10084[1] = m;
clo10084[2] = init;
void* id_8910 = encode_clo(clo10084);



//clo-app
my_u45for_spec(my_u45for, kont9160, int9803, n, id_8910);
}

inline void make_u45matrix_spec(void* _9532, void* kont9160, void* n, void* m, void* init) // make-matrix 
{
std::cout<<"In make_u45matrix_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo10085 = alloc_clo(lam9530_fptr, 2);

//setting env list
clo10085[1] = m;
clo10085[2] = init;
void* id_8910 = encode_clo(clo10085);



//clo-app
my_u45for_spec(my_u45for, kont9160, int9803, n, id_8910);
}

inline void lam9533_fptr() // lam9533 -> generic version 
{
std::cout<<"In lam9533_fptr: generic version"<<std::endl;
//reading env
void* const env9534 = arg_buffer[1];
//reading env and args
void* const id_8911 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9534);

//clo-app
list_u45read_spec(list_u45read, decode_clo_array[2], id_8911, decode_clo_array[1]);
}

inline void lam9533_spec(void* env9534, void* id_8911) // lam9533 
{
std::cout<<"In lam9533_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9534);

//clo-app
list_u45read_spec(list_u45read, decode_clo_array[2], id_8911, decode_clo_array[1]);
}

inline void matrix_u45read_fptr() // matrix-read -> generic version 
{
std::cout<<"In matrix_u45read_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9163 = arg_buffer[2];
void* const mat = arg_buffer[3];
void* const i = arg_buffer[4];
void* const j = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10086 = alloc_kont(lam9533_spec, 2);

//setting env list
clo10086[1] = j;
clo10086[2] = kont9163;
void* f_lam_9164 = encode_clo(clo10086);



//clo-app
list_u45read_spec(list_u45read, f_lam_9164, mat, i);
}

inline void matrix_u45read_spec(void* _9535, void* kont9163, void* mat, void* i, void* j) // matrix-read 
{
std::cout<<"In matrix_u45read_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10087 = alloc_kont(lam9533_spec, 2);

//setting env list
clo10087[1] = j;
clo10087[2] = kont9163;
void* f_lam_9164 = encode_clo(clo10087);



//clo-app
list_u45read_spec(list_u45read, f_lam_9164, mat, i);
}

inline void lam9536_fptr() // lam9536 -> generic version 
{
std::cout<<"In lam9536_fptr: generic version"<<std::endl;
//reading env
void* const env9537 = arg_buffer[1];
//reading env and args
void* const id_8913 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9537);

//clo-app
list_u45write_spec(list_u45write, decode_clo_array[2], decode_clo_array[3], decode_clo_array[1], id_8913);
}

inline void lam9536_spec(void* env9537, void* id_8913) // lam9536 
{
std::cout<<"In lam9536_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9537);

//clo-app
list_u45write_spec(list_u45write, decode_clo_array[2], decode_clo_array[3], decode_clo_array[1], id_8913);
}

inline void lam9538_fptr() // lam9538 -> generic version 
{
std::cout<<"In lam9538_fptr: generic version"<<std::endl;
//reading env
void* const env9539 = arg_buffer[1];
//reading env and args
void* const id_8912 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9539);

//creating new make-kont closure
void** clo10088 = alloc_kont(lam9536_spec, 3);

//setting env list
clo10088[1] = decode_clo_array[1];
clo10088[2] = decode_clo_array[3];
clo10088[3] = decode_clo_array[5];
void* f_lam_9166 = encode_clo(clo10088);



//clo-app
list_u45write_spec(list_u45write, f_lam_9166, id_8912, decode_clo_array[2], decode_clo_array[4]);
}

inline void lam9538_spec(void* env9539, void* id_8912) // lam9538 
{
std::cout<<"In lam9538_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9539);

//creating new make-kont closure
void** clo10089 = alloc_kont(lam9536_spec, 3);

//setting env list
clo10089[1] = decode_clo_array[1];
clo10089[2] = decode_clo_array[3];
clo10089[3] = decode_clo_array[5];
void* f_lam_9166 = encode_clo(clo10089);



//clo-app
list_u45write_spec(list_u45write, f_lam_9166, id_8912, decode_clo_array[2], decode_clo_array[4]);
}

inline void matrix_u45write_fptr() // matrix-write -> generic version 
{
std::cout<<"In matrix_u45write_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9165 = arg_buffer[2];
void* const mat = arg_buffer[3];
void* const i = arg_buffer[4];
void* const j = arg_buffer[5];
void* const val = arg_buffer[6];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10090 = alloc_kont(lam9538_spec, 5);

//setting env list
clo10090[1] = i;
clo10090[2] = j;
clo10090[3] = kont9165;
clo10090[4] = val;
clo10090[5] = mat;
void* f_lam_9167 = encode_clo(clo10090);



//clo-app
list_u45read_spec(list_u45read, f_lam_9167, mat, i);
}

inline void matrix_u45write_spec(void* _9540, void* kont9165, void* mat, void* i, void* j, void* val) // matrix-write 
{
std::cout<<"In matrix_u45write_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10091 = alloc_kont(lam9538_spec, 5);

//setting env list
clo10091[1] = i;
clo10091[2] = j;
clo10091[3] = kont9165;
clo10091[4] = val;
clo10091[5] = mat;
void* f_lam_9167 = encode_clo(clo10091);



//clo-app
list_u45read_spec(list_u45read, f_lam_9167, mat, i);
}

inline void lam9541_fptr() // lam9541 -> generic version 
{
std::cout<<"In lam9541_fptr: generic version"<<std::endl;
//reading env
void* const env9542 = arg_buffer[1];
//reading env and args
void* const id_8916 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9542);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8916;
numArgs = 4;
cons_fptr();
}

inline void lam9541_spec(void* env9542, void* id_8916) // lam9541 
{
std::cout<<"In lam9541_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9542);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8916;
numArgs = 4;
cons_fptr();
}

inline void lam9543_fptr() // lam9543 -> generic version 
{
std::cout<<"In lam9543_fptr: generic version"<<std::endl;
//reading env
void* const env9544 = arg_buffer[1];
//reading env and args
void* const id_8915 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9544);

//creating new make-kont closure
void** clo10092 = alloc_kont(lam9541_spec, 2);

//setting env list
clo10092[1] = decode_clo_array[1];
clo10092[2] = decode_clo_array[2];
void* f_lam_9169 = encode_clo(clo10092);



//clo-app
length_spec(length, f_lam_9169, id_8915);
}

inline void lam9543_spec(void* env9544, void* id_8915) // lam9543 
{
std::cout<<"In lam9543_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9544);

//creating new make-kont closure
void** clo10093 = alloc_kont(lam9541_spec, 2);

//setting env list
clo10093[1] = decode_clo_array[1];
clo10093[2] = decode_clo_array[2];
void* f_lam_9169 = encode_clo(clo10093);



//clo-app
length_spec(length, f_lam_9169, id_8915);
}

inline void lam9545_fptr() // lam9545 -> generic version 
{
std::cout<<"In lam9545_fptr: generic version"<<std::endl;
//reading env
void* const env9546 = arg_buffer[1];
//reading env and args
void* const id_8914 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9546);

//creating new make-kont closure
void** clo10094 = alloc_kont(lam9543_spec, 2);

//setting env list
clo10094[1] = id_8914;
clo10094[2] = decode_clo_array[1];
void* f_lam_9170 = encode_clo(clo10094);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9170;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

inline void lam9545_spec(void* env9546, void* id_8914) // lam9545 
{
std::cout<<"In lam9545_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9546);

//creating new make-kont closure
void** clo10095 = alloc_kont(lam9543_spec, 2);

//setting env list
clo10095[1] = id_8914;
clo10095[2] = decode_clo_array[1];
void* f_lam_9170 = encode_clo(clo10095);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9170;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

inline void matrix_u45size_fptr() // matrix-size -> generic version 
{
std::cout<<"In matrix_u45size_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9168 = arg_buffer[2];
void* const mat = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10096 = alloc_kont(lam9545_spec, 2);

//setting env list
clo10096[1] = kont9168;
clo10096[2] = mat;
void* f_lam_9171 = encode_clo(clo10096);



//clo-app
length_spec(length, f_lam_9171, mat);
}

inline void matrix_u45size_spec(void* _9547, void* kont9168, void* mat) // matrix-size 
{
std::cout<<"In matrix_u45size_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10097 = alloc_kont(lam9545_spec, 2);

//setting env list
clo10097[1] = kont9168;
clo10097[2] = mat;
void* f_lam_9171 = encode_clo(clo10097);



//clo-app
length_spec(length, f_lam_9171, mat);
}

inline void lam9548_fptr() // lam9548 -> generic version 
{
std::cout<<"In lam9548_fptr: generic version"<<std::endl;
//reading env
void* const env9549 = arg_buffer[1];
//reading env and args
void* const cont9173 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9549);

//clo-app
map_spec(map, cont9173, decode_clo_array[1], lst);
}

inline void lam9548_spec(void* env9549, void* cont9173, void* lst) // lam9548 
{
std::cout<<"In lam9548_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9549);

//clo-app
map_spec(map, cont9173, decode_clo_array[1], lst);
}

inline void matrix_u45map_fptr() // matrix-map -> generic version 
{
std::cout<<"In matrix_u45map_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9172 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const mat = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo10098 = alloc_clo(lam9548_fptr, 1);

//setting env list
clo10098[1] = f;
void* id_8917 = encode_clo(clo10098);



//clo-app
map_spec(map, kont9172, id_8917, mat);
}

inline void matrix_u45map_spec(void* _9550, void* kont9172, void* f, void* mat) // matrix-map 
{
std::cout<<"In matrix_u45map_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo10099 = alloc_clo(lam9548_fptr, 1);

//setting env list
clo10099[1] = f;
void* id_8917 = encode_clo(clo10099);



//clo-app
map_spec(map, kont9172, id_8917, mat);
}

inline void initial_u45random_fptr() // initial-random -> generic version 
{
std::cout<<"In initial_u45random_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9174 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9174)[0])(kont9174, int9803);
}

inline void initial_u45random_spec(void* _9551, void* kont9174) // initial-random 
{
std::cout<<"In initial_u45random_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont9174)[0])(kont9174, int9803);
}

inline void lam9552_fptr() // lam9552 -> generic version 
{
std::cout<<"In lam9552_fptr: generic version"<<std::endl;
//reading env
void* const env9553 = arg_buffer[1];
//reading env and args
void* const id_8922 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9553);

//clo-app
arg_buffer[1] = remainder_brouhaha;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8922;
arg_buffer[4] = int9780;
numArgs = 4;
remainder_fptr();
}

inline void lam9552_spec(void* env9553, void* id_8922) // lam9552 
{
std::cout<<"In lam9552_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9553);

//clo-app
arg_buffer[1] = remainder_brouhaha;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8922;
arg_buffer[4] = int9780;
numArgs = 4;
remainder_fptr();
}

inline void lam9554_fptr() // lam9554 -> generic version 
{
std::cout<<"In lam9554_fptr: generic version"<<std::endl;
//reading env
void* const env9555 = arg_buffer[1];
//reading env and args
void* const id_8920 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9555);

//creating new make-kont closure
void** clo10100 = alloc_kont(lam9552_spec, 1);

//setting env list
clo10100[1] = decode_clo_array[1];
void* f_lam_9176 = encode_clo(clo10100);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9176;
arg_buffer[3] = id_8920;
arg_buffer[4] = int9779;
numArgs = 4;
_u43_fptr();
}

inline void lam9554_spec(void* env9555, void* id_8920) // lam9554 
{
std::cout<<"In lam9554_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9555);

//creating new make-kont closure
void** clo10101 = alloc_kont(lam9552_spec, 1);

//setting env list
clo10101[1] = decode_clo_array[1];
void* f_lam_9176 = encode_clo(clo10101);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9176;
arg_buffer[3] = id_8920;
arg_buffer[4] = int9779;
numArgs = 4;
_u43_fptr();
}

inline void next_u45random_fptr() // next-random -> generic version 
{
std::cout<<"In next_u45random_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9175 = arg_buffer[2];
void* const current_u45random = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10102 = alloc_kont(lam9554_spec, 1);

//setting env list
clo10102[1] = kont9175;
void* f_lam_9177 = encode_clo(clo10102);



//clo-app
arg_buffer[1] = _u42;
arg_buffer[2] = f_lam_9177;
arg_buffer[3] = current_u45random;
arg_buffer[4] = int9778;
numArgs = 4;
_u42_fptr();
}

inline void next_u45random_spec(void* _9556, void* kont9175, void* current_u45random) // next-random 
{
std::cout<<"In next_u45random_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10103 = alloc_kont(lam9554_spec, 1);

//setting env list
clo10103[1] = kont9175;
void* f_lam_9177 = encode_clo(clo10103);



//clo-app
arg_buffer[1] = _u42;
arg_buffer[2] = f_lam_9177;
arg_buffer[3] = current_u45random;
arg_buffer[4] = int9778;
numArgs = 4;
_u42_fptr();
}

inline void lam9557_fptr() // lam9557 -> generic version 
{
std::cout<<"In lam9557_fptr: generic version"<<std::endl;
//reading env
void* const env9558 = arg_buffer[1];
//reading env and args
void* const xy8925 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9558);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8925);
}

inline void lam9557_spec(void* env9558, void* xy8925) // lam9557 
{
std::cout<<"In lam9557_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9558);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8925);
}

inline void lam9559_fptr() // lam9559 -> generic version 
{
std::cout<<"In lam9559_fptr: generic version"<<std::endl;
//reading env
void* const env9560 = arg_buffer[1];
//reading env and args
void* const id_8926 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9560);

//clo-app
arg_buffer[1] = remainder_brouhaha;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8926;
numArgs = 4;
remainder_fptr();
}

inline void lam9559_spec(void* env9560, void* id_8926) // lam9559 
{
std::cout<<"In lam9559_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9560);

//clo-app
arg_buffer[1] = remainder_brouhaha;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8926;
numArgs = 4;
remainder_fptr();
}

inline void lam9561_fptr() // lam9561 -> generic version 
{
std::cout<<"In lam9561_fptr: generic version"<<std::endl;
//reading env
void* const env9562 = arg_buffer[1];
//reading env and args
void* const id_8929 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9562);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8929;
numArgs = 4;
cons_fptr();
}

inline void lam9561_spec(void* env9562, void* id_8929) // lam9561 
{
std::cout<<"In lam9561_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9562);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8929;
numArgs = 4;
cons_fptr();
}

inline void lam9563_fptr() // lam9563 -> generic version 
{
std::cout<<"In lam9563_fptr: generic version"<<std::endl;
//reading env
void* const env9564 = arg_buffer[1];
//reading env and args
void* const id_8928 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9564);

//creating new make-kont closure
void** clo10104 = alloc_kont(lam9561_spec, 2);

//setting env list
clo10104[1] = decode_clo_array[2];
clo10104[2] = decode_clo_array[3];
void* f_lam_9180 = encode_clo(clo10104);



//clo-app
shuffle_u45aux_spec(shuffle_u45aux, f_lam_9180, id_8928, decode_clo_array[1]);
}

inline void lam9563_spec(void* env9564, void* id_8928) // lam9563 
{
std::cout<<"In lam9563_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9564);

//creating new make-kont closure
void** clo10105 = alloc_kont(lam9561_spec, 2);

//setting env list
clo10105[1] = decode_clo_array[2];
clo10105[2] = decode_clo_array[3];
void* f_lam_9180 = encode_clo(clo10105);



//clo-app
shuffle_u45aux_spec(shuffle_u45aux, f_lam_9180, id_8928, decode_clo_array[1]);
}

inline void lam9565_fptr() // lam9565 -> generic version 
{
std::cout<<"In lam9565_fptr: generic version"<<std::endl;
//reading env
void* const env9566 = arg_buffer[1];
//reading env and args
void* const id_8927 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9566);

//creating new make-kont closure
void** clo10106 = alloc_kont(lam9563_spec, 3);

//setting env list
clo10106[1] = decode_clo_array[1];
clo10106[2] = id_8927;
clo10106[3] = decode_clo_array[4];
void* f_lam_9181 = encode_clo(clo10106);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9181, decode_clo_array[3], decode_clo_array[2]);
}

inline void lam9565_spec(void* env9566, void* id_8927) // lam9565 
{
std::cout<<"In lam9565_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9566);

//creating new make-kont closure
void** clo10107 = alloc_kont(lam9563_spec, 3);

//setting env list
clo10107[1] = decode_clo_array[1];
clo10107[2] = id_8927;
clo10107[3] = decode_clo_array[4];
void* f_lam_9181 = encode_clo(clo10107);



//clo-app
list_u45remove_u45pos_spec(list_u45remove_u45pos, f_lam_9181, decode_clo_array[3], decode_clo_array[2]);
}

inline void lam9567_fptr() // lam9567 -> generic version 
{
std::cout<<"In lam9567_fptr: generic version"<<std::endl;
//reading env
void* const env9568 = arg_buffer[1];
//reading env and args
void* const i = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9568);

//creating new make-kont closure
void** clo10108 = alloc_kont(lam9565_spec, 4);

//setting env list
clo10108[1] = decode_clo_array[1];
clo10108[2] = i;
clo10108[3] = decode_clo_array[2];
clo10108[4] = decode_clo_array[3];
void* f_lam_9182 = encode_clo(clo10108);



//clo-app
list_u45read_spec(list_u45read, f_lam_9182, decode_clo_array[2], i);
}

inline void lam9567_spec(void* env9568, void* i) // lam9567 
{
std::cout<<"In lam9567_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9568);

//creating new make-kont closure
void** clo10109 = alloc_kont(lam9565_spec, 4);

//setting env list
clo10109[1] = decode_clo_array[1];
clo10109[2] = i;
clo10109[3] = decode_clo_array[2];
clo10109[4] = decode_clo_array[3];
void* f_lam_9182 = encode_clo(clo10109);



//clo-app
list_u45read_spec(list_u45read, f_lam_9182, decode_clo_array[2], i);
}

inline void lam9569_fptr() // lam9569 -> generic version 
{
std::cout<<"In lam9569_fptr: generic version"<<std::endl;
//reading env
void* const env9570 = arg_buffer[1];
//reading env and args
void* const new_u45random = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9570);

//creating new make-kont closure
void** clo10110 = alloc_kont(lam9567_spec, 3);

//setting env list
clo10110[1] = new_u45random;
clo10110[2] = decode_clo_array[1];
clo10110[3] = decode_clo_array[2];
void* f_lam_9183 = encode_clo(clo10110);



//creating new make-kont closure
void** clo10111 = alloc_kont(lam9559_spec, 2);

//setting env list
clo10111[1] = new_u45random;
clo10111[2] = f_lam_9183;
void* f_lam_9184 = encode_clo(clo10111);



//clo-app
length_spec(length, f_lam_9184, decode_clo_array[1]);
}

inline void lam9569_spec(void* env9570, void* new_u45random) // lam9569 
{
std::cout<<"In lam9569_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9570);

//creating new make-kont closure
void** clo10112 = alloc_kont(lam9567_spec, 3);

//setting env list
clo10112[1] = new_u45random;
clo10112[2] = decode_clo_array[1];
clo10112[3] = decode_clo_array[2];
void* f_lam_9183 = encode_clo(clo10112);



//creating new make-kont closure
void** clo10113 = alloc_kont(lam9559_spec, 2);

//setting env list
clo10113[1] = new_u45random;
clo10113[2] = f_lam_9183;
void* f_lam_9184 = encode_clo(clo10113);



//clo-app
length_spec(length, f_lam_9184, decode_clo_array[1]);
}

inline void lam9571_fptr() // lam9571 -> generic version 
{
std::cout<<"In lam9571_fptr: generic version"<<std::endl;
//reading env
void* const env9572 = arg_buffer[1];
//reading env and args
void* const id_8924 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9572);

//if-clause
if(is_true(id_8924))
{

//creating new make-kont closure
void** clo10114 = alloc_kont(lam9557_spec, 1);

//setting env list
clo10114[1] = decode_clo_array[3];
void* f_lam_9179 = encode_clo(clo10114);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9179;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo10115 = alloc_kont(lam9569_spec, 2);

//setting env list
clo10115[1] = decode_clo_array[2];
clo10115[2] = decode_clo_array[3];
void* f_lam_9185 = encode_clo(clo10115);



//clo-app
next_u45random_spec(next_u45random, f_lam_9185, decode_clo_array[1]);
}

}

inline void lam9571_spec(void* env9572, void* id_8924) // lam9571 
{
std::cout<<"In lam9571_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9572);

//if-clause
if(is_true(id_8924))
{

//creating new make-kont closure
void** clo10116 = alloc_kont(lam9557_spec, 1);

//setting env list
clo10116[1] = decode_clo_array[3];
void* f_lam_9179 = encode_clo(clo10116);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9179;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo10117 = alloc_kont(lam9569_spec, 2);

//setting env list
clo10117[1] = decode_clo_array[2];
clo10117[2] = decode_clo_array[3];
void* f_lam_9185 = encode_clo(clo10117);



//clo-app
next_u45random_spec(next_u45random, f_lam_9185, decode_clo_array[1]);
}

}

inline void shuffle_u45aux_fptr() // shuffle-aux -> generic version 
{
std::cout<<"In shuffle_u45aux_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9178 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const current_u45random = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10118 = alloc_kont(lam9571_spec, 3);

//setting env list
clo10118[1] = current_u45random;
clo10118[2] = lst;
clo10118[3] = kont9178;
void* f_lam_9186 = encode_clo(clo10118);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9186;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void shuffle_u45aux_spec(void* _9573, void* kont9178, void* lst, void* current_u45random) // shuffle-aux 
{
std::cout<<"In shuffle_u45aux_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10119 = alloc_kont(lam9571_spec, 3);

//setting env list
clo10119[1] = current_u45random;
clo10119[2] = lst;
clo10119[3] = kont9178;
void* f_lam_9186 = encode_clo(clo10119);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9186;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9574_fptr() // lam9574 -> generic version 
{
std::cout<<"In lam9574_fptr: generic version"<<std::endl;
//reading env
void* const env9575 = arg_buffer[1];
//reading env and args
void* const id_8930 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9575);

//clo-app
shuffle_u45aux_spec(shuffle_u45aux, decode_clo_array[1], decode_clo_array[2], id_8930);
}

inline void lam9574_spec(void* env9575, void* id_8930) // lam9574 
{
std::cout<<"In lam9574_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9575);

//clo-app
shuffle_u45aux_spec(shuffle_u45aux, decode_clo_array[1], decode_clo_array[2], id_8930);
}

inline void shuffle_fptr() // shuffle -> generic version 
{
std::cout<<"In shuffle_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9187 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10120 = alloc_kont(lam9574_spec, 2);

//setting env list
clo10120[1] = kont9187;
clo10120[2] = lst;
void* f_lam_9188 = encode_clo(clo10120);



//clo-app
initial_u45random_spec(initial_u45random, f_lam_9188);
}

inline void shuffle_spec(void* _9576, void* kont9187, void* lst) // shuffle 
{
std::cout<<"In shuffle_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10121 = alloc_kont(lam9574_spec, 2);

//setting env list
clo10121[1] = kont9187;
clo10121[2] = lst;
void* f_lam_9188 = encode_clo(clo10121);



//clo-app
initial_u45random_spec(initial_u45random, f_lam_9188);
}

inline void lam9577_fptr() // lam9577 -> generic version 
{
std::cout<<"In lam9577_fptr: generic version"<<std::endl;
//reading env
void* const env9578 = arg_buffer[1];
//reading env and args
void* const cont9190 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9578);

//if-clause
if(is_true(x))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9190)[0])(cont9190, encode_str(new(GC) std::string("_")));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9190)[0])(cont9190, encode_str(new(GC) std::string("*")));
}

}

inline void lam9577_spec(void* env9578, void* cont9190, void* x) // lam9577 
{
std::cout<<"In lam9577_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9578);

//if-clause
if(is_true(x))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9190)[0])(cont9190, encode_str(new(GC) std::string("_")));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(cont9190)[0])(cont9190, encode_str(new(GC) std::string("*")));
}

}

inline void cave_u45to_u45maze_fptr() // cave-to-maze -> generic version 
{
std::cout<<"In cave_u45to_u45maze_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9189 = arg_buffer[2];
void* const cave = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo10122 = alloc_clo(lam9577_fptr, 0);
void* id_8933 = encode_clo(clo10122);



//clo-app
matrix_u45map_spec(matrix_u45map, kont9189, id_8933, cave);
}

inline void cave_u45to_u45maze_spec(void* _9579, void* kont9189, void* cave) // cave-to-maze 
{
std::cout<<"In cave_u45to_u45maze_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo10123 = alloc_clo(lam9577_fptr, 0);
void* id_8933 = encode_clo(clo10123);



//clo-app
matrix_u45map_spec(matrix_u45map, kont9189, id_8933, cave);
}

inline void lam9580_fptr() // lam9580 -> generic version 
{
std::cout<<"In lam9580_fptr: generic version"<<std::endl;
//reading env
void* const env9581 = arg_buffer[1];
//reading env and args
void* const id_8937 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9581);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[2], decode_clo_array[1], id_8937, decode_clo_array[3]);
}

inline void lam9580_spec(void* env9581, void* id_8937) // lam9580 
{
std::cout<<"In lam9580_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9581);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[2], decode_clo_array[1], id_8937, decode_clo_array[3]);
}

inline void lam9582_fptr() // lam9582 -> generic version 
{
std::cout<<"In lam9582_fptr: generic version"<<std::endl;
//reading env
void* const env9583 = arg_buffer[1];
//reading env and args
void* const id_8942 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9583);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8942;
numArgs = 3;
list_fptr();
}

inline void lam9582_spec(void* env9583, void* id_8942) // lam9582 
{
std::cout<<"In lam9582_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9583);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8942;
numArgs = 3;
list_fptr();
}

inline void lam9584_fptr() // lam9584 -> generic version 
{
std::cout<<"In lam9584_fptr: generic version"<<std::endl;
//reading env
void* const env9585 = arg_buffer[1];
//reading env and args
void* const id_8941 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9585);

//creating new make-kont closure
void** clo10124 = alloc_kont(lam9582_spec, 1);

//setting env list
clo10124[1] = decode_clo_array[2];
void* f_lam_9216 = encode_clo(clo10124);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9216;
arg_buffer[3] = id_8941;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
cons_fptr();
}

inline void lam9584_spec(void* env9585, void* id_8941) // lam9584 
{
std::cout<<"In lam9584_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9585);

//creating new make-kont closure
void** clo10125 = alloc_kont(lam9582_spec, 1);

//setting env list
clo10125[1] = decode_clo_array[2];
void* f_lam_9216 = encode_clo(clo10125);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9216;
arg_buffer[3] = id_8941;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
cons_fptr();
}

inline void lam9586_fptr() // lam9586 -> generic version 
{
std::cout<<"In lam9586_fptr: generic version"<<std::endl;
//reading env
void* const env9587 = arg_buffer[1];
//reading env and args
void* const xy8943 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9587);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8943);
}

inline void lam9586_spec(void* env9587, void* xy8943) // lam9586 
{
std::cout<<"In lam9586_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9587);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8943);
}

inline void lam9588_fptr() // lam9588 -> generic version 
{
std::cout<<"In lam9588_fptr: generic version"<<std::endl;
//reading env
void* const env9589 = arg_buffer[1];
//reading env and args
void* const id_8949 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9589);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[3], decode_clo_array[1], id_8949, decode_clo_array[2]);
}

inline void lam9588_spec(void* env9589, void* id_8949) // lam9588 
{
std::cout<<"In lam9588_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9589);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[3], decode_clo_array[1], id_8949, decode_clo_array[2]);
}

inline void lam9590_fptr() // lam9590 -> generic version 
{
std::cout<<"In lam9590_fptr: generic version"<<std::endl;
//reading env
void* const env9591 = arg_buffer[1];
//reading env and args
void* const id_8954 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9591);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8954;
numArgs = 3;
list_fptr();
}

inline void lam9590_spec(void* env9591, void* id_8954) // lam9590 
{
std::cout<<"In lam9590_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9591);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8954;
numArgs = 3;
list_fptr();
}

inline void lam9592_fptr() // lam9592 -> generic version 
{
std::cout<<"In lam9592_fptr: generic version"<<std::endl;
//reading env
void* const env9593 = arg_buffer[1];
//reading env and args
void* const id_8953 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9593);

//creating new make-kont closure
void** clo10126 = alloc_kont(lam9590_spec, 1);

//setting env list
clo10126[1] = decode_clo_array[1];
void* f_lam_9208 = encode_clo(clo10126);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9208;
arg_buffer[3] = id_8953;
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
cons_fptr();
}

inline void lam9592_spec(void* env9593, void* id_8953) // lam9592 
{
std::cout<<"In lam9592_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9593);

//creating new make-kont closure
void** clo10127 = alloc_kont(lam9590_spec, 1);

//setting env list
clo10127[1] = decode_clo_array[1];
void* f_lam_9208 = encode_clo(clo10127);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9208;
arg_buffer[3] = id_8953;
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
cons_fptr();
}

inline void lam9594_fptr() // lam9594 -> generic version 
{
std::cout<<"In lam9594_fptr: generic version"<<std::endl;
//reading env
void* const env9595 = arg_buffer[1];
//reading env and args
void* const xy8955 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9595);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8955);
}

inline void lam9594_spec(void* env9595, void* xy8955) // lam9594 
{
std::cout<<"In lam9594_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9595);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8955);
}

inline void lam9596_fptr() // lam9596 -> generic version 
{
std::cout<<"In lam9596_fptr: generic version"<<std::endl;
//reading env
void* const env9597 = arg_buffer[1];
//reading env and args
void* const id_8960 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9597);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], id_8960);
}

inline void lam9596_spec(void* env9597, void* id_8960) // lam9596 
{
std::cout<<"In lam9596_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9597);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], id_8960);
}

inline void lam9598_fptr() // lam9598 -> generic version 
{
std::cout<<"In lam9598_fptr: generic version"<<std::endl;
//reading env
void* const env9599 = arg_buffer[1];
//reading env and args
void* const id_8965 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9599);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8965;
numArgs = 3;
list_fptr();
}

inline void lam9598_spec(void* env9599, void* id_8965) // lam9598 
{
std::cout<<"In lam9598_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9599);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8965;
numArgs = 3;
list_fptr();
}

inline void lam9600_fptr() // lam9600 -> generic version 
{
std::cout<<"In lam9600_fptr: generic version"<<std::endl;
//reading env
void* const env9601 = arg_buffer[1];
//reading env and args
void* const id_8964 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9601);

//creating new make-kont closure
void** clo10128 = alloc_kont(lam9598_spec, 1);

//setting env list
clo10128[1] = decode_clo_array[2];
void* f_lam_9201 = encode_clo(clo10128);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9201;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8964;
numArgs = 4;
cons_fptr();
}

inline void lam9600_spec(void* env9601, void* id_8964) // lam9600 
{
std::cout<<"In lam9600_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9601);

//creating new make-kont closure
void** clo10129 = alloc_kont(lam9598_spec, 1);

//setting env list
clo10129[1] = decode_clo_array[2];
void* f_lam_9201 = encode_clo(clo10129);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9201;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8964;
numArgs = 4;
cons_fptr();
}

inline void lam9602_fptr() // lam9602 -> generic version 
{
std::cout<<"In lam9602_fptr: generic version"<<std::endl;
//reading env
void* const env9603 = arg_buffer[1];
//reading env and args
void* const xy8966 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9603);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8966);
}

inline void lam9602_spec(void* env9603, void* xy8966) // lam9602 
{
std::cout<<"In lam9602_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9603);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8966);
}

inline void lam9604_fptr() // lam9604 -> generic version 
{
std::cout<<"In lam9604_fptr: generic version"<<std::endl;
//reading env
void* const env9605 = arg_buffer[1];
//reading env and args
void* const id_8972 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9605);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[3], decode_clo_array[1], decode_clo_array[2], id_8972);
}

inline void lam9604_spec(void* env9605, void* id_8972) // lam9604 
{
std::cout<<"In lam9604_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9605);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[3], decode_clo_array[1], decode_clo_array[2], id_8972);
}

inline void lam9606_fptr() // lam9606 -> generic version 
{
std::cout<<"In lam9606_fptr: generic version"<<std::endl;
//reading env
void* const env9607 = arg_buffer[1];
//reading env and args
void* const id_8977 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9607);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8977;
numArgs = 3;
list_fptr();
}

inline void lam9606_spec(void* env9607, void* id_8977) // lam9606 
{
std::cout<<"In lam9606_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9607);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_8977;
numArgs = 3;
list_fptr();
}

inline void lam9608_fptr() // lam9608 -> generic version 
{
std::cout<<"In lam9608_fptr: generic version"<<std::endl;
//reading env
void* const env9609 = arg_buffer[1];
//reading env and args
void* const id_8976 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9609);

//creating new make-kont closure
void** clo10130 = alloc_kont(lam9606_spec, 1);

//setting env list
clo10130[1] = decode_clo_array[2];
void* f_lam_9193 = encode_clo(clo10130);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9193;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8976;
numArgs = 4;
cons_fptr();
}

inline void lam9608_spec(void* env9609, void* id_8976) // lam9608 
{
std::cout<<"In lam9608_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9609);

//creating new make-kont closure
void** clo10131 = alloc_kont(lam9606_spec, 1);

//setting env list
clo10131[1] = decode_clo_array[2];
void* f_lam_9193 = encode_clo(clo10131);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9193;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8976;
numArgs = 4;
cons_fptr();
}

inline void lam9610_fptr() // lam9610 -> generic version 
{
std::cout<<"In lam9610_fptr: generic version"<<std::endl;
//reading env
void* const env9611 = arg_buffer[1];
//reading env and args
void* const xy8978 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9611);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8978);
}

inline void lam9610_spec(void* env9611, void* xy8978) // lam9610 
{
std::cout<<"In lam9610_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9611);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8978);
}

inline void lam9612_fptr() // lam9612 -> generic version 
{
std::cout<<"In lam9612_fptr: generic version"<<std::endl;
//reading env
void* const env9613 = arg_buffer[1];
//reading env and args
void* const id_8979 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9613);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = decode_clo_array[4];
arg_buffer[5] = decode_clo_array[1];
arg_buffer[6] = id_8979;
numArgs = 6;
append_fptr();
}

inline void lam9612_spec(void* env9613, void* id_8979) // lam9612 
{
std::cout<<"In lam9612_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9613);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = decode_clo_array[4];
arg_buffer[5] = decode_clo_array[1];
arg_buffer[6] = id_8979;
numArgs = 6;
append_fptr();
}

inline void lam9614_fptr() // lam9614 -> generic version 
{
std::cout<<"In lam9614_fptr: generic version"<<std::endl;
//reading env
void* const env9615 = arg_buffer[1];
//reading env and args
void* const id_8974 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9615);

//creating new make-kont closure
void** clo10132 = alloc_kont(lam9612_spec, 4);

//setting env list
clo10132[1] = decode_clo_array[1];
clo10132[2] = decode_clo_array[2];
clo10132[3] = decode_clo_array[5];
clo10132[4] = decode_clo_array[6];
void* f_lam_9192 = encode_clo(clo10132);



//if-clause
if(is_true(id_8974))
{

//creating new make-kont closure
void** clo10133 = alloc_kont(lam9608_spec, 2);

//setting env list
clo10133[1] = decode_clo_array[3];
clo10133[2] = f_lam_9192;
void* f_lam_9194 = encode_clo(clo10133);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9194;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{

//creating new make-kont closure
void** clo10134 = alloc_kont(lam9610_spec, 1);

//setting env list
clo10134[1] = f_lam_9192;
void* f_lam_9195 = encode_clo(clo10134);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9195;
numArgs = 2;
list_fptr();
}

}

inline void lam9614_spec(void* env9615, void* id_8974) // lam9614 
{
std::cout<<"In lam9614_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9615);

//creating new make-kont closure
void** clo10135 = alloc_kont(lam9612_spec, 4);

//setting env list
clo10135[1] = decode_clo_array[1];
clo10135[2] = decode_clo_array[2];
clo10135[3] = decode_clo_array[5];
clo10135[4] = decode_clo_array[6];
void* f_lam_9192 = encode_clo(clo10135);



//if-clause
if(is_true(id_8974))
{

//creating new make-kont closure
void** clo10136 = alloc_kont(lam9608_spec, 2);

//setting env list
clo10136[1] = decode_clo_array[3];
clo10136[2] = f_lam_9192;
void* f_lam_9194 = encode_clo(clo10136);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9194;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{

//creating new make-kont closure
void** clo10137 = alloc_kont(lam9610_spec, 1);

//setting env list
clo10137[1] = f_lam_9192;
void* f_lam_9195 = encode_clo(clo10137);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9195;
numArgs = 2;
list_fptr();
}

}

inline void lam9616_fptr() // lam9616 -> generic version 
{
std::cout<<"In lam9616_fptr: generic version"<<std::endl;
//reading env
void* const env9617 = arg_buffer[1];
//reading env and args
void* const id_8970 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9617);

//creating new make-kont closure
void** clo10138 = alloc_kont(lam9614_spec, 6);

//setting env list
clo10138[1] = decode_clo_array[1];
clo10138[2] = decode_clo_array[2];
clo10138[3] = decode_clo_array[4];
clo10138[4] = decode_clo_array[5];
clo10138[5] = decode_clo_array[6];
clo10138[6] = decode_clo_array[7];
void* f_lam_9196 = encode_clo(clo10138);



//if-clause
if(is_true(id_8970))
{

//creating new make-kont closure
void** clo10139 = alloc_kont(lam9604_spec, 3);

//setting env list
clo10139[1] = decode_clo_array[3];
clo10139[2] = decode_clo_array[4];
clo10139[3] = f_lam_9196;
void* f_lam_9197 = encode_clo(clo10139);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9197;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{
// kont-clo-app case
lam9614_spec(f_lam_9196, bool_f9801);
}

}

inline void lam9616_spec(void* env9617, void* id_8970) // lam9616 
{
std::cout<<"In lam9616_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9617);

//creating new make-kont closure
void** clo10140 = alloc_kont(lam9614_spec, 6);

//setting env list
clo10140[1] = decode_clo_array[1];
clo10140[2] = decode_clo_array[2];
clo10140[3] = decode_clo_array[4];
clo10140[4] = decode_clo_array[5];
clo10140[5] = decode_clo_array[6];
clo10140[6] = decode_clo_array[7];
void* f_lam_9196 = encode_clo(clo10140);



//if-clause
if(is_true(id_8970))
{

//creating new make-kont closure
void** clo10141 = alloc_kont(lam9604_spec, 3);

//setting env list
clo10141[1] = decode_clo_array[3];
clo10141[2] = decode_clo_array[4];
clo10141[3] = f_lam_9196;
void* f_lam_9197 = encode_clo(clo10141);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9197;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{
// kont-clo-app case
lam9614_spec(f_lam_9196, bool_f9801);
}

}

inline void lam9618_fptr() // lam9618 -> generic version 
{
std::cout<<"In lam9618_fptr: generic version"<<std::endl;
//reading env
void* const env9619 = arg_buffer[1];
//reading env and args
void* const id_8969 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9619);

//creating new make-kont closure
void** clo10142 = alloc_kont(lam9616_spec, 7);

//setting env list
clo10142[1] = decode_clo_array[1];
clo10142[2] = decode_clo_array[2];
clo10142[3] = decode_clo_array[3];
clo10142[4] = decode_clo_array[4];
clo10142[5] = decode_clo_array[5];
clo10142[6] = decode_clo_array[6];
clo10142[7] = decode_clo_array[7];
void* f_lam_9198 = encode_clo(clo10142);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_9198;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = id_8969;
numArgs = 4;
_u60_fptr();
}

inline void lam9618_spec(void* env9619, void* id_8969) // lam9618 
{
std::cout<<"In lam9618_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9619);

//creating new make-kont closure
void** clo10143 = alloc_kont(lam9616_spec, 7);

//setting env list
clo10143[1] = decode_clo_array[1];
clo10143[2] = decode_clo_array[2];
clo10143[3] = decode_clo_array[3];
clo10143[4] = decode_clo_array[4];
clo10143[5] = decode_clo_array[5];
clo10143[6] = decode_clo_array[6];
clo10143[7] = decode_clo_array[7];
void* f_lam_9198 = encode_clo(clo10143);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_9198;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = id_8969;
numArgs = 4;
_u60_fptr();
}

inline void lam9620_fptr() // lam9620 -> generic version 
{
std::cout<<"In lam9620_fptr: generic version"<<std::endl;
//reading env
void* const env9621 = arg_buffer[1];
//reading env and args
void* const id_8967 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9621);

//creating new make-kont closure
void** clo10144 = alloc_kont(lam9618_spec, 7);

//setting env list
clo10144[1] = id_8967;
clo10144[2] = decode_clo_array[3];
clo10144[3] = decode_clo_array[2];
clo10144[4] = decode_clo_array[4];
clo10144[5] = decode_clo_array[5];
clo10144[6] = decode_clo_array[6];
clo10144[7] = decode_clo_array[7];
void* f_lam_9199 = encode_clo(clo10144);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9199;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9620_spec(void* env9621, void* id_8967) // lam9620 
{
std::cout<<"In lam9620_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9621);

//creating new make-kont closure
void** clo10145 = alloc_kont(lam9618_spec, 7);

//setting env list
clo10145[1] = id_8967;
clo10145[2] = decode_clo_array[3];
clo10145[3] = decode_clo_array[2];
clo10145[4] = decode_clo_array[4];
clo10145[5] = decode_clo_array[5];
clo10145[6] = decode_clo_array[6];
clo10145[7] = decode_clo_array[7];
void* f_lam_9199 = encode_clo(clo10145);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9199;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9622_fptr() // lam9622 -> generic version 
{
std::cout<<"In lam9622_fptr: generic version"<<std::endl;
//reading env
void* const env9623 = arg_buffer[1];
//reading env and args
void* const id_8962 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9623);

//creating new make-kont closure
void** clo10146 = alloc_kont(lam9620_spec, 7);

//setting env list
clo10146[1] = decode_clo_array[1];
clo10146[2] = decode_clo_array[2];
clo10146[3] = decode_clo_array[3];
clo10146[4] = decode_clo_array[4];
clo10146[5] = decode_clo_array[5];
clo10146[6] = decode_clo_array[6];
clo10146[7] = decode_clo_array[7];
void* f_lam_9200 = encode_clo(clo10146);



//if-clause
if(is_true(id_8962))
{

//creating new make-kont closure
void** clo10147 = alloc_kont(lam9600_spec, 2);

//setting env list
clo10147[1] = decode_clo_array[4];
clo10147[2] = f_lam_9200;
void* f_lam_9202 = encode_clo(clo10147);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9202;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{

//creating new make-kont closure
void** clo10148 = alloc_kont(lam9602_spec, 1);

//setting env list
clo10148[1] = f_lam_9200;
void* f_lam_9203 = encode_clo(clo10148);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9203;
numArgs = 2;
list_fptr();
}

}

inline void lam9622_spec(void* env9623, void* id_8962) // lam9622 
{
std::cout<<"In lam9622_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9623);

//creating new make-kont closure
void** clo10149 = alloc_kont(lam9620_spec, 7);

//setting env list
clo10149[1] = decode_clo_array[1];
clo10149[2] = decode_clo_array[2];
clo10149[3] = decode_clo_array[3];
clo10149[4] = decode_clo_array[4];
clo10149[5] = decode_clo_array[5];
clo10149[6] = decode_clo_array[6];
clo10149[7] = decode_clo_array[7];
void* f_lam_9200 = encode_clo(clo10149);



//if-clause
if(is_true(id_8962))
{

//creating new make-kont closure
void** clo10150 = alloc_kont(lam9600_spec, 2);

//setting env list
clo10150[1] = decode_clo_array[4];
clo10150[2] = f_lam_9200;
void* f_lam_9202 = encode_clo(clo10150);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9202;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{

//creating new make-kont closure
void** clo10151 = alloc_kont(lam9602_spec, 1);

//setting env list
clo10151[1] = f_lam_9200;
void* f_lam_9203 = encode_clo(clo10151);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9203;
numArgs = 2;
list_fptr();
}

}

inline void lam9624_fptr() // lam9624 -> generic version 
{
std::cout<<"In lam9624_fptr: generic version"<<std::endl;
//reading env
void* const env9625 = arg_buffer[1];
//reading env and args
void* const id_8958 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9625);

//creating new make-kont closure
void** clo10152 = alloc_kont(lam9622_spec, 7);

//setting env list
clo10152[1] = decode_clo_array[1];
clo10152[2] = decode_clo_array[2];
clo10152[3] = decode_clo_array[3];
clo10152[4] = decode_clo_array[4];
clo10152[5] = decode_clo_array[5];
clo10152[6] = decode_clo_array[6];
clo10152[7] = decode_clo_array[7];
void* f_lam_9204 = encode_clo(clo10152);



//if-clause
if(is_true(id_8958))
{

//creating new make-kont closure
void** clo10153 = alloc_kont(lam9596_spec, 3);

//setting env list
clo10153[1] = decode_clo_array[2];
clo10153[2] = f_lam_9204;
clo10153[3] = decode_clo_array[4];
void* f_lam_9205 = encode_clo(clo10153);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9205;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{
// kont-clo-app case
lam9622_spec(f_lam_9204, bool_f9801);
}

}

inline void lam9624_spec(void* env9625, void* id_8958) // lam9624 
{
std::cout<<"In lam9624_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9625);

//creating new make-kont closure
void** clo10154 = alloc_kont(lam9622_spec, 7);

//setting env list
clo10154[1] = decode_clo_array[1];
clo10154[2] = decode_clo_array[2];
clo10154[3] = decode_clo_array[3];
clo10154[4] = decode_clo_array[4];
clo10154[5] = decode_clo_array[5];
clo10154[6] = decode_clo_array[6];
clo10154[7] = decode_clo_array[7];
void* f_lam_9204 = encode_clo(clo10154);



//if-clause
if(is_true(id_8958))
{

//creating new make-kont closure
void** clo10155 = alloc_kont(lam9596_spec, 3);

//setting env list
clo10155[1] = decode_clo_array[2];
clo10155[2] = f_lam_9204;
clo10155[3] = decode_clo_array[4];
void* f_lam_9205 = encode_clo(clo10155);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9205;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{
// kont-clo-app case
lam9622_spec(f_lam_9204, bool_f9801);
}

}

inline void lam9626_fptr() // lam9626 -> generic version 
{
std::cout<<"In lam9626_fptr: generic version"<<std::endl;
//reading env
void* const env9627 = arg_buffer[1];
//reading env and args
void* const id_8956 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9627);

//creating new make-kont closure
void** clo10156 = alloc_kont(lam9624_spec, 7);

//setting env list
clo10156[1] = decode_clo_array[1];
clo10156[2] = decode_clo_array[2];
clo10156[3] = decode_clo_array[3];
clo10156[4] = decode_clo_array[4];
clo10156[5] = decode_clo_array[5];
clo10156[6] = decode_clo_array[6];
clo10156[7] = id_8956;
void* f_lam_9206 = encode_clo(clo10156);



//clo-app
arg_buffer[1] = _u62;
arg_buffer[2] = f_lam_9206;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9803;
numArgs = 4;
_u62_fptr();
}

inline void lam9626_spec(void* env9627, void* id_8956) // lam9626 
{
std::cout<<"In lam9626_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9627);

//creating new make-kont closure
void** clo10157 = alloc_kont(lam9624_spec, 7);

//setting env list
clo10157[1] = decode_clo_array[1];
clo10157[2] = decode_clo_array[2];
clo10157[3] = decode_clo_array[3];
clo10157[4] = decode_clo_array[4];
clo10157[5] = decode_clo_array[5];
clo10157[6] = decode_clo_array[6];
clo10157[7] = id_8956;
void* f_lam_9206 = encode_clo(clo10157);



//clo-app
arg_buffer[1] = _u62;
arg_buffer[2] = f_lam_9206;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9803;
numArgs = 4;
_u62_fptr();
}

inline void lam9628_fptr() // lam9628 -> generic version 
{
std::cout<<"In lam9628_fptr: generic version"<<std::endl;
//reading env
void* const env9629 = arg_buffer[1];
//reading env and args
void* const id_8951 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9629);

//creating new make-kont closure
void** clo10158 = alloc_kont(lam9626_spec, 6);

//setting env list
clo10158[1] = decode_clo_array[1];
clo10158[2] = decode_clo_array[2];
clo10158[3] = decode_clo_array[3];
clo10158[4] = decode_clo_array[4];
clo10158[5] = decode_clo_array[5];
clo10158[6] = decode_clo_array[6];
void* f_lam_9207 = encode_clo(clo10158);



//if-clause
if(is_true(id_8951))
{

//creating new make-kont closure
void** clo10159 = alloc_kont(lam9592_spec, 2);

//setting env list
clo10159[1] = f_lam_9207;
clo10159[2] = decode_clo_array[5];
void* f_lam_9209 = encode_clo(clo10159);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9209;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{

//creating new make-kont closure
void** clo10160 = alloc_kont(lam9594_spec, 1);

//setting env list
clo10160[1] = f_lam_9207;
void* f_lam_9210 = encode_clo(clo10160);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9210;
numArgs = 2;
list_fptr();
}

}

inline void lam9628_spec(void* env9629, void* id_8951) // lam9628 
{
std::cout<<"In lam9628_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9629);

//creating new make-kont closure
void** clo10161 = alloc_kont(lam9626_spec, 6);

//setting env list
clo10161[1] = decode_clo_array[1];
clo10161[2] = decode_clo_array[2];
clo10161[3] = decode_clo_array[3];
clo10161[4] = decode_clo_array[4];
clo10161[5] = decode_clo_array[5];
clo10161[6] = decode_clo_array[6];
void* f_lam_9207 = encode_clo(clo10161);



//if-clause
if(is_true(id_8951))
{

//creating new make-kont closure
void** clo10162 = alloc_kont(lam9592_spec, 2);

//setting env list
clo10162[1] = f_lam_9207;
clo10162[2] = decode_clo_array[5];
void* f_lam_9209 = encode_clo(clo10162);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9209;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{

//creating new make-kont closure
void** clo10163 = alloc_kont(lam9594_spec, 1);

//setting env list
clo10163[1] = f_lam_9207;
void* f_lam_9210 = encode_clo(clo10163);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9210;
numArgs = 2;
list_fptr();
}

}

inline void lam9630_fptr() // lam9630 -> generic version 
{
std::cout<<"In lam9630_fptr: generic version"<<std::endl;
//reading env
void* const env9631 = arg_buffer[1];
//reading env and args
void* const id_8947 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9631);

//creating new make-kont closure
void** clo10164 = alloc_kont(lam9628_spec, 6);

//setting env list
clo10164[1] = decode_clo_array[1];
clo10164[2] = decode_clo_array[2];
clo10164[3] = decode_clo_array[3];
clo10164[4] = decode_clo_array[4];
clo10164[5] = decode_clo_array[5];
clo10164[6] = decode_clo_array[6];
void* f_lam_9211 = encode_clo(clo10164);



//if-clause
if(is_true(id_8947))
{

//creating new make-kont closure
void** clo10165 = alloc_kont(lam9588_spec, 3);

//setting env list
clo10165[1] = decode_clo_array[2];
clo10165[2] = decode_clo_array[5];
clo10165[3] = f_lam_9211;
void* f_lam_9212 = encode_clo(clo10165);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9212;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{
// kont-clo-app case
lam9628_spec(f_lam_9211, bool_f9801);
}

}

inline void lam9630_spec(void* env9631, void* id_8947) // lam9630 
{
std::cout<<"In lam9630_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9631);

//creating new make-kont closure
void** clo10166 = alloc_kont(lam9628_spec, 6);

//setting env list
clo10166[1] = decode_clo_array[1];
clo10166[2] = decode_clo_array[2];
clo10166[3] = decode_clo_array[3];
clo10166[4] = decode_clo_array[4];
clo10166[5] = decode_clo_array[5];
clo10166[6] = decode_clo_array[6];
void* f_lam_9211 = encode_clo(clo10166);



//if-clause
if(is_true(id_8947))
{

//creating new make-kont closure
void** clo10167 = alloc_kont(lam9588_spec, 3);

//setting env list
clo10167[1] = decode_clo_array[2];
clo10167[2] = decode_clo_array[5];
clo10167[3] = f_lam_9211;
void* f_lam_9212 = encode_clo(clo10167);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_9212;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u43_fptr();
}
else
{
// kont-clo-app case
lam9628_spec(f_lam_9211, bool_f9801);
}

}

inline void lam9632_fptr() // lam9632 -> generic version 
{
std::cout<<"In lam9632_fptr: generic version"<<std::endl;
//reading env
void* const env9633 = arg_buffer[1];
//reading env and args
void* const id_8946 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9633);

//creating new make-kont closure
void** clo10168 = alloc_kont(lam9630_spec, 6);

//setting env list
clo10168[1] = decode_clo_array[1];
clo10168[2] = decode_clo_array[2];
clo10168[3] = decode_clo_array[3];
clo10168[4] = decode_clo_array[4];
clo10168[5] = decode_clo_array[5];
clo10168[6] = decode_clo_array[6];
void* f_lam_9213 = encode_clo(clo10168);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_9213;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8946;
numArgs = 4;
_u60_fptr();
}

inline void lam9632_spec(void* env9633, void* id_8946) // lam9632 
{
std::cout<<"In lam9632_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9633);

//creating new make-kont closure
void** clo10169 = alloc_kont(lam9630_spec, 6);

//setting env list
clo10169[1] = decode_clo_array[1];
clo10169[2] = decode_clo_array[2];
clo10169[3] = decode_clo_array[3];
clo10169[4] = decode_clo_array[4];
clo10169[5] = decode_clo_array[5];
clo10169[6] = decode_clo_array[6];
void* f_lam_9213 = encode_clo(clo10169);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_9213;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = id_8946;
numArgs = 4;
_u60_fptr();
}

inline void lam9634_fptr() // lam9634 -> generic version 
{
std::cout<<"In lam9634_fptr: generic version"<<std::endl;
//reading env
void* const env9635 = arg_buffer[1];
//reading env and args
void* const id_8944 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9635);

//creating new make-kont closure
void** clo10170 = alloc_kont(lam9632_spec, 6);

//setting env list
clo10170[1] = decode_clo_array[1];
clo10170[2] = decode_clo_array[2];
clo10170[3] = decode_clo_array[3];
clo10170[4] = decode_clo_array[5];
clo10170[5] = decode_clo_array[6];
clo10170[6] = id_8944;
void* f_lam_9214 = encode_clo(clo10170);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9214;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9634_spec(void* env9635, void* id_8944) // lam9634 
{
std::cout<<"In lam9634_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9635);

//creating new make-kont closure
void** clo10171 = alloc_kont(lam9632_spec, 6);

//setting env list
clo10171[1] = decode_clo_array[1];
clo10171[2] = decode_clo_array[2];
clo10171[3] = decode_clo_array[3];
clo10171[4] = decode_clo_array[5];
clo10171[5] = decode_clo_array[6];
clo10171[6] = id_8944;
void* f_lam_9214 = encode_clo(clo10171);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9214;
arg_buffer[3] = decode_clo_array[4];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}

inline void lam9636_fptr() // lam9636 -> generic version 
{
std::cout<<"In lam9636_fptr: generic version"<<std::endl;
//reading env
void* const env9637 = arg_buffer[1];
//reading env and args
void* const id_8939 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9637);

//creating new make-kont closure
void** clo10172 = alloc_kont(lam9634_spec, 6);

//setting env list
clo10172[1] = decode_clo_array[1];
clo10172[2] = decode_clo_array[2];
clo10172[3] = decode_clo_array[3];
clo10172[4] = decode_clo_array[4];
clo10172[5] = decode_clo_array[5];
clo10172[6] = decode_clo_array[6];
void* f_lam_9215 = encode_clo(clo10172);



//if-clause
if(is_true(id_8939))
{

//creating new make-kont closure
void** clo10173 = alloc_kont(lam9584_spec, 2);

//setting env list
clo10173[1] = decode_clo_array[6];
clo10173[2] = f_lam_9215;
void* f_lam_9217 = encode_clo(clo10173);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9217;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{

//creating new make-kont closure
void** clo10174 = alloc_kont(lam9586_spec, 1);

//setting env list
clo10174[1] = f_lam_9215;
void* f_lam_9218 = encode_clo(clo10174);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9218;
numArgs = 2;
list_fptr();
}

}

inline void lam9636_spec(void* env9637, void* id_8939) // lam9636 
{
std::cout<<"In lam9636_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9637);

//creating new make-kont closure
void** clo10175 = alloc_kont(lam9634_spec, 6);

//setting env list
clo10175[1] = decode_clo_array[1];
clo10175[2] = decode_clo_array[2];
clo10175[3] = decode_clo_array[3];
clo10175[4] = decode_clo_array[4];
clo10175[5] = decode_clo_array[5];
clo10175[6] = decode_clo_array[6];
void* f_lam_9215 = encode_clo(clo10175);



//if-clause
if(is_true(id_8939))
{

//creating new make-kont closure
void** clo10176 = alloc_kont(lam9584_spec, 2);

//setting env list
clo10176[1] = decode_clo_array[6];
clo10176[2] = f_lam_9215;
void* f_lam_9217 = encode_clo(clo10176);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9217;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{

//creating new make-kont closure
void** clo10177 = alloc_kont(lam9586_spec, 1);

//setting env list
clo10177[1] = f_lam_9215;
void* f_lam_9218 = encode_clo(clo10177);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9218;
numArgs = 2;
list_fptr();
}

}

inline void lam9638_fptr() // lam9638 -> generic version 
{
std::cout<<"In lam9638_fptr: generic version"<<std::endl;
//reading env
void* const env9639 = arg_buffer[1];
//reading env and args
void* const id_8935 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9639);

//creating new make-kont closure
void** clo10178 = alloc_kont(lam9636_spec, 6);

//setting env list
clo10178[1] = decode_clo_array[1];
clo10178[2] = decode_clo_array[2];
clo10178[3] = decode_clo_array[3];
clo10178[4] = decode_clo_array[4];
clo10178[5] = decode_clo_array[5];
clo10178[6] = decode_clo_array[6];
void* f_lam_9219 = encode_clo(clo10178);



//if-clause
if(is_true(id_8935))
{

//creating new make-kont closure
void** clo10179 = alloc_kont(lam9580_spec, 3);

//setting env list
clo10179[1] = decode_clo_array[2];
clo10179[2] = f_lam_9219;
clo10179[3] = decode_clo_array[6];
void* f_lam_9220 = encode_clo(clo10179);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9220;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{
// kont-clo-app case
lam9636_spec(f_lam_9219, bool_f9801);
}

}

inline void lam9638_spec(void* env9639, void* id_8935) // lam9638 
{
std::cout<<"In lam9638_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9639);

//creating new make-kont closure
void** clo10180 = alloc_kont(lam9636_spec, 6);

//setting env list
clo10180[1] = decode_clo_array[1];
clo10180[2] = decode_clo_array[2];
clo10180[3] = decode_clo_array[3];
clo10180[4] = decode_clo_array[4];
clo10180[5] = decode_clo_array[5];
clo10180[6] = decode_clo_array[6];
void* f_lam_9219 = encode_clo(clo10180);



//if-clause
if(is_true(id_8935))
{

//creating new make-kont closure
void** clo10181 = alloc_kont(lam9580_spec, 3);

//setting env list
clo10181[1] = decode_clo_array[2];
clo10181[2] = f_lam_9219;
clo10181[3] = decode_clo_array[6];
void* f_lam_9220 = encode_clo(clo10181);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_9220;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9796;
numArgs = 4;
_u45_fptr();
}
else
{
// kont-clo-app case
lam9636_spec(f_lam_9219, bool_f9801);
}

}

inline void lam9640_fptr() // lam9640 -> generic version 
{
std::cout<<"In lam9640_fptr: generic version"<<std::endl;
//reading env
void* const env9641 = arg_buffer[1];
//reading env and args
void* const j = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9641);

//creating new make-kont closure
void** clo10182 = alloc_kont(lam9638_spec, 6);

//setting env list
clo10182[1] = decode_clo_array[1];
clo10182[2] = decode_clo_array[2];
clo10182[3] = decode_clo_array[3];
clo10182[4] = decode_clo_array[4];
clo10182[5] = decode_clo_array[5];
clo10182[6] = j;
void* f_lam_9221 = encode_clo(clo10182);



//clo-app
arg_buffer[1] = _u62;
arg_buffer[2] = f_lam_9221;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9803;
numArgs = 4;
_u62_fptr();
}

inline void lam9640_spec(void* env9641, void* j) // lam9640 
{
std::cout<<"In lam9640_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9641);

//creating new make-kont closure
void** clo10183 = alloc_kont(lam9638_spec, 6);

//setting env list
clo10183[1] = decode_clo_array[1];
clo10183[2] = decode_clo_array[2];
clo10183[3] = decode_clo_array[3];
clo10183[4] = decode_clo_array[4];
clo10183[5] = decode_clo_array[5];
clo10183[6] = j;
void* f_lam_9221 = encode_clo(clo10183);



//clo-app
arg_buffer[1] = _u62;
arg_buffer[2] = f_lam_9221;
arg_buffer[3] = decode_clo_array[5];
arg_buffer[4] = int9803;
numArgs = 4;
_u62_fptr();
}

inline void lam9642_fptr() // lam9642 -> generic version 
{
std::cout<<"In lam9642_fptr: generic version"<<std::endl;
//reading env
void* const env9643 = arg_buffer[1];
//reading env and args
void* const i = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9643);

//creating new make-kont closure
void** clo10184 = alloc_kont(lam9640_spec, 5);

//setting env list
clo10184[1] = decode_clo_array[1];
clo10184[2] = decode_clo_array[2];
clo10184[3] = decode_clo_array[3];
clo10184[4] = decode_clo_array[4];
clo10184[5] = i;
void* f_lam_9222 = encode_clo(clo10184);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9222;
arg_buffer[3] = decode_clo_array[5];
numArgs = 3;
cdr_fptr();
}

inline void lam9642_spec(void* env9643, void* i) // lam9642 
{
std::cout<<"In lam9642_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9643);

//creating new make-kont closure
void** clo10185 = alloc_kont(lam9640_spec, 5);

//setting env list
clo10185[1] = decode_clo_array[1];
clo10185[2] = decode_clo_array[2];
clo10185[3] = decode_clo_array[3];
clo10185[4] = decode_clo_array[4];
clo10185[5] = i;
void* f_lam_9222 = encode_clo(clo10185);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9222;
arg_buffer[3] = decode_clo_array[5];
numArgs = 3;
cdr_fptr();
}

inline void lam9644_fptr() // lam9644 -> generic version 
{
std::cout<<"In lam9644_fptr: generic version"<<std::endl;
//reading env
void* const env9645 = arg_buffer[1];
//reading env and args
void* const m = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9645);

//creating new make-kont closure
void** clo10186 = alloc_kont(lam9642_spec, 5);

//setting env list
clo10186[1] = m;
clo10186[2] = decode_clo_array[2];
clo10186[3] = decode_clo_array[1];
clo10186[4] = decode_clo_array[3];
clo10186[5] = decode_clo_array[4];
void* f_lam_9223 = encode_clo(clo10186);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9223;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
car_fptr();
}

inline void lam9644_spec(void* env9645, void* m) // lam9644 
{
std::cout<<"In lam9644_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9645);

//creating new make-kont closure
void** clo10187 = alloc_kont(lam9642_spec, 5);

//setting env list
clo10187[1] = m;
clo10187[2] = decode_clo_array[2];
clo10187[3] = decode_clo_array[1];
clo10187[4] = decode_clo_array[3];
clo10187[5] = decode_clo_array[4];
void* f_lam_9223 = encode_clo(clo10187);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9223;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
car_fptr();
}

inline void lam9646_fptr() // lam9646 -> generic version 
{
std::cout<<"In lam9646_fptr: generic version"<<std::endl;
//reading env
void* const env9647 = arg_buffer[1];
//reading env and args
void* const n = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9647);

//creating new make-kont closure
void** clo10188 = alloc_kont(lam9644_spec, 4);

//setting env list
clo10188[1] = decode_clo_array[1];
clo10188[2] = decode_clo_array[2];
clo10188[3] = n;
clo10188[4] = decode_clo_array[3];
void* f_lam_9224 = encode_clo(clo10188);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9224;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
cdr_fptr();
}

inline void lam9646_spec(void* env9647, void* n) // lam9646 
{
std::cout<<"In lam9646_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9647);

//creating new make-kont closure
void** clo10189 = alloc_kont(lam9644_spec, 4);

//setting env list
clo10189[1] = decode_clo_array[1];
clo10189[2] = decode_clo_array[2];
clo10189[3] = n;
clo10189[4] = decode_clo_array[3];
void* f_lam_9224 = encode_clo(clo10189);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9224;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
cdr_fptr();
}

inline void lam9648_fptr() // lam9648 -> generic version 
{
std::cout<<"In lam9648_fptr: generic version"<<std::endl;
//reading env
void* const env9649 = arg_buffer[1];
//reading env and args
void* const size = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9649);

//creating new make-kont closure
void** clo10190 = alloc_kont(lam9646_spec, 4);

//setting env list
clo10190[1] = decode_clo_array[1];
clo10190[2] = decode_clo_array[2];
clo10190[3] = decode_clo_array[3];
clo10190[4] = size;
void* f_lam_9225 = encode_clo(clo10190);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9225;
arg_buffer[3] = size;
numArgs = 3;
car_fptr();
}

inline void lam9648_spec(void* env9649, void* size) // lam9648 
{
std::cout<<"In lam9648_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9649);

//creating new make-kont closure
void** clo10191 = alloc_kont(lam9646_spec, 4);

//setting env list
clo10191[1] = decode_clo_array[1];
clo10191[2] = decode_clo_array[2];
clo10191[3] = decode_clo_array[3];
clo10191[4] = size;
void* f_lam_9225 = encode_clo(clo10191);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9225;
arg_buffer[3] = size;
numArgs = 3;
car_fptr();
}

inline void neighboring_u45cavities_fptr() // neighboring-cavities -> generic version 
{
std::cout<<"In neighboring_u45cavities_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9191 = arg_buffer[2];
void* const pos = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10192 = alloc_kont(lam9648_spec, 3);

//setting env list
clo10192[1] = kont9191;
clo10192[2] = cave;
clo10192[3] = pos;
void* f_lam_9226 = encode_clo(clo10192);



//clo-app
matrix_u45size_spec(matrix_u45size, f_lam_9226, cave);
}

inline void neighboring_u45cavities_spec(void* _9650, void* kont9191, void* pos, void* cave) // neighboring-cavities 
{
std::cout<<"In neighboring_u45cavities_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10193 = alloc_kont(lam9648_spec, 3);

//setting env list
clo10193[1] = kont9191;
clo10193[2] = cave;
clo10193[3] = pos;
void* f_lam_9226 = encode_clo(clo10193);



//clo-app
matrix_u45size_spec(matrix_u45size, f_lam_9226, cave);
}

inline void lam9651_fptr() // lam9651 -> generic version 
{
std::cout<<"In lam9651_fptr: generic version"<<std::endl;
//reading env
void* const env9652 = arg_buffer[1];
//reading env and args
void* const id_8983 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9652);

//clo-app
my_u45foldl_spec(my_u45foldl, decode_clo_array[3], decode_clo_array[2], decode_clo_array[1], id_8983);
}

inline void lam9651_spec(void* env9652, void* id_8983) // lam9651 
{
std::cout<<"In lam9651_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9652);

//clo-app
my_u45foldl_spec(my_u45foldl, decode_clo_array[3], decode_clo_array[2], decode_clo_array[1], id_8983);
}

inline void lam9653_fptr() // lam9653 -> generic version 
{
std::cout<<"In lam9653_fptr: generic version"<<std::endl;
//reading env
void* const env9654 = arg_buffer[1];
//reading env and args
void* const id_8982 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9654);

//creating new make-kont closure
void** clo10194 = alloc_kont(lam9651_spec, 3);

//setting env list
clo10194[1] = id_8982;
clo10194[2] = decode_clo_array[2];
clo10194[3] = decode_clo_array[4];
void* f_lam_9229 = encode_clo(clo10194);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9229, decode_clo_array[3], decode_clo_array[1]);
}

inline void lam9653_spec(void* env9654, void* id_8982) // lam9653 
{
std::cout<<"In lam9653_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9654);

//creating new make-kont closure
void** clo10195 = alloc_kont(lam9651_spec, 3);

//setting env list
clo10195[1] = id_8982;
clo10195[2] = decode_clo_array[2];
clo10195[3] = decode_clo_array[4];
void* f_lam_9229 = encode_clo(clo10195);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9229, decode_clo_array[3], decode_clo_array[1]);
}

inline void lam9655_fptr() // lam9655 -> generic version 
{
std::cout<<"In lam9655_fptr: generic version"<<std::endl;
//reading env
void* const env9656 = arg_buffer[1];
//reading env and args
void* const cont9228 = arg_buffer[2];
void* const c = arg_buffer[3];
void* const nc = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9656);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, cont9228, c, nc, decode_clo_array[2], decode_clo_array[1]);
}

inline void lam9655_spec(void* env9656, void* cont9228, void* c, void* nc) // lam9655 
{
std::cout<<"In lam9655_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9656);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, cont9228, c, nc, decode_clo_array[2], decode_clo_array[1]);
}

inline void lam9657_fptr() // lam9657 -> generic version 
{
std::cout<<"In lam9657_fptr: generic version"<<std::endl;
//reading env
void* const env9658 = arg_buffer[1];
//reading env and args
void* const id_8980 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9658);

//if-clause
if(is_true(id_8980))
{

//creating new closure instance
void** clo10196 = alloc_clo(lam9655_fptr, 2);

//setting env list
clo10196[1] = decode_clo_array[5];
clo10196[2] = decode_clo_array[7];
void* id_8981 = encode_clo(clo10196);



//creating new make-kont closure
void** clo10197 = alloc_kont(lam9653_spec, 4);

//setting env list
clo10197[1] = decode_clo_array[3];
clo10197[2] = id_8981;
clo10197[3] = decode_clo_array[2];
clo10197[4] = decode_clo_array[6];
void* f_lam_9230 = encode_clo(clo10197);



//clo-app
matrix_u45write_spec(matrix_u45write, f_lam_9230, decode_clo_array[3], decode_clo_array[1], decode_clo_array[4], decode_clo_array[7]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[6])[0])(decode_clo_array[6], decode_clo_array[3]);
}

}

inline void lam9657_spec(void* env9658, void* id_8980) // lam9657 
{
std::cout<<"In lam9657_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9658);

//if-clause
if(is_true(id_8980))
{

//creating new closure instance
void** clo10198 = alloc_clo(lam9655_fptr, 2);

//setting env list
clo10198[1] = decode_clo_array[5];
clo10198[2] = decode_clo_array[7];
void* id_8981 = encode_clo(clo10198);



//creating new make-kont closure
void** clo10199 = alloc_kont(lam9653_spec, 4);

//setting env list
clo10199[1] = decode_clo_array[3];
clo10199[2] = id_8981;
clo10199[3] = decode_clo_array[2];
clo10199[4] = decode_clo_array[6];
void* f_lam_9230 = encode_clo(clo10199);



//clo-app
matrix_u45write_spec(matrix_u45write, f_lam_9230, decode_clo_array[3], decode_clo_array[1], decode_clo_array[4], decode_clo_array[7]);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[6])[0])(decode_clo_array[6], decode_clo_array[3]);
}

}

inline void lam9659_fptr() // lam9659 -> generic version 
{
std::cout<<"In lam9659_fptr: generic version"<<std::endl;
//reading env
void* const env9660 = arg_buffer[1];
//reading env and args
void* const cavity_u45id = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9660);

//creating new make-kont closure
void** clo10200 = alloc_kont(lam9657_spec, 7);

//setting env list
clo10200[1] = decode_clo_array[1];
clo10200[2] = decode_clo_array[2];
clo10200[3] = decode_clo_array[3];
clo10200[4] = decode_clo_array[4];
clo10200[5] = decode_clo_array[5];
clo10200[6] = decode_clo_array[6];
clo10200[7] = decode_clo_array[7];
void* f_lam_9231 = encode_clo(clo10200);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9231;
arg_buffer[3] = cavity_u45id;
arg_buffer[4] = decode_clo_array[5];
numArgs = 4;
equal_u63_fptr();
}

inline void lam9659_spec(void* env9660, void* cavity_u45id) // lam9659 
{
std::cout<<"In lam9659_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9660);

//creating new make-kont closure
void** clo10201 = alloc_kont(lam9657_spec, 7);

//setting env list
clo10201[1] = decode_clo_array[1];
clo10201[2] = decode_clo_array[2];
clo10201[3] = decode_clo_array[3];
clo10201[4] = decode_clo_array[4];
clo10201[5] = decode_clo_array[5];
clo10201[6] = decode_clo_array[6];
clo10201[7] = decode_clo_array[7];
void* f_lam_9231 = encode_clo(clo10201);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9231;
arg_buffer[3] = cavity_u45id;
arg_buffer[4] = decode_clo_array[5];
numArgs = 4;
equal_u63_fptr();
}

inline void lam9661_fptr() // lam9661 -> generic version 
{
std::cout<<"In lam9661_fptr: generic version"<<std::endl;
//reading env
void* const env9662 = arg_buffer[1];
//reading env and args
void* const j = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9662);

//creating new make-kont closure
void** clo10202 = alloc_kont(lam9659_spec, 7);

//setting env list
clo10202[1] = decode_clo_array[1];
clo10202[2] = decode_clo_array[2];
clo10202[3] = decode_clo_array[3];
clo10202[4] = j;
clo10202[5] = decode_clo_array[4];
clo10202[6] = decode_clo_array[5];
clo10202[7] = decode_clo_array[6];
void* f_lam_9232 = encode_clo(clo10202);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9232, decode_clo_array[3], decode_clo_array[1], j);
}

inline void lam9661_spec(void* env9662, void* j) // lam9661 
{
std::cout<<"In lam9661_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9662);

//creating new make-kont closure
void** clo10203 = alloc_kont(lam9659_spec, 7);

//setting env list
clo10203[1] = decode_clo_array[1];
clo10203[2] = decode_clo_array[2];
clo10203[3] = decode_clo_array[3];
clo10203[4] = j;
clo10203[5] = decode_clo_array[4];
clo10203[6] = decode_clo_array[5];
clo10203[7] = decode_clo_array[6];
void* f_lam_9232 = encode_clo(clo10203);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9232, decode_clo_array[3], decode_clo_array[1], j);
}

inline void lam9663_fptr() // lam9663 -> generic version 
{
std::cout<<"In lam9663_fptr: generic version"<<std::endl;
//reading env
void* const env9664 = arg_buffer[1];
//reading env and args
void* const i = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9664);

//creating new make-kont closure
void** clo10204 = alloc_kont(lam9661_spec, 6);

//setting env list
clo10204[1] = i;
clo10204[2] = decode_clo_array[2];
clo10204[3] = decode_clo_array[1];
clo10204[4] = decode_clo_array[3];
clo10204[5] = decode_clo_array[4];
clo10204[6] = decode_clo_array[5];
void* f_lam_9233 = encode_clo(clo10204);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9233;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9663_spec(void* env9664, void* i) // lam9663 
{
std::cout<<"In lam9663_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9664);

//creating new make-kont closure
void** clo10205 = alloc_kont(lam9661_spec, 6);

//setting env list
clo10205[1] = i;
clo10205[2] = decode_clo_array[2];
clo10205[3] = decode_clo_array[1];
clo10205[4] = decode_clo_array[3];
clo10205[5] = decode_clo_array[4];
clo10205[6] = decode_clo_array[5];
void* f_lam_9233 = encode_clo(clo10205);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9233;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void change_u45cavity_u45aux_fptr() // change-cavity-aux -> generic version 
{
std::cout<<"In change_u45cavity_u45aux_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9227 = arg_buffer[2];
void* const cave = arg_buffer[3];
void* const pos = arg_buffer[4];
void* const new_u45cavity_u45id = arg_buffer[5];
void* const old_u45cavity_u45id = arg_buffer[6];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10206 = alloc_kont(lam9663_spec, 5);

//setting env list
clo10206[1] = cave;
clo10206[2] = pos;
clo10206[3] = old_u45cavity_u45id;
clo10206[4] = kont9227;
clo10206[5] = new_u45cavity_u45id;
void* f_lam_9234 = encode_clo(clo10206);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9234;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void change_u45cavity_u45aux_spec(void* _9665, void* kont9227, void* cave, void* pos, void* new_u45cavity_u45id, void* old_u45cavity_u45id) // change-cavity-aux 
{
std::cout<<"In change_u45cavity_u45aux_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10207 = alloc_kont(lam9663_spec, 5);

//setting env list
clo10207[1] = cave;
clo10207[2] = pos;
clo10207[3] = old_u45cavity_u45id;
clo10207[4] = kont9227;
clo10207[5] = new_u45cavity_u45id;
void* f_lam_9234 = encode_clo(clo10207);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9234;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void lam9666_fptr() // lam9666 -> generic version 
{
std::cout<<"In lam9666_fptr: generic version"<<std::endl;
//reading env
void* const env9667 = arg_buffer[1];
//reading env and args
void* const id_8984 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9667);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], decode_clo_array[4], id_8984);
}

inline void lam9666_spec(void* env9667, void* id_8984) // lam9666 
{
std::cout<<"In lam9666_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9667);

//clo-app
change_u45cavity_u45aux_spec(change_u45cavity_u45aux, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], decode_clo_array[4], id_8984);
}

inline void lam9668_fptr() // lam9668 -> generic version 
{
std::cout<<"In lam9668_fptr: generic version"<<std::endl;
//reading env
void* const env9669 = arg_buffer[1];
//reading env and args
void* const j = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9669);

//creating new make-kont closure
void** clo10208 = alloc_kont(lam9666_spec, 4);

//setting env list
clo10208[1] = decode_clo_array[3];
clo10208[2] = decode_clo_array[4];
clo10208[3] = decode_clo_array[2];
clo10208[4] = decode_clo_array[5];
void* f_lam_9236 = encode_clo(clo10208);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9236, decode_clo_array[3], decode_clo_array[1], j);
}

inline void lam9668_spec(void* env9669, void* j) // lam9668 
{
std::cout<<"In lam9668_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9669);

//creating new make-kont closure
void** clo10209 = alloc_kont(lam9666_spec, 4);

//setting env list
clo10209[1] = decode_clo_array[3];
clo10209[2] = decode_clo_array[4];
clo10209[3] = decode_clo_array[2];
clo10209[4] = decode_clo_array[5];
void* f_lam_9236 = encode_clo(clo10209);



//clo-app
matrix_u45read_spec(matrix_u45read, f_lam_9236, decode_clo_array[3], decode_clo_array[1], j);
}

inline void lam9670_fptr() // lam9670 -> generic version 
{
std::cout<<"In lam9670_fptr: generic version"<<std::endl;
//reading env
void* const env9671 = arg_buffer[1];
//reading env and args
void* const i = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9671);

//creating new make-kont closure
void** clo10210 = alloc_kont(lam9668_spec, 5);

//setting env list
clo10210[1] = i;
clo10210[2] = decode_clo_array[3];
clo10210[3] = decode_clo_array[1];
clo10210[4] = decode_clo_array[2];
clo10210[5] = decode_clo_array[4];
void* f_lam_9237 = encode_clo(clo10210);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9237;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9670_spec(void* env9671, void* i) // lam9670 
{
std::cout<<"In lam9670_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9671);

//creating new make-kont closure
void** clo10211 = alloc_kont(lam9668_spec, 5);

//setting env list
clo10211[1] = i;
clo10211[2] = decode_clo_array[3];
clo10211[3] = decode_clo_array[1];
clo10211[4] = decode_clo_array[2];
clo10211[5] = decode_clo_array[4];
void* f_lam_9237 = encode_clo(clo10211);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9237;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void change_u45cavity_fptr() // change-cavity -> generic version 
{
std::cout<<"In change_u45cavity_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9235 = arg_buffer[2];
void* const cave = arg_buffer[3];
void* const pos = arg_buffer[4];
void* const new_u45cavity_u45id = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10212 = alloc_kont(lam9670_spec, 4);

//setting env list
clo10212[1] = cave;
clo10212[2] = kont9235;
clo10212[3] = pos;
clo10212[4] = new_u45cavity_u45id;
void* f_lam_9238 = encode_clo(clo10212);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9238;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void change_u45cavity_spec(void* _9672, void* kont9235, void* cave, void* pos, void* new_u45cavity_u45id) // change-cavity 
{
std::cout<<"In change_u45cavity_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10213 = alloc_kont(lam9670_spec, 4);

//setting env list
clo10213[1] = cave;
clo10213[2] = kont9235;
clo10213[3] = pos;
clo10213[4] = new_u45cavity_u45id;
void* f_lam_9238 = encode_clo(clo10213);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9238;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void lam9673_fptr() // lam9673 -> generic version 
{
std::cout<<"In lam9673_fptr: generic version"<<std::endl;
//reading env
void* const env9674 = arg_buffer[1];
//reading env and args
void* const j = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9674);

//clo-app
matrix_u45write_spec(matrix_u45write, decode_clo_array[3], decode_clo_array[4], decode_clo_array[1], j, decode_clo_array[2]);
}

inline void lam9673_spec(void* env9674, void* j) // lam9673 
{
std::cout<<"In lam9673_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9674);

//clo-app
matrix_u45write_spec(matrix_u45write, decode_clo_array[3], decode_clo_array[4], decode_clo_array[1], j, decode_clo_array[2]);
}

inline void lam9675_fptr() // lam9675 -> generic version 
{
std::cout<<"In lam9675_fptr: generic version"<<std::endl;
//reading env
void* const env9676 = arg_buffer[1];
//reading env and args
void* const i = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9676);

//creating new make-kont closure
void** clo10214 = alloc_kont(lam9673_spec, 4);

//setting env list
clo10214[1] = i;
clo10214[2] = decode_clo_array[3];
clo10214[3] = decode_clo_array[1];
clo10214[4] = decode_clo_array[2];
void* f_lam_9240 = encode_clo(clo10214);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9240;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9675_spec(void* env9676, void* i) // lam9675 
{
std::cout<<"In lam9675_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9676);

//creating new make-kont closure
void** clo10215 = alloc_kont(lam9673_spec, 4);

//setting env list
clo10215[1] = i;
clo10215[2] = decode_clo_array[3];
clo10215[3] = decode_clo_array[1];
clo10215[4] = decode_clo_array[2];
void* f_lam_9240 = encode_clo(clo10215);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9240;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void pierce_fptr() // pierce -> generic version 
{
std::cout<<"In pierce_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9239 = arg_buffer[2];
void* const pos = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10216 = alloc_kont(lam9675_spec, 3);

//setting env list
clo10216[1] = kont9239;
clo10216[2] = cave;
clo10216[3] = pos;
void* f_lam_9241 = encode_clo(clo10216);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9241;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void pierce_spec(void* _9677, void* kont9239, void* pos, void* cave) // pierce 
{
std::cout<<"In pierce_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10217 = alloc_kont(lam9675_spec, 3);

//setting env list
clo10217[1] = kont9239;
clo10217[2] = cave;
clo10217[3] = pos;
void* f_lam_9241 = encode_clo(clo10217);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9241;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void lam9678_fptr() // lam9678 -> generic version 
{
std::cout<<"In lam9678_fptr: generic version"<<std::endl;
//reading env
void* const env9679 = arg_buffer[1];
//reading env and args
void* const id_8991 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9679);

//clo-app
pierce_spec(pierce, decode_clo_array[2], decode_clo_array[1], id_8991);
}

inline void lam9678_spec(void* env9679, void* id_8991) // lam9678 
{
std::cout<<"In lam9678_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9679);

//clo-app
pierce_spec(pierce, decode_clo_array[2], decode_clo_array[1], id_8991);
}

inline void lam9680_fptr() // lam9680 -> generic version 
{
std::cout<<"In lam9680_fptr: generic version"<<std::endl;
//reading env
void* const env9681 = arg_buffer[1];
//reading env and args
void* const cont9246 = arg_buffer[2];
void* const c = arg_buffer[3];
void* const nc = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9681);

//clo-app
change_u45cavity_spec(change_u45cavity, cont9246, c, nc, decode_clo_array[1]);
}

inline void lam9680_spec(void* env9681, void* cont9246, void* c, void* nc) // lam9680 
{
std::cout<<"In lam9680_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9681);

//clo-app
change_u45cavity_spec(change_u45cavity, cont9246, c, nc, decode_clo_array[1]);
}

inline void lam9682_fptr() // lam9682 -> generic version 
{
std::cout<<"In lam9682_fptr: generic version"<<std::endl;
//reading env
void* const env9683 = arg_buffer[1];
//reading env and args
void* const id_8989 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9683);

//if-clause
if(is_true(id_8989))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new closure instance
void** clo10218 = alloc_clo(lam9680_fptr, 1);

//setting env list
clo10218[1] = decode_clo_array[2];
void* id_8990 = encode_clo(clo10218);



//creating new make-kont closure
void** clo10219 = alloc_kont(lam9678_spec, 2);

//setting env list
clo10219[1] = decode_clo_array[2];
clo10219[2] = decode_clo_array[4];
void* f_lam_9247 = encode_clo(clo10219);



//clo-app
my_u45foldl_spec(my_u45foldl, f_lam_9247, id_8990, decode_clo_array[1], decode_clo_array[3]);
}

}

inline void lam9682_spec(void* env9683, void* id_8989) // lam9682 
{
std::cout<<"In lam9682_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9683);

//if-clause
if(is_true(id_8989))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new closure instance
void** clo10220 = alloc_clo(lam9680_fptr, 1);

//setting env list
clo10220[1] = decode_clo_array[2];
void* id_8990 = encode_clo(clo10220);



//creating new make-kont closure
void** clo10221 = alloc_kont(lam9678_spec, 2);

//setting env list
clo10221[1] = decode_clo_array[2];
clo10221[2] = decode_clo_array[4];
void* f_lam_9247 = encode_clo(clo10221);



//clo-app
my_u45foldl_spec(my_u45foldl, f_lam_9247, id_8990, decode_clo_array[1], decode_clo_array[3]);
}

}

inline void lam9684_fptr() // lam9684 -> generic version 
{
std::cout<<"In lam9684_fptr: generic version"<<std::endl;
//reading env
void* const env9685 = arg_buffer[1];
//reading env and args
void* const id_8988 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9685);

//creating new make-kont closure
void** clo10222 = alloc_kont(lam9682_spec, 4);

//setting env list
clo10222[1] = decode_clo_array[1];
clo10222[2] = decode_clo_array[2];
clo10222[3] = decode_clo_array[3];
clo10222[4] = decode_clo_array[4];
void* f_lam_9248 = encode_clo(clo10222);



//clo-app
duplicates_u63_spec(duplicates_u63, f_lam_9248, id_8988);
}

inline void lam9684_spec(void* env9685, void* id_8988) // lam9684 
{
std::cout<<"In lam9684_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9685);

//creating new make-kont closure
void** clo10223 = alloc_kont(lam9682_spec, 4);

//setting env list
clo10223[1] = decode_clo_array[1];
clo10223[2] = decode_clo_array[2];
clo10223[3] = decode_clo_array[3];
clo10223[4] = decode_clo_array[4];
void* f_lam_9248 = encode_clo(clo10223);



//clo-app
duplicates_u63_spec(duplicates_u63, f_lam_9248, id_8988);
}

inline void lam9686_fptr() // lam9686 -> generic version 
{
std::cout<<"In lam9686_fptr: generic version"<<std::endl;
//reading env
void* const env9687 = arg_buffer[1];
//reading env and args
void* const id_8986 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9687);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], id_8986);
}

inline void lam9686_spec(void* env9687, void* id_8986) // lam9686 
{
std::cout<<"In lam9686_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9687);

//clo-app
matrix_u45read_spec(matrix_u45read, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], id_8986);
}

inline void lam9688_fptr() // lam9688 -> generic version 
{
std::cout<<"In lam9688_fptr: generic version"<<std::endl;
//reading env
void* const env9689 = arg_buffer[1];
//reading env and args
void* const id_8985 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9689);

//creating new make-kont closure
void** clo10224 = alloc_kont(lam9686_spec, 3);

//setting env list
clo10224[1] = decode_clo_array[1];
clo10224[2] = decode_clo_array[3];
clo10224[3] = id_8985;
void* f_lam_9244 = encode_clo(clo10224);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9244;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9688_spec(void* env9689, void* id_8985) // lam9688 
{
std::cout<<"In lam9688_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9689);

//creating new make-kont closure
void** clo10225 = alloc_kont(lam9686_spec, 3);

//setting env list
clo10225[1] = decode_clo_array[1];
clo10225[2] = decode_clo_array[3];
clo10225[3] = id_8985;
void* f_lam_9244 = encode_clo(clo10225);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9244;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9690_fptr() // lam9690 -> generic version 
{
std::cout<<"In lam9690_fptr: generic version"<<std::endl;
//reading env
void* const env9691 = arg_buffer[1];
//reading env and args
void* const cont9243 = arg_buffer[2];
void* const nc = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9691);

//creating new make-kont closure
void** clo10226 = alloc_kont(lam9688_spec, 3);

//setting env list
clo10226[1] = decode_clo_array[1];
clo10226[2] = nc;
clo10226[3] = cont9243;
void* f_lam_9245 = encode_clo(clo10226);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9245;
arg_buffer[3] = nc;
numArgs = 3;
car_fptr();
}

inline void lam9690_spec(void* env9691, void* cont9243, void* nc) // lam9690 
{
std::cout<<"In lam9690_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9691);

//creating new make-kont closure
void** clo10227 = alloc_kont(lam9688_spec, 3);

//setting env list
clo10227[1] = decode_clo_array[1];
clo10227[2] = nc;
clo10227[3] = cont9243;
void* f_lam_9245 = encode_clo(clo10227);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9245;
arg_buffer[3] = nc;
numArgs = 3;
car_fptr();
}

inline void lam9692_fptr() // lam9692 -> generic version 
{
std::cout<<"In lam9692_fptr: generic version"<<std::endl;
//reading env
void* const env9693 = arg_buffer[1];
//reading env and args
void* const ncs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9693);

//creating new closure instance
void** clo10228 = alloc_clo(lam9690_fptr, 1);

//setting env list
clo10228[1] = decode_clo_array[1];
void* id_8987 = encode_clo(clo10228);



//creating new make-kont closure
void** clo10229 = alloc_kont(lam9684_spec, 4);

//setting env list
clo10229[1] = decode_clo_array[1];
clo10229[2] = decode_clo_array[2];
clo10229[3] = ncs;
clo10229[4] = decode_clo_array[3];
void* f_lam_9249 = encode_clo(clo10229);



//clo-app
map_spec(map, f_lam_9249, id_8987, ncs);
}

inline void lam9692_spec(void* env9693, void* ncs) // lam9692 
{
std::cout<<"In lam9692_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9693);

//creating new closure instance
void** clo10230 = alloc_clo(lam9690_fptr, 1);

//setting env list
clo10230[1] = decode_clo_array[1];
void* id_8987 = encode_clo(clo10230);



//creating new make-kont closure
void** clo10231 = alloc_kont(lam9684_spec, 4);

//setting env list
clo10231[1] = decode_clo_array[1];
clo10231[2] = decode_clo_array[2];
clo10231[3] = ncs;
clo10231[4] = decode_clo_array[3];
void* f_lam_9249 = encode_clo(clo10231);



//clo-app
map_spec(map, f_lam_9249, id_8987, ncs);
}

inline void lam9694_fptr() // lam9694 -> generic version 
{
std::cout<<"In lam9694_fptr: generic version"<<std::endl;
//reading env
void* const env9695 = arg_buffer[1];
//reading env and args
void* const j = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9695);

//creating new make-kont closure
void** clo10232 = alloc_kont(lam9692_spec, 3);

//setting env list
clo10232[1] = decode_clo_array[1];
clo10232[2] = decode_clo_array[2];
clo10232[3] = decode_clo_array[3];
void* f_lam_9250 = encode_clo(clo10232);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9250, decode_clo_array[2], decode_clo_array[1]);
}

inline void lam9694_spec(void* env9695, void* j) // lam9694 
{
std::cout<<"In lam9694_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9695);

//creating new make-kont closure
void** clo10233 = alloc_kont(lam9692_spec, 3);

//setting env list
clo10233[1] = decode_clo_array[1];
clo10233[2] = decode_clo_array[2];
clo10233[3] = decode_clo_array[3];
void* f_lam_9250 = encode_clo(clo10233);



//clo-app
neighboring_u45cavities_spec(neighboring_u45cavities, f_lam_9250, decode_clo_array[2], decode_clo_array[1]);
}

inline void lam9696_fptr() // lam9696 -> generic version 
{
std::cout<<"In lam9696_fptr: generic version"<<std::endl;
//reading env
void* const env9697 = arg_buffer[1];
//reading env and args
void* const i = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9697);

//creating new make-kont closure
void** clo10234 = alloc_kont(lam9694_spec, 3);

//setting env list
clo10234[1] = decode_clo_array[1];
clo10234[2] = decode_clo_array[2];
clo10234[3] = decode_clo_array[3];
void* f_lam_9251 = encode_clo(clo10234);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9251;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9696_spec(void* env9697, void* i) // lam9696 
{
std::cout<<"In lam9696_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9697);

//creating new make-kont closure
void** clo10235 = alloc_kont(lam9694_spec, 3);

//setting env list
clo10235[1] = decode_clo_array[1];
clo10235[2] = decode_clo_array[2];
clo10235[3] = decode_clo_array[3];
void* f_lam_9251 = encode_clo(clo10235);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9251;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void try_u45to_u45pierce_fptr() // try-to-pierce -> generic version 
{
std::cout<<"In try_u45to_u45pierce_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9242 = arg_buffer[2];
void* const pos = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10236 = alloc_kont(lam9696_spec, 3);

//setting env list
clo10236[1] = cave;
clo10236[2] = pos;
clo10236[3] = kont9242;
void* f_lam_9252 = encode_clo(clo10236);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9252;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void try_u45to_u45pierce_spec(void* _9698, void* kont9242, void* pos, void* cave) // try-to-pierce 
{
std::cout<<"In try_u45to_u45pierce_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10237 = alloc_kont(lam9696_spec, 3);

//setting env list
clo10237[1] = cave;
clo10237[2] = pos;
clo10237[3] = kont9242;
void* f_lam_9252 = encode_clo(clo10237);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9252;
arg_buffer[3] = pos;
numArgs = 3;
car_fptr();
}

inline void lam9699_fptr() // lam9699 -> generic version 
{
std::cout<<"In lam9699_fptr: generic version"<<std::endl;
//reading env
void* const env9700 = arg_buffer[1];
//reading env and args
void* const id_8994 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9700);

//clo-app
pierce_u45randomly_spec(pierce_u45randomly, decode_clo_array[1], decode_clo_array[2], id_8994);
}

inline void lam9699_spec(void* env9700, void* id_8994) // lam9699 
{
std::cout<<"In lam9699_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9700);

//clo-app
pierce_u45randomly_spec(pierce_u45randomly, decode_clo_array[1], decode_clo_array[2], id_8994);
}

inline void lam9701_fptr() // lam9701 -> generic version 
{
std::cout<<"In lam9701_fptr: generic version"<<std::endl;
//reading env
void* const env9702 = arg_buffer[1];
//reading env and args
void* const id_8993 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9702);

//creating new make-kont closure
void** clo10238 = alloc_kont(lam9699_spec, 2);

//setting env list
clo10238[1] = decode_clo_array[2];
clo10238[2] = id_8993;
void* f_lam_9254 = encode_clo(clo10238);



//clo-app
try_u45to_u45pierce_spec(try_u45to_u45pierce, f_lam_9254, decode_clo_array[3], decode_clo_array[1]);
}

inline void lam9701_spec(void* env9702, void* id_8993) // lam9701 
{
std::cout<<"In lam9701_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9702);

//creating new make-kont closure
void** clo10239 = alloc_kont(lam9699_spec, 2);

//setting env list
clo10239[1] = decode_clo_array[2];
clo10239[2] = id_8993;
void* f_lam_9254 = encode_clo(clo10239);



//clo-app
try_u45to_u45pierce_spec(try_u45to_u45pierce, f_lam_9254, decode_clo_array[3], decode_clo_array[1]);
}

inline void lam9703_fptr() // lam9703 -> generic version 
{
std::cout<<"In lam9703_fptr: generic version"<<std::endl;
//reading env
void* const env9704 = arg_buffer[1];
//reading env and args
void* const hole = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9704);

//creating new make-kont closure
void** clo10240 = alloc_kont(lam9701_spec, 3);

//setting env list
clo10240[1] = decode_clo_array[1];
clo10240[2] = decode_clo_array[2];
clo10240[3] = hole;
void* f_lam_9255 = encode_clo(clo10240);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9255;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9703_spec(void* env9704, void* hole) // lam9703 
{
std::cout<<"In lam9703_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9704);

//creating new make-kont closure
void** clo10241 = alloc_kont(lam9701_spec, 3);

//setting env list
clo10241[1] = decode_clo_array[1];
clo10241[2] = decode_clo_array[2];
clo10241[3] = hole;
void* f_lam_9255 = encode_clo(clo10241);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_9255;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9705_fptr() // lam9705 -> generic version 
{
std::cout<<"In lam9705_fptr: generic version"<<std::endl;
//reading env
void* const env9706 = arg_buffer[1];
//reading env and args
void* const id_8992 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9706);

//if-clause
if(is_true(id_8992))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo10242 = alloc_kont(lam9703_spec, 3);

//setting env list
clo10242[1] = decode_clo_array[1];
clo10242[2] = decode_clo_array[2];
clo10242[3] = decode_clo_array[3];
void* f_lam_9256 = encode_clo(clo10242);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9256;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9705_spec(void* env9706, void* id_8992) // lam9705 
{
std::cout<<"In lam9705_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9706);

//if-clause
if(is_true(id_8992))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo10243 = alloc_kont(lam9703_spec, 3);

//setting env list
clo10243[1] = decode_clo_array[1];
clo10243[2] = decode_clo_array[2];
clo10243[3] = decode_clo_array[3];
void* f_lam_9256 = encode_clo(clo10243);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_9256;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void pierce_u45randomly_fptr() // pierce-randomly -> generic version 
{
std::cout<<"In pierce_u45randomly_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9253 = arg_buffer[2];
void* const possible_u45holes = arg_buffer[3];
void* const cave = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10244 = alloc_kont(lam9705_spec, 3);

//setting env list
clo10244[1] = cave;
clo10244[2] = kont9253;
clo10244[3] = possible_u45holes;
void* f_lam_9257 = encode_clo(clo10244);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9257;
arg_buffer[3] = possible_u45holes;
numArgs = 3;
null_u63_fptr();
}

inline void pierce_u45randomly_spec(void* _9707, void* kont9253, void* possible_u45holes, void* cave) // pierce-randomly 
{
std::cout<<"In pierce_u45randomly_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10245 = alloc_kont(lam9705_spec, 3);

//setting env list
clo10245[1] = cave;
clo10245[2] = kont9253;
clo10245[3] = possible_u45holes;
void* f_lam_9257 = encode_clo(clo10245);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_9257;
arg_buffer[3] = possible_u45holes;
numArgs = 3;
null_u63_fptr();
}

inline void lam9708_fptr() // lam9708 -> generic version 
{
std::cout<<"In lam9708_fptr: generic version"<<std::endl;
//reading env
void* const env9709 = arg_buffer[1];
//reading env and args
void* const xy8996 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9709);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8996);
}

inline void lam9708_spec(void* env9709, void* xy8996) // lam9708 
{
std::cout<<"In lam9708_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9709);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8996);
}

inline void lam9710_fptr() // lam9710 -> generic version 
{
std::cout<<"In lam9710_fptr: generic version"<<std::endl;
//reading env
void* const env9711 = arg_buffer[1];
//reading env and args
void* const xy9004 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9711);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy9004);
}

inline void lam9710_spec(void* env9711, void* xy9004) // lam9710 
{
std::cout<<"In lam9710_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9711);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy9004);
}

inline void lam9712_fptr() // lam9712 -> generic version 
{
std::cout<<"In lam9712_fptr: generic version"<<std::endl;
//reading env
void* const env9713 = arg_buffer[1];
//reading env and args
void* const xy9007 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9713);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy9007);
}

inline void lam9712_spec(void* env9713, void* xy9007) // lam9712 
{
std::cout<<"In lam9712_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9713);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy9007);
}

inline void lam9714_fptr() // lam9714 -> generic version 
{
std::cout<<"In lam9714_fptr: generic version"<<std::endl;
//reading env
void* const env9715 = arg_buffer[1];
//reading env and args
void* const id_9006 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9715);

//if-clause
if(is_true(id_9006))
{

//creating new make-kont closure
void** clo10246 = alloc_kont(lam9712_spec, 1);

//setting env list
clo10246[1] = decode_clo_array[3];
void* f_lam_9273 = encode_clo(clo10246);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9273;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
cons_fptr();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9801);
}

}

inline void lam9714_spec(void* env9715, void* id_9006) // lam9714 
{
std::cout<<"In lam9714_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9715);

//if-clause
if(is_true(id_9006))
{

//creating new make-kont closure
void** clo10247 = alloc_kont(lam9712_spec, 1);

//setting env list
clo10247[1] = decode_clo_array[3];
void* f_lam_9273 = encode_clo(clo10247);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9273;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
cons_fptr();
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9801);
}

}

inline void lam9716_fptr() // lam9716 -> generic version 
{
std::cout<<"In lam9716_fptr: generic version"<<std::endl;
//reading env
void* const env9717 = arg_buffer[1];
//reading env and args
void* const id_9003 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9717);

//creating new make-kont closure
void** clo10248 = alloc_kont(lam9714_spec, 3);

//setting env list
clo10248[1] = decode_clo_array[1];
clo10248[2] = decode_clo_array[2];
clo10248[3] = decode_clo_array[3];
void* f_lam_9274 = encode_clo(clo10248);



//if-clause
if(is_true(id_9003))
{

//creating new make-kont closure
void** clo10249 = alloc_kont(lam9710_spec, 1);

//setting env list
clo10249[1] = f_lam_9274;
void* f_lam_9275 = encode_clo(clo10249);



//clo-app
even_u63_spec(even_u63, f_lam_9275, decode_clo_array[2]);
}
else
{
// kont-clo-app case
lam9714_spec(f_lam_9274, bool_f9801);
}

}

inline void lam9716_spec(void* env9717, void* id_9003) // lam9716 
{
std::cout<<"In lam9716_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9717);

//creating new make-kont closure
void** clo10250 = alloc_kont(lam9714_spec, 3);

//setting env list
clo10250[1] = decode_clo_array[1];
clo10250[2] = decode_clo_array[2];
clo10250[3] = decode_clo_array[3];
void* f_lam_9274 = encode_clo(clo10250);



//if-clause
if(is_true(id_9003))
{

//creating new make-kont closure
void** clo10251 = alloc_kont(lam9710_spec, 1);

//setting env list
clo10251[1] = f_lam_9274;
void* f_lam_9275 = encode_clo(clo10251);



//clo-app
even_u63_spec(even_u63, f_lam_9275, decode_clo_array[2]);
}
else
{
// kont-clo-app case
lam9714_spec(f_lam_9274, bool_f9801);
}

}

inline void lam9718_fptr() // lam9718 -> generic version 
{
std::cout<<"In lam9718_fptr: generic version"<<std::endl;
//reading env
void* const env9719 = arg_buffer[1];
//reading env and args
void* const cont9272 = arg_buffer[2];
void* const i = arg_buffer[3];
void* const j = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9719);

//creating new make-kont closure
void** clo10252 = alloc_kont(lam9716_spec, 3);

//setting env list
clo10252[1] = i;
clo10252[2] = j;
clo10252[3] = cont9272;
void* f_lam_9276 = encode_clo(clo10252);



//clo-app
even_u63_spec(even_u63, f_lam_9276, i);
}

inline void lam9718_spec(void* env9719, void* cont9272, void* i, void* j) // lam9718 
{
std::cout<<"In lam9718_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9719);

//creating new make-kont closure
void** clo10253 = alloc_kont(lam9716_spec, 3);

//setting env list
clo10253[1] = i;
clo10253[2] = j;
clo10253[3] = cont9272;
void* f_lam_9276 = encode_clo(clo10253);



//clo-app
even_u63_spec(even_u63, f_lam_9276, i);
}

inline void lam9720_fptr() // lam9720 -> generic version 
{
std::cout<<"In lam9720_fptr: generic version"<<std::endl;
//reading env
void* const env9721 = arg_buffer[1];
//reading env and args
void* const id_9020 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9721);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9020);
}

inline void lam9720_spec(void* env9721, void* id_9020) // lam9720 
{
std::cout<<"In lam9720_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9721);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9020);
}

inline void lam9722_fptr() // lam9722 -> generic version 
{
std::cout<<"In lam9722_fptr: generic version"<<std::endl;
//reading env
void* const env9723 = arg_buffer[1];
//reading env and args
void* const id_9018 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9723);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9018);
}

inline void lam9722_spec(void* env9723, void* id_9018) // lam9722 
{
std::cout<<"In lam9722_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9723);

//clo-app
concat_spec(concat, decode_clo_array[1], id_9018);
}

inline void lam9724_fptr() // lam9724 -> generic version 
{
std::cout<<"In lam9724_fptr: generic version"<<std::endl;
//reading env
void* const env9725 = arg_buffer[1];
//reading env and args
void* const xy9015 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9725);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy9015);
}

inline void lam9724_spec(void* env9725, void* xy9015) // lam9724 
{
std::cout<<"In lam9724_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9725);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy9015);
}

inline void lam9726_fptr() // lam9726 -> generic version 
{
std::cout<<"In lam9726_fptr: generic version"<<std::endl;
//reading env
void* const env9727 = arg_buffer[1];
//reading env and args
void* const id_9016 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9727);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_9016;
numArgs = 3;
list_fptr();
}

inline void lam9726_spec(void* env9727, void* id_9016) // lam9726 
{
std::cout<<"In lam9726_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9727);

//clo-app
arg_buffer[1] = list;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = id_9016;
numArgs = 3;
list_fptr();
}

inline void lam9728_fptr() // lam9728 -> generic version 
{
std::cout<<"In lam9728_fptr: generic version"<<std::endl;
//reading env
void* const env9729 = arg_buffer[1];
//reading env and args
void* const id_9014 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9729);

//if-clause
if(is_true(id_9014))
{

//creating new make-kont closure
void** clo10254 = alloc_kont(lam9724_spec, 1);

//setting env list
clo10254[1] = decode_clo_array[3];
void* f_lam_9264 = encode_clo(clo10254);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9264;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo10255 = alloc_kont(lam9726_spec, 1);

//setting env list
clo10255[1] = decode_clo_array[3];
void* f_lam_9265 = encode_clo(clo10255);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9265;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
cons_fptr();
}

}

inline void lam9728_spec(void* env9729, void* id_9014) // lam9728 
{
std::cout<<"In lam9728_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9729);

//if-clause
if(is_true(id_9014))
{

//creating new make-kont closure
void** clo10256 = alloc_kont(lam9724_spec, 1);

//setting env list
clo10256[1] = decode_clo_array[3];
void* f_lam_9264 = encode_clo(clo10256);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_9264;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo10257 = alloc_kont(lam9726_spec, 1);

//setting env list
clo10257[1] = decode_clo_array[3];
void* f_lam_9265 = encode_clo(clo10257);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f_lam_9265;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
cons_fptr();
}

}

inline void lam9730_fptr() // lam9730 -> generic version 
{
std::cout<<"In lam9730_fptr: generic version"<<std::endl;
//reading env
void* const env9731 = arg_buffer[1];
//reading env and args
void* const id_9013 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9731);

//creating new make-kont closure
void** clo10258 = alloc_kont(lam9728_spec, 3);

//setting env list
clo10258[1] = decode_clo_array[2];
clo10258[2] = decode_clo_array[3];
clo10258[3] = decode_clo_array[4];
void* f_lam_9266 = encode_clo(clo10258);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9266;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_9013;
numArgs = 4;
equal_u63_fptr();
}

inline void lam9730_spec(void* env9731, void* id_9013) // lam9730 
{
std::cout<<"In lam9730_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9731);

//creating new make-kont closure
void** clo10259 = alloc_kont(lam9728_spec, 3);

//setting env list
clo10259[1] = decode_clo_array[2];
clo10259[2] = decode_clo_array[3];
clo10259[3] = decode_clo_array[4];
void* f_lam_9266 = encode_clo(clo10259);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_9266;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_9013;
numArgs = 4;
equal_u63_fptr();
}

inline void lam9732_fptr() // lam9732 -> generic version 
{
std::cout<<"In lam9732_fptr: generic version"<<std::endl;
//reading env
void* const env9733 = arg_buffer[1];
//reading env and args
void* const id_9012 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9733);

//creating new make-kont closure
void** clo10260 = alloc_kont(lam9730_spec, 4);

//setting env list
clo10260[1] = id_9012;
clo10260[2] = decode_clo_array[1];
clo10260[3] = decode_clo_array[2];
clo10260[4] = decode_clo_array[3];
void* f_lam_9267 = encode_clo(clo10260);



//clo-app
even_u63_spec(even_u63, f_lam_9267, decode_clo_array[2]);
}

inline void lam9732_spec(void* env9733, void* id_9012) // lam9732 
{
std::cout<<"In lam9732_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9733);

//creating new make-kont closure
void** clo10261 = alloc_kont(lam9730_spec, 4);

//setting env list
clo10261[1] = id_9012;
clo10261[2] = decode_clo_array[1];
clo10261[3] = decode_clo_array[2];
clo10261[4] = decode_clo_array[3];
void* f_lam_9267 = encode_clo(clo10261);



//clo-app
even_u63_spec(even_u63, f_lam_9267, decode_clo_array[2]);
}

inline void lam9734_fptr() // lam9734 -> generic version 
{
std::cout<<"In lam9734_fptr: generic version"<<std::endl;
//reading env
void* const env9735 = arg_buffer[1];
//reading env and args
void* const cont9263 = arg_buffer[2];
void* const j = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9735);

//creating new make-kont closure
void** clo10262 = alloc_kont(lam9732_spec, 3);

//setting env list
clo10262[1] = decode_clo_array[1];
clo10262[2] = j;
clo10262[3] = cont9263;
void* f_lam_9268 = encode_clo(clo10262);



//clo-app
even_u63_spec(even_u63, f_lam_9268, decode_clo_array[1]);
}

inline void lam9734_spec(void* env9735, void* cont9263, void* j) // lam9734 
{
std::cout<<"In lam9734_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9735);

//creating new make-kont closure
void** clo10263 = alloc_kont(lam9732_spec, 3);

//setting env list
clo10263[1] = decode_clo_array[1];
clo10263[2] = j;
clo10263[3] = cont9263;
void* f_lam_9268 = encode_clo(clo10263);



//clo-app
even_u63_spec(even_u63, f_lam_9268, decode_clo_array[1]);
}

inline void lam9736_fptr() // lam9736 -> generic version 
{
std::cout<<"In lam9736_fptr: generic version"<<std::endl;
//reading env
void* const env9737 = arg_buffer[1];
//reading env and args
void* const cont9262 = arg_buffer[2];
void* const i = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9737);

//creating new closure instance
void** clo10264 = alloc_clo(lam9734_fptr, 1);

//setting env list
clo10264[1] = i;
void* id_9017 = encode_clo(clo10264);



//creating new make-kont closure
void** clo10265 = alloc_kont(lam9722_spec, 1);

//setting env list
clo10265[1] = cont9262;
void* f_lam_9269 = encode_clo(clo10265);



//clo-app
my_u45for_spec(my_u45for, f_lam_9269, int9803, decode_clo_array[1], id_9017);
}

inline void lam9736_spec(void* env9737, void* cont9262, void* i) // lam9736 
{
std::cout<<"In lam9736_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9737);

//creating new closure instance
void** clo10266 = alloc_clo(lam9734_fptr, 1);

//setting env list
clo10266[1] = i;
void* id_9017 = encode_clo(clo10266);



//creating new make-kont closure
void** clo10267 = alloc_kont(lam9722_spec, 1);

//setting env list
clo10267[1] = cont9262;
void* f_lam_9269 = encode_clo(clo10267);



//clo-app
my_u45for_spec(my_u45for, f_lam_9269, int9803, decode_clo_array[1], id_9017);
}

inline void lam9738_fptr() // lam9738 -> generic version 
{
std::cout<<"In lam9738_fptr: generic version"<<std::endl;
//reading env
void* const env9739 = arg_buffer[1];
//reading env and args
void* const id_9022 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9739);

//clo-app
cave_u45to_u45maze_spec(cave_u45to_u45maze, decode_clo_array[1], id_9022);
}

inline void lam9738_spec(void* env9739, void* id_9022) // lam9738 
{
std::cout<<"In lam9738_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9739);

//clo-app
cave_u45to_u45maze_spec(cave_u45to_u45maze, decode_clo_array[1], id_9022);
}

inline void lam9740_fptr() // lam9740 -> generic version 
{
std::cout<<"In lam9740_fptr: generic version"<<std::endl;
//reading env
void* const env9741 = arg_buffer[1];
//reading env and args
void* const id_9021 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9741);

//creating new make-kont closure
void** clo10268 = alloc_kont(lam9738_spec, 1);

//setting env list
clo10268[1] = decode_clo_array[2];
void* f_lam_9259 = encode_clo(clo10268);



//clo-app
pierce_u45randomly_spec(pierce_u45randomly, f_lam_9259, id_9021, decode_clo_array[1]);
}

inline void lam9740_spec(void* env9741, void* id_9021) // lam9740 
{
std::cout<<"In lam9740_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9741);

//creating new make-kont closure
void** clo10269 = alloc_kont(lam9738_spec, 1);

//setting env list
clo10269[1] = decode_clo_array[2];
void* f_lam_9259 = encode_clo(clo10269);



//clo-app
pierce_u45randomly_spec(pierce_u45randomly, f_lam_9259, id_9021, decode_clo_array[1]);
}

inline void lam9742_fptr() // lam9742 -> generic version 
{
std::cout<<"In lam9742_fptr: generic version"<<std::endl;
//reading env
void* const env9743 = arg_buffer[1];
//reading env and args
void* const possible_u45holes = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9743);

//creating new make-kont closure
void** clo10270 = alloc_kont(lam9740_spec, 2);

//setting env list
clo10270[1] = decode_clo_array[1];
clo10270[2] = decode_clo_array[2];
void* f_lam_9260 = encode_clo(clo10270);



//clo-app
shuffle_spec(shuffle, f_lam_9260, possible_u45holes);
}

inline void lam9742_spec(void* env9743, void* possible_u45holes) // lam9742 
{
std::cout<<"In lam9742_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9743);

//creating new make-kont closure
void** clo10271 = alloc_kont(lam9740_spec, 2);

//setting env list
clo10271[1] = decode_clo_array[1];
clo10271[2] = decode_clo_array[2];
void* f_lam_9260 = encode_clo(clo10271);



//clo-app
shuffle_spec(shuffle, f_lam_9260, possible_u45holes);
}

inline void lam9744_fptr() // lam9744 -> generic version 
{
std::cout<<"In lam9744_fptr: generic version"<<std::endl;
//reading env
void* const env9745 = arg_buffer[1];
//reading env and args
void* const cave = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9745);

//creating new make-kont closure
void** clo10272 = alloc_kont(lam9742_spec, 2);

//setting env list
clo10272[1] = cave;
clo10272[2] = decode_clo_array[3];
void* f_lam_9261 = encode_clo(clo10272);



//creating new closure instance
void** clo10273 = alloc_clo(lam9736_fptr, 1);

//setting env list
clo10273[1] = decode_clo_array[1];
void* id_9019 = encode_clo(clo10273);



//creating new make-kont closure
void** clo10274 = alloc_kont(lam9720_spec, 1);

//setting env list
clo10274[1] = f_lam_9261;
void* f_lam_9270 = encode_clo(clo10274);



//clo-app
my_u45for_spec(my_u45for, f_lam_9270, int9803, decode_clo_array[2], id_9019);
}

inline void lam9744_spec(void* env9745, void* cave) // lam9744 
{
std::cout<<"In lam9744_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9745);

//creating new make-kont closure
void** clo10275 = alloc_kont(lam9742_spec, 2);

//setting env list
clo10275[1] = cave;
clo10275[2] = decode_clo_array[3];
void* f_lam_9261 = encode_clo(clo10275);



//creating new closure instance
void** clo10276 = alloc_clo(lam9736_fptr, 1);

//setting env list
clo10276[1] = decode_clo_array[1];
void* id_9019 = encode_clo(clo10276);



//creating new make-kont closure
void** clo10277 = alloc_kont(lam9720_spec, 1);

//setting env list
clo10277[1] = f_lam_9261;
void* f_lam_9270 = encode_clo(clo10277);



//clo-app
my_u45for_spec(my_u45for, f_lam_9270, int9803, decode_clo_array[2], id_9019);
}

inline void lam9746_fptr() // lam9746 -> generic version 
{
std::cout<<"In lam9746_fptr: generic version"<<std::endl;
//reading env
void* const env9747 = arg_buffer[1];
//reading env and args
void* const id_9001 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9747);

//if-clause
if(is_true(id_9001))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], encode_str(new(GC) std::string("error")));
}
else
{

//creating new make-kont closure
void** clo10278 = alloc_kont(lam9744_spec, 3);

//setting env list
clo10278[1] = decode_clo_array[1];
clo10278[2] = decode_clo_array[2];
clo10278[3] = decode_clo_array[3];
void* f_lam_9271 = encode_clo(clo10278);



//creating new closure instance
void** clo10279 = alloc_clo(lam9718_fptr, 0);
void* id_9009 = encode_clo(clo10279);



//clo-app
make_u45matrix_spec(make_u45matrix, f_lam_9271, decode_clo_array[2], decode_clo_array[1], id_9009);
}

}

inline void lam9746_spec(void* env9747, void* id_9001) // lam9746 
{
std::cout<<"In lam9746_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9747);

//if-clause
if(is_true(id_9001))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], encode_str(new(GC) std::string("error")));
}
else
{

//creating new make-kont closure
void** clo10280 = alloc_kont(lam9744_spec, 3);

//setting env list
clo10280[1] = decode_clo_array[1];
clo10280[2] = decode_clo_array[2];
clo10280[3] = decode_clo_array[3];
void* f_lam_9271 = encode_clo(clo10280);



//creating new closure instance
void** clo10281 = alloc_clo(lam9718_fptr, 0);
void* id_9009 = encode_clo(clo10281);



//clo-app
make_u45matrix_spec(make_u45matrix, f_lam_9271, decode_clo_array[2], decode_clo_array[1], id_9009);
}

}

inline void lam9748_fptr() // lam9748 -> generic version 
{
std::cout<<"In lam9748_fptr: generic version"<<std::endl;
//reading env
void* const env9749 = arg_buffer[1];
//reading env and args
void* const id_8998 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9749);

//creating new make-kont closure
void** clo10282 = alloc_kont(lam9746_spec, 3);

//setting env list
clo10282[1] = decode_clo_array[1];
clo10282[2] = decode_clo_array[2];
clo10282[3] = decode_clo_array[3];
void* f_lam_9277 = encode_clo(clo10282);



//if-clause
if(is_true(id_8998))
{
// kont-clo-app case
lam9746_spec(f_lam_9277, bool_f9801);
}
else
{
// kont-clo-app case
lam9746_spec(f_lam_9277, bool_t9798);
}

}

inline void lam9748_spec(void* env9749, void* id_8998) // lam9748 
{
std::cout<<"In lam9748_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9749);

//creating new make-kont closure
void** clo10283 = alloc_kont(lam9746_spec, 3);

//setting env list
clo10283[1] = decode_clo_array[1];
clo10283[2] = decode_clo_array[2];
clo10283[3] = decode_clo_array[3];
void* f_lam_9277 = encode_clo(clo10283);



//if-clause
if(is_true(id_8998))
{
// kont-clo-app case
lam9746_spec(f_lam_9277, bool_f9801);
}
else
{
// kont-clo-app case
lam9746_spec(f_lam_9277, bool_t9798);
}

}

inline void lam9750_fptr() // lam9750 -> generic version 
{
std::cout<<"In lam9750_fptr: generic version"<<std::endl;
//reading env
void* const env9751 = arg_buffer[1];
//reading env and args
void* const id_8995 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9751);

//creating new make-kont closure
void** clo10284 = alloc_kont(lam9748_spec, 3);

//setting env list
clo10284[1] = decode_clo_array[1];
clo10284[2] = decode_clo_array[2];
clo10284[3] = decode_clo_array[3];
void* f_lam_9278 = encode_clo(clo10284);



//if-clause
if(is_true(id_8995))
{

//creating new make-kont closure
void** clo10285 = alloc_kont(lam9708_spec, 1);

//setting env list
clo10285[1] = f_lam_9278;
void* f_lam_9279 = encode_clo(clo10285);



//clo-app
odd_u63_spec(odd_u63, f_lam_9279, decode_clo_array[1]);
}
else
{
// kont-clo-app case
lam9748_spec(f_lam_9278, bool_f9801);
}

}

inline void lam9750_spec(void* env9751, void* id_8995) // lam9750 
{
std::cout<<"In lam9750_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9751);

//creating new make-kont closure
void** clo10286 = alloc_kont(lam9748_spec, 3);

//setting env list
clo10286[1] = decode_clo_array[1];
clo10286[2] = decode_clo_array[2];
clo10286[3] = decode_clo_array[3];
void* f_lam_9278 = encode_clo(clo10286);



//if-clause
if(is_true(id_8995))
{

//creating new make-kont closure
void** clo10287 = alloc_kont(lam9708_spec, 1);

//setting env list
clo10287[1] = f_lam_9278;
void* f_lam_9279 = encode_clo(clo10287);



//clo-app
odd_u63_spec(odd_u63, f_lam_9279, decode_clo_array[1]);
}
else
{
// kont-clo-app case
lam9748_spec(f_lam_9278, bool_f9801);
}

}

inline void make_u45maze_fptr() // make-maze -> generic version 
{
std::cout<<"In make_u45maze_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9258 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const m = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10288 = alloc_kont(lam9750_spec, 3);

//setting env list
clo10288[1] = m;
clo10288[2] = n;
clo10288[3] = kont9258;
void* f_lam_9280 = encode_clo(clo10288);



//clo-app
odd_u63_spec(odd_u63, f_lam_9280, n);
}

inline void make_u45maze_spec(void* _9752, void* kont9258, void* n, void* m) // make-maze 
{
std::cout<<"In make_u45maze_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo10289 = alloc_kont(lam9750_spec, 3);

//setting env list
clo10289[1] = m;
clo10289[2] = n;
clo10289[3] = kont9258;
void* f_lam_9280 = encode_clo(clo10289);



//clo-app
odd_u63_spec(odd_u63, f_lam_9280, n);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
std::cout<<"In brouhaha_main_fptr: generic version"<<std::endl;
//reading env and args
void* const kont9281 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
make_u45maze_spec(make_u45maze, kont9281, int9805, int9805);
}

inline void brouhaha_main_spec(void* _9753, void* kont9281) // brouhaha_main 
{
std::cout<<"In brouhaha_main_fptr: spec"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
make_u45maze_spec(make_u45maze, kont9281, int9805, int9805);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9803 = reinterpret_cast<void *>(encode_int(0));
int9780 = reinterpret_cast<void *>(encode_int(131072));
bool_t9798 = encode_bool(true);
int9796 = reinterpret_cast<void *>(encode_int(1));
bool_f9801 = encode_bool(false);
int9757 = reinterpret_cast<void *>(encode_int(2));
int9805 = reinterpret_cast<void *>(encode_int(11));
int9778 = reinterpret_cast<void *>(encode_int(3581));
int9779 = reinterpret_cast<void *>(encode_int(12751));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

