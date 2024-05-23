#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8806;
void* int8807;
void* int8808;



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

void lam8797_fptr(); // lam8797
void lam8797_spec(void* env8798, void* id_8782); // lam8797
void* lam8797 = encode_clo(alloc_clo(lam8797_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8799, void* kont8792, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8800_fptr(); // lam8800
void lam8800_spec(void* env8801, void* id_8785); // lam8800
void* lam8800 = encode_clo(alloc_clo(lam8800_fptr, 0));

void fact_fptr(); // fact
void fact_spec(void* _8802, void* kont8794, void* n); // fact
void* fact = encode_clo(alloc_clo(fact_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8803, void* kont8796); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8809 = prim_car(lst);
void* const lst8811 = prim_cdr(lst);
void* const x8810 = apply_prim__u43(lst8811);
arg_buffer[1] = kont8809;
arg_buffer[2] = x8810;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8809))[0])();
}
else
{
void* const kont8809 = arg_buffer[2];
void* const x8810 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8809))[0])(kont8809, x8810);
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
void* const kont8812 = prim_car(lst);
void* const lst8814 = prim_cdr(lst);
void* const x8813 = apply_prim__u45(lst8814);
arg_buffer[1] = kont8812;
arg_buffer[2] = x8813;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8812))[0])();
}
else
{
void* const kont8812 = arg_buffer[2];
void* const x8813 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8812))[0])(kont8812, x8813);
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
void* const kont8815 = prim_car(lst);
void* const lst8817 = prim_cdr(lst);
void* const x8816 = apply_prim__u42(lst8817);
arg_buffer[1] = kont8815;
arg_buffer[2] = x8816;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8815))[0])();
}
else
{
void* const kont8815 = arg_buffer[2];
void* const x8816 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8815))[0])(kont8815, x8816);
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
void* const kont8818 = prim_car(lst);
void* const lst8820 = prim_cdr(lst);
void* const x8819 = apply_prim__u47(lst8820);
arg_buffer[1] = kont8818;
arg_buffer[2] = x8819;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8818))[0])();
}
else
{
void* const kont8818 = arg_buffer[2];
void* const x8819 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8818))[0])(kont8818, x8819);
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
void* const kont8821 = prim_car(lst);
void* const lst8823 = prim_cdr(lst);
void* const x8822 = apply_prim__u61(lst8823);
arg_buffer[1] = kont8821;
arg_buffer[2] = x8822;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8821))[0])();
}
else
{
void* const kont8821 = arg_buffer[2];
void* const x8822 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8821))[0])(kont8821, x8822);
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
void* const kont8824 = prim_car(lst);
void* const lst8826 = prim_cdr(lst);
void* const x8825 = apply_prim__u62(lst8826);
arg_buffer[1] = kont8824;
arg_buffer[2] = x8825;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8824))[0])();
}
else
{
void* const kont8824 = arg_buffer[2];
void* const x8825 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8824))[0])(kont8824, x8825);
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
void* const kont8827 = prim_car(lst);
void* const lst8829 = prim_cdr(lst);
void* const x8828 = apply_prim__u60(lst8829);
arg_buffer[1] = kont8827;
arg_buffer[2] = x8828;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8827))[0])();
}
else
{
void* const kont8827 = arg_buffer[2];
void* const x8828 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8827))[0])(kont8827, x8828);
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
void* const kont8830 = prim_car(lst);
void* const lst8832 = prim_cdr(lst);
void* const x8831 = apply_prim__u60_u61(lst8832);
arg_buffer[1] = kont8830;
arg_buffer[2] = x8831;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8830))[0])();
}
else
{
void* const kont8830 = arg_buffer[2];
void* const x8831 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8830))[0])(kont8830, x8831);
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
void* const kont8833 = prim_car(lst);
void* const lst8835 = prim_cdr(lst);
void* const x8834 = apply_prim__u62_u61(lst8835);
arg_buffer[1] = kont8833;
arg_buffer[2] = x8834;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8833))[0])();
}
else
{
void* const kont8833 = arg_buffer[2];
void* const x8834 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8833))[0])(kont8833, x8834);
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
void* const kont8836 = prim_car(lst);
void* const lst8838 = prim_cdr(lst);
void* const x8837 = apply_prim_modulo(lst8838);
arg_buffer[1] = kont8836;
arg_buffer[2] = x8837;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8836))[0])();
}
else
{
void* const kont8836 = arg_buffer[2];
void* const x8837 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8836))[0])(kont8836, x8837);
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
void* const kont8839 = prim_car(lst);
void* const lst8841 = prim_cdr(lst);
void* const x8840 = apply_prim_null_u63(lst8841);
arg_buffer[1] = kont8839;
arg_buffer[2] = x8840;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8839))[0])();
}
else
{
void* const kont8839 = arg_buffer[2];
void* const x8840 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8839))[0])(kont8839, x8840);
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
void* const kont8842 = prim_car(lst);
void* const lst8844 = prim_cdr(lst);
void* const x8843 = apply_prim_equal_u63(lst8844);
arg_buffer[1] = kont8842;
arg_buffer[2] = x8843;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8842))[0])();
}
else
{
void* const kont8842 = arg_buffer[2];
void* const x8843 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8842))[0])(kont8842, x8843);
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
void* const kont8845 = prim_car(lst);
void* const lst8847 = prim_cdr(lst);
void* const x8846 = apply_prim_eq_u63(lst8847);
arg_buffer[1] = kont8845;
arg_buffer[2] = x8846;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8845))[0])();
}
else
{
void* const kont8845 = arg_buffer[2];
void* const x8846 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8845))[0])(kont8845, x8846);
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
void* const kont8848 = prim_car(lst);
void* const lst8850 = prim_cdr(lst);
void* const x8849 = apply_prim_cons(lst8850);
arg_buffer[1] = kont8848;
arg_buffer[2] = x8849;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8848))[0])();
}
else
{
void* const kont8848 = arg_buffer[2];
void* const x8849 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8848))[0])(kont8848, x8849);
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
void* const kont8851 = prim_car(lst);
void* const lst8853 = prim_cdr(lst);
void* const x8852 = apply_prim_car(lst8853);
arg_buffer[1] = kont8851;
arg_buffer[2] = x8852;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8851))[0])();
}
else
{
void* const kont8851 = arg_buffer[2];
void* const x8852 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8851))[0])(kont8851, x8852);
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
void* const kont8854 = prim_car(lst);
void* const lst8856 = prim_cdr(lst);
void* const x8855 = apply_prim_cdr(lst8856);
arg_buffer[1] = kont8854;
arg_buffer[2] = x8855;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8854))[0])();
}
else
{
void* const kont8854 = arg_buffer[2];
void* const x8855 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8854))[0])(kont8854, x8855);
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
void* const kont8857 = prim_car(lst);
void* const lst8859 = prim_cdr(lst);
void* const x8858 = apply_prim_float_u45_u62int(lst8859);
arg_buffer[1] = kont8857;
arg_buffer[2] = x8858;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8857))[0])();
}
else
{
void* const kont8857 = arg_buffer[2];
void* const x8858 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8857))[0])(kont8857, x8858);
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
void* const kont8860 = prim_car(lst);
void* const lst8862 = prim_cdr(lst);
void* const x8861 = apply_prim_int_u45_u62float(lst8862);
arg_buffer[1] = kont8860;
arg_buffer[2] = x8861;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8860))[0])();
}
else
{
void* const kont8860 = arg_buffer[2];
void* const x8861 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8860))[0])(kont8860, x8861);
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
void* const kont8863 = prim_car(lst);
void* const lst8865 = prim_cdr(lst);
void* const x8864 = apply_prim_hash(lst8865);
arg_buffer[1] = kont8863;
arg_buffer[2] = x8864;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8863))[0])();
}
else
{
void* const kont8863 = arg_buffer[2];
void* const x8864 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8863))[0])(kont8863, x8864);
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
void* const kont8866 = prim_car(lst);
void* const lst8868 = prim_cdr(lst);
void* const x8867 = apply_prim_hash_u45ref(lst8868);
arg_buffer[1] = kont8866;
arg_buffer[2] = x8867;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8866))[0])();
}
else
{
void* const kont8866 = arg_buffer[2];
void* const x8867 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8866))[0])(kont8866, x8867);
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
void* const kont8869 = prim_car(lst);
void* const lst8871 = prim_cdr(lst);
void* const x8870 = apply_prim_hash_u45set(lst8871);
arg_buffer[1] = kont8869;
arg_buffer[2] = x8870;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8869))[0])();
}
else
{
void* const kont8869 = arg_buffer[2];
void* const x8870 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8869))[0])(kont8869, x8870);
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
void* const kont8872 = prim_car(lst);
void* const lst8874 = prim_cdr(lst);
void* const x8873 = apply_prim_hash_u45keys(lst8874);
arg_buffer[1] = kont8872;
arg_buffer[2] = x8873;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8872))[0])();
}
else
{
void* const kont8872 = arg_buffer[2];
void* const x8873 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8872))[0])(kont8872, x8873);
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
void* const kont8875 = prim_car(lst);
void* const lst8877 = prim_cdr(lst);
void* const x8876 = apply_prim_hash_u45has_u45key_u63(lst8877);
arg_buffer[1] = kont8875;
arg_buffer[2] = x8876;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8875))[0])();
}
else
{
void* const kont8875 = arg_buffer[2];
void* const x8876 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8875))[0])(kont8875, x8876);
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
void* const kont8878 = prim_car(lst);
void* const lst8880 = prim_cdr(lst);
void* const x8879 = apply_prim_hash_u45count(lst8880);
arg_buffer[1] = kont8878;
arg_buffer[2] = x8879;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8878))[0])();
}
else
{
void* const kont8878 = arg_buffer[2];
void* const x8879 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8878))[0])(kont8878, x8879);
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
void* const kont8881 = prim_car(lst);
void* const lst8883 = prim_cdr(lst);
void* const x8882 = apply_prim_set(lst8883);
arg_buffer[1] = kont8881;
arg_buffer[2] = x8882;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8881))[0])();
}
else
{
void* const kont8881 = arg_buffer[2];
void* const x8882 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8881))[0])(kont8881, x8882);
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
void* const kont8884 = prim_car(lst);
void* const lst8886 = prim_cdr(lst);
void* const x8885 = apply_prim_set_u45_u62list(lst8886);
arg_buffer[1] = kont8884;
arg_buffer[2] = x8885;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8884))[0])();
}
else
{
void* const kont8884 = arg_buffer[2];
void* const x8885 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8884))[0])(kont8884, x8885);
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
void* const kont8887 = prim_car(lst);
void* const lst8889 = prim_cdr(lst);
void* const x8888 = apply_prim_list_u45_u62set(lst8889);
arg_buffer[1] = kont8887;
arg_buffer[2] = x8888;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8887))[0])();
}
else
{
void* const kont8887 = arg_buffer[2];
void* const x8888 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8887))[0])(kont8887, x8888);
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
void* const kont8890 = prim_car(lst);
void* const lst8892 = prim_cdr(lst);
void* const x8891 = apply_prim_set_u45add(lst8892);
arg_buffer[1] = kont8890;
arg_buffer[2] = x8891;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8890))[0])();
}
else
{
void* const kont8890 = arg_buffer[2];
void* const x8891 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8890))[0])(kont8890, x8891);
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
void* const kont8893 = prim_car(lst);
void* const lst8895 = prim_cdr(lst);
void* const x8894 = apply_prim_set_u45member_u63(lst8895);
arg_buffer[1] = kont8893;
arg_buffer[2] = x8894;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8893))[0])();
}
else
{
void* const kont8893 = arg_buffer[2];
void* const x8894 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8893))[0])(kont8893, x8894);
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
void* const kont8896 = prim_car(lst);
void* const lst8898 = prim_cdr(lst);
void* const x8897 = apply_prim_set_u45remove(lst8898);
arg_buffer[1] = kont8896;
arg_buffer[2] = x8897;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8896))[0])();
}
else
{
void* const kont8896 = arg_buffer[2];
void* const x8897 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8896))[0])(kont8896, x8897);
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
void* const kont8899 = prim_car(lst);
void* const lst8901 = prim_cdr(lst);
void* const x8900 = apply_prim_set_u45count(lst8901);
arg_buffer[1] = kont8899;
arg_buffer[2] = x8900;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8899))[0])();
}
else
{
void* const kont8899 = arg_buffer[2];
void* const x8900 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8899))[0])(kont8899, x8900);
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
void* const kont8902 = prim_car(lst);
void* const lst8904 = prim_cdr(lst);
void* const x8903 = apply_prim_string_u63(lst8904);
arg_buffer[1] = kont8902;
arg_buffer[2] = x8903;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8902))[0])();
}
else
{
void* const kont8902 = arg_buffer[2];
void* const x8903 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8902))[0])(kont8902, x8903);
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
void* const kont8905 = prim_car(lst);
void* const lst8907 = prim_cdr(lst);
void* const x8906 = apply_prim_string_u45length(lst8907);
arg_buffer[1] = kont8905;
arg_buffer[2] = x8906;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8905))[0])();
}
else
{
void* const kont8905 = arg_buffer[2];
void* const x8906 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8905))[0])(kont8905, x8906);
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
void* const kont8908 = prim_car(lst);
void* const lst8910 = prim_cdr(lst);
void* const x8909 = apply_prim_string_u45ref(lst8910);
arg_buffer[1] = kont8908;
arg_buffer[2] = x8909;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8908))[0])();
}
else
{
void* const kont8908 = arg_buffer[2];
void* const x8909 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8908))[0])(kont8908, x8909);
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
void* const kont8911 = prim_car(lst);
void* const lst8913 = prim_cdr(lst);
void* const x8912 = apply_prim_substring(lst8913);
arg_buffer[1] = kont8911;
arg_buffer[2] = x8912;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8911))[0])();
}
else
{
void* const kont8911 = arg_buffer[2];
void* const x8912 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8911))[0])(kont8911, x8912);
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
void* const kont8914 = prim_car(lst);
void* const lst8916 = prim_cdr(lst);
void* const x8915 = apply_prim_string_u45append(lst8916);
arg_buffer[1] = kont8914;
arg_buffer[2] = x8915;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8914))[0])();
}
else
{
void* const kont8914 = arg_buffer[2];
void* const x8915 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8914))[0])(kont8914, x8915);
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
void* const kont8917 = prim_car(lst);
void* const lst8919 = prim_cdr(lst);
void* const x8918 = apply_prim_string_u45_u62list(lst8919);
arg_buffer[1] = kont8917;
arg_buffer[2] = x8918;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8917))[0])();
}
else
{
void* const kont8917 = arg_buffer[2];
void* const x8918 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8917))[0])(kont8917, x8918);
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
void* const kont8920 = prim_car(lst);
void* const lst8922 = prim_cdr(lst);
void* const x8921 = apply_prim_exact_u45floor(lst8922);
arg_buffer[1] = kont8920;
arg_buffer[2] = x8921;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8920))[0])();
}
else
{
void* const kont8920 = arg_buffer[2];
void* const x8921 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8920))[0])(kont8920, x8921);
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
void* const kont8923 = prim_car(lst);
void* const lst8925 = prim_cdr(lst);
void* const x8924 = apply_prim_exact_u45ceiling(lst8925);
arg_buffer[1] = kont8923;
arg_buffer[2] = x8924;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8923))[0])();
}
else
{
void* const kont8923 = arg_buffer[2];
void* const x8924 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8923))[0])(kont8923, x8924);
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
void* const kont8926 = prim_car(lst);
void* const lst8928 = prim_cdr(lst);
void* const x8927 = apply_prim_exact_u45round(lst8928);
arg_buffer[1] = kont8926;
arg_buffer[2] = x8927;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8926))[0])();
}
else
{
void* const kont8926 = arg_buffer[2];
void* const x8927 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8926))[0])(kont8926, x8927);
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
void* const kont8929 = prim_car(lst);
void* const lst8931 = prim_cdr(lst);
void* const x8930 = apply_prim_abs(lst8931);
arg_buffer[1] = kont8929;
arg_buffer[2] = x8930;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8929))[0])();
}
else
{
void* const kont8929 = arg_buffer[2];
void* const x8930 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8929))[0])(kont8929, x8930);
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
void* const kont8932 = prim_car(lst);
void* const lst8934 = prim_cdr(lst);
void* const x8933 = apply_prim_max(lst8934);
arg_buffer[1] = kont8932;
arg_buffer[2] = x8933;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8932))[0])();
}
else
{
void* const kont8932 = arg_buffer[2];
void* const x8933 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8932))[0])(kont8932, x8933);
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
void* const kont8935 = prim_car(lst);
void* const lst8937 = prim_cdr(lst);
void* const x8936 = apply_prim_min(lst8937);
arg_buffer[1] = kont8935;
arg_buffer[2] = x8936;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8935))[0])();
}
else
{
void* const kont8935 = arg_buffer[2];
void* const x8936 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8935))[0])(kont8935, x8936);
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
void* const kont8938 = prim_car(lst);
void* const lst8940 = prim_cdr(lst);
void* const x8939 = apply_prim_expt(lst8940);
arg_buffer[1] = kont8938;
arg_buffer[2] = x8939;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8938))[0])();
}
else
{
void* const kont8938 = arg_buffer[2];
void* const x8939 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8938))[0])(kont8938, x8939);
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
void* const kont8941 = prim_car(lst);
void* const lst8943 = prim_cdr(lst);
void* const x8942 = apply_prim_sqrt(lst8943);
arg_buffer[1] = kont8941;
arg_buffer[2] = x8942;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8941))[0])();
}
else
{
void* const kont8941 = arg_buffer[2];
void* const x8942 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8941))[0])(kont8941, x8942);
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
void* const kont8944 = prim_car(lst);
void* const lst8946 = prim_cdr(lst);
void* const x8945 = apply_prim_remainder(lst8946);
arg_buffer[1] = kont8944;
arg_buffer[2] = x8945;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8944))[0])();
}
else
{
void* const kont8944 = arg_buffer[2];
void* const x8945 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8944))[0])(kont8944, x8945);
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
void* const kont8947 = prim_car(lst);
void* const lst8949 = prim_cdr(lst);
void* const x8948 = apply_prim_quotient(lst8949);
arg_buffer[1] = kont8947;
arg_buffer[2] = x8948;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8947))[0])();
}
else
{
void* const kont8947 = arg_buffer[2];
void* const x8948 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8947))[0])(kont8947, x8948);
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
void* const kont8950 = prim_car(lst);
void* const lst8952 = prim_cdr(lst);
void* const x8951 = apply_prim_random(lst8952);
arg_buffer[1] = kont8950;
arg_buffer[2] = x8951;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8950))[0])();
}
else
{
void* const kont8950 = arg_buffer[2];
void* const x8951 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8950))[0])(kont8950, x8951);
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
void* const kont8953 = prim_car(lst);
void* const lst8955 = prim_cdr(lst);
void* const x8954 = apply_prim_symbol_u63(lst8955);
arg_buffer[1] = kont8953;
arg_buffer[2] = x8954;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8953))[0])();
}
else
{
void* const kont8953 = arg_buffer[2];
void* const x8954 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8953))[0])(kont8953, x8954);
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
void* const kont8956 = prim_car(lst);
void* const lst8958 = prim_cdr(lst);
void* const x8957 = apply_prim_pair_u63(lst8958);
arg_buffer[1] = kont8956;
arg_buffer[2] = x8957;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8956))[0])();
}
else
{
void* const kont8956 = arg_buffer[2];
void* const x8957 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8956))[0])(kont8956, x8957);
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
void* const kont8959 = prim_car(lst);
void* const lst8961 = prim_cdr(lst);
void* const x8960 = apply_prim_positive_u63(lst8961);
arg_buffer[1] = kont8959;
arg_buffer[2] = x8960;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8959))[0])();
}
else
{
void* const kont8959 = arg_buffer[2];
void* const x8960 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8959))[0])(kont8959, x8960);
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
void* const kont8962 = prim_car(lst);
void* const lst8964 = prim_cdr(lst);
void* const x8963 = apply_prim_negative_u63(lst8964);
arg_buffer[1] = kont8962;
arg_buffer[2] = x8963;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8962))[0])();
}
else
{
void* const kont8962 = arg_buffer[2];
void* const x8963 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8962))[0])(kont8962, x8963);
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
void* const kont8965 = prim_car(lst);
void* const lst8967 = prim_cdr(lst);
void* const x8966 = apply_prim_list(lst8967);
arg_buffer[1] = kont8965;
arg_buffer[2] = x8966;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8965))[0])();
}
else
{
void* const kont8965 = arg_buffer[2];
void* const x8966 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8965))[0])(kont8965, x8966);
}

}

inline void lam8797_fptr() // lam8797 -> generic version 
{
//reading env
void* const env8798 = arg_buffer[1];
//reading env and args
void* const id_8782 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8798);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8782));
}

inline void lam8797_spec(void* env8798, void* id_8782) // lam8797 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8798);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u43_2(decode_clo_array[1], id_8782));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8792 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8792)[0])(kont8792, int8806);
}
else
{

//creating new make-kont closure
void** clo8968 = alloc_kont(lam8797_spec, 2);

//setting env list
clo8968[1] = int8807;
clo8968[2] = kont8792;
void* f_lam_8793 = encode_clo(clo8968);



//clo-app
length_spec(length, f_lam_8793, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8799, void* kont8792, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8792)[0])(kont8792, int8806);
}
else
{

//creating new make-kont closure
void** clo8969 = alloc_kont(lam8797_spec, 2);

//setting env list
clo8969[1] = int8807;
clo8969[2] = kont8792;
void* f_lam_8793 = encode_clo(clo8969);



//clo-app
length_spec(length, f_lam_8793, apply_prim_cdr_1(lst));
}

}

inline void lam8800_fptr() // lam8800 -> generic version 
{
//reading env
void* const env8801 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8801);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u42_2(decode_clo_array[1], id_8785));
}

inline void lam8800_spec(void* env8801, void* id_8785) // lam8800 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8801);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim__u42_2(decode_clo_array[1], id_8785));
}

inline void fact_fptr() // fact -> generic version 
{
//reading env and args
void* const kont8794 = arg_buffer[2];
void* const n = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8806, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8794)[0])(kont8794, int8807);
}
else
{

//creating new make-kont closure
void** clo8970 = alloc_kont(lam8800_spec, 2);

//setting env list
clo8970[1] = n;
clo8970[2] = kont8794;
void* f_lam_8795 = encode_clo(clo8970);



//clo-app
fact_spec(fact, f_lam_8795, apply_prim__u45_2(n, int8807));
}

}

inline void fact_spec(void* _8802, void* kont8794, void* n) // fact 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8806, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8794)[0])(kont8794, int8807);
}
else
{

//creating new make-kont closure
void** clo8971 = alloc_kont(lam8800_spec, 2);

//setting env list
clo8971[1] = n;
clo8971[2] = kont8794;
void* f_lam_8795 = encode_clo(clo8971);



//clo-app
fact_spec(fact, f_lam_8795, apply_prim__u45_2(n, int8807));
}

}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fact_spec(fact, kont8796, int8808);
}

inline void brouhaha_main_spec(void* _8803, void* kont8796) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
fact_spec(fact, kont8796, int8808);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8806 = reinterpret_cast<void *>(encode_int(0));
int8807 = reinterpret_cast<void *>(encode_int(1));
int8808 = reinterpret_cast<void *>(encode_int(5));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

