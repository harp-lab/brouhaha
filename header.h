#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <functional>

using namespace std;

/**
 *
 * @param val value for performing the masking
 * @return This macro masks off the three least significant bits of the input value by
 * performing a bitwise AND operation with the complement of a 7 - bit mask.
 */
#define MASK(val) (((u64)(val)) & ~(7ULL))

#define NULL_VALUE 0
#define ENV_ARRAY 1
#define RANDOM_VALUE 63 // 00111111

extern "C"
{
   typedef uint64_t u64;
   typedef int64_t s64;
   typedef uint32_t u32;
   typedef int32_t s32;

   enum DataType
   {
      INT = 0x1,
      BOOLEAN = 0x2,
      STRING = 0x3,
      FLOAT = 0x4,
      CLO = 0x5,
      ENV = 0x6,
      CONS = 0x7
   };

   s32 decode_int(u64 v)
   {
      return ((s32)((u32)(MASK(v) >> 32)));
   }

   u64 encode_int(s32 v)
   {
      return ((((u64)((u32)(v))) << 32) | INT);
   }

   s32 decode_bool(u64 v)
   {
      return ((s32)((u32)(MASK(v) >> 32)));
   }

   u64 encode_bool(s32 v)
   {
      return ((((u64)((u32)(v))) << 32) | BOOLEAN);
   }

   string decode_string(u64 v)
   {
      string *decoded = reinterpret_cast<string *>(MASK(v));
      string str = *decoded;
      delete decoded;
      return str;
   }

   u64 encode_string(const string *v)
   {
      return (((u64)(v)) | STRING);
   }

   u64 *decode_cons(u64 v)
   {
      return ((u64 *)MASK(v));
   }

   u64 encode_cons(u64 *v)
   {
      return (((u64)(v)) | CONS);
   }

   void **decode_clo(void *v)
   {
      return ((void **)MASK(v));
   }

   void *encode_clo(void **v)
   {
      return reinterpret_cast<void *>(((u64)(v)) | CLO);
   }

   u64 *decode_env_arr(u64 v)
   {
      return ((u64 *)MASK(v));
   }

   u64 encode_env_arr(u64 *v)
   {
      return (((u64)(v)) | ENV);
   }

   /**
    * This function takes a bool flag which is either 0 and 1 and
    * decides weather to continue running the program or exit the program
    *    if 0, the assertion is failed and we exit out of the program
    *    otherwise, we do nothing!
    * @param cond condition, either 0 or 1
    * @return void
    */
   void assert(bool cond, const char *msg)
   {
      if (!cond)
      {
         cout << "Assertion failed-> " << msg << endl;
         exit(1);
      }
   }

   /**
    * This function recursively prints a give value
    * @param val value we are trying to print
    * @return void
    */
   void recursive_prim_print(u64 val)
   {
      switch (val & 7)
      {
      case NULL_VALUE:
         cout << "'()";
         break;
      case INT:
         cout << decode_int(val);
         break;
      case BOOLEAN:
      {
         if (decode_bool(val) == 1)
            cout << "#t";
         else
            cout << "#f";

         break;
      }
      case STRING:
         cout << decode_string(val);
         break;
      case CLO:
         cout << "#<procedure>";
         break;
      case CONS:
      {
         u64 *cell = decode_cons(val);

         cout << "(cons ";
         recursive_prim_print(cell[0]);
         cout << " ";
         recursive_prim_print(cell[1]);
         cout << ")";

         break;
      }
      default:
         cout << "Error in recursive_prim_print: unknown prim value: " << val << endl;
      }
   }

   /**
    *
    * @param val value we are trying to print
    * @return void
    */
   void print_val(void *val)
   {
      u64 value = reinterpret_cast<u64>(val);
      cout << endl;
      recursive_prim_print(value);
      cout << endl;
   }

   /**
    * @return NULL_VALUE that is 0
    */
   void *encode_null()
   {
      return NULL_VALUE;
   }

   /**
    * This function creates a cons cell
    * @param arg1 represents the car value
    * @param arg2 represents the cdr value
    * @return an encoded cons cell.
    */
   void *prim_cons(void *arg1, void *arg2)
   {
      u64 car = reinterpret_cast<u64>(arg1);
      u64 cdr = reinterpret_cast<u64>(arg2);

      u64 *cell = (u64 *)(malloc(2 * sizeof(u64)));
      cell[0] = car;
      cell[1] = cdr;

      return reinterpret_cast<void *>(encode_cons(cell));
   }

   /**
    *
    * @param val is the cons cell
    * @return the car value of a cons cell
    */
   void *prim_car(void *val)
   {
      u64 ptr = reinterpret_cast<u64>(val);

      // cout << "tag: " << (ptr & 7) << endl;
      // cout << "first chk: " << ((ptr & 7) == CONS) << endl;

      assert((ptr & 7) == CONS,
             "Error in prim_car: expected a cons cell!");

      u64 *cell = decode_cons(ptr);
      return reinterpret_cast<void *>(cell[0]);
   }

   /**
    *
    * @param val is the cons cell
    * @return the cdr value of a cons cell
    */
   void *prim_cdr(void *val)
   {
      u64 ptr = reinterpret_cast<u64>(val);

      assert((ptr & 7) == CONS,
             "Error in prim_cdr: expected a cons cell!");

      u64 *cell = decode_cons(ptr);
      return reinterpret_cast<void *>(cell[1]);
   }

   /**
    *
    * @param lst argument list
    * @return a new cons cell created from arglist's first two elements using the prim_cons function
    *  */
   void *apply_prim_cons(void *lst)
   {
      void *val1 = prim_car(lst);
      void *val2 = prim_car(prim_cdr(lst));

      assert(prim_cdr(prim_cdr(lst)) == NULL_VALUE,
             "Error in apply_prim_cons: argument length is greater than 2!");

      return prim_cons(val1, val2);
   }

   /**
    *
    * @param lst argument list
    * @return a list represented by cons cells created from argument list
    *  */
   void *apply_prim_list(void *lst)
   {
      // checking if lst is empty
      if (lst == NULL_VALUE)
         return NULL_VALUE;

      void *val = prim_car(lst);
      void *rest = prim_cdr(lst);

      // checking if the first element is a cons cell
      if ((reinterpret_cast<u64>(val) & 7) == CONS)
      {
         // cout << "when cons...";
         // print_val(val);

         // making recursive call to handle the nested list
         void *nested_list = apply_prim_list(val);
         void *nested_rest = apply_prim_list(rest);

         return prim_cons(nested_list, nested_rest);
      }
      else
      {
         // handling the case, when it's not a cons cell
         // cout << "when not-cons...";
         // print_val(val);

         void *new_val = val;
         void *new_rest = apply_prim_list(rest);
         return prim_cons(new_val, new_rest);
      }
   }

   /**
    *
    * @param lst argument list (a cons cell)
    * @return the car value of that cell using the prim_car function
    *  */
   void *apply_prim_car(void *lst)
   {
      u64 temp_lst = reinterpret_cast<u64>(lst);

      assert((temp_lst & 7) == CONS,
             "Error in apply_prim_car: expected a cons cell!");

      u64 *cell = decode_cons(temp_lst);
      return prim_car(reinterpret_cast<void *>(cell[0]));
   }

   /**
    *
    * @param lst argument list (a cons cell)
    * @return the cdr value of that cell using the prim_cdr function
    *  */
   void *apply_prim_cdr(void *lst)
   {
      u64 temp_lst = reinterpret_cast<u64>(lst);

      assert((temp_lst & 7) == CONS,
             "Error in apply_prim_cdr: expected a cons cell!");

      u64 *cell = decode_cons(temp_lst);
      return prim_cdr(reinterpret_cast<void *>(cell[0]));
   }

   /**
    *
    * @param lst argument list (a cons cell)
    * @return the cdr value of car of that cell
    *  */
   void *apply_prim_cdar(void *lst)
   {
      u64 temp_lst = reinterpret_cast<u64>(lst);

      assert((temp_lst & 7) == CONS,
             "Error in apply_prim_cdar: expected a cons cell!");

      u64 *cell = decode_cons(temp_lst);
      return prim_cdr(prim_car(reinterpret_cast<void *>(cell[0])));
   }

   /**
    * This function performs the specified comparison operation on the given arguments.
    * @param lst argument list (a cons cell containing the arguments)
    * @param cmp_op comparison operator (a pointer to a function that takes two u64 values and returns a boolean)
    * @return true if the comparison is true, false otherwise!
    */
   void *apply_comparison_op(void *lst, bool (*cmp_op)(u64, u64))
   {
      assert(prim_cdr(prim_cdr(lst)) == NULL_VALUE,
             "Error in apply_comparison_op: argument length is greater than 2!");

      void *val1 = prim_car(lst);
      void *val2 = prim_car(prim_cdr(lst));

      u64 car = reinterpret_cast<u64>(val1);
      u64 cdr = reinterpret_cast<u64>(val2);

      if (cmp_op(car, cdr))
         return reinterpret_cast<void *>(encode_bool((s32)1));
      else
         return reinterpret_cast<void *>(encode_bool((s32)0));
   }

   /**
    * This function performs the specified comparison operation on the given arguments.
    * @param lst one argument list
    * @param cmp_op comparison operator (a function pointer that takes one u64 value and returns a boolean)
    * @return true if the comparison is true, false otherwise!
    */
   void *apply_opr(void *lst, bool (*apply_op)(u64))
   {
      void *val1 = prim_car(lst);
      void *val2 = prim_cdr(lst);

      if (prim_cdr(lst) != NULL_VALUE)
         cout << "Error in apply_opr: argument length is greater than 1.";

      u64 car = reinterpret_cast<u64>(val1);

      if (apply_op(car))
         return reinterpret_cast<void *>(encode_bool((s32)1));
      else
         return reinterpret_cast<void *>(encode_bool((s32)0));
   }

   /**
    * This function performs >= operation
    * @param x car value
    * @param y cdr value
    * @return true if car is greater than or equal the cdr value, false otherwise!
    */
   bool cmp_op_ge(u64 x, u64 y)
   {
      assert((x & 7) == INT,
             "Error in cmp_op_ge: expected Integer values!");

      assert((y & 7) == INT,
             "Error in cmp_op_ge: expected Integer values!");

      return x >= y;
   }

   /**
    * This function performs <= operation
    * @param x car value
    * @param y cdr value
    * @return true if car is less than or equal the cdr value, false otherwise!
    */
   bool cmp_op_le(u64 x, u64 y)
   {
      assert((x & 7) == INT,
             "Error in cmp_op_le: expected Integer values!");

      assert((y & 7) == INT,
             "Error in cmp_op_le: expected Integer values!");

      return x <= y;
   }

   /**
    * This function performs < operation
    * @param x car value
    * @param y cdr value
    * @return true if car is less than the cdr value, false otherwise!
    */
   bool cmp_op_less(u64 x, u64 y)
   {
      assert((x & 7) == INT,
             "Error in cmp_op_less: expected Integer values!");

      assert((y & 7) == INT,
             "Error in cmp_op_less: expected Integer values!");

      return x < y;
   }

   /**
    * This function performs > operation
    * @param x car value
    * @param y cdr value
    * @return true if car is greater than the cdr value, false otherwise!
    */
   bool cmp_op_greater(u64 x, u64 y)
   {
      assert((x & 7) == INT,
             "Error in cmp_op_greater: expected Integer values!");

      assert((y & 7) == INT,
             "Error in cmp_op_greater: expected Integer values!");

      return x > y;
   }

   /**
    * This function performs = operation
    * @param x car value
    * @param y cdr value
    * @return true if car is equal(==) to the cdr value, false otherwise!
    */
   bool cmp_op_equal(u64 x, u64 y)
   {
      assert((x & 7) == INT,
             "Error in cmp_op_equal: expected Integer values!");

      assert((y & 7) == INT,
             "Error in cmp_op_equal: expected Integer values!");

      return x == y;
   }

   /**
    * This function performs odd? operation
    * @param x value we will be performing the operation on
    * @return true if the value is odd, false otherwise!
    *  */
   bool apply_op_odd(u64 x)
   {
      assert((x & 7) == INT,
             "Error in apply_op_odd: expected an Integer value!");

      return decode_int(x) % 2 != 0;
   }

   /**
    * This function performs even? operation
    * @param x value we will be performing the operation on
    * @return true if the value is even, false otherwise!
    *  */
   bool apply_op_even(u64 x)
   {
      assert((x & 7) == INT,
             "Error in apply_op_even: expected an Integer value!");

      return decode_int(x) % 2 == 0;
   }

   /**
    * This function performs positive? operation
    * @param x value we will be performing the operation on
    * @return true if the value is positive, false otherwise!
    *  */
   bool apply_op_positive(u64 x)
   {
      assert((x & 7) == INT,
             "Error in apply_op_positive: expected an Integer value!");

      return decode_int(x) > 0 ? 1 : 0;
   }

   /**
    * This function performs negative? operation
    * @param x value we will be performing the operation on
    * @return true if the value is negative, false otherwise!
    *  */
   bool apply_op_negative(u64 x)
   {
      assert((x & 7) == INT,
             "Error in apply_op_negative: expected an Integer value!");

      return decode_int(x) < 0 ? 1 : 0;
   }

   /**
    *
    * @param lst argument list (a cons cell)
    * @return true if the list is null, false otherwise!
    *  */
   void *prim_null_u63(void *lst)
   {
      u64 temp_lst = reinterpret_cast<u64>(lst);

      assert((temp_lst & 7) == CONS,
             "Error in apply_prim_null_u63: expected a cons cell!");

      u64 *cell = decode_cons(temp_lst);
      u64 car = cell[0];

      if (car == NULL_VALUE)
         return reinterpret_cast<void *>(encode_bool((s32)1));
      else
         return reinterpret_cast<void *>(encode_bool((s32)0));
   }

   /**
    * This function performs eq? operation
    * @param lst argument list (a cons cell)
    * @return true if car and cdr values are equal, false otherwise!
    *  */
   void *prim_eq_u63(void *lst)
   {
      assert(prim_cdr(prim_cdr(lst)) == NULL_VALUE,
             "Error in apply_prim_eq_u63: argument length is greater than 2!");

      void *val1 = prim_car(lst);
      void *val2 = prim_car(prim_cdr(lst));

      u64 car = reinterpret_cast<u64>(val1);
      u64 cdr = reinterpret_cast<u64>(val2);

      if (((car & 7) == STRING) && ((cdr & 7) == STRING))
      {
         if (decode_string(car) == decode_string(cdr))
            return reinterpret_cast<void *>(encode_bool((s32)1));
         else
            return reinterpret_cast<void *>(encode_bool((s32)0));
      }
      else
      {
         if (car == cdr)
            return reinterpret_cast<void *>(encode_bool((s32)1));
         else
            return reinterpret_cast<void *>(encode_bool((s32)0));
      }
   }

   /**
    * This function performs equal? operation
    * @param lst argument list (a cons cell)
    * @return true if car and cdr values are equal, false otherwise!
    *  */
   void *apply_prim_equal_u63(void *lst)
   {
      assert(prim_cdr(prim_cdr(lst)) == NULL_VALUE,
             "Error in apply_prim_equal_u63: argument length is greater than 2!");

      void *val1 = prim_car(lst);
      void *val2 = prim_car(prim_cdr(lst));

      u64 car = reinterpret_cast<u64>(val1);
      u64 cdr = reinterpret_cast<u64>(val2);

      if (((car & 7) == STRING) && ((cdr & 7) == STRING))
      {
         if (decode_string(car) == decode_string(cdr))
            return reinterpret_cast<void *>(encode_bool((s32)1));
         else
            return reinterpret_cast<void *>(encode_bool((s32)0));
      }
      else
      {
         if (car == cdr)
            return reinterpret_cast<void *>(encode_bool((s32)1));
         else
            return reinterpret_cast<void *>(encode_bool((s32)0));
      }
   }

   /**
    * This function performs = operation
    * @param lst argument list (a cons cell)
    * @return true if car and cdr value is equal (==), false otherwise!
    *  */
   void *apply_prim__u61(void *lst)
   {
      return apply_comparison_op(lst, &cmp_op_equal); // for == operation
   }

   /**
    * This function performs > operation
    * @param lst argument list (a cons cell)
    * @return true if car is greater than the cdr value, false otherwise!
    *  */
   void *apply_prim__u62(void *lst)
   {
      return apply_comparison_op(lst, &cmp_op_greater); // for > operation
   }

   /**
    * This function performs < operation
    * @param lst argument list (a cons cell)
    * @return true if car is less than the cdr value, false otherwise!
    *  */
   void *apply_prim__u60(void *lst)
   {
      return apply_comparison_op(lst, &cmp_op_less); // for < operation
   }

   /**
    * This function performs >= operation
    * @param lst argument list (a cons cell)
    * @return true if car is greater than or equal the cdr value, false otherwise!
    *  */
   void *apply_prim__u62_u61(void *lst)
   {
      return apply_comparison_op(lst, &cmp_op_ge); // for >= operation
   }

   /**
    * This function performs <= operation
    * @param lst argument list (a cons cell)
    * @return true if car is less than or equal the cdr value, false otherwise!
    *  */
   void *apply_prim__u60_u61(void *lst)
   {
      return apply_comparison_op(lst, &cmp_op_le); // for <= operation
   }

   /**
    * This function performs odd? operation
    * @param lst one argument list (a cons cell)
    * @return true if the value is odd, false otherwise!
    *  */
   void *apply_prim_odd_u63(void *lst)
   {
      return apply_opr(lst, &apply_op_odd); // for odd? operation
   }

   /**
    * This function performs even? operation
    * @param lst one argument list (a cons cell)
    * @return true if the value is even, false otherwise!
    *  */
   void *prim_even_u63(void *lst)
   {
      return apply_opr(lst, &apply_op_even); // for even? operation
   }

   /**
    * This function performs positive? operation
    * @param lst one argument list (a cons cell)
    * @return true if the value is positive, false otherwise!
    *  */
   void *apply_prim_positive_u63(void *lst)
   {
      return apply_opr(lst, &apply_op_positive); // for positive? operation
   }

   /**
    * This function performs negative? operation
    * @param lst one argument list (a cons cell)
    * @return true if the value is negative, false otherwise!
    *  */
   void *apply_prim_negative_u63(void *lst)
   {
      return apply_opr(lst, &apply_op_negative); // for negative? operation
   }

   /**
    * Performs + operation
    * @param val is the cons cell
    * @return the summation of values in the cons cell
    */
   void *apply_prim__u43(void *val)
   {
      u64 ptr = reinterpret_cast<u64>(val);
      u64 sum = 0;

      while ((ptr & 7) == CONS)
      {
         u64 *cell = decode_cons(ptr);

         u64 temp_val = reinterpret_cast<u64>(cell[0]);

         assert((temp_val & 7) == INT,
                "Error in apply_prim_equal_u63: argument is not an Integer!");

         sum += decode_int(temp_val);
         ptr = cell[1];
      }

      return reinterpret_cast<void *>(encode_int((s32)sum));
   }

   /**
    * Performs * operation
    * @param val is the cons cell
    * @return the multiplication of values in the cons cell
    */
   void *apply_prim__u42(void *val)
   {
      u64 ptr = reinterpret_cast<u64>(val);

      u64 *cell = decode_cons(ptr);

      if (cell == NULL_VALUE)
         return reinterpret_cast<void *>(encode_int((s32)0));
      else
      {
         u64 temp_val = reinterpret_cast<u64>(cell[0]);

         assert((temp_val & 7) == INT,
                "Error in apply_prim__u42: argument is not an Integer!");

         u64 res = decode_int(temp_val); // get car value

         // if car is zero return 0
         if (res == 0)
         {
            return reinterpret_cast<void *>(encode_int((s32)0));
         }
         else
         {
            u64 temp_res = 1;
            while ((ptr & 7) == CONS)
            {
               u64 *temp_cell = decode_cons(ptr);

               temp_val = reinterpret_cast<u64>(temp_cell[0]);

               assert((temp_val & 7) == INT,
                      "Error in apply_prim__u42: argument is not an Integer!");

               temp_res *= decode_int(temp_val);
               ptr = temp_cell[1];
            }

            return reinterpret_cast<void *>(encode_int((s32)temp_res));
         }
      }
   }

   /**
    * Performs - operation
    * @param val is the cons cell
    * @return the substraction of values in the cons cell
    */
   void *apply_prim__u45(void *val)
   {
      u64 ptr = reinterpret_cast<u64>(val);

      u64 *cell = decode_cons(ptr);
      u64 temp_val = reinterpret_cast<u64>(cell[0]);

      assert((temp_val & 7) == INT,
             "Error in apply_prim__u45: argument is not an Integer!");

      u64 cdr = cell[1];

      u64 car_value = decode_int(temp_val);

      if (cdr == NULL_VALUE)
      {
         u64 res = car_value * -1;
         return reinterpret_cast<void *>(encode_int((s32)res));
      }

      u64 result = car_value;

      while (cdr != NULL_VALUE)
      {
         u64 *temp_cell = decode_cons(cdr);

         temp_val = reinterpret_cast<u64>(temp_cell[0]);

         assert((temp_val & 7) == INT,
                "Error in apply_prim__u45: argument is not an Integer!");

         result -= decode_int(temp_val);

         cdr = temp_cell[1];
      }

      return reinterpret_cast<void *>(encode_int((s32)result));
   }

   /* helper function to count the length of a list */
   int length_counter(void *lst)
   {
      if (lst == NULL_VALUE)
         return 0;

      void *val = prim_car(lst);
      void *rest = prim_cdr(lst);

      if ((reinterpret_cast<u64>(val) & 7) == CONS)
         return length_counter(val) + length_counter(rest);
      else
         return 1 + length_counter(rest);
   }
   /**
    * @param lst is a list
    * @return the length of the list
    */
   void *apply_prim_length(void *lst)
   {
      return reinterpret_cast<void *>(encode_int((s32)length_counter(prim_car(lst))));
   }

   /**
    * This function allocates space for the environment
    * @param envlength space length.
    * @return the encoded env array.
    */
   void *allocate_env_space(u64 envlength)
   {
      // const u64 temp_env_len = decode_int(envlength);
      u64 temp_env_len = decode_int(envlength);

      u64 *env_array = (u64 *)(malloc((temp_env_len + 1) * sizeof(u64)));

      // to distinguish env array from other data types
      env_array[0] = (temp_env_len << 3) | ENV_ARRAY;

      for (u64 i = 1; i <= temp_env_len; i++)
      {
         env_array[i] = ((u64)0); // initial assignment with a dummy value: 0
      }

      return reinterpret_cast<void *>(encode_env_arr(env_array));
   }

   /**
    * This function creates a closure instance (ptr + env)
    * @param fptr is assigned to index 0
    * @param env is assigned to index 1
    * @return the encoded closure object.
    */
   void *make_closure(void *fptr, void *env)
   {
      // assgning closure pointer
      u64 *obj = (u64 *)(malloc(2 * sizeof(u64))); // new u64[2];

      u64 ptr = reinterpret_cast<u64>(fptr);
      u64 temp_env = reinterpret_cast<u64>(env);

      assert((temp_env & 7) == ENV,
             "Error in make_closure: runtime error expected an env array!");

      obj[0] = ptr;
      obj[1] = temp_env;

      return reinterpret_cast<void *>(encode_clo(obj));
   }

   void **alloc_clo(void *fptr, int num)
   {
      void **obj = (void **)(malloc((num + 1) * sizeof(void *)));

      obj[0] = fptr;

      return obj;
   }

   /**
    * This function sets up the environment part of a closure instance
    * @param arr is the environment array
    * @param idx the index where we will assign the value
    * @param val the value we will assign
    * @return null value to avoid warning
    */
   void *set_env(void *arr, u64 idx, void *val)
   {
      // cout << "position: " << idx << " val: " << val << endl;
      u64 env_arr = reinterpret_cast<u64>(arr);

      assert((env_arr & 7) == ENV,
             "Error in set_env: runtime error expected an env array!");

      u64 value = reinterpret_cast<u64>(val);

      u64 idx_val = decode_int(idx);

      decode_env_arr(env_arr)[idx_val] = value;

      return reinterpret_cast<void *>(NULL_VALUE);
   }

   /**
    * This function returns value from the environment of a closure
    * @param env environment of closure instance
    * @param idx specific index value that we will return
    * @return the actual value that was assignemnt to the index
    */
   void *get_env_value(void *env, u64 idx)
   {
      u64 env_arr = reinterpret_cast<u64>(env);

      assert((env_arr & 7) == ENV,
             "Error in get_env_value: runtime error expected an env array!");

      u64 idx_val = decode_int(idx);

      u64 val = decode_env_arr(env_arr)[idx_val];

      return reinterpret_cast<void *>(val);
   }

   /**
    *
    * @param val is the closure pointer
    * @return the environment of a closure instance
    */
   void *get_env(void *val)
   {
      u64 temp_val = reinterpret_cast<u64>(val);

      assert((temp_val & 7) == CLO,
             "Error in get_env: expected a cons cell!");

      u64 *env = decode_clo(temp_val);
      return reinterpret_cast<void *>(env[1]);
   }

   /**
    *
    * @param val is the closure object
    * @return the pointer of a closure instance
    */
   void *get_closure_ptr(void *val)
   {
      u64 obj = reinterpret_cast<u64>(val);

      assert((obj & 7) == CLO,
             "Error in get_closure_ptr: expected a cons cell!");

      u64 *clo_obj = decode_clo(obj);

      return reinterpret_cast<void *>(clo_obj[0]);
   }

   /**
    * @param val the value we are going to check
    * @return true, if the value is not false
    */
   void *is_true(void *val)
   {
      u64 obj = reinterpret_cast<u64>(val);

      if ((obj & 7) == BOOLEAN)
      {
         if (decode_bool(obj) == 0)
            return reinterpret_cast<void *>(0);
         else
            return reinterpret_cast<void *>(1);
      }
      else
         return reinterpret_cast<void *>(1);
   }

   /**
    * If this function is called, when have our final result in the arglist
    * @param arglist final output list
    * @return prints the (car arglist) and exits out of the program
    */
   void *apply_prim_halt(void *arglist)
   {
      // cout << "In apply_prim_halt: ";
      // print_val(arglist);
      // cout << "Final return value:";

      // u64 value = reinterpret_cast<u64>(prim_car(arglist));
      // cout<< (value & 7) <<endl;
      // cout << prim_car(arglist) << endl;

      print_val(prim_car(arglist));
      exit(0);
   }

   void *halt;
   // vector<void *> arg_buffer;
   void *arg_buffer[999];
   int arg_num;

   void print_arg_buffer()
   {
      cout << "buffer size: " << arg_buffer.size() << endl;
      for (int i = 0; i < arg_num; ++i)
      {
         cout << reinterpret_cast<u64>(arg_buffer[i]) << " ";
      }
      cout << endl
           << endl;
   }

   /**
    * The function should be called as the last function in our program
    * @param env environment we don't care about
    * @param arglist final output list
    * @return prints the arg_buffer[1] as final answer and exits out of the program
    */
   void *fhalt()
   {
      // cout << "in fhalt" << endl;
      // print_arg_buffer();

      cout << "Final return value: ";
      // print_val(prim_car(prim_cdr(arglist)));
      print_val(arg_buffer[1]);

      arg_buffer.clear();
      exit(1);
   }
}