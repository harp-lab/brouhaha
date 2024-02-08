#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8912;
void* bool_t8902;
void* int8910;
void* bool_f8903;
void* int8911;



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

void lam8843_fptr(); // lam8843
void* lam8843 = encode_clo(alloc_clo(lam8843_fptr, 0));

void member_fptr(); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8847_fptr(); // lam8847
void* lam8847 = encode_clo(alloc_clo(lam8847_fptr, 0));

void length_fptr(); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8850_fptr(); // lam8850
void* lam8850 = encode_clo(alloc_clo(lam8850_fptr, 0));

void lam8852_fptr(); // lam8852
void* lam8852 = encode_clo(alloc_clo(lam8852_fptr, 0));

void lam8854_fptr(); // lam8854
void* lam8854 = encode_clo(alloc_clo(lam8854_fptr, 0));

void map_fptr(); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8857_fptr(); // lam8857
void* lam8857 = encode_clo(alloc_clo(lam8857_fptr, 0));

void lam8859_fptr(); // lam8859
void* lam8859 = encode_clo(alloc_clo(lam8859_fptr, 0));

void lam8861_fptr(); // lam8861
void* lam8861 = encode_clo(alloc_clo(lam8861_fptr, 0));

void filter_fptr(); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8865_fptr(); // lam8865
void* lam8865 = encode_clo(alloc_clo(lam8865_fptr, 0));

void foldl_fptr(); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8868_fptr(); // lam8868
void* lam8868 = encode_clo(alloc_clo(lam8868_fptr, 0));

void foldr_fptr(); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8872_fptr(); // lam8872
void* lam8872 = encode_clo(alloc_clo(lam8872_fptr, 0));

void reverse_fptr(); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8875_fptr(); // lam8875
void* lam8875 = encode_clo(alloc_clo(lam8875_fptr, 0));

void append1_fptr(); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8878_fptr(); // lam8878
void* lam8878 = encode_clo(alloc_clo(lam8878_fptr, 0));

void lam8880_fptr(); // lam8880
void* lam8880 = encode_clo(alloc_clo(lam8880_fptr, 0));

void lam8882_fptr(); // lam8882
void* lam8882 = encode_clo(alloc_clo(lam8882_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8885_fptr(); // lam8885
void* lam8885 = encode_clo(alloc_clo(lam8885_fptr, 0));

void take_u45helper_fptr(); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8888_fptr(); // lam8888
void* lam8888 = encode_clo(alloc_clo(lam8888_fptr, 0));

void take_fptr(); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void call_fptr(); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8892_fptr(); // lam8892
void* lam8892 = encode_clo(alloc_clo(lam8892_fptr, 0));

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
void* const _env8915 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8913 = prim_car(lst);
void* const lst8916 = prim_cdr(lst);
void* const x8914 = apply_prim__u43(lst8916);
arg_buffer[1] = kont8913;
arg_buffer[2] = x8914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8913))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8913 = arg_buffer[2];
void* const x8914 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8913;
arg_buffer[2] = x8914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8913))[0]);

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
void* const _env8919 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8917 = prim_car(lst);
void* const lst8920 = prim_cdr(lst);
void* const x8918 = apply_prim__u45(lst8920);
arg_buffer[1] = kont8917;
arg_buffer[2] = x8918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8917))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8917 = arg_buffer[2];
void* const x8918 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8917;
arg_buffer[2] = x8918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8917))[0]);

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
void* const _env8923 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8921 = prim_car(lst);
void* const lst8924 = prim_cdr(lst);
void* const x8922 = apply_prim__u42(lst8924);
arg_buffer[1] = kont8921;
arg_buffer[2] = x8922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8921))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8921 = arg_buffer[2];
void* const x8922 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8921;
arg_buffer[2] = x8922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8921))[0]);

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
void* const _env8927 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8925 = prim_car(lst);
void* const lst8928 = prim_cdr(lst);
void* const x8926 = apply_prim__u47(lst8928);
arg_buffer[1] = kont8925;
arg_buffer[2] = x8926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8925))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8925 = arg_buffer[2];
void* const x8926 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8925;
arg_buffer[2] = x8926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8925))[0]);

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
void* const _env8931 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8929 = prim_car(lst);
void* const lst8932 = prim_cdr(lst);
void* const x8930 = apply_prim__u61(lst8932);
arg_buffer[1] = kont8929;
arg_buffer[2] = x8930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8929))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8929 = arg_buffer[2];
void* const x8930 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8929;
arg_buffer[2] = x8930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8929))[0]);

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
void* const _env8935 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8933 = prim_car(lst);
void* const lst8936 = prim_cdr(lst);
void* const x8934 = apply_prim__u62(lst8936);
arg_buffer[1] = kont8933;
arg_buffer[2] = x8934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8933))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8933 = arg_buffer[2];
void* const x8934 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8933;
arg_buffer[2] = x8934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8933))[0]);

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
void* const _env8939 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8937 = prim_car(lst);
void* const lst8940 = prim_cdr(lst);
void* const x8938 = apply_prim__u60(lst8940);
arg_buffer[1] = kont8937;
arg_buffer[2] = x8938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8937))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8937 = arg_buffer[2];
void* const x8938 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8937;
arg_buffer[2] = x8938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8937))[0]);

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
void* const _env8943 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8941 = prim_car(lst);
void* const lst8944 = prim_cdr(lst);
void* const x8942 = apply_prim__u60_u61(lst8944);
arg_buffer[1] = kont8941;
arg_buffer[2] = x8942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8941))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8941 = arg_buffer[2];
void* const x8942 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8941;
arg_buffer[2] = x8942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8941))[0]);

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
void* const _env8947 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8945 = prim_car(lst);
void* const lst8948 = prim_cdr(lst);
void* const x8946 = apply_prim__u62_u61(lst8948);
arg_buffer[1] = kont8945;
arg_buffer[2] = x8946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8945))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8945 = arg_buffer[2];
void* const x8946 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8945;
arg_buffer[2] = x8946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8945))[0]);

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
void* const _env8951 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8949 = prim_car(lst);
void* const lst8952 = prim_cdr(lst);
void* const x8950 = apply_prim_modulo(lst8952);
arg_buffer[1] = kont8949;
arg_buffer[2] = x8950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8949))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8949 = arg_buffer[2];
void* const x8950 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8949;
arg_buffer[2] = x8950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8949))[0]);

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
void* const _env8955 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8953 = prim_car(lst);
void* const lst8956 = prim_cdr(lst);
void* const x8954 = apply_prim_null_u63(lst8956);
arg_buffer[1] = kont8953;
arg_buffer[2] = x8954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8953))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8953 = arg_buffer[2];
void* const x8954 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8953;
arg_buffer[2] = x8954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8953))[0]);

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
void* const _env8959 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8957 = prim_car(lst);
void* const lst8960 = prim_cdr(lst);
void* const x8958 = apply_prim_equal_u63(lst8960);
arg_buffer[1] = kont8957;
arg_buffer[2] = x8958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8957))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8957 = arg_buffer[2];
void* const x8958 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8957;
arg_buffer[2] = x8958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8957))[0]);

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
void* const _env8963 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8961 = prim_car(lst);
void* const lst8964 = prim_cdr(lst);
void* const x8962 = apply_prim_eq_u63(lst8964);
arg_buffer[1] = kont8961;
arg_buffer[2] = x8962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8961))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8961 = arg_buffer[2];
void* const x8962 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8961;
arg_buffer[2] = x8962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8961))[0]);

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
void* const _env8967 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8965 = prim_car(lst);
void* const lst8968 = prim_cdr(lst);
void* const x8966 = apply_prim_cons(lst8968);
arg_buffer[1] = kont8965;
arg_buffer[2] = x8966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8965))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8965 = arg_buffer[2];
void* const x8966 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8965;
arg_buffer[2] = x8966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8965))[0]);

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
void* const _env8971 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8969 = prim_car(lst);
void* const lst8972 = prim_cdr(lst);
void* const x8970 = apply_prim_car(lst8972);
arg_buffer[1] = kont8969;
arg_buffer[2] = x8970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8969))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8969 = arg_buffer[2];
void* const x8970 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8969;
arg_buffer[2] = x8970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8969))[0]);

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
void* const _env8975 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8973 = prim_car(lst);
void* const lst8976 = prim_cdr(lst);
void* const x8974 = apply_prim_cdr(lst8976);
arg_buffer[1] = kont8973;
arg_buffer[2] = x8974;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8973))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8973 = arg_buffer[2];
void* const x8974 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8973;
arg_buffer[2] = x8974;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8973))[0]);

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
void* const _env8979 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8977 = prim_car(lst);
void* const lst8980 = prim_cdr(lst);
void* const x8978 = apply_prim_float_u45_u62int(lst8980);
arg_buffer[1] = kont8977;
arg_buffer[2] = x8978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8977))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8977 = arg_buffer[2];
void* const x8978 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8977;
arg_buffer[2] = x8978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8977))[0]);

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
void* const _env8983 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8981 = prim_car(lst);
void* const lst8984 = prim_cdr(lst);
void* const x8982 = apply_prim_int_u45_u62float(lst8984);
arg_buffer[1] = kont8981;
arg_buffer[2] = x8982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8981))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8981 = arg_buffer[2];
void* const x8982 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8981;
arg_buffer[2] = x8982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8981))[0]);

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
void* const _env8987 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8985 = prim_car(lst);
void* const lst8988 = prim_cdr(lst);
void* const x8986 = apply_prim_hash(lst8988);
arg_buffer[1] = kont8985;
arg_buffer[2] = x8986;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8985))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8985 = arg_buffer[2];
void* const x8986 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8985;
arg_buffer[2] = x8986;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8985))[0]);

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
void* const _env8991 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8989 = prim_car(lst);
void* const lst8992 = prim_cdr(lst);
void* const x8990 = apply_prim_hash_u45ref(lst8992);
arg_buffer[1] = kont8989;
arg_buffer[2] = x8990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8989))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8989 = arg_buffer[2];
void* const x8990 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8989;
arg_buffer[2] = x8990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8989))[0]);

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
void* const _env8995 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8993 = prim_car(lst);
void* const lst8996 = prim_cdr(lst);
void* const x8994 = apply_prim_hash_u45set(lst8996);
arg_buffer[1] = kont8993;
arg_buffer[2] = x8994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8993))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8993 = arg_buffer[2];
void* const x8994 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8993;
arg_buffer[2] = x8994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8993))[0]);

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
void* const _env8999 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8997 = prim_car(lst);
void* const lst9000 = prim_cdr(lst);
void* const x8998 = apply_prim_hash_u45keys(lst9000);
arg_buffer[1] = kont8997;
arg_buffer[2] = x8998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8997))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8997 = arg_buffer[2];
void* const x8998 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8997;
arg_buffer[2] = x8998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8997))[0]);

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
void* const _env9003 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9001 = prim_car(lst);
void* const lst9004 = prim_cdr(lst);
void* const x9002 = apply_prim_hash_u45has_u45key_u63(lst9004);
arg_buffer[1] = kont9001;
arg_buffer[2] = x9002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9001))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9001 = arg_buffer[2];
void* const x9002 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9001;
arg_buffer[2] = x9002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9001))[0]);

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
void* const _env9007 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9005 = prim_car(lst);
void* const lst9008 = prim_cdr(lst);
void* const x9006 = apply_prim_hash_u45count(lst9008);
arg_buffer[1] = kont9005;
arg_buffer[2] = x9006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9005))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9005 = arg_buffer[2];
void* const x9006 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9005;
arg_buffer[2] = x9006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9005))[0]);

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
void* const _env9011 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9009 = prim_car(lst);
void* const lst9012 = prim_cdr(lst);
void* const x9010 = apply_prim_set(lst9012);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9009))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9009 = arg_buffer[2];
void* const x9010 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9009))[0]);

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
void* const _env9015 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9013 = prim_car(lst);
void* const lst9016 = prim_cdr(lst);
void* const x9014 = apply_prim_set_u45_u62list(lst9016);
arg_buffer[1] = kont9013;
arg_buffer[2] = x9014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9013))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9013 = arg_buffer[2];
void* const x9014 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9013;
arg_buffer[2] = x9014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9013))[0]);

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
void* const _env9019 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9017 = prim_car(lst);
void* const lst9020 = prim_cdr(lst);
void* const x9018 = apply_prim_list_u45_u62set(lst9020);
arg_buffer[1] = kont9017;
arg_buffer[2] = x9018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9017))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9017 = arg_buffer[2];
void* const x9018 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9017;
arg_buffer[2] = x9018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9017))[0]);

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
void* const _env9023 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9021 = prim_car(lst);
void* const lst9024 = prim_cdr(lst);
void* const x9022 = apply_prim_set_u45add(lst9024);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9021))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9021 = arg_buffer[2];
void* const x9022 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9021))[0]);

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
void* const _env9027 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9025 = prim_car(lst);
void* const lst9028 = prim_cdr(lst);
void* const x9026 = apply_prim_set_u45member_u63(lst9028);
arg_buffer[1] = kont9025;
arg_buffer[2] = x9026;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9025))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9025 = arg_buffer[2];
void* const x9026 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9025;
arg_buffer[2] = x9026;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9025))[0]);

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
void* const _env9031 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9029 = prim_car(lst);
void* const lst9032 = prim_cdr(lst);
void* const x9030 = apply_prim_set_u45remove(lst9032);
arg_buffer[1] = kont9029;
arg_buffer[2] = x9030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9029))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9029 = arg_buffer[2];
void* const x9030 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9029;
arg_buffer[2] = x9030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9029))[0]);

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
void* const _env9035 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9033 = prim_car(lst);
void* const lst9036 = prim_cdr(lst);
void* const x9034 = apply_prim_set_u45count(lst9036);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9033))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9033 = arg_buffer[2];
void* const x9034 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9033))[0]);

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
void* const _env9039 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9037 = prim_car(lst);
void* const lst9040 = prim_cdr(lst);
void* const x9038 = apply_prim_string_u63(lst9040);
arg_buffer[1] = kont9037;
arg_buffer[2] = x9038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9037))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9037 = arg_buffer[2];
void* const x9038 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9037;
arg_buffer[2] = x9038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9037))[0]);

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
void* const _env9043 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9041 = prim_car(lst);
void* const lst9044 = prim_cdr(lst);
void* const x9042 = apply_prim_string_u45length(lst9044);
arg_buffer[1] = kont9041;
arg_buffer[2] = x9042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9041))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9041 = arg_buffer[2];
void* const x9042 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9041;
arg_buffer[2] = x9042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9041))[0]);

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
void* const _env9047 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9045 = prim_car(lst);
void* const lst9048 = prim_cdr(lst);
void* const x9046 = apply_prim_string_u45ref(lst9048);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9045))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9045 = arg_buffer[2];
void* const x9046 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9045))[0]);

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
void* const _env9051 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9049 = prim_car(lst);
void* const lst9052 = prim_cdr(lst);
void* const x9050 = apply_prim_substring(lst9052);
arg_buffer[1] = kont9049;
arg_buffer[2] = x9050;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9049))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9049 = arg_buffer[2];
void* const x9050 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9049;
arg_buffer[2] = x9050;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9049))[0]);

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
void* const _env9055 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9053 = prim_car(lst);
void* const lst9056 = prim_cdr(lst);
void* const x9054 = apply_prim_string_u45append(lst9056);
arg_buffer[1] = kont9053;
arg_buffer[2] = x9054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9053))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9053 = arg_buffer[2];
void* const x9054 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9053;
arg_buffer[2] = x9054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9053))[0]);

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
void* const _env9059 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9057 = prim_car(lst);
void* const lst9060 = prim_cdr(lst);
void* const x9058 = apply_prim_string_u45_u62list(lst9060);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9057))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9057 = arg_buffer[2];
void* const x9058 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9057))[0]);

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
void* const _env9063 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9061 = prim_car(lst);
void* const lst9064 = prim_cdr(lst);
void* const x9062 = apply_prim_exact_u45floor(lst9064);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9061))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9061 = arg_buffer[2];
void* const x9062 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9061;
arg_buffer[2] = x9062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9061))[0]);

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
void* const _env9067 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9065 = prim_car(lst);
void* const lst9068 = prim_cdr(lst);
void* const x9066 = apply_prim_exact_u45ceiling(lst9068);
arg_buffer[1] = kont9065;
arg_buffer[2] = x9066;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9065))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9065 = arg_buffer[2];
void* const x9066 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9065;
arg_buffer[2] = x9066;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9065))[0]);

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
void* const _env9071 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9069 = prim_car(lst);
void* const lst9072 = prim_cdr(lst);
void* const x9070 = apply_prim_exact_u45round(lst9072);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9069))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9069 = arg_buffer[2];
void* const x9070 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9069))[0]);

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
void* const _env9075 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9073 = prim_car(lst);
void* const lst9076 = prim_cdr(lst);
void* const x9074 = apply_prim_abs(lst9076);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9073))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9073 = arg_buffer[2];
void* const x9074 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9073;
arg_buffer[2] = x9074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9073))[0]);

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
void* const _env9079 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9077 = prim_car(lst);
void* const lst9080 = prim_cdr(lst);
void* const x9078 = apply_prim_max(lst9080);
arg_buffer[1] = kont9077;
arg_buffer[2] = x9078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9077))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9077 = arg_buffer[2];
void* const x9078 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9077;
arg_buffer[2] = x9078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9077))[0]);

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
void* const _env9083 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9081 = prim_car(lst);
void* const lst9084 = prim_cdr(lst);
void* const x9082 = apply_prim_min(lst9084);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9081))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9081 = arg_buffer[2];
void* const x9082 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9081))[0]);

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
void* const _env9087 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9085 = prim_car(lst);
void* const lst9088 = prim_cdr(lst);
void* const x9086 = apply_prim_expt(lst9088);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9085))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9085 = arg_buffer[2];
void* const x9086 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9085;
arg_buffer[2] = x9086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9085))[0]);

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
void* const _env9091 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9089 = prim_car(lst);
void* const lst9092 = prim_cdr(lst);
void* const x9090 = apply_prim_sqrt(lst9092);
arg_buffer[1] = kont9089;
arg_buffer[2] = x9090;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9089))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9089 = arg_buffer[2];
void* const x9090 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9089;
arg_buffer[2] = x9090;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9089))[0]);

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
void* const _env9095 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9093 = prim_car(lst);
void* const lst9096 = prim_cdr(lst);
void* const x9094 = apply_prim_remainder(lst9096);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9093))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9093 = arg_buffer[2];
void* const x9094 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9093))[0]);

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
void* const _env9099 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9097 = prim_car(lst);
void* const lst9100 = prim_cdr(lst);
void* const x9098 = apply_prim_quotient(lst9100);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9097))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9097 = arg_buffer[2];
void* const x9098 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9097;
arg_buffer[2] = x9098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9097))[0]);

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
void* const _env9103 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9101 = prim_car(lst);
void* const lst9104 = prim_cdr(lst);
void* const x9102 = apply_prim_random(lst9104);
arg_buffer[1] = kont9101;
arg_buffer[2] = x9102;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9101))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9101 = arg_buffer[2];
void* const x9102 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9101;
arg_buffer[2] = x9102;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9101))[0]);

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
void* const _env9107 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9105 = prim_car(lst);
void* const lst9108 = prim_cdr(lst);
void* const x9106 = apply_prim_symbol_u63(lst9108);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9105))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9105 = arg_buffer[2];
void* const x9106 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9105))[0]);

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
void* const _env9111 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9109 = prim_car(lst);
void* const lst9112 = prim_cdr(lst);
void* const x9110 = apply_prim_pair_u63(lst9112);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9109))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9109 = arg_buffer[2];
void* const x9110 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9109;
arg_buffer[2] = x9110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9109))[0]);

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
void* const _env9115 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9113 = prim_car(lst);
void* const lst9116 = prim_cdr(lst);
void* const x9114 = apply_prim_positive_u63(lst9116);
arg_buffer[1] = kont9113;
arg_buffer[2] = x9114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9113))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9113 = arg_buffer[2];
void* const x9114 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9113;
arg_buffer[2] = x9114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9113))[0]);

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
void* const _env9119 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9117 = prim_car(lst);
void* const lst9120 = prim_cdr(lst);
void* const x9118 = apply_prim_negative_u63(lst9120);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9117))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9117 = arg_buffer[2];
void* const x9118 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9117))[0]);

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
void* const _env9123 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9121 = prim_car(lst);
void* const lst9124 = prim_cdr(lst);
void* const x9122 = apply_prim_list(lst9124);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9121))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9121 = arg_buffer[2];
void* const x9122 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9121;
arg_buffer[2] = x9122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9121))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8840 = arg_buffer[1];
//reading env and args
void* const kont8802 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8718 = int8912;
void* const id_8719 = int8911;
void* const id_8720 = apply_prim_modulo_2(x, id_8719);

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(id_8718, id_8720);
arg_buffer[1] = kont8802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8841 = arg_buffer[1];
//reading env and args
void* const kont8803 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8721 = int8910;
void* const id_8722 = int8911;
void* const id_8723 = apply_prim_modulo_2(x, id_8722);

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(id_8721, id_8723);
arg_buffer[1] = kont8803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void list_u45ref_fptr() // list-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8842 = arg_buffer[1];
//reading env and args
void* const kont8804 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8724 = int8912;
void* const id_8725 = apply_prim__u61_2(id_8724, n);

//if-clause
bool if_guard9125 = is_true(id_8725);
if(if_guard9125)
{
void* const xy8726 = apply_prim_car_1(lst);

//clo-app
arg_buffer[1] = kont8804;
arg_buffer[2] = xy8726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8727 = apply_prim_cdr_1(lst);
void* const id_8728 = int8910;
void* const id_8729 = apply_prim__u45_2(n, id_8728);

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8804;
arg_buffer[3] = id_8727;
arg_buffer[4] = id_8729;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_list_u45ref();
}

}

void lam8843_fptr() // lam8843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8844 = arg_buffer[1];
//reading env and args
void* const id_8733 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8844);
void* const lst = decode_clo_array[3];
void* const item = decode_clo_array[2];
void* const kont8805 = decode_clo_array[1];

//if-clause
bool if_guard9126 = is_true(id_8733);
if(if_guard9126)
{
void* const xy8734 = bool_f8903;

//clo-app
arg_buffer[1] = kont8805;
arg_buffer[2] = xy8734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8805))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8735 = apply_prim_car_1(lst);
void* const id_8736 = apply_prim_equal_u63_2(item, id_8735);

//if-clause
bool if_guard9127 = is_true(id_8736);
if(if_guard9127)
{

//clo-app
arg_buffer[1] = kont8805;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8805))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8737 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8805;
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
void* const _8845 = arg_buffer[1];
//reading env and args
void* const kont8805 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8730 = apply_prim_null_u63_1(item);

//creating new closure instance
void** clo9128 = alloc_clo(lam8843_fptr, 3);

//setting env list
clo9128[1] = kont8805;
clo9128[2] = item;
clo9128[3] = lst;
void* f8806 = encode_clo(clo9128);



//if-clause
bool if_guard9129 = is_true(id_8730);
if(if_guard9129)
{
void* const xy8731 = apply_prim_null_u63_1(item);

//clo-app
arg_buffer[1] = f8806;
arg_buffer[2] = xy8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8806))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const xy8732 = apply_prim_null_u63_1(lst);

//clo-app
arg_buffer[1] = f8806;
arg_buffer[2] = xy8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8806))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8846 = arg_buffer[1];
//reading env and args
void* const kont8807 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8738 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9130 = is_true(id_8738);
if(if_guard9130)
{
void* const xy8739 = bool_f8903;

//clo-app
arg_buffer[1] = kont8807;
arg_buffer[2] = xy8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8740 = apply_prim_car_1(lst);
void* const id_8741 = apply_prim_equal_u63_2(id_8740, x);

//if-clause
bool if_guard9131 = is_true(id_8741);
if(if_guard9131)
{
void* const xy8742 = bool_t8902;

//clo-app
arg_buffer[1] = kont8807;
arg_buffer[2] = xy8742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8743 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8807;
arg_buffer[3] = x;
arg_buffer[4] = id_8743;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_member_u63();
}

}

}

void lam8847_fptr() // lam8847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8848 = arg_buffer[1];
//reading env and args
void* const id_8748 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8848);
void* const id_8746 = decode_clo_array[2];
void* const kont8808 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(id_8746, id_8748);
arg_buffer[1] = kont8808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8849 = arg_buffer[1];
//reading env and args
void* const kont8808 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8744 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9132 = is_true(id_8744);
if(if_guard9132)
{
void* const xy8745 = int8912;

//clo-app
arg_buffer[1] = kont8808;
arg_buffer[2] = xy8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8746 = int8910;
void* const id_8747 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9133 = alloc_clo(lam8847_fptr, 2);

//setting env list
clo9133[1] = kont8808;
clo9133[2] = id_8746;
void* f8809 = encode_clo(clo9133);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8809;
arg_buffer[3] = id_8747;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_length();
}

}

void lam8850_fptr() // lam8850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8851 = arg_buffer[1];
//reading env and args
void* const xy8750 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8851);
void* const kont8810 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8810;
arg_buffer[2] = xy8750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8852_fptr() // lam8852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8853 = arg_buffer[1];
//reading env and args
void* const id_8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8853);
void* const kont8810 = decode_clo_array[2];
void* const id_8752 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8752, id_8754);
arg_buffer[1] = kont8810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8854_fptr() // lam8854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8855 = arg_buffer[1];
//reading env and args
void* const id_8752 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8855);
void* const kont8810 = decode_clo_array[3];
void* const lst = decode_clo_array[2];
void* const proc = decode_clo_array[1];
void* const id_8753 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9134 = alloc_clo(lam8852_fptr, 2);

//setting env list
clo9134[1] = id_8752;
clo9134[2] = kont8810;
void* f8812 = encode_clo(clo9134);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8812;
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
void* const _8856 = arg_buffer[1];
//reading env and args
void* const kont8810 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8749 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9135 = is_true(id_8749);
if(if_guard9135)
{

//creating new closure instance
void** clo9136 = alloc_clo(lam8850_fptr, 1);

//setting env list
clo9136[1] = kont8810;
void* f8811 = encode_clo(clo9136);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
list_fptr();
}
else
{
void* const id_8751 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9137 = alloc_clo(lam8854_fptr, 3);

//setting env list
clo9137[1] = proc;
clo9137[2] = lst;
clo9137[3] = kont8810;
void* f8813 = encode_clo(clo9137);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8813;
arg_buffer[3] = id_8751;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8857_fptr() // lam8857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8858 = arg_buffer[1];
//reading env and args
void* const xy8756 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8858);
void* const kont8814 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8814;
arg_buffer[2] = xy8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8859_fptr() // lam8859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8860 = arg_buffer[1];
//reading env and args
void* const id_8761 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8860);
void* const kont8814 = decode_clo_array[2];
void* const id_8759 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8759, id_8761);
arg_buffer[1] = kont8814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8861_fptr() // lam8861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8862 = arg_buffer[1];
//reading env and args
void* const id_8758 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8862);
void* const lst = decode_clo_array[3];
void* const kont8814 = decode_clo_array[2];
void* const op = decode_clo_array[1];

//if-clause
bool if_guard9138 = is_true(id_8758);
if(if_guard9138)
{
void* const id_8759 = apply_prim_car_1(lst);
void* const id_8760 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9139 = alloc_clo(lam8859_fptr, 2);

//setting env list
clo9139[1] = id_8759;
clo9139[2] = kont8814;
void* f8816 = encode_clo(clo9139);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8816;
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
arg_buffer[2] = kont8814;
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
void* const _8863 = arg_buffer[1];
//reading env and args
void* const kont8814 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8755 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9140 = is_true(id_8755);
if(if_guard9140)
{

//creating new closure instance
void** clo9141 = alloc_clo(lam8857_fptr, 1);

//setting env list
clo9141[1] = kont8814;
void* f8815 = encode_clo(clo9141);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8815;
arg_buffer[0] = reinterpret_cast<void*>(2);
list_fptr();
}
else
{
void* const id_8757 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9142 = alloc_clo(lam8861_fptr, 3);

//setting env list
clo9142[1] = op;
clo9142[2] = kont8814;
clo9142[3] = lst;
void* f8817 = encode_clo(clo9142);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8817;
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
void* const _8864 = arg_buffer[1];
//reading env and args
void* const kont8818 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8763 = int8912;
void* const id_8764 = apply_prim__u61_2(n, id_8763);

//if-clause
bool if_guard9143 = is_true(id_8764);
if(if_guard9143)
{

//clo-app
arg_buffer[1] = kont8818;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8818))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8765 = apply_prim_cdr_1(lst);
void* const id_8766 = int8910;
void* const id_8767 = apply_prim__u45_2(n, id_8766);

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8818;
arg_buffer[3] = id_8765;
arg_buffer[4] = id_8767;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_drop();
}

}

void lam8865_fptr() // lam8865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8866 = arg_buffer[1];
//reading env and args
void* const id_8770 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8866);
void* const lst = decode_clo_array[3];
void* const kont8819 = decode_clo_array[2];
void* const fun = decode_clo_array[1];
void* const id_8771 = apply_prim_cdr_1(lst);

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8819;
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
void* const _8867 = arg_buffer[1];
//reading env and args
void* const kont8819 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8768 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9144 = is_true(id_8768);
if(if_guard9144)
{

//clo-app
arg_buffer[1] = kont8819;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8819))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8769 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9145 = alloc_clo(lam8865_fptr, 3);

//setting env list
clo9145[1] = fun;
clo9145[2] = kont8819;
clo9145[3] = lst;
void* f8820 = encode_clo(clo9145);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8820;
arg_buffer[3] = id_8769;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8868_fptr() // lam8868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8869 = arg_buffer[1];
//reading env and args
void* const id_8775 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8869);
void* const fun = decode_clo_array[3];
void* const id_8773 = decode_clo_array[2];
void* const kont8821 = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8821;
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
void* const _8870 = arg_buffer[1];
//reading env and args
void* const kont8821 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8772 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9146 = is_true(id_8772);
if(if_guard9146)
{

//clo-app
arg_buffer[1] = kont8821;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8821))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8773 = apply_prim_car_1(lst);
void* const id_8774 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9147 = alloc_clo(lam8868_fptr, 3);

//setting env list
clo9147[1] = kont8821;
clo9147[2] = id_8773;
clo9147[3] = fun;
void* f8822 = encode_clo(clo9147);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8822;
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
void* const _8871 = arg_buffer[1];
//reading env and args
void* const kont8823 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8776 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9148 = is_true(id_8776);
if(if_guard9148)
{

//clo-app
arg_buffer[1] = kont8823;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8823))[0]);

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
arg_buffer[2] = kont8823;
arg_buffer[3] = id_8777;
arg_buffer[4] = id_8779;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_reverse_u45helper();
}

}

void lam8872_fptr() // lam8872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8873 = arg_buffer[1];
//reading env and args
void* const id_8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8873);
void* const lst = decode_clo_array[2];
void* const kont8824 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8824;
arg_buffer[3] = lst;
arg_buffer[4] = id_8780;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_reverse_u45helper();
}

void reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8874 = arg_buffer[1];
//reading env and args
void* const kont8824 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9149 = alloc_clo(lam8872_fptr, 2);

//setting env list
clo9149[1] = kont8824;
clo9149[2] = lst;
void* f8825 = encode_clo(clo9149);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8825;
arg_buffer[0] = reinterpret_cast<void*>(2);
list_fptr();
}

void lam8875_fptr() // lam8875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8876 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8876);
void* const kont8826 = decode_clo_array[2];
void* const id_8782 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(id_8782, id_8784);
arg_buffer[1] = kont8826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8877 = arg_buffer[1];
//reading env and args
void* const kont8826 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8781 = apply_prim_null_u63_1(lhs);

//if-clause
bool if_guard9150 = is_true(id_8781);
if(if_guard9150)
{

//clo-app
arg_buffer[1] = kont8826;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8782 = apply_prim_car_1(lhs);
void* const id_8783 = apply_prim_cdr_1(lhs);

//creating new closure instance
void** clo9151 = alloc_clo(lam8875_fptr, 2);

//setting env list
clo9151[1] = id_8782;
clo9151[2] = kont8826;
void* f8827 = encode_clo(clo9151);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8827;
arg_buffer[3] = id_8783;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

}

void lam8878_fptr() // lam8878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8879 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8879);
void* const kont8828 = decode_clo_array[2];
void* const id_8785 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8828;
arg_buffer[3] = append1;
arg_buffer[4] = id_8785;
arg_buffer[5] = id_8787;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_foldr();
}

void lam8880_fptr() // lam8880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8881 = arg_buffer[1];
//reading env and args
void* const id_8785 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8881);
void* const kont8828 = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const xs = decode_clo_array[1];
void* const id_8786 = apply_prim_list_1(xs);

//creating new closure instance
void** clo9152 = alloc_clo(lam8878_fptr, 2);

//setting env list
clo9152[1] = id_8785;
clo9152[2] = kont8828;
void* f8829 = encode_clo(clo9152);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8829;
arg_buffer[3] = id_8786;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append1();
}

void lam8882_fptr() // lam8882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8883 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8883);
void* const kont8828 = decode_clo_array[2];
void* const xs = decode_clo_array[1];

//creating new closure instance
void** clo9153 = alloc_clo(lam8880_fptr, 3);

//setting env list
clo9153[1] = xs;
clo9153[2] = x;
clo9153[3] = kont8828;
void* f8830 = encode_clo(clo9153);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8830;
arg_buffer[0] = reinterpret_cast<void*>(2);
list_fptr();
}

void append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8884 = arg_buffer[1];
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

void* const kont8828 = apply_prim_car_1(vargs);
void* const vargs8839 = apply_prim_cdr_1(vargs);
void* const xs = apply_prim_car_1(vargs8839);
void* const vargs8717 = apply_prim_cdr_1(vargs8839);

//creating new closure instance
void** clo9154 = alloc_clo(lam8882_fptr, 2);

//setting env list
clo9154[1] = xs;
clo9154[2] = kont8828;
void* f8831 = encode_clo(clo9154);



//clo-app
arg_buffer[1] = f8831;
arg_buffer[2] = vargs8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8831))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8885_fptr() // lam8885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8886 = arg_buffer[1];
//reading env and args
void* const xy8790 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8886);
void* const kont8832 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8832;
arg_buffer[2] = xy8790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8832))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8887 = arg_buffer[1];
//reading env and args
void* const kont8832 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8788 = int8912;
void* const id_8789 = apply_prim__u61_2(n, id_8788);

//if-clause
bool if_guard9155 = is_true(id_8789);
if(if_guard9155)
{

//creating new closure instance
void** clo9156 = alloc_clo(lam8885_fptr, 1);

//setting env list
clo9156[1] = kont8832;
void* f8833 = encode_clo(clo9156);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8833;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
decoded_reverse();
}
else
{
void* const id_8791 = apply_prim_cdr_1(lst);
void* const id_8792 = int8910;
void* const id_8793 = apply_prim__u45_2(n, id_8792);
void* const id_8794 = apply_prim_car_1(lst);
void* const id_8795 = apply_prim_cons_2(id_8794, lst2);

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8832;
arg_buffer[3] = id_8791;
arg_buffer[4] = id_8793;
arg_buffer[5] = id_8795;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_take_u45helper();
}

}

void lam8888_fptr() // lam8888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8889 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8889);
void* const lst = decode_clo_array[3];
void* const kont8834 = decode_clo_array[2];
void* const n = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8834;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = id_8796;
arg_buffer[0] = reinterpret_cast<void*>(5);
decoded_take_u45helper();
}

void take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8890 = arg_buffer[1];
//reading env and args
void* const kont8834 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9157 = alloc_clo(lam8888_fptr, 3);

//setting env list
clo9157[1] = n;
clo9157[2] = kont8834;
clo9157[3] = lst;
void* f8835 = encode_clo(clo9157);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8835;
arg_buffer[0] = reinterpret_cast<void*>(2);
list_fptr();
}

void call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8891 = arg_buffer[1];
//reading env and args
void* const kont8836 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8797 = int8910;
void* const id_8798 = int8911;
void* const id_8799 = apply_prim_cons_2(id_8797, id_8798);
void* const id_8800 = int8912;

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8836;
arg_buffer[3] = id_8799;
arg_buffer[4] = id_8800;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_list_u45ref();
}

void lam8892_fptr() // lam8892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8893 = arg_buffer[1];
//reading env and args
void* const xy8801 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8893);
void* const kont8837 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8837;
arg_buffer[2] = xy8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8837))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8894 = arg_buffer[1];
//reading env and args
void* const kont8837 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9158 = alloc_clo(lam8892_fptr, 1);

//setting env list
clo9158[1] = kont8837;
void* f8838 = encode_clo(clo9158);



//clo-app
arg_buffer[1] = call;
arg_buffer[2] = f8838;
arg_buffer[0] = reinterpret_cast<void*>(2);
decoded_call();
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8912 = reinterpret_cast<void*>(encode_int(0));
bool_t8902 = encode_bool(true);
int8910 = reinterpret_cast<void*>(encode_int(1));
bool_f8903 = encode_bool(false);
int8911 = reinterpret_cast<void*>(encode_int(2));


//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
decoded_brouhaha_main();
}

