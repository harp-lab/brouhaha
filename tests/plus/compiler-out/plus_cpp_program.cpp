#include "../../prelude.hpp"
#include "gmp_func.h"
#include <stdio.h>
#include <string.h>

// declaring global constants at the top
int int8696;
int int8694;

void _u43_fptr() // +
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env8699 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont8697 = prim_car(lst);
    void *const lst8700 = prim_cdr(lst);
    void *const x8698 = apply_prim__u43(lst8700);
    arg_buffer[1] = kont8697;
    arg_buffer[2] = x8698;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
    // call next proc using a function pointer
    function_ptr();
  } else {
    void *const kont8697 = arg_buffer[2];
    void *const x8698 = apply_prim__u43(arg_buffer);
    arg_buffer[1] = kont8697;
    arg_buffer[2] = x8698;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
    // call next proc using a function pointer
    function_ptr();
  }
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void call_fptr() // call
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8691 = arg_buffer[1];
  // reading env and args
  void *const kont8687 = arg_buffer[2];
  void *const x = arg_buffer[3];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const a8684 = reinterpret_cast<void *>(encode_int(int8694));
  void *const a8685 = reinterpret_cast<void *>(encode_int(int8696));

  // clo-app
  arg_buffer[2] = apply_prim__u43_2(a8684, a8685);
  arg_buffer[1] = kont8687;
  arg_buffer[0] = reinterpret_cast<void *>(2);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
  function_ptr();
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main
{
  // reading number of args
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _8693 = arg_buffer[1];
  // reading env and args
  void *const kont8688 = arg_buffer[2];
  // decoding closure array
  void **decode_clo_array = nullptr;
  void *const a8686 = reinterpret_cast<void *>(encode_int(int8696));

  // clo-app
  arg_buffer[1] = call;
  arg_buffer[2] = kont8688;
  arg_buffer[3] = a8686;
  arg_buffer[0] = reinterpret_cast<void *>(3);
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
  // call next proc using a function pointer
  function_ptr();
}

void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv) {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);

  // initializing global constants in the main
  int8696 = 1;
  int8694 = 100;

  // making a call to the brouhaha main function to kick off our C++ emission.
  void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
  auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
  arg_buffer[0] = 0;
  arg_buffer[2] = fhalt_clo;
  function_ptr();
}
