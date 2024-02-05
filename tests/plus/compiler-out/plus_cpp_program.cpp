#include "../../prelude.hpp"
#include "gmp_func.h"
#include <chrono>
#include <stdio.h>
#include <string.h>

void _u45_fptr() // -
{
  // reading number of args
  //  This is the second type of the functions
  numArgs = reinterpret_cast<long>(arg_buffer[0]);
  // reading env
  void *const _env9141 = arg_buffer[1];
  // decoding closure array
  void **decode_clo_array = nullptr;
  if (is_cons(arg_buffer[2])) {
    //(apply e0 e0) case
    void *const lst = arg_buffer[2];
    void *const kont9139 = prim_car(lst);
    void *const lst9142 = prim_cdr(lst);
    void *const x9140 = apply_prim__u45(lst9142);
    arg_buffer[1] = kont9139;
    arg_buffer[2] = x9140;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9139))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  } else {
    void *const kont9139 = arg_buffer[2];
    void *const x9140 = apply_prim__u45(arg_buffer);
    arg_buffer[1] = kont9139;
    arg_buffer[2] = x9140;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9139))[0]);

    // calling next procedure using a function pointer
    function_ptr();
  }
}

void car_fptr() // car
{
  void *const a8793 = reinterpret_cast<void *>(3);
  void *const a8792 = reinterpret_cast<void *>(2);
  void **clo9452 = alloc_clo(_u45_fptr, 2);

  // setting env list
  clo9452[1] = a8793;
  clo9452[2] = a8792;
  clo9452[2] = a8792;
  clo9452[2] = a8792;
  void *f8905 = encode_clo(clo9452);
}

// void _u45_fptr()
// {
//     void *a8452 = encode_mpz(mpzvar9246);
//     void *a8453 = encode_mpz(mpzvar9247);
// }

// void _u43_fptr()
// {
//     void *a8452 = encode_mpz(mpzvar9246);
//     void *a8453 = encode_mpz(mpzvar9247);
// }

int main() {
  mp_set_memory_functions(&allocate_function, &reallocate_function,
                          &deallocate_function);
  using namespace std::chrono;

  auto start = high_resolution_clock::now();

  // for (long long i = 0; i < 156749600; ++i){ _u43_fptr(); }

  // for (long long i = 0; i < 78337957; ++i) { _u45_fptr(); }

  for (long long i = 0; i < 999000000; ++i) {
    car_fptr();
  }

  auto end = high_resolution_clock::now();

  auto duration = duration_cast<microseconds>(end - start);
  std::cout << "Time taken by function: " << duration.count() << " microseconds"
            << std::endl;

  return 0;
}
