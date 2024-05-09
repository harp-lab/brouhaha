#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8772;
void* int8773;
void* int8774;
void* int8771;



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

void lam8763_fptr(); // lam8763
void lam8763_spec(void* env8764, void* id_8749); // lam8763
void* lam8763 = encode_clo(alloc_clo(lam8763_fptr, 0));

void call_u45f_fptr(); // call-f
void call_u45f_spec(void* _8765, void* kont8758, void* f, void* x, void* y, void* z); // call-f
void* call_u45f = encode_clo(alloc_clo(call_u45f_fptr, 0));

void lam8766_fptr(); // lam8766
void lam8766_spec(void* env8767, void* xy8750); // lam8766
void* lam8766 = encode_clo(alloc_clo(lam8766_fptr, 0));

void intermediate_fptr(); // intermediate
void intermediate_spec(void* _8768, void* kont8760, void* x, void* y, void* z); // intermediate
void* intermediate = encode_clo(alloc_clo(intermediate_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8769, void* kont8762); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8775 = prim_car(lst);
void* const lst8777 = prim_cdr(lst);
void* const x8776 = apply_prim__u43(lst8777);
arg_buffer[1] = kont8775;
arg_buffer[2] = x8776;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8775))[0])();
}
else
{
void* const kont8775 = arg_buffer[2];
void* const x8776 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8775))[0])(kont8775, x8776);
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
void* const kont8778 = prim_car(lst);
void* const lst8780 = prim_cdr(lst);
void* const x8779 = apply_prim__u45(lst8780);
arg_buffer[1] = kont8778;
arg_buffer[2] = x8779;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8778))[0])();
}
else
{
void* const kont8778 = arg_buffer[2];
void* const x8779 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8778))[0])(kont8778, x8779);
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
void* const kont8781 = prim_car(lst);
void* const lst8783 = prim_cdr(lst);
void* const x8782 = apply_prim__u42(lst8783);
arg_buffer[1] = kont8781;
arg_buffer[2] = x8782;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8781))[0])();
}
else
{
void* const kont8781 = arg_buffer[2];
void* const x8782 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8781))[0])(kont8781, x8782);
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
void* const kont8784 = prim_car(lst);
void* const lst8786 = prim_cdr(lst);
void* const x8785 = apply_prim__u47(lst8786);
arg_buffer[1] = kont8784;
arg_buffer[2] = x8785;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8784))[0])();
}
else
{
void* const kont8784 = arg_buffer[2];
void* const x8785 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8784))[0])(kont8784, x8785);
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
void* const kont8787 = prim_car(lst);
void* const lst8789 = prim_cdr(lst);
void* const x8788 = apply_prim__u61(lst8789);
arg_buffer[1] = kont8787;
arg_buffer[2] = x8788;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8787))[0])();
}
else
{
void* const kont8787 = arg_buffer[2];
void* const x8788 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8787))[0])(kont8787, x8788);
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
void* const kont8790 = prim_car(lst);
void* const lst8792 = prim_cdr(lst);
void* const x8791 = apply_prim__u62(lst8792);
arg_buffer[1] = kont8790;
arg_buffer[2] = x8791;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8790))[0])();
}
else
{
void* const kont8790 = arg_buffer[2];
void* const x8791 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8790))[0])(kont8790, x8791);
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
void* const kont8793 = prim_car(lst);
void* const lst8795 = prim_cdr(lst);
void* const x8794 = apply_prim__u60(lst8795);
arg_buffer[1] = kont8793;
arg_buffer[2] = x8794;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8793))[0])();
}
else
{
void* const kont8793 = arg_buffer[2];
void* const x8794 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8793))[0])(kont8793, x8794);
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
void* const kont8796 = prim_car(lst);
void* const lst8798 = prim_cdr(lst);
void* const x8797 = apply_prim__u60_u61(lst8798);
arg_buffer[1] = kont8796;
arg_buffer[2] = x8797;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8796))[0])();
}
else
{
void* const kont8796 = arg_buffer[2];
void* const x8797 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8796))[0])(kont8796, x8797);
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
void* const kont8799 = prim_car(lst);
void* const lst8801 = prim_cdr(lst);
void* const x8800 = apply_prim__u62_u61(lst8801);
arg_buffer[1] = kont8799;
arg_buffer[2] = x8800;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8799))[0])();
}
else
{
void* const kont8799 = arg_buffer[2];
void* const x8800 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8799))[0])(kont8799, x8800);
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
void* const kont8802 = prim_car(lst);
void* const lst8804 = prim_cdr(lst);
void* const x8803 = apply_prim_modulo(lst8804);
arg_buffer[1] = kont8802;
arg_buffer[2] = x8803;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8802))[0])();
}
else
{
void* const kont8802 = arg_buffer[2];
void* const x8803 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8802))[0])(kont8802, x8803);
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
void* const kont8805 = prim_car(lst);
void* const lst8807 = prim_cdr(lst);
void* const x8806 = apply_prim_null_u63(lst8807);
arg_buffer[1] = kont8805;
arg_buffer[2] = x8806;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8805))[0])();
}
else
{
void* const kont8805 = arg_buffer[2];
void* const x8806 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8805))[0])(kont8805, x8806);
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
void* const kont8808 = prim_car(lst);
void* const lst8810 = prim_cdr(lst);
void* const x8809 = apply_prim_equal_u63(lst8810);
arg_buffer[1] = kont8808;
arg_buffer[2] = x8809;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8808))[0])();
}
else
{
void* const kont8808 = arg_buffer[2];
void* const x8809 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8808))[0])(kont8808, x8809);
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
void* const kont8811 = prim_car(lst);
void* const lst8813 = prim_cdr(lst);
void* const x8812 = apply_prim_eq_u63(lst8813);
arg_buffer[1] = kont8811;
arg_buffer[2] = x8812;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8811))[0])();
}
else
{
void* const kont8811 = arg_buffer[2];
void* const x8812 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8811))[0])(kont8811, x8812);
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
void* const kont8814 = prim_car(lst);
void* const lst8816 = prim_cdr(lst);
void* const x8815 = apply_prim_cons(lst8816);
arg_buffer[1] = kont8814;
arg_buffer[2] = x8815;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8814))[0])();
}
else
{
void* const kont8814 = arg_buffer[2];
void* const x8815 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8814))[0])(kont8814, x8815);
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
void* const kont8817 = prim_car(lst);
void* const lst8819 = prim_cdr(lst);
void* const x8818 = apply_prim_car(lst8819);
arg_buffer[1] = kont8817;
arg_buffer[2] = x8818;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8817))[0])();
}
else
{
void* const kont8817 = arg_buffer[2];
void* const x8818 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8817))[0])(kont8817, x8818);
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
void* const kont8820 = prim_car(lst);
void* const lst8822 = prim_cdr(lst);
void* const x8821 = apply_prim_cdr(lst8822);
arg_buffer[1] = kont8820;
arg_buffer[2] = x8821;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8820))[0])();
}
else
{
void* const kont8820 = arg_buffer[2];
void* const x8821 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8820))[0])(kont8820, x8821);
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
void* const kont8823 = prim_car(lst);
void* const lst8825 = prim_cdr(lst);
void* const x8824 = apply_prim_float_u45_u62int(lst8825);
arg_buffer[1] = kont8823;
arg_buffer[2] = x8824;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8823))[0])();
}
else
{
void* const kont8823 = arg_buffer[2];
void* const x8824 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8823))[0])(kont8823, x8824);
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
void* const kont8826 = prim_car(lst);
void* const lst8828 = prim_cdr(lst);
void* const x8827 = apply_prim_int_u45_u62float(lst8828);
arg_buffer[1] = kont8826;
arg_buffer[2] = x8827;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8826))[0])();
}
else
{
void* const kont8826 = arg_buffer[2];
void* const x8827 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8826))[0])(kont8826, x8827);
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
void* const kont8829 = prim_car(lst);
void* const lst8831 = prim_cdr(lst);
void* const x8830 = apply_prim_hash(lst8831);
arg_buffer[1] = kont8829;
arg_buffer[2] = x8830;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8829))[0])();
}
else
{
void* const kont8829 = arg_buffer[2];
void* const x8830 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8829))[0])(kont8829, x8830);
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
void* const kont8832 = prim_car(lst);
void* const lst8834 = prim_cdr(lst);
void* const x8833 = apply_prim_hash_u45ref(lst8834);
arg_buffer[1] = kont8832;
arg_buffer[2] = x8833;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8832))[0])();
}
else
{
void* const kont8832 = arg_buffer[2];
void* const x8833 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8832))[0])(kont8832, x8833);
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
void* const kont8835 = prim_car(lst);
void* const lst8837 = prim_cdr(lst);
void* const x8836 = apply_prim_hash_u45set(lst8837);
arg_buffer[1] = kont8835;
arg_buffer[2] = x8836;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8835))[0])();
}
else
{
void* const kont8835 = arg_buffer[2];
void* const x8836 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8835))[0])(kont8835, x8836);
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
void* const kont8838 = prim_car(lst);
void* const lst8840 = prim_cdr(lst);
void* const x8839 = apply_prim_hash_u45keys(lst8840);
arg_buffer[1] = kont8838;
arg_buffer[2] = x8839;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8838))[0])();
}
else
{
void* const kont8838 = arg_buffer[2];
void* const x8839 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8838))[0])(kont8838, x8839);
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
void* const kont8841 = prim_car(lst);
void* const lst8843 = prim_cdr(lst);
void* const x8842 = apply_prim_hash_u45has_u45key_u63(lst8843);
arg_buffer[1] = kont8841;
arg_buffer[2] = x8842;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8841))[0])();
}
else
{
void* const kont8841 = arg_buffer[2];
void* const x8842 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8841))[0])(kont8841, x8842);
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
void* const kont8844 = prim_car(lst);
void* const lst8846 = prim_cdr(lst);
void* const x8845 = apply_prim_hash_u45count(lst8846);
arg_buffer[1] = kont8844;
arg_buffer[2] = x8845;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8844))[0])();
}
else
{
void* const kont8844 = arg_buffer[2];
void* const x8845 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8844))[0])(kont8844, x8845);
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
void* const kont8847 = prim_car(lst);
void* const lst8849 = prim_cdr(lst);
void* const x8848 = apply_prim_set(lst8849);
arg_buffer[1] = kont8847;
arg_buffer[2] = x8848;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8847))[0])();
}
else
{
void* const kont8847 = arg_buffer[2];
void* const x8848 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8847))[0])(kont8847, x8848);
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
void* const kont8850 = prim_car(lst);
void* const lst8852 = prim_cdr(lst);
void* const x8851 = apply_prim_set_u45_u62list(lst8852);
arg_buffer[1] = kont8850;
arg_buffer[2] = x8851;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8850))[0])();
}
else
{
void* const kont8850 = arg_buffer[2];
void* const x8851 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8850))[0])(kont8850, x8851);
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
void* const kont8853 = prim_car(lst);
void* const lst8855 = prim_cdr(lst);
void* const x8854 = apply_prim_list_u45_u62set(lst8855);
arg_buffer[1] = kont8853;
arg_buffer[2] = x8854;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8853))[0])();
}
else
{
void* const kont8853 = arg_buffer[2];
void* const x8854 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8853))[0])(kont8853, x8854);
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
void* const kont8856 = prim_car(lst);
void* const lst8858 = prim_cdr(lst);
void* const x8857 = apply_prim_set_u45add(lst8858);
arg_buffer[1] = kont8856;
arg_buffer[2] = x8857;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8856))[0])();
}
else
{
void* const kont8856 = arg_buffer[2];
void* const x8857 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8856))[0])(kont8856, x8857);
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
void* const kont8859 = prim_car(lst);
void* const lst8861 = prim_cdr(lst);
void* const x8860 = apply_prim_set_u45member_u63(lst8861);
arg_buffer[1] = kont8859;
arg_buffer[2] = x8860;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8859))[0])();
}
else
{
void* const kont8859 = arg_buffer[2];
void* const x8860 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8859))[0])(kont8859, x8860);
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
void* const kont8862 = prim_car(lst);
void* const lst8864 = prim_cdr(lst);
void* const x8863 = apply_prim_set_u45remove(lst8864);
arg_buffer[1] = kont8862;
arg_buffer[2] = x8863;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8862))[0])();
}
else
{
void* const kont8862 = arg_buffer[2];
void* const x8863 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8862))[0])(kont8862, x8863);
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
void* const kont8865 = prim_car(lst);
void* const lst8867 = prim_cdr(lst);
void* const x8866 = apply_prim_set_u45count(lst8867);
arg_buffer[1] = kont8865;
arg_buffer[2] = x8866;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8865))[0])();
}
else
{
void* const kont8865 = arg_buffer[2];
void* const x8866 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8865))[0])(kont8865, x8866);
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
void* const kont8868 = prim_car(lst);
void* const lst8870 = prim_cdr(lst);
void* const x8869 = apply_prim_string_u63(lst8870);
arg_buffer[1] = kont8868;
arg_buffer[2] = x8869;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8868))[0])();
}
else
{
void* const kont8868 = arg_buffer[2];
void* const x8869 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8868))[0])(kont8868, x8869);
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
void* const kont8871 = prim_car(lst);
void* const lst8873 = prim_cdr(lst);
void* const x8872 = apply_prim_string_u45length(lst8873);
arg_buffer[1] = kont8871;
arg_buffer[2] = x8872;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8871))[0])();
}
else
{
void* const kont8871 = arg_buffer[2];
void* const x8872 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8871))[0])(kont8871, x8872);
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
void* const kont8874 = prim_car(lst);
void* const lst8876 = prim_cdr(lst);
void* const x8875 = apply_prim_string_u45ref(lst8876);
arg_buffer[1] = kont8874;
arg_buffer[2] = x8875;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8874))[0])();
}
else
{
void* const kont8874 = arg_buffer[2];
void* const x8875 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8874))[0])(kont8874, x8875);
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
void* const kont8877 = prim_car(lst);
void* const lst8879 = prim_cdr(lst);
void* const x8878 = apply_prim_substring(lst8879);
arg_buffer[1] = kont8877;
arg_buffer[2] = x8878;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8877))[0])();
}
else
{
void* const kont8877 = arg_buffer[2];
void* const x8878 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8877))[0])(kont8877, x8878);
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
void* const kont8880 = prim_car(lst);
void* const lst8882 = prim_cdr(lst);
void* const x8881 = apply_prim_string_u45append(lst8882);
arg_buffer[1] = kont8880;
arg_buffer[2] = x8881;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8880))[0])();
}
else
{
void* const kont8880 = arg_buffer[2];
void* const x8881 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8880))[0])(kont8880, x8881);
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
void* const kont8883 = prim_car(lst);
void* const lst8885 = prim_cdr(lst);
void* const x8884 = apply_prim_string_u45_u62list(lst8885);
arg_buffer[1] = kont8883;
arg_buffer[2] = x8884;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8883))[0])();
}
else
{
void* const kont8883 = arg_buffer[2];
void* const x8884 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8883))[0])(kont8883, x8884);
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
void* const kont8886 = prim_car(lst);
void* const lst8888 = prim_cdr(lst);
void* const x8887 = apply_prim_exact_u45floor(lst8888);
arg_buffer[1] = kont8886;
arg_buffer[2] = x8887;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8886))[0])();
}
else
{
void* const kont8886 = arg_buffer[2];
void* const x8887 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8886))[0])(kont8886, x8887);
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
void* const kont8889 = prim_car(lst);
void* const lst8891 = prim_cdr(lst);
void* const x8890 = apply_prim_exact_u45ceiling(lst8891);
arg_buffer[1] = kont8889;
arg_buffer[2] = x8890;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8889))[0])();
}
else
{
void* const kont8889 = arg_buffer[2];
void* const x8890 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8889))[0])(kont8889, x8890);
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
void* const kont8892 = prim_car(lst);
void* const lst8894 = prim_cdr(lst);
void* const x8893 = apply_prim_exact_u45round(lst8894);
arg_buffer[1] = kont8892;
arg_buffer[2] = x8893;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8892))[0])();
}
else
{
void* const kont8892 = arg_buffer[2];
void* const x8893 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8892))[0])(kont8892, x8893);
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
void* const kont8895 = prim_car(lst);
void* const lst8897 = prim_cdr(lst);
void* const x8896 = apply_prim_abs(lst8897);
arg_buffer[1] = kont8895;
arg_buffer[2] = x8896;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8895))[0])();
}
else
{
void* const kont8895 = arg_buffer[2];
void* const x8896 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8895))[0])(kont8895, x8896);
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
void* const kont8898 = prim_car(lst);
void* const lst8900 = prim_cdr(lst);
void* const x8899 = apply_prim_max(lst8900);
arg_buffer[1] = kont8898;
arg_buffer[2] = x8899;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8898))[0])();
}
else
{
void* const kont8898 = arg_buffer[2];
void* const x8899 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8898))[0])(kont8898, x8899);
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
void* const kont8901 = prim_car(lst);
void* const lst8903 = prim_cdr(lst);
void* const x8902 = apply_prim_min(lst8903);
arg_buffer[1] = kont8901;
arg_buffer[2] = x8902;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8901))[0])();
}
else
{
void* const kont8901 = arg_buffer[2];
void* const x8902 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8901))[0])(kont8901, x8902);
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
void* const kont8904 = prim_car(lst);
void* const lst8906 = prim_cdr(lst);
void* const x8905 = apply_prim_expt(lst8906);
arg_buffer[1] = kont8904;
arg_buffer[2] = x8905;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8904))[0])();
}
else
{
void* const kont8904 = arg_buffer[2];
void* const x8905 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8904))[0])(kont8904, x8905);
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
void* const kont8907 = prim_car(lst);
void* const lst8909 = prim_cdr(lst);
void* const x8908 = apply_prim_sqrt(lst8909);
arg_buffer[1] = kont8907;
arg_buffer[2] = x8908;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8907))[0])();
}
else
{
void* const kont8907 = arg_buffer[2];
void* const x8908 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8907))[0])(kont8907, x8908);
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
void* const kont8910 = prim_car(lst);
void* const lst8912 = prim_cdr(lst);
void* const x8911 = apply_prim_remainder(lst8912);
arg_buffer[1] = kont8910;
arg_buffer[2] = x8911;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8910))[0])();
}
else
{
void* const kont8910 = arg_buffer[2];
void* const x8911 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8910))[0])(kont8910, x8911);
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
void* const kont8913 = prim_car(lst);
void* const lst8915 = prim_cdr(lst);
void* const x8914 = apply_prim_quotient(lst8915);
arg_buffer[1] = kont8913;
arg_buffer[2] = x8914;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8913))[0])();
}
else
{
void* const kont8913 = arg_buffer[2];
void* const x8914 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8913))[0])(kont8913, x8914);
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
void* const kont8916 = prim_car(lst);
void* const lst8918 = prim_cdr(lst);
void* const x8917 = apply_prim_random(lst8918);
arg_buffer[1] = kont8916;
arg_buffer[2] = x8917;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8916))[0])();
}
else
{
void* const kont8916 = arg_buffer[2];
void* const x8917 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8916))[0])(kont8916, x8917);
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
void* const kont8919 = prim_car(lst);
void* const lst8921 = prim_cdr(lst);
void* const x8920 = apply_prim_symbol_u63(lst8921);
arg_buffer[1] = kont8919;
arg_buffer[2] = x8920;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8919))[0])();
}
else
{
void* const kont8919 = arg_buffer[2];
void* const x8920 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8919))[0])(kont8919, x8920);
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
void* const kont8922 = prim_car(lst);
void* const lst8924 = prim_cdr(lst);
void* const x8923 = apply_prim_pair_u63(lst8924);
arg_buffer[1] = kont8922;
arg_buffer[2] = x8923;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8922))[0])();
}
else
{
void* const kont8922 = arg_buffer[2];
void* const x8923 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8922))[0])(kont8922, x8923);
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
void* const kont8925 = prim_car(lst);
void* const lst8927 = prim_cdr(lst);
void* const x8926 = apply_prim_positive_u63(lst8927);
arg_buffer[1] = kont8925;
arg_buffer[2] = x8926;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8925))[0])();
}
else
{
void* const kont8925 = arg_buffer[2];
void* const x8926 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8925))[0])(kont8925, x8926);
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
void* const kont8928 = prim_car(lst);
void* const lst8930 = prim_cdr(lst);
void* const x8929 = apply_prim_negative_u63(lst8930);
arg_buffer[1] = kont8928;
arg_buffer[2] = x8929;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8928))[0])();
}
else
{
void* const kont8928 = arg_buffer[2];
void* const x8929 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8928))[0])(kont8928, x8929);
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
void* const kont8931 = prim_car(lst);
void* const lst8933 = prim_cdr(lst);
void* const x8932 = apply_prim_list(lst8933);
arg_buffer[1] = kont8931;
arg_buffer[2] = x8932;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8931))[0])();
}
else
{
void* const kont8931 = arg_buffer[2];
void* const x8932 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8931))[0])(kont8931, x8932);
}

}

inline void lam8763_fptr() // lam8763 -> generic version 
{
//reading env
void* const env8764 = arg_buffer[1];
//reading env and args
void* const id_8749 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8764);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim__u43_3(decode_clo_array[2], decode_clo_array[1], id_8749));
}

inline void lam8763_spec(void* env8764, void* id_8749) // lam8763 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8764);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[3])[0])(decode_clo_array[3], apply_prim__u43_3(decode_clo_array[2], decode_clo_array[1], id_8749));
}

inline void call_u45f_fptr() // call-f -> generic version 
{
//reading env and args
void* const kont8758 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const x = arg_buffer[4];
void* const y = arg_buffer[5];
void* const z = arg_buffer[6];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8934 = alloc_kont(lam8763_spec, 3);

//setting env list
clo8934[1] = apply_prim__u43_3(x, y, z);
clo8934[2] = apply_prim__u43_2(int8771, x);
clo8934[3] = kont8758;
void* f_lam_8759 = encode_clo(clo8934);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8759;
arg_buffer[3] = int8771;
arg_buffer[4] = x;
arg_buffer[5] = y;
arg_buffer[6] = z;
numArgs = 6;

_u43_fptr();
}

inline void call_u45f_spec(void* _8765, void* kont8758, void* f, void* x, void* y, void* z) // call-f 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8935 = alloc_kont(lam8763_spec, 3);

//setting env list
clo8935[1] = apply_prim__u43_3(x, y, z);
clo8935[2] = apply_prim__u43_2(int8771, x);
clo8935[3] = kont8758;
void* f_lam_8759 = encode_clo(clo8935);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8759;
arg_buffer[3] = int8771;
arg_buffer[4] = x;
arg_buffer[5] = y;
arg_buffer[6] = z;
numArgs = 6;

_u43_fptr();
}

inline void lam8766_fptr() // lam8766 -> generic version 
{
//reading env
void* const env8767 = arg_buffer[1];
//reading env and args
void* const xy8750 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8767);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8750);
}

inline void lam8766_spec(void* env8767, void* xy8750) // lam8766 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8767);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8750);
}

inline void intermediate_fptr() // intermediate -> generic version 
{
//reading env and args
void* const kont8760 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const y = arg_buffer[4];
void* const z = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8936 = alloc_kont(lam8766_spec, 1);

//setting env list
clo8936[1] = kont8760;
void* f_lam_8761 = encode_clo(clo8936);



//clo-app
call_u45f_spec(call_u45f, f_lam_8761, _u43, x, y, z);
}

inline void intermediate_spec(void* _8768, void* kont8760, void* x, void* y, void* z) // intermediate 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8937 = alloc_kont(lam8766_spec, 1);

//setting env list
clo8937[1] = kont8760;
void* f_lam_8761 = encode_clo(clo8937);



//clo-app
call_u45f_spec(call_u45f, f_lam_8761, _u43, x, y, z);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8762 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
intermediate_spec(intermediate, kont8762, int8772, int8773, int8774);
}

inline void brouhaha_main_spec(void* _8769, void* kont8762) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
intermediate_spec(intermediate, kont8762, int8772, int8773, int8774);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8772 = reinterpret_cast<void *>(encode_int(1));
int8773 = reinterpret_cast<void *>(encode_int(2));
int8774 = reinterpret_cast<void *>(encode_int(3));
int8771 = reinterpret_cast<void *>(encode_int(10));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

