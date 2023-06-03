#include "prelude.h"
#include "gmp_func.h"

int main()
{
    mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

    mpz_t lmao;
    mpz_init_set_str(lmao, "12", 10);
    mpz_t lol;
    mpz_init_set_str(lol, "12", 10);
}