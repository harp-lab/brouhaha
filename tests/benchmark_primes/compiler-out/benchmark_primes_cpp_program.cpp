#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9151;
void* bool_t9144;
void* int9153;
void* int9150;
void* bool_f9145;
void* int9152;



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

void lam8969_fptr(); // lam8969
void lam8969_spec(void* env8970, void* xy8783); // lam8969
void* lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void lam8971_fptr(); // lam8971
void lam8971_spec(void* env8972, void* id_8786); // lam8971
void* lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void lam8973_fptr(); // lam8973
void lam8973_spec(void* env8974, void* id_8784); // lam8973
void* lam8973 = encode_clo(alloc_clo(lam8973_fptr, 0));

void lam8975_fptr(); // lam8975
void lam8975_spec(void* env8976, void* id_8782); // lam8975
void* lam8975 = encode_clo(alloc_clo(lam8975_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8977, void* kont8874, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8978_fptr(); // lam8978
void lam8978_spec(void* env8979, void* xy8788); // lam8978
void* lam8978 = encode_clo(alloc_clo(lam8978_fptr, 0));

void lam8980_fptr(); // lam8980
void lam8980_spec(void* env8981, void* xy8789); // lam8980
void* lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void lam8982_fptr(); // lam8982
void lam8982_spec(void* env8983, void* id_8794); // lam8982
void* lam8982 = encode_clo(alloc_clo(lam8982_fptr, 0));

void lam8984_fptr(); // lam8984
void lam8984_spec(void* env8985, void* id_8793); // lam8984
void* lam8984 = encode_clo(alloc_clo(lam8984_fptr, 0));

void lam8986_fptr(); // lam8986
void lam8986_spec(void* env8987, void* id_8792); // lam8986
void* lam8986 = encode_clo(alloc_clo(lam8986_fptr, 0));

void lam8988_fptr(); // lam8988
void lam8988_spec(void* env8989, void* id_8790); // lam8988
void* lam8988 = encode_clo(alloc_clo(lam8988_fptr, 0));

void lam8990_fptr(); // lam8990
void lam8990_spec(void* env8991, void* id_8787); // lam8990
void* lam8990 = encode_clo(alloc_clo(lam8990_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8992, void* kont8879, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8993_fptr(); // lam8993
void lam8993_spec(void* env8994, void* id_8800); // lam8993
void* lam8993 = encode_clo(alloc_clo(lam8993_fptr, 0));

void lam8995_fptr(); // lam8995
void lam8995_spec(void* env8996, void* id_8798); // lam8995
void* lam8995 = encode_clo(alloc_clo(lam8995_fptr, 0));

void lam8997_fptr(); // lam8997
void lam8997_spec(void* env8998, void* id_8797); // lam8997
void* lam8997 = encode_clo(alloc_clo(lam8997_fptr, 0));

void lam8999_fptr(); // lam8999
void lam8999_spec(void* env9000, void* id_8795); // lam8999
void* lam8999 = encode_clo(alloc_clo(lam8999_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _9001, void* kont8887, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam9002_fptr(); // lam9002
void lam9002_spec(void* env9003, void* id_8805); // lam9002
void* lam9002 = encode_clo(alloc_clo(lam9002_fptr, 0));

void lam9004_fptr(); // lam9004
void lam9004_spec(void* env9005, void* id_8804); // lam9004
void* lam9004 = encode_clo(alloc_clo(lam9004_fptr, 0));

void lam9006_fptr(); // lam9006
void lam9006_spec(void* env9007, void* id_8801); // lam9006
void* lam9006 = encode_clo(alloc_clo(lam9006_fptr, 0));

void length_fptr(); // length
void length_spec(void* _9008, void* kont8892, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam9009_fptr(); // lam9009
void lam9009_spec(void* env9010, void* id_8811); // lam9009
void* lam9009 = encode_clo(alloc_clo(lam9009_fptr, 0));

void lam9011_fptr(); // lam9011
void lam9011_spec(void* env9012, void* id_8810); // lam9011
void* lam9011 = encode_clo(alloc_clo(lam9011_fptr, 0));

void lam9013_fptr(); // lam9013
void lam9013_spec(void* env9014, void* id_8809); // lam9013
void* lam9013 = encode_clo(alloc_clo(lam9013_fptr, 0));

void lam9015_fptr(); // lam9015
void lam9015_spec(void* env9016, void* id_8808); // lam9015
void* lam9015 = encode_clo(alloc_clo(lam9015_fptr, 0));

void lam9017_fptr(); // lam9017
void lam9017_spec(void* env9018, void* id_8806); // lam9017
void* lam9017 = encode_clo(alloc_clo(lam9017_fptr, 0));

void map_fptr(); // map
void map_spec(void* _9019, void* kont8896, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam9020_fptr(); // lam9020
void lam9020_spec(void* env9021, void* id_8818); // lam9020
void* lam9020 = encode_clo(alloc_clo(lam9020_fptr, 0));

void lam9022_fptr(); // lam9022
void lam9022_spec(void* env9023, void* id_8817); // lam9022
void* lam9022 = encode_clo(alloc_clo(lam9022_fptr, 0));

void lam9024_fptr(); // lam9024
void lam9024_spec(void* env9025, void* id_8816); // lam9024
void* lam9024 = encode_clo(alloc_clo(lam9024_fptr, 0));

void lam9026_fptr(); // lam9026
void lam9026_spec(void* env9027, void* id_8819); // lam9026
void* lam9026 = encode_clo(alloc_clo(lam9026_fptr, 0));

void lam9028_fptr(); // lam9028
void lam9028_spec(void* env9029, void* id_8815); // lam9028
void* lam9028 = encode_clo(alloc_clo(lam9028_fptr, 0));

void lam9030_fptr(); // lam9030
void lam9030_spec(void* env9031, void* id_8814); // lam9030
void* lam9030 = encode_clo(alloc_clo(lam9030_fptr, 0));

void lam9032_fptr(); // lam9032
void lam9032_spec(void* env9033, void* id_8812); // lam9032
void* lam9032 = encode_clo(alloc_clo(lam9032_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _9034, void* kont8902, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam9035_fptr(); // lam9035
void lam9035_spec(void* env9036, void* id_8823); // lam9035
void* lam9035 = encode_clo(alloc_clo(lam9035_fptr, 0));

void lam9037_fptr(); // lam9037
void lam9037_spec(void* env9038, void* id_8822); // lam9037
void* lam9037 = encode_clo(alloc_clo(lam9037_fptr, 0));

void lam9039_fptr(); // lam9039
void lam9039_spec(void* env9040, void* id_8821); // lam9039
void* lam9039 = encode_clo(alloc_clo(lam9039_fptr, 0));

void lam9041_fptr(); // lam9041
void lam9041_spec(void* env9042, void* id_8820); // lam9041
void* lam9041 = encode_clo(alloc_clo(lam9041_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _9043, void* kont8910, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam9044_fptr(); // lam9044
void lam9044_spec(void* env9045, void* id_8827); // lam9044
void* lam9044 = encode_clo(alloc_clo(lam9044_fptr, 0));

void lam9046_fptr(); // lam9046
void lam9046_spec(void* env9047, void* id_8826); // lam9046
void* lam9046 = encode_clo(alloc_clo(lam9046_fptr, 0));

void lam9048_fptr(); // lam9048
void lam9048_spec(void* env9049, void* id_8825); // lam9048
void* lam9048 = encode_clo(alloc_clo(lam9048_fptr, 0));

void lam9050_fptr(); // lam9050
void lam9050_spec(void* env9051, void* id_8824); // lam9050
void* lam9050 = encode_clo(alloc_clo(lam9050_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _9052, void* kont8915, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9053_fptr(); // lam9053
void lam9053_spec(void* env9054, void* xy8829); // lam9053
void* lam9053 = encode_clo(alloc_clo(lam9053_fptr, 0));

void lam9055_fptr(); // lam9055
void lam9055_spec(void* env9056, void* id_8832); // lam9055
void* lam9055 = encode_clo(alloc_clo(lam9055_fptr, 0));

void lam9057_fptr(); // lam9057
void lam9057_spec(void* env9058, void* id_8831); // lam9057
void* lam9057 = encode_clo(alloc_clo(lam9057_fptr, 0));

void lam9059_fptr(); // lam9059
void lam9059_spec(void* env9060, void* id_8828); // lam9059
void* lam9059 = encode_clo(alloc_clo(lam9059_fptr, 0));

void lam9061_fptr(); // lam9061
void lam9061_spec(void* env9062, void* lsts); // lam9061
void* lam9061 = encode_clo(alloc_clo(lam9061_fptr, 0));

void lam9063_fptr(); // lam9063
void lam9063_spec(void* env9064, void* vargs8780); // lam9063
void* lam9063 = encode_clo(alloc_clo(lam9063_fptr, 0));

void lam9065_fptr(); // lam9065
void lam9065_spec(void* env9066, void* l2); // lam9065
void* lam9065 = encode_clo(alloc_clo(lam9065_fptr, 0));

void lam9067_fptr(); // lam9067
void lam9067_spec(void* env9068, void* vargs8779); // lam9067
void* lam9067 = encode_clo(alloc_clo(lam9067_fptr, 0));

void lam9069_fptr(); // lam9069
void lam9069_spec(void* env9070, void* l1); // lam9069
void* lam9069 = encode_clo(alloc_clo(lam9069_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9072_fptr(); // lam9072
void lam9072_spec(void* env9073, void* id_8835); // lam9072
void* lam9072 = encode_clo(alloc_clo(lam9072_fptr, 0));

void lam9074_fptr(); // lam9074
void lam9074_spec(void* env9075, void* id_8840); // lam9074
void* lam9074 = encode_clo(alloc_clo(lam9074_fptr, 0));

void lam9076_fptr(); // lam9076
void lam9076_spec(void* env9077, void* id_8839); // lam9076
void* lam9076 = encode_clo(alloc_clo(lam9076_fptr, 0));

void lam9078_fptr(); // lam9078
void lam9078_spec(void* env9079, void* id_8837); // lam9078
void* lam9078 = encode_clo(alloc_clo(lam9078_fptr, 0));

void lam9080_fptr(); // lam9080
void lam9080_spec(void* env9081, void* id_8836); // lam9080
void* lam9080 = encode_clo(alloc_clo(lam9080_fptr, 0));

void lam9082_fptr(); // lam9082
void lam9082_spec(void* env9083, void* id_8834); // lam9082
void* lam9082 = encode_clo(alloc_clo(lam9082_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _9084, void* kont8930, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam9085_fptr(); // lam9085
void lam9085_spec(void* env9086, void* id_8847); // lam9085
void* lam9085 = encode_clo(alloc_clo(lam9085_fptr, 0));

void lam9087_fptr(); // lam9087
void lam9087_spec(void* env9088, void* id_8846); // lam9087
void* lam9087 = encode_clo(alloc_clo(lam9087_fptr, 0));

void lam9089_fptr(); // lam9089
void lam9089_spec(void* env9090, void* id_8845); // lam9089
void* lam9089 = encode_clo(alloc_clo(lam9089_fptr, 0));

void lam9091_fptr(); // lam9091
void lam9091_spec(void* env9092, void* id_8844); // lam9091
void* lam9091 = encode_clo(alloc_clo(lam9091_fptr, 0));

void lam9093_fptr(); // lam9093
void lam9093_spec(void* env9094, void* xy8848); // lam9093
void* lam9093 = encode_clo(alloc_clo(lam9093_fptr, 0));

void lam9095_fptr(); // lam9095
void lam9095_spec(void* env9096, void* id_8843); // lam9095
void* lam9095 = encode_clo(alloc_clo(lam9095_fptr, 0));

void lam9097_fptr(); // lam9097
void lam9097_spec(void* env9098, void* id_8841); // lam9097
void* lam9097 = encode_clo(alloc_clo(lam9097_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _9099, void* kont8937, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam9100_fptr(); // lam9100
void lam9100_spec(void* env9101, void* id_8853); // lam9100
void* lam9100 = encode_clo(alloc_clo(lam9100_fptr, 0));

void lam9102_fptr(); // lam9102
void lam9102_spec(void* env9103, void* id_8852); // lam9102
void* lam9102 = encode_clo(alloc_clo(lam9102_fptr, 0));

void lam9104_fptr(); // lam9104
void lam9104_spec(void* env9105, void* id_8849); // lam9104
void* lam9104 = encode_clo(alloc_clo(lam9104_fptr, 0));

void interval_u45list_fptr(); // interval-list
void interval_u45list_spec(void* _9106, void* kont8945, void* m, void* n); // interval-list
void* interval_u45list = encode_clo(alloc_clo(interval_u45list_fptr, 0));

void lam9107_fptr(); // lam9107
void lam9107_spec(void* env9108, void* id_8860); // lam9107
void* lam9107 = encode_clo(alloc_clo(lam9107_fptr, 0));

void lam9109_fptr(); // lam9109
void lam9109_spec(void* env9110, void* id_8863); // lam9109
void* lam9109 = encode_clo(alloc_clo(lam9109_fptr, 0));

void lam9111_fptr(); // lam9111
void lam9111_spec(void* env9112, void* id_8862); // lam9111
void* lam9111 = encode_clo(alloc_clo(lam9111_fptr, 0));

void lam9113_fptr(); // lam9113
void lam9113_spec(void* env9114, void* id_8861); // lam9113
void* lam9113 = encode_clo(alloc_clo(lam9113_fptr, 0));

void lam9115_fptr(); // lam9115
void lam9115_spec(void* env9116, void* id_8859); // lam9115
void* lam9115 = encode_clo(alloc_clo(lam9115_fptr, 0));

void lam9117_fptr(); // lam9117
void lam9117_spec(void* env9118, void* id_8857); // lam9117
void* lam9117 = encode_clo(alloc_clo(lam9117_fptr, 0));

void lam9119_fptr(); // lam9119
void lam9119_spec(void* env9120, void* id_8856); // lam9119
void* lam9119 = encode_clo(alloc_clo(lam9119_fptr, 0));

void lam9121_fptr(); // lam9121
void lam9121_spec(void* env9122, void* id_8854); // lam9121
void* lam9121 = encode_clo(alloc_clo(lam9121_fptr, 0));

void remove_u45multiples_fptr(); // remove-multiples
void remove_u45multiples_spec(void* _9123, void* kont8949, void* n, void* l); // remove-multiples
void* remove_u45multiples = encode_clo(alloc_clo(remove_u45multiples_fptr, 0));

void lam9124_fptr(); // lam9124
void lam9124_spec(void* env9125, void* id_8870); // lam9124
void* lam9124 = encode_clo(alloc_clo(lam9124_fptr, 0));

void lam9126_fptr(); // lam9126
void lam9126_spec(void* env9127, void* id_8869); // lam9126
void* lam9126 = encode_clo(alloc_clo(lam9126_fptr, 0));

void lam9128_fptr(); // lam9128
void lam9128_spec(void* env9129, void* id_8868); // lam9128
void* lam9128 = encode_clo(alloc_clo(lam9128_fptr, 0));

void lam9130_fptr(); // lam9130
void lam9130_spec(void* env9131, void* id_8867); // lam9130
void* lam9130 = encode_clo(alloc_clo(lam9130_fptr, 0));

void lam9132_fptr(); // lam9132
void lam9132_spec(void* env9133, void* id_8866); // lam9132
void* lam9132 = encode_clo(alloc_clo(lam9132_fptr, 0));

void lam9134_fptr(); // lam9134
void lam9134_spec(void* env9135, void* id_8864); // lam9134
void* lam9134 = encode_clo(alloc_clo(lam9134_fptr, 0));

void sieve_fptr(); // sieve
void sieve_spec(void* _9136, void* kont8958, void* l); // sieve
void* sieve = encode_clo(alloc_clo(sieve_fptr, 0));

void lam9137_fptr(); // lam9137
void lam9137_spec(void* env9138, void* id_8872); // lam9137
void* lam9137 = encode_clo(alloc_clo(lam9137_fptr, 0));

void primes_u60_u61_fptr(); // primes<=
void primes_u60_u61_spec(void* _9139, void* kont8965, void* n); // primes<=
void* primes_u60_u61 = encode_clo(alloc_clo(primes_u60_u61_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9140, void* kont8967); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9154 = prim_car(lst);
void* const lst9156 = prim_cdr(lst);
void* const x9155 = apply_prim__u43(lst9156);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9154))[0])();
}
else
{
void* const kont9154 = arg_buffer[2];
void* const x9155 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9154))[0])(kont9154, x9155);
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
void* const kont9157 = prim_car(lst);
void* const lst9159 = prim_cdr(lst);
void* const x9158 = apply_prim__u45(lst9159);
arg_buffer[1] = kont9157;
arg_buffer[2] = x9158;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9157))[0])();
}
else
{
void* const kont9157 = arg_buffer[2];
void* const x9158 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9157))[0])(kont9157, x9158);
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
void* const kont9160 = prim_car(lst);
void* const lst9162 = prim_cdr(lst);
void* const x9161 = apply_prim__u42(lst9162);
arg_buffer[1] = kont9160;
arg_buffer[2] = x9161;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9160))[0])();
}
else
{
void* const kont9160 = arg_buffer[2];
void* const x9161 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9160))[0])(kont9160, x9161);
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
void* const kont9163 = prim_car(lst);
void* const lst9165 = prim_cdr(lst);
void* const x9164 = apply_prim__u47(lst9165);
arg_buffer[1] = kont9163;
arg_buffer[2] = x9164;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9163))[0])();
}
else
{
void* const kont9163 = arg_buffer[2];
void* const x9164 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9163))[0])(kont9163, x9164);
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
void* const kont9166 = prim_car(lst);
void* const lst9168 = prim_cdr(lst);
void* const x9167 = apply_prim__u61(lst9168);
arg_buffer[1] = kont9166;
arg_buffer[2] = x9167;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9166))[0])();
}
else
{
void* const kont9166 = arg_buffer[2];
void* const x9167 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9166))[0])(kont9166, x9167);
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
void* const kont9169 = prim_car(lst);
void* const lst9171 = prim_cdr(lst);
void* const x9170 = apply_prim__u62(lst9171);
arg_buffer[1] = kont9169;
arg_buffer[2] = x9170;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9169))[0])();
}
else
{
void* const kont9169 = arg_buffer[2];
void* const x9170 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9169))[0])(kont9169, x9170);
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
void* const kont9172 = prim_car(lst);
void* const lst9174 = prim_cdr(lst);
void* const x9173 = apply_prim__u60(lst9174);
arg_buffer[1] = kont9172;
arg_buffer[2] = x9173;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9172))[0])();
}
else
{
void* const kont9172 = arg_buffer[2];
void* const x9173 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9172))[0])(kont9172, x9173);
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
void* const kont9175 = prim_car(lst);
void* const lst9177 = prim_cdr(lst);
void* const x9176 = apply_prim__u60_u61(lst9177);
arg_buffer[1] = kont9175;
arg_buffer[2] = x9176;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9175))[0])();
}
else
{
void* const kont9175 = arg_buffer[2];
void* const x9176 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9175))[0])(kont9175, x9176);
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
void* const kont9178 = prim_car(lst);
void* const lst9180 = prim_cdr(lst);
void* const x9179 = apply_prim__u62_u61(lst9180);
arg_buffer[1] = kont9178;
arg_buffer[2] = x9179;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9178))[0])();
}
else
{
void* const kont9178 = arg_buffer[2];
void* const x9179 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9178))[0])(kont9178, x9179);
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
void* const kont9181 = prim_car(lst);
void* const lst9183 = prim_cdr(lst);
void* const x9182 = apply_prim_modulo(lst9183);
arg_buffer[1] = kont9181;
arg_buffer[2] = x9182;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9181))[0])();
}
else
{
void* const kont9181 = arg_buffer[2];
void* const x9182 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9181))[0])(kont9181, x9182);
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
void* const kont9184 = prim_car(lst);
void* const lst9186 = prim_cdr(lst);
void* const x9185 = apply_prim_null_u63(lst9186);
arg_buffer[1] = kont9184;
arg_buffer[2] = x9185;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9184))[0])();
}
else
{
void* const kont9184 = arg_buffer[2];
void* const x9185 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9184))[0])(kont9184, x9185);
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
void* const kont9187 = prim_car(lst);
void* const lst9189 = prim_cdr(lst);
void* const x9188 = apply_prim_equal_u63(lst9189);
arg_buffer[1] = kont9187;
arg_buffer[2] = x9188;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9187))[0])();
}
else
{
void* const kont9187 = arg_buffer[2];
void* const x9188 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9187))[0])(kont9187, x9188);
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
void* const kont9190 = prim_car(lst);
void* const lst9192 = prim_cdr(lst);
void* const x9191 = apply_prim_eq_u63(lst9192);
arg_buffer[1] = kont9190;
arg_buffer[2] = x9191;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9190))[0])();
}
else
{
void* const kont9190 = arg_buffer[2];
void* const x9191 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9190))[0])(kont9190, x9191);
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
void* const kont9193 = prim_car(lst);
void* const lst9195 = prim_cdr(lst);
void* const x9194 = apply_prim_cons(lst9195);
arg_buffer[1] = kont9193;
arg_buffer[2] = x9194;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9193))[0])();
}
else
{
void* const kont9193 = arg_buffer[2];
void* const x9194 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9193))[0])(kont9193, x9194);
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
void* const kont9196 = prim_car(lst);
void* const lst9198 = prim_cdr(lst);
void* const x9197 = apply_prim_car(lst9198);
arg_buffer[1] = kont9196;
arg_buffer[2] = x9197;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9196))[0])();
}
else
{
void* const kont9196 = arg_buffer[2];
void* const x9197 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9196))[0])(kont9196, x9197);
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
void* const kont9199 = prim_car(lst);
void* const lst9201 = prim_cdr(lst);
void* const x9200 = apply_prim_cdr(lst9201);
arg_buffer[1] = kont9199;
arg_buffer[2] = x9200;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9199))[0])();
}
else
{
void* const kont9199 = arg_buffer[2];
void* const x9200 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9199))[0])(kont9199, x9200);
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
void* const kont9202 = prim_car(lst);
void* const lst9204 = prim_cdr(lst);
void* const x9203 = apply_prim_remainder(lst9204);
arg_buffer[1] = kont9202;
arg_buffer[2] = x9203;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9202))[0])();
}
else
{
void* const kont9202 = arg_buffer[2];
void* const x9203 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9202))[0])(kont9202, x9203);
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
void* const kont9205 = prim_car(lst);
void* const lst9207 = prim_cdr(lst);
void* const x9206 = apply_prim_pair_u63(lst9207);
arg_buffer[1] = kont9205;
arg_buffer[2] = x9206;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9205))[0])();
}
else
{
void* const kont9205 = arg_buffer[2];
void* const x9206 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9205))[0])(kont9205, x9206);
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
void* const kont9208 = prim_car(lst);
void* const lst9210 = prim_cdr(lst);
void* const x9209 = apply_prim_list(lst9210);
arg_buffer[1] = kont9208;
arg_buffer[2] = x9209;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9208))[0])();
}
else
{
void* const kont9208 = arg_buffer[2];
void* const x9209 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9208))[0])(kont9208, x9209);
}

}

inline void lam8969_fptr() // lam8969 -> generic version 
{
//reading env
void* const env8970 = arg_buffer[1];
//reading env and args
void* const xy8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8783);
}

inline void lam8969_spec(void* env8970, void* xy8783) // lam8969 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8970);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8783);
}

inline void lam8971_fptr() // lam8971 -> generic version 
{
//reading env
void* const env8972 = arg_buffer[1];
//reading env and args
void* const id_8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//clo-app
list_u45ref_spec(list_u45ref, decode_clo_array[1], decode_clo_array[2], id_8786);
}

inline void lam8971_spec(void* env8972, void* id_8786) // lam8971 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);

//clo-app
list_u45ref_spec(list_u45ref, decode_clo_array[1], decode_clo_array[2], id_8786);
}

inline void lam8973_fptr() // lam8973 -> generic version 
{
//reading env
void* const env8974 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);

//creating new make-kont closure
void** clo9211 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9211[1] = decode_clo_array[2];
clo9211[2] = id_8784;
void* f_lam_8876 = encode_clo(clo9211);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8876;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9150;
numArgs = 4;
_u45_fptr();
}

inline void lam8973_spec(void* env8974, void* id_8784) // lam8973 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8974);

//creating new make-kont closure
void** clo9212 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9212[1] = decode_clo_array[2];
clo9212[2] = id_8784;
void* f_lam_8876 = encode_clo(clo9212);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8876;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9150;
numArgs = 4;
_u45_fptr();
}

inline void lam8975_fptr() // lam8975 -> generic version 
{
//reading env
void* const env8976 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8976);

//if-clause
if(is_true(id_8782))
{

//creating new make-kont closure
void** clo9213 = alloc_kont(lam8969_spec, 1);

//setting env list
clo9213[1] = decode_clo_array[2];
void* f_lam_8875 = encode_clo(clo9213);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8875;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9214 = alloc_kont(lam8973_spec, 2);

//setting env list
clo9214[1] = decode_clo_array[1];
clo9214[2] = decode_clo_array[2];
void* f_lam_8877 = encode_clo(clo9214);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8877;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8975_spec(void* env8976, void* id_8782) // lam8975 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8976);

//if-clause
if(is_true(id_8782))
{

//creating new make-kont closure
void** clo9215 = alloc_kont(lam8969_spec, 1);

//setting env list
clo9215[1] = decode_clo_array[2];
void* f_lam_8875 = encode_clo(clo9215);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8875;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9216 = alloc_kont(lam8973_spec, 2);

//setting env list
clo9216[1] = decode_clo_array[1];
clo9216[2] = decode_clo_array[2];
void* f_lam_8877 = encode_clo(clo9216);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8877;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8874 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9217 = alloc_kont(lam8975_spec, 3);

//setting env list
clo9217[1] = n;
clo9217[2] = kont8874;
clo9217[3] = lst;
void* f_lam_8878 = encode_clo(clo9217);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8878;
arg_buffer[3] = int9151;
arg_buffer[4] = n;
numArgs = 4;
_u61_fptr();
}

inline void list_u45ref_spec(void* _8977, void* kont8874, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9218 = alloc_kont(lam8975_spec, 3);

//setting env list
clo9218[1] = n;
clo9218[2] = kont8874;
clo9218[3] = lst;
void* f_lam_8878 = encode_clo(clo9218);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8878;
arg_buffer[3] = int9151;
arg_buffer[4] = n;
numArgs = 4;
_u61_fptr();
}

inline void lam8978_fptr() // lam8978 -> generic version 
{
//reading env
void* const env8979 = arg_buffer[1];
//reading env and args
void* const xy8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8788);
}

inline void lam8978_spec(void* env8979, void* xy8788) // lam8978 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8979);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8788);
}

inline void lam8980_fptr() // lam8980 -> generic version 
{
//reading env
void* const env8981 = arg_buffer[1];
//reading env and args
void* const xy8789 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8789);
}

inline void lam8980_spec(void* env8981, void* xy8789) // lam8980 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8981);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8789);
}

inline void lam8982_fptr() // lam8982 -> generic version 
{
//reading env
void* const env8983 = arg_buffer[1];
//reading env and args
void* const id_8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8983);

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[1], id_8794);
}

inline void lam8982_spec(void* env8983, void* id_8794) // lam8982 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8983);

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[1], id_8794);
}

inline void lam8984_fptr() // lam8984 -> generic version 
{
//reading env
void* const env8985 = arg_buffer[1];
//reading env and args
void* const id_8793 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8985);

//if-clause
if(is_true(id_8793))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9219 = alloc_kont(lam8982_spec, 2);

//setting env list
clo9219[1] = decode_clo_array[1];
clo9219[2] = decode_clo_array[3];
void* f_lam_8880 = encode_clo(clo9219);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8880;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8984_spec(void* env8985, void* id_8793) // lam8984 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8985);

//if-clause
if(is_true(id_8793))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9220 = alloc_kont(lam8982_spec, 2);

//setting env list
clo9220[1] = decode_clo_array[1];
clo9220[2] = decode_clo_array[3];
void* f_lam_8880 = encode_clo(clo9220);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8880;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8986_fptr() // lam8986 -> generic version 
{
//reading env
void* const env8987 = arg_buffer[1];
//reading env and args
void* const id_8792 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8987);

//creating new make-kont closure
void** clo9221 = alloc_kont(lam8984_spec, 3);

//setting env list
clo9221[1] = decode_clo_array[1];
clo9221[2] = decode_clo_array[2];
clo9221[3] = decode_clo_array[3];
void* f_lam_8881 = encode_clo(clo9221);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8881;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8792;
numArgs = 4;
equal_u63_fptr();
}

inline void lam8986_spec(void* env8987, void* id_8792) // lam8986 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8987);

//creating new make-kont closure
void** clo9222 = alloc_kont(lam8984_spec, 3);

//setting env list
clo9222[1] = decode_clo_array[1];
clo9222[2] = decode_clo_array[2];
clo9222[3] = decode_clo_array[3];
void* f_lam_8881 = encode_clo(clo9222);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8881;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8792;
numArgs = 4;
equal_u63_fptr();
}

inline void lam8988_fptr() // lam8988 -> generic version 
{
//reading env
void* const env8989 = arg_buffer[1];
//reading env and args
void* const id_8790 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);

//if-clause
if(is_true(id_8790))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9145);
}
else
{

//creating new make-kont closure
void** clo9223 = alloc_kont(lam8986_spec, 3);

//setting env list
clo9223[1] = decode_clo_array[1];
clo9223[2] = decode_clo_array[2];
clo9223[3] = decode_clo_array[3];
void* f_lam_8882 = encode_clo(clo9223);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8882;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam8988_spec(void* env8989, void* id_8790) // lam8988 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8989);

//if-clause
if(is_true(id_8790))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9145);
}
else
{

//creating new make-kont closure
void** clo9224 = alloc_kont(lam8986_spec, 3);

//setting env list
clo9224[1] = decode_clo_array[1];
clo9224[2] = decode_clo_array[2];
clo9224[3] = decode_clo_array[3];
void* f_lam_8882 = encode_clo(clo9224);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8882;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam8990_fptr() // lam8990 -> generic version 
{
//reading env
void* const env8991 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//creating new make-kont closure
void** clo9225 = alloc_kont(lam8988_spec, 3);

//setting env list
clo9225[1] = decode_clo_array[1];
clo9225[2] = decode_clo_array[2];
clo9225[3] = decode_clo_array[3];
void* f_lam_8883 = encode_clo(clo9225);



//if-clause
if(is_true(id_8787))
{

//creating new make-kont closure
void** clo9226 = alloc_kont(lam8978_spec, 1);

//setting env list
clo9226[1] = f_lam_8883;
void* f_lam_8884 = encode_clo(clo9226);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8884;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
null_u63_fptr();
}
else
{

//creating new make-kont closure
void** clo9227 = alloc_kont(lam8980_spec, 1);

//setting env list
clo9227[1] = f_lam_8883;
void* f_lam_8885 = encode_clo(clo9227);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8885;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
null_u63_fptr();
}

}

inline void lam8990_spec(void* env8991, void* id_8787) // lam8990 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//creating new make-kont closure
void** clo9228 = alloc_kont(lam8988_spec, 3);

//setting env list
clo9228[1] = decode_clo_array[1];
clo9228[2] = decode_clo_array[2];
clo9228[3] = decode_clo_array[3];
void* f_lam_8883 = encode_clo(clo9228);



//if-clause
if(is_true(id_8787))
{

//creating new make-kont closure
void** clo9229 = alloc_kont(lam8978_spec, 1);

//setting env list
clo9229[1] = f_lam_8883;
void* f_lam_8884 = encode_clo(clo9229);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8884;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
null_u63_fptr();
}
else
{

//creating new make-kont closure
void** clo9230 = alloc_kont(lam8980_spec, 1);

//setting env list
clo9230[1] = f_lam_8883;
void* f_lam_8885 = encode_clo(clo9230);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8885;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
null_u63_fptr();
}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8879 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9231 = alloc_kont(lam8990_spec, 3);

//setting env list
clo9231[1] = item;
clo9231[2] = lst;
clo9231[3] = kont8879;
void* f_lam_8886 = encode_clo(clo9231);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8886;
arg_buffer[3] = item;
numArgs = 3;
null_u63_fptr();
}

inline void member_spec(void* _8992, void* kont8879, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9232 = alloc_kont(lam8990_spec, 3);

//setting env list
clo9232[1] = item;
clo9232[2] = lst;
clo9232[3] = kont8879;
void* f_lam_8886 = encode_clo(clo9232);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8886;
arg_buffer[3] = item;
numArgs = 3;
null_u63_fptr();
}

inline void lam8993_fptr() // lam8993 -> generic version 
{
//reading env
void* const env8994 = arg_buffer[1];
//reading env and args
void* const id_8800 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8994);

//clo-app
member_u63_spec(member_u63, decode_clo_array[2], decode_clo_array[1], id_8800);
}

inline void lam8993_spec(void* env8994, void* id_8800) // lam8993 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8994);

//clo-app
member_u63_spec(member_u63, decode_clo_array[2], decode_clo_array[1], id_8800);
}

inline void lam8995_fptr() // lam8995 -> generic version 
{
//reading env
void* const env8996 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);

//if-clause
if(is_true(id_8798))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_t9144);
}
else
{

//creating new make-kont closure
void** clo9233 = alloc_kont(lam8993_spec, 2);

//setting env list
clo9233[1] = decode_clo_array[1];
clo9233[2] = decode_clo_array[2];
void* f_lam_8888 = encode_clo(clo9233);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8888;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8995_spec(void* env8996, void* id_8798) // lam8995 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8996);

//if-clause
if(is_true(id_8798))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_t9144);
}
else
{

//creating new make-kont closure
void** clo9234 = alloc_kont(lam8993_spec, 2);

//setting env list
clo9234[1] = decode_clo_array[1];
clo9234[2] = decode_clo_array[2];
void* f_lam_8888 = encode_clo(clo9234);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8888;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8997_fptr() // lam8997 -> generic version 
{
//reading env
void* const env8998 = arg_buffer[1];
//reading env and args
void* const id_8797 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8998);

//creating new make-kont closure
void** clo9235 = alloc_kont(lam8995_spec, 3);

//setting env list
clo9235[1] = decode_clo_array[1];
clo9235[2] = decode_clo_array[2];
clo9235[3] = decode_clo_array[3];
void* f_lam_8889 = encode_clo(clo9235);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8889;
arg_buffer[3] = id_8797;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
equal_u63_fptr();
}

inline void lam8997_spec(void* env8998, void* id_8797) // lam8997 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8998);

//creating new make-kont closure
void** clo9236 = alloc_kont(lam8995_spec, 3);

//setting env list
clo9236[1] = decode_clo_array[1];
clo9236[2] = decode_clo_array[2];
clo9236[3] = decode_clo_array[3];
void* f_lam_8889 = encode_clo(clo9236);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8889;
arg_buffer[3] = id_8797;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
equal_u63_fptr();
}

inline void lam8999_fptr() // lam8999 -> generic version 
{
//reading env
void* const env9000 = arg_buffer[1];
//reading env and args
void* const id_8795 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);

//if-clause
if(is_true(id_8795))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9145);
}
else
{

//creating new make-kont closure
void** clo9237 = alloc_kont(lam8997_spec, 3);

//setting env list
clo9237[1] = decode_clo_array[1];
clo9237[2] = decode_clo_array[2];
clo9237[3] = decode_clo_array[3];
void* f_lam_8890 = encode_clo(clo9237);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8890;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam8999_spec(void* env9000, void* id_8795) // lam8999 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);

//if-clause
if(is_true(id_8795))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9145);
}
else
{

//creating new make-kont closure
void** clo9238 = alloc_kont(lam8997_spec, 3);

//setting env list
clo9238[1] = decode_clo_array[1];
clo9238[2] = decode_clo_array[2];
clo9238[3] = decode_clo_array[3];
void* f_lam_8890 = encode_clo(clo9238);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8890;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8887 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9239 = alloc_kont(lam8999_spec, 3);

//setting env list
clo9239[1] = x;
clo9239[2] = kont8887;
clo9239[3] = lst;
void* f_lam_8891 = encode_clo(clo9239);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8891;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void member_u63_spec(void* _9001, void* kont8887, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9240 = alloc_kont(lam8999_spec, 3);

//setting env list
clo9240[1] = x;
clo9240[2] = kont8887;
clo9240[3] = lst;
void* f_lam_8891 = encode_clo(clo9240);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8891;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9002_fptr() // lam9002 -> generic version 
{
//reading env
void* const env9003 = arg_buffer[1];
//reading env and args
void* const id_8805 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8805;
numArgs = 4;
_u43_fptr();
}

inline void lam9002_spec(void* env9003, void* id_8805) // lam9002 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9003);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8805;
numArgs = 4;
_u43_fptr();
}

inline void lam9004_fptr() // lam9004 -> generic version 
{
//reading env
void* const env9005 = arg_buffer[1];
//reading env and args
void* const id_8804 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9005);

//creating new make-kont closure
void** clo9241 = alloc_kont(lam9002_spec, 2);

//setting env list
clo9241[1] = decode_clo_array[1];
clo9241[2] = decode_clo_array[2];
void* f_lam_8893 = encode_clo(clo9241);



//clo-app
length_spec(length, f_lam_8893, id_8804);
}

inline void lam9004_spec(void* env9005, void* id_8804) // lam9004 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9005);

//creating new make-kont closure
void** clo9242 = alloc_kont(lam9002_spec, 2);

//setting env list
clo9242[1] = decode_clo_array[1];
clo9242[2] = decode_clo_array[2];
void* f_lam_8893 = encode_clo(clo9242);



//clo-app
length_spec(length, f_lam_8893, id_8804);
}

inline void lam9006_fptr() // lam9006 -> generic version 
{
//reading env
void* const env9007 = arg_buffer[1];
//reading env and args
void* const id_8801 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9007);

//if-clause
if(is_true(id_8801))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], int9151);
}
else
{

//creating new make-kont closure
void** clo9243 = alloc_kont(lam9004_spec, 2);

//setting env list
clo9243[1] = decode_clo_array[1];
clo9243[2] = int9150;
void* f_lam_8894 = encode_clo(clo9243);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8894;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9006_spec(void* env9007, void* id_8801) // lam9006 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9007);

//if-clause
if(is_true(id_8801))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], int9151);
}
else
{

//creating new make-kont closure
void** clo9244 = alloc_kont(lam9004_spec, 2);

//setting env list
clo9244[1] = decode_clo_array[1];
clo9244[2] = int9150;
void* f_lam_8894 = encode_clo(clo9244);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8894;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8892 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9245 = alloc_kont(lam9006_spec, 2);

//setting env list
clo9245[1] = kont8892;
clo9245[2] = lst;
void* f_lam_8895 = encode_clo(clo9245);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8895;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void length_spec(void* _9008, void* kont8892, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9246 = alloc_kont(lam9006_spec, 2);

//setting env list
clo9246[1] = kont8892;
clo9246[2] = lst;
void* f_lam_8895 = encode_clo(clo9246);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8895;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9009_fptr() // lam9009 -> generic version 
{
//reading env
void* const env9010 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8811;
numArgs = 4;
cons_fptr();
}

inline void lam9009_spec(void* env9010, void* id_8811) // lam9009 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9010);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8811;
numArgs = 4;
cons_fptr();
}

inline void lam9011_fptr() // lam9011 -> generic version 
{
//reading env
void* const env9012 = arg_buffer[1];
//reading env and args
void* const id_8810 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9012);

//creating new make-kont closure
void** clo9247 = alloc_kont(lam9009_spec, 2);

//setting env list
clo9247[1] = decode_clo_array[1];
clo9247[2] = decode_clo_array[3];
void* f_lam_8897 = encode_clo(clo9247);



//clo-app
map_spec(map, f_lam_8897, decode_clo_array[2], id_8810);
}

inline void lam9011_spec(void* env9012, void* id_8810) // lam9011 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9012);

//creating new make-kont closure
void** clo9248 = alloc_kont(lam9009_spec, 2);

//setting env list
clo9248[1] = decode_clo_array[1];
clo9248[2] = decode_clo_array[3];
void* f_lam_8897 = encode_clo(clo9248);



//clo-app
map_spec(map, f_lam_8897, decode_clo_array[2], id_8810);
}

inline void lam9013_fptr() // lam9013 -> generic version 
{
//reading env
void* const env9014 = arg_buffer[1];
//reading env and args
void* const id_8809 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9014);

//creating new make-kont closure
void** clo9249 = alloc_kont(lam9011_spec, 3);

//setting env list
clo9249[1] = id_8809;
clo9249[2] = decode_clo_array[1];
clo9249[3] = decode_clo_array[3];
void* f_lam_8898 = encode_clo(clo9249);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8898;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9013_spec(void* env9014, void* id_8809) // lam9013 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9014);

//creating new make-kont closure
void** clo9250 = alloc_kont(lam9011_spec, 3);

//setting env list
clo9250[1] = id_8809;
clo9250[2] = decode_clo_array[1];
clo9250[3] = decode_clo_array[3];
void* f_lam_8898 = encode_clo(clo9250);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8898;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9015_fptr() // lam9015 -> generic version 
{
//reading env
void* const env9016 = arg_buffer[1];
//reading env and args
void* const id_8808 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9016);

//creating new make-kont closure
void** clo9251 = alloc_kont(lam9013_spec, 3);

//setting env list
clo9251[1] = decode_clo_array[1];
clo9251[2] = decode_clo_array[2];
clo9251[3] = decode_clo_array[3];
void* f_lam_8899 = encode_clo(clo9251);



//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = f_lam_8899;
arg_buffer[3] = id_8808;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9015_spec(void* env9016, void* id_8808) // lam9015 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9016);

//creating new make-kont closure
void** clo9252 = alloc_kont(lam9013_spec, 3);

//setting env list
clo9252[1] = decode_clo_array[1];
clo9252[2] = decode_clo_array[2];
clo9252[3] = decode_clo_array[3];
void* f_lam_8899 = encode_clo(clo9252);



//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = f_lam_8899;
arg_buffer[3] = id_8808;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9017_fptr() // lam9017 -> generic version 
{
//reading env
void* const env9018 = arg_buffer[1];
//reading env and args
void* const id_8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9018);

//if-clause
if(is_true(id_8806))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9253 = alloc_kont(lam9015_spec, 3);

//setting env list
clo9253[1] = decode_clo_array[1];
clo9253[2] = decode_clo_array[2];
clo9253[3] = decode_clo_array[3];
void* f_lam_8900 = encode_clo(clo9253);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8900;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9017_spec(void* env9018, void* id_8806) // lam9017 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9018);

//if-clause
if(is_true(id_8806))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9254 = alloc_kont(lam9015_spec, 3);

//setting env list
clo9254[1] = decode_clo_array[1];
clo9254[2] = decode_clo_array[2];
clo9254[3] = decode_clo_array[3];
void* f_lam_8900 = encode_clo(clo9254);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8900;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8896 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9255 = alloc_kont(lam9017_spec, 3);

//setting env list
clo9255[1] = proc;
clo9255[2] = lst;
clo9255[3] = kont8896;
void* f_lam_8901 = encode_clo(clo9255);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8901;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void map_spec(void* _9019, void* kont8896, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9256 = alloc_kont(lam9017_spec, 3);

//setting env list
clo9256[1] = proc;
clo9256[2] = lst;
clo9256[3] = kont8896;
void* f_lam_8901 = encode_clo(clo9256);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8901;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9020_fptr() // lam9020 -> generic version 
{
//reading env
void* const env9021 = arg_buffer[1];
//reading env and args
void* const id_8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9021);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8818;
numArgs = 4;
cons_fptr();
}

inline void lam9020_spec(void* env9021, void* id_8818) // lam9020 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9021);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8818;
numArgs = 4;
cons_fptr();
}

inline void lam9022_fptr() // lam9022 -> generic version 
{
//reading env
void* const env9023 = arg_buffer[1];
//reading env and args
void* const id_8817 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9023);

//creating new make-kont closure
void** clo9257 = alloc_kont(lam9020_spec, 2);

//setting env list
clo9257[1] = decode_clo_array[1];
clo9257[2] = decode_clo_array[3];
void* f_lam_8903 = encode_clo(clo9257);



//clo-app
filter_spec(filter, f_lam_8903, decode_clo_array[2], id_8817);
}

inline void lam9022_spec(void* env9023, void* id_8817) // lam9022 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9023);

//creating new make-kont closure
void** clo9258 = alloc_kont(lam9020_spec, 2);

//setting env list
clo9258[1] = decode_clo_array[1];
clo9258[2] = decode_clo_array[3];
void* f_lam_8903 = encode_clo(clo9258);



//clo-app
filter_spec(filter, f_lam_8903, decode_clo_array[2], id_8817);
}

inline void lam9024_fptr() // lam9024 -> generic version 
{
//reading env
void* const env9025 = arg_buffer[1];
//reading env and args
void* const id_8816 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9025);

//creating new make-kont closure
void** clo9259 = alloc_kont(lam9022_spec, 3);

//setting env list
clo9259[1] = decode_clo_array[1];
clo9259[2] = decode_clo_array[2];
clo9259[3] = id_8816;
void* f_lam_8904 = encode_clo(clo9259);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8904;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9024_spec(void* env9025, void* id_8816) // lam9024 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9025);

//creating new make-kont closure
void** clo9260 = alloc_kont(lam9022_spec, 3);

//setting env list
clo9260[1] = decode_clo_array[1];
clo9260[2] = decode_clo_array[2];
clo9260[3] = id_8816;
void* f_lam_8904 = encode_clo(clo9260);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8904;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9026_fptr() // lam9026 -> generic version 
{
//reading env
void* const env9027 = arg_buffer[1];
//reading env and args
void* const id_8819 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9027);

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], id_8819);
}

inline void lam9026_spec(void* env9027, void* id_8819) // lam9026 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9027);

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], id_8819);
}

inline void lam9028_fptr() // lam9028 -> generic version 
{
//reading env
void* const env9029 = arg_buffer[1];
//reading env and args
void* const id_8815 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9029);

//if-clause
if(is_true(id_8815))
{

//creating new make-kont closure
void** clo9261 = alloc_kont(lam9024_spec, 3);

//setting env list
clo9261[1] = decode_clo_array[1];
clo9261[2] = decode_clo_array[2];
clo9261[3] = decode_clo_array[3];
void* f_lam_8905 = encode_clo(clo9261);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8905;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9262 = alloc_kont(lam9026_spec, 2);

//setting env list
clo9262[1] = decode_clo_array[1];
clo9262[2] = decode_clo_array[2];
void* f_lam_8906 = encode_clo(clo9262);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8906;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9028_spec(void* env9029, void* id_8815) // lam9028 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9029);

//if-clause
if(is_true(id_8815))
{

//creating new make-kont closure
void** clo9263 = alloc_kont(lam9024_spec, 3);

//setting env list
clo9263[1] = decode_clo_array[1];
clo9263[2] = decode_clo_array[2];
clo9263[3] = decode_clo_array[3];
void* f_lam_8905 = encode_clo(clo9263);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8905;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9264 = alloc_kont(lam9026_spec, 2);

//setting env list
clo9264[1] = decode_clo_array[1];
clo9264[2] = decode_clo_array[2];
void* f_lam_8906 = encode_clo(clo9264);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8906;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9030_fptr() // lam9030 -> generic version 
{
//reading env
void* const env9031 = arg_buffer[1];
//reading env and args
void* const id_8814 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9031);

//creating new make-kont closure
void** clo9265 = alloc_kont(lam9028_spec, 3);

//setting env list
clo9265[1] = decode_clo_array[1];
clo9265[2] = decode_clo_array[2];
clo9265[3] = decode_clo_array[3];
void* f_lam_8907 = encode_clo(clo9265);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_8907;
arg_buffer[3] = id_8814;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9030_spec(void* env9031, void* id_8814) // lam9030 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9031);

//creating new make-kont closure
void** clo9266 = alloc_kont(lam9028_spec, 3);

//setting env list
clo9266[1] = decode_clo_array[1];
clo9266[2] = decode_clo_array[2];
clo9266[3] = decode_clo_array[3];
void* f_lam_8907 = encode_clo(clo9266);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_8907;
arg_buffer[3] = id_8814;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9032_fptr() // lam9032 -> generic version 
{
//reading env
void* const env9033 = arg_buffer[1];
//reading env and args
void* const id_8812 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9033);

//if-clause
if(is_true(id_8812))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9267 = alloc_kont(lam9030_spec, 3);

//setting env list
clo9267[1] = decode_clo_array[1];
clo9267[2] = decode_clo_array[2];
clo9267[3] = decode_clo_array[3];
void* f_lam_8908 = encode_clo(clo9267);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8908;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9032_spec(void* env9033, void* id_8812) // lam9032 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9033);

//if-clause
if(is_true(id_8812))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9268 = alloc_kont(lam9030_spec, 3);

//setting env list
clo9268[1] = decode_clo_array[1];
clo9268[2] = decode_clo_array[2];
clo9268[3] = decode_clo_array[3];
void* f_lam_8908 = encode_clo(clo9268);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8908;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8902 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9269 = alloc_kont(lam9032_spec, 3);

//setting env list
clo9269[1] = kont8902;
clo9269[2] = op;
clo9269[3] = lst;
void* f_lam_8909 = encode_clo(clo9269);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8909;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void filter_spec(void* _9034, void* kont8902, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9270 = alloc_kont(lam9032_spec, 3);

//setting env list
clo9270[1] = kont8902;
clo9270[2] = op;
clo9270[3] = lst;
void* f_lam_8909 = encode_clo(clo9270);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8909;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9035_fptr() // lam9035 -> generic version 
{
//reading env
void* const env9036 = arg_buffer[1];
//reading env and args
void* const id_8823 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9036);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8823;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9035_spec(void* env9036, void* id_8823) // lam9035 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9036);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8823;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9037_fptr() // lam9037 -> generic version 
{
//reading env
void* const env9038 = arg_buffer[1];
//reading env and args
void* const id_8822 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9038);

//creating new make-kont closure
void** clo9271 = alloc_kont(lam9035_spec, 3);

//setting env list
clo9271[1] = decode_clo_array[2];
clo9271[2] = decode_clo_array[3];
clo9271[3] = decode_clo_array[4];
void* f_lam_8911 = encode_clo(clo9271);



//clo-app
foldr_spec(foldr, f_lam_8911, decode_clo_array[2], decode_clo_array[1], id_8822);
}

inline void lam9037_spec(void* env9038, void* id_8822) // lam9037 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9038);

//creating new make-kont closure
void** clo9272 = alloc_kont(lam9035_spec, 3);

//setting env list
clo9272[1] = decode_clo_array[2];
clo9272[2] = decode_clo_array[3];
clo9272[3] = decode_clo_array[4];
void* f_lam_8911 = encode_clo(clo9272);



//clo-app
foldr_spec(foldr, f_lam_8911, decode_clo_array[2], decode_clo_array[1], id_8822);
}

inline void lam9039_fptr() // lam9039 -> generic version 
{
//reading env
void* const env9040 = arg_buffer[1];
//reading env and args
void* const id_8821 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9040);

//creating new make-kont closure
void** clo9273 = alloc_kont(lam9037_spec, 4);

//setting env list
clo9273[1] = decode_clo_array[1];
clo9273[2] = decode_clo_array[2];
clo9273[3] = id_8821;
clo9273[4] = decode_clo_array[4];
void* f_lam_8912 = encode_clo(clo9273);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8912;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9039_spec(void* env9040, void* id_8821) // lam9039 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9040);

//creating new make-kont closure
void** clo9274 = alloc_kont(lam9037_spec, 4);

//setting env list
clo9274[1] = decode_clo_array[1];
clo9274[2] = decode_clo_array[2];
clo9274[3] = id_8821;
clo9274[4] = decode_clo_array[4];
void* f_lam_8912 = encode_clo(clo9274);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8912;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9041_fptr() // lam9041 -> generic version 
{
//reading env
void* const env9042 = arg_buffer[1];
//reading env and args
void* const id_8820 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9042);

//if-clause
if(is_true(id_8820))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9275 = alloc_kont(lam9039_spec, 4);

//setting env list
clo9275[1] = decode_clo_array[1];
clo9275[2] = decode_clo_array[2];
clo9275[3] = decode_clo_array[3];
clo9275[4] = decode_clo_array[4];
void* f_lam_8913 = encode_clo(clo9275);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8913;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9041_spec(void* env9042, void* id_8820) // lam9041 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9042);

//if-clause
if(is_true(id_8820))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9276 = alloc_kont(lam9039_spec, 4);

//setting env list
clo9276[1] = decode_clo_array[1];
clo9276[2] = decode_clo_array[2];
clo9276[3] = decode_clo_array[3];
clo9276[4] = decode_clo_array[4];
void* f_lam_8913 = encode_clo(clo9276);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8913;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8910 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9277 = alloc_kont(lam9041_spec, 4);

//setting env list
clo9277[1] = acc;
clo9277[2] = fun;
clo9277[3] = lst;
clo9277[4] = kont8910;
void* f_lam_8914 = encode_clo(clo9277);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8914;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void foldr_spec(void* _9043, void* kont8910, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9278 = alloc_kont(lam9041_spec, 4);

//setting env list
clo9278[1] = acc;
clo9278[2] = fun;
clo9278[3] = lst;
clo9278[4] = kont8910;
void* f_lam_8914 = encode_clo(clo9278);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8914;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9044_fptr() // lam9044 -> generic version 
{
//reading env
void* const env9045 = arg_buffer[1];
//reading env and args
void* const id_8827 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9045);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8827;
numArgs = 4;
cons_fptr();
}

inline void lam9044_spec(void* env9045, void* id_8827) // lam9044 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9045);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8827;
numArgs = 4;
cons_fptr();
}

inline void lam9046_fptr() // lam9046 -> generic version 
{
//reading env
void* const env9047 = arg_buffer[1];
//reading env and args
void* const id_8826 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9047);

//creating new make-kont closure
void** clo9279 = alloc_kont(lam9044_spec, 2);

//setting env list
clo9279[1] = decode_clo_array[2];
clo9279[2] = decode_clo_array[3];
void* f_lam_8916 = encode_clo(clo9279);



//clo-app
append1_spec(append1, f_lam_8916, id_8826, decode_clo_array[1]);
}

inline void lam9046_spec(void* env9047, void* id_8826) // lam9046 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9047);

//creating new make-kont closure
void** clo9280 = alloc_kont(lam9044_spec, 2);

//setting env list
clo9280[1] = decode_clo_array[2];
clo9280[2] = decode_clo_array[3];
void* f_lam_8916 = encode_clo(clo9280);



//clo-app
append1_spec(append1, f_lam_8916, id_8826, decode_clo_array[1]);
}

inline void lam9048_fptr() // lam9048 -> generic version 
{
//reading env
void* const env9049 = arg_buffer[1];
//reading env and args
void* const id_8825 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9049);

//creating new make-kont closure
void** clo9281 = alloc_kont(lam9046_spec, 3);

//setting env list
clo9281[1] = decode_clo_array[1];
clo9281[2] = id_8825;
clo9281[3] = decode_clo_array[2];
void* f_lam_8917 = encode_clo(clo9281);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8917;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9048_spec(void* env9049, void* id_8825) // lam9048 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9049);

//creating new make-kont closure
void** clo9282 = alloc_kont(lam9046_spec, 3);

//setting env list
clo9282[1] = decode_clo_array[1];
clo9282[2] = id_8825;
clo9282[3] = decode_clo_array[2];
void* f_lam_8917 = encode_clo(clo9282);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8917;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9050_fptr() // lam9050 -> generic version 
{
//reading env
void* const env9051 = arg_buffer[1];
//reading env and args
void* const id_8824 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9051);

//if-clause
if(is_true(id_8824))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9283 = alloc_kont(lam9048_spec, 3);

//setting env list
clo9283[1] = decode_clo_array[1];
clo9283[2] = decode_clo_array[2];
clo9283[3] = decode_clo_array[3];
void* f_lam_8918 = encode_clo(clo9283);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8918;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9050_spec(void* env9051, void* id_8824) // lam9050 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9051);

//if-clause
if(is_true(id_8824))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9284 = alloc_kont(lam9048_spec, 3);

//setting env list
clo9284[1] = decode_clo_array[1];
clo9284[2] = decode_clo_array[2];
clo9284[3] = decode_clo_array[3];
void* f_lam_8918 = encode_clo(clo9284);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8918;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8915 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9285 = alloc_kont(lam9050_spec, 3);

//setting env list
clo9285[1] = rhs;
clo9285[2] = kont8915;
clo9285[3] = lhs;
void* f_lam_8919 = encode_clo(clo9285);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8919;
arg_buffer[3] = lhs;
numArgs = 3;
null_u63_fptr();
}

inline void append1_spec(void* _9052, void* kont8915, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9286 = alloc_kont(lam9050_spec, 3);

//setting env list
clo9286[1] = rhs;
clo9286[2] = kont8915;
clo9286[3] = lhs;
void* f_lam_8919 = encode_clo(clo9286);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8919;
arg_buffer[3] = lhs;
numArgs = 3;
null_u63_fptr();
}

inline void lam9053_fptr() // lam9053 -> generic version 
{
//reading env
void* const env9054 = arg_buffer[1];
//reading env and args
void* const xy8829 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9054);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8829);
}

inline void lam9053_spec(void* env9054, void* xy8829) // lam9053 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9054);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8829);
}

inline void lam9055_fptr() // lam9055 -> generic version 
{
//reading env
void* const env9056 = arg_buffer[1];
//reading env and args
void* const id_8832 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9056);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8832);
}

inline void lam9055_spec(void* env9056, void* id_8832) // lam9055 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9056);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8832);
}

inline void lam9057_fptr() // lam9057 -> generic version 
{
//reading env
void* const env9058 = arg_buffer[1];
//reading env and args
void* const id_8831 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9058);

//creating new make-kont closure
void** clo9287 = alloc_kont(lam9055_spec, 2);

//setting env list
clo9287[1] = decode_clo_array[2];
clo9287[2] = decode_clo_array[3];
void* f_lam_8922 = encode_clo(clo9287);



//clo-app
append1_spec(append1, f_lam_8922, id_8831, decode_clo_array[1]);
}

inline void lam9057_spec(void* env9058, void* id_8831) // lam9057 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9058);

//creating new make-kont closure
void** clo9288 = alloc_kont(lam9055_spec, 2);

//setting env list
clo9288[1] = decode_clo_array[2];
clo9288[2] = decode_clo_array[3];
void* f_lam_8922 = encode_clo(clo9288);



//clo-app
append1_spec(append1, f_lam_8922, id_8831, decode_clo_array[1]);
}

inline void lam9059_fptr() // lam9059 -> generic version 
{
//reading env
void* const env9060 = arg_buffer[1];
//reading env and args
void* const id_8828 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9060);

//if-clause
if(is_true(id_8828))
{

//creating new make-kont closure
void** clo9289 = alloc_kont(lam9053_spec, 1);

//setting env list
clo9289[1] = decode_clo_array[2];
void* f_lam_8921 = encode_clo(clo9289);



//clo-app
append1_spec(append1, f_lam_8921, decode_clo_array[1], decode_clo_array[4]);
}
else
{

//creating new make-kont closure
void** clo9290 = alloc_kont(lam9057_spec, 3);

//setting env list
clo9290[1] = decode_clo_array[3];
clo9290[2] = decode_clo_array[2];
clo9290[3] = apply_prim_list_0();
void* f_lam_8923 = encode_clo(clo9290);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8923;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = decode_clo_array[4];
numArgs = 4;
list_fptr();
}

}

inline void lam9059_spec(void* env9060, void* id_8828) // lam9059 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9060);

//if-clause
if(is_true(id_8828))
{

//creating new make-kont closure
void** clo9291 = alloc_kont(lam9053_spec, 1);

//setting env list
clo9291[1] = decode_clo_array[2];
void* f_lam_8921 = encode_clo(clo9291);



//clo-app
append1_spec(append1, f_lam_8921, decode_clo_array[1], decode_clo_array[4]);
}
else
{

//creating new make-kont closure
void** clo9292 = alloc_kont(lam9057_spec, 3);

//setting env list
clo9292[1] = decode_clo_array[3];
clo9292[2] = decode_clo_array[2];
clo9292[3] = apply_prim_list_0();
void* f_lam_8923 = encode_clo(clo9292);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8923;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = decode_clo_array[4];
numArgs = 4;
list_fptr();
}

}

inline void lam9061_fptr() // lam9061 -> generic version 
{
//reading env
void* const env9062 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9062);

//creating new make-kont closure
void** clo9293 = alloc_kont(lam9059_spec, 4);

//setting env list
clo9293[1] = decode_clo_array[1];
clo9293[2] = decode_clo_array[2];
clo9293[3] = lsts;
clo9293[4] = decode_clo_array[3];
void* f_lam_8924 = encode_clo(clo9293);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8924;
arg_buffer[3] = lsts;
numArgs = 3;
null_u63_fptr();
}

inline void lam9061_spec(void* env9062, void* lsts) // lam9061 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9062);

//creating new make-kont closure
void** clo9294 = alloc_kont(lam9059_spec, 4);

//setting env list
clo9294[1] = decode_clo_array[1];
clo9294[2] = decode_clo_array[2];
clo9294[3] = lsts;
clo9294[4] = decode_clo_array[3];
void* f_lam_8924 = encode_clo(clo9294);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8924;
arg_buffer[3] = lsts;
numArgs = 3;
null_u63_fptr();
}

inline void lam9063_fptr() // lam9063 -> generic version 
{
//reading env
void* const env9064 = arg_buffer[1];
//reading env and args
void* const vargs8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9064);

//creating new make-kont closure
void** clo9295 = alloc_kont(lam9061_spec, 3);

//setting env list
clo9295[1] = decode_clo_array[1];
clo9295[2] = decode_clo_array[2];
clo9295[3] = decode_clo_array[3];
void* f_lam_8925 = encode_clo(clo9295);


// kont-clo-app case
lam9061_spec(f_lam_8925, vargs8780);
}

inline void lam9063_spec(void* env9064, void* vargs8780) // lam9063 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9064);

//creating new make-kont closure
void** clo9296 = alloc_kont(lam9061_spec, 3);

//setting env list
clo9296[1] = decode_clo_array[1];
clo9296[2] = decode_clo_array[2];
clo9296[3] = decode_clo_array[3];
void* f_lam_8925 = encode_clo(clo9296);


// kont-clo-app case
lam9061_spec(f_lam_8925, vargs8780);
}

inline void lam9065_fptr() // lam9065 -> generic version 
{
//reading env
void* const env9066 = arg_buffer[1];
//reading env and args
void* const l2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9066);

//creating new make-kont closure
void** clo9297 = alloc_kont(lam9063_spec, 3);

//setting env list
clo9297[1] = decode_clo_array[1];
clo9297[2] = decode_clo_array[2];
clo9297[3] = l2;
void* f_lam_8926 = encode_clo(clo9297);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8926;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9065_spec(void* env9066, void* l2) // lam9065 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9066);

//creating new make-kont closure
void** clo9298 = alloc_kont(lam9063_spec, 3);

//setting env list
clo9298[1] = decode_clo_array[1];
clo9298[2] = decode_clo_array[2];
clo9298[3] = l2;
void* f_lam_8926 = encode_clo(clo9298);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8926;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9067_fptr() // lam9067 -> generic version 
{
//reading env
void* const env9068 = arg_buffer[1];
//reading env and args
void* const vargs8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9068);

//creating new make-kont closure
void** clo9299 = alloc_kont(lam9065_spec, 3);

//setting env list
clo9299[1] = decode_clo_array[1];
clo9299[2] = decode_clo_array[2];
clo9299[3] = vargs8779;
void* f_lam_8927 = encode_clo(clo9299);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8927;
arg_buffer[3] = vargs8779;
numArgs = 3;
car_fptr();
}

inline void lam9067_spec(void* env9068, void* vargs8779) // lam9067 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9068);

//creating new make-kont closure
void** clo9300 = alloc_kont(lam9065_spec, 3);

//setting env list
clo9300[1] = decode_clo_array[1];
clo9300[2] = decode_clo_array[2];
clo9300[3] = vargs8779;
void* f_lam_8927 = encode_clo(clo9300);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8927;
arg_buffer[3] = vargs8779;
numArgs = 3;
car_fptr();
}

inline void lam9069_fptr() // lam9069 -> generic version 
{
//reading env
void* const env9070 = arg_buffer[1];
//reading env and args
void* const l1 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9070);

//creating new make-kont closure
void** clo9301 = alloc_kont(lam9067_spec, 2);

//setting env list
clo9301[1] = l1;
clo9301[2] = decode_clo_array[2];
void* f_lam_8928 = encode_clo(clo9301);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8928;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9069_spec(void* env9070, void* l1) // lam9069 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9070);

//creating new make-kont closure
void** clo9302 = alloc_kont(lam9067_spec, 2);

//setting env list
clo9302[1] = l1;
clo9302[2] = decode_clo_array[2];
void* f_lam_8928 = encode_clo(clo9302);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8928;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

void append_fptr() // append 
{
//reading env
void* const _9071 = arg_buffer[1];
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
void** clo9303 = alloc_kont(lam9069_spec, 2);

//setting env list
clo9303[1] = apply_prim_cdr_1(vargs);
clo9303[2] = apply_prim_car_1(vargs);
void* f_lam_8929 = encode_clo(clo9303);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8929;
arg_buffer[3] = apply_prim_cdr_1(vargs);
numArgs = 3;
car_fptr();
}

inline void lam9072_fptr() // lam9072 -> generic version 
{
//reading env
void* const env9073 = arg_buffer[1];
//reading env and args
void* const id_8835 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9073);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8835;
numArgs = 4;
cons_fptr();
}

inline void lam9072_spec(void* env9073, void* id_8835) // lam9072 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9073);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8835;
numArgs = 4;
cons_fptr();
}

inline void lam9074_fptr() // lam9074 -> generic version 
{
//reading env
void* const env9075 = arg_buffer[1];
//reading env and args
void* const id_8840 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9075);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
cons_fptr();
}

inline void lam9074_spec(void* env9075, void* id_8840) // lam9074 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9075);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8840;
numArgs = 4;
cons_fptr();
}

inline void lam9076_fptr() // lam9076 -> generic version 
{
//reading env
void* const env9077 = arg_buffer[1];
//reading env and args
void* const id_8839 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9077);

//creating new make-kont closure
void** clo9304 = alloc_kont(lam9074_spec, 2);

//setting env list
clo9304[1] = decode_clo_array[2];
clo9304[2] = decode_clo_array[3];
void* f_lam_8932 = encode_clo(clo9304);



//clo-app
list_u45set_spec(list_u45set, f_lam_8932, decode_clo_array[1], id_8839, decode_clo_array[4]);
}

inline void lam9076_spec(void* env9077, void* id_8839) // lam9076 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9077);

//creating new make-kont closure
void** clo9305 = alloc_kont(lam9074_spec, 2);

//setting env list
clo9305[1] = decode_clo_array[2];
clo9305[2] = decode_clo_array[3];
void* f_lam_8932 = encode_clo(clo9305);



//clo-app
list_u45set_spec(list_u45set, f_lam_8932, decode_clo_array[1], id_8839, decode_clo_array[4]);
}

inline void lam9078_fptr() // lam9078 -> generic version 
{
//reading env
void* const env9079 = arg_buffer[1];
//reading env and args
void* const id_8837 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9079);

//creating new make-kont closure
void** clo9306 = alloc_kont(lam9076_spec, 4);

//setting env list
clo9306[1] = id_8837;
clo9306[2] = decode_clo_array[2];
clo9306[3] = decode_clo_array[3];
clo9306[4] = decode_clo_array[4];
void* f_lam_8933 = encode_clo(clo9306);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8933;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9150;
numArgs = 4;
_u45_fptr();
}

inline void lam9078_spec(void* env9079, void* id_8837) // lam9078 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9079);

//creating new make-kont closure
void** clo9307 = alloc_kont(lam9076_spec, 4);

//setting env list
clo9307[1] = id_8837;
clo9307[2] = decode_clo_array[2];
clo9307[3] = decode_clo_array[3];
clo9307[4] = decode_clo_array[4];
void* f_lam_8933 = encode_clo(clo9307);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8933;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9150;
numArgs = 4;
_u45_fptr();
}

inline void lam9080_fptr() // lam9080 -> generic version 
{
//reading env
void* const env9081 = arg_buffer[1];
//reading env and args
void* const id_8836 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9081);

//creating new make-kont closure
void** clo9308 = alloc_kont(lam9078_spec, 4);

//setting env list
clo9308[1] = decode_clo_array[1];
clo9308[2] = id_8836;
clo9308[3] = decode_clo_array[2];
clo9308[4] = decode_clo_array[4];
void* f_lam_8934 = encode_clo(clo9308);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8934;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9080_spec(void* env9081, void* id_8836) // lam9080 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9081);

//creating new make-kont closure
void** clo9309 = alloc_kont(lam9078_spec, 4);

//setting env list
clo9309[1] = decode_clo_array[1];
clo9309[2] = id_8836;
clo9309[3] = decode_clo_array[2];
clo9309[4] = decode_clo_array[4];
void* f_lam_8934 = encode_clo(clo9309);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8934;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9082_fptr() // lam9082 -> generic version 
{
//reading env
void* const env9083 = arg_buffer[1];
//reading env and args
void* const id_8834 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9083);

//if-clause
if(is_true(id_8834))
{

//creating new make-kont closure
void** clo9310 = alloc_kont(lam9072_spec, 2);

//setting env list
clo9310[1] = decode_clo_array[2];
clo9310[2] = decode_clo_array[4];
void* f_lam_8931 = encode_clo(clo9310);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8931;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9311 = alloc_kont(lam9080_spec, 4);

//setting env list
clo9311[1] = decode_clo_array[1];
clo9311[2] = decode_clo_array[2];
clo9311[3] = decode_clo_array[3];
clo9311[4] = decode_clo_array[4];
void* f_lam_8935 = encode_clo(clo9311);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8935;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9082_spec(void* env9083, void* id_8834) // lam9082 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9083);

//if-clause
if(is_true(id_8834))
{

//creating new make-kont closure
void** clo9312 = alloc_kont(lam9072_spec, 2);

//setting env list
clo9312[1] = decode_clo_array[2];
clo9312[2] = decode_clo_array[4];
void* f_lam_8931 = encode_clo(clo9312);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8931;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9313 = alloc_kont(lam9080_spec, 4);

//setting env list
clo9313[1] = decode_clo_array[1];
clo9313[2] = decode_clo_array[2];
clo9313[3] = decode_clo_array[3];
clo9313[4] = decode_clo_array[4];
void* f_lam_8935 = encode_clo(clo9313);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8935;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8930 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9314 = alloc_kont(lam9082_spec, 4);

//setting env list
clo9314[1] = index;
clo9314[2] = kont8930;
clo9314[3] = lst;
clo9314[4] = value;
void* f_lam_8936 = encode_clo(clo9314);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8936;
arg_buffer[3] = index;
arg_buffer[4] = int9151;
numArgs = 4;
_u61_fptr();
}

inline void list_u45set_spec(void* _9084, void* kont8930, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9315 = alloc_kont(lam9082_spec, 4);

//setting env list
clo9315[1] = index;
clo9315[2] = kont8930;
clo9315[3] = lst;
clo9315[4] = value;
void* f_lam_8936 = encode_clo(clo9315);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8936;
arg_buffer[3] = index;
arg_buffer[4] = int9151;
numArgs = 4;
_u61_fptr();
}

inline void lam9085_fptr() // lam9085 -> generic version 
{
//reading env
void* const env9086 = arg_buffer[1];
//reading env and args
void* const id_8847 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9086);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8847;
numArgs = 4;
append_fptr();
}

inline void lam9085_spec(void* env9086, void* id_8847) // lam9085 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9086);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8847;
numArgs = 4;
append_fptr();
}

inline void lam9087_fptr() // lam9087 -> generic version 
{
//reading env
void* const env9088 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9088);

//creating new make-kont closure
void** clo9316 = alloc_kont(lam9085_spec, 2);

//setting env list
clo9316[1] = decode_clo_array[1];
clo9316[2] = decode_clo_array[2];
void* f_lam_8938 = encode_clo(clo9316);



//clo-app
flatten_spec(flatten, f_lam_8938, id_8846);
}

inline void lam9087_spec(void* env9088, void* id_8846) // lam9087 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9088);

//creating new make-kont closure
void** clo9317 = alloc_kont(lam9085_spec, 2);

//setting env list
clo9317[1] = decode_clo_array[1];
clo9317[2] = decode_clo_array[2];
void* f_lam_8938 = encode_clo(clo9317);



//clo-app
flatten_spec(flatten, f_lam_8938, id_8846);
}

inline void lam9089_fptr() // lam9089 -> generic version 
{
//reading env
void* const env9090 = arg_buffer[1];
//reading env and args
void* const id_8845 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9090);

//creating new make-kont closure
void** clo9318 = alloc_kont(lam9087_spec, 2);

//setting env list
clo9318[1] = decode_clo_array[1];
clo9318[2] = id_8845;
void* f_lam_8939 = encode_clo(clo9318);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8939;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9089_spec(void* env9090, void* id_8845) // lam9089 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9090);

//creating new make-kont closure
void** clo9319 = alloc_kont(lam9087_spec, 2);

//setting env list
clo9319[1] = decode_clo_array[1];
clo9319[2] = id_8845;
void* f_lam_8939 = encode_clo(clo9319);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8939;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9091_fptr() // lam9091 -> generic version 
{
//reading env
void* const env9092 = arg_buffer[1];
//reading env and args
void* const id_8844 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9092);

//creating new make-kont closure
void** clo9320 = alloc_kont(lam9089_spec, 2);

//setting env list
clo9320[1] = decode_clo_array[1];
clo9320[2] = decode_clo_array[2];
void* f_lam_8940 = encode_clo(clo9320);



//clo-app
flatten_spec(flatten, f_lam_8940, id_8844);
}

inline void lam9091_spec(void* env9092, void* id_8844) // lam9091 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9092);

//creating new make-kont closure
void** clo9321 = alloc_kont(lam9089_spec, 2);

//setting env list
clo9321[1] = decode_clo_array[1];
clo9321[2] = decode_clo_array[2];
void* f_lam_8940 = encode_clo(clo9321);



//clo-app
flatten_spec(flatten, f_lam_8940, id_8844);
}

inline void lam9093_fptr() // lam9093 -> generic version 
{
//reading env
void* const env9094 = arg_buffer[1];
//reading env and args
void* const xy8848 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9094);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8848);
}

inline void lam9093_spec(void* env9094, void* xy8848) // lam9093 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9094);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8848);
}

inline void lam9095_fptr() // lam9095 -> generic version 
{
//reading env
void* const env9096 = arg_buffer[1];
//reading env and args
void* const id_8843 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9096);

//if-clause
if(is_true(id_8843))
{

//creating new make-kont closure
void** clo9322 = alloc_kont(lam9091_spec, 2);

//setting env list
clo9322[1] = decode_clo_array[1];
clo9322[2] = decode_clo_array[2];
void* f_lam_8941 = encode_clo(clo9322);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8941;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9323 = alloc_kont(lam9093_spec, 1);

//setting env list
clo9323[1] = decode_clo_array[1];
void* f_lam_8942 = encode_clo(clo9323);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8942;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
list_fptr();
}

}

inline void lam9095_spec(void* env9096, void* id_8843) // lam9095 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9096);

//if-clause
if(is_true(id_8843))
{

//creating new make-kont closure
void** clo9324 = alloc_kont(lam9091_spec, 2);

//setting env list
clo9324[1] = decode_clo_array[1];
clo9324[2] = decode_clo_array[2];
void* f_lam_8941 = encode_clo(clo9324);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8941;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9325 = alloc_kont(lam9093_spec, 1);

//setting env list
clo9325[1] = decode_clo_array[1];
void* f_lam_8942 = encode_clo(clo9325);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8942;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
list_fptr();
}

}

inline void lam9097_fptr() // lam9097 -> generic version 
{
//reading env
void* const env9098 = arg_buffer[1];
//reading env and args
void* const id_8841 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9098);

//if-clause
if(is_true(id_8841))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9326 = alloc_kont(lam9095_spec, 2);

//setting env list
clo9326[1] = decode_clo_array[1];
clo9326[2] = decode_clo_array[2];
void* f_lam_8943 = encode_clo(clo9326);



//clo-app
arg_buffer[1] = pair_u63;
arg_buffer[2] = f_lam_8943;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
pair_u63_fptr();
}

}

inline void lam9097_spec(void* env9098, void* id_8841) // lam9097 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9098);

//if-clause
if(is_true(id_8841))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9327 = alloc_kont(lam9095_spec, 2);

//setting env list
clo9327[1] = decode_clo_array[1];
clo9327[2] = decode_clo_array[2];
void* f_lam_8943 = encode_clo(clo9327);



//clo-app
arg_buffer[1] = pair_u63;
arg_buffer[2] = f_lam_8943;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
pair_u63_fptr();
}

}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8937 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9328 = alloc_kont(lam9097_spec, 2);

//setting env list
clo9328[1] = kont8937;
clo9328[2] = lst;
void* f_lam_8944 = encode_clo(clo9328);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8944;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void flatten_spec(void* _9099, void* kont8937, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9329 = alloc_kont(lam9097_spec, 2);

//setting env list
clo9329[1] = kont8937;
clo9329[2] = lst;
void* f_lam_8944 = encode_clo(clo9329);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8944;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9100_fptr() // lam9100 -> generic version 
{
//reading env
void* const env9101 = arg_buffer[1];
//reading env and args
void* const id_8853 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9101);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8853;
numArgs = 4;
cons_fptr();
}

inline void lam9100_spec(void* env9101, void* id_8853) // lam9100 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9101);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8853;
numArgs = 4;
cons_fptr();
}

inline void lam9102_fptr() // lam9102 -> generic version 
{
//reading env
void* const env9103 = arg_buffer[1];
//reading env and args
void* const id_8852 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9103);

//creating new make-kont closure
void** clo9330 = alloc_kont(lam9100_spec, 2);

//setting env list
clo9330[1] = decode_clo_array[1];
clo9330[2] = decode_clo_array[3];
void* f_lam_8946 = encode_clo(clo9330);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8946, id_8852, decode_clo_array[2]);
}

inline void lam9102_spec(void* env9103, void* id_8852) // lam9102 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9103);

//creating new make-kont closure
void** clo9331 = alloc_kont(lam9100_spec, 2);

//setting env list
clo9331[1] = decode_clo_array[1];
clo9331[2] = decode_clo_array[3];
void* f_lam_8946 = encode_clo(clo9331);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8946, id_8852, decode_clo_array[2]);
}

inline void lam9104_fptr() // lam9104 -> generic version 
{
//reading env
void* const env9105 = arg_buffer[1];
//reading env and args
void* const id_8849 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9105);

//if-clause
if(is_true(id_8849))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9332 = alloc_kont(lam9102_spec, 3);

//setting env list
clo9332[1] = decode_clo_array[1];
clo9332[2] = decode_clo_array[2];
clo9332[3] = decode_clo_array[3];
void* f_lam_8947 = encode_clo(clo9332);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8947;
arg_buffer[3] = int9150;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
_u43_fptr();
}

}

inline void lam9104_spec(void* env9105, void* id_8849) // lam9104 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9105);

//if-clause
if(is_true(id_8849))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9333 = alloc_kont(lam9102_spec, 3);

//setting env list
clo9333[1] = decode_clo_array[1];
clo9333[2] = decode_clo_array[2];
clo9333[3] = decode_clo_array[3];
void* f_lam_8947 = encode_clo(clo9333);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8947;
arg_buffer[3] = int9150;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
_u43_fptr();
}

}

inline void interval_u45list_fptr() // interval-list -> generic version 
{
//reading env and args
void* const kont8945 = arg_buffer[2];
void* const m = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9334 = alloc_kont(lam9104_spec, 3);

//setting env list
clo9334[1] = m;
clo9334[2] = n;
clo9334[3] = kont8945;
void* f_lam_8948 = encode_clo(clo9334);



//clo-app
arg_buffer[1] = _u62;
arg_buffer[2] = f_lam_8948;
arg_buffer[3] = m;
arg_buffer[4] = n;
numArgs = 4;
_u62_fptr();
}

inline void interval_u45list_spec(void* _9106, void* kont8945, void* m, void* n) // interval-list 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9335 = alloc_kont(lam9104_spec, 3);

//setting env list
clo9335[1] = m;
clo9335[2] = n;
clo9335[3] = kont8945;
void* f_lam_8948 = encode_clo(clo9335);



//clo-app
arg_buffer[1] = _u62;
arg_buffer[2] = f_lam_8948;
arg_buffer[3] = m;
arg_buffer[4] = n;
numArgs = 4;
_u62_fptr();
}

inline void lam9107_fptr() // lam9107 -> generic version 
{
//reading env
void* const env9108 = arg_buffer[1];
//reading env and args
void* const id_8860 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9108);

//clo-app
remove_u45multiples_spec(remove_u45multiples, decode_clo_array[2], decode_clo_array[1], id_8860);
}

inline void lam9107_spec(void* env9108, void* id_8860) // lam9107 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9108);

//clo-app
remove_u45multiples_spec(remove_u45multiples, decode_clo_array[2], decode_clo_array[1], id_8860);
}

inline void lam9109_fptr() // lam9109 -> generic version 
{
//reading env
void* const env9110 = arg_buffer[1];
//reading env and args
void* const id_8863 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9110);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8863;
numArgs = 4;
cons_fptr();
}

inline void lam9109_spec(void* env9110, void* id_8863) // lam9109 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9110);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8863;
numArgs = 4;
cons_fptr();
}

inline void lam9111_fptr() // lam9111 -> generic version 
{
//reading env
void* const env9112 = arg_buffer[1];
//reading env and args
void* const id_8862 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9112);

//creating new make-kont closure
void** clo9336 = alloc_kont(lam9109_spec, 2);

//setting env list
clo9336[1] = decode_clo_array[2];
clo9336[2] = decode_clo_array[3];
void* f_lam_8951 = encode_clo(clo9336);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8951, decode_clo_array[1], id_8862);
}

inline void lam9111_spec(void* env9112, void* id_8862) // lam9111 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9112);

//creating new make-kont closure
void** clo9337 = alloc_kont(lam9109_spec, 2);

//setting env list
clo9337[1] = decode_clo_array[2];
clo9337[2] = decode_clo_array[3];
void* f_lam_8951 = encode_clo(clo9337);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8951, decode_clo_array[1], id_8862);
}

inline void lam9113_fptr() // lam9113 -> generic version 
{
//reading env
void* const env9114 = arg_buffer[1];
//reading env and args
void* const id_8861 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9114);

//creating new make-kont closure
void** clo9338 = alloc_kont(lam9111_spec, 3);

//setting env list
clo9338[1] = decode_clo_array[2];
clo9338[2] = decode_clo_array[3];
clo9338[3] = id_8861;
void* f_lam_8952 = encode_clo(clo9338);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8952;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9113_spec(void* env9114, void* id_8861) // lam9113 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9114);

//creating new make-kont closure
void** clo9339 = alloc_kont(lam9111_spec, 3);

//setting env list
clo9339[1] = decode_clo_array[2];
clo9339[2] = decode_clo_array[3];
clo9339[3] = id_8861;
void* f_lam_8952 = encode_clo(clo9339);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8952;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9115_fptr() // lam9115 -> generic version 
{
//reading env
void* const env9116 = arg_buffer[1];
//reading env and args
void* const id_8859 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9116);

//if-clause
if(is_true(id_8859))
{

//creating new make-kont closure
void** clo9340 = alloc_kont(lam9107_spec, 2);

//setting env list
clo9340[1] = decode_clo_array[2];
clo9340[2] = decode_clo_array[3];
void* f_lam_8950 = encode_clo(clo9340);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8950;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9341 = alloc_kont(lam9113_spec, 3);

//setting env list
clo9341[1] = decode_clo_array[1];
clo9341[2] = decode_clo_array[2];
clo9341[3] = decode_clo_array[3];
void* f_lam_8953 = encode_clo(clo9341);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8953;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

}

inline void lam9115_spec(void* env9116, void* id_8859) // lam9115 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9116);

//if-clause
if(is_true(id_8859))
{

//creating new make-kont closure
void** clo9342 = alloc_kont(lam9107_spec, 2);

//setting env list
clo9342[1] = decode_clo_array[2];
clo9342[2] = decode_clo_array[3];
void* f_lam_8950 = encode_clo(clo9342);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8950;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9343 = alloc_kont(lam9113_spec, 3);

//setting env list
clo9343[1] = decode_clo_array[1];
clo9343[2] = decode_clo_array[2];
clo9343[3] = decode_clo_array[3];
void* f_lam_8953 = encode_clo(clo9343);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8953;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

}

inline void lam9117_fptr() // lam9117 -> generic version 
{
//reading env
void* const env9118 = arg_buffer[1];
//reading env and args
void* const id_8857 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9118);

//creating new make-kont closure
void** clo9344 = alloc_kont(lam9115_spec, 3);

//setting env list
clo9344[1] = decode_clo_array[1];
clo9344[2] = decode_clo_array[2];
clo9344[3] = decode_clo_array[3];
void* f_lam_8954 = encode_clo(clo9344);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8954;
arg_buffer[3] = id_8857;
arg_buffer[4] = int9151;
numArgs = 4;
_u61_fptr();
}

inline void lam9117_spec(void* env9118, void* id_8857) // lam9117 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9118);

//creating new make-kont closure
void** clo9345 = alloc_kont(lam9115_spec, 3);

//setting env list
clo9345[1] = decode_clo_array[1];
clo9345[2] = decode_clo_array[2];
clo9345[3] = decode_clo_array[3];
void* f_lam_8954 = encode_clo(clo9345);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8954;
arg_buffer[3] = id_8857;
arg_buffer[4] = int9151;
numArgs = 4;
_u61_fptr();
}

inline void lam9119_fptr() // lam9119 -> generic version 
{
//reading env
void* const env9120 = arg_buffer[1];
//reading env and args
void* const id_8856 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9120);

//creating new make-kont closure
void** clo9346 = alloc_kont(lam9117_spec, 3);

//setting env list
clo9346[1] = decode_clo_array[1];
clo9346[2] = decode_clo_array[2];
clo9346[3] = decode_clo_array[3];
void* f_lam_8955 = encode_clo(clo9346);



//clo-app
arg_buffer[1] = remainder_brouhaha;
arg_buffer[2] = f_lam_8955;
arg_buffer[3] = id_8856;
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
remainder_fptr();
}

inline void lam9119_spec(void* env9120, void* id_8856) // lam9119 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9120);

//creating new make-kont closure
void** clo9347 = alloc_kont(lam9117_spec, 3);

//setting env list
clo9347[1] = decode_clo_array[1];
clo9347[2] = decode_clo_array[2];
clo9347[3] = decode_clo_array[3];
void* f_lam_8955 = encode_clo(clo9347);



//clo-app
arg_buffer[1] = remainder_brouhaha;
arg_buffer[2] = f_lam_8955;
arg_buffer[3] = id_8856;
arg_buffer[4] = decode_clo_array[2];
numArgs = 4;
remainder_fptr();
}

inline void lam9121_fptr() // lam9121 -> generic version 
{
//reading env
void* const env9122 = arg_buffer[1];
//reading env and args
void* const id_8854 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9122);

//if-clause
if(is_true(id_8854))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9348 = alloc_kont(lam9119_spec, 3);

//setting env list
clo9348[1] = decode_clo_array[1];
clo9348[2] = decode_clo_array[2];
clo9348[3] = decode_clo_array[3];
void* f_lam_8956 = encode_clo(clo9348);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8956;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

}

inline void lam9121_spec(void* env9122, void* id_8854) // lam9121 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9122);

//if-clause
if(is_true(id_8854))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9349 = alloc_kont(lam9119_spec, 3);

//setting env list
clo9349[1] = decode_clo_array[1];
clo9349[2] = decode_clo_array[2];
clo9349[3] = decode_clo_array[3];
void* f_lam_8956 = encode_clo(clo9349);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8956;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

}

inline void remove_u45multiples_fptr() // remove-multiples -> generic version 
{
//reading env and args
void* const kont8949 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9350 = alloc_kont(lam9121_spec, 3);

//setting env list
clo9350[1] = l;
clo9350[2] = n;
clo9350[3] = kont8949;
void* f_lam_8957 = encode_clo(clo9350);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8957;
arg_buffer[3] = l;
numArgs = 3;
null_u63_fptr();
}

inline void remove_u45multiples_spec(void* _9123, void* kont8949, void* n, void* l) // remove-multiples 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9351 = alloc_kont(lam9121_spec, 3);

//setting env list
clo9351[1] = l;
clo9351[2] = n;
clo9351[3] = kont8949;
void* f_lam_8957 = encode_clo(clo9351);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8957;
arg_buffer[3] = l;
numArgs = 3;
null_u63_fptr();
}

inline void lam9124_fptr() // lam9124 -> generic version 
{
//reading env
void* const env9125 = arg_buffer[1];
//reading env and args
void* const id_8870 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9125);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8870;
numArgs = 4;
cons_fptr();
}

inline void lam9124_spec(void* env9125, void* id_8870) // lam9124 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9125);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8870;
numArgs = 4;
cons_fptr();
}

inline void lam9126_fptr() // lam9126 -> generic version 
{
//reading env
void* const env9127 = arg_buffer[1];
//reading env and args
void* const id_8869 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9127);

//creating new make-kont closure
void** clo9352 = alloc_kont(lam9124_spec, 2);

//setting env list
clo9352[1] = decode_clo_array[1];
clo9352[2] = decode_clo_array[2];
void* f_lam_8959 = encode_clo(clo9352);



//clo-app
sieve_spec(sieve, f_lam_8959, id_8869);
}

inline void lam9126_spec(void* env9127, void* id_8869) // lam9126 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9127);

//creating new make-kont closure
void** clo9353 = alloc_kont(lam9124_spec, 2);

//setting env list
clo9353[1] = decode_clo_array[1];
clo9353[2] = decode_clo_array[2];
void* f_lam_8959 = encode_clo(clo9353);



//clo-app
sieve_spec(sieve, f_lam_8959, id_8869);
}

inline void lam9128_fptr() // lam9128 -> generic version 
{
//reading env
void* const env9129 = arg_buffer[1];
//reading env and args
void* const id_8868 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9129);

//creating new make-kont closure
void** clo9354 = alloc_kont(lam9126_spec, 2);

//setting env list
clo9354[1] = decode_clo_array[2];
clo9354[2] = decode_clo_array[3];
void* f_lam_8960 = encode_clo(clo9354);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8960, decode_clo_array[1], id_8868);
}

inline void lam9128_spec(void* env9129, void* id_8868) // lam9128 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9129);

//creating new make-kont closure
void** clo9355 = alloc_kont(lam9126_spec, 2);

//setting env list
clo9355[1] = decode_clo_array[2];
clo9355[2] = decode_clo_array[3];
void* f_lam_8960 = encode_clo(clo9355);



//clo-app
remove_u45multiples_spec(remove_u45multiples, f_lam_8960, decode_clo_array[1], id_8868);
}

inline void lam9130_fptr() // lam9130 -> generic version 
{
//reading env
void* const env9131 = arg_buffer[1];
//reading env and args
void* const id_8867 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9131);

//creating new make-kont closure
void** clo9356 = alloc_kont(lam9128_spec, 3);

//setting env list
clo9356[1] = id_8867;
clo9356[2] = decode_clo_array[2];
clo9356[3] = decode_clo_array[3];
void* f_lam_8961 = encode_clo(clo9356);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8961;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9130_spec(void* env9131, void* id_8867) // lam9130 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9131);

//creating new make-kont closure
void** clo9357 = alloc_kont(lam9128_spec, 3);

//setting env list
clo9357[1] = id_8867;
clo9357[2] = decode_clo_array[2];
clo9357[3] = decode_clo_array[3];
void* f_lam_8961 = encode_clo(clo9357);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8961;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9132_fptr() // lam9132 -> generic version 
{
//reading env
void* const env9133 = arg_buffer[1];
//reading env and args
void* const id_8866 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9133);

//creating new make-kont closure
void** clo9358 = alloc_kont(lam9130_spec, 3);

//setting env list
clo9358[1] = decode_clo_array[1];
clo9358[2] = id_8866;
clo9358[3] = decode_clo_array[2];
void* f_lam_8962 = encode_clo(clo9358);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8962;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

inline void lam9132_spec(void* env9133, void* id_8866) // lam9132 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9133);

//creating new make-kont closure
void** clo9359 = alloc_kont(lam9130_spec, 3);

//setting env list
clo9359[1] = decode_clo_array[1];
clo9359[2] = id_8866;
clo9359[3] = decode_clo_array[2];
void* f_lam_8962 = encode_clo(clo9359);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8962;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

inline void lam9134_fptr() // lam9134 -> generic version 
{
//reading env
void* const env9135 = arg_buffer[1];
//reading env and args
void* const id_8864 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9135);

//if-clause
if(is_true(id_8864))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9360 = alloc_kont(lam9132_spec, 2);

//setting env list
clo9360[1] = decode_clo_array[1];
clo9360[2] = decode_clo_array[2];
void* f_lam_8963 = encode_clo(clo9360);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8963;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

}

inline void lam9134_spec(void* env9135, void* id_8864) // lam9134 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9135);

//if-clause
if(is_true(id_8864))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9361 = alloc_kont(lam9132_spec, 2);

//setting env list
clo9361[1] = decode_clo_array[1];
clo9361[2] = decode_clo_array[2];
void* f_lam_8963 = encode_clo(clo9361);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8963;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}

}

inline void sieve_fptr() // sieve -> generic version 
{
//reading env and args
void* const kont8958 = arg_buffer[2];
void* const l = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9362 = alloc_kont(lam9134_spec, 2);

//setting env list
clo9362[1] = l;
clo9362[2] = kont8958;
void* f_lam_8964 = encode_clo(clo9362);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8964;
arg_buffer[3] = l;
numArgs = 3;
null_u63_fptr();
}

inline void sieve_spec(void* _9136, void* kont8958, void* l) // sieve 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9363 = alloc_kont(lam9134_spec, 2);

//setting env list
clo9363[1] = l;
clo9363[2] = kont8958;
void* f_lam_8964 = encode_clo(clo9363);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8964;
arg_buffer[3] = l;
numArgs = 3;
null_u63_fptr();
}

inline void lam9137_fptr() // lam9137 -> generic version 
{
//reading env
void* const env9138 = arg_buffer[1];
//reading env and args
void* const id_8872 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9138);

//clo-app
sieve_spec(sieve, decode_clo_array[1], id_8872);
}

inline void lam9137_spec(void* env9138, void* id_8872) // lam9137 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9138);

//clo-app
sieve_spec(sieve, decode_clo_array[1], id_8872);
}

inline void primes_u60_u61_fptr() // primes<= -> generic version 
{
//reading env and args
void* const kont8965 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9364 = alloc_kont(lam9137_spec, 1);

//setting env list
clo9364[1] = kont8965;
void* f_lam_8966 = encode_clo(clo9364);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8966, int9152, n);
}

inline void primes_u60_u61_spec(void* _9139, void* kont8965, void* n) // primes<= 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9365 = alloc_kont(lam9137_spec, 1);

//setting env list
clo9365[1] = kont8965;
void* f_lam_8966 = encode_clo(clo9365);



//clo-app
interval_u45list_spec(interval_u45list, f_lam_8966, int9152, n);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8967 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
primes_u60_u61_spec(primes_u60_u61, kont8967, int9153);
}

inline void brouhaha_main_spec(void* _9140, void* kont8967) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
primes_u60_u61_spec(primes_u60_u61, kont8967, int9153);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9151 = reinterpret_cast<void *>(encode_int(0));
bool_t9144 = encode_bool(true);
int9153 = reinterpret_cast<void *>(encode_int(150000));
int9150 = reinterpret_cast<void *>(encode_int(1));
bool_f9145 = encode_bool(false);
int9152 = reinterpret_cast<void *>(encode_int(2));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

