#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8891;
void* bool_t8885;
void* int8893;
void* bool_f8886;
void* int8897;
void* int8895;
void* int8896;



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

void even_u63_fptr(long numArgs, void* _8833, void* kont8800, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(long numArgs, void* _8834, void* kont8801, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(long numArgs, void* _8835, void* kont8802, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8836_fptr(); // lam8836
void* lam8836 = encode_clo(alloc_clo(lam8836_fptr, 0));

void member_fptr(long numArgs, void* _8838, void* kont8803, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(long numArgs, void* _8839, void* kont8805, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8840_fptr(); // lam8840
void* lam8840 = encode_clo(alloc_clo(lam8840_fptr, 0));

void length_fptr(long numArgs, void* _8842, void* kont8806, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8843_fptr(); // lam8843
void* lam8843 = encode_clo(alloc_clo(lam8843_fptr, 0));

void lam8845_fptr(); // lam8845
void* lam8845 = encode_clo(alloc_clo(lam8845_fptr, 0));

void map_fptr(long numArgs, void* _8847, void* kont8808, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8848_fptr(); // lam8848
void* lam8848 = encode_clo(alloc_clo(lam8848_fptr, 0));

void lam8850_fptr(); // lam8850
void* lam8850 = encode_clo(alloc_clo(lam8850_fptr, 0));

void filter_fptr(long numArgs, void* _8852, void* kont8811, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(long numArgs, void* _8853, void* kont8814, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8854_fptr(); // lam8854
void* lam8854 = encode_clo(alloc_clo(lam8854_fptr, 0));

void foldl_fptr(long numArgs, void* _8856, void* kont8815, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8857_fptr(); // lam8857
void* lam8857 = encode_clo(alloc_clo(lam8857_fptr, 0));

void foldr_fptr(long numArgs, void* _8859, void* kont8817, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(long numArgs, void* _8860, void* kont8819, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(long numArgs, void* _8861, void* kont8820, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8862_fptr(); // lam8862
void* lam8862 = encode_clo(alloc_clo(lam8862_fptr, 0));

void append1_fptr(long numArgs, void* _8864, void* kont8821, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8865_fptr(); // lam8865
void* lam8865 = encode_clo(alloc_clo(lam8865_fptr, 0));

void lam8867_fptr(); // lam8867
void* lam8867 = encode_clo(alloc_clo(lam8867_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8870_fptr(); // lam8870
void* lam8870 = encode_clo(alloc_clo(lam8870_fptr, 0));

void take_u45helper_fptr(long numArgs, void* _8872, void* kont8826, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(long numArgs, void* _8873, void* kont8828, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void call_fptr(long numArgs, void* _8874, void* kont8829); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8875_fptr(); // lam8875
void* lam8875 = encode_clo(alloc_clo(lam8875_fptr, 0));

void brouhaha_main_fptr(long numArgs, void* _8877, void* kont8830); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));




// pre-decoding global symbols
auto decoded_set_u45add = reinterpret_cast<void (*)()>((decode_clo(set_u45add))[0]);
auto decoded_random = reinterpret_cast<void (*)()>((decode_clo(random_brouhaha))[0]);
auto decoded__u45 = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
auto decoded__u61 = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
auto decoded_exact_u45round = reinterpret_cast<void (*)()>((decode_clo(exact_u45round))[0]);
auto decoded_list_u45_u62set = reinterpret_cast<void (*)()>((decode_clo(list_u45_u62set))[0]);
auto decoded_member_u63 = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(member_u63))[0]);
auto decoded__u60 = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
auto decoded_set_u45_u62list = reinterpret_cast<void (*)()>((decode_clo(set_u45_u62list))[0]);
auto decoded_foldl = reinterpret_cast<void (*)(long, void*, void*, void*, void*, void*)>((decode_clo(foldl))[0]);
auto decoded_sqrt = reinterpret_cast<void (*)()>((decode_clo(sqrt_brouhaha))[0]);
auto decoded_cons = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
auto decoded_symbol_u63 = reinterpret_cast<void (*)()>((decode_clo(symbol_u63))[0]);
auto decoded_max = reinterpret_cast<void (*)()>((decode_clo(max))[0]);
auto decoded__u47 = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
auto decoded_car = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
auto decoded_int_u45_u62float = reinterpret_cast<void (*)()>((decode_clo(int_u45_u62float))[0]);
auto decoded_filter = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(filter))[0]);
auto decoded__u62_u61 = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
auto decoded__u62 = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
auto decoded_set_u45member_u63 = reinterpret_cast<void (*)()>((decode_clo(set_u45member_u63))[0]);
auto decoded_take_u45helper = reinterpret_cast<void (*)(long, void*, void*, void*, void*, void*)>((decode_clo(take_u45helper))[0]);
auto decoded_call = reinterpret_cast<void (*)(long, void*, void*)>((decode_clo(call))[0]);
auto decoded__u60_u61 = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
auto decoded_float_u45_u62int = reinterpret_cast<void (*)()>((decode_clo(float_u45_u62int))[0]);
auto decoded_append1 = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(append1))[0]);
auto decoded_list_u45ref = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(list_u45ref))[0]);
auto decoded_hash_u45count = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
auto decoded_hash_u45keys = reinterpret_cast<void (*)()>((decode_clo(hash_u45keys))[0]);
auto decoded__u43 = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
auto decoded_min = reinterpret_cast<void (*)()>((decode_clo(min))[0]);
auto decoded_brouhaha_main = reinterpret_cast<void (*)(long, void*, void*)>((decode_clo(brouhaha_main))[0]);
auto decoded_equal_u63 = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
auto decoded_exact_u45floor = reinterpret_cast<void (*)()>((decode_clo(exact_u45floor))[0]);
auto decoded_positive_u63 = reinterpret_cast<void (*)()>((decode_clo(positive_u63))[0]);
auto decoded__u42 = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
auto decoded_append = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
auto decoded_reverse = reinterpret_cast<void (*)(long, void*, void*, void*)>((decode_clo(reverse))[0]);
auto decoded_hash_u45has_u45key_u63 = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
auto decoded_reverse_u45helper = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(reverse_u45helper))[0]);
auto decoded_string_u45ref = reinterpret_cast<void (*)()>((decode_clo(string_u45ref))[0]);
auto decoded_hash_u45set = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
auto decoded_length = reinterpret_cast<void (*)(long, void*, void*, void*)>((decode_clo(length))[0]);
auto decoded_eq_u63 = reinterpret_cast<void (*)()>((decode_clo(eq_u63))[0]);
auto decoded_null_u63 = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
auto decoded_set_u45remove = reinterpret_cast<void (*)()>((decode_clo(set_u45remove))[0]);
auto decoded_abs = reinterpret_cast<void (*)()>((decode_clo(abs_brouhaha))[0]);
auto decoded_set_u45count = reinterpret_cast<void (*)()>((decode_clo(set_u45count))[0]);
auto decoded_map = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(map))[0]);
auto decoded_modulo = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
auto decoded_foldr = reinterpret_cast<void (*)(long, void*, void*, void*, void*, void*)>((decode_clo(foldr))[0]);
auto decoded_drop = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(drop))[0]);
auto decoded_hash = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
auto decoded_string_u63 = reinterpret_cast<void (*)()>((decode_clo(string_u63))[0]);
auto decoded_take = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(take))[0]);
auto decoded_expt = reinterpret_cast<void (*)()>((decode_clo(expt))[0]);
auto decoded_quotient = reinterpret_cast<void (*)()>((decode_clo(quotient))[0]);
auto decoded_even_u63 = reinterpret_cast<void (*)(long, void*, void*, void*)>((decode_clo(even_u63))[0]);
auto decoded_negative_u63 = reinterpret_cast<void (*)()>((decode_clo(negative_u63))[0]);
auto decoded_string_u45_u62list = reinterpret_cast<void (*)()>((decode_clo(string_u45_u62list))[0]);
auto decoded_string_u45append = reinterpret_cast<void (*)()>((decode_clo(string_u45append))[0]);
auto decoded_substring = reinterpret_cast<void (*)()>((decode_clo(substring))[0]);
auto decoded_exact_u45ceiling = reinterpret_cast<void (*)()>((decode_clo(exact_u45ceiling))[0]);
auto decoded_odd_u63 = reinterpret_cast<void (*)(long, void*, void*, void*)>((decode_clo(odd_u63))[0]);
auto decoded_member = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(member))[0]);
auto decoded_remainder = reinterpret_cast<void (*)()>((decode_clo(remainder_brouhaha))[0]);
auto decoded_set = reinterpret_cast<void (*)()>((decode_clo(set))[0]);
auto decoded_string_u45length = reinterpret_cast<void (*)()>((decode_clo(string_u45length))[0]);
auto decoded_hash_u45ref = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
auto decoded_cdr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
auto decoded_list = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
auto decoded_pair_u63 = reinterpret_cast<void (*)()>((decode_clo(pair_u63))[0]);


void _u43_fptr() // + 
{
std::cout<<"In _u43_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8900 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8898 = prim_car(lst);
void* const lst8901 = prim_cdr(lst);
void* const x8899 = apply_prim__u43(lst8901);
arg_buffer[1] = kont8898;
arg_buffer[2] = x8899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8898))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8898 = arg_buffer[2];
void* const x8899 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8898;
arg_buffer[2] = x8899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8898))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u45_fptr() // - 
{
std::cout<<"In _u45_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8904 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8902 = prim_car(lst);
void* const lst8905 = prim_cdr(lst);
void* const x8903 = apply_prim__u45(lst8905);
arg_buffer[1] = kont8902;
arg_buffer[2] = x8903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8902))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8902 = arg_buffer[2];
void* const x8903 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8902;
arg_buffer[2] = x8903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8902))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u42_fptr() // * 
{
std::cout<<"In _u42_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8908 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8906 = prim_car(lst);
void* const lst8909 = prim_cdr(lst);
void* const x8907 = apply_prim__u42(lst8909);
arg_buffer[1] = kont8906;
arg_buffer[2] = x8907;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8906))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8906 = arg_buffer[2];
void* const x8907 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8906;
arg_buffer[2] = x8907;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8906))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u47_fptr() // / 
{
std::cout<<"In _u47_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8912 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8910 = prim_car(lst);
void* const lst8913 = prim_cdr(lst);
void* const x8911 = apply_prim__u47(lst8913);
arg_buffer[1] = kont8910;
arg_buffer[2] = x8911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8910))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8910 = arg_buffer[2];
void* const x8911 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8910;
arg_buffer[2] = x8911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8910))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u61_fptr() // = 
{
std::cout<<"In _u61_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8916 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8914 = prim_car(lst);
void* const lst8917 = prim_cdr(lst);
void* const x8915 = apply_prim__u61(lst8917);
arg_buffer[1] = kont8914;
arg_buffer[2] = x8915;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8914))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8914 = arg_buffer[2];
void* const x8915 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8914;
arg_buffer[2] = x8915;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8914))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u62_fptr() // > 
{
std::cout<<"In _u62_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8920 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8918 = prim_car(lst);
void* const lst8921 = prim_cdr(lst);
void* const x8919 = apply_prim__u62(lst8921);
arg_buffer[1] = kont8918;
arg_buffer[2] = x8919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8918))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8918 = arg_buffer[2];
void* const x8919 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8918;
arg_buffer[2] = x8919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8918))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u60_fptr() // < 
{
std::cout<<"In _u60_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8924 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8922 = prim_car(lst);
void* const lst8925 = prim_cdr(lst);
void* const x8923 = apply_prim__u60(lst8925);
arg_buffer[1] = kont8922;
arg_buffer[2] = x8923;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8922))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8922 = arg_buffer[2];
void* const x8923 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8922;
arg_buffer[2] = x8923;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8922))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u60_u61_fptr() // <= 
{
std::cout<<"In _u60_u61_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8928 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8926 = prim_car(lst);
void* const lst8929 = prim_cdr(lst);
void* const x8927 = apply_prim__u60_u61(lst8929);
arg_buffer[1] = kont8926;
arg_buffer[2] = x8927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8926))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8926 = arg_buffer[2];
void* const x8927 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8926;
arg_buffer[2] = x8927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8926))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void _u62_u61_fptr() // >= 
{
std::cout<<"In _u62_u61_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8932 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8930 = prim_car(lst);
void* const lst8933 = prim_cdr(lst);
void* const x8931 = apply_prim__u62_u61(lst8933);
arg_buffer[1] = kont8930;
arg_buffer[2] = x8931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8930))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8930 = arg_buffer[2];
void* const x8931 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8930;
arg_buffer[2] = x8931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8930))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void modulo_fptr() // modulo 
{
std::cout<<"In modulo_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8936 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8934 = prim_car(lst);
void* const lst8937 = prim_cdr(lst);
void* const x8935 = apply_prim_modulo(lst8937);
arg_buffer[1] = kont8934;
arg_buffer[2] = x8935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8934))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8934 = arg_buffer[2];
void* const x8935 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8934;
arg_buffer[2] = x8935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8934))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void null_u63_fptr() // null? 
{
std::cout<<"In null_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8940 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8938 = prim_car(lst);
void* const lst8941 = prim_cdr(lst);
void* const x8939 = apply_prim_null_u63(lst8941);
arg_buffer[1] = kont8938;
arg_buffer[2] = x8939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8938))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8938 = arg_buffer[2];
void* const x8939 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8938;
arg_buffer[2] = x8939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8938))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void equal_u63_fptr() // equal? 
{
std::cout<<"In equal_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8944 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8942 = prim_car(lst);
void* const lst8945 = prim_cdr(lst);
void* const x8943 = apply_prim_equal_u63(lst8945);
arg_buffer[1] = kont8942;
arg_buffer[2] = x8943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8942))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8942 = arg_buffer[2];
void* const x8943 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8942;
arg_buffer[2] = x8943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8942))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void eq_u63_fptr() // eq? 
{
std::cout<<"In eq_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8948 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8946 = prim_car(lst);
void* const lst8949 = prim_cdr(lst);
void* const x8947 = apply_prim_eq_u63(lst8949);
arg_buffer[1] = kont8946;
arg_buffer[2] = x8947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8946))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8946 = arg_buffer[2];
void* const x8947 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8946;
arg_buffer[2] = x8947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8946))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cons_fptr() // cons 
{
std::cout<<"In cons_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8952 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8950 = prim_car(lst);
void* const lst8953 = prim_cdr(lst);
void* const x8951 = apply_prim_cons(lst8953);
arg_buffer[1] = kont8950;
arg_buffer[2] = x8951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8950))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8950 = arg_buffer[2];
void* const x8951 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8950;
arg_buffer[2] = x8951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8950))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void car_fptr() // car 
{
std::cout<<"In car_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8956 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8954 = prim_car(lst);
void* const lst8957 = prim_cdr(lst);
void* const x8955 = apply_prim_car(lst8957);
arg_buffer[1] = kont8954;
arg_buffer[2] = x8955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8954))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8954 = arg_buffer[2];
void* const x8955 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8954;
arg_buffer[2] = x8955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8954))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void cdr_fptr() // cdr 
{
std::cout<<"In cdr_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8960 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8958 = prim_car(lst);
void* const lst8961 = prim_cdr(lst);
void* const x8959 = apply_prim_cdr(lst8961);
arg_buffer[1] = kont8958;
arg_buffer[2] = x8959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8958))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8958 = arg_buffer[2];
void* const x8959 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8958;
arg_buffer[2] = x8959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8958))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void float_u45_u62int_fptr() // float->int 
{
std::cout<<"In float_u45_u62int_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8964 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8962 = prim_car(lst);
void* const lst8965 = prim_cdr(lst);
void* const x8963 = apply_prim_float_u45_u62int(lst8965);
arg_buffer[1] = kont8962;
arg_buffer[2] = x8963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8962))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8962 = arg_buffer[2];
void* const x8963 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8962;
arg_buffer[2] = x8963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8962))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void int_u45_u62float_fptr() // int->float 
{
std::cout<<"In int_u45_u62float_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8968 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8966 = prim_car(lst);
void* const lst8969 = prim_cdr(lst);
void* const x8967 = apply_prim_int_u45_u62float(lst8969);
arg_buffer[1] = kont8966;
arg_buffer[2] = x8967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8966))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8966 = arg_buffer[2];
void* const x8967 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8966;
arg_buffer[2] = x8967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8966))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_fptr() // hash 
{
std::cout<<"In hash_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8972 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8970 = prim_car(lst);
void* const lst8973 = prim_cdr(lst);
void* const x8971 = apply_prim_hash(lst8973);
arg_buffer[1] = kont8970;
arg_buffer[2] = x8971;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8970))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8970 = arg_buffer[2];
void* const x8971 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8970;
arg_buffer[2] = x8971;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8970))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45ref_fptr() // hash-ref 
{
std::cout<<"In hash_u45ref_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8976 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8974 = prim_car(lst);
void* const lst8977 = prim_cdr(lst);
void* const x8975 = apply_prim_hash_u45ref(lst8977);
arg_buffer[1] = kont8974;
arg_buffer[2] = x8975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8974))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8974 = arg_buffer[2];
void* const x8975 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8974;
arg_buffer[2] = x8975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8974))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45set_fptr() // hash-set 
{
std::cout<<"In hash_u45set_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8980 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8978 = prim_car(lst);
void* const lst8981 = prim_cdr(lst);
void* const x8979 = apply_prim_hash_u45set(lst8981);
arg_buffer[1] = kont8978;
arg_buffer[2] = x8979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8978))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8978 = arg_buffer[2];
void* const x8979 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8978;
arg_buffer[2] = x8979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8978))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45keys_fptr() // hash-keys 
{
std::cout<<"In hash_u45keys_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8984 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8982 = prim_car(lst);
void* const lst8985 = prim_cdr(lst);
void* const x8983 = apply_prim_hash_u45keys(lst8985);
arg_buffer[1] = kont8982;
arg_buffer[2] = x8983;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8982))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8982 = arg_buffer[2];
void* const x8983 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8982;
arg_buffer[2] = x8983;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8982))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
std::cout<<"In hash_u45has_u45key_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8988 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8986 = prim_car(lst);
void* const lst8989 = prim_cdr(lst);
void* const x8987 = apply_prim_hash_u45has_u45key_u63(lst8989);
arg_buffer[1] = kont8986;
arg_buffer[2] = x8987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8986))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8986 = arg_buffer[2];
void* const x8987 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont8986;
arg_buffer[2] = x8987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8986))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void hash_u45count_fptr() // hash-count 
{
std::cout<<"In hash_u45count_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8992 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8990 = prim_car(lst);
void* const lst8993 = prim_cdr(lst);
void* const x8991 = apply_prim_hash_u45count(lst8993);
arg_buffer[1] = kont8990;
arg_buffer[2] = x8991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8990))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8990 = arg_buffer[2];
void* const x8991 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont8990;
arg_buffer[2] = x8991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8990))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_fptr() // set 
{
std::cout<<"In set_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env8996 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8994 = prim_car(lst);
void* const lst8997 = prim_cdr(lst);
void* const x8995 = apply_prim_set(lst8997);
arg_buffer[1] = kont8994;
arg_buffer[2] = x8995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8994))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8994 = arg_buffer[2];
void* const x8995 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont8994;
arg_buffer[2] = x8995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8994))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45_u62list_fptr() // set->list 
{
std::cout<<"In set_u45_u62list_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9000 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8998 = prim_car(lst);
void* const lst9001 = prim_cdr(lst);
void* const x8999 = apply_prim_set_u45_u62list(lst9001);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8998))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont8998 = arg_buffer[2];
void* const x8999 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8998))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void list_u45_u62set_fptr() // list->set 
{
std::cout<<"In list_u45_u62set_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9004 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9002 = prim_car(lst);
void* const lst9005 = prim_cdr(lst);
void* const x9003 = apply_prim_list_u45_u62set(lst9005);
arg_buffer[1] = kont9002;
arg_buffer[2] = x9003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9002))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9002 = arg_buffer[2];
void* const x9003 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9002;
arg_buffer[2] = x9003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9002))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45add_fptr() // set-add 
{
std::cout<<"In set_u45add_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9008 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9006 = prim_car(lst);
void* const lst9009 = prim_cdr(lst);
void* const x9007 = apply_prim_set_u45add(lst9009);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9006))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9006 = arg_buffer[2];
void* const x9007 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9006))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45member_u63_fptr() // set-member? 
{
std::cout<<"In set_u45member_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9012 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9010 = prim_car(lst);
void* const lst9013 = prim_cdr(lst);
void* const x9011 = apply_prim_set_u45member_u63(lst9013);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9010))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9010 = arg_buffer[2];
void* const x9011 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9010))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45remove_fptr() // set-remove 
{
std::cout<<"In set_u45remove_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9016 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9014 = prim_car(lst);
void* const lst9017 = prim_cdr(lst);
void* const x9015 = apply_prim_set_u45remove(lst9017);
arg_buffer[1] = kont9014;
arg_buffer[2] = x9015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9014))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9014 = arg_buffer[2];
void* const x9015 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9014;
arg_buffer[2] = x9015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9014))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void set_u45count_fptr() // set-count 
{
std::cout<<"In set_u45count_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9020 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9018 = prim_car(lst);
void* const lst9021 = prim_cdr(lst);
void* const x9019 = apply_prim_set_u45count(lst9021);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9018))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9018 = arg_buffer[2];
void* const x9019 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9018))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u63_fptr() // string? 
{
std::cout<<"In string_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9024 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9022 = prim_car(lst);
void* const lst9025 = prim_cdr(lst);
void* const x9023 = apply_prim_string_u63(lst9025);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9022))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9022 = arg_buffer[2];
void* const x9023 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9022))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45length_fptr() // string-length 
{
std::cout<<"In string_u45length_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9028 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9026 = prim_car(lst);
void* const lst9029 = prim_cdr(lst);
void* const x9027 = apply_prim_string_u45length(lst9029);
arg_buffer[1] = kont9026;
arg_buffer[2] = x9027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9026))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9026 = arg_buffer[2];
void* const x9027 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9026;
arg_buffer[2] = x9027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9026))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45ref_fptr() // string-ref 
{
std::cout<<"In string_u45ref_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9032 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9030 = prim_car(lst);
void* const lst9033 = prim_cdr(lst);
void* const x9031 = apply_prim_string_u45ref(lst9033);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9030))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9030 = arg_buffer[2];
void* const x9031 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9030))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void substring_fptr() // substring 
{
std::cout<<"In substring_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9036 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9034 = prim_car(lst);
void* const lst9037 = prim_cdr(lst);
void* const x9035 = apply_prim_substring(lst9037);
arg_buffer[1] = kont9034;
arg_buffer[2] = x9035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9034))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9034 = arg_buffer[2];
void* const x9035 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9034;
arg_buffer[2] = x9035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9034))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45append_fptr() // string-append 
{
std::cout<<"In string_u45append_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9040 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9038 = prim_car(lst);
void* const lst9041 = prim_cdr(lst);
void* const x9039 = apply_prim_string_u45append(lst9041);
arg_buffer[1] = kont9038;
arg_buffer[2] = x9039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9038))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9038 = arg_buffer[2];
void* const x9039 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9038;
arg_buffer[2] = x9039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9038))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void string_u45_u62list_fptr() // string->list 
{
std::cout<<"In string_u45_u62list_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9044 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9042 = prim_car(lst);
void* const lst9045 = prim_cdr(lst);
void* const x9043 = apply_prim_string_u45_u62list(lst9045);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9042))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9042 = arg_buffer[2];
void* const x9043 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9042))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45floor_fptr() // exact-floor 
{
std::cout<<"In exact_u45floor_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9048 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9046 = prim_car(lst);
void* const lst9049 = prim_cdr(lst);
void* const x9047 = apply_prim_exact_u45floor(lst9049);
arg_buffer[1] = kont9046;
arg_buffer[2] = x9047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9046))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9046 = arg_buffer[2];
void* const x9047 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9046;
arg_buffer[2] = x9047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9046))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45ceiling_fptr() // exact-ceiling 
{
std::cout<<"In exact_u45ceiling_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9052 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9050 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9051 = apply_prim_exact_u45ceiling(lst9053);
arg_buffer[1] = kont9050;
arg_buffer[2] = x9051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9050))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9050 = arg_buffer[2];
void* const x9051 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9050;
arg_buffer[2] = x9051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9050))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void exact_u45round_fptr() // exact-round 
{
std::cout<<"In exact_u45round_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9056 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9054 = prim_car(lst);
void* const lst9057 = prim_cdr(lst);
void* const x9055 = apply_prim_exact_u45round(lst9057);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9054))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9054 = arg_buffer[2];
void* const x9055 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9054))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void abs_fptr() // abs 
{
std::cout<<"In abs_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9060 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9058 = prim_car(lst);
void* const lst9061 = prim_cdr(lst);
void* const x9059 = apply_prim_abs(lst9061);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9058))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9058 = arg_buffer[2];
void* const x9059 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9058))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void max_fptr() // max 
{
std::cout<<"In max_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9064 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9062 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9063 = apply_prim_max(lst9065);
arg_buffer[1] = kont9062;
arg_buffer[2] = x9063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9062))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9062 = arg_buffer[2];
void* const x9063 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9062;
arg_buffer[2] = x9063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9062))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void min_fptr() // min 
{
std::cout<<"In min_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9068 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9066 = prim_car(lst);
void* const lst9069 = prim_cdr(lst);
void* const x9067 = apply_prim_min(lst9069);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9066))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9066 = arg_buffer[2];
void* const x9067 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9066))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void expt_fptr() // expt 
{
std::cout<<"In expt_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9072 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9070 = prim_car(lst);
void* const lst9073 = prim_cdr(lst);
void* const x9071 = apply_prim_expt(lst9073);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9070))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9070 = arg_buffer[2];
void* const x9071 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9070))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void sqrt_fptr() // sqrt 
{
std::cout<<"In sqrt_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9076 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9074 = prim_car(lst);
void* const lst9077 = prim_cdr(lst);
void* const x9075 = apply_prim_sqrt(lst9077);
arg_buffer[1] = kont9074;
arg_buffer[2] = x9075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9074))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9074 = arg_buffer[2];
void* const x9075 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9074;
arg_buffer[2] = x9075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9074))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void remainder_fptr() // remainder 
{
std::cout<<"In remainder_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9080 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9078 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9079 = apply_prim_remainder(lst9081);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9078 = arg_buffer[2];
void* const x9079 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void quotient_fptr() // quotient 
{
std::cout<<"In quotient_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9084 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9082 = prim_car(lst);
void* const lst9085 = prim_cdr(lst);
void* const x9083 = apply_prim_quotient(lst9085);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9082))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9082 = arg_buffer[2];
void* const x9083 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9082))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void random_fptr() // random 
{
std::cout<<"In random_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9088 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9086 = prim_car(lst);
void* const lst9089 = prim_cdr(lst);
void* const x9087 = apply_prim_random(lst9089);
arg_buffer[1] = kont9086;
arg_buffer[2] = x9087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9086))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9086 = arg_buffer[2];
void* const x9087 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9086;
arg_buffer[2] = x9087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9086))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void symbol_u63_fptr() // symbol? 
{
std::cout<<"In symbol_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9092 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9090 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9091 = apply_prim_symbol_u63(lst9093);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9090))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9090 = arg_buffer[2];
void* const x9091 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9090))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void pair_u63_fptr() // pair? 
{
std::cout<<"In pair_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9096 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9094 = prim_car(lst);
void* const lst9097 = prim_cdr(lst);
void* const x9095 = apply_prim_pair_u63(lst9097);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9094))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9094 = arg_buffer[2];
void* const x9095 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9094))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void positive_u63_fptr() // positive? 
{
std::cout<<"In positive_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9100 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9098 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9099 = apply_prim_positive_u63(lst9101);
arg_buffer[1] = kont9098;
arg_buffer[2] = x9099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9098))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9098 = arg_buffer[2];
void* const x9099 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9098;
arg_buffer[2] = x9099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9098))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void negative_u63_fptr() // negative? 
{
std::cout<<"In negative_u63_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9104 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9102 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9103 = apply_prim_negative_u63(lst9105);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9102))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9102 = arg_buffer[2];
void* const x9103 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9102))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void list_fptr() // list 
{
std::cout<<"In list_fptr"<<std::endl;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _env9108 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9106 = prim_car(lst);
void* const lst9109 = prim_cdr(lst);
void* const x9107 = apply_prim_list(lst9109);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9106))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9106 = arg_buffer[2];
void* const x9107 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9106))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void even_u63_fptr(long numArgs, void* _8833, void* kont8800, void* x) // even? 
{
std::cout<<"In even_u63_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8714 = int8891;
void* const id_8715 = int8897;
void* const id_8716 = apply_prim_modulo_2(x, id_8715);

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(id_8714, id_8716);
arg_buffer[1] = kont8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8800))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void odd_u63_fptr(long numArgs, void* _8834, void* kont8801, void* x) // odd? 
{
std::cout<<"In odd_u63_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8717 = int8893;
void* const id_8718 = int8897;
void* const id_8719 = apply_prim_modulo_2(x, id_8718);

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(id_8717, id_8719);
arg_buffer[1] = kont8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8801))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void list_u45ref_fptr(long numArgs, void* _8835, void* kont8802, void* lst, void* n) // list-ref 
{
std::cout<<"In list_u45ref_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8720 = int8891;
void* const id_8721 = apply_prim__u61_2(id_8720, n);

//if-clause
bool if_guard9110 = is_true(id_8721);
if(if_guard9110)
{
void* const xy8722 = apply_prim_car_1(lst);

//clo-app
arg_buffer[1] = kont8802;
arg_buffer[2] = xy8722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8723 = apply_prim_cdr_1(lst);
void* const id_8724 = int8893;
void* const id_8725 = apply_prim__u45_2(n, id_8724);

//clo-app
decoded_list_u45ref(4, list_u45ref, kont8802, id_8723, id_8725);
}

}

void lam8836_fptr() // lam8836 
{
std::cout<<"In lam8836_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8837 = arg_buffer[1];
//reading env and args
void* const id_8729 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8837);
void* const kont8803 = decode_clo_array[3];
void* const lst = decode_clo_array[2];
void* const item = decode_clo_array[1];

//if-clause
bool if_guard9111 = is_true(id_8729);
if(if_guard9111)
{
void* const xy8730 = bool_f8886;

//clo-app
arg_buffer[1] = kont8803;
arg_buffer[2] = xy8730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8731 = apply_prim_car_1(lst);
void* const id_8732 = apply_prim_equal_u63_2(item, id_8731);

//if-clause
bool if_guard9112 = is_true(id_8732);
if(if_guard9112)
{

//clo-app
arg_buffer[1] = kont8803;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8733 = apply_prim_cdr_1(lst);

//clo-app
decoded_member(4, member, kont8803, item, id_8733);
}

}

}

void member_fptr(long numArgs, void* _8838, void* kont8803, void* item, void* lst) // member 
{
std::cout<<"In member_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8726 = apply_prim_null_u63_1(item);

//creating new closure instance
void** clo9113 = alloc_clo(lam8836_fptr, 3);

//setting env list
clo9113[1] = item;
clo9113[2] = lst;
clo9113[3] = kont8803;
void* f8804 = encode_clo(clo9113);



//if-clause
bool if_guard9114 = is_true(id_8726);
if(if_guard9114)
{
void* const xy8727 = apply_prim_null_u63_1(item);

//clo-app
arg_buffer[1] = f8804;
arg_buffer[2] = xy8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8804))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const xy8728 = apply_prim_null_u63_1(lst);

//clo-app
arg_buffer[1] = f8804;
arg_buffer[2] = xy8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8804))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void member_u63_fptr(long numArgs, void* _8839, void* kont8805, void* x, void* lst) // member? 
{
std::cout<<"In member_u63_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8734 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9115 = is_true(id_8734);
if(if_guard9115)
{
void* const xy8735 = bool_f8886;

//clo-app
arg_buffer[1] = kont8805;
arg_buffer[2] = xy8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8805))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8736 = apply_prim_car_1(lst);
void* const id_8737 = apply_prim_equal_u63_2(id_8736, x);

//if-clause
bool if_guard9116 = is_true(id_8737);
if(if_guard9116)
{
void* const xy8738 = bool_t8885;

//clo-app
arg_buffer[1] = kont8805;
arg_buffer[2] = xy8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8805))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8739 = apply_prim_cdr_1(lst);

//clo-app
decoded_member_u63(4, member_u63, kont8805, x, id_8739);
}

}

}

void lam8840_fptr() // lam8840 
{
std::cout<<"In lam8840_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8841 = arg_buffer[1];
//reading env and args
void* const id_8744 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8841);
void* const id_8742 = decode_clo_array[2];
void* const kont8806 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim__u43_2(id_8742, id_8744);
arg_buffer[1] = kont8806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void length_fptr(long numArgs, void* _8842, void* kont8806, void* lst) // length 
{
std::cout<<"In length_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8740 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9117 = is_true(id_8740);
if(if_guard9117)
{
void* const xy8741 = int8891;

//clo-app
arg_buffer[1] = kont8806;
arg_buffer[2] = xy8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8742 = int8893;
void* const id_8743 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9118 = alloc_clo(lam8840_fptr, 2);

//setting env list
clo9118[1] = kont8806;
clo9118[2] = id_8742;
void* f8807 = encode_clo(clo9118);



//clo-app
decoded_length(3, length, f8807, id_8743);
}

}

void lam8843_fptr() // lam8843 
{
std::cout<<"In lam8843_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8844 = arg_buffer[1];
//reading env and args
void* const id_8750 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8844);
void* const kont8808 = decode_clo_array[2];
void* const id_8748 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim_cons_2(id_8748, id_8750);
arg_buffer[1] = kont8808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8845_fptr() // lam8845 
{
std::cout<<"In lam8845_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8846 = arg_buffer[1];
//reading env and args
void* const id_8748 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8846);
void* const lst = decode_clo_array[3];
void* const kont8808 = decode_clo_array[2];
void* const proc = decode_clo_array[1];
void* const id_8749 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9119 = alloc_clo(lam8843_fptr, 2);

//setting env list
clo9119[1] = id_8748;
clo9119[2] = kont8808;
void* f8809 = encode_clo(clo9119);



//clo-app
decoded_map(4, map, f8809, proc, id_8749);
}

void map_fptr(long numArgs, void* _8847, void* kont8808, void* proc, void* lst) // map 
{
std::cout<<"In map_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8745 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9120 = is_true(id_8745);
if(if_guard9120)
{
void* const xy8746 = apply_prim_list_0();

//clo-app
arg_buffer[1] = kont8808;
arg_buffer[2] = xy8746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8747 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9121 = alloc_clo(lam8845_fptr, 3);

//setting env list
clo9121[1] = proc;
clo9121[2] = kont8808;
clo9121[3] = lst;
void* f8810 = encode_clo(clo9121);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8810;
arg_buffer[3] = id_8747;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8848_fptr() // lam8848 
{
std::cout<<"In lam8848_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8849 = arg_buffer[1];
//reading env and args
void* const id_8757 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8849);
void* const id_8755 = decode_clo_array[2];
void* const kont8811 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim_cons_2(id_8755, id_8757);
arg_buffer[1] = kont8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8811))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8850_fptr() // lam8850 
{
std::cout<<"In lam8850_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8851 = arg_buffer[1];
//reading env and args
void* const id_8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8851);
void* const lst = decode_clo_array[3];
void* const op = decode_clo_array[2];
void* const kont8811 = decode_clo_array[1];

//if-clause
bool if_guard9122 = is_true(id_8754);
if(if_guard9122)
{
void* const id_8755 = apply_prim_car_1(lst);
void* const id_8756 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9123 = alloc_clo(lam8848_fptr, 2);

//setting env list
clo9123[1] = kont8811;
clo9123[2] = id_8755;
void* f8812 = encode_clo(clo9123);



//clo-app
decoded_filter(4, filter, f8812, op, id_8756);
}
else
{
void* const id_8758 = apply_prim_cdr_1(lst);

//clo-app
decoded_filter(4, filter, kont8811, op, id_8758);
}

}

void filter_fptr(long numArgs, void* _8852, void* kont8811, void* op, void* lst) // filter 
{
std::cout<<"In filter_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8751 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9124 = is_true(id_8751);
if(if_guard9124)
{
void* const xy8752 = apply_prim_list_0();

//clo-app
arg_buffer[1] = kont8811;
arg_buffer[2] = xy8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8811))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8753 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9125 = alloc_clo(lam8850_fptr, 3);

//setting env list
clo9125[1] = kont8811;
clo9125[2] = op;
clo9125[3] = lst;
void* f8813 = encode_clo(clo9125);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8813;
arg_buffer[3] = id_8753;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void drop_fptr(long numArgs, void* _8853, void* kont8814, void* lst, void* n) // drop 
{
std::cout<<"In drop_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8759 = int8891;
void* const id_8760 = apply_prim__u61_2(n, id_8759);

//if-clause
bool if_guard9126 = is_true(id_8760);
if(if_guard9126)
{

//clo-app
arg_buffer[1] = kont8814;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8761 = apply_prim_cdr_1(lst);
void* const id_8762 = int8893;
void* const id_8763 = apply_prim__u45_2(n, id_8762);

//clo-app
decoded_drop(4, drop, kont8814, id_8761, id_8763);
}

}

void lam8854_fptr() // lam8854 
{
std::cout<<"In lam8854_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8855 = arg_buffer[1];
//reading env and args
void* const id_8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8855);
void* const lst = decode_clo_array[3];
void* const fun = decode_clo_array[2];
void* const kont8815 = decode_clo_array[1];
void* const id_8767 = apply_prim_cdr_1(lst);

//clo-app
decoded_foldl(5, foldl, kont8815, fun, id_8766, id_8767);
}

void foldl_fptr(long numArgs, void* _8856, void* kont8815, void* fun, void* acc, void* lst) // foldl 
{
std::cout<<"In foldl_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8764 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9127 = is_true(id_8764);
if(if_guard9127)
{

//clo-app
arg_buffer[1] = kont8815;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8815))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8765 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9128 = alloc_clo(lam8854_fptr, 3);

//setting env list
clo9128[1] = kont8815;
clo9128[2] = fun;
clo9128[3] = lst;
void* f8816 = encode_clo(clo9128);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8816;
arg_buffer[3] = id_8765;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8857_fptr() // lam8857 
{
std::cout<<"In lam8857_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8858 = arg_buffer[1];
//reading env and args
void* const id_8771 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8858);
void* const fun = decode_clo_array[3];
void* const id_8769 = decode_clo_array[2];
void* const kont8817 = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8817;
arg_buffer[3] = id_8769;
arg_buffer[4] = id_8771;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void foldr_fptr(long numArgs, void* _8859, void* kont8817, void* fun, void* acc, void* lst) // foldr 
{
std::cout<<"In foldr_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8768 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9129 = is_true(id_8768);
if(if_guard9129)
{

//clo-app
arg_buffer[1] = kont8817;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8817))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8769 = apply_prim_car_1(lst);
void* const id_8770 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9130 = alloc_clo(lam8857_fptr, 3);

//setting env list
clo9130[1] = kont8817;
clo9130[2] = id_8769;
clo9130[3] = fun;
void* f8818 = encode_clo(clo9130);



//clo-app
decoded_foldr(5, foldr, f8818, fun, acc, id_8770);
}

}

void reverse_u45helper_fptr(long numArgs, void* _8860, void* kont8819, void* lst, void* lst2) // reverse-helper 
{
std::cout<<"In reverse_u45helper_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8772 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9131 = is_true(id_8772);
if(if_guard9131)
{

//clo-app
arg_buffer[1] = kont8819;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8819))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8773 = apply_prim_cdr_1(lst);
void* const id_8774 = apply_prim_car_1(lst);
void* const id_8775 = apply_prim_cons_2(id_8774, lst2);

//clo-app
decoded_reverse_u45helper(4, reverse_u45helper, kont8819, id_8773, id_8775);
}

}

void reverse_fptr(long numArgs, void* _8861, void* kont8820, void* lst) // reverse 
{
std::cout<<"In reverse_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8776 = apply_prim_list_0();

//clo-app
decoded_reverse_u45helper(4, reverse_u45helper, kont8820, lst, id_8776);
}

void lam8862_fptr() // lam8862 
{
std::cout<<"In lam8862_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8863 = arg_buffer[1];
//reading env and args
void* const id_8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8863);
void* const kont8821 = decode_clo_array[2];
void* const id_8778 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim_cons_2(id_8778, id_8780);
arg_buffer[1] = kont8821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8821))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void append1_fptr(long numArgs, void* _8864, void* kont8821, void* lhs, void* rhs) // append1 
{
std::cout<<"In append1_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8777 = apply_prim_null_u63_1(lhs);

//if-clause
bool if_guard9132 = is_true(id_8777);
if(if_guard9132)
{

//clo-app
arg_buffer[1] = kont8821;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8821))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8778 = apply_prim_car_1(lhs);
void* const id_8779 = apply_prim_cdr_1(lhs);

//creating new closure instance
void** clo9133 = alloc_clo(lam8862_fptr, 2);

//setting env list
clo9133[1] = id_8778;
clo9133[2] = kont8821;
void* f8822 = encode_clo(clo9133);



//clo-app
decoded_append1(4, append1, f8822, id_8779, rhs);
}

}

void lam8865_fptr() // lam8865 
{
std::cout<<"In lam8865_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8866 = arg_buffer[1];
//reading env and args
void* const id_8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8866);
void* const kont8823 = decode_clo_array[2];
void* const id_8781 = decode_clo_array[1];

//clo-app
decoded_foldr(5, foldr, kont8823, append1, id_8781, id_8783);
}

void lam8867_fptr() // lam8867 
{
std::cout<<"In lam8867_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8868 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8868);
void* const kont8823 = decode_clo_array[2];
void* const xs = decode_clo_array[1];
void* const id_8781 = apply_prim_list_0();
void* const id_8782 = apply_prim_list_1(xs);

//creating new closure instance
void** clo9134 = alloc_clo(lam8865_fptr, 2);

//setting env list
clo9134[1] = id_8781;
clo9134[2] = kont8823;
void* f8824 = encode_clo(clo9134);



//clo-app
decoded_append1(4, append1, f8824, id_8782, x);
}

void append_fptr() // append 
{
std::cout<<"In append_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8869 = arg_buffer[1];
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

void* const kont8823 = apply_prim_car_1(vargs);
void* const vargs8832 = apply_prim_cdr_1(vargs);
void* const xs = apply_prim_car_1(vargs8832);
void* const vargs8713 = apply_prim_cdr_1(vargs8832);

//creating new closure instance
void** clo9135 = alloc_clo(lam8867_fptr, 2);

//setting env list
clo9135[1] = xs;
clo9135[2] = kont8823;
void* f8825 = encode_clo(clo9135);



//clo-app
arg_buffer[1] = f8825;
arg_buffer[2] = vargs8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8825))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8870_fptr() // lam8870 
{
std::cout<<"In lam8870_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8871 = arg_buffer[1];
//reading env and args
void* const xy8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8871);
void* const kont8826 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8826;
arg_buffer[2] = xy8786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void take_u45helper_fptr(long numArgs, void* _8872, void* kont8826, void* lst, void* n, void* lst2) // take-helper 
{
std::cout<<"In take_u45helper_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8784 = int8891;
void* const id_8785 = apply_prim__u61_2(n, id_8784);

//if-clause
bool if_guard9136 = is_true(id_8785);
if(if_guard9136)
{

//creating new closure instance
void** clo9137 = alloc_clo(lam8870_fptr, 1);

//setting env list
clo9137[1] = kont8826;
void* f8827 = encode_clo(clo9137);



//clo-app
decoded_reverse(3, reverse, f8827, lst2);
}
else
{
void* const id_8787 = apply_prim_cdr_1(lst);
void* const id_8788 = int8893;
void* const id_8789 = apply_prim__u45_2(n, id_8788);
void* const id_8790 = apply_prim_car_1(lst);
void* const id_8791 = apply_prim_cons_2(id_8790, lst2);

//clo-app
decoded_take_u45helper(5, take_u45helper, kont8826, id_8787, id_8789, id_8791);
}

}

void take_fptr(long numArgs, void* _8873, void* kont8828, void* lst, void* n) // take 
{
std::cout<<"In take_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8792 = apply_prim_list_0();

//clo-app
decoded_take_u45helper(5, take_u45helper, kont8828, lst, n, id_8792);
}

void call_fptr(long numArgs, void* _8874, void* kont8829) // call 
{
std::cout<<"In call_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8793 = int8893;
void* const id_8794 = int8897;
void* const id_8795 = int8895;
void* const id_8796 = int8896;
void* const id_8797 = apply_prim_list_4(id_8793, id_8794, id_8795, id_8796);
void* const id_8798 = int8897;

//clo-app
decoded_take(4, take, kont8829, id_8797, id_8798);
}

void lam8875_fptr() // lam8875 
{
std::cout<<"In lam8875_fptr"<<std::endl;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8876 = arg_buffer[1];
//reading env and args
void* const xy8799 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8876);
void* const kont8830 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8830;
arg_buffer[2] = xy8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8830))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void brouhaha_main_fptr(long numArgs, void* _8877, void* kont8830) // brouhaha_main 
{
std::cout<<"In brouhaha_main_fptr"<<std::endl;
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo9138 = alloc_clo(lam8875_fptr, 1);

//setting env list
clo9138[1] = kont8830;
void* f8831 = encode_clo(clo9138);



//clo-app
decoded_call(2, call, f8831);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8891 = reinterpret_cast<void*>(encode_int(0));
bool_t8885 = encode_bool(true);
int8893 = reinterpret_cast<void*>(encode_int(1));
bool_f8886 = encode_bool(false);
int8897 = reinterpret_cast<void*>(encode_int(2));
int8895 = reinterpret_cast<void*>(encode_int(3));
int8896 = reinterpret_cast<void*>(encode_int(4));


//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
decoded_brouhaha_main(2, encode_null(), fhalt_clo);
}

