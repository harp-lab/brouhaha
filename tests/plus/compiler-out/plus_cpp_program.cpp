<<<<<<< HEAD
#include "../../prelude.hpp"
#include "gmp_func.h"
#include <chrono>
=======
>>>>>>> a4f010dd31ad3cf4c4313e8643b509801d674cc7
#include <stdio.h>
#include <string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

<<<<<<< HEAD
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
=======
// declaring global constants at the top
int int8700;
int int8698;

// declaring functions at the top
void _u43_fptr(); // +
void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void call_fptr(); // call
void *call = encode_clo(alloc_clo(call_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

void _u43_fptr() // +
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *const _env8703 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *const lst = arg_buffer[2];
        void *const kont8701 = prim_car(lst);
        void *const lst8704 = prim_cdr(lst);
        void *const x8702 = apply_prim__u43(lst8704);
        arg_buffer[1] = kont8701;
        arg_buffer[2] = x8702;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);

        // calling next procedure using a function pointer
        function_ptr();
    }
    else
    {
        void *const kont8701 = arg_buffer[2];
        void *const x8702 = apply_prim__u43(arg_buffer);
        arg_buffer[1] = kont8701;
        arg_buffer[2] = x8702;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);

        // calling next procedure using a function pointer
        function_ptr();
    }
}

void call_fptr() // call
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *const _8696 = arg_buffer[1];
    // reading env and args
    void *const kont8694 = arg_buffer[2];
    std::cout<<kont8694<<std::endl;
    void *const x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *const a8691 = reinterpret_cast<void *>(encode_int(int8698));
    void *const a8692 = reinterpret_cast<void *>(encode_int(int8700));

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8691, a8692);
    std::cout<<print_val(arg_buffer[2])<<std::endl;
    arg_buffer[1] = kont8694;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>(kont8694);

    // calling next procedure using a function pointer
    function_ptr();
}

void brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *const _8697 = arg_buffer[1];
    // reading env and args
    void *const kont8695 = decode_clo(arg_buffer[2])[0]; // pointer to an array
    std::cout<<kont8695<<std::endl;


    // decoding closure array
    void **decode_clo_array = nullptr;
    void *const a8693 = reinterpret_cast<void *>(encode_int(int8700));

    // clo-app
    arg_buffer[1] = call;
    arg_buffer[2] = kont8695;
    arg_buffer[3] = a8693;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);

    // calling next procedure using a function pointer
    function_ptr();
}

int main(int argc, char **argv)
{
    mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

    // initializing global constants in the main
    int8700 = 1;
    int8698 = 100;

    // making a call to the brouhaha main function to kick off our C++ emission.
    void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
    // Creating new closure instance on the stack
    void *stack_clo9341[0]; // Assuming a closure of 3 arguments + function pointer
    stack_clo9341[0] = reinterpret_cast<void *>(fhalt);
    std::cout<<stack_clo9341[0]<<std::endl;
    // stack_clo9341[1] = kont8800;
    // stack_clo9341[2] = item;
    // stack_clo9341[3] = lst;
    void *f8802 = encode_clo(stack_clo9341);

    


    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
    arg_buffer[0] = 0;
    arg_buffer[2] = f8802;

    // calling next procedure using a function pointer
    function_ptr();
>>>>>>> a4f010dd31ad3cf4c4313e8643b509801d674cc7
}
