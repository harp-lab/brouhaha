#include <cstdint>
#include <functional>
#include <iostream>
#include <string>
#include <sstream>
#include <bitset>

// GMP and gc headers
#include "gc.h"
#include "gc_cpp.h"
#include "gmp.h"
#include "gmpxx.h"

// hamt headers
#include "hamt.h"

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
    HASH = 0x2,
    STRING = 0x3,
    MPF = 0x4,
    CLO = 0x5,
    // ENV = 0x6,
    CONS = 0x7
};

struct hash_struct;
std::string print_val(void *val);
void *equal_(void *arg1, void *arg2);
u64 hash_(void *val);

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
// ??why encode and decode functions for every type, just have one and make it
// take a void* and the type we want the tag variable to returns a void* that is
// tagged

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

void *encode_clo(void **val)
{
    return reinterpret_cast<void *>(((u64)(val)) | CLO);
}

void *encode_bool(bool val)
{
    if (val)
    {
        return reinterpret_cast<void *>(TRUE_VALUE);
    }
    return reinterpret_cast<void *>(FALSE_VALUE);
}
void *encode_cons(void **val)
{
    return reinterpret_cast<void *>(((u64)(val)) | CONS);
}

void *encode_hash(const hamt<hash_struct, hash_struct> *val)
{
    return reinterpret_cast<void *>(((u64)(val)) | HASH);
}

void *encode_null() { return NULL_VALUE; }

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
mpf_t *decode_mpf(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == MPF), "Type error: Not MPF");
    return reinterpret_cast<mpf_t *>(MASK(val));
}
std::string *decode_str(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == STRING), "Type error: Not STRING");
    return reinterpret_cast<std::string *>(MASK(val));
}
bool decode_bool(void *val)
{
    // MASK does the casting to u64
    assert_type(((get_tag(val)) == SPL), "Type error : Not BOOLEAN");
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
        assert_type(false, "Type error : Not BOOLEAN");
    }
    return false;
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
const hamt<hash_struct, hash_struct> *decode_hash(void *val)
{
    assert_type((get_tag(val) == HASH), "Type error: Not HASH");
    return reinterpret_cast<const hamt<hash_struct, hash_struct> *>(MASK(val));
}
// Closure Allocation, alloc_clo
void **alloc_clo(void *(*fptr)(), int num)
{
    void **obj = (void **)(GC_MALLOC((num + 1) * sizeof(void *)));
    obj[0] = 0;
    obj[1] = 0;
    if (obj != NULL)
    {
        obj[0] = reinterpret_cast<void *>(fptr);
    }

    return obj;
}

#pragma endregion

#pragma region ConsMethods

static void *prim_cons(void *arg1, void *arg2)
{
    void **cell = (void **)GC_MALLOC(2 * sizeof(void *));
    cell[0] = arg1;
    cell[1] = arg2;
    return encode_cons(cell);
}

// cons?
void *prim_cons_u63(void *lst)
{
    if (get_tag(lst) == CONS)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
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

std::string print_cons(void *lst)
{
    std::string ret_str;
    ret_str.append("(list ");
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        ret_str.append(print_val(cons_lst[0]));
        if (!is_cons(cons_lst[1]))
        {
            break;
        }
        ret_str.append(" ");
        lst = cons_lst[1];
    }
    ret_str.append(")");
    return ret_str;
}

// returns length of a list
int length_counter(void *lst)
{
    if (lst == NULL_VALUE)
        return 0;

    void *val = prim_car(lst);
    void *rest = prim_cdr(lst);

    // if (get_tag(val) == CONS)
    //     return length_counter(val) + length_counter(rest);
    // else
    //     return 1 + length_counter(rest);

    return 1 + length_counter(rest);
}

#pragma endregion

#pragma region ArithOpFunctions

bool is_true(void *val)
{
    return decode_bool(val);
}

#pragma region EQUALITY

// this function assumes that both the args passed are mpz_t and doesn't perform a check
// tho decode_mpz when called by this function does the check.
void *mpz_equal(void *arg1, void *arg2)
{
    mpz_t *arg1_mpz = decode_mpz(arg1);
    mpz_t *arg2_mpz = decode_mpz(arg2);

    if (mpz_cmp(*arg1_mpz, *arg2_mpz) == 0)
    {
        return encode_bool(true);
    }

    return encode_bool(false);
}

void *mpf_equal(void *arg1, void *arg2)
{
    mpf_t *arg1_mpf = decode_mpf(arg1);
    mpf_t *arg2_mpf = decode_mpf(arg2);

    if (mpf_cmp(*arg1_mpf, *arg2_mpf) == 0)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

// casting functions
mpf_t *mpz_2_mpf(mpz_t *val)
{
    mpf_t *ret_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*ret_val);
    mpf_set_z(*ret_val, *val);
    return ret_val;
}

mpz_t *mpf_2_mpz(mpf_t *val)
{
    mpz_t *ret_val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*ret_val);
    mpz_set_f(*ret_val, *val);
    return ret_val;
}

void *str_equal(void *arg1, void *arg2)
{
    std::string *arg1_str = decode_str(arg1);
    std::string *arg2_str = decode_str(arg2);

    if (arg1_str->compare(*arg2_str) == 0)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}
void *spl_equal(void *arg1, void *arg2)
{
    // we don't care if the values are bools are nulls, we just care about
    // both the arguments have the same value, so we cast to u64 compare and return.
    u64 arg1_u64 = (u64)arg1;
    u64 arg2_u64 = (u64)arg2;

    if (arg1_u64 == arg2_u64)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

void *cons_equal(void *arg1, void *arg2)
{
    // tags have to be equal or false
    // if both are cons, then we fetch the car and call equal on them if not equal return false
    // update to cdr and continue
    // if not cons, call equal on the value and if not return false or return true
    while ((get_tag(arg1) == get_tag(arg2)))
    {
        if (is_cons(arg1) && is_cons(arg2))
        {
            void **cons_arg1 = decode_cons(arg1);
            void **cons_arg2 = decode_cons(arg2);

            // std::cout << print_val(cons_arg1[0]) << std::endl;
            // std::cout << print_val(cons_arg2[0]) << std::endl;
            // std::cout << print_val(equal_(cons_arg1[0], cons_arg2[0])) << std::endl;

            // comparing the car values of two cons using the equal function
            if (!decode_bool(equal_(cons_arg1[0], cons_arg2[0])))
            {
                return encode_bool(false);
            }
            arg1 = cons_arg1[1];
            arg2 = cons_arg2[1];
        }
        else
        {
            if (decode_bool(equal_(arg1, arg2)))
            {
                return encode_bool(true);
            }
            return encode_bool(false);
        }
    }
    return encode_bool(false);
}

void *hash_equal(void *arg1, void *arg2)
{
    const hamt<hash_struct, hash_struct> *h_arg1 = decode_hash(arg1);
    const hamt<hash_struct, hash_struct> *h_arg2 = decode_hash(arg2);

    if (h_arg1->getHash() == h_arg2->getHash())
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

void *equal_(void *arg1, void *arg2)
{
    // takes in two voids,
    // checks if they have the same tag, if not return false else
    // switches based on the tag to the appropriate function for the type
    int type_arg1 = get_tag(arg1);
    // checking the tags match
    if (!(type_arg1 == get_tag(arg2)))
    {
        return encode_bool(false);
    }
    switch (type_arg1)
    {
    case MPZ:
    {
        return mpz_equal(arg1, arg2);
        break;
    }
    case MPF:
    {
        return mpf_equal(arg1, arg2);
        break;
    }
    case STRING:
    {
        return str_equal(arg1, arg2);
        break;
    }
    case SPL:
    {
        return spl_equal(arg1, arg2);
        break;
    }
    case CONS:
    {
        return cons_equal(arg1, arg2);
        break;
    }
    case HASH:
    {
        return hash_equal(arg1, arg2);
        break;
    }
    default:
    {
        return encode_bool(false);
        break;
    }
    }
}

#pragma endregion

#pragma region HASHING

// these function assume the type passed is the expected one
// all the three hash function have a very similar structure
// get the the number of limbs/chars to process, and get the array pointer to them
// for loop over them to compute FNV1A and return the hash
u64 mpz_hash(void *val)
{
    u64 h = 0xcbf29ce484222325;
    mpz_t *mpz_val = decode_mpz(val);
    // the mpz_sgn is a macro in gmp that just looks at _mp_size for sign info
    int is_negative = mpz_sgn(*mpz_val); // < 0 if negative, = 0 if zero and > 0 if_positive
    u64 limb_cnt = mpz_size(*mpz_val);
    const mp_limb_t *limb_ptr = mpz_limbs_read(*mpz_val);
    if (is_negative < 0)
    {
        h = h ^ 0x00000000000000ff;
        h = h * 0x100000001b3;
    }
    else
    {
        h = h ^ 0x0000000000000000; // this doesn't do anything, not sure what to XOR it with for change
        h = h * 0x100000001b3;
    }

    for (u32 i = 0; i < limb_cnt; i++)
    {
        u64 limb = limb_ptr[i];
        for (u32 j = 0; j < 8; j++)
        {
            h = h ^ ((limb >> j * 8) & 0x00000000000000ff);
            h = h * 0x100000001b3;
        }
    }
    return h;
}

u64 mpf_hash(void *val)
{
    u64 h = 0xcbf29ce484222325;
    mpf_t *mpf_val = decode_mpf(val);
    u64 limb_cnt = mpf_size(*mpf_val);
    const mp_limb_t *limb_ptr = (*mpf_val)->_mp_d;
    int is_negative = mpf_sgn(*mpf_val);

    if (is_negative < 0)
    {
        h = h ^ 0x00000000000000ff;
        h = h * 0x100000001b3;
    }
    else
    {
        h = h ^ 0x0000000000000000; // this doesn't do anything, not sure what to XOR it with for change
        h = h * 0x100000001b3;
    }

    for (u32 i = 0; i < limb_cnt; i++)
    {
        u64 limb = limb_ptr[i];
        for (u32 j = 0; j < 8; j++)
        {
            h = h ^ ((limb >> j * 8) & 0x00000000000000ff);
            h = h * 0x100000001b3;
        }
    }

    return h;
}

u64 str_hash(void *val)
{
    std::string *str = decode_str(val);
    const u8 *data = reinterpret_cast<const u8 *>(str->data());
    int length = str->length();
    u64 h = 0xcbf29ce484222325;
    for (u32 i = 0; i < length; ++i && ++data)
    {
        h = h ^ *data;
        h = h * 0x100000001b3;
    }

    return h;
}

u64 hamt_hash(void *h)
{
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    return h_hamt->getHash();
}

u64 cons_hash(void *lst)
{
    assert_type((get_tag(lst) == CONS), "Type passed to cons_hash is not a CONS");
    u64 *h = (u64 *)GC_MALLOC(sizeof(u64));
    *h = 0xcbf29ce484222325;
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF) || (car_tag == STRING) || (car_tag == HASH) || (car_tag == CONS);

        assert_type(type_check, "Error in cons_hash: values in the lst are not hashable");

        *h ^= hash_(cons_lst[0]) + 0x9e3779b9 + (*h << 6) + (*h >> 2);

        lst = cons_lst[1];
    }
    return *h;
}

u64 hash_(void *val)
{
    switch (get_tag(val))
    {
    case MPZ:
    {
        return mpz_hash(val);
        break;
    }
    case MPF:
    {
        return mpf_hash(val);
        break;
    }
    case STRING:
    {
        return str_hash(val);
        break;
    }
    case HASH:
    {
        return hamt_hash(val);
        break;
    }
    case CONS:
    {
        return cons_hash(val);
        break;
    }
    default:
    {
        assert_type(false, "type passed to hash_ cannot be hashed");
    }
    }
    return 0;
}

#pragma endregion

// Function to check if val is an integer
int is_integer_val(void *val)
{
    if (get_tag(val) == MPZ)
        return true;
    else if (get_tag(val) == MPF)
    {
        mpf_t *fval = decode_mpf(val);
        mpf_t flr;
        mpf_init(flr);
        mpf_floor(flr, *fval);
        int result = mpf_cmp(*fval, flr) == 0;
        mpf_clear(flr);
        return result;
    }
    return false;
}

void *prim_modulo(void *first, void *second)
{
    void *result = nullptr;

    if (!is_integer_val(first) || !is_integer_val(second))
    { // to see either of the numbers has fraction in it!
        assert_type(false, "Error in apply_prim_modulo: contract violation, expected integer!");
    }
    else if (get_tag(first) == MPZ && get_tag(second) == MPZ)
    { // both numbers are mpz
        mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init(*result);
        mpz_mod(*result, *(decode_mpz(first)), *(decode_mpz(second)));
        return encode_mpz(result);
    }
    else if (get_tag(first) == MPF && get_tag(second) == MPF)
    { // both number are mpf
        mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_t *mpz_arg1 = mpf_2_mpz(decode_mpf(first));
        mpz_t *mpz_arg2 = mpf_2_mpz(decode_mpf(second));

        mpz_mod(*result, *mpz_arg1, *mpz_arg2);
        return encode_mpf(mpz_2_mpf(result));
    }
    else if (get_tag(first) == MPZ && get_tag(second) == MPF)
    { // first number is mpz but second is mpf
        mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_t *mpz_arg2 = mpf_2_mpz(decode_mpf(second));

        mpz_mod(*result, *(decode_mpz(first)), *mpz_arg2);
        return encode_mpf(mpz_2_mpf(result));
    }
    else
    { // second number is mpz but but first is mpf
        mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_t *mpz_arg1 = mpf_2_mpz(decode_mpf(first));

        mpz_mod(*result, *mpz_arg1, *(decode_mpz(second)));
        return encode_mpf(mpz_2_mpf(result));
    }

    return result;
}

void *apply_prim_modulo(void *lst) //+
{
    if (length_counter(lst) > 2)
        assert_type(false, "Error in apply_prim_modulo -> arity mismatch: more than two arguments is not supported!");

    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    assert_type(type_check, "Error in apply_prim_modulo -> values in the lst are not MPZ/MPF");

    return prim_modulo(prim_car(lst), prim_car(prim_cdr(lst)));
}

void *apply_prim_modulo_2(void *a, void *b)
{
    return prim_modulo(a, b);
}

void *prim_equal_u63(void *arg1, void *arg2)
{
    return equal_(arg1, arg2);
}

void *apply_prim_equal_u63_2(void *x, void *y)
{
    return prim_equal_u63(x, y);
}

void *apply_prim_equal_u63(void *lst)
{
    if (length_counter(lst) > 2)
        assert_type(false, "Error in apply_prim_equal_u63 -> arity mismatch: more than two arguments is not supported!");

    return prim_equal_u63(prim_car(lst), prim_car(prim_cdr(lst)));
}

void *prim_eq_u63(void *arg1, void *arg2)
{
    return equal_(arg1, arg2);
}

// // cons?
// void *prim_cons_u63(void *lst)
// {
//     if (get_tag(lst) == CONS)
//     {
//         return encode_bool(true);
//     }
//     return encode_bool(false);
// }

// null?
void *prim_null_u63(void *item)
{
    if (get_tag(item) == SPL)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

void *apply_prim_null_u63(void *lst)
{

    if (length_counter(lst) > 1)
        assert_type(false, "Error in apply_prim_null_u63 -> arity mismatch: expected number of argument is 1!");

    return prim_null_u63(lst);
}

void *apply_prim_null_u63_1(void *item)
{
    return prim_null_u63(item);
}

#pragma region Addition
void *add_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_add(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}

void *add_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_add(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}
void *add_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        mpf_add(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_add(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *add(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    if (arg1_tag == arg2_tag)
    {
        if (arg1_tag == MPZ)
        {
            return add_mpz(arg1, arg2);
        }
        else
        {
            return add_mpf(arg1, arg2);
        }
    }
    else
    {
        return add_mpz_mpf(arg1, arg2);
    }
    return 0;
}

void *apply_prim__u43(void *lst) //+
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in addition: values in the lst are not MPZ/MPF");

        if (!result)
        {
            result = cons_lst[0];
        }
        else
        {
            result = add(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    if (result == nullptr)
    {
        mpz_t *val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*val, "0", 10);
        return encode_mpz(val);
    }
    return result;
}

void *apply_prim__u43_1(void *arg1) //+
{
    // adding dummy parameter
    mpz_t *tempMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*tempMpzVal, "0", 10);
    void *arg2 = encode_mpz(tempMpzVal);

    return add(arg1, arg2);
}
void *apply_prim__u43_2(void *arg1, void *arg2) //+
{
    return add(arg1, arg2);
}
void *apply_prim__u43_3(void *arg1, void *arg2, void *arg3) //+
{
    return add(arg1, add(arg2, arg3));
}

#pragma endregion

#pragma region Subtraction
void *sub_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_sub(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}

void *sub_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_sub(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}

void *sub_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        mpf_sub(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_sub(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *sub(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    if (arg1_tag == arg2_tag)
    {
        if (arg1_tag == MPZ)
        {
            return sub_mpz(arg1, arg2);
        }
        else
        {
            return sub_mpf(arg1, arg2);
        }
    }
    else
    {
        return sub_mpz_mpf(arg1, arg2);
    }
    return 0;
}

void *apply_prim__u45(void *lst) //-
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in subtraction: values in the lst are not MPZ/MPF");

        if (!result)
        {
            if (!is_cons(cons_lst))
            {
                // mpz_t* ret_val = (mpz)
                // ?? this has to be changed to return the - value of the car, as it is the only element
                result = cons_lst[0];
            }
            else
            {

                result = cons_lst[0];
            }
        }
        else
        {
            result = sub(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    return result;
}

void *apply_prim__u45_1(void *arg1) //-
{
    // adding dummy parameter
    int tag = get_tag(arg1);
    if (tag == MPZ)
    {
        // gets the int number, multiplies it by two and store it to a new var, encodes it back to mpz
        mpz_t *final_mpz;
        final_mpz = decode_mpz(arg1);
        std::string str(mpz_get_str(nullptr, 10, *final_mpz));

        int num = std::stoi(str);

        std::stringstream numstr;
        numstr << num * 2;

        mpz_t *tempMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*tempMpzVal, numstr.str().c_str(), 10);
        void *arg2 = encode_mpz(tempMpzVal);

        return sub(arg1, arg2);
    }
    else
    {
        // gets the float number, multiplies it by two and store it to a new var, encodes it back to mpz
        mpf_t *final_mpf = decode_mpf(arg1);
        const char *boom;
        char buffer[1000];
        gmp_sprintf(buffer, "%.1Ff", *final_mpf);
        std::string str(buffer);

        float num = std::stof(str);

        std::stringstream numstr;
        numstr << num * 2;

        mpf_t *tempMpfVal = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
        mpf_init_set_str(*tempMpfVal, numstr.str().c_str(), 10);
        void *arg2 = encode_mpf(tempMpfVal);

        return sub(arg1, arg2);
    }
}
void *apply_prim__u45_2(void *arg1, void *arg2) //-
{
    return sub(arg1, arg2);
}
void *apply_prim__u45_3(void *arg1, void *arg2, void *arg3) //-
{
    return sub(sub(arg1, arg2), arg3);
}

#pragma endregion

#pragma region Multiplication
void *mul_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_mul(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}
void *mul_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_mul(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}
void *mul_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        mpf_mul(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_mul(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *mul(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    if (arg1_tag == arg2_tag)
    {
        if (arg1_tag == MPZ)
        {
            return mul_mpz(arg1, arg2);
        }
        else
        {
            return mul_mpf(arg1, arg2);
        }
    }
    else
    {
        return mul_mpz_mpf(arg1, arg2);
    }
    return 0;
}

void *apply_prim__u42(void *lst) //*
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in multiplication: values in the lst are not MPZ/MPF");
        if (!result)
        {
            result = cons_lst[0];
        }
        else
        {
            result = mul(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    return result;
}

void *apply_prim__u42_1(void *arg1) //*
{
    // std::cout << "hererererer...mul" << std::endl;
    // adding dummy parameter
    mpz_t *tempMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*tempMpzVal, "1", 10);
    void *arg2 = encode_mpz(tempMpzVal);

    return mul(arg1, arg2);
}

void *apply_prim__u42_2(void *arg1, void *arg2) //*
{
    return mul(arg1, arg2);
}

void *apply_prim__u42_3(void *arg1, void *arg2, void *arg3) //*
{
    return mul(mul(arg1, arg2), arg3);
}

#pragma endregion

#pragma region Division

void *div_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_div(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}
void *div_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_div(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}
void *div_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        // print_val(mpf_arg1);
        mpf_div(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_div(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *div(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    if (arg1_tag == arg2_tag)
    {
        if (arg1_tag == MPZ)
        {
            return div_mpz(arg1, arg2);
        }
        else
        {
            return div_mpf(arg1, arg2);
        }
    }
    else
    {
        return div_mpz_mpf(arg1, arg2);
    }
    return 0;
}

void *apply_prim__u47(void *lst) // / division
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in division: values in the lst are not MPZ/MPF");
        if (!result)
        {
            result = cons_lst[0];
        }
        else
        {
            result = div(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    return result;
}

// doesn't work!
void *apply_prim__u47_1(void *arg1) // / division
{
    std::cout << "hererererer...div" << std::endl;
    // adding dummy parameter
    mpz_t *tempMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*tempMpzVal, "1", 10);
    void *arg2 = encode_mpz(tempMpzVal);

    return div(arg2, arg1);
}

void *apply_prim__u47_2(void *arg1, void *arg2) // / division
{
    return div(arg1, arg2);
}

void *apply_prim__u47_3(void *arg1, void *arg2, void *arg3) // / division
{
    return div(div(arg1, arg2), arg3);
}

#pragma endregion
void *apply_prim_and(void *lst)
{
    bool result = false;
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        // decoding a boolean run the required assertions, so directly decoding and assigninh

        if (decode_bool(cons_lst[0]))
        {
            lst = cons_lst[1];
            result = true;
            continue;
        }
        return encode_bool(false);
    }
    return encode_bool(result);
}

void *apply_prim_or(void *lst)
{
    bool result = false;
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        // decoding a boolean run the required assertions, so directly decoding and assigninh

        if (!decode_bool(cons_lst[0]))
        {
            lst = cons_lst[1];
            continue;
        }
        return encode_bool(true);
    }
    return encode_bool(result);
}

bool less_equal_zero(long cmp)
{
    if (cmp <= 0)
    {
        return true;
    }
    return false;
}

bool great_equal_zero(long cmp)
{
    if (cmp >= 0)
    {
        return true;
    }
    return false;
}

bool great_zero(long cmp)
{
    // std::cout << "hererererer...less_zero" << cmp << std::endl;
    if (cmp > 0)
    {
        return true;
    }
    return false;
}

bool less_zero(long cmp)
{

    if (cmp < 0)
    {
        return true;
    }
    return false;
}

bool equal_zero(long cmp)
{
    if (cmp == 0)
    {
        return true;
    }
    return false;
}

void *compare_lst(void *lst, bool (*cmp_op)(long))
{
    int cmp_result = 0;
    long counter = 0;
    mpz_t *temp_store = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*temp_store);
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        bool type_check = (get_tag(cons_lst[0]) == MPZ);

        assert_type(type_check,
                    "Error in apply_prim__u62: values in the lst are not MPT");
        mpz_t *opd1 = decode_mpz(cons_lst[0]);

        // std::string str(mpz_get_str(nullptr, 10, *opd1));
        // int num = std::stoi(str);
        // std::cout << "hererererer...while num>> " << num << std::endl;

        if (counter == 0)
        {
            mpz_set(*temp_store, *opd1);
            lst = cons_lst[1];
            counter++;
            continue;
        }

        cmp_result = mpz_cmp(*temp_store, *opd1);
        if (cmp_op(cmp_result))
        {
            mpz_set(*temp_store, *opd1);
            lst = cons_lst[1];
            counter++;
            continue;
        }
        return encode_bool(false);
    }
    if (counter <= 1)
    {
        assert_type(false, "Less than two numbers to compare in the list");
    }
    return encode_bool(true);
}

void *compare_op(void *arg1, void *arg2, bool (*cmp_op)(long))
{
    int cmp_result = 0;

    mpz_t *num1 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_t *num2 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*num1);
    mpz_init(*num2);

    mpz_t *ar1 = decode_mpz(arg1);
    mpz_t *ar2 = decode_mpz(arg2);

    mpz_set(*num1, *ar1);
    mpz_set(*num2, *ar2);
    cmp_result = mpz_cmp(*num1, *num2);

    if (cmp_op(cmp_result))
        return encode_bool(true);
    else
        return encode_bool(false);
}

// checks if a list is equal
void *apply_prim__u61(void *lst) // =
{
    return compare_lst(lst, *equal_zero);
}
void *apply_prim__u61_1(void *arg1) // =
{
    return encode_bool(true);
}
void *apply_prim__u61_2(void *arg1, void *arg2) // =
{
    return compare_op(arg1, arg2, *equal_zero);
}
void *apply_prim__u61_3(void *arg1, void *arg2, void *arg3) // =
{
    if (decode_bool(compare_op(arg1, arg2, *equal_zero)))
        return compare_op(arg2, arg3, *equal_zero);
    else
        return encode_bool(false);
}

// Checks if the list is strictly decreasing
void *apply_prim__u62(void *lst) // >
{
    return compare_lst(lst, *great_zero);
}
void *apply_prim__u62_1(void *arg1) // >
{
    return encode_bool(true);
}
void *apply_prim__u62_2(void *arg1, void *arg2) // >
{
    return compare_op(arg1, arg2, *great_zero);
}
void *apply_prim__u62_3(void *arg1, void *arg2, void *arg3) // >
{
    if (decode_bool(compare_op(arg1, arg2, *great_zero)))
        return compare_op(arg2, arg3, *great_zero);
    else
        return encode_bool(false);
}

// checks if a list is strictly increasing
void *apply_prim__u60(void *lst) // <
{
    return compare_lst(lst, *less_zero);
}
void *apply_prim__u60_1(void *arg1) // <
{
    return encode_bool(true);
}
void *apply_prim__u60_2(void *arg1, void *arg2) // <
{
    return compare_op(arg1, arg2, *less_zero);
}
void *apply_prim__u60_3(void *arg1, void *arg2, void *arg3) // <
{
    if (decode_bool(compare_op(arg1, arg2, *less_zero)))
        return compare_op(arg2, arg3, *less_zero);
    else
        return encode_bool(false);
}

// checks if elements are decreasing >=
void *apply_prim__u62_u61(void *lst)
{
    return compare_lst(lst, *great_equal_zero);
}
void *apply_prim__u62_u61_1(void *arg1) // >=
{
    return encode_bool(true);
}
void *apply_prim__u62_u61_2(void *arg1, void *arg2) // >=
{
    return compare_op(arg1, arg2, *great_equal_zero);
}
void *apply_prim__u62_u61_3(void *arg1, void *arg2, void *arg3) // >=
{
    // std::cout << "hererererer...apply_prim__u62_u61_3" << std::endl;
    if (decode_bool(compare_op(arg1, arg2, *great_equal_zero)))
        return compare_op(arg2, arg3, *great_equal_zero);
    else
        return encode_bool(false);
}

// checks if elements are increasing <=
void *apply_prim__u60_u61(void *lst)
{
    return compare_lst(lst, *less_equal_zero);
}
void *apply_prim__u60_u61_1(void *arg1) // <=
{
    return encode_bool(true);
}
void *apply_prim__u60_u61_2(void *arg1, void *arg2) // <=
{
    return compare_op(arg1, arg2, *less_equal_zero);
}
void *apply_prim__u60_u61_3(void *arg1, void *arg2, void *arg3) // <=
{
    // std::cout << "hererererer...apply_prim__u60_u61_3" << std::endl;
    if (decode_bool(compare_op(arg1, arg2, *less_equal_zero)))
        return compare_op(arg2, arg3, *less_equal_zero);
    else
        return encode_bool(false);
}

#pragma endregion

// #pragma region ConsMethods

// static void *prim_cons(void *arg1, void *arg2)
// {
//     void **cell = (void **)GC_MALLOC(2 * sizeof(void *));
//     cell[0] = arg1;
//     cell[1] = arg2;
//     return encode_cons(cell);
// }

// void *prim_car(void *val)
// {
//     assert_type((prim_cons_u63(val)), "not a cons cell");
//     void **cell = decode_cons(val);
//     return cell[0];
// }

// void *prim_cdr(void *val)
// {
//     assert_type((prim_cons_u63(val)), "not a cons cell");
//     void **cell = decode_cons(val);
//     return cell[1];
// }

// std::string print_cons(void *lst)
// {
//     std::string ret_str;
//     ret_str.append("(list ");
//     while (is_cons(lst))
//     {
//         void **cons_lst = decode_cons(lst);
//         ret_str.append(print_val(cons_lst[0]));
//         if (!is_cons(cons_lst[1]))
//         {
//             break;
//         }
//         ret_str.append(" ");
//         lst = cons_lst[1];
//     }
//     ret_str.append(")");
//     return ret_str;
// }
// #pragma endregion

#pragma region hash-prims

struct hash_struct
{
    void *val;

    hash_struct(void *arg)
    {
        this->val = arg;
    }

    u64 hash() const
    {
        return hash_(this->val);
    }

    bool operator==(const hash_struct &s) const
    {
        return decode_bool(equal_(this->val, s.val));
    }

    void print_hash_val() const
    {
        print_val(this->val);
    }
};

std::string print_set(void *s)
{
    const hamt<hash_struct, hash_struct> *h_set = decode_hash(s);
    const hash_struct **keys = h_set->getKeys();
    std::string ret_str = "(set";
    for (int i = 0; i < (h_set->size() * 2); i += 2)
    {
        ret_str += " " + print_val(keys[i]->val);
    }
    return ret_str + ")";
}

// doesn't work now just prints the keys in a list like set
std::string print_hash(void *h)
{
    assert_type(get_tag(h) == HASH, "Passed type is not a hash");
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    if (h_hamt->whatami() == hamt_ds_type::set_type)
    {
        return print_set(h);
    }
    std::string ret_str;
    ret_str.append("'#hash(");
    const hash_struct **keys = h_hamt->getKeys();
    for (int i = 0; i < (h_hamt->size() * 2); i += 2)
    {
        ret_str += "(" + print_val(keys[i]->val);
        ret_str += " . " + print_val(keys[i + 1]->val) + ") ";
    }
    return ret_str + ")";
    // return ret_str;
}

// we'd atleast want to accept and work with strings and numbers
// but we will start with just numbers(mpz_t's)
// void *apply_prim_hash(void *lst) // generates a hash based on the k v pairs
// in the list
void *apply_prim_hash(void *lst)
{
    // For Keys : MPZ, MPF, STRING
    // For Values: Everything(void*)
    const hamt<hash_struct, hash_struct> *h = new ((hamt<hash_struct, hash_struct> *)GC_MALLOC(sizeof(hamt<hash_struct, hash_struct>))) hamt<hash_struct, hash_struct>();
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int elem_tag = get_tag(cons_lst[0]);
        bool type_check = (elem_tag == MPZ) || (elem_tag == MPF) || (elem_tag == STRING) || (elem_tag == HASH) || (elem_tag == CONS);

        if (!is_cons(cons_lst[1]))
        {
            assert_type(false, "Value isn't there");
        }
        void **cdr_cons_lst = decode_cons(cons_lst[1]);

        if (type_check)
        {
            const hash_struct *const k = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(cons_lst[0]);
            //?? hash_struct for value is not required, have to ask and remove.
            const hash_struct *const v = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(cdr_cons_lst[0]);
            h = h->insert(k, v);
            lst = cdr_cons_lst[1];
            continue;
        }
        assert_type(false, "Key is not one of MPZ or MPF or STRING");
    }
    // std::cout << h->size() << std::endl;
    return encode_hash(h);
}

void *prim_hash_u45ref(void *h, void *k)
{
    // check if h is a hash
    // check if k is an mpz
    // decode the hash and call hash-ref functions
    // return the key
    bool type_check_hash = get_tag(h) == HASH;
    if (!type_check_hash)
    {
        assert_type(false, "in the hash-ref function hash is not passed");
    }
    int elem_tag = get_tag(k);
    bool type_check_key = (elem_tag == MPZ) || (elem_tag == MPF) || (elem_tag == STRING) || (elem_tag == HASH);
    if (!type_check_key)
    {
        assert_type(false, "in the hash-ref function mpz_t/mpf_t/std::string is not passed");
    }
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    const hash_struct *const key = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(k);
    const hash_struct *const t = h_hamt->get(key);
    if (t)
    {
        return t->val;
    }
    else
    {
        return NULL_VALUE;
    }
}

void *prim_hash_u45set(void *h, void *k, void *v)
{
    // check if h is hash
    // check if k, v are mpz's
    // check and update if there and create if new
    bool type_check_hash = get_tag(h) == HASH;
    if (!type_check_hash)
    {
        assert_type(false, "in the hash-set, hash is not passed");
    }
    int key_tag = get_tag(k);
    bool type_check_key = (key_tag == MPZ) || (key_tag == MPF) || (key_tag == STRING);
    if (!type_check_key)
    {
        assert_type(false, "in the hash-set function mpz_t/mpf_t/std::string for key is not passed");
    }

    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    const hash_struct *const key = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(k);
    //?? hash_struct for value is not required, have to ask and remove.
    const hash_struct *const value = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(v);
    h_hamt = h_hamt->insert(key, value);

    return encode_hash(h_hamt);
}

void *prim_set_u45add(void *s, void *val)
{
    return prim_hash_u45set(s, val, encode_bool(true));
}

void *prim_hash_u45has_u45key_u63(void *h, void *k)
{
    void *ret_val = prim_hash_u45ref(h, k);
    if (ret_val)
    {
        return encode_bool(true);
    }
    else
    {
        return encode_bool(false);
    }
}

void *prim_hash_u45count(void *h)
{
    // check if a hash
    //  get the count
    //  return the mpz_t of count
    bool type_check_hash = get_tag(h) == HASH;
    if (!type_check_hash)
    {
        assert_type(false, "in the hash-count, hash is not passed");
    }
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    mpz_t *count = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_ui(*count, h_hamt->size());
    return encode_mpz(count);
}

void *prim_hash_u45keys(void *h)
{
    bool type_check_hash = get_tag(h) == HASH;
    if (!type_check_hash)
    {
        assert_type(false, "in the hash-keys function, hash is not passed");
    }
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    const hash_struct **keys_array = h_hamt->getKeys();
    // std::cout << "The size of the hash is: " << h_hamt->size() << std::endl;
    void *keys_cons_lst = encode_null();
    //+=2 and *2 coz getKeys returns an array that also has values.
    for (long i = 0; i < (h_hamt->size() * 2); i += 2)
    {
        keys_cons_lst = prim_cons(keys_array[i]->val, keys_cons_lst);
    }
    // std::cout << print_val(keys_cons_lst) << std::endl;
    return keys_cons_lst;
}
#pragma endregion

#pragma region set-prims
void *apply_prim_set(void *lst)
{
    const hamt<hash_struct, hash_struct> *h = new ((hamt<hash_struct, hash_struct> *)GC_MALLOC(sizeof(hamt<hash_struct, hash_struct>))) hamt<hash_struct, hash_struct>(hamt_ds_type::set_type);
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int elem_tag = get_tag(cons_lst[0]);
        bool type_check = (elem_tag == MPZ) || (elem_tag == MPF) || (elem_tag == STRING);

        if (type_check)
        {
            const hash_struct *const k = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(cons_lst[0]);
            const hash_struct *const v = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(encode_bool(true));
            h = h->insert(k, v);
            lst = cons_lst[1];
            continue;
        }
        assert_type(false, "Key is not one of MPZ or MPF or STRING");
    }
    // std::cout << "the size of the set being returned is" << h->size() << std::endl;
    return encode_hash(h);
}

void *prim_set_u45_u62list(void *h)
{
    return prim_hash_u45keys(h);
}

void *prim_list_u45_u62set(void *lst)
{
    return apply_prim_set(lst);
}

#pragma end region

/*
Takes a MPZ and returns MPF for that integer
*/
void *prim_exact_u45_u62inexact(void *val)
{
    int val_tag = get_tag(val);
    if (val_tag != MPZ)
    {
        assert_type(false, "type passed to int->float is not an int");
    }
    mpf_t *ret_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*ret_mpf);
    mpf_set_z(*ret_mpf, *(decode_mpz(val)));
    return encode_mpf(ret_mpf);
}

/*
Takes a MPF and returns MPZ for that FLOAT
*/
void *prim_inexact_u45_u62exact(void *val)
{
    int val_tag = get_tag(val);
    if (val_tag != MPF)
    {
        assert_type(false, "type passed to float->int is not an float");
    }
    mpz_t *ret_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*ret_mpz);
    mpz_set_f(*ret_mpz, *(decode_mpf(val)));
    return encode_mpz(ret_mpz);
}

#pragma region STRINGS
// takes in a void* and checks if the passed value is a string or not
void *prim_string_u63(void *val)
{
    int tag = get_tag(val);
    if (tag == STRING)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}
// takes a void* and checks if it is a string and then returns the length of it
void *prim_string_u45length(void *val)
{
    int tag = get_tag(val);
    if (tag != STRING)
    {
        assert_type(false, "val passed to string_length is not a string");
    }

    std::string *str = decode_str(val);
    mpz_t *str_len = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_ui(*str_len, str->length());
    return encode_mpz(str_len);
}
// takes in str and the position and returns the character at that position
void *prim_string_u45ref(void *str_void, void *pos_void)
{
    assert_type((get_tag(str_void)) == STRING, "str passed to the string-ref is not a string");
    assert_type((get_tag(pos_void)) == MPZ, "pos passed to the string-ref is not an integer");

    std::string *str = decode_str(str_void);
    mpz_t *pos = decode_mpz(pos_void);

    if (!(mpz_cmp_ui(*pos, str->length()) < 0))
    { // pos < str.length()
        assert_type(false, "Array out of bounds exception");
    }
    const char ch = str->at(mpz_get_ui(*pos));
    return encode_str(new (GC) std::string(&ch));
}
// takes in the str, start[inclusive] and end[exclusive]
// and returns the substring starting from start till end
void *prim_substring(void *str_void, void *start_void, void *end_void)
{
    assert_type(get_tag(str_void) == STRING, "str passed to the substring is not a string");
    assert_type(get_tag(start_void) == MPZ, "start passed to the substring is not an integer");
    assert_type(get_tag(end_void) == MPZ, "end passed to the substring is not an integer");

    std::string *str = decode_str(str_void);
    long str_len = str->length();
    mpz_t *start = decode_mpz(start_void);
    mpz_t *end = decode_mpz(end_void);

    if (!((mpz_cmp_ui(*start, str_len) < 0) && (mpz_cmp_ui(*end, str_len) <= 0)))
    {
        assert_type(false, "Array out of bounds exception");
    }

    mpz_sub(*end, *start, *end);
    long substr_len = mpz_get_ui(*end);

    std::string *ret_str = new (GC) std::string(str->substr(mpz_get_ui(*start), substr_len));

    return encode_str(ret_str);
}

// takes two strings and returns the appended string
void *prim_string_u45append(void *s1_void, void *s2_void)
{
    assert_type((get_tag(s1_void)) == STRING, "str passed to the string-append is not a string");
    assert_type((get_tag(s2_void)) == STRING, "str passed to the string-append is not a string");

    std::string *s1 = new (GC) std::string(*(decode_str(s1_void)));
    std::string *s2 = decode_str(s2_void);
    s1->append(*s2);
    return encode_str(s1);
}

void *prim_string_u45_u62list(void *str_void)
{
    assert_type((get_tag(str_void)) == STRING, "str passed to the string->list is not a string");

    std::string *str = decode_str(str_void);
    std::string *ret_str = new (GC) std::string(*str);
    std::reverse(ret_str->begin(), ret_str->end());
    void *lst = encode_null();
    for (char c : *ret_str)
    {
        lst = prim_cons(encode_str(new (GC) std::string(&c)), lst);
    }
    return lst;
}

#pragma endregion
#pragma region PRINTING
std::string print_val(void *val)
{
    switch (get_tag(val))
    {
    case SPL:
        if (decode_bool(val))
        {
            return "#t";
        }
        else
        {
            return "#f";
        }
        break;
    case HASH:
    {
        return print_hash(val);
        break;
    }
    case MPZ:
    {

        mpz_t *final_mpz = decode_mpz(val);
        std::string str(mpz_get_str(nullptr, 10, *final_mpz));
        return str;
        break;
    }
    case STRING:
    {
        std::string str = "\"" + *(decode_str(val)) + "\"";
        return str;
        break;
    }
    case MPF:
    {
        mpf_t *final_mpf = decode_mpf(val);
        const char *boom;
        char buffer[1000];
        gmp_sprintf(buffer, "%.1Ff", *final_mpf);
        return std::string(buffer);
        break;
    }
    case CONS:
    {
        return print_cons(val);
        break;
    }
    }
    return "unknown_data_type_print_val";
}

#pragma endregion
void *halt;
void *arg_buffer[999]; // This is where the arg buffer is called
long numArgs;

void *fhalt()
{
    // std::cout << "In fhalt" << std::endl;
    std::cout << print_val(arg_buffer[2]) << std::endl;
    // print_val(arg_buffer[2]);
    exit(0);
}
