// The bloody new header file
// Importing GMP and GC stuff to use with cons cells and others

// To do?
/*
    - change the headers
    - complete the addition and multiply for mpz_t
    - decode_clo and encode_clo and alloc_clo
    - make the encode_null
    - write an assert function
    - check how to make the arg_buffer work
    - encoding mpz_t and mpz_f
    - create the fhalt function
    - check prim_cons, car, cdr
*/
#include <iostream>
#include <cstdint>
#include <string>
#include <functional>

// GMP and gc headers
#include "gmp.h"
#include "gmpxx.h"
#include "gc.h"

#define MASK(val) (((u64)(val)) & ~(7ULL))

#define NULL_VALUE 0
#define TRUE_VALUE 8
#define FALSE_VALUE 16
#define ENV_ARRAY 1
#define RANDOM_VALUE 63 // 00111111

// Making the choice not to use them because the intptr_t is available.
typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;

enum DataType
{
    SPL = 0x0,
    MPZ = 0x1,
    // BOOLEAN = 0x2,
    STRING = 0x3,
    MPF = 0x4,
    CLO = 0x5,
    // ENV = 0x6,
    CONS = 0x7
};

#pragma region Types
// region Encoding and Decoding and Tags

void assert_type(bool cond, const char *msg)
{
    if (!cond)
    {
        std::cout << "type assertion failed-> " << msg << std ::endl;
        exit(1);
    }
}
// ??why encode and decode functions for every type, just have one and make it take a void*
// and the type we want the tag variable to
// returns a void* that is tagged

void *encode_mpz(mpz_t *val)
{
    return reinterpret_cast<void *>(((u64)val) | MPZ);
}

void *encode_mpf(mpf_t *val)
{
    return reinterpret_cast<void *>(((u64)val) | MPF);
}

void *encode_str(std::string *val)
{
    return reinterpret_cast<void *>(((u64)val) | STRING);
}

void *encode_clo(void **v)
{
    return reinterpret_cast<void *>(((u64)(v)) | CLO);
}

void *encode_bool(bool val)
{
    if (val)
    {
        return reinterpret_cast<void *>(TRUE_VALUE);
    }
    return reinterpret_cast<void *>(FALSE_VALUE);
}
void *encode_cons(void **cons)
{
    return reinterpret_cast<void *>(((u64)(cons)) | CONS);
}
void *encode_null()
{
    return NULL_VALUE;
}

// takes in a void * type and gets the tag, return it as an integer
int get_tag(void *val)
{
    u64 ptr = reinterpret_cast<u64>(val);
    return (ptr & 7);
}

bool is_cons(void *lst)
{
    if (get_tag(lst) == CONS)
    {
        return true;
    }
    return false;
}

// decode functions

mpz_t *decode_mpz(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == MPZ), "Type error: Not MPZ");
    return reinterpret_cast<mpz_t *>(MASK(val));
}
void *decode_mpf(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == MPF), "Type error: Not MPF");
    return reinterpret_cast<mpf_t *>(MASK(val));
}
void *decode_str(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == STRING), "Type error: Not STRING");
    return reinterpret_cast<std::string *>(MASK(val));
}
bool decode_boolean(void *val)
{
    // MASK does the casting to u64
    assert_type(((get_tag(val)) == SPL), "Type error: Not BOOLEAN");
    u64 temp = (u64)val;
    if (temp == TRUE_VALUE)
    {
        return true;
    }
    else if (temp == FALSE_VALUE)
    {
        return false;
    }
    else
    {
        assert_type(false, "Type error: Not BOOLEAN");
    }
}
void **decode_cons(void *val)
{
    assert_type((get_tag(val) == CONS), "Type error: Not CONS");
    return reinterpret_cast<void **>(MASK(val));
}
void **decode_clo(void *val)
{
    assert_type((get_tag(val) == CLO), "Type error: Not CLO");
    return reinterpret_cast<void **>(MASK(val));
}

// Closure Allocation, alloc_clo
void **alloc_clo(void *(*fptr)(), int num)
{
    // ?? Does the allocation look right
    void **obj = (void **)(GC_MALLOC((num + 1) * sizeof(void *)));

    obj[0] = reinterpret_cast<void *>(fptr);

    return obj;
}

#pragma endregion

#pragma region ArithOpFunctions
/*
 Arithmetic Operations
 Writing these to be used by other functions, and handling differences between types in these
 functions, say multiplication mpz_t should be directed to that call, but multiplication b/w
 mpz_f goes to someplace else, so we take in two void* pointers and check the type and do the
 appropriate thing for each type and operation.
*/
// Only supports taking mpz_t's

// void *apply_prim_u42(void *lst) // * doesn't work yet
// {
//     // decode the args, cast them to u64 for now and return the multplication
//     bool type_check = (get_tag(arg1) == MPT) & (get_tag(arg2) == MPT);
//     assert_type(type_check, "Error in multiply: one or both of Passed in variables are not MPT's")
//         mpz_t *result;
//     mpz_init(*result);
//     mpz_t *opd1 = reinterpret_cast<mpz_t *>(decode_val(arg1, MPT));
//     mpz_t *opd2 = reinterpret_cast<mpz_t *>(decode_val(arg2, MPT));

//     mpz_mul(*result, *opd1, *opd2);

//     return reinterpret_cast<void *>(result);
// }
void *prim_cons_u63(void *lst)
{
    if (get_tag(lst) == CONS)
    {
        return reinterpret_cast<void *>(TRUE_VALUE);
    }
    return reinterpret_cast<void *>(FALSE_VALUE);
}

void *prim_null_u63(void *lst)
{
    if (lst == 0x0)
    {
        return reinterpret_cast<void *>(TRUE_VALUE);
    }
    return reinterpret_cast<void *>(FALSE_VALUE);
}

void *apply_prim__u43(void *lst) //+ shoudl work
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    // mpz_init_set_str(*temp1, "12", 10);
    mpz_init(*result);
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        bool type_check = (get_tag(cons_lst[0]) == MPZ);

        assert_type(type_check, "Error in addition: values in the lst are not MPT");

        // mpz_t *opd1 = reinterpret_cast<mpz_t *>(decode_mpz(cons_lst[0]));
        mpz_t *opd1 = decode_mpz(cons_lst[0]);

        mpz_add(*result, *result, *opd1);

        lst = cons_lst[1];
    }

    return encode_mpz(result);
}

#pragma endregion

#pragma region ConsClass
/*
 Assuming that one cons cell can have different types of data and making it use void* for that reason
 This class is basically a linked list of void* pointing to other stuff.
 Interface:
    - I need a function that takes a element and void* and return a void* to a cons cell with the
    element attached to its front.
    - Functions for prim_car and prim_cdr
    - Functions to encode and decode the cons cell
    - ??Function to print the cons cell
    - Function taking a lst of elements/which can be cons cells as well, and returning cons structure
        * What is the apply_prim_list taking in, is it taking nested cons cell lists and appedning them
    - [Optional] cdar function
    - [Not sure, How to] Iterator function, that returns the next value in the cons cell
    - Function to check if cons cell
    - Function to d Tagset the length
 Assumptions:
    - Will hold values of two different types
        - Any val type and cons type or two val type
    - Runs only on 64 bit systems and the pointers are aligned by 8
 Functions to be made:
    - ??apply_prim_cons
    - ??apply_prim_list
    - apply_prim_cdar
    - prim_null_u63 - null?
    - prim_eq_uu63 - eq?
    - prim_equal_u63 - equal?, ... odd?, even?, negative?
    - comparison ops >, <, =, <=, >=
*/
static void *prim_cons(void *arg1, void *arg2)
{
    void **cell = (void **)GC_MALLOC(2 * sizeof(void *));
    cell[0] = arg1;
    cell[1] = arg2;
    return encode_cons(cell);
}

void *prim_car(void *val)
{
    assert_type((prim_cons_u63(val)), "not a cons cell");
    void **cell = decode_cons(val);
    return cell[0];
}

void *prim_cdr(void *val)
{
    assert_type((prim_cons_u63(val)), "not a cons cell");
    void **cell = decode_cons(val);
    return cell[1];
}
#pragma endregion

void *halt;
void *arg_buffer[999];
long numArgs;

void *fhalt()
{
    std::cout << "In fhalt" << std::endl;
    mpz_t *final_result = decode_mpz(arg_buffer[2]);
    std::cout << mpz_get_str(nullptr, 10, *final_result) << std::endl;
    exit(1);
}

// have to initialize the mpz_t nums and pass the nums from program as strings
// call encode_mpz instead of encode_int
