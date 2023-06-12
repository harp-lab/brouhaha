#include <cstdint>
#include <functional>
#include <iostream>
#include <string>

// GMP and gc headers
#include "gc.h"
#include "gmp.h"
#include "gmp_func.h"
#include "gmpxx.h"
// hamt headers
#include "hamt.h"

#include "prelude.h"

u64 hash(void* val)
{
    u64 h = 0xcbf29ce484222325;
    u64 limb_cnt = 0;
    int is_negative = 0; // < 0 if negative, = 0 if zero and > 0 if_positive
    const mp_limb_t* limb_ptr = nullptr;
    switch (get_tag(val)) {
    case MPZ: {
        mpz_t* val_mpz = decode_mpz(val);
        limb_cnt = mpz_size(*val_mpz);
        limb_ptr = mpz_limbs_read(*val_mpz);
        // the mpz_sgn is a macro in gmp that just looks at _mp_size for sign info
        is_negative = mpz_sgn(*val_mpz);
        break;
    }
    case MPF: {
        mpf_t* val_mpf = decode_mpf(val);
        // limb_cnt = abs((*val_mpf)->_mp_size); // accessing the internals
        limb_cnt = mpf_size(*val_mpf); // couldn't find mpf_size anywhere
        limb_ptr = (*val_mpf)->_mp_d;
        is_negative = mpf_sgn(*val_mpf);
        break;
    }
    default:
        assert_type(false, "Passed value to the hash function is not MPZ or MPF");
        break;
    }

    if (is_negative < 0) {
        h = h ^ 0x00000000000000ff;
        h = h * 0x100000001b3;
    } else {
        h = h ^ 0x0000000000000000; // this doesn't do anything, not sure what XOR it with for change
        h = h * 0x100000001b3;
    }
    for (u32 i = 0; i < limb_cnt; i++) {
        u64 limb = limb_ptr[i];
        for (u32 j = 0; j < 8; j++) {
            h = h ^ ((limb >> j * 8) & 0x00000000000000ff);
            h = h * 0x100000001b3;
        }
    }

    return h;
}
u64 hash_f(mpf_t* val)
{
    // doesn't consider the sign of the values
    u64 h = 0xcbf29ce484222325;
    // int limb_cnt = abs((*val)->_mp_size);
    int limb_cnt = mpf_size(*val);
    std::cout << "the limb cout is " << limb_cnt << std::endl;
    mp_limb_t* limb_ptr = (*val)->_mp_d;
    // const u64* data = reinterpret_cast<const u64*>((*val)->_mp_d);
    for (int i = 0; i < limb_cnt; i++) {
        u64 limb = limb_ptr[i];
        for (u32 j = 0; j < 8; j++) {
            std::cout << ((limb >> j * 8) & 0x00000000000000ff) << " ";
            h = h ^ ((limb >> j * 8) & 0x00000000000000ff);
            h = h * 0x100000001b3;
        }
    }
    // std::cout << "done" << std::endl;

    return h;
}

int main()
{ // we have to first make the void* to be a const void*
    // then create a const* for that
    // void* key_void_ptr = &key_void;
    // void* value_void_ptr = &value_void;
    // void* const *const_key = reinterpret_cast<void* const*>(key_void_ptr);
    // void* const *const_value = reinterpret_cast<void* const*>(value_void_ptr);
    mp_set_memory_functions(&allocate_function,
        &reallocate_function,
        &deallocate_function);
    // int and = 1;
    mpz_t* key = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*key, "-2", 10);
    // mpz_init_set_si(*key, -1);

    mpz_t* key1 = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
    // mpz_init_set_si(*key1, 1008383);
    mpz_init_set_str(*key1, "2", 10);
    std::cout << hash(encode_mpz(key)) << std::endl;
    std::cout << hash(encode_mpz(key1)) << std::endl;
    std::cout << mpz_size(*key) << std::endl;
    std::cout << mpz_size(*key1) << std::endl;
    std::cout << mpz_sgn(*key) << std::endl;
    std::cout << mpz_sgn(*key1) << std::endl;
    // std::cout << mpz_getlimbn(*key, 1) << std::endl;
    // std::cout << mpz_getlimbn(*key1, 1) << std::endl;
    // mpf_set_default_prec(23);
    // mpf_t f;
    // mpf_init_set_str(f, "314.159262398745901823473489579138475928375983745982374598234759234857239847523948", 10);
    // std::cout << mpf_get_default_prec << std::endl;
    // gmp_printf("%.30Ff\n", f);
    // return 0;
    // mpf_init(*key);
    // std::cout << mp_bits_per_limb << std::endl;
    // std::cout << sizeof(mp_limb_t) << std::endl;

    // std::cout << (*key)->_mp_size << std::endl;
    // mpf_t* key;
    // this is the mp_f section
    // mpf_t* key = (mpf_t*)(GC_MALLOC(sizeof(mpf_t)));
    // mpf_init_set_str(*key, "-390845.7932487529348572935789343345789345789345789", 10);
    // std::cout << (*key)->_mp_size << std::endl;
    // std::cout << (*key)->_mp_d << std::endl;
    // std::cout << "for the key" << std::endl;
    // std::cout << hash(encode_mpf(key)) << std::endl;
    // std::cout << (*key)->_mp_exp << std::endl;
    // std::cout << (*key)->_mp_prec << std::endl;
    // mpf_t* key1 = (mpf_t*)(GC_MALLOC(sizeof(mpf_t)));
    // mpf_init_set_str(*key1, "390845.7932487529348572935789343345789345789345789", 10);
    // std::cout << (*key1)->_mp_size << std::endl;
    // std::cout << (*key1)->_mp_d << std::endl;
    // std::cout << "for the key1" << std::endl;
    // // std::cout << hash_f(key1) << std::endl;
    // std::cout << hash(encode_mpf(key1)) << std::endl;
    // std::cout << (*key1)->_mp_exp << std::endl;
    // std::cout << (*key1)->_mp_prec << std::endl;
    // end of the mpf section
    // std::cout << key->_mp_prec << std::endl;
    // mp_exp_t* num;
    // char* str = mpf_get_str(nullptr, nullptr, 10, 0, key);
    // gmp_printf("%.10Ff\n", *key);
    // std::cout << str << std::endl;
}