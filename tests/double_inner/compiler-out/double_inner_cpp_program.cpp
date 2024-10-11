#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8806;
void* int8807;
void* int8808;
void* int8805;



// declaring functions at the top
void _u43_fptr(); // +
void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8797_fptr(); // lam8797
void lam8797_spec(void* env8798, void* id_8783); // lam8797
void* lam8797 = encode_clo(alloc_clo(lam8797_fptr, 0));

void call_u45f_fptr(); // call-f
void call_u45f_spec(void* _8799, void* kont8792, void* f, void* x, void* y, void* z); // call-f
void* call_u45f = encode_clo(alloc_clo(call_u45f_fptr, 0));

void lam8800_fptr(); // lam8800
void lam8800_spec(void* env8801, void* xy8784); // lam8800
void* lam8800 = encode_clo(alloc_clo(lam8800_fptr, 0));

void intermediate_fptr(); // intermediate
void intermediate_spec(void* _8802, void* kont8794, void* x, void* y, void* z); // intermediate
void* intermediate = encode_clo(alloc_clo(intermediate_fptr, 0));

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

inline void list_fptr() // list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8812 = prim_car(lst);
void* const lst8814 = prim_cdr(lst);
void* const x8813 = apply_prim_list(lst8814);
arg_buffer[1] = kont8812;
arg_buffer[2] = x8813;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont8812))[0])();
}
else
{
void* const kont8812 = arg_buffer[2];
void* const x8813 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont8812))[0])(kont8812, x8813);
}

}

inline void lam8797_fptr() // lam8797 -> generic version 
{
//reading env
void* const env8798 = arg_buffer[1];
//reading env and args
void* const id_8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8798);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_3(decode_clo_array[3], decode_clo_array[2], id_8783));
}

inline void lam8797_spec(void* env8798, void* id_8783) // lam8797 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8798);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_3(decode_clo_array[3], decode_clo_array[2], id_8783));
}

inline void call_u45f_fptr() // call-f -> generic version 
{
//reading env and args
void* const kont8792 = arg_buffer[2];
void* const f = arg_buffer[3];
void* const x = arg_buffer[4];
void* const y = arg_buffer[5];
void* const z = arg_buffer[6];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8815 = alloc_kont(lam8797_spec, 3);

//setting env list
clo8815[1] = kont8792;
clo8815[2] = apply_prim__u43_3(x, y, z);
clo8815[3] = apply_prim__u43_2(int8805, x);
void* f_lam_8793 = encode_clo(clo8815);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_8793;
arg_buffer[3] = int8805;
arg_buffer[4] = x;
arg_buffer[5] = y;
arg_buffer[6] = z;
numArgs = 6;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

inline void call_u45f_spec(void* _8799, void* kont8792, void* f, void* x, void* y, void* z) // call-f 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8816 = alloc_kont(lam8797_spec, 3);

//setting env list
clo8816[1] = kont8792;
clo8816[2] = apply_prim__u43_3(x, y, z);
clo8816[3] = apply_prim__u43_2(int8805, x);
void* f_lam_8793 = encode_clo(clo8816);



//clo-app
arg_buffer[1] = f;
arg_buffer[2] = f_lam_8793;
arg_buffer[3] = int8805;
arg_buffer[4] = x;
arg_buffer[5] = y;
arg_buffer[6] = z;
numArgs = 6;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(f))[0])();
}

inline void lam8800_fptr() // lam8800 -> generic version 
{
//reading env
void* const env8801 = arg_buffer[1];
//reading env and args
void* const xy8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8801);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8784);
}

inline void lam8800_spec(void* env8801, void* xy8784) // lam8800 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8801);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8784);
}

inline void intermediate_fptr() // intermediate -> generic version 
{
//reading env and args
void* const kont8794 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const y = arg_buffer[4];
void* const z = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8817 = alloc_kont(lam8800_spec, 1);

//setting env list
clo8817[1] = kont8794;
void* f_lam_8795 = encode_clo(clo8817);



//clo-app
call_u45f_spec(call_u45f, f_lam_8795, _u43, x, y, z);
}

inline void intermediate_spec(void* _8802, void* kont8794, void* x, void* y, void* z) // intermediate 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo8818 = alloc_kont(lam8800_spec, 1);

//setting env list
clo8818[1] = kont8794;
void* f_lam_8795 = encode_clo(clo8818);



//clo-app
call_u45f_spec(call_u45f, f_lam_8795, _u43, x, y, z);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
intermediate_spec(intermediate, kont8796, int8806, int8807, int8808);
}

inline void brouhaha_main_spec(void* _8803, void* kont8796) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
intermediate_spec(intermediate, kont8796, int8806, int8807, int8808);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8806 = reinterpret_cast<void *>(encode_int(1));
int8807 = reinterpret_cast<void *>(encode_int(2));
int8808 = reinterpret_cast<void *>(encode_int(3));
int8805 = reinterpret_cast<void *>(encode_int(10));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

