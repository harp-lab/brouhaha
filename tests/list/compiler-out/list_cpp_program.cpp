#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8890;
void* bool_t8884;
void* int8891;
void* bool_f8885;
void* int8880;



// declaring functions at the top
void _u43_fptr(); // +
void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr(); // -
void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr(); // *
void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr(); // /
void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr(); // =
void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr(); // >
void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr(); // <
void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr(); // <=
void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr(); // >=
void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr(); // modulo
void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr(); // null?
void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr(); // equal?
void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr(); // eq?
void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr(); // cons
void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr(); // car
void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr(); // cdr
void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr(); // float->int
void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr(); // int->float
void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr(); // hash
void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr(); // hash-ref
void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr(); // hash-set
void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr(); // hash-keys
void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr(); // hash-has-key?
void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr(); // hash-count
void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr(); // set
void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr(); // set->list
void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr(); // list->set
void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr(); // set-add
void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr(); // set-member?
void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr(); // set-remove
void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr(); // set-count
void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr(); // string?
void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr(); // string-length
void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr(); // string-ref
void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr(); // substring
void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr(); // string-append
void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr(); // string->list
void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr(); // exact-floor
void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr(); // exact-ceiling
void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr(); // exact-round
void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr(); // abs
void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr(); // max
void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr(); // min
void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr(); // expt
void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr(); // sqrt
void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr(); // remainder
void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr(); // quotient
void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr(); // random
void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr(); // symbol?
void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr(); // pair?
void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr(); // positive?
void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr(); // negative?
void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void even_u63_fptr(); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8835_fptr(); // lam8835
void* lam8835 = encode_clo(alloc_clo(lam8835_fptr, 0));

void member_fptr(); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8839_fptr(); // lam8839
void* lam8839 = encode_clo(alloc_clo(lam8839_fptr, 0));

void length_fptr(); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8842_fptr(); // lam8842
void* lam8842 = encode_clo(alloc_clo(lam8842_fptr, 0));

void lam8844_fptr(); // lam8844
void* lam8844 = encode_clo(alloc_clo(lam8844_fptr, 0));

void map_fptr(); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8847_fptr(); // lam8847
void* lam8847 = encode_clo(alloc_clo(lam8847_fptr, 0));

void lam8849_fptr(); // lam8849
void* lam8849 = encode_clo(alloc_clo(lam8849_fptr, 0));

void filter_fptr(); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8853_fptr(); // lam8853
void* lam8853 = encode_clo(alloc_clo(lam8853_fptr, 0));

void foldl_fptr(); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8856_fptr(); // lam8856
void* lam8856 = encode_clo(alloc_clo(lam8856_fptr, 0));

void foldr_fptr(); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8861_fptr(); // lam8861
void* lam8861 = encode_clo(alloc_clo(lam8861_fptr, 0));

void append1_fptr(); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8864_fptr(); // lam8864
void* lam8864 = encode_clo(alloc_clo(lam8864_fptr, 0));

void lam8866_fptr(); // lam8866
void* lam8866 = encode_clo(alloc_clo(lam8866_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8869_fptr(); // lam8869
void* lam8869 = encode_clo(alloc_clo(lam8869_fptr, 0));

void take_u45helper_fptr(); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void call_fptr(); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8874_fptr(); // lam8874
void* lam8874 = encode_clo(alloc_clo(lam8874_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));




// pre-decoding global symbols
auto decoded_set_u45add = reinterpret_cast<void (*)()>((decode_clo(set_u45add))[0]);
auto decoded_random = reinterpret_cast<void (*)()>((decode_clo(random_brouhaha))[0]);
auto decoded__u45 = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
auto decoded__u61 = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
auto decoded_exact_u45round = reinterpret_cast<void (*)()>((decode_clo(exact_u45round))[0]);
auto decoded_list_u45_u62set = reinterpret_cast<void (*)()>((decode_clo(list_u45_u62set))[0]);
auto decoded_member_u63 = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
auto decoded__u60 = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
auto decoded_set_u45_u62list = reinterpret_cast<void (*)()>((decode_clo(set_u45_u62list))[0]);
auto decoded_foldl = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
auto decoded_sqrt = reinterpret_cast<void (*)()>((decode_clo(sqrt_brouhaha))[0]);
auto decoded_cons = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
auto decoded_symbol_u63 = reinterpret_cast<void (*)()>((decode_clo(symbol_u63))[0]);
auto decoded_max = reinterpret_cast<void (*)()>((decode_clo(max))[0]);
auto decoded__u47 = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
auto decoded_car = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
auto decoded_int_u45_u62float = reinterpret_cast<void (*)()>((decode_clo(int_u45_u62float))[0]);
auto decoded_filter = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
auto decoded__u62_u61 = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
auto decoded__u62 = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
auto decoded_set_u45member_u63 = reinterpret_cast<void (*)()>((decode_clo(set_u45member_u63))[0]);
auto decoded_take_u45helper = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
auto decoded_call = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
auto decoded__u60_u61 = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
auto decoded_float_u45_u62int = reinterpret_cast<void (*)()>((decode_clo(float_u45_u62int))[0]);
auto decoded_append1 = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
auto decoded_list_u45ref = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
auto decoded_hash_u45count = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
auto decoded_hash_u45keys = reinterpret_cast<void (*)()>((decode_clo(hash_u45keys))[0]);
auto decoded__u43 = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
auto decoded_min = reinterpret_cast<void (*)()>((decode_clo(min))[0]);
auto decoded_brouhaha_main = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
auto decoded_equal_u63 = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
auto decoded_exact_u45floor = reinterpret_cast<void (*)()>((decode_clo(exact_u45floor))[0]);
auto decoded_positive_u63 = reinterpret_cast<void (*)()>((decode_clo(positive_u63))[0]);
auto decoded__u42 = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
auto decoded_append = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
auto decoded_reverse = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
auto decoded_hash_u45has_u45key_u63 = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
auto decoded_reverse_u45helper = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
auto decoded_string_u45ref = reinterpret_cast<void (*)()>((decode_clo(string_u45ref))[0]);
auto decoded_hash_u45set = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
auto decoded_length = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
auto decoded_eq_u63 = reinterpret_cast<void (*)()>((decode_clo(eq_u63))[0]);
auto decoded_null_u63 = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
auto decoded_set_u45remove = reinterpret_cast<void (*)()>((decode_clo(set_u45remove))[0]);
auto decoded_abs = reinterpret_cast<void (*)()>((decode_clo(abs_brouhaha))[0]);
auto decoded_set_u45count = reinterpret_cast<void (*)()>((decode_clo(set_u45count))[0]);
auto decoded_map = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
auto decoded_modulo = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
auto decoded_foldr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
auto decoded_drop = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
auto decoded_hash = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
auto decoded_string_u63 = reinterpret_cast<void (*)()>((decode_clo(string_u63))[0]);
auto decoded_take = reinterpret_cast<void (*)()>((decode_clo(take))[0]);
auto decoded_expt = reinterpret_cast<void (*)()>((decode_clo(expt))[0]);
auto decoded_quotient = reinterpret_cast<void (*)()>((decode_clo(quotient))[0]);
auto decoded_even_u63 = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
auto decoded_negative_u63 = reinterpret_cast<void (*)()>((decode_clo(negative_u63))[0]);
auto decoded_string_u45_u62list = reinterpret_cast<void (*)()>((decode_clo(string_u45_u62list))[0]);
auto decoded_string_u45append = reinterpret_cast<void (*)()>((decode_clo(string_u45append))[0]);
auto decoded_substring = reinterpret_cast<void (*)()>((decode_clo(substring))[0]);
auto decoded_exact_u45ceiling = reinterpret_cast<void (*)()>((decode_clo(exact_u45ceiling))[0]);
auto decoded_odd_u63 = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
auto decoded_member = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
auto decoded_remainder = reinterpret_cast<void (*)()>((decode_clo(remainder_brouhaha))[0]);
auto decoded_set = reinterpret_cast<void (*)()>((decode_clo(set))[0]);
auto decoded_string_u45length = reinterpret_cast<void (*)()>((decode_clo(string_u45length))[0]);
auto decoded_hash_u45ref = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
auto decoded_cdr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
auto decoded_list = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
auto decoded_pair_u63 = reinterpret_cast<void (*)()>((decode_clo(pair_u63))[0]);


void _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8894 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8892 = prim_car(lst);
void* const lst8895 = prim_cdr(lst);
void* const x8893 = apply_prim__u43(lst8895);
arg_buffer[1] = kont8892;
arg_buffer[2] = x8893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8892))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8892 = arg_buffer[2];
void* const x8893 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8892;
arg_buffer[2] = x8893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8892))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8898 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8896 = prim_car(lst);
void* const lst8899 = prim_cdr(lst);
void* const x8897 = apply_prim__u45(lst8899);
arg_buffer[1] = kont8896;
arg_buffer[2] = x8897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8896))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8896 = arg_buffer[2];
void* const x8897 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8896;
arg_buffer[2] = x8897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8896))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u42_fptr() // * 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8902 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8900 = prim_car(lst);
void* const lst8903 = prim_cdr(lst);
void* const x8901 = apply_prim__u42(lst8903);
arg_buffer[1] = kont8900;
arg_buffer[2] = x8901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8900))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8900 = arg_buffer[2];
void* const x8901 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8900;
arg_buffer[2] = x8901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8900))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8906 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8904 = prim_car(lst);
void* const lst8907 = prim_cdr(lst);
void* const x8905 = apply_prim__u47(lst8907);
arg_buffer[1] = kont8904;
arg_buffer[2] = x8905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8904))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8904 = arg_buffer[2];
void* const x8905 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8904;
arg_buffer[2] = x8905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8904))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8910 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8908 = prim_car(lst);
void* const lst8911 = prim_cdr(lst);
void* const x8909 = apply_prim__u61(lst8911);
arg_buffer[1] = kont8908;
arg_buffer[2] = x8909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8908))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8908 = arg_buffer[2];
void* const x8909 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8908;
arg_buffer[2] = x8909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8908))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u62_fptr() // > 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8914 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8912 = prim_car(lst);
void* const lst8915 = prim_cdr(lst);
void* const x8913 = apply_prim__u62(lst8915);
arg_buffer[1] = kont8912;
arg_buffer[2] = x8913;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8912))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8912 = arg_buffer[2];
void* const x8913 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8912;
arg_buffer[2] = x8913;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8912))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u60_fptr() // < 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8918 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8916 = prim_car(lst);
void* const lst8919 = prim_cdr(lst);
void* const x8917 = apply_prim__u60(lst8919);
arg_buffer[1] = kont8916;
arg_buffer[2] = x8917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8916))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8916 = arg_buffer[2];
void* const x8917 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8916;
arg_buffer[2] = x8917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8916))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u60_u61_fptr() // <= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8922 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8920 = prim_car(lst);
void* const lst8923 = prim_cdr(lst);
void* const x8921 = apply_prim__u60_u61(lst8923);
arg_buffer[1] = kont8920;
arg_buffer[2] = x8921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8920))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8920 = arg_buffer[2];
void* const x8921 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8920;
arg_buffer[2] = x8921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8920))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u62_u61_fptr() // >= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8926 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8924 = prim_car(lst);
void* const lst8927 = prim_cdr(lst);
void* const x8925 = apply_prim__u62_u61(lst8927);
arg_buffer[1] = kont8924;
arg_buffer[2] = x8925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8924))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8924 = arg_buffer[2];
void* const x8925 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8924;
arg_buffer[2] = x8925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8924))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void modulo_fptr() // modulo 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8930 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8928 = prim_car(lst);
void* const lst8931 = prim_cdr(lst);
void* const x8929 = apply_prim_modulo(lst8931);
arg_buffer[1] = kont8928;
arg_buffer[2] = x8929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8928))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8928 = arg_buffer[2];
void* const x8929 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8928;
arg_buffer[2] = x8929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8928))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8934 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8932 = prim_car(lst);
void* const lst8935 = prim_cdr(lst);
void* const x8933 = apply_prim_null_u63(lst8935);
arg_buffer[1] = kont8932;
arg_buffer[2] = x8933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8932))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8932 = arg_buffer[2];
void* const x8933 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8932;
arg_buffer[2] = x8933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8932))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void equal_u63_fptr() // equal? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8938 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8936 = prim_car(lst);
void* const lst8939 = prim_cdr(lst);
void* const x8937 = apply_prim_equal_u63(lst8939);
arg_buffer[1] = kont8936;
arg_buffer[2] = x8937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8936))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8936 = arg_buffer[2];
void* const x8937 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8936;
arg_buffer[2] = x8937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8936))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void eq_u63_fptr() // eq? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8942 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8940 = prim_car(lst);
void* const lst8943 = prim_cdr(lst);
void* const x8941 = apply_prim_eq_u63(lst8943);
arg_buffer[1] = kont8940;
arg_buffer[2] = x8941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8940))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8940 = arg_buffer[2];
void* const x8941 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8940;
arg_buffer[2] = x8941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8940))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8946 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8944 = prim_car(lst);
void* const lst8947 = prim_cdr(lst);
void* const x8945 = apply_prim_cons(lst8947);
arg_buffer[1] = kont8944;
arg_buffer[2] = x8945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8944))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8944 = arg_buffer[2];
void* const x8945 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8944;
arg_buffer[2] = x8945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8944))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8950 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8948 = prim_car(lst);
void* const lst8951 = prim_cdr(lst);
void* const x8949 = apply_prim_car(lst8951);
arg_buffer[1] = kont8948;
arg_buffer[2] = x8949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8948))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8948 = arg_buffer[2];
void* const x8949 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8948;
arg_buffer[2] = x8949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8948))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8954 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8952 = prim_car(lst);
void* const lst8955 = prim_cdr(lst);
void* const x8953 = apply_prim_cdr(lst8955);
arg_buffer[1] = kont8952;
arg_buffer[2] = x8953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8952))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8952 = arg_buffer[2];
void* const x8953 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8952;
arg_buffer[2] = x8953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8952))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void float_u45_u62int_fptr() // float->int 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8958 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8956 = prim_car(lst);
void* const lst8959 = prim_cdr(lst);
void* const x8957 = apply_prim_float_u45_u62int(lst8959);
arg_buffer[1] = kont8956;
arg_buffer[2] = x8957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8956))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8956 = arg_buffer[2];
void* const x8957 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8956;
arg_buffer[2] = x8957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8956))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8962 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8960 = prim_car(lst);
void* const lst8963 = prim_cdr(lst);
void* const x8961 = apply_prim_int_u45_u62float(lst8963);
arg_buffer[1] = kont8960;
arg_buffer[2] = x8961;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8960))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8960 = arg_buffer[2];
void* const x8961 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8960;
arg_buffer[2] = x8961;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8960))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8966 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8964 = prim_car(lst);
void* const lst8967 = prim_cdr(lst);
void* const x8965 = apply_prim_hash(lst8967);
arg_buffer[1] = kont8964;
arg_buffer[2] = x8965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8964))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8964 = arg_buffer[2];
void* const x8965 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8964;
arg_buffer[2] = x8965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8964))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45ref_fptr() // hash-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8970 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8968 = prim_car(lst);
void* const lst8971 = prim_cdr(lst);
void* const x8969 = apply_prim_hash_u45ref(lst8971);
arg_buffer[1] = kont8968;
arg_buffer[2] = x8969;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8968))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8968 = arg_buffer[2];
void* const x8969 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8968;
arg_buffer[2] = x8969;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8968))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45set_fptr() // hash-set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8974 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8972 = prim_car(lst);
void* const lst8975 = prim_cdr(lst);
void* const x8973 = apply_prim_hash_u45set(lst8975);
arg_buffer[1] = kont8972;
arg_buffer[2] = x8973;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8972))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8972 = arg_buffer[2];
void* const x8973 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8972;
arg_buffer[2] = x8973;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8972))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45keys_fptr() // hash-keys 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8978 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8976 = prim_car(lst);
void* const lst8979 = prim_cdr(lst);
void* const x8977 = apply_prim_hash_u45keys(lst8979);
arg_buffer[1] = kont8976;
arg_buffer[2] = x8977;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8976))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8976 = arg_buffer[2];
void* const x8977 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8976;
arg_buffer[2] = x8977;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8976))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8982 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8980 = prim_car(lst);
void* const lst8983 = prim_cdr(lst);
void* const x8981 = apply_prim_hash_u45has_u45key_u63(lst8983);
arg_buffer[1] = kont8980;
arg_buffer[2] = x8981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8980))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8980 = arg_buffer[2];
void* const x8981 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont8980;
arg_buffer[2] = x8981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8980))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45count_fptr() // hash-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8986 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8984 = prim_car(lst);
void* const lst8987 = prim_cdr(lst);
void* const x8985 = apply_prim_hash_u45count(lst8987);
arg_buffer[1] = kont8984;
arg_buffer[2] = x8985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8984))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8984 = arg_buffer[2];
void* const x8985 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont8984;
arg_buffer[2] = x8985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8984))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8990 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8988 = prim_car(lst);
void* const lst8991 = prim_cdr(lst);
void* const x8989 = apply_prim_set(lst8991);
arg_buffer[1] = kont8988;
arg_buffer[2] = x8989;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8988))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8988 = arg_buffer[2];
void* const x8989 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont8988;
arg_buffer[2] = x8989;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8988))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45_u62list_fptr() // set->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8994 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8992 = prim_car(lst);
void* const lst8995 = prim_cdr(lst);
void* const x8993 = apply_prim_set_u45_u62list(lst8995);
arg_buffer[1] = kont8992;
arg_buffer[2] = x8993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8992))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8992 = arg_buffer[2];
void* const x8993 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont8992;
arg_buffer[2] = x8993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8992))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void list_u45_u62set_fptr() // list->set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8998 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8996 = prim_car(lst);
void* const lst8999 = prim_cdr(lst);
void* const x8997 = apply_prim_list_u45_u62set(lst8999);
arg_buffer[1] = kont8996;
arg_buffer[2] = x8997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8996))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8996 = arg_buffer[2];
void* const x8997 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont8996;
arg_buffer[2] = x8997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8996))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45add_fptr() // set-add 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9002 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9000 = prim_car(lst);
void* const lst9003 = prim_cdr(lst);
void* const x9001 = apply_prim_set_u45add(lst9003);
arg_buffer[1] = kont9000;
arg_buffer[2] = x9001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9000))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9000 = arg_buffer[2];
void* const x9001 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9000;
arg_buffer[2] = x9001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9000))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45member_u63_fptr() // set-member? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9006 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9004 = prim_car(lst);
void* const lst9007 = prim_cdr(lst);
void* const x9005 = apply_prim_set_u45member_u63(lst9007);
arg_buffer[1] = kont9004;
arg_buffer[2] = x9005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9004))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9004 = arg_buffer[2];
void* const x9005 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9004;
arg_buffer[2] = x9005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9004))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45remove_fptr() // set-remove 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9010 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9008 = prim_car(lst);
void* const lst9011 = prim_cdr(lst);
void* const x9009 = apply_prim_set_u45remove(lst9011);
arg_buffer[1] = kont9008;
arg_buffer[2] = x9009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9008))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9008 = arg_buffer[2];
void* const x9009 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9008;
arg_buffer[2] = x9009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9008))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45count_fptr() // set-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9014 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9012 = prim_car(lst);
void* const lst9015 = prim_cdr(lst);
void* const x9013 = apply_prim_set_u45count(lst9015);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9012))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9012 = arg_buffer[2];
void* const x9013 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9012))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9018 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9016 = prim_car(lst);
void* const lst9019 = prim_cdr(lst);
void* const x9017 = apply_prim_string_u63(lst9019);
arg_buffer[1] = kont9016;
arg_buffer[2] = x9017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9016))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9016 = arg_buffer[2];
void* const x9017 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9016;
arg_buffer[2] = x9017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9016))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45length_fptr() // string-length 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9022 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9020 = prim_car(lst);
void* const lst9023 = prim_cdr(lst);
void* const x9021 = apply_prim_string_u45length(lst9023);
arg_buffer[1] = kont9020;
arg_buffer[2] = x9021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9020))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9020 = arg_buffer[2];
void* const x9021 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9020;
arg_buffer[2] = x9021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9020))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45ref_fptr() // string-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9026 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9024 = prim_car(lst);
void* const lst9027 = prim_cdr(lst);
void* const x9025 = apply_prim_string_u45ref(lst9027);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9024))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9024 = arg_buffer[2];
void* const x9025 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9024))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void substring_fptr() // substring 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9030 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9028 = prim_car(lst);
void* const lst9031 = prim_cdr(lst);
void* const x9029 = apply_prim_substring(lst9031);
arg_buffer[1] = kont9028;
arg_buffer[2] = x9029;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9028))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9028 = arg_buffer[2];
void* const x9029 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9028;
arg_buffer[2] = x9029;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9028))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45append_fptr() // string-append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9034 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9032 = prim_car(lst);
void* const lst9035 = prim_cdr(lst);
void* const x9033 = apply_prim_string_u45append(lst9035);
arg_buffer[1] = kont9032;
arg_buffer[2] = x9033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9032))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9032 = arg_buffer[2];
void* const x9033 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9032;
arg_buffer[2] = x9033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9032))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45_u62list_fptr() // string->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9038 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9036 = prim_car(lst);
void* const lst9039 = prim_cdr(lst);
void* const x9037 = apply_prim_string_u45_u62list(lst9039);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9036))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9036 = arg_buffer[2];
void* const x9037 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9036))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9042 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9040 = prim_car(lst);
void* const lst9043 = prim_cdr(lst);
void* const x9041 = apply_prim_exact_u45floor(lst9043);
arg_buffer[1] = kont9040;
arg_buffer[2] = x9041;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9040))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9040 = arg_buffer[2];
void* const x9041 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9040;
arg_buffer[2] = x9041;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9040))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45ceiling_fptr() // exact-ceiling 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9046 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9044 = prim_car(lst);
void* const lst9047 = prim_cdr(lst);
void* const x9045 = apply_prim_exact_u45ceiling(lst9047);
arg_buffer[1] = kont9044;
arg_buffer[2] = x9045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9044))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9044 = arg_buffer[2];
void* const x9045 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9044;
arg_buffer[2] = x9045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9044))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45round_fptr() // exact-round 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9050 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9048 = prim_car(lst);
void* const lst9051 = prim_cdr(lst);
void* const x9049 = apply_prim_exact_u45round(lst9051);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9048))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9048 = arg_buffer[2];
void* const x9049 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9048))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void abs_fptr() // abs 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9054 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9052 = prim_car(lst);
void* const lst9055 = prim_cdr(lst);
void* const x9053 = apply_prim_abs(lst9055);
arg_buffer[1] = kont9052;
arg_buffer[2] = x9053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9052))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9052 = arg_buffer[2];
void* const x9053 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9052;
arg_buffer[2] = x9053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9052))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9058 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9056 = prim_car(lst);
void* const lst9059 = prim_cdr(lst);
void* const x9057 = apply_prim_max(lst9059);
arg_buffer[1] = kont9056;
arg_buffer[2] = x9057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9056))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9056 = arg_buffer[2];
void* const x9057 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9056;
arg_buffer[2] = x9057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9056))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void min_fptr() // min 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9062 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9060 = prim_car(lst);
void* const lst9063 = prim_cdr(lst);
void* const x9061 = apply_prim_min(lst9063);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9060))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9060 = arg_buffer[2];
void* const x9061 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9060))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void expt_fptr() // expt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9066 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9064 = prim_car(lst);
void* const lst9067 = prim_cdr(lst);
void* const x9065 = apply_prim_expt(lst9067);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9064))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9064 = arg_buffer[2];
void* const x9065 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9064;
arg_buffer[2] = x9065;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9064))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void sqrt_fptr() // sqrt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9070 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9068 = prim_car(lst);
void* const lst9071 = prim_cdr(lst);
void* const x9069 = apply_prim_sqrt(lst9071);
arg_buffer[1] = kont9068;
arg_buffer[2] = x9069;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9068))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9068 = arg_buffer[2];
void* const x9069 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9068;
arg_buffer[2] = x9069;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9068))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void remainder_fptr() // remainder 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9074 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9072 = prim_car(lst);
void* const lst9075 = prim_cdr(lst);
void* const x9073 = apply_prim_remainder(lst9075);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9072))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9072 = arg_buffer[2];
void* const x9073 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9072))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9078 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9076 = prim_car(lst);
void* const lst9079 = prim_cdr(lst);
void* const x9077 = apply_prim_quotient(lst9079);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9076))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9076 = arg_buffer[2];
void* const x9077 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9076;
arg_buffer[2] = x9077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9076))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void random_fptr() // random 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9082 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9080 = prim_car(lst);
void* const lst9083 = prim_cdr(lst);
void* const x9081 = apply_prim_random(lst9083);
arg_buffer[1] = kont9080;
arg_buffer[2] = x9081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9080))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9080 = arg_buffer[2];
void* const x9081 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9080;
arg_buffer[2] = x9081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9080))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9086 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9084 = prim_car(lst);
void* const lst9087 = prim_cdr(lst);
void* const x9085 = apply_prim_symbol_u63(lst9087);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9084))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9084 = arg_buffer[2];
void* const x9085 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9084))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void pair_u63_fptr() // pair? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9090 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9088 = prim_car(lst);
void* const lst9091 = prim_cdr(lst);
void* const x9089 = apply_prim_pair_u63(lst9091);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9088))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9088 = arg_buffer[2];
void* const x9089 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9088;
arg_buffer[2] = x9089;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9088))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void positive_u63_fptr() // positive? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9094 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9092 = prim_car(lst);
void* const lst9095 = prim_cdr(lst);
void* const x9093 = apply_prim_positive_u63(lst9095);
arg_buffer[1] = kont9092;
arg_buffer[2] = x9093;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9092))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9092 = arg_buffer[2];
void* const x9093 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9092;
arg_buffer[2] = x9093;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9092))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9098 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9096 = prim_car(lst);
void* const lst9099 = prim_cdr(lst);
void* const x9097 = apply_prim_negative_u63(lst9099);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9096))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9096 = arg_buffer[2];
void* const x9097 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9096))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9102 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9100 = prim_car(lst);
void* const lst9103 = prim_cdr(lst);
void* const x9101 = apply_prim_list(lst9103);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9100))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9100 = arg_buffer[2];
void* const x9101 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9100;
arg_buffer[2] = x9101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9100))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8832 = arg_buffer[1];
//reading env and args
void* const kont8799 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8718 = int8890;
void* const id_8719 = int8880;
void* const id_8720 = apply_prim_modulo_2(x, id_8719);

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(id_8718, id_8720);
arg_buffer[1] = kont8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8799))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8833 = arg_buffer[1];
//reading env and args
void* const kont8800 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8721 = int8891;
void* const id_8722 = int8880;
void* const id_8723 = apply_prim_modulo_2(x, id_8722);

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(id_8721, id_8723);
arg_buffer[1] = kont8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8800))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void list_u45ref_fptr() // list-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8834 = arg_buffer[1];
//reading env and args
void* const kont8801 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8724 = int8890;
void* const id_8725 = apply_prim__u61_2(id_8724, n);

//if-clause
bool if_guard9104 = is_true(id_8725);
if(if_guard9104)
{
void* const xy8726 = apply_prim_car_1(lst);

//clo-app
arg_buffer[1] = kont8801;
arg_buffer[2] = xy8726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8801))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8727 = apply_prim_cdr_1(lst);
void* const id_8728 = int8891;
void* const id_8729 = apply_prim__u45_2(n, id_8728);

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8801;
arg_buffer[3] = id_8727;
arg_buffer[4] = id_8729;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_list_u45ref();
}

}

void lam8835_fptr() // lam8835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8836 = arg_buffer[1];
//reading env and args
void* const id_8733 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8836);
void* const lst = decode_clo_array[3];
void* const item = decode_clo_array[2];
void* const kont8802 = decode_clo_array[1];

//if-clause
bool if_guard9105 = is_true(id_8733);
if(if_guard9105)
{
void* const xy8734 = bool_f8885;

//clo-app
arg_buffer[1] = kont8802;
arg_buffer[2] = xy8734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8735 = apply_prim_car_1(lst);
void* const id_8736 = apply_prim_equal_u63_2(item, id_8735);

//if-clause
bool if_guard9106 = is_true(id_8736);
if(if_guard9106)
{

//clo-app
arg_buffer[1] = kont8802;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8737 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8802;
arg_buffer[3] = item;
arg_buffer[4] = id_8737;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_member();
}

}

}

void member_fptr() // member 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8837 = arg_buffer[1];
//reading env and args
void* const kont8802 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8730 = apply_prim_null_u63_1(item);

//creating new closure instance
void** clo9107 = alloc_clo(lam8835_fptr, 3);

//setting env list
clo9107[1] = kont8802;
clo9107[2] = item;
clo9107[3] = lst;
void* f8803 = encode_clo(clo9107);



//if-clause
bool if_guard9108 = is_true(id_8730);
if(if_guard9108)
{
void* const xy8731 = apply_prim_null_u63_1(item);

//clo-app
arg_buffer[1] = f8803;
arg_buffer[2] = xy8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8803))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const xy8732 = apply_prim_null_u63_1(lst);

//clo-app
arg_buffer[1] = f8803;
arg_buffer[2] = xy8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8803))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8838 = arg_buffer[1];
//reading env and args
void* const kont8804 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8738 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9109 = is_true(id_8738);
if(if_guard9109)
{
void* const xy8739 = bool_f8885;

//clo-app
arg_buffer[1] = kont8804;
arg_buffer[2] = xy8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8740 = apply_prim_car_1(lst);
void* const id_8741 = apply_prim_equal_u63_2(id_8740, x);

//if-clause
bool if_guard9110 = is_true(id_8741);
if(if_guard9110)
{
void* const xy8742 = bool_t8884;

//clo-app
arg_buffer[1] = kont8804;
arg_buffer[2] = xy8742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8743 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8804;
arg_buffer[3] = x;
arg_buffer[4] = id_8743;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_member_u63();
}

}

}

void lam8839_fptr() // lam8839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8840 = arg_buffer[1];
//reading env and args
void* const id_8748 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8840);
void* const id_8746 = decode_clo_array[2];
void* const kont8805 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(id_8746, id_8748);
arg_buffer[1] = kont8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8805))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8841 = arg_buffer[1];
//reading env and args
void* const kont8805 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8744 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9111 = is_true(id_8744);
if(if_guard9111)
{
void* const xy8745 = int8890;

//clo-app
arg_buffer[1] = kont8805;
arg_buffer[2] = xy8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8805))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8746 = int8891;
void* const id_8747 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9112 = alloc_clo(lam8839_fptr, 2);

//setting env list
clo9112[1] = kont8805;
clo9112[2] = id_8746;
void* f8806 = encode_clo(clo9112);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8806;
arg_buffer[3] = id_8747;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_length();
}

}

void lam8842_fptr() // lam8842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8843 = arg_buffer[1];
//reading env and args
void* const id_8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8843);
void* const id_8752 = decode_clo_array[2];
void* const kont8807 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8752, id_8754);
arg_buffer[1] = kont8807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8844_fptr() // lam8844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8845 = arg_buffer[1];
//reading env and args
void* const id_8752 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8845);
void* const lst = decode_clo_array[3];
void* const proc = decode_clo_array[2];
void* const kont8807 = decode_clo_array[1];
void* const id_8753 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9113 = alloc_clo(lam8842_fptr, 2);

//setting env list
clo9113[1] = kont8807;
clo9113[2] = id_8752;
void* f8808 = encode_clo(clo9113);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8808;
arg_buffer[3] = proc;
arg_buffer[4] = id_8753;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_map();
}

void map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8846 = arg_buffer[1];
//reading env and args
void* const kont8807 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8749 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9114 = is_true(id_8749);
if(if_guard9114)
{
void* const xy8750 = apply_prim_list_0();

//clo-app
arg_buffer[1] = kont8807;
arg_buffer[2] = xy8750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8751 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9115 = alloc_clo(lam8844_fptr, 3);

//setting env list
clo9115[1] = kont8807;
clo9115[2] = proc;
clo9115[3] = lst;
void* f8809 = encode_clo(clo9115);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8809;
arg_buffer[3] = id_8751;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8847_fptr() // lam8847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8848 = arg_buffer[1];
//reading env and args
void* const id_8761 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8848);
void* const kont8810 = decode_clo_array[2];
void* const id_8759 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8759, id_8761);
arg_buffer[1] = kont8810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8849_fptr() // lam8849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8850 = arg_buffer[1];
//reading env and args
void* const id_8758 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8850);
void* const kont8810 = decode_clo_array[3];
void* const lst = decode_clo_array[2];
void* const op = decode_clo_array[1];

//if-clause
bool if_guard9116 = is_true(id_8758);
if(if_guard9116)
{
void* const id_8759 = apply_prim_car_1(lst);
void* const id_8760 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9117 = alloc_clo(lam8847_fptr, 2);

//setting env list
clo9117[1] = id_8759;
clo9117[2] = kont8810;
void* f8811 = encode_clo(clo9117);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8811;
arg_buffer[3] = op;
arg_buffer[4] = id_8760;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_filter();
}
else
{
void* const id_8762 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8810;
arg_buffer[3] = op;
arg_buffer[4] = id_8762;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_filter();
}

}

void filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8851 = arg_buffer[1];
//reading env and args
void* const kont8810 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8755 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9118 = is_true(id_8755);
if(if_guard9118)
{
void* const xy8756 = apply_prim_list_0();

//clo-app
arg_buffer[1] = kont8810;
arg_buffer[2] = xy8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8757 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9119 = alloc_clo(lam8849_fptr, 3);

//setting env list
clo9119[1] = op;
clo9119[2] = lst;
clo9119[3] = kont8810;
void* f8812 = encode_clo(clo9119);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8812;
arg_buffer[3] = id_8757;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8852 = arg_buffer[1];
//reading env and args
void* const kont8813 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8763 = int8890;
void* const id_8764 = apply_prim__u61_2(n, id_8763);

//if-clause
bool if_guard9120 = is_true(id_8764);
if(if_guard9120)
{

//clo-app
arg_buffer[1] = kont8813;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8813))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8765 = apply_prim_cdr_1(lst);
void* const id_8766 = int8891;
void* const id_8767 = apply_prim__u45_2(n, id_8766);

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8813;
arg_buffer[3] = id_8765;
arg_buffer[4] = id_8767;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_drop();
}

}

void lam8853_fptr() // lam8853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8854 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8854);
void* const lst = decode_clo_array[3];
void* const kont8814 = decode_clo_array[2];
void* const fun = decode_clo_array[1];
void* const id_8771 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8814;
arg_buffer[3] = fun;
arg_buffer[4] = id_8770;
arg_buffer[5] = id_8771;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldl();
}

void foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8855 = arg_buffer[1];
//reading env and args
void* const kont8814 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8768 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9121 = is_true(id_8768);
if(if_guard9121)
{

//clo-app
arg_buffer[1] = kont8814;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8769 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9122 = alloc_clo(lam8853_fptr, 3);

//setting env list
clo9122[1] = fun;
clo9122[2] = kont8814;
clo9122[3] = lst;
void* f8815 = encode_clo(clo9122);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8815;
arg_buffer[3] = id_8769;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8856_fptr() // lam8856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8857 = arg_buffer[1];
//reading env and args
void* const id_8775 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8857);
void* const kont8816 = decode_clo_array[3];
void* const fun = decode_clo_array[2];
void* const id_8773 = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8816;
arg_buffer[3] = id_8773;
arg_buffer[4] = id_8775;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8858 = arg_buffer[1];
//reading env and args
void* const kont8816 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8772 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9123 = is_true(id_8772);
if(if_guard9123)
{

//clo-app
arg_buffer[1] = kont8816;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8816))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8773 = apply_prim_car_1(lst);
void* const id_8774 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9124 = alloc_clo(lam8856_fptr, 3);

//setting env list
clo9124[1] = id_8773;
clo9124[2] = fun;
clo9124[3] = kont8816;
void* f8817 = encode_clo(clo9124);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8817;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = id_8774;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldr();
}

}

void reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8859 = arg_buffer[1];
//reading env and args
void* const kont8818 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8776 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9125 = is_true(id_8776);
if(if_guard9125)
{

//clo-app
arg_buffer[1] = kont8818;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8818))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8777 = apply_prim_cdr_1(lst);
void* const id_8778 = apply_prim_car_1(lst);
void* const id_8779 = apply_prim_cons_2(id_8778, lst2);

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8818;
arg_buffer[3] = id_8777;
arg_buffer[4] = id_8779;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_reverse_u45helper();
}

}

void reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8860 = arg_buffer[1];
//reading env and args
void* const kont8819 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8780 = apply_prim_list_0();

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8819;
arg_buffer[3] = lst;
arg_buffer[4] = id_8780;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_reverse_u45helper();
}

void lam8861_fptr() // lam8861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8862 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8862);
void* const id_8782 = decode_clo_array[2];
void* const kont8820 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8782, id_8784);
arg_buffer[1] = kont8820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8820))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8863 = arg_buffer[1];
//reading env and args
void* const kont8820 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8781 = apply_prim_null_u63_1(lhs);

//if-clause
bool if_guard9126 = is_true(id_8781);
if(if_guard9126)
{

//clo-app
arg_buffer[1] = kont8820;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8820))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8782 = apply_prim_car_1(lhs);
void* const id_8783 = apply_prim_cdr_1(lhs);

//creating new closure instance
void** clo9127 = alloc_clo(lam8861_fptr, 2);

//setting env list
clo9127[1] = kont8820;
clo9127[2] = id_8782;
void* f8821 = encode_clo(clo9127);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8821;
arg_buffer[3] = id_8783;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

}

void lam8864_fptr() // lam8864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8865 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8865);
void* const id_8785 = decode_clo_array[2];
void* const kont8822 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8822;
arg_buffer[3] = append1;
arg_buffer[4] = id_8785;
arg_buffer[5] = id_8787;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldr();
}

void lam8866_fptr() // lam8866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8867 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8867);
void* const kont8822 = decode_clo_array[2];
void* const xs = decode_clo_array[1];
void* const id_8785 = apply_prim_list_0();
void* const id_8786 = apply_prim_list_1(xs);

//creating new closure instance
void** clo9128 = alloc_clo(lam8864_fptr, 2);

//setting env list
clo9128[1] = kont8822;
clo9128[2] = id_8785;
void* f8823 = encode_clo(clo9128);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8823;
arg_buffer[3] = id_8786;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

void append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8868 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* vargs = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
vargs = arg_buffer[2];
}
else
{
//building cons cell
vargs = encode_null();
for(int i = numArgs; i >= 2; i--)
{
vargs = prim_cons(arg_buffer[i], vargs);

}

}

void* const kont8822 = apply_prim_car_1(vargs);
void* const vargs8831 = apply_prim_cdr_1(vargs);
void* const xs = apply_prim_car_1(vargs8831);
void* const vargs8717 = apply_prim_cdr_1(vargs8831);

//creating new closure instance
void** clo9129 = alloc_clo(lam8866_fptr, 2);

//setting env list
clo9129[1] = xs;
clo9129[2] = kont8822;
void* f8824 = encode_clo(clo9129);



//clo-app
arg_buffer[1] = f8824;
arg_buffer[2] = vargs8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8824))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8869_fptr() // lam8869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8870 = arg_buffer[1];
//reading env and args
void* const xy8790 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8870);
void* const kont8825 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8825;
arg_buffer[2] = xy8790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8825))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8871 = arg_buffer[1];
//reading env and args
void* const kont8825 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8788 = int8890;
void* const id_8789 = apply_prim__u61_2(n, id_8788);

//if-clause
bool if_guard9130 = is_true(id_8789);
if(if_guard9130)
{

//creating new closure instance
void** clo9131 = alloc_clo(lam8869_fptr, 1);

//setting env list
clo9131[1] = kont8825;
void* f8826 = encode_clo(clo9131);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8826;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_reverse();
}
else
{
void* const id_8791 = apply_prim_cdr_1(lst);
void* const id_8792 = int8891;
void* const id_8793 = apply_prim__u45_2(n, id_8792);
void* const id_8794 = apply_prim_car_1(lst);
void* const id_8795 = apply_prim_cons_2(id_8794, lst2);

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8825;
arg_buffer[3] = id_8791;
arg_buffer[4] = id_8793;
arg_buffer[5] = id_8795;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_take_u45helper();
}

}

void take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8872 = arg_buffer[1];
//reading env and args
void* const kont8827 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8796 = apply_prim_list_0();

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8827;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = id_8796;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_take_u45helper();
}

void call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8873 = arg_buffer[1];
//reading env and args
void* const kont8828 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
void* const xy8797 = apply_prim_list_0();

//clo-app
arg_buffer[1] = kont8828;
arg_buffer[2] = xy8797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8828))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8874_fptr() // lam8874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8875 = arg_buffer[1];
//reading env and args
void* const xy8798 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8875);
void* const kont8829 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8829;
arg_buffer[2] = xy8798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8829))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8876 = arg_buffer[1];
//reading env and args
void* const kont8829 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9132 = alloc_clo(lam8874_fptr, 1);

//setting env list
clo9132[1] = kont8829;
void* f8830 = encode_clo(clo9132);



//clo-app
arg_buffer[1] = call;
arg_buffer[2] = f8830;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_call();
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8890 = reinterpret_cast<void*>(encode_int(0));
bool_t8884 = encode_bool(true);
int8891 = reinterpret_cast<void*>(encode_int(1));
bool_f8885 = encode_bool(false);
int8880 = reinterpret_cast<void*>(encode_int(2));


//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
decoded_brouhaha_main();
}

