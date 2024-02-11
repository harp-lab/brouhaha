#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8980;
void* bool_t8975;
void* int8979;
void* bool_f8973;
void* int8960;
void* int8981;



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

void even_u63_fptr(long numArgs, void* _8895, void* kont8852, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void odd_u63_fptr(long numArgs, void* _8896, void* kont8853, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(long numArgs, void* _8897, void* kont8854, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8898_fptr(); // lam8898
void* lam8898 = encode_clo(alloc_clo(lam8898_fptr, 0));

void member_fptr(long numArgs, void* _8900, void* kont8855, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(long numArgs, void* _8901, void* kont8857, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8902_fptr(); // lam8902
void* lam8902 = encode_clo(alloc_clo(lam8902_fptr, 0));

void length_fptr(long numArgs, void* _8904, void* kont8858, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8905_fptr(); // lam8905
void* lam8905 = encode_clo(alloc_clo(lam8905_fptr, 0));

void lam8907_fptr(); // lam8907
void* lam8907 = encode_clo(alloc_clo(lam8907_fptr, 0));

void map_fptr(long numArgs, void* _8909, void* kont8860, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8910_fptr(); // lam8910
void* lam8910 = encode_clo(alloc_clo(lam8910_fptr, 0));

void lam8912_fptr(); // lam8912
void* lam8912 = encode_clo(alloc_clo(lam8912_fptr, 0));

void filter_fptr(long numArgs, void* _8914, void* kont8863, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(long numArgs, void* _8915, void* kont8866, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8916_fptr(); // lam8916
void* lam8916 = encode_clo(alloc_clo(lam8916_fptr, 0));

void foldl_fptr(long numArgs, void* _8918, void* kont8867, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8919_fptr(); // lam8919
void* lam8919 = encode_clo(alloc_clo(lam8919_fptr, 0));

void foldr_fptr(long numArgs, void* _8921, void* kont8869, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(long numArgs, void* _8922, void* kont8871, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(long numArgs, void* _8923, void* kont8872, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8924_fptr(); // lam8924
void* lam8924 = encode_clo(alloc_clo(lam8924_fptr, 0));

void append1_fptr(long numArgs, void* _8926, void* kont8873, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8927_fptr(); // lam8927
void* lam8927 = encode_clo(alloc_clo(lam8927_fptr, 0));

void lam8929_fptr(); // lam8929
void* lam8929 = encode_clo(alloc_clo(lam8929_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8932_fptr(); // lam8932
void* lam8932 = encode_clo(alloc_clo(lam8932_fptr, 0));

void take_u45helper_fptr(long numArgs, void* _8934, void* kont8878, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(long numArgs, void* _8935, void* kont8880, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8936_fptr(); // lam8936
void* lam8936 = encode_clo(alloc_clo(lam8936_fptr, 0));

void lam8938_fptr(); // lam8938
void* lam8938 = encode_clo(alloc_clo(lam8938_fptr, 0));

void ok_u63_fptr(long numArgs, void* _8940, void* kont8881, void* row, void* dist, void* placed); // ok?
void* ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam8941_fptr(); // lam8941
void* lam8941 = encode_clo(alloc_clo(lam8941_fptr, 0));

void lam8943_fptr(); // lam8943
void* lam8943 = encode_clo(alloc_clo(lam8943_fptr, 0));

void lam8945_fptr(); // lam8945
void* lam8945 = encode_clo(alloc_clo(lam8945_fptr, 0));

void lam8947_fptr(); // lam8947
void* lam8947 = encode_clo(alloc_clo(lam8947_fptr, 0));

void lam8949_fptr(); // lam8949
void* lam8949 = encode_clo(alloc_clo(lam8949_fptr, 0));

void q_u45helper_fptr(long numArgs, void* _8951, void* kont8884, void* stack, void* count); // q-helper
void* q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void iota1_fptr(long numArgs, void* _8952, void* kont8890, void* n, void* l); // iota1
void* iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam8953_fptr(); // lam8953
void* lam8953 = encode_clo(alloc_clo(lam8953_fptr, 0));

void nqueens_fptr(long numArgs, void* _8955, void* kont8891, void* n); // nqueens
void* nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr(long numArgs, void* _8956, void* kont8893); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));




// pre-decoding global symbols
auto decoded_set_u45add = reinterpret_cast<void (*)()>((decode_clo(set_u45add))[0]);
auto decoded_random = reinterpret_cast<void (*)()>((decode_clo(random_brouhaha))[0]);
auto decoded_ok_u63 = reinterpret_cast<void (*)(long, void*, void*, void*, void*, void*)>((decode_clo(ok_u63))[0]);
auto decoded__u45 = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
auto decoded__u61 = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
auto decoded_exact_u45round = reinterpret_cast<void (*)()>((decode_clo(exact_u45round))[0]);
auto decoded_list_u45_u62set = reinterpret_cast<void (*)()>((decode_clo(list_u45_u62set))[0]);
auto decoded_q_u45helper = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(q_u45helper))[0]);
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
auto decoded_iota1 = reinterpret_cast<void (*)(long, void*, void*, void*, void*)>((decode_clo(iota1))[0]);
auto decoded_cdr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
auto decoded_list = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
auto decoded_pair_u63 = reinterpret_cast<void (*)()>((decode_clo(pair_u63))[0]);
auto decoded_nqueens = reinterpret_cast<void (*)(long, void*, void*, void*)>((decode_clo(nqueens))[0]);


void _u43_fptr() // + 
{
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
void* const x8983 = apply_prim__u43(lst8985);
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
void* const x8983 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8982;
arg_buffer[2] = x8983;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8982))[0]);

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
void* const _env8988 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8986 = prim_car(lst);
void* const lst8989 = prim_cdr(lst);
void* const x8987 = apply_prim__u45(lst8989);
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
void* const x8987 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8986;
arg_buffer[2] = x8987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8986))[0]);

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
void* const _env8992 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8990 = prim_car(lst);
void* const lst8993 = prim_cdr(lst);
void* const x8991 = apply_prim__u42(lst8993);
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
void* const x8991 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8990;
arg_buffer[2] = x8991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8990))[0]);

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
void* const _env8996 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8994 = prim_car(lst);
void* const lst8997 = prim_cdr(lst);
void* const x8995 = apply_prim__u47(lst8997);
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
void* const x8995 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8994;
arg_buffer[2] = x8995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8994))[0]);

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
void* const _env9000 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont8998 = prim_car(lst);
void* const lst9001 = prim_cdr(lst);
void* const x8999 = apply_prim__u61(lst9001);
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
void* const x8999 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8998;
arg_buffer[2] = x8999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8998))[0]);

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
void* const _env9004 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9002 = prim_car(lst);
void* const lst9005 = prim_cdr(lst);
void* const x9003 = apply_prim__u62(lst9005);
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
void* const x9003 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont9002;
arg_buffer[2] = x9003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9002))[0]);

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
void* const _env9008 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9006 = prim_car(lst);
void* const lst9009 = prim_cdr(lst);
void* const x9007 = apply_prim__u60(lst9009);
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
void* const x9007 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9006))[0]);

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
void* const _env9012 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9010 = prim_car(lst);
void* const lst9013 = prim_cdr(lst);
void* const x9011 = apply_prim__u60_u61(lst9013);
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
void* const x9011 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont9010;
arg_buffer[2] = x9011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9010))[0]);

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
void* const _env9016 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9014 = prim_car(lst);
void* const lst9017 = prim_cdr(lst);
void* const x9015 = apply_prim__u62_u61(lst9017);
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
void* const x9015 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont9014;
arg_buffer[2] = x9015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9014))[0]);

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
void* const _env9020 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9018 = prim_car(lst);
void* const lst9021 = prim_cdr(lst);
void* const x9019 = apply_prim_modulo(lst9021);
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
void* const x9019 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9018))[0]);

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
void* const _env9024 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9022 = prim_car(lst);
void* const lst9025 = prim_cdr(lst);
void* const x9023 = apply_prim_null_u63(lst9025);
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
void* const x9023 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont9022;
arg_buffer[2] = x9023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9022))[0]);

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
void* const _env9028 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9026 = prim_car(lst);
void* const lst9029 = prim_cdr(lst);
void* const x9027 = apply_prim_equal_u63(lst9029);
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
void* const x9027 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont9026;
arg_buffer[2] = x9027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9026))[0]);

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
void* const _env9032 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9030 = prim_car(lst);
void* const lst9033 = prim_cdr(lst);
void* const x9031 = apply_prim_eq_u63(lst9033);
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
void* const x9031 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9030))[0]);

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
void* const _env9036 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9034 = prim_car(lst);
void* const lst9037 = prim_cdr(lst);
void* const x9035 = apply_prim_cons(lst9037);
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
void* const x9035 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont9034;
arg_buffer[2] = x9035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9034))[0]);

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
void* const _env9040 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9038 = prim_car(lst);
void* const lst9041 = prim_cdr(lst);
void* const x9039 = apply_prim_car(lst9041);
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
void* const x9039 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont9038;
arg_buffer[2] = x9039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9038))[0]);

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
void* const _env9044 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9042 = prim_car(lst);
void* const lst9045 = prim_cdr(lst);
void* const x9043 = apply_prim_cdr(lst9045);
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
void* const x9043 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9042))[0]);

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
void* const _env9048 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9046 = prim_car(lst);
void* const lst9049 = prim_cdr(lst);
void* const x9047 = apply_prim_float_u45_u62int(lst9049);
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
void* const x9047 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont9046;
arg_buffer[2] = x9047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9046))[0]);

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
void* const _env9052 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9050 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9051 = apply_prim_int_u45_u62float(lst9053);
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
void* const x9051 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont9050;
arg_buffer[2] = x9051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9050))[0]);

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
void* const _env9056 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9054 = prim_car(lst);
void* const lst9057 = prim_cdr(lst);
void* const x9055 = apply_prim_hash(lst9057);
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
void* const x9055 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9054))[0]);

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
void* const _env9060 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9058 = prim_car(lst);
void* const lst9061 = prim_cdr(lst);
void* const x9059 = apply_prim_hash_u45ref(lst9061);
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
void* const x9059 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont9058;
arg_buffer[2] = x9059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9058))[0]);

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
void* const _env9064 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9062 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9063 = apply_prim_hash_u45set(lst9065);
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
void* const x9063 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont9062;
arg_buffer[2] = x9063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9062))[0]);

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
void* const _env9068 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9066 = prim_car(lst);
void* const lst9069 = prim_cdr(lst);
void* const x9067 = apply_prim_hash_u45keys(lst9069);
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
void* const x9067 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9066))[0]);

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
void* const _env9072 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9070 = prim_car(lst);
void* const lst9073 = prim_cdr(lst);
void* const x9071 = apply_prim_hash_u45has_u45key_u63(lst9073);
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
void* const x9071 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont9070;
arg_buffer[2] = x9071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9070))[0]);

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
void* const _env9076 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9074 = prim_car(lst);
void* const lst9077 = prim_cdr(lst);
void* const x9075 = apply_prim_hash_u45count(lst9077);
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
void* const x9075 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont9074;
arg_buffer[2] = x9075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9074))[0]);

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
void* const _env9080 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9078 = prim_car(lst);
void* const lst9081 = prim_cdr(lst);
void* const x9079 = apply_prim_set(lst9081);
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
void* const x9079 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078))[0]);

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
void* const _env9084 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9082 = prim_car(lst);
void* const lst9085 = prim_cdr(lst);
void* const x9083 = apply_prim_set_u45_u62list(lst9085);
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
void* const x9083 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont9082;
arg_buffer[2] = x9083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9082))[0]);

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
void* const _env9088 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9086 = prim_car(lst);
void* const lst9089 = prim_cdr(lst);
void* const x9087 = apply_prim_list_u45_u62set(lst9089);
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
void* const x9087 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont9086;
arg_buffer[2] = x9087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9086))[0]);

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
void* const _env9092 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9090 = prim_car(lst);
void* const lst9093 = prim_cdr(lst);
void* const x9091 = apply_prim_set_u45add(lst9093);
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
void* const x9091 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9090))[0]);

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
void* const _env9096 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9094 = prim_car(lst);
void* const lst9097 = prim_cdr(lst);
void* const x9095 = apply_prim_set_u45member_u63(lst9097);
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
void* const x9095 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont9094;
arg_buffer[2] = x9095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9094))[0]);

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
void* const _env9100 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9098 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9099 = apply_prim_set_u45remove(lst9101);
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
void* const x9099 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont9098;
arg_buffer[2] = x9099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9098))[0]);

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
void* const _env9104 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9102 = prim_car(lst);
void* const lst9105 = prim_cdr(lst);
void* const x9103 = apply_prim_set_u45count(lst9105);
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
void* const x9103 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9102))[0]);

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
void* const _env9108 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9106 = prim_car(lst);
void* const lst9109 = prim_cdr(lst);
void* const x9107 = apply_prim_string_u63(lst9109);
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
void* const x9107 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont9106;
arg_buffer[2] = x9107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9106))[0]);

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
void* const _env9112 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9110 = prim_car(lst);
void* const lst9113 = prim_cdr(lst);
void* const x9111 = apply_prim_string_u45length(lst9113);
arg_buffer[1] = kont9110;
arg_buffer[2] = x9111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9110))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9110 = arg_buffer[2];
void* const x9111 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont9110;
arg_buffer[2] = x9111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9110))[0]);

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
void* const _env9116 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9114 = prim_car(lst);
void* const lst9117 = prim_cdr(lst);
void* const x9115 = apply_prim_string_u45ref(lst9117);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9114))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9114 = arg_buffer[2];
void* const x9115 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9114))[0]);

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
void* const _env9120 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9118 = prim_car(lst);
void* const lst9121 = prim_cdr(lst);
void* const x9119 = apply_prim_substring(lst9121);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9118))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9118 = arg_buffer[2];
void* const x9119 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont9118;
arg_buffer[2] = x9119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9118))[0]);

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
void* const _env9124 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9122 = prim_car(lst);
void* const lst9125 = prim_cdr(lst);
void* const x9123 = apply_prim_string_u45append(lst9125);
arg_buffer[1] = kont9122;
arg_buffer[2] = x9123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9122))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9122 = arg_buffer[2];
void* const x9123 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont9122;
arg_buffer[2] = x9123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9122))[0]);

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
void* const _env9128 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9126 = prim_car(lst);
void* const lst9129 = prim_cdr(lst);
void* const x9127 = apply_prim_string_u45_u62list(lst9129);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9126))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9126 = arg_buffer[2];
void* const x9127 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9126))[0]);

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
void* const _env9132 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9130 = prim_car(lst);
void* const lst9133 = prim_cdr(lst);
void* const x9131 = apply_prim_exact_u45floor(lst9133);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9130))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9130 = arg_buffer[2];
void* const x9131 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont9130;
arg_buffer[2] = x9131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9130))[0]);

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
void* const _env9136 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9134 = prim_car(lst);
void* const lst9137 = prim_cdr(lst);
void* const x9135 = apply_prim_exact_u45ceiling(lst9137);
arg_buffer[1] = kont9134;
arg_buffer[2] = x9135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9134))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9134 = arg_buffer[2];
void* const x9135 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont9134;
arg_buffer[2] = x9135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9134))[0]);

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
void* const _env9140 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9138 = prim_car(lst);
void* const lst9141 = prim_cdr(lst);
void* const x9139 = apply_prim_exact_u45round(lst9141);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9138))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9138 = arg_buffer[2];
void* const x9139 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9138))[0]);

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
void* const _env9144 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9142 = prim_car(lst);
void* const lst9145 = prim_cdr(lst);
void* const x9143 = apply_prim_abs(lst9145);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9142))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9142 = arg_buffer[2];
void* const x9143 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont9142;
arg_buffer[2] = x9143;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9142))[0]);

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
void* const _env9148 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9146 = prim_car(lst);
void* const lst9149 = prim_cdr(lst);
void* const x9147 = apply_prim_max(lst9149);
arg_buffer[1] = kont9146;
arg_buffer[2] = x9147;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9146))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9146 = arg_buffer[2];
void* const x9147 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont9146;
arg_buffer[2] = x9147;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9146))[0]);

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
void* const _env9152 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9150 = prim_car(lst);
void* const lst9153 = prim_cdr(lst);
void* const x9151 = apply_prim_min(lst9153);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9150))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9150 = arg_buffer[2];
void* const x9151 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9150))[0]);

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
void* const _env9156 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9154 = prim_car(lst);
void* const lst9157 = prim_cdr(lst);
void* const x9155 = apply_prim_expt(lst9157);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9154))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9154 = arg_buffer[2];
void* const x9155 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont9154;
arg_buffer[2] = x9155;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9154))[0]);

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
void* const _env9160 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9158 = prim_car(lst);
void* const lst9161 = prim_cdr(lst);
void* const x9159 = apply_prim_sqrt(lst9161);
arg_buffer[1] = kont9158;
arg_buffer[2] = x9159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9158))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9158 = arg_buffer[2];
void* const x9159 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont9158;
arg_buffer[2] = x9159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9158))[0]);

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
void* const _env9164 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9162 = prim_car(lst);
void* const lst9165 = prim_cdr(lst);
void* const x9163 = apply_prim_remainder(lst9165);
arg_buffer[1] = kont9162;
arg_buffer[2] = x9163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9162))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9162 = arg_buffer[2];
void* const x9163 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont9162;
arg_buffer[2] = x9163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9162))[0]);

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
void* const _env9168 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9166 = prim_car(lst);
void* const lst9169 = prim_cdr(lst);
void* const x9167 = apply_prim_quotient(lst9169);
arg_buffer[1] = kont9166;
arg_buffer[2] = x9167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9166))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9166 = arg_buffer[2];
void* const x9167 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont9166;
arg_buffer[2] = x9167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9166))[0]);

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
void* const _env9172 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9170 = prim_car(lst);
void* const lst9173 = prim_cdr(lst);
void* const x9171 = apply_prim_random(lst9173);
arg_buffer[1] = kont9170;
arg_buffer[2] = x9171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9170))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9170 = arg_buffer[2];
void* const x9171 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont9170;
arg_buffer[2] = x9171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9170))[0]);

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
void* const _env9176 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9174 = prim_car(lst);
void* const lst9177 = prim_cdr(lst);
void* const x9175 = apply_prim_symbol_u63(lst9177);
arg_buffer[1] = kont9174;
arg_buffer[2] = x9175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9174))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9174 = arg_buffer[2];
void* const x9175 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont9174;
arg_buffer[2] = x9175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9174))[0]);

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
void* const _env9180 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9178 = prim_car(lst);
void* const lst9181 = prim_cdr(lst);
void* const x9179 = apply_prim_pair_u63(lst9181);
arg_buffer[1] = kont9178;
arg_buffer[2] = x9179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9178))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9178 = arg_buffer[2];
void* const x9179 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont9178;
arg_buffer[2] = x9179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9178))[0]);

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
void* const _env9184 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9182 = prim_car(lst);
void* const lst9185 = prim_cdr(lst);
void* const x9183 = apply_prim_positive_u63(lst9185);
arg_buffer[1] = kont9182;
arg_buffer[2] = x9183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9182))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9182 = arg_buffer[2];
void* const x9183 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont9182;
arg_buffer[2] = x9183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9182))[0]);

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
void* const _env9188 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9186 = prim_car(lst);
void* const lst9189 = prim_cdr(lst);
void* const x9187 = apply_prim_negative_u63(lst9189);
arg_buffer[1] = kont9186;
arg_buffer[2] = x9187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9186 = arg_buffer[2];
void* const x9187 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont9186;
arg_buffer[2] = x9187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186))[0]);

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
void* const _env9192 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9190 = prim_car(lst);
void* const lst9193 = prim_cdr(lst);
void* const x9191 = apply_prim_list(lst9193);
arg_buffer[1] = kont9190;
arg_buffer[2] = x9191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9190))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const kont9190 = arg_buffer[2];
void* const x9191 = apply_prim_list(arg_buffer);
arg_buffer[1] = kont9190;
arg_buffer[2] = x9191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9190))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void even_u63_fptr(long numArgs, void* _8895, void* kont8852, void* x) // even? 
{
int tag = get_tag(_8895);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8895 = arg_buffer[1];
//reading env and args
kont8852 = arg_buffer[2];
x = arg_buffer[3];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8714 = int8980;
void* const id_8715 = int8960;
void* const id_8716 = apply_prim_modulo_2(x, id_8715);

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(id_8714, id_8716);
arg_buffer[1] = kont8852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8852))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void odd_u63_fptr(long numArgs, void* _8896, void* kont8853, void* x) // odd? 
{
int tag = get_tag(_8896);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8896 = arg_buffer[1];
//reading env and args
kont8853 = arg_buffer[2];
x = arg_buffer[3];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8717 = int8979;
void* const id_8718 = int8960;
void* const id_8719 = apply_prim_modulo_2(x, id_8718);

//clo-app
arg_buffer[2] = apply_prim_equal_u63_2(id_8717, id_8719);
arg_buffer[1] = kont8853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8853))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void list_u45ref_fptr(long numArgs, void* _8897, void* kont8854, void* lst, void* n) // list-ref 
{
int tag = get_tag(_8897);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8897 = arg_buffer[1];
//reading env and args
kont8854 = arg_buffer[2];
lst = arg_buffer[3];
n = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8720 = int8980;
void* const id_8721 = apply_prim__u61_2(id_8720, n);

//if-clause
bool if_guard9194 = is_true(id_8721);
if(if_guard9194)
{
void* const xy8722 = apply_prim_car_1(lst);

//clo-app
arg_buffer[1] = kont8854;
arg_buffer[2] = xy8722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8854))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8723 = apply_prim_cdr_1(lst);
void* const id_8724 = int8979;
void* const id_8725 = apply_prim__u45_2(n, id_8724);

//clo-app
decoded_list_u45ref(4, list_u45ref, kont8854, id_8723, id_8725);
}

}

void lam8898_fptr() // lam8898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8899 = arg_buffer[1];
//reading env and args
void* const id_8729 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8899);
void* const lst = decode_clo_array[3];
void* const item = decode_clo_array[2];
void* const kont8855 = decode_clo_array[1];

//if-clause
bool if_guard9195 = is_true(id_8729);
if(if_guard9195)
{
void* const xy8730 = bool_f8973;

//clo-app
arg_buffer[1] = kont8855;
arg_buffer[2] = xy8730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8855))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8731 = apply_prim_car_1(lst);
void* const id_8732 = apply_prim_equal_u63_2(item, id_8731);

//if-clause
bool if_guard9196 = is_true(id_8732);
if(if_guard9196)
{

//clo-app
arg_buffer[1] = kont8855;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8855))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8733 = apply_prim_cdr_1(lst);

//clo-app
decoded_member(4, member, kont8855, item, id_8733);
}

}

}

void member_fptr(long numArgs, void* _8900, void* kont8855, void* item, void* lst) // member 
{
int tag = get_tag(_8900);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8900 = arg_buffer[1];
//reading env and args
kont8855 = arg_buffer[2];
item = arg_buffer[3];
lst = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8726 = apply_prim_null_u63_1(item);

//creating new closure instance
void** clo9197 = alloc_clo(lam8898_fptr, 3);

//setting env list
clo9197[1] = kont8855;
clo9197[2] = item;
clo9197[3] = lst;
void* f8856 = encode_clo(clo9197);



//if-clause
bool if_guard9198 = is_true(id_8726);
if(if_guard9198)
{
void* const xy8727 = apply_prim_null_u63_1(item);

//clo-app
arg_buffer[1] = f8856;
arg_buffer[2] = xy8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8856))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const xy8728 = apply_prim_null_u63_1(lst);

//clo-app
arg_buffer[1] = f8856;
arg_buffer[2] = xy8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8856))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void member_u63_fptr(long numArgs, void* _8901, void* kont8857, void* x, void* lst) // member? 
{
int tag = get_tag(_8901);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8901 = arg_buffer[1];
//reading env and args
kont8857 = arg_buffer[2];
x = arg_buffer[3];
lst = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8734 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9199 = is_true(id_8734);
if(if_guard9199)
{
void* const xy8735 = bool_f8973;

//clo-app
arg_buffer[1] = kont8857;
arg_buffer[2] = xy8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8857))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8736 = apply_prim_car_1(lst);
void* const id_8737 = apply_prim_equal_u63_2(id_8736, x);

//if-clause
bool if_guard9200 = is_true(id_8737);
if(if_guard9200)
{
void* const xy8738 = bool_t8975;

//clo-app
arg_buffer[1] = kont8857;
arg_buffer[2] = xy8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8857))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8739 = apply_prim_cdr_1(lst);

//clo-app
decoded_member_u63(4, member_u63, kont8857, x, id_8739);
}

}

}

void lam8902_fptr() // lam8902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8903 = arg_buffer[1];
//reading env and args
void* const id_8744 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8903);
void* const id_8742 = decode_clo_array[2];
void* const kont8858 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim__u43_2(id_8742, id_8744);
arg_buffer[1] = kont8858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void length_fptr(long numArgs, void* _8904, void* kont8858, void* lst) // length 
{
int tag = get_tag(_8904);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8904 = arg_buffer[1];
//reading env and args
kont8858 = arg_buffer[2];
lst = arg_buffer[3];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8740 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9201 = is_true(id_8740);
if(if_guard9201)
{
void* const xy8741 = int8980;

//clo-app
arg_buffer[1] = kont8858;
arg_buffer[2] = xy8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8742 = int8979;
void* const id_8743 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9202 = alloc_clo(lam8902_fptr, 2);

//setting env list
clo9202[1] = kont8858;
clo9202[2] = id_8742;
void* f8859 = encode_clo(clo9202);



//clo-app
decoded_length(3, length, f8859, id_8743);
}

}

void lam8905_fptr() // lam8905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8906 = arg_buffer[1];
//reading env and args
void* const id_8750 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8906);
void* const kont8860 = decode_clo_array[2];
void* const id_8748 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim_cons_2(id_8748, id_8750);
arg_buffer[1] = kont8860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8907_fptr() // lam8907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8908 = arg_buffer[1];
//reading env and args
void* const id_8748 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8908);
void* const lst = decode_clo_array[3];
void* const proc = decode_clo_array[2];
void* const kont8860 = decode_clo_array[1];
void* const id_8749 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9203 = alloc_clo(lam8905_fptr, 2);

//setting env list
clo9203[1] = id_8748;
clo9203[2] = kont8860;
void* f8861 = encode_clo(clo9203);



//clo-app
decoded_map(4, map, f8861, proc, id_8749);
}

void map_fptr(long numArgs, void* _8909, void* kont8860, void* proc, void* lst) // map 
{
int tag = get_tag(_8909);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8909 = arg_buffer[1];
//reading env and args
kont8860 = arg_buffer[2];
proc = arg_buffer[3];
lst = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8745 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9204 = is_true(id_8745);
if(if_guard9204)
{
void* const xy8746 = apply_prim_list_0();

//clo-app
arg_buffer[1] = kont8860;
arg_buffer[2] = xy8746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8747 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9205 = alloc_clo(lam8907_fptr, 3);

//setting env list
clo9205[1] = kont8860;
clo9205[2] = proc;
clo9205[3] = lst;
void* f8862 = encode_clo(clo9205);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8862;
arg_buffer[3] = id_8747;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8910_fptr() // lam8910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8911 = arg_buffer[1];
//reading env and args
void* const id_8757 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8911);
void* const kont8863 = decode_clo_array[2];
void* const id_8755 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim_cons_2(id_8755, id_8757);
arg_buffer[1] = kont8863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8912_fptr() // lam8912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8913 = arg_buffer[1];
//reading env and args
void* const id_8754 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8913);
void* const kont8863 = decode_clo_array[3];
void* const lst = decode_clo_array[2];
void* const op = decode_clo_array[1];

//if-clause
bool if_guard9206 = is_true(id_8754);
if(if_guard9206)
{
void* const id_8755 = apply_prim_car_1(lst);
void* const id_8756 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9207 = alloc_clo(lam8910_fptr, 2);

//setting env list
clo9207[1] = id_8755;
clo9207[2] = kont8863;
void* f8864 = encode_clo(clo9207);



//clo-app
decoded_filter(4, filter, f8864, op, id_8756);
}
else
{
void* const id_8758 = apply_prim_cdr_1(lst);

//clo-app
decoded_filter(4, filter, kont8863, op, id_8758);
}

}

void filter_fptr(long numArgs, void* _8914, void* kont8863, void* op, void* lst) // filter 
{
int tag = get_tag(_8914);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8914 = arg_buffer[1];
//reading env and args
kont8863 = arg_buffer[2];
op = arg_buffer[3];
lst = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8751 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9208 = is_true(id_8751);
if(if_guard9208)
{
void* const xy8752 = apply_prim_list_0();

//clo-app
arg_buffer[1] = kont8863;
arg_buffer[2] = xy8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8753 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9209 = alloc_clo(lam8912_fptr, 3);

//setting env list
clo9209[1] = op;
clo9209[2] = lst;
clo9209[3] = kont8863;
void* f8865 = encode_clo(clo9209);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8865;
arg_buffer[3] = id_8753;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void drop_fptr(long numArgs, void* _8915, void* kont8866, void* lst, void* n) // drop 
{
int tag = get_tag(_8915);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8915 = arg_buffer[1];
//reading env and args
kont8866 = arg_buffer[2];
lst = arg_buffer[3];
n = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8759 = int8980;
void* const id_8760 = apply_prim__u61_2(n, id_8759);

//if-clause
bool if_guard9210 = is_true(id_8760);
if(if_guard9210)
{

//clo-app
arg_buffer[1] = kont8866;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8761 = apply_prim_cdr_1(lst);
void* const id_8762 = int8979;
void* const id_8763 = apply_prim__u45_2(n, id_8762);

//clo-app
decoded_drop(4, drop, kont8866, id_8761, id_8763);
}

}

void lam8916_fptr() // lam8916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8917 = arg_buffer[1];
//reading env and args
void* const id_8766 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8917);
void* const lst = decode_clo_array[3];
void* const kont8867 = decode_clo_array[2];
void* const fun = decode_clo_array[1];
void* const id_8767 = apply_prim_cdr_1(lst);

//clo-app
decoded_foldl(5, foldl, kont8867, fun, id_8766, id_8767);
}

void foldl_fptr(long numArgs, void* _8918, void* kont8867, void* fun, void* acc, void* lst) // foldl 
{
int tag = get_tag(_8918);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8918 = arg_buffer[1];
//reading env and args
kont8867 = arg_buffer[2];
fun = arg_buffer[3];
acc = arg_buffer[4];
lst = arg_buffer[5];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8764 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9211 = is_true(id_8764);
if(if_guard9211)
{

//clo-app
arg_buffer[1] = kont8867;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8765 = apply_prim_car_1(lst);

//creating new closure instance
void** clo9212 = alloc_clo(lam8916_fptr, 3);

//setting env list
clo9212[1] = fun;
clo9212[2] = kont8867;
clo9212[3] = lst;
void* f8868 = encode_clo(clo9212);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8868;
arg_buffer[3] = id_8765;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8919_fptr() // lam8919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8920 = arg_buffer[1];
//reading env and args
void* const id_8771 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8920);
void* const id_8769 = decode_clo_array[3];
void* const kont8869 = decode_clo_array[2];
void* const fun = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8869;
arg_buffer[3] = id_8769;
arg_buffer[4] = id_8771;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void foldr_fptr(long numArgs, void* _8921, void* kont8869, void* fun, void* acc, void* lst) // foldr 
{
int tag = get_tag(_8921);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8921 = arg_buffer[1];
//reading env and args
kont8869 = arg_buffer[2];
fun = arg_buffer[3];
acc = arg_buffer[4];
lst = arg_buffer[5];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8768 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9213 = is_true(id_8768);
if(if_guard9213)
{

//clo-app
arg_buffer[1] = kont8869;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8869))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8769 = apply_prim_car_1(lst);
void* const id_8770 = apply_prim_cdr_1(lst);

//creating new closure instance
void** clo9214 = alloc_clo(lam8919_fptr, 3);

//setting env list
clo9214[1] = fun;
clo9214[2] = kont8869;
clo9214[3] = id_8769;
void* f8870 = encode_clo(clo9214);



//clo-app
decoded_foldr(5, foldr, f8870, fun, acc, id_8770);
}

}

void reverse_u45helper_fptr(long numArgs, void* _8922, void* kont8871, void* lst, void* lst2) // reverse-helper 
{
int tag = get_tag(_8922);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8922 = arg_buffer[1];
//reading env and args
kont8871 = arg_buffer[2];
lst = arg_buffer[3];
lst2 = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8772 = apply_prim_null_u63_1(lst);

//if-clause
bool if_guard9215 = is_true(id_8772);
if(if_guard9215)
{

//clo-app
arg_buffer[1] = kont8871;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8871))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8773 = apply_prim_cdr_1(lst);
void* const id_8774 = apply_prim_car_1(lst);
void* const id_8775 = apply_prim_cons_2(id_8774, lst2);

//clo-app
decoded_reverse_u45helper(4, reverse_u45helper, kont8871, id_8773, id_8775);
}

}

void reverse_fptr(long numArgs, void* _8923, void* kont8872, void* lst) // reverse 
{
int tag = get_tag(_8923);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8923 = arg_buffer[1];
//reading env and args
kont8872 = arg_buffer[2];
lst = arg_buffer[3];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8776 = apply_prim_list_0();

//clo-app
decoded_reverse_u45helper(4, reverse_u45helper, kont8872, lst, id_8776);
}

void lam8924_fptr() // lam8924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8925 = arg_buffer[1];
//reading env and args
void* const id_8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8925);
void* const kont8873 = decode_clo_array[2];
void* const id_8778 = decode_clo_array[1];

//clo-app
arg_buffer[2] = apply_prim_cons_2(id_8778, id_8780);
arg_buffer[1] = kont8873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8873))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void append1_fptr(long numArgs, void* _8926, void* kont8873, void* lhs, void* rhs) // append1 
{
int tag = get_tag(_8926);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8926 = arg_buffer[1];
//reading env and args
kont8873 = arg_buffer[2];
lhs = arg_buffer[3];
rhs = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8777 = apply_prim_null_u63_1(lhs);

//if-clause
bool if_guard9216 = is_true(id_8777);
if(if_guard9216)
{

//clo-app
arg_buffer[1] = kont8873;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8873))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8778 = apply_prim_car_1(lhs);
void* const id_8779 = apply_prim_cdr_1(lhs);

//creating new closure instance
void** clo9217 = alloc_clo(lam8924_fptr, 2);

//setting env list
clo9217[1] = id_8778;
clo9217[2] = kont8873;
void* f8874 = encode_clo(clo9217);



//clo-app
decoded_append1(4, append1, f8874, id_8779, rhs);
}

}

void lam8927_fptr() // lam8927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8928 = arg_buffer[1];
//reading env and args
void* const id_8783 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8928);
void* const id_8781 = decode_clo_array[2];
void* const kont8875 = decode_clo_array[1];

//clo-app
decoded_foldr(5, foldr, kont8875, append1, id_8781, id_8783);
}

void lam8929_fptr() // lam8929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8930 = arg_buffer[1];
//reading env and args
void* const x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8930);
void* const kont8875 = decode_clo_array[2];
void* const xs = decode_clo_array[1];
void* const id_8781 = apply_prim_list_0();
void* const id_8782 = apply_prim_list_1(xs);

//creating new closure instance
void** clo9218 = alloc_clo(lam8927_fptr, 2);

//setting env list
clo9218[1] = kont8875;
clo9218[2] = id_8781;
void* f8876 = encode_clo(clo9218);



//clo-app
decoded_append1(4, append1, f8876, id_8782, x);
}

void append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const _8931 = arg_buffer[1];
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

void* const kont8875 = apply_prim_car_1(vargs);
void* const vargs8894 = apply_prim_cdr_1(vargs);
void* const xs = apply_prim_car_1(vargs8894);
void* const vargs8713 = apply_prim_cdr_1(vargs8894);

//creating new closure instance
void** clo9219 = alloc_clo(lam8929_fptr, 2);

//setting env list
clo9219[1] = xs;
clo9219[2] = kont8875;
void* f8877 = encode_clo(clo9219);



//clo-app
arg_buffer[1] = f8877;
arg_buffer[2] = vargs8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8877))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8932_fptr() // lam8932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8933 = arg_buffer[1];
//reading env and args
void* const xy8786 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8933);
void* const kont8878 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8878;
arg_buffer[2] = xy8786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void take_u45helper_fptr(long numArgs, void* _8934, void* kont8878, void* lst, void* n, void* lst2) // take-helper 
{
int tag = get_tag(_8934);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8934 = arg_buffer[1];
//reading env and args
kont8878 = arg_buffer[2];
lst = arg_buffer[3];
n = arg_buffer[4];
lst2 = arg_buffer[5];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8784 = int8980;
void* const id_8785 = apply_prim__u61_2(n, id_8784);

//if-clause
bool if_guard9220 = is_true(id_8785);
if(if_guard9220)
{

//creating new closure instance
void** clo9221 = alloc_clo(lam8932_fptr, 1);

//setting env list
clo9221[1] = kont8878;
void* f8879 = encode_clo(clo9221);



//clo-app
decoded_reverse(3, reverse, f8879, lst2);
}
else
{
void* const id_8787 = apply_prim_cdr_1(lst);
void* const id_8788 = int8979;
void* const id_8789 = apply_prim__u45_2(n, id_8788);
void* const id_8790 = apply_prim_car_1(lst);
void* const id_8791 = apply_prim_cons_2(id_8790, lst2);

//clo-app
decoded_take_u45helper(5, take_u45helper, kont8878, id_8787, id_8789, id_8791);
}

}

void take_fptr(long numArgs, void* _8935, void* kont8880, void* lst, void* n) // take 
{
int tag = get_tag(_8935);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8935 = arg_buffer[1];
//reading env and args
kont8880 = arg_buffer[2];
lst = arg_buffer[3];
n = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8792 = apply_prim_list_0();

//clo-app
decoded_take_u45helper(5, take_u45helper, kont8880, lst, n, id_8792);
}

void lam8936_fptr() // lam8936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8937 = arg_buffer[1];
//reading env and args
void* const id_8806 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8937);
void* const dist = decode_clo_array[4];
void* const kont8881 = decode_clo_array[3];
void* const row = decode_clo_array[2];
void* const placed = decode_clo_array[1];

//if-clause
bool if_guard9222 = is_true(id_8806);
if(if_guard9222)
{
void* const id_8807 = int8979;
void* const id_8808 = apply_prim__u43_2(dist, id_8807);
void* const id_8809 = apply_prim_cdr_1(placed);

//clo-app
decoded_ok_u63(5, ok_u63, kont8881, row, id_8808, id_8809);
}
else
{
void* const xy8810 = bool_f8973;

//clo-app
arg_buffer[1] = kont8881;
arg_buffer[2] = xy8810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8881))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8938_fptr() // lam8938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8939 = arg_buffer[1];
//reading env and args
void* const id_8800 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8939);
void* const dist = decode_clo_array[4];
void* const kont8881 = decode_clo_array[3];
void* const row = decode_clo_array[2];
void* const placed = decode_clo_array[1];

//if-clause
bool if_guard9223 = is_true(id_8800);
if(if_guard9223)
{
void* const id_8801 = apply_prim_car_1(placed);
void* const id_8802 = apply_prim__u45_2(row, dist);
void* const id_8803 = apply_prim__u61_2(id_8801, id_8802);

//creating new closure instance
void** clo9224 = alloc_clo(lam8936_fptr, 4);

//setting env list
clo9224[1] = placed;
clo9224[2] = row;
clo9224[3] = kont8881;
clo9224[4] = dist;
void* f8882 = encode_clo(clo9224);



//if-clause
bool if_guard9225 = is_true(id_8803);
if(if_guard9225)
{
void* const xy8804 = bool_f8973;

//clo-app
arg_buffer[1] = f8882;
arg_buffer[2] = xy8804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8882))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const xy8805 = bool_t8975;

//clo-app
arg_buffer[1] = f8882;
arg_buffer[2] = xy8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8882))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}
else
{
void* const xy8811 = bool_f8973;

//clo-app
arg_buffer[1] = kont8881;
arg_buffer[2] = xy8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8881))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void ok_u63_fptr(long numArgs, void* _8940, void* kont8881, void* row, void* dist, void* placed) // ok? 
{
int tag = get_tag(_8940);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8940 = arg_buffer[1];
//reading env and args
kont8881 = arg_buffer[2];
row = arg_buffer[3];
dist = arg_buffer[4];
placed = arg_buffer[5];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8793 = apply_prim_null_u63_1(placed);

//if-clause
bool if_guard9226 = is_true(id_8793);
if(if_guard9226)
{
void* const xy8794 = bool_t8975;

//clo-app
arg_buffer[1] = kont8881;
arg_buffer[2] = xy8794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8881))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8795 = apply_prim_car_1(placed);
void* const id_8796 = apply_prim__u43_2(row, dist);
void* const id_8797 = apply_prim__u61_2(id_8795, id_8796);

//creating new closure instance
void** clo9227 = alloc_clo(lam8938_fptr, 4);

//setting env list
clo9227[1] = placed;
clo9227[2] = row;
clo9227[3] = kont8881;
clo9227[4] = dist;
void* f8883 = encode_clo(clo9227);



//if-clause
bool if_guard9228 = is_true(id_8797);
if(if_guard9228)
{
void* const xy8798 = bool_f8973;

//clo-app
arg_buffer[1] = f8883;
arg_buffer[2] = xy8798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8883))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const xy8799 = bool_t8975;

//clo-app
arg_buffer[1] = f8883;
arg_buffer[2] = xy8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8883))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

}

void lam8941_fptr() // lam8941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8942 = arg_buffer[1];
//reading env and args
void* const id_8830 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8942);
void* const stack = decode_clo_array[4];
void* const f8885 = decode_clo_array[3];
void* const z = decode_clo_array[2];
void* const x = decode_clo_array[1];
void* const id_8831 = apply_prim_list_0();
void* const id_8832 = apply_prim_car_1(x);
void* const id_8833 = apply_prim_cons_2(id_8832, z);
void* const id_8834 = apply_prim_list_3(id_8830, id_8831, id_8833);
void* const id_8835 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[2] = apply_prim_cons_2(id_8834, id_8835);
arg_buffer[1] = f8885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8885))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void lam8943_fptr() // lam8943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8944 = arg_buffer[1];
//reading env and args
void* const id_8837 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8944);
void* const count = decode_clo_array[3];
void* const kont8884 = decode_clo_array[2];
void* const id_8825 = decode_clo_array[1];
void* const id_8838 = apply_prim_cons_2(id_8825, id_8837);

//clo-app
decoded_q_u45helper(4, q_u45helper, kont8884, id_8838, count);
}

void lam8945_fptr() // lam8945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8946 = arg_buffer[1];
//reading env and args
void* const id_8828 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8946);
void* const stack = decode_clo_array[7];
void* const count = decode_clo_array[6];
void* const kont8884 = decode_clo_array[5];
void* const z = decode_clo_array[4];
void* const y = decode_clo_array[3];
void* const x = decode_clo_array[2];
void* const id_8825 = decode_clo_array[1];

//creating new closure instance
void** clo9229 = alloc_clo(lam8943_fptr, 3);

//setting env list
clo9229[1] = id_8825;
clo9229[2] = kont8884;
clo9229[3] = count;
void* f8885 = encode_clo(clo9229);



//if-clause
bool if_guard9230 = is_true(id_8828);
if(if_guard9230)
{
void* const id_8829 = apply_prim_cdr_1(x);

//creating new closure instance
void** clo9231 = alloc_clo(lam8941_fptr, 4);

//setting env list
clo9231[1] = x;
clo9231[2] = z;
clo9231[3] = f8885;
clo9231[4] = stack;
void* f8886 = encode_clo(clo9231);



//clo-app
arg_buffer[1] = append;
arg_buffer[2] = f8886;
arg_buffer[3] = id_8829;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
decoded_append();
}
else
{
void* const xy8836 = apply_prim_cdr_1(stack);

//clo-app
arg_buffer[1] = f8885;
arg_buffer[2] = xy8836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8885))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void lam8947_fptr() // lam8947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8948 = arg_buffer[1];
//reading env and args
void* const z = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8948);
void* const stack = decode_clo_array[5];
void* const count = decode_clo_array[4];
void* const kont8884 = decode_clo_array[3];
void* const y = decode_clo_array[2];
void* const x = decode_clo_array[1];
void* const id_8816 = apply_prim_null_u63_1(x);

//if-clause
bool if_guard9232 = is_true(id_8816);
if(if_guard9232)
{
void* const id_8817 = apply_prim_null_u63_1(y);

//if-clause
bool if_guard9233 = is_true(id_8817);
if(if_guard9233)
{
void* const id_8818 = apply_prim_cdr_1(stack);
void* const id_8819 = int8979;
void* const id_8820 = apply_prim__u43_2(count, id_8819);

//clo-app
decoded_q_u45helper(4, q_u45helper, kont8884, id_8818, id_8820);
}
else
{
void* const id_8821 = apply_prim_cdr_1(stack);

//clo-app
decoded_q_u45helper(4, q_u45helper, kont8884, id_8821, count);
}

}
else
{
void* const id_8822 = apply_prim_cdr_1(x);
void* const id_8823 = apply_prim_car_1(x);
void* const id_8824 = apply_prim_cons_2(id_8823, y);
void* const id_8825 = apply_prim_list_3(id_8822, id_8824, z);
void* const id_8826 = apply_prim_car_1(x);
void* const id_8827 = int8979;

//creating new closure instance
void** clo9234 = alloc_clo(lam8945_fptr, 7);

//setting env list
clo9234[1] = id_8825;
clo9234[2] = x;
clo9234[3] = y;
clo9234[4] = z;
clo9234[5] = kont8884;
clo9234[6] = count;
clo9234[7] = stack;
void* f8887 = encode_clo(clo9234);



//clo-app
decoded_ok_u63(5, ok_u63, f8887, id_8826, id_8827, z);
}

}

void lam8949_fptr() // lam8949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8950 = arg_buffer[1];
//reading env and args
void* const y = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);
void* const stack = decode_clo_array[5];
void* const state = decode_clo_array[4];
void* const count = decode_clo_array[3];
void* const kont8884 = decode_clo_array[2];
void* const x = decode_clo_array[1];

//creating new closure instance
void** clo9235 = alloc_clo(lam8947_fptr, 5);

//setting env list
clo9235[1] = x;
clo9235[2] = y;
clo9235[3] = kont8884;
clo9235[4] = count;
clo9235[5] = stack;
void* f8888 = encode_clo(clo9235);


void* const id_8814 = apply_prim_cdr_1(state);
void* const id_8815 = apply_prim_cdr_1(id_8814);

//clo-app
arg_buffer[2] = apply_prim_car_1(id_8815);
arg_buffer[1] = f8888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8888))[0]);

// calling next procedure using a function pointer
function_ptr();
}

void q_u45helper_fptr(long numArgs, void* _8951, void* kont8884, void* stack, void* count) // q-helper 
{
int tag = get_tag(_8951);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8951 = arg_buffer[1];
//reading env and args
kont8884 = arg_buffer[2];
stack = arg_buffer[3];
count = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8812 = apply_prim_null_u63_1(stack);

//if-clause
bool if_guard9236 = is_true(id_8812);
if(if_guard9236)
{

//clo-app
arg_buffer[1] = kont8884;
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8884))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const state = apply_prim_car_1(stack);
void* const x = apply_prim_car_1(state);

//creating new closure instance
void** clo9237 = alloc_clo(lam8949_fptr, 5);

//setting env list
clo9237[1] = x;
clo9237[2] = kont8884;
clo9237[3] = count;
clo9237[4] = state;
clo9237[5] = stack;
void* f8889 = encode_clo(clo9237);


void* const id_8813 = apply_prim_cdr_1(state);

//clo-app
arg_buffer[2] = apply_prim_car_1(id_8813);
arg_buffer[1] = f8889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8889))[0]);

// calling next procedure using a function pointer
function_ptr();
}

}

void iota1_fptr(long numArgs, void* _8952, void* kont8890, void* n, void* l) // iota1 
{
int tag = get_tag(_8952);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8952 = arg_buffer[1];
//reading env and args
kont8890 = arg_buffer[2];
n = arg_buffer[3];
l = arg_buffer[4];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8839 = int8980;
void* const id_8840 = apply_prim__u61_2(n, id_8839);

//if-clause
bool if_guard9238 = is_true(id_8840);
if(if_guard9238)
{

//clo-app
arg_buffer[1] = kont8890;
arg_buffer[2] = l;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8890))[0]);

// calling next procedure using a function pointer
function_ptr();
}
else
{
void* const id_8841 = int8979;
void* const id_8842 = apply_prim__u45_2(n, id_8841);
void* const id_8843 = apply_prim_cons_2(n, l);

//clo-app
decoded_iota1(4, iota1, kont8890, id_8842, id_8843);
}

}

void lam8953_fptr() // lam8953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* const env8954 = arg_buffer[1];
//reading env and args
void* const id_8845 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8954);
void* const kont8891 = decode_clo_array[1];
void* const id_8846 = apply_prim_list_0();
void* const id_8847 = apply_prim_list_0();
void* const id_8848 = apply_prim_list_3(id_8845, id_8846, id_8847);
void* const id_8849 = apply_prim_list_1(id_8848);
void* const id_8850 = int8980;

//clo-app
decoded_q_u45helper(4, q_u45helper, kont8891, id_8849, id_8850);
}

void nqueens_fptr(long numArgs, void* _8955, void* kont8891, void* n) // nqueens 
{
int tag = get_tag(_8955);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8955 = arg_buffer[1];
//reading env and args
kont8891 = arg_buffer[2];
n = arg_buffer[3];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8844 = apply_prim_list_0();

//creating new closure instance
void** clo9239 = alloc_clo(lam8953_fptr, 1);

//setting env list
clo9239[1] = kont8891;
void* f8892 = encode_clo(clo9239);



//clo-app
decoded_iota1(4, iota1, f8892, n, id_8844);
}

void brouhaha_main_fptr(long numArgs, void* _8956, void* kont8893) // brouhaha_main 
{
int tag = get_tag(_8956);
if(tag == SPL || tag == CONS) {

//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
_8956 = arg_buffer[1];
//reading env and args
kont8893 = arg_buffer[2];
}
//decoding closure array
void** decode_clo_array = nullptr;
void* const id_8851 = int8981;

//clo-app
decoded_nqueens(3, nqueens, kont8893, id_8851);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8980 = reinterpret_cast<void*>(encode_int(0));
bool_t8975 = encode_bool(true);
int8979 = reinterpret_cast<void*>(encode_int(1));
bool_f8973 = encode_bool(false);
int8960 = reinterpret_cast<void*>(encode_int(2));
int8981 = reinterpret_cast<void*>(encode_int(14));


//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
decoded_brouhaha_main(2, encode_null(), fhalt_clo);
}

