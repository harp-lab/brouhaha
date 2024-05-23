#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8954;
void* bool_t8949;
void* int8953;
void* bool_f8947;
void* int8955;



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

void lam8903_fptr(); // lam8903
void lam8903_spec(void* env8904, void* id_8784); // lam8903
void* lam8903 = encode_clo(alloc_clo(lam8903_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8905, void* kont8879, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8906_fptr(); // lam8906
void lam8906_spec(void* env8907, void* id_8788); // lam8906
void* lam8906 = encode_clo(alloc_clo(lam8906_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8908, void* kont8881, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8909_fptr(); // lam8909
void lam8909_spec(void* env8910, void* id_8792); // lam8909
void* lam8909 = encode_clo(alloc_clo(lam8909_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8911, void* kont8883, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8912_fptr(); // lam8912
void lam8912_spec(void* env8913, void* xy8794); // lam8912
void* lam8912 = encode_clo(alloc_clo(lam8912_fptr, 0));

void lam8914_fptr(); // lam8914
void lam8914_spec(void* env8915, void* id_8797); // lam8914
void* lam8914 = encode_clo(alloc_clo(lam8914_fptr, 0));

void lam8916_fptr(); // lam8916
void lam8916_spec(void* env8917, void* lsts); // lam8916
void* lam8916 = encode_clo(alloc_clo(lam8916_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8919_fptr(); // lam8919
void lam8919_spec(void* env8920, void* id_8811); // lam8919
void* lam8919 = encode_clo(alloc_clo(lam8919_fptr, 0));

void lam8921_fptr(); // lam8921
void lam8921_spec(void* env8922, void* id_8805); // lam8921
void* lam8921 = encode_clo(alloc_clo(lam8921_fptr, 0));

void ok_u63_fptr(); // ok?
void ok_u63_spec(void* _8923, void* kont8889, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8924_fptr(); // lam8924
void lam8924_spec(void* env8925, void* id_8835); // lam8924
void* lam8924 = encode_clo(alloc_clo(lam8924_fptr, 0));

void lam8926_fptr(); // lam8926
void lam8926_spec(void* env8927, void* id_8842); // lam8926
void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void lam8928_fptr(); // lam8928
void lam8928_spec(void* env8929, void* id_8833); // lam8928
void* lam8928 = encode_clo(alloc_clo(lam8928_fptr, 0));

void lam8930_fptr(); // lam8930
void lam8930_spec(void* env8931, void* z); // lam8930
void* lam8930 = encode_clo(alloc_clo(lam8930_fptr, 0));

void lam8932_fptr(); // lam8932
void lam8932_spec(void* env8933, void* y); // lam8932
void* lam8932 = encode_clo(alloc_clo(lam8932_fptr, 0));

void q_u45helper_fptr(); // q-helper
void q_u45helper_spec(void* _8934, void* kont8892, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(); // iota1
void iota1_spec(void* _8935, void* kont8898, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8936_fptr(); // lam8936
void lam8936_spec(void* env8937, void* id_8850); // lam8936
void* lam8936 = encode_clo(alloc_clo(lam8936_fptr, 0));

void nqueens_fptr(); // nqueens
void nqueens_spec(void* _8938, void* kont8899, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8939, void* kont8901); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8956 = prim_car(lst);
void* const lst8958 = prim_cdr(lst);
void* const x8957 = apply_prim__u43(lst8958);
arg_buffer[1] = kont8956;
arg_buffer[2] = x8957;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8956))[0])();
}
else
{
void* const kont8956 = arg_buffer[2];
void* const x8957 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8956))[0])(kont8956, x8957);
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
void* const kont8959 = prim_car(lst);
void* const lst8961 = prim_cdr(lst);
void* const x8960 = apply_prim__u45(lst8961);
arg_buffer[1] = kont8959;
arg_buffer[2] = x8960;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8959))[0])();
}
else
{
void* const kont8959 = arg_buffer[2];
void* const x8960 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8959))[0])(kont8959, x8960);
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
void* const kont8962 = prim_car(lst);
void* const lst8964 = prim_cdr(lst);
void* const x8963 = apply_prim__u42(lst8964);
arg_buffer[1] = kont8962;
arg_buffer[2] = x8963;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8962))[0])();
}
else
{
void* const kont8962 = arg_buffer[2];
void* const x8963 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8962))[0])(kont8962, x8963);
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
void* const kont8965 = prim_car(lst);
void* const lst8967 = prim_cdr(lst);
void* const x8966 = apply_prim__u47(lst8967);
arg_buffer[1] = kont8965;
arg_buffer[2] = x8966;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8965))[0])();
}
else
{
void* const kont8965 = arg_buffer[2];
void* const x8966 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8965))[0])(kont8965, x8966);
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
void* const kont8968 = prim_car(lst);
void* const lst8970 = prim_cdr(lst);
void* const x8969 = apply_prim__u61(lst8970);
arg_buffer[1] = kont8968;
arg_buffer[2] = x8969;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8968))[0])();
}
else
{
void* const kont8968 = arg_buffer[2];
void* const x8969 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8968))[0])(kont8968, x8969);
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
void* const kont8971 = prim_car(lst);
void* const lst8973 = prim_cdr(lst);
void* const x8972 = apply_prim__u62(lst8973);
arg_buffer[1] = kont8971;
arg_buffer[2] = x8972;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8971))[0])();
}
else
{
void* const kont8971 = arg_buffer[2];
void* const x8972 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8971))[0])(kont8971, x8972);
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
void* const kont8974 = prim_car(lst);
void* const lst8976 = prim_cdr(lst);
void* const x8975 = apply_prim__u60(lst8976);
arg_buffer[1] = kont8974;
arg_buffer[2] = x8975;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8974))[0])();
}
else
{
void* const kont8974 = arg_buffer[2];
void* const x8975 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8974))[0])(kont8974, x8975);
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
void* const kont8977 = prim_car(lst);
void* const lst8979 = prim_cdr(lst);
void* const x8978 = apply_prim__u60_u61(lst8979);
arg_buffer[1] = kont8977;
arg_buffer[2] = x8978;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8977))[0])();
}
else
{
void* const kont8977 = arg_buffer[2];
void* const x8978 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8977))[0])(kont8977, x8978);
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
void* const kont8980 = prim_car(lst);
void* const lst8982 = prim_cdr(lst);
void* const x8981 = apply_prim__u62_u61(lst8982);
arg_buffer[1] = kont8980;
arg_buffer[2] = x8981;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8980))[0])();
}
else
{
void* const kont8980 = arg_buffer[2];
void* const x8981 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8980))[0])(kont8980, x8981);
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
void* const kont8983 = prim_car(lst);
void* const lst8985 = prim_cdr(lst);
void* const x8984 = apply_prim_modulo(lst8985);
arg_buffer[1] = kont8983;
arg_buffer[2] = x8984;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8983))[0])();
}
else
{
void* const kont8983 = arg_buffer[2];
void* const x8984 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8983))[0])(kont8983, x8984);
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
void* const kont8986 = prim_car(lst);
void* const lst8988 = prim_cdr(lst);
void* const x8987 = apply_prim_null_u63(lst8988);
arg_buffer[1] = kont8986;
arg_buffer[2] = x8987;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8986))[0])();
}
else
{
void* const kont8986 = arg_buffer[2];
void* const x8987 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8986))[0])(kont8986, x8987);
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
void* const kont8989 = prim_car(lst);
void* const lst8991 = prim_cdr(lst);
void* const x8990 = apply_prim_equal_u63(lst8991);
arg_buffer[1] = kont8989;
arg_buffer[2] = x8990;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8989))[0])();
}
else
{
void* const kont8989 = arg_buffer[2];
void* const x8990 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8989))[0])(kont8989, x8990);
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
void* const kont8992 = prim_car(lst);
void* const lst8994 = prim_cdr(lst);
void* const x8993 = apply_prim_eq_u63(lst8994);
arg_buffer[1] = kont8992;
arg_buffer[2] = x8993;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8992))[0])();
}
else
{
void* const kont8992 = arg_buffer[2];
void* const x8993 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8992))[0])(kont8992, x8993);
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
void* const kont8995 = prim_car(lst);
void* const lst8997 = prim_cdr(lst);
void* const x8996 = apply_prim_cons(lst8997);
arg_buffer[1] = kont8995;
arg_buffer[2] = x8996;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
}
else
{
void* const kont8995 = arg_buffer[2];
void* const x8996 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8995))[0])(kont8995, x8996);
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
void* const kont8998 = prim_car(lst);
void* const lst9000 = prim_cdr(lst);
void* const x8999 = apply_prim_car(lst9000);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
}
else
{
void* const kont8998 = arg_buffer[2];
void* const x8999 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8998))[0])(kont8998, x8999);
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
void* const kont9001 = prim_car(lst);
void* const lst9003 = prim_cdr(lst);
void* const x9002 = apply_prim_cdr(lst9003);
arg_buffer[1] = kont9001;
arg_buffer[2] = x9002;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
}
else
{
void* const kont9001 = arg_buffer[2];
void* const x9002 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9001))[0])(kont9001, x9002);
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
void* const kont9004 = prim_car(lst);
void* const lst9006 = prim_cdr(lst);
void* const x9005 = apply_prim_float_u45_u62int(lst9006);
arg_buffer[1] = kont9004;
arg_buffer[2] = x9005;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
}
else
{
void* const kont9004 = arg_buffer[2];
void* const x9005 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9004))[0])(kont9004, x9005);
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
void* const kont9007 = prim_car(lst);
void* const lst9009 = prim_cdr(lst);
void* const x9008 = apply_prim_int_u45_u62float(lst9009);
arg_buffer[1] = kont9007;
arg_buffer[2] = x9008;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
}
else
{
void* const kont9007 = arg_buffer[2];
void* const x9008 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9007))[0])(kont9007, x9008);
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
void* const kont9010 = prim_car(lst);
void* const lst9012 = prim_cdr(lst);
void* const x9011 = apply_prim_hash(lst9012);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
}
else
{
void* const kont9010 = arg_buffer[2];
void* const x9011 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9010))[0])(kont9010, x9011);
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
void* const kont9013 = prim_car(lst);
void* const lst9015 = prim_cdr(lst);
void* const x9014 = apply_prim_hash_u45ref(lst9015);
arg_buffer[1] = kont9013;
arg_buffer[2] = x9014;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
}
else
{
void* const kont9013 = arg_buffer[2];
void* const x9014 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9013))[0])(kont9013, x9014);
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
void* const kont9016 = prim_car(lst);
void* const lst9018 = prim_cdr(lst);
void* const x9017 = apply_prim_hash_u45set(lst9018);
arg_buffer[1] = kont9016;
arg_buffer[2] = x9017;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
}
else
{
void* const kont9016 = arg_buffer[2];
void* const x9017 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9016))[0])(kont9016, x9017);
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
void* const kont9019 = prim_car(lst);
void* const lst9021 = prim_cdr(lst);
void* const x9020 = apply_prim_hash_u45keys(lst9021);
arg_buffer[1] = kont9019;
arg_buffer[2] = x9020;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
}
else
{
void* const kont9019 = arg_buffer[2];
void* const x9020 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9019))[0])(kont9019, x9020);
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
void* const kont9022 = prim_car(lst);
void* const lst9024 = prim_cdr(lst);
void* const x9023 = apply_prim_hash_u45has_u45key_u63(lst9024);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
}
else
{
void* const kont9022 = arg_buffer[2];
void* const x9023 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9022))[0])(kont9022, x9023);
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
void* const kont9025 = prim_car(lst);
void* const lst9027 = prim_cdr(lst);
void* const x9026 = apply_prim_hash_u45count(lst9027);
arg_buffer[1] = kont9025;
arg_buffer[2] = x9026;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
}
else
{
void* const kont9025 = arg_buffer[2];
void* const x9026 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9025))[0])(kont9025, x9026);
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
void* const kont9028 = prim_car(lst);
void* const lst9030 = prim_cdr(lst);
void* const x9029 = apply_prim_set(lst9030);
arg_buffer[1] = kont9028;
arg_buffer[2] = x9029;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
}
else
{
void* const kont9028 = arg_buffer[2];
void* const x9029 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9028))[0])(kont9028, x9029);
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
void* const kont9031 = prim_car(lst);
void* const lst9033 = prim_cdr(lst);
void* const x9032 = apply_prim_set_u45_u62list(lst9033);
arg_buffer[1] = kont9031;
arg_buffer[2] = x9032;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
}
else
{
void* const kont9031 = arg_buffer[2];
void* const x9032 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9031))[0])(kont9031, x9032);
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
void* const kont9034 = prim_car(lst);
void* const lst9036 = prim_cdr(lst);
void* const x9035 = apply_prim_list_u45_u62set(lst9036);
arg_buffer[1] = kont9034;
arg_buffer[2] = x9035;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
}
else
{
void* const kont9034 = arg_buffer[2];
void* const x9035 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9034))[0])(kont9034, x9035);
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
void* const kont9037 = prim_car(lst);
void* const lst9039 = prim_cdr(lst);
void* const x9038 = apply_prim_set_u45add(lst9039);
arg_buffer[1] = kont9037;
arg_buffer[2] = x9038;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
}
else
{
void* const kont9037 = arg_buffer[2];
void* const x9038 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9037))[0])(kont9037, x9038);
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
void* const kont9040 = prim_car(lst);
void* const lst9042 = prim_cdr(lst);
void* const x9041 = apply_prim_set_u45member_u63(lst9042);
arg_buffer[1] = kont9040;
arg_buffer[2] = x9041;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
}
else
{
void* const kont9040 = arg_buffer[2];
void* const x9041 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9040))[0])(kont9040, x9041);
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
void* const kont9043 = prim_car(lst);
void* const lst9045 = prim_cdr(lst);
void* const x9044 = apply_prim_set_u45remove(lst9045);
arg_buffer[1] = kont9043;
arg_buffer[2] = x9044;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
}
else
{
void* const kont9043 = arg_buffer[2];
void* const x9044 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9043))[0])(kont9043, x9044);
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
void* const kont9046 = prim_car(lst);
void* const lst9048 = prim_cdr(lst);
void* const x9047 = apply_prim_set_u45count(lst9048);
arg_buffer[1] = kont9046;
arg_buffer[2] = x9047;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
}
else
{
void* const kont9046 = arg_buffer[2];
void* const x9047 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9046))[0])(kont9046, x9047);
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
void* const kont9049 = prim_car(lst);
void* const lst9051 = prim_cdr(lst);
void* const x9050 = apply_prim_string_u63(lst9051);
arg_buffer[1] = kont9049;
arg_buffer[2] = x9050;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
}
else
{
void* const kont9049 = arg_buffer[2];
void* const x9050 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9049))[0])(kont9049, x9050);
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
void* const kont9052 = prim_car(lst);
void* const lst9054 = prim_cdr(lst);
void* const x9053 = apply_prim_string_u45length(lst9054);
arg_buffer[1] = kont9052;
arg_buffer[2] = x9053;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
}
else
{
void* const kont9052 = arg_buffer[2];
void* const x9053 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9052))[0])(kont9052, x9053);
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
void* const kont9055 = prim_car(lst);
void* const lst9057 = prim_cdr(lst);
void* const x9056 = apply_prim_string_u45ref(lst9057);
arg_buffer[1] = kont9055;
arg_buffer[2] = x9056;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
}
else
{
void* const kont9055 = arg_buffer[2];
void* const x9056 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9055))[0])(kont9055, x9056);
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
void* const kont9058 = prim_car(lst);
void* const lst9060 = prim_cdr(lst);
void* const x9059 = apply_prim_substring(lst9060);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
}
else
{
void* const kont9058 = arg_buffer[2];
void* const x9059 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9058))[0])(kont9058, x9059);
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
void* const kont9061 = prim_car(lst);
void* const lst9063 = prim_cdr(lst);
void* const x9062 = apply_prim_string_u45append(lst9063);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
}
else
{
void* const kont9061 = arg_buffer[2];
void* const x9062 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9061))[0])(kont9061, x9062);
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
void* const kont9064 = prim_car(lst);
void* const lst9066 = prim_cdr(lst);
void* const x9065 = apply_prim_string_u45_u62list(lst9066);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
}
else
{
void* const kont9064 = arg_buffer[2];
void* const x9065 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9064))[0])(kont9064, x9065);
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
void* const kont9067 = prim_car(lst);
void* const lst9069 = prim_cdr(lst);
void* const x9068 = apply_prim_exact_u45floor(lst9069);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
}
else
{
void* const kont9067 = arg_buffer[2];
void* const x9068 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9067))[0])(kont9067, x9068);
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
void* const kont9070 = prim_car(lst);
void* const lst9072 = prim_cdr(lst);
void* const x9071 = apply_prim_exact_u45ceiling(lst9072);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
}
else
{
void* const kont9070 = arg_buffer[2];
void* const x9071 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9070))[0])(kont9070, x9071);
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
void* const kont9073 = prim_car(lst);
void* const lst9075 = prim_cdr(lst);
void* const x9074 = apply_prim_exact_u45round(lst9075);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
}
else
{
void* const kont9073 = arg_buffer[2];
void* const x9074 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9073))[0])(kont9073, x9074);
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
void* const kont9076 = prim_car(lst);
void* const lst9078 = prim_cdr(lst);
void* const x9077 = apply_prim_abs(lst9078);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
}
else
{
void* const kont9076 = arg_buffer[2];
void* const x9077 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9076))[0])(kont9076, x9077);
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
void* const kont9079 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9080 = apply_prim_max(lst9081);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
}
else
{
void* const kont9079 = arg_buffer[2];
void* const x9080 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9079))[0])(kont9079, x9080);
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
void* const kont9082 = prim_car(lst);
void* const lst9084 = prim_cdr(lst);
void* const x9083 = apply_prim_min(lst9084);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
}
else
{
void* const kont9082 = arg_buffer[2];
void* const x9083 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9082))[0])(kont9082, x9083);
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
void* const kont9085 = prim_car(lst);
void* const lst9087 = prim_cdr(lst);
void* const x9086 = apply_prim_expt(lst9087);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
}
else
{
void* const kont9085 = arg_buffer[2];
void* const x9086 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9085))[0])(kont9085, x9086);
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
void* const kont9088 = prim_car(lst);
void* const lst9090 = prim_cdr(lst);
void* const x9089 = apply_prim_sqrt(lst9090);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
}
else
{
void* const kont9088 = arg_buffer[2];
void* const x9089 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9088))[0])(kont9088, x9089);
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
void* const kont9091 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9092 = apply_prim_remainder(lst9093);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
}
else
{
void* const kont9091 = arg_buffer[2];
void* const x9092 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9091))[0])(kont9091, x9092);
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
void* const kont9094 = prim_car(lst);
void* const lst9096 = prim_cdr(lst);
void* const x9095 = apply_prim_quotient(lst9096);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
}
else
{
void* const kont9094 = arg_buffer[2];
void* const x9095 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9094))[0])(kont9094, x9095);
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
void* const kont9097 = prim_car(lst);
void* const lst9099 = prim_cdr(lst);
void* const x9098 = apply_prim_random(lst9099);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
}
else
{
void* const kont9097 = arg_buffer[2];
void* const x9098 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9097))[0])(kont9097, x9098);
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
void* const kont9100 = prim_car(lst);
void* const lst9102 = prim_cdr(lst);
void* const x9101 = apply_prim_symbol_u63(lst9102);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
}
else
{
void* const kont9100 = arg_buffer[2];
void* const x9101 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9100))[0])(kont9100, x9101);
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
void* const kont9103 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9104 = apply_prim_pair_u63(lst9105);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
}
else
{
void* const kont9103 = arg_buffer[2];
void* const x9104 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9103))[0])(kont9103, x9104);
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
void* const kont9106 = prim_car(lst);
void* const lst9108 = prim_cdr(lst);
void* const x9107 = apply_prim_positive_u63(lst9108);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
}
else
{
void* const kont9106 = arg_buffer[2];
void* const x9107 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9106))[0])(kont9106, x9107);
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
void* const kont9109 = prim_car(lst);
void* const lst9111 = prim_cdr(lst);
void* const x9110 = apply_prim_negative_u63(lst9111);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
}
else
{
void* const kont9109 = arg_buffer[2];
void* const x9110 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9109))[0])(kont9109, x9110);
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
void* const kont9112 = prim_car(lst);
void* const lst9114 = prim_cdr(lst);
void* const x9113 = apply_prim_list(lst9114);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
}
else
{
void* const kont9112 = arg_buffer[2];
void* const x9113 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9112))[0])(kont9112, x9113);
}

}

inline void lam8903_fptr() // lam8903 -> generic version 
{
//reading env
void* const env8904 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8904);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8784));
}

inline void lam8903_spec(void* env8904, void* id_8784) // lam8903 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8904);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8784));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8879 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8879)[0])(kont8879, int8954);
}
else
{

//creating new make-kont closure
void** clo9115 = alloc_kont(lam8903_spec, 2);

//setting env list
clo9115[1] = kont8879;
clo9115[2] = int8953;
void* f_lam_8880 = encode_clo(clo9115);



//clo-app
length_spec(length, f_lam_8880, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8905, void* kont8879, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8879)[0])(kont8879, int8954);
}
else
{

//creating new make-kont closure
void** clo9116 = alloc_kont(lam8903_spec, 2);

//setting env list
clo9116[1] = kont8879;
clo9116[2] = int8953;
void* f_lam_8880 = encode_clo(clo9116);



//clo-app
length_spec(length, f_lam_8880, apply_prim_cdr_1(lst));
}

}

inline void lam8906_fptr() // lam8906 -> generic version 
{
//reading env
void* const env8907 = arg_buffer[1];
//reading env and args
void* const id_8788 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8907);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8788;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8906_spec(void* env8907, void* id_8788) // lam8906 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8907);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8788;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8881 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8881)[0])(kont8881, acc);
}
else
{

//creating new make-kont closure
void** clo9117 = alloc_kont(lam8906_spec, 3);

//setting env list
clo9117[1] = fun;
clo9117[2] = apply_prim_car_1(lst);
clo9117[3] = kont8881;
void* f_lam_8882 = encode_clo(clo9117);



//clo-app
foldr_spec(foldr, f_lam_8882, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8908, void* kont8881, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8881)[0])(kont8881, acc);
}
else
{

//creating new make-kont closure
void** clo9118 = alloc_kont(lam8906_spec, 3);

//setting env list
clo9118[1] = fun;
clo9118[2] = apply_prim_car_1(lst);
clo9118[3] = kont8881;
void* f_lam_8882 = encode_clo(clo9118);



//clo-app
foldr_spec(foldr, f_lam_8882, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void lam8909_fptr() // lam8909 -> generic version 
{
//reading env
void* const env8910 = arg_buffer[1];
//reading env and args
void* const id_8792 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8910);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8792));
}

inline void lam8909_spec(void* env8910, void* id_8792) // lam8909 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8910);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8792));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8883 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8883)[0])(kont8883, rhs);
}
else
{

//creating new make-kont closure
void** clo9119 = alloc_kont(lam8909_spec, 2);

//setting env list
clo9119[1] = apply_prim_car_1(lhs);
clo9119[2] = kont8883;
void* f_lam_8884 = encode_clo(clo9119);



//clo-app
append1_spec(append1, f_lam_8884, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8911, void* kont8883, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8883)[0])(kont8883, rhs);
}
else
{

//creating new make-kont closure
void** clo9120 = alloc_kont(lam8909_spec, 2);

//setting env list
clo9120[1] = apply_prim_car_1(lhs);
clo9120[2] = kont8883;
void* f_lam_8884 = encode_clo(clo9120);



//clo-app
append1_spec(append1, f_lam_8884, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8912_fptr() // lam8912 -> generic version 
{
//reading env
void* const env8913 = arg_buffer[1];
//reading env and args
void* const xy8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8913);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8912_spec(void* env8913, void* xy8794) // lam8912 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8913);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8794);
}

inline void lam8914_fptr() // lam8914 -> generic version 
{
//reading env
void* const env8915 = arg_buffer[1];
//reading env and args
void* const id_8797 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8915);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8797);
}

inline void lam8914_spec(void* env8915, void* id_8797) // lam8914 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8915);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8797);
}

inline void lam8916_fptr() // lam8916 -> generic version 
{
//reading env
void* const env8917 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8917);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9121 = alloc_kont(lam8912_spec, 1);

//setting env list
clo9121[1] = decode_clo_array[2];
void* f_lam_8886 = encode_clo(clo9121);



//clo-app
append1_spec(append1, f_lam_8886, decode_clo_array[1], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9122 = alloc_kont(lam8914_spec, 2);

//setting env list
clo9122[1] = apply_prim_list_0();
clo9122[2] = decode_clo_array[2];
void* f_lam_8887 = encode_clo(clo9122);



//clo-app
append1_spec(append1, f_lam_8887, apply_prim_list_2(decode_clo_array[1], decode_clo_array[3]), lsts);
}

}

inline void lam8916_spec(void* env8917, void* lsts) // lam8916 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8917);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9123 = alloc_kont(lam8912_spec, 1);

//setting env list
clo9123[1] = decode_clo_array[2];
void* f_lam_8886 = encode_clo(clo9123);



//clo-app
append1_spec(append1, f_lam_8886, decode_clo_array[1], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9124 = alloc_kont(lam8914_spec, 2);

//setting env list
clo9124[1] = apply_prim_list_0();
clo9124[2] = decode_clo_array[2];
void* f_lam_8887 = encode_clo(clo9124);



//clo-app
append1_spec(append1, f_lam_8887, apply_prim_list_2(decode_clo_array[1], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _8918 = arg_buffer[1];
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
void** clo9125 = alloc_kont(lam8916_spec, 3);

//setting env list
clo9125[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9125[2] = apply_prim_car_1(vargs);
clo9125[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_8888 = encode_clo(clo9125);


// kont-clo-app case
lam8916_spec(f_lam_8888, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam8919_fptr() // lam8919 -> generic version 
{
//reading env
void* const env8920 = arg_buffer[1];
//reading env and args
void* const id_8811 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8920);

//if-clause
if(is_true(id_8811))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[2], decode_clo_array[1], apply_prim__u43_2(decode_clo_array[4], int8953), apply_prim_cdr_1(decode_clo_array[3]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f8947);
}

}

inline void lam8919_spec(void* env8920, void* id_8811) // lam8919 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8920);

//if-clause
if(is_true(id_8811))
{

//clo-app
ok_u63_spec(ok_u63, decode_clo_array[2], decode_clo_array[1], apply_prim__u43_2(decode_clo_array[4], int8953), apply_prim_cdr_1(decode_clo_array[3]));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f8947);
}

}

inline void lam8921_fptr() // lam8921 -> generic version 
{
//reading env
void* const env8922 = arg_buffer[1];
//reading env and args
void* const id_8805 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8922);

//if-clause
if(is_true(id_8805))
{

//creating new make-kont closure
void** clo9126 = alloc_kont(lam8919_spec, 4);

//setting env list
clo9126[1] = decode_clo_array[1];
clo9126[2] = decode_clo_array[2];
clo9126[3] = decode_clo_array[3];
clo9126[4] = decode_clo_array[4];
void* f_lam_8890 = encode_clo(clo9126);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[3]), apply_prim__u45_2(decode_clo_array[1], decode_clo_array[4]))))
{
// kont-clo-app case
lam8919_spec(f_lam_8890, bool_f8947);
}
else
{
// kont-clo-app case
lam8919_spec(f_lam_8890, bool_t8949);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f8947);
}

}

inline void lam8921_spec(void* env8922, void* id_8805) // lam8921 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8922);

//if-clause
if(is_true(id_8805))
{

//creating new make-kont closure
void** clo9127 = alloc_kont(lam8919_spec, 4);

//setting env list
clo9127[1] = decode_clo_array[1];
clo9127[2] = decode_clo_array[2];
clo9127[3] = decode_clo_array[3];
clo9127[4] = decode_clo_array[4];
void* f_lam_8890 = encode_clo(clo9127);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(decode_clo_array[3]), apply_prim__u45_2(decode_clo_array[1], decode_clo_array[4]))))
{
// kont-clo-app case
lam8919_spec(f_lam_8890, bool_f8947);
}
else
{
// kont-clo-app case
lam8919_spec(f_lam_8890, bool_t8949);
}

}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], bool_f8947);
}

}

inline void ok_u63_fptr() // ok? -> generic version 
{
//reading env and args
void* const kont8889 = arg_buffer[2];
void* const row = arg_buffer[3];
void* const dist = arg_buffer[4];
void* const placed = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8889)[0])(kont8889, bool_t8949);
}
else
{

//creating new make-kont closure
void** clo9128 = alloc_kont(lam8921_spec, 4);

//setting env list
clo9128[1] = row;
clo9128[2] = kont8889;
clo9128[3] = placed;
clo9128[4] = dist;
void* f_lam_8891 = encode_clo(clo9128);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
lam8921_spec(f_lam_8891, bool_f8947);
}
else
{
// kont-clo-app case
lam8921_spec(f_lam_8891, bool_t8949);
}

}

}

inline void ok_u63_spec(void* _8923, void* kont8889, void* row, void* dist, void* placed) // ok? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(placed)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8889)[0])(kont8889, bool_t8949);
}
else
{

//creating new make-kont closure
void** clo9129 = alloc_kont(lam8921_spec, 4);

//setting env list
clo9129[1] = row;
clo9129[2] = kont8889;
clo9129[3] = placed;
clo9129[4] = dist;
void* f_lam_8891 = encode_clo(clo9129);



//if-clause
if(is_true(apply_prim__u61_2(apply_prim_car_1(placed), apply_prim__u43_2(row, dist))))
{
// kont-clo-app case
lam8921_spec(f_lam_8891, bool_f8947);
}
else
{
// kont-clo-app case
lam8921_spec(f_lam_8891, bool_t8949);
}

}

}

inline void lam8924_fptr() // lam8924 -> generic version 
{
//reading env
void* const env8925 = arg_buffer[1];
//reading env and args
void* const id_8835 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(apply_prim_list_3(id_8835, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[4])));
}

inline void lam8924_spec(void* env8925, void* id_8835) // lam8924 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(apply_prim_list_3(id_8835, apply_prim_list_0(), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3])), apply_prim_cdr_1(decode_clo_array[4])));
}

inline void lam8926_fptr() // lam8926 -> generic version 
{
//reading env
void* const env8927 = arg_buffer[1];
//reading env and args
void* const id_8842 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[3], id_8842), decode_clo_array[2]);
}

inline void lam8926_spec(void* env8927, void* id_8842) // lam8926 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cons_2(decode_clo_array[3], id_8842), decode_clo_array[2]);
}

inline void lam8928_fptr() // lam8928 -> generic version 
{
//reading env
void* const env8929 = arg_buffer[1];
//reading env and args
void* const id_8833 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8929);

//creating new make-kont closure
void** clo9130 = alloc_kont(lam8926_spec, 3);

//setting env list
clo9130[1] = decode_clo_array[3];
clo9130[2] = decode_clo_array[7];
clo9130[3] = decode_clo_array[1];
void* f_lam_8893 = encode_clo(clo9130);



//if-clause
if(is_true(id_8833))
{

//creating new make-kont closure
void** clo9131 = alloc_kont(lam8924_spec, 4);

//setting env list
clo9131[1] = f_lam_8893;
clo9131[2] = decode_clo_array[4];
clo9131[3] = decode_clo_array[6];
clo9131[4] = decode_clo_array[2];
void* f_lam_8894 = encode_clo(clo9131);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8894;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[4]);
arg_buffer[4] = decode_clo_array[5];
numArgs = 4;
append_fptr();
}
else
{
// kont-clo-app case
lam8926_spec(f_lam_8893, apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam8928_spec(void* env8929, void* id_8833) // lam8928 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8929);

//creating new make-kont closure
void** clo9132 = alloc_kont(lam8926_spec, 3);

//setting env list
clo9132[1] = decode_clo_array[3];
clo9132[2] = decode_clo_array[7];
clo9132[3] = decode_clo_array[1];
void* f_lam_8893 = encode_clo(clo9132);



//if-clause
if(is_true(id_8833))
{

//creating new make-kont closure
void** clo9133 = alloc_kont(lam8924_spec, 4);

//setting env list
clo9133[1] = f_lam_8893;
clo9133[2] = decode_clo_array[4];
clo9133[3] = decode_clo_array[6];
clo9133[4] = decode_clo_array[2];
void* f_lam_8894 = encode_clo(clo9133);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f_lam_8894;
arg_buffer[3] = apply_prim_cdr_1(decode_clo_array[4]);
arg_buffer[4] = decode_clo_array[5];
numArgs = 4;
append_fptr();
}
else
{
// kont-clo-app case
lam8926_spec(f_lam_8893, apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam8930_fptr() // lam8930 -> generic version 
{
//reading env
void* const env8931 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8931);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int8953));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), decode_clo_array[4]);
}

}
else
{

//creating new make-kont closure
void** clo9134 = alloc_kont(lam8928_spec, 7);

//setting env list
clo9134[1] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9134[2] = decode_clo_array[5];
clo9134[3] = decode_clo_array[1];
clo9134[4] = decode_clo_array[2];
clo9134[5] = decode_clo_array[3];
clo9134[6] = z;
clo9134[7] = decode_clo_array[4];
void* f_lam_8895 = encode_clo(clo9134);



//clo-app
ok_u63_spec(ok_u63, f_lam_8895, apply_prim_car_1(decode_clo_array[2]), int8953, z);
}

}

inline void lam8930_spec(void* env8931, void* z) // lam8930 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8931);

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[2])))
{

//if-clause
if(is_true(apply_prim_null_u63_1(decode_clo_array[3])))
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), apply_prim__u43_2(decode_clo_array[4], int8953));
}
else
{

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[5]), decode_clo_array[4]);
}

}
else
{

//creating new make-kont closure
void** clo9135 = alloc_kont(lam8928_spec, 7);

//setting env list
clo9135[1] = apply_prim_list_3(apply_prim_cdr_1(decode_clo_array[2]), apply_prim_cons_2(apply_prim_car_1(decode_clo_array[2]), decode_clo_array[3]), z);
clo9135[2] = decode_clo_array[5];
clo9135[3] = decode_clo_array[1];
clo9135[4] = decode_clo_array[2];
clo9135[5] = decode_clo_array[3];
clo9135[6] = z;
clo9135[7] = decode_clo_array[4];
void* f_lam_8895 = encode_clo(clo9135);



//clo-app
ok_u63_spec(ok_u63, f_lam_8895, apply_prim_car_1(decode_clo_array[2]), int8953, z);
}

}

inline void lam8932_fptr() // lam8932 -> generic version 
{
//reading env
void* const env8933 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8933);

//creating new make-kont closure
void** clo9136 = alloc_kont(lam8930_spec, 5);

//setting env list
clo9136[1] = decode_clo_array[1];
clo9136[2] = decode_clo_array[2];
clo9136[3] = y;
clo9136[4] = decode_clo_array[3];
clo9136[5] = decode_clo_array[5];
void* f_lam_8896 = encode_clo(clo9136);


// kont-clo-app case
lam8930_spec(f_lam_8896, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void lam8932_spec(void* env8933, void* y) // lam8932 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8933);

//creating new make-kont closure
void** clo9137 = alloc_kont(lam8930_spec, 5);

//setting env list
clo9137[1] = decode_clo_array[1];
clo9137[2] = decode_clo_array[2];
clo9137[3] = y;
clo9137[4] = decode_clo_array[3];
clo9137[5] = decode_clo_array[5];
void* f_lam_8896 = encode_clo(clo9137);


// kont-clo-app case
lam8930_spec(f_lam_8896, apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(decode_clo_array[4]))));
}

inline void q_u45helper_fptr() // q-helper -> generic version 
{
//reading env and args
void* const kont8892 = arg_buffer[2];
void* const stack = arg_buffer[3];
void* const count = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, count);
}
else
{

//creating new make-kont closure
void** clo9138 = alloc_kont(lam8932_spec, 5);

//setting env list
clo9138[1] = kont8892;
clo9138[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9138[3] = count;
clo9138[4] = apply_prim_car_1(stack);
clo9138[5] = stack;
void* f_lam_8897 = encode_clo(clo9138);


// kont-clo-app case
lam8932_spec(f_lam_8897, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void q_u45helper_spec(void* _8934, void* kont8892, void* stack, void* count) // q-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(stack)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, count);
}
else
{

//creating new make-kont closure
void** clo9139 = alloc_kont(lam8932_spec, 5);

//setting env list
clo9139[1] = kont8892;
clo9139[2] = apply_prim_car_1(apply_prim_car_1(stack));
clo9139[3] = count;
clo9139[4] = apply_prim_car_1(stack);
clo9139[5] = stack;
void* f_lam_8897 = encode_clo(clo9139);


// kont-clo-app case
lam8932_spec(f_lam_8897, apply_prim_car_1(apply_prim_cdr_1(apply_prim_car_1(stack))));
}

}

inline void iota1_fptr() // iota1 -> generic version 
{
//reading env and args
void* const kont8898 = arg_buffer[2];
void* const n = arg_buffer[3];
void* const l = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8954)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8898)[0])(kont8898, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8898, apply_prim__u45_2(n, int8953), apply_prim_cons_2(n, l));
}

}

inline void iota1_spec(void* _8935, void* kont8898, void* n, void* l) // iota1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8954)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8898)[0])(kont8898, l);
}
else
{

//clo-app
iota1_spec(iota1, kont8898, apply_prim__u45_2(n, int8953), apply_prim_cons_2(n, l));
}

}

inline void lam8936_fptr() // lam8936 -> generic version 
{
//reading env
void* const env8937 = arg_buffer[1];
//reading env and args
void* const id_8850 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8937);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8850, apply_prim_list_0(), apply_prim_list_0())), int8954);
}

inline void lam8936_spec(void* env8937, void* id_8850) // lam8936 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8937);

//clo-app
q_u45helper_spec(q_u45helper, decode_clo_array[1], apply_prim_list_1(apply_prim_list_3(id_8850, apply_prim_list_0(), apply_prim_list_0())), int8954);
}

inline void nqueens_fptr() // nqueens -> generic version 
{
//reading env and args
void* const kont8899 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9140 = alloc_kont(lam8936_spec, 1);

//setting env list
clo9140[1] = kont8899;
void* f_lam_8900 = encode_clo(clo9140);



//clo-app
iota1_spec(iota1, f_lam_8900, n, apply_prim_list_0());
}

inline void nqueens_spec(void* _8938, void* kont8899, void* n) // nqueens 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9141 = alloc_kont(lam8936_spec, 1);

//setting env list
clo9141[1] = kont8899;
void* f_lam_8900 = encode_clo(clo9141);



//clo-app
iota1_spec(iota1, f_lam_8900, n, apply_prim_list_0());
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8901 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8901, int8955);
}

inline void brouhaha_main_spec(void* _8939, void* kont8901) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
nqueens_spec(nqueens, kont8901, int8955);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8954 = reinterpret_cast<void *>(encode_int(0));
bool_t8949 = encode_bool(true);
int8953 = reinterpret_cast<void *>(encode_int(1));
bool_f8947 = encode_bool(false);
int8955 = reinterpret_cast<void *>(encode_int(5));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

