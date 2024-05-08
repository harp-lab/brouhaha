// location of `parallel_RA_inc.h` here
#include "/slog/compiler/../backend/src/parallel_RA_inc.h"

#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <unordered_set>
#include <map>

// builtins.cpp goes here!
// builtins.cpp
#include <cstddef>
#include <limits>
#include <vector>
#include <string>
#include <cassert>
#include <iostream>
#include <array>
#include <functional>
#include <tuple>
#include <functional>
#include <utility>

using namespace std;
#define u64  uint64_t
#define u32  uint32_t
using i64 = int64_t;

const u64 tag_mask = 0xffffc00000000000;
const u64 tag_position = 46;
const u64 int_tag = 0;
const u64 str_tag = 2;
const u64 sign_flip_const = 0x0000200000000000;
const u64 signed_num_mask = 0xFFFFE00000000000;

inline bool is_number(u64 datum) {
  // cout << "is_number(" << datum << "): " << (datum >> tag_position == int_tag) << "\n";
  return datum >> tag_position == int_tag;
}

inline i64 datum_to_number(u64 datum) {
  i64 signed_val = (datum & ~tag_mask) << (64 - tag_position) >> (64 - tag_position);
  if (signed_val >= sign_flip_const) {
    signed_val = sign_flip_const - signed_val;
  }
  return signed_val;
  // return (i64) (datum & ~tag_mask) << (64 - tag_position) >> (64 - tag_position);
}
const auto d2n = datum_to_number;

inline u64 number_to_datum(i64 number) {
  i64 unsigned_value = number;
  if (number < 0) {
    unsigned_value = (- number) + sign_flip_const;
  }
  return (unsigned_value & ~tag_mask) | (int_tag << tag_position);
  // return (number & ~tag_mask) | (int_tag << tag_position);
}

const auto n2d = number_to_datum;

inline u64 string_to_datum(std::string str)
{
  u64 str_hash = string_hash(str);
  return (str_hash & ~tag_mask) | (str_tag << tag_position);
}
const auto s2d = string_to_datum;


vector<array<u64,2>> builtin_div_rem(const u64* const data){
  if (is_number(data[0]) && is_number(data[1])){
    auto div = number_to_datum(d2n(data[0]) / d2n(data[1]));
    auto rem = number_to_datum(d2n(data[0]) % d2n(data[1]));
    return {{div, rem}};
  } else {
    return {};
  }
}

#define BUILTIN_BINARY_NUMBER_PRED(name, op) \
template<typename TState> inline TState name(const u64* data, TState init_state, TState (*callback) (TState state)){ \
  if (is_number(data[0]) && is_number(data[1]) &&\
      datum_to_number(data[0]) op datum_to_number(data[1])){\
    return callback(init_state);\
  } else \
    return init_state;\
}

BUILTIN_BINARY_NUMBER_PRED(builtin_less, <)
BUILTIN_BINARY_NUMBER_PRED(builtin_greater, >)
BUILTIN_BINARY_NUMBER_PRED(builtin_le, <=)
BUILTIN_BINARY_NUMBER_PRED(builtin_ge, >=)

#define BUILTIN_BINARY_NUMBER_FUNC(name, op) \
template<typename TState> inline TState name(const u64* data, TState init_state, TState (*callback) (u64 res, TState state)){ \
  if (is_number(data[0]) && is_number(data[1])){\
    auto res = number_to_datum(datum_to_number(data[0]) op datum_to_number(data[1]));\
    return callback(res, init_state);\
} else \
  return init_state;\
}

BUILTIN_BINARY_NUMBER_FUNC(builtin_add, +)
BUILTIN_BINARY_NUMBER_FUNC(builtin_subtract, -)
BUILTIN_BINARY_NUMBER_FUNC(builtin_multiply, *)
BUILTIN_BINARY_NUMBER_FUNC(builtin_divide, /)

#define BUILTIN_BINARY_NUMBER_FUNC2(name, impl) \
template<typename TState> inline TState name(const u64* data, TState init_state, TState (*callback) (u64 res, TState state)){ \
  if (is_number(data[0]) && is_number(data[1])){\
    auto res = number_to_datum(impl(datum_to_number(data[0]), datum_to_number(data[1])));\
    return callback(res, init_state);\
} else \
  return init_state;\
}

inline u64 impl_arg2_minus_arg1(u64 arg1, u64 arg2) {return arg2 - arg1;}
BUILTIN_BINARY_NUMBER_FUNC2(builtin_arg2_minus_arg1, impl_arg2_minus_arg1)


#define BUILTIN_UNARY_NUMBER_FUNC(name, impl) \
template<typename TState> inline TState name(const u64* data, TState init_state, TState (*callback) (u64 res, TState state)){ \
  if (is_number(data[0])){\
    auto res = number_to_datum(impl(datum_to_number(data[0])));\
    return callback(res, init_state);\
} else \
  return init_state;\
}

inline u64 add1(u64 x) {return x + 1;}
inline u64 sub1(u64 x) {return x - 1;}

BUILTIN_UNARY_NUMBER_FUNC(builtin_add1, add1)
BUILTIN_UNARY_NUMBER_FUNC(builtin_add1_2, sub1)
BUILTIN_UNARY_NUMBER_FUNC(builtin_sub1, sub1)
BUILTIN_UNARY_NUMBER_FUNC(builtin_sub1_2, add1)


vector<array<u64,1>> builtin_range(const u64* const data){
  vector<array<u64,1>> res;
  if (is_number(data[0]) && is_number(data[1])){
    auto lb = datum_to_number(data[0]);
    auto ub = datum_to_number(data[1]);
    res.reserve(ub - lb);
    for (u64 x = lb; x < ub; x++)
      res.push_back({number_to_datum(x)});
  } 
  return res;
}

template<typename TState>
TState callback_builtin_range(const u64* data, TState init_state, TState (*callback) (u64 res, TState state)){
  auto state = init_state;
  if (is_number(data[0]) && is_number(data[1])){
    auto lb = datum_to_number(data[0]);
    auto ub = datum_to_number(data[1]);
    for (u64 x = lb; x < ub; x++)
      state = callback(number_to_datum(x), state);
  }
  return state;
}


#define BUILTIN_BINARY_PRED(name, op) \
template<typename TState> TState name(const u64* data, TState init_state, TState (*callback) (TState state)){ \
  if (data[0] op data[1])\
    return callback(init_state);\
  else\
    return init_state;\
}
BUILTIN_BINARY_PRED(builtin_eq, ==)
BUILTIN_BINARY_PRED(builtin_neq, !=)

template<typename TState>
TState builtin_eq_1(const u64* data, TState init_state, TState (*callback) (u64 res, TState state)){
  return callback(data[0], init_state);
}

#define BUILTIN_UNARY_PRED(name, pred) \
template<typename TState> TState name(const u64* data, TState init_state, TState (*callback) (TState state)){ \
  if (pred(data[0]))\
    return callback(init_state);\
  else\
    return init_state;\
}

bool is_not_number(u64 datum) {return !is_number(datum);}
BUILTIN_UNARY_PRED(builtin_number_huh, is_number)
BUILTIN_UNARY_PRED(builtin_not_number_huh, is_not_number)

// for generate-cpp-lambda-for-computational-join
struct CL2CB_State{
  void* original_callback; // There be dragons?
  void* original_state;
  const u64* original_data;
  u64* cl1_output_args;
};

// for generate-cpp-lambda-for-computational-copy
struct BCLCB_State{
  void* original_callback;
  void* original_state;
  const u64* original_data;
};

//an experiment:
template<bool f (u64, u64)>
bool builtin_binary_number_pred(const u64* data){
  if (is_number(data[0]) && is_number(data[1])){
    return f(datum_to_number(data[0]), datum_to_number(data[1]));
  } else {
    return false;
  }
}
bool _less(u64 x, u64 y) { return x < y;}
auto builtin_less2 = builtin_binary_number_pred<_less>;


template<typename TState> inline TState builtin_nop(const u64* data, TState init_state, TState (*callback) (TState state)){ 
  return callback(init_state);
}

// //////////////////// AGGREGATORS Alternative design ////////////////////


// TODO: add number type check
//////////////////////////////  count /////////////////////////////////////

local_agg_res_t agg_count_local(std::pair<shmap_relation::iterator, shmap_relation::iterator> joined_range)
{
  local_agg_res_t cnt = 0;
  for(auto it = joined_range.first; it != joined_range.second ; ++it) {
    cnt ++;
  }
  return cnt;
}

local_agg_res_t agg_count_reduce (local_agg_res_t x, local_agg_res_t y) {
  return x + y;
}

//////////////////////////////  sum /////////////////////////////////////

local_agg_res_t agg_sum_local(std::pair<shmap_relation::iterator, shmap_relation::iterator> joined_range)
{
  local_agg_res_t sum_res = 0;
  for(auto it = joined_range.first; it != joined_range.second ; ++it) {
    auto tuple = (*it);
    sum_res += tuple[tuple.size()-1];
  }
  return sum_res;
}

local_agg_res_t agg_sum_reduce(local_agg_res_t x, local_agg_res_t y) {
  return x + y;
}

//////////////////////////////  maximum  /////////////////////////////////////

local_agg_res_t agg_maximum_local(std::pair<shmap_relation::iterator, shmap_relation::iterator> joined_range)
{
  local_agg_res_t max_res = 0;
  for(auto it = joined_range.first; it != joined_range.second ; ++it) {
    auto tuple = (*it);
    auto current_v = tuple[tuple.size()-1];
    if (current_v > max_res) {
      max_res = current_v;
    }
  }
  return max_res;
}

local_agg_res_t agg_maximum_reduce(local_agg_res_t x, local_agg_res_t y) {
  if (x > y){
    return x;
  } else{
    return y;
  }
}

//////////////////////////////  minimum  /////////////////////////////////////

local_agg_res_t agg_minimum_local(std::pair<shmap_relation::iterator, shmap_relation::iterator> joined_range)
{
  local_agg_res_t min_res = std::numeric_limits<u32>::max();
  for(auto it = joined_range.first; it != joined_range.second ; ++it) {
    auto tuple = (*it);
    auto current_v = tuple[tuple.size()-1];
    if (current_v < min_res) {
      min_res = current_v;
    }
  }
  return min_res;
}

local_agg_res_t agg_minimum_reduce(local_agg_res_t x, local_agg_res_t y) {
  if (x < y){
    return x;
  } else{
    return y;
  }
}

// // end of builtins.cpp


// global definitions:


int max_rel = 255;
std::map<std::string, int> rel_tag_map;
std::map<std::string, std::unordered_set<std::string>> rel_index_map;

// load all relation inside input database
void load_input_relation(std::string db_dir)
{
  for (const auto & entry : std::fs::directory_iterator(db_dir))
  {
    // check if ends with table
    std::string filename_ss = entry.path().filename().string();
    // std::cout << "input database has file " << filename_ss << std::endl;
    std::string suffix = ".table";
    int ft = filename_ss.size()-suffix.size();
    if (ft < 0)
      ft = 0;
    if (filename_ss.rfind(suffix) != ft)
    {
      continue;
    }
    std::string filename_s = entry.path().stem().string();
    int tag = std::stoi(filename_s.substr(0, filename_s.find(".")));
    std::string name_arity = filename_s.substr(filename_s.find(".")+1, filename_s.size()-filename_s.find(".")-1);
    std::string name = name_arity.substr(0, name_arity.rfind("."));
    std::string arity_s = name_arity.substr(name_arity.rfind(".")+1, name_arity.size());
    int arity = std::stoi(arity_s);
    std::stringstream index_stream;
    index_stream << name;
    for (int i = 1; i <= arity; i++)
    {
      index_stream << "__" <<  i;
    }
    if (tag > max_rel)
      max_rel = tag;
    // std::cout << "load " << tag << "." << index_stream.str() << "has arity " << arity << std::endl;
    rel_tag_map[index_stream.str()] = tag;
  }
}

int get_tag_for_rel(std::string relation_name, std::string index_str) {
  std::string name_arity = relation_name + "__" + index_str;
  if (rel_index_map.find(relation_name) != rel_index_map.end()) {
    rel_index_map[relation_name].insert(index_str);
  } else {
    rel_index_map[relation_name] = {index_str};
  }

  if (rel_tag_map.find(name_arity) != rel_tag_map.end())
  {
    // std::cout << "rel: " << name_arity << " " << rel_tag_map[name_arity] << std::endl;
    return rel_tag_map[name_arity];
  }
  max_rel++;
  rel_tag_map[name_arity] = max_rel;
  // std::cout << "generate rel tag: " << name_arity << " " << max_rel << std::endl;
  return max_rel;
}

int main(int argc, char **argv)
{
  // input dir from compiler
  std::string slog_input_dir = "/slog/out/input-data";
  // output dir from compiler
  std::string slog_output_dir = "/slog/out/checkpoints";
  if (argc == 3) {
    slog_input_dir = argv[1];
    slog_output_dir = argv[2];
  }
  load_input_relation(slog_input_dir);
  mpi_comm mcomm;
  mcomm.create(argc, argv);

relation* rel___dollorhead__stratified2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified2","1__2"), std::to_string(get_tag_for_rel("$head-stratified2","1__2")) + ".$head-stratified2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified2","1__2")) + ".$head-stratified2.2.table", FULL);
relation* rel__input__list__1__1 = new relation(1, true, 1, get_tag_for_rel("input-list","1"), std::to_string(get_tag_for_rel("input-list","1")) + ".input-list.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("input-list","1")) + ".input-list.1.table", FULL);
relation* rel___dollorinter__head1__2__1 = new relation(1, false, 2, get_tag_for_rel("$inter-head1","1"), std::to_string(get_tag_for_rel("$inter-head1","1")) + ".$inter-head1.2.table",   FULL);
relation* rel___dollorrule1__inter__body1__2__ = new relation(0, false, 2, get_tag_for_rel("$rule1-inter-body1",""), std::to_string(get_tag_for_rel("$rule1-inter-body1","")) + ".$rule1-inter-body1.2.table",   FULL);
relation* rel___dollorunit__1__1 = new relation(1, true, 1, get_tag_for_rel("$unit","1"), std::to_string(get_tag_for_rel("$unit","1")) + ".$unit.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$unit","1")) + ".$unit.1.table", FULL);
relation* rel___dollorhead__stratified1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified1","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified1","1__2__3")) + ".$head-stratified1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified1","1__2__3")) + ".$head-stratified1.3.table", FULL);
relation* rel___dollorrule4__inter__body__1__ = new relation(0, false, 1, get_tag_for_rel("$rule4-inter-body",""), std::to_string(get_tag_for_rel("$rule4-inter-body","")) + ".$rule4-inter-body.1.table",   FULL);
relation* rel__length__2__1 = new relation(1, false, 2, get_tag_for_rel("length","1"), std::to_string(get_tag_for_rel("length","1")) + ".length.2.table",   FULL);
relation* rel___dollorunit__1__ = new relation(0, false, 1, get_tag_for_rel("$unit",""), std::to_string(get_tag_for_rel("$unit","")) + ".$unit.1.table",   FULL);
relation* rel___dollorbir__sub__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub","1__2"), std::to_string(get_tag_for_rel("$bir-sub","1__2")) + ".$bir-sub.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub","1__2")) + ".$bir-sub.2.table", FULL);
relation* rel___dollorrule1__inter__body__1__ = new relation(0, false, 1, get_tag_for_rel("$rule1-inter-body",""), std::to_string(get_tag_for_rel("$rule1-inter-body","")) + ".$rule1-inter-body.1.table",   FULL);
relation* rel___dollorinter__head__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head","1__2__3"), std::to_string(get_tag_for_rel("$inter-head","1__2__3")) + ".$inter-head.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head","1__2__3")) + ".$inter-head.3.table", FULL);
relation* rel__list__2__1__2 = new relation(2, true, 2, get_tag_for_rel("list","1__2"), std::to_string(get_tag_for_rel("list","1__2")) + ".list.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("list","1__2")) + ".list.2.table", FULL);
relation* rel___dollorbir__sub__2__1 = new relation(1, false, 2, get_tag_for_rel("$bir-sub","1"), std::to_string(get_tag_for_rel("$bir-sub","1")) + ".$bir-sub.2.table",   FULL);
relation* rel__print__length__res__1__1 = new relation(1, true, 1, get_tag_for_rel("print-length-res","1"), std::to_string(get_tag_for_rel("print-length-res","1")) + ".print-length-res.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("print-length-res","1")) + ".print-length-res.1.table", FULL);
relation* rel__nil__0__ = new relation(0, true, 0, get_tag_for_rel("nil",""), std::to_string(get_tag_for_rel("nil","")) + ".nil.0.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("nil","")) + ".nil.0.table", FULL);
relation* rel__do__length__1__1 = new relation(1, true, 1, get_tag_for_rel("do-length","1"), std::to_string(get_tag_for_rel("do-length","1")) + ".do-length.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-length","1")) + ".do-length.1.table", FULL);
relation* rel___dollorrule2__inter__body__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule2-inter-body","2"), std::to_string(get_tag_for_rel("$rule2-inter-body","2")) + ".$rule2-inter-body.2.table",   FULL);
relation* rel__nil__0__0 = new relation(1, false, 0, get_tag_for_rel("nil","0"), std::to_string(get_tag_for_rel("nil","0")) + ".nil.0.table",   FULL);
relation* rel___dollorrule1__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule1-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule1-inter-body1","1__2")) + ".$rule1-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body1","1__2")) + ".$rule1-inter-body1.2.table", FULL);
relation* rel___dollorrule2__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule2-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule2-inter-body","1__2")) + ".$rule2-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule2-inter-body","1__2")) + ".$rule2-inter-body.2.table", FULL);
relation* rel__length__2__2 = new relation(1, false, 2, get_tag_for_rel("length","2"), std::to_string(get_tag_for_rel("length","2")) + ".length.2.table",   FULL);
relation* rel___dollorhead__stratified__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$head-stratified","3__4"), std::to_string(get_tag_for_rel("$head-stratified","3__4")) + ".$head-stratified.4.table",   FULL);
relation* rel___dollorhead__stratified1__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified1","2__3"), std::to_string(get_tag_for_rel("$head-stratified1","2__3")) + ".$head-stratified1.3.table",   FULL);
relation* rel___dollorhead__stratified__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified","1__2__3__4")) + ".$head-stratified.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified","1__2__3__4")) + ".$head-stratified.4.table", FULL);
relation* rel___dollorinter__head1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head1","1__2"), std::to_string(get_tag_for_rel("$inter-head1","1__2")) + ".$inter-head1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head1","1__2")) + ".$inter-head1.2.table", FULL);
relation* rel___dollorrule1__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule1-inter-body","1"), std::to_string(get_tag_for_rel("$rule1-inter-body","1")) + ".$rule1-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body","1")) + ".$rule1-inter-body.1.table", FULL);
relation* rel__length__2__1__2 = new relation(2, true, 2, get_tag_for_rel("length","1__2"), std::to_string(get_tag_for_rel("length","1__2")) + ".length.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("length","1__2")) + ".length.2.table", FULL);
relation* rel___dollorinter__head__3__ = new relation(0, false, 3, get_tag_for_rel("$inter-head",""), std::to_string(get_tag_for_rel("$inter-head","")) + ".$inter-head.3.table",   FULL);
relation* rel___dollorrule4__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule4-inter-body","1"), std::to_string(get_tag_for_rel("$rule4-inter-body","1")) + ".$rule4-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule4-inter-body","1")) + ".$rule4-inter-body.1.table", FULL);
relation* rel__list__2__0 = new relation(1, false, 2, get_tag_for_rel("list","0"), std::to_string(get_tag_for_rel("list","0")) + ".list.2.table",   FULL);
relation* rel___dollorbir__sub1__1__1 = new relation(1, true, 1, get_tag_for_rel("$bir-sub1","1"), std::to_string(get_tag_for_rel("$bir-sub1","1")) + ".$bir-sub1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub1","1")) + ".$bir-sub1.1.table", FULL);

RAM* scc0 = new RAM(false, 0);
scc0->add_relation(rel___dollorunit__1__1, true, false);
scc0->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc1 = new RAM(false, 1);
scc1->add_relation(rel___dollorunit__1__1, true, false);
scc1->add_relation(rel___dollorunit__1__, true, false);
scc1->add_rule(new parallel_acopy(rel___dollorunit__1__, rel___dollorunit__1__1, DELTA, {1, 0}));

RAM* scc2 = new RAM(false, 2);
scc2->add_relation(rel___dollorunit__1__, false, true);
scc2->add_relation(rel___dollorrule1__inter__body__1__1, true, false);
scc2->add_rule(new parallel_copy_generate(rel___dollorrule1__inter__body__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(2)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = res_0;
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));

RAM* scc3 = new RAM(false, 3);
scc3->add_relation(rel___dollorrule1__inter__body__1__, true, false);
scc3->add_relation(rel___dollorrule1__inter__body__1__1, true, false);
scc3->add_rule(new parallel_acopy(rel___dollorrule1__inter__body__1__, rel___dollorrule1__inter__body__1__1, DELTA, {1, 0}));

RAM* scc4 = new RAM(false, 4);
scc4->add_relation(rel___dollorrule1__inter__body__1__, false, true);
scc4->add_relation(rel___dollorrule1__inter__body1__2__1__2, true, false);
scc4->add_rule(new parallel_copy_generate(rel___dollorrule1__inter__body1__2__1__2, rel___dollorrule1__inter__body__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(1)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = res_0;
head_tuple[1] = data[1];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));

RAM* scc5 = new RAM(false, 5);
scc5->add_relation(rel___dollorrule1__inter__body1__2__, true, false);
scc5->add_relation(rel___dollorrule1__inter__body1__2__1__2, true, false);
scc5->add_rule(new parallel_acopy(rel___dollorrule1__inter__body1__2__, rel___dollorrule1__inter__body1__2__1__2, DELTA, {2, 0, 1}));

RAM* scc6 = new RAM(false, 6);
scc6->add_relation(rel___dollorrule1__inter__body1__2__, false, true);
scc6->add_relation(rel___dollorinter__head__3__1__2__3, true, false);
scc6->add_rule(new parallel_copy_generate(rel___dollorinter__head__3__1__2__3, rel___dollorrule1__inter__body1__2__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(3)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = res_0;
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));

RAM* scc7 = new RAM(false, 7);
scc7->add_relation(rel___dollorinter__head__3__1__2__3, false, false);
scc7->add_relation(rel__nil__0__, true, false);
scc7->add_rule(new parallel_copy(rel__nil__0__, rel___dollorinter__head__3__1__2__3, FULL, {}));

RAM* scc8 = new RAM(false, 8);
scc8->add_relation(rel__nil__0__, true, false);
scc8->add_relation(rel__nil__0__0, true, false);
scc8->add_rule(new parallel_acopy(rel__nil__0__0, rel__nil__0__, DELTA, {0}));

RAM* scc9 = new RAM(false, 9);
scc9->add_relation(rel___dollorinter__head__3__1__2__3, true, false);
scc9->add_relation(rel___dollorinter__head__3__, true, false);
scc9->add_rule(new parallel_acopy(rel___dollorinter__head__3__, rel___dollorinter__head__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc10 = new RAM(false, 10);
scc10->add_relation(rel__nil__0__, false, false);
scc10->add_relation(rel___dollorhead__stratified__4__1__2__3__4, true, false);
scc10->add_relation(rel___dollorinter__head__3__, false, false);
scc10->add_rule(new parallel_join(rel___dollorhead__stratified__4__1__2__3__4, rel__nil__0__, FULL, rel___dollorinter__head__3__, FULL, {2, 3, 4, 0}));

RAM* scc11 = new RAM(false, 11);
scc11->add_relation(rel__list__2__1__2, true, false);
scc11->add_relation(rel___dollorhead__stratified__4__1__2__3__4, false, false);
scc11->add_rule(new parallel_copy(rel__list__2__1__2, rel___dollorhead__stratified__4__1__2__3__4, FULL, {2, 3}));

RAM* scc12 = new RAM(false, 12);
scc12->add_relation(rel___dollorhead__stratified__4__3__4, true, false);
scc12->add_relation(rel___dollorhead__stratified__4__1__2__3__4, true, false);
scc12->add_rule(new parallel_acopy(rel___dollorhead__stratified__4__3__4, rel___dollorhead__stratified__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));

RAM* scc13 = new RAM(true, 13);
scc13->add_relation(rel___dollorhead__stratified2__2__1__2, true, false);
scc13->add_relation(rel___dollorhead__stratified1__3__1__2__3, true, true);
scc13->add_relation(rel___dollorhead__stratified__4__3__4, false, false);
scc13->add_relation(rel___dollorhead__stratified1__3__2__3, true, true);
scc13->add_relation(rel__list__2__1__2, true, false);
scc13->add_rule(new parallel_join(rel___dollorhead__stratified2__2__1__2, rel__list__2__1__2, DELTA, rel___dollorhead__stratified1__3__2__3, FULL, {4, 2}));
scc13->add_rule(new parallel_join(rel___dollorhead__stratified2__2__1__2, rel__list__2__1__2, DELTA, rel___dollorhead__stratified1__3__2__3, DELTA, {4, 2}));
scc13->add_rule(new parallel_acopy(rel___dollorhead__stratified1__3__2__3, rel___dollorhead__stratified1__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc13->add_rule(new parallel_copy(rel__list__2__1__2, rel___dollorhead__stratified2__2__1__2, DELTA, {0, 1}));
scc13->add_rule(new parallel_join(rel___dollorhead__stratified2__2__1__2, rel__list__2__1__2, FULL, rel___dollorhead__stratified1__3__2__3, DELTA, {4, 2}));
scc13->add_rule(new parallel_join(rel___dollorhead__stratified1__3__1__2__3, rel__list__2__1__2, DELTA, rel___dollorhead__stratified__4__3__4, FULL, {4, 5, 2}));
scc13->add_rule(new parallel_copy(rel__list__2__1__2, rel___dollorhead__stratified1__3__1__2__3, DELTA, {1, 2}));

RAM* scc14 = new RAM(false, 14);
scc14->add_relation(rel___dollorhead__stratified2__2__1__2, false, true);
scc14->add_relation(rel__input__list__1__1, true, false);
scc14->add_relation(rel__list__2__1__2, false, false);
scc14->add_rule(new parallel_join(rel__input__list__1__1, rel___dollorhead__stratified2__2__1__2, FULL, rel__list__2__1__2, FULL, {3}));

RAM* scc15 = new RAM(false, 15);
scc15->add_relation(rel__input__list__1__1, false, false);
scc15->add_relation(rel__do__length__1__1, true, false);
scc15->add_rule(new parallel_copy(rel__do__length__1__1, rel__input__list__1__1, FULL, {0}));

RAM* scc16 = new RAM(false, 16);
scc16->add_relation(rel__list__2__0, true, false);
scc16->add_relation(rel__list__2__1__2, true, false);
scc16->add_rule(new parallel_acopy(rel__list__2__0, rel__list__2__1__2, DELTA, {2, 0, 1}));

RAM* scc17 = new RAM(true, 17);
scc17->add_relation(rel__list__2__0, false, false);
scc17->add_relation(rel__do__length__1__1, true, false);
scc17->add_relation(rel___dollorinter__head1__2__1__2, true, false);
scc17->add_rule(new parallel_copy(rel__do__length__1__1, rel___dollorinter__head1__2__1__2, DELTA, {0}));
scc17->add_rule(new parallel_join(rel___dollorinter__head1__2__1__2, rel__do__length__1__1, DELTA, rel__list__2__0, FULL, {3, 1}));

RAM* scc18 = new RAM(false, 18);
scc18->add_relation(rel__do__length__1__1, false, false);
scc18->add_relation(rel__nil__0__0, false, false);
scc18->add_relation(rel___dollorrule4__inter__body__1__1, true, false);
scc18->add_rule(new parallel_join(rel___dollorrule4__inter__body__1__1, rel__nil__0__0, FULL, rel__do__length__1__1, FULL, {1}));

RAM* scc19 = new RAM(false, 19);
scc19->add_relation(rel___dollorrule4__inter__body__1__, true, false);
scc19->add_relation(rel___dollorrule4__inter__body__1__1, true, false);
scc19->add_rule(new parallel_acopy(rel___dollorrule4__inter__body__1__, rel___dollorrule4__inter__body__1__1, DELTA, {1, 0}));

RAM* scc20 = new RAM(false, 20);
scc20->add_relation(rel___dollorrule4__inter__body__1__, false, true);
scc20->add_relation(rel__length__2__1__2, true, false);
scc20->add_rule(new parallel_copy_generate(rel__length__2__1__2, rel___dollorrule4__inter__body__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(10)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = res_0;
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));

RAM* scc21 = new RAM(false, 21);
scc21->add_relation(rel__input__list__1__1, false, false);
scc21->add_relation(rel__do__length__1__1, false, false);
scc21->add_relation(rel___dollorbir__sub1__1__1, true, false);
scc21->add_rule(new parallel_join(rel___dollorbir__sub1__1__1, rel__input__list__1__1, FULL, rel__do__length__1__1, FULL, {2}));

RAM* scc22 = new RAM(false, 22);
scc22->add_relation(rel___dollorinter__head1__2__1, true, false);
scc22->add_relation(rel___dollorinter__head1__2__1__2, true, false);
scc22->add_rule(new parallel_acopy(rel___dollorinter__head1__2__1, rel___dollorinter__head1__2__1__2, DELTA, {0, 2, 1}));

RAM* scc23 = new RAM(false, 23);
scc23->add_relation(rel___dollorinter__head1__2__1, false, true);
scc23->add_relation(rel___dollorbir__sub__2__1__2, true, false);
scc23->add_relation(rel__do__length__1__1, false, false);
scc23->add_rule(new parallel_join(rel___dollorbir__sub__2__1__2, rel__do__length__1__1, FULL, rel___dollorinter__head1__2__1, FULL, {1, 3}));

RAM* scc24 = new RAM(false, 24);
scc24->add_relation(rel___dollorbir__sub__2__1__2, true, false);
scc24->add_relation(rel___dollorbir__sub__2__1, true, false);
scc24->add_rule(new parallel_acopy(rel___dollorbir__sub__2__1, rel___dollorbir__sub__2__1__2, DELTA, {0, 2, 1}));

RAM* scc25 = new RAM(true, 25);
scc25->add_relation(rel___dollorrule2__inter__body__2__2, true, true);
scc25->add_relation(rel___dollorrule2__inter__body__2__1__2, true, true);
scc25->add_relation(rel___dollorbir__sub__2__1, false, true);
scc25->add_relation(rel__length__2__2, true, false);
scc25->add_relation(rel__length__2__1__2, true, false);
scc25->add_rule(new parallel_acopy(rel__length__2__2, rel__length__2__1__2, DELTA, {1, 2, 0}));
scc25->add_rule(new parallel_acopy(rel___dollorrule2__inter__body__2__2, rel___dollorrule2__inter__body__2__1__2, DELTA, {1, 2, 0}));
scc25->add_rule(new parallel_join(rel__length__2__1__2, rel___dollorrule2__inter__body__2__2, DELTA, rel___dollorbir__sub__2__1, FULL, {4, 2}));
scc25->add_rule(new parallel_copy_generate(rel___dollorrule2__inter__body__2__1__2, rel__length__2__2, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[0], n2d(1)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = res_0;
head_tuple[1] = data[2];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_add<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));

RAM* scc26 = new RAM(false, 26);
scc26->add_relation(rel__length__2__1, true, false);
scc26->add_relation(rel__length__2__1__2, true, false);
scc26->add_rule(new parallel_acopy(rel__length__2__1, rel__length__2__1__2, DELTA, {0, 2, 1}));

RAM* scc27 = new RAM(false, 27);
scc27->add_relation(rel__length__2__1, false, false);
scc27->add_relation(rel__print__length__res__1__1, true, false);
scc27->add_relation(rel___dollorbir__sub1__1__1, false, true);
scc27->add_rule(new parallel_join(rel__print__length__res__1__1, rel___dollorbir__sub1__1__1, FULL, rel__length__2__1, FULL, {3}));

LIE* lie = new LIE();
lie->add_relation(rel___dollorhead__stratified2__2__1__2);
lie->add_relation(rel__input__list__1__1);
lie->add_relation(rel___dollorinter__head1__2__1);
lie->add_relation(rel___dollorrule1__inter__body1__2__);
lie->add_relation(rel___dollorunit__1__1);
lie->add_relation(rel___dollorhead__stratified1__3__1__2__3);
lie->add_relation(rel___dollorrule4__inter__body__1__);
lie->add_relation(rel__length__2__1);
lie->add_relation(rel___dollorunit__1__);
lie->add_relation(rel___dollorbir__sub__2__1__2);
lie->add_relation(rel___dollorrule1__inter__body__1__);
lie->add_relation(rel___dollorinter__head__3__1__2__3);
lie->add_relation(rel__list__2__1__2);
lie->add_relation(rel___dollorbir__sub__2__1);
lie->add_relation(rel__print__length__res__1__1);
lie->add_relation(rel__nil__0__);
lie->add_relation(rel__do__length__1__1);
lie->add_relation(rel___dollorrule2__inter__body__2__2);
lie->add_relation(rel__nil__0__0);
lie->add_relation(rel___dollorrule1__inter__body1__2__1__2);
lie->add_relation(rel___dollorrule2__inter__body__2__1__2);
lie->add_relation(rel__length__2__2);
lie->add_relation(rel___dollorhead__stratified__4__3__4);
lie->add_relation(rel___dollorhead__stratified1__3__2__3);
lie->add_relation(rel___dollorhead__stratified__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head1__2__1__2);
lie->add_relation(rel___dollorrule1__inter__body__1__1);
lie->add_relation(rel__length__2__1__2);
lie->add_relation(rel___dollorinter__head__3__);
lie->add_relation(rel___dollorrule4__inter__body__1__1);
lie->add_relation(rel__list__2__0);
lie->add_relation(rel___dollorbir__sub1__1__1);
lie->add_scc(scc0);
lie->add_scc(scc1);
lie->add_scc(scc2);
lie->add_scc(scc3);
lie->add_scc(scc4);
lie->add_scc(scc5);
lie->add_scc(scc6);
lie->add_scc(scc7);
lie->add_scc(scc8);
lie->add_scc(scc9);
lie->add_scc(scc10);
lie->add_scc(scc11);
lie->add_scc(scc12);
lie->add_scc(scc13);
lie->add_scc(scc14);
lie->add_scc(scc15);
lie->add_scc(scc16);
lie->add_scc(scc17);
lie->add_scc(scc18);
lie->add_scc(scc19);
lie->add_scc(scc20);
lie->add_scc(scc21);
lie->add_scc(scc22);
lie->add_scc(scc23);
lie->add_scc(scc24);
lie->add_scc(scc25);
lie->add_scc(scc26);
lie->add_scc(scc27);
lie->add_scc_dependance(scc12, scc13);
lie->add_scc_dependance(scc13, scc14);
lie->add_scc_dependance(scc13, scc16);
lie->add_scc_dependance(scc14, scc15);
lie->add_scc_dependance(scc14, scc21);
lie->add_scc_dependance(scc15, scc23);
lie->add_scc_dependance(scc15, scc21);
lie->add_scc_dependance(scc15, scc18);
lie->add_scc_dependance(scc15, scc17);
lie->add_scc_dependance(scc0, scc1);
lie->add_scc_dependance(scc16, scc17);
lie->add_scc_dependance(scc1, scc2);
lie->add_scc_dependance(scc17, scc23);
lie->add_scc_dependance(scc17, scc22);
lie->add_scc_dependance(scc17, scc21);
lie->add_scc_dependance(scc17, scc18);
lie->add_scc_dependance(scc2, scc3);
lie->add_scc_dependance(scc18, scc19);
lie->add_scc_dependance(scc3, scc4);
lie->add_scc_dependance(scc19, scc20);
lie->add_scc_dependance(scc4, scc5);
lie->add_scc_dependance(scc20, scc26);
lie->add_scc_dependance(scc20, scc25);
lie->add_scc_dependance(scc5, scc6);
lie->add_scc_dependance(scc21, scc27);
lie->add_scc_dependance(scc6, scc9);
lie->add_scc_dependance(scc6, scc7);
lie->add_scc_dependance(scc22, scc23);
lie->add_scc_dependance(scc7, scc10);
lie->add_scc_dependance(scc7, scc8);
lie->add_scc_dependance(scc23, scc24);
lie->add_scc_dependance(scc8, scc18);
lie->add_scc_dependance(scc24, scc25);
lie->add_scc_dependance(scc9, scc10);
lie->add_scc_dependance(scc25, scc26);
lie->add_scc_dependance(scc10, scc12);
lie->add_scc_dependance(scc10, scc11);
lie->add_scc_dependance(scc26, scc27);
lie->add_scc_dependance(scc11, scc14);
lie->add_scc_dependance(scc11, scc13);
lie->add_scc_dependance(scc11, scc16);



  
  // Enable IO
  lie->enable_data_IO();
  // lie->enable_share_io();
  lie->enable_IO();
  // lie->enable_share_io();
  lie->set_output_dir(slog_output_dir); // Write to this directory
  lie->set_comm(mcomm);
  lie->set_batch_size(1);
  lie->execute();
  lie->print_all_relation_size(); // Continuously print relation sizes 
  lie->stat_intermediate();

  // print all variants(non-canonical index of each relation)
  if (mcomm.get_rank() == 0)
  {
    std::cout << "rel_name" << ",\t" << "indices\n"; 
    for (auto const& rel_p : rel_index_map) {
      std::cout << rel_p.first << ",\t" << rel_p.second.size() << "\n";
    }
    std::cout << std::endl;
  }

  // lie->print_all_relation_size(); // Continuously print relation sizes

  delete lie;

  mcomm.destroy();

  return 0;
}