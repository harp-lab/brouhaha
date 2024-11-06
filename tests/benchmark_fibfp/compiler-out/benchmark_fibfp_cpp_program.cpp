#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9137;
void* float9141;
void* float9140;
void* float9142;
void* bool_t9133;
void* int9138;
void* bool_f9134;
void* int9129;



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

void lam8960_fptr(); // lam8960
void lam8960_spec(void* env8961, void* id_8783); // lam8960
void* lam8960 = encode_clo(alloc_clo(lam8960_fptr, 0));

void even_u63_fptr(); // even?
void even_u63_spec(void* _8962, void* kont8868, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8963_fptr(); // lam8963
void lam8963_spec(void* env8964, void* id_8786); // lam8963
void* lam8963 = encode_clo(alloc_clo(lam8963_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8965, void* kont8870, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam8966_fptr(); // lam8966
void lam8966_spec(void* env8967, void* xy8789); // lam8966
void* lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void lam8968_fptr(); // lam8968
void lam8968_spec(void* env8969, void* id_8792); // lam8968
void* lam8968 = encode_clo(alloc_clo(lam8968_fptr, 0));

void lam8970_fptr(); // lam8970
void lam8970_spec(void* env8971, void* id_8790); // lam8970
void* lam8970 = encode_clo(alloc_clo(lam8970_fptr, 0));

void lam8972_fptr(); // lam8972
void lam8972_spec(void* env8973, void* id_8788); // lam8972
void* lam8972 = encode_clo(alloc_clo(lam8972_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8974, void* kont8872, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8975_fptr(); // lam8975
void lam8975_spec(void* env8976, void* xy8794); // lam8975
void* lam8975 = encode_clo(alloc_clo(lam8975_fptr, 0));

void lam8977_fptr(); // lam8977
void lam8977_spec(void* env8978, void* xy8795); // lam8977
void* lam8977 = encode_clo(alloc_clo(lam8977_fptr, 0));

void lam8979_fptr(); // lam8979
void lam8979_spec(void* env8980, void* id_8800); // lam8979
void* lam8979 = encode_clo(alloc_clo(lam8979_fptr, 0));

void lam8981_fptr(); // lam8981
void lam8981_spec(void* env8982, void* id_8799); // lam8981
void* lam8981 = encode_clo(alloc_clo(lam8981_fptr, 0));

void lam8983_fptr(); // lam8983
void lam8983_spec(void* env8984, void* id_8798); // lam8983
void* lam8983 = encode_clo(alloc_clo(lam8983_fptr, 0));

void lam8985_fptr(); // lam8985
void lam8985_spec(void* env8986, void* id_8796); // lam8985
void* lam8985 = encode_clo(alloc_clo(lam8985_fptr, 0));

void lam8987_fptr(); // lam8987
void lam8987_spec(void* env8988, void* id_8793); // lam8987
void* lam8987 = encode_clo(alloc_clo(lam8987_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8989, void* kont8877, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8990_fptr(); // lam8990
void lam8990_spec(void* env8991, void* id_8806); // lam8990
void* lam8990 = encode_clo(alloc_clo(lam8990_fptr, 0));

void lam8992_fptr(); // lam8992
void lam8992_spec(void* env8993, void* id_8804); // lam8992
void* lam8992 = encode_clo(alloc_clo(lam8992_fptr, 0));

void lam8994_fptr(); // lam8994
void lam8994_spec(void* env8995, void* id_8803); // lam8994
void* lam8994 = encode_clo(alloc_clo(lam8994_fptr, 0));

void lam8996_fptr(); // lam8996
void lam8996_spec(void* env8997, void* id_8801); // lam8996
void* lam8996 = encode_clo(alloc_clo(lam8996_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8998, void* kont8885, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8999_fptr(); // lam8999
void lam8999_spec(void* env9000, void* id_8811); // lam8999
void* lam8999 = encode_clo(alloc_clo(lam8999_fptr, 0));

void lam9001_fptr(); // lam9001
void lam9001_spec(void* env9002, void* id_8810); // lam9001
void* lam9001 = encode_clo(alloc_clo(lam9001_fptr, 0));

void lam9003_fptr(); // lam9003
void lam9003_spec(void* env9004, void* id_8807); // lam9003
void* lam9003 = encode_clo(alloc_clo(lam9003_fptr, 0));

void length_fptr(); // length
void length_spec(void* _9005, void* kont8890, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam9006_fptr(); // lam9006
void lam9006_spec(void* env9007, void* xy8813); // lam9006
void* lam9006 = encode_clo(alloc_clo(lam9006_fptr, 0));

void lam9008_fptr(); // lam9008
void lam9008_spec(void* env9009, void* id_8817); // lam9008
void* lam9008 = encode_clo(alloc_clo(lam9008_fptr, 0));

void lam9010_fptr(); // lam9010
void lam9010_spec(void* env9011, void* id_8816); // lam9010
void* lam9010 = encode_clo(alloc_clo(lam9010_fptr, 0));

void lam9012_fptr(); // lam9012
void lam9012_spec(void* env9013, void* id_8815); // lam9012
void* lam9012 = encode_clo(alloc_clo(lam9012_fptr, 0));

void lam9014_fptr(); // lam9014
void lam9014_spec(void* env9015, void* id_8814); // lam9014
void* lam9014 = encode_clo(alloc_clo(lam9014_fptr, 0));

void lam9016_fptr(); // lam9016
void lam9016_spec(void* env9017, void* id_8812); // lam9016
void* lam9016 = encode_clo(alloc_clo(lam9016_fptr, 0));

void map_fptr(); // map
void map_spec(void* _9018, void* kont8894, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam9019_fptr(); // lam9019
void lam9019_spec(void* env9020, void* xy8819); // lam9019
void* lam9019 = encode_clo(alloc_clo(lam9019_fptr, 0));

void lam9021_fptr(); // lam9021
void lam9021_spec(void* env9022, void* id_8824); // lam9021
void* lam9021 = encode_clo(alloc_clo(lam9021_fptr, 0));

void lam9023_fptr(); // lam9023
void lam9023_spec(void* env9024, void* id_8823); // lam9023
void* lam9023 = encode_clo(alloc_clo(lam9023_fptr, 0));

void lam9025_fptr(); // lam9025
void lam9025_spec(void* env9026, void* id_8822); // lam9025
void* lam9025 = encode_clo(alloc_clo(lam9025_fptr, 0));

void lam9027_fptr(); // lam9027
void lam9027_spec(void* env9028, void* id_8825); // lam9027
void* lam9027 = encode_clo(alloc_clo(lam9027_fptr, 0));

void lam9029_fptr(); // lam9029
void lam9029_spec(void* env9030, void* id_8821); // lam9029
void* lam9029 = encode_clo(alloc_clo(lam9029_fptr, 0));

void lam9031_fptr(); // lam9031
void lam9031_spec(void* env9032, void* id_8820); // lam9031
void* lam9031 = encode_clo(alloc_clo(lam9031_fptr, 0));

void lam9033_fptr(); // lam9033
void lam9033_spec(void* env9034, void* id_8818); // lam9033
void* lam9033 = encode_clo(alloc_clo(lam9033_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _9035, void* kont8901, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam9036_fptr(); // lam9036
void lam9036_spec(void* env9037, void* id_8829); // lam9036
void* lam9036 = encode_clo(alloc_clo(lam9036_fptr, 0));

void lam9038_fptr(); // lam9038
void lam9038_spec(void* env9039, void* id_8828); // lam9038
void* lam9038 = encode_clo(alloc_clo(lam9038_fptr, 0));

void lam9040_fptr(); // lam9040
void lam9040_spec(void* env9041, void* id_8827); // lam9040
void* lam9040 = encode_clo(alloc_clo(lam9040_fptr, 0));

void lam9042_fptr(); // lam9042
void lam9042_spec(void* env9043, void* id_8826); // lam9042
void* lam9042 = encode_clo(alloc_clo(lam9042_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _9044, void* kont8910, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9045_fptr(); // lam9045
void lam9045_spec(void* env9046, void* id_8833); // lam9045
void* lam9045 = encode_clo(alloc_clo(lam9045_fptr, 0));

void lam9047_fptr(); // lam9047
void lam9047_spec(void* env9048, void* id_8832); // lam9047
void* lam9047 = encode_clo(alloc_clo(lam9047_fptr, 0));

void lam9049_fptr(); // lam9049
void lam9049_spec(void* env9050, void* id_8831); // lam9049
void* lam9049 = encode_clo(alloc_clo(lam9049_fptr, 0));

void lam9051_fptr(); // lam9051
void lam9051_spec(void* env9052, void* id_8830); // lam9051
void* lam9051 = encode_clo(alloc_clo(lam9051_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _9053, void* kont8915, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam9054_fptr(); // lam9054
void lam9054_spec(void* env9055, void* id_8837); // lam9054
void* lam9054 = encode_clo(alloc_clo(lam9054_fptr, 0));

void lam9056_fptr(); // lam9056
void lam9056_spec(void* env9057, void* id_8836); // lam9056
void* lam9056 = encode_clo(alloc_clo(lam9056_fptr, 0));

void lam9058_fptr(); // lam9058
void lam9058_spec(void* env9059, void* id_8835); // lam9058
void* lam9058 = encode_clo(alloc_clo(lam9058_fptr, 0));

void lam9060_fptr(); // lam9060
void lam9060_spec(void* env9061, void* id_8834); // lam9060
void* lam9060 = encode_clo(alloc_clo(lam9060_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _9062, void* kont8920, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9063_fptr(); // lam9063
void lam9063_spec(void* env9064, void* xy8839); // lam9063
void* lam9063 = encode_clo(alloc_clo(lam9063_fptr, 0));

void lam9065_fptr(); // lam9065
void lam9065_spec(void* env9066, void* id_8842); // lam9065
void* lam9065 = encode_clo(alloc_clo(lam9065_fptr, 0));

void lam9067_fptr(); // lam9067
void lam9067_spec(void* env9068, void* id_8841); // lam9067
void* lam9067 = encode_clo(alloc_clo(lam9067_fptr, 0));

void lam9069_fptr(); // lam9069
void lam9069_spec(void* env9070, void* id_8840); // lam9069
void* lam9069 = encode_clo(alloc_clo(lam9069_fptr, 0));

void lam9071_fptr(); // lam9071
void lam9071_spec(void* env9072, void* id_8838); // lam9071
void* lam9071 = encode_clo(alloc_clo(lam9071_fptr, 0));

void lam9073_fptr(); // lam9073
void lam9073_spec(void* env9074, void* lsts); // lam9073
void* lam9073 = encode_clo(alloc_clo(lam9073_fptr, 0));

void lam9075_fptr(); // lam9075
void lam9075_spec(void* env9076, void* vargs8780); // lam9075
void* lam9075 = encode_clo(alloc_clo(lam9075_fptr, 0));

void lam9077_fptr(); // lam9077
void lam9077_spec(void* env9078, void* l2); // lam9077
void* lam9077 = encode_clo(alloc_clo(lam9077_fptr, 0));

void lam9079_fptr(); // lam9079
void lam9079_spec(void* env9080, void* vargs8779); // lam9079
void* lam9079 = encode_clo(alloc_clo(lam9079_fptr, 0));

void lam9081_fptr(); // lam9081
void lam9081_spec(void* env9082, void* l1); // lam9081
void* lam9081 = encode_clo(alloc_clo(lam9081_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9084_fptr(); // lam9084
void lam9084_spec(void* env9085, void* id_8845); // lam9084
void* lam9084 = encode_clo(alloc_clo(lam9084_fptr, 0));

void lam9086_fptr(); // lam9086
void lam9086_spec(void* env9087, void* id_8850); // lam9086
void* lam9086 = encode_clo(alloc_clo(lam9086_fptr, 0));

void lam9088_fptr(); // lam9088
void lam9088_spec(void* env9089, void* id_8849); // lam9088
void* lam9088 = encode_clo(alloc_clo(lam9088_fptr, 0));

void lam9090_fptr(); // lam9090
void lam9090_spec(void* env9091, void* id_8847); // lam9090
void* lam9090 = encode_clo(alloc_clo(lam9090_fptr, 0));

void lam9092_fptr(); // lam9092
void lam9092_spec(void* env9093, void* id_8846); // lam9092
void* lam9092 = encode_clo(alloc_clo(lam9092_fptr, 0));

void lam9094_fptr(); // lam9094
void lam9094_spec(void* env9095, void* id_8844); // lam9094
void* lam9094 = encode_clo(alloc_clo(lam9094_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _9096, void* kont8936, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam9097_fptr(); // lam9097
void lam9097_spec(void* env9098, void* xy8852); // lam9097
void* lam9097 = encode_clo(alloc_clo(lam9097_fptr, 0));

void lam9099_fptr(); // lam9099
void lam9099_spec(void* env9100, void* id_8857); // lam9099
void* lam9099 = encode_clo(alloc_clo(lam9099_fptr, 0));

void lam9101_fptr(); // lam9101
void lam9101_spec(void* env9102, void* id_8856); // lam9101
void* lam9101 = encode_clo(alloc_clo(lam9101_fptr, 0));

void lam9103_fptr(); // lam9103
void lam9103_spec(void* env9104, void* id_8855); // lam9103
void* lam9103 = encode_clo(alloc_clo(lam9103_fptr, 0));

void lam9105_fptr(); // lam9105
void lam9105_spec(void* env9106, void* id_8854); // lam9105
void* lam9105 = encode_clo(alloc_clo(lam9105_fptr, 0));

void lam9107_fptr(); // lam9107
void lam9107_spec(void* env9108, void* xy8858); // lam9107
void* lam9107 = encode_clo(alloc_clo(lam9107_fptr, 0));

void lam9109_fptr(); // lam9109
void lam9109_spec(void* env9110, void* id_8853); // lam9109
void* lam9109 = encode_clo(alloc_clo(lam9109_fptr, 0));

void lam9111_fptr(); // lam9111
void lam9111_spec(void* env9112, void* id_8851); // lam9111
void* lam9111 = encode_clo(alloc_clo(lam9111_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _9113, void* kont8943, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam9114_fptr(); // lam9114
void lam9114_spec(void* env9115, void* id_8866); // lam9114
void* lam9114 = encode_clo(alloc_clo(lam9114_fptr, 0));

void lam9116_fptr(); // lam9116
void lam9116_spec(void* env9117, void* id_8865); // lam9116
void* lam9116 = encode_clo(alloc_clo(lam9116_fptr, 0));

void lam9118_fptr(); // lam9118
void lam9118_spec(void* env9119, void* id_8863); // lam9118
void* lam9118 = encode_clo(alloc_clo(lam9118_fptr, 0));

void lam9120_fptr(); // lam9120
void lam9120_spec(void* env9121, void* id_8862); // lam9120
void* lam9120 = encode_clo(alloc_clo(lam9120_fptr, 0));

void lam9122_fptr(); // lam9122
void lam9122_spec(void* env9123, void* id_8860); // lam9122
void* lam9122 = encode_clo(alloc_clo(lam9122_fptr, 0));

void fibfp_fptr(); // fibfp
void fibfp_spec(void* _9124, void* kont8952, void* n); // fibfp
void* fibfp = encode_clo(alloc_clo(fibfp_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9125, void* kont8958); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9143 = prim_car(lst);
void* const lst9145 = prim_cdr(lst);
void* const x9144 = apply_prim__u43(lst9145);
arg_buffer[1] = kont9143;
arg_buffer[2] = x9144;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9143))[0])();
}
else
{
void* const kont9143 = arg_buffer[2];
void* const x9144 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9143))[0])(kont9143, x9144);
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
void* const kont9146 = prim_car(lst);
void* const lst9148 = prim_cdr(lst);
void* const x9147 = apply_prim__u45(lst9148);
arg_buffer[1] = kont9146;
arg_buffer[2] = x9147;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9146))[0])();
}
else
{
void* const kont9146 = arg_buffer[2];
void* const x9147 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9146))[0])(kont9146, x9147);
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
void* const kont9149 = prim_car(lst);
void* const lst9151 = prim_cdr(lst);
void* const x9150 = apply_prim__u42(lst9151);
arg_buffer[1] = kont9149;
arg_buffer[2] = x9150;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9149))[0])();
}
else
{
void* const kont9149 = arg_buffer[2];
void* const x9150 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9149))[0])(kont9149, x9150);
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
void* const kont9152 = prim_car(lst);
void* const lst9154 = prim_cdr(lst);
void* const x9153 = apply_prim__u47(lst9154);
arg_buffer[1] = kont9152;
arg_buffer[2] = x9153;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9152))[0])();
}
else
{
void* const kont9152 = arg_buffer[2];
void* const x9153 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9152))[0])(kont9152, x9153);
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
void* const kont9155 = prim_car(lst);
void* const lst9157 = prim_cdr(lst);
void* const x9156 = apply_prim__u61(lst9157);
arg_buffer[1] = kont9155;
arg_buffer[2] = x9156;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9155))[0])();
}
else
{
void* const kont9155 = arg_buffer[2];
void* const x9156 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9155))[0])(kont9155, x9156);
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
void* const kont9158 = prim_car(lst);
void* const lst9160 = prim_cdr(lst);
void* const x9159 = apply_prim__u62(lst9160);
arg_buffer[1] = kont9158;
arg_buffer[2] = x9159;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9158))[0])();
}
else
{
void* const kont9158 = arg_buffer[2];
void* const x9159 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9158))[0])(kont9158, x9159);
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
void* const kont9161 = prim_car(lst);
void* const lst9163 = prim_cdr(lst);
void* const x9162 = apply_prim__u60(lst9163);
arg_buffer[1] = kont9161;
arg_buffer[2] = x9162;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9161))[0])();
}
else
{
void* const kont9161 = arg_buffer[2];
void* const x9162 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9161))[0])(kont9161, x9162);
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
void* const kont9164 = prim_car(lst);
void* const lst9166 = prim_cdr(lst);
void* const x9165 = apply_prim__u60_u61(lst9166);
arg_buffer[1] = kont9164;
arg_buffer[2] = x9165;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9164))[0])();
}
else
{
void* const kont9164 = arg_buffer[2];
void* const x9165 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9164))[0])(kont9164, x9165);
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
void* const kont9167 = prim_car(lst);
void* const lst9169 = prim_cdr(lst);
void* const x9168 = apply_prim__u62_u61(lst9169);
arg_buffer[1] = kont9167;
arg_buffer[2] = x9168;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9167))[0])();
}
else
{
void* const kont9167 = arg_buffer[2];
void* const x9168 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9167))[0])(kont9167, x9168);
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
void* const kont9170 = prim_car(lst);
void* const lst9172 = prim_cdr(lst);
void* const x9171 = apply_prim_modulo(lst9172);
arg_buffer[1] = kont9170;
arg_buffer[2] = x9171;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9170))[0])();
}
else
{
void* const kont9170 = arg_buffer[2];
void* const x9171 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9170))[0])(kont9170, x9171);
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
void* const kont9173 = prim_car(lst);
void* const lst9175 = prim_cdr(lst);
void* const x9174 = apply_prim_null_u63(lst9175);
arg_buffer[1] = kont9173;
arg_buffer[2] = x9174;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9173))[0])();
}
else
{
void* const kont9173 = arg_buffer[2];
void* const x9174 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9173))[0])(kont9173, x9174);
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
void* const kont9176 = prim_car(lst);
void* const lst9178 = prim_cdr(lst);
void* const x9177 = apply_prim_equal_u63(lst9178);
arg_buffer[1] = kont9176;
arg_buffer[2] = x9177;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9176))[0])();
}
else
{
void* const kont9176 = arg_buffer[2];
void* const x9177 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9176))[0])(kont9176, x9177);
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
void* const kont9179 = prim_car(lst);
void* const lst9181 = prim_cdr(lst);
void* const x9180 = apply_prim_eq_u63(lst9181);
arg_buffer[1] = kont9179;
arg_buffer[2] = x9180;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9179))[0])();
}
else
{
void* const kont9179 = arg_buffer[2];
void* const x9180 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9179))[0])(kont9179, x9180);
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
void* const kont9182 = prim_car(lst);
void* const lst9184 = prim_cdr(lst);
void* const x9183 = apply_prim_cons(lst9184);
arg_buffer[1] = kont9182;
arg_buffer[2] = x9183;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9182))[0])();
}
else
{
void* const kont9182 = arg_buffer[2];
void* const x9183 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9182))[0])(kont9182, x9183);
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
void* const kont9185 = prim_car(lst);
void* const lst9187 = prim_cdr(lst);
void* const x9186 = apply_prim_car(lst9187);
arg_buffer[1] = kont9185;
arg_buffer[2] = x9186;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9185))[0])();
}
else
{
void* const kont9185 = arg_buffer[2];
void* const x9186 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9185))[0])(kont9185, x9186);
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
void* const kont9188 = prim_car(lst);
void* const lst9190 = prim_cdr(lst);
void* const x9189 = apply_prim_cdr(lst9190);
arg_buffer[1] = kont9188;
arg_buffer[2] = x9189;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9188))[0])();
}
else
{
void* const kont9188 = arg_buffer[2];
void* const x9189 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9188))[0])(kont9188, x9189);
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
void* const kont9191 = prim_car(lst);
void* const lst9193 = prim_cdr(lst);
void* const x9192 = apply_prim_remainder(lst9193);
arg_buffer[1] = kont9191;
arg_buffer[2] = x9192;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9191))[0])();
}
else
{
void* const kont9191 = arg_buffer[2];
void* const x9192 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9191))[0])(kont9191, x9192);
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
void* const kont9194 = prim_car(lst);
void* const lst9196 = prim_cdr(lst);
void* const x9195 = apply_prim_pair_u63(lst9196);
arg_buffer[1] = kont9194;
arg_buffer[2] = x9195;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9194))[0])();
}
else
{
void* const kont9194 = arg_buffer[2];
void* const x9195 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9194))[0])(kont9194, x9195);
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
void* const kont9197 = prim_car(lst);
void* const lst9199 = prim_cdr(lst);
void* const x9198 = apply_prim_list(lst9199);
arg_buffer[1] = kont9197;
arg_buffer[2] = x9198;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9197))[0])();
}
else
{
void* const kont9197 = arg_buffer[2];
void* const x9198 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9197))[0])(kont9197, x9198);
}

}

inline void lam8960_fptr() // lam8960 -> generic version 
{
//reading env
void* const env8961 = arg_buffer[1];
//reading env and args
void* const id_8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8961);

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8783;
numArgs = 4;
equal_u63_fptr();
}

inline void lam8960_spec(void* env8961, void* id_8783) // lam8960 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8961);

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
//reading env and args
void* const kont8868 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9200 = alloc_kont(lam8960_spec, 2);

//setting env list
clo9200[1] = kont8868;
clo9200[2] = int9137;
void* f_lam_8869 = encode_clo(clo9200);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_8869;
arg_buffer[3] = x;
arg_buffer[4] = int9129;
numArgs = 4;
modulo_fptr();
}

inline void even_u63_spec(void* _8962, void* kont8868, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9201 = alloc_kont(lam8960_spec, 2);

//setting env list
clo9201[1] = kont8868;
clo9201[2] = int9137;
void* f_lam_8869 = encode_clo(clo9201);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_8869;
arg_buffer[3] = x;
arg_buffer[4] = int9129;
numArgs = 4;
modulo_fptr();
}

inline void lam8963_fptr() // lam8963 -> generic version 
{
//reading env
void* const env8964 = arg_buffer[1];
//reading env and args
void* const id_8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8964);

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8786;
numArgs = 4;
equal_u63_fptr();
}

inline void lam8963_spec(void* env8964, void* id_8786) // lam8963 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8964);

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
//reading env and args
void* const kont8870 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9202 = alloc_kont(lam8963_spec, 2);

//setting env list
clo9202[1] = kont8870;
clo9202[2] = int9138;
void* f_lam_8871 = encode_clo(clo9202);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_8871;
arg_buffer[3] = x;
arg_buffer[4] = int9129;
numArgs = 4;
modulo_fptr();
}

inline void odd_u63_spec(void* _8965, void* kont8870, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9203 = alloc_kont(lam8963_spec, 2);

//setting env list
clo9203[1] = kont8870;
clo9203[2] = int9138;
void* f_lam_8871 = encode_clo(clo9203);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f_lam_8871;
arg_buffer[3] = x;
arg_buffer[4] = int9129;
numArgs = 4;
modulo_fptr();
}

inline void lam8966_fptr() // lam8966 -> generic version 
{
//reading env
void* const env8967 = arg_buffer[1];
//reading env and args
void* const xy8789 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8789);
}

inline void lam8966_spec(void* env8967, void* xy8789) // lam8966 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8967);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8789);
}

inline void lam8968_fptr() // lam8968 -> generic version 
{
//reading env
void* const env8969 = arg_buffer[1];
//reading env and args
void* const id_8792 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8969);

//clo-app
list_u45ref_spec(list_u45ref, decode_clo_array[1], decode_clo_array[2], id_8792);
}

inline void lam8968_spec(void* env8969, void* id_8792) // lam8968 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8969);

//clo-app
list_u45ref_spec(list_u45ref, decode_clo_array[1], decode_clo_array[2], id_8792);
}

inline void lam8970_fptr() // lam8970 -> generic version 
{
//reading env
void* const env8971 = arg_buffer[1];
//reading env and args
void* const id_8790 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8971);

//creating new make-kont closure
void** clo9204 = alloc_kont(lam8968_spec, 2);

//setting env list
clo9204[1] = decode_clo_array[2];
clo9204[2] = id_8790;
void* f_lam_8874 = encode_clo(clo9204);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8874;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9138;
numArgs = 4;
_u45_fptr();
}

inline void lam8970_spec(void* env8971, void* id_8790) // lam8970 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8971);

//creating new make-kont closure
void** clo9205 = alloc_kont(lam8968_spec, 2);

//setting env list
clo9205[1] = decode_clo_array[2];
clo9205[2] = id_8790;
void* f_lam_8874 = encode_clo(clo9205);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8874;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = int9138;
numArgs = 4;
_u45_fptr();
}

inline void lam8972_fptr() // lam8972 -> generic version 
{
//reading env
void* const env8973 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8973);

//if-clause
if(is_true(id_8788))
{

//creating new make-kont closure
void** clo9206 = alloc_kont(lam8966_spec, 1);

//setting env list
clo9206[1] = decode_clo_array[2];
void* f_lam_8873 = encode_clo(clo9206);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8873;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9207 = alloc_kont(lam8970_spec, 2);

//setting env list
clo9207[1] = decode_clo_array[1];
clo9207[2] = decode_clo_array[2];
void* f_lam_8875 = encode_clo(clo9207);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8875;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8972_spec(void* env8973, void* id_8788) // lam8972 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8973);

//if-clause
if(is_true(id_8788))
{

//creating new make-kont closure
void** clo9208 = alloc_kont(lam8966_spec, 1);

//setting env list
clo9208[1] = decode_clo_array[2];
void* f_lam_8873 = encode_clo(clo9208);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8873;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9209 = alloc_kont(lam8970_spec, 2);

//setting env list
clo9209[1] = decode_clo_array[1];
clo9209[2] = decode_clo_array[2];
void* f_lam_8875 = encode_clo(clo9209);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8875;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8872 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9210 = alloc_kont(lam8972_spec, 3);

//setting env list
clo9210[1] = n;
clo9210[2] = kont8872;
clo9210[3] = lst;
void* f_lam_8876 = encode_clo(clo9210);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8876;
arg_buffer[3] = int9137;
arg_buffer[4] = n;
numArgs = 4;
_u61_fptr();
}

inline void list_u45ref_spec(void* _8974, void* kont8872, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9211 = alloc_kont(lam8972_spec, 3);

//setting env list
clo9211[1] = n;
clo9211[2] = kont8872;
clo9211[3] = lst;
void* f_lam_8876 = encode_clo(clo9211);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8876;
arg_buffer[3] = int9137;
arg_buffer[4] = n;
numArgs = 4;
_u61_fptr();
}

inline void lam8975_fptr() // lam8975 -> generic version 
{
//reading env
void* const env8976 = arg_buffer[1];
//reading env and args
void* const xy8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8976);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8975_spec(void* env8976, void* xy8794) // lam8975 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8976);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8977_fptr() // lam8977 -> generic version 
{
//reading env
void* const env8978 = arg_buffer[1];
//reading env and args
void* const xy8795 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8978);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8795);
}

inline void lam8977_spec(void* env8978, void* xy8795) // lam8977 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8978);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8795);
}

inline void lam8979_fptr() // lam8979 -> generic version 
{
//reading env
void* const env8980 = arg_buffer[1];
//reading env and args
void* const id_8800 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8980);

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[1], id_8800);
}

inline void lam8979_spec(void* env8980, void* id_8800) // lam8979 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8980);

//clo-app
member_spec(member, decode_clo_array[2], decode_clo_array[1], id_8800);
}

inline void lam8981_fptr() // lam8981 -> generic version 
{
//reading env
void* const env8982 = arg_buffer[1];
//reading env and args
void* const id_8799 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8982);

//if-clause
if(is_true(id_8799))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9212 = alloc_kont(lam8979_spec, 2);

//setting env list
clo9212[1] = decode_clo_array[1];
clo9212[2] = decode_clo_array[3];
void* f_lam_8878 = encode_clo(clo9212);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8878;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8981_spec(void* env8982, void* id_8799) // lam8981 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8982);

//if-clause
if(is_true(id_8799))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//creating new make-kont closure
void** clo9213 = alloc_kont(lam8979_spec, 2);

//setting env list
clo9213[1] = decode_clo_array[1];
clo9213[2] = decode_clo_array[3];
void* f_lam_8878 = encode_clo(clo9213);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8878;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8983_fptr() // lam8983 -> generic version 
{
//reading env
void* const env8984 = arg_buffer[1];
//reading env and args
void* const id_8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//creating new make-kont closure
void** clo9214 = alloc_kont(lam8981_spec, 3);

//setting env list
clo9214[1] = decode_clo_array[1];
clo9214[2] = decode_clo_array[2];
clo9214[3] = decode_clo_array[3];
void* f_lam_8879 = encode_clo(clo9214);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8879;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8798;
numArgs = 4;
equal_u63_fptr();
}

inline void lam8983_spec(void* env8984, void* id_8798) // lam8983 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8984);

//creating new make-kont closure
void** clo9215 = alloc_kont(lam8981_spec, 3);

//setting env list
clo9215[1] = decode_clo_array[1];
clo9215[2] = decode_clo_array[2];
clo9215[3] = decode_clo_array[3];
void* f_lam_8879 = encode_clo(clo9215);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8879;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8798;
numArgs = 4;
equal_u63_fptr();
}

inline void lam8985_fptr() // lam8985 -> generic version 
{
//reading env
void* const env8986 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8986);

//if-clause
if(is_true(id_8796))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9134);
}
else
{

//creating new make-kont closure
void** clo9216 = alloc_kont(lam8983_spec, 3);

//setting env list
clo9216[1] = decode_clo_array[1];
clo9216[2] = decode_clo_array[2];
clo9216[3] = decode_clo_array[3];
void* f_lam_8880 = encode_clo(clo9216);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8880;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam8985_spec(void* env8986, void* id_8796) // lam8985 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8986);

//if-clause
if(is_true(id_8796))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9134);
}
else
{

//creating new make-kont closure
void** clo9217 = alloc_kont(lam8983_spec, 3);

//setting env list
clo9217[1] = decode_clo_array[1];
clo9217[2] = decode_clo_array[2];
clo9217[3] = decode_clo_array[3];
void* f_lam_8880 = encode_clo(clo9217);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8880;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam8987_fptr() // lam8987 -> generic version 
{
//reading env
void* const env8988 = arg_buffer[1];
//reading env and args
void* const id_8793 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8988);

//creating new make-kont closure
void** clo9218 = alloc_kont(lam8985_spec, 3);

//setting env list
clo9218[1] = decode_clo_array[1];
clo9218[2] = decode_clo_array[2];
clo9218[3] = decode_clo_array[3];
void* f_lam_8881 = encode_clo(clo9218);



//if-clause
if(is_true(id_8793))
{

//creating new make-kont closure
void** clo9219 = alloc_kont(lam8975_spec, 1);

//setting env list
clo9219[1] = f_lam_8881;
void* f_lam_8882 = encode_clo(clo9219);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8882;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
null_u63_fptr();
}
else
{

//creating new make-kont closure
void** clo9220 = alloc_kont(lam8977_spec, 1);

//setting env list
clo9220[1] = f_lam_8881;
void* f_lam_8883 = encode_clo(clo9220);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8883;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
null_u63_fptr();
}

}

inline void lam8987_spec(void* env8988, void* id_8793) // lam8987 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8988);

//creating new make-kont closure
void** clo9221 = alloc_kont(lam8985_spec, 3);

//setting env list
clo9221[1] = decode_clo_array[1];
clo9221[2] = decode_clo_array[2];
clo9221[3] = decode_clo_array[3];
void* f_lam_8881 = encode_clo(clo9221);



//if-clause
if(is_true(id_8793))
{

//creating new make-kont closure
void** clo9222 = alloc_kont(lam8975_spec, 1);

//setting env list
clo9222[1] = f_lam_8881;
void* f_lam_8882 = encode_clo(clo9222);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8882;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
null_u63_fptr();
}
else
{

//creating new make-kont closure
void** clo9223 = alloc_kont(lam8977_spec, 1);

//setting env list
clo9223[1] = f_lam_8881;
void* f_lam_8883 = encode_clo(clo9223);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8883;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
null_u63_fptr();
}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8877 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9224 = alloc_kont(lam8987_spec, 3);

//setting env list
clo9224[1] = item;
clo9224[2] = lst;
clo9224[3] = kont8877;
void* f_lam_8884 = encode_clo(clo9224);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8884;
arg_buffer[3] = item;
numArgs = 3;
null_u63_fptr();
}

inline void member_spec(void* _8989, void* kont8877, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9225 = alloc_kont(lam8987_spec, 3);

//setting env list
clo9225[1] = item;
clo9225[2] = lst;
clo9225[3] = kont8877;
void* f_lam_8884 = encode_clo(clo9225);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8884;
arg_buffer[3] = item;
numArgs = 3;
null_u63_fptr();
}

inline void lam8990_fptr() // lam8990 -> generic version 
{
//reading env
void* const env8991 = arg_buffer[1];
//reading env and args
void* const id_8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//clo-app
member_u63_spec(member_u63, decode_clo_array[2], decode_clo_array[1], id_8806);
}

inline void lam8990_spec(void* env8991, void* id_8806) // lam8990 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8991);

//clo-app
member_u63_spec(member_u63, decode_clo_array[2], decode_clo_array[1], id_8806);
}

inline void lam8992_fptr() // lam8992 -> generic version 
{
//reading env
void* const env8993 = arg_buffer[1];
//reading env and args
void* const id_8804 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8993);

//if-clause
if(is_true(id_8804))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_t9133);
}
else
{

//creating new make-kont closure
void** clo9226 = alloc_kont(lam8990_spec, 2);

//setting env list
clo9226[1] = decode_clo_array[1];
clo9226[2] = decode_clo_array[2];
void* f_lam_8886 = encode_clo(clo9226);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8886;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8992_spec(void* env8993, void* id_8804) // lam8992 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8993);

//if-clause
if(is_true(id_8804))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_t9133);
}
else
{

//creating new make-kont closure
void** clo9227 = alloc_kont(lam8990_spec, 2);

//setting env list
clo9227[1] = decode_clo_array[1];
clo9227[2] = decode_clo_array[2];
void* f_lam_8886 = encode_clo(clo9227);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8886;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam8994_fptr() // lam8994 -> generic version 
{
//reading env
void* const env8995 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8995);

//creating new make-kont closure
void** clo9228 = alloc_kont(lam8992_spec, 3);

//setting env list
clo9228[1] = decode_clo_array[1];
clo9228[2] = decode_clo_array[2];
clo9228[3] = decode_clo_array[3];
void* f_lam_8887 = encode_clo(clo9228);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8887;
arg_buffer[3] = id_8803;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
equal_u63_fptr();
}

inline void lam8994_spec(void* env8995, void* id_8803) // lam8994 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8995);

//creating new make-kont closure
void** clo9229 = alloc_kont(lam8992_spec, 3);

//setting env list
clo9229[1] = decode_clo_array[1];
clo9229[2] = decode_clo_array[2];
clo9229[3] = decode_clo_array[3];
void* f_lam_8887 = encode_clo(clo9229);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f_lam_8887;
arg_buffer[3] = id_8803;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
equal_u63_fptr();
}

inline void lam8996_fptr() // lam8996 -> generic version 
{
//reading env
void* const env8997 = arg_buffer[1];
//reading env and args
void* const id_8801 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8997);

//if-clause
if(is_true(id_8801))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9134);
}
else
{

//creating new make-kont closure
void** clo9230 = alloc_kont(lam8994_spec, 3);

//setting env list
clo9230[1] = decode_clo_array[1];
clo9230[2] = decode_clo_array[2];
clo9230[3] = decode_clo_array[3];
void* f_lam_8888 = encode_clo(clo9230);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8888;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam8996_spec(void* env8997, void* id_8801) // lam8996 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8997);

//if-clause
if(is_true(id_8801))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f9134);
}
else
{

//creating new make-kont closure
void** clo9231 = alloc_kont(lam8994_spec, 3);

//setting env list
clo9231[1] = decode_clo_array[1];
clo9231[2] = decode_clo_array[2];
clo9231[3] = decode_clo_array[3];
void* f_lam_8888 = encode_clo(clo9231);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8888;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8885 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9232 = alloc_kont(lam8996_spec, 3);

//setting env list
clo9232[1] = x;
clo9232[2] = kont8885;
clo9232[3] = lst;
void* f_lam_8889 = encode_clo(clo9232);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8889;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void member_u63_spec(void* _8998, void* kont8885, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9233 = alloc_kont(lam8996_spec, 3);

//setting env list
clo9233[1] = x;
clo9233[2] = kont8885;
clo9233[3] = lst;
void* f_lam_8889 = encode_clo(clo9233);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8889;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam8999_fptr() // lam8999 -> generic version 
{
//reading env
void* const env9000 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8811;
numArgs = 4;
_u43_fptr();
}

inline void lam8999_spec(void* env9000, void* id_8811) // lam8999 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9000);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8811;
numArgs = 4;
_u43_fptr();
}

inline void lam9001_fptr() // lam9001 -> generic version 
{
//reading env
void* const env9002 = arg_buffer[1];
//reading env and args
void* const id_8810 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9002);

//creating new make-kont closure
void** clo9234 = alloc_kont(lam8999_spec, 2);

//setting env list
clo9234[1] = decode_clo_array[1];
clo9234[2] = decode_clo_array[2];
void* f_lam_8891 = encode_clo(clo9234);



//clo-app
length_spec(length, f_lam_8891, id_8810);
}

inline void lam9001_spec(void* env9002, void* id_8810) // lam9001 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9002);

//creating new make-kont closure
void** clo9235 = alloc_kont(lam8999_spec, 2);

//setting env list
clo9235[1] = decode_clo_array[1];
clo9235[2] = decode_clo_array[2];
void* f_lam_8891 = encode_clo(clo9235);



//clo-app
length_spec(length, f_lam_8891, id_8810);
}

inline void lam9003_fptr() // lam9003 -> generic version 
{
//reading env
void* const env9004 = arg_buffer[1];
//reading env and args
void* const id_8807 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9004);

//if-clause
if(is_true(id_8807))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], int9137);
}
else
{

//creating new make-kont closure
void** clo9236 = alloc_kont(lam9001_spec, 2);

//setting env list
clo9236[1] = decode_clo_array[1];
clo9236[2] = int9138;
void* f_lam_8892 = encode_clo(clo9236);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8892;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9003_spec(void* env9004, void* id_8807) // lam9003 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9004);

//if-clause
if(is_true(id_8807))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], int9137);
}
else
{

//creating new make-kont closure
void** clo9237 = alloc_kont(lam9001_spec, 2);

//setting env list
clo9237[1] = decode_clo_array[1];
clo9237[2] = int9138;
void* f_lam_8892 = encode_clo(clo9237);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8892;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8890 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9238 = alloc_kont(lam9003_spec, 2);

//setting env list
clo9238[1] = kont8890;
clo9238[2] = lst;
void* f_lam_8893 = encode_clo(clo9238);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8893;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void length_spec(void* _9005, void* kont8890, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9239 = alloc_kont(lam9003_spec, 2);

//setting env list
clo9239[1] = kont8890;
clo9239[2] = lst;
void* f_lam_8893 = encode_clo(clo9239);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8893;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9006_fptr() // lam9006 -> generic version 
{
//reading env
void* const env9007 = arg_buffer[1];
//reading env and args
void* const xy8813 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9007);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam9006_spec(void* env9007, void* xy8813) // lam9006 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9007);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam9008_fptr() // lam9008 -> generic version 
{
//reading env
void* const env9009 = arg_buffer[1];
//reading env and args
void* const id_8817 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9009);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8817;
numArgs = 4;
cons_fptr();
}

inline void lam9008_spec(void* env9009, void* id_8817) // lam9008 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9009);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8817;
numArgs = 4;
cons_fptr();
}

inline void lam9010_fptr() // lam9010 -> generic version 
{
//reading env
void* const env9011 = arg_buffer[1];
//reading env and args
void* const id_8816 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9011);

//creating new make-kont closure
void** clo9240 = alloc_kont(lam9008_spec, 2);

//setting env list
clo9240[1] = decode_clo_array[2];
clo9240[2] = decode_clo_array[3];
void* f_lam_8896 = encode_clo(clo9240);



//clo-app
map_spec(map, f_lam_8896, decode_clo_array[1], id_8816);
}

inline void lam9010_spec(void* env9011, void* id_8816) // lam9010 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9011);

//creating new make-kont closure
void** clo9241 = alloc_kont(lam9008_spec, 2);

//setting env list
clo9241[1] = decode_clo_array[2];
clo9241[2] = decode_clo_array[3];
void* f_lam_8896 = encode_clo(clo9241);



//clo-app
map_spec(map, f_lam_8896, decode_clo_array[1], id_8816);
}

inline void lam9012_fptr() // lam9012 -> generic version 
{
//reading env
void* const env9013 = arg_buffer[1];
//reading env and args
void* const id_8815 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9013);

//creating new make-kont closure
void** clo9242 = alloc_kont(lam9010_spec, 3);

//setting env list
clo9242[1] = decode_clo_array[1];
clo9242[2] = id_8815;
clo9242[3] = decode_clo_array[3];
void* f_lam_8897 = encode_clo(clo9242);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8897;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9012_spec(void* env9013, void* id_8815) // lam9012 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9013);

//creating new make-kont closure
void** clo9243 = alloc_kont(lam9010_spec, 3);

//setting env list
clo9243[1] = decode_clo_array[1];
clo9243[2] = id_8815;
clo9243[3] = decode_clo_array[3];
void* f_lam_8897 = encode_clo(clo9243);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8897;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9014_fptr() // lam9014 -> generic version 
{
//reading env
void* const env9015 = arg_buffer[1];
//reading env and args
void* const id_8814 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9015);

//creating new make-kont closure
void** clo9244 = alloc_kont(lam9012_spec, 3);

//setting env list
clo9244[1] = decode_clo_array[1];
clo9244[2] = decode_clo_array[2];
clo9244[3] = decode_clo_array[3];
void* f_lam_8898 = encode_clo(clo9244);



//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = f_lam_8898;
arg_buffer[3] = id_8814;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9014_spec(void* env9015, void* id_8814) // lam9014 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9015);

//creating new make-kont closure
void** clo9245 = alloc_kont(lam9012_spec, 3);

//setting env list
clo9245[1] = decode_clo_array[1];
clo9245[2] = decode_clo_array[2];
clo9245[3] = decode_clo_array[3];
void* f_lam_8898 = encode_clo(clo9245);



//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = f_lam_8898;
arg_buffer[3] = id_8814;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9016_fptr() // lam9016 -> generic version 
{
//reading env
void* const env9017 = arg_buffer[1];
//reading env and args
void* const id_8812 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9017);

//if-clause
if(is_true(id_8812))
{

//creating new make-kont closure
void** clo9246 = alloc_kont(lam9006_spec, 1);

//setting env list
clo9246[1] = decode_clo_array[3];
void* f_lam_8895 = encode_clo(clo9246);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8895;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9247 = alloc_kont(lam9014_spec, 3);

//setting env list
clo9247[1] = decode_clo_array[1];
clo9247[2] = decode_clo_array[2];
clo9247[3] = decode_clo_array[3];
void* f_lam_8899 = encode_clo(clo9247);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8899;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void lam9016_spec(void* env9017, void* id_8812) // lam9016 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9017);

//if-clause
if(is_true(id_8812))
{

//creating new make-kont closure
void** clo9248 = alloc_kont(lam9006_spec, 1);

//setting env list
clo9248[1] = decode_clo_array[3];
void* f_lam_8895 = encode_clo(clo9248);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8895;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9249 = alloc_kont(lam9014_spec, 3);

//setting env list
clo9249[1] = decode_clo_array[1];
clo9249[2] = decode_clo_array[2];
clo9249[3] = decode_clo_array[3];
void* f_lam_8899 = encode_clo(clo9249);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8899;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
car_fptr();
}

}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8894 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9250 = alloc_kont(lam9016_spec, 3);

//setting env list
clo9250[1] = proc;
clo9250[2] = lst;
clo9250[3] = kont8894;
void* f_lam_8900 = encode_clo(clo9250);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8900;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void map_spec(void* _9018, void* kont8894, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9251 = alloc_kont(lam9016_spec, 3);

//setting env list
clo9251[1] = proc;
clo9251[2] = lst;
clo9251[3] = kont8894;
void* f_lam_8900 = encode_clo(clo9251);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8900;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9019_fptr() // lam9019 -> generic version 
{
//reading env
void* const env9020 = arg_buffer[1];
//reading env and args
void* const xy8819 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9020);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void lam9019_spec(void* env9020, void* xy8819) // lam9019 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9020);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8819);
}

inline void lam9021_fptr() // lam9021 -> generic version 
{
//reading env
void* const env9022 = arg_buffer[1];
//reading env and args
void* const id_8824 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9022);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8824;
numArgs = 4;
cons_fptr();
}

inline void lam9021_spec(void* env9022, void* id_8824) // lam9021 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9022);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8824;
numArgs = 4;
cons_fptr();
}

inline void lam9023_fptr() // lam9023 -> generic version 
{
//reading env
void* const env9024 = arg_buffer[1];
//reading env and args
void* const id_8823 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9024);

//creating new make-kont closure
void** clo9252 = alloc_kont(lam9021_spec, 2);

//setting env list
clo9252[1] = decode_clo_array[1];
clo9252[2] = decode_clo_array[2];
void* f_lam_8903 = encode_clo(clo9252);



//clo-app
filter_spec(filter, f_lam_8903, decode_clo_array[3], id_8823);
}

inline void lam9023_spec(void* env9024, void* id_8823) // lam9023 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9024);

//creating new make-kont closure
void** clo9253 = alloc_kont(lam9021_spec, 2);

//setting env list
clo9253[1] = decode_clo_array[1];
clo9253[2] = decode_clo_array[2];
void* f_lam_8903 = encode_clo(clo9253);



//clo-app
filter_spec(filter, f_lam_8903, decode_clo_array[3], id_8823);
}

inline void lam9025_fptr() // lam9025 -> generic version 
{
//reading env
void* const env9026 = arg_buffer[1];
//reading env and args
void* const id_8822 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9026);

//creating new make-kont closure
void** clo9254 = alloc_kont(lam9023_spec, 3);

//setting env list
clo9254[1] = id_8822;
clo9254[2] = decode_clo_array[1];
clo9254[3] = decode_clo_array[2];
void* f_lam_8904 = encode_clo(clo9254);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8904;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9025_spec(void* env9026, void* id_8822) // lam9025 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9026);

//creating new make-kont closure
void** clo9255 = alloc_kont(lam9023_spec, 3);

//setting env list
clo9255[1] = id_8822;
clo9255[2] = decode_clo_array[1];
clo9255[3] = decode_clo_array[2];
void* f_lam_8904 = encode_clo(clo9255);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8904;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9027_fptr() // lam9027 -> generic version 
{
//reading env
void* const env9028 = arg_buffer[1];
//reading env and args
void* const id_8825 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9028);

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], id_8825);
}

inline void lam9027_spec(void* env9028, void* id_8825) // lam9027 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9028);

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], id_8825);
}

inline void lam9029_fptr() // lam9029 -> generic version 
{
//reading env
void* const env9030 = arg_buffer[1];
//reading env and args
void* const id_8821 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9030);

//if-clause
if(is_true(id_8821))
{

//creating new make-kont closure
void** clo9256 = alloc_kont(lam9025_spec, 3);

//setting env list
clo9256[1] = decode_clo_array[1];
clo9256[2] = decode_clo_array[2];
clo9256[3] = decode_clo_array[3];
void* f_lam_8905 = encode_clo(clo9256);



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
void** clo9257 = alloc_kont(lam9027_spec, 2);

//setting env list
clo9257[1] = decode_clo_array[1];
clo9257[2] = decode_clo_array[2];
void* f_lam_8906 = encode_clo(clo9257);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8906;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9029_spec(void* env9030, void* id_8821) // lam9029 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9030);

//if-clause
if(is_true(id_8821))
{

//creating new make-kont closure
void** clo9258 = alloc_kont(lam9025_spec, 3);

//setting env list
clo9258[1] = decode_clo_array[1];
clo9258[2] = decode_clo_array[2];
clo9258[3] = decode_clo_array[3];
void* f_lam_8905 = encode_clo(clo9258);



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
void** clo9259 = alloc_kont(lam9027_spec, 2);

//setting env list
clo9259[1] = decode_clo_array[1];
clo9259[2] = decode_clo_array[2];
void* f_lam_8906 = encode_clo(clo9259);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8906;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

}

inline void lam9031_fptr() // lam9031 -> generic version 
{
//reading env
void* const env9032 = arg_buffer[1];
//reading env and args
void* const id_8820 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9032);

//creating new make-kont closure
void** clo9260 = alloc_kont(lam9029_spec, 3);

//setting env list
clo9260[1] = decode_clo_array[1];
clo9260[2] = decode_clo_array[2];
clo9260[3] = decode_clo_array[3];
void* f_lam_8907 = encode_clo(clo9260);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_8907;
arg_buffer[3] = id_8820;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9031_spec(void* env9032, void* id_8820) // lam9031 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9032);

//creating new make-kont closure
void** clo9261 = alloc_kont(lam9029_spec, 3);

//setting env list
clo9261[1] = decode_clo_array[1];
clo9261[2] = decode_clo_array[2];
clo9261[3] = decode_clo_array[3];
void* f_lam_8907 = encode_clo(clo9261);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_8907;
arg_buffer[3] = id_8820;
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9033_fptr() // lam9033 -> generic version 
{
//reading env
void* const env9034 = arg_buffer[1];
//reading env and args
void* const id_8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9034);

//if-clause
if(is_true(id_8818))
{

//creating new make-kont closure
void** clo9262 = alloc_kont(lam9019_spec, 1);

//setting env list
clo9262[1] = decode_clo_array[1];
void* f_lam_8902 = encode_clo(clo9262);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8902;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9263 = alloc_kont(lam9031_spec, 3);

//setting env list
clo9263[1] = decode_clo_array[1];
clo9263[2] = decode_clo_array[2];
clo9263[3] = decode_clo_array[3];
void* f_lam_8908 = encode_clo(clo9263);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8908;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9033_spec(void* env9034, void* id_8818) // lam9033 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9034);

//if-clause
if(is_true(id_8818))
{

//creating new make-kont closure
void** clo9264 = alloc_kont(lam9019_spec, 1);

//setting env list
clo9264[1] = decode_clo_array[1];
void* f_lam_8902 = encode_clo(clo9264);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8902;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9265 = alloc_kont(lam9031_spec, 3);

//setting env list
clo9265[1] = decode_clo_array[1];
clo9265[2] = decode_clo_array[2];
clo9265[3] = decode_clo_array[3];
void* f_lam_8908 = encode_clo(clo9265);



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
void* const kont8901 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9266 = alloc_kont(lam9033_spec, 3);

//setting env list
clo9266[1] = kont8901;
clo9266[2] = op;
clo9266[3] = lst;
void* f_lam_8909 = encode_clo(clo9266);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8909;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void filter_spec(void* _9035, void* kont8901, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9267 = alloc_kont(lam9033_spec, 3);

//setting env list
clo9267[1] = kont8901;
clo9267[2] = op;
clo9267[3] = lst;
void* f_lam_8909 = encode_clo(clo9267);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8909;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9036_fptr() // lam9036 -> generic version 
{
//reading env
void* const env9037 = arg_buffer[1];
//reading env and args
void* const id_8829 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9037);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], id_8829);
}

inline void lam9036_spec(void* env9037, void* id_8829) // lam9036 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9037);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], decode_clo_array[3], id_8829);
}

inline void lam9038_fptr() // lam9038 -> generic version 
{
//reading env
void* const env9039 = arg_buffer[1];
//reading env and args
void* const id_8828 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9039);

//creating new make-kont closure
void** clo9268 = alloc_kont(lam9036_spec, 3);

//setting env list
clo9268[1] = decode_clo_array[1];
clo9268[2] = decode_clo_array[3];
clo9268[3] = id_8828;
void* f_lam_8911 = encode_clo(clo9268);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8911;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9038_spec(void* env9039, void* id_8828) // lam9038 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9039);

//creating new make-kont closure
void** clo9269 = alloc_kont(lam9036_spec, 3);

//setting env list
clo9269[1] = decode_clo_array[1];
clo9269[2] = decode_clo_array[3];
clo9269[3] = id_8828;
void* f_lam_8911 = encode_clo(clo9269);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8911;
arg_buffer[3] = decode_clo_array[2];
numArgs = 3;
cdr_fptr();
}

inline void lam9040_fptr() // lam9040 -> generic version 
{
//reading env
void* const env9041 = arg_buffer[1];
//reading env and args
void* const id_8827 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9041);

//creating new make-kont closure
void** clo9270 = alloc_kont(lam9038_spec, 3);

//setting env list
clo9270[1] = decode_clo_array[2];
clo9270[2] = decode_clo_array[3];
clo9270[3] = decode_clo_array[4];
void* f_lam_8912 = encode_clo(clo9270);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_8912;
arg_buffer[3] = id_8827;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9040_spec(void* env9041, void* id_8827) // lam9040 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9041);

//creating new make-kont closure
void** clo9271 = alloc_kont(lam9038_spec, 3);

//setting env list
clo9271[1] = decode_clo_array[2];
clo9271[2] = decode_clo_array[3];
clo9271[3] = decode_clo_array[4];
void* f_lam_8912 = encode_clo(clo9271);



//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = f_lam_8912;
arg_buffer[3] = id_8827;
arg_buffer[4] = decode_clo_array[1];
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9042_fptr() // lam9042 -> generic version 
{
//reading env
void* const env9043 = arg_buffer[1];
//reading env and args
void* const id_8826 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9043);

//if-clause
if(is_true(id_8826))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9272 = alloc_kont(lam9040_spec, 4);

//setting env list
clo9272[1] = decode_clo_array[1];
clo9272[2] = decode_clo_array[2];
clo9272[3] = decode_clo_array[3];
clo9272[4] = decode_clo_array[4];
void* f_lam_8913 = encode_clo(clo9272);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8913;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9042_spec(void* env9043, void* id_8826) // lam9042 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9043);

//if-clause
if(is_true(id_8826))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[4])[0])(decode_clo_array[4], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9273 = alloc_kont(lam9040_spec, 4);

//setting env list
clo9273[1] = decode_clo_array[1];
clo9273[2] = decode_clo_array[2];
clo9273[3] = decode_clo_array[3];
clo9273[4] = decode_clo_array[4];
void* f_lam_8913 = encode_clo(clo9273);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8913;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8910 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9274 = alloc_kont(lam9042_spec, 4);

//setting env list
clo9274[1] = acc;
clo9274[2] = fun;
clo9274[3] = lst;
clo9274[4] = kont8910;
void* f_lam_8914 = encode_clo(clo9274);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8914;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void foldl_spec(void* _9044, void* kont8910, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9275 = alloc_kont(lam9042_spec, 4);

//setting env list
clo9275[1] = acc;
clo9275[2] = fun;
clo9275[3] = lst;
clo9275[4] = kont8910;
void* f_lam_8914 = encode_clo(clo9275);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8914;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9045_fptr() // lam9045 -> generic version 
{
//reading env
void* const env9046 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9046);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8833;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9045_spec(void* env9046, void* id_8833) // lam9045 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9046);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8833;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam9047_fptr() // lam9047 -> generic version 
{
//reading env
void* const env9048 = arg_buffer[1];
//reading env and args
void* const id_8832 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9048);

//creating new make-kont closure
void** clo9276 = alloc_kont(lam9045_spec, 3);

//setting env list
clo9276[1] = decode_clo_array[2];
clo9276[2] = decode_clo_array[3];
clo9276[3] = decode_clo_array[4];
void* f_lam_8916 = encode_clo(clo9276);



//clo-app
foldr_spec(foldr, f_lam_8916, decode_clo_array[2], decode_clo_array[1], id_8832);
}

inline void lam9047_spec(void* env9048, void* id_8832) // lam9047 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9048);

//creating new make-kont closure
void** clo9277 = alloc_kont(lam9045_spec, 3);

//setting env list
clo9277[1] = decode_clo_array[2];
clo9277[2] = decode_clo_array[3];
clo9277[3] = decode_clo_array[4];
void* f_lam_8916 = encode_clo(clo9277);



//clo-app
foldr_spec(foldr, f_lam_8916, decode_clo_array[2], decode_clo_array[1], id_8832);
}

inline void lam9049_fptr() // lam9049 -> generic version 
{
//reading env
void* const env9050 = arg_buffer[1];
//reading env and args
void* const id_8831 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9050);

//creating new make-kont closure
void** clo9278 = alloc_kont(lam9047_spec, 4);

//setting env list
clo9278[1] = decode_clo_array[1];
clo9278[2] = decode_clo_array[2];
clo9278[3] = decode_clo_array[3];
clo9278[4] = id_8831;
void* f_lam_8917 = encode_clo(clo9278);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8917;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
cdr_fptr();
}

inline void lam9049_spec(void* env9050, void* id_8831) // lam9049 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9050);

//creating new make-kont closure
void** clo9279 = alloc_kont(lam9047_spec, 4);

//setting env list
clo9279[1] = decode_clo_array[1];
clo9279[2] = decode_clo_array[2];
clo9279[3] = decode_clo_array[3];
clo9279[4] = id_8831;
void* f_lam_8917 = encode_clo(clo9279);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8917;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
cdr_fptr();
}

inline void lam9051_fptr() // lam9051 -> generic version 
{
//reading env
void* const env9052 = arg_buffer[1];
//reading env and args
void* const id_8830 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9052);

//if-clause
if(is_true(id_8830))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9280 = alloc_kont(lam9049_spec, 4);

//setting env list
clo9280[1] = decode_clo_array[1];
clo9280[2] = decode_clo_array[2];
clo9280[3] = decode_clo_array[3];
clo9280[4] = decode_clo_array[4];
void* f_lam_8918 = encode_clo(clo9280);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8918;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
car_fptr();
}

}

inline void lam9051_spec(void* env9052, void* id_8830) // lam9051 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9052);

//if-clause
if(is_true(id_8830))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9281 = alloc_kont(lam9049_spec, 4);

//setting env list
clo9281[1] = decode_clo_array[1];
clo9281[2] = decode_clo_array[2];
clo9281[3] = decode_clo_array[3];
clo9281[4] = decode_clo_array[4];
void* f_lam_8918 = encode_clo(clo9281);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8918;
arg_buffer[3] = decode_clo_array[4];
numArgs = 3;
car_fptr();
}

}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8915 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9282 = alloc_kont(lam9051_spec, 4);

//setting env list
clo9282[1] = acc;
clo9282[2] = fun;
clo9282[3] = kont8915;
clo9282[4] = lst;
void* f_lam_8919 = encode_clo(clo9282);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8919;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void foldr_spec(void* _9053, void* kont8915, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9283 = alloc_kont(lam9051_spec, 4);

//setting env list
clo9283[1] = acc;
clo9283[2] = fun;
clo9283[3] = kont8915;
clo9283[4] = lst;
void* f_lam_8919 = encode_clo(clo9283);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8919;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9054_fptr() // lam9054 -> generic version 
{
//reading env
void* const env9055 = arg_buffer[1];
//reading env and args
void* const id_8837 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9055);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8837;
numArgs = 4;
cons_fptr();
}

inline void lam9054_spec(void* env9055, void* id_8837) // lam9054 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9055);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8837;
numArgs = 4;
cons_fptr();
}

inline void lam9056_fptr() // lam9056 -> generic version 
{
//reading env
void* const env9057 = arg_buffer[1];
//reading env and args
void* const id_8836 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9057);

//creating new make-kont closure
void** clo9284 = alloc_kont(lam9054_spec, 2);

//setting env list
clo9284[1] = decode_clo_array[2];
clo9284[2] = decode_clo_array[3];
void* f_lam_8921 = encode_clo(clo9284);



//clo-app
append1_spec(append1, f_lam_8921, id_8836, decode_clo_array[1]);
}

inline void lam9056_spec(void* env9057, void* id_8836) // lam9056 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9057);

//creating new make-kont closure
void** clo9285 = alloc_kont(lam9054_spec, 2);

//setting env list
clo9285[1] = decode_clo_array[2];
clo9285[2] = decode_clo_array[3];
void* f_lam_8921 = encode_clo(clo9285);



//clo-app
append1_spec(append1, f_lam_8921, id_8836, decode_clo_array[1]);
}

inline void lam9058_fptr() // lam9058 -> generic version 
{
//reading env
void* const env9059 = arg_buffer[1];
//reading env and args
void* const id_8835 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9059);

//creating new make-kont closure
void** clo9286 = alloc_kont(lam9056_spec, 3);

//setting env list
clo9286[1] = decode_clo_array[1];
clo9286[2] = decode_clo_array[2];
clo9286[3] = id_8835;
void* f_lam_8922 = encode_clo(clo9286);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8922;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9058_spec(void* env9059, void* id_8835) // lam9058 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9059);

//creating new make-kont closure
void** clo9287 = alloc_kont(lam9056_spec, 3);

//setting env list
clo9287[1] = decode_clo_array[1];
clo9287[2] = decode_clo_array[2];
clo9287[3] = id_8835;
void* f_lam_8922 = encode_clo(clo9287);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8922;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9060_fptr() // lam9060 -> generic version 
{
//reading env
void* const env9061 = arg_buffer[1];
//reading env and args
void* const id_8834 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9061);

//if-clause
if(is_true(id_8834))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9288 = alloc_kont(lam9058_spec, 3);

//setting env list
clo9288[1] = decode_clo_array[1];
clo9288[2] = decode_clo_array[2];
clo9288[3] = decode_clo_array[3];
void* f_lam_8923 = encode_clo(clo9288);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8923;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9060_spec(void* env9061, void* id_8834) // lam9060 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9061);

//if-clause
if(is_true(id_8834))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9289 = alloc_kont(lam9058_spec, 3);

//setting env list
clo9289[1] = decode_clo_array[1];
clo9289[2] = decode_clo_array[2];
clo9289[3] = decode_clo_array[3];
void* f_lam_8923 = encode_clo(clo9289);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8923;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8920 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9290 = alloc_kont(lam9060_spec, 3);

//setting env list
clo9290[1] = rhs;
clo9290[2] = kont8920;
clo9290[3] = lhs;
void* f_lam_8924 = encode_clo(clo9290);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8924;
arg_buffer[3] = lhs;
numArgs = 3;
null_u63_fptr();
}

inline void append1_spec(void* _9062, void* kont8920, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9291 = alloc_kont(lam9060_spec, 3);

//setting env list
clo9291[1] = rhs;
clo9291[2] = kont8920;
clo9291[3] = lhs;
void* f_lam_8924 = encode_clo(clo9291);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8924;
arg_buffer[3] = lhs;
numArgs = 3;
null_u63_fptr();
}

inline void lam9063_fptr() // lam9063 -> generic version 
{
//reading env
void* const env9064 = arg_buffer[1];
//reading env and args
void* const xy8839 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9064);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8839);
}

inline void lam9063_spec(void* env9064, void* xy8839) // lam9063 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9064);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8839);
}

inline void lam9065_fptr() // lam9065 -> generic version 
{
//reading env
void* const env9066 = arg_buffer[1];
//reading env and args
void* const id_8842 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9066);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8842);
}

inline void lam9065_spec(void* env9066, void* id_8842) // lam9065 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9066);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8842);
}

inline void lam9067_fptr() // lam9067 -> generic version 
{
//reading env
void* const env9068 = arg_buffer[1];
//reading env and args
void* const id_8841 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9068);

//creating new make-kont closure
void** clo9292 = alloc_kont(lam9065_spec, 2);

//setting env list
clo9292[1] = decode_clo_array[2];
clo9292[2] = decode_clo_array[3];
void* f_lam_8927 = encode_clo(clo9292);



//clo-app
append1_spec(append1, f_lam_8927, id_8841, decode_clo_array[1]);
}

inline void lam9067_spec(void* env9068, void* id_8841) // lam9067 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9068);

//creating new make-kont closure
void** clo9293 = alloc_kont(lam9065_spec, 2);

//setting env list
clo9293[1] = decode_clo_array[2];
clo9293[2] = decode_clo_array[3];
void* f_lam_8927 = encode_clo(clo9293);



//clo-app
append1_spec(append1, f_lam_8927, id_8841, decode_clo_array[1]);
}

inline void lam9069_fptr() // lam9069 -> generic version 
{
//reading env
void* const env9070 = arg_buffer[1];
//reading env and args
void* const id_8840 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9070);

//creating new make-kont closure
void** clo9294 = alloc_kont(lam9067_spec, 3);

//setting env list
clo9294[1] = decode_clo_array[1];
clo9294[2] = id_8840;
clo9294[3] = decode_clo_array[4];
void* f_lam_8928 = encode_clo(clo9294);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8928;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = decode_clo_array[3];
numArgs = 4;
list_fptr();
}

inline void lam9069_spec(void* env9070, void* id_8840) // lam9069 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9070);

//creating new make-kont closure
void** clo9295 = alloc_kont(lam9067_spec, 3);

//setting env list
clo9295[1] = decode_clo_array[1];
clo9295[2] = id_8840;
clo9295[3] = decode_clo_array[4];
void* f_lam_8928 = encode_clo(clo9295);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8928;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = decode_clo_array[3];
numArgs = 4;
list_fptr();
}

inline void lam9071_fptr() // lam9071 -> generic version 
{
//reading env
void* const env9072 = arg_buffer[1];
//reading env and args
void* const id_8838 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9072);

//if-clause
if(is_true(id_8838))
{

//creating new make-kont closure
void** clo9296 = alloc_kont(lam9063_spec, 1);

//setting env list
clo9296[1] = decode_clo_array[4];
void* f_lam_8926 = encode_clo(clo9296);



//clo-app
append1_spec(append1, f_lam_8926, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9297 = alloc_kont(lam9069_spec, 4);

//setting env list
clo9297[1] = decode_clo_array[1];
clo9297[2] = decode_clo_array[2];
clo9297[3] = decode_clo_array[3];
clo9297[4] = decode_clo_array[4];
void* f_lam_8929 = encode_clo(clo9297);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8929;
numArgs = 2;
list_fptr();
}

}

inline void lam9071_spec(void* env9072, void* id_8838) // lam9071 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9072);

//if-clause
if(is_true(id_8838))
{

//creating new make-kont closure
void** clo9298 = alloc_kont(lam9063_spec, 1);

//setting env list
clo9298[1] = decode_clo_array[4];
void* f_lam_8926 = encode_clo(clo9298);



//clo-app
append1_spec(append1, f_lam_8926, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9299 = alloc_kont(lam9069_spec, 4);

//setting env list
clo9299[1] = decode_clo_array[1];
clo9299[2] = decode_clo_array[2];
clo9299[3] = decode_clo_array[3];
clo9299[4] = decode_clo_array[4];
void* f_lam_8929 = encode_clo(clo9299);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8929;
numArgs = 2;
list_fptr();
}

}

inline void lam9073_fptr() // lam9073 -> generic version 
{
//reading env
void* const env9074 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9074);

//creating new make-kont closure
void** clo9300 = alloc_kont(lam9071_spec, 4);

//setting env list
clo9300[1] = lsts;
clo9300[2] = decode_clo_array[1];
clo9300[3] = decode_clo_array[2];
clo9300[4] = decode_clo_array[3];
void* f_lam_8930 = encode_clo(clo9300);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8930;
arg_buffer[3] = lsts;
numArgs = 3;
null_u63_fptr();
}

inline void lam9073_spec(void* env9074, void* lsts) // lam9073 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9074);

//creating new make-kont closure
void** clo9301 = alloc_kont(lam9071_spec, 4);

//setting env list
clo9301[1] = lsts;
clo9301[2] = decode_clo_array[1];
clo9301[3] = decode_clo_array[2];
clo9301[4] = decode_clo_array[3];
void* f_lam_8930 = encode_clo(clo9301);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8930;
arg_buffer[3] = lsts;
numArgs = 3;
null_u63_fptr();
}

inline void lam9075_fptr() // lam9075 -> generic version 
{
//reading env
void* const env9076 = arg_buffer[1];
//reading env and args
void* const vargs8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9076);

//creating new make-kont closure
void** clo9302 = alloc_kont(lam9073_spec, 3);

//setting env list
clo9302[1] = decode_clo_array[1];
clo9302[2] = decode_clo_array[2];
clo9302[3] = decode_clo_array[3];
void* f_lam_8931 = encode_clo(clo9302);


// kont-clo-app case
lam9073_spec(f_lam_8931, vargs8780);
}

inline void lam9075_spec(void* env9076, void* vargs8780) // lam9075 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9076);

//creating new make-kont closure
void** clo9303 = alloc_kont(lam9073_spec, 3);

//setting env list
clo9303[1] = decode_clo_array[1];
clo9303[2] = decode_clo_array[2];
clo9303[3] = decode_clo_array[3];
void* f_lam_8931 = encode_clo(clo9303);


// kont-clo-app case
lam9073_spec(f_lam_8931, vargs8780);
}

inline void lam9077_fptr() // lam9077 -> generic version 
{
//reading env
void* const env9078 = arg_buffer[1];
//reading env and args
void* const l2 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9078);

//creating new make-kont closure
void** clo9304 = alloc_kont(lam9075_spec, 3);

//setting env list
clo9304[1] = decode_clo_array[2];
clo9304[2] = l2;
clo9304[3] = decode_clo_array[3];
void* f_lam_8932 = encode_clo(clo9304);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8932;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9077_spec(void* env9078, void* l2) // lam9077 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9078);

//creating new make-kont closure
void** clo9305 = alloc_kont(lam9075_spec, 3);

//setting env list
clo9305[1] = decode_clo_array[2];
clo9305[2] = l2;
clo9305[3] = decode_clo_array[3];
void* f_lam_8932 = encode_clo(clo9305);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8932;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9079_fptr() // lam9079 -> generic version 
{
//reading env
void* const env9080 = arg_buffer[1];
//reading env and args
void* const vargs8779 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9080);

//creating new make-kont closure
void** clo9306 = alloc_kont(lam9077_spec, 3);

//setting env list
clo9306[1] = vargs8779;
clo9306[2] = decode_clo_array[1];
clo9306[3] = decode_clo_array[2];
void* f_lam_8933 = encode_clo(clo9306);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8933;
arg_buffer[3] = vargs8779;
numArgs = 3;
car_fptr();
}

inline void lam9079_spec(void* env9080, void* vargs8779) // lam9079 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9080);

//creating new make-kont closure
void** clo9307 = alloc_kont(lam9077_spec, 3);

//setting env list
clo9307[1] = vargs8779;
clo9307[2] = decode_clo_array[1];
clo9307[3] = decode_clo_array[2];
void* f_lam_8933 = encode_clo(clo9307);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8933;
arg_buffer[3] = vargs8779;
numArgs = 3;
car_fptr();
}

inline void lam9081_fptr() // lam9081 -> generic version 
{
//reading env
void* const env9082 = arg_buffer[1];
//reading env and args
void* const l1 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9082);

//creating new make-kont closure
void** clo9308 = alloc_kont(lam9079_spec, 2);

//setting env list
clo9308[1] = l1;
clo9308[2] = decode_clo_array[2];
void* f_lam_8934 = encode_clo(clo9308);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8934;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9081_spec(void* env9082, void* l1) // lam9081 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9082);

//creating new make-kont closure
void** clo9309 = alloc_kont(lam9079_spec, 2);

//setting env list
clo9309[1] = l1;
clo9309[2] = decode_clo_array[2];
void* f_lam_8934 = encode_clo(clo9309);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8934;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

void append_fptr() // append 
{
//reading env
void* const _9083 = arg_buffer[1];
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
void** clo9310 = alloc_kont(lam9081_spec, 2);

//setting env list
clo9310[1] = apply_prim_cdr_1(vargs);
clo9310[2] = apply_prim_car_1(vargs);
void* f_lam_8935 = encode_clo(clo9310);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8935;
arg_buffer[3] = apply_prim_cdr_1(vargs);
numArgs = 3;
car_fptr();
}

inline void lam9084_fptr() // lam9084 -> generic version 
{
//reading env
void* const env9085 = arg_buffer[1];
//reading env and args
void* const id_8845 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9085);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8845;
numArgs = 4;
cons_fptr();
}

inline void lam9084_spec(void* env9085, void* id_8845) // lam9084 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9085);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8845;
numArgs = 4;
cons_fptr();
}

inline void lam9086_fptr() // lam9086 -> generic version 
{
//reading env
void* const env9087 = arg_buffer[1];
//reading env and args
void* const id_8850 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9087);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8850;
numArgs = 4;
cons_fptr();
}

inline void lam9086_spec(void* env9087, void* id_8850) // lam9086 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9087);

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8850;
numArgs = 4;
cons_fptr();
}

inline void lam9088_fptr() // lam9088 -> generic version 
{
//reading env
void* const env9089 = arg_buffer[1];
//reading env and args
void* const id_8849 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9089);

//creating new make-kont closure
void** clo9311 = alloc_kont(lam9086_spec, 2);

//setting env list
clo9311[1] = decode_clo_array[1];
clo9311[2] = decode_clo_array[3];
void* f_lam_8938 = encode_clo(clo9311);



//clo-app
list_u45set_spec(list_u45set, f_lam_8938, decode_clo_array[2], id_8849, decode_clo_array[4]);
}

inline void lam9088_spec(void* env9089, void* id_8849) // lam9088 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9089);

//creating new make-kont closure
void** clo9312 = alloc_kont(lam9086_spec, 2);

//setting env list
clo9312[1] = decode_clo_array[1];
clo9312[2] = decode_clo_array[3];
void* f_lam_8938 = encode_clo(clo9312);



//clo-app
list_u45set_spec(list_u45set, f_lam_8938, decode_clo_array[2], id_8849, decode_clo_array[4]);
}

inline void lam9090_fptr() // lam9090 -> generic version 
{
//reading env
void* const env9091 = arg_buffer[1];
//reading env and args
void* const id_8847 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9091);

//creating new make-kont closure
void** clo9313 = alloc_kont(lam9088_spec, 4);

//setting env list
clo9313[1] = decode_clo_array[1];
clo9313[2] = id_8847;
clo9313[3] = decode_clo_array[3];
clo9313[4] = decode_clo_array[4];
void* f_lam_8939 = encode_clo(clo9313);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8939;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = int9138;
numArgs = 4;
_u45_fptr();
}

inline void lam9090_spec(void* env9091, void* id_8847) // lam9090 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9091);

//creating new make-kont closure
void** clo9314 = alloc_kont(lam9088_spec, 4);

//setting env list
clo9314[1] = decode_clo_array[1];
clo9314[2] = id_8847;
clo9314[3] = decode_clo_array[3];
clo9314[4] = decode_clo_array[4];
void* f_lam_8939 = encode_clo(clo9314);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8939;
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = int9138;
numArgs = 4;
_u45_fptr();
}

inline void lam9092_fptr() // lam9092 -> generic version 
{
//reading env
void* const env9093 = arg_buffer[1];
//reading env and args
void* const id_8846 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9093);

//creating new make-kont closure
void** clo9315 = alloc_kont(lam9090_spec, 4);

//setting env list
clo9315[1] = decode_clo_array[1];
clo9315[2] = decode_clo_array[2];
clo9315[3] = id_8846;
clo9315[4] = decode_clo_array[4];
void* f_lam_8940 = encode_clo(clo9315);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8940;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9092_spec(void* env9093, void* id_8846) // lam9092 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9093);

//creating new make-kont closure
void** clo9316 = alloc_kont(lam9090_spec, 4);

//setting env list
clo9316[1] = decode_clo_array[1];
clo9316[2] = decode_clo_array[2];
clo9316[3] = id_8846;
clo9316[4] = decode_clo_array[4];
void* f_lam_8940 = encode_clo(clo9316);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8940;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}

inline void lam9094_fptr() // lam9094 -> generic version 
{
//reading env
void* const env9095 = arg_buffer[1];
//reading env and args
void* const id_8844 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9095);

//if-clause
if(is_true(id_8844))
{

//creating new make-kont closure
void** clo9317 = alloc_kont(lam9084_spec, 2);

//setting env list
clo9317[1] = decode_clo_array[1];
clo9317[2] = decode_clo_array[4];
void* f_lam_8937 = encode_clo(clo9317);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8937;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9318 = alloc_kont(lam9092_spec, 4);

//setting env list
clo9318[1] = decode_clo_array[1];
clo9318[2] = decode_clo_array[2];
clo9318[3] = decode_clo_array[3];
clo9318[4] = decode_clo_array[4];
void* f_lam_8941 = encode_clo(clo9318);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8941;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void lam9094_spec(void* env9095, void* id_8844) // lam9094 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9095);

//if-clause
if(is_true(id_8844))
{

//creating new make-kont closure
void** clo9319 = alloc_kont(lam9084_spec, 2);

//setting env list
clo9319[1] = decode_clo_array[1];
clo9319[2] = decode_clo_array[4];
void* f_lam_8937 = encode_clo(clo9319);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8937;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
cdr_fptr();
}
else
{

//creating new make-kont closure
void** clo9320 = alloc_kont(lam9092_spec, 4);

//setting env list
clo9320[1] = decode_clo_array[1];
clo9320[2] = decode_clo_array[2];
clo9320[3] = decode_clo_array[3];
clo9320[4] = decode_clo_array[4];
void* f_lam_8941 = encode_clo(clo9320);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8941;
arg_buffer[3] = decode_clo_array[3];
numArgs = 3;
car_fptr();
}

}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8936 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9321 = alloc_kont(lam9094_spec, 4);

//setting env list
clo9321[1] = kont8936;
clo9321[2] = index;
clo9321[3] = lst;
clo9321[4] = value;
void* f_lam_8942 = encode_clo(clo9321);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8942;
arg_buffer[3] = index;
arg_buffer[4] = int9137;
numArgs = 4;
_u61_fptr();
}

inline void list_u45set_spec(void* _9096, void* kont8936, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9322 = alloc_kont(lam9094_spec, 4);

//setting env list
clo9322[1] = kont8936;
clo9322[2] = index;
clo9322[3] = lst;
clo9322[4] = value;
void* f_lam_8942 = encode_clo(clo9322);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f_lam_8942;
arg_buffer[3] = index;
arg_buffer[4] = int9137;
numArgs = 4;
_u61_fptr();
}

inline void lam9097_fptr() // lam9097 -> generic version 
{
//reading env
void* const env9098 = arg_buffer[1];
//reading env and args
void* const xy8852 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9098);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8852);
}

inline void lam9097_spec(void* env9098, void* xy8852) // lam9097 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9098);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8852);
}

inline void lam9099_fptr() // lam9099 -> generic version 
{
//reading env
void* const env9100 = arg_buffer[1];
//reading env and args
void* const id_8857 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9100);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8857;
numArgs = 4;
append_fptr();
}

inline void lam9099_spec(void* env9100, void* id_8857) // lam9099 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9100);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8857;
numArgs = 4;
append_fptr();
}

inline void lam9101_fptr() // lam9101 -> generic version 
{
//reading env
void* const env9102 = arg_buffer[1];
//reading env and args
void* const id_8856 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9102);

//creating new make-kont closure
void** clo9323 = alloc_kont(lam9099_spec, 2);

//setting env list
clo9323[1] = decode_clo_array[1];
clo9323[2] = decode_clo_array[2];
void* f_lam_8945 = encode_clo(clo9323);



//clo-app
flatten_spec(flatten, f_lam_8945, id_8856);
}

inline void lam9101_spec(void* env9102, void* id_8856) // lam9101 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9102);

//creating new make-kont closure
void** clo9324 = alloc_kont(lam9099_spec, 2);

//setting env list
clo9324[1] = decode_clo_array[1];
clo9324[2] = decode_clo_array[2];
void* f_lam_8945 = encode_clo(clo9324);



//clo-app
flatten_spec(flatten, f_lam_8945, id_8856);
}

inline void lam9103_fptr() // lam9103 -> generic version 
{
//reading env
void* const env9104 = arg_buffer[1];
//reading env and args
void* const id_8855 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9104);

//creating new make-kont closure
void** clo9325 = alloc_kont(lam9101_spec, 2);

//setting env list
clo9325[1] = id_8855;
clo9325[2] = decode_clo_array[2];
void* f_lam_8946 = encode_clo(clo9325);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8946;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9103_spec(void* env9104, void* id_8855) // lam9103 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9104);

//creating new make-kont closure
void** clo9326 = alloc_kont(lam9101_spec, 2);

//setting env list
clo9326[1] = id_8855;
clo9326[2] = decode_clo_array[2];
void* f_lam_8946 = encode_clo(clo9326);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f_lam_8946;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
cdr_fptr();
}

inline void lam9105_fptr() // lam9105 -> generic version 
{
//reading env
void* const env9106 = arg_buffer[1];
//reading env and args
void* const id_8854 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9106);

//creating new make-kont closure
void** clo9327 = alloc_kont(lam9103_spec, 2);

//setting env list
clo9327[1] = decode_clo_array[1];
clo9327[2] = decode_clo_array[2];
void* f_lam_8947 = encode_clo(clo9327);



//clo-app
flatten_spec(flatten, f_lam_8947, id_8854);
}

inline void lam9105_spec(void* env9106, void* id_8854) // lam9105 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9106);

//creating new make-kont closure
void** clo9328 = alloc_kont(lam9103_spec, 2);

//setting env list
clo9328[1] = decode_clo_array[1];
clo9328[2] = decode_clo_array[2];
void* f_lam_8947 = encode_clo(clo9328);



//clo-app
flatten_spec(flatten, f_lam_8947, id_8854);
}

inline void lam9107_fptr() // lam9107 -> generic version 
{
//reading env
void* const env9108 = arg_buffer[1];
//reading env and args
void* const xy8858 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9108);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8858);
}

inline void lam9107_spec(void* env9108, void* xy8858) // lam9107 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9108);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8858);
}

inline void lam9109_fptr() // lam9109 -> generic version 
{
//reading env
void* const env9110 = arg_buffer[1];
//reading env and args
void* const id_8853 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9110);

//if-clause
if(is_true(id_8853))
{

//creating new make-kont closure
void** clo9329 = alloc_kont(lam9105_spec, 2);

//setting env list
clo9329[1] = decode_clo_array[1];
clo9329[2] = decode_clo_array[2];
void* f_lam_8948 = encode_clo(clo9329);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8948;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9330 = alloc_kont(lam9107_spec, 1);

//setting env list
clo9330[1] = decode_clo_array[2];
void* f_lam_8949 = encode_clo(clo9330);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8949;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
list_fptr();
}

}

inline void lam9109_spec(void* env9110, void* id_8853) // lam9109 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9110);

//if-clause
if(is_true(id_8853))
{

//creating new make-kont closure
void** clo9331 = alloc_kont(lam9105_spec, 2);

//setting env list
clo9331[1] = decode_clo_array[1];
clo9331[2] = decode_clo_array[2];
void* f_lam_8948 = encode_clo(clo9331);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f_lam_8948;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
car_fptr();
}
else
{

//creating new make-kont closure
void** clo9332 = alloc_kont(lam9107_spec, 1);

//setting env list
clo9332[1] = decode_clo_array[2];
void* f_lam_8949 = encode_clo(clo9332);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8949;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
list_fptr();
}

}

inline void lam9111_fptr() // lam9111 -> generic version 
{
//reading env
void* const env9112 = arg_buffer[1];
//reading env and args
void* const id_8851 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9112);

//if-clause
if(is_true(id_8851))
{

//creating new make-kont closure
void** clo9333 = alloc_kont(lam9097_spec, 1);

//setting env list
clo9333[1] = decode_clo_array[2];
void* f_lam_8944 = encode_clo(clo9333);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8944;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9334 = alloc_kont(lam9109_spec, 2);

//setting env list
clo9334[1] = decode_clo_array[1];
clo9334[2] = decode_clo_array[2];
void* f_lam_8950 = encode_clo(clo9334);



//clo-app
arg_buffer[1] = pair_u63;
arg_buffer[2] = f_lam_8950;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
pair_u63_fptr();
}

}

inline void lam9111_spec(void* env9112, void* id_8851) // lam9111 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9112);

//if-clause
if(is_true(id_8851))
{

//creating new make-kont closure
void** clo9335 = alloc_kont(lam9097_spec, 1);

//setting env list
clo9335[1] = decode_clo_array[2];
void* f_lam_8944 = encode_clo(clo9335);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f_lam_8944;
numArgs = 2;
list_fptr();
}
else
{

//creating new make-kont closure
void** clo9336 = alloc_kont(lam9109_spec, 2);

//setting env list
clo9336[1] = decode_clo_array[1];
clo9336[2] = decode_clo_array[2];
void* f_lam_8950 = encode_clo(clo9336);



//clo-app
arg_buffer[1] = pair_u63;
arg_buffer[2] = f_lam_8950;
arg_buffer[3] = decode_clo_array[1];
numArgs = 3;
pair_u63_fptr();
}

}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8943 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9337 = alloc_kont(lam9111_spec, 2);

//setting env list
clo9337[1] = lst;
clo9337[2] = kont8943;
void* f_lam_8951 = encode_clo(clo9337);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8951;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void flatten_spec(void* _9113, void* kont8943, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9338 = alloc_kont(lam9111_spec, 2);

//setting env list
clo9338[1] = lst;
clo9338[2] = kont8943;
void* f_lam_8951 = encode_clo(clo9338);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f_lam_8951;
arg_buffer[3] = lst;
numArgs = 3;
null_u63_fptr();
}

inline void lam9114_fptr() // lam9114 -> generic version 
{
//reading env
void* const env9115 = arg_buffer[1];
//reading env and args
void* const id_8866 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9115);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8866;
numArgs = 4;
_u43_fptr();
}

inline void lam9114_spec(void* env9115, void* id_8866) // lam9114 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9115);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8866;
numArgs = 4;
_u43_fptr();
}

inline void lam9116_fptr() // lam9116 -> generic version 
{
//reading env
void* const env9117 = arg_buffer[1];
//reading env and args
void* const id_8865 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9117);

//creating new make-kont closure
void** clo9339 = alloc_kont(lam9114_spec, 2);

//setting env list
clo9339[1] = decode_clo_array[1];
clo9339[2] = decode_clo_array[2];
void* f_lam_8953 = encode_clo(clo9339);



//clo-app
fibfp_spec(fibfp, f_lam_8953, id_8865);
}

inline void lam9116_spec(void* env9117, void* id_8865) // lam9116 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9117);

//creating new make-kont closure
void** clo9340 = alloc_kont(lam9114_spec, 2);

//setting env list
clo9340[1] = decode_clo_array[1];
clo9340[2] = decode_clo_array[2];
void* f_lam_8953 = encode_clo(clo9340);



//clo-app
fibfp_spec(fibfp, f_lam_8953, id_8865);
}

inline void lam9118_fptr() // lam9118 -> generic version 
{
//reading env
void* const env9119 = arg_buffer[1];
//reading env and args
void* const id_8863 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9119);

//creating new make-kont closure
void** clo9341 = alloc_kont(lam9116_spec, 2);

//setting env list
clo9341[1] = decode_clo_array[2];
clo9341[2] = id_8863;
void* f_lam_8954 = encode_clo(clo9341);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8954;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = float9141;
numArgs = 4;
_u45_fptr();
}

inline void lam9118_spec(void* env9119, void* id_8863) // lam9118 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9119);

//creating new make-kont closure
void** clo9342 = alloc_kont(lam9116_spec, 2);

//setting env list
clo9342[1] = decode_clo_array[2];
clo9342[2] = id_8863;
void* f_lam_8954 = encode_clo(clo9342);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8954;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = float9141;
numArgs = 4;
_u45_fptr();
}

inline void lam9120_fptr() // lam9120 -> generic version 
{
//reading env
void* const env9121 = arg_buffer[1];
//reading env and args
void* const id_8862 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9121);

//creating new make-kont closure
void** clo9343 = alloc_kont(lam9118_spec, 2);

//setting env list
clo9343[1] = decode_clo_array[1];
clo9343[2] = decode_clo_array[2];
void* f_lam_8955 = encode_clo(clo9343);



//clo-app
fibfp_spec(fibfp, f_lam_8955, id_8862);
}

inline void lam9120_spec(void* env9121, void* id_8862) // lam9120 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9121);

//creating new make-kont closure
void** clo9344 = alloc_kont(lam9118_spec, 2);

//setting env list
clo9344[1] = decode_clo_array[1];
clo9344[2] = decode_clo_array[2];
void* f_lam_8955 = encode_clo(clo9344);



//clo-app
fibfp_spec(fibfp, f_lam_8955, id_8862);
}

inline void lam9122_fptr() // lam9122 -> generic version 
{
//reading env
void* const env9123 = arg_buffer[1];
//reading env and args
void* const id_8860 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9123);

//if-clause
if(is_true(id_8860))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9345 = alloc_kont(lam9120_spec, 2);

//setting env list
clo9345[1] = decode_clo_array[1];
clo9345[2] = decode_clo_array[2];
void* f_lam_8956 = encode_clo(clo9345);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8956;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = float9140;
numArgs = 4;
_u45_fptr();
}

}

inline void lam9122_spec(void* env9123, void* id_8860) // lam9122 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9123);

//if-clause
if(is_true(id_8860))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], decode_clo_array[1]);
}
else
{

//creating new make-kont closure
void** clo9346 = alloc_kont(lam9120_spec, 2);

//setting env list
clo9346[1] = decode_clo_array[1];
clo9346[2] = decode_clo_array[2];
void* f_lam_8956 = encode_clo(clo9346);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f_lam_8956;
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = float9140;
numArgs = 4;
_u45_fptr();
}

}

inline void fibfp_fptr() // fibfp -> generic version 
{
//reading env and args
void* const kont8952 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9347 = alloc_kont(lam9122_spec, 2);

//setting env list
clo9347[1] = n;
clo9347[2] = kont8952;
void* f_lam_8957 = encode_clo(clo9347);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_8957;
arg_buffer[3] = n;
arg_buffer[4] = float9141;
numArgs = 4;
_u60_fptr();
}

inline void fibfp_spec(void* _9124, void* kont8952, void* n) // fibfp 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9348 = alloc_kont(lam9122_spec, 2);

//setting env list
clo9348[1] = n;
clo9348[2] = kont8952;
void* f_lam_8957 = encode_clo(clo9348);



//clo-app
arg_buffer[1] = _u60;
arg_buffer[2] = f_lam_8957;
arg_buffer[3] = n;
arg_buffer[4] = float9141;
numArgs = 4;
_u60_fptr();
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8958 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8958, float9142);
}

inline void brouhaha_main_spec(void* _9125, void* kont8958) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fibfp_spec(fibfp, kont8958, float9142);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9137 = reinterpret_cast<void *>(encode_int(0));
float9141 = reinterpret_cast<void *>(encode_float(2.0));
float9140 = reinterpret_cast<void *>(encode_float(1.0));
float9142 = reinterpret_cast<void *>(encode_float(10.0));
bool_t9133 = encode_bool(true);
int9138 = reinterpret_cast<void *>(encode_int(1));
bool_f9134 = encode_bool(false);
int9129 = reinterpret_cast<void *>(encode_int(2));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

