#include <bitset>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdlib> // for free()
#include <functional>
#include <iomanip> // For setprecision and fixed
#include <iostream>
#include <math.h>
#include <random>
#include <sstream>
#include <string>
#include <vector>

// GMP and gc headers
#include "gc.h"
#include "gc_cpp.h"
#include "gmp.h"
#include "gmpxx.h"
#include <limits.h>

// hamt headers
#include "hamt.h"

#define MASK(val) (((u64)(val)) & ~(7ULL))
unsigned long long call_counter = 0;

// #define NULL_VALUE 0
#define NULL_VALUE 32
#define TRUE_VALUE 8
#define FALSE_VALUE 16
#define FLOAT_VAL 24
#define ENV_ARRAY 1
#define RANDOM_VALUE 63 // 00111111

// Making the choice not to use them because the intptr_t is available.
typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;

enum DataType {
  SPL = 0x0,
  MPZ = 0x1,
  HASH = 0x2,
  STRING = 0x3,
  MPF = 0x4,
  CLO = 0x5,
  INT = 0x6,
  CONS = 0x7,
};

struct hash_struct;

std::string print_val(void *val);

void *equal_(void *arg1, void *arg2);

u64 hash_(void *val);

void *arg_buffer[999]; // This is where the arg buffer is called
long numArgs;

// Example print_val function
template <typename T> T print_val(T val) {
  return val; // Just return the value for demonstration
}

template <typename T> bool isPositive(T number) { return number > 0; }

#define PRINT(val) (std::cout << (val) << std::endl);

#pragma region Types
// region Encoding and Decoding and Tags

inline void assert_type(bool cond, const char *msg) {
  if (!cond) {
    std::cout << "type assertion failed-> " << msg << std::endl;
    exit(1);
  }
}

// Checks if a floating-point value can be represented precisely as a float
inline bool is_within_float_precision(float val) {
  return std::abs(val) <= 16777216.0f;
}

inline bool withinInt32BitRange(s64 val) {
  return (val >= -2147483648LL) && (val <= 2147483647LL);
}

// ??why encode and decode functions for every type, just have one and make it
// take a void* and the type we want the tag variable to returns a void* that is
// tagged

inline u64 encode_int(s32 val) { return ((((u64)((u32)(val))) << 32) | INT); }

inline u64 encode_float(float val) {
  u32 temp;
  std::memcpy(&temp, &val, sizeof(float));
  u64 encoded = ((u64)temp) << 32;
  encoded |= FLOAT_VAL;
  return encoded;
}

inline void *encode_mpz(mpz_t *val) {
  return reinterpret_cast<void *>(((u64)val) | MPZ);
}

inline void *encode_mpf(mpf_t *val) {
  return reinterpret_cast<void *>(((u64)val) | MPF);
}

inline void *encode_str(std::string *val) {
  return reinterpret_cast<void *>(((u64)val) | STRING);
}

inline void *encode_clo(void **val) {
  return reinterpret_cast<void *>(((u64)(val)) | CLO);
}

inline void *encode_bool(bool val) {
  if (val) {
    return reinterpret_cast<void *>(TRUE_VALUE);
  }
  return reinterpret_cast<void *>(FALSE_VALUE);
}

inline void *encode_cons(void **val) {
  return reinterpret_cast<void *>(((u64)(val)) | CONS);
}

inline void *encode_hash(const hamt<hash_struct, hash_struct> *val) {
  return reinterpret_cast<void *>(((u64)(val)) | HASH);
}

inline void *encode_null() { return reinterpret_cast<void *>(NULL_VALUE); }

// takes in a void * type and gets the tag, return it as an integer
inline int get_tag(void *val) {
  u64 ptr = reinterpret_cast<u64>(val);
  if ((ptr & 0x7) == SPL)
    return (ptr & 0x38);

  return (ptr & 7);
}

// for debugging purpose!
void print_mpf(mpf_t *arg) {
  // std::cout << "-----start of print_mpf-----" << std::endl;
  char buffer[1000];
  std::string str(buffer);

  gmp_sprintf(buffer, "%.10Ff", *arg);

  std::cout << "print_mpf: val: " << std::string(buffer) << std::endl;
  // std::cout << "-----end of print_mpf-----" << std::endl;
}

void print_mpz(const mpz_t *arg) { gmp_printf("print_mpz: val: %Zd\n", *arg); }

inline bool is_cons(void *lst) {
  if (get_tag(lst) == CONS) {
    return true;
  }
  return false;
}

inline s32 decode_int(void *val) {
  u64 v = reinterpret_cast<u64>(val);
  if ((v & 0x7) != INT)
    assert_type(false, "Error in decode_int -> Type error: Not an Integer!");

  return ((s32)((u32)(((v) & ~(7ULL)) >> 32)));
}

inline float decode_float(void *val) {
  if (get_tag(val) != FLOAT_VAL)
    assert_type(false, "Error in decode_float -> Type error: Not a float!");

  u64 v = reinterpret_cast<u64>(val);
  u32 temp = (v >> 32);
  float result;
  std::memcpy(&result, &temp, sizeof(float));
  return result;
}

mpz_t *decode_mpz(void *val) {
  // MASK does the casting to u64
  if (get_tag(val) != MPZ)
    assert_type(false, "Error in decode_mpz -> Type error: Not MPZ");

  return reinterpret_cast<mpz_t *>(MASK(val));
}

mpf_t *decode_mpf(void *val) {
  // MASK does the casting to u64
  if (get_tag(val) != MPF)
    assert_type(false, "Error in decode_mpf -> Type error: Not MPF");
  return reinterpret_cast<mpf_t *>(MASK(val));
}

std::string *decode_str(void *val) {
  // MASK does the casting to u64
  if (get_tag(val) != STRING)
    assert_type(false, "Error in decode_str -> Type error: Not STRING");
  return reinterpret_cast<std::string *>(MASK(val));
}

inline bool decode_bool(void *val) {
  // int tag = get_tag(val);
  u64 tag = (u64)val;

  if (tag == TRUE_VALUE) {
    return true;
  } else if (tag == FALSE_VALUE) {
    return false;
  }

  assert_type(false, "Error in decode_bool -> Type error: Not BOOLEAN");

  return false; // this line is just to satisfy the return type
}

inline void **decode_cons(void *val) {
  // if (get_tag(val) != CONS)
  //   assert_type(false, "Error in decode_cons -> Type error: Not CONS");
  return reinterpret_cast<void **>(MASK(val));
}

inline void **decode_clo(void *val) {
  if (get_tag(val) != CLO)
    assert_type(false, "Error in decode_clo -> Type error: Not CLO");
  return reinterpret_cast<void **>(MASK(val));
}

const hamt<hash_struct, hash_struct> *decode_hash(void *val) {
  if (get_tag(val) != HASH)
    assert_type(false, "Error in decode_hash -> Type error: Not HASH");
  return reinterpret_cast<const hamt<hash_struct, hash_struct> *>(MASK(val));
}

// Closure Allocation, alloc_clo
inline void **alloc_clo(void (*fptr)(), int num) {
  // call_counter++;
  void **obj = (void **)(GC_MALLOC((num + 1) * sizeof(void *)));

  obj[0] = reinterpret_cast<void *>(fptr);

  return obj;
}

// inline void **alloc_kont(void (*fptr)(), void *f_spec, int num) {
// inline void **alloc_kont(void (*fptr)(), void (*f_spec)(void*, void*), int
// num) {
inline void **alloc_kont(void (*f_spec)(void *, void *), int num) {
  void **obj = (void **)(GC_MALLOC((num + 1) * sizeof(void *)));

  // obj[0] = reinterpret_cast<void *>(fptr);
  obj[0] = reinterpret_cast<void *>(f_spec);

  return obj;
}

// template <typename Func> void **alloc_clo(Func fptr, int num) {
//   void **obj = (void **)(GC_MALLOC((num + 1) * sizeof(void *)));
//   obj[0] = nullptr;

//   if (obj != nullptr) {
//     obj[0] = reinterpret_cast<void *>(reinterpret_cast<uintptr_t>(fptr));
//   }

//   return obj;
// }

#pragma endregion

#pragma region ConsMethods

inline void *prim_cons(void *arg1, void *arg2) {
  void **cell = (void **)GC_MALLOC(2 * sizeof(void *));
  cell[0] = arg1;
  cell[1] = arg2;
  return encode_cons(cell);
}

inline void *apply_prim_cons_2(void *arg1, void *arg2) {
  void **cell = (void **)GC_MALLOC(2 * sizeof(void *));
  cell[0] = arg1;
  cell[1] = arg2;
  return encode_cons(cell);
}

// cons?
inline void *prim_cons_u63(void *lst) {
  if (get_tag(lst) == CONS) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

inline void *prim_car(void *val) {
  if (get_tag(val) != CONS)
    assert_type(false, "Error in car -> contract violation: not a cons cell");

  void **cell = decode_cons(val);
  return cell[0];
}

inline void *apply_prim_car_1(void *arg1) { return prim_car(arg1); }

inline void *prim_cdr(void *val) {
  if (get_tag(val) != CONS)
    assert_type(false, "Error in cdr -> contract violation: not a cons cell");

  void **cell = decode_cons(val);
  return cell[1];
}

inline void *apply_prim_cdr_1(void *arg1) { return prim_cdr(arg1); }

// returns length of a list
inline int length_counter(void *lst) {
  // if (lst == NULL_VALUE)
  //   return 0;

  int tag = get_tag(lst);
  PRINT("helloooo")

  if (tag == NULL_VALUE)
    return 0;

  if (tag != CONS)
    assert_type(false, "Error -> contact violation: expected list");

  // void *val = prim_car(lst);
  //   void *rest = prim_cdr(lst);

  // if (get_tag(val) == CONS)
  //     return length_counter(val) + length_counter(rest);
  // else
  //     return 1 + length_counter(rest);

  return 1 + length_counter(prim_cdr(lst));
}

inline bool is_null_val(void *val) {
  u64 tag = (u64)val;
  //   int tag = get_tag(val);
  if (tag == NULL_VALUE)
    return true;

  return false;
}

inline void *apply_prim_cons(void *arg) {
  if (numArgs < 4 || numArgs > 4)
    assert_type(
        false,
        "Error in cons -> arity mismatch: number of arguments should be 2!");

  return prim_cons(arg_buffer[3], arg_buffer[4]);
}

inline void *apply_prim_cons_i(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(
        false,
        "Error in cons -> arity mismatch: number of arguments should be 2!");

  void **cons_lst = decode_cons(lst);

  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return prim_cons(car, cadr);
}

inline void *apply_prim_car(void *lst) {
  if (numArgs < 3 || numArgs > 3)
    assert_type(
        false,
        "Error in car -> arity mismatch: number of arguments should be 1!");

  return prim_car(arg_buffer[3]);
}

inline void *apply_prim_car_i(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(
        false,
        "Error in car -> arity mismatch: number of arguments should be 1!");

  // because apply of car takes exp like, (list (list 10 2))
  return prim_car(prim_car(lst));
}

inline void *apply_prim_cdr(void *lst) {
  if (numArgs < 3 || numArgs > 3)
    assert_type(
        false,
        "Error in cdr -> arity mismatch: number of arguments should be 1!");

  return prim_cdr(arg_buffer[3]);
}

inline void *apply_prim_cdr_i(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(
        false,
        "Error in cdr -> arity mismatch: number of arguments should be 1!");

  // because apply of cdr takes exp like, (list (list 10 2))
  return prim_cdr(prim_car(lst));
}

std::string print_cons(void *lst) {
  std::string ret_str;
  ret_str.append("(list");
  while (get_tag(lst) == CONS) {
    void **cons_lst = decode_cons(lst);
    ret_str.append(" ");
    ret_str.append(print_val(cons_lst[0]));
    int tag = get_tag(cons_lst[1]);

    if (tag != CONS && tag != NULL_VALUE) {
      // will have to see when this case get's true!
      // something is not right here!
      // if (get_tag(cons_lst[1]) != SPL) {
      ret_str.append(" . ");
      ret_str.append(print_val(cons_lst[1]));
      //}

      break;
    }

    lst = cons_lst[1];
  }
  ret_str.append(")");
  return ret_str;
}

#pragma endregion

#pragma region ArithOpFunctions

inline bool is_true(void *val) {
  int tag = get_tag(val);

  // if (is_null_val(val)) {
  //   // kludgy way of doing this!
  //   return true;
  // } else if (get_tag(val) == CONS) {
  //   return true;
  // }

  if (tag == NULL_VALUE || tag == CONS)
    return true;

  return decode_bool(val);
}

#pragma region EQUALITY

// this function assumes that both the args passed are mpz_t and doesn't perform
// a check tho decode_mpz when called by this function does the check.
inline void *mpz_equal(void *arg1, void *arg2) {
  mpz_t *arg1_mpz = decode_mpz(arg1);
  mpz_t *arg2_mpz = decode_mpz(arg2);

  if (mpz_cmp(*arg1_mpz, *arg2_mpz) == 0) {
    return encode_bool(true);
  }

  return encode_bool(false);
}

inline void *mpf_equal(void *arg1, void *arg2) {
  mpf_t *arg1_mpf = decode_mpf(arg1);
  mpf_t *arg2_mpf = decode_mpf(arg2);

  if (mpf_cmp(*arg1_mpf, *arg2_mpf) == 0) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

// casting functions
mpf_t *mpz_2_mpf(mpz_t *val) {
  mpf_t *ret_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*ret_val);
  mpf_set_z(*ret_val, *val);
  return ret_val;
}

mpz_t *mpf_2_mpz(mpf_t *val) {
  mpz_t *ret_val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*ret_val);
  mpz_set_f(*ret_val, *val);
  return ret_val;
}

inline void *str_equal(void *arg1, void *arg2) {
  std::string *arg1_str = decode_str(arg1);
  std::string *arg2_str = decode_str(arg2);

  if (arg1_str->compare(*arg2_str) == 0) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

inline void *spl_equal(void *arg1, void *arg2) {
  // we don't care if the values are bools are nulls, we just care about
  // both the arguments have the same value, so we cast to u64 compare and
  // return.
  u64 arg1_u64 = (u64)arg1;
  u64 arg2_u64 = (u64)arg2;

  if (arg1_u64 == arg2_u64) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

inline void *cons_equal(void *arg1, void *arg2) {
  // tags have to be equal or false
  // if both are cons, then we fetch the car and call equal on them if not equal
  // return false update to cdr and continue if not cons, call equal on the
  // value and if not return false or return true
  while ((get_tag(arg1) == get_tag(arg2))) {
    if (is_cons(arg1) && is_cons(arg2)) {
      void **cons_arg1 = decode_cons(arg1);
      void **cons_arg2 = decode_cons(arg2);

      // comparing the car values of two cons using the equal function
      if (!decode_bool(equal_(cons_arg1[0], cons_arg2[0]))) {
        return encode_bool(false);
      }
      arg1 = cons_arg1[1];
      arg2 = cons_arg2[1];
    } else {
      if (decode_bool(equal_(arg1, arg2))) {
        return encode_bool(true);
      }
      return encode_bool(false);
    }
  }
  return encode_bool(false);
}

inline void *hash_equal(void *arg1, void *arg2) {
  const hamt<hash_struct, hash_struct> *h_arg1 = decode_hash(arg1);
  const hamt<hash_struct, hash_struct> *h_arg2 = decode_hash(arg2);

  if (h_arg1->getHash() == h_arg2->getHash()) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

inline void *equal_(void *arg1, void *arg2) {
  // takes in two voids,
  // checks if they have the same tag, if not return false else
  // switches based on the tag to the appropriate function for the type
  int type_arg1 = get_tag(arg1);
  // checking the tags match
  if (!(type_arg1 == get_tag(arg2))) {
    return encode_bool(false);
  }
  switch (type_arg1) {
  case TRUE_VALUE:
  case FALSE_VALUE:
  case NULL_VALUE: {
    u64 arg1_u64 = (u64)arg1;
    u64 arg2_u64 = (u64)arg2;
    return encode_bool(arg1_u64 == arg2_u64);

    break;
  }
  case INT: {
    if (decode_int(arg1) == decode_int(arg2))
      return encode_bool(true);
    else
      return encode_bool(false);

    break;
  }
  case FLOAT_VAL: {
    if (decode_float(arg1) == decode_float(arg2))
      return encode_bool(true);
    else
      return encode_bool(false);

    break;
  }
  case MPZ: {
    return mpz_equal(arg1, arg2);
    break;
  }
  case MPF: {
    return mpf_equal(arg1, arg2);
    break;
  }
  case STRING: {
    return str_equal(arg1, arg2);
    break;
  }
  case SPL: {
    return spl_equal(arg1, arg2);
    break;
  }
  case CONS: {
    return cons_equal(arg1, arg2);
    break;
  }
  case HASH: {
    return hash_equal(arg1, arg2);
    break;
  }
  default: {
    return encode_bool(false);
    break;
  }
  }
}

#pragma endregion

#pragma region HASHING

bool is_hashable(void *arg) {
  int tag = get_tag(arg);
  return (tag == INT) || (tag == FLOAT_VAL) || (tag == MPZ) || (tag == MPF) ||
         (tag == STRING) || (tag == HASH) || (tag == CONS);
}

u64 int_hash(void *val) {
  u64 h = 0xcbf29ce484222325;
  int int_val = decode_int(val);

  // get the pointers to array of bytes and hash them
  const uint8_t *p = reinterpret_cast<const uint8_t *>(&int_val);
  for (int i = 0; i < sizeof(int); i++) {
    h = h ^ static_cast<u64>(p[i]);
    h = h * 0x100000001b3;
  }
  return h;
}

u64 float_hash(void *val) {
  u64 h = 0xcbf29ce484222325;
  float float_val = decode_float(val);
  if (float_val == 0.0f) {
    float_val = 0.0f; // -0.0f and +0.0f are equal
  }
  // get the pointers to array of bytes and hash them
  const uint8_t *p = reinterpret_cast<const uint8_t *>(&float_val);
  for (int i = 0; i < sizeof(float); i++) {
    h = h ^ static_cast<u64>(p[i]);
    h = h * 0x100000001b3;
  }
  return h;
}

// these function assume the type passed is the expected one
// all the three hash function have a very similar structure
// get the the number of limbs/chars to process, and get the array pointer to
// them for loop over them to compute FNV1A and return the hash
u64 mpz_hash(void *val) {
  u64 h = 0xcbf29ce484222325;
  mpz_t *mpz_val = decode_mpz(val);
  // the mpz_sgn is a macro in gmp that just looks at _mp_size for sign info
  int is_negative =
      mpz_sgn(*mpz_val); // < 0 if negative, = 0 if zero and > 0 if_positive
  u64 limb_cnt = mpz_size(*mpz_val);
  const mp_limb_t *limb_ptr = mpz_limbs_read(*mpz_val);
  if (is_negative < 0) {
    h = h ^ 0x00000000000000ff;
    h = h * 0x100000001b3;
  } else {
    h = h ^ 0x0000000000000000; // this doesn't do anything, not sure what to
    // XOR it with for change
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

u64 mpf_hash(void *val) {
  u64 h = 0xcbf29ce484222325;
  mpf_t *mpf_val = decode_mpf(val);
  u64 limb_cnt = mpf_size(*mpf_val);
  const mp_limb_t *limb_ptr = (*mpf_val)->_mp_d;
  int is_negative = mpf_sgn(*mpf_val);

  if (is_negative < 0) {
    h = h ^ 0x00000000000000ff;
    h = h * 0x100000001b3;
  } else {
    h = h ^ 0x0000000000000000; // this doesn't do anything, not sure what to
    // XOR it with for change
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

u64 str_hash(void *val) {
  std::string *str = decode_str(val);
  const u8 *data = reinterpret_cast<const u8 *>(str->data());
  int length = str->length();
  u64 h = 0xcbf29ce484222325;
  for (u32 i = 0; i < length; ++i && ++data) {
    h = h ^ *data;
    h = h * 0x100000001b3;
  }

  return h;
}

u64 hamt_hash(void *h) {
  const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
  return h_hamt->getHash();
}

u64 cons_hash(void *lst) {
  assert_type((get_tag(lst) == CONS),
              "Error in cons_hash -> Type passed to cons_hash is not a CONS!");
  u64 *h = (u64 *)GC_MALLOC(sizeof(u64));
  *h = 0xcbf29ce484222325;
  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    bool type_check = is_hashable(cons_lst[0]);
    assert_type(type_check,
                "Error in cons_hash -> values in the list are not hashable!");

    *h ^= hash_(cons_lst[0]) + 0x9e3779b9 + (*h << 6) + (*h >> 2);

    lst = cons_lst[1];
  }
  return *h;
}

u64 hash_(void *val) {
  switch (get_tag(val)) {
  case INT: {
    // PRINT(print_val(val));
    return int_hash(val);
    break;
  }
  case FLOAT_VAL: {
    return float_hash(val);
    break;
  }
  case MPZ: {
    return mpz_hash(val);
    break;
  }
  case MPF: {
    return mpf_hash(val);
    break;
  }
  case STRING: {
    return str_hash(val);
    break;
  }
  case HASH: {
    return hamt_hash(val);
    break;
  }
  case CONS: {
    return cons_hash(val);
    break;
  }
  default: {
    assert_type(false, "Error in hash_ -> type passed cannot be hashed!");
  }
  }
  return 0;
}

#pragma endregion

// Function to check if val is an integer
inline int is_integer_val(void *val) {
  int tag = get_tag(val);
  if (tag == INT || tag == MPZ) {
    return true;
  } else if (tag == FLOAT_VAL) {
    float temp_val = decode_float(val);
    float flr = std::floor(temp_val);
    return flr == temp_val;
  } else if (tag == MPF) {
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

// helper function to calculate the modulo
mpz_t *calc_modulo(mpz_t *first, mpz_t *second) {
  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result);

  // if (mpz_sgn(*mpz_arg1) >= 0 && mpz_sgn(*second) > 0)
  if (mpz_sgn(*second) > 0) {
    // both positive
    mpz_mod(*result, *first, *second);
  } else if (mpz_sgn(*first) >= 0 && mpz_sgn(*second) < 0) {
    // positive, negative
    mpz_mod(*result, *first, *second);
    mpz_add(*result, *result, *second);
  }
  // else if (mpz_sgn(*first)) < 0 && mpz_sgn(*second) > 0)
  // {
  //     // negative, positive
  //     mpz_mod(*result, *first), *second);
  // }
  else {
    // both negative
    mpz_mod(*result, *first, *second);
    mpz_add(*result, *result, *second);
  }

  return result;
}

inline void *prim_modulo(void *first, void *second) {
  void *result = nullptr;
  int first_tag = get_tag(first);
  int second_tag = get_tag(second);

  // Handling INT + INT case directly
  if (first_tag == INT && second_tag == INT) {
    const int a1 = decode_int(first);
    const int a2 = decode_int(second);

    if (a2 == 0)
      assert_type(false, "Error in modulo -> division by zero !");

    int res = a1 % a2;

    return reinterpret_cast<void *>(encode_int(static_cast<s32>(res)));
  } else if (first_tag == FLOAT_VAL && second_tag == FLOAT_VAL) {
    float f1 = decode_float(first);
    float f2 = decode_float(second);

    if (f2 == 0.0f)
      assert_type(false, "Error in modulo -> division by zero !");

    float f_res = std::fmod(f1, f2);

    // Check if result is within float's precision and range
    if (is_within_float_precision(f_res)) {
      return reinterpret_cast<void *>(encode_float(f_res));
    } else {
      // Promote to MPF if the result exceeds float's precision or range
      PRINT("prim modulo: promote to MPF");
      // mpf_t *mpf_res = float_to_mpf(f_res);
      // return encode_mpf(mpf_res);
    }
  } else if (get_tag(first) == MPZ &&
             get_tag(second) == MPZ) { // both numbers are mpz
    mpz_t *mpz_arg1 = decode_mpz(first);
    mpz_t *mpz_arg2 = decode_mpz(second);

    return encode_mpz(calc_modulo(mpz_arg1, mpz_arg2));
  } else if (get_tag(first) == MPF &&
             get_tag(second) == MPF) { // both number are mpf
    mpz_t *mpz_arg1 = mpf_2_mpz(decode_mpf(first));
    mpz_t *mpz_arg2 = mpf_2_mpz(decode_mpf(second));

    return encode_mpf(mpz_2_mpf(calc_modulo(mpz_arg1, mpz_arg2)));
  } else if (get_tag(first) == MPZ &&
             get_tag(second) == MPF) { // first number is mpz but second is mpf
    mpz_t *mpz_arg2 = mpf_2_mpz(decode_mpf(second));

    return encode_mpf(mpz_2_mpf(calc_modulo(decode_mpz(first), mpz_arg2)));
  } else { // second number is mpz but but first is mpf
    mpz_t *mpz_arg1 = mpf_2_mpz(decode_mpf(first));

    return encode_mpf(mpz_2_mpf(calc_modulo(mpz_arg1, decode_mpz(second))));
  }

  return result;
}

inline void *apply_prim_modulo(void *lst) {
  if (numArgs < 4 || numArgs > 4)
    assert_type(
        false,
        "Error in modulo -> arity mismatch: expected number of argument is 2!");


  void * first = arg_buffer[3];
  void * second = arg_buffer[4];

  if (!is_integer_val(first) || !is_integer_val(second)) {
    assert_type(
        false,
        "Error in modulo: contract violation -> expected integer arguments!");
  }

  return prim_modulo(first, second);
}

inline void *apply_prim_modulo_2(void *a, void *b) {
  if (!is_integer_val(a) || !is_integer_val(b)) {
    assert_type(
        false,
        "Error in modulo: contract violation -> expected integer arguments!");
  }

  return prim_modulo(a, b);
}

inline void *prim_equal_u63(void *arg1, void *arg2) {
  return equal_(arg1, arg2);
}

inline void *apply_prim_equal_u63_2(void *x, void *y) {
  return prim_equal_u63(x, y);
}

inline void *apply_prim_equal_u63(void *lst) {
  if (numArgs < 4 || numArgs > 4)
    assert_type(
        false,
        "Error in equal? -> arity mismatch: expected number of argument is 2.");

  void * first = arg_buffer[3];
  void * second = arg_buffer[4];

  return prim_equal_u63(first, second);
}

inline void *prim_eq_u63(void *arg1, void *arg2) {
  if (is_cons(arg1) || is_cons(arg2))
    return encode_bool(false);

  return equal_(arg1, arg2);
}

inline void *apply_prim_eq_u63_2(void *x, void *y) { return prim_eq_u63(x, y); }

inline void *apply_prim_eq_u63(void *lst) {
  if (length_counter(lst) > 2)
    assert_type(
        false,
        "Error in eq? -> arity mismatch: expected number of argument is 2.");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  if (is_cons(car) || is_cons(cadr))
    return encode_bool(false);

  return prim_eq_u63(car, cadr);
}

// null?
inline void *prim_null_u63(void *item) {
  if (get_tag(item) == NULL_VALUE) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

inline void *apply_prim_null_u63(void *lst) {
  if (numArgs < 3 || numArgs > 3)
    assert_type(
        false,
        "Error in null? -> arity mismatch: expected number of argument is 1.");

  return prim_null_u63(arg_buffer[3]);
}

inline void *apply_prim_null_u63_i(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(
        false,
        "Error in null? -> arity mismatch: expected number of argument is 1.");

  return prim_null_u63(prim_car(lst));
}

inline void *apply_prim_null_u63_1(void *item) { return prim_null_u63(item); }

inline void *apply_prim_positive_u63_1(void *val) {
  int val_tag = get_tag(val);

  assert_type(val_tag == INT || val_tag == FLOAT_VAL || val_tag == MPF ||
                  val_tag == MPZ,
              "Error in positive? -> contract violation: expected "
              "integers or floating-point numbers as argument!");

  bool isPositive = false;

  switch (val_tag) {
  case INT:
    isPositive = decode_int(val) > 0;
    break;
  case FLOAT_VAL:
    isPositive = decode_float(val) > 0;
    break;
  case MPZ:
    isPositive = mpz_sgn(*(decode_mpz(val))) > 0;
    break;
  case MPF:
    isPositive = mpf_sgn(*(decode_mpf(val))) > 0;
    break;
  default:
    // This default case might never be reached due to the initial assertion
    assert_type(false,
                "Unexpected type encountered in apply_prim_positive_u63_1.");

    return nullptr;
  }

  return encode_bool(isPositive);
}

inline void *apply_prim_positive_u63(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in positive? -> arity mismatch: expected number "
                       "of argument is 1.");

  return apply_prim_positive_u63_1(prim_car(lst));
}

inline void *apply_prim_negative_u63_1(void *val) {
  int val_tag = get_tag(val);

  assert_type(val_tag == INT || val_tag == FLOAT_VAL || val_tag == MPF ||
                  val_tag == MPZ,
              "Error in negative? -> contract violation: expected "
              "integers or floating-point numbers as argument!");

  bool isNegative = false;

  switch (val_tag) {
  case INT:
    isNegative = decode_int(val) < 0;
    break;
  case FLOAT_VAL:
    isNegative = decode_float(val) < 0;
    break;
  case MPZ:
    isNegative = mpz_sgn(*(decode_mpz(val))) < 0;
    break;
  case MPF:
    isNegative = mpf_sgn(*(decode_mpf(val))) < 0;
    break;
  default:
    // This default case might never be reached due to the initial assertion,
    assert_type(false,
                "Unexpected type encountered in apply_prim_negative_u63_1.");
    return nullptr;
  }

  return encode_bool(isNegative);
}

inline void *apply_prim_negative_u63(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in negative? -> arity mismatch: expected number "
                       "of argument is 1.");

  return apply_prim_negative_u63_1(prim_car(lst));
}

// pair?
inline void *apply_prim_pair_u63_1(void *item) {
  if (get_tag(item) == CONS) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

inline void *apply_prim_pair_u63(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(
        false,
        "Error in pair? -> arity mismatch: expected number of argument is 1.");

  return apply_prim_pair_u63_1(prim_car(lst));
}

inline void *apply_prim_list(void *arg) {
  void *x = encode_null();

  for (int i = numArgs; i > 2; i--) {
    x = prim_cons(arg_buffer[i], x);
  }

  return x;
}

inline void *apply_prim_list_0() { return encode_null(); }

inline void *apply_prim_list_1(void *arg) {
  return prim_cons(arg, encode_null());
}

inline void *apply_prim_list_2(void *arg1, void *arg2) {
  return prim_cons(arg1, prim_cons(arg2, encode_null()));
}

inline void *apply_prim_list_3(void *arg1, void *arg2, void *arg3) {
  return prim_cons(arg1, prim_cons(arg2, prim_cons(arg3, encode_null())));
}

inline void *apply_prim_list_4(void *arg1, void *arg2, void *arg3, void *arg4) {
  return prim_cons(
      arg1, prim_cons(arg2, prim_cons(arg3, prim_cons(arg4, encode_null()))));
}

#pragma region Addition

void *add_mpz(void *arg1, void *arg2) {
  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result);
  mpz_add(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
  return encode_mpz(result);
}

void *add_mpf(void *arg1, void *arg2) {
  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_add(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
  return encode_mpf(result);
}

void *add_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
  if (get_tag(arg1) == MPZ) { // arg1 is mpz, arg2 is mpf
    mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
    mpf_add(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
    return encode_mpf(mpf_arg1);
  }
  mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
  mpf_add(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
  return encode_mpf(mpf_arg2);
}

inline void *add_unused(void *arg1, void *arg2) {
  bool is_mpf = false;
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  if (((arg1_tag == MPZ) || (arg1_tag == MPF)) &&
      ((arg2_tag == MPZ) || (arg2_tag == MPF))) {
    mpf_t *arg1_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*arg1_mpf);
    mpf_t *arg2_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*arg2_mpf);

    if (arg1_tag == MPZ) {
      arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
    } else {
      is_mpf = true;
      arg1_mpf = decode_mpf(arg1);
    }

    if (arg2_tag == MPZ) {
      arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
    } else {
      is_mpf = true;
      arg2_mpf = decode_mpf(arg2);
    }

    mpf_t *res1 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*res1);
    mpf_add(*res1, *arg1_mpf, *arg2_mpf);

    void *res = encode_mpf(res1);

    if (is_mpf || !is_integer_val(res)) {
      return res;
    } else {
      // none of the values were mpf, and the result do no have any fractional
      // part
      mpz_t *ress = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*ress);
      mpz_set_f(*ress, *(decode_mpf(res)));
      return encode_mpz(ress);
    }
  } else {
    assert_type(false, "Error in plus -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

// takes in two number?, gets the tags,  does the castings as required and adds
// them. the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to
// mpf_t
inline void *add(void *arg1, void *arg2) {
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  if (arg1_tag == arg2_tag) {
    if (arg1_tag == MPZ) {
      return add_mpz(arg1, arg2);
    } else {
      return add_mpf(arg1, arg2);
    }
  } else {
    return add_mpz_mpf(arg1, arg2);
  }
  return 0;
}

inline void *apply_prim__u43(void *arg) {
  s32 int_sum = 0;       // Static variable to retain int sum across calls
  float float_sum = 0.0; // Static variable to retain float sum across calls

  void *result = nullptr;
  bool is_promoted_to_mpz = false;
  bool is_promoted_to_mpf = false;

  mpz_t *mpz_sum = nullptr;
  mpf_t *mpf_sum = nullptr;

  for (int i = 3; i <= numArgs; i++) {
    int tag = get_tag(arg_buffer[i]);

    if (tag == INT && !is_promoted_to_mpz && !is_promoted_to_mpf) {
      // Handle INT + INT case with overflow check
      s32 val = decode_int(arg_buffer[i]);
      if (__builtin_add_overflow(int_sum, val, &int_sum)) {
        // Promote to mpz if overflow occurs
        is_promoted_to_mpz = true;
        mpz_sum = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_si(*mpz_sum, int_sum);
        mpz_add_ui(*mpz_sum, *mpz_sum, val);
      }
    } else if (tag == FLOAT_VAL && !is_promoted_to_mpf) {
      // Handle float addition with precision check
      float val = decode_float(arg_buffer[i]);
      float_sum += val;

      if (!is_within_float_precision(float_sum)) {
        // Promote to mpf if precision is exceeded
        is_promoted_to_mpf = true;
        mpf_sum = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
        mpf_init_set_d(*mpf_sum, float_sum);
      }
    } else {
      // Promotion cases based on detected types
      if (tag == INT) {
        int val = decode_int(arg_buffer[i]);
        if (is_promoted_to_mpz) {
          mpz_add_ui(*mpz_sum, *mpz_sum, val);
        } else if (is_promoted_to_mpf) {
          mpf_t temp_mpf;
          mpf_init_set_si(temp_mpf, val);
          mpf_add(*mpf_sum, *mpf_sum, temp_mpf);
          mpf_clear(temp_mpf);
        } else {
          // Adding an int to float_sum within float limits
          float_sum += val;
        }
      } else if (tag == FLOAT_VAL) {
        float val = decode_float(arg_buffer[i]);
        if (is_promoted_to_mpf) {
          mpf_t temp_mpf;
          mpf_init_set_d(temp_mpf, val);
          mpf_add(*mpf_sum, *mpf_sum, temp_mpf);
          mpf_clear(temp_mpf);
        } else if (is_promoted_to_mpz) {
          // Convert mpz_sum to mpf and continue
          mpf_sum = mpz_2_mpf(mpz_sum);
          mpf_add_ui(*mpf_sum, *mpf_sum, val);
          is_promoted_to_mpf = true;
        } else {
          // Continue adding to float_sum within float limits
          float_sum += val;
          if (!is_within_float_precision(float_sum)) {
            // Promote to mpf if float precision is exceeded
            is_promoted_to_mpf = true;
            mpf_sum = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
            mpf_init_set_d(*mpf_sum, float_sum);
          }
        }
      } else if (tag == MPZ) {
        mpz_t *mpz_val = decode_mpz(arg_buffer[i]);
        if (!is_promoted_to_mpf) {
          if (!is_promoted_to_mpz) {
            // Initial promotion to mpz
            mpz_sum = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
            mpz_init_set_si(*mpz_sum, int_sum);
            is_promoted_to_mpz = true;
          }
          mpz_add(*mpz_sum, *mpz_sum, *mpz_val);
        } else {
          // Convert mpz_val to mpf and add to mpf_sum
          mpf_t *temp_mpf = mpz_2_mpf(mpz_val);
          mpf_add(*mpf_sum, *mpf_sum, *temp_mpf);
          mpf_clear(*temp_mpf);
        }
      } else if (tag == MPF) {
        mpf_t *mpf_val = decode_mpf(arg_buffer[i]);
        if (!is_promoted_to_mpf) {
          // Initial promotion to mpf
          mpf_sum = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
          mpf_init_set_d(*mpf_sum, float_sum);
          is_promoted_to_mpf = true;
        }
        mpf_add(*mpf_sum, *mpf_sum, *mpf_val);
      }
    }
  }

  // Final result based on the type accumulated
  if (!is_promoted_to_mpz && !is_promoted_to_mpf) {
    // No promotion occurred, check if the final result should be int or float
    if (float_sum != 0.0f || (float_sum == 0.0f && int_sum == 0)) {
      // If float_sum was used or if all values were zero
      return reinterpret_cast<void *>(encode_float(float_sum));
    } else {
      // Only int values were used
      return reinterpret_cast<void *>(encode_int(int_sum));
    }
  } else if (is_promoted_to_mpz && !is_promoted_to_mpf) {
    // Only integer overflow occurred, promoted to mpz
    return encode_mpz(mpz_sum);
  } else if (is_promoted_to_mpf) {
    // Float precision was exceeded or both promotions occurred

    if (is_promoted_to_mpz) {
      // Both integer overflow and float precision issues occurred
      // Convert mpz_sum to mpf and add to mpf_sum
      mpf_t *temp_mpf = mpz_2_mpf(mpz_sum);
      mpf_add(*mpf_sum, *mpf_sum, *temp_mpf);
      mpf_clear(*temp_mpf);
    }

    return encode_mpf(mpf_sum);
  }

  return nullptr;
}

// commented on nov 6, 24
inline void *apply_prim__u43_l(void *arg) //+
{
  // will work only for ints
  void *result = nullptr;
  s64 sum = 0;

  for (int i = 3; i <= numArgs; i++) {
    int tag = get_tag(arg_buffer[i]);
    bool type_check =
        (tag == INT) || (tag == FLOAT_VAL) || (tag == MPZ) || (tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in addition -> contact violation: The values in the "
                  "list must be integers or floating-point numbers!");

    sum += decode_int(arg_buffer[i]);

    // std::cout << "Total # c2 apply_prim__u43: " << print_val(arg_buffer[i])
    // << std::endl;
  }

  return reinterpret_cast<void *>(encode_int(static_cast<s32>(sum)));
}

inline void *apply_prim__u43_b4(void *arg) //+
{
  void *result = nullptr;

  for (int i = 3; i <= numArgs; i++) {
    int tag = get_tag(arg_buffer[i]);
    bool type_check = (tag == MPZ) || (tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in addition -> contact violation: The values in the "
                  "list must be integers or floating-point numbers!");

    if (!result) {
      result = arg_buffer[i];
    } else {
      result = add(result, arg_buffer[i]);
    }
  }

  if (result == nullptr) {
    mpz_t *val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*val, 0);
    return encode_mpz(val);
  }

  // std::cout << "Total # c2 apply_prim__u43: " << print_val(result) <<
  // std::endl;
  return result;
}

void *apply_prim__u43_i(void *lst) //+
{
  void *result = nullptr;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in addition -> contact violation: The values in the "
                  "list must be integers or floating-point numbers!");

    if (!result) {
      result = cons_lst[0];
    } else {
      result = add(result, cons_lst[0]);
    }

    lst = cons_lst[1];
  }

  if (result == nullptr) {
    mpz_t *val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*val, 0);
    return encode_mpz(val);
  }
  return result;
}

inline void *apply_prim__u43_1(void *arg1) //+
{
  int arg1_tag = get_tag(arg1);

  if (arg1_tag == INT || arg1_tag == FLOAT_VAL || arg1_tag == MPZ ||
      arg1_tag == MPF)
    return arg1;

  assert_type(false, "Error in addition -> contact violation: The values in "
                     "the list must be integers or floating-point numbers!");

  return nullptr;
}

inline void *apply_prim__u43_2(void *arg1, void *arg2) //+
{
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  // Handling INT + INT case directly
  if (arg1_tag == INT && arg2_tag == INT) {
    const s32 a1 = decode_int(arg1);
    const s32 a2 = decode_int(arg2);

    s32 res;
    if (__builtin_add_overflow(a1, a2, &res)) {
      s64 sum = (s64)a1 + (s64)a2;

      // Overflow handling, promoting to mpz
      mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*result);

      if (sum < 0) {
        mpz_set_si(*result, sum);
      } else {
        mpz_set_ui(*result, (unsigned long)sum);
      }

      return encode_mpz(result);
    } else {
      // No overflow
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(res)));
    }
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    float res = a1 + a2;

    // Check for overflow
    if (is_within_float_precision(res)) {
      // Normal case, encode the float result
      return reinterpret_cast<void *>(encode_float(res));
    } else {
      mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
      mpf_init(*result);

      mpf_set_d(*result, a1);

      mpf_t temp_a2_mpf;
      mpf_init(temp_a2_mpf);
      mpf_set_d(temp_a2_mpf, a2);

      mpf_add(*result, *result, temp_a2_mpf);

      mpf_clear(temp_a2_mpf);

      return encode_mpf(result);
    }
  } else if (arg1_tag == INT && arg2_tag == MPZ) {
    const s32 a1 = decode_int(arg1);
    mpz_t *arg2_mpz = decode_mpz(arg2);

    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    if (a1 >= 0) {
      mpz_add_ui(*result, *arg2_mpz, (unsigned long)a1);
    } else {
      mpz_t a1_mpz;
      mpz_init_set_si(a1_mpz, a1);
      mpz_add(*result, *arg2_mpz, a1_mpz);
      mpz_clear(a1_mpz);
    }

    return encode_mpz(result);
  } else if (arg1_tag == MPZ && arg2_tag == INT) {
    const s32 a2 = decode_int(arg2);
    mpz_t *arg1_mpz = decode_mpz(arg1);

    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    if (a2 >= 0) {
      mpz_add_ui(*result, *arg1_mpz, (unsigned long)a2);
    } else {
      mpz_t a2_mpz;
      mpz_init_set_si(a2_mpz, a2);
      mpz_add(*result, *arg1_mpz, a2_mpz);
    }

    return encode_mpz(result);
  } else if (arg1_tag == MPZ && arg2_tag == MPZ) {
    mpz_t *a1_mpz = decode_mpz(arg1);
    mpz_t *a2_mpz = decode_mpz(arg2);

    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    mpz_add(*result, *a1_mpz, *a2_mpz);

    return encode_mpz(result);
  } else if ((arg1_tag == FLOAT_VAL && arg2_tag == MPF) ||
             (arg1_tag == MPF && arg2_tag == FLOAT_VAL)) {

    float a1_float =
        (arg1_tag == FLOAT_VAL) ? decode_float(arg1) : decode_float(arg2);
    mpf_t *mpf_val = (arg1_tag == MPF) ? decode_mpf(arg1) : decode_mpf(arg2);

    // Allocate and initialize the result
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);

    mpf_t a1_mpf_temp;
    mpf_init(a1_mpf_temp);
    mpf_set_d(a1_mpf_temp, a1_float);

    mpf_add(*result, *mpf_val, a1_mpf_temp);

    mpf_clear(a1_mpf_temp);

    return encode_mpf(result);
  } else if (arg1_tag == MPF && arg2_tag == MPF) {
    mpf_t *a1_mpf = decode_mpf(arg1);
    mpf_t *a2_mpf = decode_mpf(arg2);

    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);

    mpf_add(*result, *a1_mpf, *a2_mpf);

    return encode_mpf(result);
  } else {
    //  will handle mixed cases later
    // [int, float] [float, int] [mpz, mpf] [mpf, mpz]
    assert_type(false, "Error in plus -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

inline void *apply_prim__u43_3(void *arg1, void *arg2, void *arg3) //+
{
  return apply_prim__u43_2(arg1, apply_prim__u43_2(arg2, arg3));
}

#pragma endregion

#pragma region Subtraction

void *sub_mpz(void *arg1, void *arg2) {
  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result);
  mpz_sub(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
  return encode_mpz(result);
}

void *sub_mpf(void *arg1, void *arg2) {
  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_sub(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
  return encode_mpf(result);
}

void *sub_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
  if (get_tag(arg1) == MPZ) { // arg1 is mpz, arg2 is mpf
    mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
    mpf_sub(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
    return encode_mpf(mpf_arg1);
  }
  mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
  mpf_sub(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
  return encode_mpf(mpf_arg2);
}

// Convert int to mpf_t
mpf_t *int_to_mpf(int val) {
  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_set_si(*result, val);
  return result;
}

// Convert int to mpz_t
mpz_t *int_to_mpz(int val) {
  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init_set_si(*result, val);
  return result;
}

// Convert float to mpf_t
mpf_t *float_to_mpf(float val) {
  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_set_d(*result, val);
  return result;
}


inline void *sub(void *arg1, void *arg2) {
  bool is_mpf = false;
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  mpf_t *arg1_mpf = nullptr;
  mpf_t *arg2_mpf = nullptr;

  if (arg1_tag == INT) {
    int int_val = decode_int(arg1);
    if (arg2_tag == MPZ || arg2_tag == MPF) {
      arg1_mpf = int_to_mpf(int_val); // Promote int to mpf for precision
      is_mpf = true;
    }
  } else if (arg1_tag == FLOAT_VAL) {
    float float_val = decode_float(arg1);
    if (arg2_tag == MPZ || arg2_tag == MPF) {
      arg1_mpf = float_to_mpf(float_val); // Promote float to mpf
      is_mpf = true;
    }
  } else if (arg1_tag == MPZ) {
    arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
  } else if (arg1_tag == MPF) {
    arg1_mpf = decode_mpf(arg1);
    is_mpf = true;
  }

  if (arg2_tag == INT) {
    int int_val = decode_int(arg2);
    if (is_mpf) {
      arg2_mpf = int_to_mpf(int_val);
    }
  } else if (arg2_tag == FLOAT_VAL) {
    float float_val = decode_float(arg2);
    if (is_mpf) {
      arg2_mpf = float_to_mpf(float_val);
    }
  } else if (arg2_tag == MPZ) {
    arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
  } else if (arg2_tag == MPF) {
    arg2_mpf = decode_mpf(arg2);
    is_mpf = true;
  }

  // Perform the subtraction
  mpf_t *result_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result_mpf);
  mpf_sub(*result_mpf, *arg1_mpf, *arg2_mpf);

  return is_mpf ? encode_mpf(result_mpf) : encode_mpz(mpf_2_mpz(result_mpf));
}

// takes in two number?, gets the tags,  does the castings as required and
// adds them. the numbers could be mpz_t or mpf_t, if different, mpz_t gets
// casted to mpf_t
// commented on nov 6, 24
inline void *sub_l(void *arg1, void *arg2) {
  bool is_mpf = false;
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  if (((arg1_tag == MPZ) || (arg1_tag == MPF)) &&
      ((arg2_tag == MPZ) || (arg2_tag == MPF))) {
    mpf_t *arg1_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*arg1_mpf);
    mpf_t *arg2_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*arg2_mpf);

    if (arg1_tag == MPZ) {
      arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
    } else {
      is_mpf = true;
      arg1_mpf = decode_mpf(arg1);
    }

    if (arg2_tag == MPZ) {
      arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
    } else {
      is_mpf = true;
      arg2_mpf = decode_mpf(arg2);
    }

    mpf_t *res1 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*res1);
    mpf_sub(*res1, *arg1_mpf, *arg2_mpf);

    void *res = encode_mpf(res1);

    if (is_mpf || !is_integer_val(res)) {
      return res;
    } else {
      // none of the values were mpf, and the result do no have any fractional
      // part
      mpz_t *ress = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*ress);
      mpz_set_f(*ress, *(decode_mpf(res)));
      return encode_mpz(ress);
    }
  } else {
    assert_type(false, "Error in minus -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *sub_old(void *arg1, void *arg2) {
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);
  if (arg1_tag == arg2_tag) {
    if (arg1_tag == MPZ) {
      return sub_mpz(arg1, arg2);
    } else {
      return sub_mpf(arg1, arg2);
    }
  } else {
    return sub_mpz_mpf(arg1, arg2);
  }
  return 0;
}

void *apply_prim__u45_1(void *arg1) //-
{
  // adding dummy parameter
  int arg1_tag = get_tag(arg1);

  if (arg1_tag == MPZ || arg1_tag == MPF) {
    if (arg1_tag == MPZ) {
      mpz_t *final_mpz = decode_mpz(arg1);
      mpz_neg(*final_mpz, *final_mpz);

      return encode_mpz(final_mpz);
    } else {
      mpf_t *final_mpf = decode_mpf(arg1);
      mpf_neg(*final_mpf, *final_mpf);

      return encode_mpf(final_mpf);
    }
  }

  assert_type(false, "Error in substraction -> contact violation: The values "
                     "in the list must be integers or floating-point numbers!");

  return nullptr;
}

inline void *apply_prim__u45_2(void *arg1, void *arg2) //-
{
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  // Handling INT + INT case directly
  if (arg1_tag == INT && arg2_tag == INT) {
    const s32 a1 = decode_int(arg1);
    const s32 a2 = decode_int(arg2);

    s32 res;
    if (__builtin_sub_overflow(a1, a2, &res)) {
      // Overflow detected, promoting to mpz
      mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*result);

      s64 sum = (s64)a1 - (s64)a2;

      if (sum < 0) {
        mpz_set_si(*result, sum);
      } else {
        mpz_set_ui(*result, (unsigned long)sum);
      }

      return encode_mpz(result);
    } else {
      // No overflow
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(res)));
    }
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    float res = a1 - a2;

    if (is_within_float_precision(res)) {
      // Normal case, encode the float result
      return reinterpret_cast<void *>(encode_float(res));
    } else {
      mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
      mpf_init(*result);

      mpf_set_d(*result, a1);

      mpf_t temp_a2_mpf;
      mpf_init(temp_a2_mpf);
      mpf_set_d(temp_a2_mpf, a2);

      mpf_sub(*result, *result, temp_a2_mpf);

      mpf_clear(temp_a2_mpf);

      return encode_mpf(result);
    }
  } else if (arg1_tag == INT && arg2_tag == MPZ) {
    const s32 a1 = decode_int(arg1);
    mpz_t *arg2_mpz = decode_mpz(arg2);

    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    if (a1 >= 0) {
      mpz_t a1_mpz;
      mpz_init_set_ui(a1_mpz, (unsigned long)a1);
      mpz_sub(*result, a1_mpz, *arg2_mpz);
      mpz_clear(a1_mpz);
    } else {
      mpz_t a1_mpz;
      mpz_init_set_si(a1_mpz, a1);
      mpz_sub(*result, a1_mpz, *arg2_mpz);
      mpz_clear(a1_mpz);
    }

    return encode_mpz(result);
  } else if (arg1_tag == MPZ && arg2_tag == INT) {
    const s32 a2 = decode_int(arg2);
    mpz_t *arg1_mpz = decode_mpz(arg1);

    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    mpz_t a2_mpz;
    mpz_init_set_si(a2_mpz, a2);
    mpz_sub(*result, *arg1_mpz, a2_mpz);
    mpz_clear(a2_mpz);

    return encode_mpz(result);
  } else if (arg1_tag == MPZ && arg2_tag == MPZ) {
    mpz_t *a1_mpz = decode_mpz(arg1);
    mpz_t *a2_mpz = decode_mpz(arg2);

    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    mpz_sub(*result, *a1_mpz, *a2_mpz);

    return encode_mpz(result);
  } else if ((arg1_tag == FLOAT_VAL && arg2_tag == MPF) ||
             (arg1_tag == MPF && arg2_tag == FLOAT_VAL)) {

    float a1_float =
        (arg1_tag == FLOAT_VAL) ? decode_float(arg1) : decode_float(arg2);
    mpf_t *mpf_val = (arg1_tag == MPF) ? decode_mpf(arg1) : decode_mpf(arg2);

    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);

    mpf_t a1_mpf_temp;
    mpf_init(a1_mpf_temp);
    mpf_set_d(a1_mpf_temp, a1_float);

    if (arg1_tag == FLOAT_VAL) {
      mpf_sub(*result, a1_mpf_temp, *mpf_val);
    } else {
      mpf_sub(*result, *mpf_val, a1_mpf_temp);
    }

    mpf_clear(a1_mpf_temp);

    return encode_mpf(result);
  } else if (arg1_tag == MPF && arg2_tag == MPF) {
    mpf_t *a1_mpf = decode_mpf(arg1);
    mpf_t *a2_mpf = decode_mpf(arg2);

    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);

    mpf_sub(*result, *a1_mpf, *a2_mpf);

    return encode_mpf(result);
  } else {
    //  will handle mixed cases later
    // [int, float] [float, int] [mpz, mpf] [mpf, mpz]
    assert_type(false, "Error in minus -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

inline void *apply_prim__u45_2_b4(void *arg1, void *arg2) //-
{
  bool is_mpf = false;
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  if (((arg1_tag == INT) || (arg1_tag == FLOAT_VAL) || (arg1_tag == MPZ) ||
       (arg1_tag == MPF)) &&
      ((arg2_tag == INT) || (arg2_tag == FLOAT_VAL) || (arg2_tag == MPZ) ||
       (arg2_tag == MPF))) {
    if (arg1_tag == arg2_tag) {
      if (arg1_tag == INT) {
        s32 res = decode_int(arg1) - decode_int(arg2);
        return reinterpret_cast<void *>(encode_int(res));
      }
    }
    // mpf_t *arg1_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    // mpf_init(*arg1_mpf);
    // mpf_t *arg2_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    // mpf_init(*arg2_mpf);

    // if (arg1_tag == MPZ)
    // {
    //     arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
    // }
    // else
    // {
    //     is_mpf = true;
    //     arg1_mpf = decode_mpf(arg1);
    // }

    // if (arg2_tag == MPZ)
    // {
    //     arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
    // }
    // else
    // {
    //     is_mpf = true;
    //     arg2_mpf = decode_mpf(arg2);
    // }

    // mpf_t *res1 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    // mpf_init(*res1);
    // mpf_sub(*res1, *arg1_mpf, *arg2_mpf);

    // void *res = encode_mpf(res1);

    // if (is_mpf || !is_integer_val(res))
    // {
    //     return res;
    // }
    // else
    // {
    //     // none of the values were mpf, and the result do no have any
    //     fractional part mpz_t *ress = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    //     mpz_init(*ress);
    //     mpz_set_f(*ress, *(decode_mpf(res)));
    //     return encode_mpz(ress);
    // }
  } else {
    assert_type(false, "Error in minus -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

inline void *apply_prim__u45_3(void *arg1, void *arg2, void *arg3) //-
{
  return sub(sub(arg1, arg2), arg3);
}

inline void *apply_prim__u45(void *arg) {
  if (numArgs == 3)
    return apply_prim__u45_1(arg_buffer[3]);

  void *result = nullptr;
  bool promote_to_mpf = false; // Flag to check if promotion to mpf is needed

  for (int i = 3; i <= numArgs; i++) {
    int tag = get_tag(arg_buffer[i]);
    bool type_check =
        (tag == INT) || (tag == FLOAT_VAL) || (tag == MPZ) || (tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in subtraction -> contact violation: The values in "
                  "the list must be integers or floating-point numbers!");

    if (!result) {
      // Set initial value of result
      result = arg_buffer[i];
    } else {
      int res_tag = get_tag(result);

      if ((res_tag == INT && tag == INT) ||
          (res_tag == FLOAT_VAL && tag == FLOAT_VAL)) {
        // Subtract within int/float if possible
        if (res_tag == INT) {
          s64 temp_result =
              static_cast<s64>(decode_int(result)) - decode_int(arg_buffer[i]);
          // Check for int overflow
          if (temp_result > std::numeric_limits<int>::max() ||
              temp_result < std::numeric_limits<int>::min()) {
            // Overflow detected, promote to mpz
            mpz_t *mpz_result = int_to_mpz(decode_int(result));
            mpz_sub_ui(*mpz_result, *mpz_result, decode_int(arg_buffer[i]));
            result = encode_mpz(mpz_result);
          } else {
            // result = encode_int(static_cast<int>(temp_result));
            result = reinterpret_cast<void *>(
                encode_int(static_cast<int>(temp_result)));
          }
        } else {
          // Float handling with no promotion needed
          float temp_result =
              decode_float(result) - decode_float(arg_buffer[i]);
          if (is_within_float_precision(temp_result)) {
            // result = encode_float(temp_result);
            result = reinterpret_cast<void *>(encode_float(temp_result));

          } else {
            // Precision exceeded, promote to mpf
            mpf_t *mpf_result = float_to_mpf(decode_float(result));
            mpf_sub_ui(*mpf_result, *mpf_result, decode_float(arg_buffer[i]));
            result = encode_mpf(mpf_result);
          }
        }
      } else {
        // One or both arguments are mpz/mpf or promotion is needed
        result = sub(result,
                     arg_buffer[i]); // Utilize the sub function for promotion
      }
    }
  }

  return result;
}

// ; updated on nov 6, 24
inline void *apply_prim__u45_l(void *arg) {
  if (numArgs == 3)
    return apply_prim__u45_1(arg_buffer[3]);

  void *result = nullptr;

  for (int i = 3; i <= numArgs; i++) {
    int tag = get_tag(arg_buffer[i]);
    bool type_check =
        (tag == INT) || (tag == FLOAT_VAL) || (tag == MPZ) || (tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in substraction -> contact violation: The values in "
                  "the list must be integers or floating-point numbers!");

    if (!result) {
      result = arg_buffer[i];
    } else {
      result = sub(result, arg_buffer[i]);
    }
  }

  return result;
}

inline void *apply_prim__u45_i(void *lst) //-
{

  if (length_counter(lst) == 1)
    return apply_prim__u45_1(prim_car(lst));

  void *result = nullptr;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in subtraction -> contact violation: The values in "
                  "the list must be integers or floating-point numbers!");

    if (!result) {
      result = cons_lst[0];
    } else {
      result = sub(result, cons_lst[0]);
    }

    lst = cons_lst[1];
  }

  if (result == nullptr) {
    assert_type(false, "Error in subtraction -> arity mismatch: at least 1 "
                       "argument is required!");
  }

  return result;
}

#pragma endregion

#pragma region Multiplication

void *mul_mpz(void *arg1, void *arg2) {
  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result);
  mpz_mul(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
  return encode_mpz(result);
}

void *mul_mpf(void *arg1, void *arg2) {
  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_mul(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
  return encode_mpf(result);
}

void *mul_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
  if (get_tag(arg1) == MPZ) { // arg1 is mpz, arg2 is mpf
    mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
    mpf_mul(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
    return encode_mpf(mpf_arg1);
  }
  mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
  mpf_mul(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
  return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and
// adds them. the numbers could be mpz_t or mpf_t, if different, mpz_t gets
// casted to mpf_t
void *mul(void *arg1, void *arg2) {
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  if (arg1_tag == arg2_tag) {
    if (arg1_tag == MPZ) {
      return mul_mpz(arg1, arg2);
    } else {
      return mul_mpf(arg1, arg2);
    }
  } else {
    return mul_mpz_mpf(arg1, arg2);
  }
  return 0;
}

void *apply_prim__u42(void *lst) // *
{
  void *result = nullptr;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in multiplication -> contact violation: The values in "
                  "the list must be integers or floating-point numbers!");

    if (!result) {
      result = cons_lst[0];
    } else {
      result = mul(result, cons_lst[0]);
    }

    lst = cons_lst[1];
  }

  if (result == nullptr) {
    mpz_t *val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*val, 1);
    return encode_mpz(val);
  }

  return result;
}

void *apply_prim__u42_1(void *arg1) // *
{
  int arg1_tag = get_tag(arg1);

  if (arg1_tag == MPZ || arg1_tag == MPF)
    return arg1;

  assert_type(false, "Error in multiplication -> contact violation: The values "
                     "in the list must be integers or floating-point numbers!");

  return nullptr;
}

void *apply_prim__u42_2(void *arg1, void *arg2) // *
{
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  // Handling INT * INT case directly
  if (arg1_tag == INT && arg2_tag == INT) {
    const s64 a1 = decode_int(arg1);
    const s64 a2 = decode_int(arg2);

    s64 res;
    if (__builtin_mul_overflow(a1, a2, &res)) {
      // Overflow handling, promote to mpz
      PRINT("apply_prim__u42_2: Promote to MPZ");
      mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*result);
      // Handle conversion from s64 to mpz_t correctly
      mpz_set_si(*result, a1);
      mpz_mul_si(*result, *result, a2);

      return encode_mpz(result);
    } else {
      // No overflow
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(res)));
    }
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    float res = a1 * a2;

    if (is_within_float_precision(res)) {
      return reinterpret_cast<void *>(encode_float(res));
    } else {
      PRINT("apply_prim__u42_2: Promote to MPF");
      // handle overflow!
    }
  } else if (arg1_tag == INT && arg2_tag == MPZ) {
    PRINT("apply_prim__u42_2: INT+MPZ");
    // Handling INT * MPZ case
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    // Convert INT to mpz_t and perform multiplication
    mpz_set_si(*result, decode_int(arg1));
    mpz_mul(*result, *result, *(decode_mpz(arg2)));

    return encode_mpz(result);
  } else {
    // will have to handle other mixed cases!

    // PRINT(arg1_tag);
    // PRINT(arg2_tag);

    assert_type(
        false,
        "Error in multiplication -> contact violation: The values in the "
        "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *apply_prim__u42_2_b4(void *arg1, void *arg2) //*
{
  return mul(arg1, arg2);
}

void *apply_prim__u42_3(void *arg1, void *arg2, void *arg3) //*
{
  return mul(mul(arg1, arg2), arg3);
}

#pragma endregion

#pragma region Division

void *div_mpz(void *arg1, void *arg2) {
  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result);
  mpz_div(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
  return encode_mpz(result);
}

void *div_mpf(void *arg1, void *arg2) {
  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_div(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
  return encode_mpf(result);
}

void *div_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
  if (get_tag(arg1) == MPZ) { // arg1 is mpz, arg2 is mpf
    mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
    // print_val(mpf_arg1);
    mpf_div(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
    return encode_mpf(mpf_arg1);
  }
  mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
  mpf_div(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
  return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and
// adds them. the numbers could be mpz_t or mpf_t, if different, mpz_t gets
// casted to mpf_t
void *div(void *arg1, void *arg2) {
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);
  if (arg1_tag == arg2_tag) {
    if (arg1_tag == MPZ) {
      return div_mpz(arg1, arg2);
    } else {
      return div_mpf(arg1, arg2);
    }
  } else {
    return div_mpz_mpf(arg1, arg2);
  }
  return 0;
}

void *apply_prim__u47_2(void *arg1, void *arg2) // / division
{
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  // Handling INT + INT case directly
  if (arg1_tag == INT && arg2_tag == INT) {
    const s64 a1 = decode_int(arg1);
    const s64 a2 = decode_int(arg2);

    // Division by zero check
    if (a2 == 0) {
      assert_type(false,
                  "Error in division -> division by zero is not allowed!");
    }

    s64 res = a1 / a2;

    // The only overflow concern is dividing INT_MIN by -1
    // -2,147,483,648 / -1, results in 2,147,483,648
    if (a1 == INT_MIN && a2 == -1) {
      PRINT("apply_prim__u47_2: MPZ promotion required!");
      mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*result);
      mpz_set_si(*result, INT_MIN);
      mpz_neg(*result, *result); // Equivalent to dividing by -1
      return encode_mpz(result);
    } else {
      // No overflow concern for other cases
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(res)));
    }

  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    // Division by zero check
    if (a2 == 0.0f) {
      assert_type(false,
                  "Error in division -> division by zero is not allowed!");
    }

    float res = a1 / a2;

    // overflow check isn't required, because the number gets smaller with
    // division
    return reinterpret_cast<void *>(encode_float(res));
  } else if (arg1_tag == INT && arg2_tag == MPZ) {
    PRINT("apply_prim__u47_2: INT+MPZ");
    // note: not written carefully!
    // will handle these mpf/mpz promotoions later!
    // Handling INT / MPZ case
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    mpz_t a1_mpz;
    mpz_init_set_si(a1_mpz, decode_int(arg1));

    mpz_tdiv_q(*result, a1_mpz, *(decode_mpz(arg2)));

    mpz_clear(a1_mpz);

    return encode_mpz(result);
  } else {
    assert_type(false,
                "Error in division -> contact violation: The values in the "
                "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *apply_prim__u47_2_b4(void *arg1, void *arg2) // / division
{
  bool is_mpf = false;
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  if (((arg1_tag == MPZ) || (arg1_tag == MPF)) &&
      ((arg2_tag == MPZ) || (arg2_tag == MPF))) {
    mpf_t *arg1_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*arg1_mpf);
    mpf_t *arg2_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*arg2_mpf);

    if (arg1_tag == MPZ) {
      // if first number is 0 return exactly that!
      if (mpz_sgn(*(decode_mpz(arg1))) == 0) {
        mpz_t *tempMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_si(*tempMpzVal, 0);
        return encode_mpz(tempMpzVal);
      }

      arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
    } else {
      // if first number is 0 return exactly that!
      if (mpf_sgn(*(decode_mpf(arg1))) == 0) {
        mpf_t *tempMpfVal = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
        mpf_init_set_d(*tempMpfVal, 0.0);
        return encode_mpf(tempMpfVal);
      }

      is_mpf = true;
      arg1_mpf = decode_mpf(arg1);
    }

    if (arg2_tag == MPZ) {
      if (mpz_sgn(*(decode_mpz(arg2))) == 0) {
        assert_type(false,
                    "Error in division -> division by zero is not allowed!");
      }

      arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
    } else {
      if (mpf_sgn(*(decode_mpf(arg2))) == 0) {
        assert_type(false,
                    "Error in division -> division by zero is not allowed!");
      }

      is_mpf = true;
      arg2_mpf = decode_mpf(arg2);
    }

    void *res = div_mpf(encode_mpf(arg1_mpf), encode_mpf(arg2_mpf));

    if (is_mpf || !is_integer_val(res))
      return res;
    else {
      // none of the values were mpf, and the result do no have any fractional
      // part
      mpz_t *ress = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*ress);
      mpz_set_f(*ress, *(decode_mpf(res)));
      return encode_mpz(ress);
    }
  } else {
    assert_type(false, "Error in division -> contact violation: The values in "
                       "the list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *apply_prim__u47_3(void *arg1, void *arg2, void *arg3) // / division
{
  bool is_mpf = false;
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);
  int arg3_tag = get_tag(arg3);

  if (((arg1_tag == MPZ) || (arg1_tag == MPF)) &&
      ((arg2_tag == MPZ) || (arg2_tag == MPF)) &&
      ((arg3_tag == MPZ) || (arg3_tag == MPF))) {
    mpf_t *arg3_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*arg3_mpf);

    if (arg3_tag == MPZ) {
      if (mpz_sgn(*(decode_mpz(arg3))) == 0) {
        assert_type(false,
                    "Error in division -> division by zero is not allowed!");
      }

      arg3_mpf = mpz_2_mpf(decode_mpz(arg3));
    } else {
      if (mpf_sgn(*(decode_mpf(arg3))) == 0) {
        assert_type(false,
                    "Error in division -> division by zero is not allowed!");
      }

      is_mpf = true;
      arg3_mpf = decode_mpf(arg3);
    }

    void *res = div(apply_prim__u47_2(arg1, arg2), encode_mpf(arg3_mpf));
    // void *res = div(div(encode_mpf(arg1_mpf), encode_mpf(arg2_mpf)),
    // encode_mpf(arg3_mpf));

    if (is_mpf || !is_integer_val(res))
      return res;
    else {
      // none of the values were mpf, and the result do no have any fractional
      // part
      mpz_t *ress = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*ress);
      mpz_set_f(*ress, *(decode_mpf(res)));
      return encode_mpz(ress);
    }
  } else {
    assert_type(false, "Error in division -> contact violation: The values in "
                       "the list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *apply_prim__u47_1(void *arg1) // / division
{
  bool is_mpf = false;
  int arg1_tag = get_tag(arg1);

  if (arg1_tag == MPZ || arg1_tag == MPF) {
    if (arg1_tag == MPZ) {
      if (mpz_sgn(*(decode_mpz(arg1))) == 0) {
        assert_type(false,
                    "Error in division -> division by zero is not allowed!");
      }

      // adding dummy parameter
      mpz_t *tempMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init_set_si(*tempMpzVal, 1);
      void *arg2 = encode_mpz(tempMpzVal);

      return apply_prim__u47_2(arg2, arg1);
    } else {
      if (mpf_sgn(*(decode_mpf(arg1))) == 0) {
        assert_type(false,
                    "Error in division -> division by zero is not allowed!");
      }

      // adding dummy parameter
      mpf_t *tempMpfVal = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
      mpf_init_set_d(*tempMpfVal, 1.0);
      void *arg2 = encode_mpf(tempMpfVal);

      return apply_prim__u47_2(arg2, arg1);
    }
  } else {
    assert_type(false, "Error in division -> contact violation: The values in "
                       "the list must be integers or floating-point numbers!");
  }

  return nullptr;
}

// commented on nov 6, 24
void *apply_prim__u47(void *lst) // / division
{
  int len_cnt = length_counter(lst);
  if (len_cnt < 1)
    assert_type(false, "Error in division -> arity mismatch: at least 1 "
                       "argument is expected!");

  if (len_cnt == 1)
    return apply_prim__u47_1(prim_car(lst));

  void *result = nullptr;

  bool is_mpf = false;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in division -> contact violation: The values in the "
                  "list must be integers or floating-point numbers!");

    // don't care if it's mpz/mpf, going to turn it to mpf

    mpf_t *val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*val);

    if (car_tag == MPZ)
      val = mpz_2_mpf(decode_mpz(cons_lst[0]));
    else {
      is_mpf = true;
      val = decode_mpf(cons_lst[0]);
    }

    if (!result) {
      // if first number is 0 return exactly that!
      if (car_tag == MPZ) {
        if (mpz_sgn(*(decode_mpz(cons_lst[0]))) == 0) {
          mpz_t *tempMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
          mpz_init_set_si(*tempMpzVal, 0);
          return encode_mpz(tempMpzVal);
        }
      } else {
        if (mpf_sgn(*(decode_mpf(cons_lst[0]))) == 0) {
          mpf_t *tempMpfVal = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
          mpf_init_set_d(*tempMpfVal, 0.0);
          return encode_mpf(tempMpfVal);
        }
      }

      result = encode_mpf(val);
    } else {
      // if any of the number in the list is 0, exit out with an error
      if (mpf_sgn(*val) == 0) {
        assert_type(false,
                    "Error in division -> division by zero is not allowed!");
      }

      result = div(result, encode_mpf(val));
    }

    lst = cons_lst[1];
  }

  // none of the values were mpf, but the result has fraction
  if (is_mpf || !is_integer_val(result))
    return result;
  else {
    // none of the values were mpf, and the result do no have any fractional
    // part
    mpz_t *res = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*res);
    mpz_set_f(*res, *(decode_mpf(result)));
    return encode_mpz(res);
  }

  return result;
}

#pragma endregion

void *apply_prim_and(void *lst) {
  bool result = false;
  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    // decoding a boolean run the required assertions, so directly decoding
    // and assigninh

    if (decode_bool(cons_lst[0])) {
      lst = cons_lst[1];
      result = true;
      continue;
    }
    return encode_bool(false);
  }
  return encode_bool(result);
}

void *apply_prim_or(void *lst) {
  bool result = false;
  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    // decoding a boolean run the required assertions, so directly decoding
    // and assigninh

    if (!decode_bool(cons_lst[0])) {
      lst = cons_lst[1];
      continue;
    }
    return encode_bool(true);
  }
  return encode_bool(result);
}

bool less_equal_zero(long cmp) {
  if (cmp <= 0) {
    return true;
  }
  return false;
}

bool great_equal_zero(long cmp) {
  if (cmp >= 0) {
    return true;
  }
  return false;
}

bool great_zero(long cmp) {
  if (cmp > 0) {
    return true;
  }
  return false;
}

bool less_zero(long cmp) {
  if (cmp < 0) {
    return true;
  }
  return false;
}

inline bool equal_zero(long cmp) {
  if (cmp == 0) {
    return true;
  }
  return false;
}

void *compare_lst(bool (*cmp_op)(long)) {
  if (numArgs < 3) {
    assert_type(
        false,
        "Error -> arity mismatch: number of arguments should be at least 1!");
  }

  bool iteration_one = true;
  bool is_promoted = false; // Tracks if promotion to mpz/mpf has occurred
  int cmp_res = 0;

  // Variables to store the current comparison value
  union {
    int int_val;
    float float_val;
  } current_val;

  mpz_t *mpz_val = nullptr;
  mpf_t *mpf_val = nullptr;

  for (int i = 3; i <= numArgs; i++) {
    int car_tag = get_tag(arg_buffer[i]);
    bool type_check = (car_tag == INT) || (car_tag == FLOAT_VAL) ||
                      (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check) {
      assert_type(false, "Error -> contact violation: argument type should be "
                         "either integers or floating-point numbers!");
      return encode_bool(false);
    }

    if (iteration_one) {
      iteration_one = false;
      switch (car_tag) {
      case INT:
        current_val.int_val = decode_int(arg_buffer[i]);
        break;
      case FLOAT_VAL:
        current_val.float_val = decode_float(arg_buffer[i]);
        break;
      case MPZ:
        mpz_val = decode_mpz(arg_buffer[i]);
        is_promoted = true;
        break;
      case MPF:
        mpf_val = decode_mpf(arg_buffer[i]);
        is_promoted = true;
        break;
      }
    } else {
      bool equal = false;
      switch (car_tag) {
      case INT: {
        int int_val = decode_int(arg_buffer[i]);
        if (!is_promoted && current_val.int_val == int_val) {
          equal = true;
        } else if (is_promoted && mpz_val) {
          // Promote int_val to mpz_t and compare
          mpz_t temp_mpz;
          mpz_init_set_si(temp_mpz, int_val);
          equal = (mpz_cmp(*mpz_val, temp_mpz) == 0);
          mpz_clear(temp_mpz);
        } else if (int_val > std::numeric_limits<int>::max() ||
                   int_val < std::numeric_limits<int>::min()) {
          // Promote to mpz_t due to overflow risk
          is_promoted = true;
          mpz_val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
          mpz_init_set_si(*mpz_val, current_val.int_val);
        }
        break;
      }
      case FLOAT_VAL: {
        float float_val = decode_float(arg_buffer[i]);
        if (!is_promoted && current_val.float_val == float_val) {
          equal = true;
        } else if (is_promoted && mpf_val) {
          // Compare float value with mpf_val after promotion
          equal = (mpf_cmp_d(*mpf_val, float_val) == 0);
        } else if (!is_within_float_precision(float_val)) {
          // Promote to mpf_t due to precision limits
          is_promoted = true;
          mpf_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
          mpf_init(*mpf_val);
          mpf_set_d(*mpf_val, current_val.float_val);
        }
        break;
      }
      case MPZ: {
        mpz_t *mpz_comp = decode_mpz(arg_buffer[i]);
        if (is_promoted && mpz_val) {
          equal = mpz_cmp(*mpz_val, *mpz_comp) == 0;
        } else {
          is_promoted = true;
          mpz_val = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
          mpz_init_set(*mpz_val, *mpz_comp);
        }
        break;
      }
      case MPF: {
        mpf_t *mpf_comp = decode_mpf(arg_buffer[i]);
        if (is_promoted && mpf_val) {
          equal = mpf_cmp(*mpf_val, *mpf_comp) == 0;
        } else {
          is_promoted = true;
          mpf_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
          mpf_init_set(*mpf_val, *mpf_comp);
        }
        break;
      }
      }

      // If elements are not equal, clear and return false
      if (!equal) {
        if (mpz_val)
          mpz_clear(*mpz_val);
        if (mpf_val)
          mpf_clear(*mpf_val);
        return encode_bool(false);
      }
    }
  }

  // Cleanup and return true if all comparisons succeeded
  if (mpz_val)
    mpz_clear(*mpz_val);
  if (mpf_val)
    mpf_clear(*mpf_val);
  return encode_bool(true);
}

// renmaed on nov 6, 24
void *compare_lst2(bool (*cmp_op)(long)) {
  if (numArgs < 3)
    assert_type(
        false,
        "Error -> arity mismatch: number of arguments should be at least 1!");

  mpf_t *old_car = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*old_car);
  mpf_t *mpf_new_car = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*mpf_new_car);

  bool iteration_one = false;
  int cmp_res = 0;

  for (int i = 3; i <= numArgs; i++) {
    int car_tag = get_tag(arg_buffer[i]);
    bool type_check = (car_tag == INT) || (car_tag == FLOAT_VAL) ||
                      (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false, "Error -> contact violation: argument type should be "
                         "either integers or floating-point numbers!");

    if (!iteration_one) {
      iteration_one = true;
      if (car_tag == MPZ) {
        // old_car = mpz_2_mpf(decode_mpz(cons_lst[0]));
        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(arg_buffer[i]);

        temp_mpf = mpz_2_mpf(temp_mpz_ptr);
        mpf_set(*old_car, *temp_mpf);

        mpf_clear(*temp_mpf);
      } else {
        // old_car = decode_mpf(cons_lst[0]);
        mpf_set(*old_car, *decode_mpf(arg_buffer[i]));
      }
    } else {
      if (car_tag == MPZ) {
        // mpf_new_car = mpz_2_mpf(decode_mpz(cons_lst[0]));

        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(arg_buffer[i]);
        temp_mpf = mpz_2_mpf(temp_mpz_ptr);

        mpf_set(*mpf_new_car, *temp_mpf);
        mpf_clear(*temp_mpf);
      } else {
        // mpf_new_car = decode_mpf(cons_lst[0]);
        mpf_set(*mpf_new_car, *decode_mpf(arg_buffer[i]));
      }

      cmp_res = mpf_cmp(*old_car, *mpf_new_car);

      if (cmp_op(cmp_res))
        mpf_set(*old_car, *mpf_new_car);
      else
        return encode_bool(false);
    }
  }

  return encode_bool(true);
}

inline void *compare_lst(void *lst, bool (*cmp_op)(long)) {
  if (length_counter(lst) < 1)
    assert_type(
        false,
        "Error -> arity mismatch: number of arguments should be at least 1!");

  mpf_t *old_car = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*old_car);
  mpf_t *mpf_new_car = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*mpf_new_car);

  bool iteration_one = false;
  int cmp_res = 0;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false, "Error -> contact violation: argument type should be "
                         "either integers or floating-point numbers!");

    if (!iteration_one) {
      iteration_one = true;
      if (car_tag == MPZ) {
        // old_car = mpz_2_mpf(decode_mpz(cons_lst[0]));
        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(cons_lst[0]);

        temp_mpf = mpz_2_mpf(temp_mpz_ptr);
        mpf_set(*old_car, *temp_mpf);

        mpf_clear(*temp_mpf);
      } else {
        // old_car = decode_mpf(cons_lst[0]);
        mpf_set(*old_car, *decode_mpf(cons_lst[0]));
      }
    } else {
      if (car_tag == MPZ) {
        // mpf_new_car = mpz_2_mpf(decode_mpz(cons_lst[0]));

        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(cons_lst[0]);
        temp_mpf = mpz_2_mpf(temp_mpz_ptr);

        mpf_set(*mpf_new_car, *temp_mpf);
        mpf_clear(*temp_mpf);
      } else {
        // mpf_new_car = decode_mpf(cons_lst[0]);
        mpf_set(*mpf_new_car, *decode_mpf(cons_lst[0]));
      }

      cmp_res = mpf_cmp(*old_car, *mpf_new_car);

      if (cmp_op(cmp_res))
        mpf_set(*old_car, *mpf_new_car);
      else
        return encode_bool(false);
    }

    lst = cons_lst[1];
  }

  return encode_bool(true);
}

inline void *compare_op(void *arg1, void *arg2, bool (*cmp_op)(long)) {
  int cmp_res = 0;

  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  bool type_check = (arg1_tag == MPZ) || (arg1_tag == MPF);

  if (!type_check)
    assert_type(false, "Error in modulo -> contact violation: argument type "
                       "should be either integers or floating-point numbers!");

  bool type_check2 = (arg2_tag == MPZ) || (arg2_tag == MPF);

  if (!type_check2)
    assert_type(false, "Error in modulo -> contact violation: argument type "
                       "should be either integers or floating-point numbers!");

  mpf_t *arg1_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*arg1_mpf);
  mpf_t *arg2_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*arg2_mpf);

  if (arg1_tag == MPZ)
    arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
  else
    arg1_mpf = decode_mpf(arg1);

  if (arg2_tag == MPZ)
    arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
  else
    arg2_mpf = decode_mpf(arg2);

  cmp_res = mpf_cmp(*arg1_mpf, *arg2_mpf);

  if (cmp_op(cmp_res))
    return encode_bool(true);
  else
    return encode_bool(false);
}

// checks if a list is equal
void *apply_prim__u61(void *lst) // =
{
  return compare_lst(*equal_zero);
}

void *apply_prim__u61_i(void *lst) // =
{
  return compare_lst(lst, *equal_zero);
}

void *apply_prim__u61_1(void *arg1) // =
{
  return encode_bool(true);
}

inline void *apply_prim__u61_2(void *arg1, void *arg2) // =
{
  // return compare_op(arg1, arg2, *equal_zero);
  int cmp_res = 0;

  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);
  // std::cout << "arg1_tag: " << arg1_tag << " arg2_tag: " << arg2_tag <<
  // std::endl; std::cout << "arg1: " << decode_int(arg1) << " arg2: " <<
  // decode_int(arg2) << std::endl;
  bool type_check = (arg1_tag == INT) || (arg1_tag == FLOAT_VAL) ||
                    (arg1_tag == MPZ) || (arg1_tag == MPF);

  if (!type_check)
    assert_type(false, "Error in = -> contact violation: argument type should "
                       "be either integers or floating-point numbers!");

  bool type_check2 = (arg2_tag == INT) || (arg2_tag == FLOAT_VAL) ||
                     (arg2_tag == MPZ) || (arg2_tag == MPF);

  if (!type_check2)
    assert_type(false, "Error in = -> contact violation: argument type should "
                       "be either integers or floating-point numbers!");

  // (= 2 2.0) => #t, what about this?
  // so the condition below is wrong,
  // will have to handle this later
  if (arg1_tag != arg2_tag)
    return encode_bool(false);

  switch (arg1_tag) {
  case INT:
    return encode_bool(decode_int(arg1) == decode_int(arg2));
  case FLOAT_VAL:
    return encode_bool(decode_float(arg1) == decode_float(arg2));
  case MPZ: {
    cmp_res = mpz_cmp(*(decode_mpz(arg1)), *(decode_mpz(arg2)));
    if (equal_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  }
  case MPF: {
    cmp_res = mpf_cmp(*(decode_mpf(arg1)), *(decode_mpf(arg2)));
    if (equal_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  }
  default: {
    return encode_bool(false);
    // This default case might never be reached due to the initial assertion,
    //  assert_type(false, "Unexpected type encountered in apply_prim__u61_2.");
    //  return nullptr;
    //  break;
  }
  }

  // bool type_check = (arg1_tag == INT) || (arg1_tag == FLOAT_VAL) ||
  //                   (arg1_tag == MPZ) || (arg1_tag == MPF);

  // if (!type_check)
  //   assert_type(false, "Error in modulo -> contact violation: argument type "
  //                      "should be either integers or floating-point
  //                      numbers!");

  // bool type_check2 = (arg2_tag == INT) || (arg2_tag == FLOAT_VAL) ||
  //                    (arg2_tag == MPZ) || (arg2_tag == MPF);

  // if (!type_check2)
  //   assert_type(false, "Error in modulo -> contact violation: argument type "
  //                      "should be either integers or floating-point
  //                      numbers!");

  // if (arg1_tag == arg2_tag) {
  //   if (arg1_tag == INT) {
  //     if (decode_int(arg1) == decode_int(arg2))
  //       return encode_bool(true);
  //     else
  //       return encode_bool(false);
  //   } else if (arg1_tag == FLOAT_VAL) {
  //     if (decode_float(arg1) == decode_float(arg2))
  //       return encode_bool(true);
  //     else
  //       return encode_bool(false);
  //   }
  //   // else if (arg1_tag == MPZ) {
  //   //   cmp_res = mpz_cmp(*(decode_mpz(arg1)), *(decode_mpz(arg2)));
  //   //   if (equal_zero(cmp_res))
  //   //     return encode_bool(true);
  //   //   else
  //   //     return encode_bool(false);
  //   // } else if (arg1_tag == MPF) {

  //   //   cmp_res = mpf_cmp(*(decode_mpf(arg1)), *(decode_mpf(arg2)));
  //   //   if (equal_zero(cmp_res))
  //   //     return encode_bool(true);
  //   //   else
  //   //     return encode_bool(false);
  //   // }
  // }
  // else {
  // will write later
  // }
  // mpf_t *arg1_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  // mpf_init(*arg1_mpf);
  // mpf_t *arg2_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  // mpf_init(*arg2_mpf);

  // if (arg1_tag == MPZ)
  //     arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
  // else
  //     arg1_mpf = decode_mpf(arg1);

  // if (arg2_tag == MPZ)
  //     arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
  // else
  //     arg2_mpf = decode_mpf(arg2);

  // cmp_res = mpf_cmp(*arg1_mpf, *arg2_mpf);

  // if (equal_zero(cmp_res))
  //     return encode_bool(true);
  // else
  //     return encode_bool(false);
  return nullptr;
}

inline void *apply_prim__u61_3(void *arg1, void *arg2, void *arg3) // =
{
  if (decode_bool(compare_op(arg1, arg2, *equal_zero)))
    return compare_op(arg2, arg3, *equal_zero);
  else
    return encode_bool(false);
}

// Checks if the list is strictly decreasing
void *apply_prim__u62(void *lst) // >
{
  return compare_lst(*great_zero);
}

void *apply_prim__u62_1(void *arg1) // >
{
  return encode_bool(true);
}

void *apply_prim__u62_2(void *arg1, void *arg2) // >
{
  // return compare_op(arg1, arg2, *great_zero);
  int cmp_res = 0;

  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  bool type_check = (arg1_tag == INT) || (arg1_tag == FLOAT_VAL) ||
                    (arg1_tag == MPZ) || (arg1_tag == MPF);

  if (!type_check)
    assert_type(false, "Error in >, -> contact violation: argument type should "
                       "be either integers or floating-point numbers!");

  bool type_check2 = (arg2_tag == INT) || (arg2_tag == FLOAT_VAL) ||
                     (arg2_tag == MPZ) || (arg2_tag == MPF);

  if (!type_check2)
    assert_type(false, "Error in >, -> contact violation: argument type should "
                       "be either integers or floating-point numbers!");

  // Both arguments are integers
  if (arg1_tag == INT && arg2_tag == INT) {
    s64 a1 = decode_int(arg1);
    s64 a2 = decode_int(arg2);
    return a1 > a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    return a1 > a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPZ) {
    cmp_res = mpz_cmp(*(decode_mpz(arg1)), *(decode_mpz(arg2)));
    if (great_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  } else if (arg1_tag == MPF) {
    cmp_res = mpf_cmp(*(decode_mpf(arg1)), *(decode_mpf(arg2)));
    if (great_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  } else {
    assert_type(false, "Error in >, -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
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
  return compare_lst(*less_zero);
}

void *apply_prim__u60_1(void *arg1) // <
{
  return encode_bool(true);
}

void *apply_prim__u60_2(void *arg1, void *arg2) // <
{
  // return compare_op(arg1, arg2, *less_zero);
  int cmp_res = 0;

  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  bool type_check = (arg1_tag == INT) || (arg1_tag == FLOAT_VAL) ||
                    (arg1_tag == MPZ) || (arg1_tag == MPF);

  if (!type_check)
    assert_type(false, "Error in <, -> contact violation: argument type should "
                       "be either integers or floating-point numbers!");

  bool type_check2 = (arg2_tag == INT) || (arg2_tag == FLOAT_VAL) ||
                     (arg2_tag == MPZ) || (arg2_tag == MPF);

  if (!type_check2)
    assert_type(false, "Error in <, -> contact violation: argument type should "
                       "be either integers or floating-point numbers!");

  // Both arguments are integers
  if (arg1_tag == INT && arg2_tag == INT) {
    s64 a1 = decode_int(arg1);
    s64 a2 = decode_int(arg2);

    return a1 < a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    return a1 < a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == INT && arg2_tag == FLOAT_VAL) {
    float a1 = (float)decode_int(arg1);
    float a2 = decode_float(arg2);
    return a1 < a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == INT) {
    float a1 = decode_float(arg1);
    float a2 = (float)decode_int(arg2);
    return a1 < a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPF && arg2_tag == FLOAT_VAL) {
    mpf_t *a1_mpf = decode_mpf(arg1);
    float a2_float = decode_float(arg2);
    mpf_t a2_mpf;
    mpf_init(a2_mpf);
    mpf_set_d(a2_mpf, a2_float);
    int cmp_result = mpf_cmp(*a1_mpf, a2_mpf);
    mpf_clear(a2_mpf);
    return cmp_result < 0 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPZ && arg2_tag == MPZ) {
    mpz_t *a1_mpz = decode_mpz(arg1);
    mpz_t *a2_mpz = decode_mpz(arg2);
    return mpz_cmp(*a1_mpz, *a2_mpz) < 0 ? encode_bool(true)
                                         : encode_bool(false);
  } else if (arg1_tag == MPF && arg2_tag == MPF) {
    mpf_t *a1_mpf = decode_mpf(arg1);
    mpf_t *a2_mpf = decode_mpf(arg2);
    return mpf_cmp(*a1_mpf, *a2_mpf) < 0 ? encode_bool(true)
                                         : encode_bool(false);
  } else if (arg1_tag == INT && arg2_tag == MPZ) {
    s32 a1 = decode_int(arg1);
    mpz_t *a2_mpz = decode_mpz(arg2);
    mpz_t a1_mpz;
    mpz_init_set_si(a1_mpz, a1);
    int cmp_result = mpz_cmp(a1_mpz, *a2_mpz);
    mpz_clear(a1_mpz);
    return cmp_result < 0 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPZ && arg2_tag == INT) {
    mpz_t *a1_mpz = decode_mpz(arg1);
    s32 a2 = decode_int(arg2);
    mpz_t a2_mpz;
    mpz_init_set_si(a2_mpz, a2);
    int cmp_result = mpz_cmp(*a1_mpz, a2_mpz);
    mpz_clear(a2_mpz);
    return cmp_result < 0 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == MPZ) {
    float a1_float = decode_float(arg1);
    mpz_t *a2_mpz = decode_mpz(arg2);
    mpf_t a1_mpf;
    mpf_init(a1_mpf);
    mpf_set_d(a1_mpf, a1_float);
    int cmp_result = mpf_cmp_z(a1_mpf, *a2_mpz);
    mpf_clear(a1_mpf);
    return cmp_result < 0 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPZ && arg2_tag == FLOAT_VAL) {
    mpz_t *a1_mpz = decode_mpz(arg1);
    float a2_float = decode_float(arg2);
    mpf_t a2_mpf;
    mpf_init(a2_mpf);
    mpf_set_d(a2_mpf, a2_float);
    int cmp_result = mpf_cmp_z(a2_mpf, *a1_mpz);
    mpf_clear(a2_mpf);
    return cmp_result > 0 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == INT && arg2_tag == MPF) {
    s32 a1 = decode_int(arg1);
    mpf_t *a2_mpf = decode_mpf(arg2);
    mpf_t a1_mpf;
    mpf_init(a1_mpf);
    mpf_set_si(a1_mpf, a1);
    int cmp_result = mpf_cmp(a1_mpf, *a2_mpf);
    mpf_clear(a1_mpf);
    return cmp_result < 0 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPF && arg2_tag == INT) {
    mpf_t *a1_mpf = decode_mpf(arg1);
    s32 a2 = decode_int(arg2);
    mpf_t a2_mpf;
    mpf_init(a2_mpf);
    mpf_set_si(a2_mpf, a2);
    int cmp_result = mpf_cmp(*a1_mpf, a2_mpf);
    mpf_clear(a2_mpf);
    return cmp_result < 0 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == MPF) {
    float a1_float = decode_float(arg1);
    mpf_t *a2_mpf = decode_mpf(arg2);
    mpf_t a1_mpf;
    mpf_init(a1_mpf);
    mpf_set_d(a1_mpf, a1_float);
    int cmp_result = mpf_cmp(a1_mpf, *a2_mpf);
    mpf_clear(a1_mpf);
    return cmp_result < 0 ? encode_bool(true) : encode_bool(false);
  } else {
    assert_type(false, "Error in <, -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *apply_prim__u60_3(void *arg1, void *arg2, void *arg3) // <
{
  if (decode_bool(compare_op(arg1, arg2, *less_zero)))
    return compare_op(arg2, arg3, *less_zero);
  else
    return encode_bool(false);
}

// checks if elements are decreasing >=
void *apply_prim__u62_u61(void *lst) {
  return compare_lst(*great_equal_zero);
}

void *apply_prim__u62_u61_1(void *arg1) // >=
{
  return encode_bool(true);
}

void *apply_prim__u62_u61_2(void *arg1, void *arg2) // >=
{
  // return compare_op(arg1, arg2, *great_equal_zero);
  int cmp_res = 0;

  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  bool type_check = (arg1_tag == INT) || (arg1_tag == FLOAT_VAL) ||
                    (arg1_tag == MPZ) || (arg1_tag == MPF);

  if (!type_check)
    assert_type(false,
                "Error in >=, -> contact violation: argument type should "
                "be either integers or floating-point numbers!");

  bool type_check2 = (arg2_tag == INT) || (arg2_tag == FLOAT_VAL) ||
                     (arg2_tag == MPZ) || (arg2_tag == MPF);

  if (!type_check2)
    assert_type(false,
                "Error in >=, -> contact violation: argument type should "
                "be either integers or floating-point numbers!");

  // Both arguments are integers
  if (arg1_tag == INT && arg2_tag == INT) {
    s64 a1 = decode_int(arg1);
    s64 a2 = decode_int(arg2);

    return a1 >= a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    return a1 >= a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPZ) {
    cmp_res = mpz_cmp(*(decode_mpz(arg1)), *(decode_mpz(arg2)));
    if (great_equal_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  } else if (arg1_tag == MPF) {
    cmp_res = mpf_cmp(*(decode_mpf(arg1)), *(decode_mpf(arg2)));
    if (great_equal_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  } else {
    assert_type(false, "Error in >=, -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *apply_prim__u62_u61_2_b4(void *arg1, void *arg2) // >=
{
  return compare_op(arg1, arg2, *great_equal_zero);
}

void *apply_prim__u62_u61_3(void *arg1, void *arg2, void *arg3) // >=
{
  if (decode_bool(compare_op(arg1, arg2, *great_equal_zero)))
    return compare_op(arg2, arg3, *great_equal_zero);
  else
    return encode_bool(false);
}

// checks if elements are increasing <=
void *apply_prim__u60_u61(void *lst) {
  return compare_lst(*less_equal_zero);
}

void *apply_prim__u60_u61_1(void *arg1) // <=
{
  return encode_bool(true);
}

void *apply_prim__u60_u61_2(void *arg1, void *arg2) // <=
{
  // return compare_op(arg1, arg2, *less_equal_zero);
  int cmp_res = 0;

  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  bool type_check = (arg1_tag == INT) || (arg1_tag == FLOAT_VAL) ||
                    (arg1_tag == MPZ) || (arg1_tag == MPF);

  if (!type_check)
    assert_type(false,
                "Error in <=, -> contact violation: argument type should "
                "be either integers or floating-point numbers!");

  bool type_check2 = (arg2_tag == INT) || (arg2_tag == FLOAT_VAL) ||
                     (arg2_tag == MPZ) || (arg2_tag == MPF);

  if (!type_check2)
    assert_type(false,
                "Error in <=, -> contact violation: argument type should "
                "be either integers or floating-point numbers!");

  // Both arguments are integers
  if (arg1_tag == INT && arg2_tag == INT) {
    s64 a1 = decode_int(arg1);
    s64 a2 = decode_int(arg2);

    return a1 <= a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    float a1 = decode_float(arg1);
    float a2 = decode_float(arg2);

    return a1 <= a2 ? encode_bool(true) : encode_bool(false);
  } else if (arg1_tag == MPZ) {
    cmp_res = mpz_cmp(*(decode_mpz(arg1)), *(decode_mpz(arg2)));
    if (less_equal_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  } else if (arg1_tag == MPF) {
    cmp_res = mpf_cmp(*(decode_mpf(arg1)), *(decode_mpf(arg2)));
    if (less_equal_zero(cmp_res))
      return encode_bool(true);
    else
      return encode_bool(false);
  } else {
    assert_type(false, "Error in <=, -> contact violation: The values in the "
                       "list must be integers or floating-point numbers!");
  }

  return nullptr;
}

void *apply_prim__u60_u61_2_b4(void *arg1, void *arg2) // <=
{
  return compare_op(arg1, arg2, *less_equal_zero);
}

void *apply_prim__u60_u61_3(void *arg1, void *arg2, void *arg3) // <=
{
  if (decode_bool(compare_op(arg1, arg2, *less_equal_zero)))
    return compare_op(arg2, arg3, *less_equal_zero);
  else
    return encode_bool(false);
}

#pragma endregion

#pragma region hash - prims

struct hash_struct {
  void *val;

  hash_struct(void *arg) { this->val = arg; }

  u64 hash() const { return hash_(this->val); }

  bool operator==(const hash_struct &s) const {
    return decode_bool(equal_(this->val, s.val));
  }

  void print_hash_val() const { print_val(this->val); }
};

std::string print_set(void *s) {
  const hamt<hash_struct, hash_struct> *h_set = decode_hash(s);
  const hash_struct **keys = h_set->getKeys();
  std::string ret_str = "(set";
  for (int i = 0; i < (h_set->size() * 2); i += 2) {
    ret_str += " " + print_val(keys[i]->val);
  }
  return ret_str + ")";
}

// doesn't work now just prints the keys in a list like set
std::string print_hash(void *h) {
  if (get_tag(h) != HASH)
    assert_type(false, "Error in print_hash -> contact violation: Passed "
                       "type is not a hash.");

  const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
  if (h_hamt->whatami() == hamt_ds_type::set_type) {
    return print_set(h);
  }
  std::string ret_str;
  ret_str.append("'#hash(");
  const hash_struct **keys = h_hamt->getKeys();
  for (int i = 0; i < (h_hamt->size() * 2); i += 2) {
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
void *apply_prim_hash(void *lst) {
  // For Keys : int, float, MPZ, MPF, STRING
  // For Values: Everything(void*)
  const hamt<hash_struct, hash_struct> *h =
      new ((hamt<hash_struct, hash_struct> *)GC_MALLOC(sizeof(
          hamt<hash_struct, hash_struct>))) hamt<hash_struct, hash_struct>();

  // for (int i = 3; i <= numArgs; i++) {
  //   PRINT(print_val(arg_buffer[i]));
  // }

  for (int i = 3; i <= numArgs; i += 2) {
    if (numArgs <= 3) {
      assert_type(
          false,
          "Error in hash -> contact violation: key does not have a value!");
    }

    bool type_check = is_hashable(arg_buffer[i]);
    if (type_check) {
      const hash_struct *const k =
          new ((hash_struct *)GC_MALLOC(sizeof(hash_struct)))
              hash_struct(arg_buffer[i]);
      //?? hash_struct for value is not required, have to ask and remove.
      const hash_struct *const v =
          new ((hash_struct *)GC_MALLOC(sizeof(hash_struct)))
              hash_struct(arg_buffer[i + 1]);
      h = h->insert(k, v);

    } else {
      assert_type(
          false,
          "Error in hash -> contact violation: Key should be one of the "
          "following types: integer,  floating-point number or a string");
    }
  }

  // while (is_cons(lst)) {
  //   void **cons_lst = decode_cons(lst);
  //   int elem_tag = get_tag(cons_lst[0]);
  //   bool type_check = (elem_tag == INT) || (elem_tag == FLOAT_VAL) ||
  //                     (elem_tag == MPZ) || (elem_tag == MPF) ||
  //                     (elem_tag == STRING) || (elem_tag == HASH) ||
  //                     (elem_tag == CONS);

  //   if (!is_cons(cons_lst[1])) {
  //     assert_type(
  //         false,
  //         "Error in hash -> contact violation: key does not have a value!");
  //   }
  //   void **cdr_cons_lst = decode_cons(cons_lst[1]);

  //   if (type_check) {
  //     const hash_struct *const k =
  //         new ((hash_struct *)GC_MALLOC(sizeof(hash_struct)))
  //             hash_struct(cons_lst[0]);
  //     //?? hash_struct for value is not required, have to ask and remove.
  //     const hash_struct *const v =
  //         new ((hash_struct *)GC_MALLOC(sizeof(hash_struct)))
  //             hash_struct(cdr_cons_lst[0]);
  //     h = h->insert(k, v);
  //     lst = cdr_cons_lst[1];
  //     continue;
  //   }
  //   assert_type(false,
  //               "Error in hash -> contact violation: Key should be one of the
  //               " "following types: integer,  floating-point number or a
  //               string");
  // }

  // std::cout << h->size() << std::endl;
  return encode_hash(h);
}

void *prim_hash_u45ref(void *h, void *k) {
  // check if h is a hash
  // check if k is an mpz
  // decode the hash and call hash-ref functions
  // return the key
  bool type_check_hash = get_tag(h) == HASH;
  if (!type_check_hash) {
    assert_type(false, "Error in the hash-ref: contact violation -> First "
                       "argument should be a hash!");
  }

  bool type_check_key = is_hashable(k);
  if (!type_check_key) {
    assert_type(false, "Error in the hash-ref: contact violoation -> Second "
                       "argument should be one of the following type: integer, "
                       "floating-point number, string or a hash!");
  }

  const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
  const hash_struct *const key =
      new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(k);
  const hash_struct *const t = h_hamt->get(key);

  if (t) {
    return t->val;
  } else {
    // return NULL_VALUE;
    return 0;
  }
}

inline void *apply_prim_hash_u45ref_2(void *arg1, void *arg2) {
  return prim_hash_u45ref(arg1, arg2);
}

inline void *apply_prim_hash_u45ref(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(false, "Error in hash-ref -> arity mismatch: number of "
                       "arguments should be 2!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return prim_hash_u45ref(car, cadr);
}

void *prim_hash_u45set(void *h, void *k, void *v) {
  // check if h is hash
  // check if k, v are mpz's
  // check and update if there and create if new
  bool type_check_hash = get_tag(h) == HASH;
  if (!type_check_hash) {
    assert_type(false, "Error in the hash-set: contact violation -> First "
                       "argument should be a hash!");
  }
  bool type_check_key = is_hashable(k);
  if (!type_check_key) {
    assert_type(false, "Error in the hash-set: contact violoation -> Second "
                       "argument should be one of the following type: integer, "
                       "floating-point numbers or a string");
  }

  const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
  const hash_struct *const key =
      new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(k);
  //?? hash_struct for value is not required, have to ask and remove.
  const hash_struct *const value =
      new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(v);
  h_hamt = h_hamt->insert(key, value);

  return encode_hash(h_hamt);
}

inline void *apply_prim_hash_u45set_3(void *arg1, void *arg2, void *arg3) {
  return prim_hash_u45set(arg1, arg2, arg3);
}

inline void *apply_prim_hash_u45set(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 3 || len_cnt > 3)
    assert_type(false, "Error in hash-set -> arity mismatch: number of "
                       "arguments should be 3!");

  void **cons_lst = decode_cons(lst);
  void *const car = cons_lst[0];
  void *cdr = cons_lst[1];
  void *cadr = prim_car(cdr);

  return prim_hash_u45set(car, cadr, prim_car(prim_cdr(cdr)));
  // return prim_hash_u45set(prim_car(lst), prim_car(prim_cdr(lst)),
  // prim_car(prim_cdr(prim_cdr(lst))));
}

void *prim_set_u45add(void *s, void *val) {
  int tag = get_tag(s);

  if (tag == CONS) {
    // if the first argument is a list, append the val and return it!
    return prim_cons(val, s);
  } else if (tag == HASH) {
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(s);
    if (h_hamt->whatami() == hamt_ds_type::set_type) {
      // if the argument is a set, call hash-set
      return prim_hash_u45set(s, val, encode_bool(true));
    }

    // otherwise shoot error, because, a hash should not be passed as an
    // argument
    assert_type(false, "Error in set-add: contact violation -> First argument "
                       "should be a set");
  }
  // otherwise not sure what it is, thus shooting an error!

  assert_type(false, "Error in set-add: contact violation -> First argument "
                     "should be a set");

  return prim_hash_u45set(s, val, encode_bool(true));
}

inline void *apply_prim_set_u45add_2(void *s, void *val) {
  return prim_set_u45add(s, val);
}

inline void *apply_prim_set_u45add(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(false, "Error in set-add -> arity mismatch: number of "
                       "arguments should be 2!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return prim_set_u45add(car, cadr);
}

inline void *apply_prim_set_u45member_u63_2(void *arg1, void *arg2) {
  int tag = get_tag(arg1);

  if (tag != CONS && tag != HASH) {
    assert_type(false, "Error in the set-member? -> contact violation: First "
                       "argument should be a set or a list");
  }

  if (tag == HASH) {
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(arg1);
    if (h_hamt->whatami() == hamt_ds_type::set_type) {
      if (get_tag(arg2) == CLO) {
        return encode_bool(false);
      }

      // if the argument is a set
      const hash_struct *const key =
          new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(arg2);
      const hash_struct *const t = h_hamt->get(key);

      if (t) {
        return encode_bool(true);
      } else {
        return encode_bool(false);
      }
    }

    // otherwise shoot error, because, a hash should not be passed as an
    // argument
    assert_type(false, "Error in the set-member? -> contact violation: First "
                       "argument should be a set or a list");
  } else if (tag == CONS) {
    void *result = nullptr;

    while (is_cons(arg1)) {
      void **cons_lst = decode_cons(arg1);
      int car_tag = get_tag(cons_lst[0]);

      if (!result) {
        result = cons_lst[0];
        if (decode_bool(prim_equal_u63(result, arg2)))
          return encode_bool(true);
      } else {
        if (decode_bool(prim_equal_u63(arg2, cons_lst[0])))
          return encode_bool(true);
      }

      arg1 = cons_lst[1];
    }

    if (result == nullptr) {
      return encode_bool(false);
    }
    return encode_bool(false);
  }

  assert_type(false, "Error in set-member -> contact violation: Argument "
                     "should be a set or a list");

  return nullptr;
}

inline void *apply_prim_set_u45member_u63(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(false, "Error in set-member -> arity mismatch: number of "
                       "arguments should be 2!");

  return apply_prim_set_u45member_u63_2(prim_car(lst), prim_car(prim_cdr(lst)));
}

void *prim_hash_u45has_u45key_u63(void *h, void *k) {
  bool type_check_hash = get_tag(h) == HASH;
  if (!type_check_hash) {
    assert_type(false, "Error in the hash-has-key? -> contact violation: First "
                       "argument should be a hash");
  }

  bool type_check_key = is_hashable(k);
  if (!type_check_key) {
    assert_type(false, "Error in the hash-has-key? -> contact violoation: "
                       "Second argument should be one of the following type: "
                       "integer, floating-point number, string or a hash");
  }

  void *ret_val = prim_hash_u45ref(h, k);
  if (ret_val) {
    return encode_bool(true);
  } else {
    return encode_bool(false);
  }
}

inline void *apply_prim_hash_u45has_u45key_u63_2(void *arg1, void *arg2) {
  return prim_hash_u45has_u45key_u63(arg1, arg2);
}

inline void *apply_prim_hash_u45has_u45key_u63(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(false, "Error in hash-has-key? -> arity mismatch: number of "
                       "arguments should be 2!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return prim_hash_u45has_u45key_u63(car, cadr);
}

void *prim_hash_u45count(void *h) {
  bool type_check_hash = get_tag(h) == HASH;
  if (!type_check_hash) {
    assert_type(false, "Error in the hash-count -> contact violation: argument "
                       "should be a hash");
  }
  const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
  mpz_t *count = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init_set_ui(*count, h_hamt->size());
  std::cout << "The size of the hash is: " << h_hamt->size() << std::endl;
  return encode_mpz(count);
}

inline void *apply_prim_hash_u45count_1(void *arg1) {
  return prim_hash_u45count(arg1);
}

inline void *apply_prim_hash_u45count(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in hash-count -> arity mismatch: number of "
                       "arguments should be 1!");

  return prim_hash_u45count(prim_car(lst));
}

void *prim_hash_u45keys(void *h) {
  bool type_check_hash = get_tag(h) == HASH;
  if (!type_check_hash) {
    assert_type(false, "Error in the hash-keys -> contact violation: argument "
                       "should be a hash");
  }
  const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
  const hash_struct **keys_array = h_hamt->getKeys();
  // std::cout << "The size of the hash is: " << h_hamt->size() << std::endl;
  void *keys_cons_lst = encode_null();
  //+=2 and *2 coz getKeys returns an array that also has values.
  for (long i = 0; i < (h_hamt->size() * 2); i += 2) {
    keys_cons_lst = prim_cons(keys_array[i]->val, keys_cons_lst);
  }
  // std::cout << print_val(keys_cons_lst) << std::endl;
  return keys_cons_lst;
}

inline void *apply_prim_hash_u45keys_1(void *arg) {
  return prim_hash_u45keys(arg);
}

inline void *apply_prim_hash_u45keys(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in hash-keys -> arity mismatch: number of "
                       "arguments should be 1!");

  return prim_hash_u45keys(prim_car(lst));
}

#pragma endregion

#pragma region set - prims

inline void *apply_prim_set(void *lst) {
  const hamt<hash_struct, hash_struct> *h =
      new ((hamt<hash_struct, hash_struct> *)GC_MALLOC(
          sizeof(hamt<hash_struct, hash_struct>)))
          hamt<hash_struct, hash_struct>(hamt_ds_type::set_type);
  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int elem_tag = get_tag(cons_lst[0]);
    bool type_check = (elem_tag == MPZ) || (elem_tag == MPF) ||
                      (elem_tag == STRING) || (elem_tag == HASH);

    if (type_check) {
      const hash_struct *const k =
          new ((hash_struct *)GC_MALLOC(sizeof(hash_struct)))
              hash_struct(cons_lst[0]);
      const hash_struct *const v =
          new ((hash_struct *)GC_MALLOC(sizeof(hash_struct)))
              hash_struct(encode_bool(true));
      h = h->insert(k, v);
      lst = cons_lst[1];
      continue;
    }
    assert_type(false,
                "Error in set -> contact violation: key should be one of "
                "following types: integer, floating-point number or a string");
  }
  // std::cout << "the size of the set being returned is" << h->size() <<
  // std::endl;
  return encode_hash(h);
}

void *prim_set_u45_u62list(void *h) {
  // encoding/decoding for set is missing

  int tag = get_tag(h);

  if (tag == CONS) {
    // if the argument is a list, return as it is!
    return h;
  } else if (tag == HASH) {
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    if (h_hamt->whatami() == hamt_ds_type::set_type) {
      // if the argument is a set
      return prim_hash_u45keys(h);
    }

    // otherwise shoot error, because, a hash should not be passed as an
    // argument
    assert_type(
        false,
        "Error in set->list -> contact violation: argument should be a set");
  }
  // otherwise we are assuming a set/something is passed, which is not always
  // true!, thus shooting an error!

  assert_type(
      false,
      "Error in set->list -> contact violation: argument should be a set");

  return prim_hash_u45keys(h);
}

inline void *apply_prim_set_u45_u62list_1(void *arg) {
  return prim_set_u45_u62list(arg);
}

inline void *apply_prim_set_u45_u62list(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in set->list -> arity mismatch: number of "
                       "arguments should be 1!");

  return prim_set_u45_u62list(prim_car(lst));
}

void *prim_list_u45_u62set(void *lst) {
  int tag = get_tag(lst);

  if (tag == CONS) {
    // if the argument is a list, convert it to set!
    return apply_prim_set(lst);
  } else if (tag == HASH) {
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(lst);
    if (h_hamt->whatami() == hamt_ds_type::set_type) {
      // if the argument is a set, return as it is!
      return lst;
    }

    // otherwise shoot error, because, a hash should not be passed as an
    // argument
    assert_type(
        false,
        "Error in list->set -> contact violation: argument should be a list");
  }
  // otherwise we are not sure what it is, thus shooting an error!

  assert_type(
      false,
      "Error in list->set -> contact violation: argument should be a list");

  return apply_prim_set(lst);
}

inline void *apply_prim_list_u45_u62set_1(void *arg) {
  return prim_list_u45_u62set(arg);
}

inline void *apply_prim_list_u45_u62set(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in list->set -> arity mismatch: number of "
                       "arguments should be 1!");

  return prim_list_u45_u62set(prim_car(lst));
}

inline void *apply_prim_set_u45remove_2(void *arg1, void *arg2) {
  int tag = get_tag(arg1);

  if (tag != CONS && tag != HASH) {
    assert_type(false, "Error in the set-remove -> contact violation: first "
                       "argument should be a set or a list");
  }

  if (tag == HASH) {
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(arg1);
    if (h_hamt->whatami() == hamt_ds_type::set_type) {
      if (get_tag(arg2) == CLO) {
        assert_type(
            false,
            "Error in set-remove -> contact violation: seecond argument "
            "should "
            "be: integer, floating-point number, string, hash or a list");
      }

      const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(arg1);
      const hash_struct **keys_array = h_hamt->getKeys();

      void *keys_cons_lst = encode_null();

      for (long i = 0; i < (h_hamt->size() * 2); i += 2) {
        if (!decode_bool(prim_equal_u63(arg2, keys_array[i]->val))) {
          keys_cons_lst = prim_cons(keys_array[i]->val, keys_cons_lst);
        }
      }
      // std::cout << print_val(keys_cons_lst) << std::endl;
      return apply_prim_set(keys_cons_lst);
    }

    // otherwise shoot error, because, a hash should not be passed as an
    // argument
    assert_type(false, "Error in the set-member? -> contact violation: first "
                       "argument should be a set or a list");
  } else if (tag == CONS) {
    void *result = nullptr;
    void *lst = encode_null();

    while (is_cons(arg1)) {
      void **cons_lst = decode_cons(arg1);
      int car_tag = get_tag(cons_lst[0]);

      if (!decode_bool(prim_equal_u63(cons_lst[0], arg2)))
        lst = prim_cons(cons_lst[0], lst);

      arg1 = cons_lst[1];
    }

    return lst;
  }

  assert_type(false, "Error in set-remove -> contact violation: argument "
                     "should be a set or a list");

  return nullptr;
}

inline void *apply_prim_set_u45remove(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(false, "Error in set-remove -> arity mismatch: number of "
                       "arguments should be 2!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return apply_prim_set_u45remove_2(car, cadr);
}

inline void *apply_prim_set_u45count_1(void *arg1) {
  int tag = get_tag(arg1);

  if (tag != CONS && tag != HASH) {
    assert_type(false, "Error in the set-count -> contact violation: first "
                       "argument should be a set or a list");
  }

  if (tag == HASH) {
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(arg1);
    if (h_hamt->whatami() == hamt_ds_type::set_type) {
      mpz_t *count = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init_set_ui(*count, h_hamt->size());
      return encode_mpz(count);
    }

    // otherwise shoot error, because, a hash should not be passed as an
    // argument
    assert_type(false, "Error in the set-count -> contact violation: first "
                       "argument should be a set or a list");
  } else if (tag == CONS) {
    mpz_t *count = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_ui(*count, length_counter(arg1));
    return encode_mpz(count);
  }

  assert_type(false, "Error in set-count -> contact violation: argument should "
                     "be a set or a list");

  return nullptr;
}

inline void *apply_prim_set_u45count(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in set-count -> arity mismatch: number of "
                       "arguments should be 2!");

  return apply_prim_set_u45count_1(prim_car(lst));
}

#pragma end region

/*
Takes a MPZ/MPF and returns MPF
*/
void *prim_exact_u45_u62inexact(void *val) {
  int val_tag = get_tag(val);
  if (val_tag != MPF && val_tag != MPZ) {
    assert_type(false, "Error in int->float -> contract violation: expected "
                       "integers or floating-point numbers as argument!");
  }

  if (val_tag == MPZ) {
    mpf_t *ret_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*ret_mpf);
    mpf_set_z(*ret_mpf, *(decode_mpz(val)));
    return encode_mpf(ret_mpf);
  } else if (val_tag == MPF) {
    return val;
  }

  return nullptr;
}

inline void *apply_prim_int_u45_u62float_1(void *arg) {
  return prim_exact_u45_u62inexact(arg);
}

inline void *apply_prim_int_u45_u62float(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in int->float -> arity mismatch: number of "
                       "arguments should be 1.");

  return prim_exact_u45_u62inexact(prim_car(lst));
}

/*
Takes a MPF/MPZ and returns MPZ
*/
void *prim_inexact_u45_u62exact(void *val) {
  int val_tag = get_tag(val);
  if (val_tag != MPF && val_tag != MPZ) {
    assert_type(false, "Error in float->int -> contract violation: expected "
                       "integers or floating-point numbers as argument!");
  }

  if (val_tag == MPF) {
    mpz_t *ret_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*ret_mpz);
    mpz_set_f(*ret_mpz, *(decode_mpf(val)));
    return encode_mpz(ret_mpz);
  } else if (val_tag == MPZ) {
    return val;
  }

  return nullptr;
}

inline void *apply_prim_float_u45_u62int_1(void *arg) {
  return prim_inexact_u45_u62exact(arg);
}

inline void *apply_prim_float_u45_u62int(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in float->int -> arity mismatch: number of "
                       "arguments should be 1.");

  return prim_inexact_u45_u62exact(prim_car(lst));
}

void *prim_exact_u45floor(void *val) // exact-floor
{
  int val_tag = get_tag(val);
  if (val_tag != MPF && val_tag != MPZ) {
    assert_type(false, "Error in exact-floor -> contract violation: expected "
                       "integers or floating-point numbers as argument!");
  }

  void *result = nullptr;

  if (val_tag == MPF) {
    mpz_t *result_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result_mpz);

    mpf_t *flr_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*flr_val);
    mpf_floor(*flr_val, *(decode_mpf(val)));
    mpz_set_f(*result_mpz, *flr_val);

    return encode_mpz(result_mpz);
  } else if (val_tag == MPZ) {
    return val;
  }

  return result;
}

inline void *apply_prim_exact_u45floor_1(void *val) {
  return prim_exact_u45floor(val);
}

inline void *apply_prim_exact_u45floor(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in exact-floor -> arity mismatch: number of "
                       "argument should be 1.");

  void **cons_lst = decode_cons(lst);
  int car_tag = get_tag(cons_lst[0]);
  bool type_check = (car_tag == MPZ) || (car_tag == MPF);

  if (!type_check)
    assert_type(false, "Error in exact-floor -> contact violation: expected "
                       "integers or floating-point numbers as argument!");

  return prim_exact_u45floor(prim_car(lst));
}

void *prim_exact_u45ceiling(void *val) // exact-ceiling
{
  int val_tag = get_tag(val);
  if (val_tag != MPF && val_tag != MPZ) {
    assert_type(false, "Error in exact-ceiling -> contract violation: expected "
                       "integers or floating-point numbers as argument!");
  }

  void *result = nullptr;

  if (val_tag == MPF) {
    mpz_t *result_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result_mpz);

    mpf_t *ceil_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*ceil_val);
    mpf_ceil(*ceil_val, *(decode_mpf(val)));
    mpz_set_f(*result_mpz, *ceil_val);

    return encode_mpz(result_mpz);
  } else if (val_tag == MPZ) {
    return val;
  }

  return result;
}

inline void *apply_prim_exact_u45ceiling_1(void *val) {
  return prim_exact_u45ceiling(val);
}

inline void *apply_prim_exact_u45ceiling(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in exact-ceiling -> arity mismatch: number of "
                       "argument should be 1.");

  void **cons_lst = decode_cons(lst);
  int car_tag = get_tag(cons_lst[0]);
  bool type_check = (car_tag == MPZ) || (car_tag == MPF);

  if (!type_check)
    assert_type(false, "Error in exact-ceiling -> contact violation: expected "
                       "integers or floating-point numbers as argument!");

  return prim_exact_u45ceiling(prim_car(lst));
}

void *prim_exact_u45round(void *val) // exact-round
{
  int val_tag = get_tag(val);
  if (val_tag != MPF && val_tag != MPZ) {
    assert_type(false, "Error in exact-round -> contract violation: expected "
                       "integers or floating-point numbers as argument!");
  }

  // passed value is mpz, return exactly that!
  if (val_tag == MPZ)
    return val;

  void *result = nullptr;
  mpf_t *val_mpf = decode_mpf(val);

  mpf_t *round_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*round_val);

  mpf_t *half = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*half);
  mpf_set_d(*half, 0.5);

  // Check if the fractional part is exactly 0.5
  mpf_t *float_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*float_val);
  mpf_floor(*float_val, *val_mpf);
  mpf_sub(*float_val, *val_mpf, *float_val);

  // print_mpf(float_val);

  // If fractional part = 0.5, rounding it to the nearest even integer
  if (mpf_cmp(*float_val, *half) == 0) {
    mpz_t int_val;
    mpz_init(int_val);

    // Converting to to mpz_t, to floor the value
    mpz_set_f(int_val, *val_mpf);

    // if negative numbers
    if (mpf_sgn(*val_mpf) < 0) {
      // takeing abs value of the floored integer
      mpz_abs(int_val, int_val);
      // Incrementing to get the original integer part
      mpz_add_ui(int_val, int_val, 1);
    }

    if (mpz_even_p(int_val) != 0)
      mpf_floor(*round_val, *val_mpf);
    else
      mpf_ceil(*round_val, *val_mpf);

    mpz_clear(int_val);
  } else {
    mpf_t *temp = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*temp);
    mpf_add(*temp, *val_mpf, *half);
    mpf_floor(*round_val, *temp);
  }

  // print_mpf(round_val);

  mpz_t *result_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result_mpz);
  mpz_set_f(*result_mpz, *round_val); // Convert the rounded mpf to mpz

  return encode_mpz(result_mpz);
}

inline void *apply_prim_exact_u45round_1(void *val) {
  return prim_exact_u45round(val);
}

inline void *apply_prim_exact_u45round(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in exact-round -> arity mismatch: number of "
                       "argument should be 1.");

  void **cons_lst = decode_cons(lst);
  int car_tag = get_tag(cons_lst[0]);
  bool type_check = (car_tag == MPZ) || (car_tag == MPF);

  if (!type_check)
    assert_type(false, "Error in exact-round -> contact violation: expected "
                       "integers or floating-point numbers as argument!");

  return prim_exact_u45round(prim_car(lst));
}

#pragma region SYMBOL

bool isNum(const std::string &str) {
  try {
    size_t position;
    std::stod(str, &position);
    return position == str.size();
  } catch (const std::invalid_argument &exp) {
    return false;
  } catch (const std::out_of_range &exp) {
    return false;
  }
}

void *prim_symbol_u63(void *val) {
  if (get_tag(val) == STRING) {
    if (!isNum(*(decode_str(val))))
      return encode_bool(true);
    else
      return encode_bool(false);
  }
  return encode_bool(false);
}

inline void *apply_prim_symbol_u63_1(void *arg) { return prim_symbol_u63(arg); }

inline void *apply_prim_symbol_u63(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in symbol? -> arity mismatch: number of "
                       "arguments should be 1!");

  return prim_symbol_u63(prim_car(lst));
}

#pragma endregion

#pragma region STRINGS

// takes in a void* and checks if the passed value is a string or not
void *prim_string_u63(void *val) {
  int tag = get_tag(val);
  if (tag == STRING) {
    return encode_bool(true);
  }
  return encode_bool(false);
}

inline void *apply_prim_string_u63_1(void *arg) { return prim_string_u63(arg); }

inline void *apply_prim_string_u63(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in string? -> arity mismatch: number of "
                       "arguments should be 1!");

  return prim_string_u63(prim_car(lst));
}

// takes a void* and checks if it is a string and then returns the length of
// it
void *prim_string_u45length(void *val) {
  int tag = get_tag(val);
  if (tag != STRING) {
    assert_type(false, "Error in string-length -> contact violation: argument "
                       "is not a string");
  }

  std::string *str = decode_str(val);
  mpz_t *str_len = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init_set_ui(*str_len, str->length());
  return encode_mpz(str_len);
}

inline void *apply_prim_string_u45length_1(void *arg) {
  return prim_string_u45length(arg);
}

inline void *apply_prim_string_u45length(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in string-length -> arity mismatch: number of "
                       "arguments should be 1!");

  return prim_string_u45length(prim_car(lst));
}

// takes in str and the position and returns the character at that position
void *prim_string_u45ref(void *str_void, void *pos_void) {
  if (get_tag(str_void) != STRING)
    assert_type(false, "Error in string-ref -> contact violation: frist "
                       "argument should be a string");

  if (get_tag(pos_void) != MPZ)
    assert_type(false, "Error in string-ref -> contact violation: second "
                       "argument should be an integer");

  std::string *str = decode_str(str_void);
  mpz_t *pos = decode_mpz(pos_void);

  if (!(mpz_cmp_ui(*pos, str->length()) < 0)) { // pos < str.length()
    assert_type(false,
                "Error in string-ref -> exception: index is out of range");
  }
  const char ch = str->at(mpz_get_ui(*pos));
  return encode_str(new (GC) std::string(&ch));
}

inline void *apply_prim_string_u45ref_2(void *arg1, void *arg2) {
  return prim_string_u45ref(arg1, arg2);
}

inline void *apply_prim_string_u45ref(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(false, "Error in string-ref -> arity mismatch: number of "
                       "arguments should be 2!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return prim_string_u45ref(car, cadr);
}

// takes in the str, start[inclusive] and end[exclusive]
// and returns the substring starting from start till end
void *prim_substring(void *str_void, void *start_void, void *end_void) {
  if (get_tag(str_void) != STRING)
    assert_type(false, "Error in substring -> contact violation: first "
                       "argument should be a string");

  if (get_tag(start_void) != MPZ)
    assert_type(false, "Error in substring -> contact violation: second "
                       "argument should be an integer");

  if (get_tag(end_void) != MPZ)
    assert_type(false, "Error in substring -> contact violation: third "
                       "argument should be an integer");

  std::string *str = decode_str(str_void);
  long str_len = str->length();
  mpz_t *start = decode_mpz(start_void);
  mpz_t *end = decode_mpz(end_void);

  if (!((mpz_cmp_ui(*start, str_len) < 0) &&
        (mpz_cmp_ui(*end, str_len) <= 0))) {
    assert_type(
        false,
        "Error in substring -> exception: ending index is out of range!");
  }

  mpz_sub(*end, *start, *end);
  long substr_len = mpz_get_ui(*end);

  std::string *ret_str =
      new (GC) std::string(str->substr(mpz_get_ui(*start), substr_len));

  return encode_str(ret_str);
}

inline void *apply_prim_substring_3(void *arg1, void *arg2, void *arg3) {
  return prim_substring(arg1, arg2, arg3);
}

inline void *apply_prim_substring(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 3 || len_cnt > 3)
    assert_type(false, "Error in substring -> arity mismatch: number of "
                       "arguments should be 3!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cdr = cons_lst[1];
  void *cadr = prim_car(cdr);

  return prim_substring(car, cadr, prim_car(prim_cdr(cdr)));
}

// takes two strings and returns the appended string
void *prim_string_u45append(void *s1_void, void *s2_void) {
  if (get_tag(s1_void) != STRING)
    assert_type(false, "Error in string-append -> contact violation: frist "
                       "argument should be a string");

  if (get_tag(s2_void) != STRING)
    assert_type(false, "Error in string-append -> contact violation: second "
                       "argument should be a string");

  std::string *s1 = new (GC) std::string(*(decode_str(s1_void)));
  std::string *s2 = decode_str(s2_void);
  s1->append(*s2);
  return encode_str(s1);
}

inline void *apply_prim_string_u45append_2(void *arg1, void *arg2) {
  return prim_string_u45append(arg1, arg2);
}

inline void *apply_prim_string_u45append(void *lst) {
  void *result = nullptr;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == STRING);

    if (!type_check)
      assert_type(false, "Error in string-append -> contact violation: "
                         "arguement should be a string!");

    if (!result) {
      result = cons_lst[0];
    } else {
      result = prim_string_u45append(result, cons_lst[0]);
    }

    lst = cons_lst[1];
  }

  if (result == nullptr) {
    std::string *s1 = new (GC) std::string("");
    return encode_str(s1);
  }
  return result;
}

void *prim_string_u45_u62list(void *str_void) {
  if (get_tag(str_void) != STRING)
    assert_type(false, "Error in string->list -> contact violation: argument "
                       "should be a string");

  std::string *str = decode_str(str_void);
  std::string *ret_str = new (GC) std::string(*str);
  std::reverse(ret_str->begin(), ret_str->end());
  void *lst = encode_null();
  for (char c : *ret_str) {
    lst = prim_cons(encode_str(new (GC) std::string(1, c)), lst);
  }
  return lst;
}

inline void *apply_prim_string_u45_u62list_1(void *arg1) {
  return prim_string_u45_u62list(arg1);
}

inline void *apply_prim_string_u45_u62list(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(false, "Error in string->list -> arity mismatch: number of "
                       "arguments should be at least 1!");

  return prim_string_u45_u62list(prim_car(lst));
}

#pragma endregion

#pragma region newprims

inline void *apply_prim_abs_1(void *val) {
  int val_tag = get_tag(val);
  if (val_tag != MPF && val_tag != MPZ) {
    assert_type(false, "Error in abs -> contract violation: expected integers "
                       "or floating-point numbers as argument!");
  }

  if (val_tag == MPZ) {
    mpz_t *val_mpz = decode_mpz(val);

    if (mpz_sgn(*val_mpz) < 0) {
      mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
      mpz_init(*result);
      mpz_abs(*result, *val_mpz);

      return encode_mpz(result);
    } else {
      return val;
    }
  } else {
    mpf_t *val_mpf = decode_mpf(val);

    if (mpf_sgn(*val_mpf) < 0.0) {
      mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
      mpf_init(*result);
      mpf_abs(*result, *val_mpf);

      return encode_mpf(result);
    } else {
      return val;
    }
  }

  return nullptr;
}

inline void *apply_prim_abs(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(
        false,
        "Error in abs -> arity mismatch: number of arguments should be 1!");

  return apply_prim_abs_1(prim_car(lst));
}

inline void *apply_prim_max_1(void *arg) { return arg; }

inline void *apply_prim_max(void *lst) {
  if (length_counter(lst) < 1)
    assert_type(false, "Error in max -> arity mismatch: number of arguments "
                       "should be at least 1!");

  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_t *mpf_car = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));

  bool is_result = false;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in max -> contact violation: argument type should be "
                  "either integers or floating-point numbers!");

    if (!is_result) {
      is_result = true;
      if (car_tag == MPZ) {
        // result = mpz_2_mpf(decode_mpz(cons_lst[0]));
        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(cons_lst[0]);
        temp_mpf = mpz_2_mpf(temp_mpz_ptr);

        mpf_set(*result, *temp_mpf);
        mpf_clear(*temp_mpf);
      } else {
        // result = decode_mpf(cons_lst[0]);
        mpf_set(*result, *decode_mpf(cons_lst[0]));
      }
    } else {
      if (car_tag == MPZ) {
        // mpf_car = mpz_2_mpf(decode_mpz(cons_lst[0]));
        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(cons_lst[0]);
        temp_mpf = mpz_2_mpf(temp_mpz_ptr);

        mpf_set(*mpf_car, *temp_mpf);
        mpf_clear(*temp_mpf);
      } else {
        // mpf_car = decode_mpf(cons_lst[0]);
        mpf_set(*mpf_car, *decode_mpf(cons_lst[0]));
      }

      if (mpf_cmp(*mpf_car, *result) > 0.0) {
        mpf_set(*result, *mpf_car);
      }
    }

    lst = cons_lst[1];
  }

  return encode_mpf(result);
}

inline void *apply_prim_min_1(void *arg) { return arg; }

inline void *apply_prim_min(void *lst) {
  if (length_counter(lst) < 1)
    assert_type(false, "Error in min -> arity mismatch: number of arguments "
                       "should be at least 1!");

  mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*result);
  mpf_t *mpf_car = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
  mpf_init(*mpf_car);

  bool is_result = false;

  while (is_cons(lst)) {
    void **cons_lst = decode_cons(lst);
    int car_tag = get_tag(cons_lst[0]);
    bool type_check = (car_tag == MPZ) || (car_tag == MPF);

    if (!type_check)
      assert_type(false,
                  "Error in min -> contact violation: argument type should be "
                  "either integers or floating-point numbers!");

    if (!is_result) {
      is_result = true;
      if (car_tag == MPZ) {
        // result = mpz_2_mpf(decode_mpz(cons_lst[0]));
        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(cons_lst[0]);
        temp_mpf = mpz_2_mpf(temp_mpz_ptr);

        mpf_set(*result, *temp_mpf);
        mpf_clear(*temp_mpf);
      } else {
        // result = decode_mpf(cons_lst[0]);
        mpf_set(*result, *decode_mpf(cons_lst[0]));
      }
    } else {
      if (car_tag == MPZ) {
        // mpf_car = mpz_2_mpf(decode_mpz(cons_lst[0]));
        mpf_t *temp_mpf;
        mpz_t *temp_mpz_ptr = decode_mpz(cons_lst[0]);
        temp_mpf = mpz_2_mpf(temp_mpz_ptr);

        mpf_set(*mpf_car, *temp_mpf);
        mpf_clear(*temp_mpf);
      } else {
        // mpf_car = decode_mpf(cons_lst[0]);
        mpf_set(*mpf_car, *decode_mpf(cons_lst[0]));
      }

      if (mpf_cmp(*mpf_car, *result) < 0.0) {
        mpf_set(*result, *mpf_car);
      }
    }

    lst = cons_lst[1];
  }

  return encode_mpf(result);
}

void *apply_prim_expt_2(void *arg1, void *arg2) {
  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  if (arg1_tag != INT && arg1_tag != FLOAT_VAL && arg1_tag != MPF &&
      arg1_tag != MPZ) {
    assert_type(false, "Error in expt -> contract violation: first argument "
                       "should be integers or floating-point numbers!");
  }

  if (arg2_tag != INT && arg2_tag != FLOAT_VAL && arg2_tag != MPF &&
      arg2_tag != MPZ) {
    assert_type(false, "Error in expt -> contract violation: second argument "
                       "should be integers or floating-point numbers!");
  }

  if (arg1_tag == INT && arg2_tag == INT) {
    bool overflow_chk = false;
    const s64 base = decode_int(arg1);
    const s64 exponent = decode_int(arg2);

    if (base == 0 && !isPositive(exponent)) {
      // Handle error for (0 ^ negative exponent)
      // Return an appropriate error representation
      assert_type(false, "Error in expt -> contract violation: exponent cannot "
                         "be negative value when base is 0");
    }

    // to avoid unnecessary calculations
    if (!isPositive(exponent)) {
      // what to do about negative exponent?");
      // should we support them?
      // for now returning 0
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(0)));
    }
    // else if (exponent < 0) {
    //   return reinterpret_cast<void *>(encode_int(static_cast<s32>(0)));
    // }
    else if (exponent == 0) {
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(1)));
    } else if (base == 0) {
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(0)));
    } else if (base == 1) {
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(1)));
    } else if (base == -1) {
      int res = exponent % 2 == 0 ? 1 : -1;
      return reinterpret_cast<void *>(encode_int(static_cast<s32>(res)));
    } else {
      // calculating expt within s64 limits
      s64 result = 1;
      for (s64 i = 0; i < exponent; ++i) {
        if (result > INT_MAX / base || result < INT_MIN / base) {
          // Overflow detected, we should promote to mpz
          overflow_chk = true;
          break;
        }
        result *= base;
      }
      // PRINT("here!");
      // std::cout << result << std::endl;

      // if the loop didn't exit with a break,
      // it's should be safe to return the result
      if (!overflow_chk) {
        return reinterpret_cast<void *>(encode_int(static_cast<s32>(result)));
      } else {
        // Otherwise, promote to mpz
        PRINT("apply_prim_expt_2:  promoting to mpz");
        mpz_t result_mpz;
        mpz_init(result_mpz);

        // Convert 'base' from s64 to mpz_t
        mpz_set_si(result_mpz, base);

        mpz_pow_ui(result_mpz, result_mpz,
                   static_cast<unsigned long>(exponent));

        void *encoded_result = encode_mpz(&result_mpz);

        mpz_clear(result_mpz);

        return encoded_result;
      }
    }
  } else {
    assert_type(false, "Error in expt, -> contact violation: The values in the "
                       "list must be integers");
  }

  return nullptr;
}

void *apply_prim_expt_2_b4(void *arg1, void *arg2) {
  int val_tag = get_tag(arg1);
  int val_tag2 = get_tag(arg2);

  if (val_tag != INT && val_tag != FLOAT_VAL && val_tag != MPF &&
      val_tag != MPZ) {
    assert_type(false, "Error in expt -> contract violation: first argument "
                       "should be integers or floating-point numbers!");
  }

  if (val_tag2 != INT && val_tag2 != FLOAT_VAL && val_tag2 != MPF &&
      val_tag2 != MPZ) {
    assert_type(false, "Error in expt -> contract violation: second argument "
                       "should be integers or floating-point numbers!");
  }

  if (val_tag == MPZ && val_tag2 == MPZ) {
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);

    mpz_pow_ui(*result, *(decode_mpz(arg1)),
               (unsigned long int)mpz_get_ui(*(decode_mpz(arg2))));

    return encode_mpz(result);
  } else {
    // either one of them is mpf, so convert both of them to mpf
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_t *arg1_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_t *arg2_mpf = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));

    if (val_tag == MPZ)
      arg1_mpf = mpz_2_mpf(decode_mpz(arg1));
    else
      arg1_mpf = decode_mpf(arg1);

    if (val_tag2 == MPZ)
      arg2_mpf = mpz_2_mpf(decode_mpz(arg2));
    else
      arg2_mpf = decode_mpf(arg2);

    // converting mpf value to double
    double arg1_double = mpf_get_d(*arg1_mpf);
    double arg2_double = mpf_get_d(*arg2_mpf);

    mpf_set_d(*result, pow(arg1_double, arg2_double));

    return encode_mpf(result);
  }

  return nullptr;
}

inline void *apply_prim_expt(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(
        false,
        "Error in expt -> arity mismatch: number of arguments should be 2!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return apply_prim_expt_2(car, cadr);
}

inline void *apply_prim_sqrt_1(void *arg1) {
  int val_tag = get_tag(arg1);

  if (val_tag != MPF && val_tag != MPZ) {
    assert_type(false, "Error in sqrt -> contract violation: first argument "
                       "should be integers or floating-point numbers!");
  }

  if (val_tag == MPZ) {
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_sqrt(*result, *(mpz_2_mpf(decode_mpz(arg1))));

    return encode_mpf(result);
  } else if (val_tag == MPF) {
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_sqrt(*result, *(decode_mpf(arg1)));

    return encode_mpf(result);
  }

  return nullptr;
}

inline void *apply_prim_sqrt(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 1 || len_cnt > 1)
    assert_type(
        false,
        "Error in sqrt -> arity mismatch: number of arguments should be 1!");

  return apply_prim_sqrt_1(prim_car(lst));
}

inline void *apply_prim_remainder_2(void *arg1, void *arg2) {
  if (!is_integer_val(arg1) || !is_integer_val(arg2)) {
    // to see either of the numbers has fraction in it!
    assert_type(false, "Error in remainder -> contact violation: expected "
                       "integer argument!");
  }

  int arg1_tag = get_tag(arg1);
  int arg2_tag = get_tag(arg2);

  // Both arguments are integers
  if (arg1_tag == INT && arg2_tag == INT) {
    s64 res = decode_int(arg1) % decode_int(arg2);
    return reinterpret_cast<void *>(encode_int(static_cast<s32>(res)));
  } else if (arg1_tag == FLOAT_VAL && arg2_tag == FLOAT_VAL) {
    // wil implementt later!
    // we will allow float values. like 5.0 , 103.0,
    // and at this point we must have values like that
    // is_integer_val ensures that
  } else {
    // wil implementt later!
  }

  return nullptr;
}

inline void *apply_prim_remainder_2_b4(void *first, void *second) {
  void *result = nullptr;

  if (!is_integer_val(first) ||
      !is_integer_val(
          second)) { // to see either of the numbers has fraction in it!
    assert_type(false, "Error in remainder -> contact violation: expected "
                       "integer argument!");
  } else if (get_tag(first) == MPZ &&
             get_tag(second) == MPZ) { // both numbers are mpz
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_tdiv_r(*result, *(decode_mpz(first)), *(decode_mpz(second)));
    return encode_mpz(result);
  } else {
    // either one of them is mpf, so convert both of them to mpf
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_t *arg1_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_t *arg2_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));

    if (get_tag(first) == MPZ)
      arg1_mpz = decode_mpz(first);
    else
      arg1_mpz = mpf_2_mpz(decode_mpf(first));

    if (get_tag(second) == MPZ)
      arg2_mpz = decode_mpz(second);
    else
      arg2_mpz = mpf_2_mpz(decode_mpf(second));

    mpz_tdiv_r(*result, *arg1_mpz, *arg2_mpz);
    return encode_mpf(mpz_2_mpf(result));
  }

  return result;
}

inline void *apply_prim_remainder(void *lst) {
  if (numArgs < 4 || numArgs > 4)
    assert_type(false, "Error in remaind -> arity mismatch: number of "
                       "arguments should be 2!");

  void *first = arg_buffer[3];
  void *second = arg_buffer[4];

  return apply_prim_remainder_2(first, second);
}

inline void *apply_prim_quotient_2(void *first, void *second) {
  void *result = nullptr;
  if (!is_integer_val(first) ||
      !is_integer_val(
          second)) { // to see either of the numbers has fraction in it!
    assert_type(
        false,
        "Error in quotient -> contact violation: expected integer argument!");
  } else if (get_tag(first) == INT && get_tag(second) == INT) {
    int temp_ret = decode_int(first) / decode_int(second);
    result = reinterpret_cast<void *>(encode_int(static_cast<s32>(temp_ret)));
  } else if (get_tag(first) == MPZ &&
             get_tag(second) == MPZ) { // both numbers are mpz
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_tdiv_q(*result, *(decode_mpz(first)), *(decode_mpz(second)));
    return encode_mpz(result);
  } else {
    // either one of them is mpf, so convert both of them to mpf
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_t *arg1_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_t *arg2_mpz = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));

    if (get_tag(first) == MPZ)
      arg1_mpz = decode_mpz(first);
    else
      arg1_mpz = mpf_2_mpz(decode_mpf(first));

    if (get_tag(second) == MPZ)
      arg2_mpz = decode_mpz(second);
    else
      arg2_mpz = mpf_2_mpz(decode_mpf(second));

    mpz_tdiv_q(*result, *arg1_mpz, *arg2_mpz);
    return encode_mpf(mpz_2_mpf(result));
  }

  return result;
}

inline void *apply_prim_quotient(void *lst) {
  int len_cnt = length_counter(lst);
  if (len_cnt < 2 || len_cnt > 2)
    assert_type(false, "Error in quotient -> arity mismatch: number of "
                       "arguments should be 2!");

  void **cons_lst = decode_cons(lst);
  void *car = cons_lst[0];
  void *cadr = prim_car(cons_lst[1]);

  return apply_prim_quotient_2(car, cadr);
}

inline void *apply_prim_random_1(void *arg1) // random
{
  mpz_t *arg1_mpz = decode_mpz(arg1);

  if (mpz_sgn(*arg1_mpz) < 0)
    assert_type(false, "Error in random -> arity mismatch: arguments should "
                       "not be less than zero!");

  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result);

  gmp_randstate_t curstate;
  gmp_randinit_default(curstate);
  gmp_randseed_ui(curstate, time(NULL));

  mpz_t *rangeMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  // converting arg1_mpz to unsigned long
  mpz_init_set_ui(*rangeMpzVal, mpz_get_ui(*arg1_mpz));

  mpz_urandomm(*result, curstate, *rangeMpzVal);

  gmp_randclear(curstate);

  return encode_mpz(result);
}

inline void *apply_prim_random_2(void *arg1, void *arg2) // random
{
  mpz_t *arg1_mpz = decode_mpz(arg1);
  mpz_t *arg2_mpz = decode_mpz(arg2);

  if (mpz_sgn(*arg1_mpz) < 0 || mpz_sgn(*arg2_mpz) < 0)
    assert_type(false, "Error in random -> contact violation: arguments should "
                       "not be less than zero!");

  int cmp_res = mpz_cmp(*arg1_mpz, *arg2_mpz);

  if (cmp_res > 0 || cmp_res == 0)
    assert_type(false, "Error in random -> contact violation: first argument "
                       "should be less than the second argument!");

  mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  mpz_init(*result);

  gmp_randstate_t curstate;
  gmp_randinit_default(curstate);
  gmp_randseed_ui(curstate, time(NULL));

  mpz_t *rangeMpzVal = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
  // converting mpz to unsigned long
  mpz_init_set_ui(*rangeMpzVal, mpz_get_ui(*arg2_mpz) - mpz_get_ui(*arg1_mpz));
  mpz_urandomm(*result, curstate, *rangeMpzVal);
  mpz_add_ui(*result, *result, mpz_get_ui(*arg1_mpz));

  gmp_randclear(curstate);

  return encode_mpz(result);
}

inline void *apply_prim_random(void *lst) // random
{
  int len_cnt = length_counter(lst);
  if (len_cnt > 2)
    assert_type(false, "Error in random -> arity mismatch: more than 2 "
                       "argument is not supported!");

  if (len_cnt == 0) {
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_real_distribution<> distr(0.0, 1.0);

    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_set_d(*result, distr(gen));

    return encode_mpf(result);
  } else if (len_cnt == 1) {
    return apply_prim_random_1(prim_car(lst));
  } else if (len_cnt == 2) {
    return apply_prim_random_2(prim_car(lst), prim_car(prim_cdr(lst)));
  }

  return nullptr;
}

void *apply_prim_kont_u45to_u45lam_1(void *kont) { return kont; }

#pragma endregion

#pragma region PRINTING

std::string print_val(void *val) {
  switch (get_tag(val)) {
  case TRUE_VALUE:
    return "#t";
    break;
  case FALSE_VALUE:
    return "#f";
    break;
  case NULL_VALUE:
    return "(list)";
    break;
  // case SPL:
  //   if (is_null_val(val)) {
  //     // kludgy way of doing this!
  //     return "(list)";
  //   }
  //   else if (decode_bool(val)) {
  //     return "#t";
  //   } else {
  //     return "#f";
  //   }
  //   break;
  case HASH: {
    return print_hash(val);
    break;
  }
  case MPZ: {
    mpz_t *final_mpz = decode_mpz(val);
    std::string str(mpz_get_str(nullptr, 10, *final_mpz));
    return str;
    break;
  }
  case INT: {
    std::string str = std::to_string(decode_int(val));
    return str;

    break;
  }
  case FLOAT_VAL: {
    // std::cout << std::fixed << std::setprecision(1) << decode_float(val) <<
    // std::endl;

    // std::string str = std::to_string(decode_float(val));
    // return str;

    std::stringstream stream;
    stream << std::fixed << std::setprecision(1) << decode_float(val);
    return stream.str();

    break;
  }
  case STRING: {
    std::string str = "\"" + *(decode_str(val)) + "\"";
    return str;
    break;
  }
  case MPF: {
    mpf_t *final_mpf = decode_mpf(val);
    char buffer[1000];
    gmp_sprintf(buffer, "%.5Ff", *final_mpf);
    return std::string(buffer);
    break;
  }
  case CONS: {
    return print_cons(val);
    break;
  }
  case CLO: {
    return "#<procedure>";
    break;
  }
  }
  return "unknown_data_type_print_val";
}

#pragma endregion
void *halt;
// unsigned long long call_counter = 0;

void fhalt() {
  // std::cout << "In fhalt" << std::endl;
  std::cout << print_val(arg_buffer[2]) << std::endl;
  // std::cout << "Total # calls made (excluding prelude): " << call_counter
  // << std::endl;
  exit(0);
}

void fhalt_spec(void *_dummy_arg, void *result) {
  // std::cout << "In fhalt_spec" << std::endl;
  std::cout << print_val(result) << std::endl;
  exit(0);
}
