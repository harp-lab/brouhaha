#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int9077;
void* bool_t9072;
void* int9076;
void* bool_f9070;
void* int9078;



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

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8993, void* kont8952, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8994_fptr(); // lam8994
void lam8994_spec(void* env8995, void* id_8790); // lam8994
void* lam8994 = encode_clo(alloc_clo(lam8994_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8996, void* kont8953, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8997, void* kont8955, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8998_fptr(); // lam8998
void lam8998_spec(void* env8999, void* id_8805); // lam8998
void* lam8998 = encode_clo(alloc_clo(lam8998_fptr, 0));

void length_fptr(); // length
void length_spec(void* _9000, void* kont8956, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam9001_fptr(); // lam9001
void lam9001_spec(void* env9002, void* id_8811); // lam9001
void* lam9001 = encode_clo(alloc_clo(lam9001_fptr, 0));

void lam9003_fptr(); // lam9003
void lam9003_spec(void* env9004, void* id_8809); // lam9003
void* lam9003 = encode_clo(alloc_clo(lam9003_fptr, 0));

void map_fptr(); // map
void map_spec(void* _9005, void* kont8958, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam9006_fptr(); // lam9006
void lam9006_spec(void* env9007, void* id_8818); // lam9006
void* lam9006 = encode_clo(alloc_clo(lam9006_fptr, 0));

void lam9008_fptr(); // lam9008
void lam9008_spec(void* env9009, void* id_8815); // lam9008
void* lam9008 = encode_clo(alloc_clo(lam9008_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _9010, void* kont8961, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam9011_fptr(); // lam9011
void lam9011_spec(void* env9012, void* id_8822); // lam9011
void* lam9011 = encode_clo(alloc_clo(lam9011_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _9013, void* kont8964, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9014_fptr(); // lam9014
void lam9014_spec(void* env9015, void* id_8827); // lam9014
void* lam9014 = encode_clo(alloc_clo(lam9014_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _9016, void* kont8966, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam9017_fptr(); // lam9017
void lam9017_spec(void* env9018, void* id_8831); // lam9017
void* lam9017 = encode_clo(alloc_clo(lam9017_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _9019, void* kont8968, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9020_fptr(); // lam9020
void lam9020_spec(void* env9021, void* xy8833); // lam9020
void* lam9020 = encode_clo(alloc_clo(lam9020_fptr, 0));

void lam9022_fptr(); // lam9022
void lam9022_spec(void* env9023, void* id_8836); // lam9022
void* lam9022 = encode_clo(alloc_clo(lam9022_fptr, 0));

void lam9024_fptr(); // lam9024
void lam9024_spec(void* env9025, void* lsts); // lam9024
void* lam9024 = encode_clo(alloc_clo(lam9024_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam9027_fptr(); // lam9027
void lam9027_spec(void* env9028, void* id_8844); // lam9027
void* lam9027 = encode_clo(alloc_clo(lam9027_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _9029, void* kont8974, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam9030_fptr(); // lam9030
void lam9030_spec(void* env9031, void* id_8851); // lam9030
void* lam9030 = encode_clo(alloc_clo(lam9030_fptr, 0));

void lam9032_fptr(); // lam9032
void lam9032_spec(void* env9033, void* id_8849); // lam9032
void* lam9032 = encode_clo(alloc_clo(lam9032_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _9034, void* kont8976, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void lam9035_fptr(); // lam9035
void lam9035_spec(void* env9036, void* id_8866); // lam9035
void* lam9035 = encode_clo(alloc_clo(lam9035_fptr, 0));

void lam9037_fptr(); // lam9037
void lam9037_spec(void* env9038, void* id_8860); // lam9037
void* lam9037 = encode_clo(alloc_clo(lam9037_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void* _9039, void* kont8979, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam9040_fptr(); // lam9040
void lam9040_spec(void* env9041, void* id_8890); // lam9040
void* lam9040 = encode_clo(alloc_clo(lam9040_fptr, 0));

void lam9042_fptr(); // lam9042
void lam9042_spec(void* env9043, void* id_8897); // lam9042
void* lam9042 = encode_clo(alloc_clo(lam9042_fptr, 0));

void lam9044_fptr(); // lam9044
void lam9044_spec(void* env9045, void* id_8888); // lam9044
void* lam9044 = encode_clo(alloc_clo(lam9044_fptr, 0));

void lam9046_fptr(); // lam9046
void lam9046_spec(void* env9047, void* z); // lam9046
void* lam9046 = encode_clo(alloc_clo(lam9046_fptr, 0));

void lam9048_fptr(); // lam9048
void lam9048_spec(void* env9049, void* y); // lam9048
void* lam9048 = encode_clo(alloc_clo(lam9048_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void* _9050, void* kont8982, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void iota1_spec(void* _9051, void* kont8988, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam9052_fptr(); // lam9052
void lam9052_spec(void* env9053, void* id_8905); // lam9052
void* lam9052 = encode_clo(alloc_clo(lam9052_fptr, 0));

void nqueens_fptr(); // nqueens
void nqueens_spec(void* _9054, void* kont8989, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _9055, void* kont8991); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9079 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9080 = apply_prim__u43(lst9081);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
}
else
{
void* const kont9079 = arg_buffer[2];
void* const x9080 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9079))[0])(kont9079, x9080);
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
void* const kont9082 = prim_car(lst);
void* const lst9084 = prim_cdr(lst);
void* const x9083 = apply_prim__u45(lst9084);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
}
else
{
void* const kont9082 = arg_buffer[2];
void* const x9083 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9082))[0])(kont9082, x9083);
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
void* const kont9085 = prim_car(lst);
void* const lst9087 = prim_cdr(lst);
void* const x9086 = apply_prim__u42(lst9087);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
}
else
{
void* const kont9085 = arg_buffer[2];
void* const x9086 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9085))[0])(kont9085, x9086);
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
void* const kont9088 = prim_car(lst);
void* const lst9090 = prim_cdr(lst);
void* const x9089 = apply_prim__u47(lst9090);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
}
else
{
void* const kont9088 = arg_buffer[2];
void* const x9089 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9088))[0])(kont9088, x9089);
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
void* const kont9091 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9092 = apply_prim__u61(lst9093);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
}
else
{
void* const kont9091 = arg_buffer[2];
void* const x9092 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9091))[0])(kont9091, x9092);
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
void* const kont9094 = prim_car(lst);
void* const lst9096 = prim_cdr(lst);
void* const x9095 = apply_prim__u62(lst9096);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
}
else
{
void* const kont9094 = arg_buffer[2];
void* const x9095 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9094))[0])(kont9094, x9095);
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
void* const kont9097 = prim_car(lst);
void* const lst9099 = prim_cdr(lst);
void* const x9098 = apply_prim__u60(lst9099);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
}
else
{
void* const kont9097 = arg_buffer[2];
void* const x9098 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9097))[0])(kont9097, x9098);
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
void* const kont9100 = prim_car(lst);
void* const lst9102 = prim_cdr(lst);
void* const x9101 = apply_prim__u60_u61(lst9102);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
}
else
{
void* const kont9100 = arg_buffer[2];
void* const x9101 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9100))[0])(kont9100, x9101);
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
void* const kont9103 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9104 = apply_prim__u62_u61(lst9105);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
}
else
{
void* const kont9103 = arg_buffer[2];
void* const x9104 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9103))[0])(kont9103, x9104);
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
void* const kont9106 = prim_car(lst);
void* const lst9108 = prim_cdr(lst);
void* const x9107 = apply_prim_modulo(lst9108);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
}
else
{
void* const kont9106 = arg_buffer[2];
void* const x9107 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9106))[0])(kont9106, x9107);
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
void* const kont9109 = prim_car(lst);
void* const lst9111 = prim_cdr(lst);
void* const x9110 = apply_prim_null_u63(lst9111);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
}
else
{
void* const kont9109 = arg_buffer[2];
void* const x9110 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9109))[0])(kont9109, x9110);
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
void* const kont9112 = prim_car(lst);
void* const lst9114 = prim_cdr(lst);
void* const x9113 = apply_prim_equal_u63(lst9114);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
}
else
{
void* const kont9112 = arg_buffer[2];
void* const x9113 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9112))[0])(kont9112, x9113);
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
void* const kont9115 = prim_car(lst);
void* const lst9117 = prim_cdr(lst);
void* const x9116 = apply_prim_eq_u63(lst9117);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
}
else
{
void* const kont9115 = arg_buffer[2];
void* const x9116 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9115))[0])(kont9115, x9116);
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
void* const kont9118 = prim_car(lst);
void* const lst9120 = prim_cdr(lst);
void* const x9119 = apply_prim_cons(lst9120);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
}
else
{
void* const kont9118 = arg_buffer[2];
void* const x9119 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9118))[0])(kont9118, x9119);
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
void* const kont9121 = prim_car(lst);
void* const lst9123 = prim_cdr(lst);
void* const x9122 = apply_prim_car(lst9123);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
}
else
{
void* const kont9121 = arg_buffer[2];
void* const x9122 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9121))[0])(kont9121, x9122);
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
void* const kont9124 = prim_car(lst);
void* const lst9126 = prim_cdr(lst);
void* const x9125 = apply_prim_cdr(lst9126);
arg_buffer[1] = kont9124;
arg_buffer[2] = x9125;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
}
else
{
void* const kont9124 = arg_buffer[2];
void* const x9125 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9124))[0])(kont9124, x9125);
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
void* const kont9127 = prim_car(lst);
void* const lst9129 = prim_cdr(lst);
void* const x9128 = apply_prim_remainder(lst9129);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
}
else
{
void* const kont9127 = arg_buffer[2];
void* const x9128 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9127))[0])(kont9127, x9128);
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
void* const kont9130 = prim_car(lst);
void* const lst9132 = prim_cdr(lst);
void* const x9131 = apply_prim_pair_u63(lst9132);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
}
else
{
void* const kont9130 = arg_buffer[2];
void* const x9131 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9130))[0])(kont9130, x9131);
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
void* const kont9133 = prim_car(lst);
void* const lst9135 = prim_cdr(lst);
void* const x9134 = apply_prim_list(lst9135);
arg_buffer[1] = kont9133;
arg_buffer[2] = x9134;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
}
else
{
void* const kont9133 = arg_buffer[2];
void* const x9134 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9133))[0])(kont9133, x9134);
}

}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8952 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9077, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8952)[0])(kont8952, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8952, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9076));
}

}

inline void list_u45ref_spec(void* _8993, void* kont8952, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int9077, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8952)[0])(kont8952, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8952, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9076));
}

}

inline void lam8994_fptr() // lam8994 -> generic version 
{
//reading env
void* const env8995 = arg_buffer[1];
//reading env and args
void* const id_8790 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8995);

//if-clause
if(is_true(id_8790))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9070);
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

inline void lam8994_spec(void* env8995, void* id_8790) // lam8994 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8995);

//if-clause
if(is_true(id_8790))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f9070);
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
void* const kont8953 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9136 = alloc_kont(lam8994_spec, 3);

//setting env list
clo9136[1] = kont8953;
clo9136[2] = item;
clo9136[3] = lst;
void* f_lam_8954 = encode_clo(clo9136);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8994_spec(f_lam_8954, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8994_spec(f_lam_8954, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8996, void* kont8953, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9137 = alloc_kont(lam8994_spec, 3);

//setting env list
clo9137[1] = kont8953;
clo9137[2] = item;
clo9137[3] = lst;
void* f_lam_8954 = encode_clo(clo9137);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8994_spec(f_lam_8954, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8994_spec(f_lam_8954, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8955 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8955)[0])(kont8955, bool_f9070);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8955)[0])(kont8955, bool_t9072);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8955, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8997, void* kont8955, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8955)[0])(kont8955, bool_f9070);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8955)[0])(kont8955, bool_t9072);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8955, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8998_fptr() // lam8998 -> generic version 
{
//reading env
void* const env8999 = arg_buffer[1];
//reading env and args
void* const id_8805 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8999);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8805));
}

inline void lam8998_spec(void* env8999, void* id_8805) // lam8998 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8999);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8805));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8956 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8956)[0])(kont8956, int9077);
}
else
{

//creating new make-kont closure
void** clo9138 = alloc_kont(lam8998_spec, 2);

//setting env list
clo9138[1] = kont8956;
clo9138[2] = int9076;
void* f_lam_8957 = encode_clo(clo9138);



//clo-app
length_spec(length, f_lam_8957, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _9000, void* kont8956, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8956)[0])(kont8956, int9077);
}
else
{

//creating new make-kont closure
void** clo9139 = alloc_kont(lam8998_spec, 2);

//setting env list
clo9139[1] = kont8956;
clo9139[2] = int9076;
void* f_lam_8957 = encode_clo(clo9139);



//clo-app
length_spec(length, f_lam_8957, apply_prim_cdr_1(lst));
}

}

inline void lam9001_fptr() // lam9001 -> generic version 
{
//reading env
void* const env9002 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9002);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8811));
}

inline void lam9001_spec(void* env9002, void* id_8811) // lam9001 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9002);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8811));
}

inline void lam9003_fptr() // lam9003 -> generic version 
{
//reading env
void* const env9004 = arg_buffer[1];
//reading env and args
void* const id_8809 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9004);

//creating new make-kont closure
void** clo9140 = alloc_kont(lam9001_spec, 2);

//setting env list
clo9140[1] = id_8809;
clo9140[2] = decode_clo_array[3];
void* f_lam_8959 = encode_clo(clo9140);



//clo-app
map_spec(map, f_lam_8959, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam9003_spec(void* env9004, void* id_8809) // lam9003 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9004);

//creating new make-kont closure
void** clo9141 = alloc_kont(lam9001_spec, 2);

//setting env list
clo9141[1] = id_8809;
clo9141[2] = decode_clo_array[3];
void* f_lam_8959 = encode_clo(clo9141);



//clo-app
map_spec(map, f_lam_8959, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8958 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8958)[0])(kont8958, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9142 = alloc_kont(lam9003_spec, 3);

//setting env list
clo9142[1] = proc;
clo9142[2] = lst;
clo9142[3] = kont8958;
void* f_lam_8960 = encode_clo(clo9142);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8960;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _9005, void* kont8958, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8958)[0])(kont8958, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9143 = alloc_kont(lam9003_spec, 3);

//setting env list
clo9143[1] = proc;
clo9143[2] = lst;
clo9143[3] = kont8958;
void* f_lam_8960 = encode_clo(clo9143);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8960;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam9006_fptr() // lam9006 -> generic version 
{
//reading env
void* const env9007 = arg_buffer[1];
//reading env and args
void* const id_8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9007);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8818));
}

inline void lam9006_spec(void* env9007, void* id_8818) // lam9006 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9007);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8818));
}

inline void lam9008_fptr() // lam9008 -> generic version 
{
//reading env
void* const env9009 = arg_buffer[1];
//reading env and args
void* const id_8815 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9009);

//if-clause
if(is_true(id_8815))
{

//creating new make-kont closure
void** clo9144 = alloc_kont(lam9006_spec, 2);

//setting env list
clo9144[1] = decode_clo_array[1];
clo9144[2] = apply_prim_car_1(decode_clo_array[2]);
void* f_lam_8962 = encode_clo(clo9144);



//clo-app
filter_spec(filter, f_lam_8962, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam9008_spec(void* env9009, void* id_8815) // lam9008 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9009);

//if-clause
if(is_true(id_8815))
{

//creating new make-kont closure
void** clo9145 = alloc_kont(lam9006_spec, 2);

//setting env list
clo9145[1] = decode_clo_array[1];
clo9145[2] = apply_prim_car_1(decode_clo_array[2]);
void* f_lam_8962 = encode_clo(clo9145);



//clo-app
filter_spec(filter, f_lam_8962, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8961 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8961)[0])(kont8961, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9146 = alloc_kont(lam9008_spec, 3);

//setting env list
clo9146[1] = kont8961;
clo9146[2] = lst;
clo9146[3] = op;
void* f_lam_8963 = encode_clo(clo9146);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8963;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _9010, void* kont8961, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8961)[0])(kont8961, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9147 = alloc_kont(lam9008_spec, 3);

//setting env list
clo9147[1] = kont8961;
clo9147[2] = lst;
clo9147[3] = op;
void* f_lam_8963 = encode_clo(clo9147);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8963;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void lam9011_fptr() // lam9011 -> generic version 
{
//reading env
void* const env9012 = arg_buffer[1];
//reading env and args
void* const id_8822 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9012);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8822, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam9011_spec(void* env9012, void* id_8822) // lam9011 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9012);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8822, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8964 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8964)[0])(kont8964, acc);
}
else
{

//creating new make-kont closure
void** clo9148 = alloc_kont(lam9011_spec, 3);

//setting env list
clo9148[1] = fun;
clo9148[2] = kont8964;
clo9148[3] = lst;
void* f_lam_8965 = encode_clo(clo9148);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8965;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _9013, void* kont8964, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8964)[0])(kont8964, acc);
}
else
{

//creating new make-kont closure
void** clo9149 = alloc_kont(lam9011_spec, 3);

//setting env list
clo9149[1] = fun;
clo9149[2] = kont8964;
clo9149[3] = lst;
void* f_lam_8965 = encode_clo(clo9149);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8965;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam9014_fptr() // lam9014 -> generic version 
{
//reading env
void* const env9015 = arg_buffer[1];
//reading env and args
void* const id_8827 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9015);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8827;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam9014_spec(void* env9015, void* id_8827) // lam9014 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9015);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8827;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8966 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8966)[0])(kont8966, acc);
}
else
{

//creating new make-kont closure
void** clo9150 = alloc_kont(lam9014_spec, 3);

//setting env list
clo9150[1] = apply_prim_car_1(lst);
clo9150[2] = fun;
clo9150[3] = kont8966;
void* f_lam_8967 = encode_clo(clo9150);



//clo-app
foldr_spec(foldr, f_lam_8967, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _9016, void* kont8966, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8966)[0])(kont8966, acc);
}
else
{

//creating new make-kont closure
void** clo9151 = alloc_kont(lam9014_spec, 3);

//setting env list
clo9151[1] = apply_prim_car_1(lst);
clo9151[2] = fun;
clo9151[3] = kont8966;
void* f_lam_8967 = encode_clo(clo9151);



//clo-app
foldr_spec(foldr, f_lam_8967, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void lam9017_fptr() // lam9017 -> generic version 
{
//reading env
void* const env9018 = arg_buffer[1];
//reading env and args
void* const id_8831 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9018);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8831));
}

inline void lam9017_spec(void* env9018, void* id_8831) // lam9017 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9018);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8831));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8968 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8968)[0])(kont8968, rhs);
}
else
{

//creating new make-kont closure
void** clo9152 = alloc_kont(lam9017_spec, 2);

//setting env list
clo9152[1] = kont8968;
clo9152[2] = apply_prim_car_1(lhs);
void* f_lam_8969 = encode_clo(clo9152);



//clo-app
append1_spec(append1, f_lam_8969, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _9019, void* kont8968, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8968)[0])(kont8968, rhs);
}
else
{

//creating new make-kont closure
void** clo9153 = alloc_kont(lam9017_spec, 2);

//setting env list
clo9153[1] = kont8968;
clo9153[2] = apply_prim_car_1(lhs);
void* f_lam_8969 = encode_clo(clo9153);



//clo-app
append1_spec(append1, f_lam_8969, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam9020_fptr() // lam9020 -> generic version 
{
//reading env
void* const env9021 = arg_buffer[1];
//reading env and args
void* const xy8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9021);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8833);
}

inline void lam9020_spec(void* env9021, void* xy8833) // lam9020 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9021);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8833);
}

inline void lam9022_fptr() // lam9022 -> generic version 
{
//reading env
void* const env9023 = arg_buffer[1];
//reading env and args
void* const id_8836 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9023);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8836);
}

inline void lam9022_spec(void* env9023, void* id_8836) // lam9022 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9023);

//clo-app
foldr_spec(foldr, decode_clo_array[1], append1, decode_clo_array[2], id_8836);
}

inline void lam9024_fptr() // lam9024 -> generic version 
{
//reading env
void* const env9025 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9025);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9154 = alloc_kont(lam9020_spec, 1);

//setting env list
clo9154[1] = decode_clo_array[1];
void* f_lam_8971 = encode_clo(clo9154);



//clo-app
append1_spec(append1, f_lam_8971, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9155 = alloc_kont(lam9022_spec, 2);

//setting env list
clo9155[1] = decode_clo_array[1];
clo9155[2] = apply_prim_list_0();
void* f_lam_8972 = encode_clo(clo9155);



//clo-app
append1_spec(append1, f_lam_8972, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

inline void lam9024_spec(void* env9025, void* lsts) // lam9024 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9025);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9156 = alloc_kont(lam9020_spec, 1);

//setting env list
clo9156[1] = decode_clo_array[1];
void* f_lam_8971 = encode_clo(clo9156);



//clo-app
append1_spec(append1, f_lam_8971, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9157 = alloc_kont(lam9022_spec, 2);

//setting env list
clo9157[1] = decode_clo_array[1];
clo9157[2] = apply_prim_list_0();
void* f_lam_8972 = encode_clo(clo9157);



//clo-app
append1_spec(append1, f_lam_8972, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _9026 = arg_buffer[1];
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
void** clo9158 = alloc_kont(lam9024_spec, 3);

//setting env list
clo9158[1] = apply_prim_car_1(vargs);
clo9158[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9158[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_8973 = encode_clo(clo9158);


// kont-clo-app case
lam9024_spec(f_lam_8973, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam9027_fptr() // lam9027 -> generic version 
{
//reading env
void* const env9028 = arg_buffer[1];
//reading env and args
void* const id_8844 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9028);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8844));
}

inline void lam9027_spec(void* env9028, void* id_8844) // lam9027 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9028);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8844));
}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8974 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9077)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8974)[0])(kont8974, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9159 = alloc_kont(lam9027_spec, 2);

//setting env list
clo9159[1] = apply_prim_car_1(lst);
clo9159[2] = kont8974;
void* f_lam_8975 = encode_clo(clo9159);



//clo-app
list_u45set_spec(list_u45set, f_lam_8975, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9076), value);
}

}

inline void list_u45set_spec(void* _9029, void* kont8974, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int9077)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8974)[0])(kont8974, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9160 = alloc_kont(lam9027_spec, 2);

//setting env list
clo9160[1] = apply_prim_car_1(lst);
clo9160[2] = kont8974;
void* f_lam_8975 = encode_clo(clo9160);



//clo-app
list_u45set_spec(list_u45set, f_lam_8975, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9076), value);
}

}

inline void lam9030_fptr() // lam9030 -> generic version 
{
//reading env
void* const env9031 = arg_buffer[1];
//reading env and args
void* const id_8851 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9031);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8851;
numArgs = 4;
append_fptr();
}

inline void lam9030_spec(void* env9031, void* id_8851) // lam9030 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9031);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8851;
numArgs = 4;
append_fptr();
}

inline void lam9032_fptr() // lam9032 -> generic version 
{
//reading env
void* const env9033 = arg_buffer[1];
//reading env and args
void* const id_8849 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9033);

//creating new make-kont closure
void** clo9161 = alloc_kont(lam9030_spec, 2);

//setting env list
clo9161[1] = id_8849;
clo9161[2] = decode_clo_array[2];
void* f_lam_8977 = encode_clo(clo9161);



//clo-app
flatten_spec(flatten, f_lam_8977, apply_prim_cdr_1(decode_clo_array[1]));
}

inline void lam9032_spec(void* env9033, void* id_8849) // lam9032 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9033);

//creating new make-kont closure
void** clo9162 = alloc_kont(lam9030_spec, 2);

//setting env list
clo9162[1] = id_8849;
clo9162[2] = decode_clo_array[2];
void* f_lam_8977 = encode_clo(clo9162);



//clo-app
flatten_spec(flatten, f_lam_8977, apply_prim_cdr_1(decode_clo_array[1]));
}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8976 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8976)[0])(kont8976, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9163 = alloc_kont(lam9032_spec, 2);

//setting env list
clo9163[1] = lst;
clo9163[2] = kont8976;
void* f_lam_8978 = encode_clo(clo9163);



//clo-app
flatten_spec(flatten, f_lam_8978, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8976)[0])(kont8976, apply_prim_list_1(lst));
}

}

}

inline void flatten_spec(void* _9034, void* kont8976, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8976)[0])(kont8976, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9164 = alloc_kont(lam9032_spec, 2);

//setting env list
clo9164[1] = lst;
clo9164[2] = kont8976;
void* f_lam_8978 = encode_clo(clo9164);



//clo-app
flatten_spec(flatten, f_lam_8978, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8976)[0])(kont8976, apply_prim_list_1(lst));
}

}

}

inline void lam9035_fptr() // lam9035 -> generic version 
{
//reading env
void* const env9036 = arg_buffer[1];
//reading env and args
void* const id_8866 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9036);

//if-clause
if(is_true(id_8866))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[3], decode_clo_array[2], apply_prim__u43_2(decode_clo_array[4], int9076), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9070);
}

}

inline void lam9035_spec(void* env9036, void* id_8866) // lam9035 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9036);

//if-clause
if(is_true(id_8866))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[3], decode_clo_array[2], apply_prim__u43_2(decode_clo_array[4], int9076), apply_prim_cdr_1(decode_clo_array[1]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9070);
}

}

inline void lam9037_fptr() // lam9037 -> generic version 
{
//reading env
void* const env9038 = arg_buffer[1];
//reading env and args
void* const id_8860 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9038);

//if-clause
if(is_true(id_8860))
{

//creating new make-kont closure
void** clo9165 = alloc_kont(lam9035_spec, 4);

//setting env list
clo9165[1] = decode_clo_array[1];
clo9165[2] = decode_clo_array[2];
clo9165[3] = decode_clo_array[3];
clo9165[4] = decode_clo_array[4];
void* f_lam_8980 = encode_clo(clo9165);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[2], decode_clo_array[4]))))
{
// kont-clo-app case
lam9035_spec(f_lam_8980, bool_f9070);
}
else
{
// kont-clo-app case
lam9035_spec(f_lam_8980, bool_t9072);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9070);
}

}

inline void lam9037_spec(void* env9038, void* id_8860) // lam9037 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9038);

//if-clause
if(is_true(id_8860))
{

//creating new make-kont closure
void** clo9166 = alloc_kont(lam9035_spec, 4);

//setting env list
clo9166[1] = decode_clo_array[1];
clo9166[2] = decode_clo_array[2];
clo9166[3] = decode_clo_array[3];
clo9166[4] = decode_clo_array[4];
void* f_lam_8980 = encode_clo(clo9166);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[1]), apply_prim__u45_2(decode_clo_array[2], decode_clo_array[4]))))
{
// kont-clo-app case
lam9035_spec(f_lam_8980, bool_f9070);
}
else
{
// kont-clo-app case
lam9035_spec(f_lam_8980, bool_t9072);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f9070);
}

}

inline void ok_u63_fptr() // ok? -> generic version 
{
//reading env and args
void* const kont8979 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8979)[0])(kont8979, bool_t9072);
}
else
{

//creating new make-kont closure
void** clo9167 = alloc_kont(lam9037_spec, 4);

//setting env list
clo9167[1] = placed;
clo9167[2] = row;
clo9167[3] = kont8979;
clo9167[4] = dist;
void* f_lam_8981 = encode_clo(clo9167);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
lam9037_spec(f_lam_8981, bool_f9070);
}
else
{
// kont-clo-app case
lam9037_spec(f_lam_8981, bool_t9072);
}

}

}

inline void ok_u63_spec(void* _9039, void* kont8979, void* row, void* dist, void* placed) // ok? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8979)[0])(kont8979, bool_t9072);
}
else
{

//creating new make-kont closure
void** clo9168 = alloc_kont(lam9037_spec, 4);

//setting env list
clo9168[1] = placed;
clo9168[2] = row;
clo9168[3] = kont8979;
clo9168[4] = dist;
void* f_lam_8981 = encode_clo(clo9168);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
lam9037_spec(f_lam_8981, bool_f9070);
}
else
{
// kont-clo-app case
lam9037_spec(f_lam_8981, bool_t9072);
}

}

}

inline void lam9040_fptr() // lam9040 -> generic version 
{
//reading env
void* const env9041 = arg_buffer[1];
//reading env and args
void* const id_8890 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9041);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(apply_prim_list_3(id_8890, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[1]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[4])));
}

inline void lam9040_spec(void* env9041, void* id_8890) // lam9040 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9041);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(apply_prim_list_3(id_8890, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[1]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[4])));
}

inline void lam9042_fptr() // lam9042 -> generic version 
{
//reading env
void* const env9043 = arg_buffer[1];
//reading env and args
void* const id_8897 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9043);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8897), decode_clo_array[3]);
}

inline void lam9042_spec(void* env9043, void* id_8897) // lam9042 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9043);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8897), decode_clo_array[3]);
}

inline void lam9044_fptr() // lam9044 -> generic version 
{
//reading env
void* const env9045 = arg_buffer[1];
//reading env and args
void* const id_8888 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9045);

//creating new make-kont closure
void** clo9169 = alloc_kont(lam9042_spec, 3);

//setting env list
clo9169[1] = decode_clo_array[1];
clo9169[2] = decode_clo_array[5];
clo9169[3] = decode_clo_array[6];
void* f_lam_8983 = encode_clo(clo9169);



//if-clause
if(is_true(id_8888))
{

//creating new make-kont closure
void** clo9170 = alloc_kont(lam9040_spec, 4);

//setting env list
clo9170[1] = decode_clo_array[3];
clo9170[2] = f_lam_8983;
clo9170[3] = decode_clo_array[2];
clo9170[4] = decode_clo_array[7];
void* f_lam_8984 = encode_clo(clo9170);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8984;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[3]);
arg_buffer[4] = decode_clo_array[4];
numArgs = 4;
append_fptr();
}
else
{
// kont-clo-app case
lam9042_spec(f_lam_8983, apply_prim_cdr_1(decode_clo_array[7]));
}

}

inline void lam9044_spec(void* env9045, void* id_8888) // lam9044 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9045);

//creating new make-kont closure
void** clo9171 = alloc_kont(lam9042_spec, 3);

//setting env list
clo9171[1] = decode_clo_array[1];
clo9171[2] = decode_clo_array[5];
clo9171[3] = decode_clo_array[6];
void* f_lam_8983 = encode_clo(clo9171);



//if-clause
if(is_true(id_8888))
{

//creating new make-kont closure
void** clo9172 = alloc_kont(lam9040_spec, 4);

//setting env list
clo9172[1] = decode_clo_array[3];
clo9172[2] = f_lam_8983;
clo9172[3] = decode_clo_array[2];
clo9172[4] = decode_clo_array[7];
void* f_lam_8984 = encode_clo(clo9172);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8984;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[3]);
arg_buffer[4] = decode_clo_array[4];
numArgs = 4;
append_fptr();
}
else
{
// kont-clo-app case
lam9042_spec(f_lam_8983, apply_prim_cdr_1(decode_clo_array[7]));
}

}

inline void lam9046_fptr() // lam9046 -> generic version 
{
//reading env
void* const env9047 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9047);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[1])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int9076));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[5]), decode_clo_array[4]);
}

}
else
{

//creating new make-kont closure
void** clo9173 = alloc_kont(lam9044_spec, 7);

//setting env list
clo9173[1] = decode_clo_array[3];
clo9173[2] = z;
clo9173[3] = decode_clo_array[1];
clo9173[4] = decode_clo_array[2];
clo9173[5] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[1]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[1]), decode_clo_array[2]), z);
clo9173[6] = decode_clo_array[4];
clo9173[7] = decode_clo_array[5];
void* f_lam_8985 = encode_clo(clo9173);



//clo-app
ok_u63_spec(ok_u63, f_lam_8985, apply_prim_car_1(decode_clo_array[1]), int9076, z);
}

}

inline void lam9046_spec(void* env9047, void* z) // lam9046 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9047);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[1])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int9076));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[3], apply_prim_cdr_1(decode_clo_array[5]), decode_clo_array[4]);
}

}
else
{

//creating new make-kont closure
void** clo9174 = alloc_kont(lam9044_spec, 7);

//setting env list
clo9174[1] = decode_clo_array[3];
clo9174[2] = z;
clo9174[3] = decode_clo_array[1];
clo9174[4] = decode_clo_array[2];
clo9174[5] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[1]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[1]), decode_clo_array[2]), z);
clo9174[6] = decode_clo_array[4];
clo9174[7] = decode_clo_array[5];
void* f_lam_8985 = encode_clo(clo9174);



//clo-app
ok_u63_spec(ok_u63, f_lam_8985, apply_prim_car_1(decode_clo_array[1]), int9076, z);
}

}

inline void lam9048_fptr() // lam9048 -> generic version 
{
//reading env
void* const env9049 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9049);

//creating new make-kont closure
void** clo9175 = alloc_kont(lam9046_spec, 5);

//setting env list
clo9175[1] = decode_clo_array[1];
clo9175[2] = y;
clo9175[3] = decode_clo_array[2];
clo9175[4] = decode_clo_array[3];
clo9175[5] = decode_clo_array[5];
void* f_lam_8986 = encode_clo(clo9175);


// kont-clo-app case
lam9046_spec(f_lam_8986, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void lam9048_spec(void* env9049, void* y) // lam9048 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9049);

//creating new make-kont closure
void** clo9176 = alloc_kont(lam9046_spec, 5);

//setting env list
clo9176[1] = decode_clo_array[1];
clo9176[2] = y;
clo9176[3] = decode_clo_array[2];
clo9176[4] = decode_clo_array[3];
clo9176[5] = decode_clo_array[5];
void* f_lam_8986 = encode_clo(clo9176);


// kont-clo-app case
lam9046_spec(f_lam_8986, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version 
{
//reading env and args
void* const kont8982 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8982)[0])(kont8982, count);
}
else
{

//creating new make-kont closure
void** clo9177 = alloc_kont(lam9048_spec, 5);

//setting env list
clo9177[1] = apply_prim_car_1(apply_prim_car_1(stack));
clo9177[2] = kont8982;
clo9177[3] = count;
clo9177[4] = apply_prim_car_1(stack);
clo9177[5] = stack;
void* f_lam_8987 = encode_clo(clo9177);


// kont-clo-app case
lam9048_spec(f_lam_8987, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void q_u45helper_spec(void* _9050, void* kont8982, void* stack, void* count) // q-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8982)[0])(kont8982, count);
}
else
{

//creating new make-kont closure
void** clo9178 = alloc_kont(lam9048_spec, 5);

//setting env list
clo9178[1] = apply_prim_car_1(apply_prim_car_1(stack));
clo9178[2] = kont8982;
clo9178[3] = count;
clo9178[4] = apply_prim_car_1(stack);
clo9178[5] = stack;
void* f_lam_8987 = encode_clo(clo9178);


// kont-clo-app case
lam9048_spec(f_lam_8987, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void iota1_fptr() // iota1 -> generic version 
{
//reading env and args
void* const kont8988 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9077)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8988)[0])(kont8988, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8988, apply_prim__u45_2(n, int9076), apply_prim_cons_2(n, l));
}

}

inline void iota1_spec(void* _9051, void* kont8988, void* n, void* l) // iota1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int9077)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8988)[0])(kont8988, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8988, apply_prim__u45_2(n, int9076), apply_prim_cons_2(n, l));
}

}

inline void lam9052_fptr() // lam9052 -> generic version 
{
//reading env
void* const env9053 = arg_buffer[1];
//reading env and args
void* const id_8905 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9053);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8905, apply_prim_list_0(), apply_prim_list_0())), int9077);
}

inline void lam9052_spec(void* env9053, void* id_8905) // lam9052 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env9053);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8905, apply_prim_list_0(), apply_prim_list_0())), int9077);
}

inline void nqueens_fptr() // nqueens -> generic version 
{
//reading env and args
void* const kont8989 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9179 = alloc_kont(lam9052_spec, 1);

//setting env list
clo9179[1] = kont8989;
void* f_lam_8990 = encode_clo(clo9179);



//clo-app
iota1_spec(iota1, f_lam_8990, n, apply_prim_list_0());
}

inline void nqueens_spec(void* _9054, void* kont8989, void* n) // nqueens 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9180 = alloc_kont(lam9052_spec, 1);

//setting env list
clo9180[1] = kont8989;
void* f_lam_8990 = encode_clo(clo9180);



//clo-app
iota1_spec(iota1, f_lam_8990, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8991 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8991, int9078);
}

inline void brouhaha_main_spec(void* _9055, void* kont8991) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8991, int9078);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int9077 = reinterpret_cast<void *>(encode_int(0));
bool_t9072 = encode_bool(true);
int9076 = reinterpret_cast<void *>(encode_int(1));
bool_f9070 = encode_bool(false);
int9078 = reinterpret_cast<void *>(encode_int(13));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

