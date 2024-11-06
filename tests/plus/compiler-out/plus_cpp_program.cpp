#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8810;
void* int8802;
void* int8803;
void* int8804;
void* int8805;
void* int8809;
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

void null_u63_fptr(); // null?
void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void cons_fptr(); // cons
void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr(); // car
void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr(); // cdr
void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8795_fptr(); // lam8795
void lam8795_spec(void* env8796, void* id_8784); // lam8795
void* lam8795 = encode_clo(alloc_clo(lam8795_fptr, 0));

void lam8797_fptr(); // lam8797
void lam8797_spec(void* env8798, void* id_8781); // lam8797
void* lam8797 = encode_clo(alloc_clo(lam8797_fptr, 0));

void call_fptr(); // call
void call_spec(void* _8799, void* kont8791, void* x); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8800, void* kont8794); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8811 = prim_car(lst);
void* const lst8813 = prim_cdr(lst);
void* const x8812 = apply_prim__u43(lst8813);
arg_buffer[1] = kont8811;
arg_buffer[2] = x8812;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8811))[0])();
}
else
{
void* const kont8811 = arg_buffer[2];
void* const x8812 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8811))[0])(kont8811, x8812);
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
void* const kont8814 = prim_car(lst);
void* const lst8816 = prim_cdr(lst);
void* const x8815 = apply_prim__u45(lst8816);
arg_buffer[1] = kont8814;
arg_buffer[2] = x8815;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8814))[0])();
}
else
{
void* const kont8814 = arg_buffer[2];
void* const x8815 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8814))[0])(kont8814, x8815);
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
void* const kont8817 = prim_car(lst);
void* const lst8819 = prim_cdr(lst);
void* const x8818 = apply_prim__u42(lst8819);
arg_buffer[1] = kont8817;
arg_buffer[2] = x8818;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8817))[0])();
}
else
{
void* const kont8817 = arg_buffer[2];
void* const x8818 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8817))[0])(kont8817, x8818);
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
void* const kont8820 = prim_car(lst);
void* const lst8822 = prim_cdr(lst);
void* const x8821 = apply_prim__u47(lst8822);
arg_buffer[1] = kont8820;
arg_buffer[2] = x8821;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8820))[0])();
}
else
{
void* const kont8820 = arg_buffer[2];
void* const x8821 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8820))[0])(kont8820, x8821);
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
void* const kont8823 = prim_car(lst);
void* const lst8825 = prim_cdr(lst);
void* const x8824 = apply_prim__u61(lst8825);
arg_buffer[1] = kont8823;
arg_buffer[2] = x8824;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8823))[0])();
}
else
{
void* const kont8823 = arg_buffer[2];
void* const x8824 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8823))[0])(kont8823, x8824);
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
void* const kont8826 = prim_car(lst);
void* const lst8828 = prim_cdr(lst);
void* const x8827 = apply_prim__u62(lst8828);
arg_buffer[1] = kont8826;
arg_buffer[2] = x8827;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8826))[0])();
}
else
{
void* const kont8826 = arg_buffer[2];
void* const x8827 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8826))[0])(kont8826, x8827);
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
void* const kont8829 = prim_car(lst);
void* const lst8831 = prim_cdr(lst);
void* const x8830 = apply_prim__u60(lst8831);
arg_buffer[1] = kont8829;
arg_buffer[2] = x8830;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8829))[0])();
}
else
{
void* const kont8829 = arg_buffer[2];
void* const x8830 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8829))[0])(kont8829, x8830);
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
void* const kont8832 = prim_car(lst);
void* const lst8834 = prim_cdr(lst);
void* const x8833 = apply_prim__u60_u61(lst8834);
arg_buffer[1] = kont8832;
arg_buffer[2] = x8833;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8832))[0])();
}
else
{
void* const kont8832 = arg_buffer[2];
void* const x8833 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8832))[0])(kont8832, x8833);
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
void* const kont8835 = prim_car(lst);
void* const lst8837 = prim_cdr(lst);
void* const x8836 = apply_prim__u62_u61(lst8837);
arg_buffer[1] = kont8835;
arg_buffer[2] = x8836;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8835))[0])();
}
else
{
void* const kont8835 = arg_buffer[2];
void* const x8836 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8835))[0])(kont8835, x8836);
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
void* const kont8838 = prim_car(lst);
void* const lst8840 = prim_cdr(lst);
void* const x8839 = apply_prim_null_u63(lst8840);
arg_buffer[1] = kont8838;
arg_buffer[2] = x8839;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8838))[0])();
}
else
{
void* const kont8838 = arg_buffer[2];
void* const x8839 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8838))[0])(kont8838, x8839);
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
void* const kont8841 = prim_car(lst);
void* const lst8843 = prim_cdr(lst);
void* const x8842 = apply_prim_cons(lst8843);
arg_buffer[1] = kont8841;
arg_buffer[2] = x8842;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8841))[0])();
}
else
{
void* const kont8841 = arg_buffer[2];
void* const x8842 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8841))[0])(kont8841, x8842);
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
void* const kont8844 = prim_car(lst);
void* const lst8846 = prim_cdr(lst);
void* const x8845 = apply_prim_car(lst8846);
arg_buffer[1] = kont8844;
arg_buffer[2] = x8845;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8844))[0])();
}
else
{
void* const kont8844 = arg_buffer[2];
void* const x8845 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8844))[0])(kont8844, x8845);
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
void* const kont8847 = prim_car(lst);
void* const lst8849 = prim_cdr(lst);
void* const x8848 = apply_prim_cdr(lst8849);
arg_buffer[1] = kont8847;
arg_buffer[2] = x8848;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8847))[0])();
}
else
{
void* const kont8847 = arg_buffer[2];
void* const x8848 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8847))[0])(kont8847, x8848);
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
void* const kont8850 = prim_car(lst);
void* const lst8852 = prim_cdr(lst);
void* const x8851 = apply_prim_list(lst8852);
arg_buffer[1] = kont8850;
arg_buffer[2] = x8851;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8850))[0])();
}
else
{
void* const kont8850 = arg_buffer[2];
void* const x8851 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8850))[0])(kont8850, x8851);
}

}

inline void lam8795_fptr() // lam8795 -> generic version 
{
//reading env
void* const env8796 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8796);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = decode_clo_array[1];
arg_buffer[5] = id_8784;
arg_buffer[6] = int8805;
arg_buffer[7] = int8806;
arg_buffer[8] = int8807;
arg_buffer[9] = int8808;
arg_buffer[10] = int8809;
numArgs = 10;
_u43_fptr();
}

inline void lam8795_spec(void* env8796, void* id_8784) // lam8795 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8796);

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = decode_clo_array[3];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = decode_clo_array[1];
arg_buffer[5] = id_8784;
arg_buffer[6] = int8805;
arg_buffer[7] = int8806;
arg_buffer[8] = int8807;
arg_buffer[9] = int8808;
arg_buffer[10] = int8809;
numArgs = 10;
_u43_fptr();
}

inline void lam8797_fptr() // lam8797 -> generic version 
{
//reading env
void* const env8798 = arg_buffer[1];
//reading env and args
void* const id_8781 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8798);

//creating new make-kont closure
void** clo8853 = alloc_kont(lam8795_spec, 3);

//setting env list
clo8853[1] = id_8781;
clo8853[2] = decode_clo_array[1];
clo8853[3] = decode_clo_array[2];
void* f_lam_8792 = encode_clo(clo8853);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8792;
arg_buffer[3] = int8803;
arg_buffer[4] = int8804;
numArgs = 4;
_u43_fptr();
}

inline void lam8797_spec(void* env8798, void* id_8781) // lam8797 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8798);

//creating new make-kont closure
void** clo8854 = alloc_kont(lam8795_spec, 3);

//setting env list
clo8854[1] = id_8781;
clo8854[2] = decode_clo_array[1];
clo8854[3] = decode_clo_array[2];
void* f_lam_8792 = encode_clo(clo8854);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8792;
arg_buffer[3] = int8803;
arg_buffer[4] = int8804;
numArgs = 4;
_u43_fptr();
}

inline void call_fptr() // call -> generic version 
{
//reading env and args
void* const kont8791 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8855 = alloc_kont(lam8797_spec, 2);

//setting env list
clo8855[1] = int8810;
clo8855[2] = kont8791;
void* f_lam_8793 = encode_clo(clo8855);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8793;
arg_buffer[3] = int8802;
numArgs = 3;
_u43_fptr();
}

inline void call_spec(void* _8799, void* kont8791, void* x) // call 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8856 = alloc_kont(lam8797_spec, 2);

//setting env list
clo8856[1] = int8810;
clo8856[2] = kont8791;
void* f_lam_8793 = encode_clo(clo8856);



//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = f_lam_8793;
arg_buffer[3] = int8802;
numArgs = 3;
_u43_fptr();
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8794 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
call_spec(call, kont8794, int8810);
}

inline void brouhaha_main_spec(void* _8800, void* kont8794) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
call_spec(call, kont8794, int8810);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8810 = reinterpret_cast<void *>(encode_int(1));
int8802 = reinterpret_cast<void *>(encode_int(2));
int8803 = reinterpret_cast<void *>(encode_int(3));
int8804 = reinterpret_cast<void *>(encode_int(4));
int8805 = reinterpret_cast<void *>(encode_int(5));
int8809 = reinterpret_cast<void *>(encode_int(6));
int8806 = reinterpret_cast<void *>(encode_int(7));
int8807 = reinterpret_cast<void *>(encode_int(8));
int8808 = reinterpret_cast<void *>(encode_int(9));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

