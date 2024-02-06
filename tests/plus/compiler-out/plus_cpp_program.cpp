#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
int int8707;
int int8705;

// declaring functions at the top
void _u43_fptr(); // +
void *_u43;
void *stack_clo8708[1];
void call_fptr(); // call
void *call;
void *stack_clo8709[1];
void brouhaha_main_fptr(); // brouhaha_main
void *brouhaha_main;
void *stack_clo8710[1];

void initialize() {
  stack_clo8710[0] = reinterpret_cast<void *>(brouhaha_main_fptr);
  brouhaha_main = encode_clo(stack_clo8710);
  stack_clo8708[0] = reinterpret_cast<void *>(_u43_fptr);
  _u43 = encode_clo(stack_clo8708);
  stack_clo8709[0] = reinterpret_cast<void *>(call_fptr);
  call = encode_clo(stack_clo8709);
}

// pre-declaration of global symbols
void (*decoded_call)();
void (*decoded__u43)();
void (*decoded_brouhaha_main)();

// pre-decoding global symbols
void decode_global_symbols() {
  decoded_call = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
  decoded__u43 = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
  decoded_brouhaha_main =
      reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
}

void _u43_fptr() // +
{
  std::cout << "In _u43_fptr" << std::endl;
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env8713 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8711 = prim_car(lst);
    void *const lst8714 = prim_cdr(lst);
    void *const x8712 = apply_prim__u43(lst8714);
    arg_buffer[1] = kont8711;
    arg_buffer[2] = x8712;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont8711 = arg_buffer[2];
    void *const x8712 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8711;
    arg_buffer[2] = x8712;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void call_fptr() // call
{
  std::cout << "In call_fptr" << std::endl;
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8703 = arg_buffer[1];
  // reading env and args
  void *const kont8701 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const a8698 = reinterpret_cast<void *>(encode_int(int8705));
  void *const a8699 = reinterpret_cast<void *>(encode_int(int8707));

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(a8698, a8699);
  arg_buffer[1] = kont8701;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);

  // calling next procedure using a function pointer
  function_ptr();
}

void brouhaha_main_fptr() // brouhaha_main
{
  std::cout << "In brouhaha_main_fptr" << std::endl;
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8704 = arg_buffer[1];
  // reading env and args
  void *const kont8702 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const a8700 = reinterpret_cast<void *>(encode_int(int8707));

  // clo-app
  arg_buffer[1] = call;
  arg_buffer[2] = kont8702;
  arg_buffer[3] = a8700;
  arg_buffer[0] = reinterpret_cast<void *>(3);
  decoded_call();
}

int main(int argc, char **argv) {
  initialize();
  decode_global_symbols();

  // initializing global constants in the main
  int8707 = 1;
  int8705 = 100;

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *stack_clo8715[0];
  stack_clo8715[0] = reinterpret_cast<void *>(fhalt);
  void *fhalt_clo = encode_clo(stack_clo8715);
  arg_buffer[0] = 0;
  arg_buffer[2] = fhalt_clo;

  // calling next procedure using a function pointer
  decoded_brouhaha_main();
}
