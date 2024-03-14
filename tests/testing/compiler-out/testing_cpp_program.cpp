#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8987;
void* bool_t8978;
void* int8988;
void* bool_f8979;
void* int8974;



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
void even_u63_spec(void* _8916, void* kont8877, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8917, void* kont8878, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8918, void* kont8879, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8919_fptr(); // lam8919
void lam8919_spec(void* env8920, void* id_8752); // lam8919
void* lam8919 = encode_clo(alloc_clo(lam8919_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8921, void* kont8880, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8922, void* kont8882, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8923_fptr(); // lam8923
void lam8923_spec(void* env8924, void* id_8767); // lam8923
void* lam8923 = encode_clo(alloc_clo(lam8923_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8925, void* kont8883, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8926_fptr(); // lam8926
void lam8926_spec(void* env8927, void* id_8773); // lam8926
void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void lam8928_fptr(); // lam8928
void lam8928_spec(void* env8929, void* id_8771); // lam8928
void* lam8928 = encode_clo(alloc_clo(lam8928_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8930, void* kont8885, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8931_fptr(); // lam8931
void lam8931_spec(void* env8932, void* id_8780); // lam8931
void* lam8931 = encode_clo(alloc_clo(lam8931_fptr, 0));

void lam8933_fptr(); // lam8933
void lam8933_spec(void* env8934, void* id_8777); // lam8933
void* lam8933 = encode_clo(alloc_clo(lam8933_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8935, void* kont8888, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8936, void* kont8891, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8937_fptr(); // lam8937
void lam8937_spec(void* env8938, void* id_8789); // lam8937
void* lam8937 = encode_clo(alloc_clo(lam8937_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8939, void* kont8892, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8940_fptr(); // lam8940
void lam8940_spec(void* env8941, void* id_8794); // lam8940
void* lam8940 = encode_clo(alloc_clo(lam8940_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8942, void* kont8894, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8943, void* kont8896, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8944, void* kont8897, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8945_fptr(); // lam8945
void lam8945_spec(void* env8946, void* id_8803); // lam8945
void* lam8945 = encode_clo(alloc_clo(lam8945_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8947, void* kont8898, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8948_fptr(); // lam8948
void lam8948_spec(void* env8949, void* id_8810); // lam8948
void* lam8948 = encode_clo(alloc_clo(lam8948_fptr, 0));

void lam8950_fptr(); // lam8950
void lam8950_spec(void* env8951, void* id_8805); // lam8950
void* lam8950 = encode_clo(alloc_clo(lam8950_fptr, 0));

void lam8952_fptr(); // lam8952
void lam8952_spec(void* env8953, void* x); // lam8952
void* lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8955_fptr(); // lam8955
void lam8955_spec(void* env8956, void* xy8813); // lam8955
void* lam8955 = encode_clo(alloc_clo(lam8955_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8957, void* kont8904, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8958, void* kont8906, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8959_fptr(); // lam8959
void lam8959_spec(void* env8960, void* id_8827); // lam8959
void* lam8959 = encode_clo(alloc_clo(lam8959_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _8961, void* kont8907, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam8962_fptr(); // lam8962
void lam8962_spec(void* env8963, void* id_8834); // lam8962
void* lam8962 = encode_clo(alloc_clo(lam8962_fptr, 0));

void lam8964_fptr(); // lam8964
void lam8964_spec(void* env8965, void* id_8832); // lam8964
void* lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _8966, void* kont8909, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void call_fptr(); // call
void call_spec(void* _8967, void* kont8912); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8968_fptr(); // lam8968
void lam8968_spec(void* env8969, void* xy8838); // lam8968
void* lam8968 = encode_clo(alloc_clo(lam8968_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8970, void* kont8913); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8989 = prim_car(lst);
void* const lst8991 = prim_cdr(lst);
void* const x8990 = apply_prim__u43(lst8991);
arg_buffer[1] = kont8989;
arg_buffer[2] = x8990;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8989))[0])();
}
else
{
void* const kont8989 = arg_buffer[2];
void* const x8990 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8989))[0])(kont8989, x8990);
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
void* const kont8992 = prim_car(lst);
void* const lst8994 = prim_cdr(lst);
void* const x8993 = apply_prim__u45(lst8994);
arg_buffer[1] = kont8992;
arg_buffer[2] = x8993;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8992))[0])();
}
else
{
void* const kont8992 = arg_buffer[2];
void* const x8993 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8992))[0])(kont8992, x8993);
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
void* const kont8995 = prim_car(lst);
void* const lst8997 = prim_cdr(lst);
void* const x8996 = apply_prim__u42(lst8997);
arg_buffer[1] = kont8995;
arg_buffer[2] = x8996;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8995))[0])();
}
else
{
void* const kont8995 = arg_buffer[2];
void* const x8996 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8995))[0])(kont8995, x8996);
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
void* const kont8998 = prim_car(lst);
void* const lst9000 = prim_cdr(lst);
void* const x8999 = apply_prim__u47(lst9000);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8998))[0])();
}
else
{
void* const kont8998 = arg_buffer[2];
void* const x8999 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8998))[0])(kont8998, x8999);
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
void* const kont9001 = prim_car(lst);
void* const lst9003 = prim_cdr(lst);
void* const x9002 = apply_prim__u61(lst9003);
arg_buffer[1] = kont9001;
arg_buffer[2] = x9002;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9001))[0])();
}
else
{
void* const kont9001 = arg_buffer[2];
void* const x9002 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9001))[0])(kont9001, x9002);
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
void* const kont9004 = prim_car(lst);
void* const lst9006 = prim_cdr(lst);
void* const x9005 = apply_prim__u62(lst9006);
arg_buffer[1] = kont9004;
arg_buffer[2] = x9005;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9004))[0])();
}
else
{
void* const kont9004 = arg_buffer[2];
void* const x9005 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9004))[0])(kont9004, x9005);
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
void* const kont9007 = prim_car(lst);
void* const lst9009 = prim_cdr(lst);
void* const x9008 = apply_prim__u60(lst9009);
arg_buffer[1] = kont9007;
arg_buffer[2] = x9008;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9007))[0])();
}
else
{
void* const kont9007 = arg_buffer[2];
void* const x9008 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9007))[0])(kont9007, x9008);
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
void* const kont9010 = prim_car(lst);
void* const lst9012 = prim_cdr(lst);
void* const x9011 = apply_prim__u60_u61(lst9012);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9010))[0])();
}
else
{
void* const kont9010 = arg_buffer[2];
void* const x9011 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9010))[0])(kont9010, x9011);
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
void* const kont9013 = prim_car(lst);
void* const lst9015 = prim_cdr(lst);
void* const x9014 = apply_prim__u62_u61(lst9015);
arg_buffer[1] = kont9013;
arg_buffer[2] = x9014;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9013))[0])();
}
else
{
void* const kont9013 = arg_buffer[2];
void* const x9014 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9013))[0])(kont9013, x9014);
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
void* const kont9016 = prim_car(lst);
void* const lst9018 = prim_cdr(lst);
void* const x9017 = apply_prim_modulo(lst9018);
arg_buffer[1] = kont9016;
arg_buffer[2] = x9017;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9016))[0])();
}
else
{
void* const kont9016 = arg_buffer[2];
void* const x9017 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9016))[0])(kont9016, x9017);
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
void* const kont9019 = prim_car(lst);
void* const lst9021 = prim_cdr(lst);
void* const x9020 = apply_prim_null_u63(lst9021);
arg_buffer[1] = kont9019;
arg_buffer[2] = x9020;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9019))[0])();
}
else
{
void* const kont9019 = arg_buffer[2];
void* const x9020 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9019))[0])(kont9019, x9020);
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
void* const kont9022 = prim_car(lst);
void* const lst9024 = prim_cdr(lst);
void* const x9023 = apply_prim_equal_u63(lst9024);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9022))[0])();
}
else
{
void* const kont9022 = arg_buffer[2];
void* const x9023 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9022))[0])(kont9022, x9023);
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
void* const kont9025 = prim_car(lst);
void* const lst9027 = prim_cdr(lst);
void* const x9026 = apply_prim_eq_u63(lst9027);
arg_buffer[1] = kont9025;
arg_buffer[2] = x9026;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9025))[0])();
}
else
{
void* const kont9025 = arg_buffer[2];
void* const x9026 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9025))[0])(kont9025, x9026);
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
void* const kont9028 = prim_car(lst);
void* const lst9030 = prim_cdr(lst);
void* const x9029 = apply_prim_cons(lst9030);
arg_buffer[1] = kont9028;
arg_buffer[2] = x9029;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9028))[0])();
}
else
{
void* const kont9028 = arg_buffer[2];
void* const x9029 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9028))[0])(kont9028, x9029);
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
void* const kont9031 = prim_car(lst);
void* const lst9033 = prim_cdr(lst);
void* const x9032 = apply_prim_car(lst9033);
arg_buffer[1] = kont9031;
arg_buffer[2] = x9032;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9031))[0])();
}
else
{
void* const kont9031 = arg_buffer[2];
void* const x9032 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9031))[0])(kont9031, x9032);
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
void* const kont9034 = prim_car(lst);
void* const lst9036 = prim_cdr(lst);
void* const x9035 = apply_prim_cdr(lst9036);
arg_buffer[1] = kont9034;
arg_buffer[2] = x9035;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9034))[0])();
}
else
{
void* const kont9034 = arg_buffer[2];
void* const x9035 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9034))[0])(kont9034, x9035);
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
void* const kont9037 = prim_car(lst);
void* const lst9039 = prim_cdr(lst);
void* const x9038 = apply_prim_float_u45_u62int(lst9039);
arg_buffer[1] = kont9037;
arg_buffer[2] = x9038;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9037))[0])();
}
else
{
void* const kont9037 = arg_buffer[2];
void* const x9038 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9037))[0])(kont9037, x9038);
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
void* const kont9040 = prim_car(lst);
void* const lst9042 = prim_cdr(lst);
void* const x9041 = apply_prim_int_u45_u62float(lst9042);
arg_buffer[1] = kont9040;
arg_buffer[2] = x9041;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9040))[0])();
}
else
{
void* const kont9040 = arg_buffer[2];
void* const x9041 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9040))[0])(kont9040, x9041);
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
void* const kont9043 = prim_car(lst);
void* const lst9045 = prim_cdr(lst);
void* const x9044 = apply_prim_hash(lst9045);
arg_buffer[1] = kont9043;
arg_buffer[2] = x9044;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9043))[0])();
}
else
{
void* const kont9043 = arg_buffer[2];
void* const x9044 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9043))[0])(kont9043, x9044);
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
void* const kont9046 = prim_car(lst);
void* const lst9048 = prim_cdr(lst);
void* const x9047 = apply_prim_hash_u45ref(lst9048);
arg_buffer[1] = kont9046;
arg_buffer[2] = x9047;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9046))[0])();
}
else
{
void* const kont9046 = arg_buffer[2];
void* const x9047 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9046))[0])(kont9046, x9047);
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
void* const kont9049 = prim_car(lst);
void* const lst9051 = prim_cdr(lst);
void* const x9050 = apply_prim_hash_u45set(lst9051);
arg_buffer[1] = kont9049;
arg_buffer[2] = x9050;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9049))[0])();
}
else
{
void* const kont9049 = arg_buffer[2];
void* const x9050 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9049))[0])(kont9049, x9050);
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
void* const kont9052 = prim_car(lst);
void* const lst9054 = prim_cdr(lst);
void* const x9053 = apply_prim_hash_u45keys(lst9054);
arg_buffer[1] = kont9052;
arg_buffer[2] = x9053;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9052))[0])();
}
else
{
void* const kont9052 = arg_buffer[2];
void* const x9053 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9052))[0])(kont9052, x9053);
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
void* const kont9055 = prim_car(lst);
void* const lst9057 = prim_cdr(lst);
void* const x9056 = apply_prim_hash_u45has_u45key_u63(lst9057);
arg_buffer[1] = kont9055;
arg_buffer[2] = x9056;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9055))[0])();
}
else
{
void* const kont9055 = arg_buffer[2];
void* const x9056 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9055))[0])(kont9055, x9056);
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
void* const kont9058 = prim_car(lst);
void* const lst9060 = prim_cdr(lst);
void* const x9059 = apply_prim_hash_u45count(lst9060);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9058))[0])();
}
else
{
void* const kont9058 = arg_buffer[2];
void* const x9059 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9058))[0])(kont9058, x9059);
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
void* const kont9061 = prim_car(lst);
void* const lst9063 = prim_cdr(lst);
void* const x9062 = apply_prim_set(lst9063);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9061))[0])();
}
else
{
void* const kont9061 = arg_buffer[2];
void* const x9062 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9061))[0])(kont9061, x9062);
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
void* const kont9064 = prim_car(lst);
void* const lst9066 = prim_cdr(lst);
void* const x9065 = apply_prim_set_u45_u62list(lst9066);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9064))[0])();
}
else
{
void* const kont9064 = arg_buffer[2];
void* const x9065 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9064))[0])(kont9064, x9065);
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
void* const kont9067 = prim_car(lst);
void* const lst9069 = prim_cdr(lst);
void* const x9068 = apply_prim_list_u45_u62set(lst9069);
arg_buffer[1] = kont9067;
arg_buffer[2] = x9068;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9067))[0])();
}
else
{
void* const kont9067 = arg_buffer[2];
void* const x9068 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9067))[0])(kont9067, x9068);
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
void* const kont9070 = prim_car(lst);
void* const lst9072 = prim_cdr(lst);
void* const x9071 = apply_prim_set_u45add(lst9072);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9070))[0])();
}
else
{
void* const kont9070 = arg_buffer[2];
void* const x9071 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9070))[0])(kont9070, x9071);
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
void* const kont9073 = prim_car(lst);
void* const lst9075 = prim_cdr(lst);
void* const x9074 = apply_prim_set_u45member_u63(lst9075);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9073))[0])();
}
else
{
void* const kont9073 = arg_buffer[2];
void* const x9074 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9073))[0])(kont9073, x9074);
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
void* const kont9076 = prim_car(lst);
void* const lst9078 = prim_cdr(lst);
void* const x9077 = apply_prim_set_u45remove(lst9078);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9076))[0])();
}
else
{
void* const kont9076 = arg_buffer[2];
void* const x9077 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9076))[0])(kont9076, x9077);
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
void* const kont9079 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9080 = apply_prim_set_u45count(lst9081);
arg_buffer[1] = kont9079;
arg_buffer[2] = x9080;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9079))[0])();
}
else
{
void* const kont9079 = arg_buffer[2];
void* const x9080 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9079))[0])(kont9079, x9080);
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
void* const kont9082 = prim_car(lst);
void* const lst9084 = prim_cdr(lst);
void* const x9083 = apply_prim_string_u63(lst9084);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9082))[0])();
}
else
{
void* const kont9082 = arg_buffer[2];
void* const x9083 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9082))[0])(kont9082, x9083);
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
void* const kont9085 = prim_car(lst);
void* const lst9087 = prim_cdr(lst);
void* const x9086 = apply_prim_string_u45length(lst9087);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9085))[0])();
}
else
{
void* const kont9085 = arg_buffer[2];
void* const x9086 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9085))[0])(kont9085, x9086);
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
void* const kont9088 = prim_car(lst);
void* const lst9090 = prim_cdr(lst);
void* const x9089 = apply_prim_string_u45ref(lst9090);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9088))[0])();
}
else
{
void* const kont9088 = arg_buffer[2];
void* const x9089 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9088))[0])(kont9088, x9089);
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
void* const kont9091 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9092 = apply_prim_substring(lst9093);
arg_buffer[1] = kont9091;
arg_buffer[2] = x9092;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9091))[0])();
}
else
{
void* const kont9091 = arg_buffer[2];
void* const x9092 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9091))[0])(kont9091, x9092);
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
void* const kont9094 = prim_car(lst);
void* const lst9096 = prim_cdr(lst);
void* const x9095 = apply_prim_string_u45append(lst9096);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9094))[0])();
}
else
{
void* const kont9094 = arg_buffer[2];
void* const x9095 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9094))[0])(kont9094, x9095);
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
void* const kont9097 = prim_car(lst);
void* const lst9099 = prim_cdr(lst);
void* const x9098 = apply_prim_string_u45_u62list(lst9099);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9097))[0])();
}
else
{
void* const kont9097 = arg_buffer[2];
void* const x9098 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9097))[0])(kont9097, x9098);
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
void* const kont9100 = prim_car(lst);
void* const lst9102 = prim_cdr(lst);
void* const x9101 = apply_prim_exact_u45floor(lst9102);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9100))[0])();
}
else
{
void* const kont9100 = arg_buffer[2];
void* const x9101 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9100))[0])(kont9100, x9101);
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
void* const kont9103 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9104 = apply_prim_exact_u45ceiling(lst9105);
arg_buffer[1] = kont9103;
arg_buffer[2] = x9104;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9103))[0])();
}
else
{
void* const kont9103 = arg_buffer[2];
void* const x9104 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9103))[0])(kont9103, x9104);
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
void* const kont9106 = prim_car(lst);
void* const lst9108 = prim_cdr(lst);
void* const x9107 = apply_prim_exact_u45round(lst9108);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9106))[0])();
}
else
{
void* const kont9106 = arg_buffer[2];
void* const x9107 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9106))[0])(kont9106, x9107);
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
void* const kont9109 = prim_car(lst);
void* const lst9111 = prim_cdr(lst);
void* const x9110 = apply_prim_abs(lst9111);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9109))[0])();
}
else
{
void* const kont9109 = arg_buffer[2];
void* const x9110 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9109))[0])(kont9109, x9110);
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
void* const kont9112 = prim_car(lst);
void* const lst9114 = prim_cdr(lst);
void* const x9113 = apply_prim_max(lst9114);
arg_buffer[1] = kont9112;
arg_buffer[2] = x9113;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9112))[0])();
}
else
{
void* const kont9112 = arg_buffer[2];
void* const x9113 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9112))[0])(kont9112, x9113);
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
void* const kont9115 = prim_car(lst);
void* const lst9117 = prim_cdr(lst);
void* const x9116 = apply_prim_min(lst9117);
arg_buffer[1] = kont9115;
arg_buffer[2] = x9116;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9115))[0])();
}
else
{
void* const kont9115 = arg_buffer[2];
void* const x9116 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9115))[0])(kont9115, x9116);
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
void* const kont9118 = prim_car(lst);
void* const lst9120 = prim_cdr(lst);
void* const x9119 = apply_prim_expt(lst9120);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9118))[0])();
}
else
{
void* const kont9118 = arg_buffer[2];
void* const x9119 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9118))[0])(kont9118, x9119);
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
void* const kont9121 = prim_car(lst);
void* const lst9123 = prim_cdr(lst);
void* const x9122 = apply_prim_sqrt(lst9123);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9121))[0])();
}
else
{
void* const kont9121 = arg_buffer[2];
void* const x9122 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9121))[0])(kont9121, x9122);
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
void* const kont9124 = prim_car(lst);
void* const lst9126 = prim_cdr(lst);
void* const x9125 = apply_prim_remainder(lst9126);
arg_buffer[1] = kont9124;
arg_buffer[2] = x9125;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9124))[0])();
}
else
{
void* const kont9124 = arg_buffer[2];
void* const x9125 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9124))[0])(kont9124, x9125);
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
void* const kont9127 = prim_car(lst);
void* const lst9129 = prim_cdr(lst);
void* const x9128 = apply_prim_quotient(lst9129);
arg_buffer[1] = kont9127;
arg_buffer[2] = x9128;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9127))[0])();
}
else
{
void* const kont9127 = arg_buffer[2];
void* const x9128 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9127))[0])(kont9127, x9128);
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
void* const kont9130 = prim_car(lst);
void* const lst9132 = prim_cdr(lst);
void* const x9131 = apply_prim_random(lst9132);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9130))[0])();
}
else
{
void* const kont9130 = arg_buffer[2];
void* const x9131 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9130))[0])(kont9130, x9131);
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
void* const kont9133 = prim_car(lst);
void* const lst9135 = prim_cdr(lst);
void* const x9134 = apply_prim_symbol_u63(lst9135);
arg_buffer[1] = kont9133;
arg_buffer[2] = x9134;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9133))[0])();
}
else
{
void* const kont9133 = arg_buffer[2];
void* const x9134 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9133))[0])(kont9133, x9134);
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
void* const kont9136 = prim_car(lst);
void* const lst9138 = prim_cdr(lst);
void* const x9137 = apply_prim_pair_u63(lst9138);
arg_buffer[1] = kont9136;
arg_buffer[2] = x9137;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9136))[0])();
}
else
{
void* const kont9136 = arg_buffer[2];
void* const x9137 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9136))[0])(kont9136, x9137);
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
void* const kont9139 = prim_car(lst);
void* const lst9141 = prim_cdr(lst);
void* const x9140 = apply_prim_positive_u63(lst9141);
arg_buffer[1] = kont9139;
arg_buffer[2] = x9140;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9139))[0])();
}
else
{
void* const kont9139 = arg_buffer[2];
void* const x9140 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9139))[0])(kont9139, x9140);
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
void* const kont9142 = prim_car(lst);
void* const lst9144 = prim_cdr(lst);
void* const x9143 = apply_prim_negative_u63(lst9144);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9142))[0])();
}
else
{
void* const kont9142 = arg_buffer[2];
void* const x9143 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9142))[0])(kont9142, x9143);
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
void* const kont9145 = prim_car(lst);
void* const lst9147 = prim_cdr(lst);
void* const x9146 = apply_prim_list(lst9147);
arg_buffer[1] = kont9145;
arg_buffer[2] = x9146;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9145))[0])();
}
else
{
void* const kont9145 = arg_buffer[2];
void* const x9146 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9145))[0])(kont9145, x9146);
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8877 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8877)[0])(kont8877, apply_prim_equal_u63_2(int8987, apply_prim_modulo_2(x, int8974)));
}

inline void even_u63_spec(void* _8916, void* kont8877, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8877)[0])(kont8877, apply_prim_equal_u63_2(int8987, apply_prim_modulo_2(x, int8974)));
}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8878 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8878)[0])(kont8878, apply_prim_equal_u63_2(int8988, apply_prim_modulo_2(x, int8974)));
}

inline void odd_u63_spec(void* _8917, void* kont8878, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8878)[0])(kont8878, apply_prim_equal_u63_2(int8988, apply_prim_modulo_2(x, int8974)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8879 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8987, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8879)[0])(kont8879, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8879, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8988));
}

}

inline void list_u45ref_spec(void* _8918, void* kont8879, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8987, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8879)[0])(kont8879, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8879, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8988));
}

}

inline void lam8919_fptr() // lam8919 -> generic version 
{
//reading env
void* const env8920 = arg_buffer[1];
//reading env and args
void* const id_8752 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8920);

//if-clause
if(is_true(id_8752))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f8979);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

}

inline void lam8919_spec(void* env8920, void* id_8752) // lam8919 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8920);

//if-clause
if(is_true(id_8752))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], bool_f8979);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[1], apply_prim_car_1(decode_clo_array[2]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], decode_clo_array[2]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8880 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9148 = alloc_kont(lam8919_spec, 3);

//setting env list
clo9148[1] = item;
clo9148[2] = lst;
clo9148[3] = kont8880;
void* f_lam_8881 = encode_clo(clo9148);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8919_spec(f_lam_8881, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8919_spec(f_lam_8881, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8921, void* kont8880, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9149 = alloc_kont(lam8919_spec, 3);

//setting env list
clo9149[1] = item;
clo9149[2] = lst;
clo9149[3] = kont8880;
void* f_lam_8881 = encode_clo(clo9149);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8919_spec(f_lam_8881, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8919_spec(f_lam_8881, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8882 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8882)[0])(kont8882, bool_f8979);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8882)[0])(kont8882, bool_t8978);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8882, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8922, void* kont8882, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8882)[0])(kont8882, bool_f8979);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8882)[0])(kont8882, bool_t8978);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8882, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8923_fptr() // lam8923 -> generic version 
{
//reading env
void* const env8924 = arg_buffer[1];
//reading env and args
void* const id_8767 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8924);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8767));
}

inline void lam8923_spec(void* env8924, void* id_8767) // lam8923 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8924);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8767));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8883 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8883)[0])(kont8883, int8987);
}
else
{

//creating new make-kont closure
void** clo9150 = alloc_kont(lam8923_spec, 2);

//setting env list
clo9150[1] = kont8883;
clo9150[2] = int8988;
void* f_lam_8884 = encode_clo(clo9150);



//clo-app
length_spec(length, f_lam_8884, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8925, void* kont8883, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8883)[0])(kont8883, int8987);
}
else
{

//creating new make-kont closure
void** clo9151 = alloc_kont(lam8923_spec, 2);

//setting env list
clo9151[1] = kont8883;
clo9151[2] = int8988;
void* f_lam_8884 = encode_clo(clo9151);



//clo-app
length_spec(length, f_lam_8884, apply_prim_cdr_1(lst));
}

}

inline void lam8926_fptr() // lam8926 -> generic version 
{
//reading env
void* const env8927 = arg_buffer[1];
//reading env and args
void* const id_8773 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8926_spec(void* env8927, void* id_8773) // lam8926 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8773));
}

inline void lam8928_fptr() // lam8928 -> generic version 
{
//reading env
void* const env8929 = arg_buffer[1];
//reading env and args
void* const id_8771 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8929);

//creating new make-kont closure
void** clo9152 = alloc_kont(lam8926_spec, 2);

//setting env list
clo9152[1] = decode_clo_array[2];
clo9152[2] = id_8771;
void* f_lam_8886 = encode_clo(clo9152);



//clo-app
map_spec(map, f_lam_8886, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8928_spec(void* env8929, void* id_8771) // lam8928 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8929);

//creating new make-kont closure
void** clo9153 = alloc_kont(lam8926_spec, 2);

//setting env list
clo9153[1] = decode_clo_array[2];
clo9153[2] = id_8771;
void* f_lam_8886 = encode_clo(clo9153);



//clo-app
map_spec(map, f_lam_8886, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[3]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8885 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8885)[0])(kont8885, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9154 = alloc_kont(lam8928_spec, 3);

//setting env list
clo9154[1] = proc;
clo9154[2] = kont8885;
clo9154[3] = lst;
void* f_lam_8887 = encode_clo(clo9154);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8887;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8930, void* kont8885, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8885)[0])(kont8885, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9155 = alloc_kont(lam8928_spec, 3);

//setting env list
clo9155[1] = proc;
clo9155[2] = kont8885;
clo9155[3] = lst;
void* f_lam_8887 = encode_clo(clo9155);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8887;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8931_fptr() // lam8931 -> generic version 
{
//reading env
void* const env8932 = arg_buffer[1];
//reading env and args
void* const id_8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8932);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8780));
}

inline void lam8931_spec(void* env8932, void* id_8780) // lam8931 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8932);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8780));
}

inline void lam8933_fptr() // lam8933 -> generic version 
{
//reading env
void* const env8934 = arg_buffer[1];
//reading env and args
void* const id_8777 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8934);

//if-clause
if(is_true(id_8777))
{

//creating new make-kont closure
void** clo9156 = alloc_kont(lam8931_spec, 2);

//setting env list
clo9156[1] = apply_prim_car_1(decode_clo_array[3]);
clo9156[2] = decode_clo_array[1];
void* f_lam_8889 = encode_clo(clo9156);



//clo-app
filter_spec(filter, f_lam_8889, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void lam8933_spec(void* env8934, void* id_8777) // lam8933 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8934);

//if-clause
if(is_true(id_8777))
{

//creating new make-kont closure
void** clo9157 = alloc_kont(lam8931_spec, 2);

//setting env list
clo9157[1] = apply_prim_car_1(decode_clo_array[3]);
clo9157[2] = decode_clo_array[1];
void* f_lam_8889 = encode_clo(clo9157);



//clo-app
filter_spec(filter, f_lam_8889, decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8888 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8888)[0])(kont8888, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9158 = alloc_kont(lam8933_spec, 3);

//setting env list
clo9158[1] = kont8888;
clo9158[2] = op;
clo9158[3] = lst;
void* f_lam_8890 = encode_clo(clo9158);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8890;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8935, void* kont8888, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8888)[0])(kont8888, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9159 = alloc_kont(lam8933_spec, 3);

//setting env list
clo9159[1] = kont8888;
clo9159[2] = op;
clo9159[3] = lst;
void* f_lam_8890 = encode_clo(clo9159);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8890;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8891 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8987)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[0])(kont8891, lst);
}
else
{

//clo-app
drop_spec(drop, kont8891, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8988));
}

}

inline void drop_spec(void* _8936, void* kont8891, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8987)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[0])(kont8891, lst);
}
else
{

//clo-app
drop_spec(drop, kont8891, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8988));
}

}

inline void lam8937_fptr() // lam8937 -> generic version 
{
//reading env
void* const env8938 = arg_buffer[1];
//reading env and args
void* const id_8789 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8938);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[2], id_8789, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8937_spec(void* env8938, void* id_8789) // lam8937 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8938);

//clo-app
foldl_spec(foldl, decode_clo_array[1], decode_clo_array[2], id_8789, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8892 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, acc);
}
else
{

//creating new make-kont closure
void** clo9160 = alloc_kont(lam8937_spec, 3);

//setting env list
clo9160[1] = kont8892;
clo9160[2] = fun;
clo9160[3] = lst;
void* f_lam_8893 = encode_clo(clo9160);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8893;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8939, void* kont8892, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, acc);
}
else
{

//creating new make-kont closure
void** clo9161 = alloc_kont(lam8937_spec, 3);

//setting env list
clo9161[1] = kont8892;
clo9161[2] = fun;
clo9161[3] = lst;
void* f_lam_8893 = encode_clo(clo9161);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8893;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8940_fptr() // lam8940 -> generic version 
{
//reading env
void* const env8941 = arg_buffer[1];
//reading env and args
void* const id_8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8941);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8794;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void lam8940_spec(void* env8941, void* id_8794) // lam8940 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8941);

//clo-app
arg_buffer[1] = decode_clo_array[2];
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8794;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[2]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8894 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8894)[0])(kont8894, acc);
}
else
{

//creating new make-kont closure
void** clo9162 = alloc_kont(lam8940_spec, 3);

//setting env list
clo9162[1] = apply_prim_car_1(lst);
clo9162[2] = fun;
clo9162[3] = kont8894;
void* f_lam_8895 = encode_clo(clo9162);



//clo-app
foldr_spec(foldr, f_lam_8895, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8942, void* kont8894, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8894)[0])(kont8894, acc);
}
else
{

//creating new make-kont closure
void** clo9163 = alloc_kont(lam8940_spec, 3);

//setting env list
clo9163[1] = apply_prim_car_1(lst);
clo9163[2] = fun;
clo9163[3] = kont8894;
void* f_lam_8895 = encode_clo(clo9163);



//clo-app
foldr_spec(foldr, f_lam_8895, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8896 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8896)[0])(kont8896, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8896, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8943, void* kont8896, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8896)[0])(kont8896, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8896, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8897 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8897, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8944, void* kont8897, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8897, lst, apply_prim_list_0());
}

inline void lam8945_fptr() // lam8945 -> generic version 
{
//reading env
void* const env8946 = arg_buffer[1];
//reading env and args
void* const id_8803 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8946);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8803));
}

inline void lam8945_spec(void* env8946, void* id_8803) // lam8945 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8946);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8803));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8898 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8898)[0])(kont8898, rhs);
}
else
{

//creating new make-kont closure
void** clo9164 = alloc_kont(lam8945_spec, 2);

//setting env list
clo9164[1] = kont8898;
clo9164[2] = apply_prim_car_1(lhs);
void* f_lam_8899 = encode_clo(clo9164);



//clo-app
append1_spec(append1, f_lam_8899, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8947, void* kont8898, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8898)[0])(kont8898, rhs);
}
else
{

//creating new make-kont closure
void** clo9165 = alloc_kont(lam8945_spec, 2);

//setting env list
clo9165[1] = kont8898;
clo9165[2] = apply_prim_car_1(lhs);
void* f_lam_8899 = encode_clo(clo9165);



//clo-app
append1_spec(append1, f_lam_8899, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8948_fptr() // lam8948 -> generic version 
{
//reading env
void* const env8949 = arg_buffer[1];
//reading env and args
void* const id_8810 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8949);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8810);
}

inline void lam8948_spec(void* env8949, void* id_8810) // lam8948 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8949);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8810);
}

inline void lam8950_fptr() // lam8950 -> generic version 
{
//reading env
void* const env8951 = arg_buffer[1];
//reading env and args
void* const id_8805 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8951);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[1], id_8805)))
{

//clo-app
append1_spec(append1, decode_clo_array[2], decode_clo_array[3], apply_prim_car_1(decode_clo_array[4]));
}
else
{

//creating new make-kont closure
void** clo9166 = alloc_kont(lam8948_spec, 2);

//setting env list
clo9166[1] = apply_prim_list_0();
clo9166[2] = decode_clo_array[2];
void* f_lam_8901 = encode_clo(clo9166);



//clo-app
append1_spec(append1, f_lam_8901, apply_prim_list_1(decode_clo_array[3]), decode_clo_array[4]);
}

}

inline void lam8950_spec(void* env8951, void* id_8805) // lam8950 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8951);

//if-clause
if(is_true(apply_prim__u61_2(decode_clo_array[1], id_8805)))
{

//clo-app
append1_spec(append1, decode_clo_array[2], decode_clo_array[3], apply_prim_car_1(decode_clo_array[4]));
}
else
{

//creating new make-kont closure
void** clo9167 = alloc_kont(lam8948_spec, 2);

//setting env list
clo9167[1] = apply_prim_list_0();
clo9167[2] = decode_clo_array[2];
void* f_lam_8901 = encode_clo(clo9167);



//clo-app
append1_spec(append1, f_lam_8901, apply_prim_list_1(decode_clo_array[3]), decode_clo_array[4]);
}

}

inline void lam8952_fptr() // lam8952 -> generic version 
{
//reading env
void* const env8953 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//creating new make-kont closure
void** clo9168 = alloc_kont(lam8950_spec, 4);

//setting env list
clo9168[1] = int8988;
clo9168[2] = decode_clo_array[2];
clo9168[3] = decode_clo_array[1];
clo9168[4] = x;
void* f_lam_8902 = encode_clo(clo9168);



//clo-app
length_spec(length, f_lam_8902, x);
}

inline void lam8952_spec(void* env8953, void* x) // lam8952 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//creating new make-kont closure
void** clo9169 = alloc_kont(lam8950_spec, 4);

//setting env list
clo9169[1] = int8988;
clo9169[2] = decode_clo_array[2];
clo9169[3] = decode_clo_array[1];
clo9169[4] = x;
void* f_lam_8902 = encode_clo(clo9169);



//clo-app
length_spec(length, f_lam_8902, x);
}

void append_fptr() // append 
{
//reading env
void* const _8954 = arg_buffer[1];
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
void** clo9170 = alloc_kont(lam8952_spec, 2);

//setting env list
clo9170[1] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9170[2] = apply_prim_car_1(vargs);
void* f_lam_8903 = encode_clo(clo9170);


// kont-clo-app case
lam8952_spec(f_lam_8903, apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
}

inline void lam8955_fptr() // lam8955 -> generic version 
{
//reading env
void* const env8956 = arg_buffer[1];
//reading env and args
void* const xy8813 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8956);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void lam8955_spec(void* env8956, void* xy8813) // lam8955 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8956);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8813);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8904 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8987)))
{

//creating new make-kont closure
void** clo9171 = alloc_kont(lam8955_spec, 1);

//setting env list
clo9171[1] = kont8904;
void* f_lam_8905 = encode_clo(clo9171);



//clo-app
reverse_spec(reverse, f_lam_8905, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8904, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8988), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8957, void* kont8904, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8987)))
{

//creating new make-kont closure
void** clo9172 = alloc_kont(lam8955_spec, 1);

//setting env list
clo9172[1] = kont8904;
void* f_lam_8905 = encode_clo(clo9172);



//clo-app
reverse_spec(reverse, f_lam_8905, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8904, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int8988), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8906 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8906, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8958, void* kont8906, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8906, lst, n, apply_prim_list_0());
}

inline void lam8959_fptr() // lam8959 -> generic version 
{
//reading env
void* const env8960 = arg_buffer[1];
//reading env and args
void* const id_8827 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8827));
}

inline void lam8959_spec(void* env8960, void* id_8827) // lam8959 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8960);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8827));
}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8907 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int8987)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8907)[0])(kont8907, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9173 = alloc_kont(lam8959_spec, 2);

//setting env list
clo9173[1] = kont8907;
clo9173[2] = apply_prim_car_1(lst);
void* f_lam_8908 = encode_clo(clo9173);



//clo-app
list_u45set_spec(list_u45set, f_lam_8908, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int8988), value);
}

}

inline void list_u45set_spec(void* _8961, void* kont8907, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int8987)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8907)[0])(kont8907, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9174 = alloc_kont(lam8959_spec, 2);

//setting env list
clo9174[1] = kont8907;
clo9174[2] = apply_prim_car_1(lst);
void* f_lam_8908 = encode_clo(clo9174);



//clo-app
list_u45set_spec(list_u45set, f_lam_8908, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int8988), value);
}

}

inline void lam8962_fptr() // lam8962 -> generic version 
{
//reading env
void* const env8963 = arg_buffer[1];
//reading env and args
void* const id_8834 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8834;
numArgs = 4;
append_fptr();
}

inline void lam8962_spec(void* env8963, void* id_8834) // lam8962 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[1];
arg_buffer[4] = id_8834;
numArgs = 4;
append_fptr();
}

inline void lam8964_fptr() // lam8964 -> generic version 
{
//reading env
void* const env8965 = arg_buffer[1];
//reading env and args
void* const id_8832 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//creating new make-kont closure
void** clo9175 = alloc_kont(lam8962_spec, 2);

//setting env list
clo9175[1] = id_8832;
clo9175[2] = decode_clo_array[2];
void* f_lam_8910 = encode_clo(clo9175);



//clo-app
flatten_spec(flatten, f_lam_8910, apply_prim_cdr_1(decode_clo_array[1]));
}

inline void lam8964_spec(void* env8965, void* id_8832) // lam8964 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//creating new make-kont closure
void** clo9176 = alloc_kont(lam8962_spec, 2);

//setting env list
clo9176[1] = id_8832;
clo9176[2] = decode_clo_array[2];
void* f_lam_8910 = encode_clo(clo9176);



//clo-app
flatten_spec(flatten, f_lam_8910, apply_prim_cdr_1(decode_clo_array[1]));
}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8909 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9177 = alloc_kont(lam8964_spec, 2);

//setting env list
clo9177[1] = lst;
clo9177[2] = kont8909;
void* f_lam_8911 = encode_clo(clo9177);



//clo-app
flatten_spec(flatten, f_lam_8911, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, apply_prim_list_1(lst));
}

}

}

inline void flatten_spec(void* _8966, void* kont8909, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9178 = alloc_kont(lam8964_spec, 2);

//setting env list
clo9178[1] = lst;
clo9178[2] = kont8909;
void* f_lam_8911 = encode_clo(clo9178);



//clo-app
flatten_spec(flatten, f_lam_8911, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8909)[0])(kont8909, apply_prim_list_1(lst));
}

}

}

inline void call_fptr() // call -> generic version 
{
//reading env and args
void* const kont8912 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8912)[0])(kont8912, apply_prim_list_2(encode_str(new(GC) std::string("(define (ack m n) (if (= m (quote 0)) (+ n (quote 1)) (if (= n (quote 0)) (ack (- m (quote 1)) (quote 1)) (ack (- m (quote 1)) (ack m (- n (quote 1)))))))")), encode_str(new(GC) std::string("(define (brouhaha_main) (ack (quote 3) (quote 12)))"))));
}

inline void call_spec(void* _8967, void* kont8912) // call 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8912)[0])(kont8912, apply_prim_list_2(encode_str(new(GC) std::string("(define (ack m n) (if (= m (quote 0)) (+ n (quote 1)) (if (= n (quote 0)) (ack (- m (quote 1)) (quote 1)) (ack (- m (quote 1)) (ack m (- n (quote 1)))))))")), encode_str(new(GC) std::string("(define (brouhaha_main) (ack (quote 3) (quote 12)))"))));
}

inline void lam8968_fptr() // lam8968 -> generic version 
{
//reading env
void* const env8969 = arg_buffer[1];
//reading env and args
void* const xy8838 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8969);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8838);
}

inline void lam8968_spec(void* env8969, void* xy8838) // lam8968 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8969);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8838);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8913 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9179 = alloc_kont(lam8968_spec, 1);

//setting env list
clo9179[1] = kont8913;
void* f_lam_8914 = encode_clo(clo9179);



//clo-app
call_spec(call, f_lam_8914);
}

inline void brouhaha_main_spec(void* _8970, void* kont8913) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9180 = alloc_kont(lam8968_spec, 1);

//setting env list
clo9180[1] = kont8913;
void* f_lam_8914 = encode_clo(clo9180);



//clo-app
call_spec(call, f_lam_8914);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8987 = reinterpret_cast<void *>(encode_int(0));
bool_t8978 = encode_bool(true);
int8988 = reinterpret_cast<void *>(encode_int(1));
bool_f8979 = encode_bool(false);
int8974 = reinterpret_cast<void *>(encode_int(2));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

